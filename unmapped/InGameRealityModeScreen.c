

signed int __fastcall InGameRealityModeScreen::_checkForTransitionToggle(InGameRealityModeScreen *this)
{
  return 1;
}


int __fastcall InGameRealityModeScreen::_SetupTransitionForRender(InGameRealityModeScreen *this, float _R1)
{
  ClientInstance *v8; // r0@1
  void (*v9)(void); // r2@2
  GameRenderer *v10; // r0@2
  int result; // r0@2
  int (*v14)(void); // r2@3
  int v15; // [sp+4h] [bp-3Ch]@3
  int v16; // [sp+8h] [bp-38h]@3
  int v17; // [sp+Ch] [bp-34h]@3
  float v18; // [sp+10h] [bp-30h]@2
  float v19; // [sp+14h] [bp-2Ch]@2
  int v20; // [sp+18h] [bp-28h]@2
  int v21; // [sp+1Ch] [bp-24h]@2
  int v22; // [sp+20h] [bp-20h]@2
  float v23; // [sp+24h] [bp-1Ch]@1

  __asm { VMOV.F32        S0, #1.0 }
  _R4 = this;
  __asm
  {
    VMOV            S2, R1
    VLDR            S4, [R4,#0x15C]
    VLDR            S6, [R4,#0x160]
    VSUB.F32        S0, S0, S2
    VMUL.F32        S2, S4, S2
    VMUL.F32        S0, S6, S0
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  }
  v23 = COERCE_FLOAT(mce::Math::hermiteBlend(_R0, _R1));
  ClientInstance::setRealityModeFrameFactor(*((ClientInstance **)_R4 + 82), &v23);
  v8 = (ClientInstance *)*((_DWORD *)_R4 + 82);
    VLDR            S0, [SP,#0x40+var_1C]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    *(_DWORD *)(ClientInstance::getGameRenderer(v8) + 776) = 0;
    v14 = *(int (**)(void))(*(_DWORD *)ClientInstance::getHoloInput(*((ClientInstance **)_R4 + 82)) + 168);
    v15 = 0;
    v16 = 0;
    v17 = 0;
    result = v14();
  else
    v9 = *(void (**)(void))(*(_DWORD *)ClientInstance::getHoloInput(v8) + 168);
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v9();
    v10 = (GameRenderer *)ClientInstance::getGameRenderer(*((ClientInstance **)_R4 + 82));
    GameRenderer::getHoloLevelWidthHeight(v10, &v19, &v18);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [SP,#0x40+var_2C]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [SP,#0x40+var_2C]
      VLDR            S2, [SP,#0x40+var_30]
      VMUL.F32        S16, S2, S0
      VSTR            S16, [SP,#0x40+var_30]
    }
    _R0 = ClientInstance::getHoloInput(*((ClientInstance **)_R4 + 82));
      VLDR            S0, [R0,#0x2AC]
      VDIV.F32        S0, S16, S0
    _R0 = &Player::DEFAULT_PLAYER_HEIGHT_OFFSET;
      VLDR            S2, [R0]
      VSUB.F32        S0, S2, S0
      VLDR            S2, [SP,#0x40+var_1C]
      VMUL.F32        S16, S0, S2
    result = ClientInstance::getGameRenderer(*((ClientInstance **)_R4 + 82));
    __asm { VSTR            S16, [R0,#0x308] }
  return result;
}


int __fastcall InGameRealityModeScreen::_preLevelRender(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@2
  int v6; // r0@2
  int v7; // r0@2
  int v12; // r0@3
  __int64 v13; // ST24_8@3
  int v14; // ST2C_4@3
  int v15; // ST30_4@3
  int v16; // ST10_4@3
  __int64 v17; // kr00_8@3
  __int64 v18; // ST14_8@3
  __int64 v19; // ST1C_8@3
  int v20; // r8@3
  int v21; // r0@3
  __int64 v22; // kr08_8@3
  int v23; // r9@3
  GameRenderer *v24; // r0@3
  int v25; // r6@3
  int v27; // r0@3
  int v31; // r0@3
  int v32; // r0@3
  mce::WorldConstantsHolographic *v33; // r1@3
  Options *v34; // r0@4
  mce::WorldConstantsHolographic *v35; // r1@4
  int v36; // r0@5
  Options *v37; // r0@5
  float v39; // [sp+34h] [bp-164h]@3
  int v40; // [sp+44h] [bp-154h]@3
  int v41; // [sp+48h] [bp-150h]@3
  int v42; // [sp+4Ch] [bp-14Ch]@3
  int v43; // [sp+50h] [bp-148h]@3
  int v44; // [sp+54h] [bp-144h]@3
  __int64 v45; // [sp+58h] [bp-140h]@3
  __int64 v46; // [sp+60h] [bp-138h]@3
  __int64 v47; // [sp+68h] [bp-130h]@3
  __int64 v48; // [sp+70h] [bp-128h]@3
  int v49; // [sp+78h] [bp-120h]@3
  int v50; // [sp+7Ch] [bp-11Ch]@3
  __int64 v51; // [sp+80h] [bp-118h]@3
  int v52; // [sp+88h] [bp-110h]@3
  int v53; // [sp+8Ch] [bp-10Ch]@3
  float v54; // [sp+94h] [bp-104h]@3
  float v55; // [sp+98h] [bp-100h]@3
  char v56; // [sp+9Ch] [bp-FCh]@3
  int v57; // [sp+A4h] [bp-F4h]@3
  char v58; // [sp+A8h] [bp-F0h]@2
  char v59; // [sp+E8h] [bp-B0h]@2
  char v60; // [sp+128h] [bp-70h]@2
  int v64; // [sp+158h] [bp-40h]@3
  int v65; // [sp+15Ch] [bp-3Ch]@3
  int v66; // [sp+160h] [bp-38h]@2

  v2 = a2;
  v3 = a1;
  InGamePlayScreen::_preLevelRender();
  *(_BYTE *)(v3 + 440) = 0;
  if ( !ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v3 + 328)) )
  {
    v4 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 328));
    _R6 = (*(int (**)(void))(*(_DWORD *)v4 + 312))();
    v6 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 328));
    HolographicPlatform::getTransform((int)&v59, v6, 7, 10, 0);
    v7 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 328));
    HolographicPlatform::getTransform((int)&v58, v7, 20, 7, 15);
    glm::detail::operator*<float>((int)&v60, (int)&v59, (int)&v58);
    __asm
    {
      VMOV            S0, R6
      VLDR            S2, [SP,#0x198+var_38]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      *(_BYTE *)(v3 + 440) = 1;
      InGamePlayScreen::_setCorrectViewProj(
        (InGamePlayScreen *)v3,
        (mce::WorldConstantsHolographic *)(*(_DWORD *)(v2 + 32) + 36));
      v12 = ClientInstance::getHolosceneRenderer(*(ClientInstance **)(v3 + 328));
      HolosceneRenderer::renderLivingRoom(v12, v2);
      v13 = qword_27E8A08;
      v14 = unk_27E8A10;
      v15 = qword_27E8A14;
      v16 = *(&Matrix::IDENTITY + 1);
      v17 = qword_27E89F0;
      v18 = qword_27E89F8;
      v19 = qword_27E8A00;
      v20 = Matrix::IDENTITY;
      v21 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 328));
      HolographicPlatform::getTransformTranslation((int)&v56, v21, 10, 7, 0);
      v22 = *(_QWORD *)&v56;
      v23 = v57;
      v24 = (GameRenderer *)ClientInstance::getGameRenderer(*(ClientInstance **)(v3 + 328));
      GameRenderer::getHoloLevelWidthHeight(v24, &v55, &v54);
      v25 = ClientInstance::getHolosceneRenderer(*(ClientInstance **)(v3 + 328));
      __asm { VLDR            S16, [SP,#0x198+var_100] }
      _aeabi_memclr8(&v43, 60);
      __asm { VMOV.F32        S0, #0.5 }
      v43 = v20;
      v44 = v16;
      v45 = v17;
      __asm { VMUL.F32        S0, S16, S0 }
      v46 = v18;
      v47 = v19;
      __asm { VMOV            R2, S0 }
      v48 = v13;
      v49 = v14;
      v50 = v15;
      v51 = v22;
      v52 = v23;
      v53 = 1065353216;
      HolosceneRenderer::renderFrame_Level(v25, v2, _R2, (int)&v43);
      v27 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 328));
      HolographicPlatform::getTransform((int)&v60, v27, 10, 1, 2);
      _R0 = v64;
      _R2 = v66;
      __asm
      {
        VLDR            S0, [SP,#0x198+var_50]
        VMOV            S6, R0
        VLDR            S4, [SP,#0x198+var_48]
        VMOV            S8, R2
      }
      _R1 = v65;
        VMUL.F32        S6, S6, S0
        VLDR            S2, [SP,#0x198+var_4C]
        VMUL.F32        S8, S8, S4
      v40 = v64;
      __asm { VMOV            S10, R1 }
      v41 = v65;
        VSTR            S0, [SP,#0x198+var_164]
        VMUL.F32        S10, S10, S2
        VSTR            S2, [SP,#0x198+var_160]
      v42 = v66;
        VSTR            S4, [SP,#0x198+var_15C]
        VADD.F32        S6, S6, S8
        VADD.F32        S6, S6, S10
        VSTR            S6, [SP,#0x198+var_158]
      v31 = ClientInstance::getGameRenderer(*(ClientInstance **)(v3 + 328));
      GameRenderer::setInsideCubePlane(v31, (int)&v39, (int)&v40);
      v32 = *(_DWORD *)(v2 + 12);
      mce::RenderContext::clearDepthStencilBuffer();
      (*(void (**)(void))(**(_DWORD **)(v3 + 16) + 8))();
      InGameRealityModeScreen::_drawOneToOneCutoutStencil(v3, v2);
      ScreenSetupCleanupHelper::cleanupFromVRDrawing((ScreenSetupCleanupHelper *)(*(_DWORD *)(v2 + 32) + 36), v33);
  }
  InGameRealityModeScreen::_updateTurnStickRawProcessing((InGameRealityModeScreen *)v3);
  v34 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v3 + 328));
  if ( Options::getResetPlayerAlignment(v34) == 1 )
    v36 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 328));
    (*(void (**)(void))(*(_DWORD *)v36 + 132))();
    *(_BYTE *)(ClientInstance::getGameRenderer(*(ClientInstance **)(v3 + 328)) + 814) = 1;
    v37 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v3 + 328));
    Options::setResetPlayerAlignment(v37, 0);
  ScreenSetupCleanupHelper::cleanupFromVRDrawing((ScreenSetupCleanupHelper *)(*(_DWORD *)(v2 + 32) + 36), v35);
  return InGameRealityModeScreen::_SetupTransitionForRender((InGameRealityModeScreen *)v3, *(float *)(v2 + 8));
}


void __fastcall InGameRealityModeScreen::handleCommandEvent(int a1, int *a2)
{
  int v2; // r1@1
  int v3; // r4@1
  int v4; // r5@3
  int v5; // r0@3
  int v6; // r4@3
  unsigned int *v7; // r1@4
  unsigned int v8; // r0@6
  signed int v9; // r1@10
  MinecraftGame *v10; // r0@10
  int v11; // r0@11
  int v12; // r0@15
  int v13; // r0@16
  int v18; // r2@17 OVERLAPPED
  unsigned int *v21; // r5@25
  unsigned int v22; // r0@27
  char v23; // [sp+4h] [bp-24h]@3
  int v24; // [sp+8h] [bp-20h]@3
  float v25; // [sp+Ch] [bp-1Ch]@16
  int v26; // [sp+10h] [bp-18h]@16
  float v27; // [sp+14h] [bp-14h]@16

  v2 = *a2;
  v3 = a1;
  switch ( v2 )
  {
    case 18:
      if ( !(*(int (**)(void))(*(_DWORD *)a1 + 168))() )
      {
        v4 = ClientInstance::getClientSceneStack(*(ClientInstance **)(v3 + 328));
        v5 = ClientInstance::getSceneFactory(*(ClientInstance **)(v3 + 328));
        SceneFactory::createGameplayScreen((SceneFactory *)&v23, v5);
        SceneStack::pushScreen(v4, (int)&v23, 1);
        v6 = v24;
        if ( v24 )
        {
          v7 = (unsigned int *)(v24 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            v21 = (unsigned int *)(v6 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
            if ( &pthread_create )
            {
              __dmb();
              do
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
            }
            else
              v22 = (*v21)--;
            if ( v22 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
        }
      }
      return;
    case 34:
      v9 = 1065520988;
      v10 = *(MinecraftGame **)(a1 + 324);
      goto LABEL_21;
    case 21:
      v11 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 328));
      if ( (*(int (**)(void))(*(_DWORD *)v11 + 52))() == 1 )
        *(_DWORD *)(v3 + 344) = 1065353216;
    case 31:
      v9 = 1048576000;
    case 20:
      v12 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 328));
      if ( (*(int (**)(void))(*(_DWORD *)v12 + 52))() == 1 )
        v13 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 328));
        HolographicPlatform::getTransformZDir((int)&v25, v13, 16, 15, 0);
        v26 = 0;
        __asm
          VLDR            S0, [SP,#0x28+var_1C]
          VLDR            S2, [SP,#0x28+var_14]
          VMUL.F32        S4, S0, S0
          VMUL.F32        S6, S2, S2
          VADD.F32        S4, S6, S4
          VLDR            S6, =0.0001
          VSQRT.F32       S4, S4
          VCMPE.F32       S4, S6
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          *(_QWORD *)&_R1 = *(_QWORD *)&Vec3::ZERO;
          _R0 = *(float *)&dword_2822498;
        else
          __asm { VDIV.F32        S2, S2, S4 }
          v18 = 0;
          __asm
            VDIV.F32        S0, S0, S4
            VMOV            R0, S2
            VMOV            R1, S0
        *(_QWORD *)&v25 = *(_QWORD *)&_R1;
        v27 = _R0;
        *(_DWORD *)(ClientInstance::getGameRenderer(*(ClientInstance **)(v3 + 328)) + 788) = 0;
        *(_BYTE *)(ClientInstance::getGameRenderer(*(ClientInstance **)(v3 + 328)) + 814) = 1;
        *(_DWORD *)(v3 + 344) = 0;
    case 32:
      v9 = 1051931443;
    case 33:
      v9 = 1059313418;
LABEL_21:
      j_j_j__ZN13MinecraftGame22setHoloscreenHalfWidthEf(v10, *(float *)&v9);
      break;
    case 19:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    default:
      if ( v2 == 38 )
        j_j_j__ZN20ClientInputCallbacks36handleTogglePerspectiveButtonReleaseER14ClientInstance(
          *(ClientInputCallbacks **)(a1 + 328),
          (ClientInstance *)0x26);
  }
}


int __fastcall InGameRealityModeScreen::_dropVRAnchor(InGameRealityModeScreen *this)
{
  InGameRealityModeScreen *v1; // r4@1
  int v2; // r0@1
  int v7; // r2@2 OVERLAPPED
  int result; // r0@4
  float v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1
  float v13; // [sp+Ch] [bp-14h]@1

  v1 = this;
  v2 = ClientInstance::getHoloInput(*((ClientInstance **)this + 82));
  HolographicPlatform::getTransformZDir((int)&v11, v2, 16, 15, 0);
  v12 = 0;
  __asm
  {
    VLDR            S0, [SP,#0x20+var_1C]
    VLDR            S2, [SP,#0x20+var_14]
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VADD.F32        S4, S6, S4
    VLDR            S6, =0.0001
    VSQRT.F32       S4, S4
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    *(_QWORD *)&_R1 = *(_QWORD *)&Vec3::ZERO;
    _R0 = *(float *)&dword_2822498;
  else
    __asm { VDIV.F32        S2, S2, S4 }
    v7 = 0;
    __asm
    {
      VDIV.F32        S0, S0, S4
      VMOV            R0, S2
      VMOV            R1, S0
    }
  *(_QWORD *)&v11 = *(_QWORD *)&_R1;
  v13 = _R0;
  *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)v1 + 82)) + 788) = 0;
  result = ClientInstance::getGameRenderer(*((ClientInstance **)v1 + 82));
  *(_BYTE *)(result + 814) = 1;
  return result;
}


int __fastcall InGameRealityModeScreen::~InGameRealityModeScreen(InGameRealityModeScreen *this)
{
  InGameRealityModeScreen *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E4B6C;
  *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)this + 82)) + 776) = 0;
  v2 = ClientInstance::getHoloInput(*((ClientInstance **)this + 82));
  (*(void (**)(void))(*(_DWORD *)v2 + 172))();
  *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)v1 + 82)) + 792) = 0;
  *(_DWORD *)(ClientInstance::getHoloInput(*((ClientInstance **)v1 + 82)) + 648) = 1065353216;
  return j_j_j__ZN16InGamePlayScreenD2Ev(v1);
}


int __fastcall InGameRealityModeScreen::_localPlayerTurned(int result, float _R1)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S4, =1.1921e-7
  }
  _R4 = result;
    VABS.F32        S2, S0
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm
    {
      VLDR            S2, =-0.017453
      VMUL.F32        S0, S0, S2
      VMOV            R5, S0
    }
    _R6 = cosf(_R5);
    result = sinf(_R5);
      VMOV            S2, R0
      VMOV            S6, R6
    _R1 = &Matrix::IDENTITY;
      VLDR            S0, [R1,#0x20]
      VLDR            S12, [R1]
      VLDR            S4, [R1,#0x24]
      VMUL.F32        S1, S0, S2
      VMUL.F32        S5, S6, S12
      VLDR            S8, [R1,#4]
      VLDR            S10, [R1,#8]
      VMUL.F32        S3, S4, S2
      VLDR            S7, [R1,#0x28]
      VMUL.F32        S9, S6, S8
      VMUL.F32        S13, S6, S10
      VLDR            S14, [R1,#0x10]
      VMUL.F32        S11, S7, S2
      VMUL.F32        S4, S6, S4
      VMUL.F32        S8, S2, S8
      VSUB.F32        S1, S5, S1
      VMUL.F32        S0, S6, S0
      VSUB.F32        S3, S9, S3
      VLDR            S9, [R4,#0x188]
      VMUL.F32        S12, S2, S12
      VSUB.F32        S5, S13, S11
      VLDR            S11, [R4,#0x18C]
      VMUL.F32        S6, S6, S7
      VLDR            S7, [R1,#0x34]
      VMUL.F32        S2, S2, S10
      VLDR            S13, [R4,#0x190]
      VMUL.F32        S1, S1, S9
      VMUL.F32        S10, S11, S14
      VMUL.F32        S3, S3, S9
      VADD.F32        S4, S8, S4
      VLDR            S8, [R1,#0x14]
      VMUL.F32        S14, S5, S9
      VLDR            S5, [R1,#0x30]
      VADD.F32        S0, S12, S0
      VLDR            S9, [R1,#0x38]
      VADD.F32        S2, S2, S6
      VADD.F32        S12, S5, S1
      VLDR            S1, [R1,#0x18]
      VMUL.F32        S8, S11, S8
      VADD.F32        S3, S7, S3
      VMUL.F32        S6, S11, S1
      VADD.F32        S14, S9, S14
      VMUL.F32        S0, S13, S0
      VMUL.F32        S4, S13, S4
      VADD.F32        S10, S10, S12
      VMUL.F32        S2, S13, S2
      VADD.F32        S8, S8, S3
      VADD.F32        S6, S6, S14
      VADD.F32        S0, S0, S10
      VADD.F32        S4, S4, S8
      VSTR            S0, [R4,#0x188]
      VSTR            S4, [R4,#0x18C]
      VSTR            S2, [R4,#0x190]
  return result;
}


void __fastcall InGameRealityModeScreen::handleCommandEvent(int a1, int *a2)
{
  InGameRealityModeScreen::handleCommandEvent(a1, a2);
}


int __fastcall InGameRealityModeScreen::_drawCutoutFadeout(int a1, int a2)
{
  int v4; // r8@1
  int v5; // r4@1
  Tessellator *v6; // r7@1
  GameRenderer *v7; // r0@1
  ShaderColor *v12; // r0@5
  void *v13; // r0@5
  unsigned int *v15; // r2@7
  signed int v16; // r1@9
  int v17; // [sp+Ch] [bp-13Ch]@5
  char v18; // [sp+10h] [bp-138h]@5
  char v19; // [sp+1Ch] [bp-12Ch]@5
  int v20; // [sp+80h] [bp-C8h]@5
  int v21; // [sp+84h] [bp-C4h]@5
  int v22; // [sp+88h] [bp-C0h]@5
  float v23; // [sp+90h] [bp-B8h]@1
  float v24; // [sp+94h] [bp-B4h]@1
  int v25; // [sp+98h] [bp-B0h]@1
  int v26; // [sp+9Ch] [bp-ACh]@1
  int v27; // [sp+A0h] [bp-A8h]@1
  int v28; // [sp+A4h] [bp-A4h]@1
  int v29; // [sp+A8h] [bp-A0h]@1
  int v30; // [sp+ACh] [bp-9Ch]@1
  int v31; // [sp+B0h] [bp-98h]@1
  int v32; // [sp+B4h] [bp-94h]@1
  int v33; // [sp+B8h] [bp-90h]@1
  int v34; // [sp+BCh] [bp-8Ch]@1
  int v35; // [sp+C0h] [bp-88h]@1
  int v36; // [sp+C4h] [bp-84h]@1
  int v37; // [sp+C8h] [bp-80h]@1
  int v38; // [sp+CCh] [bp-7Ch]@1
  int v39; // [sp+D0h] [bp-78h]@1
  int v40; // [sp+D4h] [bp-74h]@1
  int v41; // [sp+D8h] [bp-70h]@1
  int v42; // [sp+DCh] [bp-6Ch]@1
  int v43; // [sp+E0h] [bp-68h]@1
  int v44; // [sp+E4h] [bp-64h]@1
  int v45; // [sp+E8h] [bp-60h]@1
  signed int v46; // [sp+ECh] [bp-5Ch]@1
  int v47; // [sp+F0h] [bp-58h]@1
  int v48; // [sp+F4h] [bp-54h]@1
  int v49; // [sp+F8h] [bp-50h]@1
  int v50; // [sp+FCh] [bp-4Ch]@1
  signed int v51; // [sp+100h] [bp-48h]@1
  int v52; // [sp+104h] [bp-44h]@1
  int v53; // [sp+108h] [bp-40h]@1
  int v54; // [sp+10Ch] [bp-3Ch]@1
  int v55; // [sp+110h] [bp-38h]@1
  int v56; // [sp+114h] [bp-34h]@1

  _R6 = a1;
  _R9 = a2;
  v41 = 1065353216;
  v44 = 0;
  v45 = 0;
  v42 = 0;
  v43 = 0;
  v48 = 0;
  v49 = 0;
  v46 = 1065353216;
  v47 = 0;
  v50 = 0;
  v51 = 1065353216;
  v54 = 0;
  v55 = 0;
  v52 = 0;
  v53 = 0;
  v56 = 1065353216;
  v4 = *(_DWORD *)(a2 + 32) + 36;
  mce::WorldConstantsHolographic::getMatrixPatch(v4, (int)&v41);
  v5 = ClientInstance::getGameRenderer(*(ClientInstance **)(_R6 + 328));
  _aeabi_memclr8(&v25, 56);
  v25 = *(_DWORD *)(v5 + 712);
  v26 = *(_DWORD *)(v5 + 716);
  v27 = *(_DWORD *)(v5 + 720);
  v28 = *(_DWORD *)(v5 + 724);
  v29 = *(_DWORD *)(v5 + 728);
  v30 = *(_DWORD *)(v5 + 732);
  v31 = *(_DWORD *)(v5 + 736);
  v32 = *(_DWORD *)(v5 + 740);
  v33 = *(_DWORD *)(v5 + 744);
  v34 = *(_DWORD *)(v5 + 748);
  v35 = *(_DWORD *)(v5 + 752);
  v36 = *(_DWORD *)(v5 + 756);
  v37 = *(_DWORD *)(v5 + 760);
  v38 = *(_DWORD *)(v5 + 764);
  v39 = *(_DWORD *)(v5 + 768);
  v40 = *(_DWORD *)(v5 + 772);
  mce::WorldConstantsHolographic::setMatrixPatch(v4, (int)&v25);
  v6 = *(Tessellator **)(_R9 + 40);
  v7 = (GameRenderer *)ClientInstance::getGameRenderer(*(ClientInstance **)(_R6 + 328));
  GameRenderer::getHoloLevelWidthHeight(v7, &v24, &v23);
  __asm
  {
    VMOV.F32        S16, #0.5
    VLDR            S0, [SP,#0x148+var_B4]
    VMUL.F32        S0, S0, S16
    VSTR            S0, [SP,#0x148+var_B4]
    VLDR            S0, [SP,#0x148+var_B8]
    VSTR            S0, [SP,#0x148+var_B8]
  }
  Tessellator::begin((int)v6, 2, 4, 0);
  Tessellator::vertex(v6, COERCE_FLOAT(LODWORD(v24) ^ 0x80000000), v23, 0.0);
  Tessellator::vertex(v6, v24, v23, 0.0);
  Tessellator::vertex(v6, v24, COERCE_FLOAT(LODWORD(v23) ^ 0x80000000), 0.0);
  Tessellator::vertex(v6, COERCE_FLOAT(LODWORD(v24) ^ 0x80000000), COERCE_FLOAT(LODWORD(v23) ^ 0x80000000), 0.0);
  Tessellator::beginIndices(v6, 0);
  Tessellator::quad(v6, 3u, 2u, 1u, 0);
    VMOV.F32        S0, #1.0
    VLDR            S2, [R9,#8]
    VLDR            S8, [R6,#0x15C]
    VLDR            S10, [R6,#0x160]
    VLDR            S6, [R6,#0x158]
    VCMPE.F32       S6, S16
    VMRS            APSR_nzcv, FPSCR
    VSUB.F32        S4, S0, S2
    VMUL.F32        S2, S8, S2
    VMUL.F32        S4, S10, S4
    VADD.F32        S2, S4, S2
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VLDR            S4, =-0.65
      VMOV.F32        S6, #4.0
      VADD.F32        S2, S2, S4
      VMUL.F32        S2, S2, S6
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S0 }
  else
      VMOV.F32        S0, #-0.75
      VMOV.F32        S4, #4.0
      VADD.F32        S0, S2, S0
      VMUL.F32        S2, S0, S4
  __asm { VSTR            S2, [R6,#0x1B4] }
  v12 = *(ShaderColor **)(_R9 + 48);
  v20 = 0;
  v21 = 0;
  v22 = 0;
  __asm { VSTR            S2, [SP,#0x148+var_BC] }
  ShaderColor::setColor(v12, (const Color *)&v20);
  Tessellator::end((Tessellator *)&v19, (const char *)v6, 0, 0);
  sub_21E94B4((void **)&v17, "reality_frame_skyfill");
  mce::RenderMaterialGroup::getMaterial(
    (mce::MaterialPtr *)&v18,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v17);
  mce::Mesh::render((mce::Buffer *)&v19, _R9, (int)&v18, 0, 0);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v18);
  v13 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  mce::WorldConstantsHolographic::setMatrixPatch(v4, (int)&v41);
  return mce::Mesh::~Mesh((mce::Mesh *)&v19);
}


void __fastcall InGameRealityModeScreen::tick(InGameRealityModeScreen *this, int a2, int a3)
{
  InGameRealityModeScreen::tick(this, a2, a3);
}


int __fastcall InGameRealityModeScreen::_prepareVRCuller(InGameRealityModeScreen *this, mce::Camera *a2, Frustum *a3, Frustum *a4)
{
  mce::Camera *v4; // r9@1
  Frustum *v5; // r4@1
  Frustum *v6; // r7@1
  mce::Camera *v7; // ST38_4@1
  int v8; // r6@1
  int v9; // ST1C_4@1
  int v10; // ST18_4@1
  int v11; // ST14_4@1
  int v12; // ST10_4@1
  int v13; // ST30_4@1
  int v14; // ST2C_4@1
  int v15; // ST28_4@1
  int v16; // ST24_4@1
  int v17; // ST20_4@1
  int v18; // ST0C_4@1
  int v19; // ST08_4@1
  int v20; // r8@1
  __int64 v21; // kr00_8@1
  __int64 v22; // kr08_8@1
  int v23; // r0@1
  int v24; // r2@1
  int v25; // r0@1
  int v26; // r0@1
  int v27; // r5@1
  int v28; // r6@1
  int v29; // r0@1
  int v30; // r0@1
  int v31; // r0@1
  int v32; // r5@1
  int v33; // r6@1
  int v34; // r0@1
  int v36; // [sp+3Ch] [bp-384h]@1
  int v37; // [sp+40h] [bp-380h]@1
  int v38; // [sp+44h] [bp-37Ch]@1
  int v39; // [sp+48h] [bp-378h]@1
  int v40; // [sp+4Ch] [bp-374h]@1
  int v41; // [sp+50h] [bp-370h]@1
  int v42; // [sp+54h] [bp-36Ch]@1
  int v43; // [sp+58h] [bp-368h]@1
  int v44; // [sp+5Ch] [bp-364h]@1
  int v45; // [sp+60h] [bp-360h]@1
  int v46; // [sp+64h] [bp-35Ch]@1
  int v47; // [sp+68h] [bp-358h]@1
  int v48; // [sp+6Ch] [bp-354h]@1
  int v49; // [sp+70h] [bp-350h]@1
  int v50; // [sp+74h] [bp-34Ch]@1
  int v51; // [sp+78h] [bp-348h]@1
  int v52; // [sp+7Ch] [bp-344h]@1
  int v53; // [sp+80h] [bp-340h]@1
  int v54; // [sp+84h] [bp-33Ch]@1
  int v55; // [sp+88h] [bp-338h]@1
  int v56; // [sp+8Ch] [bp-334h]@1
  int v57; // [sp+90h] [bp-330h]@1
  int v58; // [sp+94h] [bp-32Ch]@1
  int v59; // [sp+98h] [bp-328h]@1
  int v60; // [sp+9Ch] [bp-324h]@1
  int v61; // [sp+A0h] [bp-320h]@1
  int v62; // [sp+A4h] [bp-31Ch]@1
  int v63; // [sp+A8h] [bp-318h]@1
  int v64; // [sp+ACh] [bp-314h]@1
  int v65; // [sp+B0h] [bp-310h]@1
  int v66; // [sp+B4h] [bp-30Ch]@1
  int v67; // [sp+B8h] [bp-308h]@1
  int v68; // [sp+BCh] [bp-304h]@1
  int v69; // [sp+C0h] [bp-300h]@1
  int v70; // [sp+C4h] [bp-2FCh]@1
  int v71; // [sp+C8h] [bp-2F8h]@1
  int v72; // [sp+CCh] [bp-2F4h]@1
  int v73; // [sp+D0h] [bp-2F0h]@1
  int v74; // [sp+D4h] [bp-2ECh]@1
  int v75; // [sp+D8h] [bp-2E8h]@1
  int v76; // [sp+DCh] [bp-2E4h]@1
  int v77; // [sp+E0h] [bp-2E0h]@1
  int v78; // [sp+E4h] [bp-2DCh]@1
  int v79; // [sp+E8h] [bp-2D8h]@1
  int v80; // [sp+ECh] [bp-2D4h]@1
  int v81; // [sp+F0h] [bp-2D0h]@1
  int v82; // [sp+F4h] [bp-2CCh]@1
  int v83; // [sp+F8h] [bp-2C8h]@1
  char v84; // [sp+FCh] [bp-2C4h]@1
  char v85; // [sp+104h] [bp-2BCh]@1
  int v86; // [sp+10Ch] [bp-2B4h]@1
  int v87; // [sp+110h] [bp-2B0h]@1
  int v88; // [sp+114h] [bp-2ACh]@1
  int v89; // [sp+118h] [bp-2A8h]@1
  int v90; // [sp+11Ch] [bp-2A4h]@1
  int v91; // [sp+120h] [bp-2A0h]@1
  int v92; // [sp+124h] [bp-29Ch]@1
  int v93; // [sp+128h] [bp-298h]@1
  int v94; // [sp+12Ch] [bp-294h]@1
  int v95; // [sp+130h] [bp-290h]@1
  int v96; // [sp+134h] [bp-28Ch]@1
  int v97; // [sp+138h] [bp-288h]@1
  int v98; // [sp+13Ch] [bp-284h]@1
  int v99; // [sp+140h] [bp-280h]@1
  int v100; // [sp+144h] [bp-27Ch]@1
  int v101; // [sp+148h] [bp-278h]@1
  int v102; // [sp+14Ch] [bp-274h]@1
  int v103; // [sp+150h] [bp-270h]@1
  int v104; // [sp+154h] [bp-26Ch]@1
  int v105; // [sp+158h] [bp-268h]@1
  int v106; // [sp+15Ch] [bp-264h]@1
  int v107; // [sp+160h] [bp-260h]@1
  int v108; // [sp+164h] [bp-25Ch]@1
  int v109; // [sp+168h] [bp-258h]@1
  int v110; // [sp+16Ch] [bp-254h]@1
  int v111; // [sp+170h] [bp-250h]@1
  int v112; // [sp+174h] [bp-24Ch]@1
  int v113; // [sp+178h] [bp-248h]@1
  int v114; // [sp+17Ch] [bp-244h]@1
  int v115; // [sp+180h] [bp-240h]@1
  int v116; // [sp+184h] [bp-23Ch]@1
  int v117; // [sp+188h] [bp-238h]@1
  int v118; // [sp+18Ch] [bp-234h]@1
  int v119; // [sp+190h] [bp-230h]@1
  int v120; // [sp+194h] [bp-22Ch]@1
  int v121; // [sp+198h] [bp-228h]@1
  int v122; // [sp+19Ch] [bp-224h]@1
  int v123; // [sp+1A0h] [bp-220h]@1
  int v124; // [sp+1A4h] [bp-21Ch]@1
  int v125; // [sp+1A8h] [bp-218h]@1
  int v126; // [sp+1ACh] [bp-214h]@1
  int v127; // [sp+1B0h] [bp-210h]@1
  int v128; // [sp+1B4h] [bp-20Ch]@1
  int v129; // [sp+1B8h] [bp-208h]@1
  int v130; // [sp+1BCh] [bp-204h]@1
  int v131; // [sp+1C0h] [bp-200h]@1
  int v132; // [sp+1C4h] [bp-1FCh]@1
  int v133; // [sp+1C8h] [bp-1F8h]@1
  char v134; // [sp+1CCh] [bp-1F4h]@1
  char v135; // [sp+1D4h] [bp-1ECh]@1
  char v136; // [sp+1DCh] [bp-1E4h]@1
  char v137; // [sp+21Ch] [bp-1A4h]@1
  int v138; // [sp+25Ch] [bp-164h]@1
  int v139; // [sp+260h] [bp-160h]@1
  int v140; // [sp+264h] [bp-15Ch]@1
  int v141; // [sp+268h] [bp-158h]@1
  int v142; // [sp+26Ch] [bp-154h]@1
  int v143; // [sp+270h] [bp-150h]@1
  int v144; // [sp+274h] [bp-14Ch]@1
  int v145; // [sp+278h] [bp-148h]@1
  int v146; // [sp+27Ch] [bp-144h]@1
  int v147; // [sp+280h] [bp-140h]@1
  int v148; // [sp+284h] [bp-13Ch]@1
  int v149; // [sp+288h] [bp-138h]@1
  int v150; // [sp+28Ch] [bp-134h]@1
  int v151; // [sp+290h] [bp-130h]@1
  int v152; // [sp+294h] [bp-12Ch]@1
  int v153; // [sp+298h] [bp-128h]@1
  int v154; // [sp+29Ch] [bp-124h]@1
  int v155; // [sp+2A0h] [bp-120h]@1
  int v156; // [sp+2A4h] [bp-11Ch]@1
  int v157; // [sp+2A8h] [bp-118h]@1
  int v158; // [sp+2ACh] [bp-114h]@1
  int v159; // [sp+2B0h] [bp-110h]@1
  int v160; // [sp+2B4h] [bp-10Ch]@1
  int v161; // [sp+2B8h] [bp-108h]@1
  int v162; // [sp+2BCh] [bp-104h]@1
  int v163; // [sp+2C0h] [bp-100h]@1
  int v164; // [sp+2C4h] [bp-FCh]@1
  int v165; // [sp+2C8h] [bp-F8h]@1
  int v166; // [sp+2CCh] [bp-F4h]@1
  int v167; // [sp+2D0h] [bp-F0h]@1
  int v168; // [sp+2D4h] [bp-ECh]@1
  int v169; // [sp+2D8h] [bp-E8h]@1
  int v170; // [sp+2DCh] [bp-E4h]@1
  int v171; // [sp+2E0h] [bp-E0h]@1
  int v172; // [sp+2E4h] [bp-DCh]@1
  int v173; // [sp+2E8h] [bp-D8h]@1
  int v174; // [sp+2ECh] [bp-D4h]@1
  int v175; // [sp+2F0h] [bp-D0h]@1
  int v176; // [sp+2F4h] [bp-CCh]@1
  int v177; // [sp+2F8h] [bp-C8h]@1
  int v178; // [sp+2FCh] [bp-C4h]@1
  int v179; // [sp+300h] [bp-C0h]@1
  int v180; // [sp+304h] [bp-BCh]@1
  int v181; // [sp+308h] [bp-B8h]@1
  int v182; // [sp+30Ch] [bp-B4h]@1
  int v183; // [sp+310h] [bp-B0h]@1
  int v184; // [sp+314h] [bp-ACh]@1
  int v185; // [sp+318h] [bp-A8h]@1
  int v186; // [sp+31Ch] [bp-A4h]@1
  int v187; // [sp+320h] [bp-A0h]@1
  int v188; // [sp+324h] [bp-9Ch]@1
  int v189; // [sp+328h] [bp-98h]@1
  int v190; // [sp+32Ch] [bp-94h]@1
  int v191; // [sp+330h] [bp-90h]@1
  int v192; // [sp+334h] [bp-8Ch]@1
  int v193; // [sp+338h] [bp-88h]@1
  int v194; // [sp+33Ch] [bp-84h]@1
  int v195; // [sp+340h] [bp-80h]@1
  int v196; // [sp+344h] [bp-7Ch]@1
  int v197; // [sp+348h] [bp-78h]@1
  int v198; // [sp+34Ch] [bp-74h]@1
  int v199; // [sp+350h] [bp-70h]@1
  int v200; // [sp+354h] [bp-6Ch]@1
  int v201; // [sp+358h] [bp-68h]@1
  int v202; // [sp+35Ch] [bp-64h]@1
  int v203; // [sp+360h] [bp-60h]@1
  int v204; // [sp+364h] [bp-5Ch]@1
  int v205; // [sp+368h] [bp-58h]@1
  __int64 v206; // [sp+36Ch] [bp-54h]@1
  __int64 v207; // [sp+374h] [bp-4Ch]@1
  int v208; // [sp+37Ch] [bp-44h]@1
  int v209; // [sp+380h] [bp-40h]@1
  int v210; // [sp+384h] [bp-3Ch]@1
  int v211; // [sp+388h] [bp-38h]@1
  int v212; // [sp+38Ch] [bp-34h]@1
  int v213; // [sp+390h] [bp-30h]@1
  int v214; // [sp+394h] [bp-2Ch]@1
  int v215; // [sp+398h] [bp-28h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = ClientInstance::getHoloInput(*((ClientInstance **)this + 82));
  HolographicPlatform::getTransform((int)&v186, v8, 15, 21, 0);
  HolographicPlatform::getTransform((int)&v170, v8, 21, 23, 0);
  HolographicPlatform::getTransform((int)&v154, v8, 15, 22, 0);
  HolographicPlatform::getTransform((int)&v138, v8, 22, 24, 0);
  HolographicPlatform::getTransform((int)&v137, v8, 10, 15, 0);
  HolographicPlatform::getTransform((int)&v136, v8, 2, 10, 0);
  glm::detail::operator*<float>((int)&v202, (int)&v137, (int)&v136);
  v9 = v202;
  v10 = v203;
  v11 = v204;
  v12 = v205;
  v13 = v215;
  v14 = v214;
  v15 = v213;
  v16 = v212;
  v17 = v211;
  v18 = v210;
  v19 = v209;
  v20 = v208;
  v21 = v207;
  v22 = v206;
  MatrixStack::push((MatrixStack *)&v202, (int)v4 + 16);
  v23 = MatrixStack::MatrixStackRef::operator*((int)&v202);
  v24 = v23 + 12;
  *(_DWORD *)v23 = v9;
  *(_DWORD *)(v23 + 4) = v10;
  *(_DWORD *)(v23 + 8) = v11;
  *(_DWORD *)v24 = v12;
  *(_QWORD *)(v24 + 4) = v22;
  *(_QWORD *)(v23 + 24) = v21;
  *(_DWORD *)(v23 + 32) = v20;
  *(_DWORD *)(v23 + 36) = v19;
  *(_DWORD *)(v23 + 40) = v18;
  *(_DWORD *)(v23 + 44) = v17;
  *(_DWORD *)(v23 + 48) = v16;
  *(_DWORD *)(v23 + 52) = v15;
  *(_DWORD *)(v23 + 56) = v14;
  *(_DWORD *)(v23 + 60) = v13;
  MatrixStack::push((MatrixStack *)&v135, (int)v7);
  v25 = MatrixStack::MatrixStackRef::operator*((int)&v135);
  *(_DWORD *)v25 = v186;
  *(_DWORD *)(v25 + 4) = v187;
  *(_DWORD *)(v25 + 8) = v188;
  *(_DWORD *)(v25 + 12) = v189;
  *(_DWORD *)(v25 + 16) = v190;
  *(_DWORD *)(v25 + 20) = v191;
  *(_DWORD *)(v25 + 24) = v192;
  *(_DWORD *)(v25 + 28) = v193;
  *(_DWORD *)(v25 + 32) = v194;
  *(_DWORD *)(v25 + 36) = v195;
  *(_DWORD *)(v25 + 40) = v196;
  *(_DWORD *)(v25 + 44) = v197;
  *(_DWORD *)(v25 + 48) = v198;
  *(_DWORD *)(v25 + 52) = v199;
  *(_DWORD *)(v25 + 56) = v200;
  *(_DWORD *)(v25 + 60) = v201;
  MatrixStack::push((MatrixStack *)&v134, (int)v7 + 32);
  v26 = MatrixStack::MatrixStackRef::operator*((int)&v134);
  *(_DWORD *)v26 = v170;
  *(_DWORD *)(v26 + 4) = v171;
  *(_DWORD *)(v26 + 8) = v172;
  *(_DWORD *)(v26 + 12) = v173;
  *(_DWORD *)(v26 + 16) = v174;
  *(_DWORD *)(v26 + 20) = v175;
  *(_DWORD *)(v26 + 24) = v176;
  *(_DWORD *)(v26 + 28) = v177;
  *(_DWORD *)(v26 + 32) = v178;
  *(_DWORD *)(v26 + 36) = v179;
  *(_DWORD *)(v26 + 40) = v180;
  *(_DWORD *)(v26 + 44) = v181;
  *(_DWORD *)(v26 + 48) = v182;
  *(_DWORD *)(v26 + 52) = v183;
  *(_DWORD *)(v26 + 56) = v184;
  *(_DWORD *)(v26 + 60) = v185;
  v27 = MatrixStack::top((mce::Camera *)((char *)v7 + 32));
  v28 = MatrixStack::top(v7);
  v29 = MatrixStack::top((mce::Camera *)((char *)v4 + 16));
  Frustum::getFrustum((int)&v86, v27, v28, v29);
  *(_DWORD *)v6 = v86;
  *((_DWORD *)v6 + 1) = v87;
  *((_DWORD *)v6 + 2) = v88;
  *((_DWORD *)v6 + 3) = v89;
  *((_DWORD *)v6 + 4) = v90;
  *((_DWORD *)v6 + 5) = v91;
  *((_DWORD *)v6 + 6) = v92;
  *((_DWORD *)v6 + 7) = v93;
  *((_DWORD *)v6 + 8) = v94;
  *((_DWORD *)v6 + 9) = v95;
  *((_DWORD *)v6 + 10) = v96;
  *((_DWORD *)v6 + 11) = v97;
  *((_DWORD *)v6 + 12) = v98;
  *((_DWORD *)v6 + 13) = v99;
  *((_DWORD *)v6 + 14) = v100;
  *((_DWORD *)v6 + 15) = v101;
  *((_DWORD *)v6 + 16) = v102;
  *((_DWORD *)v6 + 17) = v103;
  *((_DWORD *)v6 + 18) = v104;
  *((_DWORD *)v6 + 19) = v105;
  *((_DWORD *)v6 + 20) = v106;
  *((_DWORD *)v6 + 21) = v107;
  *((_DWORD *)v6 + 22) = v108;
  *((_DWORD *)v6 + 23) = v109;
  *((_DWORD *)v6 + 24) = v110;
  *((_DWORD *)v6 + 25) = v111;
  *((_DWORD *)v6 + 26) = v112;
  *((_DWORD *)v6 + 27) = v113;
  *((_DWORD *)v6 + 28) = v114;
  *((_DWORD *)v6 + 29) = v115;
  *((_DWORD *)v6 + 30) = v116;
  *((_DWORD *)v6 + 31) = v117;
  *((_DWORD *)v6 + 32) = v118;
  *((_DWORD *)v6 + 33) = v119;
  *((_DWORD *)v6 + 34) = v120;
  *((_DWORD *)v6 + 35) = v121;
  *((_DWORD *)v6 + 36) = v122;
  *((_DWORD *)v6 + 37) = v123;
  *((_DWORD *)v6 + 38) = v124;
  *((_DWORD *)v6 + 39) = v125;
  *((_DWORD *)v6 + 40) = v126;
  *((_DWORD *)v6 + 41) = v127;
  *((_DWORD *)v6 + 42) = v128;
  *((_DWORD *)v6 + 43) = v129;
  *((_DWORD *)v6 + 44) = v130;
  *((_DWORD *)v6 + 45) = v131;
  *((_DWORD *)v6 + 46) = v132;
  *((_DWORD *)v6 + 47) = v133;
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v134);
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v135);
  MatrixStack::push((MatrixStack *)&v85, (int)v7);
  v30 = MatrixStack::MatrixStackRef::operator*((int)&v85);
  *(_DWORD *)v30 = v154;
  *(_DWORD *)(v30 + 4) = v155;
  *(_DWORD *)(v30 + 8) = v156;
  *(_DWORD *)(v30 + 12) = v157;
  *(_DWORD *)(v30 + 16) = v158;
  *(_DWORD *)(v30 + 20) = v159;
  *(_DWORD *)(v30 + 24) = v160;
  *(_DWORD *)(v30 + 28) = v161;
  *(_DWORD *)(v30 + 32) = v162;
  *(_DWORD *)(v30 + 36) = v163;
  *(_DWORD *)(v30 + 40) = v164;
  *(_DWORD *)(v30 + 44) = v165;
  *(_DWORD *)(v30 + 48) = v166;
  *(_DWORD *)(v30 + 52) = v167;
  *(_DWORD *)(v30 + 56) = v168;
  *(_DWORD *)(v30 + 60) = v169;
  MatrixStack::push((MatrixStack *)&v84, (int)v7 + 32);
  v31 = MatrixStack::MatrixStackRef::operator*((int)&v84);
  *(_DWORD *)v31 = v138;
  *(_DWORD *)(v31 + 4) = v139;
  *(_DWORD *)(v31 + 8) = v140;
  *(_DWORD *)(v31 + 12) = v141;
  *(_DWORD *)(v31 + 16) = v142;
  *(_DWORD *)(v31 + 20) = v143;
  *(_DWORD *)(v31 + 24) = v144;
  *(_DWORD *)(v31 + 28) = v145;
  *(_DWORD *)(v31 + 32) = v146;
  *(_DWORD *)(v31 + 36) = v147;
  *(_DWORD *)(v31 + 40) = v148;
  *(_DWORD *)(v31 + 44) = v149;
  *(_DWORD *)(v31 + 48) = v150;
  *(_DWORD *)(v31 + 52) = v151;
  *(_DWORD *)(v31 + 56) = v152;
  *(_DWORD *)(v31 + 60) = v153;
  v32 = MatrixStack::top((mce::Camera *)((char *)v7 + 32));
  v33 = MatrixStack::top(v7);
  v34 = MatrixStack::top((mce::Camera *)((char *)v4 + 16));
  Frustum::getFrustum((int)&v36, v32, v33, v34);
  *(_DWORD *)v5 = v36;
  *((_DWORD *)v5 + 1) = v37;
  *((_DWORD *)v5 + 2) = v38;
  *((_DWORD *)v5 + 3) = v39;
  *((_DWORD *)v5 + 4) = v40;
  *((_DWORD *)v5 + 5) = v41;
  *((_DWORD *)v5 + 6) = v42;
  *((_DWORD *)v5 + 7) = v43;
  *((_DWORD *)v5 + 8) = v44;
  *((_DWORD *)v5 + 9) = v45;
  *((_DWORD *)v5 + 10) = v46;
  *((_DWORD *)v5 + 11) = v47;
  *((_DWORD *)v5 + 12) = v48;
  *((_DWORD *)v5 + 13) = v49;
  *((_DWORD *)v5 + 14) = v50;
  *((_DWORD *)v5 + 15) = v51;
  *((_DWORD *)v5 + 16) = v52;
  *((_DWORD *)v5 + 17) = v53;
  *((_DWORD *)v5 + 18) = v54;
  *((_DWORD *)v5 + 19) = v55;
  *((_DWORD *)v5 + 20) = v56;
  *((_DWORD *)v5 + 21) = v57;
  *((_DWORD *)v5 + 22) = v58;
  *((_DWORD *)v5 + 23) = v59;
  *((_DWORD *)v5 + 24) = v60;
  *((_DWORD *)v5 + 25) = v61;
  *((_DWORD *)v5 + 26) = v62;
  *((_DWORD *)v5 + 27) = v63;
  *((_DWORD *)v5 + 28) = v64;
  *((_DWORD *)v5 + 29) = v65;
  *((_DWORD *)v5 + 30) = v66;
  *((_DWORD *)v5 + 31) = v67;
  *((_DWORD *)v5 + 32) = v68;
  *((_DWORD *)v5 + 33) = v69;
  *((_DWORD *)v5 + 34) = v70;
  *((_DWORD *)v5 + 35) = v71;
  *((_DWORD *)v5 + 36) = v72;
  *((_DWORD *)v5 + 37) = v73;
  *((_DWORD *)v5 + 38) = v74;
  *((_DWORD *)v5 + 39) = v75;
  *((_DWORD *)v5 + 40) = v76;
  *((_DWORD *)v5 + 41) = v77;
  *((_DWORD *)v5 + 42) = v78;
  *((_DWORD *)v5 + 43) = v79;
  *((_DWORD *)v5 + 44) = v80;
  *((_DWORD *)v5 + 45) = v81;
  *((_DWORD *)v5 + 46) = v82;
  *((_DWORD *)v5 + 47) = v83;
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v84);
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v85);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v202);
}


int __fastcall InGameRealityModeScreen::_getInterpolatedFrameFactor(InGameRealityModeScreen *this, float _R1)
{
  int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S4, [R0,#0x15C]
    VMOV            S2, R1
    VLDR            S6, [R0,#0x160]
    VSUB.F32        S0, S0, S2
    VMUL.F32        S2, S4, S2
    VMUL.F32        S0, S6, S0
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall InGameRealityModeScreen::_init(InGameRealityModeScreen *this, int a2, int a3)
{
  InGameRealityModeScreen *v3; // r4@1
  int v4; // r0@1
  int v9; // r2@2 OVERLAPPED
  int v16; // r0@4
  ClientInstance *v17; // r0@4
  int v18; // r0@4
  signed int result; // r0@4
  float v20; // [sp+4h] [bp-54h]@4
  __int64 v21; // [sp+8h] [bp-50h]@1
  __int64 v22; // [sp+10h] [bp-48h]@1
  __int64 v23; // [sp+18h] [bp-40h]@4
  __int64 v24; // [sp+20h] [bp-38h]@4
  __int64 v25; // [sp+28h] [bp-30h]@4
  int v26; // [sp+30h] [bp-28h]@4
  int v27; // [sp+34h] [bp-24h]@4

  v3 = this;
  InGamePlayScreen::_init(this, a2, a3);
  v4 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 82));
  HolographicPlatform::getTransformZDir((int)&v21, v4, 16, 15, 0);
  HIDWORD(v21) = 0;
  __asm
  {
    VLDR            S0, [SP,#0x58+var_50]
    VLDR            S2, [SP,#0x58+var_48]
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VADD.F32        S4, S6, S4
    VLDR            S6, =0.0001
    VSQRT.F32       S4, S4
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    *(_QWORD *)&_R1 = *(_QWORD *)&Vec3::ZERO;
    _R0 = dword_2822498;
  else
    __asm { VDIV.F32        S2, S2, S4 }
    v9 = 0;
    __asm
    {
      VDIV.F32        S0, S0, S4
      VMOV            R0, S2
      VMOV            R1, S0
    }
  v21 = *(_QWORD *)&_R1;
  LODWORD(v22) = _R0;
  *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)v3 + 82)) + 788) = 0;
  *(_BYTE *)(ClientInstance::getGameRenderer(*((ClientInstance **)v3 + 82)) + 814) = 1;
  _aeabi_memclr8(&v21, 56);
  _R0 = &Matrix::IDENTITY;
  v21 = *(_QWORD *)&Matrix::IDENTITY;
  v22 = qword_27E89F0;
  v23 = qword_27E89F8;
  v24 = qword_27E8A00;
  _R2 = HIDWORD(qword_27E8A08);
  v25 = qword_27E8A08;
  __asm { VMOV            S0, R1 }
  _R1 = unk_27E8A10;
  __asm { VMOV            S2, R2 }
  _R2 = qword_27E8A14;
    VADD.F32        S0, S0, S0
    VMOV            S4, R1
    VLDR            S8, [R0,#0x30]
    VADD.F32        S2, S2, S2
    VLDR            S10, [R0,#0x34]
    VMOV            S6, R2
    VLDR            S12, [R0,#0x38]
    VADD.F32        S4, S4, S4
    VLDR            S14, [R0,#0x3C]
    VADD.F32        S6, S6, S6
  v26 = unk_27E8A10;
  v27 = qword_27E8A14;
    VSUB.F32        S0, S8, S0
    VSUB.F32        S2, S10, S2
    VSUB.F32        S4, S12, S4
    VSUB.F32        S6, S14, S6
    VSTR            S0, [SP,#0x58+var_20]
    VSTR            S2, [SP,#0x58+var_1C]
    VSTR            S4, [SP,#0x58+var_18]
    VSTR            S6, [SP,#0x58+var_14]
  v16 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 82));
  (*(void (**)(void))(*(_DWORD *)v16 + 160))();
  v17 = (ClientInstance *)*((_DWORD *)v3 + 82);
  v20 = 0.0;
  ClientInstance::setRealityModeFrameFactor(v17, &v20);
  *((_DWORD *)v3 + 86) = 0;
  *((_DWORD *)v3 + 87) = 0;
  *((_DWORD *)v3 + 88) = 0;
  *((_DWORD *)v3 + 109) = 0;
  *((_DWORD *)v3 + 97) = 0;
  *(_DWORD *)(ClientInstance::getHoloInput(*((ClientInstance **)v3 + 82)) + 684) = 1050253722;
  v18 = ClientInstance::getVoiceSystem(*((ClientInstance **)v3 + 82));
  (*(void (**)(void))(*(_DWORD *)v18 + 32))();
  result = 5;
  *((_DWORD *)v3 + 101) = 5;
  return result;
}


int __fastcall InGameRealityModeScreen::_prepareFrameCuller(InGameRealityModeScreen *this, mce::Camera *a2, Frustum *a3, Frustum *a4)
{
  Frustum *v4; // r5@1
  Frustum *v5; // r4@1
  __int64 v6; // ST00_8@1
  int result; // r0@1
  int v8; // [sp+Ch] [bp-F0h]@1
  int v9; // [sp+10h] [bp-ECh]@1
  int v10; // [sp+14h] [bp-E8h]@1
  int v11; // [sp+18h] [bp-E4h]@1
  int v12; // [sp+1Ch] [bp-E0h]@1
  int v13; // [sp+20h] [bp-DCh]@1
  int v14; // [sp+24h] [bp-D8h]@1
  int v15; // [sp+28h] [bp-D4h]@1
  int v16; // [sp+2Ch] [bp-D0h]@1
  int v17; // [sp+30h] [bp-CCh]@1
  int v18; // [sp+34h] [bp-C8h]@1
  int v19; // [sp+38h] [bp-C4h]@1
  int v20; // [sp+3Ch] [bp-C0h]@1
  int v21; // [sp+40h] [bp-BCh]@1
  int v22; // [sp+44h] [bp-B8h]@1
  int v23; // [sp+48h] [bp-B4h]@1
  int v24; // [sp+4Ch] [bp-B0h]@1
  int v25; // [sp+50h] [bp-ACh]@1
  int v26; // [sp+54h] [bp-A8h]@1
  int v27; // [sp+58h] [bp-A4h]@1
  int v28; // [sp+5Ch] [bp-A0h]@1
  int v29; // [sp+60h] [bp-9Ch]@1
  int v30; // [sp+64h] [bp-98h]@1
  int v31; // [sp+68h] [bp-94h]@1
  int v32; // [sp+6Ch] [bp-90h]@1
  int v33; // [sp+70h] [bp-8Ch]@1
  int v34; // [sp+74h] [bp-88h]@1
  int v35; // [sp+78h] [bp-84h]@1
  int v36; // [sp+7Ch] [bp-80h]@1
  int v37; // [sp+80h] [bp-7Ch]@1
  int v38; // [sp+84h] [bp-78h]@1
  int v39; // [sp+88h] [bp-74h]@1
  int v40; // [sp+8Ch] [bp-70h]@1
  int v41; // [sp+90h] [bp-6Ch]@1
  int v42; // [sp+94h] [bp-68h]@1
  int v43; // [sp+98h] [bp-64h]@1
  int v44; // [sp+9Ch] [bp-60h]@1
  int v45; // [sp+A0h] [bp-5Ch]@1
  int v46; // [sp+A4h] [bp-58h]@1
  int v47; // [sp+A8h] [bp-54h]@1
  int v48; // [sp+ACh] [bp-50h]@1
  int v49; // [sp+B0h] [bp-4Ch]@1
  int v50; // [sp+B4h] [bp-48h]@1
  int v51; // [sp+B8h] [bp-44h]@1
  int v52; // [sp+BCh] [bp-40h]@1
  int v53; // [sp+C0h] [bp-3Ch]@1
  int v54; // [sp+C4h] [bp-38h]@1
  int v55; // [sp+C8h] [bp-34h]@1
  int v56; // [sp+CCh] [bp-30h]@1
  int v57; // [sp+D0h] [bp-2Ch]@1
  int v58; // [sp+D4h] [bp-28h]@1
  int v59; // [sp+D8h] [bp-24h]@1
  int v60; // [sp+DCh] [bp-20h]@1
  int v61; // [sp+E0h] [bp-1Ch]@1
  int v62; // [sp+E4h] [bp-18h]@1
  int v63; // [sp+E8h] [bp-14h]@1
  int v64; // [sp+ECh] [bp-10h]@1
  int v65; // [sp+F0h] [bp-Ch]@1
  int v66; // [sp+F4h] [bp-8h]@1
  int v67; // [sp+F8h] [bp-4h]@1
  int v68; // [sp+FCh] [bp+0h]@1
  int v69; // [sp+100h] [bp+4h]@1
  int v70; // [sp+104h] [bp+8h]@1

  v4 = a4;
  v5 = a3;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v66 = 0;
  v67 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v60 = 0;
  v61 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  LODWORD(v6) = &v59;
  HIDWORD(v6) = &v62;
  InGameRealityModeScreen::_calculateHoloScreenCullingExtents(this, (Vec3 *)&v56, (Vec3 *)&v68, (Vec3 *)&v65, v6);
  ScreenCuller::ScreenCuller(
    (ScreenCuller *)&v8,
    (const Vec3 *)&v56,
    (const Vec3 *)&v68,
    (const Vec3 *)&v65,
    (const Vec3 *)&v59,
    (const Vec3 *)&v62);
  *(_DWORD *)v4 = v8;
  *((_DWORD *)v4 + 1) = v9;
  *((_DWORD *)v4 + 2) = v10;
  *((_DWORD *)v4 + 3) = v11;
  *((_DWORD *)v4 + 4) = v12;
  *((_DWORD *)v4 + 5) = v13;
  *((_DWORD *)v4 + 6) = v14;
  *((_DWORD *)v4 + 7) = v15;
  *((_DWORD *)v4 + 8) = v16;
  *((_DWORD *)v4 + 9) = v17;
  *((_DWORD *)v4 + 10) = v18;
  *((_DWORD *)v4 + 11) = v19;
  *((_DWORD *)v4 + 12) = v20;
  *((_DWORD *)v4 + 13) = v21;
  *((_DWORD *)v4 + 14) = v22;
  *((_DWORD *)v4 + 15) = v23;
  *((_DWORD *)v4 + 16) = v24;
  *((_DWORD *)v4 + 17) = v25;
  *((_DWORD *)v4 + 18) = v26;
  *((_DWORD *)v4 + 19) = v27;
  *((_DWORD *)v4 + 20) = v28;
  *((_DWORD *)v4 + 21) = v29;
  *((_DWORD *)v4 + 22) = v30;
  *((_DWORD *)v4 + 23) = v31;
  *((_DWORD *)v4 + 24) = v32;
  *((_DWORD *)v4 + 25) = v33;
  *((_DWORD *)v4 + 26) = v34;
  *((_DWORD *)v4 + 27) = v35;
  *((_DWORD *)v4 + 28) = v36;
  *((_DWORD *)v4 + 29) = v37;
  *((_DWORD *)v4 + 30) = v38;
  *((_DWORD *)v4 + 31) = v39;
  *((_DWORD *)v4 + 32) = v40;
  *((_DWORD *)v4 + 33) = v41;
  *((_DWORD *)v4 + 34) = v42;
  *((_DWORD *)v4 + 35) = v43;
  *((_DWORD *)v4 + 36) = v44;
  *((_DWORD *)v4 + 37) = v45;
  *((_DWORD *)v4 + 38) = v46;
  *((_DWORD *)v4 + 39) = v47;
  *((_DWORD *)v4 + 40) = v48;
  *((_DWORD *)v4 + 41) = v49;
  *((_DWORD *)v4 + 42) = v50;
  *((_DWORD *)v4 + 43) = v51;
  *((_DWORD *)v4 + 44) = v52;
  *((_DWORD *)v4 + 45) = v53;
  *((_DWORD *)v4 + 46) = v54;
  *((_DWORD *)v4 + 47) = v55;
  *(_DWORD *)v5 = *(_DWORD *)v4;
  *((_DWORD *)v5 + 1) = *((_DWORD *)v4 + 1);
  *((_DWORD *)v5 + 2) = *((_DWORD *)v4 + 2);
  *((_DWORD *)v5 + 3) = *((_DWORD *)v4 + 3);
  *((_DWORD *)v5 + 4) = *((_DWORD *)v4 + 4);
  *((_DWORD *)v5 + 5) = *((_DWORD *)v4 + 5);
  *((_DWORD *)v5 + 6) = *((_DWORD *)v4 + 6);
  *((_DWORD *)v5 + 7) = *((_DWORD *)v4 + 7);
  *((_DWORD *)v5 + 8) = *((_DWORD *)v4 + 8);
  *((_DWORD *)v5 + 9) = *((_DWORD *)v4 + 9);
  *((_DWORD *)v5 + 10) = *((_DWORD *)v4 + 10);
  *((_DWORD *)v5 + 11) = *((_DWORD *)v4 + 11);
  *((_DWORD *)v5 + 12) = *((_DWORD *)v4 + 12);
  *((_DWORD *)v5 + 13) = *((_DWORD *)v4 + 13);
  *((_DWORD *)v5 + 14) = *((_DWORD *)v4 + 14);
  *((_DWORD *)v5 + 15) = *((_DWORD *)v4 + 15);
  *((_DWORD *)v5 + 16) = *((_DWORD *)v4 + 16);
  *((_DWORD *)v5 + 17) = *((_DWORD *)v4 + 17);
  *((_DWORD *)v5 + 18) = *((_DWORD *)v4 + 18);
  *((_DWORD *)v5 + 19) = *((_DWORD *)v4 + 19);
  *((_DWORD *)v5 + 20) = *((_DWORD *)v4 + 20);
  *((_DWORD *)v5 + 21) = *((_DWORD *)v4 + 21);
  *((_DWORD *)v5 + 22) = *((_DWORD *)v4 + 22);
  *((_DWORD *)v5 + 23) = *((_DWORD *)v4 + 23);
  *((_DWORD *)v5 + 24) = *((_DWORD *)v4 + 24);
  *((_DWORD *)v5 + 25) = *((_DWORD *)v4 + 25);
  *((_DWORD *)v5 + 26) = *((_DWORD *)v4 + 26);
  *((_DWORD *)v5 + 27) = *((_DWORD *)v4 + 27);
  *((_DWORD *)v5 + 28) = *((_DWORD *)v4 + 28);
  *((_DWORD *)v5 + 29) = *((_DWORD *)v4 + 29);
  *((_DWORD *)v5 + 30) = *((_DWORD *)v4 + 30);
  *((_DWORD *)v5 + 31) = *((_DWORD *)v4 + 31);
  *((_DWORD *)v5 + 32) = *((_DWORD *)v4 + 32);
  *((_DWORD *)v5 + 33) = *((_DWORD *)v4 + 33);
  *((_DWORD *)v5 + 34) = *((_DWORD *)v4 + 34);
  *((_DWORD *)v5 + 35) = *((_DWORD *)v4 + 35);
  *((_DWORD *)v5 + 36) = *((_DWORD *)v4 + 36);
  *((_DWORD *)v5 + 37) = *((_DWORD *)v4 + 37);
  *((_DWORD *)v5 + 38) = *((_DWORD *)v4 + 38);
  *((_DWORD *)v5 + 39) = *((_DWORD *)v4 + 39);
  *((_DWORD *)v5 + 40) = *((_DWORD *)v4 + 40);
  *((_DWORD *)v5 + 41) = *((_DWORD *)v4 + 41);
  *((_DWORD *)v5 + 42) = *((_DWORD *)v4 + 42);
  *((_DWORD *)v5 + 43) = *((_DWORD *)v4 + 43);
  *((_DWORD *)v5 + 44) = *((_DWORD *)v4 + 44);
  *((_DWORD *)v5 + 45) = *((_DWORD *)v4 + 45);
  *((_DWORD *)v5 + 46) = *((_DWORD *)v4 + 46);
  result = *((_DWORD *)v4 + 47);
  *((_DWORD *)v5 + 47) = result;
  return result;
}


int __fastcall InGameRealityModeScreen::_setHoloMode(InGameRealityModeScreen *this)
{
  int v1; // r0@1
  int v3; // [sp+4h] [bp-Ch]@1

  v1 = *((_DWORD *)this + 82);
  v3 = 4;
  return ClientInstance::setClientPlayMode(v1, &v3);
}


signed int __fastcall InGameRealityModeScreen::_shouldRenderFirstPersonObjects(InGameRealityModeScreen *this, LevelRenderer *a2)
{
  InGameRealityModeScreen *v2; // r5@1
  LevelRenderer *v3; // r4@1
  GameRenderer *v4; // r0@1
  signed int result; // r0@2

  v2 = this;
  v3 = a2;
  v4 = (GameRenderer *)ClientInstance::getGameRenderer(*((ClientInstance **)this + 82));
  if ( GameRenderer::wasViewInsideSolidBlockLastRender(v4) )
    result = 0;
  else
    result = InGamePlayScreen::_shouldRenderFirstPersonObjects(v2, v3);
  return result;
}


int __fastcall InGameRealityModeScreen::_updateTurnStickRawProcessing(InGameRealityModeScreen *this)
{
  Options *v9; // r0@1
  Options *v10; // r0@27
  Options *v12; // r0@29
  Options *v13; // r0@30
  int v14; // r5@30
  Options *v15; // r0@31
  InGameRealityModeScreen *v18; // r5@31
  signed int v19; // r0@33
  int v20; // r0@48
  Options *v21; // r0@50
  int result; // r0@50

  _R4 = this;
  _R0 = getTimeS();
  __asm
  {
    VLDR            D0, [R4,#0x150]
    VMOV            D1, R0, R1
    VSUB.F64        D0, D1, D0
    VSTR            D1, [R4,#0x150]
    VCVT.F32.F64    S16, D0
  }
  _R5 = *((_QWORD *)_R4 + 46) >> 32;
  _R6 = *((_QWORD *)_R4 + 46);
  v9 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 82));
  Options::getVRRightStickDeadBand(v9);
    VMOV.F32        S0, #0.5
    VLDR            S2, =0.0
    VLDR            S6, =1.1921e-7
    VMOV.F32        S4, S2
  if ( !_ZF )
    __asm { VMOVNE.F32      S4, S0 }
    VADD.F32        S0, S16, S16
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV            S6, R6
      VCMPE.F32       S6, S4
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VNEG.F32        S8, S4
        VCMPE.F32       S6, S8
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
LABEL_10:
        __asm
        {
          VMOV            S6, R5
          VCMPE.F32       S6, S4
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          __asm
          {
            VNEG.F32        S8, S4
            VCMPE.F32       S6, S8
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) )
            __asm { VLDR            S4, =0.0 }
LABEL_16:
            __asm
            {
              VMOV            R6, S2
              VMOV            R5, S4
            }
            goto LABEL_17;
            VMOV.F32        S8, #1.0
            VADD.F32        S6, S4, S6
        else
            VSUB.F32        S6, S6, S4
          VSUB.F32        S4, S8, S4
          VDIV.F32        S4, S6, S4
        goto LABEL_16;
        VMOV.F32        S2, #1.0
        VADD.F32        S6, S4, S6
    else
        VSUB.F32        S6, S6, S4
      VSUB.F32        S2, S2, S4
      VDIV.F32        S2, S6, S2
    goto LABEL_10;
LABEL_17:
    VMOV            S16, R5
    VLDR            S4, [R4,#0x17C]
    VNEG.F32        S8, S0
    VLDR            S2, [R4,#0x178]
    VSUB.F32        S10, S16, S4
    VMOV            S6, R6
    VMOV.F32        S20, #-1.0
    VSUB.F32        S6, S6, S2
    VMOV.F32        S12, S8
    VCMPE.F32       S10, S8
    VCMPE.F32       S6, S8
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S12, S10 }
    VCMPE.F32       S10, S0
    __asm { VMOVGT.F32      S8, S6 }
    VCMPE.F32       S6, S0
    __asm { VMOVGT.F32      S12, S0 }
    VADD.F32        S18, S12, S4
    __asm { VMOVGT.F32      S8, S0 }
    VMOV.F32        S0, #1.0
    VADD.F32        S2, S8, S2
    VCMPE.F32       S18, S0
    VSTR            S2, [R4,#0x178]
    VSTR            S18, [R4,#0x17C]
    __asm { VMOVGT.F32      S18, S0 }
  v10 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 82));
    VCMPE.F32       S18, S20
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S18, S20 }
  _R0 = Options::getVRRightStickPitchMaxAngle(v10);
    VMOV            S0, R0
    VCVT.F32.S32    S20, S0
  v12 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 82));
  if ( Options::getVRRightStickPitchAssist(v12) == 1 )
    __asm { VMUL.F32        S18, S18, S20 }
    v13 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 82));
    v14 = Options::getVRRightStickPitchAssistSteppings(v13);
    if ( v14 <= -1 )
      __asm { VSTR            S18, [R4,#0x168] }
      v18 = (InGameRealityModeScreen *)((char *)_R4 + 360);
      v15 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 82));
      _R0 = Options::getVRRightStickPitchMaxAngle(v15);
      _R1 = v14 + 1;
      __asm { VMOV            S2, R0 }
        VMOV            S0, R1
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VDIV.F32        S0, S2, S0
        VLDR            S2, [R4,#0x168]
        VADD.F32        S4, S2, S0
        VCMPE.F32       S18, S4
      if ( _NF ^ _VF )
        v19 = 0;
      else
        __asm { VLDR            S6, =-90.0 }
        do
            VCMPE.F32       S4, S6
            VMOV.F32        S2, S4
          if ( _NF ^ _VF )
            __asm { VMOVLT.F32      S2, S6 }
            VADD.F32        S4, S2, S0
            VCMPE.F32       S18, S4
        while ( !(_NF ^ _VF) );
        v19 = 1;
        __asm { VSTR            S2, [R5] }
        VSUB.F32        S2, S2, S0
        VCMPE.F32       S18, S2
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm { VLDR            S4, =90.0 }
            VCMPE.F32       S2, S4
            VMOV.F32        S6, S2
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S6, S4 }
            VSUB.F32        S2, S6, S0
            VCMPE.F32       S18, S2
        while ( (unsigned __int8)(_NF ^ _VF) | _ZF );
        __asm { VSTR            S6, [R5] }
        goto LABEL_48;
      if ( v19 == 1 )
LABEL_48:
        v20 = ClientInstance::getHoloInput(*((ClientInstance **)_R4 + 82));
        (*(void (**)(void))(*(_DWORD *)v20 + 132))();
        *(_BYTE *)(ClientInstance::getGameRenderer(*((ClientInstance **)_R4 + 82)) + 814) = 1;
        goto LABEL_49;
LABEL_49:
    *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)_R4 + 82)) + 780) = *(_DWORD *)v18;
  v21 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 82));
  result = Options::getVRRightStickGazeAdjust(v21);
  if ( result == 1 )
      VMOVEQ.F32      S0, #-20.0
      VMULEQ.F32      S0, S16, S0
      VSTREQ          S0, [R4,#0x16C]
  return result;
}


char *__fastcall InGameRealityModeScreen::_updateInGameCursor(InGameRealityModeScreen *this)
{
  InGameRealityModeScreen *v1; // r4@1
  char *result; // r0@1
  GameRenderer *v3; // r0@3
  LevelRenderer *v4; // r0@4
  char *v5; // r0@4
  int *v6; // r11@5
  int v7; // r1@5
  int *v8; // r10@5
  int v9; // r1@5
  int v10; // r0@5
  int v11; // r9@5
  __int64 v12; // r0@5
  int v13; // r0@6
  int v14; // r3@6
  int v15; // r5@6
  int v16; // r6@6
  int v17; // r7@6
  int v18; // r3@6
  int v19; // r5@6
  int v20; // r6@6
  int v21; // r7@6
  int v22; // r3@6
  int v23; // r5@6
  int v24; // r6@6
  signed int v25; // r7@6
  __int16 v26; // r2@6
  int *v27; // r9@7
  int *v28; // r7@7
  int *v29; // r6@7
  int *v30; // r5@7
  Entity *v31; // r0@10
  Level *v32; // r0@10
  char *v33; // r0@10
  int v34; // r2@10
  int v35; // r1@10
  signed int v36; // r0@11
  Player *v37; // r5@12
  int v38; // r0@16
  int v39; // r4@16
  __int64 v40; // r0@16
  int v41; // r0@17
  int v42; // r2@17
  int v43; // r3@17
  int v44; // r6@17
  int v45; // r7@17
  int v46; // r2@17
  int v47; // r3@17
  int v48; // r6@17
  int v49; // r7@17
  int v50; // r2@17
  int v51; // r3@17
  int v52; // r6@17
  signed int v53; // r7@17
  __int16 v54; // r1@17
  int *v55; // [sp+14h] [bp-BCh]@5
  char *v56; // [sp+18h] [bp-B8h]@5
  int v57; // [sp+1Ch] [bp-B4h]@4
  int v58; // [sp+20h] [bp-B0h]@4
  int v59; // [sp+24h] [bp-ACh]@4
  int v60; // [sp+28h] [bp-A8h]@4
  char v61; // [sp+2Ch] [bp-A4h]@5
  int v62; // [sp+30h] [bp-A0h]@5
  int v63; // [sp+34h] [bp-9Ch]@5
  int v64; // [sp+38h] [bp-98h]@5
  int v65; // [sp+3Ch] [bp-94h]@5
  int v66; // [sp+40h] [bp-90h]@5
  int v67; // [sp+44h] [bp-8Ch]@5
  int v68; // [sp+48h] [bp-88h]@5
  __int16 v69; // [sp+4Ch] [bp-84h]@5
  int v70; // [sp+50h] [bp-80h]@5
  int v71; // [sp+54h] [bp-7Ch]@5
  int v72; // [sp+58h] [bp-78h]@5
  int v73; // [sp+5Ch] [bp-74h]@5
  int v74; // [sp+60h] [bp-70h]@5
  int v75; // [sp+64h] [bp-6Ch]@5
  char v76; // [sp+68h] [bp-68h]@5
  int v77; // [sp+6Ch] [bp-64h]@4
  int v78; // [sp+70h] [bp-60h]@4
  int v79; // [sp+74h] [bp-5Ch]@4
  int v80; // [sp+78h] [bp-58h]@4
  int v81; // [sp+7Ch] [bp-54h]@4
  int v82; // [sp+80h] [bp-50h]@4
  int v83; // [sp+84h] [bp-4Ch]@4
  int v84; // [sp+88h] [bp-48h]@4
  int v85; // [sp+8Ch] [bp-44h]@4
  int v86; // [sp+90h] [bp-40h]@4
  int v87; // [sp+94h] [bp-3Ch]@4
  int v88; // [sp+98h] [bp-38h]@4
  int v89; // [sp+9Ch] [bp-34h]@4
  int v90; // [sp+A0h] [bp-30h]@4
  signed int v91; // [sp+A4h] [bp-2Ch]@4
  __int16 v92; // [sp+A8h] [bp-28h]@4
  char v93; // [sp+AAh] [bp-26h]@4

  v1 = this;
  result = (char *)*(_BYTE *)(ClientInstance::getGameRenderer(*((ClientInstance **)this + 82)) + 812);
  if ( !result )
  {
    result = (char *)ClientInstance::isShowingMenu(*((ClientInstance **)v1 + 82));
    if ( !result )
    {
      v3 = (GameRenderer *)ClientInstance::getGameRenderer(*((ClientInstance **)v1 + 82));
      result = (char *)GameRenderer::wasViewInsideSolidBlockLastRender(v3);
      if ( !result )
      {
        HitResult::HitResult((HitResult *)&v60);
        _aeabi_memclr8(&v78, 48);
        v90 = 1065353216;
        v91 = 1065353216;
        v92 = 0;
        v93 = 0;
        v77 = (*(int (__fastcall **)(InGameRealityModeScreen *))(*(_DWORD *)v1 + 340))(v1);
        v78 = *((_DWORD *)v1 + 42);
        v79 = *((_DWORD *)v1 + 43);
        v80 = *((_DWORD *)v1 + 44);
        v81 = *((_DWORD *)v1 + 105);
        v82 = *((_DWORD *)v1 + 106);
        v83 = *((_DWORD *)v1 + 107);
        v84 = *((_DWORD *)v1 + 102);
        v85 = *((_DWORD *)v1 + 103);
        v86 = *((_DWORD *)v1 + 104);
        v4 = (LevelRenderer *)ClientInstance::getLevelRenderer(*((ClientInstance **)v1 + 82));
        v5 = LevelRenderer::getLevelRendererPlayer(v4);
        LevelRendererPlayer::getComfortRenderAdj((LevelRendererPlayer *)&v57, (int)v5);
        v87 = v57;
        v88 = v58;
        v89 = v59;
        if ( *((_BYTE *)v1 + 441) )
        {
          v6 = &v68;
          v7 = *((_DWORD *)v1 + 111);
          v8 = &v62;
          v61 = *((_BYTE *)v1 + 448);
          v60 = v7;
          v62 = *((_DWORD *)v1 + 113);
          v63 = *((_DWORD *)v1 + 114);
          v64 = *((_DWORD *)v1 + 115);
          v65 = *((_DWORD *)v1 + 116);
          v66 = *((_DWORD *)v1 + 117);
          v67 = *((_DWORD *)v1 + 118);
          v9 = *((_DWORD *)v1 + 119);
          v69 = *((_WORD *)v1 + 240);
          v68 = v9;
          v70 = *((_DWORD *)v1 + 121);
          v71 = *((_DWORD *)v1 + 122);
          v72 = *((_DWORD *)v1 + 123);
          v73 = *((_DWORD *)v1 + 124);
          v74 = *((_DWORD *)v1 + 125);
          v75 = *((_DWORD *)v1 + 126);
          v76 = *((_BYTE *)v1 + 508);
          v90 = 1065353216;
          HIBYTE(v92) = 1;
          v56 = &v76;
          v55 = &v72;
          v10 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 82));
          v11 = v10;
          v12 = *(_QWORD *)(v10 + 564);
          if ( (_DWORD)v12 == HIDWORD(v12) )
          {
            std::vector<HolographicPlatform::HoloCursorWorldParams,std::allocator<HolographicPlatform::HoloCursorWorldParams>>::_M_emplace_back_aux<HolographicPlatform::HoloCursorWorldParams const&>(
              (void **)(v11 + 560),
              (int)&v60);
          }
          else
            v13 = HitResult::HitResult(v12, (int)&v60) + 68;
            v14 = v78;
            v15 = v79;
            v16 = v80;
            v17 = v81;
            *(_DWORD *)v13 = v77;
            *(_DWORD *)(v13 + 4) = v14;
            *(_DWORD *)(v13 + 8) = v15;
            *(_DWORD *)(v13 + 12) = v16;
            *(_DWORD *)(v13 + 16) = v17;
            v13 += 20;
            v18 = v83;
            v19 = v84;
            v20 = v85;
            v21 = v86;
            *(_DWORD *)v13 = v82;
            *(_DWORD *)(v13 + 4) = v18;
            *(_DWORD *)(v13 + 8) = v19;
            *(_DWORD *)(v13 + 12) = v20;
            *(_DWORD *)(v13 + 16) = v21;
            v22 = v88;
            v23 = v89;
            v24 = v90;
            v25 = v91;
            *(_DWORD *)v13 = v87;
            *(_DWORD *)(v13 + 4) = v22;
            *(_DWORD *)(v13 + 8) = v23;
            *(_DWORD *)(v13 + 12) = v24;
            *(_DWORD *)(v13 + 16) = v25;
            v26 = v92;
            *(_BYTE *)(v13 + 2) = v93;
            *(_WORD *)v13 = v26;
            *(_DWORD *)(v11 + 564) += 132;
          v30 = &v63;
          v29 = &v64;
          v28 = &v70;
          v27 = &v71;
        }
        else
        v31 = (Entity *)ClientInstance::getCameraTargetEntity(*((ClientInstance **)v1 + 82));
        v32 = (Level *)Entity::getLevel(v31);
        v33 = Level::getHitResult(v32);
        v34 = *(_DWORD *)v33;
        v61 = v33[4];
        v60 = v34;
        *v8 = *((_DWORD *)v33 + 2);
        *v30 = *((_DWORD *)v33 + 3);
        *v29 = *((_DWORD *)v33 + 4);
        v65 = *((_DWORD *)v33 + 5);
        v66 = *((_DWORD *)v33 + 6);
        v67 = *((_DWORD *)v33 + 7);
        v35 = *((_DWORD *)v33 + 8);
        *((_WORD *)v6 + 2) = *((_WORD *)v33 + 18);
        *v6 = v35;
        *v28 = *((_DWORD *)v33 + 10);
        *v27 = *((_DWORD *)v33 + 11);
        *v55 = *((_DWORD *)v33 + 12);
        v73 = *((_DWORD *)v33 + 13);
        v74 = *((_DWORD *)v33 + 14);
        v75 = *((_DWORD *)v33 + 15);
        *v56 = v33[64];
          v36 = 1056964608;
          v37 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 82));
          if ( Player::isUsingItem(v37) == 1 && *(_DWORD *)Player::getItemInUse(v37) == Item::mBow )
            v93 = 1;
          v36 = *((_DWORD *)v1 + 108);
        v90 = v36;
        HIBYTE(v92) = 0;
        v38 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 82));
        v39 = v38;
        v40 = *(_QWORD *)(v38 + 564);
        if ( (_DWORD)v40 == HIDWORD(v40) )
          result = std::vector<HolographicPlatform::HoloCursorWorldParams,std::allocator<HolographicPlatform::HoloCursorWorldParams>>::_M_emplace_back_aux<HolographicPlatform::HoloCursorWorldParams const&>(
                     (void **)(v39 + 560),
                     (int)&v60);
          v41 = HitResult::HitResult(v40, (int)&v60) + 68;
          v42 = v78;
          v43 = v79;
          v44 = v80;
          v45 = v81;
          *(_DWORD *)v41 = v77;
          *(_DWORD *)(v41 + 4) = v42;
          *(_DWORD *)(v41 + 8) = v43;
          *(_DWORD *)(v41 + 12) = v44;
          *(_DWORD *)(v41 + 16) = v45;
          v41 += 20;
          v46 = v83;
          v47 = v84;
          v48 = v85;
          v49 = v86;
          *(_DWORD *)v41 = v82;
          *(_DWORD *)(v41 + 4) = v46;
          *(_DWORD *)(v41 + 8) = v47;
          *(_DWORD *)(v41 + 12) = v48;
          *(_DWORD *)(v41 + 16) = v49;
          v50 = v88;
          v51 = v89;
          v52 = v90;
          v53 = v91;
          *(_DWORD *)v41 = v87;
          *(_DWORD *)(v41 + 4) = v50;
          *(_DWORD *)(v41 + 8) = v51;
          *(_DWORD *)(v41 + 12) = v52;
          *(_DWORD *)(v41 + 16) = v53;
          v54 = v92;
          *(_BYTE *)(v41 + 2) = v93;
          *(_WORD *)v41 = v54;
          result = (char *)(*(_DWORD *)(v39 + 564) + 132);
          *(_DWORD *)(v39 + 564) = result;
      }
    }
  }
  return result;
}


void __fastcall InGameRealityModeScreen::tick(InGameRealityModeScreen *this, int a2, int a3)
{
  InGameRealityModeScreen *v3; // r4@1
  int v4; // r5@3
  int v5; // r0@3
  int v6; // r4@3
  unsigned int *v7; // r1@4
  unsigned int v8; // r0@6
  unsigned int *v9; // r5@10
  unsigned int v10; // r0@12
  int v11; // [sp+0h] [bp-18h]@3
  int v12; // [sp+4h] [bp-14h]@3

  v3 = this;
  InGamePlayScreen::tick(this, a2, a3);
  if ( (*(int (__fastcall **)(InGameRealityModeScreen *))(*(_DWORD *)v3 + 356))(v3) == 1
    && ClientInstance::getRealityModeToggleTriggered(*((ClientInstance **)v3 + 82)) == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*((ClientInstance **)v3 + 82));
    v5 = ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 82));
    SceneFactory::createRealityModeTransitionScreen((SceneFactory *)&v11, v5);
    SceneStack::pushScreen(v4, (int)&v11, 1);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


int __fastcall InGameRealityModeScreen::_calculateHoloScreenCullingExtents(InGameRealityModeScreen *this, Vec3 *a2, Vec3 *a3, Vec3 *a4, __int64 a5)
{
  InGameRealityModeScreen *v5; // r9@1
  GameRenderer *v8; // r0@1
  int v13; // r0@1
  int v14; // r0@1
  int v16; // r0@1
  int v17; // r0@1
  int result; // r0@1
  int v20; // [sp+8h] [bp-130h]@1
  int v21; // [sp+Ch] [bp-12Ch]@1
  int v22; // [sp+10h] [bp-128h]@1
  int v23; // [sp+14h] [bp-124h]@1
  int v24; // [sp+18h] [bp-120h]@1
  int v25; // [sp+1Ch] [bp-11Ch]@1
  int v26; // [sp+20h] [bp-118h]@1
  int v27; // [sp+24h] [bp-114h]@1
  int v28; // [sp+28h] [bp-110h]@1
  int v29; // [sp+2Ch] [bp-10Ch]@1
  int v30; // [sp+30h] [bp-108h]@1
  int v31; // [sp+34h] [bp-104h]@1
  int v32; // [sp+38h] [bp-100h]@1
  int v33; // [sp+3Ch] [bp-FCh]@1
  int v34; // [sp+40h] [bp-F8h]@1
  int v35; // [sp+44h] [bp-F4h]@1
  float v36; // [sp+4Ch] [bp-ECh]@1
  float v39; // [sp+58h] [bp-E0h]@1
  float v51; // [sp+98h] [bp-A0h]@1
  float v54; // [sp+A4h] [bp-94h]@1
  float v57; // [sp+B0h] [bp-88h]@1
  float v58; // [sp+B4h] [bp-84h]@1
  int v59; // [sp+B8h] [bp-80h]@1
  int v60; // [sp+BCh] [bp-7Ch]@1
  int v61; // [sp+C0h] [bp-78h]@1
  int v62; // [sp+C8h] [bp-70h]@1
  int v63; // [sp+CCh] [bp-6Ch]@1
  int v64; // [sp+D0h] [bp-68h]@1
  int v65; // [sp+D8h] [bp-60h]@1
  int v66; // [sp+DCh] [bp-5Ch]@1
  int v67; // [sp+E0h] [bp-58h]@1
  int v68; // [sp+E8h] [bp-50h]@1
  int v69; // [sp+ECh] [bp-4Ch]@1
  int v70; // [sp+F0h] [bp-48h]@1
  int v71; // [sp+F4h] [bp-44h]@1

  v5 = this;
  _R6 = a4;
  _R7 = a3;
  v8 = (GameRenderer *)ClientInstance::getGameRenderer(*((ClientInstance **)this + 82));
  GameRenderer::getHoloLevelWidthHeight(v8, &v58, &v57);
  __asm
  {
    VMOV.F32        S16, #0.5
    VLDR            S0, [SP,#0x138+var_84]
    VMUL.F32        S0, S0, S16
    VSTR            S0, [SP,#0x138+var_84]
    VLDR            S0, [SP,#0x138+var_88]
    VSTR            S0, [SP,#0x138+var_88]
  }
  v13 = ClientInstance::getHoloInput(*((ClientInstance **)v5 + 82));
  HolographicPlatform::getTransformTranslation((int)&v54, v13, 21, 15, 0);
  v14 = ClientInstance::getHoloInput(*((ClientInstance **)v5 + 82));
  HolographicPlatform::getTransformTranslation((int)&v51, v14, 22, 15, 0);
    VLDR            S0, [SP,#0x138+var_94]
    VLDR            S6, [SP,#0x138+var_A0]
    VLDR            S2, [SP,#0x138+var_90]
    VLDR            S8, [SP,#0x138+var_9C]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [SP,#0x138+var_8C]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [SP,#0x138+var_98]
    VLDR            S6, [SP,#0x138+var_88]
    VSUB.F32        S4, S10, S4
    VNEG.F32        S12, S6
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #-0.5
    VADD.F32        S0, S0, S4
    VLDR            S4, [SP,#0x138+var_84]
  _KR00_8 = a5;
  __asm { VNEG.F32        S8, S4 }
  *((_DWORD *)_R7 + 2) = 0;
    VSQRT.F32       S0, S0
    VMUL.F32        S10, S0, S16
    VMUL.F32        S0, S0, S2
    VSUB.F32        S2, S8, S10
    VSUB.F32        S8, S12, S10
    VSUB.F32        S14, S0, S6
    VADD.F32        S12, S4, S10
    VSUB.F32        S0, S0, S4
    VADD.F32        S4, S6, S10
    VSTR            S2, [R7]
    VSTR            S8, [R7,#4]
  *((_DWORD *)_R6 + 2) = 0;
    VSTR            S12, [R6]
    VSTR            S14, [R6,#4]
  *(_DWORD *)(a5 + 8) = 0;
    VSTR            S12, [R10]
    VSTR            S4, [R10,#4]
  *(_DWORD *)(HIDWORD(a5) + 8) = 0;
    VSTR            S0, [R5]
    VSTR            S4, [R5,#4]
  v16 = ClientInstance::getHoloInput(*((ClientInstance **)v5 + 82));
  HolographicPlatform::getTransform((int)&v39, v16, 10, 2, 0);
    VLDR            S4, [SP,#0x138+var_E0]
    VLDR            S12, [R7]
    VLDR            S6, [SP,#0x138+var_D0]
    VLDR            S14, [R7,#4]
    VMUL.F32        S1, S4, S12
    VLDR            S2, [SP,#0x138+var_DC]
    VMUL.F32        S5, S6, S14
    VLDR            S0, [SP,#0x138+var_D8]
    VLDR            S8, [SP,#0x138+var_CC]
    VMUL.F32        S7, S2, S12
    VLDR            S10, [SP,#0x138+var_C8]
    VMUL.F32        S11, S0, S12
    VMUL.F32        S9, S8, S14
    VLDR            S3, [R7,#8]
    VMUL.F32        S13, S10, S14
    VLDR            S12, [SP,#0x138+var_C0]
    VLDR            S14, [SP,#0x138+var_BC]
    VMUL.F32        S15, S12, S3
    VADD.F32        S5, S5, S1
    VLDR            S1, [SP,#0x138+var_B8]
    VMUL.F32        S16, S14, S3
    VMUL.F32        S3, S1, S3
    VADD.F32        S7, S9, S7
    VADD.F32        S9, S13, S11
    VADD.F32        S11, S5, S15
    VLDR            S5, [SP,#0x138+var_AC]
    VADD.F32        S13, S7, S16
    VLDR            S7, [SP,#0x138+var_A8]
    VADD.F32        S9, S9, S3
    VLDR            S3, [SP,#0x138+var_B0]
    VADD.F32        S11, S11, S3
    VADD.F32        S13, S13, S5
    VADD.F32        S9, S9, S7
    VSTR            S11, [R7]
    VSTR            S13, [R7,#4]
    VSTR            S9, [R7,#8]
    VLDR            S9, [R6]
    VLDR            S11, [R6,#4]
    VMUL.F32        S15, S4, S9
    VLDR            S13, [R6,#8]
    VMUL.F32        S16, S2, S9
    VMUL.F32        S18, S8, S11
    VMUL.F32        S20, S10, S11
    VMUL.F32        S9, S0, S9
    VMUL.F32        S11, S6, S11
    VMUL.F32        S22, S12, S13
    VADD.F32        S16, S18, S16
    VADD.F32        S9, S20, S9
    VADD.F32        S11, S11, S15
    VMUL.F32        S15, S14, S13
    VMUL.F32        S13, S1, S13
    VADD.F32        S11, S11, S22
    VADD.F32        S15, S16, S15
    VADD.F32        S9, S9, S13
    VADD.F32        S13, S15, S5
    VSTR            S11, [R6]
    VSTR            S13, [R6,#4]
    VSTR            S9, [R6,#8]
    VLDR            S9, [R5]
    VLDR            S11, [R5,#4]
    VLDR            S13, [R5,#8]
    VSTR            S11, [R5]
    VSTR            S13, [R5,#4]
    VSTR            S9, [R5,#8]
    VLDR            S9, [R10]
    VLDR            S11, [R10,#4]
    VMUL.F32        S4, S4, S9
    VLDR            S13, [R10,#8]
    VMUL.F32        S6, S6, S11
    VMUL.F32        S2, S2, S9
    VMUL.F32        S8, S8, S11
    VMUL.F32        S0, S0, S9
    VMUL.F32        S10, S10, S11
    VMUL.F32        S12, S12, S13
    VADD.F32        S4, S6, S4
    VMUL.F32        S6, S14, S13
    VADD.F32        S2, S8, S2
    VMUL.F32        S8, S1, S13
    VADD.F32        S0, S10, S0
    VADD.F32        S4, S4, S12
    VADD.F32        S2, S2, S6
    VADD.F32        S0, S0, S8
    VADD.F32        S4, S4, S3
    VADD.F32        S2, S2, S5
    VADD.F32        S0, S0, S7
    VSTR            S4, [R10]
    VSTR            S2, [R10,#4]
    VSTR            S0, [R10,#8]
  v17 = ClientInstance::getHoloInput(*((ClientInstance **)v5 + 82));
  HolographicPlatform::getTransformTranslation((int)&v36, v17, 16, 15, 0);
  v22 = 0;
  v23 = 0;
  v20 = 1065353216;
  v21 = 0;
  v24 = 0;
  v25 = 1065353216;
  v28 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 1065353216;
  v31 = 0;
  v34 = 0;
  v35 = 1065353216;
  mce::WorldConstantsHolographic::getMatrixPatch(mce::Singleton<mce::GlobalConstantBuffers>::mInstance + 36, (int)&v20);
  glm::inverse<float>((int)&v59, (int)&v20);
  v20 = v59;
  v21 = v60;
  v22 = v61;
  v24 = v62;
  __asm { VMOV            S14, R3 }
  v25 = v63;
  __asm { VMOV            S1, R7 }
  v26 = v64;
  _R6 = v65;
  __asm { VMOV            S3, R6 }
  v29 = v66;
  v30 = v67;
  result = v71;
  v32 = v68;
  v33 = v69;
  v34 = v70;
    VLDR            S10, [SP,#0x138+var_E8]
    VLDR            S6, [SP,#0x138+var_118]
    VLDR            S0, [SP,#0x138+var_130]
    VMUL.F32        S14, S14, S10
    VLDR            S8, [SP,#0x138+var_EC]
    VMUL.F32        S1, S1, S10
    VLDR            S2, [SP,#0x138+var_12C]
    VMUL.F32        S6, S6, S10
    VLDR            S4, [SP,#0x138+var_128]
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VLDR            S12, [SP,#0x138+var_E4]
    VMUL.F32        S4, S4, S8
    VMOV            S8, R5
    VMOV            S10, R4
    VMUL.F32        S3, S3, S12
    VMUL.F32        S8, S8, S12
    VADD.F32        S0, S14, S0
    VADD.F32        S2, S1, S2
    VMUL.F32        S10, S10, S12
    VMOV            S6, R12
    VADD.F32        S0, S0, S3
    VADD.F32        S2, S2, S8
    VMOV            S8, R1
    VADD.F32        S4, S4, S10
    VMOV            S10, R2
    VADD.F32        S0, S0, S6
    VSTR            S0, [R8]
    VSTR            S2, [R8,#4]
    VSTR            S4, [R8,#8]
  return result;
}


void __fastcall InGameRealityModeScreen::~InGameRealityModeScreen(InGameRealityModeScreen *this)
{
  void *v1; // r0@1

  v1 = (void *)InGameRealityModeScreen::~InGameRealityModeScreen(this);
  j_j_j__ZdlPv_5(v1);
}


int __fastcall InGameRealityModeScreen::_postLevelRender(int a1, int a2, LevelRenderer *a3)
{
  int v3; // r4@1
  void (*v11)(void); // r3@8
  mce::WorldConstantsHolographic *v12; // r1@10
  int v14; // [sp+4h] [bp-1Ch]@8
  int v15; // [sp+8h] [bp-18h]@8
  float v16; // [sp+Ch] [bp-14h]@9

  v3 = a2;
  _R5 = a1;
  InGamePlayScreen::_postLevelRender(a1, a2, a3);
  InGamePlayScreen::_setCorrectViewProj(
    (InGamePlayScreen *)_R5,
    (mce::WorldConstantsHolographic *)(*(_DWORD *)(v3 + 32) + 36));
  if ( ClientInstance::isRealityFullVRMode(*(ClientInstance **)(_R5 + 328)) || !*(_BYTE *)(_R5 + 440) )
  {
    v14 = 0;
    v15 = 0;
    v16 = 0.0;
    v11 = *(void (**)(void))(*(_DWORD *)ClientInstance::getHoloInput(*(ClientInstance **)(_R5 + 328)) + 196);
  }
  else
    __asm
    {
      VMOV.F32        S2, #0.5
      VLDR            S4, [R5,#0x158]
      VLDR            S0, [R5,#0x15C]
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VLDRLE          S2, =0.65 }
    else
      __asm { VMOVGT.F32      S2, #0.75 }
      VCMPE.F32       S0, S2
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      InGameRealityModeScreen::_drawCutoutFadeout(_R5, v3);
    _R0 = ClientInstance::getHoloInput(*(ClientInstance **)(_R5 + 328));
    __asm { VLDR            S0, [R0,#0x2AC] }
    _R1 = &InGameRealityModeScreen::mRealityModeLSR_ZOffset;
      VLDR            S2, [R1]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [SP,#0x20+var_14]
  v11();
  return ScreenSetupCleanupHelper::cleanupFromVRDrawing((ScreenSetupCleanupHelper *)(*(_DWORD *)(v3 + 32) + 36), v12);
}


int __fastcall InGameRealityModeScreen::_drawOneToOneCutoutStencil(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r10@1
  int v4; // r8@1
  int v5; // r4@1
  Tessellator *v6; // r7@1
  GameRenderer *v7; // r0@1
  ShaderColor *v12; // r0@1
  void *v13; // r0@1
  LevelRenderer *v14; // r0@2
  char *v15; // r0@2
  void *v16; // r0@2
  unsigned int *v18; // r2@4
  signed int v19; // r1@6
  unsigned int *v20; // r2@8
  signed int v21; // r1@10
  int v22; // [sp+Ch] [bp-1BCh]@2
  char v23; // [sp+10h] [bp-1B8h]@2
  char v24; // [sp+1Ch] [bp-1ACh]@2
  char v25; // [sp+80h] [bp-148h]@2
  int v26; // [sp+8Ch] [bp-13Ch]@2
  int v27; // [sp+94h] [bp-134h]@1
  char v28; // [sp+98h] [bp-130h]@1
  char v29; // [sp+A4h] [bp-124h]@1
  int v30; // [sp+108h] [bp-C0h]@1
  int v31; // [sp+10Ch] [bp-BCh]@1
  int v32; // [sp+110h] [bp-B8h]@1
  int v33; // [sp+114h] [bp-B4h]@1
  float v34; // [sp+118h] [bp-B0h]@1
  float v35; // [sp+11Ch] [bp-ACh]@1
  int v36; // [sp+120h] [bp-A8h]@1
  int v37; // [sp+124h] [bp-A4h]@1
  int v38; // [sp+128h] [bp-A0h]@1
  int v39; // [sp+12Ch] [bp-9Ch]@1
  int v40; // [sp+130h] [bp-98h]@1
  int v41; // [sp+134h] [bp-94h]@1
  int v42; // [sp+138h] [bp-90h]@1
  int v43; // [sp+13Ch] [bp-8Ch]@1
  int v44; // [sp+140h] [bp-88h]@1
  int v45; // [sp+144h] [bp-84h]@1
  int v46; // [sp+148h] [bp-80h]@1
  int v47; // [sp+14Ch] [bp-7Ch]@1
  int v48; // [sp+150h] [bp-78h]@1
  int v49; // [sp+154h] [bp-74h]@1
  int v50; // [sp+158h] [bp-70h]@1
  int v51; // [sp+15Ch] [bp-6Ch]@1
  int v52; // [sp+160h] [bp-68h]@1
  int v53; // [sp+164h] [bp-64h]@1
  int v54; // [sp+168h] [bp-60h]@1
  int v55; // [sp+16Ch] [bp-5Ch]@1
  int v56; // [sp+170h] [bp-58h]@1
  signed int v57; // [sp+174h] [bp-54h]@1
  int v58; // [sp+178h] [bp-50h]@1
  int v59; // [sp+17Ch] [bp-4Ch]@1
  int v60; // [sp+180h] [bp-48h]@1
  int v61; // [sp+184h] [bp-44h]@1
  signed int v62; // [sp+188h] [bp-40h]@1
  int v63; // [sp+18Ch] [bp-3Ch]@1
  int v64; // [sp+190h] [bp-38h]@1
  int v65; // [sp+194h] [bp-34h]@1
  int v66; // [sp+198h] [bp-30h]@1
  int v67; // [sp+19Ch] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  v52 = 1065353216;
  v55 = 0;
  v56 = 0;
  v53 = 0;
  v54 = 0;
  v59 = 0;
  v60 = 0;
  v57 = 1065353216;
  v58 = 0;
  v61 = 0;
  v62 = 1065353216;
  v65 = 0;
  v66 = 0;
  v63 = 0;
  v64 = 0;
  v67 = 1065353216;
  v4 = *(_DWORD *)(a2 + 32) + 36;
  mce::WorldConstantsHolographic::getMatrixPatch(v4, (int)&v52);
  v5 = ClientInstance::getGameRenderer(*(ClientInstance **)(v2 + 328));
  _aeabi_memclr8(&v36, 56);
  v36 = *(_DWORD *)(v5 + 712);
  v37 = *(_DWORD *)(v5 + 716);
  v38 = *(_DWORD *)(v5 + 720);
  v39 = *(_DWORD *)(v5 + 724);
  v40 = *(_DWORD *)(v5 + 728);
  v41 = *(_DWORD *)(v5 + 732);
  v42 = *(_DWORD *)(v5 + 736);
  v43 = *(_DWORD *)(v5 + 740);
  v44 = *(_DWORD *)(v5 + 744);
  v45 = *(_DWORD *)(v5 + 748);
  v46 = *(_DWORD *)(v5 + 752);
  v47 = *(_DWORD *)(v5 + 756);
  v48 = *(_DWORD *)(v5 + 760);
  v49 = *(_DWORD *)(v5 + 764);
  v50 = *(_DWORD *)(v5 + 768);
  v51 = *(_DWORD *)(v5 + 772);
  mce::WorldConstantsHolographic::setMatrixPatch(v4, (int)&v36);
  v6 = *(Tessellator **)(v3 + 40);
  v7 = (GameRenderer *)ClientInstance::getGameRenderer(*(ClientInstance **)(v2 + 328));
  GameRenderer::getHoloLevelWidthHeight(v7, &v35, &v34);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [SP,#0x1C8+var_AC]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [SP,#0x1C8+var_AC]
    VLDR            S2, [SP,#0x1C8+var_B0]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [SP,#0x1C8+var_B0]
  }
  v12 = *(ShaderColor **)(v3 + 48);
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  ShaderColor::setColor(v12, (const Color *)&v30);
  Tessellator::begin((int)v6, 2, 12, 0);
  Tessellator::vertex(v6, -1000.0, 1000.0, -0.03125);
  Tessellator::vertex(v6, 1000.0, 1000.0, -0.03125);
  Tessellator::vertex(v6, 1000.0, -1000.0, -0.03125);
  Tessellator::vertex(v6, -1000.0, -1000.0, -0.03125);
  Tessellator::vertex(v6, COERCE_FLOAT(LODWORD(v35) ^ 0x80000000), v34, -0.0078125);
  Tessellator::vertex(v6, v35, v34, -0.0078125);
  Tessellator::vertex(v6, v35, COERCE_FLOAT(LODWORD(v34) ^ 0x80000000), -0.0078125);
  Tessellator::vertex(v6, COERCE_FLOAT(LODWORD(v35) ^ 0x80000000), COERCE_FLOAT(LODWORD(v34) ^ 0x80000000), -0.0078125);
  Tessellator::beginIndices(v6, 0);
  Tessellator::quad(v6, 4u, 5u, 1u, 0);
  Tessellator::quad(v6, 5u, 6u, 2u, 1u);
  Tessellator::quad(v6, 6u, 7u, 3u, 2u);
  Tessellator::quad(v6, 7u, 4u, 0, 3u);
  Tessellator::end((Tessellator *)&v29, (const char *)v6, 0, 0);
  sub_21E94B4((void **)&v27, "reality_frame_cutout");
  mce::RenderMaterialGroup::getMaterial(
    (mce::MaterialPtr *)&v28,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v27);
  mce::Mesh::render((mce::Buffer *)&v29, v3, (int)&v28, 0, 0);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v28);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  Tessellator::begin((int)v6, 2, 4, 0);
  Tessellator::vertex(v6, COERCE_FLOAT(LODWORD(v35) ^ 0x80000000), v34, -1.0);
  Tessellator::vertex(v6, v35, v34, -1.0);
  Tessellator::vertex(v6, v35, COERCE_FLOAT(LODWORD(v34) ^ 0x80000000), -1.0);
  Tessellator::vertex(v6, COERCE_FLOAT(LODWORD(v35) ^ 0x80000000), COERCE_FLOAT(LODWORD(v34) ^ 0x80000000), -1.0);
  Tessellator::quad(v6, 7u, 6u, 5u, 4u);
  Tessellator::quad(v6, 1u, 0, 4u, 5u);
  Tessellator::quad(v6, 2u, 1u, 5u, 6u);
  Tessellator::quad(v6, 3u, 2u, 6u, 7u);
  Tessellator::quad(v6, 0, 3u, 7u, 5u);
  v14 = (LevelRenderer *)ClientInstance::getLevelRenderer(*(ClientInstance **)(v2 + 328));
  v15 = LevelRenderer::getLevelRendererPlayer(v14);
  LevelRendererCamera::getFogClearColor((LevelRendererCamera *)&v25, (int)v15);
  v26 = 1065353216;
  ShaderColor::setColor(*(ShaderColor **)(v3 + 48), (const Color *)&v25);
  Tessellator::end((Tessellator *)&v24, (const char *)v6, 0, 0);
  mce::Mesh::operator=((int)&v29, (int)&v24);
  mce::Mesh::~Mesh((mce::Mesh *)&v24);
  sub_21E94B4((void **)&v22, "reality_frame_skyfill");
    (mce::MaterialPtr *)&v23,
    &v22);
  mce::Mesh::render((mce::Buffer *)&v29, v3, (int)&v23, 0, 0);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v23);
  v16 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v22 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  mce::WorldConstantsHolographic::setMatrixPatch(v4, (int)&v52);
  return mce::Mesh::~Mesh((mce::Mesh *)&v29);
}


signed int __fastcall InGameRealityModeScreen::handleDirection(int a1, int a2, int a3, int _R3)
{
  int v9; // r5@1
  int v10; // r6@1
  signed int v11; // r0@3
  Options *v12; // r0@7
  signed int result; // r0@9

  _R4 = a3;
  __asm
  {
    VMOV            S16, R3
    VMOV            S0, R4
  }
  v9 = a2;
  v10 = a1;
  if ( a2 == 3 )
    __asm
    {
      VSTR            S0, [R6,#0x170]
      VSTR            S16, [R6,#0x174]
    }
  else if ( a2 == 1 )
    v11 = ClientInstance::isRealityFullVRMode(*(ClientInstance **)(a1 + 328));
    __asm { VLDR            S0, =0.0 }
    if ( v11 )
      __asm { VMOVNE.F32      S16, S0 }
  v12 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v10 + 328));
  if ( !Options::getVRJoystickAim(v12) && ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v10 + 328))
    || (result = ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v10 + 328))) == 0 )
    __asm { VMOV            R3, S16 }
    result = InGamePlayScreen::handleDirection(v10, v9, _R4, _R3);
  return result;
}


BaseScreen *__fastcall InGameRealityModeScreen::InGameRealityModeScreen(BaseScreen *a1, MinecraftGame *a2, int a3)
{
  MinecraftGame *v3; // r5@1
  BaseScreen *v4; // r4@1
  BaseScreen *result; // r0@1

  v3 = a2;
  v4 = a1;
  InGamePlayScreen::InGamePlayScreen(a1, a2, a3);
  *(_DWORD *)v4 = &off_26E4B6C;
  *((_DWORD *)v4 + 84) = 0;
  *((_DWORD *)v4 + 85) = 0;
  *((_DWORD *)v4 + 86) = 0;
  *((_BYTE *)v4 + 356) = 0;
  *((_DWORD *)v4 + 94) = 0;
  *((_DWORD *)v4 + 95) = 0;
  *((_DWORD *)v4 + 92) = 0;
  *((_DWORD *)v4 + 93) = 0;
  *((_DWORD *)v4 + 90) = 0;
  *((_DWORD *)v4 + 91) = 0;
  *((_DWORD *)v4 + 96) = 1065353216;
  *((_DWORD *)v4 + 102) = 0;
  *((_DWORD *)v4 + 103) = 0;
  *((_DWORD *)v4 + 100) = 0;
  *((_DWORD *)v4 + 101) = 0;
  *((_DWORD *)v4 + 98) = 0;
  *((_DWORD *)v4 + 99) = 0;
  *((_DWORD *)v4 + 104) = 1065353216;
  *((_WORD *)v4 + 220) = 0;
  *((_DWORD *)v4 + 107) = 0;
  *((_DWORD *)v4 + 108) = 0;
  *((_DWORD *)v4 + 105) = 0;
  *((_DWORD *)v4 + 106) = 0;
  HitResult::HitResult((BaseScreen *)((char *)v4 + 444));
  _R0 = MinecraftGame::getHoloscreenHalfWidth(v3);
  __asm { VMOV            S0, R0 }
  result = v4;
  __asm { VSTR            S0, [R4,#0x180] }
  return result;
}


signed int __fastcall InGameRealityModeScreen::_updateFreeformPickDirection(InGameRealityModeScreen *this, float a2, Vec3 *a3, Vec3 *a4)
{
  Vec3 *v5; // r4@1
  int v6; // r10@1
  int v7; // r6@1
  signed int v11; // r5@5
  Level *v12; // r0@7
  char *v13; // r8@7
  int v15; // r0@11
  unsigned __int64 v16; // kr40_8@17
  int v17; // ST28_4@17
  int v18; // ST2C_4@17
  unsigned __int64 v19; // kr48_8@17
  int v20; // ST20_4@17
  int v21; // ST24_4@17
  __int64 v22; // kr10_8@17
  __int64 v23; // kr18_8@17
  int v24; // r9@17
  int v25; // ST44_4@17
  int v26; // ST40_4@17
  unsigned __int64 v27; // kr50_8@17
  int v28; // ST38_4@17
  int v29; // ST3C_4@17
  float v30; // ST34_4@17
  int v31; // r4@17
  float v32; // ST30_4@17
  Options *v36; // r0@19
  float *v37; // r6@21
  int v38; // r1@21
  int v39; // r2@21
  __int64 *v41; // r4@22
  int v42; // r3@25
  int v43; // r1@25
  int v44; // r2@25
  LevelRenderer *v45; // r0@25
  char *v46; // r0@25
  ItemInstance *v51; // r5@28
  int v52; // r7@28
  ItemInstance *v53; // r0@34
  Entity *v54; // r0@36
  Entity *v55; // r5@36
  const Vec3 *v56; // r0@36
  int v58; // r7@38
  Options *v59; // r0@38
  int v60; // r0@39
  int v61; // r7@42
  int v62; // r8@42
  BlockSource *v63; // r0@43
  int v64; // r6@44
  int v67; // r1@52
  int v68; // r1@52
  int v69; // r0@53
  int v70; // r1@53
  Vec3 *v72; // [sp+14h] [bp-374h]@17
  BlockSource *v73; // [sp+18h] [bp-370h]@17
  char *v74; // [sp+1Ch] [bp-36Ch]@17
  int *v75; // [sp+40h] [bp-348h]@22
  int v76; // [sp+44h] [bp-344h]@22
  int v77; // [sp+4Ch] [bp-33Ch]@17
  char v78; // [sp+50h] [bp-338h]@36
  float v79; // [sp+5Ch] [bp-32Ch]@36
  int v80; // [sp+68h] [bp-320h]@21
  int v81; // [sp+6Ch] [bp-31Ch]@22
  int v82; // [sp+70h] [bp-318h]@22
  int v83; // [sp+74h] [bp-314h]@22
  int v84; // [sp+78h] [bp-310h]@22
  int v85; // [sp+7Ch] [bp-30Ch]@22
  int v86; // [sp+80h] [bp-308h]@22
  int v87; // [sp+84h] [bp-304h]@22
  __int64 v88; // [sp+88h] [bp-300h]@21
  int v89; // [sp+90h] [bp-2F8h]@21
  int v90; // [sp+94h] [bp-2F4h]@22
  int v91; // [sp+98h] [bp-2F0h]@22
  int v92; // [sp+9Ch] [bp-2ECh]@22
  int v93; // [sp+A0h] [bp-2E8h]@22
  int v94; // [sp+A4h] [bp-2E4h]@22
  char v95; // [sp+A8h] [bp-2E0h]@52
  float v96; // [sp+B0h] [bp-2D8h]@36
  float v97; // [sp+BCh] [bp-2CCh]@36
  int v98; // [sp+C8h] [bp-2C0h]@25
  int v99; // [sp+CCh] [bp-2BCh]@25
  int v100; // [sp+D0h] [bp-2B8h]@25
  int v101; // [sp+D4h] [bp-2B4h]@25
  int v102; // [sp+D8h] [bp-2B0h]@25
  int v103; // [sp+DCh] [bp-2ACh]@25
  int v104; // [sp+E0h] [bp-2A8h]@25
  int v105; // [sp+E4h] [bp-2A4h]@25
  __int64 v106; // [sp+E8h] [bp-2A0h]@25
  int v107; // [sp+F0h] [bp-298h]@25
  int v108; // [sp+F4h] [bp-294h]@25
  int v109; // [sp+F8h] [bp-290h]@25
  int v110; // [sp+FCh] [bp-28Ch]@25
  int v111; // [sp+100h] [bp-288h]@25
  int v112; // [sp+104h] [bp-284h]@25
  int v113; // [sp+108h] [bp-280h]@25
  int v114; // [sp+10Ch] [bp-27Ch]@25
  int v115; // [sp+110h] [bp-278h]@25
  int v116; // [sp+114h] [bp-274h]@25
  int v117; // [sp+118h] [bp-270h]@25
  int v118; // [sp+11Ch] [bp-26Ch]@25
  int v119; // [sp+120h] [bp-268h]@25
  int v120; // [sp+124h] [bp-264h]@25
  __int64 v121; // [sp+128h] [bp-260h]@25
  int v122; // [sp+130h] [bp-258h]@25
  int v123; // [sp+134h] [bp-254h]@25
  int v124; // [sp+138h] [bp-250h]@25
  int v125; // [sp+13Ch] [bp-24Ch]@25
  int v126; // [sp+140h] [bp-248h]@25
  int v127; // [sp+144h] [bp-244h]@25
  float v128; // [sp+148h] [bp-240h]@25
  int v131; // [sp+188h] [bp-200h]@22
  int v132; // [sp+18Ch] [bp-1FCh]@22
  int v133; // [sp+190h] [bp-1F8h]@22
  int v134; // [sp+194h] [bp-1F4h]@22
  int v135; // [sp+198h] [bp-1F0h]@22
  int v136; // [sp+19Ch] [bp-1ECh]@22
  int v137; // [sp+1A0h] [bp-1E8h]@22
  int v138; // [sp+1A4h] [bp-1E4h]@22
  __int64 v139; // [sp+1A8h] [bp-1E0h]@22
  int v140; // [sp+1B0h] [bp-1D8h]@22
  int v141; // [sp+1B4h] [bp-1D4h]@22
  int v142; // [sp+1B8h] [bp-1D0h]@22
  int v143; // [sp+1BCh] [bp-1CCh]@22
  int v144; // [sp+1C0h] [bp-1C8h]@22
  int v145; // [sp+1C4h] [bp-1C4h]@22
  int v146; // [sp+1C8h] [bp-1C0h]@22
  int v147; // [sp+1CCh] [bp-1BCh]@22
  int v148; // [sp+1D0h] [bp-1B8h]@22
  int v149; // [sp+1D4h] [bp-1B4h]@22
  int v150; // [sp+1D8h] [bp-1B0h]@22
  int v151; // [sp+1DCh] [bp-1ACh]@22
  int v152; // [sp+1E0h] [bp-1A8h]@22
  int v153; // [sp+1E4h] [bp-1A4h]@22
  __int64 v154; // [sp+1E8h] [bp-1A0h]@22
  int v155; // [sp+1F0h] [bp-198h]@22
  int v156; // [sp+1F4h] [bp-194h]@22
  int v157; // [sp+1F8h] [bp-190h]@22
  int v158; // [sp+1FCh] [bp-18Ch]@22
  int v159; // [sp+200h] [bp-188h]@22
  int v160; // [sp+204h] [bp-184h]@22
  int v161; // [sp+208h] [bp-180h]@17
  int v162; // [sp+20Ch] [bp-17Ch]@17
  int v163; // [sp+210h] [bp-178h]@17
  int v164; // [sp+214h] [bp-174h]@17
  __int64 v165; // [sp+218h] [bp-170h]@17
  __int64 v166; // [sp+220h] [bp-168h]@17
  int v167; // [sp+228h] [bp-160h]@17
  int v168; // [sp+22Ch] [bp-15Ch]@17
  int v169; // [sp+230h] [bp-158h]@17
  int v170; // [sp+234h] [bp-154h]@17
  int v171; // [sp+238h] [bp-150h]@17
  float v172; // [sp+23Ch] [bp-14Ch]@17
  float v173; // [sp+240h] [bp-148h]@17
  int v174; // [sp+244h] [bp-144h]@17
  __int64 v175; // [sp+248h] [bp-140h]@17
  __int64 v176; // [sp+250h] [bp-138h]@17
  __int64 v177; // [sp+258h] [bp-130h]@17
  __int64 v178; // [sp+260h] [bp-128h]@17
  __int64 v179; // [sp+268h] [bp-120h]@17
  int v180; // [sp+270h] [bp-118h]@17
  __int64 v181; // [sp+274h] [bp-114h]@17
  float v182; // [sp+27Ch] [bp-10Ch]@17
  __int64 v183; // [sp+280h] [bp-108h]@17
  float v184; // [sp+288h] [bp-100h]@17
  char v196; // [sp+2C8h] [bp-C0h]@17
  float v197; // [sp+308h] [bp-80h]@17
  char v200; // [sp+314h] [bp-74h]@17

  _R11 = this;
  v5 = a4;
  v6 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 82));
  v7 = Entity::getRegion((Entity *)v6);
  if ( ClientInstance::allowPicking(*((ClientInstance **)_R11 + 82)) == 1 )
  {
    __asm
    {
      VLDR            S0, [R11,#0x15C]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      goto LABEL_58;
      VMOV.F32        S2, #1.0
      VCMPE.F32       S0, S2
    if ( _NF ^ _VF )
      v11 = 0;
    else
LABEL_58:
      v12 = (Level *)ClientInstance::getLevel(*((ClientInstance **)_R11 + 82));
      v13 = Level::getHitResult(v12);
      _R0 = ClientInstance::getRealityModeFrameFactor(*((ClientInstance **)_R11 + 82));
      __asm
      {
        VLDR            S16, [R0]
        VCMPE.F32       S16, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        goto LABEL_59;
        VMOV.F32        S0, #1.0
        VCMPE.F32       S16, S0
      if ( _NF ^ _VF )
        v11 = 0;
      else
LABEL_59:
        v15 = ClientInstance::getGameRenderer(*((ClientInstance **)_R11 + 82));
        __asm
        {
          VCMPE.F32       S16, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF && *(_BYTE *)(v15 + 812) )
          v11 = 0;
          *(_DWORD *)v13 = 3;
        else
          __asm
          {
            VCMPE.F32       S16, #0.0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            v72 = v5;
            v73 = (BlockSource *)v7;
            v74 = v13;
            v77 = ClientInstance::getHoloInput(*((ClientInstance **)_R11 + 82));
            HolographicPlatform::getTransformZDir((int)&v200, v77, 19, 10, 0);
            HolographicPlatform::getTransformTranslation((int)&v197, v77, 19, 10, 0);
            HolographicPlatform::getTransform((int)&v196, v77, 19, 10, 0);
            HolographicPlatform::getTransform((int)&v184, v77, 10, 1, 0);
            __asm
            {
              VLDR            S22, [SP,#0x388+var_100]
              VLDR            S28, [SP,#0x388+var_FC]
              VLDR            S21, [SP,#0x388+var_F8]
              VLDR            S26, [SP,#0x388+var_F0]
              VLDR            S30, [SP,#0x388+var_80]
              VLDR            S17, [SP,#0x388+var_7C]
              VLDR            S24, [SP,#0x388+var_78]
              VLDR            S20, [SP,#0x388+var_D0]
              VLDR            S18, [SP,#0x388+var_CC]
              VLDR            S16, [SP,#0x388+var_C8]
              VLDR            S19, [SP,#0x388+var_E0]
              VLDR            S23, [SP,#0x388+var_DC]
              VLDR            S25, [SP,#0x388+var_D8]
              VLDR            S27, [SP,#0x388+var_EC]
              VLDR            S29, [SP,#0x388+var_E8]
            }
            _aeabi_memclr8(&v175, 60);
            v16 = *(_QWORD *)&Matrix::IDENTITY;
            v17 = v16 >> 32;
            v18 = v16;
            v175 = *(_QWORD *)&Matrix::IDENTITY;
            v19 = qword_27E89F0;
            v20 = v19 >> 32;
            v21 = v19;
            v176 = qword_27E89F0;
            v22 = qword_27E89F8;
            v23 = qword_27E8A00;
            v24 = qword_27E8A08;
            v177 = qword_27E89F8;
            v178 = qword_27E8A00;
            v25 = HIDWORD(qword_27E8A08);
            v179 = qword_27E8A08;
            v26 = unk_27E8A10;
            v180 = unk_27E8A10;
            v27 = qword_27E8A14;
            v28 = v27 >> 32;
            v29 = v27;
            v181 = qword_27E8A14;
            v30 = unk_27E8A1C;
            v182 = unk_27E8A1C;
            v31 = *((_DWORD *)&qword_27E8A20 + 1);
            v183 = *(_QWORD *)&qword_27E8A20;
            v32 = qword_27E8A20;
            _aeabi_memclr8(&v161, 60);
            __asm { VMUL.F32        S0, S21, S30 }
            v161 = v18;
              VMUL.F32        S2, S29, S17
              VMUL.F32        S4, S28, S30
              VMUL.F32        S6, S27, S17
            v162 = v17;
              VMUL.F32        S8, S22, S30
              VMUL.F32        S10, S26, S17
            v163 = v21;
            __asm { VMUL.F32        S12, S25, S24 }
            v164 = v20;
            v165 = v22;
            v166 = v23;
            __asm { VADD.F32        S0, S2, S0 }
            v167 = v24;
              VMUL.F32        S2, S23, S24
              VADD.F32        S4, S6, S4
            v168 = v25;
              VMUL.F32        S6, S19, S24
              VADD.F32        S8, S10, S8
            v169 = v26;
            v170 = v29;
            __asm { VADD.F32        S22, S0, S12 }
            v171 = v28;
            __asm { VADD.F32        S24, S4, S2 }
            v172 = v30;
            __asm { VADD.F32        S26, S8, S6 }
            v173 = v32;
            v174 = v31;
            if ( ClientInstance::isRealityFullVRMode(*((ClientInstance **)_R11 + 82)) == 1 )
              __asm
              {
                VLDR            S0, =0.017453
                VLDR            S2, [R11,#0x16C]
                VMUL.F32        S0, S2, S0
                VMOV            R5, S0
              }
              _R0 = cosf(_R5);
              __asm { VMOV            S28, R0 }
              _R0 = sinf(_R5);
                VLDR            S0, [SP,#0x388+var_130]
                VMOV            S10, R0
                VLDR            S2, [SP,#0x388+var_130+4]
                VLDR            S4, [SP,#0x388+var_128]
                VMUL.F32        S3, S0, S28
                VLDR            S6, [SP,#0x388+var_128+4]
                VMUL.F32        S12, S2, S28
                VLDR            S8, [SP,#0x388+var_120+4]
                VMUL.F32        S7, S4, S28
                VLDR            S1, [SP,#0x388+var_120]
                VMUL.F32        S15, S6, S28
                VLDR            S5, [SP,#0x388+var_118]
                VMUL.F32        S14, S8, S10
                VLDR            S11, [SP,#0x388+var_114]
                VMUL.F32        S9, S1, S10
                VMUL.F32        S13, S5, S10
                VMUL.F32        S30, S11, S10
                VMUL.F32        S0, S0, S10
                VMUL.F32        S1, S1, S28
                VMUL.F32        S2, S2, S10
                VMUL.F32        S8, S8, S28
                VMUL.F32        S4, S4, S10
                VMUL.F32        S5, S5, S28
                VMUL.F32        S6, S6, S10
                VMUL.F32        S10, S11, S28
                VADD.F32        S3, S9, S3
                VADD.F32        S12, S14, S12
                VADD.F32        S14, S13, S7
                VADD.F32        S7, S30, S15
                VSUB.F32        S0, S1, S0
                VSUB.F32        S2, S8, S2
                VSUB.F32        S4, S5, S4
                VSUB.F32        S6, S10, S6
                VSTR            S3, [SP,#0x388+var_130]
                VSTR            S12, [SP,#0x388+var_130+4]
                VSTR            S14, [SP,#0x388+var_128]
                VSTR            S7, [SP,#0x388+var_128+4]
                VSTR            S0, [SP,#0x388+var_120]
                VSTR            S2, [SP,#0x388+var_120+4]
                VSTR            S4, [SP,#0x388+var_118]
                VSTR            S6, [SP,#0x388+var_114]
              InGameRealityModeScreen::_computeGazeStickRotMatByHead((int)_R11, (int)&v161);
              VADD.F32        S16, S22, S16
              VADD.F32        S18, S24, S18
              VADD.F32        S20, S26, S20
            v36 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R11 + 82));
            if ( Options::getVRJoystickAim(v36) )
              if ( *((_DWORD *)_R11 + 101) <= 0 )
                v37 = &v184;
                v39 = *((_DWORD *)_R11 + 98);
                _R8 = *(_QWORD *)((char *)_R11 + 396);
              else
                glm::detail::operator*<float>((int)&v80, (int)&v184, (int)&v196);
                _R8 = __PAIR__(v88, HIDWORD(v88));
                v38 = v89;
                *((_DWORD *)_R11 + 98) = v88;
                v39 = HIDWORD(_R8);
                *((_DWORD *)_R11 + 99) = _R8;
                *((_DWORD *)_R11 + 100) = v38;
                HIDWORD(_R8) = v38;
                --*((_DWORD *)_R11 + 101);
              v41 = &v175;
              v76 = v39;
              v75 = &v161;
            else
              v37 = &v184;
              glm::detail::operator*<float>((int)&v80, (int)&v184, (int)&v196);
              _aeabi_memclr8(&v146, 56);
              v146 = v80;
              v147 = v81;
              v148 = v82;
              v149 = v83;
              v150 = v84;
              v151 = v85;
              v152 = v86;
              v153 = v87;
              v154 = v88;
              v155 = v89;
              v156 = v90;
              v157 = v91;
              v158 = v92;
              v159 = v93;
              v160 = v94;
              glm::detail::operator*<float>((int)&v80, (int)&v146, (int)&v175);
              _aeabi_memclr8(&v131, 56);
              v131 = v80;
              v132 = v81;
              v133 = v82;
              v134 = v83;
              v135 = v84;
              v136 = v85;
              v137 = v86;
              v138 = v87;
              v139 = v88;
              v140 = v89;
              v141 = v90;
              v142 = v91;
              v143 = v92;
              v144 = v93;
              v145 = v94;
              glm::detail::operator*<float>((int)&v80, (int)&v131, (int)&v161);
              v76 = v88;
              _R8 = *(__int64 *)((char *)&v88 + 4);
            HolographicPlatform::getTransform((int)&v128, v77, 16, 10, 0);
            glm::detail::operator*<float>((int)&v80, (int)v37, (int)&v128);
            _aeabi_memclr8(&v113, 56);
            v113 = v80;
            v114 = v81;
            v115 = v82;
            v116 = v83;
            v117 = v84;
            v118 = v85;
            v119 = v86;
            v120 = v87;
            v121 = v88;
            v122 = v89;
            v123 = v90;
            v124 = v91;
            v125 = v92;
            v126 = v93;
            v127 = v94;
            glm::detail::operator*<float>((int)&v80, (int)&v113, (int)v41);
            _aeabi_memclr8(&v98, 56);
            v98 = v80;
            v99 = v81;
            v100 = v82;
            v101 = v83;
            v102 = v84;
            v103 = v85;
            v104 = v86;
            v105 = v87;
            v106 = v88;
            v107 = v89;
            v108 = v90;
            v109 = v91;
            v110 = v92;
            v111 = v93;
            v112 = v94;
            glm::detail::operator*<float>((int)&v80, (int)&v98, (int)v75);
            v42 = v77 + 516;
            v43 = HIDWORD(v88);
            v44 = v89;
            *(_DWORD *)v42 = v88;
            *(_DWORD *)(v42 + 4) = v43;
            *(_DWORD *)(v42 + 8) = v44;
            v45 = (LevelRenderer *)ClientInstance::getLevelRenderer(*((ClientInstance **)_R11 + 82));
            v46 = LevelRenderer::getLevelRendererPlayer(v45);
            LevelRendererPlayer::getComfortRenderAdj((LevelRendererPlayer *)&v128, (int)v46);
            _R1 = v76;
              VMOV            S24, R8
              VMOV            S26, R9
              VLDR            S10, [SP,#0x388+var_238]
              VMUL.F32        S2, S24, S24
              VMOV            S22, R1
              VMUL.F32        S4, S26, S26
              VMUL.F32        S0, S22, S22
              VMOV.F32        S8, #12.0
              VADD.F32        S0, S2, S0
              VMUL.F32        S12, S22, S8
              VMUL.F32        S14, S24, S8
              VMUL.F32        S8, S26, S8
              VADD.F32        S2, S0, S4
              VLDR            S0, [SP,#0x388+var_240]
              VLDR            S4, [SP,#0x388+var_23C]
              VADD.F32        S0, S20, S0
              VSQRT.F32       S6, S2
              VADD.F32        S2, S18, S4
              VSTR            S0, [SP,#0x388+var_2CC]
              VADD.F32        S4, S16, S10
              VADD.F32        S10, S0, S12
              VADD.F32        S12, S2, S14
              VLDR            S14, =0.0001
              VADD.F32        S8, S4, S8
              VSTR            S2, [SP,#0x388+var_2C8]
              VCMPE.F32       S6, S14
              VSTR            S10, [SP,#0x388+var_2D8]
              VSTR            S4, [SP,#0x388+var_2C4]
              VMRS            APSR_nzcv, FPSCR
              VSTR            S12, [SP,#0x388+var_2D4]
              VSTR            S8, [SP,#0x388+var_2D0]
              VSTR            S0, [R0]
              VSTR            S2, [R0,#4]
              VSTR            S4, [R0,#8]
            if ( _NF ^ _VF )
              _R1 = *(&Vec3::ZERO + 1);
              _R2 = Vec3::ZERO;
              _R0 = dword_2822498;
                VDIV.F32        S8, S26, S6
                VDIV.F32        S10, S24, S6
                VDIV.F32        S6, S22, S6
                VMOV            R0, S8
                VMOV            R1, S10
                VMOV            R2, S6
            *(_DWORD *)v72 = _R2;
            *((_DWORD *)v72 + 1) = _R1;
            *((_DWORD *)v72 + 2) = _R0;
            *((_DWORD *)_R11 + 102) = v76;
            *(_QWORD *)((char *)_R11 + 412) = _R8;
              VSTR            S0, [R11,#0x1A4]
              VSTR            S2, [R11,#0x1A8]
              VSTR            S4, [R11,#0x1AC]
            v51 = (ItemInstance *)Player::getSelectedItem((Player *)v6);
            v52 = 0;
            if ( *((_BYTE *)v51 + 15) )
              if ( *(_DWORD *)v51 )
                if ( ItemInstance::isNull(v51) )
                {
                  v52 = 0;
                }
                else if ( *((_BYTE *)v51 + 14) )
                  v53 = (ItemInstance *)Player::getSelectedItem((Player *)v6);
                  v52 = ItemInstance::isLiquidClipItem(v53);
                else
                v52 = 0;
            v54 = (Entity *)ClientInstance::getCameraTargetEntity(*((ClientInstance **)_R11 + 82));
            v55 = v54;
            v56 = (const Vec3 *)Entity::getRegion(v54);
            BlockSource::clip((BlockSource *)&v80, v56, (const Vec3 *)&v97, (int)&v96, v52, 0, 200, 0);
              VLDR            S0, =0.3
              VLDR            S6, [SP,#0x388+var_30C]
              VMUL.F32        S2, S22, S0
              VLDR            S8, [SP,#0x388+var_308]
              VMUL.F32        S4, S24, S0
              VLDR            S10, [SP,#0x388+var_304]
              VMUL.F32        S0, S26, S0
              VSUB.F32        S2, S6, S2
              VSUB.F32        S4, S8, S4
              VSUB.F32        S0, S10, S0
              VSTR            S2, [SP,#0x388+var_32C]
              VSTR            S4, [SP,#0x388+var_328]
              VSTR            S0, [SP,#0x388+var_324]
            BlockPos::BlockPos((int)&v78, (int)&v79);
            _R0 = BlockSource::getBrightness(v73, (const BlockPos *)&v78);
              VLDR            S0, =0.35
              VMOV            S2, R0
              VMOV.F32        S4, #1.0
              VCMPE.F32       S0, S4
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F32      S0, S4 }
            __asm { VSTR            S0, [R11,#0x1B0] }
            *((_BYTE *)_R11 + 441) = 0;
            v58 = *(_BYTE *)(v77 + 661);
            v59 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R11 + 82));
            if ( v58 )
              v60 = Options::getVRStickyMiningHandPointer(v59);
              v60 = Options::getVRStickyMining(v59);
            if ( !v60 )
              goto LABEL_60;
            v61 = *(_BYTE *)(v6 + 5228);
            v62 = *(_BYTE *)(v77 + 688);
            v64 = 1;
            if ( !*(_DWORD *)v74 )
              v63 = (BlockSource *)Entity::getRegion(v55);
              if ( BlockSource::isEmptyBlock(v63, (const BlockPos *)(v74 + 8)) != 1 )
                v64 = 0;
            _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v55 + 64))(v55);
            _ZF = v61 == 0;
            if ( v61 )
              _ZF = v62 == 0;
            if ( _ZF )
            if ( v64 )
              VLDR            S0, [R0]
              VLDR            S2, [R0,#8]
              VMUL.F32        S0, S0, S0
              VMUL.F32        S2, S2, S2
              VLDR            S2, =0.01
              VSQRT.F32       S0, S0
              VCMPE.F32       S0, S2
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              *((_BYTE *)_R11 + 441) = 1;
              v67 = v80;
              *((_BYTE *)_R11 + 448) = v81;
              *((_DWORD *)_R11 + 111) = v67;
              *((_DWORD *)_R11 + 113) = v82;
              *((_DWORD *)_R11 + 114) = v83;
              *((_DWORD *)_R11 + 115) = v84;
              *((_DWORD *)_R11 + 116) = v85;
              *((_DWORD *)_R11 + 117) = v86;
              *((_DWORD *)_R11 + 118) = v87;
              v68 = v88;
              *((_WORD *)_R11 + 240) = WORD2(v88);
              *((_DWORD *)_R11 + 119) = v68;
              *((_DWORD *)_R11 + 121) = v89;
              *((_DWORD *)_R11 + 122) = v90;
              *((_DWORD *)_R11 + 123) = v91;
              *((_DWORD *)_R11 + 124) = v92;
              *((_DWORD *)_R11 + 125) = v93;
              *((_DWORD *)_R11 + 126) = v94;
              *((_BYTE *)_R11 + 508) = v95;
LABEL_60:
              v69 = v80;
              v74[4] = v81;
              *(_DWORD *)v74 = v69;
              *((_DWORD *)v74 + 2) = v82;
              *((_DWORD *)v74 + 3) = v83;
              *((_DWORD *)v74 + 4) = v84;
              *((_DWORD *)v74 + 5) = v85;
              *((_DWORD *)v74 + 6) = v86;
              *((_DWORD *)v74 + 7) = v87;
              v70 = v88;
              *((_WORD *)v74 + 18) = WORD2(v88);
              *((_DWORD *)v74 + 8) = v70;
              *((_DWORD *)v74 + 10) = v89;
              *((_DWORD *)v74 + 11) = v90;
              *((_DWORD *)v74 + 12) = v91;
              *((_DWORD *)v74 + 13) = v92;
              *((_DWORD *)v74 + 14) = v93;
              *((_DWORD *)v74 + 15) = v94;
              v74[64] = v95;
            v11 = 1;
  }
  else
    v11 = 0;
  return v11;
}


int __fastcall InGameRealityModeScreen::_computeGazeStickRotMatByHead(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  Options *v4; // r0@1
  int v5; // r1@2
  ClientInstance *v6; // r0@2
  int result; // r0@3
  Player *v8; // r0@5
  int v9; // r6@5
  Player *v10; // r0@6
  int v11; // r0@8
  int v16; // [sp+8h] [bp-B0h]@12
  int v17; // [sp+Ch] [bp-ACh]@12
  int v18; // [sp+10h] [bp-A8h]@12
  char v19; // [sp+14h] [bp-A4h]@8
  int v23; // [sp+54h] [bp-64h]@12
  int v24; // [sp+58h] [bp-60h]@12
  int v25; // [sp+5Ch] [bp-5Ch]@12
  int v26; // [sp+60h] [bp-58h]@12
  int v27; // [sp+64h] [bp-54h]@12
  int v28; // [sp+68h] [bp-50h]@12
  int v29; // [sp+6Ch] [bp-4Ch]@12
  int v30; // [sp+70h] [bp-48h]@12
  int v31; // [sp+74h] [bp-44h]@12
  int v32; // [sp+78h] [bp-40h]@12
  int v33; // [sp+7Ch] [bp-3Ch]@12
  int v34; // [sp+80h] [bp-38h]@12
  int v35; // [sp+84h] [bp-34h]@12
  int v36; // [sp+88h] [bp-30h]@12
  int v37; // [sp+8Ch] [bp-2Ch]@12
  int v38; // [sp+90h] [bp-28h]@12
  float v39; // [sp+94h] [bp-24h]@12

  v2 = a1;
  v3 = a2;
  v4 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a1 + 328));
  if ( Options::getVRGazePitchBoost(v4) )
  {
    v5 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 328));
    v6 = *(ClientInstance **)(v2 + 328);
    if ( *(_BYTE *)(v5 + 661) )
    {
      result = ClientInstance::getGameRenderer(v6);
      *(_DWORD *)(result + 792) = 0;
    }
    else
      v8 = (Player *)ClientInstance::getLocalPlayer(v6);
      v9 = 19;
      if ( Player::isUsingItem(v8) == 1 )
      {
        v10 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v2 + 328));
        if ( *(_DWORD *)Player::getItemInUse(v10) == Item::mBow )
          v9 = 16;
      }
      v11 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 328));
      HolographicPlatform::getTransform((int)&v19, v11, v9, 10, 0);
      __asm
        VLDR            S0, [SP,#0xB8+var_84]
        VMOV.F32        S6, #20.0
        VLDR            S4, [SP,#0xB8+var_7C]
        VMUL.F32        S0, S0, S0
        VMUL.F32        S4, S4, S4
        VLDR            S2, [SP,#0xB8+var_80]
        VADD.F32        S0, S4, S0
      *(_DWORD *)v3 = Matrix::IDENTITY;
      __asm { VMOV.F32        S4, #1.0 }
      *(_DWORD *)(v3 + 4) = *(&Matrix::IDENTITY + 1);
      *(_QWORD *)(v3 + 8) = qword_27E89F0;
      __asm { VSQRT.F32       S0, S0 }
      *(_QWORD *)(v3 + 16) = qword_27E89F8;
      *(_QWORD *)(v3 + 24) = qword_27E8A00;
      *(_QWORD *)(v3 + 32) = qword_27E8A08;
      *(_DWORD *)(v3 + 40) = unk_27E8A10;
        VSUB.F32        S0, S4, S0
        VLDR            S4, =45.0
        VMUL.F32        S16, S0, S4
        VCMPE.F32       S16, S6
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S2, #0.0
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S16, S6 }
      __asm { VMRS            APSR_nzcv, FPSCR }
      *(_DWORD *)(v3 + 44) = qword_27E8A14;
      __asm { VNEG.F32        S0, S16 }
      *(_DWORD *)(v3 + 48) = HIDWORD(qword_27E8A14);
      *(float *)(v3 + 52) = unk_27E8A1C;
      *(float *)(v3 + 56) = qword_27E8A20;
        __asm { VMOVGT.F32      S16, S0 }
      *(float *)(v3 + 60) = *(&qword_27E8A20 + 1);
      v16 = 1065353216;
      v17 = 0;
      v18 = 0;
      __asm { VSTR            S16, [SP,#0xB8+var_24] }
      glm::rotate<float>((int)&v23, v3, (int)&v39, (int)&v16);
      *(_DWORD *)v3 = v23;
      *(_DWORD *)(v3 + 4) = v24;
      *(_DWORD *)(v3 + 8) = v25;
      *(_DWORD *)(v3 + 12) = v26;
      *(_DWORD *)(v3 + 16) = v27;
      *(_DWORD *)(v3 + 20) = v28;
      *(_DWORD *)(v3 + 24) = v29;
      *(_DWORD *)(v3 + 28) = v30;
      *(_DWORD *)(v3 + 32) = v31;
      *(_DWORD *)(v3 + 36) = v32;
      *(_DWORD *)(v3 + 40) = v33;
      *(_DWORD *)(v3 + 44) = v34;
      *(_DWORD *)(v3 + 48) = v35;
      *(_DWORD *)(v3 + 52) = v36;
      *(_DWORD *)(v3 + 56) = v37;
      *(_DWORD *)(v3 + 60) = v38;
      result = ClientInstance::getGameRenderer(*(ClientInstance **)(v2 + 328));
      __asm { VSTR            S16, [R0,#0x318] }
  }
  else
    *(_QWORD *)v3 = *(_QWORD *)&Matrix::IDENTITY;
    *(_QWORD *)(v3 + 8) = qword_27E89F0;
    *(_QWORD *)(v3 + 16) = qword_27E89F8;
    *(_QWORD *)(v3 + 24) = qword_27E8A00;
    *(_QWORD *)(v3 + 32) = qword_27E8A08;
    *(_DWORD *)(v3 + 40) = unk_27E8A10;
    *(_QWORD *)(v3 + 44) = qword_27E8A14;
    *(float *)(v3 + 52) = unk_27E8A1C;
    *(float *)(v3 + 56) = qword_27E8A20;
    result = *((_DWORD *)&qword_27E8A20 + 1);
    *(float *)(v3 + 60) = *(&qword_27E8A20 + 1);
  return result;
}


int __fastcall InGameRealityModeScreen::_applyDeadbandToJoystickInput(int a1, int a2, int _R2)
{
  Options *v8; // r0@1
  int result; // r0@1

  _R4 = a2;
  __asm
  {
    VMOV.F32        S18, #0.5
    VMOV            S16, R2
  }
  v8 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a1 + 328));
  result = Options::getVRRightStickDeadBand(v8);
    VMOV.F32        S0, S16
    VCMPE.F32       S16, S18
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S18 }
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S16, S0 }
    VLDR            S0, =1.1921e-7
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm
    {
      VLDR            S0, [R4]
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VNEG.F32        S2, S16
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        __asm { VLDR            S0, =0.0 }
        goto LABEL_12;
        VMOV.F32        S2, #1.0
        VADD.F32        S0, S0, S16
    else
        VSUB.F32        S0, S0, S16
      VSUB.F32        S2, S2, S16
      VDIV.F32        S0, S0, S2
LABEL_12:
      VSTR            S0, [R4]
      VLDR            S0, [R4,#4]
LABEL_18:
        __asm { VSTR            S0, [R4,#4] }
        return result;
    goto LABEL_18;
  return result;
}


int __fastcall InGameRealityModeScreen::_prepareCuller(InGameRealityModeScreen *this, mce::Camera *a2, Frustum *a3, Frustum *a4)
{
  InGameRealityModeScreen *v4; // r7@1
  Frustum *v5; // r4@1
  Frustum *v6; // r5@1
  mce::Camera *v7; // r6@1
  mce::Camera *v8; // r1@1
  int result; // r0@3

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( ClientInstance::isRealityFullVRMode(*((ClientInstance **)this + 82)) || !*((_BYTE *)v4 + 440) )
    result = j_j_j__ZN23InGameRealityModeScreen16_prepareVRCullerERN3mce6CameraER7FrustumS4_(v4, v7, v6, v5);
  else
    result = j_j_j__ZN23InGameRealityModeScreen19_prepareFrameCullerERN3mce6CameraER7FrustumS4_(v4, v8, v6, v5);
  return result;
}


void __fastcall InGameRealityModeScreen::~InGameRealityModeScreen(InGameRealityModeScreen *this)
{
  InGameRealityModeScreen::~InGameRealityModeScreen(this);
}
