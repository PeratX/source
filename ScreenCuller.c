

ScreenCuller *__fastcall ScreenCuller::ScreenCuller(ScreenCuller *this, const Vec3 *a2, const Vec3 *a3, const Vec3 *a4, const Vec3 *a5, const Vec3 *a6)
{
  ScreenCuller *v9; // r11@1
  int v45; // [sp+4h] [bp-CCh]@17
  int v46; // [sp+8h] [bp-C8h]@17
  int v52; // [sp+20h] [bp-B0h]@25
  int v53; // [sp+24h] [bp-ACh]@25
  int v54; // [sp+28h] [bp-A8h]@25
  int v55; // [sp+2Ch] [bp-A4h]@25
  int v56; // [sp+30h] [bp-A0h]@25
  int v57; // [sp+34h] [bp-9Ch]@25
  int v58; // [sp+38h] [bp-98h]@25
  int v59; // [sp+3Ch] [bp-94h]@25
  int v60; // [sp+40h] [bp-90h]@25
  int v61; // [sp+44h] [bp-8Ch]@25
  int v62; // [sp+48h] [bp-88h]@25
  int v63; // [sp+4Ch] [bp-84h]@25
  int v64; // [sp+50h] [bp-80h]@25
  int v65; // [sp+54h] [bp-7Ch]@25
  int v66; // [sp+58h] [bp-78h]@25
  int v67; // [sp+5Ch] [bp-74h]@25
  int v68; // [sp+60h] [bp-70h]@25
  int v69; // [sp+64h] [bp-6Ch]@25

  _R5 = a4;
  _R6 = a3;
  _R7 = a2;
  v9 = this;
  Frustum::Frustum(this);
  __asm
  {
    VLDR            S8, [R7]
    VLDR            S2, [R6]
    VLDR            S10, [R7,#4]
    VLDR            S4, [R6,#4]
    VSUB.F32        S1, S2, S8
    VLDR            S12, [R7,#8]
    VSUB.F32        S3, S4, S10
    VLDR            S0, [R6,#8]
    VLDR            S17, [R5,#4]
    VSUB.F32        S5, S0, S12
  }
  _R0 = a6;
  __asm { VSUB.F32        S9, S17, S10 }
  _R1 = a5;
    VMUL.F32        S6, S1, S1
    VLDR            S16, [R0]
    VLDR            S28, [R0,#4]
    VMUL.F32        S14, S3, S3
    VLDR            S26, [R0,#8]
    VLDR            S15, [R1]
    VMUL.F32        S7, S5, S5
    VLDR            S30, [R1,#4]
    VLDR            S13, [R1,#8]
    VADD.F32        S6, S14, S6
    VADD.F32        S6, S6, S7
    VLDR            S7, [R5]
    VSTR            S7, [SP,#0xD0+var_C4]
    VSUB.F32        S7, S7, S8
    VSQRT.F32       S11, S6
    VLDR            S6, [R5,#8]
    VSUB.F32        S14, S6, S12
    VSTR            S6, [SP,#0xD0+var_C0]
    VLDR            S6, =0.0001
    VCMPE.F32       S11, S6
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    _LR = *(&Vec3::ZERO + 1);
    _R12 = Vec3::ZERO;
    _R8 = dword_2822498;
  else
    __asm
    {
      VDIV.F32        S5, S5, S11
      VDIV.F32        S3, S3, S11
      VDIV.F32        S1, S1, S11
      VMOV            R8, S5
      VMOV            LR, S3
      VMOV            R12, S1
    }
    VSUB.F32        S5, S13, S12
    VSTR            S13, [SP,#0xD0+var_B8]
    VMUL.F32        S11, S7, S7
    VSTR            S15, [SP,#0xD0+var_BC]
    VMUL.F32        S13, S9, S9
    VSUB.F32        S1, S15, S8
    VMUL.F32        S15, S14, S14
    VSUB.F32        S3, S30, S10
    VADD.F32        S11, S13, S11
    VADD.F32        S11, S11, S15
    VSQRT.F32       S11, S11
    _R6 = *(_QWORD *)&Vec3::ZERO;
    _R9 = dword_2822498;
      VDIV.F32        S14, S14, S11
      VDIV.F32        S9, S9, S11
      VDIV.F32        S7, S7, S11
      VMOV            R9, S14
      VMOV            R7, S9
      VMOV            R6, S7
    VMUL.F32        S14, S1, S1
    VMUL.F32        S7, S3, S3
    VMUL.F32        S9, S5, S5
    VSUB.F32        S12, S26, S12
    VSUB.F32        S10, S28, S10
    VSUB.F32        S8, S16, S8
    VADD.F32        S14, S7, S14
    VADD.F32        S14, S14, S9
    VSQRT.F32       S14, S14
    VCMPE.F32       S14, S6
    _R0 = *(&Vec3::ZERO + 1);
    _R5 = Vec3::ZERO;
    _R4 = dword_2822498;
      VDIV.F32        S5, S5, S14
      VDIV.F32        S3, S3, S14
      VDIV.F32        S14, S1, S14
      VMOV            R4, S5
      VMOV            R0, S3
      VMOV            R5, S14
    VMUL.F32        S14, S8, S8
    VMUL.F32        S1, S10, S10
    VMUL.F32        S3, S12, S12
    VADD.F32        S14, S1, S14
    VADD.F32        S14, S14, S3
    __asm { VSTR            S16, [SP,#0xD0+var_B4] }
    _R2 = *(_QWORD *)&Vec3::ZERO;
    _R1 = dword_2822498;
      VDIV.F32        S12, S12, S14
      VDIV.F32        S10, S10, S14
      VDIV.F32        S8, S8, S14
      VMOV            R1, S12
      VSTR            S16, [SP,#0xD0+var_B4]
      VMOV            R3, S10
      VMOV            R2, S8
    VMOV            S1, R6
    VMOV            S8, R8
    VMOV            S3, R7
    VMOV            S10, LR
    VMOV            S5, R9
    VMOV            S12, R12
    VMUL.F32        S14, S5, S10
    VMUL.F32        S7, S3, S8
    VMUL.F32        S9, S1, S8
    VMUL.F32        S11, S5, S12
    VMUL.F32        S19, S3, S12
    VMUL.F32        S21, S1, S10
    VMOV            S29, R0
    VMOV            S23, R5
    VSUB.F32        S13, S7, S14
    VMUL.F32        S16, S29, S1
    VSUB.F32        S15, S11, S9
    VMUL.F32        S18, S23, S3
    VSUB.F32        S21, S21, S19
    VMOV            S19, R4
    VMUL.F32        S20, S23, S5
    VMUL.F32        S14, S13, S13
    VMUL.F32        S24, S29, S5
    VMUL.F32        S7, S15, S15
    VMUL.F32        S1, S19, S1
    VMUL.F32        S9, S21, S21
    VMUL.F32        S22, S19, S3
    VMOV            S25, R1
    VSUB.F32        S5, S18, S16
    VMOV            S7, R3
    VSUB.F32        S3, S1, S20
    VMUL.F32        S11, S7, S19
    VMUL.F32        S27, S7, S23
    VSUB.F32        S1, S24, S22
    VADD.F32        S9, S14, S9
    VMOV            S14, R2
    VSQRT.F32       S31, S9
    VMUL.F32        S9, S14, S19
    VMUL.F32        S19, S25, S23
    VMUL.F32        S23, S25, S29
    VMUL.F32        S29, S14, S29
    VCMPE.F32       S31, S6
    _R1 = *(&Vec3::ZERO + 1);
    _R2 = Vec3::ZERO;
    _R0 = dword_2822498;
      VDIV.F32        S16, S21, S31
      VDIV.F32        S15, S15, S31
      VDIV.F32        S13, S13, S31
      VMOV            R0, S16
      VMOV            R1, S15
      VMOV            R2, S13
    VMUL.F32        S13, S14, S10
    VMUL.F32        S21, S25, S10
    VMUL.F32        S15, S7, S12
    VSUB.F32        S10, S19, S9
    VMUL.F32        S7, S7, S8
    VMUL.F32        S14, S14, S8
    VSUB.F32        S8, S11, S23
    VMUL.F32        S9, S1, S1
    VMUL.F32        S11, S3, S3
    VMUL.F32        S16, S5, S5
    VMUL.F32        S25, S25, S12
    VSUB.F32        S12, S29, S27
    VADD.F32        S9, S11, S9
    VADD.F32        S9, S9, S16
    VSQRT.F32       S9, S9
    VCMPE.F32       S9, S6
    v45 = *(&Vec3::ZERO + 1);
    _R4 = Vec3::ZERO;
    v46 = dword_2822498;
      VDIV.F32        S5, S5, S9
      VDIV.F32        S1, S1, S9
      VDIV.F32        S3, S3, S9
      VMOV            R3, S5
      VMOV            R4, S1
    v46 = _R3;
    __asm { VMOV            R3, S3 }
    v45 = _R3;
    VSUB.F32        S1, S14, S25
    VSUB.F32        S14, S21, S7
    VMUL.F32        S5, S8, S8
    VMUL.F32        S7, S10, S10
    VMUL.F32        S9, S12, S12
    VSUB.F32        S3, S15, S13
    VADD.F32        S5, S7, S5
    VADD.F32        S5, S5, S9
    VSQRT.F32       S5, S5
    VCMPE.F32       S5, S6
    _R5 = *(&Vec3::ZERO + 1);
    _R6 = Vec3::ZERO;
    _R10 = dword_2822498;
      VDIV.F32        S12, S12, S5
      VDIV.F32        S10, S10, S5
      VDIV.F32        S8, S8, S5
      VMOV            R10, S12
      VMOV            R5, S10
      VMOV            R6, S8
    VMUL.F32        S8, S14, S14
    VMUL.F32        S10, S1, S1
    VMUL.F32        S12, S3, S3
    VADD.F32        S8, S10, S8
    VADD.F32        S8, S8, S12
    VSQRT.F32       S8, S8
    VCMPE.F32       S8, S6
    _R8 = *(&Vec3::ZERO + 1);
    _R9 = Vec3::ZERO;
    _R7 = dword_2822498;
      VDIV.F32        S6, S3, S8
      VDIV.F32        S10, S1, S8
      VDIV.F32        S8, S14, S8
      VMOV            R7, S6
      VMOV            R8, S10
      VMOV            R9, S8
  __asm { VMOV            S6, R2 }
  v67 = _R2;
  v68 = _R1;
    VMOV            S8, R1
    VMUL.F32        S2, S6, S2
  v69 = _R0;
    VMUL.F32        S4, S8, S4
    VMOV            S6, R0
    VMUL.F32        S0, S6, S0
    VADD.F32        S2, S4, S2
    VADD.F32        S0, S0, S2
    VMOV            R3, S0
  Frustum::setupFrustum((int)v9, 2, (int)&v67, _R3 ^ 0x80000000);
  _R2 = v45;
    VMOV            S0, R4
    VLDR            S4, [SP,#0xD0+var_C4]
  _R1 = v46;
    VMOV            S2, R2
    VLDR            S6, [SP,#0xD0+var_C0]
    VMUL.F32        S0, S0, S4
  v64 = _R4;
  v65 = v45;
    VMUL.F32        S2, S2, S17
    VMOV            S4, R1
  v66 = v46;
    VMUL.F32        S4, S4, S6
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S4, S0
    VMOV            R0, S0
  Frustum::setupFrustum((int)v9, 0, (int)&v64, _R0 ^ 0x80000000);
    VMOV            S2, R5
    VLDR            S4, [SP,#0xD0+var_BC]
    VMOV            S0, R6
    VLDR            S6, [SP,#0xD0+var_B8]
    VMUL.F32        S2, S2, S30
    VMOV            S4, R10
  v61 = _R6;
  v62 = _R5;
  v63 = _R10;
  Frustum::setupFrustum((int)v9, 3, (int)&v61, _R0 ^ 0x80000000);
    VMOV            S2, R8
    VLDR            S4, [SP,#0xD0+var_B4]
    VMOV            S0, R9
    VMUL.F32        S2, S2, S28
  v58 = _R9;
  v59 = _R8;
  __asm { VMOV            S4, R7 }
  v60 = _R7;
    VMUL.F32        S4, S4, S26
  Frustum::setupFrustum((int)v9, 1, (int)&v58, _R0 ^ 0x80000000);
  v55 = 0;
  v56 = 0;
  v57 = 1065353216;
  Frustum::setupFrustum((int)v9, 4, (int)&v55, 2139095039);
  v52 = 0;
  v53 = 0;
  v54 = -1082130432;
  Frustum::setupFrustum((int)v9, 5, (int)&v52, 2139095039);
  return v9;
}
