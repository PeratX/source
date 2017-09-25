

PerlinSimplexNoise *__fastcall PerlinSimplexNoise::PerlinSimplexNoise(PerlinSimplexNoise *this, unsigned int a2, int a3)
{
  PerlinSimplexNoise *v3; // r8@1
  int v4; // r0@1
  signed int v5; // r2@1
  unsigned int v6; // r1@2
  int *v7; // r7@2
  int v8; // r6@2
  unsigned int v10; // [sp+4h] [bp-9ECh]@1
  unsigned int v11; // [sp+8h] [bp-9E8h]@1
  int v12; // [sp+9C8h] [bp-28h]@1
  char v13; // [sp+9CCh] [bp-24h]@1
  int v14; // [sp+9D0h] [bp-20h]@1
  int v15; // [sp+9D4h] [bp-1Ch]@3

  v3 = this;
  v4 = 0;
  *(_DWORD *)v3 = a3;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  *((_DWORD *)v3 + 3) = 0;
  v10 = a2;
  v12 = 625;
  v5 = 1;
  v13 = 0;
  v14 = 0;
  v11 = a2;
  do
  {
    v6 = a2 ^ (a2 >> 30);
    v7 = (int *)(&v10 + v4);
    v8 = v4++ + 1812433253 * v6;
    a2 = v5++ + 1812433253 * v6;
    v7[2] = v8 + 1;
  }
  while ( v4 != 397 );
  v12 = 624;
  v15 = 398;
  PerlinSimplexNoise::_init(v3, (Random *)&v10);
  return v3;
}


PerlinSimplexNoise *__fastcall PerlinSimplexNoise::~PerlinSimplexNoise(PerlinSimplexNoise *this)
{
  PerlinSimplexNoise *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


int __fastcall PerlinSimplexNoise::_init(PerlinSimplexNoise *this, Random *a2)
{
  PerlinSimplexNoise *v2; // r4@1
  Random *v3; // r5@1
  void **v4; // r9@1
  unsigned int v5; // r10@1
  int v6; // r7@2
  int v7; // r1@2
  int result; // r0@2
  int v9; // r6@3
  signed int v10; // r11@3
  char *v11; // r0@4
  int v12; // r6@7
  int v13; // r8@7
  int v14; // r6@13
  SimplexNoise *v15; // r0@15
  int v20; // r1@20
  signed int v21; // [sp+4h] [bp-2Ch]@6
  char *v22; // [sp+8h] [bp-28h]@6

  v2 = this;
  v3 = a2;
  v4 = (void **)((char *)this + 4);
  v5 = *(_DWORD *)this;
  if ( *(_DWORD *)this >= 0x1FD048u )
    sub_21E5A04("vector::reserve");
  v6 = *((_DWORD *)this + 1);
  v7 = *((_DWORD *)this + 3);
  result = -1009108821 * ((v7 - v6) >> 2);
  if ( result < v5 )
  {
    v9 = *((_DWORD *)v2 + 2);
    v10 = v9 - v6;
    if ( v5 )
      v11 = (char *)j_operator new(2060 * v5);
    else
      v11 = 0;
    v22 = v11;
    v21 = v10 >> 2;
    if ( v6 != v9 )
    {
      v12 = (int)v11;
      v13 = v6 + 2060;
      do
      {
        j___aeabi_memcpy4(v12, v6, 2060);
        v10 -= 2060;
        v12 += 2060;
        v6 = v13;
        v13 += 2060;
      }
      while ( v10 );
    }
    if ( *v4 )
      j_operator delete(*v4);
    result = 2060;
    v7 = (int)&v22[2060 * v5];
    *((_DWORD *)v2 + 1) = v22;
    *((_DWORD *)v2 + 2) = &v22[4 * v21];
    *((_DWORD *)v2 + 3) = v7;
    v5 = *(_DWORD *)v2;
  }
  if ( (signed int)v5 < 1 )
    __asm { VLDR            S0, =0.0 }
  else
    v14 = 0;
    while ( 1 )
      v15 = (SimplexNoise *)*((_DWORD *)v2 + 2);
      if ( v15 == (SimplexNoise *)v7 )
        std::vector<SimplexNoise,std::allocator<SimplexNoise>>::_M_emplace_back_aux<Random &>(
          (unsigned __int64 *)((char *)v2 + 4),
          v3);
      else
        SimplexNoise::SimplexNoise(v15, v3);
        *((_DWORD *)v2 + 2) += 2060;
      result = *(_DWORD *)v2;
      if ( ++v14 >= *(_DWORD *)v2 )
        break;
      v7 = *((_DWORD *)v2 + 3);
    if ( result > 0 )
      __asm { VMOV.F32        S2, #1.0 }
      v20 = 0;
      __asm
        VMOV.F32        S4, #1.0
        VMOV.F32        S6, #0.5
        __asm { VDIV.F32        S8, S4, S2 }
        ++v20;
        __asm
        {
          VMUL.F32        S2, S2, S6
          VADD.F32        S0, S0, S8
        }
      while ( _NF ^ _VF );
  __asm
    VMOV.F32        S2, #1.0
    VDIV.F32        S0, S2, S0
    VSTR            S0, [R4,#0x10]
  return result;
}


int __fastcall PerlinSimplexNoise::getValue(PerlinSimplexNoise *this, const Vec3 *a2)
{
  PerlinSimplexNoise *v2; // r5@1
  int v8; // r7@2
  int v9; // r6@2
  int v11; // r0@3
  int result; // r0@6
  float v13; // [sp+4h] [bp-3Ch]@3

  v2 = this;
  _R4 = a2;
  if ( *(_DWORD *)this < 1 )
  {
    __asm { VLDR            S16, =0.0 }
  }
  else
    __asm
    {
      VMOV.F32        S18, #1.0
      VLDR            S16, =0.0
      VMOV.F32        S20, #0.5
    }
    v8 = 0;
    v9 = 0;
    do
      __asm
      {
        VLDR            S0, [R4]
        VLDR            S2, [R4,#4]
        VLDR            S4, [R4,#8]
        VMUL.F32        S0, S0, S18
        VMUL.F32        S2, S2, S18
        VMUL.F32        S4, S4, S18
        VSTR            S0, [SP,#0x40+var_3C]
        VSTR            S2, [SP,#0x40+var_38]
        VSTR            S4, [SP,#0x40+var_34]
      }
      _R0 = SimplexNoise::_getValue((SimplexNoise *)(*((_DWORD *)v2 + 1) + v8), (const Vec3 *)&v13);
      __asm { VMOV            S0, R0 }
      v8 += 2060;
      v11 = *(_DWORD *)v2;
      ++v9;
        VDIV.F32        S0, S0, S18
        VMUL.F32        S18, S18, S20
        VADD.F32        S16, S0, S16
    while ( _NF ^ _VF );
  __asm { VMOV            R0, S16 }
  return result;
}


PerlinSimplexNoise *__fastcall PerlinSimplexNoise::PerlinSimplexNoise(PerlinSimplexNoise *this, Random *a2, int a3)
{
  PerlinSimplexNoise *v3; // r4@1

  v3 = this;
  *(_DWORD *)this = a3;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  PerlinSimplexNoise::_init(this, a2);
  return v3;
}


int __fastcall PerlinSimplexNoise::getValueNormalized(PerlinSimplexNoise *this, const Vec3 *a2)
{
  int v8; // r7@2
  int v9; // r6@2
  int v11; // r0@3
  int result; // r0@6
  float v13; // [sp+4h] [bp-3Ch]@3

  _R4 = this;
  _R5 = a2;
  if ( *(_DWORD *)this < 1 )
  {
    __asm { VLDR            S16, =0.0 }
  }
  else
    __asm
    {
      VMOV.F32        S18, #1.0
      VLDR            S16, =0.0
      VMOV.F32        S20, #0.5
    }
    v8 = 0;
    v9 = 0;
    do
      __asm
      {
        VLDR            S0, [R5]
        VLDR            S2, [R5,#4]
        VLDR            S4, [R5,#8]
        VMUL.F32        S0, S0, S18
        VMUL.F32        S2, S2, S18
        VMUL.F32        S4, S4, S18
        VSTR            S0, [SP,#0x40+var_3C]
        VSTR            S2, [SP,#0x40+var_38]
        VSTR            S4, [SP,#0x40+var_34]
      }
      _R0 = SimplexNoise::_getValue((SimplexNoise *)(*((_DWORD *)_R4 + 1) + v8), (const Vec3 *)&v13);
      __asm { VMOV            S0, R0 }
      v8 += 2060;
      v11 = *(_DWORD *)_R4;
      ++v9;
        VDIV.F32        S0, S0, S18
        VMUL.F32        S18, S18, S20
        VADD.F32        S16, S0, S16
    while ( _NF ^ _VF );
  __asm
    VLDR            S0, [R4,#0x10]
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  return result;
}


int __fastcall PerlinSimplexNoise::getValueNormalized(PerlinSimplexNoise *this, float _R1, float _R2)
{
  int v8; // r6@2
  int v9; // r7@2
  int v11; // r0@3
  int result; // r0@6
  float v13; // [sp+0h] [bp-48h]@3

  _R4 = this;
  if ( *(_DWORD *)this < 1 )
  {
    __asm { VLDR            S16, =0.0 }
  }
  else
    __asm
    {
      VMOV.F32        S22, #1.0
      VLDR            S16, =0.0
      VMOV.F32        S24, #0.5
    }
    v8 = 0;
      VMOV            S18, R2
      VMOV            S20, R1
    v9 = 0;
    do
      __asm
      {
        VMUL.F32        S0, S22, S20
        VMUL.F32        S2, S22, S18
        VSTR            S0, [SP,#0x48+var_48]
        VSTR            S2, [SP,#0x48+var_44]
      }
      _R0 = SimplexNoise::_getValue(*((_DWORD *)_R4 + 1) + v8, (int)&v13);
      __asm { VMOV            S0, R0 }
      v8 += 2060;
      v11 = *(_DWORD *)_R4;
      ++v9;
        VDIV.F32        S0, S0, S22
        VMUL.F32        S22, S22, S24
        VADD.F32        S16, S0, S16
    while ( _NF ^ _VF );
  __asm
    VLDR            S0, [R4,#0x10]
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  return result;
}


float *__fastcall PerlinSimplexNoise::getRegion(int a1, int a2, float a3, float a4, int a5, int a6, int a7, int a8)
{
  float v8; // r9@1
  int v9; // r10@1
  float *v10; // r11@1
  unsigned __int64 *v11; // r6@1
  int v12; // r4@1
  int v18; // r5@2
  float v20; // [sp+8h] [bp-60h]@0
  float v21; // [sp+Ch] [bp-5Ch]@0
  float v22; // [sp+10h] [bp-58h]@0

  v8 = a4;
  v9 = a1;
  v10 = (float *)a2;
  v11 = (unsigned __int64 *)LODWORD(a3);
  j___aeabi_memclr4(a2, 4 * LODWORD(a4) * a5);
  v12 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 )
  {
    __asm { VMOV.F32        S20, #1.0 }
    _R7 = a6;
    __asm { VLDR            S16, [SP,#0x68+arg_C] }
    v18 = 0;
    __asm
    {
      VLDR            S18, [SP,#0x68+arg_8]
      VLDR            S22, =0.55
      VMOV.F32        S24, S20
    }
    do
      __asm
      {
        VDIV.F32        S0, S22, S20
        VMUL.F32        S2, S20, S24
        VLDR            S6, [R7,#4]
        VLDR            S4, [R7]
        VMUL.F32        S6, S2, S6
        VMUL.F32        S2, S2, S4
        VSTR            S2, [SP,#0x68+var_60]
        VSTR            S6, [SP,#0x68+var_5C]
        VSTR            S0, [SP,#0x68+var_58]
      }
      SimplexNoise::_add(
        (SimplexNoise *)(*(_DWORD *)(v9 + 4) + v18),
        v10,
        COERCE_FLOAT(*v11),
        COERCE_FLOAT(*v11 >> 32),
        v8,
        a5,
        v20,
        v21,
        v22);
      __asm { VMUL.F32        S20, S20, S16 }
      --v12;
      __asm { VMUL.F32        S24, S24, S18 }
      v18 += 2060;
    while ( !_ZF );
  }
  return v10;
}


int __fastcall PerlinSimplexNoise::getValue(PerlinSimplexNoise *this, float _R1, float _R2)
{
  PerlinSimplexNoise *v3; // r4@1
  int v8; // r6@2
  int v9; // r7@2
  int v11; // r0@3
  int result; // r0@6
  float v13; // [sp+0h] [bp-48h]@3

  v3 = this;
  if ( *(_DWORD *)this < 1 )
  {
    __asm { VLDR            S16, =0.0 }
  }
  else
    __asm
    {
      VMOV.F32        S22, #1.0
      VLDR            S16, =0.0
      VMOV.F32        S24, #0.5
    }
    v8 = 0;
      VMOV            S18, R2
      VMOV            S20, R1
    v9 = 0;
    do
      __asm
      {
        VMUL.F32        S0, S22, S20
        VMUL.F32        S2, S22, S18
        VSTR            S0, [SP,#0x48+var_48]
        VSTR            S2, [SP,#0x48+var_44]
      }
      _R0 = SimplexNoise::_getValue(*((_DWORD *)v3 + 1) + v8, (int)&v13);
      __asm { VMOV            S0, R0 }
      v8 += 2060;
      v11 = *(_DWORD *)v3;
      ++v9;
        VDIV.F32        S0, S0, S22
        VMUL.F32        S22, S22, S24
        VADD.F32        S16, S0, S16
    while ( _NF ^ _VF );
  __asm { VMOV            R0, S16 }
  return result;
}


float *__fastcall PerlinSimplexNoise::getRegion(PerlinSimplexNoise *this, float *a2, const Vec3 *a3, int a4, int a5, int a6, const Vec3 *a7)
{
  PerlinSimplexNoise *v7; // r7@1
  int v8; // r11@1
  float *v9; // r5@1
  const Vec3 *v10; // r10@1
  int v11; // r6@1
  int v17; // r8@2
  float v19; // [sp+Ch] [bp-54h]@0
  float v20; // [sp+14h] [bp-4Ch]@3

  v7 = this;
  v8 = a4;
  v9 = a2;
  v10 = a3;
  j___aeabi_memclr4((int)a2, 4 * a4 * a5 * a6);
  v11 = *(_DWORD *)v7;
  if ( *(_DWORD *)v7 )
  {
    __asm { VMOV.F32        S16, #1.0 }
    _R4 = a7;
    __asm
    {
      VMOV.F32        S20, #0.5
      VLDR            S18, =0.55
    }
    v17 = 0;
    do
      __asm
      {
        VDIV.F32        S0, S18, S16
        VLDR            S2, [R4]
        VLDR            S4, [R4,#4]
        VLDR            S6, [R4,#8]
        VMUL.F32        S2, S2, S16
        VMUL.F32        S4, S4, S16
        VMUL.F32        S6, S6, S16
        VSTR            S0, [SP,#0x60+var_54]
        VSTR            S2, [SP,#0x60+var_4C]
        VSTR            S4, [SP,#0x60+var_48]
        VSTR            S6, [SP,#0x60+var_44]
      }
      SimplexNoise::_add((SimplexNoise *)(*((_DWORD *)v7 + 1) + v17), v9, v10, v8, a5, a6, (const Vec3 *)&v20, v19);
      __asm { VMUL.F32        S16, S16, S20 }
      --v11;
      v17 += 2060;
    while ( v11 );
  }
  return v9;
}
