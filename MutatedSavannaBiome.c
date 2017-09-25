

Random *__fastcall MutatedSavannaBiome::buildSurfaceAt(int a1, Random *this, int a3, int a4, float a5, int a6)
{
  int v6; // r7@1
  Random *v7; // r6@1
  int v12; // r4@1
  int v13; // r5@1
  int v14; // r0@1
  int v15; // r0@2
  BlockState *v16; // r0@4
  char v17; // r9@4
  signed int v18; // r10@4
  float v20; // [sp+0h] [bp-30h]@0

  v6 = a1;
  v7 = this;
  __asm
  {
    VMOV.F32        S0, #1.75
    VLDR            S16, [SP,#0x30+arg_0]
  }
  v12 = a4;
  v13 = a3;
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  *(_BYTE *)(a1 + 188) = *(_BYTE *)(Block::mGrass + 4);
  *(_BYTE *)(a1 + 189) = 0;
  v14 = Block::mDirt;
  *(_BYTE *)(v6 + 190) = *(_BYTE *)(Block::mDirt + 4);
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VMOV.F32        S0, #-0.5
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      *(_BYTE *)(v6 + 188) = *(_BYTE *)(v14 + 4);
      v16 = (BlockState *)j_Block::getBlockState(v14, 24);
      v17 = *(_BYTE *)(v6 + 189);
      v18 = 1 << (*(_QWORD *)v16 + 1 - (unsigned int)(*(_QWORD *)v16 >> 32));
      *(_BYTE *)(v6 + 189) = v17 & ~(unsigned __int8)j_BlockState::getMask(v16) | v18;
  else
    v15 = Block::mStone;
    *(_BYTE *)(v6 + 188) = *(_BYTE *)(Block::mStone + 4);
    *(_BYTE *)(v6 + 190) = *(_BYTE *)(v15 + 4);
  __asm { VSTR            S16, [SP,#0x30+var_30] }
  return j_Biome::buildSurfaceAtDefault(v6, v7, v13, v12, v20, a6);
}


int __fastcall MutatedSavannaBiome::MutatedSavannaBiome(int a1, int a2, int a3)
{
  int result; // r0@1
  int v4; // r1@1

  result = j_MutatedBiome::MutatedBiome(a1, a2, a3);
  *(_DWORD *)result = &off_2721BF0;
  v4 = *(_DWORD *)(result + 124) + 208;
  *(_DWORD *)v4 = 0x40000000;
  *(_DWORD *)(v4 + 4) = 2;
  *(_DWORD *)(v4 + 8) = 5;
  return result;
}


void __fastcall MutatedSavannaBiome::~MutatedSavannaBiome(MutatedSavannaBiome *this)
{
  MutatedSavannaBiome::~MutatedSavannaBiome(this);
}


void __fastcall MutatedSavannaBiome::~MutatedSavannaBiome(MutatedSavannaBiome *this)
{
  Biome *v1; // r0@1

  v1 = j_Biome::~Biome(this);
  j_j_j__ZdlPv_7((void *)v1);
}
