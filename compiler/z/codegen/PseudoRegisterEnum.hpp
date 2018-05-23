/*******************************************************************************
 * Copyright (c) 2000, 2018 IBM Corp. and others
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
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

/*
 * This file will be included within an enum.  Only comments and enumerator
 * definitions are permitted.
 */

      EvenOddPair         = LastHPR + 1,      // Assign an even/odd pair to the reg pair
      LegalEvenOfPair     = LastHPR + 2,      // Assign an even reg that is followed by an unlocked odd register
      LegalOddOfPair      = LastHPR + 3,      // Assign an odd reg that is preceded by an unlocked even register
      FPPair              = LastHPR + 4,      // Assign an FP pair to the reg pair
      LegalFirstOfFPPair  = LastHPR + 5,      // Assign first FP reg of a FP reg Pair
      LegalSecondOfFPPair = LastHPR + 6,      // Assign second FP reg of a FP reg Pair
      AssignAny           = LastHPR + 7,      // Assign any register
      KillVolAccessRegs   = LastHPR + 8,      // Kill all volatile access regs
      KillVolHighRegs     = LastHPR + 9,      // Kill all volatile access regs
      MayDefine           = LastHPR + 10,     // This instruction's result should be modelled as live before as this instruction only 'may defines' the register
      SpilledReg          = LastHPR + 11,     // OOL: Any Spilled register cross OOL sequences
      ArGprPair           = LastHPR + 12,     // Assign an ar/gpr pair to the reg pair
      ArOfArGprPair       = LastHPR + 13,     // Assign AR register corresponding to GPR in the second RA pass
      GprOfArGprPair      = LastHPR + 14,     // Assign GPR register in the first RA pass

      NumRegisters        = LastHPR + 1    // (include noReg)

