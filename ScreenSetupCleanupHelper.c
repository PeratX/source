

int __fastcall ScreenSetupCleanupHelper::setupForVRDrawing(ScreenSetupCleanupHelper *this, ClientInstance *a2, mce::WorldConstantsHolographic *a3)
{
  ClientInstance *v3; // r4@1
  int v4; // r6@1
  char v6; // [sp+4h] [bp-11Ch]@1
  char v7; // [sp+44h] [bp-DCh]@1
  char v8; // [sp+84h] [bp-9Ch]@1
  char v9; // [sp+C4h] [bp-5Ch]@1

  v3 = a2;
  v4 = ClientInstance::getHoloInput(this);
  HolographicPlatform::getTransform((int)&v9, v4, 15, 21, 0);
  HolographicPlatform::getTransform((int)&v8, v4, 15, 22, 0);
  HolographicPlatform::getTransform((int)&v7, v4, 21, 23, 0);
  HolographicPlatform::getTransform((int)&v6, v4, 22, 24, 0);
  return mce::WorldConstantsHolographic::setViewProjOverrides((int)v3, (int)&v9, (int)&v7, (int)&v8, (int)&v6);
}


int __fastcall ScreenSetupCleanupHelper::computeGazeToHeadLockedRotation(float this, ClientInstance *a2, Vec3 *a3, float a4, float a5)
{
  return ScreenSetupCleanupHelper::computeGazeToHeadLockedRotation(
           (ScreenSetupCleanupHelper *)LODWORD(this),
           a2,
           a3,
           a4,
           a5);
}


int __fastcall ScreenSetupCleanupHelper::setupForStandardUIDrawing(int a1)
{
  int v1; // r4@1
  int v7; // r0@1
  int result; // r0@1

  v1 = a1;
  _R0 = GuiData::getScreenSizeData(*(GuiData **)(a1 + 24));
  __asm
  {
    VLDR            S4, [R0,#0x14]
    VMOV.F32        S0, #2.0
    VLDR            S2, [R0,#0x10]
    VNEG.F32        S4, S4
    VDIV.F32        S16, S0, S2
    VDIV.F32        S18, S0, S4
  }
  v7 = MatrixStack::getTop((MatrixStack *)(*(_DWORD *)(v1 + 16) + 32));
  __asm { VSTR            S16, [R0] }
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  __asm { VSTR            S18, [R0,#0x14] }
  *(_DWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 36) = 0;
  *(_DWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 28) = 0;
  *(_DWORD *)(v7 + 40) = -1157426577;
  *(_DWORD *)(v7 + 44) = 0;
  *(_DWORD *)(v7 + 48) = -1082130432;
  *(_DWORD *)(v7 + 52) = 1065353216;
  *(_DWORD *)(v7 + 56) = -1082130432;
  *(_DWORD *)(v7 + 60) = 1065353216;
  result = MatrixStack::getTop(*(MatrixStack **)(v1 + 16));
  *(_QWORD *)result = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)(result + 8) = qword_27E89F0;
  *(_QWORD *)(result + 16) = qword_27E89F8;
  *(_QWORD *)(result + 24) = qword_27E8A00;
  *(_QWORD *)(result + 32) = qword_27E8A08;
  *(_QWORD *)(result + 40) = qword_27E8A10;
  *(_QWORD *)(result + 48) = *(_QWORD *)&qword_27E8A18;
  *(_QWORD *)(result + 56) = *(_QWORD *)&qword_27E8A20;
  return result;
}


int __fastcall ScreenSetupCleanupHelper::computeGazeToHeadLockedRotation(ScreenSetupCleanupHelper *this, ClientInstance *a2, Vec3 *a3, float a4, float a5)
{
  ScreenSetupCleanupHelper *v5; // r4@1
  unsigned __int64 v6; // kr48_8@1
  int v7; // ST24_4@1
  int v8; // ST28_4@1
  unsigned __int64 v9; // kr50_8@1
  int v10; // ST1C_4@1
  int v11; // ST20_4@1
  int v12; // ST18_4@1
  int v13; // ST14_4@1
  int v14; // ST10_4@1
  int v15; // ST0C_4@1
  int v16; // r11@1
  __int64 v17; // kr18_8@1
  __int64 v18; // kr20_8@1
  __int64 v19; // kr28_8@1
  int v20; // ST08_4@1
  int v30; // r0@4
  int v40; // r0@12
  int result; // r0@12
  int v44; // r0@14
  float v45; // [sp+4h] [bp-10Ch]@1
  __int64 v46; // [sp+2Ch] [bp-E4h]@1
  int v47; // [sp+34h] [bp-DCh]@4
  int v48; // [sp+38h] [bp-D8h]@7
  int v49; // [sp+3Ch] [bp-D4h]@4
  int v50; // [sp+40h] [bp-D0h]@1
  int v51; // [sp+44h] [bp-CCh]@1
  int v52; // [sp+48h] [bp-C8h]@1
  int v53; // [sp+4Ch] [bp-C4h]@1
  int v54; // [sp+50h] [bp-C0h]@1
  int v55; // [sp+54h] [bp-BCh]@1
  int v56; // [sp+58h] [bp-B8h]@1
  int v57; // [sp+5Ch] [bp-B4h]@1
  int v58; // [sp+60h] [bp-B0h]@1
  int v59; // [sp+64h] [bp-ACh]@1
  __int64 v60; // [sp+68h] [bp-A8h]@1
  __int64 v61; // [sp+70h] [bp-A0h]@1
  __int64 v62; // [sp+78h] [bp-98h]@1
  unsigned __int64 v63; // [sp+80h] [bp-90h]@1
  __int64 v64; // [sp+88h] [bp-88h]@1
  int v65; // [sp+90h] [bp-80h]@1
  __int64 v66; // [sp+94h] [bp-7Ch]@1
  int v67; // [sp+9Ch] [bp-74h]@1
  __int64 v68; // [sp+A0h] [bp-70h]@1
  __int64 v69; // [sp+A8h] [bp-68h]@1
  __int64 v70; // [sp+B0h] [bp-60h]@1
  __int64 v71; // [sp+B8h] [bp-58h]@1

  v5 = this;
  v45 = a4;
  v46 = *(_QWORD *)&a2;
  _aeabi_memclr8(&v63, 60);
  v6 = *(_QWORD *)&Matrix::IDENTITY;
  v7 = v6 >> 32;
  v8 = v6;
  v63 = *(_QWORD *)&Matrix::IDENTITY;
  v9 = qword_27E89F0;
  v10 = v9 >> 32;
  v11 = v9;
  v64 = qword_27E89F0;
  v12 = dword_27E89F8;
  v13 = qword_27E89FC;
  v65 = dword_27E89F8;
  v66 = qword_27E89FC;
  v14 = HIDWORD(qword_27E89FC);
  v15 = unk_27E8A04;
  v67 = unk_27E8A04;
  v16 = HIDWORD(qword_27E8A08);
  v17 = qword_27E8A10;
  v18 = *(_QWORD *)&qword_27E8A18;
  v19 = *(_QWORD *)&qword_27E8A20;
  v68 = qword_27E8A08;
  v20 = qword_27E8A08;
  v69 = qword_27E8A10;
  v70 = *(_QWORD *)&qword_27E8A18;
  v71 = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr8(&v50, 60);
  v50 = v8;
  v51 = v7;
  v52 = v11;
  v53 = v10;
  v54 = v12;
  v55 = v13;
  v56 = v14;
  v57 = v15;
  v58 = v20;
  v59 = v16;
  v60 = v17;
  v61 = v18;
  v62 = v19;
  _R0 = *(_QWORD *)HIDWORD(v46);
  _R2 = *(_DWORD *)(HIDWORD(v46) + 8);
  __asm
  {
    VLDR            S24, =0.0001
    VMOV            S20, R0
    VMOV            S18, R2
    VMUL.F32        S0, S20, S20
    VMUL.F32        S2, S18, S18
    VMOV            S22, R1
    VADD.F32        S0, S2, S0
    VSQRT.F32       S0, S0
    VCMPE.F32       S0, S24
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    _R6 = *(&Vec3::ZERO + 1);
    _R3 = Vec3::ZERO;
    _R7 = dword_2822498;
  else
    __asm { VNEG.F32        S2, S20 }
    _R6 = 0;
    __asm
    {
      VDIV.F32        S4, S18, S0
      VDIV.F32        S0, S2, S0
      VMOV            R3, S4
      VMOV            R7, S0
    }
    VMOV            S0, R7
    VMOV            S2, R6
    VMOV            S4, R3
  v63 = __PAIR__(_R6, _R3);
  v64 = (unsigned int)_R7;
    VMUL.F32        S6, S2, S18
    VMUL.F32        S8, S0, S22
    VMUL.F32        S10, S4, S18
    VLDR            S16, [SP,#0x110+arg_0]
    VMUL.F32        S0, S0, S20
    VMUL.F32        S4, S4, S22
    VMUL.F32        S2, S2, S20
    VSUB.F32        S6, S8, S6
    VSUB.F32        S0, S10, S0
    VSUB.F32        S2, S2, S4
    VSTR            S6, [SP,#0x110+var_80]
    VSTR            S0, [SP,#0x110+var_7C]
    VSTR            S2, [SP,#0x110+var_7C+4]
  v67 = 0;
  v68 = _R0;
  v69 = _R2;
  v30 = ClientInstance::getHoloInput((ClientInstance *)v46);
  HolographicPlatform::getTransformXDir((int)&v47, v30, 16, 9, 0);
  _KR38_8 = *(_QWORD *)&v47;
  _R6 = v49;
    VMOV            S4, R5
    VMOV            S2, R7
    VMOV            S0, R6
    VMUL.F32        S8, S2, S18
    VMUL.F32        S6, S0, S20
    VMUL.F32        S14, S4, S18
    VMUL.F32        S10, S2, S22
    VMUL.F32        S12, S4, S20
    VMUL.F32        S1, S0, S22
    VSUB.F32        S18, S8, S6
    VSUB.F32        S20, S12, S10
    VSUB.F32        S22, S1, S14
    VMUL.F32        S6, S18, S0
    VMUL.F32        S14, S18, S2
    VMUL.F32        S8, S20, S4
    VMUL.F32        S12, S22, S0
    VMUL.F32        S10, S20, S2
    VMUL.F32        S4, S22, S4
    VSUB.F32        S0, S8, S6
    VSUB.F32        S2, S12, S10
    VSUB.F32        S4, S14, S4
    VMUL.F32        S6, S0, S0
    VMUL.F32        S8, S2, S2
    VMUL.F32        S10, S4, S4
    VADD.F32        S6, S8, S6
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S24
    _R11 = *(&Vec3::ZERO + 1);
    _R8 = Vec3::ZERO;
    _R10 = dword_2822498;
      VDIV.F32        S4, S4, S6
      VDIV.F32        S2, S2, S6
      VDIV.F32        S0, S0, S6
      VMOV            R10, S4
      VMOV            R11, S2
      VMOV            R8, S0
  __asm { VMOV.F32        S0, #-1.0 }
  v50 = v47;
  v51 = v48;
  __asm { VMOV.F32        S4, #1.0 }
  v52 = v49;
  v53 = 0;
    VSTR            S22, [SP,#0x110+var_C0]
    VSTR            S18, [SP,#0x110+var_BC]
    VSTR            S20, [SP,#0x110+var_B8]
  v57 = 0;
  v58 = _R8;
  v59 = _R11;
  v60 = (unsigned int)_R10;
  _R0 = HIDWORD(v46);
    VLDR            S2, [R0,#4]
    VCMPE.F32       S2, S0
    VCMPE.F32       S2, S4
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VMOV            R0, S0 }
  _R0 = acosf(_R0);
  __asm { VMOV            S2, R0 }
  *(_DWORD *)v5 = 1065353216;
  *((_DWORD *)v5 + 4) = 0;
  _R1 = &mce::Math::RADDEG;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 1) = 0;
  *((_DWORD *)v5 + 2) = 0;
  __asm { VLDR            S0, [R1] }
  *((_DWORD *)v5 + 5) = 1065353216;
    VMUL.F32        S0, S0, S2
    VLDR            S2, =90.0
  *((_DWORD *)v5 + 9) = 0;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 8) = 0;
  *((_DWORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 12) = 0;
  *((_DWORD *)v5 + 13) = 0;
  *((_DWORD *)v5 + 10) = 1065353216;
  *((_DWORD *)v5 + 11) = 0;
  *((_DWORD *)v5 + 14) = 0;
  *((_DWORD *)v5 + 15) = 1065353216;
    VSUB.F32        S0, S2, S0
    VABS.F32        S0, S0
    VCMPE.F32       S0, S16
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _R0 = v45;
      VMOV            S2, R0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      *(_QWORD *)v5 = v63;
      *((_QWORD *)v5 + 1) = v64;
      *((_DWORD *)v5 + 4) = v65;
      *(_QWORD *)((char *)v5 + 20) = v66;
      *((_DWORD *)v5 + 7) = v67;
      *((_QWORD *)v5 + 4) = v68;
      *((_QWORD *)v5 + 5) = v69;
      *((_QWORD *)v5 + 6) = v70;
      *((_DWORD *)v5 + 14) = v71;
      result = HIDWORD(v71);
      *((_DWORD *)v5 + 15) = HIDWORD(v71);
    else
      __asm
      {
        VSUB.F32        S4, S16, S2
        VSUB.F32        S0, S0, S2
        VDIV.F32        S0, S0, S4
        VMOV            R0, S0
      }
      v44 = mce::Math::hermiteBlend(_R0, COERCE_FLOAT(&mce::Math::RADDEG));
      result = mce::MathUtility::interpolateTransforms((int)v5, (int)&v63, (int)&v50, v44);
    *(_QWORD *)v5 = _KR38_8;
    *((_DWORD *)v5 + 2) = _R6;
    *((_DWORD *)v5 + 3) = 0;
      VSTR            S22, [R4,#0x10]
      VSTR            S18, [R4,#0x14]
      VSTR            S20, [R4,#0x18]
    *((_DWORD *)v5 + 7) = 0;
    *((_DWORD *)v5 + 8) = _R8;
    *((_DWORD *)v5 + 9) = _R11;
    *((_DWORD *)v5 + 10) = _R10;
    v40 = v61;
    *((_DWORD *)v5 + 11) = 0;
    *((_DWORD *)v5 + 12) = v40;
    *((_DWORD *)v5 + 13) = HIDWORD(v61);
    *((_DWORD *)v5 + 14) = v62;
    result = HIDWORD(v62);
    *((_DWORD *)v5 + 15) = HIDWORD(v62);
  return result;
}
