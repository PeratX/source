

int __fastcall ImprovedNoise::_calcValues(ImprovedNoise *this, float a2, int *a3, float *a4)
{
  int result; // r0@3

  __asm
  {
    VMOV            S0, R0
    VMOV.F32        S4, #6.0
    VCVTR.S32.F32   S2, S0
    VMOV.F32        S6, #10.0
    VMOV            R3, S2
    VCVT.F32.S32    S2, S2
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    --_R3;
    VMOV            S2, R3
  *(_DWORD *)LODWORD(a2) = (unsigned __int8)_R3;
    VSUB.F32        S0, S0, S2
    VMOV.F32        S2, #-15.0
    VMUL.F32        S4, S0, S4
    VMOV            R0, S0
    VADD.F32        S2, S4, S2
    VMUL.F32        S4, S0, S0
    VMUL.F32        S2, S2, S0
    VMUL.F32        S0, S4, S0
    VADD.F32        S2, S2, S6
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R2]
  return result;
}


ImprovedNoise *__fastcall ImprovedNoise::ImprovedNoise(ImprovedNoise *this, Random *a2)
{
  ImprovedNoise *v2; // r4@1

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  j_ImprovedNoise::_init(this, a2);
  return v2;
}


int __fastcall ImprovedNoise::_grad(ImprovedNoise *this, int a2, const Vec3 *a3)
{
  int result; // r0@12

  _R12 = a2 + 4;
  _R2 = a2 + 4;
  if ( ((unsigned __int8)this & 0xFu) < 8 )
    _R2 = a2;
  __asm { VLDR            S0, [R2] }
  if ( _CF )
  {
    if ( ((unsigned __int8)this & 0xF | 2) != 14 )
      a2 += 8;
    _R12 = a2;
  }
  __asm
    VLDR            S2, [R12]
    VNEG.F32        S4, S0
  if ( !((unsigned __int8)this & 1) )
    __asm { VMOVEQ.F32      S4, S0 }
  __asm { VNEG.F32        S6, S2 }
  if ( !((unsigned __int8)this & 2) )
    __asm { VMOVEQ.F32      S6, S2 }
    VADD.F32        S0, S6, S4
    VMOV            R0, S0
  return result;
}


int __fastcall ImprovedNoise::_grad2(ImprovedNoise *this, int _R1, float _R2, float a4)
{
  int result; // r0@9

  __asm { VMOV            S4, R1 }
  _R3 = ~((unsigned int)this >> 3) & 1;
  __asm
  {
    VMOV            S0, R3
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S4
  }
  if ( _CF )
    __asm { VMOV            S2, R2 }
    if ( ((unsigned __int8)this & 0xF | 2) == 14 )
      __asm { VMOVEQ.F32      S2, S4 }
  else
    __asm { VLDR            S2, =0.0 }
  __asm { VNEG.F32        S4, S0 }
  if ( !((unsigned __int8)this & 1) )
    __asm { VMOVEQ.F32      S4, S0 }
  __asm { VNEG.F32        S6, S2 }
  if ( !((unsigned __int8)this & 2) )
    __asm { VMOVEQ.F32      S6, S2 }
    VADD.F32        S0, S6, S4
    VMOV            R0, S0
  return result;
}


int __fastcall ImprovedNoise::_hashCode(ImprovedNoise *this)
{
  char *v1; // r1@1
  int result; // r0@1
  int v3; // r2@1
  int v4; // r3@2

  v1 = (char *)this + 12;
  result = 4711;
  v3 = 0;
  do
  {
    v4 = *(_DWORD *)&v1[4 * v3++];
    result = v4 + 37 * result;
  }
  while ( v3 != 512 );
  return result;
}


int __fastcall ImprovedNoise::_lerp(ImprovedNoise *this, float _R1, float _R2, float a4)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R1
    VMOV            S2, R2
    VMOV            S4, R0
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall ImprovedNoise::_noise(ImprovedNoise *this, const Vec3 *_R1)
{
  int result; // r0@7
  float v10; // [sp+4h] [bp-6Ch]@0
  float v11; // [sp+1Ch] [bp-54h]@7
  float v12; // [sp+20h] [bp-50h]@7
  float v13; // [sp+24h] [bp-4Ch]@7
  float v14; // [sp+28h] [bp-48h]@7
  float v15; // [sp+2Ch] [bp-44h]@7

  __asm
  {
    VLDR            S0, [R1]
    VMOV.F32        S16, #6.0
    VLDR            S6, [R0]
    VMOV.F32        S18, #-15.0
    VLDR            S2, [R1,#4]
    VMOV.F32        S24, #10.0
    VADD.F32        S0, S6, S0
    VLDR            S4, [R1,#8]
    VLDR            S8, [R0,#4]
    VLDR            S10, [R0,#8]
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VCVTR.S32.F32   S6, S0
    VMOV            R12, S6
    VCVT.F32.S32    S6, S6
    VCMPE.F32       S6, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    --_R12;
    VMOV            S6, R12
    VCVTR.S32.F32   S8, S2
    VSUB.F32        S0, S0, S6
    VMOV            R3, S8
    VCVT.F32.S32    S8, S8
    VCVTR.S32.F32   S10, S4
    VCMPE.F32       S8, S2
    VCVT.F32.S32    S6, S10
    VMOV            R2, S10
    VMUL.F32        S10, S0, S16
    VCMPE.F32       S6, S4
    VADD.F32        S10, S10, S18
    --_R3;
    VMOV            S8, R3
  _R3 = (unsigned __int8)_R3;
    VSUB.F32        S20, S2, S8
    VMUL.F32        S2, S0, S0
    --_R2;
    VMOV            S6, R2
    VSTR            S0, [SP,#0x70+var_44]
    VSTR            S20, [SP,#0x70+var_40]
    VSUB.F32        S22, S4, S6
    VMUL.F32        S4, S10, S0
    VMUL.F32        S0, S2, S0
    VSTR            S22, [SP,#0x70+var_3C]
    VADD.F32        S2, S4, S24
  v13 = 0.0;
  v14 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
    VMUL.F32        S0, S0, S2
    VSTR            S0, [SP,#0x70+var_6C]
  j_ImprovedNoise::_blendCubeCorners(
    this,
    (const Vec3 *)&v15,
    _R12,
    _R3,
    (unsigned __int8)_R2,
    v10,
    &v14,
    &v13,
    &v12,
    &v11);
    VMUL.F32        S0, S20, S16
    VLDR            S4, [SP,#0x70+var_48]
    VMUL.F32        S2, S20, S20
    VLDR            S8, [SP,#0x70+var_4C]
    VMUL.F32        S6, S22, S16
    VLDR            S12, [SP,#0x70+var_54]
    VMUL.F32        S10, S22, S22
    VADD.F32        S0, S0, S18
    VMUL.F32        S2, S2, S20
    VADD.F32        S6, S6, S18
    VMUL.F32        S0, S0, S20
    VMUL.F32        S6, S6, S22
    VADD.F32        S0, S0, S24
    VADD.F32        S6, S6, S24
    VSUB.F32        S2, S8, S4
    VLDR            S8, [SP,#0x70+var_50]
    VSUB.F32        S12, S12, S8
    VMUL.F32        S2, S2, S0
    VMUL.F32        S0, S12, S0
    VADD.F32        S2, S2, S4
    VMUL.F32        S4, S10, S22
    VSUB.F32        S8, S8, S2
    VMUL.F32        S4, S4, S6
    VADD.F32        S0, S8, S0
    VMUL.F32        S0, S4, S0
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


ImprovedNoise *__fastcall ImprovedNoise::ImprovedNoise(ImprovedNoise *this)
{
  ImprovedNoise *v1; // r8@1
  int v2; // r0@1
  unsigned int v3; // r1@1
  signed int v4; // r5@1
  int v5; // r1@2
  int *v6; // r7@2
  int v7; // r6@2
  int v9; // [sp+4h] [bp-9ECh]@1
  int v10; // [sp+8h] [bp-9E8h]@1
  int v11; // [sp+9C8h] [bp-28h]@1
  char v12; // [sp+9CCh] [bp-24h]@1
  int v13; // [sp+9D0h] [bp-20h]@1
  int v14; // [sp+9D4h] [bp-1Ch]@3

  v1 = this;
  v2 = 0;
  v3 = 1;
  *(_DWORD *)v1 = 0;
  *((_DWORD *)v1 + 1) = 0;
  *((_DWORD *)v1 + 2) = 0;
  v9 = 1;
  v4 = 1;
  v11 = 625;
  v12 = 0;
  v13 = 0;
  v10 = 1;
  do
  {
    v5 = v3 ^ (v3 >> 30);
    v6 = &v9 + v2;
    v7 = v2++ + 1812433253 * v5;
    v3 = v4++ + 1812433253 * v5;
    v6[2] = v7 + 1;
  }
  while ( v2 != 397 );
  v11 = 624;
  v14 = 398;
  j_ImprovedNoise::_init(v1, (Random *)&v9);
  return v1;
}


int __fastcall ImprovedNoise::_init(ImprovedNoise *this, Random *a2)
{
  Random *v2; // r8@1
  ImprovedNoise *v3; // r9@1
  int v11; // r1@1
  ImprovedNoise *v12; // r7@3
  int v13; // r4@3
  unsigned int v14; // r6@3
  unsigned int v15; // r1@4
  int v16; // r0@4
  int v17; // r1@4
  int result; // r0@4

  v2 = a2;
  v3 = this;
  _R0 = j_Random::_genRandInt32(a2);
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S18, =256.0
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S18
    VSTR            S0, [R9]
  }
  _R0 = j_Random::_genRandInt32(v2);
    VSTR            S0, [R9,#4]
  __asm { VMOV            S0, R0 }
  v11 = 0;
    VSTR            S0, [R9,#8]
  do
    *((_DWORD *)v3 + v11 + 3) = v11;
    ++v11;
  while ( v11 != 256 );
  v12 = (ImprovedNoise *)((char *)v3 + 1036);
  v13 = 0;
  v14 = 256;
    v15 = j_Random::_genRandInt32(v2) % v14;
    v16 = *((_DWORD *)v12 - 256);
    --v14;
    v17 = (int)v3 + 4 * (v15 + v13++);
    *((_DWORD *)v12 - 256) = *(_DWORD *)(v17 + 12);
    *(_DWORD *)(v17 + 12) = v16;
    result = *((_DWORD *)v12 - 256);
    *(_DWORD *)v12 = result;
    v12 = (ImprovedNoise *)((char *)v12 + 4);
  while ( v14 );
  return result;
}


float *__fastcall ImprovedNoise::_blendCubeCorners(ImprovedNoise *this, const Vec3 *_R1, int a3, int a4, int a5, float a6, float *a7, float *a8, float *a9, float *a10)
{
  int v14; // r6@1
  int v15; // r3@1
  int v16; // r12@1
  int v17; // r2@1
  int v18; // r4@1
  int v19; // r6@1
  int v20; // r7@1
  unsigned int v21; // r3@1
  char *v22; // lr@11
  int v23; // r4@11
  unsigned int v24; // r5@11
  char *v25; // r3@20
  int v26; // r4@20
  unsigned int v27; // r1@20
  char *v28; // r2@27
  unsigned int v29; // r5@29
  char *v30; // r0@34
  int v31; // r1@38
  unsigned int v32; // r0@38
  int v33; // r1@47
  unsigned int v34; // r6@47
  int v35; // r1@56
  unsigned int v36; // r0@56
  float *result; // r0@63
  int v38; // r1@65
  unsigned int v39; // r2@65

  __asm
  {
    VMOV.F32        S10, #-1.0
    VLDR            S8, [R1,#4]
    VLDR            S4, [R1]
  }
  v14 = *((_DWORD *)this + a3 + 3) + a4;
  __asm { VMOV.F32        S1, S8 }
  v15 = a4 + *((_DWORD *)this + a3 + 4);
  __asm { VADD.F32        S0, S4, S10 }
  v16 = *((_DWORD *)this + v14 + 3) + a5;
  v17 = *((_DWORD *)this + v15 + 3);
  v18 = *((_DWORD *)this + v16 + 3);
  v19 = *((_DWORD *)this + v14 + 4);
  v20 = *((_DWORD *)this + v15 + 4);
  v21 = *((_DWORD *)this + v16 + 3) & 0xF;
    VLDR            S12, [R1,#8]
    VMOV.F32        S14, S8
  if ( !_CF )
    __asm { VMOVCC.F32      S14, S4 }
  if ( v21 >= 4 )
    if ( (v21 | 2) != 14 )
      _R1 = (const Vec3 *)((char *)_R1 + 8);
    __asm { VLDR            S1, [R1] }
  __asm { VNEG.F32        S3, S14 }
  if ( !(v18 & 1) )
    __asm { VMOVEQ.F32      S3, S14 }
    VNEG.F32        S5, S1
    VADD.F32        S6, S8, S10
  if ( _ZF )
    __asm { VMOVEQ.F32      S5, S1 }
  v22 = (char *)this + 4 * (v17 + a5);
    VADD.F32        S14, S5, S3
    VMOV.F32        S3, S8
  v23 = *((_DWORD *)v22 + 3);
  v24 = *((_DWORD *)v22 + 3) & 0xF;
  __asm { VLDR            S2, [SP,#0x18+arg_4] }
  if ( v24 < 8 )
    __asm { VMOVCC.F32      S1, S0 }
  if ( v24 >= 4 )
    __asm { VMOV.F32        S3, S12 }
    if ( (v24 | 2) == 14 )
      __asm { VMOVEQ.F32      S3, S0 }
  __asm { VNEG.F32        S5, S1 }
  if ( !(v23 & 1) )
    VNEG.F32        S7, S3
    VSUB.F32        S1, S5, S14
  if ( !(v23 & 2) )
    __asm { VMOVEQ.F32      S7, S3 }
  v25 = (char *)this + 4 * (v19 + a5);
    VADD.F32        S1, S1, S7
    VMUL.F32        S1, S1, S2
    VADD.F32        S14, S1, S14
    VMOV.F32        S1, S6
    VSTR            S14, [R6]
    VMOV.F32        S14, S6
  v26 = *((_DWORD *)v25 + 3);
  v27 = *((_DWORD *)v25 + 3) & 0xF;
  if ( v27 < 8 )
  if ( v27 >= 4 )
    __asm { VMOV.F32        S1, S12 }
    if ( (v27 | 2) == 14 )
      __asm { VMOVEQ.F32      S1, S4 }
  if ( !(v26 & 1) )
  v28 = (char *)this + 4 * (v20 + a5);
  if ( !(v26 & 2) )
    VMOV.F32        S3, S6
  v29 = *((_DWORD *)v28 + 3) & 0xF;
  __asm { VMOV.F32        S1, S6 }
  if ( v29 < 8 )
  if ( v29 >= 4 )
    if ( (v29 | 2) == 14 )
    VADD.F32        S10, S12, S10
    VNEG.F32        S12, S1
  v30 = (char *)this + 4 * v16;
    __asm { VMOVEQ.F32      S12, S1 }
    VNEG.F32        S5, S3
    VSUB.F32        S12, S12, S14
  if ( !(*((_DWORD *)v28 + 3) & 2) )
    __asm { VMOVEQ.F32      S5, S3 }
    VADD.F32        S12, S12, S5
    VMUL.F32        S12, S12, S2
    VADD.F32        S12, S12, S14
    VSTR            S12, [R1]
    VMOV.F32        S12, S8
  v31 = *((_DWORD *)v30 + 4);
  v32 = v31 & 0xF;
  if ( v32 < 8 )
    __asm { VMOVCC.F32      S12, S4 }
  if ( v32 >= 4 )
    __asm { VMOV.F32        S14, S10 }
    if ( (v32 | 2) == 14 )
      __asm { VMOVEQ.F32      S14, S4 }
  __asm { VNEG.F32        S1, S12 }
  if ( !(v31 & 1) )
    __asm { VMOVEQ.F32      S1, S12 }
  if ( !(v31 & 2) )
  v33 = *((_DWORD *)v22 + 4);
  __asm { VADD.F32        S12, S3, S1 }
  v34 = *((_DWORD *)v22 + 4) & 0xF;
  __asm { VMOV.F32        S14, S8 }
  if ( v34 < 8 )
    __asm { VMOVCC.F32      S14, S0 }
  if ( v34 >= 4 )
    __asm { VMOV.F32        S8, S10 }
    if ( (v34 | 2) == 14 )
      __asm { VMOVEQ.F32      S8, S0 }
  __asm { VNEG.F32        S1, S14 }
  if ( !(v33 & 1) )
    __asm { VMOVEQ.F32      S1, S14 }
  __asm { VNEG.F32        S3, S8 }
  if ( !(v33 & 2) )
    __asm { VMOVEQ.F32      S3, S8 }
    VSUB.F32        S8, S1, S12
    VADD.F32        S8, S8, S3
    VMUL.F32        S8, S8, S2
    VADD.F32        S8, S8, S12
    VMOV.F32        S12, S6
    VSTR            S8, [R0]
    VMOV.F32        S8, S6
  v35 = *((_DWORD *)v25 + 4);
  v36 = *((_DWORD *)v25 + 4) & 0xF;
  if ( v36 < 8 )
    __asm { VMOVCC.F32      S8, S4 }
  if ( v36 >= 4 )
    __asm { VMOV.F32        S12, S10 }
    if ( (v36 | 2) == 14 )
      __asm { VMOVEQ.F32      S12, S4 }
  __asm { VNEG.F32        S4, S8 }
  if ( !(v35 & 1) )
    __asm { VMOVEQ.F32      S4, S8 }
  __asm { VNEG.F32        S14, S12 }
  result = a10;
  if ( !(v35 & 2) )
    __asm { VMOVEQ.F32      S14, S12 }
  v38 = *((_DWORD *)v28 + 4);
  __asm { VADD.F32        S4, S14, S4 }
  v39 = v38 & 0xF;
  __asm { VMOV.F32        S8, S6 }
  if ( v39 < 8 )
    __asm { VMOVCC.F32      S8, S0 }
  if ( v39 >= 4 )
    if ( (v39 | 2) == 14 )
      __asm { VMOVEQ.F32      S10, S0 }
    __asm { VMOV.F32        S6, S10 }
  __asm { VNEG.F32        S0, S8 }
  if ( !(v38 & 1) )
    __asm { VMOVEQ.F32      S0, S8 }
    VNEG.F32        S10, S6
    VSUB.F32        S0, S0, S4
  if ( !(v38 & 2) )
    __asm { VMOVEQ.F32      S10, S6 }
    VADD.F32        S0, S0, S10
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S4
    VSTR            S0, [R0]
  return result;
}


int __fastcall ImprovedNoise::_readArea(int result, float *a2, const Vec3 *a3, int a4, int a5, int a6, const Vec3 *a7, float a8)
{
  int v12; // r0@4
  int v14; // r2@6
  int v18; // r10@10
  int v19; // r11@10
  int v23; // r0@13
  unsigned int v24; // r2@13
  int v26; // r2@19
  unsigned int v27; // r4@21
  int v28; // r0@30
  int v29; // r0@40
  unsigned int v30; // r2@40
  int v32; // r12@56
  int v38; // r6@62
  int v43; // r11@65
  int v46; // r4@68
  float v47; // [sp+4h] [bp-BCh]@0
  float *v48; // [sp+20h] [bp-A0h]@1
  int v49; // [sp+24h] [bp-9Ch]@62
  int v50; // [sp+28h] [bp-98h]@62
  int v51; // [sp+2Ch] [bp-94h]@1
  int v52; // [sp+34h] [bp-8Ch]@6
  int v53; // [sp+34h] [bp-8Ch]@63
  int v54; // [sp+38h] [bp-88h]@10
  float *v55; // [sp+38h] [bp-88h]@63
  float v56; // [sp+3Ch] [bp-84h]@70
  float v57; // [sp+48h] [bp-78h]@55
  float v58; // [sp+4Ch] [bp-74h]@55
  float v59; // [sp+50h] [bp-70h]@55
  float v60; // [sp+54h] [bp-6Ch]@55

  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, [SP,#0xC0+arg_C]
  }
  _R5 = a3;
  _R7 = (ImprovedNoise *)result;
  v51 = a4;
  v48 = a2;
  __asm { VDIV.F32        S16, S0, S2 }
  if ( _ZF )
    if ( a4 >= 1 )
    {
      __asm
      {
        VMOV.F32        S0, #6.0
        VMOV.F32        S2, #-15.0
      }
      v12 = 0;
        VMOV.F32        S4, #10.0
        VMOV.F32        S6, #-1.0
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v12 = a6;
      __asm { VLDR            S8, =0.0 }
      _R8 = 0;
      v14 = 0;
      v52 = 4 * v12;
      do
        __asm { VMOV            S10, R8 }
        _R0 = a7;
        __asm
        {
          VCVT.F32.S32    S10, S10
          VLDR            S12, [R5]
          VADD.F32        S10, S12, S10
          VLDR            S12, [R0]
          VMUL.F32        S10, S10, S12
          VLDR            S12, [R7]
          VADD.F32        S10, S10, S12
          VCVTR.S32.F32   S12, S10
          VMOV            R0, S12
          VCVT.F32.S32    S12, S12
          VCMPE.F32       S12, S10
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          --_R0;
          VMOV            S12, R0
        if ( !(_NF ^ _VF) )
          __asm { VSUB.F32        S10, S10, S12 }
          v54 = v14;
          _LR = 0;
          v18 = *((_DWORD *)_R7 + *((_DWORD *)_R7 + (unsigned __int8)_R0 + 3) + 3);
          __asm { VMUL.F32        S12, S10, S0 }
          v19 = *((_DWORD *)_R7 + *((_DWORD *)_R7 + (unsigned __int8)_R0 + 4) + 3);
          __asm { VMUL.F32        S14, S10, S10 }
          _R3 = a2;
          __asm
          {
            VADD.F32        S12, S12, S2
            VMUL.F32        S14, S14, S10
            VMUL.F32        S12, S12, S10
            VADD.F32        S12, S12, S4
            VMUL.F32        S12, S14, S12
            VADD.F32        S14, S10, S6
          }
          do
            __asm { VMOV            S1, LR }
            _R0 = a7;
            __asm
            {
              VMOV.F32        S11, S8
              VCVT.F32.S32    S1, S1
              VLDR            S3, [R5,#8]
              VADD.F32        S1, S3, S1
              VLDR            S3, [R0,#8]
              VMUL.F32        S1, S1, S3
              VLDR            S3, [R7,#8]
              VADD.F32        S1, S1, S3
              VCVTR.S32.F32   S3, S1
              VMOV            R4, S3
              VCVT.F32.S32    S3, S3
              VCMPE.F32       S3, S1
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              --_R4;
              VMOV            S3, R4
            v23 = (int)_R7 + 4 * (v18 + _R4);
            v24 = *(_DWORD *)(v23 + 12);
            _R6 = ~(v24 >> 3) & 1;
              VSUB.F32        S1, S1, S3
              VMOV            S5, R6
              VCVT.F32.S32    S5, S5
              VMUL.F32        S3, S1, S0
              VMUL.F32        S7, S5, S10
              VADD.F32        S3, S3, S2
            if ( _CF )
              __asm { VMOV.F32        S11, S1 }
              if ( (v24 & 0xF | 2) == 14 )
                __asm { VMOVEQ.F32      S11, S10 }
              VMUL.F32        S9, S3, S1
              VNEG.F32        S3, S7
            if ( _ZF )
              __asm { VMOVEQ.F32      S3, S7 }
            __asm { VNEG.F32        S13, S11 }
            v26 = (int)_R7 + 4 * (v19 + _R4);
              __asm { VMOVEQ.F32      S13, S11 }
              VMUL.F32        S5, S1, S1
              VADD.F32        S3, S13, S3
              VMOV.F32        S13, S8
            v27 = *(_DWORD *)(v26 + 12) & 0xF;
            __asm { VMOV.F32        S11, S8 }
            if ( v27 < 8 )
              __asm { VMOVCC.F32      S11, S14 }
            if ( v27 >= 4 )
              __asm { VMOV.F32        S13, S1 }
              if ( (v27 | 2) == 14 )
                __asm { VMOVEQ.F32      S13, S14 }
              VMUL.F32        S7, S5, S1
              VNEG.F32        S5, S11
              __asm { VMOVEQ.F32      S5, S11 }
              VNEG.F32        S15, S13
              VSUB.F32        S5, S5, S3
            if ( !(*(_DWORD *)(v26 + 12) & 2) )
              __asm { VMOVEQ.F32      S15, S13 }
            __asm { VADD.F32        S9, S9, S4 }
            v28 = *(_DWORD *)(v23 + 16);
            if ( (v28 & 0xFu) < 8 )
              __asm { VMOVCC.F32      S11, S10 }
              VADD.F32        S5, S5, S15
              VMOV.F32        S15, S8
              VMUL.F32        S13, S5, S12
              VADD.F32        S5, S1, S6
              __asm { VMOV.F32        S15, S5 }
              if ( (v28 & 0xF | 2) == 14 )
                __asm { VMOVEQ.F32      S15, S10 }
              VMUL.F32        S1, S7, S9
              VNEG.F32        S7, S11
              __asm { VMOVEQ.F32      S7, S11 }
              VNEG.F32        S13, S15
            if ( !(v28 & 2) )
              __asm { VMOVEQ.F32      S13, S15 }
              VADD.F32        S7, S13, S7
            v29 = *(_DWORD *)(v26 + 16);
            __asm { VMOV.F32        S9, S8 }
            v30 = v29 & 0xF;
            if ( v30 < 8 )
              __asm { VMOVCC.F32      S9, S14 }
            if ( v30 >= 4 )
              if ( (v30 | 2) == 14 )
                __asm { VMOVEQ.F32      S5, S14 }
              __asm { VMOV.F32        S11, S5 }
            __asm { VNEG.F32        S5, S9 }
            if ( !(v29 & 1) )
              __asm { VMOVEQ.F32      S5, S9 }
              VNEG.F32        S13, S11
              VSUB.F32        S5, S5, S7
            if ( !(v29 & 2) )
            __asm { VSUB.F32        S7, S7, S3 }
            ++_LR;
              VADD.F32        S5, S5, S13
              VMUL.F32        S5, S5, S12
              VADD.F32        S5, S7, S5
              VMUL.F32        S1, S1, S5
              VLDR            S3, [R3]
              VMUL.F32        S1, S1, S16
              VSTMIA          R3!, {S1}
          while ( !_ZF );
          a4 = v51;
          v14 = v54 + a6;
        result = v52;
        ++_R8;
        a2 = (float *)((char *)a2 + v52);
      while ( _R8 != a4 );
    }
  else
    result = 0;
    v59 = 0.0;
    v60 = 0.0;
    v57 = 0.0;
    v58 = 0.0;
        VLDR            S0, =0.0
        VMOV.F32        S18, #6.0
        VMOV.F32        S20, #-15.0
        VMOV.F32        S22, #10.0
      _R4 = 0;
      __asm { VMOV.F32        S2, S0 }
      v32 = 0;
        VMOV.F32        S4, S0
        VMOV.F32        S6, S0
      result = -1;
        __asm { VMOV            S8, R4 }
        _R2 = a7;
          VCVT.F32.S32    S8, S8
          VLDR            S10, [R5]
          VADD.F32        S8, S10, S8
          VLDR            S10, [R2]
          VMUL.F32        S8, S8, S10
          VLDR            S10, [R7]
          VADD.F32        S8, S8, S10
          VCVTR.S32.F32   S10, S8
          VMOV            R2, S10
          VCMPE.F32       S10, S8
          --_R2;
          VMOV            S10, R2
          _VF = __OFSUB__(a5, 1);
          _NF = a5 - 1 < 0;
          __asm { VSUB.F32        S24, S8, S10 }
          _R10 = &a2[v32];
          v38 = (unsigned __int8)_R2;
          _R3 = 0;
          v50 = _R4;
          v49 = v32;
            VMUL.F32        S8, S24, S18
            VMUL.F32        S10, S24, S24
            VADD.F32        S8, S8, S20
            VMUL.F32        S10, S10, S24
            VMUL.F32        S8, S8, S24
            VADD.F32        S8, S8, S22
            VMUL.F32        S26, S10, S8
            __asm { VMOV            S8, R3 }
            v53 = _R3;
            v55 = _R10;
            _R1 = a7;
            _R8 = 0;
              VCVT.F32.S32    S8, S8
              VLDR            S10, [R5,#8]
              VADD.F32        S8, S10, S8
              VLDR            S10, [R1,#8]
              VMUL.F32        S8, S8, S10
              VLDR            S10, [R7,#8]
              VADD.F32        S8, S8, S10
              VCVTR.S32.F32   S10, S8
              VMOV            R1, S10
              VCVT.F32.S32    S10, S10
              VCMPE.F32       S10, S8
              --_R1;
            __asm { VMOV            S10, R1 }
            v43 = _R1;
              VSUB.F32        S28, S8, S10
              VMUL.F32        S8, S28, S18
              VMUL.F32        S10, S28, S28
              VADD.F32        S8, S8, S20
              VMUL.F32        S10, S10, S28
              VMUL.F32        S8, S8, S28
              VADD.F32        S8, S8, S22
              VMUL.F32        S30, S10, S8
            do
              __asm { VMOV            S8, R8 }
              _R1 = a7;
              __asm
              {
                VCVT.F32.S32    S8, S8
                VLDR            S10, [R5,#4]
                VADD.F32        S8, S10, S8
                VLDR            S10, [R1,#4]
                VMUL.F32        S8, S8, S10
                VLDR            S10, [R7,#4]
                VADD.F32        S8, S8, S10
                VCVTR.S32.F32   S10, S8
                VMOV            R1, S10
                VCVT.F32.S32    S10, S10
                VCMPE.F32       S10, S8
                VMRS            APSR_nzcv, FPSCR
              }
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                --_R1;
              __asm { VMOV            S10, R1 }
              v46 = (unsigned __int8)_R1;
                VSUB.F32        S8, S8, S10
                VMUL.F32        S10, S8, S18
                VMUL.F32        S12, S8, S8
                VADD.F32        S10, S10, S20
                VMUL.F32        S12, S12, S8
                VMUL.F32        S10, S10, S8
                VADD.F32        S10, S10, S22
                VMUL.F32        S17, S12, S10
              if ( _ZF || (unsigned __int8)_R1 != result )
                __asm
                {
                  VSTR            S24, [SP,#0xC0+var_84]
                  VSTR            S8, [SP,#0xC0+var_80]
                  VSTR            S26, [SP,#0xC0+var_BC]
                  VSTR            S28, [SP,#0xC0+var_7C]
                }
                j_ImprovedNoise::_blendCubeCorners(
                  _R7,
                  (const Vec3 *)&v56,
                  v38,
                  (unsigned __int8)_R1,
                  v43,
                  v47,
                  &v60,
                  &v59,
                  &v58,
                  &v57);
                __asm { VLDR            S0, [SP,#0xC0+var_78] }
                result = v46;
                  VLDR            S2, [SP,#0xC0+var_74]
                  VLDR            S4, [SP,#0xC0+var_70]
                  VLDR            S6, [SP,#0xC0+var_6C]
              __asm { VSUB.F32        S8, S4, S6 }
              ++_R8;
                VSUB.F32        S10, S0, S2
                VMUL.F32        S8, S8, S17
                VMUL.F32        S10, S10, S17
                VADD.F32        S8, S8, S6
                VSUB.F32        S12, S2, S8
                VADD.F32        S10, S12, S10
                VMUL.F32        S10, S30, S10
                VLDR            S10, [R10]
                VMUL.F32        S8, S8, S16
                VSTMIA          R10!, {S8}
            while ( !_ZF );
            _R3 = v53 + 1;
            _R10 = &v55[a5];
          while ( v53 + 1 != a6 );
          v32 = v49 + a6 * a5;
          a2 = v48;
          _R4 = v50;
        ++_R4;
      while ( _R4 != a4 );
  return result;
}
