

void __fastcall HudMobEffectsRenderer::~HudMobEffectsRenderer(HudMobEffectsRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


_QWORD *__fastcall HudMobEffectsRenderer::HudMobEffectsRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26E03D0;
  return result;
}


int __fastcall HudMobEffectsRenderer::render(HudMobEffectsRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  UIControl *v6; // r6@1
  ClientInstance *v7; // r5@1
  MinecraftUIRenderContext *v8; // r4@1
  mce::TextureGroup *v9; // r7@2
  char *v10; // r0@2
  char *v11; // r0@3
  void *v12; // r0@4
  MobEffectsLayout *v13; // r4@6
  MobEffectsLayout *v20; // r4@6
  MobEffectsLayout *v23; // r4@7
  MobEffectsLayout *v28; // r4@8
  MobEffectsLayout *v31; // r4@8
  Mob *v34; // r0@8
  char *v35; // r4@8
  MobEffectsLayout *v36; // r0@8
  char *v37; // r11@8
  signed int v38; // r8@8
  int v39; // r7@8
  unsigned int v40; // r9@9
  _DWORD *v42; // r6@9
  MobEffectInstance *v43; // r5@10
  int v44; // r0@13
  BackwardsCompatTextureInfo *v46; // r0@16
  BackwardsCompatTextureInfo *v47; // r4@16
  int v50; // r6@16
  signed int v51; // r8@16
  int v55; // ST04_4@18
  ShaderColor *v57; // r0@18
  int v65; // ST00_4@18
  float v66; // r1@18
  ShaderColor *v70; // r0@19
  int *v71; // r0@20
  mce::TextureGroup *v72; // r5@20
  const void **v73; // r0@20
  int v74; // r1@20
  void *v75; // r0@20
  char *v76; // r0@21
  BackwardsCompatTextureInfo *v77; // r0@23
  BackwardsCompatTextureInfo *v78; // r5@23
  int v81; // r4@23
  int v82; // r6@23
  int v95; // ST00_4@25
  void *v96; // r0@25
  unsigned int *v97; // r2@28
  signed int v98; // r1@30
  unsigned int *v99; // r2@32
  signed int v100; // r1@34
  unsigned int *v101; // r2@36
  signed int v102; // r1@38
  __int64 v103; // r0@51
  unsigned int *v105; // r2@53
  signed int v106; // r1@55
  unsigned int *v107; // r2@57
  signed int v108; // r1@59
  int v109; // [sp+8h] [bp-178h]@0
  int v110; // [sp+8h] [bp-178h]@18
  int v111; // [sp+Ch] [bp-174h]@0
  int v112; // [sp+Ch] [bp-174h]@18
  char *v113; // [sp+30h] [bp-150h]@8
  signed int v114; // [sp+34h] [bp-14Ch]@15
  ClientInstance *v115; // [sp+3Ch] [bp-144h]@8
  _DWORD *v116; // [sp+44h] [bp-13Ch]@4
  ScreenRenderer *v117; // [sp+4Ch] [bp-134h]@4
  int v118; // [sp+50h] [bp-130h]@4
  GuiData *v119; // [sp+54h] [bp-12Ch]@4
  char v120; // [sp+58h] [bp-128h]@25
  char v121; // [sp+68h] [bp-118h]@25
  char *v122; // [sp+78h] [bp-108h]@20
  int v123; // [sp+7Ch] [bp-104h]@20
  int v124; // [sp+80h] [bp-100h]@20
  char v125; // [sp+84h] [bp-FCh]@20
  int v126; // [sp+9Ch] [bp-E4h]@20
  int v127; // [sp+A0h] [bp-E0h]@19
  signed int v128; // [sp+A4h] [bp-DCh]@19
  int v129; // [sp+A8h] [bp-D8h]@19
  char v130; // [sp+B0h] [bp-D0h]@18
  char v131; // [sp+C0h] [bp-C0h]@18
  int v132; // [sp+D0h] [bp-B0h]@18
  signed int v133; // [sp+D4h] [bp-ACh]@18
  signed int v134; // [sp+D8h] [bp-A8h]@18
  signed int v135; // [sp+DCh] [bp-A4h]@18
  char v136; // [sp+E0h] [bp-A0h]@8
  char *v137; // [sp+F4h] [bp-8Ch]@2
  char *v138; // [sp+F8h] [bp-88h]@2
  int v139; // [sp+FCh] [bp-84h]@2
  char v140; // [sp+100h] [bp-80h]@2

  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( !mce::TexturePtr::operator bool((int)&unk_27D8E14) )
  {
    v9 = (mce::TextureGroup *)ClientInstance::getTextures(v7);
    sub_119C884((void **)&v137, "textures/ui/hud_mob_effect_background");
    v138 = v137;
    v137 = (char *)&unk_28898CC;
    v139 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v140, v9, (int)&v138, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D8E14, (mce::TexturePtr *)&v140);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v140);
    v10 = v138 - 12;
    if ( (int *)(v138 - 12) != &dword_28898C0 )
    {
      v105 = (unsigned int *)(v138 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v106 = __ldrex(v105);
        while ( __strex(v106 - 1, v105) );
      }
      else
        v106 = (*v105)--;
      if ( v106 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    }
    v11 = v137 - 12;
    if ( (int *)(v137 - 12) != &dword_28898C0 )
      v107 = (unsigned int *)(v137 - 4);
          v108 = __ldrex(v107);
        while ( __strex(v108 - 1, v107) );
        v108 = (*v107)--;
      if ( v108 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
  }
  v118 = MinecraftUIRenderContext::getScreenContext(v8);
  v119 = *(GuiData **)(v118 + 24);
  v117 = *(ScreenRenderer **)(v118 + 40);
  v12 = ScreenRenderer::singleton(v117);
  v116 = ScreenRenderer::getMaterial((int)v12, 5);
  if ( ClientInstance::isVRClient(v7) != 1 || ClientInstance::isLivingroomMode(v7) )
    v13 = (MobEffectsLayout *)ClientInstance::getMobEffectsLayout(v7);
    _R0 = UIControl::getPosition(v6);
    __asm
      VLDR            S0, [R0]
      VCVTR.S32.F32   S0, S0
      VMOV            R1, S0
    MobEffectsLayout::setOffsetToStartingPositionX(v13, _R1);
    v20 = (MobEffectsLayout *)ClientInstance::getMobEffectsLayout(v7);
      VLDR            S0, [R0,#4]
  else
    v23 = (MobEffectsLayout *)ClientInstance::getMobEffectsLayout(v7);
      VMOV            R0, S0
    MobEffectsLayout::setOffsetToStartingPositionX(v23, _R0 - 100);
    _R1 = _R0 + 50;
  MobEffectsLayout::setOffsetToStartingPositionY(v20, _R1);
  v28 = (MobEffectsLayout *)ClientInstance::getMobEffectsLayout(v7);
  _R0 = UIControl::getSize(v6);
  __asm
    VLDR            S0, [R0]
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  MobEffectsLayout::setWidth(v28, _R1);
  v31 = (MobEffectsLayout *)ClientInstance::getMobEffectsLayout(v7);
    VLDR            S0, [R0,#4]
  MobEffectsLayout::setHeight(v31, _R1);
  RectangleArea::RectangleArea((RectangleArea *)&v136);
  v34 = (Mob *)ClientInstance::getLocalPlayer(v7);
  v35 = Mob::getAllEffects(v34);
  v113 = v35;
  v115 = v7;
  v36 = (MobEffectsLayout *)ClientInstance::getMobEffectsLayout(v7);
  v37 = MobEffectsLayout::getEffectsDisplayInfo(v36);
  v38 = 954437177;
  v39 = *(_QWORD *)v37;
  if ( (unsigned int)(954437177 * ((signed int)((*(_QWORD *)v37 >> 32) - v39) >> 2)) >= 2 )
      VMOV.F32        S20, #1.0
      VMOV.F32        S24, #0.25
      VLDR            S18, =0.045455
      VMOV.F32        S26, #0.5
      VLDR            S22, =0.2
    v40 = 1;
    _R0 = &mce::Math::PI;
      VLDR            S28, =0.055556
      VLDR            S16, [R0]
    v42 = &MobEffectInstance::NO_EFFECT;
    do
      v103 = *(_QWORD *)v35;
      if ( v40 >= (HIDWORD(v103) - (signed int)v103) >> 4 )
        break;
      v43 = (MobEffectInstance *)(v103 + 16 * v40);
      if ( MobEffectInstance::operator!=((int *)(v103 + 16 * v40), v42) == 1
        && MobEffect::hasIcon((MobEffect *)MobEffect::mMobEffects[v40]) == 1 )
        if ( MobEffectInstance::operator!=((int *)v43, v42) == 1 )
          v44 = MobEffectInstance::getDuration(v43);
        else
          v44 = 0;
        v114 = v44;
        _R5 = 0.0;
        Tessellator::begin(v117, 0, 0);
        if ( mce::TexturePtr::hasBackwardsCompatInfo((mce::TexturePtr *)&unk_27D8E14) == 1 )
        {
          v46 = (BackwardsCompatTextureInfo *)mce::TexturePtr::getBackwardsCompatInfo((mce::TexturePtr *)&unk_27D8E14);
          v47 = v46;
          _R0 = BackwardsCompatTextureInfo::getUV(v46);
          __asm { VLDR            S30, [R0] }
          _R0 = BackwardsCompatTextureInfo::getUV(v47);
          __asm { VLDR            S17, [R0,#4] }
          v50 = *(_DWORD *)BackwardsCompatTextureInfo::getUVSize(v47);
          v51 = *((_DWORD *)BackwardsCompatTextureInfo::getUVSize(v47) + 1);
          _R0 = BackwardsCompatTextureInfo::getBaseUVSize(v47);
          __asm { VLDR            S19, [R0] }
          __asm
          {
            VLDR            S2, [R0,#4]
            VCVTR.S32.F32   S4, S30
            VCVTR.S32.F32   S6, S17
            VDIV.F32        S0, S20, S19
            VDIV.F32        S2, S20, S2
            VMOV            R5, S4
            VMOV            R3, S6
          }
        }
          v50 = 1102053376;
          _R3 = 0.0;
          __asm { VMOV.F32        S0, S18 }
          v51 = 1102053376;
          __asm { VMOV.F32        S2, S18 }
        __asm
          VSTR            S0, [SP,#0x180+var_178]
          VSTR            S2, [SP,#0x180+var_174]
        v55 = v51;
        _R8 = v39 + 36 * v40;
        BaseScreen::drawRectangleArea(*(float *)&v118, COERCE_FLOAT(_R8 + 20), _R5, _R3, v50, v55, v109, v111);
        v57 = *(ShaderColor **)(v118 + 48);
        v132 = 1065353216;
        v133 = 1065353216;
        v134 = 1065353216;
        v135 = 1065353216;
        ShaderColor::setColor(v57, (const Color *)&v132);
        Tessellator::draw((char *)v117, v118, (int)v116, (int)&unk_27D8E14);
        __asm { VLDR            S30, [R8,#0x14] }
        _R0 = GuiData::getInvGuiScale(v119);
          VMOV            S0, R0
          VLDR            S17, [R8,#0x1C]
          VMUL.F32        S30, S0, S30
          VMOV            S21, R0
          VLDR            S19, [R8,#0x18]
          VMUL.F32        S17, S21, S17
          VLDR            S21, [R8,#0x20]
          VMUL.F32        S19, S0, S19
          VMOV            R1, S30
          VMOV            R2, S17
          VMOV            R3, S19
          VMUL.F32        S0, S0, S21
          VSTR            S0, [SP,#0x180+var_180]
        RectangleArea::RectangleArea(COERCE_FLOAT(&v131), _R1, _R2, _R3, v65);
        RectangleArea::unionRects((RectangleArea *)&v130, (const RectangleArea *)&v136, (int)&v131);
        RectangleArea::operator=((int)&v136, (int)&v130);
        _R0 = v114;
        if ( v114 <= 199 )
            VMOV            S0, R0
            VCVT.F32.S32    S0, S0
            VMUL.F32        S0, S0, S22
            VMUL.F32        S0, S0, S16
            VMOV            R0, S0
          _R0 = mce::Math::cos(_R0, v66);
            VMUL.F32        S0, S0, S24
          v70 = *(ShaderColor **)(v118 + 48);
          v127 = 1065353216;
          v128 = 1065353216;
          v129 = 1065353216;
            VADD.F32        S0, S0, S26
            VSTR            S0, [SP,#0x180+var_D4]
          ShaderColor::setColor(v70, (const Color *)&v127);
        v71 = (int *)MobEffect::getIconName((MobEffect *)MobEffect::mMobEffects[v40]);
        sub_119C854(&v126, v71);
        v72 = (mce::TextureGroup *)ClientInstance::getTextures(v115);
        v122 = (char *)&unk_28898CC;
        sub_119CAF8((const void **)&v122, *(_DWORD *)(v126 - 12) + 12);
        sub_119C894((const void **)&v122, "textures/ui/", 0xCu);
        sub_119C8A4((const void **)&v122, (const void **)&v126);
        v73 = sub_119C894((const void **)&v122, "_effect", 7u);
        v74 = (int)*v73;
        *v73 = &unk_28898CC;
        v123 = v74;
        v124 = 0;
        mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v125, v72, (int)&v123, 0);
        v75 = (void *)(v123 - 12);
        if ( (int *)(v123 - 12) != &dword_28898C0 )
          v97 = (unsigned int *)(v123 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v98 = __ldrex(v97);
            while ( __strex(v98 - 1, v97) );
          else
            v98 = (*v97)--;
          if ( v98 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v75);
        v76 = v122 - 12;
        if ( (int *)(v122 - 12) != &dword_28898C0 )
          v99 = (unsigned int *)(v122 - 4);
              v100 = __ldrex(v99);
            while ( __strex(v100 - 1, v99) );
            v100 = (*v99)--;
          if ( v100 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v76);
        if ( mce::TexturePtr::hasBackwardsCompatInfo((mce::TexturePtr *)&v125) == 1 )
          v77 = (BackwardsCompatTextureInfo *)mce::TexturePtr::getBackwardsCompatInfo((mce::TexturePtr *)&v125);
          v78 = v77;
          _R0 = BackwardsCompatTextureInfo::getUV(v77);
            VLDR            S0, [R0]
            VCVTR.S32.F32   S30, S0
          _R0 = BackwardsCompatTextureInfo::getUV(v78);
            VLDR            S0, [R0,#4]
            VCVTR.S32.F32   S17, S0
          v81 = *(_DWORD *)BackwardsCompatTextureInfo::getUVSize(v78);
          v82 = *((_DWORD *)BackwardsCompatTextureInfo::getUVSize(v78) + 1);
          _R0 = BackwardsCompatTextureInfo::getBaseUVSize(v78);
            VMOV            R2, S30
            VMOV            R3, S17
            VDIV.F32        S0, S20, S0
            VDIV.F32        S2, S20, S19
          v81 = 1099956224;
          _R2 = 0.0;
          v82 = 1099956224;
            VMOV.F32        S2, S28
            VMOV.F32        S0, S28
        _R5 = _R8 + 4;
          VSTR            S2, [SP,#0x180+var_178]
          VSTR            S0, [SP,#0x180+var_174]
        BaseScreen::drawRectangleArea(*(float *)&v118, COERCE_FLOAT(_R8 + 4), _R2, _R3, v81, v82, v110, v112);
        Tessellator::draw((char *)v117, v118, (int)v116, (int)&v125);
        __asm { VLDR            S30, [R5] }
        _R5 = GuiData::getInvGuiScale(v119);
        __asm { VLDR            S17, [R8,#0xC] }
        _R7 = GuiData::getInvGuiScale(v119);
        __asm { VLDR            S19, [R8,#8] }
        _R4 = GuiData::getInvGuiScale(v119);
        __asm { VLDR            S21, [R8,#0x10] }
          VMOV            S0, R5
          VMOV            S2, R7
          VMUL.F32        S0, S0, S30
          VMOV            S4, R4
          VMUL.F32        S2, S2, S17
          VMUL.F32        S4, S4, S19
          VMOV            S6, R0
          VMOV            R1, S0
          VMUL.F32        S0, S6, S21
          VMOV            R2, S2
          VMOV            R3, S4
        RectangleArea::RectangleArea(COERCE_FLOAT(&v121), _R1, _R2, _R3, v95);
        RectangleArea::unionRects((RectangleArea *)&v120, (const RectangleArea *)&v136, (int)&v121);
        RectangleArea::operator=((int)&v136, (int)&v120);
        mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v125);
        v35 = v113;
        v38 = 954437177;
        v42 = &MobEffectInstance::NO_EFFECT;
        v96 = (void *)(v126 - 12);
        if ( (int *)(v126 - 12) != &dword_28898C0 )
          v101 = (unsigned int *)(v126 - 4);
              v102 = __ldrex(v101);
            while ( __strex(v102 - 1, v101) );
            v102 = (*v101)--;
          if ( v102 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v96);
      v39 = *(_QWORD *)v37;
      ++v40;
    while ( v40 < ((signed int)((*(_QWORD *)v37 >> 32) - v39) >> 2) * v38 );
  return RectangleArea::operator=((int)a6, (int)&v136);
}


void __fastcall HudMobEffectsRenderer::~HudMobEffectsRenderer(HudMobEffectsRenderer *this)
{
  HudMobEffectsRenderer::~HudMobEffectsRenderer(this);
}


int __fastcall HudMobEffectsRenderer::clone(HudMobEffectsRenderer *this)
{
  HudMobEffectsRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI21HudMobEffectsRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}
