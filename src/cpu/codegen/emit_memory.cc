/*
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#include "cpu/codegen/emit.h"

#include <xenia/cpu/codegen/function_generator.h>


using namespace llvm;
using namespace xe::cpu::codegen;
using namespace xe::cpu::ppc;


namespace xe {
namespace cpu {
namespace codegen {


// Integer load (A-13)

XEEMITTER(lbz,          0x88000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lbzu,         0x8C000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lbzux,        0x7C0000EE, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lbzx,         0x7C0000AE, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(ld,           0xE8000000, DS )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(ldux,         0x7C00006A, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(ldx,          0x7C00002A, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lha,          0xA8000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lhau,         0xAC000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lhaux,        0x7C0002EE, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lhax,         0x7C0002AE, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lhz,          0xA0000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lhzu,         0xA4000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lhzux,        0x7C00026E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lhzx,         0x7C00022E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lwa,          0xE8000002, DS )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lwaux,        0x7C0002EA, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lwax,         0x7C0002AA, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lwz,          0x80000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lwzu,         0x84000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lwzux,        0x7C00006E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lwzx,         0x7C00002E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}


// Integer store (A-14)

XEEMITTER(stb,          0x98000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stbu,         0x9C000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stbux,        0x7C0001EE, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stbx,         0x7C0001AE, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(std,          0xF8000000, DS )(FunctionGenerator& g, InstrData& i) {
  //const uint64 b = r(instr.DS.A);
  //const uint64 EA = b + EXTS16(instr.DS.ds << 2);
  //MEMSET64(EA, instr.DS.S);
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stdu,         0xF8000001, DS )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stdux,        0x7C00016A, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stdx,         0x7C00012A, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(sth,          0xB0000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(sthu,         0xB4000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(sthux,        0x7C00036E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(sthx,         0x7C00032E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stw,          0x90000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stwu,         0x94000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stwux,        0x7C00016E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stwx,         0x7C00012E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}


// Integer load and store with byte reverse (A-1

XEEMITTER(lhbrx,        0x7C00062C, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lwbrx,        0x7C00042C, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(ldbrx,        0x7C000428, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(sthbrx,       0x7C00072C, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stwbrx,       0x7C00052C, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stdbrx,       0x7C000528, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}


// Integer load and store multiple (A-16)

XEEMITTER(lmw,          0xB8000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stmw,         0xBC000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}


// Integer load and store string (A-17)

XEEMITTER(lswi,         0x7C0004AA, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lswx,         0x7C00042A, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stswi,        0x7C0005AA, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stswx,        0x7C00052A, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}


// Memory synchronization (A-18)

XEEMITTER(eieio,        0x7C0006AC, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(isync,        0x4C00012C, XL )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(ldarx,        0x7C0000A8, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lwarx,        0x7C000028, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stdcx,        0x7C0001AD, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stwcx,        0x7C00012D, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(sync,         0x7C0004AC, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}


// Floating-point load (A-19)

XEEMITTER(lfd,          0xC8000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lfdu,         0xCC000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lfdux,        0x7C0004EE, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lfdx,         0x7C0004AE, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lfs,          0xC0000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lfsu,         0xC4000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lfsux,        0x7C00046E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(lfsx,         0x7C00042E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}


// Floating-point store (A-20)

XEEMITTER(stfd,         0xD8000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stfdu,        0xDC000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stfdux,       0x7C0005EE, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stfdx,        0x7C0005AE, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stfiwx,       0x7C0007AE, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stfs,         0xD0000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stfsu,        0xD4000000, D  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stfsux,       0x7C00056E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(stfsx,        0x7C00052E, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}


// Cache management (A-27)

XEEMITTER(dcbf,         0x7C0000AC, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(dcbst,        0x7C00006C, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(dcbt,         0x7C00022C, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(dcbtst,       0x7C0001EC, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(dcbz,         0x7C0007EC, X  )(FunctionGenerator& g, InstrData& i) {
  // or dcbz128 0x7C2007EC
  XEINSTRNOTIMPLEMENTED();
  return 1;
}

XEEMITTER(icbi,         0x7C0007AC, X  )(FunctionGenerator& g, InstrData& i) {
  XEINSTRNOTIMPLEMENTED();
  return 1;
}


void RegisterEmitCategoryMemory() {
  XEREGISTEREMITTER(lbz,          0x88000000);
  XEREGISTEREMITTER(lbzu,         0x8C000000);
  XEREGISTEREMITTER(lbzux,        0x7C0000EE);
  XEREGISTEREMITTER(lbzx,         0x7C0000AE);
  XEREGISTEREMITTER(ld,           0xE8000000);
  XEREGISTEREMITTER(ldux,         0x7C00006A);
  XEREGISTEREMITTER(ldx,          0x7C00002A);
  XEREGISTEREMITTER(lha,          0xA8000000);
  XEREGISTEREMITTER(lhau,         0xAC000000);
  XEREGISTEREMITTER(lhaux,        0x7C0002EE);
  XEREGISTEREMITTER(lhax,         0x7C0002AE);
  XEREGISTEREMITTER(lhz,          0xA0000000);
  XEREGISTEREMITTER(lhzu,         0xA4000000);
  XEREGISTEREMITTER(lhzux,        0x7C00026E);
  XEREGISTEREMITTER(lhzx,         0x7C00022E);
  XEREGISTEREMITTER(lwa,          0xE8000002);
  XEREGISTEREMITTER(lwaux,        0x7C0002EA);
  XEREGISTEREMITTER(lwax,         0x7C0002AA);
  XEREGISTEREMITTER(lwz,          0x80000000);
  XEREGISTEREMITTER(lwzu,         0x84000000);
  XEREGISTEREMITTER(lwzux,        0x7C00006E);
  XEREGISTEREMITTER(lwzx,         0x7C00002E);
  XEREGISTEREMITTER(stb,          0x98000000);
  XEREGISTEREMITTER(stbu,         0x9C000000);
  XEREGISTEREMITTER(stbux,        0x7C0001EE);
  XEREGISTEREMITTER(stbx,         0x7C0001AE);
  XEREGISTEREMITTER(std,          0xF8000000);
  XEREGISTEREMITTER(stdu,         0xF8000001);
  XEREGISTEREMITTER(stdux,        0x7C00016A);
  XEREGISTEREMITTER(stdx,         0x7C00012A);
  XEREGISTEREMITTER(sth,          0xB0000000);
  XEREGISTEREMITTER(sthu,         0xB4000000);
  XEREGISTEREMITTER(sthux,        0x7C00036E);
  XEREGISTEREMITTER(sthx,         0x7C00032E);
  XEREGISTEREMITTER(stw,          0x90000000);
  XEREGISTEREMITTER(stwu,         0x94000000);
  XEREGISTEREMITTER(stwux,        0x7C00016E);
  XEREGISTEREMITTER(stwx,         0x7C00012E);
  XEREGISTEREMITTER(lhbrx,        0x7C00062C);
  XEREGISTEREMITTER(lwbrx,        0x7C00042C);
  XEREGISTEREMITTER(ldbrx,        0x7C000428);
  XEREGISTEREMITTER(sthbrx,       0x7C00072C);
  XEREGISTEREMITTER(stwbrx,       0x7C00052C);
  XEREGISTEREMITTER(stdbrx,       0x7C000528);
  XEREGISTEREMITTER(lmw,          0xB8000000);
  XEREGISTEREMITTER(stmw,         0xBC000000);
  XEREGISTEREMITTER(lswi,         0x7C0004AA);
  XEREGISTEREMITTER(lswx,         0x7C00042A);
  XEREGISTEREMITTER(stswi,        0x7C0005AA);
  XEREGISTEREMITTER(stswx,        0x7C00052A);
  XEREGISTEREMITTER(eieio,        0x7C0006AC);
  XEREGISTEREMITTER(isync,        0x4C00012C);
  XEREGISTEREMITTER(ldarx,        0x7C0000A8);
  XEREGISTEREMITTER(lwarx,        0x7C000028);
  XEREGISTEREMITTER(stdcx,        0x7C0001AD);
  XEREGISTEREMITTER(stwcx,        0x7C00012D);
  XEREGISTEREMITTER(sync,         0x7C0004AC);
  XEREGISTEREMITTER(lfd,          0xC8000000);
  XEREGISTEREMITTER(lfdu,         0xCC000000);
  XEREGISTEREMITTER(lfdux,        0x7C0004EE);
  XEREGISTEREMITTER(lfdx,         0x7C0004AE);
  XEREGISTEREMITTER(lfs,          0xC0000000);
  XEREGISTEREMITTER(lfsu,         0xC4000000);
  XEREGISTEREMITTER(lfsux,        0x7C00046E);
  XEREGISTEREMITTER(lfsx,         0x7C00042E);
  XEREGISTEREMITTER(stfd,         0xD8000000);
  XEREGISTEREMITTER(stfdu,        0xDC000000);
  XEREGISTEREMITTER(stfdux,       0x7C0005EE);
  XEREGISTEREMITTER(stfdx,        0x7C0005AE);
  XEREGISTEREMITTER(stfiwx,       0x7C0007AE);
  XEREGISTEREMITTER(stfs,         0xD0000000);
  XEREGISTEREMITTER(stfsu,        0xD4000000);
  XEREGISTEREMITTER(stfsux,       0x7C00056E);
  XEREGISTEREMITTER(stfsx,        0x7C00052E);
  XEREGISTEREMITTER(dcbf,         0x7C0000AC);
  XEREGISTEREMITTER(dcbst,        0x7C00006C);
  XEREGISTEREMITTER(dcbt,         0x7C00022C);
  XEREGISTEREMITTER(dcbtst,       0x7C0001EC);
  XEREGISTEREMITTER(dcbz,         0x7C0007EC);
  XEREGISTEREMITTER(icbi,         0x7C0007AC);
}


}  // namespace codegen
}  // namespace cpu
}  // namespace xe
