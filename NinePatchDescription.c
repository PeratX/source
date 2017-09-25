

int __fastcall NinePatchDescription::NinePatchDescription(int result, float _R1, float _R2, float _R3, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13)
{
  __asm
  {
    VLDR            S4, [SP,#arg_0]
    VMOV            S6, R1
    VMOV            S8, R3
    VLDR            S12, [SP,#arg_4]
    VMOV            S10, R2
    VLDR            S14, [SP,#arg_8]
    VLDR            S1, [SP,#arg_C]
    VADD.F32        S8, S8, S6
    VLDR            S3, [SP,#arg_10]
    VADD.F32        S4, S4, S6
    VADD.F32        S6, S12, S6
    VLDR            S0, [SP,#arg_18]
    VADD.F32        S14, S14, S10
    VLDR            S2, [SP,#arg_1C]
    VADD.F32        S1, S1, S10
    VLDR            S12, [SP,#arg_20]
    VADD.F32        S10, S3, S10
    VLDR            S5, [SP,#arg_14]
  }
  *(float *)result = _R1;
    VSTR            S8, [R0,#4]
    VSTR            S4, [R0,#8]
    VSTR            S6, [R0,#0xC]
  *(float *)(result + 16) = _R2;
    VSTR            S14, [R0,#0x14]
    VSTR            S1, [R0,#0x18]
    VSTR            S10, [R0,#0x1C]
    VSTR            S5, [R0,#0x20]
    VSTR            S0, [R0,#0x24]
    VSTR            S2, [R0,#0x28]
    VSTR            S12, [R0,#0x2C]
  *(_DWORD *)(result + 48) = -1;
  *(_DWORD *)(result + 52) = -1;
  return result;
}


NinePatchDescription *__fastcall NinePatchDescription::transformUVForImage(NinePatchDescription *this, const mce::ImageBuffer *a2)
{
  mce::ImageBuffer *v2; // r5@1
  char *v5; // r0@1

  v2 = a2;
  _R4 = this;
  _R6 = *(_DWORD *)mce::ImageBuffer::getImageDescription(a2);
  v5 = mce::ImageBuffer::getImageDescription(v2);
  _R1 = *((_DWORD *)_R4 + 12);
  _R0 = *((_DWORD *)v5 + 1);
  if ( _R1 < 0 )
  {
    __asm { VMOV.F32        S0, #1.0 }
    *((_DWORD *)_R4 + 12) = 1;
    *((_DWORD *)_R4 + 13) = 1;
    __asm { VMOV.F32        S2, S0 }
  }
  else
    __asm
    {
      VLDR            S0, [R4,#0x34]
      VMOV            S2, R1
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S0, S0
    }
  __asm
    VMOV            S4, R6
    VMOV            S6, R0
    VCVT.F32.S32    S4, S4
    VDIV.F32        S2, S2, S4
    VLDR            S4, [R4]
    VMUL.F32        S4, S4, S2
    VSTR            S4, [R4]
    VLDR            S4, [R4,#4]
    VCVT.F32.S32    S6, S6
    VDIV.F32        S0, S0, S6
    VSTR            S4, [R4,#4]
    VLDR            S4, [R4,#8]
    VSTR            S4, [R4,#8]
    VLDR            S4, [R4,#0xC]
    VMUL.F32        S2, S4, S2
    VSTR            S2, [R4,#0xC]
    VLDR            S2, [R4,#0x10]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R4,#0x10]
    VLDR            S2, [R4,#0x14]
    VSTR            S2, [R4,#0x14]
    VLDR            S2, [R4,#0x18]
    VSTR            S2, [R4,#0x18]
    VLDR            S2, [R4,#0x1C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x1C]
  *((_DWORD *)_R4 + 12) = _R6;
  *((_DWORD *)_R4 + 13) = _R0;
  return _R4;
}


int __fastcall NinePatchDescription::createSymmetrical(int result, int _R1, int _R2, int _R3, int a5, int a6)
{
  _R12 = a5;
  _LR = *(_DWORD *)(_R3 + 8);
  __asm
  {
    VLDR            S2, [R3,#4]
    VMOV            S4, R12
  }
  _R4 = _LR - a5;
    VLDR            S0, [R3]
    VMOV            S6, LR
    VCVT.F32.S32    S1, S4
  _R5 = a6;
    VMOV            S4, R4
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S4, S4
  _R3 = *(_DWORD *)(_R3 + 12);
  __asm { VMOV            S8, R5 }
  _R5 = _R3 - a6;
    VCVT.F32.S32    S6, S6
    VCVT.F32.S32    S3, S8
    VMOV            S10, R3
    VMOV            S8, R5
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S8, S8
    VCVT.F32.S32    S5, S10
    VSTR            S0, [R0]
    VADD.F32        S10, S0, S1
    VADD.F32        S12, S4, S0
    VADD.F32        S14, S6, S0
    VADD.F32        S4, S2, S3
    VADD.F32        S6, S8, S2
    VADD.F32        S8, S5, S2
    VSTR            S10, [R0,#4]
    VSTR            S12, [R0,#8]
    VSTR            S14, [R0,#0xC]
    VSTR            S2, [R0,#0x10]
    VSTR            S4, [R0,#0x14]
    VSTR            S6, [R0,#0x18]
    VSTR            S8, [R0,#0x1C]
    VSTR            S1, [R0,#0x20]
    VSTR            S1, [R0,#0x24]
    VSTR            S3, [R0,#0x28]
    VSTR            S3, [R0,#0x2C]
  *(_DWORD *)(result + 48) = -1;
  *(_DWORD *)(result + 52) = -1;
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV            S3, R1
      VMOV            S5, R2
      VCVT.F32.S32    S3, S3
      VMOV.F32        S1, #1.0
      VCVT.F32.S32    S5, S5
      VDIV.F32        S3, S1, S3
      VDIV.F32        S1, S1, S5
      VMUL.F32        S0, S0, S3
      VMUL.F32        S10, S10, S3
      VMUL.F32        S12, S12, S3
      VMUL.F32        S14, S14, S3
      VMUL.F32        S2, S2, S1
      VMUL.F32        S4, S4, S1
      VMUL.F32        S6, S6, S1
      VMUL.F32        S8, S8, S1
      VSTR            S0, [R0]
      VSTR            S10, [R0,#4]
      VSTR            S12, [R0,#8]
      VSTR            S14, [R0,#0xC]
      VSTR            S2, [R0,#0x10]
      VSTR            S4, [R0,#0x14]
      VSTR            S6, [R0,#0x18]
      VSTR            S8, [R0,#0x1C]
    }
    *(_QWORD *)(result + 48) = *(_QWORD *)&_R1;
  return result;
}


int __fastcall NinePatchDescription::transformUVForImageSize(int result, int _R1, int _R2)
{
  _R3 = *(_DWORD *)(result + 48);
  if ( _R3 < 0 )
  {
    __asm { VMOV.F32        S0, #1.0 }
    *(_DWORD *)(result + 48) = 1;
    *(_DWORD *)(result + 52) = 1;
    __asm { VMOV.F32        S2, S0 }
  }
  else
    __asm
    {
      VLDR            S0, [R0,#0x34]
      VMOV            S2, R3
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S0, S0
    }
  __asm
    VMOV            S4, R1
    VMOV            S6, R2
    VCVT.F32.S32    S4, S4
    VDIV.F32        S2, S2, S4
    VLDR            S4, [R0]
    VMUL.F32        S4, S4, S2
    VSTR            S4, [R0]
    VLDR            S4, [R0,#4]
    VCVT.F32.S32    S6, S6
    VDIV.F32        S0, S0, S6
    VSTR            S4, [R0,#4]
    VLDR            S4, [R0,#8]
    VSTR            S4, [R0,#8]
    VLDR            S4, [R0,#0xC]
    VMUL.F32        S2, S4, S2
    VSTR            S2, [R0,#0xC]
    VLDR            S2, [R0,#0x10]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0,#0x10]
    VLDR            S2, [R0,#0x14]
    VSTR            S2, [R0,#0x14]
    VLDR            S2, [R0,#0x18]
    VSTR            S2, [R0,#0x18]
    VLDR            S2, [R0,#0x1C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0,#0x1C]
  *(_QWORD *)(result + 48) = *(_QWORD *)&_R1;
  return result;
}
