#include <array>
#include <cassert>
#include <iostream>
#include "infra/Assert.hpp"                        // for TR_ASSERT

template <typename T, std::size_t N>
struct my_array : std::array<T,N> {
 T& operator[](std::size_t n) {
   TR_ASSERT(n < N, "Array index out of bounds!");
   return (*static_cast<std::array<T,N>*>(this))[n];
 }
 const T& operator[](std::size_t n) const {
   TR_ASSERT(n < N, "Array index out of bounds!");
   return (*static_cast<const std::array<T,N>*>(this))[n];
 }
};