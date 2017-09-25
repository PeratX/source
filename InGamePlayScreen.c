

signed int __fastcall InGamePlayScreen::_shouldRenderFirstPersonObjects(InGamePlayScreen *this, LevelRenderer *a2)
{
  InGamePlayScreen *v2; // r4@1
  Options *v3; // r5@4
  int v4; // r0@7
  signed int v5; // r4@7

  v2 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 328))()
    || ClientInstance::isHoloRealityMode(*((ClientInstance **)v2 + 82)) == 1
    && ClientInstance::isVRTransitioning(*((ClientInstance **)v2 + 82))
    || (v3 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v2 + 82)), Options::getPlayerViewPerspective(v3))
    || Options::getHideItemInHand(v3)
    || !ClientInstance::getCameraTargetEntity(*((ClientInstance **)v2 + 82)) )
  {
    v5 = 0;
  }
  else
    v4 = ClientInstance::getCameraTargetEntity(*((ClientInstance **)v2 + 82));
    v5 = 1;
    if ( !Entity::hasCategory(v4, 1) )
      v5 = 0;
  return v5;
}


signed int __fastcall InGamePlayScreen::_shouldPushHUD(InGamePlayScreen *this)
{
  return 1;
}


void __fastcall InGamePlayScreen::_applyInput_StutterRoll(int a1, int a2, int a3)
{
  InGamePlayScreen::_applyInput_StutterRoll(a1, a2, a3);
}


void __fastcall InGamePlayScreen::_applyInput_StutterDirectRoll(int a1, int a2, int a3)
{
  InGamePlayScreen::_applyInput_StutterDirectRoll(a1, a2, a3);
}


signed int __fastcall InGamePlayScreen::isPlayScreen(InGamePlayScreen *this)
{
  return 1;
}


signed int __fastcall InGamePlayScreen::_renderItemActivationAnimation(signed int result, int a2, LocalPlayer *a3, int a4)
{
  LocalPlayer *v4; // r4@1
  int v6; // r10@1
  signed int v7; // r8@1
  char *v8; // r9@2
  int v9; // r7@2
  float v23; // r1@4
  float v25; // r1@4
  float v29; // r1@4
  int v32; // r5@4
  float v33; // r1@4
  int v35; // r5@4
  float v37; // r1@4
  int v39; // r5@4
  float v40; // r1@4
  Tessellator *v42; // r7@4
  float v44; // ST00_4@4
  float v45; // ST04_4@4
  float v46; // ST00_4@4
  float v47; // ST04_4@4
  float v48; // ST00_4@4
  float v49; // ST04_4@4
  int v50; // r0@4
  int v51; // r0@4
  ItemRenderer *v52; // r5@4
  int v53; // r4@4
  char *v54; // r0@4
  float v55; // [sp+0h] [bp-1E0h]@0
  float v56; // [sp+4h] [bp-1DCh]@0
  char v57; // [sp+Ch] [bp-1D4h]@4
  char v58; // [sp+70h] [bp-170h]@4
  float v59; // [sp+D4h] [bp-10Ch]@4
  char v60; // [sp+E0h] [bp-100h]@4
  float v61; // [sp+E8h] [bp-F8h]@4
  int v62; // [sp+ECh] [bp-F4h]@4
  int v63; // [sp+F0h] [bp-F0h]@4
  int v64; // [sp+F4h] [bp-ECh]@4
  int v65; // [sp+F8h] [bp-E8h]@4
  int v66; // [sp+100h] [bp-E0h]@4
  int v67; // [sp+104h] [bp-DCh]@4
  int v68; // [sp+108h] [bp-D8h]@4
  int v69; // [sp+10Ch] [bp-D4h]@4
  signed int v70; // [sp+110h] [bp-D0h]@4
  int v71; // [sp+114h] [bp-CCh]@4
  int v72; // [sp+118h] [bp-C8h]@4
  int v73; // [sp+120h] [bp-C0h]@4
  int v74; // [sp+124h] [bp-BCh]@4
  char v75; // [sp+128h] [bp-B8h]@4
  char v76; // [sp+130h] [bp-B0h]@4
  int v77; // [sp+138h] [bp-A8h]@4
  signed int v78; // [sp+13Ch] [bp-A4h]@4
  int v79; // [sp+140h] [bp-A0h]@4
  int v80; // [sp+144h] [bp-9Ch]@4
  int v81; // [sp+148h] [bp-98h]@4
  int v82; // [sp+14Ch] [bp-94h]@4
  int v83; // [sp+150h] [bp-90h]@4
  int v84; // [sp+154h] [bp-8Ch]@4
  int v85; // [sp+158h] [bp-88h]@4
  int v86; // [sp+15Ch] [bp-84h]@4
  int v87; // [sp+160h] [bp-80h]@4
  int v88; // [sp+164h] [bp-7Ch]@4
  int v89; // [sp+168h] [bp-78h]@4
  int v90; // [sp+16Ch] [bp-74h]@4
  int v91; // [sp+170h] [bp-70h]@4
  int v92; // [sp+174h] [bp-6Ch]@4
  int v93; // [sp+178h] [bp-68h]@4
  int v94; // [sp+17Ch] [bp-64h]@4
  int v95; // [sp+180h] [bp-60h]@4
  float v96; // [sp+184h] [bp-5Ch]@4

  v4 = a3;
  _R6 = a4;
  v6 = a2;
  v7 = result;
  if ( a3 )
  {
    v8 = LocalPlayer::getActivatedItem(a3);
    v9 = LocalPlayer::getItemActivationTicks(v4);
    _R5 = LocalPlayer::getItemActivationOffsetX(v4);
    _R4 = LocalPlayer::getItemActivationOffsetY(v4);
    _R0 = GuiData::getScreenSizeData(*(GuiData **)(v6 + 24));
    __asm
    {
      VLDR            S18, [R0,#8]
      VLDR            S20, [R0,#0xC]
    }
    result = ItemInstance::isNull((ItemInstance *)v8);
    if ( v9 >= 1 && !result )
      MatrixStack::push((MatrixStack *)&v76, *(_DWORD *)(v6 + 16) + 32);
      MatrixStack::pushIdentity((MatrixStack *)&v75, *(_DWORD *)(v6 + 16));
      __asm
      {
        VLDR            S0, =-0.65
        VMOV.F32        S22, #4.0
        VLDR            S2, =-0.35
        VMUL.F32        S0, S20, S0
        VLDR            S4, =-3.0769
        VMUL.F32        S2, S20, S2
        VDIV.F32        S4, S4, S20
        VDIV.F32        S6, S22, S18
        VDIV.F32        S0, S2, S0
        VSTR            S6, [SP,#0x1E0+var_F8]
      }
      v64 = 0;
      v65 = 0;
      v62 = 0;
      v63 = 0;
      __asm { VSTR            S4, [SP,#0x1E0+var_E4] }
      v68 = 0;
      v69 = 0;
      v66 = 0;
      v67 = 0;
      v70 = -1171340482;
      v71 = 0;
      v72 = -1082130432;
      __asm { VSTR            S0, [SP,#0x1E0+var_C4] }
      v73 = -1082130432;
      v74 = 1065353216;
      MatrixStack::MatrixStackRef::operator=((int)&v76, (int)&v61);
      _R0 = 40;
      _R1 = 40 - v9;
        VMOV            S0, R1
        VCVT.F32.S32    S16, S0
        VMOV            S0, R0
        VCVT.F32.S32    S28, S0
        VMOV            S0, R4
        VCVT.F32.S32    S24, S0
        VMOV            S0, R5
        VCVT.F32.S32    S26, S0
      MatrixStack::push((MatrixStack *)&v60, *(_DWORD *)(v6 + 16) + 16);
      _R7 = ItemInstance::getIcon((ItemInstance *)v8, 0, 0);
      _R5 = MatrixStack::MatrixStackRef::operator->((int)&v60);
        VMOV            S0, R6
        VLDR            S2, =10.25
        VLDR            S4, =25.5
        VADD.F32        S0, S16, S0
        VLDR            S6, =-13.8
        VLDR            S8, =-24.95
      _R0 = &mce::Math::PI;
        VDIV.F32        S16, S0, S28
        VMUL.F32        S0, S16, S16
        VMUL.F32        S2, S0, S2
        VADD.F32        S2, S2, S4
        VMUL.F32        S4, S0, S0
        VMUL.F32        S2, S2, S0
        VMUL.F32        S0, S0, S6
        VMUL.F32        S4, S4, S8
        VADD.F32        S2, S2, S22
        VADD.F32        S0, S4, S0
        VMUL.F32        S2, S2, S16
        VADD.F32        S0, S0, S2
        VLDR            S2, [R0]
        VMUL.F32        S22, S0, S2
        VADD.F32        S0, S22, S22
        VMOV            R6, S0
      _R4 = mce::Math::sin(_R6, v23);
      _R0 = mce::Math::sin(_R6, v25);
        VMOV.F32        S0, #0.25
        VLDR            S12, [R5,#0x14]
        VMOV            S8, R4
        VLDR            S14, [R5,#0x18]
        VMOV            S10, R0
        VLDR            S1, [R5,#0x1C]
        VABS.F32        S8, S8
        VLDR            S5, =-50.0
        VABS.F32        S10, S10
        VMOV            R4, S22
        VMUL.F32        S2, S20, S0
        VMUL.F32        S0, S18, S0
        VMUL.F32        S4, S2, S24
        VMUL.F32        S6, S0, S26
        VMUL.F32        S4, S4, S10
        VLDR            S10, [R5,#0x10]
        VMUL.F32        S6, S6, S8
        VLDR            S8, [R5,#0xC]
        VADD.F32        S2, S4, S2
        VADD.F32        S0, S6, S0
        VLDR            S6, [R5,#8]
        VLDMIA          R5, {S3-S4}
        VLDR            S7, [R5,#0x20]
        VMUL.F32        S12, S12, S2
        VMUL.F32        S4, S4, S0
        VMUL.F32        S3, S3, S0
        VMUL.F32        S10, S10, S2
        VMUL.F32        S8, S8, S0
        VMUL.F32        S0, S6, S0
        VLDR            S6, [R5,#0x24]
        VMUL.F32        S14, S14, S2
        VMUL.F32        S2, S1, S2
        VMUL.F32        S1, S7, S5
        VLDR            S7, [R5,#0x28]
        VADD.F32        S4, S12, S4
        VLDR            S12, [R5,#0x2C]
        VADD.F32        S10, S10, S3
        VMUL.F32        S6, S6, S5
        VMUL.F32        S3, S7, S5
        VADD.F32        S0, S14, S0
        VADD.F32        S2, S2, S8
        VMUL.F32        S12, S12, S5
        VADD.F32        S8, S10, S1
        VLDR            S10, [R5,#0x34]
        VADD.F32        S4, S4, S6
        VLDR            S6, [R5,#0x30]
        VADD.F32        S0, S0, S3
        VADD.F32        S2, S2, S12
        VLDR            S12, [R5,#0x38]
        VADD.F32        S6, S8, S6
        VLDR            S8, [R5,#0x3C]
        VADD.F32        S4, S4, S10
        VADD.F32        S0, S0, S12
        VSTR            S6, [R5,#0x30]
        VSTR            S4, [R5,#0x34]
        VSTR            S0, [R5,#0x38]
        VSTR            S2, [R5,#0x3C]
      _R5 = mce::Math::sin(_R4, v29);
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v60);
        VLDR            S2, =175.0
        VMUL.F32        S0, S0, S2
        VLDR            S2, =50.0
        VSTR            S2, [R0]
        VLDR            S2, [R0,#4]
        VSTR            S2, [R0,#4]
        VLDR            S2, [R0,#8]
        VSTR            S2, [R0,#8]
        VLDR            S2, [R0,#0xC]
        VSTR            S2, [R0,#0xC]
        VLDR            S2, [R0,#0x10]
        VNMUL.F32       S2, S0, S2
        VSTR            S2, [R0,#0x10]
        VLDR            S2, [R0,#0x14]
        VSTR            S2, [R0,#0x14]
        VLDR            S2, [R0,#0x18]
        VSTR            S2, [R0,#0x18]
        VLDR            S2, [R0,#0x1C]
        VSTR            S2, [R0,#0x1C]
        VLDR            S2, [R0,#0x20]
        VSTR            S2, [R0,#0x20]
        VLDR            S2, [R0,#0x24]
        VSTR            S2, [R0,#0x24]
        VLDR            S2, [R0,#0x28]
        VSTR            S2, [R0,#0x28]
        VLDR            S2, [R0,#0x2C]
        VMUL.F32        S0, S2, S0
        VSTR            S0, [R0,#0x2C]
      v32 = MatrixStack::MatrixStackRef::operator->((int)&v60);
      _R0 = mce::Math::sin(_R4, v33);
        VLDR            S2, =720.0
        VABS.F32        S0, S0
      v77 = 0;
      v78 = 1065353216;
      v79 = 0;
        VSTR            S0, [SP,#0x1E0+var_5C]
      glm::rotate<float>((int)&v80, v32, (int)&v96, (int)&v77);
      *(_DWORD *)v32 = v80;
      *(_DWORD *)(v32 + 4) = v81;
      *(_DWORD *)(v32 + 8) = v82;
      *(_DWORD *)(v32 + 12) = v83;
      *(_DWORD *)(v32 + 16) = v84;
      *(_DWORD *)(v32 + 20) = v85;
      *(_DWORD *)(v32 + 24) = v86;
      *(_DWORD *)(v32 + 28) = v87;
      *(_DWORD *)(v32 + 32) = v88;
      *(_DWORD *)(v32 + 36) = v89;
      *(_DWORD *)(v32 + 40) = v90;
      *(_DWORD *)(v32 + 44) = v91;
      *(_DWORD *)(v32 + 48) = v92;
      *(_DWORD *)(v32 + 52) = v93;
      *(_DWORD *)(v32 + 56) = v94;
      *(_DWORD *)(v32 + 60) = v95;
      v35 = MatrixStack::MatrixStackRef::operator->((int)&v60);
        VMOV.F32        S0, #8.0
        VMUL.F32        S0, S16, S0
        VMOV            R4, S0
      _R0 = mce::Math::cos(_R4, v37);
        VMOV.F32        S16, #6.0
      v77 = 1065353216;
      v78 = 0;
        VMUL.F32        S0, S0, S16
      glm::rotate<float>((int)&v80, v35, (int)&v96, (int)&v77);
      *(_DWORD *)v35 = v80;
      *(_DWORD *)(v35 + 4) = v81;
      *(_DWORD *)(v35 + 8) = v82;
      *(_DWORD *)(v35 + 12) = v83;
      *(_DWORD *)(v35 + 16) = v84;
      *(_DWORD *)(v35 + 20) = v85;
      *(_DWORD *)(v35 + 24) = v86;
      *(_DWORD *)(v35 + 28) = v87;
      *(_DWORD *)(v35 + 32) = v88;
      *(_DWORD *)(v35 + 36) = v89;
      *(_DWORD *)(v35 + 40) = v90;
      *(_DWORD *)(v35 + 44) = v91;
      *(_DWORD *)(v35 + 48) = v92;
      *(_DWORD *)(v35 + 52) = v93;
      *(_DWORD *)(v35 + 56) = v94;
      *(_DWORD *)(v35 + 60) = v95;
      v39 = MatrixStack::MatrixStackRef::operator->((int)&v60);
      _R0 = mce::Math::cos(_R4, v40);
      __asm { VMOV            S0, R0 }
      __asm { VMUL.F32        S0, S0, S16 }
      v79 = 1065353216;
      __asm { VSTR            S0, [SP,#0x1E0+var_5C] }
      glm::rotate<float>((int)&v80, v39, (int)&v96, (int)&v77);
      *(_DWORD *)v39 = v80;
      *(_DWORD *)(v39 + 4) = v81;
      *(_DWORD *)(v39 + 8) = v82;
      *(_DWORD *)(v39 + 12) = v83;
      *(_DWORD *)(v39 + 16) = v84;
      *(_DWORD *)(v39 + 20) = v85;
      *(_DWORD *)(v39 + 24) = v86;
      *(_DWORD *)(v39 + 28) = v87;
      *(_DWORD *)(v39 + 32) = v88;
      *(_DWORD *)(v39 + 36) = v89;
      *(_DWORD *)(v39 + 40) = v90;
      *(_DWORD *)(v39 + 44) = v91;
      *(_DWORD *)(v39 + 48) = v92;
      *(_DWORD *)(v39 + 52) = v93;
      *(_DWORD *)(v39 + 56) = v94;
      *(_DWORD *)(v39 + 60) = v95;
        VLDR            S22, [R7,#4]
        VLDR            S16, [R7,#8]
        VLDR            S18, [R7,#0xC]
        VLDR            S20, [R7,#0x10]
      v42 = *(Tessellator **)(v6 + 40);
      Tessellator::begin(*(Tessellator **)(v6 + 40), 4, 0);
      _R0 = &Vec3::UNIT_Z;
        VLDR            S0, [R0]
        VLDR            S4, [R0,#8]
        VNEG.F32        S0, S0
        VNEG.F32        S2, S2
        VNEG.F32        S4, S4
        VSTR            S0, [SP,#0x1E0+var_10C]
        VSTR            S2, [SP,#0x1E0+var_108]
        VSTR            S4, [SP,#0x1E0+var_104]
      Tessellator::normal(v42, (const Vec3 *)&v59);
        VSTR            S22, [SP,#0x1E0+var_1E0]
        VSTR            S16, [SP,#0x1E0+var_1DC]
      Tessellator::vertexUV(v42, 0.5, 0.75, 0.0, v55, v56);
        VSTR            S20, [SP,#0x1E0+var_1DC]
      Tessellator::vertexUV(v42, 0.5, -0.25, 0.0, v44, v45);
        VSTR            S18, [SP,#0x1E0+var_1E0]
      Tessellator::vertexUV(v42, -0.5, -0.25, 0.0, v46, v47);
      Tessellator::vertexUV(v42, -0.5, 0.75, 0.0, v48, v49);
      BaseEntityRenderContext::BaseEntityRenderContext(
        (int)&v58,
        v6,
        (ClientInstance *)(*(_QWORD *)(v7 + 324) >> 32),
        *(_QWORD *)(v7 + 324));
      v50 = BaseEntityRenderContext::getEntityRenderDispatcher((BaseEntityRenderContext *)&v58);
      v51 = EntityRenderDispatcher::getRenderer(v50, 4);
      EntityShaderManager::_setupShaderParameters(v51, v6, 1065353216, (int)&Color::NIL, 0);
      v52 = (ItemRenderer *)BaseEntityRenderContext::getItemRenderer((BaseEntityRenderContext *)&v58);
      v53 = ItemRenderer::getGraphics(v52, (const ItemInstance *)v8);
      v54 = EntityShaderManager::getTransparentEntityMaterial(v52);
      Tessellator::draw((char *)v42, v6, (int)v54, v53);
      Tessellator::end((Tessellator *)&v57, (const char *)v42, 0, 0);
      mce::Mesh::~Mesh((mce::Mesh *)&v57);
      BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v58);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v60);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v75);
      result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v76);
  }
  return result;
}


int __fastcall InGamePlayScreen::_shouldClipLiquids(InGamePlayScreen *this)
{
  Player *v1; // r0@1
  Player *v2; // r4@1
  ItemInstance *v3; // r0@2
  ItemInstance *v4; // r5@2
  int v5; // r0@2
  bool v6; // zf@2
  int result; // r0@8
  ItemInstance *v8; // r0@9

  v1 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 82));
  v2 = v1;
  if ( !v1 )
    goto LABEL_12;
  v3 = (ItemInstance *)Player::getSelectedItem(v1);
  v4 = v3;
  v5 = *((_BYTE *)v3 + 15);
  v6 = v5 == 0;
  if ( v5 )
    v6 = *(_DWORD *)v4 == 0;
  if ( v6
    || ItemInstance::isNull(v4)
    || !*((_BYTE *)v4 + 14)
    || (*(int (__fastcall **)(Player *, signed int))(*(_DWORD *)v2 + 220))(v2, 37) )
  {
LABEL_12:
    result = 0;
  }
  else
    v8 = (ItemInstance *)Player::getSelectedItem(v2);
    result = ItemInstance::isLiquidClipItem(v8);
  return result;
}


int __fastcall InGamePlayScreen::_renderTransparentFirstPerson3DObjects(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r8@1
  Entity *v6; // r9@1
  MatrixStack **v7; // r4@3
  int v8; // r0@4
  LevelRenderer *v9; // r0@5
  char *v10; // r7@5
  int v11; // r0@5
  int v17; // r8@8
  int v18; // r0@8
  int v21; // r3@8
  char *v22; // r0@8
  int v23; // r7@9
  int v24; // r0@9
  int v25; // r7@9
  int v26; // r3@9
  float v28; // [sp+0h] [bp-148h]@0
  char v29; // [sp+8h] [bp-140h]@9
  char v30; // [sp+10h] [bp-138h]@8
  char v31; // [sp+18h] [bp-130h]@8
  int v32; // [sp+58h] [bp-F0h]@8
  int v33; // [sp+5Ch] [bp-ECh]@8
  int v34; // [sp+60h] [bp-E8h]@8
  int v35; // [sp+64h] [bp-E4h]@8
  int v36; // [sp+68h] [bp-E0h]@8
  signed int v37; // [sp+6Ch] [bp-DCh]@8
  int v38; // [sp+70h] [bp-D8h]@8
  int v39; // [sp+74h] [bp-D4h]@8
  int v40; // [sp+78h] [bp-D0h]@8
  int v41; // [sp+7Ch] [bp-CCh]@8
  signed int v42; // [sp+80h] [bp-C8h]@8
  int v43; // [sp+84h] [bp-C4h]@8
  int v44; // [sp+88h] [bp-C0h]@8
  int v45; // [sp+8Ch] [bp-BCh]@8
  int v46; // [sp+90h] [bp-B8h]@8
  int v47; // [sp+94h] [bp-B4h]@8
  char v48; // [sp+98h] [bp-B0h]@5
  char v49; // [sp+A0h] [bp-A8h]@5
  int v50; // [sp+A8h] [bp-A0h]@2
  int v51; // [sp+ACh] [bp-9Ch]@2
  int v52; // [sp+B0h] [bp-98h]@2
  int v53; // [sp+B4h] [bp-94h]@2
  int v54; // [sp+B8h] [bp-90h]@2
  __int64 v55; // [sp+BCh] [bp-8Ch]@2
  int v56; // [sp+C4h] [bp-84h]@2
  int v57; // [sp+C8h] [bp-80h]@2
  int v58; // [sp+CCh] [bp-7Ch]@2
  __int64 v59; // [sp+D0h] [bp-78h]@2
  int v60; // [sp+D8h] [bp-70h]@2
  int v61; // [sp+DCh] [bp-6Ch]@2
  int v62; // [sp+E0h] [bp-68h]@2
  int v63; // [sp+E4h] [bp-64h]@2
  int v64; // [sp+ECh] [bp-5Ch]@4
  int v65; // [sp+F0h] [bp-58h]@4
  int v66; // [sp+F4h] [bp-54h]@4
  int v67; // [sp+F8h] [bp-50h]@4
  int v68; // [sp+FCh] [bp-4Ch]@4
  __int64 v69; // [sp+100h] [bp-48h]@4
  int v70; // [sp+108h] [bp-40h]@4
  int v71; // [sp+10Ch] [bp-3Ch]@4
  int v72; // [sp+110h] [bp-38h]@4
  __int64 v73; // [sp+114h] [bp-34h]@4
  int v74; // [sp+11Ch] [bp-2Ch]@4
  int v75; // [sp+120h] [bp-28h]@4
  int v76; // [sp+124h] [bp-24h]@4
  int v77; // [sp+128h] [bp-20h]@4

  v3 = a1;
  v4 = a3;
  _R5 = a2;
  v6 = (Entity *)ClientInstance::getCameraTargetEntity(*(ClientInstance **)(a1 + 328));
  if ( (*(int (**)(void))(*(_DWORD *)v6 + 1408))() == 1 )
  {
    v50 = 1065353216;
    v53 = 0;
    v54 = 0;
    v51 = 0;
    v52 = 0;
    v56 = 0;
    v57 = 0;
    v55 = 1065353216LL;
    v58 = 0;
    v59 = 1065353216LL;
    v61 = 0;
    v62 = 0;
    v60 = 0;
    v63 = 1065353216;
    if ( ClientInstance::isHoloRealityMode(*(ClientInstance **)(v3 + 328)) == 1 )
    {
      InGamePlayScreen::_computeFirstPerson3dObjectLocationForVR(v3, (int)&v50);
      v7 = (MatrixStack **)(_R5 + 16);
    }
    else
      v8 = MatrixStack::top(*(MatrixStack **)(_R5 + 16));
      v50 = *(_DWORD *)v8;
      v51 = *(_DWORD *)(v8 + 4);
      v52 = *(_DWORD *)(v8 + 8);
      v53 = *(_DWORD *)(v8 + 12);
      v54 = *(_DWORD *)(v8 + 16);
      v55 = *(_QWORD *)(v8 + 20);
      v56 = *(_DWORD *)(v8 + 28);
      v57 = *(_DWORD *)(v8 + 32);
      v58 = *(_DWORD *)(v8 + 36);
      v59 = *(_QWORD *)(v8 + 40);
      v60 = *(_DWORD *)(v8 + 48);
      v61 = *(_DWORD *)(v8 + 52);
      v62 = *(_DWORD *)(v8 + 56);
      v63 = *(_DWORD *)(v8 + 60);
      glm::inverse<float>((int)&v64, (int)&v50);
      v50 = v64;
      v51 = v65;
      v52 = v66;
      v53 = v67;
      v54 = v68;
      v55 = v69;
      v56 = v70;
      v57 = v71;
      v58 = v72;
      v59 = v73;
      v60 = v74;
      v61 = v75;
      v62 = v76;
      v63 = v77;
    MatrixStack::push((int)&v49, (int)*v7 + 16, (int)&v50);
    v9 = (LevelRenderer *)ClientInstance::getLevelRenderer(*(ClientInstance **)(v3 + 328));
    v10 = LevelRenderer::getLevelRendererPlayer(v9);
    v11 = MatrixStack::MatrixStackRef::operator*((int)&v49);
    LevelRendererPlayer::bobHurt((int)v10, v11, *(_DWORD *)(_R5 + 8));
    (*(void (__fastcall **)(int, int, Entity *, signed int))(*(_DWORD *)v3 + 316))(v3, _R5, v6, 1);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v49);
    MatrixStack::pushIdentity((MatrixStack *)&v48, (int)*v7 + 16);
    MatrixStack::MatrixStackRef::operator->((int)&v48);
    _R0 = MatrixStack::top(*v7);
    __asm
      VLDR            S0, [R0,#0x30]
      VLDR            S2, [R0,#0x34]
      VLDR            S4, [R0,#0x38]
      VNEG.F32        S0, S0
      VNEG.F32        S2, S2
      VNEG.F32        S4, S4
      VSTR            S0, [R7,#0x30]
      VSTR            S2, [R7,#0x34]
      VSTR            S4, [R7,#0x38]
      VLDR            S0, [R5,#8]
      VSTR            S0, [SP,#0x148+var_148]
    FullScreenEffectRenderer::render(*(_DWORD *)(v3 + 320), _R5, v4, v6, v28);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v48);
  }
  if ( ClientInstance::isVRClient(*(ClientInstance **)(v3 + 328)) != 1
    || ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v3 + 328)) != 1 )
    v23 = *(_DWORD *)(_R5 + 16);
    v24 = MatrixStack::top(*(MatrixStack **)(_R5 + 16));
    MatrixStack::push((int)&v29, v23 + 16, v24);
    v25 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    glm::inverse<float>((int)&v64, v25);
    *(_DWORD *)v25 = v64;
    *(_DWORD *)(v25 + 4) = v65;
    *(_DWORD *)(v25 + 8) = v66;
    *(_DWORD *)(v25 + 12) = v67;
    *(_DWORD *)(v25 + 16) = v68;
    *(_QWORD *)(v25 + 20) = v69;
    *(_DWORD *)(v25 + 28) = v70;
    *(_DWORD *)(v25 + 32) = v71;
    *(_DWORD *)(v25 + 36) = v72;
    *(_QWORD *)(v25 + 40) = v73;
    *(_DWORD *)(v25 + 48) = v74;
    *(_DWORD *)(v25 + 52) = v75;
    *(_DWORD *)(v25 + 56) = v76;
    *(_DWORD *)(v25 + 60) = v77;
    v26 = *(_DWORD *)(_R5 + 8);
    FullScreenEffectRenderer::renderHeadlocked(*(FullScreenEffectRenderer **)(v3 + 320), _R5, (int)v6);
    v22 = &v29;
  else
    v32 = 1065353216;
    v35 = 0;
    v36 = 0;
    v33 = 0;
    v34 = 0;
    v39 = 0;
    v40 = 0;
    v37 = 1065353216;
    v38 = 0;
    v41 = 0;
    v42 = 1065353216;
    v45 = 0;
    v46 = 0;
    v43 = 0;
    v44 = 0;
    v47 = 1065353216;
    v17 = *(_DWORD *)(_R5 + 32) + 36;
    mce::WorldConstantsHolographic::getMatrixPatch(v17, (int)&v32);
    v18 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 328));
    HolographicPlatform::getTransform((int)&v31, v18, 20, 15, 0);
    mce::WorldConstantsHolographic::setMatrixPatch(v17, (int)&v31);
    MatrixStack::push((MatrixStack *)&v30, *(_DWORD *)(_R5 + 16) + 16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v30);
      VLDR            S0, =0.225
      VLDR            S2, [R0]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VMUL.F32        S0, S2, S0
      VMOV.F32        S2, #0.25
      VSTR            S0, [R0,#0xC]
      VLDR            S0, [R0,#0x10]
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R0,#0x10]
      VLDR            S0, [R0,#0x14]
      VSTR            S0, [R0,#0x14]
      VLDR            S0, [R0,#0x18]
      VSTR            S0, [R0,#0x18]
      VLDR            S0, [R0,#0x1C]
      VSTR            S0, [R0,#0x1C]
      VLDR            S0, [R0,#0x20]
      VSTR            S0, [R0,#0x20]
      VLDR            S0, [R0,#0x24]
      VSTR            S0, [R0,#0x24]
      VLDR            S0, [R0,#0x28]
      VSTR            S0, [R0,#0x28]
      VLDR            S0, [R0,#0x2C]
      VSTR            S0, [R0,#0x2C]
      VLDR            S0, =-0.2
      VLDR            S2, [R0,#0x14]
      VLDR            S4, [R0,#0x18]
      VLDR            S1, [R0,#0x10]
      VLDR            S6, [R0,#0x1C]
      VMUL.F32        S4, S4, S0
      VLDR            S8, [R0,#0x20]
      VMUL.F32        S1, S1, S0
      VLDR            S3, =0.22
      VMUL.F32        S0, S6, S0
      VLDR            S10, [R0,#0x24]
      VLDR            S12, [R0,#0x28]
      VMUL.F32        S8, S8, S3
      VLDR            S14, [R0,#0x2C]
      VMUL.F32        S10, S10, S3
      VMUL.F32        S12, S12, S3
      VMUL.F32        S6, S14, S3
      VLDR            S14, [R0,#0x3C]
      VADD.F32        S8, S8, S1
      VADD.F32        S2, S10, S2
      VLDR            S10, [R0,#0x34]
      VADD.F32        S4, S12, S4
      VLDR            S12, [R0,#0x38]
      VADD.F32        S0, S6, S0
      VLDR            S6, [R0,#0x30]
      VADD.F32        S6, S8, S6
      VADD.F32        S2, S2, S10
      VADD.F32        S4, S4, S12
      VADD.F32        S0, S0, S14
      VSTR            S6, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    v21 = *(_DWORD *)(_R5 + 8);
    mce::WorldConstantsHolographic::setMatrixPatch(v17, (int)&v32);
    v22 = &v30;
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)v22);
}


Player *__fastcall InGamePlayScreen::render(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  Level *v4; // r6@1
  Player *result; // r0@1
  bool v6; // zf@1
  int v7; // r9@5
  Player *v8; // r7@5
  bool v9; // zf@5
  GameRenderer *v10; // r0@8
  int v11; // r0@8
  int v12; // [sp+0h] [bp-58h]@8

  v2 = a1;
  v3 = a2;
  v4 = (Level *)ClientInstance::getLevel(*(ClientInstance **)(a1 + 328));
  result = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v2 + 328));
  v6 = v4 == 0;
  if ( v4 )
    v6 = result == 0;
  if ( !v6 )
  {
    result = (Player *)Level::isPlayerSuspended(v4, result);
    if ( !result )
    {
      v7 = ClientInstance::getLevelRenderer(*(ClientInstance **)(v2 + 328));
      result = (Player *)ClientInstance::getCameraEntity(*(ClientInstance **)(v2 + 328));
      v8 = result;
      v9 = v7 == 0;
      if ( v7 )
        v9 = result == 0;
      if ( !v9 )
      {
        v10 = (GameRenderer *)ClientInstance::getGameRenderer(*(ClientInstance **)(v2 + 328));
        GameRenderer::setClient(v10, *(ClientInstance **)(v2 + 328));
        v11 = ClientInstance::getGameRenderer(*(ClientInstance **)(v2 + 328));
        GameRenderer::makeScreenContext((GameRenderer *)&v12, *(float *)&v11, *(_DWORD *)(v3 + 8));
        ClientInstance::getGameRenderer(*(ClientInstance **)(v2 + 328));
        GameRenderer::setClearColor(*(ClientInstance **)(v2 + 328), (int)&v12);
        GameRenderer::clearRenderTarget((int)&v12);
        (*(void (__fastcall **)(int, int, int, Player *))(*(_DWORD *)v2 + 276))(v2, v3, v7, v8);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v2 + 284))(v2, v3);
        (*(void (**)(void))(**(_DWORD **)(v2 + 16) + 8))();
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v2 + 280))(v2, v3);
        (*(void (**)(void))(**(_DWORD **)(v2 + 16) + 12))();
        result = (Player *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 288))(v2, v3, v7);
      }
    }
  }
  return result;
}


signed int __fastcall InGamePlayScreen::_updateFreeformPickDirection(InGamePlayScreen *this, float a2, Vec3 *a3, Vec3 *a4)
{
  InGamePlayScreen *v4; // r7@1
  Vec3 *v5; // r11@1
  int v6; // r4@1
  Entity *v7; // r10@2
  signed int v8; // r6@2
  Options *v9; // r0@2
  GuiData *v10; // r0@2
  signed int result; // r0@5
  char *v21; // r4@6
  const Vec3 *v22; // r5@6
  int v23; // r0@6
  int v25; // r1@6
  int v26; // r1@6
  int v28; // [sp+10h] [bp-140h]@2
  Level *v29; // [sp+14h] [bp-13Ch]@2
  int v30; // [sp+18h] [bp-138h]@6
  char v31; // [sp+1Ch] [bp-134h]@6
  int v32; // [sp+20h] [bp-130h]@6
  int v33; // [sp+24h] [bp-12Ch]@6
  int v34; // [sp+28h] [bp-128h]@6
  int v35; // [sp+2Ch] [bp-124h]@6
  int v36; // [sp+30h] [bp-120h]@6
  int v37; // [sp+34h] [bp-11Ch]@6
  int v38; // [sp+38h] [bp-118h]@6
  __int16 v39; // [sp+3Ch] [bp-114h]@6
  int v40; // [sp+40h] [bp-110h]@6
  int v41; // [sp+44h] [bp-10Ch]@6
  int v42; // [sp+48h] [bp-108h]@6
  int v43; // [sp+4Ch] [bp-104h]@6
  int v44; // [sp+50h] [bp-100h]@6
  int v45; // [sp+54h] [bp-FCh]@6
  char v46; // [sp+58h] [bp-F8h]@6
  float v47; // [sp+5Ch] [bp-F4h]@6
  float v48; // [sp+68h] [bp-E8h]@6
  float v49; // [sp+74h] [bp-DCh]@2
  char v52; // [sp+80h] [bp-D0h]@2
  float v53; // [sp+C0h] [bp-90h]@2

  v4 = this;
  v5 = a4;
  v6 = LODWORD(a2);
  if ( ClientInstance::allowPicking(*((ClientInstance **)this + 82)) == 1 )
  {
    v29 = (Level *)ClientInstance::getLevel(*((ClientInstance **)v4 + 82));
    v7 = (Entity *)ClientInstance::getCameraEntity(*((ClientInstance **)v4 + 82));
    v8 = *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)v4 + 82)) + 220);
    Entity::getInterpolatedPosition((Entity *)&v49, *(float *)&v7, v6);
    v9 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v4 + 82));
    v28 = Options::getPlayerViewPerspective(v9);
    v10 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)v4 + 82));
    _R0 = GuiData::getScreenSizeData(v10);
    __asm
    {
      VLDR            S16, [R0,#8]
      VLDR            S18, [R0,#0xC]
    }
    glm::detail::operator*<float>((int)&v52, (int)v4 + 20, (int)v4 + 84);
    glm::inverse<float>((int)&v53, (int)&v52);
    _R0 = v8 >> 16;
      VMOV.F32        S4, #-1.0
      VMOV            S0, R0
    _R0 = (signed __int16)v8;
      VMOV            S2, R0
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VLDR            S6, [SP,#0x150+var_84]
      VLDR            S8, [SP,#0x150+var_74]
      VLDR            S10, [SP,#0x150+var_80]
      VLDR            S12, [SP,#0x150+var_7C]
      VLDR            S14, [SP,#0x150+var_78]
      VSUB.F32        S0, S18, S0
      VDIV.F32        S2, S2, S16
      VDIV.F32        S0, S0, S18
      VADD.F32        S2, S2, S2
      VADD.F32        S0, S0, S0
      VADD.F32        S16, S2, S4
      VLDR            S2, [SP,#0x150+var_8C]
      VADD.F32        S18, S0, S4
      VLDR            S0, [SP,#0x150+var_90]
      VLDR            S4, [SP,#0x150+var_88]
      VMUL.F32        S6, S6, S16
      VMUL.F32        S8, S8, S18
      VMUL.F32        S0, S0, S16
      VMUL.F32        S10, S10, S18
      VMUL.F32        S2, S2, S16
      VMUL.F32        S12, S12, S18
      VMUL.F32        S4, S4, S16
      VMUL.F32        S14, S14, S18
      VADD.F32        S6, S8, S6
      VLDR            S8, [SP,#0x150+var_64]
      VADD.F32        S0, S10, S0
      VLDR            S10, [SP,#0x150+var_70]
      VADD.F32        S2, S12, S2
      VLDR            S12, [SP,#0x150+var_54]
      VADD.F32        S4, S14, S4
      VADD.F32        S6, S6, S8
      VLDR            S8, [SP,#0x150+var_6C]
      VADD.F32        S0, S0, S10
      VLDR            S10, [SP,#0x150+var_68]
      VADD.F32        S2, S2, S8
      VLDR            S8, [SP,#0x150+var_60]
      VADD.F32        S4, S4, S10
      VLDR            S10, [SP,#0x150+var_58]
      VADD.F32        S6, S6, S12
      VADD.F32        S0, S0, S8
      VLDR            S8, [SP,#0x150+var_5C]
      VLDR            S8, [SP,#0x150+var_D8]
      VLDR            S10, [SP,#0x150+var_D4]
      VDIV.F32        S0, S0, S6
      VDIV.F32        S2, S2, S6
      VDIV.F32        S4, S4, S6
      VLDR            S6, [SP,#0x150+var_DC]
      VADD.F32        S22, S8, S2
      VADD.F32        S24, S10, S4
      VADD.F32        S20, S0, S6
      VSTR            S20, [SP,#0x150+var_E8]
      VSTR            S22, [SP,#0x150+var_E4]
      VSTR            S24, [SP,#0x150+var_E0]
      VSUB.F32        S6, S6, S8
      VSUB.F32        S0, S0, S10
      VSUB.F32        S2, S2, S8
      VSUB.F32        S4, S4, S10
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S10, S4
      VADD.F32        S0, S0, S6
      VSUB.F32        S8, S22, S2
      VSUB.F32        S10, S24, S4
      VSUB.F32        S6, S20, S0
      VSTR            S0, [SP,#0x150+var_F4]
      VSTR            S2, [SP,#0x150+var_F0]
      VSTR            S4, [SP,#0x150+var_EC]
      VSTR            S0, [R9]
      VSTR            S2, [R9,#4]
      VMUL.F32        S14, S8, S8
      VSTR            S4, [R9,#8]
      VMUL.F32        S1, S10, S10
      VMUL.F32        S12, S6, S6
      VADD.F32        S12, S14, S12
      VLDR            S14, =0.0001
      VADD.F32        S12, S12, S1
      VSQRT.F32       S12, S12
      VCMPE.F32       S12, S14
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      _R1 = *(&Vec3::ZERO + 1);
      _R2 = Vec3::ZERO;
      _R0 = dword_2822498;
    else
      __asm
      {
        VDIV.F32        S10, S10, S12
        VDIV.F32        S8, S8, S12
        VDIV.F32        S6, S6, S12
        VMOV            R0, S10
        VMOV            R1, S8
        VMOV            R2, S6
      }
      VMOV.F32        S6, #12.0
      VMOV            S8, R1
    *(_DWORD *)v5 = _R2;
    *((_DWORD *)v5 + 1) = _R1;
    __asm { VMOV            S10, R2 }
    *((_DWORD *)v5 + 2) = _R0;
      VMOV            S12, R0
      VMUL.F32        S10, S10, S6
      VMUL.F32        S8, S8, S6
      VMUL.F32        S6, S12, S6
      VADD.F32        S4, S4, S6
      VSTR            S0, [SP,#0x150+var_E8]
      VSTR            S2, [SP,#0x150+var_E4]
      VSTR            S4, [SP,#0x150+var_E0]
    v21 = Level::getHitResult(v29);
    v22 = (const Vec3 *)Entity::getRegion(v7);
    v23 = (*(int (__fastcall **)(InGamePlayScreen *))(*(_DWORD *)v4 + 320))(v4);
    BlockSource::clip((BlockSource *)&v30, v22, (const Vec3 *)&v47, (int)&v48, v23, 0, 200, 0);
    _ZF = v28 == 0;
    v25 = v30;
    v21[4] = v31;
    *(_DWORD *)v21 = v25;
    *((_DWORD *)v21 + 2) = v32;
    *((_DWORD *)v21 + 3) = v33;
    *((_DWORD *)v21 + 4) = v34;
    *((_DWORD *)v21 + 5) = v35;
    *((_DWORD *)v21 + 6) = v36;
    *((_DWORD *)v21 + 7) = v37;
    v26 = v38;
    *((_WORD *)v21 + 18) = v39;
    *((_DWORD *)v21 + 8) = v26;
    *((_DWORD *)v21 + 10) = v40;
    *((_DWORD *)v21 + 11) = v41;
    *((_DWORD *)v21 + 12) = v42;
    *((_DWORD *)v21 + 13) = v43;
    *((_DWORD *)v21 + 14) = v44;
    *((_DWORD *)v21 + 15) = v45;
    v21[64] = v46;
    if ( v28 )
      _ZF = (*(_DWORD *)v21 & 0xFFFFFFFE) == 2;
    if ( !_ZF )
      _R0 = Entity::distanceToSqr(v7, (const Vec3 *)(v21 + 20));
        VLDR            S0, =144.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        *(_DWORD *)Level::getHitResult(v29) = 3;
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall InGamePlayScreen::renderGameBehind(InGamePlayScreen *this)
{
  return 1;
}


void __fastcall InGamePlayScreen::_applyInput_StepSound(InGamePlayScreen *this, float a2)
{
  InGamePlayScreen *v2; // r4@1
  Options *v4; // r0@1
  LevelRenderer *v9; // r0@3
  char *v10; // r5@5
  int v11; // r4@5
  void *v12; // r0@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  int v15; // [sp+0h] [bp-38h]@0
  int v16; // [sp+Ch] [bp-2Ch]@5

  v2 = this;
  _R5 = a2;
  v4 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 82));
  if ( Options::getStutterTurnSound(v4) == 1 )
  {
    __asm
    {
      VMOV            S0, R5
      VMOV.F32        S18, #1.0
      VABS.F32        S0, S0
      VCMPE.F32       S0, S18
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
      {
        VLDR            S2, =0.066667
        VMUL.F32        S16, S0, S2
      }
      v9 = (LevelRenderer *)ClientInstance::getLevelRenderer(*((ClientInstance **)v2 + 82));
        VCMPE.F32       S16, S18
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S16, S18 }
      v10 = LevelRenderer::getLevelRendererPlayer(v9);
      v11 = ClientInstance::getLocalPlayer(*((ClientInstance **)v2 + 82));
      sub_21E94B4((void **)&v16, "vr.stutterturn");
        VLDR            S0, =0.3
        VCMPE.F32       S16, S0
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S16, S0 }
        VLDR            S0, =0.2
        VMUL.F32        S0, S16, S0
        VSTR            S0, [SP,#0x38+var_38]
      LevelRendererPlayer::playSound(*(float *)&v10, *(float *)&v11, 3, (int)&v16, v15, 1065353216);
      v12 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v16 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
  }
}


void __fastcall InGamePlayScreen::~InGamePlayScreen(InGamePlayScreen *this)
{
  InGamePlayScreen::~InGamePlayScreen(this);
}


void __fastcall InGamePlayScreen::_applyInput_StutterRoll(int a1, int a2, int a3)
{
  int v5; // r5@1
  Options *v6; // r0@1
  int v7; // r3@1
  int v8; // r8@1
  float v17; // [sp+8h] [bp-28h]@3
  int v18; // [sp+Ch] [bp-24h]@3

  _R4 = (InGamePlayScreen *)a1;
  _R6 = a3;
  v5 = a2;
  v6 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a1 + 328));
  Options::getVRLivingRoomMode(v6);
  v8 = ClientInstance::getLocalPlayer(*((ClientInstance **)_R4 + 82));
  __asm { VLDR            S2, [R4,#0xFC] }
  _R0 = &mce::Math::RADDEG;
  __asm
  {
    VLDR            S0, [R0]
    VMUL.F32        S0, S0, S2
    VMOV.F32        S2, #2.0
    VMOV            R2, S0
    VMOV.F32        S0, #1.0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S2, S0 }
    VMOV            S0, R6
    VMUL.F32        S16, S2, S0
  _R5 = StutterTurn(v5, *((ClientInstance **)_R4 + 82), _R2, v7, 1);
  *((_DWORD *)_R4 + 63) = 0;
  __asm { VSTR            S16, [SP,#0x30+var_28] }
  v18 = _R5;
  LocalPlayer::localPlayerTurn(v8, &v17);
  (*(void (__fastcall **)(InGamePlayScreen *, int))(*(_DWORD *)_R4 + 336))(_R4, _R5);
    VMOV            S0, R5
    VLDR            S2, =1.1921e-7
    VABS.F32        S0, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    *(_BYTE *)(ClientInstance::getGameRenderer(*((ClientInstance **)_R4 + 82)) + 814) = 1;
    _R0 = getTimeS();
    __asm
    {
      VMOV            D8, R0, R1
      VLDR            D0, [R4,#0xE8]
      VLDR            D1, =0.2
      VSUB.F64        D0, D8, D0
      VCMPE.F64       D0, D1
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      InGamePlayScreen::_applyInput_StepSound(_R4, *(float *)&_R5);
      __asm { VSTR            D8, [R4,#0xE8] }
}


void __fastcall InGamePlayScreen::_applyInput_StutterDirectRoll(int a1, int a2, int a3)
{
  int v5; // r5@1
  Options *v6; // r0@1
  int v7; // r3@1
  int v8; // r8@1
  float v17; // [sp+8h] [bp-28h]@3
  int v18; // [sp+Ch] [bp-24h]@3

  _R4 = (InGamePlayScreen *)a1;
  _R6 = a3;
  v5 = a2;
  v6 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a1 + 328));
  Options::getVRLivingRoomMode(v6);
  v8 = ClientInstance::getLocalPlayer(*((ClientInstance **)_R4 + 82));
  __asm { VLDR            S2, [R4,#0xFC] }
  _R0 = &mce::Math::RADDEG;
  __asm
  {
    VLDR            S0, [R0]
    VMUL.F32        S0, S0, S2
    VMOV.F32        S2, #1.0
    VMOV            R2, S0
    VMOV.F32        S0, #2.0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S2, S0 }
    VMOV            S0, R6
    VMUL.F32        S16, S2, S0
  _R5 = StutterTurn(v5, *((ClientInstance **)_R4 + 82), _R2, v7, 1);
  *((_DWORD *)_R4 + 63) = 0;
  __asm { VSTR            S16, [SP,#0x30+var_28] }
  v18 = _R5;
  LocalPlayer::localPlayerTurn(v8, &v17);
  (*(void (__fastcall **)(InGamePlayScreen *, int))(*(_DWORD *)_R4 + 336))(_R4, _R5);
    VMOV            S0, R5
    VLDR            S2, =1.1921e-7
    VABS.F32        S0, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    *(_BYTE *)(ClientInstance::getGameRenderer(*((ClientInstance **)_R4 + 82)) + 814) = 1;
    _R0 = getTimeS();
    __asm
    {
      VMOV            D8, R0, R1
      VLDR            D0, [R4,#0xE8]
      VLDR            D1, =0.2
      VSUB.F64        D0, D8, D0
      VCMPE.F64       D0, D1
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      InGamePlayScreen::_applyInput_StepSound(_R4, *(float *)&_R5);
      __asm { VSTR            D8, [R4,#0xE8] }
}


_BOOL4 __fastcall InGamePlayScreen::_isVRTransitioning(InGamePlayScreen *this)
{
  InGamePlayScreen *v1; // r4@1

  v1 = this;
  return ClientInstance::isHoloRealityMode(*((ClientInstance **)this + 82)) == 1
      && ClientInstance::isVRTransitioning(*((ClientInstance **)v1 + 82));
}


signed int __fastcall InGamePlayScreen::isModal(InGamePlayScreen *this)
{
  return 1;
}


int __fastcall InGamePlayScreen::_getPickRange(InGamePlayScreen *this)
{
  InGamePlayScreen *v1; // r4@1
  int v2; // r5@1
  int (__fastcall *v3)(int, int *, int); // r6@1
  ClientInputHandler *v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = *(_DWORD *)(ClientInstance::getLocalPlayer(*((ClientInstance **)this + 82)) + 5172);
  v3 = *(int (__fastcall **)(int, int *, int))(*(_DWORD *)v2 + 44);
  v4 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)v1 + 82));
  v8 = ClientInputHandler::getCurrentInputMode(v4);
  v5 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 82));
  v6 = (*(int (**)(void))(*(_DWORD *)v5 + 76))();
  return v3(v2, &v8, v6);
}


int __fastcall InGamePlayScreen::_setHoloMode(InGamePlayScreen *this)
{
  int v1; // r0@1
  int v3; // [sp+4h] [bp-Ch]@1

  v1 = *((_DWORD *)this + 82);
  v3 = 2;
  return ClientInstance::setClientPlayMode(v1, &v3);
}


int __fastcall InGamePlayScreen::_computeFirstPerson3dObjectLocationForVR(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  __int64 v5; // r1@1
  int v6; // r0@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r0@1
  __int64 v14; // kr00_8@1
  int v15; // ST0C_4@1
  int v16; // ST08_4@1
  int v17; // ST04_4@1
  __int64 v18; // kr08_8@1
  int v19; // r0@1
  int v20; // r1@1
  int v21; // r2@1
  int v22; // r5@1
  int v23; // r6@1
  int v24; // r7@1
  int v25; // r11@1
  int v26; // r3@1
  int result; // r0@1
  __int64 v28; // [sp+10h] [bp-1D8h]@1
  int v29; // [sp+18h] [bp-1D0h]@1
  int v30; // [sp+1Ch] [bp-1CCh]@1
  int v31; // [sp+20h] [bp-1C8h]@1
  int v32; // [sp+24h] [bp-1C4h]@1
  int v33; // [sp+28h] [bp-1C0h]@1
  int v34; // [sp+2Ch] [bp-1BCh]@1
  int v35; // [sp+30h] [bp-1B8h]@1
  int v36; // [sp+34h] [bp-1B4h]@1
  int v37; // [sp+38h] [bp-1B0h]@1
  int v38; // [sp+3Ch] [bp-1ACh]@1
  int v39; // [sp+40h] [bp-1A8h]@1
  int v40; // [sp+44h] [bp-1A4h]@1
  int v41; // [sp+48h] [bp-1A0h]@1
  int v42; // [sp+4Ch] [bp-19Ch]@1
  __int64 v43; // [sp+50h] [bp-198h]@1
  __int64 v44; // [sp+58h] [bp-190h]@1
  __int64 v45; // [sp+60h] [bp-188h]@1
  __int64 v46; // [sp+68h] [bp-180h]@1
  __int64 v47; // [sp+70h] [bp-178h]@1
  __int64 v48; // [sp+78h] [bp-170h]@1
  int v49; // [sp+80h] [bp-168h]@1
  int v50; // [sp+84h] [bp-164h]@1
  int v51; // [sp+88h] [bp-160h]@1
  int v52; // [sp+8Ch] [bp-15Ch]@1
  int v53; // [sp+90h] [bp-158h]@1
  int v54; // [sp+94h] [bp-154h]@1
  int v55; // [sp+98h] [bp-150h]@1
  char v56; // [sp+9Ch] [bp-14Ch]@1
  char v57; // [sp+DCh] [bp-10Ch]@1
  int v58; // [sp+E0h] [bp-108h]@1
  int v59; // [sp+E4h] [bp-104h]@1
  float v60; // [sp+E8h] [bp-100h]@1
  int v66; // [sp+118h] [bp-D0h]@1
  int v67; // [sp+11Ch] [bp-CCh]@1
  int v68; // [sp+120h] [bp-C8h]@1
  __int64 v69; // [sp+128h] [bp-C0h]@1
  float v70; // [sp+130h] [bp-B8h]@1
  float v71; // [sp+138h] [bp-B0h]@1
  __int64 v83; // [sp+178h] [bp-70h]@1
  float v84; // [sp+180h] [bp-68h]@1
  __int64 v85; // [sp+184h] [bp-64h]@1
  int v86; // [sp+18Ch] [bp-5Ch]@1
  int v87; // [sp+190h] [bp-58h]@1
  int v88; // [sp+194h] [bp-54h]@1
  int v89; // [sp+198h] [bp-50h]@1
  int v90; // [sp+19Ch] [bp-4Ch]@1
  int v91; // [sp+1A0h] [bp-48h]@1
  int v92; // [sp+1A4h] [bp-44h]@1
  int v93; // [sp+1A8h] [bp-40h]@1
  int v94; // [sp+1ACh] [bp-3Ch]@1
  int v95; // [sp+1B0h] [bp-38h]@1
  int v96; // [sp+1B4h] [bp-34h]@1
  int v97; // [sp+1B8h] [bp-30h]@1
  int v98; // [sp+1BCh] [bp-2Ch]@1
  int v99; // [sp+1C0h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 328));
  v5 = *(_QWORD *)(v4 + 516);
  v84 = *(float *)(v4 + 524);
  v83 = v5;
  v6 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 328));
  HolographicPlatform::getTransform((int)&v71, v6, 2, 15, 10);
  v69 = v83;
  v70 = v84;
  __asm
  {
    VLDR            S0, [SP,#0x1E8+var_B0]
    VLDR            S8, [SP,#0x1E8+var_C0]
    VLDR            S6, [SP,#0x1E8+var_A0]
    VLDR            S10, [SP,#0x1E8+var_C0+4]
    VMUL.F32        S0, S0, S8
    VLDR            S2, [SP,#0x1E8+var_AC]
    VLDR            S4, [SP,#0x1E8+var_A8]
    VMUL.F32        S6, S6, S10
    VLDR            S14, [SP,#0x1E8+var_9C]
    VMUL.F32        S2, S2, S8
    VLDR            S1, [SP,#0x1E8+var_98]
    VMUL.F32        S4, S4, S8
    VMUL.F32        S14, S14, S10
    VLDR            S12, [SP,#0x1E8+var_B8]
    VMUL.F32        S10, S1, S10
    VLDR            S8, [SP,#0x1E8+var_90]
    VLDR            S1, [SP,#0x1E8+var_8C]
    VMUL.F32        S8, S8, S12
    VADD.F32        S0, S6, S0
    VLDR            S6, [SP,#0x1E8+var_88]
    VMUL.F32        S1, S1, S12
    VMUL.F32        S6, S6, S12
    VADD.F32        S2, S14, S2
    VADD.F32        S4, S10, S4
    VLDR            S10, [SP,#0x1E8+var_78]
    VADD.F32        S0, S0, S8
    VLDR            S8, [SP,#0x1E8+var_7C]
    VADD.F32        S2, S2, S1
    VADD.F32        S4, S4, S6
    VLDR            S6, [SP,#0x1E8+var_80]
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VSTR            S0, [SP,#0x1E8+var_C0]
    VSTR            S2, [SP,#0x1E8+var_C0+4]
    VSTR            S4, [SP,#0x1E8+var_B8]
  }
  ScreenSetupCleanupHelper::computeGazeToHeadLockedRotation(
    COERCE_FLOAT(&v60),
    *(ClientInstance **)(v2 + 328),
    (Vec3 *)&v69,
    50.0,
    70.0);
  v11 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 328));
  HolographicPlatform::getTransformTranslation((int)&v57, v11, 16, 15, 0);
  v66 = *(_DWORD *)&v57;
  v67 = v58;
  v68 = v59;
    VLDR            S0, [SP,#0x1E8+var_E0]
    VLDR            S2, [SP,#0x1E8+var_DC]
    VLDR            S4, [SP,#0x1E8+var_D8]
    VNEG.F32        S0, S0
    VNEG.F32        S2, S2
    VNEG.F32        S4, S4
    VSTR            S0, [SP,#0x1E8+var_E0]
    VSTR            S2, [SP,#0x1E8+var_DC]
    VSTR            S4, [SP,#0x1E8+var_D8]
    VLDR            S0, [SP,#0x1E8+var_100]
    VLDR            S2, [SP,#0x1E8+var_FC]
    VLDR            S4, [SP,#0x1E8+var_F8]
    VSTR            S0, [SP,#0x1E8+var_100]
    VSTR            S2, [SP,#0x1E8+var_FC]
    VSTR            S4, [SP,#0x1E8+var_F8]
  v12 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 328));
  HolographicPlatform::getTransform((int)&v56, v12, 15, 2, 14);
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v13 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 328));
  (*(void (**)(void))(*(_DWORD *)v13 + 264))();
  _aeabi_memclr8(&v43, 56);
  v43 = *(_QWORD *)&Matrix::IDENTITY;
  v44 = qword_27E89F0;
  v45 = qword_27E89F8;
  v46 = qword_27E8A00;
  v47 = qword_27E8A08;
  v48 = qword_27E8A10;
  v52 = *((_DWORD *)&qword_27E8A20 + 1);
  v49 = v53;
  v50 = v54;
  v51 = v55;
  glm::detail::operator*<float>((int)&v85, (int)&v56, (int)&v60);
  _aeabi_memclr8(&v28, 56);
  v28 = v85;
  v29 = v86;
  v30 = v87;
  v31 = v88;
  v32 = v89;
  v33 = v90;
  v34 = v91;
  v35 = v92;
  v36 = v93;
  v37 = v94;
  v38 = v95;
  v39 = v96;
  v40 = v97;
  v41 = v98;
  v42 = v99;
  glm::detail::operator*<float>((int)&v85, (int)&v28, (int)&v43);
  v14 = *(_QWORD *)&v86;
  v15 = v99;
  v16 = v98;
  v17 = v97;
  v18 = *(_QWORD *)&v95;
  v19 = v88;
  v20 = v89;
  v21 = v90;
  v22 = v91;
  v23 = v92;
  v24 = v93;
  v25 = v94;
  *(_QWORD *)v3 = v85;
  *(_QWORD *)(v3 + 8) = v14;
  v26 = v3 + 16;
  *(_DWORD *)v26 = v19;
  *(_DWORD *)(v26 + 4) = v20;
  *(_DWORD *)(v26 + 8) = v21;
  *(_DWORD *)(v26 + 12) = v22;
  *(_DWORD *)(v26 + 16) = v23;
  *(_DWORD *)(v26 + 20) = v24;
  *(_DWORD *)(v26 + 24) = v25;
  *(_QWORD *)(v3 + 44) = v18;
  *(_DWORD *)(v3 + 52) = v17;
  *(_DWORD *)(v3 + 56) = v16;
  result = v15;
  *(_DWORD *)(v3 + 60) = v15;
  return result;
}


int __fastcall InGamePlayScreen::_renderItemInHand(int a1, int a2, float a3, int a4)
{
  int v4; // r11@1
  int v6; // r8@1
  float v7; // r9@1
  LevelRenderer *v13; // r0@1
  char *v14; // r0@1
  LevelRenderer *v16; // r0@1
  char *v17; // r0@1
  Options *v22; // r0@1
  LevelRenderer *v23; // r0@2
  char *v24; // r4@2
  int v25; // r0@2
  float v26; // r3@2
  float v28; // r1@2
  int v31; // r4@26
  int v32; // r0@26
  int v33; // r4@26
  int v34; // r0@26
  int v35; // r0@27
  int v36; // r0@28
  mce::Camera *v40; // r0@28
  Options *v43; // r0@33
  ItemInHandRenderer *v44; // r0@34
  char v46; // [sp+4h] [bp-16Ch]@34
  float v47; // [sp+68h] [bp-108h]@2
  char v49; // [sp+70h] [bp-100h]@1
  float v50; // [sp+78h] [bp-F8h]@1
  int v51; // [sp+7Ch] [bp-F4h]@1
  int v52; // [sp+80h] [bp-F0h]@1
  int v53; // [sp+84h] [bp-ECh]@1
  int v54; // [sp+88h] [bp-E8h]@1
  int v55; // [sp+90h] [bp-E0h]@1
  int v56; // [sp+94h] [bp-DCh]@1
  int v57; // [sp+98h] [bp-D8h]@1
  int v58; // [sp+9Ch] [bp-D4h]@1
  signed int v59; // [sp+A4h] [bp-CCh]@1
  int v60; // [sp+A8h] [bp-C8h]@1
  int v61; // [sp+ACh] [bp-C4h]@1
  int v62; // [sp+B4h] [bp-BCh]@1
  char v63; // [sp+B8h] [bp-B8h]@1
  int v64; // [sp+C0h] [bp-B0h]@26
  signed int v65; // [sp+C4h] [bp-ACh]@26
  int v66; // [sp+C8h] [bp-A8h]@26
  int v67; // [sp+CCh] [bp-A4h]@26
  int v68; // [sp+D0h] [bp-A0h]@26
  int v69; // [sp+D4h] [bp-9Ch]@26
  int v70; // [sp+D8h] [bp-98h]@26
  int v71; // [sp+DCh] [bp-94h]@26
  int v72; // [sp+E0h] [bp-90h]@26
  int v73; // [sp+E4h] [bp-8Ch]@26
  int v74; // [sp+E8h] [bp-88h]@26
  int v75; // [sp+ECh] [bp-84h]@26
  int v76; // [sp+F0h] [bp-80h]@26
  int v77; // [sp+F4h] [bp-7Ch]@26
  int v78; // [sp+F8h] [bp-78h]@26
  int v79; // [sp+FCh] [bp-74h]@26
  int v80; // [sp+100h] [bp-70h]@26
  int v81; // [sp+104h] [bp-6Ch]@26
  int v82; // [sp+108h] [bp-68h]@26
  int v83; // [sp+10Ch] [bp-64h]@26

  v4 = a2;
  _R6 = a1;
  v6 = a4;
  v7 = a3;
  MatrixStack::push((MatrixStack *)&v63, *(_DWORD *)(a2 + 16) + 32);
  _R0 = GuiData::getScreenSizeData(*(GuiData **)(v4 + 24));
  __asm
  {
    VLDR            S16, [R0,#8]
    VLDR            S18, [R0,#0xC]
  }
  v13 = (LevelRenderer *)ClientInstance::getLevelRenderer(*(ClientInstance **)(_R6 + 328));
  v14 = LevelRenderer::getLevelRendererPlayer(v13);
  _R4 = LevelRendererPlayer::getFov((LevelRendererPlayer *)v14, *(float *)(v4 + 8), 0);
  v16 = (LevelRenderer *)ClientInstance::getLevelRenderer(*(ClientInstance **)(_R6 + 328));
  v17 = LevelRenderer::getLevelRendererPlayer(v16);
  _R0 = LevelRendererCamera::getRenderDistance((LevelRendererCamera *)v17);
    VMOV            S0, R4
    VLDR            S2, =0.0087266
    VMOV            S24, R0
    VMUL.F32        S0, S0, S2
    VDIV.F32        S20, S16, S18
  v59 = 0;
  v60 = 0;
  _R1 = &LevelRenderer::Z_NEAR;
    VMOV            R0, S0
    VLDR            S22, [R1]
  _R0 = tanf(_R0);
    VMOV.F32        S0, #-2.0
    VADD.F32        S2, S22, S24
    VMOV            S4, R0
    VMOV.F32        S6, #1.0
    VMUL.F32        S8, S4, S20
    VSUB.F32        S10, S24, S22
    VMUL.F32        S0, S22, S0
    VNEG.F32        S2, S2
    VDIV.F32        S4, S6, S4
    VMUL.F32        S0, S0, S24
    VDIV.F32        S8, S6, S8
    VDIV.F32        S2, S2, S10
    VDIV.F32        S0, S0, S10
    VSTR            S8, [SP,#0x170+var_F8]
  v53 = 0;
  v54 = 0;
  v51 = 0;
  v52 = 0;
  __asm { VSTR            S4, [SP,#0x170+var_E4] }
  v57 = 0;
  v58 = 0;
  v55 = 0;
  v56 = 0;
  __asm { VSTR            S2, [SP,#0x170+var_D0] }
  v59 = -1082130432;
  v61 = 0;
  __asm { VSTR            S0, [SP,#0x170+var_C0] }
  v62 = 0;
  MatrixStack::MatrixStackRef::operator=((int)&v63, (int)&v50);
  MatrixStack::push((MatrixStack *)&v49, *(_DWORD *)(v4 + 16) + 16);
  v22 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(_R6 + 328));
  if ( Options::getBobView(v22) == 1 )
    v23 = (LevelRenderer *)ClientInstance::getLevelRenderer(*(ClientInstance **)(_R6 + 328));
    v24 = LevelRenderer::getLevelRendererPlayer(v23);
    v25 = MatrixStack::MatrixStackRef::operator*((int)&v49);
    LevelRendererPlayer::bobView((int)v24, v25, *(_DWORD *)(v4 + 8));
    Entity::getInterpolatedRotation((Entity *)&v47, v7, *(float *)(v4 + 8), v26);
    _R0 = getTimeS();
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R6,#0xE0]
      VLDR            S24, =0.2
      VSTR            D0, [R6,#0xE0]
      VSUB.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VCMPE.F32       S0, S24
      VLDR            S4, [R6,#0xC0]
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S22, S24
      VLDR            S6, [SP,#0x170+var_104]
      VLDR            S26, [R6,#0xBC]
      VSUB.F32        S2, S6, S4
      VLDR            S4, =-1.1921e-7
      VLDR            S28, [SP,#0x170+var_108]
      VCMPE.F32       S0, S4
      VMOV            R0, S2
      VMOV.F32        S2, S24
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S2, S0 }
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S22, S2 }
    _R0 = mce::Math::wrapDegrees(_R0, v28);
      VMOV            S0, R0
      VLDR            S4, =0.8
      VSUB.F32        S2, S28, S26
      VLDR            S8, [R6,#0xC8]
      VDIV.F32        S0, S0, S22
      VDIV.F32        S2, S2, S22
      VMUL.F32        S8, S8, S4
      VLDR            S6, [R6,#0xC4]
      VMUL.F32        S0, S0, S24
      VMUL.F32        S4, S6, S4
      VMUL.F32        S2, S2, S24
      VADD.F32        S0, S8, S0
      VADD.F32        S4, S4, S2
      VLDR            S2, =50.0
      VCMPE.F32       S0, S2
      VCMPE.F32       S4, S2
      __asm { VMOVGT.F32      S0, S2 }
      __asm { VMOVGT.F32      S4, S2 }
      VLDR            S2, =-50.0
      __asm { VMOVLT.F32      S0, S2 }
      VCMPE.F32       S22, #0.0
      __asm { VMOVLT.F32      S4, S2 }
      VSTR            S4, [R6,#0xC4]
      VSTR            S0, [R6,#0xC8]
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VLDR            S0, [R6,#0xD4] }
    else
      __asm
      {
        VLDR            S6, =90.0
        VLDR            S8, [R6,#0xD8]
        VMUL.F32        S2, S0, S6
        VLDR            S0, [R6,#0xD4]
        VMUL.F32        S10, S4, S6
        VLDR            S6, [R6,#0xCC]
        VLDR            S4, [R6,#0xD0]
        VLDR            S12, =-42.0
        VLDR            S14, =900.0
        VLDR            S1, =0.0083333
      }
      do
        __asm
        {
          VCMPE.F32       S22, S1
          VMUL.F32        S3, S8, S12
          VMRS            APSR_nzcv, FPSCR
          VMUL.F32        S5, S0, S12
          VMUL.F32        S7, S4, S14
          VMUL.F32        S9, S6, S14
          VMOV.F32        S11, S22
          VADD.F32        S3, S2, S3
          VADD.F32        S5, S10, S5
          VSUB.F32        S3, S3, S7
          VSUB.F32        S5, S5, S9
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S11, S1 }
          VMUL.F32        S3, S3, S11
          VMUL.F32        S5, S5, S11
          VSUB.F32        S22, S22, S11
          VADD.F32        S8, S3, S8
          VADD.F32        S0, S5, S0
          VCMPE.F32       S22, #0.0
          VMUL.F32        S3, S8, S11
          VMUL.F32        S5, S0, S11
          VADD.F32        S4, S3, S4
          VADD.F32        S6, S5, S6
      while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
        VSTR            S6, [R6,#0xCC]
        VSTR            S4, [R6,#0xD0]
        VSTR            S0, [R6,#0xD4]
        VSTR            S8, [R6,#0xD8]
      VABS.F32        S2, S0
      VLDR            S0, =1000.0
      VCMPE.F32       S2, S0
    if ( !(_NF ^ _VF) )
      goto LABEL_38;
      VLDR            S2, [R6,#0xD8]
      VABS.F32        S2, S2
LABEL_38:
      *(_DWORD *)(_R6 + 212) = 0;
      *(_DWORD *)(_R6 + 216) = 0;
    v31 = MatrixStack::MatrixStackRef::operator->((int)&v49);
    v32 = *(_DWORD *)(_R6 + 204);
    v64 = 1065353216;
    v65 = 0;
    v66 = 0;
    v83 = v32;
    glm::rotate<float>((int)&v67, v31, (int)&v83, (int)&v64);
    *(_DWORD *)v31 = v67;
    *(_DWORD *)(v31 + 4) = v68;
    *(_DWORD *)(v31 + 8) = v69;
    *(_DWORD *)(v31 + 12) = v70;
    *(_DWORD *)(v31 + 16) = v71;
    *(_DWORD *)(v31 + 20) = v72;
    *(_DWORD *)(v31 + 24) = v73;
    *(_DWORD *)(v31 + 28) = v74;
    *(_DWORD *)(v31 + 32) = v75;
    *(_DWORD *)(v31 + 36) = v76;
    *(_DWORD *)(v31 + 40) = v77;
    *(_DWORD *)(v31 + 44) = v78;
    *(_DWORD *)(v31 + 48) = v79;
    *(_DWORD *)(v31 + 52) = v80;
    *(_DWORD *)(v31 + 56) = v81;
    *(_DWORD *)(v31 + 60) = v82;
    v33 = MatrixStack::MatrixStackRef::operator->((int)&v49);
    v34 = *(_DWORD *)(_R6 + 208);
    v64 = 0;
    v65 = 1065353216;
    v83 = v34;
    glm::rotate<float>((int)&v67, v33, (int)&v83, (int)&v64);
    *(_DWORD *)v33 = v67;
    *(_DWORD *)(v33 + 4) = v68;
    *(_DWORD *)(v33 + 8) = v69;
    *(_DWORD *)(v33 + 12) = v70;
    *(_DWORD *)(v33 + 16) = v71;
    *(_DWORD *)(v33 + 20) = v72;
    *(_DWORD *)(v33 + 24) = v73;
    *(_DWORD *)(v33 + 28) = v74;
    *(_DWORD *)(v33 + 32) = v75;
    *(_DWORD *)(v33 + 36) = v76;
    *(_DWORD *)(v33 + 40) = v77;
    *(_DWORD *)(v33 + 44) = v78;
    *(_DWORD *)(v33 + 48) = v79;
    *(_DWORD *)(v33 + 52) = v80;
    *(_DWORD *)(v33 + 56) = v81;
    *(_DWORD *)(v33 + 60) = v82;
    *(_QWORD *)(_R6 + 188) = *(_QWORD *)&v47;
  v35 = ClientInstance::getHoloInput(*(ClientInstance **)(_R6 + 328));
  if ( !(*(int (**)(void))(*(_DWORD *)v35 + 44))() )
    v36 = MatrixStack::MatrixStackRef::operator->((int)&v49);
    _R1 = mce::Singleton<mce::RendererSettings>::mInstance;
      VLDR            S0, [R1,#0x14]
      VLDR            S2, [R1,#0x18]
    _KR00_8 = *(_QWORD *)(v36 + 48);
    __asm { VDIV.F32        S4, S0, S2 }
    _R5 = *(_DWORD *)(v36 + 56);
    v40 = *(mce::Camera **)(v4 + 16);
      VCMPE.F32       S20, S4
      VMOV.F32        S4, #0.5
        VDIV.F32        S4, S4, S0
        VMUL.F32        S6, S2, S16
        VMUL.F32        S0, S0, S18
        VSUB.F32        S0, S0, S6
        VMUL.F32        S0, S0, S4
        VDIV.F32        S16, S0, S2
      _R0 = mce::Camera::getRightVector(v40);
        VLDR            S0, [R0]
        VMOV            S6, R7
        VLDR            S2, [R0,#4]
        VMOV            S8, R5
        VLDR            S4, [R0,#8]
        VMUL.F32        S0, S0, S16
        VMUL.F32        S2, S2, S16
        VMUL.F32        S4, S4, S16
        VMOV            S10, R4
        VSUB.F32        S20, S10, S0
        VSUB.F32        S18, S6, S2
        VSUB.F32        S16, S8, S4
        VDIV.F32        S4, S4, S2
        VMUL.F32        S6, S0, S18
        VSUB.F32        S2, S2, S6
        VMUL.F32        S2, S2, S4
        VDIV.F32        S16, S2, S0
      _R0 = mce::Camera::getUpVector(v40);
        VADD.F32        S20, S0, S10
        VADD.F32        S18, S2, S6
        VADD.F32        S16, S4, S8
    MatrixStack::MatrixStackRef::operator->((int)&v49);
      VSTR            S20, [R0,#0x30]
      VSTR            S18, [R0,#0x34]
      VSTR            S16, [R0,#0x38]
  if ( !(*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(v7) + 784))(LODWORD(v7)) )
    v43 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(_R6 + 328));
    if ( !Options::getHideHand(v43) )
      BaseEntityRenderContext::BaseEntityRenderContext(
        (int)&v46,
        v4,
        (ClientInstance *)(*(_QWORD *)(_R6 + 324) >> 32),
        *(_QWORD *)(_R6 + 324));
      v44 = (ItemInHandRenderer *)BaseEntityRenderContext::getItemInHandRenderer((BaseEntityRenderContext *)&v46);
      ItemInHandRenderer::render(v44, (BaseEntityRenderContext *)&v46, v6);
      BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v46);
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v49);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v63);
}


Level *__fastcall InGamePlayScreen::_pick(InGamePlayScreen *this, float a2)
{
  int v3; // r4@1
  Level *result; // r0@1
  Level *v5; // r9@1 OVERLAPPED
  int v6; // r0@3
  int v7; // r5@4
  ClientInputHandler *v9; // r0@5
  int v13; // r6@6
  Player *v15; // r0@6
  Player *v16; // r8@6
  ItemInstance *v17; // r6@8
  int v18; // r5@8
  int v19; // r5@12
  ItemInstance *v20; // r0@15
  const Vec3 *v22; // r7@19
  float v23; // r3@19
  int v24; // r0@19
  char *v25; // r0@19
  int v26; // r2@19
  int v27; // r2@19
  float v28; // r3@19
  int v29; // r3@20
  int v30; // r7@20
  int v31; // r3@20
  int v32; // r6@20
  int v33; // r7@20
  int v34; // r0@20
  char *v36; // r0@25
  float *v38; // r1@28
  signed int v39; // r7@28
  Options *v40; // r0@34
  LevelRenderer *v41; // r0@35
  char *v42; // r0@35
  BlockSource *v44; // r0@37
  char *v45; // r6@37
  __int64 v46; // r0@38
  Entity *v47; // r4@38
  unsigned int v48; // r7@38
  Entity *v49; // r5@39
  const Vec3 *v51; // r4@42
  const Vec3 *v52; // r10@42
  Entity *v56; // r5@71
  char *v57; // r4@74
  int v58; // r1@74
  int v59; // r1@74
  const Vec3 *v60; // r0@83
  char v61; // r1@84
  char v62; // r0@84
  char *v63; // r0@90
  int v64; // r2@90
  int v65; // r2@90
  int v66; // r4@94
  char *v67; // r0@94
  __int64 v68; // r1@95
  Options *v70; // r0@99
  float v71; // r3@99
  char *v74; // r4@107
  int v75; // r1@107
  int v76; // r1@107
  char *v77; // r0@107
  signed int v78; // [sp+14h] [bp-334h]@38
  __int64 v79; // [sp+1Ch] [bp-32Ch]@38
  int v80; // [sp+28h] [bp-320h]@28
  int v81; // [sp+30h] [bp-318h]@38
  Player *v82; // [sp+34h] [bp-314h]@28
  float v83; // [sp+3Ch] [bp-30Ch]@96
  int v86; // [sp+48h] [bp-300h]@107
  char v87; // [sp+4Ch] [bp-2FCh]@107
  int v88; // [sp+50h] [bp-2F8h]@107
  int v89; // [sp+54h] [bp-2F4h]@107
  int v90; // [sp+58h] [bp-2F0h]@107
  int v91; // [sp+5Ch] [bp-2ECh]@107
  int v92; // [sp+60h] [bp-2E8h]@107
  int v93; // [sp+64h] [bp-2E4h]@107
  int v94; // [sp+68h] [bp-2E0h]@107
  __int16 v95; // [sp+6Ch] [bp-2DCh]@107
  int v96; // [sp+70h] [bp-2D8h]@107
  int v97; // [sp+74h] [bp-2D4h]@107
  int v98; // [sp+78h] [bp-2D0h]@107
  int v99; // [sp+7Ch] [bp-2CCh]@107
  int v100; // [sp+80h] [bp-2C8h]@107
  int v101; // [sp+84h] [bp-2C4h]@107
  char v102; // [sp+88h] [bp-2C0h]@107
  int v103; // [sp+90h] [bp-2B8h]@74
  char v104; // [sp+94h] [bp-2B4h]@74
  int v105; // [sp+98h] [bp-2B0h]@74
  int v106; // [sp+9Ch] [bp-2ACh]@74
  int v107; // [sp+A0h] [bp-2A8h]@74
  int v108; // [sp+A4h] [bp-2A4h]@74
  int v109; // [sp+A8h] [bp-2A0h]@74
  int v110; // [sp+ACh] [bp-29Ch]@74
  int v111; // [sp+B0h] [bp-298h]@74
  __int16 v112; // [sp+B4h] [bp-294h]@74
  int v113; // [sp+B8h] [bp-290h]@74
  int v114; // [sp+BCh] [bp-28Ch]@74
  int v115; // [sp+C0h] [bp-288h]@74
  int v116; // [sp+C4h] [bp-284h]@74
  int v117; // [sp+C8h] [bp-280h]@74
  int v118; // [sp+CCh] [bp-27Ch]@74
  char v119; // [sp+D0h] [bp-278h]@74
  float v120; // [sp+D4h] [bp-274h]@54
  int v121; // [sp+E0h] [bp-268h]@17
  float v122; // [sp+E4h] [bp-264h]@19
  int v123; // [sp+E8h] [bp-260h]@19
  int v124; // [sp+ECh] [bp-25Ch]@48
  int v125; // [sp+F0h] [bp-258h]@48
  int v129; // [sp+100h] [bp-248h]@48
  __int16 v130; // [sp+104h] [bp-244h]@48
  int v131; // [sp+108h] [bp-240h]@48
  int v132; // [sp+10Ch] [bp-23Ch]@48
  int v133; // [sp+110h] [bp-238h]@48
  int v134; // [sp+114h] [bp-234h]@48
  int v135; // [sp+118h] [bp-230h]@48
  int v136; // [sp+11Ch] [bp-22Ch]@48
  char v137; // [sp+120h] [bp-228h]@48
  float v138; // [sp+128h] [bp-220h]@45
  int v139; // [sp+134h] [bp-214h]@45
  int v140; // [sp+138h] [bp-210h]@45
  int v141; // [sp+13Ch] [bp-20Ch]@45
  int v142; // [sp+140h] [bp-208h]@45
  int v143; // [sp+144h] [bp-204h]@45
  int v144; // [sp+148h] [bp-200h]@45
  char v145; // [sp+14Ch] [bp-1FCh]@45
  int v146; // [sp+150h] [bp-1F8h]@43
  char v147; // [sp+154h] [bp-1F4h]@43
  int v148; // [sp+158h] [bp-1F0h]@43
  int v149; // [sp+15Ch] [bp-1ECh]@43
  int v150; // [sp+160h] [bp-1E8h]@43
  int v151; // [sp+164h] [bp-1E4h]@43
  int v152; // [sp+168h] [bp-1E0h]@43
  int v153; // [sp+16Ch] [bp-1DCh]@43
  int v154; // [sp+170h] [bp-1D8h]@43
  __int16 v155; // [sp+174h] [bp-1D4h]@43
  int v156; // [sp+178h] [bp-1D0h]@43
  int v157; // [sp+17Ch] [bp-1CCh]@43
  int v158; // [sp+180h] [bp-1C8h]@43
  int v159; // [sp+184h] [bp-1C4h]@43
  int v160; // [sp+188h] [bp-1C0h]@43
  int v161; // [sp+18Ch] [bp-1BCh]@43
  char v162; // [sp+190h] [bp-1B8h]@43
  float v163; // [sp+198h] [bp-1B0h]@43
  int v164; // [sp+1A4h] [bp-1A4h]@43
  int v165; // [sp+1A8h] [bp-1A0h]@43
  int v166; // [sp+1ACh] [bp-19Ch]@43
  int v167; // [sp+1B0h] [bp-198h]@43
  int v168; // [sp+1B4h] [bp-194h]@43
  int v169; // [sp+1B8h] [bp-190h]@43
  char v170; // [sp+1BCh] [bp-18Ch]@43
  int v171; // [sp+1C0h] [bp-188h]@42
  int v172; // [sp+1C4h] [bp-184h]@43
  int v173; // [sp+1C8h] [bp-180h]@43
  int v174; // [sp+1CCh] [bp-17Ch]@43
  int v175; // [sp+1D0h] [bp-178h]@43
  int v176; // [sp+1D4h] [bp-174h]@43
  char v177; // [sp+1D8h] [bp-170h]@43
  int v178; // [sp+1DCh] [bp-16Ch]@37
  int v179; // [sp+1E0h] [bp-168h]@37
  int v180; // [sp+1E4h] [bp-164h]@37
  int v181; // [sp+1E8h] [bp-160h]@37
  signed int v182; // [sp+1ECh] [bp-15Ch]@37
  int v183; // [sp+1F0h] [bp-158h]@37
  char v184; // [sp+1F4h] [bp-154h]@37
  char v185; // [sp+210h] [bp-138h]@37
  float v186; // [sp+22Ch] [bp-11Ch]@43
  float v187; // [sp+238h] [bp-110h]@37
  int v188; // [sp+244h] [bp-104h]@28
  float v189; // [sp+248h] [bp-100h]@28
  int v190; // [sp+24Ch] [bp-FCh]@20
  int v191; // [sp+250h] [bp-F8h]@24
  int v192; // [sp+254h] [bp-F4h]@24
  int v193; // [sp+258h] [bp-F0h]@20
  int v194; // [sp+25Ch] [bp-ECh]@20
  int v195; // [sp+260h] [bp-E8h]@20
  int v196; // [sp+264h] [bp-E4h]@20
  int v197; // [sp+268h] [bp-E0h]@20
  int v198; // [sp+26Ch] [bp-DCh]@20
  int v199; // [sp+270h] [bp-D8h]@20
  int v200; // [sp+274h] [bp-D4h]@19
  int v201; // [sp+278h] [bp-D0h]@19
  int v202; // [sp+27Ch] [bp-CCh]@19
  float v203; // [sp+280h] [bp-C8h]@19
  float v206; // [sp+28Ch] [bp-BCh]@19
  int v207; // [sp+298h] [bp-B0h]@19
  float v208; // [sp+29Ch] [bp-ACh]@19
  int v209; // [sp+2A0h] [bp-A8h]@19
  int v210; // [sp+2A4h] [bp-A4h]@19
  int v211; // [sp+2A8h] [bp-A0h]@19
  int v212; // [sp+2ACh] [bp-9Ch]@19
  int v213; // [sp+2B0h] [bp-98h]@19
  int v214; // [sp+2B4h] [bp-94h]@19
  int v215; // [sp+2B8h] [bp-90h]@19
  __int16 v216; // [sp+2BCh] [bp-8Ch]@19
  int v217; // [sp+2C0h] [bp-88h]@19
  int v218; // [sp+2C4h] [bp-84h]@19
  int v219; // [sp+2C8h] [bp-80h]@19
  int v220; // [sp+2CCh] [bp-7Ch]@19
  int v221; // [sp+2D0h] [bp-78h]@19
  int v222; // [sp+2D4h] [bp-74h]@19
  char v223; // [sp+2D8h] [bp-70h]@19
  int v224; // [sp+2DCh] [bp-6Ch]@4
  int v225; // [sp+2E0h] [bp-68h]@4
  int v226; // [sp+2E4h] [bp-64h]@4

  _R10 = this;
  v3 = LODWORD(a2);
  result = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 82));
  v5 = result;
  if ( !result )
    return result;
  result = (Level *)ClientInstance::getCameraTargetEntity(*((ClientInstance **)_R10 + 82));
  v6 = ClientInstance::getCameraTargetEntity(*((ClientInstance **)_R10 + 82));
  result = (Level *)(*(int (**)(void))(*(_DWORD *)v6 + 316))();
  if ( result != (Level *)1 )
  v7 = 0;
  _R6 = (*(int (__fastcall **)(InGamePlayScreen *))(*(_DWORD *)_R10 + 340))(_R10);
  v224 = 0;
  v225 = 0;
  v226 = 0;
  if ( ClientInstance::getInput(*((ClientInstance **)_R10 + 82)) )
  {
    v9 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)_R10 + 82));
    v7 = ClientInputHandler::useFreeformPickDirection(v9);
  }
  __asm { VMOV            S16, R6 }
  v13 = ClientInstance::isARVRClient(*((ClientInstance **)_R10 + 82));
  _R11 = ClientInstance::getCameraEntity(*((ClientInstance **)_R10 + 82));
  v15 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)_R10 + 82));
  v16 = v15;
  if ( v7 || v13 == 1 )
    v19 = (*(int (__fastcall **)(InGamePlayScreen *, int, int *, char *))(*(_DWORD *)_R10 + 300))(
            _R10,
            v3,
            &v224,
            (char *)_R10 + 168);
  else
    v17 = (ItemInstance *)Player::getSelectedItem(v15);
    v18 = 0;
    if ( *((_BYTE *)v17 + 15) )
    {
      if ( *(_DWORD *)v17 )
      {
        if ( ItemInstance::isNull(v17) )
        {
          v18 = 0;
        }
        else if ( *((_BYTE *)v17 + 14) )
          v20 = (ItemInstance *)Player::getSelectedItem(v16);
          v18 = ItemInstance::isLiquidClipItem(v20);
        else
      }
      else
        v18 = 0;
    }
    Entity::getInterpolatedPosition((Entity *)&v121, *(float *)&_R11, v3);
    __asm { VLDR            S2, [R11,#0x13C] }
    _R0 = &Player::DEFAULT_PLAYER_HEIGHT_OFFSET;
    __asm
      VLDR            S0, [R0]
      VSUB.F32        S18, S2, S0
    (*(void (__fastcall **)(int))(*(_DWORD *)_R11 + 312))(_R11);
      VMOV.F32        S0, #0.125
      VADD.F32        S0, S18, S0
    if ( !_ZF )
      __asm { VMOVNE.F32      S18, S0 }
      VLDR            S0, [SP,#0x348+var_264]
      VSUB.F32        S0, S0, S18
      VSTR            S0, [SP,#0x348+var_264]
    v22 = (const Vec3 *)Entity::getRegion((Entity *)_R11);
    Entity::getViewVector((Entity *)&v203, *(float *)&_R11, *(float *)&v3, v23);
      VLDR            S0, [SP,#0x348+var_C8]
      VLDR            S2, [SP,#0x348+var_C4]
      VLDR            S4, [SP,#0x348+var_C0]
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S16
      VLDR            S6, [SP,#0x348+var_268]
      VMUL.F32        S4, S4, S16
      VLDR            S8, [SP,#0x348+var_264]
      VLDR            S10, [SP,#0x348+var_260]
      VADD.F32        S0, S6, S0
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S10, S4
      VSTR            S0, [SP,#0x348+var_BC]
      VSTR            S2, [SP,#0x348+var_B8]
      VSTR            S4, [SP,#0x348+var_B4]
    v24 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v16 + 648))(v16);
    BlockSource::clip((BlockSource *)&v207, v22, (const Vec3 *)&v121, (int)&v206, v18, 0, 200, v24);
    v25 = Level::getHitResult(v5);
    v26 = v207;
    v25[4] = LOBYTE(v208);
    *(_DWORD *)v25 = v26;
    *((_DWORD *)v25 + 2) = v209;
    *((_DWORD *)v25 + 3) = v210;
    *((_DWORD *)v25 + 4) = v211;
    *((_DWORD *)v25 + 5) = v212;
    *((_DWORD *)v25 + 6) = v213;
    *((_DWORD *)v25 + 7) = v214;
    v27 = v215;
    *((_WORD *)v25 + 18) = v216;
    *((_DWORD *)v25 + 8) = v27;
    *((_DWORD *)v25 + 10) = v217;
    *((_DWORD *)v25 + 11) = v218;
    *((_DWORD *)v25 + 12) = v219;
    *((_DWORD *)v25 + 13) = v220;
    *((_DWORD *)v25 + 14) = v221;
    *((_DWORD *)v25 + 15) = v222;
    v25[64] = v223;
    Entity::getViewVector((Entity *)&v200, *(float *)&_R11, *(float *)&v3, v28);
    v19 = 1;
    *((_DWORD *)_R10 + 42) = v200;
    *((_DWORD *)_R10 + 43) = v201;
    *((_DWORD *)_R10 + 44) = v202;
  v29 = *(_DWORD *)(_R11 + 268);
  v30 = *(_DWORD *)(_R11 + 272);
  v193 = *(_DWORD *)(_R11 + 264);
  v194 = v29;
  v195 = v30;
  v31 = *(_DWORD *)(_R11 + 280);
  v32 = *(_DWORD *)(_R11 + 284);
  v33 = *(_DWORD *)(_R11 + 288);
  v196 = *(_DWORD *)(_R11 + 276);
  v197 = v31;
  v198 = v32;
  v199 = v33;
  Entity::getInterpolatedPosition((Entity *)&v190, *(float *)&_R11, v3);
  v34 = ClientInstance::isARVRClient(*((ClientInstance **)_R10 + 82));
  _ZF = v19 == 1;
  if ( v19 == 1 )
    _ZF = v34 == 1;
  if ( _ZF )
    v190 = v224;
    v191 = v225;
    v192 = v226;
    AABB::expand((AABB *)&v193, (const Vec3 *)&v190);
  __asm { VSTR            S16, [SP,#0x348+var_100] }
  v36 = Level::getHitResult(v5);
  __asm { VMOV.F32        S18, S16 }
  if ( (*(_DWORD *)v36 & 0xFFFFFFFE) != 2 )
    _R0 = Level::getHitResult(v5);
      VLDR            S0, [R0,#0x14]
      VLDR            S6, [SP,#0x348+var_FC]
      VLDR            S2, [R0,#0x18]
      VLDR            S8, [SP,#0x348+var_F8]
      VSUB.F32        S0, S6, S0
      VLDR            S4, [R0,#0x1C]
      VSUB.F32        S2, S8, S2
      VLDR            S10, [SP,#0x348+var_F4]
      VSUB.F32        S4, S10, S4
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VSQRT.F32       S18, S0
      VSTR            S18, [SP,#0x348+var_100]
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v16 + 652))(v16) == 1 )
    __asm { VMOV.F32        S0, #7.0 }
    v38 = &v189;
    v188 = 1088421888;
    v80 = v19;
    v39 = 0;
    v82 = v16;
      VCMPE.F32       S18, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      v38 = (float *)&v188;
    v189 = *v38;
      VMOV.F32        S0, #3.0
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v82 = v16;
      v39 = 0;
    else
      __asm { VMOV.F32        S18, S0 }
      v39 = 1;
      v189 = 3.0;
    v40 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R10 + 82));
    if ( Options::getPlayerViewPerspective(v40) )
      v80 = v19;
      v41 = (LevelRenderer *)ClientInstance::getLevelRenderer(*((ClientInstance **)_R10 + 82));
      v42 = LevelRenderer::getLevelRendererPlayer(v41);
      _R0 = LevelRendererPlayer::getCurrentCameraDist((LevelRendererPlayer *)v42);
      __asm
        VMOV            S0, R0
        VADD.F32        S0, S18, S0
        VSTR            S0, [SP,#0x348+var_100]
  __asm
    VLDR            S0, [R10,#0xA8]
    VLDR            S2, [R10,#0xAC]
    VLDR            S4, [R10,#0xB0]
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S16
    VLDR            S6, [SP,#0x348+var_FC]
    VMUL.F32        S4, S4, S16
    VLDR            S8, [SP,#0x348+var_F8]
    VLDR            S10, [SP,#0x348+var_F4]
    VSTR            S0, [SP,#0x348+var_110]
    VADD.F32        S0, S0, S6
    VSTR            S2, [SP,#0x348+var_10C]
    VADD.F32        S2, S2, S8
    VSTR            S4, [SP,#0x348+var_108]
    VADD.F32        S4, S4, S10
    VSTR            S0, [SP,#0x348+var_11C]
    VSTR            S2, [SP,#0x348+var_118]
    VSTR            S4, [SP,#0x348+var_114]
  AABB::expanded((AABB *)&v184, (const Vec3 *)&v193, (int)&v187);
  v181 = 1065353216;
  v182 = 1065353216;
  v183 = 1065353216;
  AABB::grow((AABB *)&v185, (const Vec3 *)&v184, (int)&v181);
  v44 = (BlockSource *)Entity::getRegion((Entity *)_R11);
  v45 = BlockSource::fetchEntities(v44, (Entity *)_R11, (const AABB *)&v185);
  v178 = 0;
  v179 = 0;
  v180 = 0;
  if ( *(_QWORD *)v45 >> 32 == (unsigned int)*(_QWORD *)v45 )
LABEL_79:
    if ( v80 != 1 || (*(_DWORD *)Level::getHitResult(v5) & 0xFFFFFFFE) != 2 )
      if ( *(_DWORD *)Level::getHitResult(v5) == 1 )
        *(_DWORD *)Level::getHitResult(v5) = 3;
        *((_DWORD *)Level::getHitResult(v5) + 8) = 0;
        VLDR            S0, =-0.7
        VLDR            S2, [R10,#0xAC]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm
          VMOV.F32        S0, #-2.0
          VLDR            S2, [SP,#0x348+var_F8]
        v121 = v190;
          VADD.F32        S0, S2, S0
          VSTR            S0, [SP,#0x348+var_264]
        v123 = v192;
        v60 = (const Vec3 *)Entity::getRegion((Entity *)_R11);
        BlockSource::clip((BlockSource *)&v207, v60, (const Vec3 *)&v190, (int)&v121, 0, 0, 200, 0);
        if ( (v207 & 0xFFFFFFFE) != 2 )
          v61 = 3;
          v223 = 1;
          v62 = 5;
          __asm
          {
            VLDR            S0, [R10,#0xA8]
            VLDR            S2, [R10,#0xB0]
            VCMPE.F32       S0, #0.0
            VMRS            APSR_nzcv, FPSCR
            VCMPE.F32       S2, #0.0
            VABS.F32        S4, S2
            VABS.F32        S6, S0
          }
          if ( _NF ^ _VF )
            v62 = 4;
            VCMPE.F32       S6, S4
            v61 = 2;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            v61 = v62;
          LOBYTE(v208) = v61;
          v63 = Level::getHitResult(v5);
          v64 = v207;
          v63[4] = LOBYTE(v208);
          *(_DWORD *)v63 = v64;
          *((_DWORD *)v63 + 2) = v209;
          *((_DWORD *)v63 + 3) = v210;
          *((_DWORD *)v63 + 4) = v211;
          *((_DWORD *)v63 + 5) = v212;
          *((_DWORD *)v63 + 6) = v213;
          *((_DWORD *)v63 + 7) = v214;
          v65 = v215;
          *((_WORD *)v63 + 18) = v216;
          *((_DWORD *)v63 + 8) = v65;
          *((_DWORD *)v63 + 10) = v217;
          *((_DWORD *)v63 + 11) = v218;
          *((_DWORD *)v63 + 12) = v219;
          *((_DWORD *)v63 + 13) = v220;
          *((_DWORD *)v63 + 14) = v221;
          *((_DWORD *)v63 + 15) = v222;
          v63[64] = v223;
    goto LABEL_93;
  __asm { VLDR            S20, =0.0 }
  v78 = v39;
  __asm { VMOV.F32        S18, S20 }
  v79 = *(_QWORD *)&v5;
  LODWORD(v46) = *(_DWORD *)v45;
  v47 = v82;
    VLDR            S22, =0.01
    VLDR            S24, =3.4028e38
  v48 = 0;
  v81 = 0;
  do
    v49 = *(Entity **)(v46 + 4 * v48);
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v49 + 292))(*(_DWORD *)(v46 + 4 * v48)) == 1
      && (Entity *)Entity::getRide(v47) != v49
      && (Entity *)Entity::getRide(v49) != v47 )
      _R4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v49 + 432))(v49);
      HitResult::HitResult((HitResult *)&v207);
      AABB::AABB((AABB *)&v171);
      __asm { VMOV            S26, R4 }
      v52 = (const Vec3 *)(*(_QWORD *)((char *)v49 + 292) >> 32);
      v51 = (const Vec3 *)*(_QWORD *)((char *)v49 + 292);
      if ( v52 == v51 )
          VSTR            S26, [SP,#0x348+var_1B0]
          VSTR            S26, [SP,#0x348+var_1AC]
          VSTR            S26, [SP,#0x348+var_1A8]
        AABB::grow((AABB *)&v164, (Entity *)((char *)v49 + 264), (int)&v163);
        v171 = v164;
        v172 = v165;
        v173 = v166;
        v174 = v167;
        v175 = v168;
        v176 = v169;
        v177 = v170;
        AABB::clip((AABB *)&v146, (const Vec3 *)&v171, (const Vec3 *)&v190, (int)&v186);
        LOBYTE(v208) = v147;
        v207 = v146;
        v209 = v148;
        v210 = v149;
        v211 = v150;
        v212 = v151;
        v213 = v152;
        v214 = v153;
        v216 = v155;
        v215 = v154;
        v217 = v156;
        v218 = v157;
        v219 = v158;
        v220 = v159;
        v221 = v160;
        v222 = v161;
        v223 = v162;
        __asm { VMOV.F32        S28, S24 }
        for ( ; v52 != v51; v51 = (const Vec3 *)((char *)v51 + 28) )
            VSTR            S26, [SP,#0x348+var_220]
            VSTR            S26, [SP,#0x348+var_21C]
            VSTR            S26, [SP,#0x348+var_218]
          AABB::grow((AABB *)&v139, v51, (int)&v138);
          v171 = v139;
          v172 = v140;
          v173 = v141;
          v174 = v142;
          v175 = v143;
          v176 = v144;
          v177 = v145;
          AABB::clip((AABB *)&v121, (const Vec3 *)&v171, (const Vec3 *)&v190, (int)&v186);
          if ( (v121 & 0xFFFFFFFE) != 2 )
            __asm
            {
              VLDR            S0, [SP,#0x348+var_FC]
              VLDR            S2, [SP,#0x348+var_254]
              VLDR            S8, [SP,#0x348+var_F8]
              VLDR            S4, [SP,#0x348+var_250]
              VSUB.F32        S0, S2, S0
              VLDR            S10, [SP,#0x348+var_F4]
              VSUB.F32        S8, S4, S8
              VLDR            S6, [SP,#0x348+var_24C]
              VSUB.F32        S10, S6, S10
              VMUL.F32        S0, S0, S0
              VMUL.F32        S8, S8, S8
              VMUL.F32        S10, S10, S10
              VADD.F32        S0, S8, S0
              VADD.F32        S0, S0, S10
              VSQRT.F32       S0, S0
              VCMPE.F32       S0, S28
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _NF ^ _VF )
              __asm { VMOV.F32        S28, S0 }
              LOBYTE(v208) = LOBYTE(v122);
              v207 = v121;
              v209 = v123;
              v210 = v124;
              v211 = v125;
              __asm
              {
                VSTR            S2, [SP,#0x348+var_9C]
                VSTR            S4, [SP,#0x348+var_98]
                VSTR            S6, [SP,#0x348+var_94]
              }
              v216 = v130;
              v215 = v129;
              v217 = v131;
              v218 = v132;
              v219 = v133;
              v220 = v134;
              v221 = v135;
              v222 = v136;
              v223 = v137;
      if ( AABB::contains((AABB *)&v171, (const Vec3 *)&v190) == 1 )
        v47 = v82;
          VCMPE.F32       S18, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          goto LABEL_66;
        __asm { VMOV.F32        S18, S20 }
        v178 = v190;
        v179 = v191;
        v180 = v192;
        goto LABEL_65;
      v47 = v82;
      if ( (v207 & 0xFFFFFFFE) != 2 )
          VADD.F32        S0, S26, S22
          VSTR            S0, [SP,#0x348+var_274]
          VSTR            S0, [SP,#0x348+var_270]
          VSTR            S0, [SP,#0x348+var_26C]
        Entity::setLastHitBB(v49, (const Vec3 *)&v212, (const Vec3 *)&v120);
          VLDR            S6, [SP,#0x348+var_FC]
          VLDR            S0, [SP,#0x348+var_9C]
          VLDR            S8, [SP,#0x348+var_F8]
          VLDR            S2, [SP,#0x348+var_98]
          VSUB.F32        S6, S0, S6
          VLDR            S10, [SP,#0x348+var_F4]
          VSUB.F32        S8, S2, S8
          VLDR            S4, [SP,#0x348+var_94]
          VSUB.F32        S10, S4, S10
          VMUL.F32        S6, S6, S6
          VMUL.F32        S8, S8, S8
          VMUL.F32        S10, S10, S10
          VADD.F32        S6, S8, S6
          VADD.F32        S6, S6, S10
          VSQRT.F32       S26, S6
        if ( _ZF )
          goto LABEL_110;
          VCMPE.F32       S26, S18
LABEL_110:
          if ( v49 == *((Entity **)v82 + 128) )
            if ( ClientInstance::isARVRClient(*(ClientInstance **)(HIDWORD(v79) + 328)) )
                VCMPE.F32       S18, #0.0
                VMRS            APSR_nzcv, FPSCR
              if ( !_ZF )
                goto LABEL_66;
              v178 = v190;
              v179 = v191;
              v180 = v192;
LABEL_65:
              v81 = (int)v49;
              goto LABEL_66;
            _R0 = v212;
            _R1 = v213;
            _R2 = v214;
          else
              VMOV            R0, S0
              VMOV            R1, S2
              VMOV            R2, S4
          __asm { VMOV.F32        S18, S26 }
          v178 = _R0;
          v179 = _R1;
          v180 = _R2;
          goto LABEL_65;
LABEL_66:
    v46 = *(_QWORD *)v45;
    ++v48;
  while ( v48 < (HIDWORD(v46) - (signed int)v46) >> 2 );
  _R10 = (InGamePlayScreen *)HIDWORD(v79);
  if ( v81 )
    if ( v78 == 1 )
        VLDR            S0, [SP,#0x348+var_FC]
        VLDR            S6, [SP,#0x348+var_16C]
        VLDR            S2, [SP,#0x348+var_F8]
        VLDR            S8, [SP,#0x348+var_168]
        VSUB.F32        S0, S6, S0
        VLDR            S4, [SP,#0x348+var_F4]
        VSUB.F32        S2, S8, S2
        VLDR            S10, [SP,#0x348+var_164]
        VSUB.F32        S4, S10, S4
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VMOV.F32        S2, #3.0
        VADD.F32        S0, S0, S4
        VSQRT.F32       S0, S0
        VCMPE.F32       S0, S2
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v5 = (Level *)v79;
        *(_DWORD *)Level::getHitResult((Level *)v79) = 3;
        *((_DWORD *)Level::getHitResult((Level *)v79) + 8) = 0;
        goto LABEL_79;
  v5 = (Level *)v79;
  v56 = v47;
  if ( !v81 )
    goto LABEL_79;
    VLDR            S0, =0.1
    VLDR            S2, [SP,#0x348+var_100]
    VADD.F32        S0, S18, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    v57 = Level::getHitResult((Level *)v79);
    HitResult::HitResult((int)&v103, v81, (int)&v178);
    v58 = v103;
    v57[4] = v104;
    *(_DWORD *)v57 = v58;
    *((_DWORD *)v57 + 2) = v105;
    *((_DWORD *)v57 + 3) = v106;
    *((_DWORD *)v57 + 4) = v107;
    *((_DWORD *)v57 + 5) = v108;
    *((_DWORD *)v57 + 6) = v109;
    *((_DWORD *)v57 + 7) = v110;
    v59 = v111;
    *((_WORD *)v57 + 18) = v112;
    *((_DWORD *)v57 + 8) = v59;
    *((_DWORD *)v57 + 10) = v113;
    *((_DWORD *)v57 + 11) = v114;
    *((_DWORD *)v57 + 12) = v115;
    *((_DWORD *)v57 + 13) = v116;
    *((_DWORD *)v57 + 14) = v117;
    *((_DWORD *)v57 + 15) = v118;
    v57[64] = v119;
    if ( (ClientInstance::isHoloRealityMode(*(ClientInstance **)(HIDWORD(v79) + 328))
       || ClientInstance::isLivingroomMode(*(ClientInstance **)(HIDWORD(v79) + 328)) == 1)
      && !Entity::isRider((Entity *)v81, v56) )
      *(_BYTE *)(v81 + 3080) = 1;
  else if ( ClientInstance::isHoloRealityMode(*(ClientInstance **)(HIDWORD(v79) + 328))
         || ClientInstance::isLivingroomMode(*(ClientInstance **)(HIDWORD(v79) + 328)) == 1 )
    _R0 = Level::getHitResult((Level *)v79);
      VSQRT.F32       S0, S0
      VCMPE.F32       S0, S18
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v74 = Level::getHitResult((Level *)v79);
      HitResult::HitResult((int)&v86, v81, (int)&v178);
      v75 = v86;
      v74[4] = v87;
      *(_DWORD *)v74 = v75;
      *((_DWORD *)v74 + 2) = v88;
      *((_DWORD *)v74 + 3) = v89;
      *((_DWORD *)v74 + 4) = v90;
      *((_DWORD *)v74 + 5) = v91;
      *((_DWORD *)v74 + 6) = v92;
      *((_DWORD *)v74 + 7) = v93;
      v76 = v94;
      *((_WORD *)v74 + 18) = v95;
      *((_DWORD *)v74 + 8) = v76;
      *((_DWORD *)v74 + 10) = v96;
      *((_DWORD *)v74 + 11) = v97;
      *((_DWORD *)v74 + 12) = v98;
      *((_DWORD *)v74 + 13) = v99;
      *((_DWORD *)v74 + 14) = v100;
      *((_DWORD *)v74 + 15) = v101;
      v74[64] = v102;
      v77 = Level::getHitResult((Level *)v79);
      HitResult::setOutOfRange((HitResult *)v77);
LABEL_93:
  result = (Level *)(*(_DWORD *)Level::getHitResult(v5) & 0xFFFFFFFE);
  if ( result != (Level *)2 )
    v66 = *(_DWORD *)Level::getHitResult(v5);
    v67 = Level::getHitResult(v5);
    if ( v66 )
      v68 = *(_QWORD *)(v67 + 20);
      v209 = *((_DWORD *)v67 + 7);
      *(_QWORD *)&v207 = v68;
      Vec3::Vec3((int)&v83, (int)(v67 + 8));
        VMOV.F32        S0, #0.5
        VLDR            S2, [SP,#0x348+var_30C]
        VLDR            S4, [SP,#0x348+var_308]
        VLDR            S6, [SP,#0x348+var_304]
        VADD.F32        S2, S2, S0
        VADD.F32        S4, S4, S0
        VADD.F32        S0, S6, S0
        VSTR            S2, [SP,#0x348+var_B0]
        VSTR            S4, [SP,#0x348+var_AC]
        VSTR            S0, [SP,#0x348+var_A8]
    _R0 = Entity::distanceToSqr((Entity *)_R11, (const Vec3 *)&v207);
      VMUL.F32        S0, S16, S16
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      goto LABEL_111;
    v70 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R10 + 82));
    result = (Level *)Options::getPlayerViewPerspective(v70);
    if ( result )
      Entity::getViewVector2((Entity *)&v121, *(float *)&_R11, 1.0, v71);
        VLDR            S16, [SP,#0x348+var_268]
        VLDR            S18, [SP,#0x348+var_264]
        VLDR            S20, [SP,#0x348+var_B0]
        VLDR            S22, [SP,#0x348+var_A8]
      _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)_R11 + 52))(_R11);
        VMUL.F32        S16, S16, S20
        VLDR            S24, [R0]
      result = (Level *)(*(int (__fastcall **)(int))(*(_DWORD *)_R11 + 52))(_R11);
        VLDR            S0, [SP,#0x348+var_268]
        VMUL.F32        S6, S18, S22
        VLDR            S2, [SP,#0x348+var_264]
        VLDR            S4, [R0,#8]
        VMUL.F32        S0, S0, S24
        VMUL.F32        S2, S2, S4
        VADD.F32        S4, S6, S16
        VLDR            D1, =-0.1
        VSUB.F32        S0, S4, S0
        VCVT.F64.F32    D0, S0
        VCMPE.F64       D0, D1
LABEL_111:
        result = (Level *)Level::getHitResult(v5);
        *(_DWORD *)result = 3;
  return result;
}


void __fastcall InGamePlayScreen::_applyInput_Stutter(int a1, int a2, int a3, int a4)
{
  int v6; // r6@1
  int v7; // r3@1
  int v8; // r5@1
  int v17; // r0@5
  int v19; // [sp+8h] [bp-30h]@3
  int v20; // [sp+Ch] [bp-2Ch]@3
  int v21; // [sp+10h] [bp-28h]@2

  _R4 = (InGamePlayScreen *)a1;
  _R7 = a4;
  v6 = a2;
  v8 = ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 328));
  if ( *((_BYTE *)_R4 + 284) )
  {
    __asm { VLDR            S0, [R4,#0xFC] }
    _R0 = &mce::Math::RADDEG;
    __asm { VLDR            S2, [R0] }
    v21 = 0;
    __asm
    {
      VMUL.F32        S16, S2, S0
      VSTR            S16, [SP,#0x38+var_24]
    }
    LocalPlayer::localPlayerTurn(v8, &v21);
    __asm { VMOV            R1, S16 }
    (*(void (__fastcall **)(InGamePlayScreen *, int))(*(_DWORD *)_R4 + 336))(_R4, _R1);
  }
  else
      VMOV            S0, R7
      VLDR            S2, =0.15
      VMUL.F32        S0, S0, S2
      VMOV            R2, S0
    _R6 = StutterTurn(v6, *((ClientInstance **)_R4 + 82), _R2, v7, 0);
    v19 = 0;
    v20 = _R6;
    LocalPlayer::localPlayerTurn(v8, &v19);
    (*(void (__fastcall **)(InGamePlayScreen *, int))(*(_DWORD *)_R4 + 336))(_R4, _R6);
    __asm { VMOV            S16, R6 }
  __asm
    VABS.F32        S0, S16
    VLDR            S2, =1.1921e-7
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v17 = ClientInstance::getGameRenderer(*((ClientInstance **)_R4 + 82));
    *(_BYTE *)(v17 + 814) = 1;
    InGamePlayScreen::_applyInput_StepSound(_R4, _R1);
}


int __fastcall InGamePlayScreen::_saveMatrices(InGamePlayScreen *this, mce::Camera *a2)
{
  InGamePlayScreen *v2; // r4@1
  mce::Camera *v3; // ST24_4@1
  mce::Camera *v4; // r5@1
  int v5; // r0@1
  int v6; // r7@1
  MatrixStack *v7; // ST28_4@1
  int v8; // r0@1
  __int64 v9; // r5@1
  int v10; // ST20_4@1
  int v11; // ST1C_4@1
  int v12; // ST18_4@1
  int v13; // r7@1
  int v14; // r9@1
  int v15; // r10@1
  int v16; // r11@1
  int v17; // r0@1
  int v18; // r1@1
  int v19; // r2@1
  int v20; // r3@1
  int v21; // r12@1
  int v22; // lr@1
  int v23; // r0@1
  int v24; // r7@1
  int v25; // r0@1
  int v26; // r0@1
  int v27; // r7@1
  int v28; // r0@1
  int v29; // r0@1
  int v30; // r0@1
  __int64 v31; // kr00_8@1
  int v32; // ST08_4@1
  MatrixStack *v33; // ST28_4@1
  MatrixStack *v34; // ST24_4@1
  int v35; // ST20_4@1
  int v36; // ST1C_4@1
  int v37; // ST18_4@1
  int v38; // r9@1
  int v39; // ST14_4@1
  __int64 v40; // kr08_8@1
  __int64 v41; // kr10_8@1
  __int64 v42; // kr18_8@1
  int result; // r0@1
  char v44; // [sp+2Ch] [bp-A4h]@1
  __int64 v45; // [sp+6Ch] [bp-64h]@1
  __int64 v46; // [sp+74h] [bp-5Ch]@1
  int v47; // [sp+7Ch] [bp-54h]@1
  int v48; // [sp+80h] [bp-50h]@1
  int v49; // [sp+84h] [bp-4Ch]@1
  int v50; // [sp+88h] [bp-48h]@1
  int v51; // [sp+8Ch] [bp-44h]@1
  int v52; // [sp+90h] [bp-40h]@1
  int v53; // [sp+94h] [bp-3Ch]@1
  int v54; // [sp+98h] [bp-38h]@1
  int v55; // [sp+9Ch] [bp-34h]@1
  int v56; // [sp+A0h] [bp-30h]@1
  MatrixStack *v57; // [sp+A4h] [bp-2Ch]@1
  MatrixStack *v58; // [sp+A8h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = a2;
  v5 = MatrixStack::top((mce::Camera *)((char *)a2 + 32));
  *((_DWORD *)v2 + 5) = *(_DWORD *)v5;
  *((_DWORD *)v2 + 6) = *(_DWORD *)(v5 + 4);
  *((_DWORD *)v2 + 7) = *(_DWORD *)(v5 + 8);
  *((_DWORD *)v2 + 8) = *(_DWORD *)(v5 + 12);
  *((_DWORD *)v2 + 9) = *(_DWORD *)(v5 + 16);
  *((_DWORD *)v2 + 10) = *(_DWORD *)(v5 + 20);
  *((_DWORD *)v2 + 11) = *(_DWORD *)(v5 + 24);
  *((_DWORD *)v2 + 12) = *(_DWORD *)(v5 + 28);
  *((_DWORD *)v2 + 13) = *(_DWORD *)(v5 + 32);
  *((_DWORD *)v2 + 14) = *(_DWORD *)(v5 + 36);
  *((_DWORD *)v2 + 15) = *(_DWORD *)(v5 + 40);
  *((_DWORD *)v2 + 16) = *(_DWORD *)(v5 + 44);
  *((_DWORD *)v2 + 17) = *(_DWORD *)(v5 + 48);
  *((_DWORD *)v2 + 18) = *(_DWORD *)(v5 + 52);
  *((_DWORD *)v2 + 19) = *(_DWORD *)(v5 + 56);
  *((_DWORD *)v2 + 20) = *(_DWORD *)(v5 + 60);
  v6 = MatrixStack::top(v4);
  v7 = (mce::Camera *)((char *)v4 + 16);
  v8 = MatrixStack::top((mce::Camera *)((char *)v4 + 16));
  glm::detail::operator*<float>((int)&v45, v6, v8);
  v9 = v46;
  v10 = (int)v58;
  v11 = (int)v57;
  v12 = v56;
  v13 = v52;
  v14 = v53;
  v15 = v54;
  v16 = v55;
  v17 = v47;
  v18 = v48;
  v19 = v49;
  v20 = v50;
  v21 = v51;
  *(_QWORD *)((char *)v2 + 84) = v45;
  v22 = (int)v2 + 100;
  *(_QWORD *)((char *)v2 + 92) = v9;
  *(_DWORD *)v22 = v17;
  *(_DWORD *)(v22 + 4) = v18;
  *(_DWORD *)(v22 + 8) = v19;
  *(_DWORD *)(v22 + 12) = v20;
  *(_DWORD *)(v22 + 16) = v21;
  v23 = (int)v2 + 120;
  *(_DWORD *)v23 = v13;
  *(_DWORD *)(v23 + 4) = v14;
  *(_DWORD *)(v23 + 8) = v15;
  *(_DWORD *)(v23 + 12) = v16;
  *((_DWORD *)v2 + 34) = v12;
  *((_DWORD *)v2 + 35) = v11;
  *((_DWORD *)v2 + 36) = v10;
  v24 = ClientInstance::getGameRenderer(*((ClientInstance **)v2 + 82));
  v25 = MatrixStack::top(v3);
  *(_DWORD *)(v24 + 392) = *(_DWORD *)v25;
  *(_DWORD *)(v24 + 396) = *(_DWORD *)(v25 + 4);
  *(_DWORD *)(v24 + 400) = *(_DWORD *)(v25 + 8);
  *(_DWORD *)(v24 + 404) = *(_DWORD *)(v25 + 12);
  *(_DWORD *)(v24 + 408) = *(_DWORD *)(v25 + 16);
  *(_DWORD *)(v24 + 412) = *(_DWORD *)(v25 + 20);
  *(_DWORD *)(v24 + 416) = *(_DWORD *)(v25 + 24);
  *(_DWORD *)(v24 + 420) = *(_DWORD *)(v25 + 28);
  *(_DWORD *)(v24 + 424) = *(_DWORD *)(v25 + 32);
  *(_DWORD *)(v24 + 428) = *(_DWORD *)(v25 + 36);
  *(_DWORD *)(v24 + 432) = *(_DWORD *)(v25 + 40);
  *(_DWORD *)(v24 + 436) = *(_DWORD *)(v25 + 44);
  *(_DWORD *)(v24 + 440) = *(_DWORD *)(v25 + 48);
  *(_DWORD *)(v24 + 444) = *(_DWORD *)(v25 + 52);
  *(_DWORD *)(v24 + 448) = *(_DWORD *)(v25 + 56);
  *(_DWORD *)(v24 + 452) = *(_DWORD *)(v25 + 60);
  v26 = ClientInstance::getGameRenderer(*((ClientInstance **)v2 + 82));
  *(_DWORD *)(v26 + 520) = *((_DWORD *)v2 + 5);
  *(_DWORD *)(v26 + 524) = *((_DWORD *)v2 + 6);
  *(_DWORD *)(v26 + 528) = *((_DWORD *)v2 + 7);
  *(_DWORD *)(v26 + 532) = *((_DWORD *)v2 + 8);
  *(_DWORD *)(v26 + 536) = *((_DWORD *)v2 + 9);
  *(_DWORD *)(v26 + 540) = *((_DWORD *)v2 + 10);
  *(_DWORD *)(v26 + 544) = *((_DWORD *)v2 + 11);
  *(_DWORD *)(v26 + 548) = *((_DWORD *)v2 + 12);
  *(_DWORD *)(v26 + 552) = *((_DWORD *)v2 + 13);
  *(_DWORD *)(v26 + 556) = *((_DWORD *)v2 + 14);
  *(_DWORD *)(v26 + 560) = *((_DWORD *)v2 + 15);
  *(_DWORD *)(v26 + 564) = *((_DWORD *)v2 + 16);
  *(_DWORD *)(v26 + 568) = *((_DWORD *)v2 + 17);
  *(_DWORD *)(v26 + 572) = *((_DWORD *)v2 + 18);
  *(_DWORD *)(v26 + 576) = *((_DWORD *)v2 + 19);
  *(_DWORD *)(v26 + 580) = *((_DWORD *)v2 + 20);
  v27 = ClientInstance::getGameRenderer(*((ClientInstance **)v2 + 82));
  v28 = MatrixStack::top(v7);
  *(_DWORD *)(v27 + 584) = *(_DWORD *)v28;
  *(_DWORD *)(v27 + 588) = *(_DWORD *)(v28 + 4);
  *(_DWORD *)(v27 + 592) = *(_DWORD *)(v28 + 8);
  *(_DWORD *)(v27 + 596) = *(_DWORD *)(v28 + 12);
  *(_DWORD *)(v27 + 600) = *(_DWORD *)(v28 + 16);
  *(_DWORD *)(v27 + 604) = *(_DWORD *)(v28 + 20);
  *(_DWORD *)(v27 + 608) = *(_DWORD *)(v28 + 24);
  *(_DWORD *)(v27 + 612) = *(_DWORD *)(v28 + 28);
  *(_DWORD *)(v27 + 616) = *(_DWORD *)(v28 + 32);
  *(_DWORD *)(v27 + 620) = *(_DWORD *)(v28 + 36);
  *(_DWORD *)(v27 + 624) = *(_DWORD *)(v28 + 40);
  *(_DWORD *)(v27 + 628) = *(_DWORD *)(v28 + 44);
  *(_DWORD *)(v27 + 632) = *(_DWORD *)(v28 + 48);
  *(_DWORD *)(v27 + 636) = *(_DWORD *)(v28 + 52);
  *(_DWORD *)(v27 + 640) = *(_DWORD *)(v28 + 56);
  *(_DWORD *)(v27 + 644) = *(_DWORD *)(v28 + 60);
  v29 = ClientInstance::getHoloInput(*((ClientInstance **)v2 + 82));
  HolographicPlatform::getTransform((int)&v44, v29, 1, 2, 0);
  v30 = MatrixStack::top(v3);
  glm::detail::operator*<float>((int)&v45, v30, (int)&v44);
  v31 = v45;
  v32 = v46;
  v33 = v58;
  v34 = v57;
  v35 = v56;
  v36 = v55;
  v37 = v54;
  v38 = HIDWORD(v46);
  v39 = v53;
  v40 = *(_QWORD *)&v51;
  v41 = *(_QWORD *)&v49;
  v42 = *(_QWORD *)&v47;
  result = ClientInstance::getGameRenderer(*((ClientInstance **)v2 + 82));
  *(_QWORD *)(result + 456) = v31;
  *(_DWORD *)(result + 464) = v32;
  *(_DWORD *)(result + 468) = v38;
  *(_QWORD *)(result + 472) = v42;
  *(_QWORD *)(result + 480) = v41;
  *(_QWORD *)(result + 488) = v40;
  *(_DWORD *)(result + 496) = v39;
  *(_DWORD *)(result + 500) = v37;
  *(_DWORD *)(result + 504) = v36;
  *(_DWORD *)(result + 508) = v35;
  *(_DWORD *)(result + 512) = v34;
  *(_DWORD *)(result + 516) = v33;
  return result;
}


void __fastcall InGamePlayScreen::_applyInput_Stutter(int a1, int a2, int a3, int a4)
{
  InGamePlayScreen::_applyInput_Stutter(a1, a2, a3, a4);
}


void __fastcall InGamePlayScreen::_applyInput_StepSoundTimeLimited(InGamePlayScreen *this, float a2)
{
  float v2; // r5@1

  v2 = a2;
  _R4 = this;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D8, R0, R1
    VLDR            D0, [R4,#0xE8]
    VLDR            D1, =0.2
    VSUB.F64        D0, D8, D0
    VCMPE.F64       D0, D1
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    InGamePlayScreen::_applyInput_StepSound(_R4, v2);
    __asm { VSTR            D8, [R4,#0xE8] }
}


_BOOL4 __fastcall InGamePlayScreen::_getThirdPersonSetting(InGamePlayScreen *this)
{
  Options *v1; // r0@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 82));
  return Options::getPlayerViewPerspective(v1) != 0;
}


int __fastcall InGamePlayScreen::_applyInput_Standard(float a1, _DWORD *a2, int _R2, int _R3, int a5)
{
  int v11; // r0@9
  ClientInstance **v12; // r5@4
  int v14; // r0@14
  int result; // r0@15
  float v17; // [sp+0h] [bp-30h]@9
  float v18; // [sp+4h] [bp-2Ch]@9
  float v19; // [sp+8h] [bp-28h]@14

  _R4 = a1;
  __asm
  {
    VMOV            S0, R2
    VLDR            S2, [R4,#0x104]
    VMOV            S4, R3
    VLDR            S8, =0.3
    VMOV.F32        S6, #1.0
    VADD.F32        S2, S2, S0
    VMUL.F32        S0, S0, S8
    VMUL.F32        S18, S4, S8
    VSTR            S2, [R4,#0x104]
    VLDR            S2, [R4,#0x108]
    VADD.F32        S2, S2, S4
    VSTR            S2, [R4,#0x108]
    VLDR            S2, =0.8
  }
  if ( *a2 == 3 )
    __asm { VMOVEQ.F32      S6, S2 }
  __asm { VMUL.F32        S0, S0, S6 }
  _R1 = &Vec2::ZERO;
    VLDR            S16, [R1,#4]
    VSTR            S0, [SP,#0x30+var_28]
    VSTR            S18, [SP,#0x30+var_24]
  if ( _ZF )
    __asm { VLDR            S4, [R4,#0x118] }
    v12 = (ClientInstance **)(LODWORD(a1) + 328);
    __asm
    {
      VLDR            S2, [R4,#0x114]
      VCVT.F32.S32    S4, S4
      VLDR            S0, [SP,#0x30+arg_0]
      VLDR            S6, =0.15
      VADD.F32        S0, S4, S0
      VMOV.F32        S4, #3.0
      VSUB.F32        S2, S0, S2
      VSTR            S0, [R4,#0x114]
      VLDR            S0, [R4,#0x10C]
      VLDR            S8, [R4,#0x110]
      VMUL.F32        S0, S0, S6
      VCMPE.F32       S2, S4
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S4 }
      VMUL.F32        S4, S8, S6
      VMUL.F32        S0, S0, S2
      VMUL.F32        S2, S4, S2
      VMUL.F32        S4, S0, S0
      VSTR            S0, [SP,#0x30+var_30]
      VMUL.F32        S6, S2, S2
      VSTR            S2, [SP,#0x30+var_2C]
      VADD.F32        S4, S6, S4
      VLDR            S6, =900.0
      VCMPE.F32       S4, S6
    if ( _NF ^ _VF )
      v11 = ClientInstance::getLocalPlayer(*(ClientInstance **)(LODWORD(a1) + 328));
      LocalPlayer::localPlayerTurn(v11, &v17);
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(_R4) + 336))(LODWORD(_R4), LODWORD(v18));
  else
    if ( ClientInstance::isRealityFullVRMode(*(ClientInstance **)(LODWORD(a1) + 328)) == 1
      && *(_BYTE *)(LODWORD(_R4) + 284) )
      __asm { VLDR            S0, [R4,#0xFC] }
      _R0 = &mce::Math::RADDEG;
      __asm
      {
        VLDR            S2, [R0]
        VMUL.F32        S16, S2, S0
        VSTR            S16, [R4,#0x108]
      }
    else
        VLDR            S18, =0.0
        VLDR            S16, [R4,#0x108]
    v14 = ClientInstance::getLocalPlayer(*(ClientInstance **)(LODWORD(_R4) + 328));
    LocalPlayer::localPlayerTurn(v14, &v19);
    __asm { VMOV            R1, S18 }
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)LODWORD(_R4) + 336))(LODWORD(_R4), _R1);
      VLDR            S0, =0.15
      VMUL.F32        S16, S16, S0
    VLDR            S0, [R4,#0x128]
    VADD.F32        S0, S0, S16
    VSTR            S0, [R4,#0x128]
    VLDR            S0, [R4,#0x12C]
    VLDR            S2, [SP,#0x30+var_24]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x12C]
  result = ClientInstance::isRealityFullVRMode(*(ClientInstance **)(LODWORD(_R4) + 328));
  if ( result == 1 )
    result = *(_BYTE *)(LODWORD(_R4) + 284);
    if ( *(_BYTE *)(LODWORD(_R4) + 284) )
      result = ClientInstance::getGameRenderer(*v12);
      *(_BYTE *)(result + 814) = 1;
  return result;
}


Entity *__fastcall InGamePlayScreen::_renderLevelPrep(int a1, int a2, LevelRenderer *a3, float a4)
{
  InGamePlayScreen *v4; // r4@1
  float v5; // r10@1
  LevelRenderer *v6; // r9@1
  int v7; // r8@1
  Entity *result; // r0@2
  char *v9; // r0@4
  char *v10; // r0@4
  char *v11; // r0@4
  int v12; // r7@4
  int v13; // r8@4
  int v14; // ST08_4@4
  char *v15; // r0@4
  char *v16; // r0@4
  int v17; // r9@4
  Entity *v18; // r5@4
  __int64 v19; // r10@4
  LocalPlayer *v20; // r0@4
  int v21; // r0@4
  signed int v22; // r1@5
  int v23; // r0@6
  Options *v24; // r0@8
  int v25; // r0@8
  int v31; // r0@11
  int v32; // r0@12
  int v33; // r0@14
  Option *v34; // r0@14
  int v35; // r0@14
  char v36; // r1@14
  int v37; // r0@16
  _DWORD *v38; // r0@17
  unsigned int v39; // r3@17
  void (*v40)(void); // r3@17
  char *v41; // r0@19
  LevelRenderer *v42; // [sp+4h] [bp-3C4h]@4
  int v43; // [sp+Ch] [bp-3BCh]@4
  int *v44; // [sp+10h] [bp-3B8h]@4
  int *v45; // [sp+14h] [bp-3B4h]@4
  int v46; // [sp+18h] [bp-3B0h]@4
  int v47; // [sp+1Ch] [bp-3ACh]@4
  int v48; // [sp+20h] [bp-3A8h]@4
  int v49; // [sp+24h] [bp-3A4h]@4
  __int64 v50; // [sp+28h] [bp-3A0h]@4
  int v51; // [sp+30h] [bp-398h]@4
  int v52; // [sp+34h] [bp-394h]@4
  int v53; // [sp+38h] [bp-390h]@4
  int v54; // [sp+3Ch] [bp-38Ch]@4
  int v55; // [sp+40h] [bp-388h]@4
  int v56; // [sp+44h] [bp-384h]@4
  int v57; // [sp+48h] [bp-380h]@4
  int v58; // [sp+4Ch] [bp-37Ch]@4
  int v59; // [sp+50h] [bp-378h]@4
  int v60; // [sp+54h] [bp-374h]@4
  char v61; // [sp+58h] [bp-370h]@4
  unsigned __int64 v62; // [sp+5Ch] [bp-36Ch]@17
  int (*v63)(void); // [sp+64h] [bp-364h]@4
  int (__fastcall *v64)(int **, int); // [sp+68h] [bp-360h]@17
  int v65; // [sp+70h] [bp-358h]@4
  int v66; // [sp+74h] [bp-354h]@4
  int v67; // [sp+78h] [bp-350h]@4
  int v68; // [sp+7Ch] [bp-34Ch]@4
  int v69; // [sp+80h] [bp-348h]@4
  int v70; // [sp+84h] [bp-344h]@4
  int v71; // [sp+88h] [bp-340h]@4
  int v72; // [sp+8Ch] [bp-33Ch]@4
  int v73; // [sp+90h] [bp-338h]@4
  int v74; // [sp+94h] [bp-334h]@4
  int v75; // [sp+98h] [bp-330h]@4
  int v76; // [sp+9Ch] [bp-32Ch]@4
  int v77; // [sp+A0h] [bp-328h]@4
  int v78; // [sp+A4h] [bp-324h]@4
  int v79; // [sp+A8h] [bp-320h]@4
  int v80; // [sp+ACh] [bp-31Ch]@4
  int v81; // [sp+B0h] [bp-318h]@4
  int v82; // [sp+B4h] [bp-314h]@4
  int v83; // [sp+B8h] [bp-310h]@4
  int v84; // [sp+BCh] [bp-30Ch]@4
  int v85; // [sp+C0h] [bp-308h]@4
  int v86; // [sp+C4h] [bp-304h]@4
  int v87; // [sp+C8h] [bp-300h]@4
  int v88; // [sp+CCh] [bp-2FCh]@4
  int v89; // [sp+D0h] [bp-2F8h]@4
  int v90; // [sp+D4h] [bp-2F4h]@4
  int v91; // [sp+D8h] [bp-2F0h]@4
  int v92; // [sp+DCh] [bp-2ECh]@4
  int v93; // [sp+E0h] [bp-2E8h]@4
  int v94; // [sp+E4h] [bp-2E4h]@4
  int v95; // [sp+E8h] [bp-2E0h]@4
  int v96; // [sp+ECh] [bp-2DCh]@4
  int v97; // [sp+F0h] [bp-2D8h]@4
  int v98; // [sp+F4h] [bp-2D4h]@4
  int v99; // [sp+F8h] [bp-2D0h]@4
  int v100; // [sp+FCh] [bp-2CCh]@4
  int v101; // [sp+100h] [bp-2C8h]@4
  int v102; // [sp+104h] [bp-2C4h]@4
  int v103; // [sp+108h] [bp-2C0h]@4
  int v104; // [sp+10Ch] [bp-2BCh]@4
  int v105; // [sp+110h] [bp-2B8h]@4
  int v106; // [sp+114h] [bp-2B4h]@4
  int v107; // [sp+118h] [bp-2B0h]@4
  int v108; // [sp+11Ch] [bp-2ACh]@4
  int v109; // [sp+120h] [bp-2A8h]@4
  int v110; // [sp+124h] [bp-2A4h]@4
  int v111; // [sp+128h] [bp-2A0h]@4
  int v112; // [sp+12Ch] [bp-29Ch]@4
  int *v113; // [sp+130h] [bp-298h]@4
  int *v114; // [sp+134h] [bp-294h]@4
  int v115; // [sp+138h] [bp-290h]@4
  int v116; // [sp+13Ch] [bp-28Ch]@4
  int v117; // [sp+140h] [bp-288h]@4
  int v118; // [sp+144h] [bp-284h]@4
  int v119; // [sp+148h] [bp-280h]@4
  int v120; // [sp+14Ch] [bp-27Ch]@4
  int v121; // [sp+150h] [bp-278h]@4
  int v122; // [sp+154h] [bp-274h]@4
  int v123; // [sp+158h] [bp-270h]@4
  int v124; // [sp+15Ch] [bp-26Ch]@4
  int v125; // [sp+160h] [bp-268h]@4
  int v126; // [sp+164h] [bp-264h]@4
  int v127; // [sp+168h] [bp-260h]@4
  int v128; // [sp+16Ch] [bp-25Ch]@4
  int v129; // [sp+170h] [bp-258h]@4
  int v130; // [sp+174h] [bp-254h]@4
  int v131; // [sp+178h] [bp-250h]@4
  int v132; // [sp+17Ch] [bp-24Ch]@4
  int v133; // [sp+180h] [bp-248h]@4
  int v134; // [sp+184h] [bp-244h]@4
  int v135; // [sp+188h] [bp-240h]@4
  int v136; // [sp+18Ch] [bp-23Ch]@4
  int v137; // [sp+190h] [bp-238h]@4
  int v138; // [sp+194h] [bp-234h]@4
  int v139; // [sp+198h] [bp-230h]@4
  int v140; // [sp+19Ch] [bp-22Ch]@4
  int v141; // [sp+1A0h] [bp-228h]@4
  int v142; // [sp+1A4h] [bp-224h]@4
  int v143; // [sp+1A8h] [bp-220h]@4
  int v144; // [sp+1ACh] [bp-21Ch]@4
  int v145; // [sp+1B0h] [bp-218h]@4
  int v146; // [sp+1B4h] [bp-214h]@4
  int v147; // [sp+1B8h] [bp-210h]@4
  int v148; // [sp+1BCh] [bp-20Ch]@4
  int v149; // [sp+1C0h] [bp-208h]@4
  int v150; // [sp+1C4h] [bp-204h]@4
  int v151; // [sp+1C8h] [bp-200h]@4
  int v152; // [sp+1CCh] [bp-1FCh]@4
  int v153; // [sp+1D0h] [bp-1F8h]@4
  int v154; // [sp+1D4h] [bp-1F4h]@4
  int v155; // [sp+1D8h] [bp-1F0h]@4
  int v156; // [sp+1DCh] [bp-1ECh]@4
  int v157; // [sp+1E0h] [bp-1E8h]@4
  int v158; // [sp+1E4h] [bp-1E4h]@4
  int v159; // [sp+1E8h] [bp-1E0h]@4
  int v160; // [sp+1ECh] [bp-1DCh]@4
  int v161; // [sp+1F0h] [bp-1D8h]@4
  int v162; // [sp+1F4h] [bp-1D4h]@4
  int v163; // [sp+1F8h] [bp-1D0h]@4
  int *v164; // [sp+1FCh] [bp-1CCh]@4
  int *v165; // [sp+200h] [bp-1C8h]@4
  int v166; // [sp+204h] [bp-1C4h]@4
  int v167; // [sp+208h] [bp-1C0h]@4
  int v168; // [sp+20Ch] [bp-1BCh]@4
  int v169; // [sp+210h] [bp-1B8h]@4
  int v170; // [sp+214h] [bp-1B4h]@4
  int v171; // [sp+218h] [bp-1B0h]@4
  int v172; // [sp+21Ch] [bp-1ACh]@4
  int v173; // [sp+220h] [bp-1A8h]@4
  int v174; // [sp+224h] [bp-1A4h]@4
  int v175; // [sp+228h] [bp-1A0h]@4
  int v176; // [sp+22Ch] [bp-19Ch]@4
  int v177; // [sp+230h] [bp-198h]@4
  int v178; // [sp+234h] [bp-194h]@4
  int v179; // [sp+238h] [bp-190h]@4
  int v180; // [sp+23Ch] [bp-18Ch]@4
  int v181; // [sp+240h] [bp-188h]@4
  int v182; // [sp+244h] [bp-184h]@4
  int v183; // [sp+248h] [bp-180h]@4
  int v184; // [sp+24Ch] [bp-17Ch]@4
  int v185; // [sp+250h] [bp-178h]@4
  int v186; // [sp+254h] [bp-174h]@4
  int v187; // [sp+258h] [bp-170h]@4
  int v188; // [sp+25Ch] [bp-16Ch]@4
  int v189; // [sp+260h] [bp-168h]@4
  int v190; // [sp+264h] [bp-164h]@4
  int v191; // [sp+268h] [bp-160h]@4
  int v192; // [sp+26Ch] [bp-15Ch]@4
  int v193; // [sp+270h] [bp-158h]@4
  int v194; // [sp+274h] [bp-154h]@4
  int v195; // [sp+278h] [bp-150h]@4
  int v196; // [sp+27Ch] [bp-14Ch]@4
  int v197; // [sp+280h] [bp-148h]@4
  int v198; // [sp+284h] [bp-144h]@4
  int v199; // [sp+288h] [bp-140h]@4
  int v200; // [sp+28Ch] [bp-13Ch]@4
  int v201; // [sp+290h] [bp-138h]@4
  int v202; // [sp+294h] [bp-134h]@4
  int v203; // [sp+298h] [bp-130h]@4
  int v204; // [sp+29Ch] [bp-12Ch]@4
  int v205; // [sp+2A0h] [bp-128h]@4
  int v206; // [sp+2A4h] [bp-124h]@4
  int v207; // [sp+2A8h] [bp-120h]@4
  int v208; // [sp+2ACh] [bp-11Ch]@4
  int v209; // [sp+2B0h] [bp-118h]@4
  int v210; // [sp+2B4h] [bp-114h]@4
  int v211; // [sp+2B8h] [bp-110h]@4
  int v212; // [sp+2BCh] [bp-10Ch]@4
  int v213; // [sp+2C0h] [bp-108h]@4
  int v214; // [sp+2C4h] [bp-104h]@4
  int v215; // [sp+2C8h] [bp-100h]@4
  int v216; // [sp+2CCh] [bp-FCh]@4
  int v217; // [sp+2D0h] [bp-F8h]@4
  int v218; // [sp+2D4h] [bp-F4h]@4
  int v219; // [sp+2D8h] [bp-F0h]@4
  int v220; // [sp+2DCh] [bp-ECh]@4
  int v221; // [sp+2E0h] [bp-E8h]@4
  int v222; // [sp+2E4h] [bp-E4h]@4
  int v223; // [sp+2E8h] [bp-E0h]@4
  int v224; // [sp+2ECh] [bp-DCh]@4
  int v225; // [sp+2F0h] [bp-D8h]@4
  int v226; // [sp+2F4h] [bp-D4h]@4
  int v227; // [sp+2F8h] [bp-D0h]@4
  int v228; // [sp+2FCh] [bp-CCh]@4
  int v229; // [sp+300h] [bp-C8h]@4
  int v230; // [sp+304h] [bp-C4h]@4
  int v231; // [sp+308h] [bp-C0h]@4
  int v232; // [sp+30Ch] [bp-BCh]@4
  int v233; // [sp+310h] [bp-B8h]@4
  int v234; // [sp+314h] [bp-B4h]@4
  int v235; // [sp+318h] [bp-B0h]@4
  int v236; // [sp+31Ch] [bp-ACh]@4
  int v237; // [sp+320h] [bp-A8h]@4
  int v238; // [sp+324h] [bp-A4h]@4
  int v239; // [sp+328h] [bp-A0h]@4
  int v240; // [sp+32Ch] [bp-9Ch]@4
  int v241; // [sp+330h] [bp-98h]@4
  int v242; // [sp+334h] [bp-94h]@4
  int v243; // [sp+338h] [bp-90h]@4
  int v244; // [sp+33Ch] [bp-8Ch]@4
  int v245; // [sp+340h] [bp-88h]@4
  int v246; // [sp+344h] [bp-84h]@4
  int v247; // [sp+348h] [bp-80h]@4
  int v248; // [sp+34Ch] [bp-7Ch]@4
  int v249; // [sp+350h] [bp-78h]@4
  int v250; // [sp+354h] [bp-74h]@4
  int v251; // [sp+358h] [bp-70h]@4
  int v252; // [sp+35Ch] [bp-6Ch]@4
  int v253; // [sp+360h] [bp-68h]@4
  int v254; // [sp+364h] [bp-64h]@4
  int v255; // [sp+368h] [bp-60h]@4
  int v256; // [sp+36Ch] [bp-5Ch]@4
  int v257; // [sp+370h] [bp-58h]@4
  int v258; // [sp+374h] [bp-54h]@4
  int v259; // [sp+378h] [bp-50h]@4
  int v260; // [sp+37Ch] [bp-4Ch]@4
  int v261; // [sp+380h] [bp-48h]@4
  int v262; // [sp+384h] [bp-44h]@4
  unsigned __int64 v263; // [sp+388h] [bp-40h]@17
  void (*v264)(void); // [sp+390h] [bp-38h]@17
  int (__fastcall *v265)(int **, int); // [sp+394h] [bp-34h]@17

  v4 = (InGamePlayScreen *)a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !ClientInstance::getCameraTargetEntity(*(ClientInstance **)(a1 + 328)) )
  {
    result = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 82));
    if ( !result )
      return result;
    ClientInstance::setCameraTargetEntity(*((ClientInstance **)v4 + 82), result);
  }
  v9 = LevelRenderer::getLevelRendererPlayer(v6);
  LevelRendererPlayer::setupCamera((LevelRendererPlayer *)v9, *(mce::Camera **)(v7 + 16), *(float *)(v7 + 8));
  (*(void (__fastcall **)(InGamePlayScreen *, _DWORD))(*(_DWORD *)v4 + 304))(v4, *(_DWORD *)(v7 + 16));
  Frustum::Frustum((Frustum *)&v215);
  Frustum::Frustum((Frustum *)&v167);
  (*(void (__fastcall **)(InGamePlayScreen *, _DWORD, int *, int *))(*(_DWORD *)v4 + 332))(
    v4,
    *(_DWORD *)(v7 + 16),
    &v215,
    &v167);
  v116 = v215;
  v117 = v216;
  v118 = v217;
  v119 = v218;
  v120 = v219;
  v121 = v220;
  v122 = v221;
  v123 = v222;
  v124 = v223;
  v125 = v224;
  v126 = v225;
  v127 = v226;
  v128 = v227;
  v129 = v228;
  v130 = v229;
  v131 = v230;
  v132 = v231;
  v133 = v232;
  v134 = v233;
  v135 = v234;
  v136 = v235;
  v137 = v236;
  v138 = v237;
  v139 = v238;
  v140 = v239;
  v141 = v240;
  v142 = v241;
  v143 = v242;
  v144 = v243;
  v145 = v244;
  v146 = v245;
  v147 = v246;
  v148 = v247;
  v149 = v248;
  v150 = v249;
  v151 = v250;
  v152 = v251;
  v153 = v252;
  v154 = v253;
  v155 = v254;
  v156 = v255;
  v157 = v256;
  v158 = v257;
  v159 = v258;
  v160 = v259;
  v161 = v260;
  v162 = v261;
  v163 = v262;
  v164 = 0;
  v165 = 0;
  v65 = v167;
  v66 = v168;
  v67 = v169;
  v68 = v170;
  v69 = v171;
  v70 = v172;
  v71 = v173;
  v72 = v174;
  v73 = v175;
  v74 = v176;
  v75 = v177;
  v76 = v178;
  v77 = v179;
  v78 = v180;
  v79 = v181;
  v80 = v182;
  v81 = v183;
  v82 = v184;
  v83 = v185;
  v84 = v186;
  v85 = v187;
  v86 = v188;
  v87 = v189;
  v88 = v190;
  v89 = v191;
  v90 = v192;
  v91 = v193;
  v92 = v194;
  v93 = v195;
  v94 = v196;
  v95 = v197;
  v96 = v198;
  v97 = v199;
  v98 = v200;
  v99 = v201;
  v100 = v202;
  v101 = v203;
  v102 = v204;
  v103 = v205;
  v104 = v206;
  v105 = v207;
  v106 = v208;
  v107 = v209;
  v108 = v210;
  v109 = v211;
  v110 = v212;
  v111 = v213;
  v166 = 0;
  v112 = v214;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  Entity::getInterpolatedPosition((Entity *)&v44, v5, *(_DWORD *)(v7 + 8));
  v164 = v44;
  v165 = v45;
  v166 = v46;
  v113 = v44;
  v114 = v45;
  v115 = v46;
  v10 = LevelRenderer::getLevelRendererPlayer(v6);
  v11 = LevelRendererCamera::getCameraPos((LevelRendererCamera *)v10);
  v43 = v7;
  v12 = *((_DWORD *)v11 + 1);
  v13 = *((_DWORD *)v11 + 2);
  v14 = *(_DWORD *)v11;
  v42 = v6;
  v15 = LevelRenderer::getLevelRendererPlayer(v6);
  v16 = LevelRendererCamera::getCameraTargetPos((LevelRendererCamera *)v15);
  v17 = *(_DWORD *)v16;
  v18 = (Entity *)LODWORD(v5);
  v19 = *(_QWORD *)(v16 + 4);
  v20 = (LocalPlayer *)ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 82));
  v21 = LocalPlayer::getViewBlockRadius(v20);
  v44 = &v116;
  v45 = &v65;
  v46 = v14;
  v47 = v12;
  v48 = v13;
  v49 = v17;
  v50 = v19;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = v21;
  v59 = 0;
  v57 = 0;
  v58 = 0;
  v55 = 0;
  v56 = 0;
  v60 = 1065353216;
  v61 = 2;
  v63 = 0;
  v55 = Entity::getRegion(v18);
  if ( ClientInstance::isHoloRealityMode(*((ClientInstance **)v4 + 82)) )
    v22 = 0;
  else
    v23 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v18 + 488))(v18);
    if ( v23 != 318 )
      v22 = 1;
  v58 = v22 ^ 1;
  v24 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v4 + 82));
  v25 = Options::getStereoRendering(v24);
  __asm { VMOV.F32        S16, #1.0 }
  if ( v25 == 1 && !ClientInstance::isLivingroomMode(*((ClientInstance **)v4 + 82)) )
    _R0 = ClientInstance::getHoloInput(*((ClientInstance **)v4 + 82));
    __asm { VLDR            S16, [R0,#0x284] }
  __asm { VSTR            S16, [SP,#0x3C8+var_374] }
  v31 = ClientInstance::getHoloInput(*((ClientInstance **)v4 + 82));
  if ( (*(int (**)(void))(*(_DWORD *)v31 + 112))() )
    v32 = 0;
    v32 = ClientInstance::isLivingroomMode(*((ClientInstance **)v4 + 82)) ^ 1;
  v57 = v32;
  v33 = ClientInstance::getOptions(*((ClientInstance **)v4 + 82));
  v34 = (Option *)Options::get(v33, 91);
  v35 = Option::getBool(v34);
  v36 = 1;
  if ( v35 )
    v36 = 2;
  v61 = v36;
  v37 = ClientInstance::getHoloInput(*((ClientInstance **)v4 + 82));
  if ( (*(int (**)(void))(*(_DWORD *)v37 + 44))() == 1 )
    v38 = operator new(0xCu);
    *v38 = v4;
    v38[1] = v43;
    v38[2] = v18;
    v39 = HIDWORD(v263);
    v263 = v62;
    v62 = __PAIR__(v39, (unsigned int)v38);
    v40 = (void (*)(void))v63;
    v63 = (int (*)(void))sub_12B7AD2;
    v264 = v40;
    v265 = v64;
    v64 = sub_12B7728;
    if ( v40 )
      v40();
  v41 = LevelRenderer::getLevelRendererPlayer(v42);
  LevelRendererPlayer::preRenderUpdate((int)v41, v43, (int)&v44);
  InGamePlayScreen::_pick(v4, *(float *)(v43 + 8));
  result = (Entity *)(*(int (__fastcall **)(InGamePlayScreen *))(*(_DWORD *)v4 + 352))(v4);
  if ( v63 )
    result = (Entity *)v63();
  return result;
}


void __fastcall InGamePlayScreen::~InGamePlayScreen(InGamePlayScreen *this)
{
  InGamePlayScreen *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E4A00;
  v2 = *((_DWORD *)this + 80);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 80) = 0;
  BaseScreen::~BaseScreen(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall InGamePlayScreen::renderOnlyWhenTopMost(InGamePlayScreen *this)
{
  return 0;
}


int __fastcall InGamePlayScreen::_isHoloViewer(InGamePlayScreen *this)
{
  return 0;
}


int __fastcall InGamePlayScreen::_renderLevel(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  int result; // r0@1
  bool v6; // zf@1

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getLevelRenderer(*(ClientInstance **)(a1 + 328));
  result = ClientInstance::getCameraEntity(*(ClientInstance **)(v2 + 328));
  v6 = v4 == 0;
  if ( v4 )
    v6 = result == 0;
  if ( !v6 )
    result = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)v2 + 296))(v2, v3, v4, result);
  return result;
}


int __fastcall InGamePlayScreen::tick(InGamePlayScreen *this, int a2, int a3)
{
  int v3; // r5@1
  int result; // r0@7

  v3 = a2;
  _R4 = this;
  if ( a2 == a3 )
  {
    __asm
    {
      VLDR            S16, [R4,#0x104]
      VMOV            R0, S16
    }
    _R0 = powf(COERCE_FLOAT(_R0 & 0x7FFFFFFF), 1.2);
    _R1 = v3 + 1;
      VLDR            S2, =0.4
      VCMPE.F32       S16, #0.0
      VMOV            S0, R1
      VMRS            APSR_nzcv, FPSCR
      VCVT.F32.S32    S0, S0
      VDIV.F32        S18, S2, S0
      VMOV            S0, R0
      VMUL.F32        S2, S18, S0
      VNMUL.F32       S0, S18, S0
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S2, S0 }
      VSTR            S2, [R4,#0x10C]
      VLDR            S16, [R4,#0x108]
    __asm { VSTR            S2, [R4,#0x110] }
    *((_DWORD *)_R4 + 65) = 0;
    *((_DWORD *)_R4 + 66) = 0;
  }
  result = *((_DWORD *)_R4 + 70) + 1;
  *((_DWORD *)_R4 + 70) = result;
  return result;
}


BaseScreen *__fastcall InGamePlayScreen::InGamePlayScreen(BaseScreen *a1, MinecraftGame *a2, int a3)
{
  int v3; // r8@1
  MinecraftGame *v4; // r6@1
  BaseScreen *v5; // r4@1
  int v6; // r1@1
  mce::TextureGroup *v7; // r5@1
  FullScreenEffectRenderer *v8; // r7@1
  BaseScreen *result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  BaseScreen::BaseScreen(a1);
  *(_DWORD *)v5 = &off_26E4A00;
  *((_DWORD *)v5 + 5) = 1065353216;
  *((_DWORD *)v5 + 8) = 0;
  *((_DWORD *)v5 + 9) = 0;
  *((_DWORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 12) = 0;
  *((_DWORD *)v5 + 13) = 0;
  *((_DWORD *)v5 + 10) = 1065353216;
  *((_DWORD *)v5 + 11) = 0;
  *((_DWORD *)v5 + 14) = 0;
  *((_DWORD *)v5 + 15) = 1065353216;
  *((_DWORD *)v5 + 18) = 0;
  *((_DWORD *)v5 + 19) = 0;
  *((_DWORD *)v5 + 16) = 0;
  *((_DWORD *)v5 + 17) = 0;
  *((_DWORD *)v5 + 20) = 1065353216;
  *((_DWORD *)v5 + 21) = 1065353216;
  *((_DWORD *)v5 + 24) = 0;
  *((_DWORD *)v5 + 25) = 0;
  *((_DWORD *)v5 + 22) = 0;
  *((_DWORD *)v5 + 23) = 0;
  *((_DWORD *)v5 + 28) = 0;
  *((_DWORD *)v5 + 29) = 0;
  *((_DWORD *)v5 + 26) = 1065353216;
  *((_DWORD *)v5 + 27) = 0;
  *((_DWORD *)v5 + 30) = 0;
  *((_DWORD *)v5 + 31) = 1065353216;
  *((_DWORD *)v5 + 34) = 0;
  *((_DWORD *)v5 + 35) = 0;
  *((_DWORD *)v5 + 32) = 0;
  *((_DWORD *)v5 + 33) = 0;
  *((_DWORD *)v5 + 36) = 1065353216;
  *((_DWORD *)v5 + 37) = 0;
  *((_DWORD *)v5 + 38) = 1065353216;
  *((_WORD *)v5 + 82) = 0;
  *((_DWORD *)v5 + 39) = 0;
  *((_DWORD *)v5 + 40) = 0;
  *((_BYTE *)v5 + 166) = 1;
  *((_BYTE *)v5 + 167) = 1;
  *((_DWORD *)v5 + 42) = 1065353216;
  *((_DWORD *)v5 + 43) = 0;
  *((_DWORD *)v5 + 44) = 0;
  v6 = *(&Vec2::ZERO + 1);
  *((_DWORD *)v5 + 45) = Vec2::ZERO;
  *((_DWORD *)v5 + 46) = v6;
  *((_DWORD *)v5 + 51) = 0;
  *((_DWORD *)v5 + 52) = 0;
  *((_DWORD *)v5 + 53) = 0;
  *((_DWORD *)v5 + 54) = 0;
  *((_DWORD *)v5 + 49) = 0;
  *((_DWORD *)v5 + 50) = 0;
  *((_DWORD *)v5 + 47) = 0;
  *((_DWORD *)v5 + 48) = 0;
  _aeabi_memclr8((char *)v5 + 224, 93);
  v7 = (mce::TextureGroup *)MinecraftGame::getTextures(v4);
  v8 = (FullScreenEffectRenderer *)operator new(0x134u);
  FullScreenEffectRenderer::FullScreenEffectRenderer(v8, v7);
  result = v5;
  *((_DWORD *)v5 + 80) = v8;
  *((_DWORD *)v5 + 81) = v4;
  *((_DWORD *)v5 + 82) = v3;
  return result;
}


int __fastcall InGamePlayScreen::_prepareCuller(InGamePlayScreen *this, mce::Camera *a2, Frustum *a3, Frustum *a4)
{
  Frustum *v4; // r5@1
  Frustum *v5; // r4@1
  mce::Camera *v6; // r6@1
  char *v7; // r10@1
  int v8; // r7@1
  int v9; // r8@1
  int v10; // r7@1
  int v11; // r0@1
  int v13; // [sp+0h] [bp-1A8h]@1
  int v14; // [sp+4h] [bp-1A4h]@1
  int v15; // [sp+8h] [bp-1A0h]@1
  int v16; // [sp+Ch] [bp-19Ch]@1
  int v17; // [sp+10h] [bp-198h]@1
  int v18; // [sp+14h] [bp-194h]@1
  int v19; // [sp+18h] [bp-190h]@1
  int v20; // [sp+1Ch] [bp-18Ch]@1
  int v21; // [sp+20h] [bp-188h]@1
  int v22; // [sp+24h] [bp-184h]@1
  int v23; // [sp+28h] [bp-180h]@1
  int v24; // [sp+2Ch] [bp-17Ch]@1
  int v25; // [sp+30h] [bp-178h]@1
  int v26; // [sp+34h] [bp-174h]@1
  int v27; // [sp+38h] [bp-170h]@1
  int v28; // [sp+3Ch] [bp-16Ch]@1
  int v29; // [sp+40h] [bp-168h]@1
  int v30; // [sp+44h] [bp-164h]@1
  int v31; // [sp+48h] [bp-160h]@1
  int v32; // [sp+4Ch] [bp-15Ch]@1
  int v33; // [sp+50h] [bp-158h]@1
  int v34; // [sp+54h] [bp-154h]@1
  int v35; // [sp+58h] [bp-150h]@1
  int v36; // [sp+5Ch] [bp-14Ch]@1
  int v37; // [sp+60h] [bp-148h]@1
  int v38; // [sp+64h] [bp-144h]@1
  int v39; // [sp+68h] [bp-140h]@1
  int v40; // [sp+6Ch] [bp-13Ch]@1
  int v41; // [sp+70h] [bp-138h]@1
  int v42; // [sp+74h] [bp-134h]@1
  int v43; // [sp+78h] [bp-130h]@1
  int v44; // [sp+7Ch] [bp-12Ch]@1
  int v45; // [sp+80h] [bp-128h]@1
  int v46; // [sp+84h] [bp-124h]@1
  int v47; // [sp+88h] [bp-120h]@1
  int v48; // [sp+8Ch] [bp-11Ch]@1
  int v49; // [sp+90h] [bp-118h]@1
  int v50; // [sp+94h] [bp-114h]@1
  int v51; // [sp+98h] [bp-110h]@1
  int v52; // [sp+9Ch] [bp-10Ch]@1
  int v53; // [sp+A0h] [bp-108h]@1
  int v54; // [sp+A4h] [bp-104h]@1
  int v55; // [sp+A8h] [bp-100h]@1
  int v56; // [sp+ACh] [bp-FCh]@1
  int v57; // [sp+B0h] [bp-F8h]@1
  int v58; // [sp+B4h] [bp-F4h]@1
  int v59; // [sp+B8h] [bp-F0h]@1
  int v60; // [sp+BCh] [bp-ECh]@1
  int v61; // [sp+C0h] [bp-E8h]@1
  int v62; // [sp+C4h] [bp-E4h]@1
  int v63; // [sp+C8h] [bp-E0h]@1
  int v64; // [sp+CCh] [bp-DCh]@1
  int v65; // [sp+D0h] [bp-D8h]@1
  int v66; // [sp+D4h] [bp-D4h]@1
  int v67; // [sp+D8h] [bp-D0h]@1
  int v68; // [sp+DCh] [bp-CCh]@1
  int v69; // [sp+E0h] [bp-C8h]@1
  int v70; // [sp+E4h] [bp-C4h]@1
  int v71; // [sp+E8h] [bp-C0h]@1
  int v72; // [sp+ECh] [bp-BCh]@1
  int v73; // [sp+F0h] [bp-B8h]@1
  int v74; // [sp+F4h] [bp-B4h]@1
  int v75; // [sp+F8h] [bp-B0h]@1
  int v76; // [sp+FCh] [bp-ACh]@1
  char v77; // [sp+100h] [bp-A8h]@1
  int v78; // [sp+108h] [bp-A0h]@1
  int v79; // [sp+10Ch] [bp-9Ch]@1
  int v80; // [sp+110h] [bp-98h]@1
  int v81; // [sp+114h] [bp-94h]@1
  int v82; // [sp+118h] [bp-90h]@1
  int v83; // [sp+11Ch] [bp-8Ch]@1
  int v84; // [sp+120h] [bp-88h]@1
  int v85; // [sp+124h] [bp-84h]@1
  int v86; // [sp+128h] [bp-80h]@1
  int v87; // [sp+12Ch] [bp-7Ch]@1
  int v88; // [sp+130h] [bp-78h]@1
  int v89; // [sp+134h] [bp-74h]@1
  int v90; // [sp+138h] [bp-70h]@1
  int v91; // [sp+13Ch] [bp-6Ch]@1
  int v92; // [sp+140h] [bp-68h]@1
  int v93; // [sp+144h] [bp-64h]@1
  int v94; // [sp+148h] [bp-60h]@1
  int v95; // [sp+14Ch] [bp-5Ch]@1
  int v96; // [sp+150h] [bp-58h]@1
  int v97; // [sp+154h] [bp-54h]@1
  int v98; // [sp+158h] [bp-50h]@1
  int v99; // [sp+15Ch] [bp-4Ch]@1
  int v100; // [sp+160h] [bp-48h]@1
  int v101; // [sp+164h] [bp-44h]@1
  int v102; // [sp+168h] [bp-40h]@1
  int v103; // [sp+16Ch] [bp-3Ch]@1
  int v104; // [sp+170h] [bp-38h]@1
  int v105; // [sp+174h] [bp-34h]@1
  int v106; // [sp+178h] [bp-30h]@1
  int v107; // [sp+17Ch] [bp-2Ch]@1
  int v108; // [sp+180h] [bp-28h]@1
  int v109; // [sp+184h] [bp-24h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = mce::WorldConstantsHolographic::getLeftShiftMat((mce::WorldConstantsHolographic *)(mce::Singleton<mce::GlobalConstantBuffers>::mInstance
                                                                                        + 36));
  v8 = MatrixStack::getTop(v6);
  _aeabi_memclr8(&v78, 60);
  v78 = *(_DWORD *)v8;
  v79 = *(_DWORD *)(v8 + 4);
  v80 = *(_DWORD *)(v8 + 8);
  v81 = *(_DWORD *)(v8 + 12);
  v82 = *(_DWORD *)(v8 + 16);
  v83 = *(_DWORD *)(v8 + 20);
  v84 = *(_DWORD *)(v8 + 24);
  v85 = *(_DWORD *)(v8 + 28);
  v86 = *(_DWORD *)(v8 + 32);
  v87 = *(_DWORD *)(v8 + 36);
  v88 = *(_DWORD *)(v8 + 40);
  v89 = *(_DWORD *)(v8 + 44);
  v90 = *(_DWORD *)(v8 + 48);
  v91 = *(_DWORD *)(v8 + 52);
  v92 = *(_DWORD *)(v8 + 56);
  v93 = *(_DWORD *)(v8 + 60);
  MatrixStack::push((MatrixStack *)&v77, (int)v6);
  glm::detail::operator*<float>((int)&v94, (int)v7, (int)&v78);
  _aeabi_memclr8(&v61, 56);
  v61 = v94;
  v62 = v95;
  v63 = v96;
  v64 = v97;
  v65 = v98;
  v66 = v99;
  v67 = v100;
  v68 = v101;
  v69 = v102;
  v70 = v103;
  v71 = v104;
  v72 = v105;
  v73 = v106;
  v74 = v107;
  v75 = v108;
  v76 = v109;
  MatrixStack::MatrixStackRef::operator=((int)&v77, (int)&v61);
  v9 = MatrixStack::top((mce::Camera *)((char *)v6 + 32));
  v10 = MatrixStack::top(v6);
  v11 = MatrixStack::top((mce::Camera *)((char *)v6 + 16));
  Frustum::getFrustum((int)&v13, v9, v10, v11);
  *(_DWORD *)v4 = v13;
  *((_DWORD *)v4 + 1) = v14;
  *((_DWORD *)v4 + 2) = v15;
  *((_DWORD *)v4 + 3) = v16;
  *((_DWORD *)v4 + 4) = v17;
  *((_DWORD *)v4 + 5) = v18;
  *((_DWORD *)v4 + 6) = v19;
  *((_DWORD *)v4 + 7) = v20;
  *((_DWORD *)v4 + 8) = v21;
  *((_DWORD *)v4 + 9) = v22;
  *((_DWORD *)v4 + 10) = v23;
  *((_DWORD *)v4 + 11) = v24;
  *((_DWORD *)v4 + 12) = v25;
  *((_DWORD *)v4 + 13) = v26;
  *((_DWORD *)v4 + 14) = v27;
  *((_DWORD *)v4 + 15) = v28;
  *((_DWORD *)v4 + 16) = v29;
  *((_DWORD *)v4 + 17) = v30;
  *((_DWORD *)v4 + 18) = v31;
  *((_DWORD *)v4 + 19) = v32;
  *((_DWORD *)v4 + 20) = v33;
  *((_DWORD *)v4 + 21) = v34;
  *((_DWORD *)v4 + 22) = v35;
  *((_DWORD *)v4 + 23) = v36;
  *((_DWORD *)v4 + 24) = v37;
  *((_DWORD *)v4 + 25) = v38;
  *((_DWORD *)v4 + 26) = v39;
  *((_DWORD *)v4 + 27) = v40;
  *((_DWORD *)v4 + 28) = v41;
  *((_DWORD *)v4 + 29) = v42;
  *((_DWORD *)v4 + 30) = v43;
  *((_DWORD *)v4 + 31) = v44;
  *((_DWORD *)v4 + 32) = v45;
  *((_DWORD *)v4 + 33) = v46;
  *((_DWORD *)v4 + 34) = v47;
  *((_DWORD *)v4 + 35) = v48;
  *((_DWORD *)v4 + 36) = v49;
  *((_DWORD *)v4 + 37) = v50;
  *((_DWORD *)v4 + 38) = v51;
  *((_DWORD *)v4 + 39) = v52;
  *((_DWORD *)v4 + 40) = v53;
  *((_DWORD *)v4 + 41) = v54;
  *((_DWORD *)v4 + 42) = v55;
  *((_DWORD *)v4 + 43) = v56;
  *((_DWORD *)v4 + 44) = v57;
  *((_DWORD *)v4 + 45) = v58;
  *((_DWORD *)v4 + 46) = v59;
  *((_DWORD *)v4 + 47) = v60;
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
  *((_DWORD *)v5 + 47) = *((_DWORD *)v4 + 47);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v77);
}


int __fastcall InGamePlayScreen::_postLevelRender(int a1, int a2, LevelRenderer *a3)
{
  char *v3; // r0@1

  v3 = LevelRenderer::getLevelRendererPlayer(a3);
  return (*(int (**)(void))(*(_DWORD *)v3 + 84))();
}


int __fastcall InGamePlayScreen::handlePointerPressed(InGamePlayScreen *this, bool a2)
{
  bool v2; // r4@1
  GuiData *v3; // r0@1

  v2 = a2;
  v3 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 82));
  return j_j_j__ZN7GuiData21setMenuPointerPressedEb(v3, v2);
}


int __fastcall InGamePlayScreen::isShowingMenu(InGamePlayScreen *this)
{
  return 0;
}


int __fastcall InGamePlayScreen::_setCorrectViewProj(InGamePlayScreen *this, mce::WorldConstantsHolographic *a2)
{
  InGamePlayScreen *v2; // r5@1
  ClientInstance *v3; // r4@1
  int v4; // r0@1
  int result; // r0@1
  mce::WorldConstantsHolographic *v6; // r2@1

  v2 = this;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*((ClientInstance **)this + 82));
  result = (*(int (**)(void))(*(_DWORD *)v4 + 44))();
  if ( result == 1 )
    result = j_j_j__ZN24ScreenSetupCleanupHelper17setupForVRDrawingER14ClientInstanceRN3mce25WorldConstantsHolographicE(
               *((ScreenSetupCleanupHelper **)v2 + 82),
               v3,
               v6);
  return result;
}


signed int __fastcall InGamePlayScreen::_renderedFramedItems(signed int a1, int a2, LevelRenderer *a3, const Entity *a4)
{
  signed int v4; // r5@1
  LevelRenderer *v5; // r8@1
  int v6; // r10@1
  const Entity *v7; // r9@1
  int v8; // r6@1
  Options *v9; // r7@3
  signed int v10; // r4@3
  Options *v11; // r0@3
  char v12; // r0@4
  char v13; // r4@6
  char *v14; // r0@6
  signed int v15; // r0@6
  signed int v20; // r0@8
  char v21; // r0@11
  int v22; // r0@14
  Options *v23; // r0@15
  Level *v24; // r11@15
  int v25; // r7@16
  char *v26; // r0@16
  signed int v27; // r6@17
  BlockSource *v28; // r9@26
  char *v29; // r4@26
  char *v30; // r0@26
  LocalPlayer *v31; // r0@29
  int v33; // [sp+8h] [bp-98h]@4
  char v34; // [sp+Ch] [bp-94h]@26

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  v8 = (*(int (**)(void))(*(_DWORD *)a1 + 292))();
  if ( v8 == 1 )
    (*(void (__fastcall **)(signed int, int, LevelRenderer *))(*(_DWORD *)v4 + 308))(v4, v6, v5);
  v9 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v4 + 328));
  v10 = ClientInstance::isSplitScreenActive(*(ClientInstance **)(v4 + 328));
  v11 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v4 + 328));
  if ( v10 == 1 )
  {
    v33 = v8;
    v12 = Options::getSplitscreenIngamePlayerNames(v11);
  }
  else
    v12 = Options::getIngamePlayerNames(v11);
  v13 = v12;
  v14 = LevelRenderer::getLevelRendererPlayer(v5);
  *(_BYTE *)(v4 + 157) = LevelRendererPlayer::getForceFog((LevelRendererPlayer *)v14, v7);
  v15 = ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v4 + 328));
  __asm
    VMOV.F32        S16, #1.0
    VLDR            S0, =0.0
  if ( v15 )
    __asm { VMOVNE.F32      S0, S16 }
  __asm { VSTR            S0, [R5,#0x94] }
  v20 = ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v4 + 328));
  __asm { VLDR            S0, =0.6 }
  if ( v20 )
    __asm { VMOVNE.F32      S16, S0 }
  __asm { VSTR            S16, [R5,#0x98] }
  *(_BYTE *)(v4 + 156) = Options::getFancyGraphics(v9);
  *(_BYTE *)(v4 + 158) = 1;
  *(_BYTE *)(v4 + 161) = 1;
  *(_BYTE *)(v4 + 159) = Options::getFancyGraphics(v9);
  *(_BYTE *)(v4 + 163) = 1;
  *(_BYTE *)(v4 + 164) = (Options::getHideHud(v9) ^ 1) & v13;
  if ( ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v4 + 328)) == 1 )
    v21 = Options::getVRUsesRedFlashForHitEffect(v9);
    v21 = 0;
  *(_BYTE *)(v4 + 162) = v21;
  *(_BYTE *)(v4 + 160) = 1;
  if ( ClientInstance::getLocalPlayer(*(ClientInstance **)(v4 + 328)) )
    v22 = ClientInstance::getLocalPlayer(*(ClientInstance **)(v4 + 328));
    *(_BYTE *)(v4 + 165) = Abilities::getBool(v22 + 4320, (int **)&Abilities::NOCLIP) ^ 1;
  *(_BYTE *)(v4 + 167) = Options::getFancySkies(v9);
  v23 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v4 + 328));
  *(_BYTE *)(v4 + 166) = Options::getRenderClouds(v23);
  v24 = (Level *)ClientInstance::getLevel(*(ClientInstance **)(v4 + 328));
  if ( Entity::hasCategory((int)v7, 1) )
    v25 = ClientInstance::isShowingMenu(*(ClientInstance **)(v4 + 328));
    v26 = LevelRenderer::getLevelRendererPlayer(v5);
    if ( !v25 )
    {
      LevelRendererPlayer::updateDestroyProgress((LevelRendererPlayer *)v26);
      v27 = 1;
      goto LABEL_20;
    }
  LevelRendererPlayer::clearDestroyProgress((LevelRendererPlayer *)v26);
  v27 = 0;
LABEL_20:
  LevelRenderer::renderLevel((int)v5, v6, v4 + 148);
  if ( ClientInstance::isHoloRealityMode(*(ClientInstance **)(v4 + 328)) == 1 )
    if ( ClientInstance::isVRTransitioning(*(ClientInstance **)(v4 + 328)) || v27 != 1 )
      goto LABEL_27;
  else if ( v27 != 1 )
    goto LABEL_27;
  if ( ClientInstance::allowPicking(*(ClientInstance **)(v4 + 328)) == 1 )
    v28 = (BlockSource *)Entity::getRegion(v7);
    BaseEntityRenderContext::BaseEntityRenderContext(
      (int)&v34,
      v6,
      (ClientInstance *)(*(_QWORD *)(v4 + 324) >> 32),
      *(_QWORD *)(v4 + 324));
    v29 = LevelRenderer::getLevelRendererPlayer(v5);
    v30 = Level::getHitResult(v24);
    LevelRendererPlayer::renderHitSelect(
      (LevelRendererPlayer *)v29,
      (BaseEntityRenderContext *)&v34,
      v28,
      (const BlockPos *)(v30 + 8),
      *(_BYTE *)(v4 + 156));
    BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v34);
LABEL_27:
  if ( v33 == 1 )
    (*(void (__fastcall **)(signed int, int, LevelRenderer *))(*(_DWORD *)v4 + 312))(v4, v6, v5);
  v31 = (LocalPlayer *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v4 + 328));
  return InGamePlayScreen::_renderItemActivationAnimation(v4, v6, v31, *(_DWORD *)(v6 + 8));
}


int __fastcall InGamePlayScreen::_applyInput_DirectRoll(int a1, int a2, int a3)
{
  Options *v5; // r0@1
  int v11; // r0@3
  int result; // r0@3
  float v14; // [sp+0h] [bp-28h]@3

  _R4 = a1;
  _R5 = a3;
  v5 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a1 + 328));
  Options::getVRLivingRoomMode(v5);
  __asm
  {
    VMOV.F32        S2, #2.0
    VMOV.F32        S0, #1.0
  }
  _R0 = &mce::Math::RADDEG;
  __asm { VLDR            S6, [R0] }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VLDR            S4, [R4,#0xFC] }
  *(_DWORD *)(_R4 + 252) = 0;
    VMOV            S2, R5
    VMUL.F32        S18, S6, S4
    VMUL.F32        S16, S0, S2
  v11 = ClientInstance::getLocalPlayer(*(ClientInstance **)(_R4 + 328));
    VSTR            S16, [SP,#0x28+var_28]
    VSTR            S18, [SP,#0x28+var_24]
  LocalPlayer::localPlayerTurn(v11, &v14);
  __asm { VMOV            R1, S18 }
  (*(void (__fastcall **)(int, int))(*(_DWORD *)_R4 + 336))(_R4, _R1);
  result = ClientInstance::getGameRenderer(*(ClientInstance **)(_R4 + 328));
  *(_BYTE *)(result + 814) = 1;
  return result;
}


int __fastcall InGamePlayScreen::~InGamePlayScreen(InGamePlayScreen *this)
{
  InGamePlayScreen *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E4A00;
  v2 = *((_DWORD *)this + 80);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 80) = 0;
  return j_j_j__ZN10BaseScreenD2Ev_0(v1);
}


void __fastcall InGamePlayScreen::_applyInput_StepSound(InGamePlayScreen *this, float a2)
{
  InGamePlayScreen::_applyInput_StepSound(this, a2);
}


int __fastcall InGamePlayScreen::applyInput(InGamePlayScreen *this, float a2)
{
  int result; // r0@1
  ClientInputHandler *v5; // r0@3
  int v6; // r6@3
  int v7; // r0@3
  unsigned int v12; // r4@5
  Options *v13; // r0@7
  Options *v14; // r0@8
  Options *v15; // r0@8
  int v16; // r0@8
  int v18; // r0@13
  int v19; // r2@13
  bool v20; // zf@13
  unsigned int v21; // r0@18
  Options *v22; // r0@20
  int v24; // r0@22
  unsigned int v26; // r0@23
  Options *v27; // r0@25
  int v29; // r0@27
  Options *v35; // r0@32
  int v37; // r0@34
  Minecraft *v42; // r0@38
  Timer *v43; // r0@38
  LocalPlayer *v44; // r0@40
  int v45; // [sp+0h] [bp-40h]@0
  int v46; // [sp+4h] [bp-3Ch]@3
  float v47; // [sp+8h] [bp-38h]@22

  _R5 = this;
  _R8 = a2;
  result = ClientInstance::getInput(*((ClientInstance **)this + 82));
  if ( result )
  {
    result = ClientInstance::getLocalPlayer(*((ClientInstance **)_R5 + 82));
    if ( result )
    {
      v5 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)_R5 + 82));
      v6 = ClientInputHandler::getCurrentInputMode(v5);
      v46 = v6;
      v7 = ClientInstance::getOptions(*((ClientInstance **)_R5 + 82));
      _R7 = Options::getGameSensitivity(v7, v6);
      __asm
      {
        VLDR            S18, [R5,#0xB4]
        VLDR            S16, [R5,#0xB8]
      }
      *(_QWORD *)((char *)_R5 + 180) = *(_QWORD *)&Vec2::ZERO;
      if ( ClientInstance::isRealityFullVRMode(*((ClientInstance **)_R5 + 82)) == 1 )
        if ( ClientInstance::isLivingroomMode(*((ClientInstance **)_R5 + 82)) )
        {
          v12 = 0;
        }
        else
          v13 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R5 + 82));
          v12 = Options::getStutterTurn(v13);
          if ( ClientInstance::currentInputModeIsGamePadOrMotionController(*((ClientInstance **)_R5 + 82)) == 1 )
          {
            v14 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R5 + 82));
            v12 = v12 & 0xFFFFFFFD | 2 * (Options::getVRTapTurn(v14) & 1);
            v15 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R5 + 82));
            v16 = Options::getVRRollTurning(v15);
            _ZF = v16 == 0;
            if ( !v16 )
              _ZF = *((_BYTE *)_R5 + 287) == 0;
            if ( !_ZF )
              v12 |= 4u;
          }
      else
        v12 = 0;
      __asm { VMOV            S20, R8 }
      if ( ClientInstance::getLocalPlayer(*((ClientInstance **)_R5 + 82)) )
        v18 = ClientInstance::isShowingMenu(*((ClientInstance **)_R5 + 82));
        v20 = v6 == 2;
        if ( v6 != 2 )
          v20 = (v18 ^ 1) == 1;
        if ( v20 )
          __asm
            VLDR            S0, =0.6
            VMOV            S2, R7
            VLDR            S4, =5760.0
            VMUL.F32        S0, S2, S0
            VLDR            S6, =0.2
            VMUL.F32        S2, S2, S4
            VLDR            S4, =1920.0
            VADD.F32        S0, S0, S6
            VADD.F32        S2, S2, S4
            VMUL.F32        S0, S0, S0
            VMUL.F32        S0, S0, S2
            VMUL.F32        S16, S0, S16
            VMUL.F32        S18, S0, S18
          switch ( v12 )
            case 2u:
            case 3u:
              v21 = *((_WORD *)_R5 + 142);
              if ( (_BYTE)v21 && v21 <= 0xFF )
              {
                v22 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R5 + 82));
                Options::getVRLivingRoomMode(v22);
                __asm
                {
                  VMOV.F32        S2, #2.0
                  VMOV.F32        S0, #1.0
                }
                _R0 = &mce::Math::RADDEG;
                __asm { VLDR            S4, [R0] }
                if ( !_ZF )
                  __asm { VMOVNE.F32      S0, S2 }
                __asm { VLDR            S2, [R5,#0xFC] }
                *((_DWORD *)_R5 + 63) = 0;
                  VMUL.F32        S18, S0, S18
                  VMUL.F32        S20, S4, S2
                v24 = ClientInstance::getLocalPlayer(*((ClientInstance **)_R5 + 82));
                  VSTR            S18, [SP,#0x40+var_38]
                  VSTR            S20, [SP,#0x40+var_34]
                LocalPlayer::localPlayerTurn(v24, &v47);
                __asm { VMOV            R1, S20 }
                (*(void (__fastcall **)(InGamePlayScreen *, int))(*(_DWORD *)_R5 + 336))(_R5, _R1);
                *(_BYTE *)(ClientInstance::getGameRenderer(*((ClientInstance **)_R5 + 82)) + 814) = 1;
                goto LABEL_35;
              }
              break;
            case 4u:
              v26 = *((_WORD *)_R5 + 142);
              if ( (_BYTE)v26 && v26 >= 0x100 )
                v27 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R5 + 82));
                Options::getVRLivingRoomMode(v27);
                  VMUL.F32        S16, S0, S18
                  VMUL.F32        S18, S4, S2
                v29 = ClientInstance::getLocalPlayer(*((ClientInstance **)_R5 + 82));
                  VSTR            S16, [SP,#0x40+var_38]
                  VSTR            S18, [SP,#0x40+var_34]
                LocalPlayer::localPlayerTurn(v29, &v47);
                __asm { VMOV            R1, S18 }
            case 1u:
              __asm { VMOV            R3, S16 ; jumptable 012B37A2 case 1 }
              InGamePlayScreen::_applyInput_Stutter((int)_R5, (int)&v46, v19, _R3);
            case 5u:
              __asm { VMOV            R2, S18 ; jumptable 012B37A2 case 5 }
              InGamePlayScreen::_applyInput_StutterRoll((int)_R5, (int)&v46, _R2);
            case 6u:
              if ( *((_BYTE *)_R5 + 284) )
                v35 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R5 + 82));
                Options::getVRLivingRoomMode(v35);
                v37 = ClientInstance::getLocalPlayer(*((ClientInstance **)_R5 + 82));
                LocalPlayer::localPlayerTurn(v37, &v47);
                (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)_R5 + 336))(_R5, _R1);
                if ( !*((_BYTE *)_R5 + 285) )
LABEL_35:
                  _R0 = getTimeS();
                  __asm
                  {
                    VMOV            D9, R0, R1
                    VLDR            D0, [R5,#0xE8]
                    VLDR            D1, =0.2
                    VSUB.F64        D0, D9, D0
                    VCMPE.F64       D0, D1
                    VMRS            APSR_nzcv, FPSCR
                  }
                  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                    __asm { VMOV            R1, S16 }
                    InGamePlayScreen::_applyInput_StepSound(_R5, _R1);
                    __asm { VSTR            D9, [R5,#0xE8] }
            case 7u:
              __asm { VMOV            R2, S18 ; jumptable 012B37A2 case 7 }
              InGamePlayScreen::_applyInput_StutterDirectRoll((int)_R5, (int)&v46, _R2);
            default:
              __asm
                VMOV            R2, S18 ; jumptable 012B37A2 default case
                VMOV            R3, S16
                VSTR            S20, [SP,#0x40+var_40]
              InGamePlayScreen::_applyInput_Standard(*(float *)&_R5, &v46, _R2, _R3, v45);
      *((_BYTE *)_R5 + 285) = *((_BYTE *)_R5 + 284);
      v42 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)_R5 + 82));
      v43 = (Timer *)Minecraft::getTimer(v42);
      if ( Timer::stepping(v43) == 1 )
        *((_DWORD *)_R5 + 65) = 0;
        *((_DWORD *)_R5 + 66) = 0;
      v44 = (LocalPlayer *)ClientInstance::getLocalPlayer(*((ClientInstance **)_R5 + 82));
      result = LocalPlayer::localPlayerRenderFrequencyMove(v44, _R8);
    }
  }
  return result;
}


int __fastcall InGamePlayScreen::_init(InGamePlayScreen *this, int a2, int a3)
{
  InGamePlayScreen *v3; // r4@1
  Minecraft *v4; // r0@2
  int v5; // r0@2
  ClientInstance *v6; // r6@2
  Level *v7; // r5@2
  Entity *v8; // r0@2
  int v9; // r0@3
  int v10; // r5@4
  int v11; // r0@4
  int v12; // r5@4
  unsigned int *v13; // r1@5
  unsigned int v14; // r0@7
  unsigned int *v15; // r6@11
  unsigned int v16; // r0@13
  int v17; // r0@18
  int result; // r0@18
  int v19; // r4@19
  int v20; // [sp+0h] [bp-18h]@4
  int v21; // [sp+4h] [bp-14h]@4

  v3 = this;
  BaseScreen::_init(this, a2, a3);
  if ( !ClientInstance::getLevelRenderer(*((ClientInstance **)v3 + 82)) )
  {
    v4 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v3 + 82));
    v5 = Minecraft::getLevel(v4);
    v6 = (ClientInstance *)*((_DWORD *)v3 + 82);
    v7 = (Level *)v5;
    v8 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 82));
    ClientInstance::setupLevelRendering(v6, v7, v8);
  }
  v9 = ClientInstance::getVoiceSystem(*((ClientInstance **)v3 + 82));
  (*(void (**)(void))(*(_DWORD *)v9 + 32))();
  (*(void (__fastcall **)(InGamePlayScreen *))(*(_DWORD *)v3 + 348))(v3);
  if ( (*(int (__fastcall **)(InGamePlayScreen *))(*(_DWORD *)v3 + 344))(v3) == 1 )
    v10 = ClientInstance::getClientSceneStack(*((ClientInstance **)v3 + 82));
    v11 = ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 82));
    SceneFactory::createHudScreen((SceneFactory *)&v20, v11);
    SceneStack::pushScreen(v10, (int)&v20, 0);
    v12 = v21;
    if ( v21 )
    {
      v13 = (unsigned int *)(v21 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        }
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    }
  MinecraftGame::registerUpsellScreen(*((MinecraftGame **)v3 + 81));
  v17 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 82));
  result = (*(int (**)(void))(*(_DWORD *)v17 + 44))();
  if ( result == 1 )
    v19 = ClientInstance::getGameRenderer(*((ClientInstance **)v3 + 82));
    result = GameRenderer::_prepHoloTransforms((GameRenderer *)v19, 0.0, 1);
    *(_BYTE *)(v19 + 815) = 1;
  return result;
}


signed int __fastcall InGamePlayScreen::handleDirection(int a1, int a2, int _R2, int _R3)
{
  int v5; // r5@1
  signed int result; // r0@3
  char v9; // r6@7
  ClientInputHandler *v10; // r0@7
  int v11; // r0@7
  int v12; // r5@7
  signed int v13; // r0@7
  signed int v14; // r1@7
  signed int v18; // r0@13
  signed int v19; // r1@17
  int v20; // r0@27
  char v21; // r0@29
  Options *v22; // r0@33
  Options *v23; // r0@34
  signed int v24; // r6@36
  signed int v25; // r5@36
  Options *v26; // r0@39
  Options *v27; // r0@40
  int v28; // r0@40
  Options *v29; // r0@47
  Options *v30; // r0@51
  int v31; // r0@51
  Options *v35; // r0@63
  bool v37; // zf@63
  int v38; // r0@72
  Options *v40; // r0@72
  Options *v43; // r0@80
  int v45; // r0@83

  __asm { VMOV            S22, R3 }
  v5 = a2;
  __asm { VMOV            S20, R2 }
  _R4 = a1;
  if ( a2 == 1 )
  {
    __asm
    {
      VLDR            S0, [R4,#0xB8]
      VADD.F32        S0, S0, S20
      VSTR            S0, [R4,#0xB8]
      VLDR            S0, [R4,#0xB4]
      VADD.F32        S0, S0, S22
      VSTR            S0, [R4,#0xB4]
    }
  }
  result = ClientInstance::isRealityFullVRMode(*(ClientInstance **)(a1 + 328));
  _ZF = v5 == 3;
  if ( v5 == 3 )
    _ZF = result == 1;
  if ( _ZF )
    __asm { VMUL.F32        S0, S20, S20 }
    v9 = 0;
      VMUL.F32        S2, S22, S22
      VLDR            S26, [R4,#0x120]
      VLDR            S28, [R4,#0x124]
      VSTR            S20, [R4,#0x120]
      VSTR            S22, [R4,#0x124]
    *(_DWORD *)(_R4 + 252) = 0;
    *(_BYTE *)(_R4 + 284) = 0;
    __asm { VADD.F32        S24, S2, S0 }
    v10 = (ClientInputHandler *)ClientInstance::getInput(*(ClientInstance **)(_R4 + 328));
    v11 = ClientInputHandler::getCurrentInputMode(v10);
    __asm { VCMPE.F32       S28, S22 }
    v12 = v11;
    __asm { VMRS            APSR_nzcv, FPSCR }
    v13 = 0;
    v14 = 0;
      VCMPE.F32       S22, #0.0
      VMOV.F32        S16, #0.5
    if ( _NF ^ _VF )
      v13 = 1;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v14 = 1;
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S26, S20
      v14 = v13;
    v18 = 0;
      v18 = 1;
    if ( v14 )
      __asm { VMOVNE.F32      S28, S22 }
    v19 = 0;
    __asm { VCMPE.F32       S20, #0.0 }
      v19 = 1;
      VCMPE.F32       S28, S16
      v19 = v18;
    if ( v19 )
      __asm { VMOVNE.F32      S26, S20 }
    if ( !(_NF ^ _VF) )
      __asm
      {
        VABS.F32        S0, S26
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        v9 = 1;
    __asm { VSQRT.F32       S18, S24 }
    if ( ClientInstance::isLivingroomMode(*(ClientInstance **)(_R4 + 328)) )
      goto LABEL_84;
    v20 = ClientInstance::getHoloInput(*(ClientInstance **)(_R4 + 328));
    if ( (*(int (**)(void))(*(_DWORD *)v20 + 308))() == 1 )
      if ( *(_BYTE *)(_R4 + 287) )
        __asm { VCMPE.F32       S18, S16 }
        v21 = 0;
        __asm { VMRS            APSR_nzcv, FPSCR }
        if ( !(_NF ^ _VF) )
          v21 = 1;
      else
        if ( *(_BYTE *)(_R4 + 285) )
          goto LABEL_35;
        v22 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(_R4 + 328));
        if ( Options::getVRRollTurning(v22) )
        v23 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(_R4 + 328));
        if ( Options::getVRTapTurn(v23) )
        __asm
        {
          VCMPE.F32       S18, S16
          VMRS            APSR_nzcv, FPSCR
        }
          if ( !*(_BYTE *)(_R4 + 286) )
            v21 = 1;
          v21 &= v9;
      *(_BYTE *)(_R4 + 287) = v21;
LABEL_35:
    if ( v12 == 1 )
      v24 = 0;
      v25 = 0;
    else
        v24 = 0;
        v26 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(_R4 + 328));
        if ( Options::getVR180Turning(v26) == 1 )
          v27 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(_R4 + 328));
          v28 = Options::getVRRollTurning(v27);
          __asm { VMOV.F32        S0, #-0.5 }
          v24 = 0;
          __asm
          {
            VCMPE.F32       S28, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            if ( (v28 ^ 1) == 1 )
            {
              __asm
              {
                VABS.F32        S0, S26
                VLDR            S2, =0.35
              }
              v24 = 0;
                VCMPE.F32       S0, S2
                VMRS            APSR_nzcv, FPSCR
              if ( _NF ^ _VF )
                v24 = 1;
            }
        else
      v29 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(_R4 + 328));
      if ( Options::getVRRollTurning(v29) )
        v25 = 1;
        v25 = *(_BYTE *)(_R4 + 287);
        if ( *(_BYTE *)(_R4 + 287) )
          v25 = 1;
    v30 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(_R4 + 328));
    v31 = Options::getVRTapTurn(v30);
    if ( v25 || v31 == 1 )
        VLDR            S0, =0.8
        VCMPE.F32       S24, S0
        *(_QWORD *)(_R4 + 240) = *(_QWORD *)&Vec3::ZERO;
        *(_DWORD *)(_R4 + 248) = dword_2822498;
          VLDR            S24, =0.0001
          VCMPE.F32       S18, S24
        if ( _NF ^ _VF )
          _R8 = *(&Vec3::ZERO + 1);
          _R7 = Vec3::ZERO;
          _R9 = dword_2822498;
          __asm { VDIV.F32        S0, S22, S18 }
          _R9 = 0;
            VDIV.F32        S2, S20, S18
            VMOV            R8, S0
            VMOV            R7, S2
        *(_BYTE *)(_R4 + 284) = 1;
        v35 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(_R4 + 328));
        LODWORD(_R0) = Options::getVRTapTurn(v35);
        v37 = LODWORD(_R0) == 1;
        if ( LODWORD(_R0) == 1 )
          v37 = *(_BYTE *)(_R4 + 285) == 0;
        if ( v37 )
            VMOV            S0, R8
            VMOV.F64        D1, #1.0
            VCVT.F64.F32    D0, S0
            VCMPE.F64       D0, D1
            VMOV.F64        D2, #-1.0
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F64      D0, D1 }
            VCMPE.F64       D0, D2
            __asm { VMOVLT.F64      D0, D2 }
          __asm { VMOV            R0, R1, D0 }
          _R5 = COERCE_UNSIGNED_INT64(acos(_R0));
            VLDR            S20, =-0.0
            VMOV            S22, R7
            VMOV            D12, R5, R6
          v43 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(_R4 + 328));
          _R0 = Options::getVRTapTurningSensitivity(v43);
            VCMPE.F32       S22, S20
            VMOV            S0, R0
            VMOV            D1, R5, R0
            __asm { VMOVLT.F64      D12, D1 }
            VMUL.F64        D0, D0, D12
            VCVT.F32.F64    S0, D0
            VSTR            S0, [R4,#0xFC]
        else if ( v25 == 1 )
            VLDR            S20, [R4,#0xF0]
            VLDR            S22, [R4,#0xF4]
            VMUL.F32        S2, S20, S20
            VLDR            S0, [R4,#0xF8]
            VMUL.F32        S4, S22, S22
            VMUL.F32        S6, S0, S0
            VADD.F32        S2, S4, S2
            VADD.F32        S2, S2, S6
            VCMPE.F32       S2, S24
          if ( !(_NF ^ _VF) )
            __asm
              VMOV            S24, R7
              VMOV            S26, R8
              VMUL.F32        S2, S20, S24
              VMUL.F32        S4, S22, S26
              VMOV            S6, R9
              VMUL.F32        S0, S0, S6
              VADD.F32        S2, S4, S2
              VMOV.F64        D2, #-1.0
              VADD.F32        S0, S2, S0
              VMOV.F64        D1, #1.0
              VCVT.F64.F32    D0, S0
              VCMPE.F64       D0, D1
              VMRS            APSR_nzcv, FPSCR
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F64      D0, D1 }
              VCMPE.F64       D0, D2
            if ( _NF ^ _VF )
              __asm { VMOVLT.F64      D0, D2 }
            __asm { VMOV            R0, R1, D0 }
            v38 = COERCE_UNSIGNED_INT64(acos(_R0));
            __asm { VMUL.F32        S0, S22, S24 }
            _R5 = v38;
              VMUL.F32        S2, S20, S26
              VMOV            D11, R5, R6
              VSUB.F32        S20, S2, S0
            v40 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(_R4 + 328));
            _R0 = Options::getVRRollTurningSensitivity(v40);
              VCMPE.F32       S20, #0.0
              VLDR            S6, =0.7
              VMOV            S0, R0
              VMOV            D1, R5, R0
              __asm { VMOVGT.F64      D11, D1 }
              VLDR            S2, =0.3
              VLDR            S4, [R4,#0x100]
              VMUL.F32        S2, S4, S2
              VMUL.F64        D0, D0, D11
              VCVT.F32.F64    S0, D0
              VADD.F32        S0, S0, S2
              VSTR            S0, [R4,#0xFC]
              VSTR            S0, [R4,#0x100]
        v45 = _R4 + 240;
        *(_DWORD *)v45 = _R7;
        *(_DWORD *)(v45 + 4) = _R8;
        *(_DWORD *)(v45 + 8) = _R9;
    else if ( v24 == 1 )
      *(_BYTE *)(_R4 + 284) = 1;
      if ( *(_BYTE *)(_R4 + 285) )
        *(_DWORD *)(_R4 + 252) = 0;
        *(_DWORD *)(_R4 + 256) = 0;
        *(_QWORD *)(_R4 + 252) = 1078530011LL;
      *(_BYTE *)(_R4 + 287) = 0;
LABEL_84:
    __asm { VCMPE.F32       S18, S16 }
    result = 0;
      result = 1;
    *(_BYTE *)(_R4 + 286) = result;
  return result;
}


int __fastcall InGamePlayScreen::_renderFirstPerson3DObjects(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r8@1
  char *v4; // r0@1
  __int64 v5; // r10@1
  int v6; // r5@1
  int v7; // r4@1
  __int64 v8; // r6@1
  Options *v9; // r0@1
  int v10; // r6@3
  _DWORD *v11; // r7@4
  int v12; // r0@5
  LevelRenderer *v13; // r0@6
  char *v14; // r7@6
  int v15; // r0@6
  __int64 v17; // [sp+0h] [bp-C0h]@3
  int v18; // [sp+8h] [bp-B8h]@3
  int v19; // [sp+Ch] [bp-B4h]@3
  __int64 v20; // [sp+10h] [bp-B0h]@3
  int v21; // [sp+18h] [bp-A8h]@5
  int v22; // [sp+1Ch] [bp-A4h]@3
  int v23; // [sp+20h] [bp-A0h]@3
  int v24; // [sp+24h] [bp-9Ch]@3
  __int64 v25; // [sp+28h] [bp-98h]@3
  int v26; // [sp+30h] [bp-90h]@3
  int v27; // [sp+34h] [bp-8Ch]@3
  int v28; // [sp+38h] [bp-88h]@3
  int v29; // [sp+3Ch] [bp-84h]@3
  int v30; // [sp+44h] [bp-7Ch]@1
  int v31; // [sp+48h] [bp-78h]@1
  int v32; // [sp+4Ch] [bp-74h]@1
  int v33; // [sp+50h] [bp-70h]@1
  __int64 v34; // [sp+54h] [bp-6Ch]@1
  __int64 v35; // [sp+5Ch] [bp-64h]@2
  int v36; // [sp+64h] [bp-5Ch]@2
  int v37; // [sp+68h] [bp-58h]@2
  __int64 v38; // [sp+6Ch] [bp-54h]@2
  int v39; // [sp+74h] [bp-4Ch]@5
  int v40; // [sp+78h] [bp-48h]@5
  int v41; // [sp+7Ch] [bp-44h]@5
  int v42; // [sp+80h] [bp-40h]@5
  __int64 v43; // [sp+84h] [bp-3Ch]@5
  int v44; // [sp+8Ch] [bp-34h]@5
  int v45; // [sp+90h] [bp-30h]@5
  int v46; // [sp+94h] [bp-2Ch]@5
  int v47; // [sp+98h] [bp-28h]@5

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getViewportInfo(*(ClientInstance **)(a1 + 328));
  LODWORD(v5) = *(_DWORD *)v4;
  HIDWORD(v5) = *(_QWORD *)v4 >> 32;
  v30 = *(_QWORD *)v4;
  v31 = *((_DWORD *)v4 + 1);
  v6 = *((_DWORD *)v4 + 2);
  v32 = *((_DWORD *)v4 + 2);
  v7 = *((_DWORD *)v4 + 3);
  v33 = *((_DWORD *)v4 + 3);
  v8 = *((_QWORD *)v4 + 2);
  v34 = *((_QWORD *)v4 + 2);
  v9 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v2 + 328));
  if ( !Options::getStereoRendering(v9) )
  {
    v35 = v5;
    v36 = v6;
    v37 = v7;
    v38 = v8;
    HIDWORD(v38) = 1036831949;
    ClientInstance::setViewportInfo(*(_DWORD *)(v2 + 328), (int)&v35);
  }
  v10 = ClientInstance::getCameraTargetEntity(*(ClientInstance **)(v2 + 328));
  v17 = 1065353216LL;
  v19 = 0;
  LODWORD(v20) = 0;
  v18 = 0;
  v22 = 0;
  v23 = 0;
  *(__int64 *)((char *)&v20 + 4) = 1065353216LL;
  v24 = 0;
  v25 = 1065353216LL;
  v27 = 0;
  v28 = 0;
  v26 = 0;
  v29 = 1065353216;
  if ( ClientInstance::isHoloRealityMode(*(ClientInstance **)(v2 + 328)) == 1 )
    InGamePlayScreen::_computeFirstPerson3dObjectLocationForVR(v2, (int)&v17);
    v11 = (_DWORD *)(v3 + 16);
  else
    v12 = MatrixStack::top(*(MatrixStack **)(v3 + 16));
    v17 = *(_QWORD *)v12;
    v18 = *(_DWORD *)(v12 + 8);
    v19 = *(_DWORD *)(v12 + 12);
    LODWORD(v20) = *(_DWORD *)(v12 + 16);
    *(__int64 *)((char *)&v20 + 4) = *(_QWORD *)(v12 + 20);
    v22 = *(_DWORD *)(v12 + 28);
    v23 = *(_DWORD *)(v12 + 32);
    v24 = *(_DWORD *)(v12 + 36);
    v25 = *(_QWORD *)(v12 + 40);
    v26 = *(_DWORD *)(v12 + 48);
    v27 = *(_DWORD *)(v12 + 52);
    v28 = *(_DWORD *)(v12 + 56);
    v29 = *(_DWORD *)(v12 + 60);
    glm::inverse<float>((int)&v35, (int)&v17);
    v17 = v35;
    v18 = v36;
    v19 = v37;
    v20 = v38;
    v21 = v39;
    v22 = v40;
    v23 = v41;
    v24 = v42;
    v25 = v43;
    v26 = v44;
    v27 = v45;
    v28 = v46;
    v29 = v47;
  MatrixStack::push((int)&v35, *v11 + 16, (int)&v17);
  v13 = (LevelRenderer *)ClientInstance::getLevelRenderer(*(ClientInstance **)(v2 + 328));
  v14 = LevelRenderer::getLevelRendererPlayer(v13);
  v15 = MatrixStack::MatrixStackRef::operator*((int)&v35);
  LevelRendererPlayer::bobHurt((int)v14, v15, *(_DWORD *)(v3 + 8));
  (*(void (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 316))(v2, v3, v10, 0);
  ClientInstance::setViewportInfo(*(_DWORD *)(v2 + 328), (int)&v30);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v35);
}


signed int __fastcall InGamePlayScreen::shouldStealMouse(InGamePlayScreen *this)
{
  InGamePlayScreen *v1; // r5@1
  signed int v2; // r4@1
  ClientInputHandler *v3; // r0@2

  v1 = this;
  v2 = 0;
  if ( ClientInstance::getInput(*((ClientInstance **)this + 82)) )
  {
    v3 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)v1 + 82));
    if ( ClientInputHandler::getCurrentInputMode(v3) != 2 )
      v2 = 1;
  }
  return v2;
}
