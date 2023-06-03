/*******************************************************************************
 * Copyright IBM Corp. and others 2023
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at http://eclipse.org/legal/epl-2.0
 * or the Apache License, Version 2.0 which accompanies this distribution
 * and is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following Secondary
 * Licenses when the conditions for such availability set forth in the
 * Eclipse Public License, v. 2.0 are satisfied: GNU General Public License,
 * version 2 with the GNU Classpath Exception [1] and GNU General Public
 * License, version 2 with the OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] https://openjdk.org/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0-only WITH Classpath-exception-2.0 OR GPL-2.0-only WITH OpenJDK-assembly-exception-1.0
 *******************************************************************************/

#ifndef TR_MAP_HPP
#define TR_MAP_HPP

#pragma once

#include <map>
#include "env/TypedAllocator.hpp"
#include "env/TRMemory.hpp"

namespace TR {

template<typename K, typename V, typename Cmp = std::less<K>, class Alloc = TR::Region&>
class map : public std::map<K, V, Cmp, TR::typed_allocator<std::pair<const K, V>, Alloc> >
   {
   public:
   typedef TR::typed_allocator<std::pair<const K, V>, Alloc> allocator_type;

   private:
   typedef std::map<K, V, Cmp, allocator_type> Base;

   public:
   map() : Base() {}
   map(const Cmp &cmp) : Base(cmp) {}
   map(const allocator_type &alloc) : Base(alloc) {}
   map(const Cmp &cmp, const allocator_type &alloc) : Base(cmp, alloc) {}
   map(const map &other) : Base(other) {}
   };

} // namespace TR

#endif // TR_MAP_HPP
