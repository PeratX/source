

int __fastcall InventoryItemRenderer::render(InventoryItemRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  InventoryItemRenderer *v6; // r4@1
  UIControl *v7; // r8@1
  ClientInstance *v8; // r6@1
  MinecraftUIRenderContext *v9; // r5@1
  int v10; // r7@1
  int v11; // r0@1
  GuiData *v12; // r10@3
  int v13; // r0@3
  int v20; // r5@4
  const char *v21; // r6@4
  Json::Value *v22; // r5@4
  signed int v23; // r0@4
  Json::Value *v24; // r5@6
  InventoryItemRenderer *v26; // r0@9
  int v29; // r0@11
  int v30; // r2@11
  int v32; // ST00_4@13
  int v33; // r6@14
  int v37; // r1@14
  int v38; // r5@15
  Json::Value *v39; // r5@17
  char *v40; // r1@18
  void *v41; // r5@20
  void *v42; // r0@20
  char *v43; // r0@25
  int v44; // r5@26
  Json::Value *v45; // r5@26
  Json::Value *v46; // r5@28
  char *v47; // r1@29
  char *v48; // r0@31
  char *v49; // r0@32
  char *v50; // r0@33
  int v51; // r0@34
  int v53; // ST00_4@34
  unsigned int *v55; // r2@43
  signed int v56; // r1@45
  unsigned int *v57; // r2@47
  signed int v58; // r1@49
  unsigned int *v59; // r2@51
  signed int v60; // r1@53
  unsigned int *v61; // r2@55
  unsigned int *v62; // r2@59
  signed int v63; // r1@61
  float v64; // [sp+0h] [bp-198h]@0
  float v65; // [sp+4h] [bp-194h]@0
  float v66; // [sp+8h] [bp-190h]@0
  float v67; // [sp+10h] [bp-188h]@0
  char v68; // [sp+1Ch] [bp-17Ch]@13
  char v69; // [sp+2Ch] [bp-16Ch]@13
  char v70; // [sp+3Ch] [bp-15Ch]@34
  char v71; // [sp+4Ch] [bp-14Ch]@34
  void *v72; // [sp+5Ch] [bp-13Ch]@21
  int v73; // [sp+64h] [bp-134h]@20
  char *v74; // [sp+6Ch] [bp-12Ch]@26
  char *v75; // [sp+70h] [bp-128h]@29
  char *v76; // [sp+78h] [bp-120h]@15
  char *v77; // [sp+7Ch] [bp-11Ch]@18
  char v78; // [sp+80h] [bp-118h]@4
  const char *v79; // [sp+84h] [bp-114h]@4
  char v80; // [sp+88h] [bp-110h]@3
  int v81; // [sp+90h] [bp-108h]@39
  void *v82; // [sp+ACh] [bp-ECh]@37
  void *ptr; // [sp+BCh] [bp-DCh]@35
  char v84; // [sp+D0h] [bp-C8h]@3
  char v85; // [sp+134h] [bp-64h]@1
  char v86; // [sp+144h] [bp-54h]@18
  char v87; // [sp+148h] [bp-50h]@29

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  RectangleArea::RectangleArea((RectangleArea *)&v85);
  v10 = MinecraftUIRenderContext::getScreenContext(v9);
  v11 = *((_DWORD *)v6 + 13);
  if ( v11 != -1 && Item::mItems[v11] )
  {
    v12 = *(GuiData **)(v10 + 24);
    v13 = ClientInstance::getMinecraftGame(v8);
    BaseEntityRenderContext::BaseEntityRenderContext((int)&v84, v10, v8, v13);
    ItemInstance::ItemInstance(
      (ItemInstance *)&v80,
      *(_QWORD *)((char *)v6 + 52),
      1,
      *(_QWORD *)((char *)v6 + 52) >> 32);
    _R11 = UIControl::getPosition(v7);
    _R0 = UIControl::getSize(v7);
    __asm { VLDR            S18, [R0] }
    if ( *((_BYTE *)v6 + 72) )
    {
      v20 = UIControl::getPropertyBag(v7);
      gsl::basic_string_span<char const,-1>::remove_z<27u>((int)&v78, (int)"#filtered_light_multiplier");
      v21 = v79;
      v22 = (Json::Value *)(v20 + 8);
      v23 = Json::Value::isNull(v22);
      __asm { VMOV.F32        S16, #0.25 }
      if ( !v23 && Json::Value::isObject(v22) == 1 )
      {
        v24 = (Json::Value *)Json::Value::operator[]((int)v22, v21);
        if ( Json::Value::isNumeric(v24) == 1 )
        {
          _R0 = Json::Value::asFloat(v24, 0.0);
          __asm { VMOV            S16, R0 }
        }
      }
    }
    else
      __asm { VMOV.F32        S16, #1.0 }
    v26 = (InventoryItemRenderer *)mce::ShaderConstants::setHUDOpacity(
                                     (mce::ShaderConstants *)(*(_DWORD *)(v10 + 32) + 588),
                                     *(mce::RenderContext **)(v10 + 12),
                                     *((float *)v6 + 1));
    __asm
      VLDR            S0, =0.0625
      VMUL.F32        S18, S18, S0
    if ( a5 )
      if ( (unsigned int)(a5 - 1) <= 1 )
        _R4 = GuiData::floorAlignToScreenPixel(v12, *(float *)_R11);
        _R5 = GuiData::floorAlignToScreenPixel(v12, *((float *)_R11 + 1));
        v29 = BaseEntityRenderContext::getItemRenderer((BaseEntityRenderContext *)&v84);
        __asm
          VMOV            S22, R4
          VMOV            S20, R5
          VSTR            S18, [SP,#0x198+var_188]
        v30 = 5;
          VSTR            S16, [SP,#0x198+var_190]
          VSTR            S20, [SP,#0x198+var_194]
          VSTR            S22, [SP,#0x198+var_198]
        if ( _ZF )
          v30 = 4;
        ItemRenderer::renderGuiItemInChunk(
          v29,
          (int)&v84,
          v30,
          (ItemInstance *)&v80,
          v64,
          v65,
          v66,
          1065353216,
          v67,
          0,
          1);
          VMOV.F32        S0, #1.0
          VADD.F32        S2, S22, S0
          VADD.F32        S0, S20, S0
          VMOV            R3, S2
          VSTR            S0, [SP,#0x198+var_198]
        RectangleArea::RectangleArea(COERCE_FLOAT(&v68), _R4, _R5, _R3, v32);
        RectangleArea::unionRects((RectangleArea *)&v69, (const RectangleArea *)&v85, (int)&v68);
        RectangleArea::operator=((int)&v85, (int)&v69);
      v33 = InventoryItemRenderer::_getRenderTypeFromItem(v26, (const ItemInstance *)&v80);
      __asm
        VLDR            S0, [R11]
        VMOV            R1, S0
      _R9 = GuiData::floorAlignToScreenPixel(v12, _R1);
      _R10 = GuiData::floorAlignToScreenPixel(v12, *((float *)_R11 + 1));
        VMOV            S22, R9
        VMOV            S20, R10
      v37 = *((_DWORD *)v6 + 13);
      if ( v37 == *(_WORD *)(Item::mBanner + 18) )
        v38 = UIControl::getPropertyBag(v7);
        sub_119C884((void **)&v76, (const char *)&unk_257BC67);
        if ( Json::Value::isNull((Json::Value *)(v38 + 8))
          || Json::Value::isObject((Json::Value *)(v38 + 8)) != 1
          || (v39 = (Json::Value *)Json::Value::operator[](v38 + 8, "#banner_patterns"), Json::Value::isString(v39) != 1) )
          v77 = v76;
          v40 = (char *)&unk_28898CC;
          v76 = (char *)&unk_28898CC;
        else
          jsonValConversion<std::string>::as((int *)&v77, (int)&v86, (int)v39);
          v40 = v76;
        v43 = v40 - 12;
        if ( (int *)(v40 - 12) != &dword_28898C0 )
          v55 = (unsigned int *)(v40 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v56 = __ldrex(v55);
            while ( __strex(v56 - 1, v55) );
          }
          else
            v56 = (*v55)--;
          if ( v56 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v43);
        v44 = UIControl::getPropertyBag(v7);
        sub_119C884((void **)&v74, (const char *)&unk_257BC67);
        v45 = (Json::Value *)(v44 + 8);
        if ( Json::Value::isNull(v45)
          || Json::Value::isObject(v45) != 1
          || (v46 = (Json::Value *)Json::Value::operator[]((int)v45, "#banner_colors"), Json::Value::isString(v46) != 1) )
          v75 = v74;
          v47 = (char *)&unk_28898CC;
          v74 = (char *)&unk_28898CC;
          jsonValConversion<std::string>::as((int *)&v75, (int)&v87, (int)v46);
          v47 = v74;
        v48 = v47 - 12;
        if ( (int *)(v47 - 12) != &dword_28898C0 )
          v57 = (unsigned int *)(v47 - 4);
              v58 = __ldrex(v57);
            while ( __strex(v58 - 1, v57) );
            v58 = (*v57)--;
          if ( v58 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v48);
        BannerBlockEntity::setPatternAndColors((int)&v80, *((_DWORD *)v6 + 15), (int *)&v77, (int *)&v75);
        v49 = v75 - 12;
        if ( (int *)(v75 - 12) != &dword_28898C0 )
          v59 = (unsigned int *)(v75 - 4);
              v60 = __ldrex(v59);
            while ( __strex(v60 - 1, v59) );
            v60 = (*v59)--;
          if ( v60 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v49);
        v37 = (int)v77;
        v50 = v77 - 12;
        if ( (int *)(v77 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v77 - 4);
              v37 = __ldrex(v61);
            while ( __strex(v37 - 1, v61) );
            v37 = (*v61)--;
          if ( v37 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v50);
      else if ( *((_DWORD *)v6 + 15) != -1 )
        v41 = operator new(0x1Cu);
        CompoundTag::CompoundTag((int)v41);
        sub_119C884((void **)&v73, "customColor");
        CompoundTag::putInt((int)v41, (const void **)&v73, *((_DWORD *)v6 + 15));
        v42 = (void *)(v73 - 12);
        if ( (int *)(v73 - 12) != &dword_28898C0 )
          v62 = (unsigned int *)(v73 - 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            v63 = (*v62)--;
          if ( v63 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v42);
        v72 = v41;
        ItemInstance::setUserData((int)&v80, (int *)&v72);
        if ( v72 )
          (*(void (**)(void))(*(_DWORD *)v72 + 4))();
        v72 = 0;
      ItemInstance::setPickupTime((int)&v80, v37, *((_QWORD *)v6 + 8));
      v51 = BaseEntityRenderContext::getItemRenderer((BaseEntityRenderContext *)&v84);
        VSTR            S18, [SP,#0x198+var_188]
        VSTR            S16, [SP,#0x198+var_190]
        VSTR            S20, [SP,#0x198+var_194]
        VSTR            S22, [SP,#0x198+var_198]
      ItemRenderer::renderGuiItemInChunk(
        v51,
        (int)&v84,
        v33,
        (ItemInstance *)&v80,
        v64,
        v65,
        v66,
        1065353216,
        v67,
        *((_DWORD *)v6 + 19),
        1);
        VMOV.F32        S0, #1.0
        VADD.F32        S2, S22, S0
        VADD.F32        S0, S20, S0
        VMOV            R3, S2
        VSTR            S0, [SP,#0x198+var_198]
      RectangleArea::RectangleArea(COERCE_FLOAT(&v70), _R9, _R10, _R3, v53);
      RectangleArea::unionRects((RectangleArea *)&v71, (const RectangleArea *)&v85, (int)&v70);
      RectangleArea::operator=((int)&v85, (int)&v71);
    if ( ptr )
      operator delete(ptr);
    if ( v82 )
      operator delete(v82);
    if ( v81 )
      (*(void (**)(void))(*(_DWORD *)v81 + 4))();
    BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v84);
  }
  return RectangleArea::operator=((int)a6, (int)&v85);
}


void __fastcall InventoryItemRenderer::~InventoryItemRenderer(InventoryItemRenderer *this)
{
  InventoryItemRenderer *v1; // r0@1

  v1 = InventoryItemRenderer::~InventoryItemRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


const char *__fastcall InventoryItemRenderer::getMaterialName(InventoryItemRenderer *this, int a2)
{
  const char *result; // r0@3

  if ( a2 == 2 )
  {
    result = "ui_item_unglint_stencil";
  }
  else if ( a2 )
    result = "ui_inventory_item_glint";
  else
    result = (const char *)*((_DWORD *)this + 24);
  return result;
}


signed int __fastcall InventoryItemRenderer::getBatchType(InventoryItemRenderer *this)
{
  int v1; // r1@1
  signed int result; // r0@6

  v1 = *((_DWORD *)this + 13);
  if ( v1 != *(_WORD *)(Item::mBanner + 18)
    && v1 != *(_BYTE *)(Block::mStandingBanner + 4)
    && v1 != *(_BYTE *)(Block::mWallBanner + 4)
    && v1 != *(_WORD *)(Item::mSkull + 18)
    && v1 != *(_BYTE *)(Block::mUndyedShulkerBox + 4) )
  {
    result = 0;
    if ( v1 != *(_BYTE *)(Block::mShulkerBox + 4) )
      result = 1;
  }
  else
  return result;
}


MinecraftUICustomRenderer *__fastcall InventoryItemRenderer::InventoryItemRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  EntityShaderManager::EntityShaderManager((_DWORD *)v1 + 2);
  *(_DWORD *)v1 = &off_26E04D0;
  *((_DWORD *)v1 + 2) = &off_26E0510;
  *((_DWORD *)v1 + 12) = CustomRenderComponent::getInvalidCustomId((CustomRenderComponent *)&off_26E0510);
  *((_DWORD *)v1 + 13) = -1;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 15) = -1;
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 17) = 2147483648;
  *((_BYTE *)v1 + 72) = 0;
  *((_DWORD *)v1 + 19) = 0;
  *((_BYTE *)v1 + 80) = 0;
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 23) = &unk_28898CC;
  *((_DWORD *)v1 + 24) = &unk_28898CC;
  TextureUVCoordinateSet::TextureUVCoordinateSet((MinecraftUICustomRenderer *)((char *)v1 + 100));
  return v1;
}


int __fastcall InventoryItemRenderer::update(InventoryItemRenderer *this, ClientInstance *a2, UIControl *a3)
{
  UIControl *v3; // r10@1
  ClientInstance *v5; // r9@1
  int v6; // r0@1
  Json::Value *v7; // r5@1
  CustomRenderComponent *v8; // r0@1
  ItemInstance *v9; // r5@2
  Json::Value *v10; // r5@4
  signed int v11; // r4@9
  int v12; // r1@9
  int v14; // r6@10
  int v15; // r1@10
  int v16; // r1@10
  unsigned int v17; // r0@10
  InventoryItemRenderer *v18; // r0@12
  Json::Value *v19; // r5@20
  int v20; // r7@22
  Json::Value *v21; // r5@22
  int v22; // r4@24
  int v23; // r6@26
  Json::Value *v24; // r6@26
  const char *v25; // r5@26
  Json::Value *v26; // r5@28
  signed int v27; // r9@29
  int v28; // r6@31
  Json::Value *v29; // r5@31
  Json::Value *v30; // r5@33
  int v31; // r1@33
  int v32; // r7@34
  int v33; // r10@34
  unsigned __int64 v34; // kr00_8@34
  int v35; // r1@36
  ItemInstance *v36; // r0@38
  int v37; // r1@38
  signed int v38; // r5@38
  int result; // r0@46
  int v40; // r9@54
  int v41; // r0@54
  int v42; // r3@54
  int v43; // r4@54
  int v44; // r5@54
  int v45; // r6@54
  int v46; // r7@54
  int v47; // r5@54
  Json::Value *v48; // r5@54
  Json::Value *v49; // r5@56
  char *v50; // r1@57
  char *v51; // r0@59
  int v52; // r5@60
  Json::Value *v53; // r5@60
  Json::Value *v54; // r5@62
  char *v55; // r1@63
  char *v56; // r0@65
  int v57; // r5@66
  char *v58; // r0@66
  char *v59; // r0@67
  void **v60; // r0@81
  int v65; // r0@88
  unsigned int *v66; // r2@89
  signed int v67; // r1@91
  unsigned int *v68; // r2@93
  signed int v69; // r1@95
  unsigned int *v70; // r2@97
  signed int v71; // r1@99
  unsigned int *v72; // r2@101
  signed int v73; // r1@103
  int v74; // r0@109
  int v75; // r8@111
  int v76; // r0@111
  int v77; // r3@111
  int v78; // r4@111
  int v79; // r5@111
  int v80; // r6@111
  int v81; // r7@111
  int v82; // r5@111
  int (__fastcall *v83)(int, int, _DWORD); // r6@112
  int v84; // r0@112
  char *v85; // r1@131
  _BYTE *v86; // r2@131
  char *v87; // r1@137
  _BYTE *v88; // r2@137
  signed int v89; // r1@147
  int v90; // r1@154
  int v91; // [sp+4h] [bp-FCh]@111
  int v92; // [sp+8h] [bp-F8h]@15
  UIControl *v93; // [sp+Ch] [bp-F4h]@12
  int v94; // [sp+10h] [bp-F0h]@19
  signed int v95; // [sp+14h] [bp-ECh]@12
  signed int v96; // [sp+14h] [bp-ECh]@22
  int v97; // [sp+18h] [bp-E8h]@11
  int v98; // [sp+1Ch] [bp-E4h]@10
  char v99; // [sp+20h] [bp-E0h]@38
  int v100; // [sp+28h] [bp-D8h]@42
  void *v101; // [sp+44h] [bp-BCh]@40
  void *ptr; // [sp+54h] [bp-ACh]@38
  char v103; // [sp+68h] [bp-98h]@26
  const char *v104; // [sp+6Ch] [bp-94h]@26
  char *v105; // [sp+74h] [bp-8Ch]@60
  char *v106; // [sp+78h] [bp-88h]@63
  char *v107; // [sp+80h] [bp-80h]@54
  char *v108; // [sp+84h] [bp-7Ch]@57
  int v109; // [sp+88h] [bp-78h]@12
  int v110; // [sp+90h] [bp-70h]@73
  void *v111; // [sp+ACh] [bp-54h]@71
  void *v112; // [sp+BCh] [bp-44h]@69
  char v113; // [sp+D0h] [bp-30h]@57
  char v114; // [sp+D4h] [bp-2Ch]@63

  v3 = a3;
  _R11 = this;
  v5 = a2;
  v6 = UIControl::getPropertyBag(a3);
  v7 = (Json::Value *)(v6 + 8);
  v8 = (CustomRenderComponent *)Json::Value::isNull((Json::Value *)(v6 + 8));
  if ( v8 )
  {
    v9 = (ItemInstance *)-1;
  }
  else
    v8 = (CustomRenderComponent *)Json::Value::isObject(v7);
    if ( v8 == (CustomRenderComponent *)1 )
    {
      v10 = (Json::Value *)Json::Value::operator[]((int)v7, "#item_id_aux");
      if ( Json::Value::isInt(v10)
        || (v8 = (CustomRenderComponent *)Json::Value::isUInt(v10), v8 == (CustomRenderComponent *)1) )
      {
        v8 = (CustomRenderComponent *)Json::Value::asInt(v10, 0);
        v9 = v8;
      }
      else
        v9 = (ItemInstance *)-1;
    }
    else
      v9 = (ItemInstance *)-1;
  v11 = CustomRenderComponent::getInvalidCustomId(v8);
  _R8 = UIControl::getPosition(v3);
  if ( v9 == (ItemInstance *)-1 )
    v14 = -1;
    v97 = 0;
    v98 = 0;
    goto LABEL_19;
  v14 = ItemInstance::retrieveIDFromIDAux(v9, v12);
  v98 = ItemInstance::retrieveAuxValFromIDAux(v9, v15);
  v17 = ItemInstance::retrieveEnchantFromIDAux(v9, v16);
  if ( (unsigned int)(v14 - 1) > 0x1FE )
    v97 = v17;
  v97 = v17;
  if ( !Item::mItems[v14] )
LABEL_19:
    v94 = 0;
    sub_119CAD8((void **)_R11 + 23, (char *)&unk_257BC67, 0);
    sub_119CAD8((void **)_R11 + 24, (char *)&unk_257BC67, 0);
    goto LABEL_20;
  v93 = _R8;
  v18 = ItemInstance::ItemInstance((ItemInstance *)&v109, v14, 1, v98);
  v95 = InventoryItemRenderer::_getRenderTypeFromItem(v18, v18);
  if ( v14 != *(_WORD *)(Item::mBanner + 18)
    && v14 != *(_BYTE *)(Block::mStandingBanner + 4)
    && v14 != *(_BYTE *)(Block::mWallBanner + 4) )
    if ( v14 != *(_WORD *)(Item::mSkull + 18) )
      v92 = v14;
      if ( v97 )
        v65 = 1;
        v65 = ItemInstance::isGlint((ItemInstance *)&v109);
      v97 = v65;
      _ZF = v65 == 0;
      v74 = v95;
      if ( !_ZF )
        v74 = v95 + 1;
      v91 = v74;
      v75 = ItemInstance::getIcon((ItemInstance *)&v109, 0, 0);
      v76 = (int)_R11 + 100;
      v77 = *(_DWORD *)(v75 + 4);
      v78 = *(_DWORD *)(v75 + 8);
      v79 = *(_DWORD *)(v75 + 12);
      v80 = *(_DWORD *)(v75 + 16);
      v81 = *(_DWORD *)(v75 + 20);
      *(_DWORD *)v76 = *(_DWORD *)v75;
      *(_DWORD *)(v76 + 4) = v77;
      *(_DWORD *)(v76 + 8) = v78;
      *(_DWORD *)(v76 + 12) = v79;
      *(_DWORD *)(v76 + 16) = v80;
      *(_DWORD *)(v76 + 20) = v81;
      EntityInteraction::setInteractText((int *)_R11 + 31, (int *)(v75 + 24));
      *((_DWORD *)_R11 + 32) = *(_DWORD *)(v75 + 28);
      v82 = v109;
      if ( *(_BYTE *)(v109 + 16) )
        v83 = *(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v109 + 240);
        v84 = ClientInstance::getLocalPlayer(v5);
        v94 = v83(v82, v84, 0);
        if ( v109 == Item::mCompass )
        {
          sub_119CAD8((void **)_R11 + 23, "textures/items/compass_atlas", (_BYTE *)0x1C);
        }
        else if ( v109 == Item::mClock )
          sub_119CAD8((void **)_R11 + 23, "textures/items/watch_atlas", (_BYTE *)0x1A);
        v85 = "atlas.items";
        v86 = (_BYTE *)13;
        if ( v95 == 2 )
          v86 = (_BYTE *)11;
        else
          v85 = "atlas.terrain";
        sub_119CAD8((void **)_R11 + 23, v85, v86);
        v94 = 0;
      v87 = "ui_item_glint_stencil";
      v88 = (_BYTE *)7;
        v88 = (_BYTE *)21;
        v87 = "ui_item";
      sub_119CAD8((void **)_R11 + 24, v87, v88);
      v11 = v91 + 1;
      goto LABEL_69;
    v60 = (void **)((char *)_R11 + 96);
    v92 = v14;
    if ( v9 == (ItemInstance *)5 )
      sub_119CAD8(v60, "ui_dragon_head", (_BYTE *)0xE);
      sub_119CAD8(v60, "ui_mob_head", (_BYTE *)0xB);
    v11 = v98 + v95 + 1;
    if ( v97 )
      v97 = 1;
      v97 = ItemInstance::isGlint((ItemInstance *)&v109);
    v40 = ItemInstance::getIcon((ItemInstance *)&v109, 0, 0);
    v41 = (int)_R11 + 100;
    v42 = *(_DWORD *)(v40 + 4);
    v43 = *(_DWORD *)(v40 + 8);
    v44 = *(_DWORD *)(v40 + 12);
    v45 = *(_DWORD *)(v40 + 16);
    v46 = *(_DWORD *)(v40 + 20);
    *(_DWORD *)v41 = *(_DWORD *)v40;
    *(_DWORD *)(v41 + 4) = v42;
    *(_DWORD *)(v41 + 8) = v43;
    *(_DWORD *)(v41 + 12) = v44;
    *(_DWORD *)(v41 + 16) = v45;
    *(_DWORD *)(v41 + 20) = v46;
    EntityInteraction::setInteractText((int *)_R11 + 31, (int *)(v40 + 24));
    *((_DWORD *)_R11 + 32) = *(_DWORD *)(v40 + 28);
    sub_119CAD8((void **)_R11 + 23, "textures/entity/banner/base", (_BYTE *)0x1B);
    sub_119CAD8((void **)_R11 + 24, "ui_banner", (_BYTE *)9);
    v47 = UIControl::getPropertyBag(v3);
    sub_119C884((void **)&v107, (const char *)&unk_257BC67);
    v48 = (Json::Value *)(v47 + 8);
    if ( Json::Value::isNull(v48)
      || Json::Value::isObject(v48) != 1
      || (v49 = (Json::Value *)Json::Value::operator[]((int)v48, "#banner_patterns"), Json::Value::isString(v49) != 1) )
      v108 = v107;
      v50 = (char *)&unk_28898CC;
      v107 = (char *)&unk_28898CC;
      jsonValConversion<std::string>::as((int *)&v108, (int)&v113, (int)v49);
      v50 = v107;
    v51 = v50 - 12;
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v50 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v51);
    v52 = UIControl::getPropertyBag(v3);
    sub_119C884((void **)&v105, (const char *)&unk_257BC67);
    v53 = (Json::Value *)(v52 + 8);
    if ( Json::Value::isNull(v53)
      || Json::Value::isObject(v53) != 1
      || (v54 = (Json::Value *)Json::Value::operator[]((int)v53, "#banner_colors"), Json::Value::isString(v54) != 1) )
      v106 = v105;
      v55 = (char *)&unk_28898CC;
      v105 = (char *)&unk_28898CC;
      jsonValConversion<std::string>::as((int *)&v106, (int)&v114, (int)v54);
      v55 = v105;
    v56 = v55 - 12;
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)(v55 - 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v56);
    sub_119C8A4((const void **)&v108, (const void **)&v106);
    v57 = v95 + v98 + Util::hashCode(&v108);
    v58 = v106 - 12;
    if ( (int *)(v106 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v106 - 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v58);
    v11 = v57 + 1;
    v59 = v108 - 12;
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v72 = (unsigned int *)(v108 - 4);
          v73 = __ldrex(v72);
        while ( __strex(v73 - 1, v72) );
        v73 = (*v72)--;
      if ( v73 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v59);
  v94 = 0;
LABEL_69:
  if ( v112 )
    operator delete(v112);
  _R8 = v93;
  v14 = v92;
  if ( v111 )
    operator delete(v111);
  if ( v110 )
    (*(void (**)(void))(*(_DWORD *)v110 + 4))();
LABEL_20:
  v19 = (Json::Value *)(UIControl::getPropertyBag(v3) + 8);
  if ( Json::Value::isNull(v19) || Json::Value::isObject(v19) != 1 )
    v96 = v11;
    v20 = v14;
    v22 = -1;
    v21 = (Json::Value *)Json::Value::operator[]((int)v19, "#item_custom_color");
    if ( Json::Value::isInt(v21) || Json::Value::isUInt(v21) == 1 )
      v22 = Json::Value::asInt(v21, 0);
      v22 = -1;
  v23 = UIControl::getPropertyBag(v3);
  gsl::basic_string_span<char const,-1>::remove_z<25u>((int)&v103, (int)"#disabled_filter_visible");
  v24 = (Json::Value *)(v23 + 8);
  v25 = v104;
  if ( Json::Value::isNull(v24)
    || Json::Value::isObject(v24) != 1
    || (v26 = (Json::Value *)Json::Value::operator[]((int)v24, v25), Json::Value::isBool(v26) != 1) )
    v27 = 0;
    v27 = Json::Value::asBool(v26, 0);
  v28 = v20;
  v29 = (Json::Value *)(UIControl::getPropertyBag(v3) + 8);
  if ( Json::Value::isNull(v29)
    || Json::Value::isObject(v29) != 1
    || (v30 = (Json::Value *)Json::Value::operator[]((int)v29, "#item_pickup_time"), Json::Value::isUInt(v30) != 1) )
    v32 = 0;
    v33 = 0;
    v34 = Json::Value::asUInt64(v30, v31, 0LL);
    v33 = HIDWORD(v34);
    v32 = v34;
  v35 = *((_DWORD *)_R11 + 13);
  if ( v35 != -1 && Item::mItems[v35] )
    v36 = ItemInstance::ItemInstance((ItemInstance *)&v99, v35, 1, *((_DWORD *)_R11 + 14));
    ItemInstance::setPickupTime((int)v36, v37, *((_QWORD *)_R11 + 8));
    v38 = ItemInstance::getIsValidPickupTime((ItemInstance *)&v99);
    if ( ptr )
      operator delete(ptr);
    if ( v101 )
      operator delete(v101);
    if ( v100 )
      (*(void (**)(void))(*(_DWORD *)v100 + 4))();
    v38 = 0;
  if ( v28 == *(_WORD *)(Item::mBanner + 18) )
    result = 1;
  else if ( v28 == *(_BYTE *)(Block::mStandingBanner + 4) )
  else if ( v28 == *(_BYTE *)(Block::mWallBanner + 4) )
  else if ( v28 == *(_WORD *)(Item::mSkull + 18) )
  else if ( v28 == *(_BYTE *)(Block::mUndyedShulkerBox + 4) )
  else if ( v28 == *(_BYTE *)(Block::mShulkerBox + 4) )
  else if ( v96 == *((_DWORD *)_R11 + 12) )
    if ( v28 == *((_DWORD *)_R11 + 13) )
      __asm
        VLDR            S0, [R11,#0x54]
        VLDR            S2, [R8]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _ZF )
        __asm
          VLDR            S0, [R11,#0x58]
          VLDR            S2, [R8,#4]
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          if ( v22 == *((_DWORD *)_R11 + 15) )
          {
            if ( v98 == *((_DWORD *)_R11 + 14) )
            {
              if ( v97 == *((_BYTE *)_R11 + 80) )
              {
                if ( v94 == *((_DWORD *)_R11 + 19) )
                {
                  v89 = 0;
                  if ( v27 != *((_BYTE *)_R11 + 72) )
                    v89 = 1;
                  result = v38 | v89;
                }
                else
                  result = 1;
              }
              else
                result = 1;
            }
            else
              result = 1;
          }
          else
            result = 1;
          result = 1;
        result = 1;
      result = 1;
  *((_DWORD *)_R11 + 12) = v96;
  *((_DWORD *)_R11 + 13) = v28;
  *((_DWORD *)_R11 + 14) = v98;
  *((_DWORD *)_R11 + 21) = *(_DWORD *)_R8;
  *((_DWORD *)_R11 + 22) = *((_DWORD *)_R8 + 1);
  v90 = (int)_R11 + 60;
  *(_DWORD *)v90 = v22;
  *(_DWORD *)(v90 + 4) = v32;
  *(_DWORD *)(v90 + 8) = v33;
  *((_BYTE *)_R11 + 80) = v97;
  *((_DWORD *)_R11 + 19) = v94;
  *((_BYTE *)_R11 + 72) = v27;
  return result;
}


signed int __fastcall InventoryItemRenderer::getResourceLocation(InventoryItemRenderer *this, int a2, int a3, int a4)
{
  InventoryItemRenderer *v4; // r4@1
  signed int result; // r0@3
  void *v6; // [sp+8h] [bp-20h]@7
  void *v7; // [sp+10h] [bp-18h]@3
  void *v8; // [sp+14h] [bp-14h]@6

  v4 = this;
  if ( (a4 | 2) == 2 )
  {
    if ( a3 )
    {
      sub_119C884(&v7, "textures/entity/banner/banner");
      *(_DWORD *)v4 = v7;
      v7 = &unk_28898CC;
      result = 0;
    }
    else
      sub_119C854((int *)&v8, (int *)(a2 + 92));
      *(_DWORD *)v4 = v8;
      v8 = &unk_28898CC;
      result = 1;
  }
  else if ( a3 )
    sub_119C854((int *)this, (int *)&EntityShaderManager::GLINT_TEXTURE_LOCATION);
    result = unk_27D2348;
  else
    sub_119C884(&v6, "atlas.items");
    *(_DWORD *)v4 = v6;
    v6 = &unk_28898CC;
    result = 0;
  *((_DWORD *)v4 + 1) = result;
  return result;
}


int __fastcall InventoryItemRenderer::getRequiresPreRenderSetup(InventoryItemRenderer *this, int a2)
{
  if ( a2 != 1 )
    a2 = 0;
  return a2;
}


InventoryItemRenderer *__fastcall InventoryItemRenderer::~InventoryItemRenderer(InventoryItemRenderer *this)
{
  InventoryItemRenderer *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v9; // r12@5
  signed int v10; // r1@7
  unsigned int *v11; // r12@9
  signed int v12; // r1@11
  unsigned int *v13; // r12@13
  signed int v14; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_26E04D0;
  *((_DWORD *)this + 2) = &off_26E0510;
  v2 = *((_DWORD *)this + 31);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 24);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 23);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  *((_DWORD *)v1 + 2) = &off_26DCC64;
  mce::MaterialPtr::~MaterialPtr((InventoryItemRenderer *)((char *)v1 + 36));
  mce::MaterialPtr::~MaterialPtr((InventoryItemRenderer *)((char *)v1 + 24));
  mce::MaterialPtr::~MaterialPtr((InventoryItemRenderer *)((char *)v1 + 12));
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  return v1;
}


void __fastcall InventoryItemRenderer::~InventoryItemRenderer(InventoryItemRenderer *this)
{
  InventoryItemRenderer::~InventoryItemRenderer(this);
}


int __fastcall InventoryItemRenderer::clone(InventoryItemRenderer *this)
{
  InventoryItemRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI21InventoryItemRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


signed int __fastcall InventoryItemRenderer::_getRenderTypeFromItem(InventoryItemRenderer *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  int v3; // r0@1
  int v4; // r5@2
  signed int result; // r0@3
  int v6; // r0@8

  v2 = a2;
  v3 = *((_DWORD *)a2 + 1);
  if ( v3 )
  {
    v4 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(v3 + 4)]);
    if ( BlockTessellator::canRender(v4) )
      return 0;
    if ( BlockTessellator::canRender(v4) != 1 )
      return 1;
  }
  else
    (*(void (**)(void))(**(_DWORD **)a2 + 60))();
  v6 = *(_DWORD *)v2;
  if ( !*(_DWORD *)v2 )
    return 2;
  if ( v6 == Item::mSkull )
    if ( (unsigned __int16)ItemInstance::getAuxValue(v2) == 5 )
      return 8;
    v6 = *(_DWORD *)v2;
    if ( !*(_DWORD *)v2 )
      return 2;
    result = 7;
    if ( v6 != Item::mBanner )
    result = 6;
  return result;
}


signed int __fastcall InventoryItemRenderer::preRenderSetup(InventoryItemRenderer *this, MinecraftUIRenderContext *a2)
{
  InventoryItemRenderer *v2; // r4@1
  int v3; // r1@1

  v2 = this;
  v3 = MinecraftUIRenderContext::getScreenContext(a2);
  return j_j_j__ZN19EntityShaderManager26_setupFoilShaderParametersER13ScreenContextRK22TextureUVCoordinateSet(
           (int)v2 + 8,
           v3,
           (int)v2 + 100);
}


signed int __fastcall InventoryItemRenderer::getNumRenderPasses(InventoryItemRenderer *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 80);
  result = 1;
  if ( v1 )
    result = 3;
  return result;
}
