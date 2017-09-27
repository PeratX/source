

signed int __fastcall EnderChestBlock::getResourceCount(EnderChestBlock *this, Random *a2, int a3, int a4)
{
  return 8;
}


int __fastcall EnderChestBlock::animateTick(EnderChestBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v8; // r4@1
  signed int v10; // r10@1
  unsigned int v11; // r7@2
  unsigned int v12; // r6@2
  unsigned int v15; // r0@2
  int v21; // r0@2
  int result; // r0@2
  BlockSource *v23; // [sp+Ch] [bp-84h]@1
  float v24; // [sp+1Ch] [bp-74h]@2

  __asm
  {
    VMOV.F32        S16, #0.25
    VLDR            D9, =2.32830644e-10
    VMOV.F32        S20, #0.5
  }
  v8 = a4;
  __asm { VMOV.F32        S22, #-0.5 }
  _R11 = a3;
  __asm { VMOV.F32        S24, #0.125 }
  v10 = 30;
  v23 = a2;
  do
    v11 = Random::_genRandInt32(v8);
    v12 = Random::_genRandInt32(v8);
    _R5 = Random::_genRandInt32(v8);
    _R8 = Random::_genRandInt32(v8);
    v15 = Random::_genRandInt32(v8);
    __asm { VLDR            S0, [R11] }
    _R9 = v15;
    __asm
    {
      VLDR            S2, [R11,#4]
      VCVT.F32.S32    S26, S2
      VCVT.F32.S32    S28, S0
      VMOV            S0, R8
      VCVT.F64.U32    D15, S0
    }
    _R0 = Random::_genRandInt32(v8);
      VMOV            S0, R0
      VMOV            S2, R5
      VCVT.F64.U32    D0, S0
    _R0 = (2 * v11 & 2) - 1;
    __asm { VMOV            S4, R0 }
    _R0 = (2 * v12 & 2) - 1;
      VCVT.F64.U32    D1, S2
      VMOV            S6, R0
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VMOV            S8, R9
      VMUL.F64        D0, D0, D9
      VCVT.F64.U32    D4, S8
    _R0 = *((_DWORD *)_R11 + 2);
      VMUL.F64        D5, D15, D9
      VMUL.F32        S12, S4, S16
      VMUL.F32        S14, S6, S16
      VMUL.F64        D1, D1, D9
      VMUL.F64        D4, D4, D9
      VCVT.F32.F64    S0, D0
      VMOV            S1, R0
      VCVT.F32.F64    S10, D5
      VADD.F32        S12, S12, S20
      VCVT.F32.S32    S1, S1
      VADD.F32        S14, S14, S20
      VCVT.F32.F64    S8, D4
      VADD.F32        S12, S12, S28
      VADD.F32        S10, S10, S22
      VCVT.F32.F64    S2, D1
      VADD.F32        S0, S0, S26
      VSTR            S12, [SP,#0x90+var_74]
      VADD.F32        S14, S14, S1
      VMUL.F32        S26, S2, S4
      VMUL.F32        S28, S10, S24
      VMUL.F32        S30, S8, S6
      VSTR            S0, [SP,#0x90+var_70]
      VSTR            S14, [SP,#0x90+var_6C]
    v21 = BlockSource::getLevel(v23);
      VSTR            S26, [SP,#0x90+var_80]
      VSTR            S28, [SP,#0x90+var_7C]
      VSTR            S30, [SP,#0x90+var_78]
    result = Level::addParticle(v21, 20, (int)&v24);
    --v10;
  while ( v10 );
  return result;
}


void __fastcall EnderChestBlock::~EnderChestBlock(EnderChestBlock *this)
{
  EnderChestBlock::~EnderChestBlock(this);
}


int __fastcall EnderChestBlock::EnderChestBlock(int a1, const void **a2, char a3)
{
  int result; // r0@1

  result = ChestBlock::ChestBlock(a1, a2, a3, 2, 3);
  *(_DWORD *)result = &loc_2708524;
  *(_DWORD *)(result + 24) = 0x1000000;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 23;
  return result;
}


signed int __fastcall EnderChestBlock::canBeSilkTouched(EnderChestBlock *this)
{
  return 1;
}


void __fastcall EnderChestBlock::~EnderChestBlock(EnderChestBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
