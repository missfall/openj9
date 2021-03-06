/*******************************************************************************
 * Copyright (c) 2002, 2014 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/
#define true 1
#define false 0
#include "floatsanityg.h"


   void group_java_lang_Math_abs_float() {
      int i=0, groupNum=28,numTests=33;
      int testsPassed=0, testsFailed=0;
      unsigned int op_0 [] = {
         0x0,
         0x80000000,
         0x7f800000,
         0xff800000,
         0x7f7fffff,
         0xff7fffff,
         0x1,
         0x80000001,
         0x7fc00000,
         0x3f800000,
         0xbf800000,
         0x40000000,
         0xc0000000,
         0x3f8ccccd,
         0xbf8ccccd,
         0x400ccccd,
         0xc00ccccd,
         0x42c80000,
         0xc2c80000,
         0x43480000,
         0xc3480000,
         0x3c23d70a,
         0xbc23d70a,
         0x447a0000,
         0xc47a0000,
         0x3ba3d70a,
         0xbba3d70a,
         0x38d1b717,
         0xb8d1b717,
         0x3951b717,
         0xb951b717,
         0x200000,
         0x80200000,
         0x0};
      unsigned int result [] = {
         0x0,
         0x0,
         0x7f800000,
         0x7f800000,
         0x7f7fffff,
         0x7f7fffff,
         0x1,
         0x1,
         0x7fc00000,
         0x3f800000,
         0x3f800000,
         0x40000000,
         0x40000000,
         0x3f8ccccd,
         0x3f8ccccd,
         0x400ccccd,
         0x400ccccd,
         0x42c80000,
         0x42c80000,
         0x43480000,
         0x43480000,
         0x3c23d70a,
         0x3c23d70a,
         0x447a0000,
         0x447a0000,
         0x3ba3d70a,
         0x3ba3d70a,
         0x38d1b717,
         0x38d1b717,
         0x3951b717,
         0x3951b717,
         0x200000,
         0x200000,
         0x0};
      float *p0=(float *) op_0;
      float *erp=(float*) result, r, *rp=&r;
      for (i=0; i<numTests; i++) {
         r = java_lang_Math_abs_float(*(p0));
         if ( IS_SNAN(erp)){
            if ( !(IS_SNAN(&r)) ){
               printf("%d.%d: op_0=0x%08x Expected=0x%08x Actual=0x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *(int *)erp, *(int *)&r);
               testsFailed++;
            } else {
               testsPassed++;
            }

         } else {
            if ( (FLWORD(&r) != FLWORD(erp)) ){
               printf("%d.%d: op_0=0x%08x Expected=0x%08x Actual=0x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *(int *)erp, *(int *)&r);
               testsFailed++;
            } else {
               testsPassed++;
            }
         }

         p0++;erp++;
      }
      printf("[%d] %s Passed %d Failed %d Total %d \n", groupNum,"java_lang_Math_abs_float", testsPassed, testsFailed, numTests);
      totalNumTest +=numTests; totalTestsPassed +=testsPassed; totalTestsFailed +=testsFailed;
   }

