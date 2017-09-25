

char *__fastcall Frustum::getNearClippingPlaneEdges(Frustum *this)
{
  return (char *)this + 96;
}


int __fastcall Frustum::getFrustum(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a2;
  v3 = a1;
  j___aeabi_memclr4_0(a1, 192);
  return j_Frustum::calculateFrustum(v3, v2);
}


int __fastcall Frustum::normalizePlane(int a1, int a2)
{
  int result; // r0@1

  result = a1 + 16 * a2;
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VMUL.F32        S6, S0, S0
    VLDR            S4, [R0,#8]
    VMUL.F32        S8, S2, S2
    VMUL.F32        S10, S4, S4
    VADD.F32        S6, S8, S6
    VMOV.F32        S8, #1.0
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VDIV.F32        S6, S8, S6
    VMUL.F32        S0, S6, S0
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
    VLDR            S0, [R0,#0xC]
    VMUL.F32        S0, S0, S6
    VSTR            S0, [R0,#0xC]
  }
  return result;
}


int __fastcall Frustum::Frustum(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  j___aeabi_memclr4_0(a1 + 96, 96);
  return v1;
}


char *__fastcall Frustum::getFarClippingPlaneEdges(Frustum *this)
{
  return (char *)this + 144;
}


int __fastcall Frustum::getFrustum(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r8@1
  int v6; // r5@1
  int v7; // r7@1
  int v9; // [sp+0h] [bp-98h]@1
  char v10; // [sp+40h] [bp-58h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  j___aeabi_memclr4_0(a1, 192);
  j_glm::detail::operator*<float>((int)&v9, v4, v6);
  j_glm::detail::operator*<float>((int)&v10, (int)&v9, v5);
  return j_Frustum::calculateFrustum(v7, (int)&v10);
}


signed int __fastcall Frustum::sphereInFrustum(int _R0, int _R1, int a3)
{
  signed int result; // r0@6

  __asm
  {
    VLDR            S6, [R0]
    VLDR            S0, [R1]
    VLDR            S8, [R0,#4]
    VLDR            S2, [R1,#4]
    VMUL.F32        S6, S0, S6
    VLDR            S4, [R1,#8]
  }
  _R1 = a3 ^ 0x80000000;
    VMUL.F32        S8, S2, S8
    VLDR            S10, [R0,#8]
    VLDR            S12, [R0,#0xC]
    VMUL.F32        S10, S4, S10
    VADD.F32        S6, S8, S6
    VADD.F32        S6, S6, S10
    VADD.F32        S8, S6, S12
    VMOV            S6, R1
    VCMPE.F32       S8, S6
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    goto LABEL_10;
    VLDR            S8, [R0,#0x10]
    VLDR            S10, [R0,#0x14]
    VMUL.F32        S8, S0, S8
    VLDR            S12, [R0,#0x18]
    VMUL.F32        S10, S2, S10
    VLDR            S14, [R0,#0x1C]
    VMUL.F32        S12, S4, S12
    VADD.F32        S8, S10, S8
    VADD.F32        S8, S8, S12
    VADD.F32        S8, S8, S14
    VLDR            S8, [R0,#0x20]
    VLDR            S10, [R0,#0x24]
    VLDR            S12, [R0,#0x28]
    VLDR            S14, [R0,#0x2C]
    VLDR            S8, [R0,#0x30]
    VLDR            S10, [R0,#0x34]
    VLDR            S12, [R0,#0x38]
    VLDR            S14, [R0,#0x3C]
    VLDR            S8, [R0,#0x40]
    VLDR            S10, [R0,#0x44]
    VMUL.F32        S0, S0, S8
    VLDR            S12, [R0,#0x48]
    VMUL.F32        S2, S2, S10
    VLDR            S14, [R0,#0x4C]
    VMUL.F32        S4, S4, S12
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VADD.F32        S0, S0, S14
    VCMPE.F32       S0, S6
LABEL_10:
    result = 0;
  else
    result = 1;
  return result;
}


signed int __fastcall Frustum::cubeInFrustum(int a1, int _R1, int _R2)
{
  signed int v8; // r1@1

  __asm { VLDR            S0, [R2] }
  _R0 = a1 + 8;
  __asm
  {
    VLDR            S2, [R2,#4]
    VLDR            S4, [R2,#8]
    VLDR            S6, [R1]
    VLDR            S8, [R1,#4]
    VLDR            S10, [R1,#8]
  }
  v8 = 0;
  while ( 1 )
    __asm
    {
      VLDR            S3, [R0,#-8]
      VLDR            S5, [R0,#-4]
      VMUL.F32        S7, S6, S3
      VLDR            S14, [R0]
      VMUL.F32        S13, S8, S5
      VLDR            S12, [R0,#4]
      VMUL.F32        S11, S10, S14
      VADD.F32        S1, S13, S7
      VADD.F32        S9, S11, S1
      VADD.F32        S9, S9, S12
      VCMPE.F32       S9, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VMUL.F32        S9, S0, S3
        VADD.F32        S11, S12, S11
        VADD.F32        S3, S9, S13
        VADD.F32        S13, S11, S3
        VCMPE.F32       S13, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm
        {
          VMUL.F32        S13, S2, S5
          VADD.F32        S5, S13, S7
          VADD.F32        S7, S11, S5
          VCMPE.F32       S7, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          __asm
          {
            VADD.F32        S7, S13, S9
            VADD.F32        S9, S11, S7
            VCMPE.F32       S9, #0.0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VMUL.F32        S14, S4, S14
              VADD.F32        S1, S12, S1
              VADD.F32        S1, S1, S14
              VCMPE.F32       S1, #0.0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              __asm
              {
                VADD.F32        S1, S3, S12
                VADD.F32        S1, S1, S14
                VCMPE.F32       S1, #0.0
                VMRS            APSR_nzcv, FPSCR
              }
              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                __asm
                {
                  VADD.F32        S1, S5, S12
                  VADD.F32        S1, S1, S14
                  VCMPE.F32       S1, #0.0
                  VMRS            APSR_nzcv, FPSCR
                }
                if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                  __asm
                  {
                    VADD.F32        S12, S7, S12
                    VADD.F32        S12, S12, S14
                    VCMPE.F32       S12, #0.0
                    VMRS            APSR_nzcv, FPSCR
                  }
                  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                    break;
    ++v8;
    _R0 += 16;
    if ( v8 >= 5 )
      return 1;
  return 0;
}


int __fastcall Frustum::calculateFrustum(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  char v7; // [sp+4h] [bp-94h]@1
  char v8; // [sp+44h] [bp-54h]@1

  v4 = a1;
  v5 = a4;
  j_glm::detail::operator*<float>((int)&v7, a2, a3);
  j_glm::detail::operator*<float>((int)&v8, (int)&v7, v5);
  return j_Frustum::calculateFrustum(v4, (int)&v8);
}


int __fastcall Frustum::setupFrustum(int a1, int a2, int a3, int a4)
{
  int result; // r0@1

  *(_DWORD *)(a1 + 16 * a2) = *(_DWORD *)a3;
  result = a1 + 16 * a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(result + 12) = a4;
  return result;
}


signed int __fastcall Frustum::pointInFrustum(int _R0, int _R1)
{
  signed int result; // r0@6

  __asm
  {
    VLDR            S6, [R0]
    VLDR            S0, [R1]
    VLDR            S8, [R0,#4]
    VLDR            S2, [R1,#4]
    VMUL.F32        S6, S0, S6
    VLDR            S10, [R0,#8]
    VMUL.F32        S8, S2, S8
    VLDR            S4, [R1,#8]
    VLDR            S12, [R0,#0xC]
    VMUL.F32        S10, S4, S10
    VADD.F32        S6, S8, S6
    VADD.F32        S6, S6, S10
    VADD.F32        S6, S6, S12
    VCMPE.F32       S6, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    goto LABEL_10;
    VLDR            S6, [R0,#0x10]
    VLDR            S8, [R0,#0x14]
    VLDR            S10, [R0,#0x18]
    VLDR            S12, [R0,#0x1C]
    VLDR            S6, [R0,#0x20]
    VLDR            S8, [R0,#0x24]
    VLDR            S10, [R0,#0x28]
    VLDR            S12, [R0,#0x2C]
    VLDR            S6, [R0,#0x30]
    VLDR            S8, [R0,#0x34]
    VLDR            S10, [R0,#0x38]
    VLDR            S12, [R0,#0x3C]
    VLDR            S6, [R0,#0x40]
    VLDR            S8, [R0,#0x44]
    VMUL.F32        S0, S0, S6
    VLDR            S10, [R0,#0x48]
    VMUL.F32        S2, S2, S8
    VLDR            S12, [R0,#0x4C]
    VMUL.F32        S4, S4, S10
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VADD.F32        S0, S0, S12
    VCMPE.F32       S0, #0.0
LABEL_10:
    result = 0;
  else
    result = 1;
  return result;
}


int __fastcall Frustum::calculateFrustum(int result, int _R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R1,#0xC]
    VSUB.F32        S2, S2, S0
    VSTR            S2, [R0]
    VMUL.F32        S8, S2, S2
    VLDR            S0, [R1,#0x10]
    VLDR            S4, [R1,#0x1C]
    VSUB.F32        S4, S4, S0
    VSTR            S4, [R0,#4]
    VMUL.F32        S10, S4, S4
    VLDR            S0, [R1,#0x20]
    VLDR            S6, [R1,#0x2C]
    VSUB.F32        S6, S6, S0
    VADD.F32        S0, S10, S8
    VMUL.F32        S8, S6, S6
    VSTR            S6, [R0,#8]
    VLDR            S10, [R1,#0x30]
    VLDR            S12, [R1,#0x3C]
    VSUB.F32        S10, S12, S10
    VADD.F32        S0, S0, S8
    VSQRT.F32       S8, S0
    VMOV.F32        S0, #1.0
    VDIV.F32        S8, S0, S8
    VMUL.F32        S2, S8, S2
    VMUL.F32        S4, S8, S4
    VMUL.F32        S6, S8, S6
    VMUL.F32        S8, S10, S8
    VSTR            S8, [R0,#0xC]
    VLDR            S2, [R1]
    VLDR            S4, [R1,#0xC]
    VADD.F32        S2, S2, S4
    VSTR            S2, [R0,#0x10]
    VMUL.F32        S10, S2, S2
    VLDR            S4, [R1,#0x10]
    VLDR            S6, [R1,#0x1C]
    VADD.F32        S4, S4, S6
    VSTR            S4, [R0,#0x14]
    VMUL.F32        S12, S4, S4
    VLDR            S6, [R1,#0x20]
    VLDR            S8, [R1,#0x2C]
    VADD.F32        S6, S6, S8
    VADD.F32        S8, S12, S10
    VMUL.F32        S10, S6, S6
    VSTR            S6, [R0,#0x18]
    VADD.F32        S8, S8, S10
    VADD.F32        S10, S10, S12
    VSQRT.F32       S8, S8
    VSTR            S8, [R0,#0x1C]
    VLDR            S2, [R1,#4]
    VSTR            S2, [R0,#0x20]
    VLDR            S4, [R1,#0x14]
    VSTR            S4, [R0,#0x24]
    VLDR            S6, [R1,#0x24]
    VSTR            S6, [R0,#0x28]
    VLDR            S10, [R1,#0x34]
    VSTR            S8, [R0,#0x2C]
    VSUB.F32        S2, S4, S2
    VSTR            S2, [R0,#0x30]
    VSUB.F32        S4, S6, S4
    VSTR            S4, [R0,#0x34]
    VSUB.F32        S6, S8, S6
    VSTR            S6, [R0,#0x38]
    VLDR            S10, [R1,#0x3C]
    VDIV.F32        S14, S0, S8
    VLDR            S8, [R1,#0x34]
    VMUL.F32        S12, S14, S6
    VSUB.F32        S1, S10, S8
    VMUL.F32        S8, S14, S2
    VMUL.F32        S10, S14, S4
    VMUL.F32        S2, S1, S14
    VSTR            S8, [R0,#0x30]
    VSTR            S10, [R0,#0x34]
    VSTR            S12, [R0,#0x38]
    VSTR            S2, [R0,#0x3C]
    VLDR            S2, [R1,#8]
    VSTR            S2, [R0,#0x40]
    VMUL.F32        S1, S2, S2
    VLDR            S4, [R1,#0x18]
    VSTR            S4, [R0,#0x44]
    VMUL.F32        S3, S4, S4
    VLDR            S6, [R1,#0x28]
    VLDR            S14, [R1,#0x2C]
    VSUB.F32        S6, S14, S6
    VADD.F32        S14, S3, S1
    VMUL.F32        S1, S6, S6
    VSTR            S6, [R0,#0x48]
    VLDR            S3, [R1,#0x3C]
    VADD.F32        S14, S14, S1
    VLDR            S1, [R1,#0x38]
    VSUB.F32        S1, S3, S1
    VSQRT.F32       S14, S14
    VDIV.F32        S14, S0, S14
    VMUL.F32        S2, S14, S2
    VMUL.F32        S4, S14, S4
    VMUL.F32        S6, S14, S6
    VMUL.F32        S14, S1, S14
    VSTR            S14, [R0,#0x4C]
    VSTR            S2, [R0,#0x50]
    VADD.F32        S6, S4, S6
    VSTR            S6, [R0,#0x54]
    VMUL.F32        S3, S6, S6
    VLDR            S4, [R1,#0x28]
    VADD.F32        S14, S4, S14
    VADD.F32        S4, S3, S1
    VMUL.F32        S1, S14, S14
    VSTR            S14, [R0,#0x58]
    VADD.F32        S4, S4, S1
    VSQRT.F32       S4, S4
    VDIV.F32        S1, S0, S4
    VLDR            S0, [R1,#0x38]
    VLDR            S4, [R1,#0x3C]
    VADD.F32        S3, S0, S4
    VMUL.F32        S4, S1, S2
    VMUL.F32        S0, S1, S6
    VMUL.F32        S6, S1, S14
    VMUL.F32        S2, S3, S1
    VSTR            S4, [R0,#0x50]
    VMUL.F32        S18, S12, S4
    VSTR            S0, [R0,#0x54]
    VMUL.F32        S16, S12, S0
    VSTR            S6, [R0,#0x58]
    VMUL.F32        S15, S10, S6
    VMUL.F32        S20, S8, S6
    VMUL.F32        S22, S8, S0
    VSTR            S2, [R0,#0x5C]
    VLDR            S1, [R0,#0x14]
    VLDR            S3, [R0,#0x18]
    VLDR            S14, [R0,#0x10]
    VMUL.F32        S7, S8, S1
    VMUL.F32        S13, S12, S1
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S9, S10, S14
    VMUL.F32        S11, S10, S3
    VMUL.F32        S10, S10, S4
    VMUL.F32        S12, S12, S14
    VMUL.F32        S8, S8, S3
    VSUB.F32        S15, S16, S15
    VMUL.F32        S16, S14, S6
    VSUB.F32        S7, S9, S7
    VSUB.F32        S9, S13, S11
    VSUB.F32        S10, S10, S22
    VMUL.F32        S13, S1, S6
    VMUL.F32        S11, S3, S0
    VMUL.F32        S24, S3, S4
    VSUB.F32        S18, S20, S18
    VSUB.F32        S12, S8, S12
    VLDR            S8, [R0,#0x3C]
    VMUL.F32        S1, S1, S4
    VMUL.F32        S14, S14, S0
    VMUL.F32        S20, S9, S4
    VMUL.F32        S3, S7, S6
    VSUB.F32        S11, S13, S11
    VMUL.F32        S13, S15, S5
    VMUL.F32        S9, S9, S2
    VSUB.F32        S15, S24, S16
    VSUB.F32        S14, S14, S1
    VMUL.F32        S1, S7, S2
    VMUL.F32        S10, S10, S5
    VMUL.F32        S16, S18, S5
    VMUL.F32        S5, S12, S2
    VMUL.F32        S7, S11, S8
    VMUL.F32        S12, S12, S0
    VADD.F32        S3, S20, S3
    VSUB.F32        S9, S13, S9
    VSUB.F32        S10, S10, S1
    VMUL.F32        S14, S14, S8
    VMUL.F32        S11, S15, S8
    VSUB.F32        S5, S16, S5
    VADD.F32        S12, S3, S12
    VADD.F32        S1, S9, S7
    VADD.F32        S10, S10, S14
    VADD.F32        S3, S5, S11
    VDIV.F32        S14, S1, S12
    VDIV.F32        S1, S3, S12
    VDIV.F32        S10, S10, S12
    VSTR            S14, [R0,#0x60]
    VSTR            S1, [R0,#0x64]
    VSTR            S10, [R0,#0x68]
    VLDR            S3, [R0,#0x30]
    VLDR            S12, [R0,#4]
    VLDR            S9, [R0,#0x38]
    VMUL.F32        S24, S3, S6
    VLDR            S10, [R0]
    VMUL.F32        S7, S3, S12
    VLDR            S5, [R0,#0x34]
    VMUL.F32        S15, S9, S12
    VLDR            S14, [R0,#8]
    VMUL.F32        S18, S9, S0
    VMUL.F32        S11, S5, S10
    VLDR            S1, [R0,#0xC]
    VMUL.F32        S20, S9, S10
    VMUL.F32        S9, S9, S4
    VMUL.F32        S22, S3, S14
    VMUL.F32        S13, S5, S14
    VMUL.F32        S16, S5, S6
    VMUL.F32        S3, S3, S0
    VMUL.F32        S5, S5, S4
    VSUB.F32        S7, S11, S7
    VSUB.F32        S9, S24, S9
    VSUB.F32        S11, S15, S13
    VSUB.F32        S15, S18, S16
    VMUL.F32        S13, S14, S0
    VMUL.F32        S16, S10, S6
    VMUL.F32        S14, S14, S4
    VSUB.F32        S18, S22, S20
    VMUL.F32        S20, S12, S4
    VMUL.F32        S10, S10, S0
    VMUL.F32        S12, S12, S6
    VSUB.F32        S3, S5, S3
    VMUL.F32        S6, S7, S6
    VMUL.F32        S4, S11, S4
    VSUB.F32        S14, S14, S16
    VMUL.F32        S5, S11, S2
    VMUL.F32        S11, S15, S1
    VSUB.F32        S12, S12, S13
    VMUL.F32        S13, S18, S2
    VMUL.F32        S9, S9, S1
    VMUL.F32        S1, S3, S1
    VMUL.F32        S2, S7, S2
    VSUB.F32        S10, S10, S20
    VMUL.F32        S0, S18, S0
    VMUL.F32        S6, S12, S8
    VSUB.F32        S12, S11, S5
    VSUB.F32        S3, S9, S13
    VSUB.F32        S2, S1, S2
    VADD.F32        S0, S4, S0
    VADD.F32        S4, S12, S6
    VADD.F32        S6, S3, S14
    VADD.F32        S2, S2, S8
    VDIV.F32        S4, S4, S0
    VDIV.F32        S6, S6, S0
    VDIV.F32        S0, S2, S0
    VSTR            S4, [R0,#0x6C]
    VSTR            S6, [R0,#0x70]
    VSTR            S0, [R0,#0x74]
    VLDR            S10, [R0,#0x24]
    VLDR            S8, [R0,#0x18]
    VLDR            S6, [R0,#0x20]
    VMUL.F32        S5, S10, S8
    VLDR            S12, [R0,#0x28]
    VMUL.F32        S22, S6, S8
    VMUL.F32        S7, S6, S1
    VLDR            S2, [R0,#0x50]
    VMUL.F32        S11, S12, S1
    VLDR            S0, [R0,#0x54]
    VLDR            S4, [R0,#0x58]
    VMUL.F32        S13, S10, S2
    VMUL.F32        S15, S6, S0
    VLDR            S3, [R0,#0x1C]
    VMUL.F32        S16, S6, S4
    VMUL.F32        S18, S12, S2
    VMUL.F32        S20, S8, S0
    VSUB.F32        S5, S11, S5
    VMUL.F32        S24, S8, S2
    VSUB.F32        S8, S15, S13
    VMUL.F32        S26, S10, S4
    VMUL.F32        S13, S1, S2
    VMUL.F32        S16, S7, S4
    VMUL.F32        S18, S5, S2
    VMUL.F32        S9, S12, S14
    VMUL.F32        S11, S14, S4
    VADD.F32        S16, S18, S16
    VMUL.F32        S18, S12, S0
    VSUB.F32        S1, S1, S20
    VLDR            S20, [R0,#0x5C]
    VSUB.F32        S9, S22, S9
    VSUB.F32        S11, S24, S11
    VLDR            S24, [R0,#0x2C]
    VSUB.F32        S14, S14, S13
    VMUL.F32        S13, S8, S3
    VMUL.F32        S22, S15, S3
    VSUB.F32        S18, S26, S18
    VNMUL.F32       S5, S20, S5
    VNMUL.F32       S7, S20, S7
    VMUL.F32        S1, S1, S24
    VMUL.F32        S14, S14, S24
    VMUL.F32        S3, S18, S3
    VSUB.F32        S7, S7, S13
    VMUL.F32        S5, S11, S24
    VMUL.F32        S11, S9, S0
    VNMUL.F32       S9, S20, S9
    VADD.F32        S14, S14, S7
    VADD.F32        S1, S1, S3
    VADD.F32        S11, S16, S11
    VSUB.F32        S9, S9, S22
    VDIV.F32        S1, S1, S11
    VADD.F32        S3, S5, S9
    VSTR            S1, [R0,#0x78]
    VDIV.F32        S14, S14, S11
    VDIV.F32        S3, S3, S11
    VSTR            S3, [R0,#0x7C]
    VSTR            S14, [R0,#0x80]
    VLDR            S14, [R0]
    VLDR            S1, [R0,#4]
    VLDR            S3, [R0,#8]
    VLDR            S5, [R0,#0xC]
    VMUL.F32        S10, S10, S3
    VMUL.F32        S6, S6, S3
    VMUL.F32        S13, S14, S4
    VMUL.F32        S9, S3, S0
    VMUL.F32        S3, S3, S2
    VSUB.F32        S10, S11, S10
    VSUB.F32        S6, S6, S12
    VMUL.F32        S12, S1, S2
    VMUL.F32        S11, S1, S4
    VMUL.F32        S4, S7, S4
    VMUL.F32        S8, S8, S5
    VSUB.F32        S3, S3, S13
    VMUL.F32        S2, S10, S2
    VNMUL.F32       S10, S20, S10
    VSUB.F32        S12, S14, S12
    VSUB.F32        S1, S11, S9
    VNMUL.F32       S14, S20, S7
    VMUL.F32        S9, S18, S5
    VMUL.F32        S11, S15, S5
    VNMUL.F32       S13, S20, S6
    VMUL.F32        S0, S6, S0
    VMUL.F32        S4, S1, S24
    VMUL.F32        S12, S12, S24
    VSUB.F32        S6, S10, S9
    VMUL.F32        S10, S3, S24
    VSUB.F32        S1, S13, S11
    VSUB.F32        S8, S14, S8
    VADD.F32        S0, S2, S0
    VADD.F32        S2, S4, S6
    VADD.F32        S4, S10, S1
    VADD.F32        S6, S12, S8
    VDIV.F32        S2, S2, S0
    VDIV.F32        S0, S6, S0
    VSTR            S2, [R0,#0x84]
    VSTR            S4, [R0,#0x88]
    VSTR            S0, [R0,#0x8C]
    VLDR            S10, [R0,#0x34]
    VLDR            S6, [R0,#0x30]
    VLDR            S12, [R0,#0x38]
    VLDR            S2, [R0,#0x40]
    VLDR            S0, [R0,#0x44]
    VLDR            S4, [R0,#0x48]
    VLDR            S20, [R0,#0x4C]
    VLDR            S24, [R0,#0x3C]
    VSTR            S1, [R0,#0x90]
    VSTR            S3, [R0,#0x94]
    VSTR            S14, [R0,#0x98]
    VSTR            S2, [R0,#0x9C]
    VSTR            S4, [R0,#0xA0]
    VSTR            S0, [R0,#0xA4]
    VSTR            S1, [R0,#0xA8]
    VSTR            S3, [R0,#0xAC]
    VSTR            S14, [R0,#0xB0]
    VSTR            S2, [R0,#0xB4]
    VSTR            S4, [R0,#0xB8]
    VSTR            S0, [R0,#0xBC]
  }
  return result;
}
