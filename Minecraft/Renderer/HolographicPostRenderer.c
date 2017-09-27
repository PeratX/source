

int __fastcall HolographicPostRenderer::clone(HolographicPostRenderer *this)
{
  HolographicPostRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI23HolographicPostRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


int __fastcall HolographicPostRenderer::_buildLevelMesh(HolographicPostRenderer *this, Tessellator *a2)
{
  char *v3; // r4@1
  Tessellator *v4; // r5@1
  char v10; // [sp+4h] [bp-D4h]@1
  float v11; // [sp+68h] [bp-70h]@1
  unsigned int v12; // [sp+70h] [bp-68h]@1
  float v13; // [sp+74h] [bp-64h]@1
  int v14; // [sp+7Ch] [bp-5Ch]@1
  float v15; // [sp+80h] [bp-58h]@1
  int v16; // [sp+88h] [bp-50h]@1
  float v17; // [sp+8Ch] [bp-4Ch]@1
  int v18; // [sp+94h] [bp-44h]@1

  _R6 = this;
  v3 = (char *)this + 180;
  v4 = a2;
  mce::Mesh::reset((HolographicPostRenderer *)((char *)this + 180));
  __asm
  {
    VLDR            S16, [R6,#0x48]
    VLDR            S18, [R6,#0x4C]
  }
  Tessellator::begin((int)v4, 2, 4, 0);
    VMOV.F32        S20, #-0.5
    VMOV.F32        S22, #0.5
    VMUL.F32        S24, S16, S20
    VMUL.F32        S26, S18, S22
    VSTR            S24, [SP,#0xD8+var_4C]
    VSTR            S26, [SP,#0xD8+var_48]
  v18 = 0;
  Tessellator::vertexUV(v4, (const Vec3 *)&v17, 4575657221408423936LL);
    VMUL.F32        S16, S16, S22
    VSTR            S16, [SP,#0xD8+var_58]
    VSTR            S26, [SP,#0xD8+var_54]
  v16 = 0;
  Tessellator::vertexUV(v4, (const Vec3 *)&v15, 4575657222473777152LL);
    VMUL.F32        S18, S18, S20
    VSTR            S16, [SP,#0xD8+var_64]
    VSTR            S18, [SP,#0xD8+var_60]
  v14 = 0;
  Tessellator::vertexUV(v4, (const Vec3 *)&v13, 1065353216LL);
    VSTR            S24, [SP,#0xD8+var_70]
    VSTR            S18, [SP,#0xD8+var_6C]
  v12 = 2147483648;
  Tessellator::vertexUV(v4, (const Vec3 *)&v11, 0LL);
  Tessellator::beginIndices(v4, 6);
  Tessellator::quad(v4, 3u, 2u, 1u, 0);
  Tessellator::end((Tessellator *)&v10, (const char *)v4, 0, 0);
  mce::Mesh::operator=((int)v3, (int)&v10);
  return mce::Mesh::~Mesh((mce::Mesh *)&v10);
}


mce::Texture *__fastcall HolographicPostRenderer::_drawUIQuad(HolographicPostRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3)
{
  MinecraftUIRenderContext *v3; // r11@1
  ClientInstance *v5; // r6@1
  int v6; // r7@1
  GameRenderer *v7; // r0@1
  mce::Texture *result; // r0@1
  Tessellator *v9; // r4@2
  GuiData *v10; // r0@2
  mce::Buffer *v16; // r5@6
  mce::WorldConstantsHolographic *v17; // r2@8
  int v18; // r0@8
  int v19; // r0@8
  mce::RenderContext *v20; // r9@8
  ShaderColor *v22; // r2@8
  int v23; // r6@8
  int v24; // r1@8
  mce::Buffer *v25; // r0@9
  int v26; // r2@9
  ShaderColor *v27; // r0@10
  mce::WorldConstantsHolographic *v28; // r1@11
  ClientInstance *v29; // [sp+4h] [bp-1ACh]@8
  mce::Texture *v30; // [sp+Ch] [bp-1A4h]@2
  int v31; // [sp+10h] [bp-1A0h]@10
  signed int v32; // [sp+14h] [bp-19Ch]@10
  int v33; // [sp+18h] [bp-198h]@10
  int v34; // [sp+20h] [bp-190h]@8
  signed int v35; // [sp+24h] [bp-18Ch]@8
  int v36; // [sp+28h] [bp-188h]@8
  int v37; // [sp+30h] [bp-180h]@8
  int v38; // [sp+34h] [bp-17Ch]@8
  int v39; // [sp+38h] [bp-178h]@8
  int v40; // [sp+3Ch] [bp-174h]@8
  int v41; // [sp+40h] [bp-170h]@8
  int v42; // [sp+44h] [bp-16Ch]@8
  int v43; // [sp+48h] [bp-168h]@8
  int v44; // [sp+4Ch] [bp-164h]@8
  int v45; // [sp+50h] [bp-160h]@8
  int v46; // [sp+54h] [bp-15Ch]@8
  int v47; // [sp+58h] [bp-158h]@8
  int v48; // [sp+5Ch] [bp-154h]@8
  int v49; // [sp+60h] [bp-150h]@8
  int v50; // [sp+64h] [bp-14Ch]@8
  int v51; // [sp+68h] [bp-148h]@8
  int v52; // [sp+6Ch] [bp-144h]@8
  char v53; // [sp+70h] [bp-140h]@8
  char v54; // [sp+B0h] [bp-100h]@8
  int v55; // [sp+F0h] [bp-C0h]@8
  int v56; // [sp+F4h] [bp-BCh]@8
  int v57; // [sp+F8h] [bp-B8h]@8
  int v58; // [sp+FCh] [bp-B4h]@8
  int v59; // [sp+100h] [bp-B0h]@8
  signed int v60; // [sp+104h] [bp-ACh]@8
  int v61; // [sp+108h] [bp-A8h]@8
  int v62; // [sp+10Ch] [bp-A4h]@8
  int v63; // [sp+110h] [bp-A0h]@8
  int v64; // [sp+114h] [bp-9Ch]@8
  signed int v65; // [sp+118h] [bp-98h]@8
  int v66; // [sp+11Ch] [bp-94h]@8
  int v67; // [sp+120h] [bp-90h]@8
  int v68; // [sp+124h] [bp-8Ch]@8
  int v69; // [sp+128h] [bp-88h]@8
  int v70; // [sp+12Ch] [bp-84h]@8
  unsigned __int8 v71; // [sp+137h] [bp-79h]@1
  int v72; // [sp+138h] [bp-78h]@8
  int v73; // [sp+13Ch] [bp-74h]@8
  int v74; // [sp+140h] [bp-70h]@8
  int v75; // [sp+144h] [bp-6Ch]@8
  int v76; // [sp+148h] [bp-68h]@8
  int v77; // [sp+14Ch] [bp-64h]@8
  int v78; // [sp+150h] [bp-60h]@8
  int v79; // [sp+154h] [bp-5Ch]@8
  int v80; // [sp+158h] [bp-58h]@8
  int v81; // [sp+15Ch] [bp-54h]@8
  int v82; // [sp+160h] [bp-50h]@8
  int v83; // [sp+164h] [bp-4Ch]@8
  int v84; // [sp+168h] [bp-48h]@8
  int v85; // [sp+16Ch] [bp-44h]@8
  int v86; // [sp+170h] [bp-40h]@8
  int v87; // [sp+174h] [bp-3Ch]@8

  v3 = a2;
  _R8 = this;
  v5 = a3;
  v6 = MinecraftUIRenderContext::getScreenContext(a2);
  v7 = (GameRenderer *)ClientInstance::getGameRenderer(v5);
  v71 = 0;
  result = (mce::Texture *)GameRenderer::getUITexture(v7, &v71);
  if ( result )
  {
    v30 = result;
    v9 = *(Tessellator **)(v6 + 40);
    v10 = (GuiData *)ClientInstance::getGuiData(v5);
    _R0 = GuiData::getScreenSizeData(v10);
    __asm
    {
      VLDR            S16, [R0,#0x10]
      VLDR            S0, [R8,#0x40]
      VLDR            S18, [R0,#0x14]
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !_ZF )
      goto LABEL_14;
      VLDR            S0, [R8,#0x44]
      VCMPE.F32       S0, S18
    if ( !_ZF
      || (v16 = (HolographicPostRenderer *)((char *)_R8 + 80),
          !mce::Mesh::isValid((HolographicPostRenderer *)((char *)_R8 + 80))) )
LABEL_14:
      __asm
      {
        VSTR            S16, [R8,#0x40]
        VSTR            S18, [R8,#0x44]
      }
      HolographicPostRenderer::_buildUIQuadMesh(_R8, v9);
      v16 = (HolographicPostRenderer *)((char *)_R8 + 80);
    v55 = 1065353216;
    v58 = 0;
    v59 = 0;
    v56 = 0;
    v57 = 0;
    v62 = 0;
    v63 = 0;
    v60 = 1065353216;
    v61 = 0;
    v64 = 0;
    v65 = 1065353216;
    v68 = 0;
    v69 = 0;
    v66 = 0;
    v67 = 0;
    v70 = 1065353216;
    mce::WorldConstantsHolographic::getMatrixPatch(*(_DWORD *)(v6 + 32) + 36, (int)&v55);
    v29 = (ClientInstance *)(*(_DWORD *)(MinecraftUIRenderContext::getScreenContext(v3) + 32) + 36);
    ScreenSetupCleanupHelper::setupForVRDrawing(v5, v29, v17);
    v18 = ClientInstance::getHoloInput(v5);
    HolographicPlatform::getTransform((int)&v54, v18, 6, 15, 8);
    v19 = ClientInstance::getHoloInput(v5);
    HolographicPlatform::getTransform((int)&v53, v19, 5, 6, 0);
    glm::detail::operator*<float>((int)&v72, (int)&v54, (int)&v53);
    _aeabi_memclr8(&v37, 56);
    v37 = v72;
    v38 = v73;
    v39 = v74;
    v40 = v75;
    v41 = v76;
    v42 = v77;
    v43 = v78;
    v44 = v79;
    v45 = v80;
    v46 = v81;
    v47 = v82;
    v48 = v83;
    v49 = v84;
    v50 = v85;
    v51 = v86;
    v52 = v87;
    mce::WorldConstantsHolographic::setMatrixPatch(*(_DWORD *)(v6 + 32) + 36, (int)&v37);
    v20 = *(mce::RenderContext **)(MinecraftUIRenderContext::getScreenContext(v3) + 12);
    mce::Texture::bindTexture(v30, v20, 0, 2u);
    _R0 = ClientInstance::getHoloInput(v5);
    v22 = *(ShaderColor **)(v6 + 48);
    __asm { VLDR            S16, [R0,#0x288] }
    v34 = 1065353216;
    v35 = 1065353216;
    v36 = 1065353216;
    __asm { VSTR            S16, [SP,#0x1B0+var_184] }
    ShaderColor::setColor(v22, (const Color *)&v34);
    v23 = ClientInstance::isShowingMenu(v5);
    v24 = MinecraftUIRenderContext::getScreenContext(v3);
    if ( v23 )
      v25 = v16;
      v26 = (int)_R8 + 16;
    else
      mce::Mesh::render(v16, v24, (int)_R8 + 28, 0, 0);
      __asm { VMOV.F32        S0, #0.25 }
      v27 = *(ShaderColor **)(v6 + 48);
      v31 = 1065353216;
      v32 = 1065353216;
      v33 = 1065353216;
        VMUL.F32        S0, S16, S0
        VSTR            S0, [SP,#0x1B0+var_194]
      ShaderColor::setColor(v27, (const Color *)&v31);
      v24 = MinecraftUIRenderContext::getScreenContext(v3);
    mce::Mesh::render(v25, v24, v26, 0, 0);
    mce::Texture::unbindTexture(v30, v20, 0);
    mce::WorldConstantsHolographic::setMatrixPatch(*(_DWORD *)(v6 + 32) + 36, (int)&v55);
    result = (mce::Texture *)ScreenSetupCleanupHelper::cleanupFromVRDrawing(v29, v28);
  }
  return result;
}


int __fastcall HolographicPostRenderer::onAppSuspended(HolographicPostRenderer *this)
{
  HolographicPostRenderer *v1; // r4@1

  v1 = this;
  mce::Mesh::reset((HolographicPostRenderer *)((char *)this + 80));
  return j_j_j__ZN3mce4Mesh5resetEv_0((HolographicPostRenderer *)((char *)v1 + 180));
}


int __fastcall HolographicPostRenderer::_drawHandPointer(HolographicPostRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3)
{
  MinecraftUIRenderContext *v3; // r5@1
  ClientInstance *v4; // r6@1
  ClientInstance *v5; // r4@1
  mce::WorldConstantsHolographic *v6; // r2@1
  Options *v7; // r0@1
  int v8; // r7@4
  int v9; // r0@4
  Options *v10; // r0@5
  mce::WorldConstantsHolographic *v11; // r1@5
  int v12; // r6@7
  int v13; // r0@7

  v3 = a2;
  v4 = a3;
  v5 = (ClientInstance *)(*(_DWORD *)(MinecraftUIRenderContext::getScreenContext(a2) + 32) + 36);
  ScreenSetupCleanupHelper::setupForVRDrawing(v4, v5, v6);
  v7 = (Options *)ClientInstance::getOptions(v4);
  if ( Options::getVRHandPointer(v7) == 1
    && (ClientInstance::isHoloRealityMode(v4) != 1 || !ClientInstance::isVRTransitioning(v4)) )
  {
    v8 = ClientInstance::getHolosceneRenderer(v4);
    v9 = MinecraftUIRenderContext::getScreenContext(v3);
    HolosceneRenderer::renderHandPointer(v8, v9);
  }
  v10 = (Options *)ClientInstance::getOptions(v4);
  if ( Options::getVRHandsVisible(v10) == 1 && !ClientInstance::isHoloRealityMode(v4) )
    v12 = ClientInstance::getHolosceneRenderer(v4);
    v13 = MinecraftUIRenderContext::getScreenContext(v3);
    HolosceneRenderer::renderHand(v12, v13);
  return j_j_j__ZN24ScreenSetupCleanupHelper20cleanupFromVRDrawingERN3mce25WorldConstantsHolographicE(v5, v11);
}


int __fastcall HolographicPostRenderer::_updateUIQuadMesh(HolographicPostRenderer *this, Tessellator *a2, ClientInstance *a3)
{
  Tessellator *v4; // r4@1
  GuiData *v5; // r0@1
  int v12; // [sp+Ch] [bp-14h]@0

  _R5 = this;
  v4 = a2;
  v5 = (GuiData *)ClientInstance::getGuiData(a3);
  _R0 = GuiData::getScreenSizeData(v5);
  __asm
  {
    VLDR            S16, [R0,#0x10]
    VLDR            S0, [R5,#0x40]
    VLDR            S18, [R0,#0x14]
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm
    {
      VLDR            S0, [R5,#0x44]
      VCMPE.F32       S0, S18
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      if ( mce::Mesh::isValid((HolographicPostRenderer *)((char *)_R5 + 80)) )
        JUMPOUT(__CS__, v12);
    VSTR            S16, [R5,#0x40]
    VSTR            S18, [R5,#0x44]
  return j_j_j__ZN23HolographicPostRenderer16_buildUIQuadMeshER11Tessellator(_R5, v4);
}


int __fastcall HolographicPostRenderer::_checkAndDrawHoloUIFrameAndCursor(HolographicPostRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3)
{
  ClientInstance *v3; // r6@1
  MinecraftUIRenderContext *v4; // r5@1
  int v5; // r0@1
  int result; // r0@1
  ClientInstance *v7; // r4@2
  mce::WorldConstantsHolographic *v8; // r2@2
  int v9; // r0@4
  int v10; // r7@9
  int v11; // r0@9
  mce::WorldConstantsHolographic *v12; // r1@10
  int v13; // r0@11
  GameRenderer *v14; // r0@13
  int v15; // r6@13
  int v16; // r5@13
  __int64 v22; // [sp+0h] [bp-68h]@13
  __int64 v23; // [sp+8h] [bp-60h]@13
  __int64 v24; // [sp+10h] [bp-58h]@13
  __int64 v25; // [sp+18h] [bp-50h]@13
  __int64 v26; // [sp+20h] [bp-48h]@13
  __int64 v27; // [sp+28h] [bp-40h]@13
  __int64 v28; // [sp+30h] [bp-38h]@13
  __int64 v29; // [sp+38h] [bp-30h]@13
  float v30; // [sp+40h] [bp-28h]@13
  float v31; // [sp+44h] [bp-24h]@13

  v3 = a3;
  v4 = a2;
  v5 = ClientInstance::getHoloInput(a3);
  result = (*(int (**)(void))(*(_DWORD *)v5 + 44))();
  if ( result == 1 )
  {
    v7 = (ClientInstance *)(*(_DWORD *)(MinecraftUIRenderContext::getScreenContext(v4) + 32) + 36);
    ScreenSetupCleanupHelper::setupForVRDrawing(v3, v7, v8);
    if ( ClientInstance::isHoloCursorNeeded(v3) || *(_BYTE *)(ClientInstance::getHoloInput(v3) + 661) )
    {
      v9 = ClientInstance::getHoloInput(v3);
      if ( (*(int (**)(void))(*(_DWORD *)v9 + 268))() != 2
        && (ClientInstance::isHoloRealityMode(v3) != 1 || ClientInstance::isRealityFullVRMode(v3) == 1)
        && *(_BYTE *)(ClientInstance::getGameRenderer(v3) + 812)
        && ClientInstance::getHolosceneRenderer(v3) )
      {
        v10 = ClientInstance::getHolosceneRenderer(v3);
        v11 = MinecraftUIRenderContext::getScreenContext(v4);
        HolosceneRenderer::renderHoloUICursor(v10, v11);
      }
    }
    if ( ClientInstance::isLivingroomMode(v3) == 1 )
      v13 = ClientInstance::getHoloInput(v3);
      if ( (*(int (**)(void))(*(_DWORD *)v13 + 308))() == 1 )
        if ( ClientInstance::getHolosceneRenderer(v3) )
        {
          v14 = (GameRenderer *)ClientInstance::getGameRenderer(v3);
          GameRenderer::getHoloLevelWidthHeight(v14, &v31, &v30);
          v15 = ClientInstance::getHolosceneRenderer(v3);
          v16 = MinecraftUIRenderContext::getScreenContext(v4);
          __asm { VLDR            S16, [SP,#0x68+var_24] }
          _aeabi_memclr8(&v22, 60);
          __asm
          {
            VMOV.F32        S0, #0.5
            VMUL.F32        S0, S16, S0
          }
          v22 = *(_QWORD *)&Matrix::IDENTITY;
          v23 = qword_27E89F0;
          __asm { VMOV            R2, S0 }
          v24 = qword_27E89F8;
          v25 = qword_27E8A00;
          v26 = qword_27E8A08;
          v27 = qword_27E8A10;
          v28 = *(_QWORD *)&qword_27E8A18;
          v29 = *(_QWORD *)&qword_27E8A20;
          HolosceneRenderer::renderFrame_Level(v15, v16, _R2, (int)&v22);
        }
    result = ScreenSetupCleanupHelper::cleanupFromVRDrawing(v7, v12);
  }
  return result;
}


int __fastcall HolographicPostRenderer::_drawLivingRoom(HolographicPostRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3)
{
  MinecraftUIRenderContext *v3; // r4@1
  int v4; // r5@1
  int v5; // r1@1

  v3 = a2;
  v4 = ClientInstance::getHolosceneRenderer(a3);
  v5 = MinecraftUIRenderContext::getScreenContext(v3);
  return j_j_j__ZN17HolosceneRenderer16renderLivingRoomER13ScreenContext(v4, v5);
}


void __fastcall HolographicPostRenderer::~HolographicPostRenderer(HolographicPostRenderer *this)
{
  HolographicPostRenderer::~HolographicPostRenderer(this);
}


int __fastcall HolographicPostRenderer::_buildUIQuadMesh(HolographicPostRenderer *this, Tessellator *a2)
{
  char *v3; // r4@1
  Tessellator *v4; // r5@1
  __int64 v5; // kr00_8@1
  char v11; // [sp+8h] [bp-A8h]@1
  int v12; // [sp+6Ch] [bp-44h]@1
  int v13; // [sp+74h] [bp-3Ch]@1
  int v14; // [sp+78h] [bp-38h]@1
  int v15; // [sp+7Ch] [bp-34h]@1
  int v16; // [sp+80h] [bp-30h]@1
  int v17; // [sp+84h] [bp-2Ch]@1
  __int64 v18; // [sp+88h] [bp-28h]@1
  int v19; // [sp+90h] [bp-20h]@1
  float v20; // [sp+94h] [bp-1Ch]@1
  int v21; // [sp+98h] [bp-18h]@1

  _R6 = (unsigned int)this;
  v3 = (char *)this + 80;
  v4 = a2;
  mce::Mesh::reset((HolographicPostRenderer *)((char *)this + 80));
  Tessellator::begin((int)v4, 2, 4, 0);
  v5 = *(_QWORD *)(_R6 + 64);
  LODWORD(_R6) = *(_QWORD *)(_R6 + 64) >> 32;
  v19 = v5;
  v20 = 0.0;
  v21 = 0;
  v18 = _R6;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  Tessellator::vertexUV(v4, (const Vec3 *)&v14, 4575657221408423936LL);
  Tessellator::vertexUV(v4, (const Vec3 *)&v19, 4575657222473777152LL);
  __asm
  {
    VMOV            S0, R6
    VLDR            S2, [SP,#0xB0+var_1C]
    VADD.F32        S0, S0, S2
  }
  v12 = v19;
  __asm { VSTR            S0, [SP,#0xB0+var_40] }
  v13 = v21;
  Tessellator::vertexUV(v4, (const Vec3 *)&v12, 1065353216LL);
  Tessellator::vertexUV(v4, (const Vec3 *)&v17, 0LL);
  Tessellator::beginIndices(v4, 6);
  Tessellator::quad(v4, 3u, 2u, 1u, 0);
  Tessellator::end((Tessellator *)&v11, (const char *)v4, 0, 0);
  mce::Mesh::operator=((int)v3, (int)&v11);
  return mce::Mesh::~Mesh((mce::Mesh *)&v11);
}


int __fastcall HolographicPostRenderer::_drawDebugHandFrames(HolographicPostRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3)
{
  MinecraftUIRenderContext *v3; // r5@1
  ClientInstance *v4; // r4@1
  ClientInstance *v5; // r6@1
  mce::WorldConstantsHolographic *v6; // r2@1
  int v7; // r4@1
  int v8; // r0@1
  mce::WorldConstantsHolographic *v9; // r1@1

  v3 = a2;
  v4 = a3;
  v5 = (ClientInstance *)(*(_DWORD *)(MinecraftUIRenderContext::getScreenContext(a2) + 32) + 36);
  ScreenSetupCleanupHelper::setupForVRDrawing(v4, v5, v6);
  v7 = ClientInstance::getHolosceneRenderer(v4);
  v8 = MinecraftUIRenderContext::getScreenContext(v3);
  HolosceneRenderer::renderHandFrames(v7, v8);
  return j_j_j__ZN24ScreenSetupCleanupHelper20cleanupFromVRDrawingERN3mce25WorldConstantsHolographicE(v5, v9);
}


signed int __fastcall HolographicPostRenderer::_updateLevelMesh(HolographicPostRenderer *this, Tessellator *a2, ClientInstance *a3)
{
  Tessellator *v4; // r5@1
  GameRenderer *v5; // r0@1
  signed int result; // r0@5
  float v12; // [sp+0h] [bp-18h]@1
  float v13; // [sp+4h] [bp-14h]@1

  _R4 = this;
  v4 = a2;
  v5 = (GameRenderer *)ClientInstance::getGameRenderer(a3);
  GameRenderer::getHoloLevelWidthHeight(v5, &v13, &v12);
  __asm
  {
    VLDR            S0, [SP,#0x18+var_14]
    VLDR            S2, [R4,#0x48]
    VMOV            R0, S0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm
    {
      VLDR            S0, [SP,#0x18+var_18]
      VLDR            S2, [R4,#0x4C]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      result = mce::Mesh::isValid((HolographicPostRenderer *)((char *)_R4 + 180));
      if ( result )
        return result;
      _R0 = v13;
  *((float *)_R4 + 18) = _R0;
  *((float *)_R4 + 19) = v12;
  HolographicPostRenderer::_buildLevelMesh(_R4, v4);
  result = 1;
  *((_BYTE *)_R4 + 280) = 1;
  return result;
}


int __fastcall HolographicPostRenderer::_drawLevelQuad(HolographicPostRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3)
{
  ClientInstance *v3; // r6@1
  MinecraftUIRenderContext *v5; // r7@1
  int result; // r0@1
  mce::Texture *v7; // r4@1
  int v8; // r0@2
  Tessellator *v9; // r10@2
  GameRenderer *v10; // r0@2
  mce::Buffer *v16; // r9@6
  int v17; // r0@9
  int v18; // r6@9
  mce::RenderContext *v19; // r7@9
  int v20; // [sp+4h] [bp-ACh]@2
  float v21; // [sp+8h] [bp-A8h]@2
  int v22; // [sp+Ch] [bp-A4h]@9
  int v23; // [sp+10h] [bp-A0h]@9
  int v24; // [sp+14h] [bp-9Ch]@9
  int v25; // [sp+18h] [bp-98h]@9
  signed int v26; // [sp+1Ch] [bp-94h]@9
  int v27; // [sp+20h] [bp-90h]@9
  int v28; // [sp+24h] [bp-8Ch]@9
  int v29; // [sp+28h] [bp-88h]@9
  int v30; // [sp+2Ch] [bp-84h]@9
  signed int v31; // [sp+30h] [bp-80h]@9
  int v32; // [sp+34h] [bp-7Ch]@9
  int v33; // [sp+38h] [bp-78h]@9
  int v34; // [sp+3Ch] [bp-74h]@9
  int v35; // [sp+40h] [bp-70h]@9
  signed int v36; // [sp+44h] [bp-6Ch]@9
  float v37; // [sp+4Ch] [bp-64h]@2

  v3 = a3;
  _R5 = this;
  v5 = a2;
  result = ClientInstance::getGameRenderer(a3);
  v7 = *(mce::Texture **)(result + 376);
  if ( v7 )
  {
    v8 = MinecraftUIRenderContext::getScreenContext(v5);
    v20 = v8;
    v9 = *(Tessellator **)(v8 + 40);
    v10 = (GameRenderer *)ClientInstance::getGameRenderer(v3);
    GameRenderer::getHoloLevelWidthHeight(v10, &v37, &v21);
    __asm
    {
      VLDR            S0, [SP,#0xB0+var_64]
      VLDR            S2, [R5,#0x48]
      VMOV            R0, S0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm
      {
        VLDR            S0, [SP,#0xB0+var_A8]
        VLDR            S2, [R5,#0x4C]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        v16 = (HolographicPostRenderer *)((char *)_R5 + 180);
        if ( mce::Mesh::isValid((HolographicPostRenderer *)((char *)_R5 + 180)) )
        {
LABEL_9:
          v17 = ClientInstance::getHoloInput(v3);
          HolographicPlatform::getTransform((int)&v37, v17, 7, 15, 0);
          v23 = 0;
          v24 = 0;
          v21 = 1.0;
          v22 = 0;
          v25 = 0;
          v26 = 1065353216;
          v29 = 0;
          v30 = 0;
          v27 = 0;
          v28 = 0;
          v33 = 0;
          v34 = 0;
          v31 = 1065353216;
          v32 = 0;
          v35 = 0;
          v36 = 1065353216;
          v18 = *(_DWORD *)(MinecraftUIRenderContext::getScreenContext(v5) + 32) + 36;
          mce::WorldConstantsHolographic::getMatrixPatch(v18, (int)&v21);
          mce::WorldConstantsHolographic::setMatrixPatch(v18, (int)&v37);
          v19 = *(mce::RenderContext **)(MinecraftUIRenderContext::getScreenContext(v5) + 12);
          mce::Texture::bindTexture(v7, v19, 0, 2u);
          mce::Mesh::render(v16, v20, (int)_R5 + 40, 0, 0);
          mce::Texture::unbindTexture(v7, v19, 2u);
          return mce::WorldConstantsHolographic::setMatrixPatch(v18, (int)&v21);
        }
        _R0 = v37;
    *((float *)_R5 + 18) = _R0;
    *((float *)_R5 + 19) = v21;
    HolographicPostRenderer::_buildLevelMesh(_R5, v9);
    v16 = (HolographicPostRenderer *)((char *)_R5 + 180);
    *((_BYTE *)_R5 + 280) = 1;
    goto LABEL_9;
  }
  return result;
}


int __fastcall HolographicPostRenderer::_processAndRenderFadeScreenQuad(HolographicPostRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3)
{
  ClientInstance *v3; // r6@1
  HolographicPostRenderer *v4; // r8@1
  MinecraftUIRenderContext *v5; // r5@1
  int result; // r0@9
  int v13; // r5@10
  int v15; // r0@10
  __int64 v16; // r1@10
  Tessellator *v17; // r6@10
  ShaderColor *v20; // r0@10
  int v21; // [sp+4h] [bp-BCh]@10
  int v22; // [sp+8h] [bp-B8h]@10
  int v23; // [sp+Ch] [bp-B4h]@10
  char v24; // [sp+14h] [bp-ACh]@10
  char v25; // [sp+78h] [bp-48h]@10
  char v26; // [sp+80h] [bp-40h]@10
  char v27; // [sp+88h] [bp-38h]@10

  v3 = a3;
  v4 = this;
  v5 = a2;
  _R0 = ClientInstance::getGameRenderer(a3);
  __asm { VLDR            S18, [R0,#0x320] }
  _R0 = ClientInstance::getGameRenderer(v3);
  __asm
  {
    VLDR            S16, [R0,#0x31C]
    VCMPE.F32       S18, S16
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    __asm
    {
      VCMPE.F32       S16, S18
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VSUB.F32        S0, S18, S16
        VLDR            S2, =0.033
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S2 }
      __asm { VADD.F32        S16, S0, S16 }
    else
        VSUB.F32        S0, S16, S18
      __asm { VSUB.F32        S16, S16, S0 }
  result = ClientInstance::getGameRenderer(v3);
    VLDR            S0, =0.001
    VSTR            S16, [R0,#0x31C]
    VCMPE.F32       S16, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v13 = MinecraftUIRenderContext::getScreenContext(v5);
    MatrixStack::pushIdentity((MatrixStack *)&v27, *(_DWORD *)(v13 + 16) + 16);
    MatrixStack::pushIdentity((MatrixStack *)&v26, *(_DWORD *)(v13 + 16));
    MatrixStack::pushIdentity((MatrixStack *)&v25, *(_DWORD *)(v13 + 16) + 32);
    _R0 = GuiData::getScreenSizeData(*(GuiData **)(v13 + 24));
      VLDR            S18, [R0,#8]
      VLDR            S20, [R0,#0xC]
    v15 = MatrixStack::MatrixStackRef::operator->((int)&v25);
    __asm { VMOV.F32        S0, #2.0 }
    HIDWORD(v16) = -1082130432;
      VNEG.F32        S2, S20
      VDIV.F32        S4, S0, S18
      VDIV.F32        S0, S0, S2
      VSTR            S4, [R0]
    *(_DWORD *)(v15 + 12) = 0;
    *(_DWORD *)(v15 + 16) = 0;
    *(_DWORD *)(v15 + 4) = 0;
    *(_DWORD *)(v15 + 8) = 0;
    __asm { VSTR            S0, [R0,#0x14] }
    *(_DWORD *)(v15 + 32) = 0;
    *(_DWORD *)(v15 + 36) = 0;
    *(_DWORD *)(v15 + 24) = 0;
    *(_DWORD *)(v15 + 28) = 0;
    *(_DWORD *)(v15 + 40) = -1082130432;
    *(_DWORD *)(v15 + 44) = 0;
    LODWORD(v16) = 1065353216;
    *(_DWORD *)(v15 + 48) = -1082130432;
    *(_QWORD *)(v15 + 52) = v16;
    *(_DWORD *)(v15 + 60) = 1065353216;
    v17 = *(Tessellator **)(v13 + 40);
    Tessellator::begin(*(_DWORD *)(v13 + 40), 2, 4, 0);
    Tessellator::beginIndices(v17, 6);
    Tessellator::vertex(v17, 0.0, 0.0, -1.0);
    __asm { VMOV            R7, S20 }
    Tessellator::vertex(v17, 0.0, _R7, -1.0);
    __asm { VMOV            R4, S18 }
    Tessellator::vertex(v17, _R4, _R7, -1.0);
    Tessellator::vertex(v17, _R4, 0.0, -1.0);
    Tessellator::quad(v17, 0, 1u, 2u, 3u);
    Tessellator::end((Tessellator *)&v24, (const char *)v17, 0, 0);
    v20 = *(ShaderColor **)(v13 + 48);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    __asm { VSTR            S16, [SP,#0xC0+var_B0] }
    ShaderColor::setColor(v20, (const Color *)&v21);
    mce::Mesh::render((mce::Buffer *)&v24, v13, (int)v4 + 52, 0, 0);
    mce::Mesh::~Mesh((mce::Mesh *)&v24);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v25);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v26);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v27);
  return result;
}


void __fastcall HolographicPostRenderer::~HolographicPostRenderer(HolographicPostRenderer *this)
{
  HolographicPostRenderer *v1; // r4@1
  mce::MaterialPtr *v2; // r6@1
  AppPlatformListener *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E00F8;
  v2 = (HolographicPostRenderer *)((char *)this + 16);
  *((_DWORD *)this + 2) = &off_26E013C;
  v3 = (HolographicPostRenderer *)((char *)this + 8);
  mce::Mesh::~Mesh((HolographicPostRenderer *)((char *)this + 180));
  mce::Mesh::~Mesh((HolographicPostRenderer *)((char *)v1 + 80));
  mce::MaterialPtr::~MaterialPtr((HolographicPostRenderer *)((char *)v1 + 52));
  mce::MaterialPtr::~MaterialPtr((HolographicPostRenderer *)((char *)v1 + 40));
  mce::MaterialPtr::~MaterialPtr((HolographicPostRenderer *)((char *)v1 + 28));
  mce::MaterialPtr::~MaterialPtr(v2);
  AppPlatformListener::~AppPlatformListener(v3);
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


MinecraftUICustomRenderer *__fastcall HolographicPostRenderer::HolographicPostRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@2
  void *v4; // r0@3
  void *v5; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  int v15; // [sp+Ch] [bp-74h]@4
  char v16; // [sp+10h] [bp-70h]@4
  int v17; // [sp+20h] [bp-60h]@3
  char v18; // [sp+24h] [bp-5Ch]@3
  int v19; // [sp+34h] [bp-4Ch]@2
  char v20; // [sp+38h] [bp-48h]@2
  int v21; // [sp+48h] [bp-38h]@1
  char v22; // [sp+4Ch] [bp-34h]@1

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  AppPlatformListener::AppPlatformListener((_QWORD *)v1 + 1);
  *(_DWORD *)v1 = &off_26E00F8;
  *((_DWORD *)v1 + 2) = &off_26E013C;
  mce::MaterialPtr::MaterialPtr((MinecraftUICustomRenderer *)((char *)v1 + 16));
  mce::MaterialPtr::MaterialPtr((MinecraftUICustomRenderer *)((char *)v1 + 28));
  mce::MaterialPtr::MaterialPtr((MinecraftUICustomRenderer *)((char *)v1 + 40));
  mce::MaterialPtr::MaterialPtr((MinecraftUICustomRenderer *)((char *)v1 + 52));
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  *((_DWORD *)v1 + 19) = 0;
  mce::Mesh::Mesh((MinecraftUICustomRenderer *)((char *)v1 + 80));
  mce::Mesh::Mesh((MinecraftUICustomRenderer *)((char *)v1 + 180));
  *((_BYTE *)v1 + 280) = 0;
  sub_119C884((void **)&v21, "holoscreen_monoscopic_quad");
  mce::RenderMaterialGroup::getMaterial(
    (mce::MaterialPtr *)&v22,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v21);
  mce::MaterialPtr::operator=((MinecraftUICustomRenderer *)((char *)v1 + 16), (mce::MaterialPtr *)&v22);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v22);
  v2 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  sub_119C884((void **)&v19, "holo_hud_quad");
    (mce::MaterialPtr *)&v20,
    &v19);
  mce::MaterialPtr::operator=((MinecraftUICustomRenderer *)((char *)v1 + 28), (mce::MaterialPtr *)&v20);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v20);
  v3 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v19 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  sub_119C884((void **)&v17, "holoscreen_level_quad");
    (mce::MaterialPtr *)&v18,
    &v17);
  mce::MaterialPtr::operator=((MinecraftUICustomRenderer *)((char *)v1 + 40), (mce::MaterialPtr *)&v18);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v18);
  v4 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v17 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  sub_119C884((void **)&v15, "ui_fill_color");
    (mce::MaterialPtr *)&v16,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v15);
  mce::MaterialPtr::operator=((MinecraftUICustomRenderer *)((char *)v1 + 52), (mce::MaterialPtr *)&v16);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v16);
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  return v1;
}


int __fastcall HolographicPostRenderer::~HolographicPostRenderer(HolographicPostRenderer *this)
{
  HolographicPostRenderer *v1; // r4@1
  mce::MaterialPtr *v2; // r6@1
  AppPlatformListener *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E00F8;
  v2 = (HolographicPostRenderer *)((char *)this + 16);
  *((_DWORD *)this + 2) = &off_26E013C;
  v3 = (HolographicPostRenderer *)((char *)this + 8);
  mce::Mesh::~Mesh((HolographicPostRenderer *)((char *)this + 180));
  mce::Mesh::~Mesh((HolographicPostRenderer *)((char *)v1 + 80));
  mce::MaterialPtr::~MaterialPtr((HolographicPostRenderer *)((char *)v1 + 52));
  mce::MaterialPtr::~MaterialPtr((HolographicPostRenderer *)((char *)v1 + 40));
  mce::MaterialPtr::~MaterialPtr((HolographicPostRenderer *)((char *)v1 + 28));
  mce::MaterialPtr::~MaterialPtr(v2);
  AppPlatformListener::~AppPlatformListener(v3);
  return j_j_j__ZN25MinecraftUICustomRendererD2Ev_0(v1);
}


int __fastcall HolographicPostRenderer::render(HolographicPostRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  ClientInstance *v6; // r4@1
  HolographicPostRenderer *v7; // r6@1
  MinecraftUIRenderContext *v8; // r5@1
  signed int v9; // r0@1
  Player *v14; // r0@3
  Player *v15; // r7@3
  char *v16; // r0@5
  int v17; // r0@8
  int v18; // r7@9
  int v19; // r0@9
  mce::RenderStage *v20; // r7@10
  int v21; // r0@11
  HolographicPostRenderer *v22; // r0@15
  int v23; // r0@17
  HolographicPostRenderer *v24; // r0@20
  int result; // r0@20

  v6 = a3;
  v7 = this;
  v8 = a2;
  v9 = ClientInstance::isRealityFullVRMode(a3);
  __asm { VMOV.F32        S16, #1.0 }
  if ( v9 == 1 && !ClientInstance::isShowingMenu(v6) )
  {
    v14 = (Player *)ClientInstance::getLocalPlayer(v6);
    v15 = v14;
    if ( v14 )
    {
      if ( Player::isUsingItem(v14) == 1 )
      {
        v16 = Player::getItemInUse(v15);
        __asm
        {
          VMOV.F32        S0, #0.25
          VMOV.F32        S16, #1.0
        }
        if ( *(_DWORD *)v16 == Item::mBow )
          __asm { VMOVEQ.F32      S16, S0 }
      }
    }
  }
  ClientInstance::getHoloInput(v6);
  __asm { VSTR            S16, [R0,#0x288] }
  if ( ClientInstance::isLivingroomMode(v6) == 1 )
    v17 = ClientInstance::getHoloInput(v6);
    if ( (*(int (**)(void))(*(_DWORD *)v17 + 308))() == 1 )
      v18 = ClientInstance::getHolosceneRenderer(v6);
      v19 = MinecraftUIRenderContext::getScreenContext(v8);
      HolosceneRenderer::renderLivingRoom(v18, v19);
  v20 = *(mce::RenderStage **)(ClientInstance::getGameRenderer(v6) + 372);
  if ( !v20 )
    goto LABEL_24;
  v21 = ClientInstance::getHoloInput(v6);
  if ( (*(int (**)(void))(*(_DWORD *)v21 + 268))()
    && mce::RenderStage::stageWasUsed(v20) == 1
    && ClientInstance::isLivingroomMode(v6) == 1 )
    HolographicPostRenderer::_drawLevelQuad(v7, v8, v6);
  v22 = (HolographicPostRenderer *)mce::RenderStage::stageWasUsed(v20);
  if ( !v22 )
LABEL_24:
    v22 = *(HolographicPostRenderer **)(ClientInstance::getGameRenderer(v6) + 368);
    if ( v22 )
      v23 = ClientInstance::getHoloInput(v6);
      v22 = (HolographicPostRenderer *)(*(int (**)(void))(*(_DWORD *)v23 + 268))();
      if ( v22 )
        v22 = (HolographicPostRenderer *)ClientInstance::isVRTransitioning(v6);
        if ( !v22 )
          v22 = HolographicPostRenderer::_drawUIQuad(v7, v8, v6);
  v24 = (HolographicPostRenderer *)HolographicPostRenderer::_checkAndDrawHoloUIFrameAndCursor(v22, v8, v6);
  HolographicPostRenderer::_drawHandPointer(v24, v8, v6);
  result = ClientInstance::isARVRClient(v6);
  if ( result == 1 )
    result = j_j_j__ZN23HolographicPostRenderer31_processAndRenderFadeScreenQuadER24MinecraftUIRenderContextR14ClientInstance(
               v7,
               v8,
               v6);
  return result;
}
