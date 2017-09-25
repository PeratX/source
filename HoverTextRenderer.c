

signed int __fastcall HoverTextRenderer::update(HoverTextRenderer *this, ClientInstance *a2, UIControl *a3)
{
  UIControl *v3; // r6@1
  ClientInstance *v5; // r9@1
  int v6; // r4@1
  Json::Value *v7; // r4@1
  Json::Value *v8; // r4@3
  char *v9; // r1@4
  char *v10; // r0@6
  GuiData *v11; // r7@7
  int v12; // r5@8
  int v22; // r0@10
  Mouse *v27; // r0@12
  int v32; // r6@16
  unsigned int *v33; // r1@17
  unsigned int v34; // r0@19
  unsigned int *v35; // r4@23
  unsigned int v36; // r0@25
  unsigned int *v37; // r2@27
  signed int v38; // r1@29
  _DWORD *v39; // r7@34
  size_t v40; // r5@34
  char *v41; // r6@36
  void *v42; // r0@43
  signed int v43; // r4@45
  unsigned int *v45; // r2@48
  signed int v46; // r1@50
  unsigned int *v47; // r2@52
  signed int v48; // r1@54
  int v49; // [sp+4h] [bp-5Ch]@43
  UIControl *v50; // [sp+8h] [bp-58h]@10
  int v51; // [sp+Ch] [bp-54h]@16
  void *v52; // [sp+10h] [bp-50h]@1
  void *s2; // [sp+14h] [bp-4Ch]@4
  char v54; // [sp+18h] [bp-48h]@4

  v3 = a3;
  _R8 = this;
  v5 = a2;
  v6 = UIControl::getPropertyBag(a3);
  sub_119C854((int *)&v52, (int *)&Util::EMPTY_STRING);
  v7 = (Json::Value *)(v6 + 8);
  if ( Json::Value::isNull(v7)
    || Json::Value::isObject(v7) != 1
    || (v8 = (Json::Value *)Json::Value::operator[]((int)v7, "#hover_text"), Json::Value::isString(v8) != 1) )
  {
    s2 = v52;
    v9 = (char *)&unk_28898CC;
    v52 = &unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&s2, (int)&v54, (int)v8);
    v9 = (char *)v52;
  v10 = v9 - 12;
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
    }
    else
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (GuiData *)ClientInstance::getGuiData(v5);
  if ( ClientInstance::isARVRClient(v5) == 1 )
    v12 = *(_DWORD *)(ClientInstance::getGameRenderer(v5) + 220);
    _R4 = GuiData::getInvGuiScale(v11);
    _R0 = GuiData::getInvGuiScale(v11);
    __asm { VMOV            S2, R0 }
    _R0 = SHIWORD(v12);
    __asm
      VMOV            S0, R4
      VMOV            S4, R0
    _R0 = (signed __int16)v12;
      VMOV            S6, R0
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VMUL.F32        S2, S2, S4
      VMUL.F32        S0, S0, S6
      VMOV            R11, S2
      VMOV            R10, S0
  else if ( ClientInstance::useController(v5) == 1 )
    v22 = ClientInstance::getScreen(v5);
    UIScene::getFocusedControl((UIScene *)&v50, v22);
    if ( v50 )
      _R0 = UIControl::getPosition(v50);
      __asm { VLDR            S16, [R0] }
      _R0 = UIControl::getSize(v50);
      __asm { VLDR            S18, [R0] }
      __asm { VLDR            S20, [R0,#4] }
      __asm
      {
        VMOV.F32        S0, #0.5
        VMUL.F32        S2, S18, S0
        VADD.F32        S2, S2, S16
        VMOV            R10, S2
        VLDR            S2, [R0,#4]
        VMUL.F32        S0, S2, S0
        VADD.F32        S0, S0, S20
        VMOV            R11, S0
      }
      _R10 = 0LL;
    v32 = v51;
    if ( v51 )
      v33 = (unsigned int *)(v51 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
      else
        v34 = (*v33)--;
      if ( v34 == 1 )
        v35 = (unsigned int *)(v32 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
        if ( &pthread_create )
        {
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        }
        else
          v36 = (*v35)--;
        if ( v36 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
    v27 = (Mouse *)ClientInstance::useTouchscreen(v5);
    if ( v27 == (Mouse *)1 )
      _R10 = *(_QWORD *)UIControl::getPosition(v3);
      _R5 = Mouse::getX(v27);
      _R4 = (Mouse *)GuiData::getInvGuiScale(v11);
        VMOV            S0, R5
        VCVT.F32.S32    S16, S0
      _R5 = Mouse::getY(_R4);
      _R0 = GuiData::getInvGuiScale(v11);
        VMOV            S0, R4
        VMOV            S2, R5
        VMUL.F32        S0, S0, S16
        VCVT.F32.S32    S2, S2
        VMOV            R10, S0
        VMOV            S0, R0
        VMUL.F32        S0, S0, S2
  v39 = (_DWORD *)*((_DWORD *)_R8 + 2);
  v40 = *(v39 - 3);
  if ( v40 != *((_DWORD *)Util::EMPTY_STRING - 3) )
    goto LABEL_71;
  if ( memcmp(*((const void **)_R8 + 2), Util::EMPTY_STRING, *(v39 - 3)) )
  v41 = (char *)s2;
  if ( v40 != *((_DWORD *)s2 - 3) )
  if ( memcmp(v39, s2, v40) )
  __asm
    VMOV            S0, R10
    VLDR            S2, [R8,#0x10]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    VMOV            S0, R11
    VLDR            S2, [R8,#0x14]
  if ( _ZF )
    v43 = 0;
LABEL_71:
    if ( v40 != *((_DWORD *)s2 - 3) || memcmp(v39, s2, v40) )
      ClientInstance::getUIProfanityContext(v5);
      UIProfanityContext::filterProfanityFromString();
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)_R8 + 3,
        &v49);
      v42 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v49 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v42);
      EntityInteraction::setInteractText((int *)_R8 + 2, (int *)&s2);
    *((_QWORD *)_R8 + 2) = _R10;
    HoverTextRenderer::_buildTextbox(_R8, v5);
    v41 = (char *)s2;
    v43 = 1;
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v41 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41 - 12);
  return v43;
}


HoverTextRenderer *__fastcall HoverTextRenderer::~HoverTextRenderer(HoverTextRenderer *this)
{
  HoverTextRenderer *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  unsigned int *v10; // r12@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26E0250;
  v2 = *((_DWORD *)this + 13);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 13) = 0;
  mce::MaterialPtr::~MaterialPtr((HoverTextRenderer *)((char *)v1 + 40));
  v3 = *((_DWORD *)v1 + 3);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = *((_DWORD *)v1 + 2);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  return v1;
}


void __fastcall HoverTextRenderer::_buildTextbox(HoverTextRenderer *this, ClientInstance *a2)
{
  HoverTextRenderer::_buildTextbox(this, a2);
}


void __fastcall HoverTextRenderer::~HoverTextRenderer(HoverTextRenderer *this)
{
  HoverTextRenderer::~HoverTextRenderer(this);
}


void __fastcall HoverTextRenderer::~HoverTextRenderer(HoverTextRenderer *this)
{
  HoverTextRenderer *v1; // r0@1

  v1 = HoverTextRenderer::~HoverTextRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall HoverTextRenderer::render(HoverTextRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  ClientInstance *v7; // r10@1
  MinecraftUIRenderContext *v8; // r7@1
  int result; // r0@1
  int v11; // r0@4
  int v15; // r9@4
  int v16; // r5@4
  int v18; // r0@4
  float v21; // ST00_4@4
  int v23; // r0@4
  int v24; // ST00_4@4
  float v25; // [sp+0h] [bp-48h]@0

  _R4 = this;
  v7 = a3;
  v8 = a2;
  result = *(_DWORD *)(*((_DWORD *)this + 2) - 12);
  _ZF = result == 0;
  if ( result )
  {
    result = *((_DWORD *)_R4 + 13);
    _ZF = result == 0;
  }
  if ( !_ZF )
    v11 = MinecraftUIRenderContext::getScreenContext(a2);
    __asm { VLDR            S2, [R4,#0x18] }
    v15 = v11;
    __asm
    {
      VLDR            S6, [R4,#0x10]
      VLDR            S0, [R4,#0x14]
      VADD.F32        S16, S2, S6
      VLDR            S4, [R4,#0x1C]
    }
    v16 = *((_DWORD *)_R4 + 13);
      VADD.F32        S18, S4, S0
      VMOV            R6, S16
    v18 = MinecraftUIRenderContext::getScreenContext(v8);
    __asm { VSTR            S18, [SP,#0x48+var_48] }
    NinePatchLayer::draw(v16, v18, *(Tessellator **)(v15 + 40), _R6, v25);
      VLDR            S0, [R4,#0x20]
      VMOV            R2, S18
      VLDR            S2, [R4,#0x24]
      VADD.F32        S0, S0, S16
      VMOV            R3, S0
      VADD.F32        S0, S2, S18
      VSTR            S0, [SP,#0x48+var_48]
    RectangleArea::set(a6, *(float *)&_R6, _R2, _R3, v21);
      VMOV.F32        S0, #3.5
      VADD.F32        S2, S16, S0
      VADD.F32        S16, S18, S0
      VMOV            R5, S2
    v23 = ClientInstance::getFont(v7);
    __asm { VSTR            S16, [SP,#0x48+var_48] }
    result = Font::draw(*(float *)&v23, v15, (int)_R4 + 12, _R5, v24, COERCE_FLOAT(&Color::WHITE), 0.0, 0, -1, 0);
  return result;
}


void __fastcall HoverTextRenderer::_buildTextbox(HoverTextRenderer *this, ClientInstance *a2)
{
  ClientInstance *v2; // r5@1
  int v4; // r7@1
  GuiData *v5; // r8@1
  int v12; // r0@3
  mce::TextureGroup *v16; // r0@17
  const ResourceLocation *v17; // r0@17
  UITextureInfo *v18; // r0@18
  UITextureInfo *v19; // r5@18
  int v25; // r1@18
  int v26; // r0@18
  int v27; // r1@22
  int v28; // r0@22
  void *v29; // r0@26
  char *v30; // r0@27
  unsigned int *v31; // r2@29
  signed int v32; // r1@31
  unsigned int *v33; // r2@33
  signed int v34; // r1@35
  int v35; // [sp+0h] [bp-C8h]@0
  int v36; // [sp+4h] [bp-C4h]@0
  int v37; // [sp+8h] [bp-C0h]@0
  int v38; // [sp+Ch] [bp-BCh]@22
  int v39; // [sp+10h] [bp-B8h]@22
  signed int v40; // [sp+14h] [bp-B4h]@22
  signed int v41; // [sp+18h] [bp-B0h]@22
  int v42; // [sp+1Ch] [bp-ACh]@22
  int v43; // [sp+20h] [bp-A8h]@18
  int v44; // [sp+24h] [bp-A4h]@18
  int v45; // [sp+30h] [bp-98h]@18
  char v46; // [sp+34h] [bp-94h]@17
  char v47; // [sp+48h] [bp-80h]@17
  int v48; // [sp+4Ch] [bp-7Ch]@26
  char *v49; // [sp+60h] [bp-68h]@17
  char *v50; // [sp+64h] [bp-64h]@17
  int v51; // [sp+68h] [bp-60h]@17

  v2 = a2;
  _R4 = this;
  v4 = ClientInstance::getFont(a2);
  v5 = (GuiData *)ClientInstance::getGuiData(v2);
  _R0 = Font::getLineLength(v4, (int *)_R4 + 3, 1065353216, 0);
  __asm
  {
    VMOV            S0, R0
    VMOV.F32        S18, #7.0
    VCVT.F32.S32    S16, S0
  }
  _R0 = Font::getTextHeight(v4, (int *)_R4 + 3, 1065353216);
    VADD.F32        S16, S16, S18
    VCVT.F32.S32    S0, S0
    VADD.F32        S18, S0, S18
  if ( ClientInstance::useController(v2) || ClientInstance::useTouchscreen(v2) == 1 )
    *((_DWORD *)_R4 + 6) = HoverTextRenderer::GAMEPAD_OFFSET;
    v12 = dword_27D8918;
  else
    *((_DWORD *)_R4 + 6) = HoverTextRenderer::DEFAULT_OFFSET;
    v12 = dword_27D8910;
  *((_DWORD *)_R4 + 7) = v12;
  _R6 = (int)_R4 + 28;
  ClientInstance::useController(v2);
    VLDR            S0, =60.0
    VLDR            S20, =0.0
  if ( !_ZF )
    __asm { VMOVNE.F32      S20, S0 }
  _R0 = GuiData::getScreenSizeData(v5);
    VLDR            S0, [R4,#0x10]
    VLDR            S2, [R4,#0x14]
    VLDR            S4, [R0,#0xC]
    VADD.F32        S30, S0, S16
    VLDR            S26, [R0,#8]
    VLDR            S22, [R4,#0x18]
    VADD.F32        S28, S2, S18
    VLDR            S24, [R4,#0x1C]
    VSUB.F32        S20, S20, S4
  _R0 = GuiData::getInvGuiScale(v5);
    VADD.F32        S2, S28, S24
    VMUL.F32        S4, S0, S20
    VMUL.F32        S6, S0, S26
    VADD.F32        S8, S30, S22
    VADD.F32        S0, S2, S4
    VSUB.F32        S2, S8, S6
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, #0.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDRGT          S4, [R6]
      VSUBGT.F32      S0, S4, S0
      VSTRGT          S0, [R6]
    }
    VLDR            S0, [R4,#0x18]
      VADDGT.F32      S0, S16, S0
      VNEGGT.F32      S0, S0
      VSTRGT          S0, [R4,#0x18]
    VLDR            S2, [R4,#0x10]
    VADD.F32        S0, S0, S2
  if ( _NF ^ _VF )
      VMOV.F32        S0, #-0.5
      VNEG.F32        S2, S18
      VMUL.F32        S0, S16, S0
      VSTR            S0, [R4,#0x18]
      VSTR            S2, [R4,#0x1C]
    VLDR            S0, [R4,#0x20]
    VCMPE.F32       S16, S0
    goto LABEL_47;
    VLDR            S0, [R4,#0x24]
    VCMPE.F32       S18, S0
LABEL_47:
    sub_119C884((void **)&v49, "textures/ui/purpleBorder");
    v50 = v49;
    v49 = (char *)&unk_28898CC;
    v51 = 0;
    v16 = (mce::TextureGroup *)ClientInstance::getTextures(v2);
    NinePatchFactory::NinePatchFactory((NinePatchFactory *)&v47, v16, (const ResourceLocation *)&v50);
    v17 = (const ResourceLocation *)ClientInstance::getUIRepository(v2);
    UIRepository::getUITextureInfo((UIRepository *)&v46, v17, (int)&v50, 0);
    if ( UITextureInfoPtr::operator bool((int)&v46) == 1 )
      v18 = (UITextureInfo *)UITextureInfoPtr::getUITextureInfo((UITextureInfoPtr *)&v46);
      v19 = v18;
      _R0 = UITextureInfo::getBaseUVSize(v18);
      __asm { VLDR            S20, [R0] }
      _R0 = UITextureInfo::getBaseUVSize(v19);
      __asm { VLDR            S0, [R0,#4] }
      v43 = 0;
      v44 = 0;
      __asm
      {
        VCVTR.S32.F32   S2, S20
        VSTR            S2, [SP,#0xC8+var_A0]
        VCVTR.S32.F32   S0, S0
        VSTR            S0, [SP,#0xC8+var_9C]
      }
      _R0 = UITextureInfo::getNinesliceSize(v19);
        VLDR            S0, [R0,#4]
        VSTR            S0, [SP,#0xC8+var_C8]
        VMOV            R3, S2
        VSTR            S16, [SP,#0xC8+var_C4]
        VSTR            S18, [SP,#0xC8+var_C0]
      NinePatchFactory::createSymmetrical((int)&v45, COERCE_FLOAT(&v47), COERCE_FLOAT(&v43), _R3, v35, v36, v37);
      v25 = v45;
      v45 = 0;
      v26 = *((_DWORD *)_R4 + 13);
      *((_DWORD *)_R4 + 13) = v25;
      if ( v26 )
        (*(void (**)(void))(*(_DWORD *)v26 + 4))();
        if ( v45 )
          (*(void (**)(void))(*(_DWORD *)v45 + 4))();
    else
      v38 = 0;
      v39 = 0;
      v40 = 16;
      v41 = 16;
      NinePatchFactory::createSymmetrical((int)&v42, COERCE_FLOAT(&v47), COERCE_FLOAT(&v38), 3, 3, v36, v37);
      v27 = v42;
      v42 = 0;
      v28 = *((_DWORD *)_R4 + 13);
      *((_DWORD *)_R4 + 13) = v27;
      if ( v28 )
        (*(void (**)(void))(*(_DWORD *)v28 + 4))();
        if ( v42 )
          (*(void (**)(void))(*(_DWORD *)v42 + 4))();
      VSTR            S16, [R4,#0x20]
      VSTR            S18, [R4,#0x24]
    UITextureInfoPtr::~UITextureInfoPtr((UITextureInfoPtr *)&v46);
    v29 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v48 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
      else
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
    v30 = v50 - 12;
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v50 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v30);
}


int __fastcall HoverTextRenderer::clone(HoverTextRenderer *this)
{
  HoverTextRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI17HoverTextRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


MinecraftUICustomRenderer *__fastcall HoverTextRenderer::HoverTextRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-24h]@1

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)v1 = &off_26E0250;
  *((_DWORD *)v1 + 2) = &unk_28898CC;
  *((_DWORD *)v1 + 3) = &unk_28898CC;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = HoverTextRenderer::DEFAULT_OFFSET;
  *((_DWORD *)v1 + 7) = dword_27D8910;
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  sub_119C884((void **)&v6, "ui_textured");
  mce::MaterialPtr::MaterialPtr(
    (MinecraftUICustomRenderer *)((char *)v1 + 40),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v6);
  v2 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  *((_DWORD *)v1 + 13) = 0;
  return v1;
}
