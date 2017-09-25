

int __fastcall SimplexNoise::_getValue(int a1, int _R1)
{
  int v6; // r4@1
  signed int v7; // r1@1
  int v12; // r4@7
  int result; // r0@13
  float v24; // [sp+0h] [bp-40h]@7
  int v26; // [sp+Ch] [bp-34h]@7
  int v27; // [sp+10h] [bp-30h]@7
  int v28; // [sp+14h] [bp-2Ch]@7

  __asm { VLDR            S0, [R1] }
  v6 = a1;
  __asm { VLDR            S2, [R1,#4] }
  v7 = 0;
  __asm { VADD.F32        S4, S2, S0 }
  _R6 = &SimplexNoise::SQRT3;
  __asm
  {
    VLDR            S6, [R6,#4]
    VLDR            S8, [R6,#8]
    VMUL.F32        S4, S4, S6
    VADD.F32        S6, S4, S2
    VADD.F32        S4, S4, S0
    VCVTR.S32.F32   S10, S6
    VCMPE.F32       S6, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCVTR.S32.F32   S12, S4
    VCMPE.F32       S4, #0.0
    VMOV            R7, S10
    VMOV            R5, S12
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    --_R7;
    VMOV            S6, R7
    --_R5;
  _R0 = _R5 + _R7;
    VMOV            S4, R0
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S4, S4, S8
    VMOV            S8, R5
    VCVT.F32.S32    S8, S8
    VSUB.F32        S6, S4, S6
    VSUB.F32        S4, S4, S8
    VADD.F32        S16, S2, S6
    VADD.F32        S18, S0, S4
    VCMPE.F32       S18, S16
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v7 = 1;
  v26 = v7;
  v27 = v7 ^ 1;
  v28 = 0;
  Vec3::Vec3((int)&v24, (int)&v26);
    VMOV.F32        S2, #-1.0
    VLDR            S6, [SP,#0x40+var_3C]
    VMOV.F32        S0, #0.5
    VMUL.F32        S4, S18, S18
  v12 = v6 + 12;
    VMUL.F32        S8, S16, S16
    VADD.F32        S10, S18, S2
    VADD.F32        S12, S16, S2
    VLDR            S2, [SP,#0x40+var_40]
    VSUB.F32        S4, S0, S4
    VSUB.F32        S3, S18, S2
    VLDR            S5, [R6,#8]
    VSUB.F32        S2, S16, S6
    VADD.F32        S14, S5, S5
    VSUB.F32        S1, S4, S8
    VADD.F32        S8, S5, S3
  _R2 = *(_DWORD *)(v12 + 4 * (v26 + _R5 + *(_DWORD *)(v12 + 4 * (v27 + _R7))));
    VADD.F32        S6, S2, S5
    VLDR            S2, =0.0
  _R1 = 715827883;
  _R0 = *(_DWORD *)(v12 + 4 * (*(_DWORD *)(v12 + 4 * (unsigned __int8)_R7 + 4) + _R5) + 4);
    VMOV.F32        S4, S2
    VCMPE.F32       S1, #0.0
  if ( !(_NF ^ _VF) )
    __asm { VMUL.F32        S1, S1, S1 }
    _R3 = *(_DWORD *)(v12 + 4 * (*(_DWORD *)(v12 + 4 * (unsigned __int8)_R7) + (unsigned __int8)_R5));
    __asm
    {
      SMMUL.W         R7, R3, R1
      VMUL.F32        S1, S1, S1
    }
    _R3 = (char *)&SimplexNoise::GRAD3 + 12 * (_R3 - 12 * (((signed int)_R7 >> 1) + (_R7 >> 31)));
      VLDR            S4, [R3]
      VLDR            S3, [R3,#4]
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S3, S3
      VMUL.F32        S4, S4, S18
      VMUL.F32        S3, S3, S16
      VADD.F32        S4, S3, S4
      VMUL.F32        S4, S1, S4
    VADD.F32        S12, S12, S14
    VADD.F32        S10, S10, S14
    VMUL.F32        S14, S8, S8
    VMUL.F32        S1, S6, S6
    VSUB.F32        S14, S0, S14
    VSUB.F32        S1, S14, S1
    VMOV.F32        S14, S2
      SMMUL.W         R3, R2, R1
    _R2 = (char *)&SimplexNoise::GRAD3 + 12 * (_R2 - 12 * (((signed int)_R3 >> 1) + (_R3 >> 31)));
      VLDR            S14, [R2]
      VLDR            S3, [R2,#4]
      VCVT.F32.S32    S14, S14
      VMUL.F32        S8, S14, S8
      VMUL.F32        S6, S3, S6
      VMUL.F32        S14, S1, S1
      VADD.F32        S6, S6, S8
      VMUL.F32        S14, S14, S6
    VMUL.F32        S6, S10, S10
    VMUL.F32        S8, S12, S12
    VSUB.F32        S0, S0, S6
    VSUB.F32        S0, S0, S8
    VCMPE.F32       S0, #0.0
      SMMUL.W         R1, R0, R1
      VMUL.F32        S0, S0, S0
    _R0 = (char *)&SimplexNoise::GRAD3 + 12 * (_R0 - 12 * (((signed int)_R1 >> 1) + (_R1 >> 31)));
      VLDR            S2, [R0]
      VLDR            S6, [R0,#4]
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S6, S6
      VMUL.F32        S2, S2, S10
      VMUL.F32        S6, S6, S12
      VADD.F32        S2, S6, S2
      VMUL.F32        S2, S0, S2
    VADD.F32        S0, S14, S4
    VADD.F32        S0, S0, S2
    VLDR            S2, =70.0
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


int __fastcall SimplexNoise::_add(int result, float *a2, const Vec3 *a3, int a4, int a5, int a6, const Vec3 *a7, float a8)
{
  int v12; // r1@4
  float *v21; // [sp+4h] [bp-64h]@1
  int v22; // [sp+8h] [bp-60h]@1
  int v23; // [sp+Ch] [bp-5Ch]@6
  int v24; // [sp+10h] [bp-58h]@6
  int v25; // [sp+18h] [bp-50h]@7
  float v26; // [sp+1Ch] [bp-4Ch]@8

  _ZF = a4 == 0;
  v22 = a4;
  _R5 = a3;
  v21 = a2;
  _R7 = (SimplexNoise *)result;
  if ( a4 )
  {
    result = a6;
    _ZF = a6 == 0;
  }
  if ( !_ZF )
    _R4 = a7;
    v12 = 0;
    __asm { VLDR            S16, [SP,#0x68+arg_C] }
    _R2 = 0;
    do
    {
      __asm
      {
        VMOV            S0, R2
        VCVT.F32.S32    S0, S0
      }
      if ( !_ZF )
        __asm { VLDR            S2, [R5] }
        _R10 = 0;
        __asm
        {
          VADD.F32        S0, S2, S0
          VLDR            S2, [R4]
        }
        _R9 = (int)&v21[v12];
        v23 = _R2;
        v24 = v12;
          VMUL.F32        S0, S0, S2
          VLDR            S2, [R7]
          VADD.F32        S18, S0, S2
        do
          __asm { VMOV            S0, R10 }
          v25 = _R9;
          _R8 = 0;
          __asm
          {
            VCVT.F32.S32    S0, S0
            VLDR            S2, [R5,#8]
            VADD.F32        S0, S2, S0
            VLDR            S2, [R4,#8]
            VMUL.F32        S0, S0, S2
            VLDR            S2, [R7,#8]
            VADD.F32        S20, S0, S2
          }
          do
            __asm
            {
              VMOV            S0, R8
              VCVT.F32.S32    S0, S0
              VLDR            S2, [R5,#4]
              VADD.F32        S0, S2, S0
              VLDR            S2, [R4,#4]
              VMUL.F32        S0, S0, S2
              VLDR            S2, [R7,#4]
              VSTR            S18, [SP,#0x68+var_4C]
              VADD.F32        S0, S0, S2
              VSTR            S0, [SP,#0x68+var_48]
              VSTR            S20, [SP,#0x68+var_44]
            }
            _R0 = SimplexNoise::_getValue(_R7, (const Vec3 *)&v26);
              VMOV            S0, R0
              VLDR            S2, [R9]
            ++_R8;
              VMUL.F32        S0, S0, S16
              VSTMIA          R9!, {S0}
          while ( !_ZF );
          ++_R10;
          _R9 = v25 + 4 * a5;
        while ( _R10 != a6 );
        _R2 = v23;
        v12 = v24 + a6 * a5;
      ++_R2;
      result = v22;
    }
    while ( _R2 != v22 );
  return result;
}


int __fastcall SimplexNoise::_getValue(SimplexNoise *this, const Vec3 *_R1)
{
  SimplexNoise *v6; // r4@1
  signed int v11; // r0@13
  signed int v12; // r1@13
  int v13; // r12@23
  int v14; // r4@23
  int v15; // r1@23
  int result; // r0@31
  float v31; // [sp+0h] [bp-90h]@23
  float v34; // [sp+Ch] [bp-84h]@23
  int v37; // [sp+18h] [bp-78h]@7
  int v38; // [sp+1Ch] [bp-74h]@7
  int v39; // [sp+20h] [bp-70h]@7
  int v40; // [sp+24h] [bp-6Ch]@7
  signed int v41; // [sp+28h] [bp-68h]@7
  int v42; // [sp+2Ch] [bp-64h]@7

  __asm { VLDR            S0, [R1] }
  v6 = this;
  __asm
  {
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VADD.F32        S6, S2, S0
    VLDR            S20, =0.33333
    VLDR            S24, =0.16667
    VADD.F32        S6, S6, S4
    VMUL.F32        S6, S6, S20
    VADD.F32        S8, S6, S4
    VADD.F32        S10, S6, S2
    VADD.F32        S6, S6, S0
    VCVTR.S32.F32   S12, S8
    VCVTR.S32.F32   S14, S10
    VCMPE.F32       S10, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCVTR.S32.F32   S1, S6
    VCMPE.F32       S6, #0.0
    VMOV            R7, S12
    VMOV            R8, S14
    VMOV            R9, S1
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    --_R8;
    VCMPE.F32       S8, #0.0
    VMOV            S8, R8
    --_R9;
    VMOV            S10, R9
    --_R7;
  _R0 = _R9 + _R8 + _R7;
    VMOV            S12, R7
    VMOV            S6, R0
    VCVT.F32.S32    S6, S6
    VCVT.F32.S32    S8, S8
    VCVT.F32.S32    S10, S10
    VCVT.F32.S32    S12, S12
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
    VMUL.F32        S6, S6, S24
    VSUB.F32        S8, S6, S8
    VSUB.F32        S10, S6, S10
    VSUB.F32        S6, S6, S12
    VADD.F32        S18, S2, S8
    VADD.F32        S16, S0, S10
    VADD.F32        S22, S4, S6
    VCMPE.F32       S16, S18
  if ( _NF ^ _VF )
    __asm
    {
      VCMPE.F32       S18, S22
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      v40 = 0;
      v41 = 0;
      v42 = 1;
      *(_QWORD *)&v37 = 0x100000000LL;
      v39 = 1;
      goto LABEL_23;
    __asm { VCMPE.F32       S16, S22 }
    v11 = 1;
    v12 = 0;
    __asm { VMRS            APSR_nzcv, FPSCR }
    v40 = 0;
    v41 = 1;
    v42 = 0;
    if ( !(_NF ^ _VF) )
      goto LABEL_20;
    v37 = 0;
    v38 = 1;
  else
      v11 = 1;
      v12 = 0;
      v40 = 1;
      v42 = 0;
LABEL_20:
      v37 = 1;
      goto LABEL_21;
      VCMPE.F32       S16, S22
      v11 = 0;
      v12 = 1;
LABEL_21:
      v38 = v11;
      v39 = v12;
    v40 = 1;
    v41 = 0;
    *(_QWORD *)&v37 = 1LL;
  v39 = 1;
LABEL_23:
  Vec3::Vec3((int)&v34, (int)&v40);
    VLDR            S26, [SP,#0x90+var_84]
    VLDR            S28, [SP,#0x90+var_80]
    VLDR            S30, [SP,#0x90+var_7C]
  Vec3::Vec3((int)&v31, (int)&v37);
  v13 = _R7;
  v14 = (int)v6 + 12;
    VMUL.F32        S0, S18, S18
    VMUL.F32        S4, S22, S22
    VMUL.F32        S8, S16, S16
    VSUB.F32        S10, S22, S30
    VSUB.F32        S1, S18, S28
    VADD.F32        S4, S4, S0
    VLDR            S2, [SP,#0x90+var_90]
    VSUB.F32        S5, S16, S26
    VSUB.F32        S3, S16, S2
    VLDR            S2, =0.6
    VSUB.F32        S7, S2, S8
    VLDR            S6, [SP,#0x90+var_8C]
    VLDR            S12, [SP,#0x90+var_88]
    VADD.F32        S8, S10, S24
    VLDR            S0, =0.0
    VADD.F32        S10, S1, S24
    VSUB.F32        S14, S22, S12
  v15 = *(_DWORD *)(v14 + 4 * (*(_DWORD *)(v14 + 4 * _R7 + 4) + _R8) + 4) + _R9;
    VSUB.F32        S1, S7, S4
    VSUB.F32        S6, S18, S6
  _R3 = *(_DWORD *)(v14 + 4 * (v40 + _R9 + *(_DWORD *)(v14 + 4 * (v41 + _R8 + *(_DWORD *)(v14 + 4 * (v42 + _R7))))));
    VADD.F32        S12, S5, S24
    VMOV.F32        S4, S0
  _R2 = *(_DWORD *)(v14 + 4 * (v37 + _R9 + *(_DWORD *)(v14 + 4 * (*(_DWORD *)(v14 + 4 * (v39 + _R7)) + v38 + _R8))));
  _R7 = 715827883;
  _R0 = *(_DWORD *)(v14 + 4 * v15 + 4);
    VCMPE.F32       S1, #0.0
  if ( !(_NF ^ _VF) )
    __asm { VMUL.F32        S1, S1, S1 }
    _R1 = *(_DWORD *)(v14 + 4 * (*(_DWORD *)(v14 + 4 * (_R8 + *(_DWORD *)(v14 + 4 * v13))) + _R9));
      VMUL.F32        S1, S1, S1
      SMMUL.W         R6, R1, R7
    _R1 = (char *)&SimplexNoise::GRAD3 + 12 * (_R1 - 12 * (((signed int)_R6 >> 1) + (_R6 >> 31)));
      VLDMIA          R1, {S4-S5}
      VCVT.F32.S32    S4, S4
      VLDR            S7, [R1,#8]
      VCVT.F32.S32    S5, S5
      VCVT.F32.S32    S7, S7
      VMUL.F32        S4, S4, S16
      VMUL.F32        S5, S5, S18
      VMUL.F32        S7, S7, S22
      VADD.F32        S4, S5, S4
      VADD.F32        S4, S4, S7
      VMUL.F32        S4, S1, S4
    VADD.F32        S1, S6, S20
    VMUL.F32        S6, S10, S10
    VMUL.F32        S7, S8, S8
    VMUL.F32        S9, S12, S12
    VMOV.F32        S5, #-0.5
    VADD.F32        S14, S14, S20
    VADD.F32        S3, S3, S20
    VADD.F32        S6, S7, S6
    VSUB.F32        S7, S2, S9
    VSUB.F32        S7, S7, S6
    VMOV.F32        S6, S0
    VCMPE.F32       S7, #0.0
    __asm { SMMUL.W         R1, R3, R7 }
    _R1 = (char *)&SimplexNoise::GRAD3 + 12 * (_R3 - 12 * (((signed int)_R1 >> 1) + (_R1 >> 31)));
      VLDR            S6, [R1]
      VLDR            S9, [R1,#4]
      VCVT.F32.S32    S6, S6
      VLDR            S11, [R1,#8]
      VCVT.F32.S32    S9, S9
      VCVT.F32.S32    S11, S11
      VMUL.F32        S6, S6, S12
      VMUL.F32        S10, S9, S10
      VMUL.F32        S12, S7, S7
      VMUL.F32        S8, S11, S8
      VADD.F32        S6, S10, S6
      VMUL.F32        S10, S12, S12
      VADD.F32        S6, S6, S8
      VMUL.F32        S6, S10, S6
    VADD.F32        S8, S22, S5
    VADD.F32        S10, S18, S5
    VADD.F32        S12, S16, S5
    VMUL.F32        S5, S1, S1
    VMUL.F32        S7, S14, S14
    VMUL.F32        S9, S3, S3
    VADD.F32        S5, S7, S5
    VSUB.F32        S7, S7, S5
    VMOV.F32        S5, S0
    __asm { SMMUL.W         R1, R2, R7 }
    _R1 = (char *)&SimplexNoise::GRAD3 + 12 * (_R2 - 12 * (((signed int)_R1 >> 1) + (_R1 >> 31)));
      VLDR            S5, [R1]
      VMUL.F32        S3, S5, S3
      VMUL.F32        S1, S9, S1
      VMUL.F32        S5, S7, S7
      VMUL.F32        S14, S11, S14
      VADD.F32        S1, S1, S3
      VMUL.F32        S3, S5, S5
      VADD.F32        S14, S1, S14
      VMUL.F32        S5, S3, S14
    VMUL.F32        S3, S12, S12
    VMUL.F32        S14, S10, S10
    VMUL.F32        S1, S8, S8
    VSUB.F32        S2, S2, S3
    VADD.F32        S14, S1, S14
    VSUB.F32        S2, S2, S14
    VCMPE.F32       S2, #0.0
      SMMUL.W         R1, R0, R7
      VMUL.F32        S2, S2, S2
    _R0 = (char *)&SimplexNoise::GRAD3 + 12 * (_R0 - 12 * (((signed int)_R1 >> 1) + (_R1 >> 31)));
      VLDR            S0, [R0]
      VLDR            S14, [R0,#4]
      VCVT.F32.S32    S0, S0
      VLDR            S1, [R0,#8]
      VCVT.F32.S32    S14, S14
      VCVT.F32.S32    S1, S1
      VMUL.F32        S0, S0, S12
      VMUL.F32        S10, S14, S10
      VMUL.F32        S8, S1, S8
      VADD.F32        S0, S10, S0
      VADD.F32        S0, S0, S8
      VMUL.F32        S0, S2, S0
    VADD.F32        S2, S6, S4
    VADD.F32        S2, S2, S5
    VADD.F32        S0, S2, S0
    VLDR            S2, =32.0
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


int __fastcall SimplexNoise::SimplexNoise(int a1, Random *a2)
{
  Random *v2; // r9@1
  int v3; // r4@1
  int v4; // r6@1
  int v12; // r5@3
  unsigned int v13; // r6@3
  unsigned int v14; // r1@4
  int v15; // r0@4
  int v16; // r1@4
  int v17; // r2@4

  v2 = a2;
  v3 = a1;
  v4 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  _R8 = j_Random::_genRandInt32(a2);
  _R7 = j_Random::_genRandInt32(v2);
  _R0 = j_Random::_genRandInt32(v2);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VMOV            S4, R7
    VMOV            S6, R8
    VCVT.F64.U32    D0, S0
    VCVT.F64.U32    D2, S4
    VCVT.F64.U32    D3, S6
    VMUL.F64        D0, D0, D1
    VMUL.F64        D2, D2, D1
    VMUL.F64        D1, D3, D1
    VCVT.F32.F64    S0, D0
    VCVT.F32.F64    S4, D2
    VCVT.F32.F64    S2, D1
    VLDR            S6, =256.0
    VMUL.F32        S0, S0, S6
    VMUL.F32        S4, S4, S6
    VMUL.F32        S2, S2, S6
    VSTR            S0, [R4]
    VSTR            S4, [R4,#4]
    VSTR            S2, [R4,#8]
  }
  do
    *(_DWORD *)(v3 + 4 * v4 + 12) = v4;
    ++v4;
  while ( v4 != 256 );
  v12 = 0;
  v13 = 256;
    v14 = j_Random::_genRandInt32(v2) % v13;
    v15 = v3 + 4 * v12;
    --v13;
    v16 = v3 + 4 * (v14 + v12);
    v17 = *(_DWORD *)(v15 + 12);
    *(_DWORD *)(v15 + 12) = *(_DWORD *)(v16 + 12);
    *(_DWORD *)(v16 + 12) = v17;
    *(_DWORD *)(v3 + 1036 + 4 * v12++) = *(_DWORD *)(v15 + 12);
  while ( v13 );
  return v3;
}


int __fastcall SimplexNoise::_add(SimplexNoise *this, float *a2, float _R2, float _R3, float a5, int a6, float a7, float a8, float a9)
{
  float v9; // r7@0
  int result; // r0@1
  float *v12; // r8@1
  float v21; // [sp+0h] [bp-60h]@6

  _R5 = this;
  result = a6;
  v12 = a2;
  _ZF = a6 == 0;
  if ( a6 )
  {
    v9 = a5;
    _ZF = LODWORD(a5) == 0;
  }
  if ( !_ZF )
    __asm
    {
      VLDR            S16, [SP,#0x60+arg_10]
      VMOV            S22, R3
      VLDR            S18, [SP,#0x60+arg_C]
      VMOV            S24, R2
      VLDR            S20, [SP,#0x60+arg_8]
    }
    _R11 = 0;
    do
      __asm { VMOV            S0, R11 }
      _R4 = 0;
      _R10 = v12;
      __asm
      {
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R5,#4]
        VADD.F32        S0, S0, S22
        VMUL.F32        S0, S0, S18
        VADD.F32        S26, S2, S0
      }
      do
        __asm
        {
          VMOV            S0, R4
          VCVT.F32.S32    S0, S0
          VLDR            S2, [R5]
          VADD.F32        S0, S0, S24
          VMUL.F32        S0, S0, S20
          VADD.F32        S0, S2, S0
          VSTR            S0, [SP,#0x60+var_60]
          VSTR            S26, [SP,#0x60+var_5C]
        }
        _R0 = SimplexNoise::_getValue((int)_R5, (int)&v21);
          VMOV            S0, R0
          VLDR            S2, [R10]
        ++_R4;
          VMUL.F32        S0, S0, S16
          VSTMIA          R10!, {S0}
      while ( !_ZF );
      v12 += LODWORD(v9);
      ++_R11;
      result = a6;
    while ( _R11 != a6 );
  return result;
}
