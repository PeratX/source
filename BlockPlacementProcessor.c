

int __fastcall BlockPlacementProcessor::BlockPlacementProcessor(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r9@1
  unsigned int v4; // r0@1
  int v5; // r6@1
  signed int v6; // r2@1
  signed int v7; // r1@1
  int v8; // r0@2
  int v9; // r3@2
  unsigned int v10; // r5@3
  unsigned int v11; // r0@4
  signed int v12; // r2@4
  int *v13; // r1@4
  signed int v14; // r3@4
  int v15; // r0@5
  int v16; // r5@5
  signed int v17; // r1@7
  signed int v18; // r0@7
  int v19; // r2@8
  unsigned int v21; // [sp+0h] [bp-9F0h]@4
  unsigned int v22; // [sp+4h] [bp-9ECh]@4
  int v23; // [sp+8h] [bp-9E8h]@4
  int v24; // [sp+9C4h] [bp-2Ch]@4
  char v25; // [sp+9C8h] [bp-28h]@4
  int v26; // [sp+9CCh] [bp-24h]@4
  int v27; // [sp+9D0h] [bp-20h]@6

  v2 = a1;
  v3 = a2;
  v4 = sub_21E67AC((int)&Random::mRandomDevice);
  *(_DWORD *)(v2 + 4) = v4;
  v5 = v2 + 4;
  v6 = 3;
  *(_DWORD *)(v5 + 2500) = 625;
  *(_BYTE *)(v5 + 2504) = 0;
  *(_DWORD *)(v5 + 2508) = 0;
  v7 = 1;
  *(_DWORD *)(v5 + 4) = v4;
  do
  {
    v8 = v4 ^ (v4 >> 30);
    v9 = v6 + 1812433253 * v8;
    v4 = v7++ + 1812433253 * v8;
    *(_DWORD *)(v2 + 4 * v6++) = v9 - 2;
  }
  while ( v6 != 400 );
  *(_DWORD *)(v2 + 2504) = 624;
  *(_DWORD *)(v2 + 2516) = 398;
  *(_DWORD *)v2 = *(_DWORD *)v3;
  v10 = *(_DWORD *)(v3 + 4);
  if ( !v10 )
    v11 = sub_21E67AC((int)&Random::mRandomDevice);
    v21 = v11;
    v24 = 625;
    v25 = 0;
    v12 = 1;
    v26 = 0;
    v13 = &v23;
    v14 = -397;
    v22 = v11;
    do
    {
      v15 = v11 ^ (v11 >> 30);
      v16 = v14++ + 1812433253 * v15;
      v11 = v12++ + 1812433253 * v15;
      *v13 = v16 + 398;
      ++v13;
    }
    while ( v14 );
    v24 = 624;
    v27 = 398;
    j___aeabi_memcpy4(v2 + 4, (int)&v21, 2516);
    v10 = *(_DWORD *)(v3 + 4);
  j_Random::_checkThreadId((Random *)(v2 + 4));
  *(_DWORD *)(v2 + 4) = v10;
  *(_DWORD *)(v2 + 2504) = 625;
  *(_BYTE *)(v2 + 2508) = 0;
  v17 = 3;
  *(_DWORD *)(v2 + 2512) = 0;
  v18 = 1;
  *(_DWORD *)(v2 + 8) = v10;
    v19 = v10 ^ (v10 >> 30);
    v10 = v18++ + 1812433253 * v19;
    *(_DWORD *)(v2 + 4 * v17) = v17 + 1812433253 * v19 - 2;
    ++v17;
  while ( v17 != 400 );
  return v2;
}


signed int __fastcall BlockPlacementProcessor::canPlace(BlockPlacementProcessor *this)
{
  signed int result; // r0@2

  __asm { VMOV.F32        S0, #1.0 }
  _R4 = this;
  __asm
  {
    VLDR            S2, [R4]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    _R0 = j_Random::_genRandInt32((BlockPlacementProcessor *)((char *)this + 4));
    __asm
    {
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
    }
    result = 0;
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VLDR            S2, [R4]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      result = 1;
  else
    result = 1;
  return result;
}
