

void __fastcall Vec3::clamp(Vec3 *this, const Vec3 *_R1, const Vec3 *_R2, const Vec3 *_R3)
{
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S6, [R2]
    VLDR            S2, [R1,#4]
    VCMPE.F32       S0, S6
    VLDR            S8, [R2,#4]
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S8
    VLDR            S4, [R1,#8]
    VLDR            S10, [R2,#8]
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S0 }
    VCMPE.F32       S4, S10
    __asm { VMOVGT.F32      S8, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S10, S4 }
    VLDR            S12, [R3]
    VLDR            S14, [R3,#4]
    VCMPE.F32       S0, S12
    VLDR            S1, [R3,#8]
    VCMPE.F32       S2, S14
    __asm { VMOVGT.F32      S6, S12 }
    VCMPE.F32       S4, S1
    __asm { VMOVGT.F32      S8, S14 }
    __asm { VMOVGT.F32      S10, S1 }
    VSTR            S6, [R0]
    VSTR            S8, [R0,#4]
    VSTR            S10, [R0,#8]
}


int __fastcall Vec3::minComponent(Vec3 *this)
{
  int result; // r0@5

  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S2, S0 }
    VCMPE.F32       S2, S4
    __asm { VMOVLT.F32      S4, S2 }
  __asm { VMOV            R0, S4 }
  return result;
}


signed int __fastcall Vec3::clampAlongNormal(Vec3 *this, const Vec3 *_R1, const Vec3 *_R2, const Vec3 *_R3, const Vec3 *a5, Vec3 *a6)
{
  signed int result; // r0@67

  __asm
  {
    VLDR            S0, [R2]
    VLDR            S14, [R0]
    VLDR            S4, [R2,#8]
    VMOV.F32        S5, S0
    VCMPE.F32       S14, S0
    VLDR            S8, [R0,#8]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S3, S4
    VCMPE.F32       S8, S4
    VLDR            S12, [R0,#4]
    VLDR            S2, [R2,#4]
    VMOV.F32        S7, S2
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S5, S14 }
    VCMPE.F32       S12, S2
    __asm { VMOVGT.F32      S3, S8 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S7, S12 }
    VLDR            S1, [R3]
    VLDR            S6, [R3,#8]
    VCMPE.F32       S14, S1
    VLDR            S10, [R3,#4]
    VCMPE.F32       S8, S6
    __asm { VMOVGT.F32      S5, S1 }
    VCMPE.F32       S12, S10
    __asm { VMOVGT.F32      S3, S6 }
    VCMPE.F32       S5, S14
    __asm { VMOVGT.F32      S7, S10 }
  if ( _ZF )
    __asm
    {
      VCMPEEQ.F32     S7, S12
      VMRSEQ          APSR_nzcv, FPSCR
      VCMPE.F32       S3, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      goto LABEL_71;
    VSUB.F32        S5, S5, S14
    VCMPE.F32       S5, #0.0
  if ( !_ZF )
      VCMPE.F32       S5, #0.0
      VLDR            S11, =0.0
      VMOV.F32        S9, #-1.0
      VLDR            S13, [R1]
      VMOV.F32        S15, S11
      VCMPE.F32       S13, #0.0
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S15, S9 }
      __asm { VMOVLT.F32      S11, S9 }
      VMOV.F32        S9, #1.0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S15, S9 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S11, S9 }
      VCMPE.F32       S11, S15
    if ( !_ZF )
      goto LABEL_72;
    VSUB.F32        S7, S7, S12
    VCMPE.F32       S7, #0.0
      VCMPE.F32       S7, #0.0
      VLDR            S13, [R1,#4]
    VSUB.F32        S9, S3, S8
    VLDR            S3, [R1,#8]
    VCMPE.F32       S9, #0.0
      VCMPE.F32       S9, #0.0
      VMOV.F32        S13, #-1.0
      VCMPE.F32       S3, #0.0
      __asm { VMOVLT.F32      S15, S13 }
      __asm { VMOVLT.F32      S11, S13 }
      VMOV.F32        S13, #1.0
      __asm { VMOVGT.F32      S15, S13 }
      __asm { VMOVGT.F32      S11, S13 }
    VLDR            S11, [R1]
    VLDR            S13, [R1,#4]
    VDIV.F32        S5, S5, S11
    VDIV.F32        S7, S7, S13
    VCMPE.F32       S5, S7
    VDIV.F32        S9, S9, S3
    __asm { VMOVGT.F32      S7, S5 }
    VCMPE.F32       S7, S9
    __asm { VMOVGT.F32      S9, S7 }
    VMUL.F32        S5, S9, S11
    VMUL.F32        S7, S9, S13
    VMUL.F32        S3, S9, S3
    VADD.F32        S14, S5, S14
    VADD.F32        S12, S7, S12
    VADD.F32        S8, S3, S8
    __asm { VMOVGT.F32      S0, S14 }
    __asm { VMOVGT.F32      S2, S12 }
    __asm { VMOVGT.F32      S4, S8 }
    __asm { VMOVGT.F32      S0, S1 }
    VSUB.F32        S0, S14, S0
    VMUL.F32        S0, S0, S0
    __asm { VMOVGT.F32      S2, S10 }
    VSUB.F32        S2, S12, S2
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.01
    __asm { VMOVGT.F32      S4, S6 }
    VSUB.F32        S4, S8, S4
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S0, S4
    VSQRT.F32       S0, S0
    VCMPE.F32       S0, S2
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_71:
      VSTR            S14, [R0]
      VSTR            S12, [R0,#4]
      VSTR            S8, [R0,#8]
    result = 1;
  else
LABEL_72:
    result = 0;
  return result;
}


void __fastcall Vec3::Vec3(int a1, int _R1)
{
  Vec3::Vec3(a1, _R1);
}


int __fastcall Vec3::xz(int result, int a2)
{
  __int64 v2; // r2@1
  int v3; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)result = v2;
  *(_DWORD *)(result + 8) = v3;
  return result;
}


void __fastcall Vec3::clamp(Vec3 *this, const Vec3 *_R1, const Vec3 *_R2, const Vec3 *_R3)
{
  Vec3::clamp(this, _R1, _R2, _R3);
}


double __fastcall Vec3::rotationFromDirection(__int64 this, double _R2)
{
  double result; // r0@1

  _R5 = HIDWORD(this);
  __asm
  {
    VLDR            S0, [R5]
    VLDR            S2, [R5,#8]
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VCVT.F64.F32    D1, S2
    VCVT.F64.F32    D0, S0
    VMOV            R0, R1, D1
    VMOV            R2, R3, D0
    VADD.F32        S4, S6, S4
    VSQRT.F32       S16, S4
  }
  _R0 = j_atan2(*(double *)&this, _R2);
  __asm { VLDR            S0, [R5,#4] }
  _R6 = LODWORD(_R0);
    VCVT.F64.F32    D1, S16
    VMOV            R0, R1, D0
    VMOV            R2, R3, D1
  result = j_atan2(_R0, _R2);
    VMOV            D1, R0, R1
    VMOV            D2, R6, R7
  _R2 = &mce::Math::RADDEG;
    VLDR            S0, [R2]
    VMUL.F64        D1, D1, D0
    VMUL.F64        D0, D0, D2
    VCVT.F32.F64    S2, D1
    VCVT.F32.F64    S0, D0
    VLDR            S4, =-90.0
    VNEG.F32        S2, S2
    VADD.F32        S0, S0, S4
    VSTR            S2, [R4]
    VSTR            S0, [R4,#4]
  return result;
}


void __fastcall Vec3::Vec3(int a1, int _R1)
{
  Vec3::Vec3(a1, _R1);
}


int __fastcall Vec3::directionFromRotation(Vec3 *this, float a2, float _R2)
{
  Vec3 *v3; // r4@1
  float v13; // r1@1
  mce::Math *v16; // r5@1
  float v18; // r1@1
  int result; // r0@1

  v3 = this;
  _R5 = a2;
  __asm { VMOV            S0, R2 }
  _R0 = &mce::Math::DEGRAD;
  __asm { VLDR            S16, [R0] }
  _R0 = &mce::Math::PI;
  __asm
  {
    VNMUL.F32       S0, S16, S0
    VLDR            S2, [R0]
    VSUB.F32        S0, S0, S2
    VMOV            R6, S0
  }
  _R7 = j_mce::Math::cos(_R6, COERCE_FLOAT(&mce::Math::PI));
  _R0 = j_mce::Math::sin(_R6, v13);
    VMOV            S0, R5
    VMUL.F32        S0, S16, S0
    VMOV            S16, R0
    VMOV            R1, S0
  v16 = (mce::Math *)(LODWORD(_R1) ^ 0x80000000);
  _R0 = j_mce::Math::cos((mce::Math *)(LODWORD(_R1) ^ 0x80000000), _R1) ^ 0x80000000;
    VMOV            S2, R7
    VMOV            S0, R0
    VMUL.F32        S16, S16, S0
    VMUL.F32        S18, S2, S0
  result = j_mce::Math::sin(v16, v18);
  __asm { VSTR            S16, [R4] }
  *((_DWORD *)v3 + 1) = result;
  __asm { VSTR            S18, [R4,#8] }
  return result;
}


void __fastcall Vec3::Vec3(int a1, int _R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VCVT.F32.S32    S0, S0
    VSTR            S0, [R0]
    VLDR            S0, [R1,#4]
    VSTR            S0, [R0,#4]
    VLDR            S0, [R1,#8]
    VSTR            S0, [R0,#8]
  }
}


void __fastcall Vec3::Vec3(int a1, int _R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VCVT.F32.S32    S0, S0
    VSTR            S0, [R0]
    VLDR            S0, [R1,#4]
    VSTR            S0, [R0,#4]
    VLDR            S0, [R1,#8]
    VSTR            S0, [R0,#8]
  }
}


_DWORD *__fastcall Vec3::toJsonString(Vec3 *this, int a2)
{
  int *v3; // r5@1
  char *v10; // r7@1
  char *v13; // r7@1
  char *v16; // r0@1
  void **v17; // r0@1
  void *v18; // r0@1
  unsigned int *v20; // r2@3
  signed int v21; // r1@5
  void **v22; // [sp+4h] [bp-D4h]@1
  int v23; // [sp+8h] [bp-D0h]@2
  void **v24; // [sp+Ch] [bp-CCh]@1
  void **v25; // [sp+10h] [bp-C8h]@1
  int v26; // [sp+2Ch] [bp-ACh]@2
  int v27; // [sp+34h] [bp-A4h]@1
  int v28; // [sp+38h] [bp-A0h]@2

  _R6 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v22, 24);
  sub_21CBF38((char *)&v24, (int)"[", 1);
  __asm
  {
    VLDR            S0, [R6]
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  }
  v10 = sub_21CC9F0((char *)&v24);
  sub_21CBF38(v10, (int)", ", 2);
    VLDR            S0, [R6,#4]
  v13 = sub_21CC9F0(v10);
  sub_21CBF38(v13, (int)", ", 2);
    VLDR            S0, [R6,#8]
  v16 = sub_21CC9F0(v13);
  sub_21CBF38(v16, (int)"]", 1);
  sub_21CFED8(v3, (int)&v25);
  v17 = off_26D3F84;
  v22 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v22) = off_26D3F80[0];
  v24 = v17;
  v25 = &off_27734E8;
  v18 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v25 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v26);
  v22 = (void **)off_26D3F68;
  *(void ***)((char *)&v22 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v23 = 0;
  return sub_21B6560(&v28);
}


int __fastcall Vec3::maxComponent(Vec3 *this)
{
  int result; // r0@5

  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
    VCMPE.F32       S2, S4
    __asm { VMOVGT.F32      S4, S2 }
  __asm { VMOV            R0, S4 }
  return result;
}


int __fastcall Vec3::directionFromRotation(int a1, float _R1)
{
  int v2; // r4@1
  float v11; // r1@1
  mce::Math *v14; // r5@1
  float v16; // r1@1
  int result; // r0@1

  v2 = a1;
  __asm
  {
    VLDR            S0, [R1,#4]
    VLDR            S16, [R1]
  }
  _R0 = &mce::Math::DEGRAD;
  __asm { VLDR            S18, [R0] }
  _R0 = &mce::Math::PI;
    VNMUL.F32       S0, S0, S18
    VLDR            S2, [R0]
    VSUB.F32        S0, S0, S2
    VMOV            R5, S0
  _R6 = j_mce::Math::cos(_R5, _R1);
  _R0 = j_mce::Math::sin(_R5, v11);
    VMUL.F32        S0, S16, S18
    VMOV            S16, R0
    VMOV            R1, S0
  v14 = (mce::Math *)(LODWORD(_R1) ^ 0x80000000);
  _R0 = j_mce::Math::cos((mce::Math *)(LODWORD(_R1) ^ 0x80000000), _R1) ^ 0x80000000;
    VMOV            S2, R6
    VMOV            S0, R0
    VMUL.F32        S16, S16, S0
    VMUL.F32        S18, S2, S0
  result = j_mce::Math::sin(v14, v16);
  __asm { VSTR            S16, [R4] }
  *(_DWORD *)(v2 + 4) = result;
  __asm { VSTR            S18, [R4,#8] }
  return result;
}


signed int __fastcall Vec3::isNan(Vec3 *this, float a2)
{
  Vec3 *v2; // r4@1
  float v3; // r1@1
  float v4; // r1@2
  signed int result; // r0@3

  v2 = this;
  if ( j_mce::Math::isNan(*(mce::Math **)this, a2) || j_mce::Math::isNan(*((mce::Math **)v2 + 1), v3) )
    result = 1;
  else
    result = j_mce::Math::isNan(*((mce::Math **)v2 + 2), v4);
  return result;
}


_DWORD *__fastcall Vec3::toString(Vec3 *this, int a2)
{
  int *v3; // r5@1
  char *v10; // r7@1
  char *v13; // r7@1
  char *v16; // r0@1
  void **v17; // r0@1
  void *v18; // r0@1
  unsigned int *v20; // r2@3
  signed int v21; // r1@5
  void **v22; // [sp+4h] [bp-D4h]@1
  int v23; // [sp+8h] [bp-D0h]@2
  void **v24; // [sp+Ch] [bp-CCh]@1
  void **v25; // [sp+10h] [bp-C8h]@1
  int v26; // [sp+2Ch] [bp-ACh]@2
  int v27; // [sp+34h] [bp-A4h]@1
  int v28; // [sp+38h] [bp-A0h]@2

  _R6 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v22, 24);
  sub_21CBF38((char *)&v24, (int)"Vec3(", 5);
  __asm
  {
    VLDR            S0, [R6]
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  }
  v10 = sub_21CC9F0((char *)&v24);
  sub_21CBF38(v10, (int)",", 1);
    VLDR            S0, [R6,#4]
  v13 = sub_21CC9F0(v10);
  sub_21CBF38(v13, (int)",", 1);
    VLDR            S0, [R6,#8]
  v16 = sub_21CC9F0(v13);
  sub_21CBF38(v16, (int)")", 1);
  sub_21CFED8(v3, (int)&v25);
  v17 = off_26D3F84;
  v22 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v22) = off_26D3F80[0];
  v24 = v17;
  v25 = &off_27734E8;
  v18 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v25 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v26);
  v22 = (void **)off_26D3F68;
  *(void ***)((char *)&v22 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v23 = 0;
  return sub_21B6560(&v28);
}
