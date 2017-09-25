

BaseEntityRenderer *__fastcall ItemRenderer::~ItemRenderer(ItemRenderer *this)
{
  ItemRenderer *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  mce::TexturePtr *v4; // r0@5
  mce::TexturePtr *v5; // r5@5
  BlockTessellator *v6; // r0@10
  BlockTessellator *v7; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26DB8F4;
  v2 = *((_DWORD *)this + 73);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 73) = 0;
  v3 = *((_DWORD *)v1 + 72);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 72) = 0;
  mce::MaterialPtr::~MaterialPtr((ItemRenderer *)((char *)v1 + 276));
  mce::MaterialPtr::~MaterialPtr((ItemRenderer *)((char *)v1 + 264));
  mce::MaterialPtr::~MaterialPtr((ItemRenderer *)((char *)v1 + 252));
  mce::MaterialPtr::~MaterialPtr((ItemRenderer *)((char *)v1 + 240));
  mce::MaterialPtr::~MaterialPtr((ItemRenderer *)((char *)v1 + 228));
  mce::MaterialPtr::~MaterialPtr((ItemRenderer *)((char *)v1 + 216));
  v5 = (mce::TexturePtr *)(*(_QWORD *)((char *)v1 + 204) >> 32);
  v4 = (mce::TexturePtr *)*(_QWORD *)((char *)v1 + 204);
  if ( v4 != v5 )
  {
    do
      v4 = (mce::TexturePtr *)((char *)mce::TexturePtr::~TexturePtr(v4) + 24);
    while ( v5 != v4 );
    v4 = (mce::TexturePtr *)*((_DWORD *)v1 + 51);
  }
  if ( v4 )
    operator delete((void *)v4);
  v6 = (BlockTessellator *)*((_DWORD *)v1 + 34);
  if ( v6 )
    v7 = BlockTessellator::~BlockTessellator(v6);
    operator delete((void *)v7);
  *((_DWORD *)v1 + 34) = 0;
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


int __fastcall ItemRenderer::iconBlit(int a1, BaseEntityRenderContext *this, int a3, int a4, float a5, int a6, float a7, float a8, float a9, float a10, int a11, float a12, float a13, int a14)
{
  BaseEntityRenderContext *v15; // r11@1
  int v16; // r9@1
  Tessellator *v22; // r5@1
  int v30; // ST00_4@16
  float v31; // ST04_4@16
  int v33; // ST00_4@16
  float v34; // ST04_4@16
  int v35; // ST00_4@16
  float v36; // ST04_4@16
  int result; // r0@16
  int v38; // r6@16
  _BOOL4 v39; // r4@19
  int v40; // r0@19
  int v41; // r2@19
  int v42; // r1@19
  char *v43; // r0@19
  _BOOL4 v44; // r0@23
  int v45; // r2@23
  int v46; // [sp+0h] [bp-88h]@0
  float v47; // [sp+4h] [bp-84h]@0
  int v48; // [sp+Ch] [bp-7Ch]@1
  float v49; // [sp+10h] [bp-78h]@14

  _R10 = a6;
  v15 = this;
  v16 = a1;
  _R6 = a4;
  v48 = a3;
  __asm
  {
    VLDR            S16, [R10,#4]
    VLDR            S18, [R10,#8]
    VLDR            S20, [R10,#0xC]
    VLDR            S22, [R10,#0x10]
  }
  v22 = (Tessellator *)BaseEntityRenderContext::getTessellator(this);
  Tessellator::begin(v22, 4, 0);
    VMOV            S28, R6
    VLDR            S30, [SP,#0x88+arg_20]
    VLDR            S19, [SP,#0x88+arg_1C]
    VLDR            S0, [SP,#0x88+arg_14]
    VLDR            S2, [SP,#0x88+arg_10]
    VLDR            S17, [SP,#0x88+arg_C]
    VLDR            S26, [SP,#0x88+arg_8]
    VLDR            S24, [SP,#0x88+arg_0]
  if ( _ZF )
    __asm
    {
      VMOV            R1, S2
      VSTR            S0, [SP,#0x88+var_88]
    }
    Tessellator::color(v22, _R1, _R1, _R1, *(float *)&v46);
  else
    _R1 = ((unsigned int)a11 >> 16) & 0xFF;
    _R2 = (unsigned __int16)a11 >> 8;
    __asm { VLDR            S10, =0.0039216 }
    _R0 = (unsigned __int8)a11;
      VMOV            S4, R1
      VMOV            S6, R2
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VMOV            S8, R0
      VCVT.F32.S32    S8, S8
      VMUL.F32        S4, S4, S10
      VMUL.F32        S6, S6, S10
      VMUL.F32        S8, S8, S10
      VMOV.F32        S10, #1.0
      VMUL.F32        S4, S4, S2
      VMUL.F32        S6, S6, S2
      VMUL.F32        S2, S8, S2
      VLDR            S8, =0.0
      VCMPE.F32       S4, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S6, #0.0
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S4, S8 }
      VCMPE.F32       S2, #0.0
      __asm { VMOVLT.F32      S6, S8 }
      VCMPE.F32       S4, S10
      __asm { VMOVLT.F32      S2, S8 }
      VCMPE.F32       S6, S10
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S4, S10 }
      VCMPE.F32       S2, S10
      __asm { VMOVGT.F32      S6, S10 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S2, S10 }
      VSTR            S4, [SP,#0x88+var_78]
      VSTR            S6, [SP,#0x88+var_74]
      VSTR            S2, [SP,#0x88+var_70]
      VSTR            S0, [SP,#0x88+var_6C]
    Tessellator::color(v22, (const Color *)&v49);
    VMOV.F32        S0, #-1.0
    VMOV.F32        S2, #0.5
    VSTR            S16, [SP,#0x88+var_88]
    VSTR            S22, [SP,#0x88+var_84]
    VADD.F32        S4, S19, S0
    VMUL.F32        S6, S26, S2
    VADD.F32        S0, S30, S0
    VMUL.F32        S2, S17, S2
    VMUL.F32        S30, S6, S4
    VADD.F32        S4, S17, S24
    VMUL.F32        S17, S2, S0
    VSUB.F32        S0, S28, S30
    VADD.F32        S2, S4, S17
    VMOV            R6, S0
    VMOV            R4, S2
  Tessellator::vertexUV(v22, _R6, _R4, 0.0, *(float *)&v46, v47);
    VADD.F32        S0, S26, S28
    VSTR            S20, [SP,#0x88+var_88]
    VADD.F32        S0, S0, S30
    VMOV            R7, S0
  Tessellator::vertexUV(v22, _R7, _R4, 0.0, *(float *)&v30, v31);
    VSUB.F32        S0, S24, S17
    VSTR            S18, [SP,#0x88+var_84]
    VMOV            R4, S0
  Tessellator::vertexUV(v22, _R7, _R4, 0.0, *(float *)&v33, v34);
  Tessellator::vertexUV(v22, _R6, _R4, 0.0, *(float *)&v35, v36);
  result = BaseEntityRenderContext::getScreenContext(v15);
  v38 = result;
  if ( a14 == 2 )
    v41 = v16 + 240;
    v43 = (char *)v22;
    v42 = v38;
    return Tessellator::draw(v43, v42, v41);
  if ( a14 != 1 )
    if ( a14 )
      return result;
    v39 = mce::TexturePtr::operator bool(v48);
    v40 = BaseEntityRenderContext::getScreenContext(v15);
    v41 = v16 + 228;
    v42 = v40;
    if ( v39 == 1 )
      return Tessellator::draw((char *)v22, v42, v41, v48);
  EntityShaderManager::_setupFoilShaderParameters(v16, result, a6);
  v44 = mce::TexturePtr::operator bool(v48);
  v45 = v16 + 252;
  if ( v44 == 1 )
    result = Tessellator::draw((char *)v22, v38, v45, v48, v16 + 108);
    result = Tessellator::draw((char *)v22, v38, v45, v16 + 108);
  return result;
}


signed int __fastcall ItemRenderer::getAtlasPos(ItemRenderer *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  signed int v3; // r1@1
  signed int result; // r0@1
  char v5; // r0@9
  _WORD *v6; // r1@9

  v2 = a2;
  v3 = ItemInstance::getId(a2);
  result = -1;
  if ( v3 >= 0 && (unsigned int)v3 <= 0x196 )
  {
    result = word_262CAF8[v3];
    if ( result == -2 )
    {
      result = -1;
      if ( v3 > 97 )
      {
        if ( v3 > 324 )
        {
          if ( v3 == 325 )
          {
            v5 = ItemInstance::getAuxValue(v2);
            v6 = &unk_262CF46;
          }
          else if ( v3 == 351 )
            v6 = &unk_262CF66;
          else
            if ( v3 != 383 )
              return result;
            v6 = &unk_262CF86;
        }
        else if ( v3 == 98 )
          v5 = ItemInstance::getAuxValue(v2);
          v6 = &unk_262CEE6;
        else if ( v3 == 155 )
          v6 = &unk_262CF06;
        else
          if ( v3 != 263 )
            return result;
          v6 = &unk_262CF26;
      }
      else if ( v3 > 23 )
        if ( v3 == 24 )
          v6 = &unk_262CE86;
        else if ( v3 == 35 )
          v6 = &unk_262CEA6;
          if ( v3 != 44 )
          v6 = &unk_262CEC6;
      else if ( v3 == 6 )
        v5 = ItemInstance::getAuxValue(v2);
        v6 = &unk_262CE26;
      else if ( v3 == 17 )
        v6 = &unk_262CE46;
      else
        if ( v3 != 18 )
          return result;
        v6 = &unk_262CE66;
      result = v6[v5 & 0xF];
    }
  }
  return result;
}


int __fastcall ItemRenderer::fillRect(int a1, int a2, Tessellator *this, int a4, float a5, float a6, float a7, int a8)
{
  Tessellator *v8; // r5@1
  int v9; // r8@1
  ScreenRenderer *v18; // r0@1
  void *v19; // r0@1
  _DWORD *v20; // r2@1

  v8 = this;
  v9 = a2;
  _R6 = a4;
  Tessellator::begin(this, 4, 0);
  Tessellator::color(v8, a8);
  __asm
  {
    VLDR            S16, [SP,#0x20+arg_0]
    VMOV            R7, S16
  }
  Tessellator::vertex(v8, *(float *)&_R6, _R7, 0.0);
    VLDR            S0, [SP,#0x20+arg_8]
    VADD.F32        S0, S0, S16
    VMOV            R4, S0
  Tessellator::vertex(v8, *(float *)&_R6, _R4, 0.0);
    VLDR            S0, [SP,#0x20+arg_4]
    VMOV            S2, R6
    VADD.F32        S0, S0, S2
    VMOV            R6, S0
  Tessellator::vertex(v8, _R6, _R4, 0.0);
  v18 = (ScreenRenderer *)Tessellator::vertex(v8, _R6, _R7, 0.0);
  v19 = ScreenRenderer::singleton(v18);
  v20 = ScreenRenderer::getMaterial((int)v19, 2);
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE_0((char *)v8, v9, (int)v20);
}


void __fastcall ItemRenderer::_getShulkerBoxTexture(ItemRenderer *this, const ItemInstance *a2, ItemInstance *a3)
{
  const ItemInstance *v3; // r5@1
  ItemInstance *v4; // r6@1
  ItemRenderer *v5; // r4@1
  unsigned __int8 v6; // r0@4
  char *v7; // r0@4
  mce::TextureGroup *v8; // r5@5
  char *v9; // r0@5
  char *v10; // r0@6
  void *v11; // r0@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  char *v18; // [sp+0h] [bp-28h]@5
  char *v19; // [sp+4h] [bp-24h]@5
  int v20; // [sp+8h] [bp-20h]@5
  int v21; // [sp+10h] [bp-18h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_119C884((void **)&v21, "textures/entity/shulker/shulker_");
  if ( ItemInstance::getId(v4) != *(_BYTE *)(Block::mUndyedShulkerBox + 4) && ItemInstance::getAuxValue(v4) < 16 )
  {
    v6 = ItemInstance::getAuxValue(v4);
    v7 = Palette::getColorString(v6);
    sub_119C8A4((const void **)&v21, (const void **)v7);
  }
  else
    sub_119C894((const void **)&v21, "undyed", 6u);
  v8 = (mce::TextureGroup *)*((_DWORD *)v3 + 33);
  sub_119C854((int *)&v18, &v21);
  v19 = v18;
  v18 = (char *)&unk_28898CC;
  v20 = 0;
  mce::TextureGroup::getTexture(v5, v8, (int)&v19, 0);
  v9 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v21 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
}


BaseEntityRenderer *__fastcall ItemRenderer::ItemRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  BaseEntityRenderer *v2; // r4@1
  void *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  BannerBlockEntity *v10; // r5@7
  void *v11; // r5@7
  Random *v12; // r5@7
  int v18; // r10@7
  unsigned int *v21; // r2@10
  signed int v22; // r1@12
  unsigned int *v23; // r2@14
  signed int v24; // r1@16
  unsigned int *v25; // r2@18
  signed int v26; // r1@20
  unsigned int *v27; // r2@22
  signed int v28; // r1@24
  unsigned int *v29; // r2@26
  signed int v30; // r1@28
  unsigned int *v31; // r2@30
  signed int v32; // r1@32
  int v33; // [sp+10h] [bp-68h]@6
  int v34; // [sp+18h] [bp-60h]@5
  int v35; // [sp+20h] [bp-58h]@4
  int v36; // [sp+28h] [bp-50h]@3
  int v37; // [sp+30h] [bp-48h]@2
  int v38; // [sp+38h] [bp-40h]@1

  v2 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  *(_DWORD *)v2 = &off_26DB8F4;
  v3 = operator new(0xDE00u);
  BlockTessellator::BlockTessellator((int)v3, 0);
  *((_DWORD *)v2 + 34) = v3;
  *((_DWORD *)v2 + 51) = 0;
  *((_DWORD *)v2 + 52) = 0;
  *((_DWORD *)v2 + 53) = 0;
  sub_119C884((void **)&v38, "ui_textured");
  mce::MaterialPtr::MaterialPtr(
    (BaseEntityRenderer *)((char *)v2 + 216),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v38);
  v4 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v38 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  sub_119C884((void **)&v37, "ui_texture_and_color_tint");
    (BaseEntityRenderer *)((char *)v2 + 228),
    &v37);
  v5 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v37 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v36, "ui_fill_stencil");
    (BaseEntityRenderer *)((char *)v2 + 240),
    &v36);
  v6 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v36 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v35, "ui_item_glint");
    (BaseEntityRenderer *)((char *)v2 + 252),
    &v35);
  v7 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v35 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v34, "entity_alphatest_change_color");
    (BaseEntityRenderer *)((char *)v2 + 264),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v34);
  v8 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v33, "entity_alphatest_change_color_glint");
    (BaseEntityRenderer *)((char *)v2 + 276),
    &v33);
  v9 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v33 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (BannerBlockEntity *)operator new(0x80u);
  BannerBlockEntity::BannerBlockEntity(v10, (const BlockPos *)&BlockPos::MIN);
  *((_DWORD *)v2 + 72) = v10;
  v11 = operator new(0x78u);
  SkullBlockEntity::SkullBlockEntity((int)v11, (int)&BlockPos::MIN);
  *((_DWORD *)v2 + 73) = v11;
  v12 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  __asm { VMOV.F32        S18, #-1.0 }
  _R8 = (int)v2 + 140;
  __asm { VLDR            D8, =2.32830644e-10 }
  v18 = 0;
  do
    _R0 = Random::_genRandInt32(v12);
    __asm { VMOV            S0, R0 }
    ++v18;
    __asm
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D8
      VCVT.F32.F64    S0, D0
      VADD.F32        S0, S0, S0
      VADD.F32        S0, S0, S18
      VSTMIA          R8!, {S0}
  while ( _NF ^ _VF );
  *((_DWORD *)v2 + 20) = 1065772646;
  return v2;
}


int __fastcall ItemRenderer::render(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  int v5; // r11@1
  int v10; // r0@1
  float v11; // r1@1
  int v16; // r0@3
  unsigned int v18; // r0@6
  signed int v19; // r1@10
  int v22; // r5@13
  int v23; // r0@13
  int v25; // r4@17
  ItemInstance *v26; // r10@21
  int v27; // r6@23
  int v28; // r6@26
  int v29; // r0@27
  int (__fastcall *v30)(int, int, signed int); // r4@30
  Level *v31; // r0@30
  int v32; // r0@30
  int v33; // r0@30
  Tessellator *v35; // r9@30
  signed int v38; // r5@30
  int v39; // ST00_4@33
  float v40; // ST04_4@33
  int v41; // ST00_4@33
  float v42; // ST04_4@33
  int v43; // ST00_4@33
  float v44; // ST04_4@33
  signed int v45; // ST1C_4@34
  int v46; // r11@34
  int v50; // r6@34
  int v53; // r6@34
  int v54; // r5@34
  const mce::TexturePtr *v55; // r7@34
  int v56; // r0@36
  const mce::MaterialPtr *v57; // r2@36
  int v59; // r6@40
  BlockSource *v60; // r6@40
  BlockEntity *v61; // r7@40
  BlockEntityRenderDispatcher *v64; // r0@40
  int v65; // r0@40
  bool v66; // zf@42
  int v69; // r6@54
  int (__fastcall *v70)(int, _DWORD, int *, _DWORD); // r4@58
  unsigned __int8 v71; // r0@58
  int v72; // r0@58
  signed int v76; // r11@59
  int v77; // r0@60
  ItemInHandRenderer *v80; // r7@62
  int v82; // r0@35
  const mce::MaterialPtr *v83; // r2@64
  int v84; // [sp+0h] [bp-170h]@0
  int v85; // [sp+4h] [bp-16Ch]@0
  int v86; // [sp+10h] [bp-160h]@30
  ItemRenderer *v87; // [sp+14h] [bp-15Ch]@30
  signed int v88; // [sp+1Ch] [bp-154h]@7
  char v89; // [sp+20h] [bp-150h]@34
  float v90; // [sp+30h] [bp-140h]@34
  char v91; // [sp+3Ch] [bp-134h]@34
  float v93; // [sp+44h] [bp-12Ch]@32
  float v94; // [sp+50h] [bp-120h]@30
  float v95; // [sp+5Ch] [bp-114h]@40
  int v96; // [sp+68h] [bp-108h]@40
  signed int v97; // [sp+6Ch] [bp-104h]@40
  int v98; // [sp+70h] [bp-100h]@40
  char v99; // [sp+80h] [bp-F0h]@40
  char v101; // [sp+88h] [bp-E8h]@60
  float v102; // [sp+90h] [bp-E0h]@58
  int v105; // [sp+9Ch] [bp-D4h]@58
  int v106; // [sp+A0h] [bp-D0h]@58
  int v107; // [sp+A4h] [bp-CCh]@58
  int v108; // [sp+A8h] [bp-C8h]@58
  int v109; // [sp+ACh] [bp-C4h]@58
  int v110; // [sp+B0h] [bp-C0h]@58
  char v111; // [sp+B4h] [bp-BCh]@58
  char v112; // [sp+B8h] [bp-B8h]@1
  int v113; // [sp+C0h] [bp-B0h]@23
  signed int v114; // [sp+C4h] [bp-ACh]@23
  int v115; // [sp+C8h] [bp-A8h]@23
  int v116; // [sp+CCh] [bp-A4h]@23
  int v117; // [sp+D0h] [bp-A0h]@23
  int v118; // [sp+D4h] [bp-9Ch]@23
  int v119; // [sp+D8h] [bp-98h]@23
  int v120; // [sp+DCh] [bp-94h]@23
  int v121; // [sp+E0h] [bp-90h]@23
  int v122; // [sp+E4h] [bp-8Ch]@23
  int v123; // [sp+E8h] [bp-88h]@23
  int v124; // [sp+ECh] [bp-84h]@23
  int v125; // [sp+F0h] [bp-80h]@23
  int v126; // [sp+F4h] [bp-7Ch]@23
  int v127; // [sp+F8h] [bp-78h]@23
  int v128; // [sp+FCh] [bp-74h]@23
  int v129; // [sp+100h] [bp-70h]@23
  int v130; // [sp+104h] [bp-6Ch]@23
  int v131; // [sp+108h] [bp-68h]@23
  float v132; // [sp+10Ch] [bp-64h]@23

  _KR00_8 = *a3;
  _R8 = a2;
  v5 = a1;
  _R0 = a2;
  __asm
  {
    VLDR            S16, [R8,#4]
    VLDR            S20, [R9,#0xD0]
    VLDR            S18, [R9,#0xD4]
  }
  v10 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v112, v10);
  __asm { VLDR            S22, =0.0 }
  if ( *(_BYTE *)(_KR00_8 + 3512) )
    __asm { VMOV.F32        S24, S22 }
  else
    _R4 = _KR00_8 + 3488;
    __asm { VLDR            S24, =0.1 }
    _R5 = _KR00_8 + 3500;
    __asm
    {
      VLDR            S0, [R4]
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R8,#4]
      VADD.F32        S0, S0, S2
      VLDR            S2, [R5]
      VMUL.F32        S0, S0, S24
      VMOV            R0, S0
    }
    _R0 = mce::Math::sin(_R0, v11);
    __asm { VMOV            S0, R0 }
    v16 = *(_BYTE *)(_KR00_8 + 3512);
      VADD.F32        S24, S0, S24
    if ( _ZF )
      __asm
      {
        VLDR            S0, [R4]
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R8,#4]
      }
      _R0 = &mce::Math::RADDEG;
        VADD.F32        S0, S0, S2
        VLDR            S2, =0.05
        VMUL.F32        S0, S0, S2
        VLDR            S2, [R5]
        VLDR            S2, [R0]
        VMUL.F32        S22, S0, S2
  v18 = *(_BYTE *)(_KR00_8 + 3430);
  if ( v18 <= 0x14 )
    if ( v18 <= 5 )
      v19 = 1;
      if ( v18 > 1 )
        v19 = 2;
      v88 = v19;
    else
      v88 = 3;
    v88 = 4;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v112);
    VLDR            S2, [R7,#4]
    VLDR            S0, [R7]
    VADD.F32        S2, S2, S24
    VLDR            S10, [R0,#0xC]
    VLDR            S12, [R0,#0x10]
    VLDR            S14, [R0,#0x14]
    VMUL.F32        S10, S10, S0
    VLDR            S1, [R0,#0x18]
    VLDR            S4, [R7,#8]
    VLDR            S8, [R0,#8]
    VLDR            S3, [R0,#0x1C]
    VLDMIA          R0, {S5-S6}
    VMUL.F32        S14, S14, S2
    VMUL.F32        S12, S12, S2
    VMUL.F32        S6, S6, S0
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S5, S5, S0
    VMUL.F32        S0, S8, S0
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S1, S1, S2
    VMUL.F32        S2, S3, S2
    VMUL.F32        S3, S7, S4
    VLDR            S7, [R0,#0x28]
    VMUL.F32        S8, S8, S4
    VADD.F32        S6, S14, S6
    VLDR            S14, [R0,#0x2C]
    VADD.F32        S12, S12, S5
    VMUL.F32        S5, S7, S4
    VADD.F32        S0, S1, S0
    VADD.F32        S2, S2, S10
    VMUL.F32        S4, S14, S4
    VADD.F32        S6, S6, S8
    VLDR            S8, [R0,#0x34]
    VADD.F32        S10, S12, S3
    VLDR            S12, [R0,#0x38]
    VADD.F32        S0, S0, S5
    VADD.F32        S2, S2, S4
    VLDR            S4, [R0,#0x30]
    VADD.F32        S4, S10, S4
    VLDR            S10, [R0,#0x3C]
    VADD.F32        S0, S0, S12
    VSTR            S4, [R0,#0x30]
    VSTR            S6, [R0,#0x34]
    VSTR            S0, [R0,#0x38]
    VSTR            S2, [R0,#0x3C]
  v22 = *(_DWORD *)(_KR00_8 + 3420);
  v23 = *(_DWORD *)(_KR00_8 + 3416);
  _ZF = v22 == 0;
  if ( !v22 )
    _ZF = v23 == 0;
  if ( !_ZF )
    if ( v22 )
      v25 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(v22 + 4)]);
    else if ( v23 )
      v25 = (*(int (**)(void))(*(_DWORD *)v23 + 60))();
      v25 = 0;
    BlockTessellator::canRender(v25);
    __asm { VSUB.F32        S0, S20, S18 }
    v26 = (ItemInstance *)(_KR00_8 + 3416);
      VMUL.F32        S0, S0, S16
      VADD.F32        S16, S0, S18
      v27 = MatrixStack::MatrixStackRef::operator->((int)&v112);
      v113 = 0;
      v114 = 1065353216;
      v115 = 0;
      __asm { VSTR            S22, [SP,#0x170+var_64] }
      glm::rotate<float>((int)&v116, v27, (int)&v132, (int)&v113);
      *(_DWORD *)v27 = v116;
      *(_DWORD *)(v27 + 4) = v117;
      *(_DWORD *)(v27 + 8) = v118;
      *(_DWORD *)(v27 + 12) = v119;
      *(_DWORD *)(v27 + 16) = v120;
      *(_DWORD *)(v27 + 20) = v121;
      *(_DWORD *)(v27 + 24) = v122;
      *(_DWORD *)(v27 + 28) = v123;
      *(_DWORD *)(v27 + 32) = v124;
      *(_DWORD *)(v27 + 36) = v125;
      *(_DWORD *)(v27 + 40) = v126;
      *(_DWORD *)(v27 + 44) = v127;
      *(_DWORD *)(v27 + 48) = v128;
      *(_DWORD *)(v27 + 52) = v129;
      *(_DWORD *)(v27 + 56) = v130;
      *(_DWORD *)(v27 + 60) = v131;
      if ( (unsigned int)(v25 - 1) >= 2 && v25 != 83 )
        __asm { VMOV.F32        S18, #0.25 }
      else
        __asm { VMOV.F32        S18, #0.5 }
      v66 = v25 == 83;
      if ( v25 == 83 )
        v66 = *(_BYTE *)(_KR00_8 + 3512) == 0;
      if ( v66 )
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v112);
        __asm
        {
          VLDR            S0, [R0,#4]
          VMOV.F32        S9, #0.125
          VLDR            S8, [R0,#0x14]
          VLDR            S2, [R0,#8]
          VLDR            S10, [R0,#0x18]
          VADD.F32        S0, S8, S0
          VLDR            S4, [R0,#0xC]
          VLDR            S12, [R0,#0x1C]
          VADD.F32        S2, S10, S2
          VLDR            S6, [R0,#0x10]
          VLDR            S14, [R0]
          VADD.F32        S4, S12, S4
          VLDR            S10, [R0,#0x24]
          VADD.F32        S6, S6, S14
          VLDR            S8, [R0,#0x20]
          VLDR            S12, [R0,#0x28]
          VADD.F32        S0, S0, S10
          VLDR            S14, [R0,#0x2C]
          VADD.F32        S2, S2, S12
          VLDR            S1, [R0,#0x30]
          VLDR            S3, [R0,#0x34]
          VADD.F32        S4, S4, S14
          VLDR            S5, [R0,#0x38]
          VLDR            S7, [R0,#0x3C]
          VADD.F32        S6, S6, S8
          VMUL.F32        S0, S0, S9
          VMUL.F32        S2, S2, S9
          VMUL.F32        S4, S4, S9
          VMUL.F32        S6, S6, S9
          VSUB.F32        S0, S3, S0
          VSUB.F32        S2, S5, S2
          VSUB.F32        S4, S7, S4
          VSUB.F32        S6, S1, S6
          VSTR            S6, [R0,#0x30]
          VSTR            S0, [R0,#0x34]
          VSTR            S2, [R0,#0x38]
          VSTR            S4, [R0,#0x3C]
        }
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v112);
        VLDR            S0, [R0]
        VMUL.F32        S0, S0, S18
        VSTR            S0, [R0]
        VLDR            S0, [R0,#4]
        VSTR            S0, [R0,#4]
        VLDR            S0, [R0,#8]
        VSTR            S0, [R0,#8]
        VLDR            S0, [R0,#0xC]
        VSTR            S0, [R0,#0xC]
        VLDR            S0, [R0,#0x10]
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
      if ( *(_BYTE *)(_KR00_8 + 3512) )
        if ( (v25 | 1) == 11
          || (unsigned int)(v25 - 18) <= 0x19 && (1 << (v25 - 18)) & 0x2004009
          || v25 == 87
          || Block::isType((Block *)v22, (const Block *)Block::mWoodButton)
          || Block::isType((Block *)v22, (const Block *)Block::mStoneButton) == 1 )
          v69 = MatrixStack::MatrixStackRef::operator->((int)&v112);
          v113 = 0;
          v114 = 1065353216;
          v115 = 0;
          v132 = 90.0;
          glm::rotate<float>((int)&v116, v69, (int)&v132, (int)&v113);
          *(_DWORD *)v69 = v116;
          *(_DWORD *)(v69 + 4) = v117;
          *(_DWORD *)(v69 + 8) = v118;
          *(_DWORD *)(v69 + 12) = v119;
          *(_DWORD *)(v69 + 16) = v120;
          *(_DWORD *)(v69 + 20) = v121;
          *(_DWORD *)(v69 + 24) = v122;
          *(_DWORD *)(v69 + 28) = v123;
          *(_DWORD *)(v69 + 32) = v124;
          *(_DWORD *)(v69 + 36) = v125;
          *(_DWORD *)(v69 + 40) = v126;
          *(_DWORD *)(v69 + 44) = v127;
          *(_DWORD *)(v69 + 48) = v128;
          *(_DWORD *)(v69 + 52) = v129;
          *(_DWORD *)(v69 + 56) = v130;
          *(_DWORD *)(v69 + 60) = v131;
        if ( v25 == 32
          AABB::AABB((AABB *)&v105);
          v70 = *(int (__fastcall **)(int, _DWORD, int *, _DWORD))(*(_DWORD *)v22 + 420);
          v71 = ItemInstance::getAuxValue((ItemInstance *)(_KR00_8 + 3416));
          v72 = v70(v22, v71, &v105, 0);
          v105 = *(_DWORD *)v72;
          v106 = *(_DWORD *)(v72 + 4);
          v107 = *(_DWORD *)(v72 + 8);
          v108 = *(_DWORD *)(v72 + 12);
          v109 = *(_DWORD *)(v72 + 16);
          v110 = *(_DWORD *)(v72 + 20);
          v111 = *(_BYTE *)(v72 + 24);
          _R6 = MatrixStack::MatrixStackRef::operator->((int)&v112);
          AABB::getCenter((AABB *)&v102, (int)&v105);
          __asm
          {
            VLDR            S0, [SP,#0x170+var_E0]
            VLDR            S10, [R6,#0xC]
            VLDR            S2, [SP,#0x170+var_DC]
            VLDR            S12, [R6,#0x10]
            VMUL.F32        S10, S10, S0
            VLDR            S14, [R6,#0x14]
            VLDR            S1, [R6,#0x18]
            VMUL.F32        S12, S12, S2
            VLDR            S4, [SP,#0x170+var_D8]
            VMUL.F32        S14, S14, S2
            VLDR            S8, [R6,#8]
            VMUL.F32        S1, S1, S2
            VLDR            S3, [R6,#0x1C]
            VLDMIA          R6, {S5-S6}
            VMUL.F32        S2, S3, S2
            VMUL.F32        S6, S6, S0
            VLDR            S7, [R6,#0x20]
            VMUL.F32        S5, S5, S0
            VMUL.F32        S0, S8, S0
            VLDR            S8, [R6,#0x24]
            VNMUL.F32       S3, S4, S7
            VLDR            S7, [R6,#0x28]
            VNMUL.F32       S8, S4, S8
            VADD.F32        S2, S2, S10
            VADD.F32        S6, S14, S6
            VLDR            S14, [R6,#0x2C]
            VADD.F32        S12, S12, S5
            VNMUL.F32       S5, S4, S7
            VADD.F32        S0, S1, S0
            VNMUL.F32       S4, S4, S14
            VSUB.F32        S6, S8, S6
            VLDR            S8, [R6,#0x34]
            VSUB.F32        S10, S3, S12
            VLDR            S12, [R6,#0x38]
            VSUB.F32        S0, S5, S0
            VSUB.F32        S2, S4, S2
            VLDR            S4, [R6,#0x30]
            VADD.F32        S6, S8, S6
            VADD.F32        S4, S4, S10
            VLDR            S10, [R6,#0x3C]
            VADD.F32        S0, S12, S0
            VADD.F32        S2, S10, S2
            VSTR            S4, [R6,#0x30]
            VSTR            S6, [R6,#0x34]
            VSTR            S0, [R6,#0x38]
            VSTR            S2, [R6,#0x3C]
          }
      __asm { VLDR            S0, =0.2 }
      _R5 = v5 + 148;
      __asm { VDIV.F32        S18, S0, S18 }
      v76 = 0;
      do
        v77 = BaseEntityRenderContext::getWorldMatrix(_R8);
        MatrixStack::push((MatrixStack *)&v101, v77);
        if ( v76 >= 1 )
            VLDR            S22, [R5,#-8]
            VLDR            S24, [R5,#-4]
            VLDR            S20, [R5]
          _R0 = MatrixStack::MatrixStackRef::operator->((int)&v101);
            VMUL.F32        S0, S22, S18
            VLDR            S4, [R0]
            VMUL.F32        S2, S24, S18
            VLDR            S6, [R0,#4]
            VLDR            S14, [R0,#0x14]
            VMUL.F32        S12, S20, S18
            VLDR            S1, [R0,#0x10]
            VLDR            S10, [R0,#0xC]
            VLDR            S3, [R0,#0x18]
            VLDR            S8, [R0,#8]
            VMUL.F32        S4, S4, S0
            VLDR            S5, [R0,#0x1C]
            VLDR            S7, [R0,#0x20]
            VLDR            S8, [R0,#0x24]
            VMUL.F32        S3, S3, S2
            VMUL.F32        S2, S5, S2
            VMUL.F32        S5, S7, S12
            VLDR            S7, [R0,#0x28]
            VADD.F32        S4, S1, S4
            VLDR            S14, [R0,#0x2C]
            VMUL.F32        S8, S8, S12
            VMUL.F32        S1, S7, S12
            VADD.F32        S0, S3, S0
            VLDR            S10, [R0,#0x34]
            VMUL.F32        S12, S14, S12
            VADD.F32        S4, S4, S5
            VADD.F32        S6, S6, S8
            VLDR            S8, [R0,#0x30]
            VADD.F32        S0, S0, S1
            VADD.F32        S2, S2, S12
            VLDR            S12, [R0,#0x38]
            VADD.F32        S4, S4, S8
            VLDR            S8, [R0,#0x3C]
            VADD.F32        S6, S6, S10
            VADD.F32        S0, S0, S12
            VADD.F32        S2, S2, S8
            VSTR            S4, [R0,#0x30]
            VSTR            S6, [R0,#0x34]
            VSTR            S0, [R0,#0x38]
            VSTR            S2, [R0,#0x3C]
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v101);
          VLDR            S0, [R0]
          VMUL.F32        S0, S0, S16
          VSTR            S0, [R0]
          VSTR            S0, [R0,#4]
          VLDR            S0, [R0,#8]
          VSTR            S0, [R0,#8]
          VLDR            S0, [R0,#0xC]
          VSTR            S0, [R0,#0xC]
          VLDR            S0, [R0,#0x10]
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
        v80 = (ItemInHandRenderer *)BaseEntityRenderContext::getItemInHandRenderer(_R8);
        ItemInHandRenderer::renderItem(v80, _R8, (Entity *)_KR00_8, (const ItemInstance *)(_KR00_8 + 3416), 0, 0, 0, 0);
        ItemInHandRenderer::renderItem(v80, _R8, (Entity *)_KR00_8, (const ItemInstance *)(_KR00_8 + 3416), 1, 0, 0, 0);
        MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v101);
        _R5 += 12;
        ++v76;
      while ( v76 < v88 );
      v28 = *(_DWORD *)v26;
      if ( *(_DWORD *)v26 == Item::mBanner
        || (v29 = *(_DWORD *)(_KR00_8 + 3420), v29 == Block::mStandingBanner)
        || v29 == Block::mWallBanner )
        BannerBlockEntity::setItemValues(*(BannerBlockEntity **)(v5 + 288), (const ItemInstance *)(_KR00_8 + 3416));
          VMOV.F32        S0, #0.25
          VLDR            S2, [R0]
          VMUL.F32        S2, S2, S0
          VSTR            S2, [R0]
          VLDR            S2, [R0,#4]
          VSTR            S2, [R0,#4]
          VSTR            S2, [R0,#8]
          VLDR            S2, [R0,#0xC]
          VSTR            S2, [R0,#0xC]
          VLDR            S2, [R0,#0x10]
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
        v59 = MatrixStack::MatrixStackRef::operator->((int)&v112);
        BaseEntityRenderContext::getCameraRotation((BaseEntityRenderContext *)&v99, *(float *)&_R8, 0.0);
          VLDR            S0, [SP,#0x170+var_EC]
          VLDR            S2, =180.0
        v96 = 0;
        __asm { VSUB.F32        S0, S2, S0 }
        v97 = 1065353216;
        v98 = 0;
        __asm { VSTR            S0, [SP,#0x170+var_B0] }
        glm::rotate<float>((int)&v116, v59, (int)&v113, (int)&v96);
        *(_DWORD *)v59 = v116;
        *(_DWORD *)(v59 + 4) = v117;
        *(_DWORD *)(v59 + 8) = v118;
        *(_DWORD *)(v59 + 12) = v119;
        *(_DWORD *)(v59 + 16) = v120;
        *(_DWORD *)(v59 + 20) = v121;
        *(_DWORD *)(v59 + 24) = v122;
        *(_DWORD *)(v59 + 28) = v123;
        *(_DWORD *)(v59 + 32) = v124;
        *(_DWORD *)(v59 + 36) = v125;
        *(_DWORD *)(v59 + 40) = v126;
        *(_DWORD *)(v59 + 44) = v127;
        *(_DWORD *)(v59 + 48) = v128;
        *(_DWORD *)(v59 + 52) = v129;
        *(_DWORD *)(v59 + 56) = v130;
        *(_DWORD *)(v59 + 60) = v131;
        v60 = (BlockSource *)Entity::getRegion((Entity *)_KR00_8);
        v61 = *(BlockEntity **)(v5 + 288);
        _R5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_KR00_8 + 52))(_KR00_8);
        _R0 = BaseEntityRenderContext::getCameraTargetPosition(_R8);
          VLDR            S6, [R5]
          VLDR            S4, [R0,#8]
          VSUB.F32        S0, S6, S0
          VLDR            S8, [R5,#4]
          VLDR            S10, [R5,#8]
          VSUB.F32        S2, S8, S2
          VSUB.F32        S4, S10, S4
          VSTR            S0, [SP,#0x170+var_114]
          VSTR            S2, [SP,#0x170+var_110]
          VSTR            S4, [SP,#0x170+var_10C]
        BlockEntityRenderData::BlockEntityRenderData(
          (BlockEntityRenderData *)&v96,
          v60,
          v61,
          (const Vec3 *)&v95,
          (const mce::MaterialPtr *)&mce::MaterialPtr::NONE,
          (const mce::TexturePtr *)&mce::TexturePtr::NONE,
          0);
        v64 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(_R8);
        v65 = BlockEntityRenderDispatcher::getRenderer(v64, *(BlockEntity **)(v5 + 288));
        (*(void (**)(void))(*(_DWORD *)v65 + 12))();
      else if ( v28 )
        v30 = *(int (__fastcall **)(int, int, signed int))(*(_DWORD *)v28 + 240);
        v31 = (Level *)Entity::getLevel((Entity *)_KR00_8);
        v32 = Level::getPrimaryLocalPlayer(v31);
        v33 = v30(v28, v32, 1);
        _R4 = ItemInstance::getIcon((ItemInstance *)(_KR00_8 + 3416), v33, 0);
        v35 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R8);
          VLDR            S18, [R4,#4]
          VLDR            S20, [R4,#8]
          VLDR            S22, [R4,#0xC]
          VLDR            S24, [R4,#0x10]
        v86 = _R4;
        Tessellator::begin(v35, 4 * v88, 0);
        _R0 = &Vec3::UNIT_Z;
          VNEG.F32        S0, S0
          VNEG.F32        S2, S2
          VNEG.F32        S4, S4
          VSTR            S0, [SP,#0x170+var_120]
          VSTR            S2, [SP,#0x170+var_11C]
          VSTR            S4, [SP,#0x170+var_118]
        Tessellator::normal(v35, (const Vec3 *)&v94);
        _R4 = v5 + 148;
        v87 = (ItemRenderer *)v5;
        __asm { VLDR            S26, =0.3 }
        v38 = 0;
        do
          if ( v38 >= 1 )
            __asm
            {
              VLDR            S0, [R4,#-8]
              VLDR            S2, [R4,#-4]
              VLDR            S4, [R4]
              VMUL.F32        S0, S0, S26
              VMUL.F32        S2, S2, S26
              VMUL.F32        S4, S4, S26
              VSTR            S0, [SP,#0x170+var_12C]
              VSTR            S2, [SP,#0x170+var_128]
              VSTR            S4, [SP,#0x170+var_124]
            }
            Tessellator::setOffset(v35, (const Vec3 *)&v93);
            VSTR            S18, [SP,#0x170+var_170]
            VSTR            S20, [SP,#0x170+var_16C]
          Tessellator::vertexUV(v35, 0.5, 0.75, 0.0, *(float *)&v84, *(float *)&v85);
            VSTR            S24, [SP,#0x170+var_16C]
          Tessellator::vertexUV(v35, 0.5, -0.25, 0.0, *(float *)&v39, v40);
            VSTR            S22, [SP,#0x170+var_170]
          Tessellator::vertexUV(v35, -0.5, -0.25, 0.0, *(float *)&v41, v42);
          Tessellator::vertexUV(v35, -0.5, 0.75, 0.0, *(float *)&v43, v44);
          _R4 += 12;
          ++v38;
        while ( v38 < v88 );
        ItemRenderer::_loadItemGraphics((ItemRenderer *)v5);
        v45 = ItemInstance::getId(v26);
        v46 = *(_DWORD *)(v5 + 204);
          VMOV.F32        S0, #0.5
          VLDR            S18, [R0]
          VLDR            S20, [R0,#4]
          VLDR            S22, [R0,#8]
          VLDR            S24, [R7]
          VLDR            S26, [R7,#4]
          VLDR            S28, [R7,#8]
        _R0 = BaseEntityRenderContext::getCameraPosition(_R8);
          VNEG.F32        S0, S24
          VLDR            S6, [R0]
          VNEG.F32        S2, S26
          VLDR            S8, [R0,#4]
          VNEG.F32        S4, S28
          VLDR            S10, [R0,#8]
          VSUB.F32        S0, S0, S18
          VSUB.F32        S2, S2, S20
          VSUB.F32        S4, S4, S22
          VADD.F32        S0, S0, S6
          VADD.F32        S2, S2, S8
          VADD.F32        S4, S4, S10
          VSTR            S0, [SP,#0x170+var_140]
          VSTR            S2, [SP,#0x170+var_13C]
          VSTR            S4, [SP,#0x170+var_138]
        mce::MathUtility::getRotationFromNegZToVector((int)&v91, (int)&v90);
        __asm { VLDR            S18, [SP,#0x170+var_130] }
        v50 = MatrixStack::MatrixStackRef::operator->((int)&v112);
        _R0 = &mce::Math::RADDEG;
        __asm { VLDR            S0, [R0] }
        v113 = 0;
        __asm { VNMUL.F32       S0, S18, S0 }
        v114 = 1065353216;
        v115 = 0;
        __asm { VSTR            S0, [SP,#0x170+var_64] }
        glm::rotate<float>((int)&v116, v50, (int)&v132, (int)&v113);
        *(_DWORD *)v50 = v116;
        *(_DWORD *)(v50 + 4) = v117;
        *(_DWORD *)(v50 + 8) = v118;
        *(_DWORD *)(v50 + 12) = v119;
        *(_DWORD *)(v50 + 16) = v120;
        *(_DWORD *)(v50 + 20) = v121;
        *(_DWORD *)(v50 + 24) = v122;
        *(_DWORD *)(v50 + 28) = v123;
        *(_DWORD *)(v50 + 32) = v124;
        *(_DWORD *)(v50 + 36) = v125;
        *(_DWORD *)(v50 + 40) = v126;
        *(_DWORD *)(v50 + 44) = v127;
        *(_DWORD *)(v50 + 48) = v128;
        *(_DWORD *)(v50 + 52) = v129;
        *(_DWORD *)(v50 + 56) = v130;
        *(_DWORD *)(v50 + 60) = v131;
        (*(void (__fastcall **)(char *))(**(_DWORD **)v26 + 156))(&v89);
        v53 = (*(int (**)(void))(**(_DWORD **)v26 + 160))();
        v54 = BaseEntityRenderContext::getScreenContext(_R8);
        ItemInstance::isGlint(v26);
        __asm { VLDR            S0, [R8,#4] }
        v55 = (const mce::TexturePtr *)(v46 + 24 * v45);
        if ( _ZF )
          __asm { VSTR            S0, [SP,#0x170+var_16C] }
          EntityShaderManager::_setupFoilShaderParameters(
            (int)v87,
            *(float *)&v54,
            *(float *)&_KR00_8,
            (unsigned int)&v89,
            v86,
            v85);
          v56 = Tessellator::forceTessellateIntercept(v35);
          v57 = (ItemRenderer *)((char *)v87 + 96);
          if ( v53 )
            v57 = (ItemRenderer *)((char *)v87 + 276);
          if ( v56 == 1 )
            Tessellator::triggerIntercept(v35, v57, v55);
          else
            Tessellator::draw((char *)v35, v54, (int)v57, (int)v55, (int)v87 + 108);
        else
          EntityShaderManager::_setupShaderParameters(
            *(float *)&v87,
            v54,
            _KR00_8,
            COERCE_FLOAT(&Color::NIL),
            COERCE_FLOAT(&v89));
          v82 = Tessellator::forceTessellateIntercept(v35);
          v83 = (ItemRenderer *)((char *)v87 + 84);
            v83 = (ItemRenderer *)((char *)v87 + 264);
          if ( v82 == 1 )
            Tessellator::triggerIntercept(v35, v83, v55);
            Tessellator::draw((char *)v35, v54, (int)v83, (int)v55);
        Tessellator::setOffset(v35, (const Vec3 *)&Vec3::ZERO);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v112);
}


void __fastcall ItemRenderer::~ItemRenderer(ItemRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = ItemRenderer::~ItemRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall ItemRenderer::_loadItemGraphics(ItemRenderer *this)
{
  ItemRenderer::_loadItemGraphics(this);
}


int __fastcall ItemRenderer::getGraphics(ItemRenderer *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  ItemRenderer *v3; // r5@1

  v2 = a2;
  v3 = this;
  ItemRenderer::_loadItemGraphics(this);
  return *((_DWORD *)v3 + 51) + 24 * ItemInstance::getId(v2);
}


mce::TexturePtr *__fastcall ItemRenderer::renderGuiItemNew(ItemRenderer *this, BaseEntityRenderContext *a2, const ItemInstance *a3, float a4, float a5, float a6, float a7, float a8, float a9, int a10)
{
  const ItemInstance *v10; // r6@1
  int v15; // r7@1
  int v16; // r8@1
  BaseEntityRenderContext *v17; // r4@1
  ItemRenderer *v18; // r5@1
  int v19; // r0@2
  int v20; // r0@4
  mce::TexturePtr *result; // r0@5
  int v22; // r1@7
  BlockEntityRenderDispatcher *v23; // r0@12
  BannerRenderer *v24; // r7@12
  BlockEntity *v25; // r5@12
  signed int v26; // r0@12
  int v28; // r2@12
  int (__fastcall *v29)(int, int); // r9@19
  int v30; // r0@19
  int v31; // r0@19
  BlockEntityRenderDispatcher *v32; // r0@20
  int v33; // r7@20
  int v34; // r5@20
  int v35; // r0@20
  signed int v36; // r10@23
  signed int v37; // r11@25
  int v38; // r9@25
  int v40; // r0@25
  float v42; // [sp+0h] [bp-88h]@0
  float v43; // [sp+4h] [bp-84h]@0
  float v44; // [sp+8h] [bp-80h]@0
  float v45; // [sp+Ch] [bp-7Ch]@0
  float v46; // [sp+10h] [bp-78h]@0
  float v47; // [sp+1Ch] [bp-6Ch]@0
  float v48; // [sp+20h] [bp-68h]@0
  int v49; // [sp+2Ch] [bp-5Ch]@23
  char v50; // [sp+30h] [bp-58h]@21

  v10 = a3;
  __asm { VLDR            S22, [SP,#0x88+arg_10] }
  v15 = *((_DWORD *)a3 + 1);
  v16 = LODWORD(a4);
  __asm { VLDR            S18, [SP,#0x88+arg_C] }
  v17 = a2;
  __asm { VLDR            S16, [SP,#0x88+arg_4] }
  v18 = this;
  __asm { VLDR            S20, [SP,#0x88+arg_0] }
  if ( v15 )
  {
    v19 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(v15 + 4)]);
    if ( BlockTessellator::canRender(v19) )
    {
LABEL_15:
      __asm
      {
        VSTR            S22, [SP,#0x88+var_78]
        VSTR            S18, [SP,#0x88+var_80]
        VSTR            S16, [SP,#0x88+var_84]
        VSTR            S20, [SP,#0x88+var_88]
      }
      return ItemRenderer::renderGuiItemInChunk((int)v18, (int)v17, 9, v10, v42, v43, v44, SLODWORD(v45), v46, 0, 1);
    }
  }
  else
    v20 = (*(int (**)(void))(**(_DWORD **)a3 + 60))();
    BlockTessellator::canRender(v20);
  result = *(mce::TexturePtr **)v10;
  if ( !*(_DWORD *)v10 )
    return result;
  if ( result == (mce::TexturePtr *)Item::mBanner )
    goto LABEL_15;
  v22 = *((_DWORD *)v10 + 1);
  if ( v22 == Block::mStandingBanner || v22 == Block::mWallBanner || result == (mce::TexturePtr *)Item::mSkull )
  if ( ItemInstance::getId(v10) != *(_BYTE *)(Block::mStandingBanner + 4)
    && ItemInstance::getId(v10) != *(_BYTE *)(Block::mWallBanner + 4) )
    if ( *(_DWORD *)v10 == Item::mSkull )
      v32 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(v17);
      v33 = BlockEntityRenderDispatcher::getRenderer(v32, *((BlockEntity **)v18 + 73));
      v34 = *((_DWORD *)v18 + 73);
      v35 = ItemInstance::getAuxValue(v10);
        VSTR            S18, [SP,#0x88+var_7C]
      result = (mce::TexturePtr *)SkullBlockRenderer::renderInGui(v33, v17, v34, v35, v42, v43, 1.0, v45);
    else
      if ( v15 )
        v29 = *(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 384);
        v30 = ItemInstance::getAuxValue(v10);
        v31 = v29(v15, v30) & 0xFFFFFF;
      else
        (*(void (__fastcall **)(char *))(**(_DWORD **)v10 + 156))(&v50);
        v31 = Color::toARGB((Color *)&v50);
      if ( a10 )
        v49 = v31;
        v36 = 1;
        v36 = ItemInstance::isGlint(v10);
      ItemRenderer::_loadItemGraphics(v18);
      v37 = ItemInstance::getId(v10);
      v38 = *((_DWORD *)v18 + 51);
      _R7 = (*(int (**)(void))(**(_DWORD **)v10 + 252))();
      v40 = ItemInstance::getIcon(v10, v16, 0);
        VMOV            R3, S20
        VMOV            S0, R7
        VCVT.F32.S32    S0, S0
        VSTR            S22, [SP,#0x88+var_68]
        VSTR            S22, [SP,#0x88+var_6C]
        VSTR            S18, [SP,#0x88+var_78]
        VADD.F32        S0, S0, S16
        VSTR            S0, [SP,#0x88+var_88]
      result = (mce::TexturePtr *)ItemRenderer::iconBlit(
                                    (int)v18,
                                    v17,
                                    v38 + 24 * v37,
                                    _R3,
                                    v42,
                                    v40,
                                    16.0,
                                    v46,
                                    1.0,
                                    v49,
                                    v47,
                                    v48,
                                    v36);
    BannerBlockEntity::setItemValues(*((BannerBlockEntity **)v18 + 72), v10);
    v23 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(v17);
    v24 = (BannerRenderer *)BlockEntityRenderDispatcher::getRenderer(v23, *((BlockEntity **)v18 + 72));
    v25 = (BlockEntity *)*((_DWORD *)v18 + 72);
    v26 = ItemInstance::getId(v10);
    __asm { VMOV            R3, S20 }
    v28 = 0;
    __asm { VSTR            S18, [SP,#0x88+var_7C] }
    if ( v26 != *(_BYTE *)(Block::mWallBanner + 4) )
      v28 = 1;
    __asm { VSTR            S16, [SP,#0x88+var_88] }
    result = (mce::TexturePtr *)BannerRenderer::renderInGui(v24, v17, v25, _R3, v42, 1.0, v28, v45);
  return result;
}


int __fastcall ItemRenderer::blit(ItemRenderer *this, BaseEntityRenderContext *a2, const mce::TexturePtr *a3, float a4, float a5, float a6, float a7, float a8, float a9)
{
  BaseEntityRenderContext *v9; // r10@1
  ItemRenderer *v10; // r9@1
  const mce::TexturePtr *v12; // r8@1
  Tessellator *v13; // r7@1
  float v20; // ST00_4@1
  float v21; // ST04_4@1
  float v23; // ST00_4@1
  float v24; // ST04_4@1
  float v25; // ST00_4@1
  float v26; // ST04_4@1
  int v27; // r1@1
  float v29; // [sp+0h] [bp-58h]@0
  float v30; // [sp+4h] [bp-54h]@0

  v9 = a2;
  v10 = this;
  _R4 = a4;
  v12 = a3;
  v13 = (Tessellator *)BaseEntityRenderContext::getTessellator(a2);
  Tessellator::begin(v13, 4, 0);
  __asm
  {
    VLDR            S16, [SP,#0x58+arg_0]
    VLDR            S0, [SP,#0x58+arg_10]
    VLDR            S18, [SP,#0x58+arg_8]
    VADD.F32        S2, S0, S16
    VLDR            S20, =0.0039062
    VADD.F32        S0, S0, S18
    VLDR            S22, [SP,#0x58+arg_4]
    VMUL.F32        S24, S22, S20
    VMOV            R5, S2
    VMUL.F32        S26, S0, S20
    VSTR            S24, [SP,#0x58+var_58]
    VSTR            S26, [SP,#0x58+var_54]
  }
  Tessellator::vertexUV(v13, _R4, _R5, 0.0, v29, v30);
    VLDR            S0, [SP,#0x58+arg_C]
    VMOV            S2, R4
    VADD.F32        S2, S0, S2
    VADD.F32        S0, S0, S22
    VMOV            R6, S2
    VMUL.F32        S22, S0, S20
    VSTR            S22, [SP,#0x58+var_58]
  Tessellator::vertexUV(v13, _R6, _R5, 0.0, v20, v21);
    VMOV            R5, S16
    VMUL.F32        S16, S18, S20
    VSTR            S16, [SP,#0x58+var_54]
  Tessellator::vertexUV(v13, _R6, _R5, 0.0, v23, v24);
  Tessellator::vertexUV(v13, _R4, _R5, 0.0, v25, v26);
  v27 = BaseEntityRenderContext::getScreenContext(v9);
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrERKNS2_10TexturePtrE_0(
           (char *)v13,
           v27,
           (int)v10 + 216,
           (int)v12);
}


signed int __fastcall ItemRenderer::renderGuiItemDecorations(ItemRenderer *this, BaseEntityRenderContext *a2, const ItemInstance *a3, float a4, float a5)
{
  const ItemInstance *v5; // r4@1
  signed int result; // r0@1
  BaseEntityRenderContext *v8; // r5@1
  int v13; // ST0C_4@7
  int v14; // ST08_4@7
  int v15; // ST04_4@7
  Tessellator *v17; // r4@7
  int v18; // r9@7
  ScreenRenderer *v23; // r0@7
  void *v24; // r0@7
  _DWORD *v25; // r0@7
  int v26; // ST00_4@7
  ScreenRenderer *v32; // r0@7
  void *v33; // r0@7
  _DWORD *v34; // r0@7
  int v35; // r5@7
  ScreenRenderer *v41; // r0@7
  void *v42; // r0@7
  _DWORD *v43; // r2@7

  v5 = a3;
  _R6 = a4;
  result = *((_BYTE *)a3 + 15);
  v8 = a2;
  _ZF = result == 0;
  if ( *((_BYTE *)a3 + 15) )
  {
    result = *(_DWORD *)a3;
    _ZF = *(_DWORD *)a3 == 0;
  }
  if ( !_ZF )
    __asm { VLDR            S24, [SP,#0x60+arg_0] }
    result = ItemInstance::isNull(a3);
    if ( !result )
    {
      result = *((_BYTE *)v5 + 14);
      if ( *((_BYTE *)v5 + 14) )
      {
        result = ItemInstance::isDamaged(v5);
        if ( result == 1 )
        {
          __asm { VMOV            S20, R6 }
          v13 = ItemInstance::getDamageValue(v5);
          v14 = ItemInstance::getMaxDamage(v5);
          v15 = ItemInstance::getDamageValue(v5);
          _R7 = ItemInstance::getMaxDamage(v5);
          v17 = (Tessellator *)BaseEntityRenderContext::getTessellator(v8);
          v18 = BaseEntityRenderContext::getScreenContext(v8);
          Tessellator::begin(v17, 4, 0);
          Tessellator::color(v17, 0);
          __asm
          {
            VMOV.F32        S0, #2.0
            VMOV.F32        S18, #13.0
            VADD.F32        S16, S20, S0
            VADD.F32        S0, S24, S18
            VMOV            R6, S16
            VMOV            R10, S0
          }
          Tessellator::vertex(v17, _R6, _R10, 0.0);
            VMOV.F32        S22, #14.0
            VADD.F32        S0, S24, S22
            VMOV            R8, S0
          Tessellator::vertex(v17, _R6, _R8, 0.0);
            VMOV.F32        S0, #15.0
            VADD.F32        S0, S20, S0
            VMOV            R11, S0
          Tessellator::vertex(v17, _R11, _R8, 0.0);
          v23 = (ScreenRenderer *)Tessellator::vertex(v17, _R11, _R10, 0.0);
          v24 = ScreenRenderer::singleton(v23);
          v25 = ScreenRenderer::getMaterial((int)v24, 2);
          Tessellator::draw((char *)v17, v18, (int)v25);
          v26 = BaseEntityRenderContext::getScreenContext(v8);
          _R0 = v15;
            VMOV            S0, R7
            VLDR            S4, =-255.0
            VMOV            S2, R0
            VCVT.F32.S32    S2, S2
            VCVT.F32.S32    S0, S0
            VMUL.F32        S2, S2, S4
            VDIV.F32        S0, S2, S0
            VLDR            S2, =255.5
            VADD.F32        S0, S0, S2
            VMOV            R0, S0
          _R0 = floorf(_R0);
            VMOV            S0, R0
            VCVTR.S32.F32   S0, S0
          Tessellator::color(
            v17,
            ((255 - _R11 + ((unsigned int)((255 - _R11) >> 31) >> 30)) << 14) & 0xFFFF0000 | 0x3F00);
            VADD.F32        S0, S20, S22
            VMOV            R7, S0
          Tessellator::vertex(v17, _R7, _R8, 0.0);
          v32 = (ScreenRenderer *)Tessellator::vertex(v17, _R7, _R10, 0.0);
          v33 = ScreenRenderer::singleton(v32);
          v34 = ScreenRenderer::getMaterial((int)v33, 2);
          Tessellator::draw((char *)v17, v26, (int)v34);
          v35 = BaseEntityRenderContext::getScreenContext(v8);
          Tessellator::color(v17, ((255 - _R11) << 16) | (_R11 << 8));
          _R0 = v13;
          _R0 = v14;
            VMUL.F32        S0, S0, S18
            VDIV.F32        S0, S0, S2
            VMOV.F32        S2, #13.5
            VSUB.F32        S0, S2, S0
            VADD.F32        S0, S0, S16
            VMOV            R6, S0
          v41 = (ScreenRenderer *)Tessellator::vertex(v17, _R6, _R10, 0.0);
          v42 = ScreenRenderer::singleton(v41);
          v43 = ScreenRenderer::getMaterial((int)v42, 2);
          result = j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE_0((char *)v17, v35, (int)v43);
        }
      }
    }
  return result;
}


void __fastcall ItemRenderer::~ItemRenderer(ItemRenderer *this)
{
  ItemRenderer::~ItemRenderer(this);
}


void __fastcall ItemRenderer::_loadItemGraphics(ItemRenderer *this)
{
  ItemRenderer *v1; // r11@1
  char *v2; // r0@1
  mce::TexturePtr *v3; // r1@1
  mce::TexturePtr *v4; // t1@1
  mce::TexturePtr *v5; // r5@1
  unsigned int v6; // r2@2
  int v7; // r6@5
  mce::TexturePtr *v8; // r0@6
  mce::TextureGroup *v9; // r5@9
  char *v10; // r5@9
  char *v11; // r0@9
  char *v12; // r0@10
  mce::TextureGroup *v13; // r6@11
  char *v14; // r7@11
  char *v15; // r0@11
  unsigned int *v16; // r2@12
  char *v17; // r0@12
  mce::TextureContainer *v18; // r9@13
  mce::TextureContainer *v19; // r8@13
  bool v20; // r2@13
  mce::TextureGroup *v21; // r7@13
  int v22; // r5@13
  int v23; // r6@13
  char *v24; // r0@13
  char *v25; // r0@14
  ClockItem *v26; // r7@15
  const mce::ImageBuffer *v27; // r0@15
  mce::TextureGroup *v28; // r6@15
  int v29; // r5@15
  int v30; // r7@15
  char *v31; // r0@15
  char *v32; // r0@16
  CompassItem *v33; // r6@17
  const mce::ImageBuffer *v34; // r0@17
  mce::TexturePtr *v35; // r5@17
  mce::TexturePtr *v36; // r8@17
  mce::TexturePtr *v37; // r7@18
  signed int v38; // r9@18
  unsigned int *v39; // r2@19
  signed int v40; // r1@21
  unsigned int *v41; // r2@23
  signed int v42; // r1@25
  unsigned int *v43; // r2@27
  mce::TexturePtr *v44; // r4@28
  signed int v45; // r1@29
  mce::TextureGroup *v46; // r10@44
  char *v47; // r0@45
  char *v48; // r0@46
  char *v49; // r0@51
  unsigned int *v50; // r2@56
  signed int v51; // r1@58
  unsigned int *v52; // r2@60
  signed int v53; // r1@62
  unsigned int *v54; // r2@64
  signed int v55; // r1@66
  signed int v56; // r1@70
  unsigned int *v57; // r2@72
  signed int v58; // r1@74
  unsigned int *v59; // r2@76
  signed int v60; // r1@78
  unsigned int *v61; // r2@80
  signed int v62; // r1@82
  unsigned int *v63; // r2@84
  signed int v64; // r1@86
  ItemRenderer *v65; // [sp+1Ch] [bp-14Ch]@1
  char *v66; // [sp+24h] [bp-144h]@27
  char *v67; // [sp+28h] [bp-140h]@23
  int v68; // [sp+2Ch] [bp-13Ch]@51
  char v69; // [sp+30h] [bp-138h]@51
  char v70; // [sp+48h] [bp-120h]@18
  char *v71; // [sp+64h] [bp-104h]@45
  char *v72; // [sp+68h] [bp-100h]@19
  int v73; // [sp+6Ch] [bp-FCh]@45
  char v74; // [sp+70h] [bp-F8h]@45
  char v75; // [sp+88h] [bp-E0h]@45
  char *v76; // [sp+A4h] [bp-C4h]@15
  char *v77; // [sp+A8h] [bp-C0h]@15
  int v78; // [sp+ACh] [bp-BCh]@15
  char v79; // [sp+B0h] [bp-B8h]@15
  char v80; // [sp+C8h] [bp-A0h]@15
  char *v81; // [sp+E4h] [bp-84h]@13
  char *v82; // [sp+E8h] [bp-80h]@13
  int v83; // [sp+ECh] [bp-7Ch]@13
  char v84; // [sp+F0h] [bp-78h]@13
  char v85; // [sp+108h] [bp-60h]@13
  char *v86; // [sp+124h] [bp-44h]@11
  char *v87; // [sp+128h] [bp-40h]@11
  int v88; // [sp+12Ch] [bp-3Ch]@11
  char *v89; // [sp+134h] [bp-34h]@9
  char *v90; // [sp+138h] [bp-30h]@9
  int v91; // [sp+13Ch] [bp-2Ch]@9

  v1 = this;
  v65 = this;
  v4 = (mce::TexturePtr *)*((_DWORD *)this + 51);
  v2 = (char *)this + 204;
  v3 = v4;
  v5 = (mce::TexturePtr *)*((_DWORD *)v2 + 1);
  if ( v4 == v5 )
  {
    v6 = -1431655765 * ((v5 - v3) >> 3);
    if ( v6 >> 9 )
    {
      if ( v6 > 0x200 )
      {
        v7 = (int)v3 + 12288;
        if ( v5 != (mce::TexturePtr *)((char *)v3 + 12288) )
        {
          v8 = (mce::TexturePtr *)((char *)v3 + 12288);
          do
            v8 = (mce::TexturePtr *)((char *)mce::TexturePtr::~TexturePtr(v8) + 24);
          while ( v5 != v8 );
        }
        *((_DWORD *)v1 + 52) = v7;
      }
    }
    else
      std::vector<ItemGraphics,std::allocator<ItemGraphics>>::_M_default_append((int)v2, 512 - v6);
    v9 = (mce::TextureGroup *)*((_DWORD *)v1 + 33);
    sub_119C884((void **)&v89, "textures/items/watch_atlas");
    v90 = v89;
    v89 = (char *)&unk_28898CC;
    v91 = 0;
    v10 = mce::TextureGroup::getTexturePair(v9, (const ResourceLocation *)&v90);
    v11 = v90 - 12;
    if ( (int *)(v90 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v90 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
      else
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
    v12 = v89 - 12;
    if ( (int *)(v89 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v89 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    v13 = (mce::TextureGroup *)*((_DWORD *)v1 + 33);
    sub_119C884((void **)&v86, "textures/items/compass_atlas");
    v87 = v86;
    v86 = (char *)&unk_28898CC;
    v88 = 0;
    v14 = mce::TextureGroup::getTexturePair(v13, (const ResourceLocation *)&v87);
    v15 = v87 - 12;
    if ( (int *)(v87 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v87 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = (unsigned int *)&dword_28898C0;
    v17 = v86 - 12;
    if ( (int *)(v86 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v86 - 4);
          v56 = __ldrex(v16);
        while ( __strex(v56 - 1, v16) );
        v56 = (*v16)--;
      if ( v56 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v18 = (mce::TextureContainer *)(v10 + 64);
    ImageUtils::uncompress((ImageUtils *)(v10 + 64), 0, (bool)v16);
    v19 = (mce::TextureContainer *)(v14 + 64);
    ImageUtils::uncompress((ImageUtils *)(v14 + 64), 0, v20);
    v21 = (mce::TextureGroup *)*((_DWORD *)v1 + 33);
    v22 = *((_DWORD *)v1 + 51);
    v23 = *(_WORD *)(Item::mClock + 18);
    sub_119C884((void **)&v81, "textures/items/watch_atlas");
    v82 = v81;
    v83 = 0;
    v81 = (char *)&unk_28898CC;
    mce::TextureGroup::getTexture((mce::TexturePtr *)&v84, v21, (int)&v82, 0);
    mce::TexturePtr::TexturePtr((int)&v85, (int)&v84);
    mce::TexturePtr::operator=((mce::TexturePtr *)(v22 + 24 * v23), (mce::TexturePtr *)&v85);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v85);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v84);
    v24 = v82 - 12;
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v82 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
    v25 = v81 - 12;
    if ( (int *)(v81 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v81 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v25);
    v26 = (ClockItem *)Item::mClock;
    v27 = (const mce::ImageBuffer *)mce::TextureContainer::getImage(v18, 0);
    ClockItem::populateFrames(v26, v27);
    v28 = (mce::TextureGroup *)*((_DWORD *)v1 + 33);
    v29 = *((_DWORD *)v1 + 51);
    v30 = *(_WORD *)(Item::mCompass + 18);
    sub_119C884((void **)&v76, "textures/items/compass_atlas");
    v77 = v76;
    v78 = 0;
    v76 = (char *)&unk_28898CC;
    mce::TextureGroup::getTexture((mce::TexturePtr *)&v79, v28, (int)&v77, 0);
    mce::TexturePtr::TexturePtr((int)&v80, (int)&v79);
    mce::TexturePtr::operator=((mce::TexturePtr *)(v29 + 24 * v30), (mce::TexturePtr *)&v80);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v80);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v79);
    v31 = v77 - 12;
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v77 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v31);
    v32 = v76 - 12;
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v76 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v32);
    v33 = (CompassItem *)Item::mCompass;
    v34 = (const mce::ImageBuffer *)mce::TextureContainer::getImage(v19, 0);
    CompassItem::populateFrames(v33, v34);
    v36 = (mce::TexturePtr *)(*(_QWORD *)((char *)v1 + 204) >> 32);
    v35 = (mce::TexturePtr *)*(_QWORD *)((char *)v1 + 204);
    if ( v35 != v36 )
      v37 = (mce::TexturePtr *)&v70;
      v38 = 0;
      while ( mce::TexturePtr::operator bool((int)v35) )
LABEL_54:
        v35 = (mce::TexturePtr *)((char *)v35 + 24);
        if ( v35 == v36 )
          return;
      v46 = (mce::TextureGroup *)*((_DWORD *)v1 + 33);
      if ( v38 > 255 )
        sub_119C884((void **)&v66, "atlas.items");
        v67 = v66;
        v66 = (char *)&unk_28898CC;
        v68 = 0;
        mce::TextureGroup::getTexture((mce::TexturePtr *)&v69, v46, (int)&v67, 0);
        mce::TexturePtr::TexturePtr((int)v37, (int)&v69);
        mce::TexturePtr::operator=(v35, v37);
        mce::TexturePtr::~TexturePtr(v37);
        mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v69);
        v49 = v67 - 12;
        if ( (int *)(v67 - 12) != &dword_28898C0 )
          v41 = (unsigned int *)(v67 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
          }
          else
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v49);
        v48 = v66 - 12;
        if ( (int *)(v66 - 12) == &dword_28898C0 )
          goto LABEL_53;
        v43 = (unsigned int *)(v66 - 4);
        if ( &pthread_create )
          v44 = v37;
          __dmb();
            v45 = __ldrex(v43);
          while ( __strex(v45 - 1, v43) );
          goto LABEL_30;
        sub_119C884((void **)&v71, "atlas.terrain");
        v72 = v71;
        v71 = (char *)&unk_28898CC;
        v73 = 0;
        mce::TextureGroup::getTexture((mce::TexturePtr *)&v74, v46, (int)&v72, 0);
        mce::TexturePtr::TexturePtr((int)&v75, (int)&v74);
        mce::TexturePtr::operator=(v35, (mce::TexturePtr *)&v75);
        mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v75);
        mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v74);
        v47 = v72 - 12;
        if ( (int *)(v72 - 12) != &dword_28898C0 )
          v39 = (unsigned int *)(v72 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v47);
        v48 = v71 - 12;
        if ( (int *)(v71 - 12) == &dword_28898C0 )
        v43 = (unsigned int *)(v71 - 4);
LABEL_30:
          v37 = v44;
          goto LABEL_32;
      v45 = (*v43)--;
LABEL_32:
      if ( v45 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v48);
LABEL_53:
      ++v38;
      v1 = v65;
      goto LABEL_54;
  }
}


void __fastcall ItemRenderer::_getShulkerBoxTexture(ItemRenderer *this, const ItemInstance *a2, ItemInstance *a3)
{
  ItemRenderer::_getShulkerBoxTexture(this, a2, a3);
}


mce::TexturePtr *__fastcall ItemRenderer::renderGuiItemInChunk(int a1, int a2, int a3, ItemInstance *this, float a5, float a6, float a7, int a8, float a9, int a10, int a11)
{
  ItemInstance *v11; // r6@1
  int v12; // r5@1
  mce::TexturePtr *result; // r0@1
  int v14; // r7@1
  BaseEntityRenderContext *v15; // r4@1
  int v17; // r8@6
  int v21; // r0@7
  int v22; // r9@7
  bool v23; // zf@8
  Tessellator *v24; // r7@12
  char *v27; // r0@13
  bool v28; // zf@15
  bool v29; // zf@21
  char v33; // r6@30
  float v34; // r5@32
  int v35; // r0@32
  char *v36; // r0@32
  BlockEntityRenderDispatcher *v37; // r0@38
  BannerRenderer *v38; // r7@38
  BlockEntity *v39; // r5@38
  signed int v40; // r0@38
  int v42; // r2@38
  int (__fastcall *v43)(int, int); // r10@44
  int v44; // r0@44
  int v45; // r0@44
  BlockEntityRenderDispatcher *v46; // r0@45
  int v47; // r7@45
  int v48; // r5@45
  int v49; // r0@45
  int v50; // r8@47
  bool v51; // r2@48
  int v52; // r9@52
  signed int v53; // r7@54
  int v56; // [sp+0h] [bp-108h]@0
  float v57; // [sp+4h] [bp-104h]@0
  float v58; // [sp+8h] [bp-100h]@0
  float v59; // [sp+Ch] [bp-FCh]@0
  float v60; // [sp+10h] [bp-F8h]@0
  float v61; // [sp+1Ch] [bp-ECh]@0
  float v62; // [sp+20h] [bp-E8h]@0
  char v63; // [sp+28h] [bp-E0h]@57
  char v64; // [sp+40h] [bp-C8h]@46
  char v65; // [sp+50h] [bp-B8h]@32
  char v66; // [sp+51h] [bp-B7h]@32
  char v67; // [sp+54h] [bp-B4h]@28
  char v68; // [sp+6Ch] [bp-9Ch]@13
  char v69; // [sp+84h] [bp-84h]@12
  float v70; // [sp+9Ch] [bp-6Ch]@29
  int v71; // [sp+A4h] [bp-64h]@12

  v11 = this;
  v12 = a1;
  result = (mce::TexturePtr *)*((_BYTE *)this + 15);
  v14 = a3;
  v15 = (BaseEntityRenderContext *)a2;
  _ZF = result == 0;
  if ( *((_BYTE *)this + 15) )
  {
    result = *(mce::TexturePtr **)this;
    _ZF = *(_DWORD *)this == 0;
  }
  if ( !_ZF )
    result = (mce::TexturePtr *)ItemInstance::isNull(this);
    if ( !result )
    {
      result = (mce::TexturePtr *)*((_BYTE *)v11 + 14);
      if ( *((_BYTE *)v11 + 14) )
      {
        v17 = *((_DWORD *)v11 + 1);
        __asm
        {
          VLDR            S18, [SP,#0x108+arg_10]
          VLDR            S16, [SP,#0x108+arg_8]
          VLDR            S20, [SP,#0x108+arg_4]
          VLDR            S22, [SP,#0x108+arg_0]
        }
        if ( _ZF )
          (*(void (**)(void))(**(_DWORD **)v11 + 60))();
        else
          v21 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(v17 + 4)]);
          v22 = v21;
          result = (mce::TexturePtr *)BlockTessellator::canRender(v21);
          if ( result == (mce::TexturePtr *)1 )
          {
            v23 = v14 == 9;
            if ( v14 != 9 )
              v23 = v14 == 0;
            if ( !v23 )
              return result;
            v24 = (Tessellator *)BaseEntityRenderContext::getTessellator(v15);
            _R0 = ItemInstance::getPickupPopPercentage(v11);
            __asm
            {
              VMOV.F32        S0, #2.0
              VMOV            S2, R0
              VMOV.F32        S28, #1.0
              VMOV.F32        S4, #3.0
              VSUB.F32        S0, S0, S2
              VSUB.F32        S2, S4, S2
              VDIV.F32        S24, S28, S0
              VMOV.F32        S0, #0.5
              VMUL.F32        S26, S2, S0
              VMUL.F32        S30, S26, S18
            }
              VMOV.F32        S0, #-1.0
              VMUL.F32        S4, S24, S18
              VMOV.F32        S6, #-2.0
              VADD.F32        S2, S30, S2
              VMOV.F32        S8, #-6.0
              VADD.F32        S10, S22, S28
              VADD.F32        S0, S4, S0
              VMOV.F32        S4, #4.0
              VADD.F32        S2, S2, S6
              VLDR            S6, =12.48
              VADD.F32        S6, S20, S6
              VMUL.F32        S0, S0, S8
              VMUL.F32        S2, S2, S4
              VADD.F32        S0, S10, S0
              VADD.F32        S2, S6, S2
              VSTR            S0, [SP,#0x108+var_6C]
              VSTR            S2, [SP,#0x108+var_68]
            v71 = -1054867456;
            mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v69);
            if ( v22 == 89 )
              ItemRenderer::_getShulkerBoxTexture((ItemRenderer *)&v68, (const ItemInstance *)v12, v11);
              mce::TexturePtr::operator=((mce::TexturePtr *)&v69, (mce::TexturePtr *)&v68);
              v27 = &v68;
            else
              EntityRenderer::getAtlasTexture((EntityRenderer *)&v67, v12);
              mce::TexturePtr::operator=((mce::TexturePtr *)&v69, (mce::TexturePtr *)&v67);
              v27 = &v67;
            mce::TexturePtr::~TexturePtr((mce::TexturePtr *)v27);
            Tessellator::setOffset(v24, (const Vec3 *)&v70);
              VMOV.F32        S0, #10.0
              VMUL.F32        S0, S18, S0
              VMUL.F32        S2, S24, S0
              VMUL.F32        S4, S26, S0
              VMOV            R3, S0
              VMOV            R1, S2
              VMOV            R2, S4
            Tessellator::scale3d(v24, _R1, _R2, _R3);
            Tessellator::tilt(v24);
            if ( ItemInstance::getAuxValue(v11) < 0 )
              v33 = 0;
              v33 = ItemInstance::getAuxValue(v11);
            v34 = *(float *)(v12 + 136);
            v35 = BaseEntityRenderContext::getScreenContext(v15);
            v65 = *(_BYTE *)(v17 + 4);
            v66 = v33;
            __asm { VSTR            S16, [SP,#0x108+var_108] }
            BlockTessellator::renderGuiBlock(v34, *(float *)&v35, (int)&v65, (int)&v69, v56, 0);
            Tessellator::resetScale(v24);
            Tessellator::resetTilt(v24);
            Tessellator::setOffset(v24, (const Vec3 *)&Vec3::ZERO);
            v36 = &v69;
            return mce::TexturePtr::~TexturePtr((mce::TexturePtr *)v36);
          }
        result = *(mce::TexturePtr **)v11;
        v28 = *(_DWORD *)v11 == 0;
        if ( *(_DWORD *)v11 )
          v28 = v14 == 0;
        if ( !v28 )
          if ( v14 != 9 )
            if ( v14 == 2 && v17 )
            v29 = v14 == 1;
            if ( v14 == 1 )
              v29 = v17 == 0;
            if ( v29 )
            if ( v14 == 5 )
              result = (mce::TexturePtr *)ItemInstance::isGlint(v11);
              if ( result != (mce::TexturePtr *)1 )
                return result;
            else if ( v14 == 3 )
              if ( !result )
          if ( *(_DWORD *)v11 != Item::mBanner
            && ItemInstance::getId(v11) != *(_BYTE *)(Block::mStandingBanner + 4)
            && ItemInstance::getId(v11) != *(_BYTE *)(Block::mWallBanner + 4) )
            if ( *(_DWORD *)v11 == Item::mSkull )
              v46 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(v15);
              v47 = BlockEntityRenderDispatcher::getRenderer(v46, *(BlockEntity **)(v12 + 292));
              v48 = *(_DWORD *)(v12 + 292);
              v49 = ItemInstance::getAuxValue(v11);
              __asm
              {
                VSTR            S22, [SP,#0x108+var_108]
                VSTR            S20, [SP,#0x108+var_104]
                VSTR            S18, [SP,#0x108+var_100]
                VSTR            S16, [SP,#0x108+var_FC]
              }
              return (mce::TexturePtr *)SkullBlockRenderer::renderInGui(
                                          v47,
                                          v15,
                                          v48,
                                          v49,
                                          *(float *)&v56,
                                          v57,
                                          v58,
                                          v59);
            if ( v17 )
              v43 = *(int (__fastcall **)(int, int))(*(_DWORD *)v17 + 384);
              v44 = ItemInstance::getAuxValue(v11);
              v45 = v43(v17, v44);
              (*(void (__fastcall **)(char *))(**(_DWORD **)v11 + 156))(&v64);
              v45 = Color::toARGB((Color *)&v64);
            v50 = v45;
            if ( a11 == 1 )
              v51 = 0;
              if ( !*(_BYTE *)(*(_DWORD *)v11 + 16) )
                v51 = 1;
              v51 = 1;
            v52 = ItemInstance::getIcon(v11, a10, v51);
              v53 = 2;
            else if ( v14 == 4 )
              v53 = 1;
              v53 = ItemInstance::isGlint(v11);
            _R6 = ItemInstance::getPickupPopPercentage(v11);
            mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v63);
              VMOV.F32        S2, #0.5
              VMOV.F32        S0, #3.0
              VMOV            S4, R6
              VMOV            R3, S22
              VMUL.F32        S2, S18, S2
              VSUB.F32        S0, S0, S4
              VMUL.F32        S0, S2, S0
              VSTR            S16, [SP,#0x108+var_F8]
              VSTR            S20, [SP,#0x108+var_108]
              VSTR            S0, [SP,#0x108+var_E8]
              VSTR            S0, [SP,#0x108+var_EC]
            ItemRenderer::iconBlit(
              v12,
              v15,
              (int)&v63,
              _R3,
              *(float *)&v56,
              v52,
              16.0,
              v60,
              1.0,
              v50,
              v61,
              v62,
              v53);
            v36 = &v63;
          BannerBlockEntity::setItemValues(*(BannerBlockEntity **)(v12 + 288), v11);
          v37 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(v15);
          v38 = (BannerRenderer *)BlockEntityRenderDispatcher::getRenderer(v37, *(BlockEntity **)(v12 + 288));
          v39 = *(BlockEntity **)(v12 + 288);
          v40 = ItemInstance::getId(v11);
          __asm { VMOV            R3, S22 }
          v42 = 0;
          __asm { VSTR            S16, [SP,#0x108+var_FC] }
          if ( v40 != *(_BYTE *)(Block::mWallBanner + 4) )
            v42 = 1;
          __asm
            VSTR            S18, [SP,#0x108+var_104]
            VSTR            S20, [SP,#0x108+var_108]
          result = (mce::TexturePtr *)BannerRenderer::renderInGui(v38, v15, v39, _R3, *(float *)&v56, v57, v42, v59);
      }
    }
  return result;
}


int __fastcall ItemRenderer::getGraphics(ItemRenderer *this, const Item *a2)
{
  const Item *v2; // r4@1
  ItemRenderer *v3; // r5@1

  v2 = a2;
  v3 = this;
  ItemRenderer::_loadItemGraphics(this);
  return *((_DWORD *)v3 + 51) + 24 * *((_WORD *)v2 + 9);
}
