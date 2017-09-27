

int __fastcall HoloRealitySetupCleanupStrategy::HoloRealitySetupCleanupStrategy(int result, int a2)
{
  *(_DWORD *)result = &off_26E4820;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = 1065353216;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 28) = 1065353216LL;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 1065353216;
  *(_DWORD *)(result + 60) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 68) = 1065353216;
  return result;
}


int __fastcall HoloRealitySetupCleanupStrategy::adjustProjectionMatrixForRealityMode(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v6; // r6@1
  int v7; // r7@1
  int result; // r0@1
  char v13; // [sp+8h] [bp-160h]@1
  char v14; // [sp+48h] [bp-120h]@1
  int v15; // [sp+88h] [bp-E0h]@1
  int v16; // [sp+8Ch] [bp-DCh]@1
  int v17; // [sp+90h] [bp-D8h]@1
  int v18; // [sp+94h] [bp-D4h]@1
  int v19; // [sp+98h] [bp-D0h]@1
  int v20; // [sp+9Ch] [bp-CCh]@1
  int v21; // [sp+A0h] [bp-C8h]@1
  int v22; // [sp+A4h] [bp-C4h]@1
  int v23; // [sp+A8h] [bp-C0h]@1
  int v24; // [sp+ACh] [bp-BCh]@1
  int v25; // [sp+B0h] [bp-B8h]@1
  int v26; // [sp+B4h] [bp-B4h]@1
  int v27; // [sp+B8h] [bp-B0h]@1
  int v28; // [sp+BCh] [bp-ACh]@1
  int v29; // [sp+C0h] [bp-A8h]@1
  int v30; // [sp+C4h] [bp-A4h]@1
  char v31; // [sp+C8h] [bp-A0h]@1

  v3 = a1;
  _R9 = a3;
  _R5 = a2;
  v6 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 4));
  v7 = ClientInstance::getGameRenderer(*(ClientInstance **)(v3 + 4));
  _aeabi_memclr8(&v15, 56);
  v15 = *(_DWORD *)(v7 + 712);
  v16 = *(_DWORD *)(v7 + 716);
  v17 = *(_DWORD *)(v7 + 720);
  v18 = *(_DWORD *)(v7 + 724);
  v19 = *(_DWORD *)(v7 + 728);
  v20 = *(_DWORD *)(v7 + 732);
  v21 = *(_DWORD *)(v7 + 736);
  v22 = *(_DWORD *)(v7 + 740);
  v23 = *(_DWORD *)(v7 + 744);
  v24 = *(_DWORD *)(v7 + 748);
  v25 = *(_DWORD *)(v7 + 752);
  v26 = *(_DWORD *)(v7 + 756);
  v27 = *(_DWORD *)(v7 + 760);
  v28 = *(_DWORD *)(v7 + 764);
  v29 = *(_DWORD *)(v7 + 768);
  v30 = *(_DWORD *)(v7 + 772);
  HolographicPlatform::getTransform((int)&v14, v6, 15, 21, 0);
  HolographicPlatform::getTransform((int)&v13, v6, 15, 22, 0);
  glm::detail::operator*<float>((int)&v31, (int)&v14, (int)&v15);
  __asm
  {
    VLDR            S26, [SP,#0x168+var_80]
    VLDR            S24, [SP,#0x168+var_7C]
    VLDR            S22, [SP,#0x168+var_78]
    VLDR            S28, [SP,#0x168+var_70]
    VLDR            S21, [SP,#0x168+var_68]
    VLDR            S19, [SP,#0x168+var_6C]
  }
  glm::detail::operator*<float>((int)&v31, (int)&v13, (int)&v15);
    VNMUL.F32       S0, S24, S19
    VMUL.F32        S2, S28, S26
    VLDR            S20, [SP,#0x168+var_80]
    VMUL.F32        S4, S21, S22
    VLDR            S18, [SP,#0x168+var_7C]
    VLDR            S16, [SP,#0x168+var_78]
    VLDR            S30, [SP,#0x168+var_70]
    VLDR            S17, [SP,#0x168+var_6C]
    VLDR            S19, [SP,#0x168+var_68]
    VSUB.F32        S0, S0, S2
    VSUB.F32        S28, S0, S4
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 312))(v6);
    VMOV            S0, R0
    VCMPE.F32       S28, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm
    {
      VNMUL.F32       S2, S18, S17
      VMUL.F32        S4, S30, S20
      VMUL.F32        S6, S19, S16
      VSUB.F32        S2, S2, S4
      VSUB.F32        S4, S2, S6
      VCMPE.F32       S4, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      __asm
      {
        VLDR            S5, =-0.0
        VMOV.F32        S7, #-1.0
        VLDR            S10, =0.0
        VMOV.F32        S8, #1.0
        VCMPE.F32       S26, S5
        VMRS            APSR_nzcv, FPSCR
        VMOV.F32        S9, S10
        VCMPE.F32       S24, S5
        VMOV.F32        S11, S10
        VNEG.F32        S14, S26
        VNEG.F32        S3, S28
        VNEG.F32        S12, S24
        VNEG.F32        S1, S22
        VNEG.F32        S2, S20
        VNEG.F32        S0, S18
        VNEG.F32        S4, S4
        VNEG.F32        S6, S16
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S9, S7 }
        __asm { VMOVGT.F32      S11, S7 }
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S9, S8 }
        VLDR            S13, [R5]
        VCMPE.F32       S20, S5
        VLDR            S15, [R5,#0x14]
        VDIV.F32        S9, S9, S13
        VLDR            S26, [R5,#0x28]
        VMUL.F32        S9, S9, S14
        VLDR            S28, [R5,#0x38]
        __asm { VMOVLT.F32      S11, S8 }
        VDIV.F32        S11, S11, S15
        VSUB.F32        S24, S8, S26
        VMUL.F32        S11, S11, S12
        VSUB.F32        S9, S9, S22
        VCMPE.F32       S18, S5
        VDIV.F32        S13, S24, S28
        VADD.F32        S9, S9, S11
        VMUL.F32        S13, S13, S3
        VADD.F32        S9, S9, S13
        VDIV.F32        S9, S8, S9
        __asm { VMOVGT.F32      S10, S7 }
        VMUL.F32        S1, S9, S1
        VMUL.F32        S14, S9, S14
        VMUL.F32        S12, S9, S12
        VMUL.F32        S3, S9, S3
        VADD.F32        S1, S1, S8
        VSTR            S14, [R5,#8]
        VSTR            S12, [R5,#0x18]
        VSTR            S3, [R5,#0x38]
        VSTR            S1, [R5,#0x28]
        VLDR            S12, [R9]
        VLDR            S1, [R9,#0x28]
        VDIV.F32        S12, S11, S12
        VLDR            S14, [R9,#0x14]
        VSUB.F32        S1, S8, S1
        VLDR            S3, [R9,#0x38]
        __asm { VMOVLT.F32      S10, S8 }
        VDIV.F32        S10, S10, S14
        VDIV.F32        S14, S1, S3
        VMUL.F32        S12, S12, S2
        VMUL.F32        S10, S10, S0
        VMUL.F32        S14, S14, S4
        VSUB.F32        S12, S12, S16
        VADD.F32        S10, S12, S10
        VADD.F32        S10, S10, S14
        VDIV.F32        S10, S8, S10
        VMUL.F32        S6, S10, S6
        VMUL.F32        S2, S10, S2
        VMUL.F32        S0, S10, S0
        VMUL.F32        S4, S10, S4
        VADD.F32        S6, S6, S8
        VSTR            S2, [R9,#8]
        VSTR            S0, [R9,#0x18]
        VSTR            S4, [R9,#0x38]
        VSTR            S6, [R9,#0x28]
  return result;
}


signed int __fastcall HoloRealitySetupCleanupStrategy::getEyeRenderingMode(HoloRealitySetupCleanupStrategy *this)
{
  Options *v1; // r0@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 1));
  v2 = Options::getStereoRendering(v1);
  v3 = 1;
  if ( v2 )
    v3 = 6;
  return v3;
}


int __fastcall HoloRealitySetupCleanupStrategy::_generateMatrixPatch(HoloRealitySetupCleanupStrategy *this, int a2)
{
  int v2; // r5@1
  HoloRealitySetupCleanupStrategy *v3; // r4@1
  int v9; // r5@1
  int *v10; // r0@2
  int result; // r0@4
  int v12; // [sp+8h] [bp-98h]@1
  int v13; // [sp+Ch] [bp-94h]@2
  int v14; // [sp+10h] [bp-90h]@2
  int v15; // [sp+14h] [bp-8Ch]@2
  int v16; // [sp+18h] [bp-88h]@2
  int v17; // [sp+1Ch] [bp-84h]@2
  int v18; // [sp+20h] [bp-80h]@2
  int v19; // [sp+24h] [bp-7Ch]@2
  int v20; // [sp+28h] [bp-78h]@2
  int v21; // [sp+2Ch] [bp-74h]@2
  int v22; // [sp+30h] [bp-70h]@2
  int v23; // [sp+34h] [bp-6Ch]@2
  int v24; // [sp+38h] [bp-68h]@2
  int v25; // [sp+3Ch] [bp-64h]@2
  int v26; // [sp+40h] [bp-60h]@2
  int v27; // [sp+48h] [bp-58h]@1
  int v28; // [sp+4Ch] [bp-54h]@3
  int v29; // [sp+50h] [bp-50h]@3
  int v30; // [sp+54h] [bp-4Ch]@3
  int v31; // [sp+58h] [bp-48h]@3
  int v32; // [sp+5Ch] [bp-44h]@3
  int v33; // [sp+60h] [bp-40h]@3
  int v34; // [sp+64h] [bp-3Ch]@3
  int v35; // [sp+68h] [bp-38h]@3
  int v36; // [sp+6Ch] [bp-34h]@3
  int v37; // [sp+70h] [bp-30h]@3
  int v38; // [sp+74h] [bp-2Ch]@3
  int v39; // [sp+78h] [bp-28h]@3
  int v40; // [sp+7Ch] [bp-24h]@3
  int v41; // [sp+80h] [bp-20h]@3

  v2 = a2;
  v3 = this;
  *(_DWORD *)this = 1065353216;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)((char *)this + 20) = 1065353216LL;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 1065353216;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 15) = 1065353216;
  _R0 = ClientInstance::getRealityModeFrameFactor(*(ClientInstance **)(a2 + 4));
  __asm { VLDR            S16, [R0] }
  v9 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 4));
  HolographicPlatform::getTransform((int)&v27, v9, 2, 15, 14);
  HolographicPlatform::getTransform((int)&v12, v9, 2, 15, 10);
  __asm
  {
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    *(_DWORD *)v3 = v27;
    *((_DWORD *)v3 + 1) = v28;
    *((_DWORD *)v3 + 2) = v29;
    *((_DWORD *)v3 + 3) = v30;
    *((_DWORD *)v3 + 4) = v31;
    *((_DWORD *)v3 + 5) = v32;
    *((_DWORD *)v3 + 6) = v33;
    *((_DWORD *)v3 + 7) = v34;
    *((_DWORD *)v3 + 8) = v35;
    *((_DWORD *)v3 + 9) = v36;
    *((_DWORD *)v3 + 10) = v37;
    *((_DWORD *)v3 + 11) = v38;
    *((_DWORD *)v3 + 12) = v39;
    *((_DWORD *)v3 + 13) = v40;
    *((_DWORD *)v3 + 14) = v41;
    v10 = &v27;
  else
    *(_DWORD *)v3 = v12;
    *((_DWORD *)v3 + 1) = v13;
    *((_DWORD *)v3 + 2) = v14;
    *((_DWORD *)v3 + 3) = v15;
    *((_DWORD *)v3 + 4) = v16;
    *((_DWORD *)v3 + 5) = v17;
    *((_DWORD *)v3 + 6) = v18;
    *((_DWORD *)v3 + 7) = v19;
    *((_DWORD *)v3 + 8) = v20;
    *((_DWORD *)v3 + 9) = v21;
    *((_DWORD *)v3 + 10) = v22;
    *((_DWORD *)v3 + 11) = v23;
    *((_DWORD *)v3 + 12) = v24;
    *((_DWORD *)v3 + 13) = v25;
    *((_DWORD *)v3 + 14) = v26;
    v10 = &v12;
  result = v10[15];
  *((_DWORD *)v3 + 15) = result;
  return result;
}


int __fastcall HoloRealitySetupCleanupStrategy::cleanupScreen(int a1, int a2)
{
  int v2; // r4@1
  mce::WorldConstantsHolographic *v3; // r1@1

  v2 = a2;
  mce::WorldConstantsHolographic::setMatrixPatch(*(_DWORD *)(a2 + 32) + 36, a1 + 8);
  return j_j_j__ZN24ScreenSetupCleanupHelper20cleanupFromVRDrawingERN3mce25WorldConstantsHolographicE_0(
           (ScreenSetupCleanupHelper *)(*(_DWORD *)(v2 + 32) + 36),
           v3);
}


int __fastcall HoloRealitySetupCleanupStrategy::setupScreen(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  char v6; // [sp+4h] [bp-154h]@1
  char v7; // [sp+44h] [bp-114h]@1
  char v8; // [sp+84h] [bp-D4h]@1
  char v9; // [sp+C4h] [bp-94h]@1
  char v10; // [sp+104h] [bp-54h]@1

  v2 = a1;
  v3 = a2;
  HoloRealitySetupCleanupStrategy::_generateMatrixPatch((HoloRealitySetupCleanupStrategy *)&v10, a1);
  mce::WorldConstantsHolographic::getMatrixPatch(*(_DWORD *)(v3 + 32) + 36, v2 + 8);
  mce::WorldConstantsHolographic::setMatrixPatch(*(_DWORD *)(v3 + 32) + 36, (int)&v10);
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 4));
  HolographicPlatform::getTransform((int)&v9, v4, 15, 21, 0);
  HolographicPlatform::getTransform((int)&v8, v4, 15, 22, 0);
  HolographicPlatform::getTransform((int)&v7, v4, 21, 23, 0);
  HolographicPlatform::getTransform((int)&v6, v4, 22, 24, 0);
  if ( !ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v2 + 4)) )
    HoloRealitySetupCleanupStrategy::adjustProjectionMatrixForRealityMode(v2, (int)&v7, (int)&v6);
  return mce::WorldConstantsHolographic::setViewProjOverrides(
           *(_DWORD *)(v3 + 32) + 36,
           (int)&v9,
           (int)&v7,
           (int)&v8,
           (int)&v6);
}


void __fastcall HoloRealitySetupCleanupStrategy::_adjustProjMat(int a1, int _R1, int _R2)
{
  __asm
  {
    VLDR            S2, [R2]
    VMOV.F32        S10, #-1.0
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VLDR            S4, [R2,#4]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S12, S0
    VCMPE.F32       S4, #0.0
    VLDR            S6, [R2,#8]
    VLDR            S8, [R2,#0xC]
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S12, S10 }
    __asm { VMOVLT.F32      S0, S10 }
    VMOV.F32        S10, #1.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S12, S10 }
    VLDR            S14, [R1]
    VLDR            S3, [R1,#0x28]
    VDIV.F32        S12, S12, S14
    VLDR            S1, [R1,#0x14]
    VSUB.F32        S3, S10, S3
    VLDR            S5, [R1,#0x38]
    __asm { VMOVGT.F32      S0, S10 }
    VDIV.F32        S0, S0, S1
    VDIV.F32        S14, S3, S5
    VMUL.F32        S12, S12, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S14, S8, S14
    VADD.F32        S12, S6, S12
    VADD.F32        S0, S12, S0
    VADD.F32        S0, S0, S14
    VDIV.F32        S0, S10, S0
    VMUL.F32        S6, S0, S6
    VMUL.F32        S2, S0, S2
    VMUL.F32        S4, S0, S4
    VMUL.F32        S0, S0, S8
    VADD.F32        S6, S6, S10
    VSTR            S2, [R1,#8]
    VSTR            S4, [R1,#0x18]
    VSTR            S0, [R1,#0x38]
    VSTR            S6, [R1,#0x28]
}
