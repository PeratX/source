

char *__fastcall PerlinNoise::_init(PerlinNoise *this, Random *a2)
{
  PerlinNoise *v2; // r6@1
  Random *v3; // r4@1
  unsigned int v4; // r1@1
  int v5; // r7@1
  char *result; // r0@1
  ImprovedNoise *v7; // r5@1
  ImprovedNoise *v8; // t1@1
  unsigned int v9; // r2@1

  v2 = this;
  v3 = a2;
  v4 = *(_DWORD *)this;
  v5 = *((_DWORD *)this + 3);
  v8 = (ImprovedNoise *)*((_DWORD *)this + 2);
  result = (char *)this + 8;
  v7 = v8;
  v9 = -1009108821 * ((v5 - (signed int)v8) >> 2);
  if ( v4 <= v9 )
  {
    if ( v4 < v9 )
    {
      result = (char *)2060;
      v5 = (int)v7 + 2060 * v4;
      *((_DWORD *)v2 + 3) = v5;
    }
  }
  else
    result = (char *)j_std::vector<ImprovedNoise,std::allocator<ImprovedNoise>>::_M_default_append((int)result, v4 - v9);
    v5 = *((_QWORD *)v2 + 1) >> 32;
    v7 = (ImprovedNoise *)*((_QWORD *)v2 + 1);
  for ( ; (ImprovedNoise *)v5 != v7; v7 = (ImprovedNoise *)((char *)v7 + 2060) )
    result = (char *)j_ImprovedNoise::_init(v7, v3);
  return result;
}


PerlinNoise *__fastcall PerlinNoise::~PerlinNoise(PerlinNoise *this)
{
  PerlinNoise *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 2);
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


int __fastcall PerlinNoise::PerlinNoise(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r6@1
  int v4; // r8@1
  unsigned int v5; // r0@1
  signed int v6; // r1@1
  int v7; // r0@2
  int *v8; // r5@2
  int v9; // r4@2
  int v10; // r0@3
  int v11; // r4@3
  ImprovedNoise *v12; // r6@3
  unsigned int v13; // r1@3
  unsigned int v15; // [sp+0h] [bp-9F0h]@1
  unsigned int v16; // [sp+4h] [bp-9ECh]@1
  int v17; // [sp+9C4h] [bp-2Ch]@1
  char v18; // [sp+9C8h] [bp-28h]@1
  int v19; // [sp+9CCh] [bp-24h]@1
  int v20; // [sp+9D0h] [bp-20h]@3

  v2 = a1;
  v3 = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = a1 + 8;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 - 4) = 0;
  v5 = sub_21E67AC((int)&Random::mRandomDevice);
  v15 = v5;
  v17 = 625;
  v6 = 1;
  v18 = 0;
  v19 = 0;
  v16 = v5;
  do
  {
    v7 = v5 ^ (v5 >> 30);
    v8 = (int *)(&v15 + v3);
    v9 = v3++ + 1812433253 * v7;
    v5 = v6++ + 1812433253 * v7;
    v8[2] = v9 + 1;
  }
  while ( v3 != 397 );
  v17 = 624;
  v20 = 398;
  v10 = *(_DWORD *)v2;
  v11 = *(_QWORD *)(v2 + 8) >> 32;
  v12 = (ImprovedNoise *)*(_QWORD *)(v2 + 8);
  v13 = -1009108821 * ((v11 - (signed int)v12) >> 2);
  if ( *(_DWORD *)v2 <= v13 )
    if ( *(_DWORD *)v2 < v13 )
    {
      v11 = (int)v12 + 2060 * v10;
      *(_DWORD *)(v2 + 12) = v11;
    }
  else
    j_std::vector<ImprovedNoise,std::allocator<ImprovedNoise>>::_M_default_append(v4, v10 - v13);
    v11 = *(_QWORD *)(v2 + 8) >> 32;
    v12 = (ImprovedNoise *)*(_QWORD *)(v2 + 8);
  for ( ; (ImprovedNoise *)v11 != v12; v12 = (ImprovedNoise *)((char *)v12 + 2060) )
    j_ImprovedNoise::_init(v12, (Random *)&v15);
  return v2;
}


signed int __fastcall PerlinNoise::hashCode(PerlinNoise *this)
{
  PerlinNoise *v1; // r5@1
  signed int v2; // r4@1
  int v3; // r6@2
  int v4; // r7@2

  v1 = this;
  v2 = 4711;
  if ( *(_DWORD *)this >= 1 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v2 *= j_ImprovedNoise::_hashCode((ImprovedNoise *)(*((_DWORD *)v1 + 2) + v3));
      v3 += 2060;
      ++v4;
    }
    while ( v4 < *(_DWORD *)v1 );
  }
  return v2;
}


int __fastcall PerlinNoise::PerlinNoise(int a1, Random *a2, __int64 a3)
{
  int v3; // r5@1
  int v4; // r8@1
  Random *v5; // r6@1
  ImprovedNoise *v6; // r4@2
  ImprovedNoise *i; // r7@2

  v3 = a1;
  *(_QWORD *)a1 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = a1 + 8;
  v5 = a2;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  if ( (_DWORD)a3 )
  {
    j_std::vector<ImprovedNoise,std::allocator<ImprovedNoise>>::_M_default_append(a1 + 8, a3);
    v6 = (ImprovedNoise *)(*(_QWORD *)(v3 + 8) >> 32);
    for ( i = (ImprovedNoise *)*(_QWORD *)(v3 + 8); v6 != i; i = (ImprovedNoise *)((char *)i + 2060) )
      j_ImprovedNoise::_init(i, v5);
  }
  return v3;
}


int __fastcall PerlinNoise::PerlinNoise(int a1, unsigned int a2, __int64 a3)
{
  int v3; // r12@0
  int v4; // r9@1
  int v5; // r0@1
  int v6; // r8@1
  signed int v7; // r3@1
  int v8; // r1@2
  int v9; // r6@2
  int v10; // r5@2
  ImprovedNoise *v11; // r4@4
  ImprovedNoise *i; // r6@4
  unsigned int v14; // [sp+0h] [bp-9F0h]@1
  unsigned int v15; // [sp+4h] [bp-9ECh]@1
  int v16; // [sp+9C4h] [bp-2Ch]@1
  char v17; // [sp+9C8h] [bp-28h]@1
  int v18; // [sp+9CCh] [bp-24h]@1
  int v19; // [sp+9D0h] [bp-20h]@3

  v4 = a1;
  v5 = 0;
  *(_QWORD *)v4 = a3;
  *(_DWORD *)(v4 + 8) = 0;
  v6 = v4 + 8;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  v14 = a2;
  v16 = 625;
  v7 = 1;
  v17 = 0;
  v18 = 0;
  v15 = a2;
  do
  {
    v8 = a2 ^ (a2 >> 30);
    v9 = v3 + 4 * v5;
    v10 = v5++ + 1812433253 * v8;
    a2 = v7++ + 1812433253 * v8;
    *(_DWORD *)(v9 + 8) = v10 + 1;
  }
  while ( v5 != 397 );
  v16 = 624;
  v19 = 398;
  if ( (_DWORD)a3 )
    j_std::vector<ImprovedNoise,std::allocator<ImprovedNoise>>::_M_default_append(v4 + 8, a3);
    v11 = (ImprovedNoise *)(*(_QWORD *)(v4 + 8) >> 32);
    for ( i = (ImprovedNoise *)*(_QWORD *)(v4 + 8); v11 != i; i = (ImprovedNoise *)((char *)i + 2060) )
      j_ImprovedNoise::_init(i, (Random *)&v14);
  return v4;
}


int __fastcall PerlinNoise::getValue(PerlinNoise *this, const Vec3 *a2)
{
  PerlinNoise *v6; // r5@1
  int v7; // r0@1
  int v9; // r7@1
  int v10; // r6@5
  int v12; // r0@6
  int result; // r0@9
  float v14; // [sp+4h] [bp-3Ch]@6

  __asm { VMOV.F32        S16, #1.0 }
  v6 = this;
  v7 = *((_DWORD *)this + 1);
  _R4 = a2;
  v9 = 0;
  if ( v7 > 0 )
  {
    __asm { VMOV.F32        S0, #0.5 }
    do
    {
      __asm { VMUL.F32        S16, S16, S0 }
      ++v9;
    }
    while ( v9 < v7 );
  }
  if ( v9 >= *(_DWORD *)v6 )
    __asm { VLDR            S18, =0.0 }
  else
    __asm { VMOV.F32        S20, #0.5 }
    v10 = 2060 * v9;
      __asm
      {
        VLDR            S0, [R4]
        VLDR            S2, [R4,#4]
        VLDR            S4, [R4,#8]
        VMUL.F32        S0, S0, S16
        VMUL.F32        S2, S2, S16
        VMUL.F32        S4, S4, S16
        VSTR            S0, [SP,#0x40+var_3C]
        VSTR            S2, [SP,#0x40+var_38]
        VSTR            S4, [SP,#0x40+var_34]
      }
      _R0 = j_ImprovedNoise::_getValue((ImprovedNoise *)(*((_DWORD *)v6 + 2) + v10), (const Vec3 *)&v14);
      __asm { VMOV            S0, R0 }
      v10 += 2060;
      v12 = *(_DWORD *)v6;
        VDIV.F32        S0, S0, S16
        VMUL.F32        S16, S16, S20
        VADD.F32        S18, S0, S18
    while ( _NF ^ _VF );
  __asm { VMOV            R0, S18 }
  return result;
}


int __fastcall PerlinNoise::getRegion(int a1, float *a2, __int64 *a3, float a4, int a5, int a6)
{
  float v6; // r10@1
  int v7; // r6@1
  float *v8; // r5@1
  __int64 v9; // r1@1
  int v10; // r0@1
  int result; // r0@1
  int v17; // r1@2
  int v18; // r7@4
  int v19; // r4@9
  float v20; // [sp+Ch] [bp-64h]@0
  int v21; // [sp+10h] [bp-60h]@1
  __int64 v22; // [sp+14h] [bp-5Ch]@1
  float v23; // [sp+1Ch] [bp-54h]@10

  v6 = a4;
  v7 = a1;
  v8 = a2;
  v9 = *a3;
  v10 = LODWORD(a4) * a5;
  v21 = v9;
  LODWORD(v9) = 1092616192;
  _R3 = a6;
  v22 = v9;
  __asm
  {
    VLDR            S16, [R3]
    VLDR            S18, [R3,#4]
  }
  j___aeabi_memclr4_0((int)v8, 4 * v10);
  __asm { VMOV.F32        S20, #1.0 }
  result = *(_DWORD *)(v7 + 4);
  if ( result <= 0 )
    v18 = 0;
  else
    __asm { VMOV.F32        S0, #0.5 }
    v17 = *(_DWORD *)(v7 + 4);
    do
    {
      __asm { VMUL.F32        S20, S20, S0 }
      --v17;
    }
    while ( v17 );
    v18 = *(_DWORD *)(v7 + 4);
  if ( v18 < *(_DWORD *)v7 )
    if ( result <= 0 )
      result = 0;
    __asm { VMOV.F32        S22, #0.5 }
    v19 = 2060 * result;
      __asm
      {
        VMUL.F32        S0, S20, S16
        VMUL.F32        S2, S20, S18
        VSTR            S20, [SP,#0x70+var_64]
        VSTR            S0, [SP,#0x70+var_54]
        VSTR            S20, [SP,#0x70+var_50]
        VSTR            S2, [SP,#0x70+var_4C]
      }
      j_ImprovedNoise::_readArea(
        (ImprovedNoise *)(*(_DWORD *)(v7 + 8) + v19),
        v8,
        (const Vec3 *)&v21,
        v6,
        1,
        a5,
        (const Vec3 *)&v23,
        v20);
      __asm { VMUL.F32        S20, S20, S22 }
      v19 += 2060;
      ++v18;
      result = *(_DWORD *)v7;
    while ( v18 < *(_DWORD *)v7 );
  return result;
}


int __fastcall PerlinNoise::getRegion(PerlinNoise *this, float *a2, const Vec3 *a3, int a4, int a5, int a6, const Vec3 *a7)
{
  int v7; // r9@1
  PerlinNoise *v8; // r7@1
  float *v9; // r4@1
  const Vec3 *v10; // r10@1
  int v15; // r0@1
  int v16; // r5@1
  int result; // r0@4
  const Vec3 *v18; // r2@4
  float *v19; // r1@4
  int v20; // r8@5
  int *v22; // r4@6
  ImprovedNoise *v23; // r0@6
  const Vec3 *v24; // r6@6
  float *v25; // r7@6
  float v26; // [sp+Ch] [bp-4Ch]@0
  float v27; // [sp+14h] [bp-44h]@6

  v7 = a4;
  v8 = this;
  v9 = a2;
  v10 = a3;
  j___aeabi_memclr4_0((int)a2, 4 * a4 * a5 * a6);
  __asm { VMOV.F32        S16, #1.0 }
  v15 = *((_DWORD *)v8 + 1);
  v16 = 0;
  if ( v15 > 0 )
  {
    __asm { VMOV.F32        S0, #0.5 }
    do
    {
      __asm { VMUL.F32        S16, S16, S0 }
      ++v16;
    }
    while ( v16 < v15 );
  }
  result = *(_DWORD *)v8;
  v18 = v10;
  v19 = v9;
  if ( v16 < *(_DWORD *)v8 )
    __asm { VMOV.F32        S18, #0.5 }
    v20 = 2060 * v16;
      _R0 = a7;
      v22 = (int *)v8;
      __asm
      {
        VLDR            S0, [R0]
        VLDR            S2, [R0,#4]
        VLDR            S4, [R0,#8]
        VMUL.F32        S0, S0, S16
        VMUL.F32        S2, S2, S16
        VMUL.F32        S4, S4, S16
        VSTR            S16, [SP,#0x58+var_4C]
      }
      v23 = (ImprovedNoise *)(*((_DWORD *)v8 + 2) + v20);
      v24 = v18;
      v25 = v19;
        VSTR            S0, [SP,#0x58+var_44]
        VSTR            S2, [SP,#0x58+var_40]
        VSTR            S4, [SP,#0x58+var_3C]
      j_ImprovedNoise::_readArea(v23, v19, v18, *(float *)&v7, a5, a6, (const Vec3 *)&v27, v26);
      __asm { VMUL.F32        S16, S16, S18 }
      v19 = v25;
      v8 = (PerlinNoise *)v22;
      v20 += 2060;
      result = *v22;
      v18 = v24;
    while ( v16 < *v22 );
  return result;
}
