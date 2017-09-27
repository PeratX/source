

LocalPlayer *__fastcall GameRenderer::tick(GameRenderer *this)
{
  GameRenderer *v1; // r4@1
  LocalPlayer *result; // r0@1
  Entity *v3; // r5@1
  const Dimension *v4; // r0@4
  ClientInstance *v5; // r5@6
  Entity *v6; // r0@6
  ItemInHandRenderer *v7; // r0@7

  v1 = this;
  result = (LocalPlayer *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 33));
  v3 = result;
  if ( result )
  {
    result = (LocalPlayer *)LocalPlayer::getLoadingState(result);
    if ( result == (LocalPlayer *)16 )
    {
      if ( Entity::isRegionValid(v3) == 1 )
      {
        v4 = (const Dimension *)Entity::getDimension(v3);
        GameRenderer::_tickLightTexture(v1, v4, 1.0);
      }
      if ( !ClientInstance::getCameraTargetEntity(*((ClientInstance **)v1 + 33)) )
        v5 = (ClientInstance *)*((_DWORD *)v1 + 33);
        v6 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 33));
        ClientInstance::setCameraTargetEntity(v5, v6);
      ++*((_DWORD *)v1 + 54);
      v7 = (ItemInHandRenderer *)ClientInstance::getItemInHandRenderer(*((ClientInstance **)v1 + 33));
      result = (LocalPlayer *)j_j_j__ZN18ItemInHandRenderer4tickEv(v7);
    }
  }
  return result;
}


int __fastcall GameRenderer::_computeTransitionScreenMat(GameRenderer *this, int a2)
{
  int v2; // r6@1
  GameRenderer *v3; // r4@1
  int v4; // r0@1
  int v5; // r0@1
  __int64 v6; // kr00_8@1
  int v7; // ST10_4@1
  int v8; // ST0C_4@1
  int v9; // ST08_4@1
  __int64 v10; // kr08_8@1
  int v11; // r0@1
  int v12; // r1@1
  int v13; // r2@1
  int v14; // r5@1
  int v15; // r6@1
  int v16; // r7@1
  int v17; // r11@1
  int v18; // r3@1
  int result; // r0@1
  char v20; // [sp+14h] [bp-B4h]@1
  int v21; // [sp+18h] [bp-B0h]@1
  int v22; // [sp+1Ch] [bp-ACh]@1
  __int64 v23; // [sp+20h] [bp-A8h]@1
  __int64 v24; // [sp+28h] [bp-A0h]@1
  int v25; // [sp+30h] [bp-98h]@1
  __int64 v26; // [sp+34h] [bp-94h]@1
  int v27; // [sp+3Ch] [bp-8Ch]@1
  __int64 v28; // [sp+40h] [bp-88h]@1
  __int64 v29; // [sp+48h] [bp-80h]@1
  int v30; // [sp+50h] [bp-78h]@1
  int v31; // [sp+54h] [bp-74h]@1
  int v32; // [sp+58h] [bp-70h]@1
  int v33; // [sp+5Ch] [bp-6Ch]@1
  __int64 v34; // [sp+64h] [bp-64h]@1
  __int64 v35; // [sp+6Ch] [bp-5Ch]@1
  int v36; // [sp+74h] [bp-54h]@1
  int v37; // [sp+78h] [bp-50h]@1
  int v38; // [sp+7Ch] [bp-4Ch]@1
  int v39; // [sp+80h] [bp-48h]@1
  int v40; // [sp+84h] [bp-44h]@1
  int v41; // [sp+88h] [bp-40h]@1
  int v42; // [sp+8Ch] [bp-3Ch]@1
  __int64 v43; // [sp+90h] [bp-38h]@1
  int v44; // [sp+98h] [bp-30h]@1
  int v45; // [sp+9Ch] [bp-2Ch]@1
  int v46; // [sp+A0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a2 + 132));
  HolographicPlatform::getTransform((int)v3, v4, 7, 15, 0);
  _aeabi_memclr8(&v23, 56);
  v23 = *(_QWORD *)&Matrix::IDENTITY;
  v24 = qword_27E89F0;
  v25 = dword_27E89F8;
  v26 = qword_27E89FC;
  v27 = unk_27E8A04;
  v28 = qword_27E8A08;
  v29 = qword_27E8A10;
  v5 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 132));
  HolographicPlatform::getTransformTranslation((int)&v20, v5, 10, 7, 0);
  v30 = *(_DWORD *)&v20;
  v31 = v21;
  v32 = v22;
  v33 = 1065353216;
  glm::detail::operator*<float>((int)&v34, (int)v3, (int)&v23);
  v6 = v35;
  v7 = v46;
  v8 = v45;
  v9 = v44;
  v10 = v43;
  v11 = v36;
  v12 = v37;
  v13 = v38;
  v14 = v39;
  v15 = v40;
  v16 = v41;
  v17 = v42;
  *(_QWORD *)v3 = v34;
  *((_QWORD *)v3 + 1) = v6;
  v18 = (int)v3 + 16;
  *(_DWORD *)v18 = v11;
  *(_DWORD *)(v18 + 4) = v12;
  *(_DWORD *)(v18 + 8) = v13;
  *(_DWORD *)(v18 + 12) = v14;
  *(_DWORD *)(v18 + 16) = v15;
  *(_DWORD *)(v18 + 20) = v16;
  *(_DWORD *)(v18 + 24) = v17;
  *(_QWORD *)((char *)v3 + 44) = v10;
  *((_DWORD *)v3 + 13) = v9;
  *((_DWORD *)v3 + 14) = v8;
  result = v7;
  *((_DWORD *)v3 + 15) = v7;
  return result;
}


int __fastcall GameRenderer::getHoloLevelWidthHeight(GameRenderer *this, float *a2, float *a3)
{
  GameRenderer *v3; // r6@1
  float *v4; // r5@1
  int v5; // r0@2
  int result; // r0@2

  v3 = this;
  v4 = a2;
  if ( ClientInstance::getHolosceneRenderer(*((ClientInstance **)this + 33)) )
  {
    *(_DWORD *)v4 = 0x40000000;
    v5 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 33));
    result = (*(int (**)(void))(*(_DWORD *)v5 + 244))();
    __asm
    {
      VMOV.F32        S0, #2.0
      VMOV            S2, R0
      VDIV.F32        S0, S0, S2
      VSTR            S0, [R4]
    }
  }
  else
    __asm { VMOV.F32        S0, #1.0 }
    result = 1065353216;
    *(_DWORD *)v4 = 1065353216;
    __asm { VSTR            S0, [R4] }
  return result;
}


int __fastcall GameRenderer::getHoloUIWidthHeight(GameRenderer *this, float *a2, float *a3)
{
  GameRenderer *v3; // r6@1
  float *v4; // r5@1
  int v10; // r0@2
  int result; // r0@2

  v3 = this;
  v4 = a2;
  if ( ClientInstance::getHolosceneRenderer(*((ClientInstance **)this + 33)) )
  {
    _R0 = ClientInstance::getHolosceneRenderer(*((ClientInstance **)v3 + 33));
    __asm { VLDR            S16, [R0,#8] }
    v10 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 33));
    _R0 = (*(int (**)(void))(*(_DWORD *)v10 + 240))();
    __asm
    {
      VMOV            S0, R0
      VDIV.F32        S16, S16, S0
    }
    result = ClientInstance::getHolosceneRenderer(*((ClientInstance **)v3 + 33));
      VLDR            S0, [R0,#8]
      VADD.F32        S2, S0, S0
      VADD.F32        S0, S16, S16
      VSTR            S2, [R5]
  }
  else
    result = 1065353216;
    __asm { VMOV.F32        S0, #1.0 }
    *(_DWORD *)v4 = 1065353216;
  __asm { VSTR            S0, [R4] }
  return result;
}


signed int __fastcall GameRenderer::useLowFrequencyUIRender(GameRenderer *this)
{
  GameRenderer *v1; // r4@1
  int v2; // r0@2
  signed int result; // r0@3

  v1 = this;
  if ( *((_BYTE *)this + 224)
    && (v2 = ClientInstance::getHoloInput(*((ClientInstance **)this + 33)), !(*(int (**)(void))(*(_DWORD *)v2 + 44))()) )
  {
    result = ClientInstance::isSplitScreenActive(*((ClientInstance **)v1 + 33));
  }
  else
    result = 0;
  return result;
}


int __fastcall GameRenderer::makeScreenContext(GameRenderer *this, float a2, int _R2)
{
  float v3; // r5@1
  GuiData *v8; // r4@2
  int v15; // ST3C_4@4
  char *v16; // ST34_4@4
  char *v17; // r11@4
  int v18; // r6@4
  int v19; // r10@4
  int v20; // r9@4
  int v21; // r8@4
  char *v22; // r7@4
  char *v23; // r4@4
  int v24; // r0@4
  __int64 v25; // ST00_8@4
  float v27; // [sp+2Ch] [bp-64h]@0
  int v28; // [sp+38h] [bp-58h]@2
  int v29; // [sp+40h] [bp-50h]@2
  GameRenderer *v30; // [sp+44h] [bp-4Ch]@1

  v3 = a2;
  v30 = this;
  __asm { VMOV            S16, R2 }
  if ( ClientInstance::getInput(*(ClientInstance **)(LODWORD(a2) + 132)) )
  {
    v8 = (GuiData *)ClientInstance::getGuiData(*(ClientInstance **)(LODWORD(v3) + 132));
    _R0 = *(_WORD *)(LODWORD(v3) + 220);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S18, S0
    }
    _R0 = GuiData::getInvGuiScale(v8);
    _R1 = *(_WORD *)(LODWORD(v3) + 222);
      VMOV            S22, R0
      VMOV            S0, R1
      VCVT.F32.S32    S20, S0
      VMUL.F32        S2, S18, S22
      VMUL.F32        S0, S20, S0
      VCVTR.S32.F32   S2, S2
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S2
    v28 = _R0;
    __asm { VMOV            R0, S0 }
    v29 = (int)_R0;
  }
  else
    v29 = 0;
    _R0 = 0;
    v28 = 0;
  v15 = mce::RenderContextImmediate::get(_R0);
  v16 = ClientInstance::getCamera(*(ClientInstance **)(LODWORD(v3) + 132));
  v17 = ClientInstance::getViewportInfo(*(ClientInstance **)(LODWORD(v3) + 132));
  v18 = ClientInstance::getGuiData(*(ClientInstance **)(LODWORD(v3) + 132));
  v19 = *(_DWORD *)(LODWORD(v3) + 204);
  v20 = mce::Singleton<mce::GlobalConstantBuffers>::mInstance;
  v21 = mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  v22 = ClientInstance::getShaderColor(*(ClientInstance **)(LODWORD(v3) + 132));
  v23 = ClientInstance::getDarkShaderColor(*(ClientInstance **)(LODWORD(v3) + 132));
  v24 = ClientInstance::getUIProfanityContext(*(ClientInstance **)(LODWORD(v3) + 132));
  __asm { VSTR            S16, [SP,#0x90+var_64] }
  LODWORD(v25) = v18;
  HIDWORD(v25) = LODWORD(v3) + 180;
  return ScreenContext::ScreenContext(
           v30,
           v15,
           (int)v16,
           (int)v17,
           v25,
           v20,
           v21,
           v19,
           (int)v22,
           (int)v23,
           LODWORD(v3) + 4,
           v24,
           v28,
           v29,
           v27);
}


int __fastcall GameRenderer::updatePointerLocation(int result, __int16 a2, __int16 a3)
{
  *(_WORD *)(result + 220) = a2;
  *(_WORD *)(result + 222) = a3;
  return result;
}


void __fastcall GameRenderer::renderInsideCubes(int a1, int a2)
{
  int v2; // r0@1

  v2 = *(_DWORD *)(a1 + 380);
  if ( v2 )
    j_j_j__ZN18InsideCubeRenderer6renderER13ScreenContext(v2, a2);
  else
    JUMPOUT(0, GameRenderer::wasViewInsideSolidBlockLastRender);
}


int __fastcall GameRenderer::_checkAndDrawInputUI(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int result; // r0@1
  Options *v5; // r0@3
  ClientInstance **v6; // r0@5

  v2 = a1;
  v3 = a2;
  result = ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 136));
  if ( result )
  {
    result = ClientInstance::isShowingMenu(*(ClientInstance **)(v2 + 136));
    if ( !result )
    {
      v5 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v2 + 136));
      result = Options::getHideHud(v5);
      if ( !result )
      {
        result = ClientInstance::getInput(*(ClientInstance **)(v2 + 136));
        if ( result )
        {
          v6 = (ClientInstance **)ClientInstance::getInput(*(ClientInstance **)(v2 + 136));
          result = j_j_j__ZN18ClientInputHandler6renderER13ScreenContext(v6, v3);
        }
      }
    }
  }
  return result;
}


int __fastcall GameRenderer::renderCursor(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v7; // r8@1
  unsigned int *v8; // r0@1
  mce::TextureGroup *v9; // r4@3
  char *v10; // r0@3
  char *v11; // r0@4
  void *v16; // r6@6
  GuiData *v17; // r0@6
  char *v18; // r0@6
  unsigned int *v21; // r2@7
  signed int v22; // r1@9
  unsigned int *v23; // r2@11
  signed int v24; // r1@13
  int v25; // [sp+0h] [bp-68h]@0
  int v26; // [sp+28h] [bp-40h]@0
  int v27; // [sp+2Ch] [bp-3Ch]@0
  char *v28; // [sp+30h] [bp-38h]@3
  char *v29; // [sp+34h] [bp-34h]@3
  int v30; // [sp+38h] [bp-30h]@3

  v4 = a1;
  _R7 = a4;
  _R6 = a3;
  v7 = a2;
  v8 = (unsigned int *)LOBYTE(byte_27D1004[0]);
  __dmb();
  if ( !((unsigned __int8)v8 & 1) )
  {
    v8 = (unsigned int *)j___cxa_guard_acquire(byte_27D1004);
    if ( v8 )
    {
      v9 = (mce::TextureGroup *)ClientInstance::getTextures(*(ClientInstance **)(v4 + 136));
      sub_119C884((void **)&v28, "textures/ui/cursor_pc");
      v29 = v28;
      v28 = (char *)&unk_28898CC;
      v30 = 0;
      mce::TexturePtr::TexturePtr((mce::TexturePtr *)&unk_27D1008, v9, (int)&v29, 0);
      v10 = v29 - 12;
      if ( (int *)(v29 - 12) != &dword_28898C0 )
      {
        v21 = (unsigned int *)(v29 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v10);
      }
      v11 = v28 - 12;
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v28 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11);
      _cxa_atexit(mce::TexturePtr::~TexturePtr);
      v8 = j___cxa_guard_release(byte_27D1004);
    }
  }
  __asm
    VMOV            S16, R7
    VMOV            S18, R6
  v16 = ScreenRenderer::singleton((ScreenRenderer *)v8);
  v17 = (GuiData *)ClientInstance::getGuiData(*(ClientInstance **)(v4 + 136));
    VMOV.F32        S0, #-1.0
    VADD.F32        S16, S16, S0
    VADD.F32        S18, S18, S0
  v18 = GuiData::getCursorMat(v17);
    VCVTR.S32.F32   S0, S16
    VCVTR.S32.F32   S2, S18
    VSTR            S0, [SP,#0x68+var_68]
    VMOV            R3, S2
  return ScreenRenderer::blit(
           (int)v16,
           v7,
           (int)&unk_27D1008,
           _R3,
           v25,
           0,
           12884901888LL,
           3LL,
           0.0,
           *(float *)&v18,
           (void *)0x3EAAAAAB,
           1051372203,
           v26,
           v27,
           (int)v28);
}


int __fastcall GameRenderer::_computeViewForSleeping(GameRenderer *this, int a2)
{
  GameRenderer *v3; // r4@1
  int result; // r0@1
  int v15; // [sp+0h] [bp-170h]@1
  int v16; // [sp+4h] [bp-16Ch]@1
  int v17; // [sp+8h] [bp-168h]@1
  int v18; // [sp+Ch] [bp-164h]@1
  int v19; // [sp+10h] [bp-160h]@1
  int v20; // [sp+14h] [bp-15Ch]@1
  int v21; // [sp+18h] [bp-158h]@1
  int v22; // [sp+1Ch] [bp-154h]@1
  int v23; // [sp+20h] [bp-150h]@1
  int v24; // [sp+24h] [bp-14Ch]@1
  int v25; // [sp+28h] [bp-148h]@1
  int v26; // [sp+2Ch] [bp-144h]@1
  int v27; // [sp+30h] [bp-140h]@1
  int v28; // [sp+34h] [bp-13Ch]@1
  int v29; // [sp+38h] [bp-138h]@1
  int v30; // [sp+3Ch] [bp-134h]@1
  __int64 v31; // [sp+40h] [bp-130h]@1
  __int64 v32; // [sp+48h] [bp-128h]@1
  int v33; // [sp+50h] [bp-120h]@1
  __int64 v34; // [sp+54h] [bp-11Ch]@1
  int v35; // [sp+5Ch] [bp-114h]@1
  __int64 v36; // [sp+60h] [bp-110h]@1
  __int64 v37; // [sp+68h] [bp-108h]@1
  int v38; // [sp+80h] [bp-F0h]@1
  int v39; // [sp+84h] [bp-ECh]@1
  int v40; // [sp+88h] [bp-E8h]@1
  int v41; // [sp+8Ch] [bp-E4h]@1
  int v42; // [sp+90h] [bp-E0h]@1
  int v43; // [sp+94h] [bp-DCh]@1
  int v44; // [sp+98h] [bp-D8h]@1
  int v45; // [sp+9Ch] [bp-D4h]@1
  int v46; // [sp+A0h] [bp-D0h]@1
  int v47; // [sp+A4h] [bp-CCh]@1
  int v48; // [sp+A8h] [bp-C8h]@1
  int v49; // [sp+ACh] [bp-C4h]@1
  int v50; // [sp+B0h] [bp-C0h]@1
  int v51; // [sp+B4h] [bp-BCh]@1
  int v52; // [sp+B8h] [bp-B8h]@1
  int v53; // [sp+BCh] [bp-B4h]@1
  float v54; // [sp+C0h] [bp-B0h]@1
  int v55; // [sp+D0h] [bp-A0h]@1
  __int64 v56; // [sp+D4h] [bp-9Ch]@1
  int v57; // [sp+DCh] [bp-94h]@1
  __int64 v58; // [sp+F0h] [bp-80h]@1
  __int64 v59; // [sp+F8h] [bp-78h]@1
  int v60; // [sp+100h] [bp-70h]@1
  int v61; // [sp+104h] [bp-6Ch]@1
  int v62; // [sp+108h] [bp-68h]@1
  int v63; // [sp+10Ch] [bp-64h]@1
  int v64; // [sp+110h] [bp-60h]@1
  int v65; // [sp+114h] [bp-5Ch]@1
  int v66; // [sp+118h] [bp-58h]@1
  int v67; // [sp+11Ch] [bp-54h]@1
  int v68; // [sp+120h] [bp-50h]@1
  int v69; // [sp+124h] [bp-4Ch]@1
  int v70; // [sp+128h] [bp-48h]@1
  int v71; // [sp+12Ch] [bp-44h]@1
  int v72; // [sp+130h] [bp-40h]@1
  int v73; // [sp+134h] [bp-3Ch]@1
  int v74; // [sp+138h] [bp-38h]@1
  int v75; // [sp+13Ch] [bp-34h]@1

  _R7 = a2;
  v3 = this;
  _aeabi_memclr8(&v54, 56);
  __asm
  {
    VLDR            S0, =0.017453
    VLDR            S2, [R7,#0x328]
    VMUL.F32        S0, S2, S0
    VMOV            R6, S0
  }
  _R5 = cosf(_R6);
  _R0 = sinf(_R6);
    VMOV            S2, R0
    VMOV            S6, R5
  _R6 = &Matrix::IDENTITY;
    VLDR            S0, [R6,#0x24]
    VLDR            S4, [R6,#0x20]
    VLDR            S8, [R6]
    VMUL.F32        S1, S0, S2
    VLDR            S10, [R6,#4]
    VMUL.F32        S3, S4, S2
    VMUL.F32        S9, S8, S6
    VLDR            S12, [R6,#8]
    VMUL.F32        S7, S10, S6
    VLDR            S14, [R6,#0xC]
    VLDR            S5, [R6,#0x28]
    VMUL.F32        S15, S12, S6
    VLDR            S11, [R6,#0x2C]
    VMUL.F32        S18, S14, S6
    VMUL.F32        S13, S5, S2
    VMUL.F32        S16, S11, S2
    VMUL.F32        S8, S8, S2
    VSUB.F32        S3, S9, S3
    VSUB.F32        S1, S7, S1
    VMUL.F32        S4, S4, S6
    VMUL.F32        S10, S10, S2
    VMUL.F32        S0, S0, S6
    VMUL.F32        S12, S12, S2
    VMUL.F32        S2, S14, S2
    VSTR            S3, [SP,#0x170+var_B0]
    VSUB.F32        S7, S15, S13
    VSTR            S1, [SP,#0x170+var_AC]
    VMUL.F32        S1, S5, S6
    VMUL.F32        S6, S11, S6
    VSUB.F32        S9, S18, S16
    VADD.F32        S4, S4, S8
    VADD.F32        S0, S0, S10
    VSTR            S7, [SP,#0x170+var_A8]
    VADD.F32        S8, S1, S12
    VADD.F32        S2, S6, S2
    VSTR            S9, [SP,#0x170+var_A4]
  v55 = dword_27E89F8;
  v56 = qword_27E89FC;
  v57 = unk_27E8A04;
    VSTR            S4, [SP,#0x170+var_90]
    VSTR            S0, [SP,#0x170+var_8C]
    VSTR            S8, [SP,#0x170+var_88]
    VSTR            S2, [SP,#0x170+var_84]
  v58 = *(_QWORD *)&qword_27E8A18;
  v59 = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr8(&v38, 56);
  v38 = *(_DWORD *)(_R7 + 392);
  v39 = *(_DWORD *)(_R7 + 396);
  v40 = *(_DWORD *)(_R7 + 400);
  v41 = *(_DWORD *)(_R7 + 404);
  v42 = *(_DWORD *)(_R7 + 408);
  v43 = *(_DWORD *)(_R7 + 412);
  v44 = *(_DWORD *)(_R7 + 416);
  v45 = *(_DWORD *)(_R7 + 420);
  v46 = *(_DWORD *)(_R7 + 424);
  v47 = *(_DWORD *)(_R7 + 428);
  v48 = *(_DWORD *)(_R7 + 432);
  v49 = *(_DWORD *)(_R7 + 436);
  v53 = *(_DWORD *)(_R7 + 452);
  v50 = 0;
  v51 = 0;
  v52 = 0;
  _aeabi_memclr8(&v31, 56);
  v31 = *(_QWORD *)&Matrix::IDENTITY;
  v32 = qword_27E89F0;
  v33 = dword_27E89F8;
  v34 = qword_27E89FC;
  v35 = unk_27E8A04;
  _R1 = HIDWORD(qword_27E8A08);
  v36 = qword_27E8A08;
  __asm { VMOV            S2, R0 }
  LODWORD(_R0) = qword_27E8A10;
  __asm { VMOV            S4, R1 }
  HIDWORD(_R0) = HIDWORD(qword_27E8A10);
    VLDR            S0, =0.2
    VMOV            S6, R0
    VLDR            S10, [R6,#0x34]
    VMOV            S8, R1
    VLDR            S12, [R6,#0x38]
    VMUL.F32        S4, S4, S0
    VLDR            S14, [R6,#0x3C]
    VMUL.F32        S6, S6, S0
  v37 = _R0;
    VMUL.F32        S2, S2, S0
    VMUL.F32        S0, S8, S0
    VLDR            S8, [R6,#0x30]
    VADD.F32        S4, S10, S4
    VADD.F32        S6, S12, S6
    VADD.F32        S2, S8, S2
    VADD.F32        S0, S14, S0
    VSTR            S2, [SP,#0x170+var_100]
    VSTR            S4, [SP,#0x170+var_FC]
    VSTR            S6, [SP,#0x170+var_F8]
    VSTR            S0, [SP,#0x170+var_F4]
  glm::detail::operator*<float>((int)&v60, (int)&v31, (int)&v54);
  _aeabi_memclr8(&v15, 56);
  v15 = v60;
  v16 = v61;
  v17 = v62;
  v18 = v63;
  v19 = v64;
  v20 = v65;
  v21 = v66;
  v22 = v67;
  v23 = v68;
  v24 = v69;
  v25 = v70;
  v26 = v71;
  v27 = v72;
  v28 = v73;
  v29 = v74;
  v30 = v75;
  glm::detail::operator*<float>((int)&v60, (int)&v15, (int)&v38);
  _aeabi_memclr4(v3, 56);
  *(_DWORD *)v3 = v60;
  *((_DWORD *)v3 + 1) = v61;
  *((_DWORD *)v3 + 2) = v62;
  *((_DWORD *)v3 + 3) = v63;
  *((_DWORD *)v3 + 4) = v64;
  *((_DWORD *)v3 + 5) = v65;
  *((_DWORD *)v3 + 6) = v66;
  *((_DWORD *)v3 + 7) = v67;
  *((_DWORD *)v3 + 8) = v68;
  *((_DWORD *)v3 + 9) = v69;
  *((_DWORD *)v3 + 10) = v70;
  *((_DWORD *)v3 + 11) = v71;
  *((_DWORD *)v3 + 12) = v72;
  *((_DWORD *)v3 + 13) = v73;
  *((_DWORD *)v3 + 14) = v74;
  result = v75;
  *((_DWORD *)v3 + 15) = v75;
  return result;
}


signed int __fastcall GameRenderer::_getUItoPoseSource(GameRenderer *this)
{
  GameRenderer *v1; // r4@1
  int v2; // r0@1
  signed int result; // r0@2
  Options *v4; // r0@13

  v1 = this;
  v2 = ClientInstance::getHoloInput(*((ClientInstance **)this + 33));
  if ( (*(int (**)(void))(*(_DWORD *)v2 + 44))() == 1 )
  {
    if ( ClientInstance::getLevel(*((ClientInstance **)v1 + 33)) )
    {
      if ( ClientInstance::isLivingroomMode(*((ClientInstance **)v1 + 33)) )
      {
        result = 2;
      }
      else if ( ClientInstance::isHoloRealityMode(*((ClientInstance **)v1 + 33)) == 1
             && ClientInstance::isVRTransitioning(*((ClientInstance **)v1 + 33)) )
        result = 3;
      else if ( ClientInstance::isRealityFullVRMode(*((ClientInstance **)v1 + 33)) == 1 )
        if ( ClientInstance::isShowingMenu(*((ClientInstance **)v1 + 33)) )
        {
          result = 4;
        }
        else
          v4 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 33));
          if ( Options::getVRHandControlsHUD(v4) == 1
            && *(_BYTE *)(ClientInstance::getHoloInput(*((ClientInstance **)v1 + 33)) + 660) )
          {
            result = 6;
          }
          else
            result = 5;
      else
        result = *((_DWORD *)v1 + 204);
    }
    else
      result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall GameRenderer::createRenderGraph(GameRenderer *this, int a2)
{
  GameRenderer *v2; // r10@1
  unsigned __int64 *v3; // r8@1
  int v4; // r4@1
  mce::RenderContext *v6; // r0@1
  mce::RenderContext *v7; // r9@1
  int v8; // r2@3
  ClientInstance *v9; // r6@3
  TickingTextureStage *v10; // r4@3
  int v11; // r0@5
  int v12; // r0@6
  int v13; // r2@6
  int result; // r0@6
  void *v19; // r7@8
  int v20; // r0@11
  ClientInstance *v21; // r4@13
  UIRenderStageWithFrameBufferObjects *v22; // r0@13
  int v23; // r6@13
  mce::RenderContextImmediate *v24; // r0@13
  mce::RenderContext *v25; // r4@13
  char *v26; // r0@13
  ClientInstance *v27; // r4@16
  DefaultUIRendererCompositorStage *v28; // r5@16
  ClientInstance *v29; // r4@19
  DefaultGameRendererCompositorStage *v30; // r6@19
  int v31; // r0@22
  ClientInstance *v32; // r4@24
  UIRenderStageWithFrameBufferObjects *v33; // r0@24
  int v34; // r6@24
  mce::RenderContextImmediate *v35; // r0@24
  mce::RenderContext *v36; // r4@24
  char *v37; // r0@24
  ClientInstance *v38; // r4@27
  DefaultUIRendererCompositorStage *v39; // r5@27
  DefaultUIRendererCompositorStage *v40; // [sp+0h] [bp-98h]@27
  int v41; // [sp+4h] [bp-94h]@24
  DefaultGameRendererCompositorStage *v42; // [sp+8h] [bp-90h]@19
  DefaultUIRendererCompositorStage *v43; // [sp+Ch] [bp-8Ch]@16
  int v44; // [sp+10h] [bp-88h]@13
  void *v45; // [sp+14h] [bp-84h]@8
  char v46; // [sp+18h] [bp-80h]@7
  int v47; // [sp+38h] [bp-60h]@7
  int v48; // [sp+58h] [bp-40h]@7
  TickingTextureStage *v49; // [sp+6Ch] [bp-2Ch]@3
  char v50; // [sp+70h] [bp-28h]@3

  v2 = this;
  v3 = (unsigned __int64 *)((char *)this + 140);
  v4 = a2;
  mce::RenderGraph::clearRenderGraph((GameRenderer *)((char *)this + 140));
  _R5 = mce::Singleton<mce::RendererSettings>::mInstance;
  v6 = (mce::RenderContext *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)&mce::Singleton<mce::RendererSettings>::mInstance);
  v7 = v6;
  if ( !v4 )
    mce::RenderContext::flush(v6);
  v8 = *(_DWORD *)(_R5 + 4);
  mce::RenderDevice::getClosestSupportedSampleDescription((int)&v50);
  *(_QWORD *)(_R5 + 12) = *(_QWORD *)&v50;
  v9 = (ClientInstance *)*((_DWORD *)v2 + 34);
  v10 = (TickingTextureStage *)operator new(0x10Cu);
  TickingTextureStage::TickingTextureStage(v10, v9);
  *((_DWORD *)v2 + 52) = v10;
  v49 = v10;
  mce::RenderGraph::addRenderStage(v3, 0, (int *)&v49);
  if ( v49 )
    (*(void (**)(void))(*(_DWORD *)v49 + 4))();
  v49 = 0;
  v11 = ClientInstance::getHoloInput(*((ClientInstance **)v2 + 34));
  if ( (*(int (**)(void))(*(_DWORD *)v11 + 44))() == 1 )
  {
    v12 = ClientInstance::getHoloInput(*((ClientInstance **)v2 + 34));
    v13 = *((_DWORD *)v2 + 34);
    result = (*(int (**)(void))(*(_DWORD *)v12 + 116))();
  }
  else
    mce::FrameBufferDescription::FrameBufferDescription((mce::FrameBufferDescription *)&v48);
    *(_QWORD *)&v48 = *(_QWORD *)(_R5 + 12);
    __asm
    {
      VLDR            S0, [R5,#0x14]
      VCVTR.U32.F32   S0, S0
      VSTR            S0, [SP,#0x98+var_38]
      VLDR            S0, [R5,#0x18]
      VSTR            S0, [SP,#0x98+var_34]
    }
    mce::FrameBufferAttachmentDescription::FrameBufferAttachmentDescription((mce::FrameBufferAttachmentDescription *)&v46);
    v47 = 0;
    if ( v48 < 2 )
      v29 = (ClientInstance *)*((_DWORD *)v2 + 34);
      v30 = (DefaultGameRendererCompositorStage *)operator new(0x20u);
      DefaultGameRendererCompositorStage::DefaultGameRendererCompositorStage(v30, v29);
      v42 = v30;
      mce::RenderGraph::addRenderStage(v3, 55, (int *)&v42);
      if ( v42 )
        (*(void (**)(void))(*(_DWORD *)v42 + 4))();
      v42 = 0;
      if ( *((_BYTE *)v2 + 224) )
      {
        v31 = ClientInstance::getHoloInput(*((ClientInstance **)v2 + 33));
        if ( !(*(int (**)(void))(*(_DWORD *)v31 + 44))()
          && ClientInstance::isSplitScreenActive(*((ClientInstance **)v2 + 33)) == 1 )
        {
          v32 = (ClientInstance *)*((_DWORD *)v2 + 34);
          v33 = (UIRenderStageWithFrameBufferObjects *)operator new(0x2Cu);
          v34 = (int)v33;
          v35 = (mce::RenderContextImmediate *)UIRenderStageWithFrameBufferObjects::UIRenderStageWithFrameBufferObjects(
                                                 v33,
                                                 v32);
          v36 = (mce::RenderContext *)mce::RenderContextImmediate::get(v35);
          v37 = ClientInstance::getViewportInfo(*((ClientInstance **)v2 + 34));
          UIRenderStageWithFrameBufferObjects::initStage(v34, v36, (int)v37);
          v41 = v34;
          mce::RenderGraph::addRenderStage(v3, 8, &v41);
          if ( v41 )
            (*(void (**)(void))(*(_DWORD *)v41 + 4))();
          v41 = 0;
        }
      }
      v38 = (ClientInstance *)*((_DWORD *)v2 + 34);
      v39 = (DefaultUIRendererCompositorStage *)operator new(0x98u);
      DefaultUIRendererCompositorStage::DefaultUIRendererCompositorStage(v39, v38);
      v40 = v39;
      *((_BYTE *)v39 + 28) = 1;
      mce::RenderGraph::addRenderStage(v3, 64, (int *)&v40);
      if ( v40 )
        (*(void (**)(void))(*(_DWORD *)v40 + 4))();
      result = 0;
    else
      v19 = operator new(0xF0u);
      MultisampledGameRenderStageWithFrameBufferObject::MultisampledGameRenderStageWithFrameBufferObject((MultisampledGameRenderStageWithFrameBufferObject *)v19);
      mce::FrameBufferObject::createFrameBuffer(
        (mce::FrameBufferObject *)((char *)v19 + 28),
        v7,
        (const mce::FrameBufferDescription *)&v48);
      v47 = 32;
      mce::FrameBufferAttachmentDescription::setTextureFormatAndAttachmentType((int)&v46, *(_DWORD *)(_R5 + 4));
      mce::FrameBufferObject::createFrameBufferAttachmentAndTexture(
        (const mce::FrameBufferAttachmentDescription *)&v46,
        (GameRenderer *)((char *)v2 + 4));
      v47 = 64;
      mce::FrameBufferAttachmentDescription::setTextureFormatAndAttachmentType((int)&v46, 45);
        (GameRenderer *)((char *)v2 + 68));
      mce::FrameBufferObject::finalizeFrameBuffer((mce::FrameBufferObject *)((char *)v19 + 28));
      v45 = v19;
      mce::RenderGraph::addRenderStage(v3, 55, (int *)&v45);
      if ( v45 )
        (*(void (**)(void))(*(_DWORD *)v45 + 4))();
      v45 = 0;
        v20 = ClientInstance::getHoloInput(*((ClientInstance **)v2 + 33));
        if ( !(*(int (**)(void))(*(_DWORD *)v20 + 44))()
          v21 = (ClientInstance *)*((_DWORD *)v2 + 34);
          v22 = (UIRenderStageWithFrameBufferObjects *)operator new(0x2Cu);
          v23 = (int)v22;
          v24 = (mce::RenderContextImmediate *)UIRenderStageWithFrameBufferObjects::UIRenderStageWithFrameBufferObjects(
                                                 v22,
                                                 v21);
          v25 = (mce::RenderContext *)mce::RenderContextImmediate::get(v24);
          v26 = ClientInstance::getViewportInfo(*((ClientInstance **)v2 + 34));
          UIRenderStageWithFrameBufferObjects::initStage(v23, v25, (int)v26);
          v44 = v23;
          mce::RenderGraph::addRenderStage(v3, 8, &v44);
          if ( v44 )
            (*(void (**)(void))(*(_DWORD *)v44 + 4))();
          v44 = 0;
      v27 = (ClientInstance *)*((_DWORD *)v2 + 34);
      v28 = (DefaultUIRendererCompositorStage *)operator new(0x98u);
      DefaultUIRendererCompositorStage::DefaultUIRendererCompositorStage(v28, v27);
      v43 = v28;
      *((_BYTE *)v28 + 28) = 1;
      mce::RenderGraph::addRenderStage(v3, 64, (int *)&v43);
      if ( v43 )
        (*(void (**)(void))(*(_DWORD *)v43 + 4))();
      v43 = 0;
  return result;
}


int __fastcall GameRenderer::_getLeftHandHUDMatrixPatch(GameRenderer *this, int a2)
{
  GameRenderer *v2; // r4@1
  int v3; // r0@1
  int v11; // ST00_4@1
  int v14; // ST24_4@1
  __int64 v16; // ST0C_8@1
  int v18; // ST20_4@1
  int v19; // ST1C_4@1
  int v20; // ST18_4@1
  int v21; // ST14_4@1
  int result; // r0@1
  int v23; // [sp+28h] [bp-190h]@1
  int v24; // [sp+2Ch] [bp-18Ch]@1
  int v25; // [sp+30h] [bp-188h]@1
  int v26; // [sp+34h] [bp-184h]@1
  int v27; // [sp+38h] [bp-180h]@1
  int v28; // [sp+3Ch] [bp-17Ch]@1
  int v29; // [sp+40h] [bp-178h]@1
  int v30; // [sp+44h] [bp-174h]@1
  int v31; // [sp+48h] [bp-170h]@1
  int v32; // [sp+4Ch] [bp-16Ch]@1
  int v33; // [sp+50h] [bp-168h]@1
  int v34; // [sp+54h] [bp-164h]@1
  int v35; // [sp+58h] [bp-160h]@1
  int v36; // [sp+5Ch] [bp-15Ch]@1
  int v37; // [sp+60h] [bp-158h]@1
  int v38; // [sp+64h] [bp-154h]@1
  float v39; // [sp+68h] [bp-150h]@1
  __int64 v40; // [sp+98h] [bp-120h]@1
  __int64 v41; // [sp+A0h] [bp-118h]@1
  int v42; // [sp+A8h] [bp-110h]@1
  int v43; // [sp+ACh] [bp-10Ch]@1
  __int64 v44; // [sp+B0h] [bp-108h]@1
  int v45; // [sp+B8h] [bp-100h]@1
  __int64 v46; // [sp+BCh] [bp-FCh]@1
  int v47; // [sp+C4h] [bp-F4h]@1
  int v48; // [sp+C8h] [bp-F0h]@1
  int v49; // [sp+CCh] [bp-ECh]@1
  int v50; // [sp+D0h] [bp-E8h]@1
  int v51; // [sp+D4h] [bp-E4h]@1
  float v52; // [sp+E8h] [bp-D0h]@1
  __int64 v53; // [sp+108h] [bp-B0h]@1
  __int64 v54; // [sp+110h] [bp-A8h]@1
  __int64 v55; // [sp+118h] [bp-A0h]@1
  __int64 v56; // [sp+120h] [bp-98h]@1
  int v57; // [sp+128h] [bp-90h]@1
  int v58; // [sp+12Ch] [bp-8Ch]@1
  int v59; // [sp+130h] [bp-88h]@1
  int v60; // [sp+134h] [bp-84h]@1
  int v61; // [sp+138h] [bp-80h]@1
  int v62; // [sp+13Ch] [bp-7Ch]@1
  int v63; // [sp+140h] [bp-78h]@1
  int v64; // [sp+144h] [bp-74h]@1
  int v65; // [sp+148h] [bp-70h]@1
  int v66; // [sp+14Ch] [bp-6Ch]@1
  int v67; // [sp+150h] [bp-68h]@1
  int v68; // [sp+154h] [bp-64h]@1
  int v69; // [sp+158h] [bp-60h]@1
  int v70; // [sp+15Ch] [bp-5Ch]@1
  int v71; // [sp+160h] [bp-58h]@1
  int v72; // [sp+164h] [bp-54h]@1

  v2 = this;
  v3 = ClientInstance::getHoloInput(*(ClientInstance **)(a2 + 132));
  _R6 = (*(int (**)(void))(*(_DWORD *)v3 + 240))();
  _aeabi_memclr8(&v52, 60);
  __asm
  {
    VLDR            S0, =0.7
    VMOV            S2, R6
    VDIV.F32        S16, S0, S2
  }
  _R5 = &Matrix::IDENTITY;
  _KR00_8 = *(_QWORD *)&Matrix::IDENTITY;
  v11 = *(&Matrix::IDENTITY + 1);
  _KR08_8 = qword_27E89F0;
  _R10 = dword_27E89F8;
  v14 = unk_27E8A04;
  _R8 = *(_QWORD *)&qword_27E8A20;
  v16 = qword_27E89FC;
    VMOV.F32        S0, #-0.5
    VLDR            S2, =0.35
    VMOV            S8, R6
  _R6 = *(_QWORD *)&qword_27E8A18;
    VMOV            S6, R11
    VMOV            S10, R3
    VMOV            S18, R0
    VMOV            S20, R1
  v18 = qword_27E8A08;
  __asm { VMOV            S4, R7 }
  v53 = qword_27E8A08;
    VMUL.F32        S0, S16, S0
    VMOV            S22, R2
  v19 = HIDWORD(qword_27E8A08);
    VMOV            S24, R10
    VMUL.F32        S8, S8, S2
    VMUL.F32        S10, S10, S2
  v20 = qword_27E8A10;
  __asm { VMUL.F32        S6, S6, S2 }
  v54 = qword_27E8A10;
    VMUL.F32        S2, S4, S2
    VMUL.F32        S4, S24, S0
    VMUL.F32        S12, S22, S0
  v21 = HIDWORD(qword_27E8A10);
    VMUL.F32        S14, S20, S0
    VMUL.F32        S0, S18, S0
  v55 = *(_QWORD *)&qword_27E8A18;
  v56 = *(_QWORD *)&qword_27E8A20;
    VSTR            S6, [SP,#0x1B8+var_D0]
    VSTR            S10, [SP,#0x1B8+var_CC]
    VSTR            S2, [SP,#0x1B8+var_C8]
    VSTR            S8, [SP,#0x1B8+var_C4]
    VSTR            S4, [SP,#0x1B8+var_C0]
    VSTR            S12, [SP,#0x1B8+var_BC]
    VSTR            S14, [SP,#0x1B8+var_B8]
    VSTR            S0, [SP,#0x1B8+var_B4]
  _aeabi_memclr8(&v42, 56);
  __asm { VMOV.F32        S8, #0.5 }
  v42 = _KR00_8;
  __asm { VMOV            S2, R7 }
  v43 = v11;
    VMOV            S0, R8
    VMOV            S4, R9
  v44 = _KR08_8;
  __asm { VMOV            S6, R6 }
  v45 = _R10;
  __asm { VMUL.F32        S8, S16, S8 }
  v46 = v16;
  v47 = v14;
  __asm { VMUL.F32        S10, S24, S8 }
  v48 = v18;
    VMUL.F32        S12, S18, S8
    VMUL.F32        S14, S22, S8
  v49 = v19;
  __asm { VMUL.F32        S8, S20, S8 }
  v50 = v20;
  v51 = v21;
    VADD.F32        S6, S6, S10
    VADD.F32        S4, S4, S12
    VADD.F32        S2, S2, S14
    VADD.F32        S0, S0, S8
    VSTR            S6, [SP,#0x1B8+var_E0]
    VSTR            S2, [SP,#0x1B8+var_DC]
    VSTR            S0, [SP,#0x1B8+var_D8]
    VSTR            S4, [SP,#0x1B8+var_D4]
  _aeabi_memclr8(&v39, 52);
    VLDR            S0, =0.34202
    VLDR            S4, [R5,#4]
    VLDR            S8, [R5,#0xC]
    VLDR            S10, =-0.93969
    VMUL.F32        S18, S4, S0
    VLDR            S14, [R5,#0x2C]
    VMUL.F32        S5, S8, S0
    VLDR            S3, [R5,#0x28]
    VLDR            S11, [R5,#0x20]
    VMUL.F32        S9, S14, S10
    VLDR            S16, [R5,#0x24]
    VMUL.F32        S13, S3, S10
    VMUL.F32        S15, S11, S10
    VLDR            S2, [R5]
    VMUL.F32        S10, S16, S10
    VLDR            S6, [R5,#8]
    VMUL.F32        S1, S2, S0
    VLDR            S7, =0.93969
    VMUL.F32        S12, S6, S0
    VLDR            S22, [R5,#0x10]
    VMUL.F32        S11, S11, S0
    VSUB.F32        S5, S9, S5
    VMUL.F32        S9, S16, S0
    VMUL.F32        S3, S3, S0
    VMUL.F32        S6, S6, S7
    VMUL.F32        S0, S14, S0
    VLDR            S14, =0.25882
    VMUL.F32        S8, S8, S7
    VSUB.F32        S10, S10, S18
    VLDR            S18, [R5,#0x18]
    VMUL.F32        S2, S2, S7
    VMUL.F32        S4, S4, S7
    VLDR            S7, =0.96593
    VSUB.F32        S12, S13, S12
    VLDR            S13, [R5,#0x14]
    VSUB.F32        S1, S15, S1
    VSUB.F32        S6, S3, S6
    VSUB.F32        S0, S0, S8
    VMUL.F32        S3, S10, S7
    VMUL.F32        S8, S10, S14
    VLDR            S10, [R5,#0x1C]
    VSUB.F32        S2, S11, S2
    VMUL.F32        S11, S5, S14
    VSUB.F32        S4, S9, S4
    VMUL.F32        S9, S1, S7
    VMUL.F32        S15, S13, S14
    VMUL.F32        S16, S12, S14
    VMUL.F32        S20, S18, S14
    VMUL.F32        S24, S10, S14
    VSTR            S2, [SP,#0x1B8+var_150]
    VMUL.F32        S1, S1, S14
    VMUL.F32        S14, S22, S14
    VSTR            S4, [SP,#0x1B8+var_14C]
    VMUL.F32        S10, S10, S7
    VSTR            S6, [SP,#0x1B8+var_148]
    VMUL.F32        S13, S13, S7
    VSTR            S0, [SP,#0x1B8+var_144]
    VMUL.F32        S22, S22, S7
    VMUL.F32        S12, S12, S7
    VMUL.F32        S5, S5, S7
    VMUL.F32        S18, S18, S7
    VADD.F32        S4, S9, S14
    VSUB.F32        S2, S10, S11
    VSUB.F32        S8, S13, S8
    VSUB.F32        S1, S22, S1
    VADD.F32        S6, S3, S15
    VADD.F32        S0, S12, S20
    VSUB.F32        S7, S18, S16
    VADD.F32        S10, S5, S24
    VSTR            S1, [SP,#0x1B8+var_140]
    VSTR            S8, [SP,#0x1B8+var_13C]
    VSTR            S7, [SP,#0x1B8+var_138]
    VSTR            S2, [SP,#0x1B8+var_134]
    VSTR            S4, [SP,#0x1B8+var_130]
    VSTR            S6, [SP,#0x1B8+var_12C]
    VSTR            S0, [SP,#0x1B8+var_128]
    VSTR            S10, [SP,#0x1B8+var_124]
  v40 = *(_QWORD *)&qword_27E8A18;
  v41 = *(_QWORD *)&qword_27E8A20;
  glm::detail::operator*<float>((int)&v57, (int)&v39, (int)&v42);
  _aeabi_memclr8(&v23, 56);
  v23 = v57;
  v24 = v58;
  v25 = v59;
  v26 = v60;
  v27 = v61;
  v28 = v62;
  v29 = v63;
  v30 = v64;
  v31 = v65;
  v32 = v66;
  v33 = v67;
  v34 = v68;
  v35 = v69;
  v36 = v70;
  v37 = v71;
  v38 = v72;
  glm::detail::operator*<float>((int)&v57, (int)&v23, (int)&v52);
  _aeabi_memclr4(v2, 56);
  *(_DWORD *)v2 = v57;
  *((_DWORD *)v2 + 1) = v58;
  *((_DWORD *)v2 + 2) = v59;
  *((_DWORD *)v2 + 3) = v60;
  *((_DWORD *)v2 + 4) = v61;
  *((_DWORD *)v2 + 5) = v62;
  *((_DWORD *)v2 + 6) = v63;
  *((_DWORD *)v2 + 7) = v64;
  *((_DWORD *)v2 + 8) = v65;
  *((_DWORD *)v2 + 9) = v66;
  *((_DWORD *)v2 + 10) = v67;
  *((_DWORD *)v2 + 11) = v68;
  *((_DWORD *)v2 + 12) = v69;
  *((_DWORD *)v2 + 13) = v70;
  *((_DWORD *)v2 + 14) = v71;
  result = v72;
  *((_DWORD *)v2 + 15) = v72;
  return result;
}


int __fastcall GameRenderer::adjustVRRotationSmoothTurningMode(int result, float _R1)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#0x310]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0,#0x310]
  }
  return result;
}


int __fastcall GameRenderer::setUITexture(GameRenderer *this, const unsigned __int8 *a2, mce::Texture *a3)
{
  mce::Texture *v3; // r4@1
  const unsigned __int8 *v4; // r5@1
  MinecraftGame *v5; // r0@1
  ClientInstance *v6; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)this + 33));
  v6 = (ClientInstance *)MinecraftGame::getClientInstance(v5, *v4);
  return j_j_j__ZN14ClientInstance12setUITextureEPN3mce7TextureE(v6, v3);
}


int __fastcall GameRenderer::_computeRealityAugmentationMatrix(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v9; // r0@1
  int result; // r0@1
  int v12; // [sp+8h] [bp-E0h]@1
  int v13; // [sp+Ch] [bp-DCh]@1
  int v14; // [sp+10h] [bp-D8h]@1
  int v15; // [sp+14h] [bp-D4h]@1
  int v16; // [sp+18h] [bp-D0h]@1
  int v17; // [sp+1Ch] [bp-CCh]@1
  int v18; // [sp+20h] [bp-C8h]@1
  int v19; // [sp+24h] [bp-C4h]@1
  int v20; // [sp+28h] [bp-C0h]@1
  int v21; // [sp+2Ch] [bp-BCh]@1
  int v22; // [sp+30h] [bp-B8h]@1
  int v23; // [sp+34h] [bp-B4h]@1
  int v24; // [sp+38h] [bp-B0h]@1
  int v25; // [sp+3Ch] [bp-ACh]@1
  int v26; // [sp+40h] [bp-A8h]@1
  int v27; // [sp+44h] [bp-A4h]@1
  int v28; // [sp+48h] [bp-A0h]@1
  int v29; // [sp+4Ch] [bp-9Ch]@1
  int v30; // [sp+50h] [bp-98h]@1
  int v31; // [sp+54h] [bp-94h]@1
  int v32; // [sp+58h] [bp-90h]@1
  int v33; // [sp+5Ch] [bp-8Ch]@1
  int v34; // [sp+60h] [bp-88h]@1
  int v35; // [sp+64h] [bp-84h]@1
  int v36; // [sp+68h] [bp-80h]@1
  int v37; // [sp+6Ch] [bp-7Ch]@1
  int v38; // [sp+70h] [bp-78h]@1
  int v39; // [sp+74h] [bp-74h]@1
  int v40; // [sp+78h] [bp-70h]@1
  int v41; // [sp+7Ch] [bp-6Ch]@1
  int v42; // [sp+80h] [bp-68h]@1
  int v43; // [sp+84h] [bp-64h]@1
  int v44; // [sp+88h] [bp-60h]@1
  int v45; // [sp+8Ch] [bp-5Ch]@1
  int v46; // [sp+90h] [bp-58h]@1
  int v47; // [sp+94h] [bp-54h]@1
  int v48; // [sp+98h] [bp-50h]@1
  int v49; // [sp+9Ch] [bp-4Ch]@1
  int v50; // [sp+A0h] [bp-48h]@1
  int v51; // [sp+A4h] [bp-44h]@1
  int v52; // [sp+A8h] [bp-40h]@1
  int v53; // [sp+ACh] [bp-3Ch]@1
  int v54; // [sp+B0h] [bp-38h]@1
  int v55; // [sp+B4h] [bp-34h]@1

  v2 = a1;
  v3 = a2;
  _R0 = ClientInstance::getRealityModeFrameFactor(*(ClientInstance **)(a1 + 132));
  __asm { VLDR            S16, [R0] }
  v9 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 132));
  HolographicPlatform::getTransform((int)&v44, v9, 14, 7, 0);
  v30 = 0;
  v31 = 0;
  v28 = 1065353216;
  v29 = 0;
  v32 = 0;
  v33 = 1065353216;
  v36 = 0;
  v37 = 0;
  v34 = 0;
  v35 = 0;
  v40 = 0;
  v41 = 0;
  v38 = 1065353216;
  v39 = 0;
  v42 = 0;
  v43 = 1065353216;
  _aeabi_memclr8(&v12, 56);
  __asm { VMOV.F32        S0, #1.0 }
  v12 = v44;
  v13 = v45;
  v14 = v46;
  __asm { VSUB.F32        S0, S0, S16 }
  v15 = v47;
  v16 = v48;
  v17 = v49;
  v18 = v50;
  __asm { VMOV            R3, S0 }
  v19 = v51;
  v20 = v52;
  v21 = v53;
  v22 = v54;
  v23 = v55;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 1065353216;
  mce::MathUtility::interpolateTransforms((int)&v28, (int)&v12, (int)&v44, _R3);
  *(_DWORD *)v3 = v28;
  *(_DWORD *)(v3 + 4) = v29;
  *(_DWORD *)(v3 + 8) = v30;
  *(_DWORD *)(v3 + 12) = v31;
  *(_DWORD *)(v3 + 16) = v32;
  *(_DWORD *)(v3 + 20) = v33;
  *(_DWORD *)(v3 + 24) = v34;
  *(_DWORD *)(v3 + 28) = v35;
  *(_DWORD *)(v3 + 32) = v36;
  *(_DWORD *)(v3 + 36) = v37;
  *(_DWORD *)(v3 + 40) = v38;
  *(_DWORD *)(v3 + 44) = v39;
  *(_DWORD *)(v3 + 48) = v40;
  *(_DWORD *)(v3 + 52) = v41;
  *(_DWORD *)(v3 + 56) = v42;
  result = v43;
  *(_DWORD *)(v3 + 60) = v43;
  return result;
}


void __fastcall GameRenderer::_tickLightTexture(GameRenderer *this, const Dimension *a2, float a3)
{
  GameRenderer::_tickLightTexture(this, a2, a3);
}


void __fastcall GameRenderer::~GameRenderer(GameRenderer *this)
{
  GameRenderer::~GameRenderer(this);
}


int __fastcall GameRenderer::_prepHoloTransforms(GameRenderer *this, float a2, int a3)
{
  int v4; // r7@4
  signed int v5; // r0@4
  int v6; // r0@4
  int v7; // ST2C_4@4
  int v8; // r0@4
  int v9; // ST28_4@4
  int v10; // r0@4
  int v11; // ST24_4@4
  int v12; // r0@4
  int v13; // ST20_4@4
  int v14; // r0@4
  int v15; // ST1C_4@4
  int v16; // r0@4
  int v17; // r10@4
  int v18; // r5@4
  int v19; // lr@4
  int v20; // r12@4
  int v21; // r8@4
  int v22; // r9@4
  int v23; // r3@4
  int v24; // r2@4
  int v25; // r1@4
  int v26; // ST18_4@4
  int v27; // r0@4
  int v28; // r0@4
  int v29; // r1@4
  int v30; // r0@5
  GuiData *v31; // r0@6
  char *v32; // r0@6
  GuiData *v33; // r0@6
  int v34; // r6@6
  int v35; // r0@6
  int v36; // r0@8
  int v42; // r0@10
  unsigned __int64 v45; // kr20_8@12
  unsigned int v46; // ST28_4@12
  unsigned int v47; // ST2C_4@12
  unsigned __int64 v48; // kr28_8@12
  unsigned int v49; // ST20_4@12
  unsigned int v50; // ST24_4@12
  unsigned int v51; // ST1C_4@12
  unsigned int v52; // ST18_4@12
  int v53; // ST14_4@12
  int v54; // ST10_4@12
  unsigned int v55; // r8@12
  __int64 v56; // r6@12
  __int64 v57; // kr18_8@12
  __int64 v58; // r10@12
  unsigned int v59; // ST0C_4@12
  int v61; // r0@17
  int v62; // r6@17
  __int64 v67; // r1@21
  __int64 v72; // r5@23
  int v73; // r0@24
  signed int v74; // r0@24
  Options *v77; // r0@32
  bool v78; // r0@33
  Options *v79; // r0@35
  ClientInputHandler *v80; // r0@35
  const void **v81; // r0@35
  int v82; // r5@35
  signed int v83; // r0@36
  Options *v85; // r0@41
  int v86; // r5@41
  int result; // r0@43
  int v88; // r0@48
  LocalPlayer *v89; // r0@50
  int v90; // [sp+8h] [bp-470h]@1
  int v91; // [sp+14h] [bp-464h]@1
  signed int *v92; // [sp+20h] [bp-458h]@20
  __int64 v93; // [sp+30h] [bp-448h]@24
  __int64 v94; // [sp+38h] [bp-440h]@24
  __int64 v95; // [sp+40h] [bp-438h]@24
  int v96; // [sp+48h] [bp-430h]@24
  int v97; // [sp+4Ch] [bp-42Ch]@24
  __int64 v98; // [sp+50h] [bp-428h]@24
  __int64 v99; // [sp+58h] [bp-420h]@24
  int v100; // [sp+60h] [bp-418h]@24
  int v101; // [sp+64h] [bp-414h]@24
  int v102; // [sp+68h] [bp-410h]@24
  int v103; // [sp+6Ch] [bp-40Ch]@24
  unsigned __int64 v104; // [sp+70h] [bp-408h]@20
  unsigned __int64 v105; // [sp+78h] [bp-400h]@20
  __int64 v106; // [sp+80h] [bp-3F8h]@20
  int v107; // [sp+88h] [bp-3F0h]@20
  int v108; // [sp+8Ch] [bp-3ECh]@20
  unsigned __int64 v109; // [sp+90h] [bp-3E8h]@20
  __int64 v110; // [sp+98h] [bp-3E0h]@20
  __int64 v111; // [sp+A0h] [bp-3D8h]@20
  __int64 v112; // [sp+A8h] [bp-3D0h]@20
  unsigned __int64 v113; // [sp+B0h] [bp-3C8h]@12
  unsigned __int64 v114; // [sp+B8h] [bp-3C0h]@12
  unsigned __int64 v115; // [sp+C0h] [bp-3B8h]@12
  int v116; // [sp+C8h] [bp-3B0h]@12
  int v117; // [sp+CCh] [bp-3ACh]@12
  unsigned __int64 v118; // [sp+D0h] [bp-3A8h]@12
  __int64 v119; // [sp+D8h] [bp-3A0h]@12
  __int64 v120; // [sp+E0h] [bp-398h]@12
  __int64 v121; // [sp+E8h] [bp-390h]@12
  unsigned __int64 v122; // [sp+F0h] [bp-388h]@12
  unsigned __int64 v123; // [sp+F8h] [bp-380h]@12
  __int64 v124; // [sp+100h] [bp-378h]@12
  int v125; // [sp+108h] [bp-370h]@12
  int v126; // [sp+10Ch] [bp-36Ch]@12
  unsigned __int64 v127; // [sp+110h] [bp-368h]@12
  __int64 v128; // [sp+118h] [bp-360h]@12
  __int64 v129; // [sp+120h] [bp-358h]@12
  __int64 v130; // [sp+128h] [bp-350h]@12
  int v131; // [sp+134h] [bp-344h]@5
  int v132; // [sp+138h] [bp-340h]@5
  int v133; // [sp+13Ch] [bp-33Ch]@5
  int v134; // [sp+140h] [bp-338h]@4
  int v135; // [sp+144h] [bp-334h]@4
  int v136; // [sp+148h] [bp-330h]@4
  int v137; // [sp+14Ch] [bp-32Ch]@4
  int v138; // [sp+150h] [bp-328h]@4
  int v139; // [sp+154h] [bp-324h]@4
  int v140; // [sp+158h] [bp-320h]@4
  int v141; // [sp+15Ch] [bp-31Ch]@4
  int v142; // [sp+160h] [bp-318h]@4
  int v143; // [sp+164h] [bp-314h]@4
  int v144; // [sp+168h] [bp-310h]@4
  int v145; // [sp+16Ch] [bp-30Ch]@4
  int v146; // [sp+170h] [bp-308h]@4
  int v147; // [sp+174h] [bp-304h]@4
  int v148; // [sp+178h] [bp-300h]@4
  int v149; // [sp+17Ch] [bp-2FCh]@4
  int v150; // [sp+180h] [bp-2F8h]@4
  int v151; // [sp+184h] [bp-2F4h]@4
  int v152; // [sp+188h] [bp-2F0h]@4
  int v153; // [sp+18Ch] [bp-2ECh]@4
  int v154; // [sp+190h] [bp-2E8h]@4
  int v155; // [sp+194h] [bp-2E4h]@4
  int v156; // [sp+198h] [bp-2E0h]@4
  int v157; // [sp+19Ch] [bp-2DCh]@4
  int v158; // [sp+1A0h] [bp-2D8h]@4
  int v159; // [sp+1A4h] [bp-2D4h]@4
  int v160; // [sp+1A8h] [bp-2D0h]@4
  int v161; // [sp+1ACh] [bp-2CCh]@4
  int v162; // [sp+1B0h] [bp-2C8h]@4
  int v163; // [sp+1B4h] [bp-2C4h]@4
  int v164; // [sp+1B8h] [bp-2C0h]@4
  int v165; // [sp+1BCh] [bp-2BCh]@4
  int v166; // [sp+1C0h] [bp-2B8h]@4
  int v167; // [sp+1C4h] [bp-2B4h]@4
  int v168; // [sp+1C8h] [bp-2B0h]@4
  int v169; // [sp+1CCh] [bp-2ACh]@6
  int v170; // [sp+1D0h] [bp-2A8h]@6
  int v171; // [sp+1D4h] [bp-2A4h]@6
  int v172; // [sp+1E0h] [bp-298h]@8
  unsigned __int64 v173; // [sp+1E8h] [bp-290h]@4
  unsigned __int64 v174; // [sp+1F0h] [bp-288h]@4
  unsigned __int64 v175; // [sp+1F8h] [bp-280h]@4
  int v176; // [sp+200h] [bp-278h]@4
  int v177; // [sp+204h] [bp-274h]@4
  unsigned __int64 v178; // [sp+208h] [bp-270h]@4
  __int64 v179; // [sp+210h] [bp-268h]@4
  __int64 v180; // [sp+218h] [bp-260h]@4
  __int64 v181; // [sp+220h] [bp-258h]@4
  signed int v182; // [sp+22Ch] [bp-24Ch]@4
  int v183; // [sp+230h] [bp-248h]@4
  int v184; // [sp+234h] [bp-244h]@4
  int v185; // [sp+238h] [bp-240h]@4
  int v186; // [sp+23Ch] [bp-23Ch]@4
  signed int v187; // [sp+240h] [bp-238h]@4
  int v188; // [sp+244h] [bp-234h]@4
  int v189; // [sp+248h] [bp-230h]@4
  int v190; // [sp+24Ch] [bp-22Ch]@4
  int v191; // [sp+250h] [bp-228h]@4
  signed int v192; // [sp+254h] [bp-224h]@4
  int v193; // [sp+258h] [bp-220h]@4
  int v194; // [sp+25Ch] [bp-21Ch]@4
  int v195; // [sp+260h] [bp-218h]@4
  int v196; // [sp+264h] [bp-214h]@4
  signed int v197; // [sp+268h] [bp-210h]@4
  int v198; // [sp+26Ch] [bp-20Ch]@4
  int v199; // [sp+270h] [bp-208h]@4
  int v200; // [sp+274h] [bp-204h]@4
  int v201; // [sp+278h] [bp-200h]@4
  int v202; // [sp+27Ch] [bp-1FCh]@4
  int v203; // [sp+280h] [bp-1F8h]@4
  int v204; // [sp+284h] [bp-1F4h]@4
  int v205; // [sp+288h] [bp-1F0h]@4
  int v206; // [sp+28Ch] [bp-1ECh]@4
  int v207; // [sp+290h] [bp-1E8h]@4
  int v208; // [sp+294h] [bp-1E4h]@4
  int v209; // [sp+298h] [bp-1E0h]@4
  int v210; // [sp+29Ch] [bp-1DCh]@4
  int v211; // [sp+2A0h] [bp-1D8h]@4
  int v212; // [sp+2A4h] [bp-1D4h]@4
  int v213; // [sp+2A8h] [bp-1D0h]@4
  int v214; // [sp+2ACh] [bp-1CCh]@4
  int v215; // [sp+2B0h] [bp-1C8h]@4
  int v216; // [sp+2B4h] [bp-1C4h]@4
  int v217; // [sp+2B8h] [bp-1C0h]@4
  int v218; // [sp+2BCh] [bp-1BCh]@4
  int v219; // [sp+2C0h] [bp-1B8h]@4
  int v220; // [sp+2C4h] [bp-1B4h]@4
  int v221; // [sp+2C8h] [bp-1B0h]@4
  int v222; // [sp+2CCh] [bp-1ACh]@4
  int v223; // [sp+2D0h] [bp-1A8h]@4
  int v224; // [sp+2D4h] [bp-1A4h]@4
  int v225; // [sp+2D8h] [bp-1A0h]@4
  int v226; // [sp+2DCh] [bp-19Ch]@4
  int v227; // [sp+2E0h] [bp-198h]@4
  int v228; // [sp+2E4h] [bp-194h]@4
  int v229; // [sp+2E8h] [bp-190h]@4
  bool v230; // [sp+2ECh] [bp-18Ch]@35
  char v231; // [sp+2EDh] [bp-18Bh]@35
  char v232; // [sp+2EEh] [bp-18Ah]@39
  char v233; // [sp+2EFh] [bp-189h]@41
  int v234; // [sp+2F0h] [bp-188h]@4
  int v235; // [sp+2F4h] [bp-184h]@4
  int v236; // [sp+2F8h] [bp-180h]@4
  int v237; // [sp+2FCh] [bp-17Ch]@4
  int v238; // [sp+300h] [bp-178h]@4
  int v239; // [sp+304h] [bp-174h]@4
  int v240; // [sp+308h] [bp-170h]@4
  int v241; // [sp+30Ch] [bp-16Ch]@4
  int v242; // [sp+310h] [bp-168h]@4
  int v243; // [sp+314h] [bp-164h]@4
  int v244; // [sp+318h] [bp-160h]@4
  int v245; // [sp+31Ch] [bp-15Ch]@4
  int v246; // [sp+320h] [bp-158h]@4
  int v247; // [sp+324h] [bp-154h]@4
  int v248; // [sp+328h] [bp-150h]@4
  int v249; // [sp+32Ch] [bp-14Ch]@4
  int v250; // [sp+330h] [bp-148h]@4
  int v251; // [sp+334h] [bp-144h]@4
  int v252; // [sp+338h] [bp-140h]@4
  int v253; // [sp+33Ch] [bp-13Ch]@4
  int v254; // [sp+340h] [bp-138h]@4
  int v255; // [sp+344h] [bp-134h]@4
  int v256; // [sp+348h] [bp-130h]@4
  int v257; // [sp+34Ch] [bp-12Ch]@4
  int v258; // [sp+350h] [bp-128h]@4
  int v259; // [sp+354h] [bp-124h]@4
  int v260; // [sp+358h] [bp-120h]@4
  int v261; // [sp+35Ch] [bp-11Ch]@4
  int v262; // [sp+360h] [bp-118h]@4
  int v263; // [sp+364h] [bp-114h]@4
  int v264; // [sp+368h] [bp-110h]@4
  int v265; // [sp+36Ch] [bp-10Ch]@4
  int v266; // [sp+370h] [bp-108h]@4
  int v267; // [sp+374h] [bp-104h]@4
  int v268; // [sp+378h] [bp-100h]@4
  int v269; // [sp+37Ch] [bp-FCh]@4
  int v270; // [sp+380h] [bp-F8h]@4
  int v271; // [sp+384h] [bp-F4h]@4
  signed int v272; // [sp+388h] [bp-F0h]@4
  int v273; // [sp+38Ch] [bp-ECh]@4
  int v274; // [sp+390h] [bp-E8h]@4
  int v275; // [sp+394h] [bp-E4h]@4
  int v276; // [sp+398h] [bp-E0h]@4
  signed int v277; // [sp+39Ch] [bp-DCh]@4
  int v278; // [sp+3A0h] [bp-D8h]@4
  int v279; // [sp+3A4h] [bp-D4h]@4
  int v280; // [sp+3A8h] [bp-D0h]@4
  int v281; // [sp+3ACh] [bp-CCh]@4
  int v282; // [sp+3B0h] [bp-C8h]@4
  int v283; // [sp+3B8h] [bp-C0h]@3
  int v284; // [sp+3BCh] [bp-BCh]@3
  int v285; // [sp+3C0h] [bp-B8h]@3
  int v286; // [sp+3C4h] [bp-B4h]@3
  int v287; // [sp+3C8h] [bp-B0h]@3
  int v288; // [sp+3CCh] [bp-ACh]@3
  int v289; // [sp+3D0h] [bp-A8h]@3
  int v290; // [sp+3D4h] [bp-A4h]@3
  int v291; // [sp+3D8h] [bp-A0h]@3
  int v292; // [sp+3DCh] [bp-9Ch]@3
  int v293; // [sp+3E0h] [bp-98h]@3
  int v294; // [sp+3E4h] [bp-94h]@3
  int v295; // [sp+3E8h] [bp-90h]@3
  int v296; // [sp+3ECh] [bp-8Ch]@3
  int v297; // [sp+3F0h] [bp-88h]@3
  int v298; // [sp+3F4h] [bp-84h]@3
  unsigned __int64 v299; // [sp+3F8h] [bp-80h]@24
  unsigned __int64 v300; // [sp+400h] [bp-78h]@24
  unsigned __int64 v301; // [sp+408h] [bp-70h]@24
  int v302; // [sp+410h] [bp-68h]@24
  int v303; // [sp+414h] [bp-64h]@24
  unsigned __int64 v304; // [sp+418h] [bp-60h]@24
  __int64 v305; // [sp+420h] [bp-58h]@24
  __int64 v306; // [sp+428h] [bp-50h]@24
  __int64 v307; // [sp+430h] [bp-48h]@24

  _R4 = this;
  v90 = a3;
  v91 = LODWORD(a2);
  if ( ClientInstance::getLevel(*((ClientInstance **)this + 33))
    && ClientInstance::getCameraTargetEntity(*((ClientInstance **)_R4 + 33)) )
  {
    HoloHudDriftDynamics::updateAndGenerateMatrixPatch(
      (HoloHudDriftDynamics *)&v283,
      (GameRenderer *)((char *)_R4 + 232));
    *((_DWORD *)_R4 + 162) = v283;
    *((_DWORD *)_R4 + 163) = v284;
    *((_DWORD *)_R4 + 164) = v285;
    *((_DWORD *)_R4 + 165) = v286;
    *((_DWORD *)_R4 + 166) = v287;
    *((_DWORD *)_R4 + 167) = v288;
    *((_DWORD *)_R4 + 168) = v289;
    *((_DWORD *)_R4 + 169) = v290;
    *((_DWORD *)_R4 + 170) = v291;
    *((_DWORD *)_R4 + 171) = v292;
    *((_DWORD *)_R4 + 172) = v293;
    *((_DWORD *)_R4 + 173) = v294;
    *((_DWORD *)_R4 + 174) = v295;
    *((_DWORD *)_R4 + 175) = v296;
    *((_DWORD *)_R4 + 176) = v297;
    *((_DWORD *)_R4 + 177) = v298;
  }
  v4 = 0;
  v166 = 0;
  v167 = 0;
  v168 = 0;
  v174 = 0LL;
  v173 = 1065353216LL;
  v175 = 4575657221408423936LL;
  v178 = 0LL;
  v176 = 0;
  v177 = 0;
  v180 = 0LL;
  v179 = 1065353216LL;
  v181 = 4575657221408423936LL;
  v184 = 0;
  v185 = 0;
  v182 = 1065353216;
  v183 = 0;
  v186 = 0;
  v187 = 1065353216;
  v190 = 0;
  v191 = 0;
  v188 = 0;
  v189 = 0;
  v194 = 0;
  v195 = 0;
  v192 = 1065353216;
  v193 = 0;
  v196 = 0;
  v197 = 1065353216;
  v200 = 0;
  v201 = 0;
  v198 = 1065353216;
  v199 = 0;
  v202 = 0;
  v203 = 1065353216;
  v206 = 0;
  v207 = 0;
  v204 = 0;
  v205 = 0;
  v210 = 0;
  v211 = 0;
  v208 = 1065353216;
  v209 = 0;
  v212 = 0;
  v213 = 1065353216;
  v216 = 0;
  v217 = 0;
  v214 = 1065353216;
  v215 = 0;
  v218 = 0;
  v219 = 1065353216;
  v222 = 0;
  v223 = 0;
  v220 = 0;
  v221 = 0;
  v226 = 0;
  v227 = 0;
  v224 = 1065353216;
  v225 = 0;
  v228 = 0;
  v229 = 1065353216;
  v236 = 0;
  v237 = 0;
  v234 = 1065353216;
  v235 = 0;
  v238 = 0;
  v239 = 1065353216;
  v242 = 0;
  v243 = 0;
  v240 = 0;
  v241 = 0;
  v246 = 0;
  v247 = 0;
  v244 = 1065353216;
  v245 = 0;
  v248 = 0;
  v249 = 1065353216;
  v252 = 0;
  v253 = 0;
  v250 = 1065353216;
  v251 = 0;
  v254 = 0;
  v255 = 1065353216;
  v258 = 0;
  v259 = 0;
  v256 = 0;
  v257 = 0;
  v262 = 0;
  v263 = 0;
  v260 = 1065353216;
  v261 = 0;
  v264 = 0;
  v265 = 1065353216;
  v269 = 0;
  v270 = 0;
  v267 = 1065353216;
  v268 = 0;
  v271 = 0;
  v272 = 1065353216;
  v275 = 0;
  v276 = 0;
  v273 = 0;
  v274 = 0;
  v279 = 0;
  v280 = 0;
  v277 = 1065353216;
  v278 = 0;
  v281 = 0;
  v282 = 1065353216;
  GameRenderer::_getLeftHandHUDMatrixPatch((GameRenderer *)&v150, (int)_R4);
  v250 = v150;
  v251 = v151;
  v252 = v152;
  v253 = v153;
  v254 = v154;
  v255 = v155;
  v256 = v156;
  v257 = v157;
  v258 = v158;
  v259 = v159;
  v260 = v160;
  v261 = v161;
  v262 = v162;
  v263 = v163;
  v264 = v164;
  v265 = v165;
  v5 = GameRenderer::_getUItoPoseSource(_R4);
  v266 = v5;
  *((_DWORD *)_R4 + 204) = v5;
  GameRenderer::_computeTransitionScreenMat((GameRenderer *)&v134, (int)_R4);
  v6 = v134;
  *((_DWORD *)_R4 + 178) = v134;
  v7 = v6;
  v8 = v135;
  *((_DWORD *)_R4 + 179) = v135;
  v9 = v8;
  v10 = v136;
  *((_DWORD *)_R4 + 180) = v136;
  v11 = v10;
  v12 = v137;
  *((_DWORD *)_R4 + 181) = v137;
  v13 = v12;
  v14 = v138;
  *((_DWORD *)_R4 + 182) = v138;
  v15 = v14;
  v16 = v139;
  *((_DWORD *)_R4 + 183) = v139;
  v17 = v140;
  *((_DWORD *)_R4 + 184) = v140;
  v18 = v141;
  *((_DWORD *)_R4 + 185) = v141;
  v19 = v142;
  *((_DWORD *)_R4 + 186) = v142;
  v20 = v143;
  *((_DWORD *)_R4 + 187) = v143;
  v21 = v144;
  *((_DWORD *)_R4 + 188) = v144;
  v22 = v145;
  *((_DWORD *)_R4 + 189) = v145;
  v23 = v146;
  *((_DWORD *)_R4 + 190) = v146;
  v24 = v147;
  *((_DWORD *)_R4 + 191) = v147;
  v25 = v148;
  *((_DWORD *)_R4 + 192) = v148;
  v26 = v16;
  v27 = v149;
  *((_DWORD *)_R4 + 193) = v149;
  v267 = v7;
  v268 = v9;
  v269 = v11;
  v270 = v13;
  v271 = v15;
  v272 = v26;
  v273 = v17;
  v274 = v18;
  v275 = v19;
  v276 = v20;
  v277 = v21;
  v278 = v22;
  v279 = v23;
  v280 = v24;
  v281 = v25;
  v282 = v27;
  _ZF = ClientInstance::getCameraTargetEntity(*((ClientInstance **)_R4 + 33)) == 0;
  v28 = 0;
  v29 = 0;
  if ( !_ZF )
    v30 = ClientInstance::getCameraTargetEntity(*((ClientInstance **)_R4 + 33));
    Entity::getInterpolatedPosition((Entity *)&v131, *(float *)&v30, v91);
    v28 = v132;
    v4 = v131;
    v29 = v133;
  v166 = v4;
  v167 = v28;
  v168 = v29;
  v31 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)_R4 + 33));
  v32 = GuiData::getScreenSizeData(v31);
  v169 = *((_DWORD *)v32 + 2);
  v170 = *((_DWORD *)v32 + 3);
  v33 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)_R4 + 33));
  v171 = GuiData::getInvGuiScale(v33);
  v34 = ClientInstance::isLivingroomMode(*((ClientInstance **)_R4 + 33));
  v35 = ClientInstance::getHolosceneRenderer(*((ClientInstance **)_R4 + 33));
  if ( v34 != 1 )
    if ( v35 )
    {
      _R0 = ClientInstance::getHolosceneRenderer(*((ClientInstance **)_R4 + 33));
      __asm { VLDR            S16, [R0,#8] }
      v42 = ClientInstance::getHoloInput(*((ClientInstance **)_R4 + 33));
      _R0 = (*(int (**)(void))(*(_DWORD *)v42 + 240))();
      __asm
      {
        VMOV            S0, R0
        VDIV.F32        S16, S16, S0
      }
        VLDR            S0, [R0,#8]
        VADD.F32        S2, S0, S0
        VADD.F32        S0, S16, S16
        VSTR            S2, [SP,#0x478+var_298]
      goto LABEL_12;
    }
LABEL_11:
    __asm { VMOV.F32        S0, #1.0 }
    v172 = 1065353216;
    goto LABEL_12;
  if ( !v35 )
    goto LABEL_11;
  v172 = 0x40000000;
  v36 = ClientInstance::getHoloInput(*((ClientInstance **)_R4 + 33));
  _R0 = (*(int (**)(void))(*(_DWORD *)v36 + 244))();
  __asm
    VMOV.F32        S0, #2.0
    VMOV            S2, R0
    VDIV.F32        S0, S0, S2
LABEL_12:
  __asm { VSTR            S0, [SP,#0x478+var_294] }
  _aeabi_memclr8(&v122, 60);
  v45 = *(_QWORD *)&Matrix::IDENTITY;
  v46 = v45 >> 32;
  v47 = v45;
  v122 = *(_QWORD *)&Matrix::IDENTITY;
  v48 = qword_27E89F0;
  v49 = v48 >> 32;
  v50 = v48;
  v123 = qword_27E89F0;
  v51 = qword_27E89F8;
  v124 = qword_27E89F8;
  v52 = HIDWORD(qword_27E89F8);
  v53 = unk_27E8A00;
  v125 = unk_27E8A00;
  v54 = unk_27E8A04;
  v126 = unk_27E8A04;
  v55 = HIDWORD(qword_27E8A08);
  v56 = qword_27E8A10;
  v57 = *(_QWORD *)&qword_27E8A18;
  v58 = *(_QWORD *)&qword_27E8A20;
  v127 = qword_27E8A08;
  v59 = qword_27E8A08;
  v128 = qword_27E8A10;
  v129 = *(_QWORD *)&qword_27E8A18;
  v130 = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr8(&v113, 60);
  v113 = __PAIR__(v46, v47);
  v114 = __PAIR__(v49, v50);
  v115 = __PAIR__(v52, v51);
  v116 = v53;
  v117 = v54;
  v118 = __PAIR__(v55, v59);
  v119 = v56;
  v120 = v57;
  v121 = v58;
  _R0 = ClientInstance::getRealityModeFrameFactor(*((ClientInstance **)_R4 + 33));
    VLDR            S0, [R4,#0x30C]
    VLDR            S2, =0.01
    VABS.F32        S0, S0
    VLDR            S16, [R0]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF && *((_BYTE *)_R4 + 814) && v90 == 1 )
    GameRenderer::_adjustVRRotationActual(_R4, 0);
    *((_BYTE *)_R4 + 814) = 0;
  v61 = ClientInstance::getCameraTargetEntity(*((ClientInstance **)_R4 + 33));
  v62 = v61;
  if ( v61 )
    if ( Entity::hasCategory(v61, 1) != 1 || (*(int (__fastcall **)(int))(*(_DWORD *)v62 + 784))(v62) != 1 )
        VLDR            S0, =0.017453
        VLDR            S2, [R4,#0x310]
      v92 = &v182;
        VMUL.F32        S0, S2, S0
        VMOV            R7, S0
      _R5 = cosf(_R7);
      _R0 = sinf(_R7);
        VMOV            S2, R0
        VMOV            S6, R5
      _R1 = &Matrix::IDENTITY;
        VLDR            S0, [R1,#0x24]
        VLDR            S4, [R1,#0x20]
        VLDR            S8, [R1]
        VMUL.F32        S1, S0, S2
        VLDR            S10, [R1,#4]
        VMUL.F32        S3, S4, S2
        VLDR            S12, [R1,#8]
        VMUL.F32        S9, S8, S6
        VLDR            S14, [R1,#0xC]
        VMUL.F32        S7, S10, S6
        VLDR            S5, [R1,#0x28]
        VMUL.F32        S15, S12, S6
        VLDR            S11, [R1,#0x2C]
        VMUL.F32        S20, S14, S6
        VMUL.F32        S13, S5, S2
        VMUL.F32        S18, S11, S2
        VMUL.F32        S14, S14, S2
        VMUL.F32        S11, S11, S6
      HIDWORD(v67) = HIDWORD(qword_27E89F8);
        VMUL.F32        S12, S12, S2
        VMUL.F32        S10, S10, S2
      LODWORD(v67) = qword_27E89F8;
        VMUL.F32        S0, S0, S6
        VMUL.F32        S2, S8, S2
        VMUL.F32        S8, S5, S6
        VMUL.F32        S4, S4, S6
        VSUB.F32        S6, S9, S3
        VSUB.F32        S1, S7, S1
        VSUB.F32        S3, S15, S13
        VSUB.F32        S5, S20, S18
        VADD.F32        S14, S11, S14
        VADD.F32        S8, S8, S12
        VADD.F32        S0, S0, S10
        VADD.F32        S2, S4, S2
        VSTR            S6, [SP,#0x478+var_388]
        VSTR            S1, [SP,#0x478+var_388+4]
        VSTR            S3, [SP,#0x478+var_380]
        VSTR            S5, [SP,#0x478+var_380+4]
      v124 = v67;
      v125 = unk_27E8A00;
      v126 = unk_27E8A04;
        VSTR            S2, [SP,#0x478+var_368]
        VSTR            S0, [SP,#0x478+var_368+4]
        VSTR            S8, [SP,#0x478+var_360]
        VSTR            S14, [SP,#0x478+var_360+4]
      v129 = *(_QWORD *)&qword_27E8A18;
      v130 = *(_QWORD *)&qword_27E8A20;
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v62 + 312))(v62) == 1 )
        __asm
        {
          VLDR            S0, [SP,#0x478+var_378]
          VLDR            S8, =0.1
          VLDR            S2, [SP,#0x478+var_378+4]
          VLDR            S4, [SP,#0x108]
          VMUL.F32        S0, S0, S8
          VLDR            S6, [SP,#0x478+var_36C]
          VMUL.F32        S2, S2, S8
          VMUL.F32        S4, S4, S8
          VLDR            S10, [SP,#0x478+var_358+4]
          VMUL.F32        S6, S6, S8
          VLDR            S8, [SP,#0x478+var_358]
          VLDR            S12, [SP,#0x478+var_350]
          VADD.F32        S0, S8, S0
          VLDR            S8, [SP,#0x478+var_350+4]
          VADD.F32        S2, S10, S2
          VADD.F32        S4, S12, S4
          VADD.F32        S6, S8, S6
          VSTR            S0, [SP,#0x478+var_358]
          VSTR            S2, [SP,#0x478+var_358+4]
          VSTR            S4, [SP,#0x478+var_350]
          VSTR            S6, [SP,#0x478+var_350+4]
        }
    else
      GameRenderer::_computeViewForSleeping((GameRenderer *)&v104, (int)_R4);
      v122 = v104;
      v123 = v105;
      v124 = v106;
      v125 = v107;
      v126 = v108;
      v127 = v109;
      v128 = v110;
      v129 = v111;
      v130 = v112;
  else
    __asm
      VLDR            S0, =0.017453
      VLDR            S2, [R4,#0x310]
    v92 = &v182;
      VMUL.F32        S0, S2, S0
      VMOV            R5, S0
    _R6 = cosf(_R5);
    _R0 = sinf(_R5);
      VMOV            S2, R0
      VMOV            S6, R6
    _R1 = &Matrix::IDENTITY;
      VLDR            S0, [R1,#0x24]
      VLDR            S4, [R1,#0x20]
      VLDR            S8, [R1]
      VMUL.F32        S1, S0, S2
      VLDR            S10, [R1,#4]
      VMUL.F32        S3, S4, S2
      VLDR            S12, [R1,#8]
      VMUL.F32        S9, S8, S6
      VLDR            S14, [R1,#0xC]
      VMUL.F32        S7, S10, S6
      VLDR            S5, [R1,#0x28]
      VMUL.F32        S15, S12, S6
      VLDR            S11, [R1,#0x2C]
      VMUL.F32        S20, S14, S6
      VMUL.F32        S13, S5, S2
      VMUL.F32        S18, S11, S2
      VMUL.F32        S14, S14, S2
    HIDWORD(v72) = unk_27E8A04;
      VMUL.F32        S11, S11, S6
      VMUL.F32        S12, S12, S2
    LODWORD(v72) = unk_27E8A00;
      VMUL.F32        S10, S10, S2
      VMUL.F32        S0, S0, S6
      VMUL.F32        S2, S8, S2
      VMUL.F32        S8, S5, S6
      VMUL.F32        S4, S4, S6
      VSUB.F32        S6, S9, S3
      VSUB.F32        S1, S7, S1
      VSUB.F32        S3, S15, S13
      VSUB.F32        S5, S20, S18
      VADD.F32        S14, S11, S14
      VADD.F32        S8, S8, S12
      VADD.F32        S0, S0, S10
      VADD.F32        S2, S4, S2
      VSTR            S6, [SP,#0x478+var_388]
      VSTR            S1, [SP,#0x478+var_388+4]
      VSTR            S3, [SP,#0x478+var_380]
      VSTR            S5, [SP,#0x478+var_380+4]
    v124 = qword_27E89F8;
    *(_QWORD *)&v125 = v72;
      VSTR            S2, [SP,#0x478+var_368]
      VSTR            S0, [SP,#0x478+var_368+4]
      VSTR            S8, [SP,#0x478+var_360]
      VSTR            S14, [SP,#0x478+var_360+4]
    v129 = *(_QWORD *)&qword_27E8A18;
    v130 = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr8(&v93, 56);
  v93 = *(_QWORD *)&Matrix::IDENTITY;
  v94 = qword_27E89F0;
  v95 = qword_27E89F8;
  v96 = unk_27E8A00;
  v97 = unk_27E8A04;
  v98 = qword_27E8A08;
  v99 = qword_27E8A10;
  v103 = *((_DWORD *)&qword_27E8A20 + 1);
  v73 = *((_DWORD *)_R4 + 194);
  v100 = 0;
  v101 = v73;
  v102 = 0;
  glm::detail::operator*<float>((int)&v299, (int)_R4 + 392, (int)&v93);
  v113 = v299;
  v114 = v300;
  v115 = v301;
  v116 = v302;
  v117 = v303;
  v118 = v304;
  v119 = v305;
  v120 = v306;
  v121 = v307;
  v74 = ClientInstance::isHoloRealityMode(*((ClientInstance **)_R4 + 33));
    VMOV.F32        S18, #1.0
    VCMPE.F32       S16, S18
  if ( _NF ^ _VF && (v74 ^ 1) != 1 )
      VCMPE.F32       S16, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v173 = v122;
      v174 = v123;
      v175 = v124;
      v176 = v125;
      v177 = v126;
      v178 = v127;
      v179 = v128;
      v180 = v129;
      v181 = v130;
      __asm { VMOV            R3, S16 }
      v113 = v122;
      v114 = (unsigned int)v123;
      v115 = v124;
      v116 = v125;
      v117 = 0;
      v118 = v127;
      v119 = (unsigned int)v128;
      mce::MathUtility::interpolateTransforms((int)&v173, (int)&v122, (int)&v113, _R3);
    v173 = v113;
    v174 = v114;
    v175 = v115;
    v176 = v116;
    v177 = v117;
    v178 = v118;
    v179 = v119;
    v180 = v120;
    v181 = v121;
  _R0 = ClientInstance::getHoloInput(*((ClientInstance **)_R4 + 33));
    VLDR            S0, [R0,#0x2AC]
    VSUB.F32        S2, S18, S16
    VMUL.F32        S0, S0, S16
    VADD.F32        S0, S0, S2
    VSTR            S0, [SP,#0x478+var_250]
    VSTR            S0, [R4,#0x324]
  GameRenderer::_computeRealityAugmentationMatrix((int)_R4, (int)v92);
  v198 = *((_DWORD *)_R4 + 98);
  v199 = *((_DWORD *)_R4 + 99);
  v200 = *((_DWORD *)_R4 + 100);
  v201 = *((_DWORD *)_R4 + 101);
  v202 = *((_DWORD *)_R4 + 102);
  v203 = *((_DWORD *)_R4 + 103);
  v204 = *((_DWORD *)_R4 + 104);
  v205 = *((_DWORD *)_R4 + 105);
  v206 = *((_DWORD *)_R4 + 106);
  v207 = *((_DWORD *)_R4 + 107);
  v208 = *((_DWORD *)_R4 + 108);
  v209 = *((_DWORD *)_R4 + 109);
  v210 = *((_DWORD *)_R4 + 110);
  v211 = *((_DWORD *)_R4 + 111);
  v212 = *((_DWORD *)_R4 + 112);
  v213 = *((_DWORD *)_R4 + 113);
  v214 = *((_DWORD *)_R4 + 130);
  v215 = *((_DWORD *)_R4 + 131);
  v216 = *((_DWORD *)_R4 + 132);
  v217 = *((_DWORD *)_R4 + 133);
  v218 = *((_DWORD *)_R4 + 134);
  v219 = *((_DWORD *)_R4 + 135);
  v220 = *((_DWORD *)_R4 + 136);
  v221 = *((_DWORD *)_R4 + 137);
  v222 = *((_DWORD *)_R4 + 138);
  v223 = *((_DWORD *)_R4 + 139);
  v224 = *((_DWORD *)_R4 + 140);
  v225 = *((_DWORD *)_R4 + 141);
  v226 = *((_DWORD *)_R4 + 142);
  v227 = *((_DWORD *)_R4 + 143);
  v228 = *((_DWORD *)_R4 + 144);
  v229 = *((_DWORD *)_R4 + 145);
  v78 = 0;
  if ( ClientInstance::getLevel(*((ClientInstance **)_R4 + 33)) )
    v77 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 33));
    if ( !Options::getVRLivingRoomMode(v77) )
      v78 = 1;
  v230 = v78;
  v79 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 33));
  v231 = Options::getStereoRendering(v79) ^ 1;
  v80 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)_R4 + 33));
  v81 = ClientInputHandler::getCurrentInputMapping(v80);
  v82 = sub_119C9E8(v81, "screenBed");
  if ( ClientInstance::isShowingMenu(*((ClientInstance **)_R4 + 33)) )
    goto LABEL_54;
  v83 = ClientInstance::isHoloRealityMode(*((ClientInstance **)_R4 + 33));
  _ZF = v82 == 0;
  if ( v82 )
    _ZF = (v83 ^ 1) == 1;
  if ( _ZF )
LABEL_54:
    v232 = 0;
    v232 = 1;
    v234 = *((_DWORD *)_R4 + 162);
    v235 = *((_DWORD *)_R4 + 163);
    v236 = *((_DWORD *)_R4 + 164);
    v237 = *((_DWORD *)_R4 + 165);
    v238 = *((_DWORD *)_R4 + 166);
    v239 = *((_DWORD *)_R4 + 167);
    v240 = *((_DWORD *)_R4 + 168);
    v241 = *((_DWORD *)_R4 + 169);
    v242 = *((_DWORD *)_R4 + 170);
    v243 = *((_DWORD *)_R4 + 171);
    v244 = *((_DWORD *)_R4 + 172);
    v245 = *((_DWORD *)_R4 + 173);
    v246 = *((_DWORD *)_R4 + 174);
    v247 = *((_DWORD *)_R4 + 175);
    v248 = *((_DWORD *)_R4 + 176);
    v249 = *((_DWORD *)_R4 + 177);
  v85 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R4 + 33));
  v233 = Options::getVRHudDrifts(v85) ^ 1;
  v86 = ClientInstance::getHoloInput(*((ClientInstance **)_R4 + 33));
  if ( (*(int (**)(void))(*(_DWORD *)v86 + 44))() == 1 )
    HolographicPlatform::setNewFrameOfReferenceFrameData(v86, (int)&v166);
  result = *((_BYTE *)_R4 + 813);
  if ( *((_BYTE *)_R4 + 813) )
    GameRenderer::_adjustVRRotationActual(_R4, 1);
    if ( ClientInstance::isShowingMenu(*((ClientInstance **)_R4 + 33)) == 1 )
      if ( ClientInstance::getLevel(*((ClientInstance **)_R4 + 33))
        && ClientInstance::isRealityFullVRMode(*((ClientInstance **)_R4 + 33)) )
        GameRenderer::recenterHoloUI(_R4);
      else
        v88 = ClientInstance::getHoloInput(*((ClientInstance **)_R4 + 33));
        (*(void (**)(void))(*(_DWORD *)v88 + 132))();
    if ( ClientInstance::getLocalPlayer(*((ClientInstance **)_R4 + 33)) )
      v89 = (LocalPlayer *)ClientInstance::getLocalPlayer(*((ClientInstance **)_R4 + 33));
      LocalPlayer::resetLastHmdAngle(v89);
    result = 0;
    *((_BYTE *)_R4 + 813) = 0;
  return result;
}


void __fastcall GameRenderer::renderInsideCubes(int a1, int a2)
{
  GameRenderer::renderInsideCubes(a1, a2);
}


int __fastcall GameRenderer::recenterHoloUI(GameRenderer *this)
{
  GameRenderer *v1; // r8@1
  int result; // r0@1
  int v6; // r0@4
  Level *v7; // r0@4
  int v8; // r0@5
  Level *v13; // r0@6
  char *v14; // r0@6
  int v15; // r0@7
  int v16; // r6@7
  int v17; // r0@7
  int v19; // r0@16
  int v20; // r0@16
  int v22; // r0@16
  __int64 v23; // [sp+10h] [bp-180h]@16
  __int64 v24; // [sp+18h] [bp-178h]@16
  float v25; // [sp+20h] [bp-170h]@16
  float v26; // [sp+24h] [bp-16Ch]@16
  float v27; // [sp+28h] [bp-168h]@16
  float v28; // [sp+2Ch] [bp-164h]@16
  float v29; // [sp+30h] [bp-160h]@16
  float v30; // [sp+34h] [bp-15Ch]@16
  float v31; // [sp+38h] [bp-158h]@16
  int v32; // [sp+3Ch] [bp-154h]@16
  float v33; // [sp+40h] [bp-150h]@16
  float v34; // [sp+44h] [bp-14Ch]@16
  float v35; // [sp+48h] [bp-148h]@16
  int v36; // [sp+4Ch] [bp-144h]@16
  char v37; // [sp+50h] [bp-140h]@16
  int v38; // [sp+80h] [bp-110h]@16
  int v39; // [sp+84h] [bp-10Ch]@16
  int v40; // [sp+88h] [bp-108h]@16
  float v41; // [sp+90h] [bp-100h]@7
  float v43; // [sp+9Ch] [bp-F4h]@7
  float v46; // [sp+A8h] [bp-E8h]@5
  __int64 v58; // [sp+E8h] [bp-A8h]@4
  float v59; // [sp+F0h] [bp-A0h]@5
  float v60; // [sp+F8h] [bp-98h]@16
  float v61; // [sp+FCh] [bp-94h]@16
  float v62; // [sp+100h] [bp-90h]@16
  float v63; // [sp+104h] [bp-8Ch]@16
  float v64; // [sp+108h] [bp-88h]@16
  float v65; // [sp+10Ch] [bp-84h]@16
  float v66; // [sp+110h] [bp-80h]@16
  int v67; // [sp+114h] [bp-7Ch]@16
  float v68; // [sp+118h] [bp-78h]@16
  float v69; // [sp+11Ch] [bp-74h]@16
  float v70; // [sp+120h] [bp-70h]@16
  int v71; // [sp+124h] [bp-6Ch]@16

  v1 = this;
  result = ClientInstance::getLevel(*((ClientInstance **)this + 33));
  if ( result )
  {
    result = ClientInstance::getCameraTargetEntity(*((ClientInstance **)v1 + 33));
    if ( result )
    {
      _R7 = 0;
      _R5 = 0;
      _R9 = 0;
      if ( !*(_BYTE *)(ClientInstance::getHoloInput(*((ClientInstance **)v1 + 33)) + 661) )
      {
        v6 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 33));
        HolographicPlatform::getTransformTranslation((int)&v58, v6, 16, 1, 10);
        v7 = (Level *)ClientInstance::getLevel(*((ClientInstance **)v1 + 33));
        if ( (*(_DWORD *)Level::getHitResult(v7) & 0xFFFFFFFE) == 2 )
        {
          v8 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 33));
          HolographicPlatform::getTransformZDir((int)&v46, v8, 16, 1, 10);
          __asm
          {
            VMOV.F32        S0, #6.0
            VLDR            S4, [SP,#0x190+var_E4]
            VLDR            S6, [SP,#0x190+var_E0]
            VLDR            S2, [SP,#0x190+var_E8]
            VLDR            S8, [SP,#0x190+var_A8+4]
            VLDR            S10, [SP,#0x190+var_A0]
            VMUL.F32        S6, S6, S0
            VMUL.F32        S4, S4, S0
            VMUL.F32        S0, S2, S0
            VLDR            S2, [SP,#0x190+var_A8]
            VADD.F32        S6, S10, S6
            VADD.F32        S4, S8, S4
            VADD.F32        S0, S2, S0
            VMOV            R9, S6
            VMOV            R5, S4
            VMOV            R7, S0
          }
        }
        else
          v13 = (Level *)ClientInstance::getLevel(*((ClientInstance **)v1 + 33));
          v14 = Level::getHitResult(v13);
          _R5 = *(_QWORD *)(v14 + 20) >> 32;
          _R7 = *(_QWORD *)(v14 + 20);
          _R9 = *((_DWORD *)v14 + 7);
      }
      v15 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 33));
      HolographicPlatform::getTransform((int)&v46, v15, 1, 16, 10);
      __asm
        VLDR            S30, [SP,#0x190+var_E8]
        VLDR            S26, [SP,#0x190+var_E4]
        VLDR            S24, [SP,#0x190+var_E0]
        VLDR            S17, [SP,#0x190+var_D8]
        VLDR            S16, [SP,#0x190+var_B0]
        VLDR            S18, [SP,#0x190+var_B4]
        VLDR            S20, [SP,#0x190+var_B8]
        VLDR            S22, [SP,#0x190+var_C0]
        VLDR            S28, [SP,#0x190+var_C4]
        VLDR            S19, [SP,#0x190+var_C8]
        VLDR            S21, [SP,#0x190+var_D0]
        VLDR            S23, [SP,#0x190+var_D4]
      GameRenderer::_computeCandidateUIPlacementHorizontal((GameRenderer *)&v43, (int)v1);
        VLDR            S0, [SP,#0x190+var_E8]
        VLDR            S8, [SP,#0x190+var_F4]
        VLDR            S6, [SP,#0x190+var_D8]
        VLDR            S10, [SP,#0x190+var_F0]
        VMUL.F32        S0, S0, S8
        VLDR            S2, [SP,#0x190+var_E4]
        VLDR            S4, [SP,#0x190+var_E0]
        VMUL.F32        S6, S6, S10
        VLDR            S14, [SP,#0x190+var_D4]
        VMUL.F32        S2, S2, S8
        VLDR            S1, [SP,#0x190+var_D0]
        VMUL.F32        S4, S4, S8
        VMUL.F32        S14, S14, S10
        VLDR            S12, [SP,#0x190+var_EC]
        VMUL.F32        S8, S1, S10
        VLDR            S10, [SP,#0x190+var_C8]
        VLDR            S1, [SP,#0x190+var_C4]
        VMUL.F32        S10, S10, S12
        VADD.F32        S0, S6, S0
        VLDR            S6, [SP,#0x190+var_C0]
        VMUL.F32        S1, S1, S12
        VMUL.F32        S6, S6, S12
        VADD.F32        S2, S14, S2
        VADD.F32        S4, S8, S4
        VLDR            S8, [SP,#0x190+var_B4]
        VADD.F32        S0, S0, S10
        VLDR            S10, [SP,#0x190+var_B0]
        VADD.F32        S2, S2, S1
        VADD.F32        S4, S4, S6
        VLDR            S6, [SP,#0x190+var_B8]
        VADD.F32        S25, S0, S6
        VADD.F32        S27, S2, S8
        VADD.F32        S29, S4, S10
        VSTR            S25, [SP,#0x190+var_F4]
        VSTR            S27, [SP,#0x190+var_F0]
        VSTR            S29, [SP,#0x190+var_EC]
      v16 = *(_BYTE *)(ClientInstance::getHoloInput(*((ClientInstance **)v1 + 33)) + 661);
      v17 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 33));
      HolographicPlatform::getTransformXDir((int)&v41, v17, 16, 15, 0);
        VMOV            S0, R7
        VMOV            S2, R5
        VMUL.F32        S4, S30, S0
        VMUL.F32        S6, S17, S2
        VMUL.F32        S8, S26, S0
        VMUL.F32        S10, S23, S2
        VMOV            S12, R9
        VMUL.F32        S0, S24, S0
        VMUL.F32        S2, S21, S2
        VMUL.F32        S14, S19, S12
        VADD.F32        S4, S6, S4
        VMUL.F32        S6, S28, S12
        VADD.F32        S8, S10, S8
        VMUL.F32        S10, S22, S12
        VMUL.F32        S12, S27, S27
        VADD.F32        S0, S2, S0
        VADD.F32        S2, S4, S14
        VADD.F32        S4, S8, S6
        VMUL.F32        S6, S29, S29
        VMUL.F32        S8, S25, S25
        VADD.F32        S2, S2, S20
        VADD.F32        S4, S4, S18
        VADD.F32        S6, S8, S6
        VADD.F32        S0, S0, S16
        VLDR            S16, =0.8
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S6, S6, S12
        VMUL.F32        S10, S0, S0
        VLDR            S0, [SP,#0x190+var_100]
        VMUL.F32        S14, S0, S0
        VADD.F32        S4, S4, S2
        VLDR            S2, [SP,#0x190+var_F8]
        VSQRT.F32       S6, S6
        VADD.F32        S4, S4, S10
        VMUL.F32        S8, S2, S2
        VSQRT.F32       S10, S4
        VCMPE.F32       S10, S6
        VMRS            APSR_nzcv, FPSCR
        VADD.F32        S8, S14, S8
        VSQRT.F32       S4, S8
        VMOV.F32        S8, S6
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S8, S10 }
      if ( v16 )
        __asm { VMOVNE.F32      S8, S6 }
        VLDR            S6, =0.0001
        VCMPE.F32       S8, S16
        VCMPE.F32       S4, S6
        __asm { VMOVGT.F32      S16, S8 }
      __asm { VMRS            APSR_nzcv, FPSCR }
      if ( _NF ^ _VF )
        _R0 = &Vec3::ZERO;
        __asm
          VLDR            S18, [R0]
          VLDR            S20, [R0,#4]
          VLDR            S22, [R0,#8]
      else
          VNEG.F32        S2, S2
          VLDR            S20, =0.0
          VDIV.F32        S22, S0, S4
          VDIV.F32        S18, S2, S4
      v19 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 33));
      HolographicPlatform::getTransform((int)&v37, v19, 15, 9, 0);
      v38 = 0;
      v39 = 0;
      v40 = 0;
      _aeabi_memclr8(&v23, 56);
        VNEG.F32        S0, S18
        VNEG.F32        S2, S20
        VNEG.F32        S4, S22
        VMUL.F32        S6, S22, S16
        VMUL.F32        S8, S20, S16
        VMUL.F32        S10, S18, S16
        VSTR            S0, [SP,#0x190+var_160]
        VSTR            S2, [SP,#0x190+var_15C]
        VSTR            S4, [SP,#0x190+var_158]
      v32 = 0;
      v25 = 0.0;
      v26 = 1.0;
      v27 = 0.0;
      v28 = 0.0;
      __asm { VSTR            S4, [SP,#0x190+var_180] }
      HIDWORD(v23) = 0;
      __asm { VSTR            S18, [SP,#0x190+var_178] }
      HIDWORD(v24) = 0;
        VSTR            S10, [SP,#0x190+var_150]
        VSTR            S8, [SP,#0x190+var_14C]
        VSTR            S6, [SP,#0x190+var_148]
      v36 = 1065353216;
      glm::detail::operator*<float>((int)&v58, (int)&v37, (int)&v23);
      v23 = v58;
      v24 = *(_QWORD *)&v59;
      v25 = v60;
      v26 = v61;
      v27 = v62;
      v28 = v63;
      v29 = v64;
      v30 = v65;
      v31 = v66;
      v32 = v67;
      v33 = v68;
      v34 = v69;
      v35 = v70;
      v36 = v71;
      v20 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 33));
      _R0 = (*(int (**)(void))(*(_DWORD *)v20 + 252))();
        VMOV            S0, R0
        VLDR            S2, [SP,#0x190+var_180]
        VDIV.F32        S0, S16, S0
        VMUL.F32        S2, S2, S0
        VSTR            S2, [SP,#0x190+var_180]
        VLDR            S2, [SP,#0x190+var_180+4]
        VSTR            S2, [SP,#0x190+var_180+4]
        VLDR            S2, [SP,#0x190+var_178]
        VSTR            S2, [SP,#0x190+var_178]
        VLDR            S2, [SP,#0x190+var_178+4]
        VSTR            S2, [SP,#0x190+var_178+4]
        VLDR            S2, [SP,#0x190+var_170]
        VSTR            S2, [SP,#0x190+var_170]
        VLDR            S2, [SP,#0x190+var_16C]
        VSTR            S2, [SP,#0x190+var_16C]
        VLDR            S2, [SP,#0x190+var_168]
        VSTR            S2, [SP,#0x190+var_168]
        VLDR            S2, [SP,#0x190+var_164]
        VSTR            S2, [SP,#0x190+var_164]
        VLDR            S2, [SP,#0x190+var_160]
        VSTR            S2, [SP,#0x190+var_160]
        VLDR            S2, [SP,#0x190+var_15C]
        VLDR            S2, [SP,#0x190+var_158]
        VSTR            S2, [SP,#0x190+var_158]
        VLDR            S2, [SP,#0x190+var_154]
        VMUL.F32        S0, S2, S0
        VSTR            S0, [SP,#0x190+var_154]
      ClientInstance::getHoloInput(*((ClientInstance **)v1 + 33));
      __asm { VSTR            S16, [R0,#0x280] }
      ClientInstance::getHolosceneRenderer(*((ClientInstance **)v1 + 33));
      __asm { VSTR            S16, [R0] }
      v22 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 33));
      result = (*(int (**)(void))(*(_DWORD *)v22 + 164))();
    }
  }
  return result;
}


int __fastcall GameRenderer::wasViewInsideSolidBlockLastRender(GameRenderer *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 95);
  if ( v1 )
    result = *(_BYTE *)(v1 + 152) != 0;
  else
    result = 0;
  return result;
}


int __fastcall GameRenderer::_computeCandidateUIPlacementHorizontal(GameRenderer *this, int a2)
{
  int v2; // r5@1
  GameRenderer *v3; // r4@1
  int v4; // r0@1
  int v5; // r0@1
  Entity *v10; // r0@1
  const Vec3 *v11; // r0@1
  float *v12; // r2@2
  int result; // r0@4
  int v14; // r1@4
  int v15; // r2@4
  int v16; // [sp+14h] [bp-8Ch]@1
  char v17; // [sp+28h] [bp-78h]@2
  float v18; // [sp+58h] [bp-48h]@1
  int v19; // [sp+5Ch] [bp-44h]@1
  int v20; // [sp+68h] [bp-38h]@1
  int v21; // [sp+6Ch] [bp-34h]@1
  float v22; // [sp+70h] [bp-30h]@1
  float v23; // [sp+74h] [bp-2Ch]@1
  int v25; // [sp+80h] [bp-20h]@1
  int v26; // [sp+84h] [bp-1Ch]@1
  float v27; // [sp+88h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a2 + 132));
  HolographicPlatform::getTransformTranslation((int)&v25, v4, 16, 1, 10);
  v5 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 132));
  HolographicPlatform::getTransformXDir((int)&v23, v5, 16, 1, 10);
  __asm
  {
    VMOV.F32        S0, #6.0
    VLDR            S4, [SP,#0xA0+var_24]
    VLDR            S2, [SP,#0xA0+var_2C]
  }
  v20 = v25;
  v21 = v26;
  v22 = v27;
    VLDR            S6, [SP,#0xA0+var_18]
    VMUL.F32        S4, S4, S0
    VMUL.F32        S0, S2, S0
    VLDR            S2, [SP,#0xA0+var_20]
    VSUB.F32        S2, S2, S4
    VADD.F32        S0, S6, S0
    VSTR            S2, [SP,#0xA0+var_48]
  v19 = v26;
  __asm { VSTR            S0, [SP,#0xA0+var_40] }
  v10 = (Entity *)ClientInstance::getCameraTargetEntity(*(ClientInstance **)(v2 + 132));
  v11 = (const Vec3 *)Entity::getRegion(v10);
  BlockSource::clip((BlockSource *)&v16, v11, (const Vec3 *)&v20, (int)&v18, 0, 0, 200, 0);
  if ( (v16 & 0xFFFFFFFE) == 2 )
    v12 = &v18;
  else
    v12 = (float *)&v17;
  result = *(_DWORD *)v12;
  v14 = *((_DWORD *)v12 + 1);
  v15 = *((_DWORD *)v12 + 2);
  *(_DWORD *)v3 = result;
  *((_DWORD *)v3 + 1) = v14;
  *((_DWORD *)v3 + 2) = v15;
  return result;
}


void __fastcall GameRenderer::setLevel(GameRenderer *this, Level *a2, Dimension *a3)
{
  GameRenderer::setLevel(this, a2, a3);
}


void __fastcall GameRenderer::_tickLightTexture(GameRenderer *this, const Dimension *a2, float a3)
{
  GameRenderer *v3; // r5@1
  const Mob *v4; // r4@1
  Dimension *v5; // r6@1
  Options *v6; // r0@1
  Mob *v7; // r0@1
  int v8; // r0@1
  LevelRendererPlayer *v9; // r0@2
  float v10; // r2@2
  Weather *v16; // r0@5
  int v17; // r0@5
  Options *v18; // r0@7
  int v19; // r6@7
  int v20; // r0@7
  int v21; // r7@7
  int v22; // r0@7
  Dimension v23; // [sp+8h] [bp-58h]@1
  int v24; // [sp+Ch] [bp-54h]@1
  int v25; // [sp+10h] [bp-50h]@1
  int v26; // [sp+14h] [bp-4Ch]@1
  int v27; // [sp+18h] [bp-48h]@1
  int v28; // [sp+1Ch] [bp-44h]@1
  int v29; // [sp+20h] [bp-40h]@1
  int v30; // [sp+24h] [bp-3Ch]@1
  int v31; // [sp+28h] [bp-38h]@1
  int v32; // [sp+2Ch] [bp-34h]@1
  int v33; // [sp+30h] [bp-30h]@1
  int v34; // [sp+34h] [bp-2Ch]@1
  char v35; // [sp+38h] [bp-28h]@1
  float v36; // [sp+3Ch] [bp-24h]@1
  int v37; // [sp+40h] [bp-20h]@1
  Dimension *v38; // [sp+44h] [bp-1Ch]@1

  v3 = this;
  v4 = (const Mob *)LODWORD(a3);
  v29 = 0;
  v30 = 0;
  v5 = (Dimension *)a2;
  v27 = 0;
  v28 = 0;
  v36 = 0.0;
  v37 = 0;
  Dimension::getSunriseColor(&v23, *(float *)&a2, SLODWORD(a3));
  v27 = *(_DWORD *)&v23;
  v28 = v24;
  v29 = v25;
  v30 = v26;
  v33 = Dimension::getSkyDarken(v5, *(float *)&v4);
  v31 = Dimension::getId(v5);
  v6 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v3 + 33));
  v32 = Options::getGamma(v6);
  v38 = Dimension::getBrightnessRamp(v5);
  v34 = 0;
  v7 = (Mob *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 33));
  v8 = Mob::hasEffect(v7, (const MobEffect *)MobEffect::NIGHT_VISION);
  v35 = v8;
  if ( v8 == 1 )
  {
    v9 = (LevelRendererPlayer *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 33));
    _R0 = LevelRendererPlayer::getNightVisionScale(v9, v4, v10);
    __asm { VMOV            S0, R0 }
  }
  else
    __asm { VLDR            S0, =0.0 }
  __asm { VSTR            S0, [SP,#0x60+var_24] }
  if ( ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 33)) )
    v16 = (Weather *)Dimension::getWeather(v5);
    v17 = Weather::getSkyFlashTime(v16);
    v17 = 0;
  v37 = v17;
  v18 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v3 + 33));
  Options::getGamma(v18);
  v19 = ClientInstance::getLightTexture(*((ClientInstance **)v3 + 33));
  v20 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 33));
  v21 = (*(int (**)(void))(*(_DWORD *)v20 + 292))();
  v22 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 33));
  (*(void (**)(void))(*(_DWORD *)v22 + 296))();
  LightTexture::refresh(v19, (int)&v27, (int)v4, v21);
}


int __fastcall GameRenderer::render(GameRenderer *this, float a2)
{
  int v3; // r5@1
  int v10; // r0@1
  char *v11; // r5@1
  float *v12; // r10@1
  int v13; // r0@1
  int v14; // r0@1
  __int64 *v15; // r6@1
  float *v16; // r9@1
  int v17; // r1@1
  double v18; // r0@1
  int v21; // r0@1
  int v22; // t1@1
  int v23; // r0@1
  __int64 *v24; // r1@1
  int *v25; // r0@1
  float *v26; // lr@1
  char *v27; // r12@1
  int *v28; // r2@1
  __int64 *v29; // r3@1
  int v31; // ST30_4@4
  int v32; // r4@4
  int v33; // ST2C_4@4
  int v34; // ST28_4@4
  int v35; // ST24_4@4
  int v36; // r10@4
  int v37; // lr@4
  int v38; // ST38_4@4
  int v39; // r12@4
  int v40; // r11@4
  int v41; // r9@4
  int v42; // r6@4
  int v43; // r8@4
  int v44; // r7@4
  int v45; // r2@4
  int v46; // r1@4
  int v47; // r0@4
  int v48; // r2@4
  int v49; // r0@4
  int v50; // r0@4
  int v52; // r6@9
  _DWORD *v53; // r0@9
  int v54; // r0@11
  int result; // r0@11
  ClientInputHandler *v56; // r0@13
  void *v57; // r0@15
  GuiData *v58; // r5@18
  ClientInputHandler *v59; // r0@18
  int v64; // [sp+10h] [bp-108h]@1
  float *v65; // [sp+14h] [bp-104h]@1
  __int64 *v66; // [sp+18h] [bp-100h]@1
  int *v67; // [sp+1Ch] [bp-FCh]@1
  GameRenderer *v68; // [sp+34h] [bp-E4h]@1
  char *v69; // [sp+38h] [bp-E0h]@1
  char *v70; // [sp+3Ch] [bp-DCh]@1
  char *v71; // [sp+40h] [bp-D8h]@1
  float v72; // [sp+44h] [bp-D4h]@18
  float v73; // [sp+48h] [bp-D0h]@18
  _DWORD *v74; // [sp+4Ch] [bp-CCh]@9
  void (*v75)(void); // [sp+54h] [bp-C4h]@9
  int (__fastcall *v76)(_DWORD **, ClientInstance *); // [sp+58h] [bp-C0h]@9
  char v77; // [sp+5Ch] [bp-BCh]@3
  int v78; // [sp+60h] [bp-B8h]@3
  int v79; // [sp+64h] [bp-B4h]@3
  int v80; // [sp+68h] [bp-B0h]@3
  int v81; // [sp+6Ch] [bp-ACh]@3
  int v82; // [sp+70h] [bp-A8h]@3
  int v83; // [sp+74h] [bp-A4h]@3
  int v84; // [sp+78h] [bp-A0h]@3
  int v85; // [sp+7Ch] [bp-9Ch]@3
  int v86; // [sp+80h] [bp-98h]@3
  int v87; // [sp+84h] [bp-94h]@3
  int v88; // [sp+88h] [bp-90h]@3
  int v89; // [sp+8Ch] [bp-8Ch]@3
  int v90; // [sp+90h] [bp-88h]@3
  int v91; // [sp+94h] [bp-84h]@3
  int v92; // [sp+98h] [bp-80h]@3
  char v93; // [sp+9Ch] [bp-7Ch]@1
  mce::RenderContext *v94; // [sp+A8h] [bp-70h]@4
  MatrixStack *v95; // [sp+ACh] [bp-6Ch]@1
  GuiData *v96; // [sp+B4h] [bp-64h]@18
  int v97; // [sp+BCh] [bp-5Ch]@1

  _R4 = this;
  v3 = LODWORD(a2);
  v68 = this;
  _R0 = getTimeS();
  __asm
  {
    VLDR            S0, [R4,#0xD4]
    VMOV            D1, R0, R1
    VCVT.F64.F32    D0, S0
    VSUB.F64        D0, D1, D0
    VCVT.F32.F64    S16, D1
    VCVT.F32.F64    S0, D0
    VMOV            R2, S16
    VMOV            R1, S0
  }
  mce::Clock::update((GameRenderer *)((char *)_R4 + 180), _R1, _R2);
  __asm { VSTR            S16, [R4,#0xD4] }
  GameRenderer::makeScreenContext((GameRenderer *)&v93, *(float *)&_R4, v3);
  v10 = MatrixStack::getTop((MatrixStack *)((char *)v95 + 32));
  v11 = (char *)&Matrix::IDENTITY;
  *(_QWORD *)v10 = *(_QWORD *)&Matrix::IDENTITY;
  *(_DWORD *)(v10 + 8) = qword_27E89F0;
  v71 = (char *)&qword_27E89F0 + 4;
  *(_DWORD *)(v10 + 12) = HIDWORD(qword_27E89F0);
  *(_DWORD *)(v10 + 16) = qword_27E89F8;
  v70 = (char *)&qword_27E89F8 + 4;
  *(_DWORD *)(v10 + 20) = HIDWORD(qword_27E89F8);
  *(_DWORD *)(v10 + 24) = unk_27E8A00;
  *(_DWORD *)(v10 + 28) = unk_27E8A04;
  v67 = (int *)&unk_27E8A04;
  *(_QWORD *)(v10 + 32) = qword_27E8A08;
  *(_DWORD *)(v10 + 40) = qword_27E8A10;
  v66 = &qword_27E8A10;
  v69 = (char *)&qword_27E8A10 + 4;
  *(_DWORD *)(v10 + 44) = HIDWORD(qword_27E8A10);
  *(float *)(v10 + 48) = qword_27E8A18;
  v12 = &qword_27E8A18 + 1;
  *(float *)(v10 + 52) = *(&qword_27E8A18 + 1);
  *(float *)(v10 + 56) = qword_27E8A20;
  v65 = &qword_27E8A20;
  *(float *)(v10 + 60) = *(&qword_27E8A20 + 1);
  v13 = MatrixStack::getTop(v95);
  *(_QWORD *)v13 = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)(v13 + 8) = qword_27E89F0;
  *(_QWORD *)(v13 + 16) = qword_27E89F8;
  *(_DWORD *)(v13 + 24) = unk_27E8A00;
  *(_DWORD *)(v13 + 28) = unk_27E8A04;
  *(_QWORD *)(v13 + 32) = qword_27E8A08;
  *(_QWORD *)(v13 + 40) = qword_27E8A10;
  *(_QWORD *)(v13 + 48) = *(_QWORD *)&qword_27E8A18;
  *(_QWORD *)(v13 + 56) = *(_QWORD *)&qword_27E8A20;
  v14 = MatrixStack::getTop((MatrixStack *)((char *)v95 + 16));
  *(_QWORD *)v14 = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)(v14 + 8) = qword_27E89F0;
  *(_DWORD *)(v14 + 16) = qword_27E89F8;
  v15 = &qword_27E8A08;
  v16 = &qword_27E8A18;
  *(_DWORD *)(v14 + 20) = HIDWORD(qword_27E89F8);
  *(_DWORD *)(v14 + 24) = unk_27E8A00;
  *(_DWORD *)(v14 + 28) = unk_27E8A04;
  *(_QWORD *)(v14 + 32) = qword_27E8A08;
  *(_QWORD *)(v14 + 40) = qword_27E8A10;
  *(_QWORD *)(v14 + 48) = *(_QWORD *)&qword_27E8A18;
  *(float *)(v14 + 56) = qword_27E8A20;
  v17 = *((_DWORD *)&qword_27E8A20 + 1);
  *(float *)(v14 + 60) = *(&qword_27E8A20 + 1);
  LODWORD(v18) = getTotalRealWorldTime(v14, v17);
    VLDR            D0, =3600.0
    VMOV            R2, R3, D0
  _R0 = COERCE_UNSIGNED_INT64(fmod(v18, _R2));
  __asm { VMOV            D0, R0, R1 }
  v64 = v97;
  __asm { VCVT.F32.F64    S16, D0 }
  v21 = *(_DWORD *)(v97 + 728);
  v22 = *(_DWORD *)(v21 + 20);
  __asm { VSTR            S16, [R1] }
  *(_BYTE *)(v21 + 17) = 1;
  v23 = ClientInstance::getHoloInput(*((ClientInstance **)v68 + 34));
  _ZF = (*(int (**)(void))(*(_DWORD *)v23 + 44))() == 0;
  v24 = &qword_27E89F0;
  v25 = &Matrix::IDENTITY + 1;
  v26 = &qword_27E8A20 + 1;
  v27 = (char *)&qword_27E8A08 + 4;
  v28 = (int *)&unk_27E8A00;
  v29 = &qword_27E89F8;
  if ( _ZF )
    __asm { VMOV            R1, S16 }
    v11 = &v77;
    Cubemap::createCubemapRotation((Cubemap *)&v77, _R1);
    v65 = (float *)&v91;
    v69 = (char *)&v88;
    v66 = (__int64 *)&v87;
    v67 = &v84;
    v70 = (char *)&v82;
    v71 = (char *)&v80;
    v26 = (float *)&v92;
    v12 = (float *)&v90;
    v16 = (float *)&v89;
    v27 = (char *)&v86;
    v15 = (__int64 *)&v85;
    v28 = &v83;
    v29 = (__int64 *)&v81;
    v24 = (__int64 *)&v79;
    v25 = &v78;
  v31 = *(_DWORD *)v26;
  v32 = *v28;
  v33 = *(_DWORD *)v65;
  v34 = *(_DWORD *)v12;
  v35 = *(_DWORD *)v16;
  v36 = *(_DWORD *)v27;
  v37 = *(_DWORD *)v70;
  v38 = *(_DWORD *)v69;
  v39 = *(_DWORD *)v24;
  v40 = *(_DWORD *)v66;
  v41 = *(_DWORD *)v15;
  v42 = *(_DWORD *)v71;
  v43 = *v67;
  v44 = *(_DWORD *)v29;
  v45 = *v25;
  v46 = *(_DWORD *)(v64 + 732);
  v47 = *(_DWORD *)(v46 + 20);
  *(_DWORD *)v47 = *(_DWORD *)v11;
  *(_DWORD *)(v47 + 4) = v45;
  v48 = v47 + 24;
  *(_DWORD *)(v47 + 8) = v39;
  *(_DWORD *)(v47 + 12) = v42;
  *(_DWORD *)(v47 + 16) = v44;
  *(_DWORD *)(v47 + 20) = v37;
  *(_DWORD *)v48 = v32;
  *(_DWORD *)(v48 + 4) = v43;
  *(_DWORD *)(v48 + 8) = v41;
  *(_DWORD *)(v48 + 12) = v36;
  *(_DWORD *)(v48 + 16) = v40;
  *(_DWORD *)(v47 + 44) = v38;
  *(_DWORD *)(v47 + 48) = v35;
  *(_DWORD *)(v47 + 52) = v34;
  *(_DWORD *)(v47 + 56) = v33;
  *(_DWORD *)(v47 + 60) = v31;
  *(_BYTE *)(v46 + 17) = 1;
  mce::ConstantBufferConstantsBase::sync((mce::ConstantBufferConstantsBase *)(v64 + 720), v94);
  v49 = ClientInstance::getHoloInput(*((ClientInstance **)v68 + 34));
  v50 = (*(int (**)(void))(*(_DWORD *)v49 + 44))();
  _ZF = v50 == 1;
  if ( v50 == 1 )
    _ZF = *((_BYTE *)v68 + 815) == 0;
    GameRenderer::_prepHoloTransforms(v68, 1.0, 0);
  *((_BYTE *)v68 + 815) = 0;
  mce::RenderGraph::cleanupRenderStage((GameRenderer *)((char *)v68 + 140));
  v52 = ClientInstance::getMinecraftGame(*((ClientInstance **)v68 + 33));
  v53 = operator new(4u);
  *v53 = v68;
  v74 = v53;
  v75 = (void (*)(void))sub_F01690;
  v76 = sub_F01614;
  MinecraftGame::forEachClientInstance(v52, (int)&v74);
  if ( v75 )
    v75();
  GameRenderer::setClearColor(*((ClientInstance **)v68 + 34), (int)&v93);
  mce::RenderGraph::render((unsigned __int64 *)((char *)v68 + 140));
  mce::RenderGraph::cleanupRenderScreens((GameRenderer *)((char *)v68 + 140));
  GameRenderer::_checkAndDrawInputUI((int)v68, (int)&v93);
  v54 = ClientInstance::getHoloInput(*((ClientInstance **)v68 + 34));
  result = (*(int (**)(void))(*(_DWORD *)v54 + 44))();
  if ( !result )
    result = ClientInstance::getMouseGrabbed(*((ClientInstance **)v68 + 34));
    if ( !result )
    {
      v56 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)v68 + 34));
      result = ClientInputHandler::getCurrentInputMode(v56);
      if ( result == 1 )
      {
        if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
          v57 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
        else
          v57 = &ServiceLocator<AppPlatform>::mDefaultService;
        result = (*(int (**)(void))(**(_DWORD **)v57 + 432))();
        if ( result == 1 )
        {
          v58 = v96;
          v59 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)v68 + 34));
          ClientInputHandler::getCursorPos(v59, &v73, &v72);
          __asm { VLDR            S16, [SP,#0x118+var_D0] }
          _R0 = GuiData::getInvGuiScale(v58);
          __asm
          {
            VMOV            S20, R0
            VLDR            S18, [SP,#0x118+var_D4]
          }
            VMOV            S0, R0
            VMUL.F32        S2, S20, S16
            VMUL.F32        S0, S0, S18
            VMOV            R2, S2
            VMOV            R3, S0
          result = GameRenderer::renderCursor((int)v68, (int)&v93, _R2, _R3);
        }
      }
    }
  return result;
}


GameRenderer *__fastcall GameRenderer::~GameRenderer(GameRenderer *this)
{
  GameRenderer *v1; // r4@1
  int v2; // r0@1
  Tessellator *v3; // r0@3
  Tessellator *v4; // r0@4
  void *v5; // r0@5
  void *v6; // r5@6
  char *v7; // r0@7
  char *v8; // r5@10 OVERLAPPED
  char *v9; // r6@10 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_26DC720;
  v2 = *((_DWORD *)this + 95);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 95) = 0;
  HoloHudDriftDynamics::~HoloHudDriftDynamics((GameRenderer *)((char *)v1 + 232));
  v3 = (Tessellator *)*((_DWORD *)v1 + 51);
  if ( v3 )
  {
    v4 = Tessellator::~Tessellator(v3);
    operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 51) = 0;
  v5 = (void *)*((_DWORD *)v1 + 40);
  if ( v5 )
    do
    {
      v6 = *(void **)v5;
      operator delete(v5);
      v5 = v6;
    }
    while ( v6 );
  _aeabi_memclr4(*((_QWORD *)v1 + 19), 4 * (*((_QWORD *)v1 + 19) >> 32));
  *((_DWORD *)v1 + 40) = 0;
  *((_DWORD *)v1 + 41) = 0;
  v7 = (char *)*((_DWORD *)v1 + 38);
  if ( v7 && (char *)v1 + 176 != v7 )
    operator delete(v7);
  *(_QWORD *)&v8 = *(_QWORD *)((char *)v1 + 140);
  if ( v8 != v9 )
      if ( *(_DWORD *)v8 )
        (*(void (**)(void))(**(_DWORD **)v8 + 4))();
      *(_DWORD *)v8 = 0;
      v8 += 4;
    while ( v9 != v8 );
    v8 = (char *)*((_DWORD *)v1 + 35);
  if ( v8 )
    operator delete(v8);
  mce::Texture::~Texture((GameRenderer *)((char *)v1 + 68));
  mce::Texture::~Texture((GameRenderer *)((char *)v1 + 4));
  return v1;
}


int __fastcall GameRenderer::GameRenderer(int a1, ClientInstance *a2)
{
  int v2; // r4@1
  ClientInstance *v3; // r6@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r5@3
  void *v7; // r7@3
  void *v8; // r7@4
  InsideCubeRenderer *v14; // r5@4

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26DC720;
  MinecraftGraphicsPipeline::MinecraftGraphicsPipeline((MinecraftGraphicsPipeline *)(a1 + 4));
  *(_DWORD *)(v2 + 132) = v3;
  *(_DWORD *)(v2 + 136) = v3;
  *(_DWORD *)(v2 + 140) = 0;
  *(_DWORD *)(v2 + 144) = 0;
  *(_DWORD *)(v2 + 148) = 0;
  *(_DWORD *)(v2 + 160) = 0;
  *(_DWORD *)(v2 + 164) = 0;
  *(_DWORD *)(v2 + 168) = 1065353216;
  LODWORD(v4) = v2 + 168;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v5 = sub_119C844(v4);
  *(_DWORD *)(v2 + 156) = v5;
  if ( v5 == 1 )
  {
    *(_DWORD *)(v2 + 176) = 0;
    v7 = (void *)(v2 + 176);
  }
  else
    if ( v5 >= 0x40000000 )
      sub_119C874();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v2 + 152) = v7;
  mce::Clock::Clock((mce::Clock *)(v2 + 180));
  v8 = operator new(0x10Cu);
  Tessellator::Tessellator((int)v8);
  *(_DWORD *)(v2 + 204) = v8;
  *(_DWORD *)(v2 + 208) = 0;
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VCVT.F32.F64    S0, D0
    VSTR            S0, [R4,#0xD4]
  *(_BYTE *)(v2 + 224) = 0;
  *(_DWORD *)(v2 + 216) = 0;
  *(_DWORD *)(v2 + 220) = 0;
  HoloHudDriftDynamics::HoloHudDriftDynamics((HoloHudDriftDynamics *)(v2 + 232), v3);
  *(_DWORD *)(v2 + 368) = 0;
  *(_DWORD *)(v2 + 372) = 0;
  *(_DWORD *)(v2 + 376) = 0;
  v14 = (InsideCubeRenderer *)operator new(0x9Cu);
  InsideCubeRenderer::InsideCubeRenderer(v14, v3);
  *(_DWORD *)(v2 + 380) = v14;
  *(_DWORD *)(v2 + 392) = 1065353216;
  *(_DWORD *)(v2 + 404) = 0;
  *(_DWORD *)(v2 + 408) = 0;
  *(_DWORD *)(v2 + 396) = 0;
  *(_DWORD *)(v2 + 400) = 0;
  *(_DWORD *)(v2 + 420) = 0;
  *(_DWORD *)(v2 + 424) = 0;
  *(_DWORD *)(v2 + 412) = 1065353216;
  *(_DWORD *)(v2 + 416) = 0;
  *(_QWORD *)(v2 + 428) = 4575657221408423936LL;
  *(_DWORD *)(v2 + 444) = 0;
  *(_DWORD *)(v2 + 448) = 0;
  *(_DWORD *)(v2 + 436) = 0;
  *(_DWORD *)(v2 + 440) = 0;
  *(_DWORD *)(v2 + 452) = 1065353216;
  *(_DWORD *)(v2 + 456) = 1065353216;
  *(_DWORD *)(v2 + 468) = 0;
  *(_DWORD *)(v2 + 472) = 0;
  *(_DWORD *)(v2 + 460) = 0;
  *(_DWORD *)(v2 + 464) = 0;
  *(_DWORD *)(v2 + 484) = 0;
  *(_DWORD *)(v2 + 488) = 0;
  *(_DWORD *)(v2 + 476) = 1065353216;
  *(_DWORD *)(v2 + 480) = 0;
  *(_QWORD *)(v2 + 492) = 4575657221408423936LL;
  *(_DWORD *)(v2 + 508) = 0;
  *(_DWORD *)(v2 + 512) = 0;
  *(_DWORD *)(v2 + 500) = 0;
  *(_DWORD *)(v2 + 504) = 0;
  *(_DWORD *)(v2 + 516) = 1065353216;
  *(_DWORD *)(v2 + 520) = 1065353216;
  *(_DWORD *)(v2 + 532) = 0;
  *(_DWORD *)(v2 + 536) = 0;
  *(_DWORD *)(v2 + 524) = 0;
  *(_DWORD *)(v2 + 528) = 0;
  *(_DWORD *)(v2 + 548) = 0;
  *(_DWORD *)(v2 + 552) = 0;
  *(_DWORD *)(v2 + 540) = 1065353216;
  *(_DWORD *)(v2 + 544) = 0;
  *(_QWORD *)(v2 + 556) = 4575657221408423936LL;
  *(_DWORD *)(v2 + 572) = 0;
  *(_DWORD *)(v2 + 576) = 0;
  *(_DWORD *)(v2 + 564) = 0;
  *(_DWORD *)(v2 + 568) = 0;
  *(_DWORD *)(v2 + 580) = 1065353216;
  *(_DWORD *)(v2 + 584) = 1065353216;
  *(_DWORD *)(v2 + 596) = 0;
  *(_DWORD *)(v2 + 600) = 0;
  *(_DWORD *)(v2 + 588) = 0;
  *(_DWORD *)(v2 + 592) = 0;
  *(_DWORD *)(v2 + 612) = 0;
  *(_DWORD *)(v2 + 616) = 0;
  *(_DWORD *)(v2 + 604) = 1065353216;
  *(_DWORD *)(v2 + 608) = 0;
  *(_QWORD *)(v2 + 620) = 4575657221408423936LL;
  *(_DWORD *)(v2 + 636) = 0;
  *(_DWORD *)(v2 + 640) = 0;
  *(_DWORD *)(v2 + 628) = 0;
  *(_DWORD *)(v2 + 632) = 0;
  *(_DWORD *)(v2 + 644) = 1065353216;
  *(_DWORD *)(v2 + 648) = 1065353216;
  *(_DWORD *)(v2 + 660) = 0;
  *(_DWORD *)(v2 + 664) = 0;
  *(_DWORD *)(v2 + 652) = 0;
  *(_DWORD *)(v2 + 656) = 0;
  *(_DWORD *)(v2 + 676) = 0;
  *(_DWORD *)(v2 + 680) = 0;
  *(_DWORD *)(v2 + 668) = 1065353216;
  *(_DWORD *)(v2 + 672) = 0;
  *(_QWORD *)(v2 + 684) = 4575657221408423936LL;
  *(_DWORD *)(v2 + 700) = 0;
  *(_DWORD *)(v2 + 704) = 0;
  *(_DWORD *)(v2 + 692) = 0;
  *(_DWORD *)(v2 + 696) = 0;
  *(_DWORD *)(v2 + 708) = 1065353216;
  *(_DWORD *)(v2 + 712) = 1065353216;
  *(_DWORD *)(v2 + 724) = 0;
  *(_DWORD *)(v2 + 728) = 0;
  *(_DWORD *)(v2 + 716) = 0;
  *(_DWORD *)(v2 + 720) = 0;
  *(_DWORD *)(v2 + 740) = 0;
  *(_DWORD *)(v2 + 744) = 0;
  *(_DWORD *)(v2 + 732) = 1065353216;
  *(_DWORD *)(v2 + 736) = 0;
  *(_QWORD *)(v2 + 748) = 4575657221408423936LL;
  *(_DWORD *)(v2 + 764) = 0;
  *(_DWORD *)(v2 + 768) = 0;
  *(_DWORD *)(v2 + 756) = 0;
  *(_DWORD *)(v2 + 760) = 0;
  *(_DWORD *)(v2 + 796) = 0;
  *(_DWORD *)(v2 + 800) = 0;
  *(_DWORD *)(v2 + 788) = 0;
  *(_DWORD *)(v2 + 792) = 0;
  *(_DWORD *)(v2 + 780) = 0;
  *(_DWORD *)(v2 + 784) = 0;
  *(_DWORD *)(v2 + 772) = 1065353216;
  *(_DWORD *)(v2 + 776) = 0;
  *(_DWORD *)(v2 + 804) = 1065353216;
  *(_DWORD *)(v2 + 808) = 0;
  *(_BYTE *)(v2 + 813) = 0;
  *(_BYTE *)(v2 + 814) = 0;
  *(_BYTE *)(v2 + 815) = 0;
  *(_DWORD *)(v2 + 816) = 1;
  *(_BYTE *)(v2 + 812) = 0;
  *(_DWORD *)(v2 + 384) = 0;
  *(_DWORD *)(v2 + 388) = 0;
  return v2;
}


int __fastcall GameRenderer::setClearColor(ClientInstance *this, int a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r5@1
  LevelRenderer *v4; // r0@2
  char *v5; // r0@2
  int v6; // r1@2
  int v7; // r2@2
  int v8; // r3@2
  int v9; // r5@2
  _DWORD *v10; // r0@2
  Entity *v11; // r0@4
  Entity *v12; // r0@5
  int v13; // r0@5
  int v14; // r2@5
  int v15; // r0@6
  int v16; // r0@7
  int result; // r0@10
  int v18; // [sp+0h] [bp-30h]@5
  int v19; // [sp+4h] [bp-2Ch]@5
  int v20; // [sp+8h] [bp-28h]@5
  int v21; // [sp+Ch] [bp-24h]@5
  char v22; // [sp+10h] [bp-20h]@2
  int v23; // [sp+14h] [bp-1Ch]@2
  int v24; // [sp+18h] [bp-18h]@2
  int v25; // [sp+1Ch] [bp-14h]@2

  v2 = this;
  v3 = a2;
  GameRenderer::mClearColor = 0;
  unk_27D0FE8 = 0;
  unk_27D0FEC = 0;
  unk_27D0FF0 = 0;
  if ( ClientInstance::getLevelRenderer(this) )
  {
    v4 = (LevelRenderer *)ClientInstance::getLevelRenderer(v2);
    v5 = LevelRenderer::getLevelRendererPlayer(v4);
    LevelRendererCamera::getFogClearColor((LevelRendererCamera *)&v22, (int)v5);
    v6 = *(_DWORD *)&v22;
    v7 = v23;
    v8 = v24;
    v9 = v25;
    v10 = &GameRenderer::mSplitScreenActive;
LABEL_6:
    v15 = (int)(v10 + 1);
    *(_DWORD *)v15 = v6;
    *(_DWORD *)(v15 + 4) = v7;
    *(_DWORD *)(v15 + 8) = v8;
    *(_DWORD *)(v15 + 12) = v9;
    goto LABEL_7;
  }
  if ( ClientInstance::getLocalPlayer(v2) )
    v11 = (Entity *)ClientInstance::getLocalPlayer(v2);
    if ( Entity::isRegionValid(v11) == 1 )
    {
      v12 = (Entity *)ClientInstance::getLocalPlayer(v2);
      v13 = Entity::getDimension(v12);
      v14 = *(_DWORD *)(v3 + 8);
      (*(void (__fastcall **)(int *))(*(_DWORD *)v13 + 140))(&v18);
      v6 = v18;
      v7 = v19;
      v8 = v20;
      v9 = v21;
      v10 = &GameRenderer::mSplitScreenActive;
      goto LABEL_6;
    }
LABEL_7:
  v16 = ClientInstance::getHoloInput(v2);
  if ( (*(int (**)(void))(*(_DWORD *)v16 + 44))() == 1 && ClientInstance::isExitingLevel(v2) == 1 )
    GameRenderer::mClearColor = 0;
    unk_27D0FE8 = 0;
    unk_27D0FEC = 0;
    unk_27D0FF0 = 0;
  result = ClientInstance::isSplitScreenActive(v2);
  LOBYTE(GameRenderer::mSplitScreenActive) = result;
  return result;
}


Entity *__fastcall GameRenderer::_adjustVRRotationActual(GameRenderer *this, int a2)
{
  int v3; // r6@1
  Entity *result; // r0@1
  Entity *v5; // r5@1
  int v6; // r0@2
  int v11; // r0@7
  char v13; // [sp+8h] [bp-58h]@7

  _R4 = this;
  v3 = a2;
  result = (Entity *)ClientInstance::getCameraTargetEntity(*((ClientInstance **)this + 33));
  v5 = result;
  if ( result )
  {
    v6 = ClientInstance::isShowingMenu(*((ClientInstance **)_R4 + 33));
    if ( v3 || (result = (Entity *)(v6 ^ 1), result == (Entity *)1) )
    {
      if ( Entity::isRiding(v5) == 1 && (result = (Entity *)*(_BYTE *)(Entity::getRide(v5) + 528)) != 0 )
      {
        __asm { VLDR            S0, [R4,#0x310] }
      }
      else
        v11 = ClientInstance::getHoloInput(*((ClientInstance **)_R4 + 33));
        HolographicPlatform::getTransform((int)&v13, v11, 20, 14, 15);
        _R0 = mce::MathUtility::getBestHorizDirFromViewMatrix((int)&v13);
        __asm { VMOV            S16, R0 }
        result = (Entity *)ClientInstance::getCameraTargetEntity(*((ClientInstance **)_R4 + 33));
        __asm
        {
          VLDR            S0, [R0,#0x7C]
          VADD.F32        S0, S0, S16
        }
      __asm
        VLDR            S2, [R4,#0x314]
        VADD.F32        S0, S0, S2
        VSTR            S0, [R4,#0x310]
    }
  }
  return result;
}


int __fastcall GameRenderer::onSubClientRemoved(int result, const ClientInstance *a2)
{
  if ( *(const ClientInstance **)(result + 132) == a2 )
    *(_DWORD *)(result + 132) = *(_DWORD *)(result + 136);
  return result;
}


int __fastcall GameRenderer::clearRenderTarget(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r2@1
  int v4; // r0@1

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)(v1 + 20);
  mce::RenderContext::clearColorBuffer();
  v4 = *(_DWORD *)(v1 + 12);
  return j_j_j__ZN3mce13RenderContext23clearDepthStencilBufferEPKNS_12ViewportInfoE();
}


int __fastcall GameRenderer::captureHeadsetDirForSleeping(GameRenderer *this)
{
  GameRenderer *v1; // r4@1
  int v2; // r0@1
  int result; // r0@1
  char v4; // [sp+8h] [bp-50h]@1

  v1 = this;
  v2 = ClientInstance::getHoloInput(*((ClientInstance **)this + 33));
  HolographicPlatform::getTransform((int)&v4, v2, 20, 15, 0);
  result = mce::MathUtility::getBestHorizDirFromViewMatrix((int)&v4);
  *((_DWORD *)v1 + 202) = result;
  return result;
}


void __fastcall GameRenderer::~GameRenderer(GameRenderer *this)
{
  GameRenderer *v1; // r0@1

  v1 = GameRenderer::~GameRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall GameRenderer::setInsideCubePlane(int a1, int a2, int a3)
{
  int result; // r0@1
  __int64 v4; // kr00_8@1

  result = *(_DWORD *)(a1 + 380);
  v4 = *(_QWORD *)a2;
  *(_QWORD *)(result + 20) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 28) = *(_DWORD *)a3;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a3 + 8);
  return result;
}


void __fastcall GameRenderer::setLevel(GameRenderer *this, Level *a2, Dimension *a3)
{
  Level *v3; // r5@1
  bool v4; // zf@1
  GameRenderer *v5; // r4@1
  mce::RenderContextImmediate *v6; // r0@4
  TickingTextureStage *v7; // r6@4
  mce::RenderContext *v8; // r0@5
  int v9; // r0@7
  MapRenderer *v10; // r0@7

  v3 = a2;
  v4 = a2 == 0;
  v5 = this;
  if ( a2 )
    v4 = a3 == 0;
  if ( !v4 )
  {
    GameRenderer::_tickLightTexture(this, a3, 1.0);
    v7 = (TickingTextureStage *)*((_DWORD *)v5 + 52);
    if ( v7 )
    {
      v8 = (mce::RenderContext *)mce::RenderContextImmediate::get(v6);
      TickingTextureStage::createRenderTarget(v7, v8);
    }
  }
  if ( !v3 )
    v9 = ClientInstance::getEntityRenderDispatcher(*((ClientInstance **)v5 + 33));
    v10 = (MapRenderer *)EntityRenderDispatcher::getRenderer(v9, 59);
    if ( v10 )
      j_j_j__ZN11MapRenderer9resetDataEv(v10);
}


int __fastcall GameRenderer::setClient(int result, ClientInstance *a2)
{
  *(_DWORD *)(result + 132) = a2;
  return result;
}


int __fastcall GameRenderer::getUITexture(GameRenderer *this, const unsigned __int8 *a2)
{
  const unsigned __int8 *v2; // r4@1
  MinecraftGame *v3; // r0@1
  ClientInstance *v4; // r0@1

  v2 = a2;
  v3 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)this + 33));
  v4 = (ClientInstance *)MinecraftGame::getClientInstance(v3, *v2);
  return j_j_j__ZN14ClientInstance12getUITextureEv(v4);
}


RakNet *__fastcall GameRenderer::renderDebugScreen(int a1, int a2, int a3)
{
  ClientInstance *v3; // r8@1
  __int64 v4; // kr10_8@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r6@8
  unsigned int v8; // r0@10
  Options *v9; // r0@16
  int v10; // r0@17
  Option *v11; // r0@17
  int v12; // r0@18
  RakNet *result; // r0@61
  char v147; // [sp+13Ch] [bp-85Ch]@1
  int v148; // [sp+140h] [bp-858h]@1
  RakNet *v150; // [sp+94Ch] [bp-4Ch]@1

  v3 = (ClientInstance *)a3;
  v150 = _stack_chk_guard;
  ClientInstance::getUser((ClientInstance *)&v147, a3);
  v4 = *(_QWORD *)&v147;
  if ( v148 )
  {
    v5 = (unsigned int *)(v148 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
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
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  }
  if ( (_DWORD)v4 )
    v9 = (Options *)ClientInstance::getOptions(v3);
    if ( !Options::getRenderDebug(v9) )
      v10 = ClientInstance::getOptions(v3);
      v11 = (Option *)Options::get(v10, 119);
      Option::getBool(v11);
    v12 = ClientInstance::getHoloInput(v3);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 44))(v12) == 1 )
      ClientInstance::getLevel(v3);
  result = (RakNet *)(_stack_chk_guard - v150);
  if ( _stack_chk_guard != v150 )
    _stack_chk_fail(result);
  return result;
}
