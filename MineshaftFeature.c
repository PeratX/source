

signed int __fastcall MineshaftFeature::isFeatureChunk(MineshaftFeature *this, BiomeSource *a2, Random *a3, const ChunkPos *a4)
{
  Random *v4; // r5@1
  const ChunkPos *v5; // r8@1
  __int64 v6; // kr00_8@1
  int v7; // r6@1
  unsigned int v8; // r0@1
  signed int v9; // r2@1
  int v10; // r1@1
  int v11; // r0@2
  int v12; // r6@2
  int v13; // r7@2
  unsigned int v19; // r0@3
  int v20; // r1@5
  int v21; // r3@5
  signed int v22; // r2@11
  signed int result; // r0@4

  v4 = a3;
  v5 = a4;
  v6 = *(_QWORD *)a4;
  v7 = *((_DWORD *)a2 + 12);
  j_Random::_checkThreadId(a3);
  v8 = HIDWORD(v6) ^ v6 ^ v7;
  *(_DWORD *)v4 = v8;
  v9 = 1;
  *((_DWORD *)v4 + 625) = 625;
  v10 = 0;
  *((_BYTE *)v4 + 2504) = 0;
  *((_DWORD *)v4 + 627) = 0;
  *((_DWORD *)v4 + 1) = v8;
  do
  {
    v11 = v8 ^ (v8 >> 30);
    v12 = (int)v4 + 4 * v10;
    v13 = v10++ + 1812433253 * v11;
    v8 = v9++ + 1812433253 * v11;
    *(_DWORD *)(v12 + 8) = v13 + 1;
  }
  while ( v10 != 397 );
  *((_DWORD *)v4 + 625) = 624;
  *((_DWORD *)v4 + 628) = 398;
  j_Random::_genRandInt32(v4);
  _R0 = j_Random::_genRandInt32(v4);
  __asm
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S16, D0
  v19 = j_Random::_genRandInt32(v4);
    VLDR            S0, =0.004
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    v21 = *(_QWORD *)v5 >> 32;
    v20 = *(_QWORD *)v5;
    if ( v21 < 0 )
      v21 = -v21;
    if ( v20 < 0 )
      v20 = -v20;
    if ( v20 < v21 )
      v20 = v21;
    v22 = v19 % 0x50;
    result = 0;
    if ( v22 < v20 )
      result = 1;
  else
  return result;
}


int __fastcall MineshaftFeature::getFeatureName(int result)
{
  *(_DWORD *)result = 9;
  *(_DWORD *)(result + 4) = "Mineshaft";
  return result;
}


void __fastcall MineshaftFeature::~MineshaftFeature(MineshaftFeature *this)
{
  MineshaftFeature::~MineshaftFeature(this);
}


int __fastcall MineshaftFeature::createStructureStart(MineshaftFeature *this, Dimension *a2, Random *a3, const ChunkPos *a4, ChunkPos *a5)
{
  MineshaftFeature *v5; // r4@1
  Random *v6; // r6@1
  Random *v7; // r7@1
  MineshaftStart *v8; // r5@1
  int result; // r0@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (MineshaftStart *)j_operator new(0x30u);
  result = j_MineshaftStart::MineshaftStart(v8, (Dimension *)v7, v6, a5);
  *(_DWORD *)v5 = v8;
  return result;
}


void __fastcall MineshaftFeature::~MineshaftFeature(MineshaftFeature *this)
{
  StructureFeature *v1; // r0@1

  v1 = j_StructureFeature::~StructureFeature(this);
  j_j_j__ZdlPv_7((void *)v1);
}
