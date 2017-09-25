

void __fastcall ItemFrameRenderer::render(ItemFrameRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  ItemFrameRenderer::render(this, a2, a3);
}


int __fastcall ItemFrameRenderer::~ItemFrameRenderer(ItemFrameRenderer *this)
{
  ItemFrameRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB898;
  *((_DWORD *)this + 19) = &off_26DB8B8;
  mce::MaterialPtr::~MaterialPtr((ItemFrameRenderer *)((char *)this + 84));
  AppPlatformListener::~AppPlatformListener((ItemFrameRenderer *)((char *)v1 + 76));
  return j_j_j__ZN19BlockEntityRendererD2Ev(v1);
}


void __fastcall ItemFrameRenderer::render(ItemFrameRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  BlockEntityRenderData *v3; // r7@1
  ItemFrameRenderer *v4; // r10@1
  BlockSource *v5; // r4@1
  ItemFrameBlockEntity *v6; // r5@1
  char *v9; // r0@1
  unsigned int v10; // r6@1
  int v11; // r11@1
  char *v12; // r0@1
  char *v13; // r7@1
  int v14; // r0@1
  int v16; // r0@6
  int v22; // r6@13
  ItemFrameRenderer *v25; // r0@14
  float v26; // [sp+0h] [bp-98h]@0
  char v27; // [sp+8h] [bp-90h]@6
  int v28; // [sp+10h] [bp-88h]@13
  signed int v29; // [sp+14h] [bp-84h]@13
  int v30; // [sp+18h] [bp-80h]@13
  int v31; // [sp+1Ch] [bp-7Ch]@13
  int v32; // [sp+20h] [bp-78h]@13
  int v33; // [sp+24h] [bp-74h]@13
  int v34; // [sp+28h] [bp-70h]@13
  int v35; // [sp+2Ch] [bp-6Ch]@13
  int v36; // [sp+30h] [bp-68h]@13
  int v37; // [sp+34h] [bp-64h]@13
  int v38; // [sp+38h] [bp-60h]@13
  int v39; // [sp+3Ch] [bp-5Ch]@13
  int v40; // [sp+40h] [bp-58h]@13
  int v41; // [sp+44h] [bp-54h]@13
  int v42; // [sp+48h] [bp-50h]@13
  int v43; // [sp+4Ch] [bp-4Ch]@13
  int v44; // [sp+50h] [bp-48h]@13
  int v45; // [sp+54h] [bp-44h]@13
  int v46; // [sp+58h] [bp-40h]@13
  float v47; // [sp+5Ch] [bp-3Ch]@13

  v3 = a3;
  v4 = this;
  v5 = *(BlockSource **)a3;
  v6 = (ItemFrameBlockEntity *)*((_DWORD *)a3 + 1);
  _R9 = (const Vec3 *)*((_DWORD *)a3 + 2);
  _R8 = a2;
  v9 = BlockEntity::getPosition(*((BlockEntity **)a3 + 1));
  v10 = BlockSource::getData(v5, (const BlockPos *)v9);
  v11 = *((_DWORD *)v3 + 3);
  v12 = ItemFrameBlockEntity::getFramedItem(v6);
  v13 = v12;
  v14 = (unsigned __int8)v12[15];
  _ZF = v14 == 0;
  if ( v14 )
    _ZF = *(_DWORD *)v13 == 0;
  if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v13) && v13[14] )
  {
    v16 = BaseEntityRenderContext::getWorldMatrix(_R8);
    MatrixStack::push((MatrixStack *)&v27, v16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v27);
    __asm
    {
      VMOV.F32        S16, #0.5
      VLDR            S0, [R9]
      VLDR            S2, [R9,#4]
      VLDR            S4, [R9,#8]
      VLDR            S6, [R0]
      VLDR            S8, [R0,#4]
      VLDR            S14, [R0,#0x14]
      VLDR            S1, [R0,#0x10]
      VADD.F32        S0, S0, S16
      VLDR            S12, [R0,#0xC]
      VADD.F32        S2, S2, S16
      VLDR            S3, [R0,#0x18]
      VLDR            S10, [R0,#8]
      VADD.F32        S4, S4, S16
      VLDR            S5, [R0,#0x1C]
      VLDR            S7, [R0,#0x20]
      VMUL.F32        S6, S6, S0
      VMUL.F32        S1, S1, S2
      VMUL.F32        S8, S8, S0
      VMUL.F32        S14, S14, S2
      VMUL.F32        S12, S12, S0
      VMUL.F32        S0, S10, S0
      VLDR            S10, [R0,#0x24]
      VMUL.F32        S3, S3, S2
      VMUL.F32        S2, S5, S2
      VMUL.F32        S5, S7, S4
      VLDR            S7, [R0,#0x28]
      VADD.F32        S6, S1, S6
      VADD.F32        S8, S14, S8
      VLDR            S14, [R0,#0x2C]
      VMUL.F32        S10, S10, S4
      VMUL.F32        S1, S7, S4
      VADD.F32        S0, S3, S0
      VADD.F32        S2, S2, S12
      VLDR            S12, [R0,#0x38]
      VMUL.F32        S4, S14, S4
      VADD.F32        S6, S6, S5
      VADD.F32        S8, S8, S10
      VLDR            S10, [R0,#0x34]
      VADD.F32        S0, S0, S1
      VADD.F32        S2, S2, S4
      VLDR            S4, [R0,#0x30]
      VADD.F32        S4, S6, S4
      VLDR            S6, [R0,#0x3C]
      VADD.F32        S0, S0, S12
      VADD.F32        S2, S2, S6
      VSTR            S4, [R0,#0x30]
      VSTR            S8, [R0,#0x34]
      VSTR            S0, [R0,#0x38]
      VSTR            S2, [R0,#0x3C]
    }
    if ( _ZF )
      __asm { VLDR            S18, =270.0 }
    else if ( v10 == 2 )
      __asm { VLDR            S18, =0.0 }
    else
      _R0 = dword_EDD754;
      if ( v10 == 3 )
        _R0 = &dword_EDD754[1];
      __asm { VLDR            S18, [R0] }
    v22 = MatrixStack::MatrixStackRef::operator->((int)&v27);
    v28 = 0;
    v29 = 1065353216;
    v30 = 0;
    __asm { VSTR            S18, [SP,#0x98+var_3C] }
    glm::rotate<float>((int)&v31, v22, (int)&v47, (int)&v28);
    *(_DWORD *)v22 = v31;
    *(_DWORD *)(v22 + 4) = v32;
    *(_DWORD *)(v22 + 8) = v33;
    *(_DWORD *)(v22 + 12) = v34;
    *(_DWORD *)(v22 + 16) = v35;
    *(_DWORD *)(v22 + 20) = v36;
    *(_DWORD *)(v22 + 24) = v37;
    *(_DWORD *)(v22 + 28) = v38;
    *(_DWORD *)(v22 + 32) = v39;
    *(_DWORD *)(v22 + 36) = v40;
    *(_DWORD *)(v22 + 40) = v41;
    *(_DWORD *)(v22 + 44) = v42;
    *(_DWORD *)(v22 + 48) = v43;
    *(_DWORD *)(v22 + 52) = v44;
    *(_DWORD *)(v22 + 56) = v45;
    *(_DWORD *)(v22 + 60) = v46;
      VLDR            S0, [R0,#4]
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
      VADD.F32        S6, S6, S14
      VLDR            S8, [R0,#0x20]
      VLDR            S12, [R0,#0x28]
      VADD.F32        S0, S0, S10
      VLDR            S1, [R0,#0x30]
      VLDR            S3, [R0,#0x34]
      VADD.F32        S4, S4, S14
      VLDR            S5, [R0,#0x38]
      VLDR            S7, [R0,#0x3C]
      VADD.F32        S6, S6, S8
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S16
      VMUL.F32        S4, S4, S16
      VMUL.F32        S6, S6, S16
      VSUB.F32        S0, S3, S0
      VSUB.F32        S2, S5, S2
      VSUB.F32        S4, S7, S4
      VSUB.F32        S6, S1, S6
      VSTR            S6, [R0,#0x30]
      VSTR            S0, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
      VSTR            S4, [R0,#0x3C]
      VSUB.F32        S0, S0, S10
      VSUB.F32        S2, S2, S12
      VSUB.F32        S4, S4, S14
      VSUB.F32        S6, S6, S8
      VADD.F32        S0, S0, S3
      VADD.F32        S2, S2, S5
      VADD.F32        S4, S4, S7
      VADD.F32        S6, S6, S1
      VLDR            S0, [R8,#4]
      VSTR            S0, [SP,#0x98+var_98]
    ItemFrameRenderer::_drawItem(v4, _R8, v5, v6, v26);
    MatrixStack::MatrixStackRef::release((MatrixStack::MatrixStackRef *)&v27);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v27);
  }
  v25 = (ItemFrameRenderer *)*((_DWORD *)v4 + 22);
  if ( *(ItemFrameRenderer **)(v11 + 4) != v25 )
    ItemFrameRenderer::_renderName(v25, _R8, v6, _R9, v26);
}


int __fastcall ItemFrameRenderer::ItemFrameRenderer(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+8h] [bp-20h]@1

  v1 = a1;
  _aeabi_memclr4(a1, 76);
  BaseEntityRenderer::BaseEntityRenderer((BaseEntityRenderer *)v1);
  *(_DWORD *)v1 = &off_26DAF04;
  AppPlatformListener::AppPlatformListener((_QWORD *)(v1 + 76));
  *(_DWORD *)v1 = &off_26DB898;
  *(_DWORD *)(v1 + 76) = &off_26DB8B8;
  sub_119C884((void **)&v6, "selection_overlay_item");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 84),
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
  return v1;
}


void __fastcall ItemFrameRenderer::~ItemFrameRenderer(ItemFrameRenderer *this)
{
  ItemFrameRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB898;
  *((_DWORD *)this + 19) = &off_26DB8B8;
  mce::MaterialPtr::~MaterialPtr((ItemFrameRenderer *)((char *)this + 84));
  AppPlatformListener::~AppPlatformListener((ItemFrameRenderer *)((char *)v1 + 76));
  BlockEntityRenderer::~BlockEntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall ItemFrameRenderer::_renderName(ItemFrameRenderer *this, BaseEntityRenderContext *a2, ItemFrameBlockEntity *a3, const Vec3 *a4, float a5)
{
  ItemFrameRenderer::_renderName(this, a2, a3, a4, a5);
}


void __fastcall ItemFrameRenderer::~ItemFrameRenderer(ItemFrameRenderer *this)
{
  ItemFrameRenderer::~ItemFrameRenderer(this);
}


void __fastcall ItemFrameRenderer::_renderName(ItemFrameRenderer *this, BaseEntityRenderContext *a2, ItemFrameBlockEntity *a3, const Vec3 *a4, float a5)
{
  BlockEntity *v5; // r7@1
  BaseEntityRenderContext *v7; // r4@1
  char *v8; // r5@1
  EntityRenderDispatcher *v9; // r8@3
  char *v10; // r6@3
  char *v11; // r0@3
  Entity *v12; // r0@6
  int v13; // r7@6
  void *v19; // r0@7
  unsigned int *v20; // r2@9
  signed int v21; // r1@11
  int v22; // [sp+4h] [bp-4Ch]@7
  float v23; // [sp+8h] [bp-48h]@7

  v5 = a3;
  _R9 = a4;
  v7 = a2;
  v8 = ItemFrameBlockEntity::getFramedItem(a3);
  if ( !ItemInstance::isNull((ItemInstance *)v8) && ItemInstance::hasCustomHoverName((ItemInstance *)v8) == 1 )
  {
    v9 = (EntityRenderDispatcher *)BaseEntityRenderContext::getEntityRenderDispatcher(v7);
    v10 = BaseEntityRenderContext::getHitResult(v7);
    v11 = BlockEntity::getPosition(v5);
    if ( *((_DWORD *)v10 + 2) == *(_DWORD *)v11
      && *((_DWORD *)v10 + 3) == *((_DWORD *)v11 + 1)
      && *((_DWORD *)v10 + 4) == *((_DWORD *)v11 + 2) )
    {
      v12 = (Entity *)BaseEntityRenderContext::getCameraEntity(v7);
      v13 = EntityRenderDispatcher::getRenderer(v9, v12);
      if ( v13 )
      {
        __asm
        {
          VMOV.F32        S0, #0.5
          VLDR            S2, [R9]
          VLDR            S6, [R9,#8]
          VLDR            S4, [R9,#4]
          VLDR            S8, =1.3
          VADD.F32        S18, S4, S8
          VADD.F32        S16, S2, S0
          VADD.F32        S20, S6, S0
        }
        _R0 = BaseEntityRenderContext::getCameraTargetPosition(v7);
          VLDR            S0, [R0]
          VLDR            S2, [R0,#4]
          VLDR            S4, [R0,#8]
          VADD.F32        S0, S16, S0
          VADD.F32        S2, S18, S2
          VADD.F32        S4, S20, S4
          VSTR            S0, [SP,#0x50+var_48]
          VSTR            S2, [SP,#0x50+var_44]
          VSTR            S4, [SP,#0x50+var_40]
        ItemInstance::getName((ItemInstance *)&v22, (int)v8);
        BaseEntityRenderer::renderText(v13, v7, (int)&v22, (int)&v23, (int)&Color::WHITE);
        v19 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v22 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v19);
      }
    }
  }
}


int __fastcall ItemFrameRenderer::FaceUV::scaleToIcon(int result, const TextureUVCoordinateSet *_R1)
{
  __asm
  {
    VLDR            S0, =0.0625
    VLDR            S2, [R0,#4]
    VLDR            S4, [R1,#4]
    VLDR            S6, [R1,#0xC]
    VMUL.F32        S2, S2, S0
    VSUB.F32        S6, S6, S4
    VMUL.F32        S2, S2, S6
    VADD.F32        S2, S2, S4
    VSTR            S2, [R0,#4]
    VLDR            S2, [R0,#8]
    VLDR            S4, [R1,#8]
    VLDR            S6, [R1,#0x10]
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VSTR            S2, [R0,#0xC]
    VLDR            S2, [R0,#0x10]
    VMUL.F32        S0, S2, S0
    VSUB.F32        S2, S6, S4
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S4
    VSTR            S0, [R0,#0x10]
  }
  return result;
}


int __fastcall ItemFrameRenderer::_drawItem(ItemFrameRenderer *this, BaseEntityRenderContext *a2, BlockSource *a3, ItemFrameBlockEntity *a4, float a5)
{
  BaseEntityRenderContext *v5; // r6@1
  ItemFrameRenderer *v6; // r8@1
  ItemFrameBlockEntity *v7; // r5@1
  BlockSource *v8; // r4@1
  int v9; // r9@1
  BlockEntityRenderDispatcher *v10; // r7@1
  Level *v11; // r10@1
  char *v12; // r0@1
  ItemInstance *v13; // r0@1
  int v15; // r0@2
  int v16; // r8@2
  int v17; // r6@4
  signed int v23; // r4@4
  unsigned int v24; // r6@5
  int v25; // r0@6
  int v26; // r5@7
  char v27; // r0@8
  char *v28; // r0@10
  void (__fastcall *v29)(int *, char *); // r4@11
  char *v30; // r0@11
  int v32; // r0@11
  int v33; // r8@22
  float v34; // r3@22
  int v35; // r4@22
  float v36; // r5@22
  int v37; // r6@22
  int v38; // r7@22
  int v42; // r1@24
  MapItemSavedData *v43; // r4@24
  int v44; // r8@25
  int v46; // r5@26
  int v47; // r5@26
  const ItemInstance *v50; // r1@26
  _BOOL4 v51; // r5@26
  char *v52; // r0@26
  int v56; // r0@27
  int v60; // r1@29
  int v61; // r9@31
  BaseEntityRenderContext *v62; // r4@33
  int v68; // r0@36
  int v75; // r0@38
  void *v81; // r0@39
  ItemInHandRenderer *v82; // r7@41
  _DWORD *v83; // r8@41
  int v86; // r6@41
  int v88; // r6@41
  char *v89; // r0@43
  Tessellator *v90; // r6@44
  const mce::MaterialPtr *v91; // r4@45
  const mce::TexturePtr *v92; // r0@45
  int v93; // r0@46
  int result; // r0@52
  unsigned int *v95; // r2@55
  signed int v96; // r1@57
  int v97; // [sp+4h] [bp-21Ch]@0
  int v98; // [sp+1Ch] [bp-204h]@2
  BlockSource *v99; // [sp+24h] [bp-1FCh]@2
  BlockEntity *v100; // [sp+28h] [bp-1F8h]@2
  BaseEntityRenderContext *v101; // [sp+2Ch] [bp-1F4h]@2
  int v102; // [sp+30h] [bp-1F0h]@43
  signed int v103; // [sp+34h] [bp-1ECh]@43
  int v104; // [sp+38h] [bp-1E8h]@42
  signed int v105; // [sp+3Ch] [bp-1E4h]@42
  char v106; // [sp+40h] [bp-1E0h]@41
  int v107; // [sp+50h] [bp-1D0h]@22
  float v108; // [sp+54h] [bp-1CCh]@22
  int v109; // [sp+58h] [bp-1C8h]@22
  float v110; // [sp+5Ch] [bp-1C4h]@22
  int v111; // [sp+60h] [bp-1C0h]@22
  int v112; // [sp+64h] [bp-1BCh]@22
  int v113; // [sp+68h] [bp-1B8h]@22
  int v114; // [sp+6Ch] [bp-1B4h]@22
  __int64 v115; // [sp+70h] [bp-1B0h]@24
  char v116; // [sp+7Ch] [bp-1A4h]@11
  char v117; // [sp+E0h] [bp-140h]@11
  char v118; // [sp+11Ch] [bp-104h]@11
  char v119; // [sp+128h] [bp-F8h]@11
  char v120; // [sp+134h] [bp-ECh]@10
  char v121; // [sp+140h] [bp-E0h]@2
  int v122; // [sp+148h] [bp-D8h]@1
  int v123; // [sp+14Ch] [bp-D4h]@4
  int v124; // [sp+150h] [bp-D0h]@52
  void *v125; // [sp+16Ch] [bp-B4h]@50
  void *ptr; // [sp+17Ch] [bp-A4h]@48
  int v127; // [sp+190h] [bp-90h]@4
  int v128; // [sp+194h] [bp-8Ch]@4
  int v129; // [sp+198h] [bp-88h]@4
  int v130; // [sp+19Ch] [bp-84h]@4
  int v131; // [sp+1A0h] [bp-80h]@4
  int v132; // [sp+1A4h] [bp-7Ch]@4
  int v133; // [sp+1A8h] [bp-78h]@4
  int v134; // [sp+1ACh] [bp-74h]@4
  int v135; // [sp+1B0h] [bp-70h]@4
  int v136; // [sp+1B4h] [bp-6Ch]@4
  int v137; // [sp+1B8h] [bp-68h]@4
  int v138; // [sp+1BCh] [bp-64h]@4
  int v139; // [sp+1C0h] [bp-60h]@4
  int v140; // [sp+1C4h] [bp-5Ch]@4
  int v141; // [sp+1C8h] [bp-58h]@4
  int v142; // [sp+1CCh] [bp-54h]@4
  int v143; // [sp+1D0h] [bp-50h]@4
  int v144; // [sp+1D4h] [bp-4Ch]@4
  int v145; // [sp+1D8h] [bp-48h]@4
  float v146; // [sp+1DCh] [bp-44h]@4

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = BaseEntityRenderContext::getEntityRenderDispatcher(a2);
  v10 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(v5);
  v11 = (Level *)BlockSource::getLevel(v8);
  v12 = ItemFrameBlockEntity::getFramedItem(v7);
  v13 = ItemInstance::ItemInstance((ItemInstance *)&v122, (int)v12);
  if ( !ItemInstance::isNull(v13) )
  {
    _R11 = v122;
    v15 = BaseEntityRenderContext::getWorldMatrix(v5);
    MatrixStack::push((MatrixStack *)&v121, v15);
    v101 = v5;
    v98 = (int)v6;
    v99 = v8;
    v100 = v7;
    v16 = ItemFrameBlockEntity::getRotation(v7);
    if ( _R11 == Item::mFilledMap )
      v16 = 2 * (v16 & 3);
    v17 = MatrixStack::MatrixStackRef::operator->((int)&v121);
    _R0 = -v16;
    __asm { VLDR            S2, =45.0 }
    v23 = 0;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
    }
    v127 = 0;
    v128 = 0;
    v129 = 1065353216;
      VMUL.F32        S0, S0, S2
      VSTR            S0, [SP,#0x220+var_44]
    glm::rotate<float>((int)&v130, v17, (int)&v146, (int)&v127);
    *(_DWORD *)v17 = v130;
    *(_DWORD *)(v17 + 4) = v131;
    *(_DWORD *)(v17 + 8) = v132;
    *(_DWORD *)(v17 + 12) = v133;
    *(_DWORD *)(v17 + 16) = v134;
    *(_DWORD *)(v17 + 20) = v135;
    *(_DWORD *)(v17 + 24) = v136;
    *(_DWORD *)(v17 + 28) = v137;
    *(_DWORD *)(v17 + 32) = v138;
    *(_DWORD *)(v17 + 36) = v139;
    *(_DWORD *)(v17 + 40) = v140;
    *(_DWORD *)(v17 + 44) = v141;
    *(_DWORD *)(v17 + 48) = v142;
    *(_DWORD *)(v17 + 52) = v143;
    *(_DWORD *)(v17 + 56) = v144;
    *(_DWORD *)(v17 + 60) = v145;
    if ( v123 )
      v24 = BlockGraphics::mBlocks[*(_BYTE *)(v123 + 4)];
      if ( v24 )
      {
        v25 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(v123 + 4)]);
        if ( BlockTessellator::canRender(v25) == 1 )
        {
          v26 = EntityRenderDispatcher::getRenderer(v9, 4);
          if ( v26 )
          {
            v27 = byte_27CF3D0;
            __dmb();
            if ( !(v27 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27CF3D0) )
            {
              v28 = BlockEntity::getPosition(v100);
              Vec3::Vec3((int)&v120, (int)v28);
              ItemEntity::ItemEntity((int)&dword_27CE610, v99, (int)&v120, (int)&v122, 0, 1065353216, 1);
              _cxa_atexit(ItemEntity::~ItemEntity);
              j___cxa_guard_release((unsigned int *)&byte_27CF3D0);
            }
            Entity::setRegion((Entity *)&dword_27CE610, v99);
            v29 = *(void (__fastcall **)(int *, char *))(dword_27CE610 + 48);
            v30 = BlockEntity::getPosition(v100);
            Vec3::Vec3((int)&v119, (int)v30);
            v29(&dword_27CE610, &v119);
            ItemInstance::operator=((int)&unk_27CF368, (int)&v122);
            dword_27CF3BC = 0;
            _R0 = MatrixStack::MatrixStackRef::operator->((int)&v121);
            __asm
              VMOV.F32        S0, #0.5625
              VLDR            S2, [R0,#0x20]
              VLDR            S4, [R0,#0x24]
              VLDR            S6, [R0,#0x28]
              VLDR            S8, [R0,#0x2C]
              VLDR            S10, [R0,#0x30]
              VLDR            S12, [R0,#0x34]
              VLDR            S14, [R0,#0x38]
              VMUL.F32        S2, S2, S0
              VLDR            S1, [R0,#0x3C]
              VMUL.F32        S4, S4, S0
              VMUL.F32        S6, S6, S0
              VMUL.F32        S0, S8, S0
              VADD.F32        S2, S10, S2
              VADD.F32        S4, S12, S4
              VADD.F32        S6, S14, S6
              VADD.F32        S0, S1, S0
              VSTR            S2, [R0,#0x30]
              VSTR            S4, [R0,#0x34]
              VSTR            S6, [R0,#0x38]
              VSTR            S0, [R0,#0x3C]
            EntityRenderData::EntityRenderData((int)&v118, (int)&dword_27CE610, (int)&Vec3::ZERO, (int)&Vec2::ZERO);
            v32 = BaseEntityRenderContext::getScreenContext(v101);
            ScreenContextHelper::makeScreenContextAlphaOverride((UIScreenContext *)&v117, v32, 1.0);
            BaseEntityRenderContext::overrideScreenContext((int)&v116, (int)v101, (int)&v117);
            (*(void (__fastcall **)(int, char *, char *))(*(_DWORD *)v26 + 12))(v26, &v116, &v118);
            BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v116);
          }
          goto LABEL_47;
        }
        v23 = 1;
LABEL_15:
        if ( _R11 )
          if ( _R11 == Item::mFilledMap )
            MapItem::getMapId((MapItem *)&v115, (const ItemInstance *)&v122);
            v43 = Level::getMapSavedData((int)v11, v42, v115);
            if ( v43 )
              v44 = EntityRenderDispatcher::getRenderer(v9, 59);
              if ( v44 )
              {
                _R0 = MatrixStack::MatrixStackRef::operator->((int)&v121);
                __asm
                {
                  VMOV.F32        S0, #0.5625
                  VLDR            S2, [R0,#0x20]
                  VLDR            S4, [R0,#0x24]
                  VLDR            S6, [R0,#0x28]
                  VLDR            S8, [R0,#0x2C]
                  VLDR            S10, [R0,#0x30]
                  VLDR            S12, [R0,#0x34]
                  VLDR            S14, [R0,#0x38]
                  VMUL.F32        S2, S2, S0
                  VLDR            S1, [R0,#0x3C]
                  VMUL.F32        S4, S4, S0
                  VMUL.F32        S6, S6, S0
                  VMUL.F32        S0, S8, S0
                  VADD.F32        S2, S10, S2
                  VADD.F32        S4, S12, S4
                  VADD.F32        S6, S14, S6
                  VADD.F32        S0, S1, S0
                  VSTR            S2, [R0,#0x30]
                  VSTR            S4, [R0,#0x34]
                  VSTR            S6, [R0,#0x38]
                  VSTR            S0, [R0,#0x3C]
                }
                v46 = MatrixStack::MatrixStackRef::operator->((int)&v121);
                v127 = 0;
                v128 = 0;
                v129 = 1065353216;
                v146 = 180.0;
                glm::rotate<float>((int)&v130, v46, (int)&v146, (int)&v127);
                *(_DWORD *)v46 = v130;
                *(_DWORD *)(v46 + 4) = v131;
                *(_DWORD *)(v46 + 8) = v132;
                *(_DWORD *)(v46 + 12) = v133;
                *(_DWORD *)(v46 + 16) = v134;
                *(_DWORD *)(v46 + 20) = v135;
                *(_DWORD *)(v46 + 24) = v136;
                *(_DWORD *)(v46 + 28) = v137;
                *(_DWORD *)(v46 + 32) = v138;
                *(_DWORD *)(v46 + 36) = v139;
                *(_DWORD *)(v46 + 40) = v140;
                *(_DWORD *)(v46 + 44) = v141;
                *(_DWORD *)(v46 + 48) = v142;
                *(_DWORD *)(v46 + 52) = v143;
                *(_DWORD *)(v46 + 56) = v144;
                *(_DWORD *)(v46 + 60) = v145;
                v47 = MatrixStack::MatrixStackRef::operator->((int)&v121);
                *(_QWORD *)&v127 = 4575657221408423936LL;
                v129 = 0;
                glm::rotate<float>((int)&v130, v47, (int)&v146, (int)&v127);
                *(_DWORD *)v47 = v130;
                *(_DWORD *)(v47 + 4) = v131;
                *(_DWORD *)(v47 + 8) = v132;
                *(_DWORD *)(v47 + 12) = v133;
                *(_DWORD *)(v47 + 16) = v134;
                *(_DWORD *)(v47 + 20) = v135;
                *(_DWORD *)(v47 + 24) = v136;
                *(_DWORD *)(v47 + 28) = v137;
                *(_DWORD *)(v47 + 32) = v138;
                *(_DWORD *)(v47 + 36) = v139;
                *(_DWORD *)(v47 + 40) = v140;
                *(_DWORD *)(v47 + 44) = v141;
                *(_DWORD *)(v47 + 48) = v142;
                *(_DWORD *)(v47 + 52) = v143;
                *(_DWORD *)(v47 + 56) = v144;
                *(_DWORD *)(v47 + 60) = v145;
                  VLDR            S0, =0.0078125
                  VLDR            S2, [R0]
                  VSTR            S2, [R0]
                  VLDR            S2, [R0,#4]
                  VSTR            S2, [R0,#4]
                  VLDR            S2, [R0,#8]
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
                  VSTR            S2, [R0,#0x20]
                  VLDR            S2, [R0,#0x24]
                  VSTR            S2, [R0,#0x24]
                  VLDR            S2, [R0,#0x28]
                  VSTR            S2, [R0,#0x28]
                  VLDR            S2, [R0,#0x2C]
                  VMUL.F32        S0, S2, S0
                  VSTR            S0, [R0,#0x2C]
                  VLDR            S0, [R0,#4]
                  VLDR            S8, [R0,#0x14]
                  VLDR            S10, [R0,#0x18]
                  VADD.F32        S0, S8, S0
                  VLDR            S4, [R0,#0xC]
                  VLDR            S12, [R0,#0x1C]
                  VLDR            S6, [R0,#0x10]
                  VLDR            S14, [R0]
                  VLDR            S8, =64.0
                  VADD.F32        S6, S6, S14
                  VLDR            S10, [R0,#0x34]
                  VMUL.F32        S0, S0, S8
                  VLDR            S12, [R0,#0x38]
                  VLDR            S14, [R0,#0x3C]
                  VMUL.F32        S2, S2, S8
                  VMUL.F32        S4, S4, S8
                  VMUL.F32        S6, S6, S8
                  VLDR            S8, [R0,#0x30]
                  VSUB.F32        S0, S10, S0
                  VSUB.F32        S2, S12, S2
                  VSUB.F32        S4, S14, S4
                  VSUB.F32        S6, S8, S6
                  VSTR            S6, [R0,#0x30]
                  VSTR            S0, [R0,#0x34]
                  VSTR            S2, [R0,#0x38]
                  VSTR            S4, [R0,#0x3C]
                v51 = MapItem::doesDisplayPlayerMarkers((MapItem *)&v122, v50);
                v52 = BlockEntity::getPosition(v100);
                MapRenderer::render(v44, v101, 0, (int)v52, (int)v99, (int)v43, 1, !v51);
              }
            else if ( Level::isClientSide(v11) == 1 )
              Level::requestMapInfo((signed int)v11, v60, v115, HIDWORD(v115));
            goto LABEL_47;
          if ( _R11 == Item::mSkull )
              VMOV.F32        S16, #0.5
              VLDR            S0, [R0]
              VMUL.F32        S0, S0, S16
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
              VMOV.F32        S0, #-0.25
              VLDR            S4, [R0,#8]
              VLDR            S6, [R0,#0xC]
              VMOV.F32        S3, #0.625
              VLDR            S8, [R0,#0x10]
              VMUL.F32        S4, S4, S16
              VLDR            S10, [R0,#0x14]
              VMUL.F32        S6, S6, S16
              VLDR            S12, [R0,#0x18]
              VLDR            S14, [R0,#0x1C]
              VLDMIA          R0, {S1-S2}
              VMUL.F32        S10, S10, S0
              VMUL.F32        S2, S2, S16
              VLDR            S5, [R0,#0x24]
              VMUL.F32        S1, S1, S16
              VLDR            S7, [R0,#0x20]
              VMUL.F32        S8, S8, S0
              VMUL.F32        S12, S12, S0
              VMUL.F32        S0, S14, S0
              VMUL.F32        S14, S5, S3
              VMUL.F32        S5, S7, S3
              VLDR            S7, [R0,#0x28]
              VSUB.F32        S2, S10, S2
              VLDR            S10, [R0,#0x2C]
              VSUB.F32        S8, S8, S1
              VSUB.F32        S4, S12, S4
              VLDR            S12, [R0,#0x38]
              VMUL.F32        S1, S7, S3
              VSUB.F32        S0, S0, S6
              VMUL.F32        S10, S10, S3
              VADD.F32        S2, S2, S14
              VADD.F32        S6, S8, S5
              VLDR            S8, [R0,#0x30]
              VADD.F32        S4, S4, S1
              VADD.F32        S0, S0, S10
              VLDR            S10, [R0,#0x34]
              VADD.F32        S2, S2, S10
              VADD.F32        S6, S6, S8
              VLDR            S8, [R0,#0x3C]
              VADD.F32        S4, S4, S12
              VADD.F32        S0, S0, S8
              VSTR            S6, [R0,#0x30]
              VSTR            S2, [R0,#0x34]
              VSTR            S4, [R0,#0x38]
            v56 = ItemInstance::getAuxValue((ItemInstance *)&v122);
            BlockEntityRenderDispatcher::renderSkull(
              (int)v10,
              (int)v101,
              (int)&Vec3::ZERO,
              1,
              1127481344,
              *(float *)&v56,
              0,
              0.0);
          else
            if ( _R11 != Item::mBanner )
              if ( _R11 == Item::mCompass )
                v61 = ItemFrameBlockEntity::getCompassFrame(v7);
              else
                if ( _R11 != Item::mClock )
                  if ( v23 == 1 )
                  {
                    v33 = BlockGraphics::getTexture(v24, 0, 0);
                    v34 = *(float *)(v33 + 4);
                    v35 = *(_DWORD *)(v33 + 8);
                    v36 = *(float *)(v33 + 12);
                    v37 = *(_DWORD *)(v33 + 16);
                    v38 = *(_DWORD *)(v33 + 20);
                    v107 = *(_DWORD *)v33;
                    v108 = v34;
                    v109 = v35;
                    v110 = v36;
                    v111 = v37;
                    v112 = v38;
                    sub_119C854(&v113, (int *)(v33 + 24));
                    v114 = *(_DWORD *)(v33 + 28);
                    _R0 = (unsigned __int16)v38;
                    __asm
                    {
                      VMOV            S0, R0
                      VCVT.F32.U32    S16, S0
                      VLDR            S18, [SP,#0x220+var_1CC]
                      VLDR            S20, [SP,#0x220+var_1C4]
                      VCMPE.F32       S20, S18
                      VMRS            APSR_nzcv, FPSCR
                    }
                    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                      __asm
                      {
                        VMUL.F32        S0, S16, S18
                        VMOV            R0, S0
                      }
                      v75 = roundf(_R0);
                      __asm { VMUL.F32        S0, S16, S20 }
                      _R5 = v75;
                    else
                        VMUL.F32        S0, S16, S20
                      _R5 = roundf(_R0);
                      __asm { VMUL.F32        S0, S16, S18 }
                    __asm { VMOV            R0, S0 }
                    _R0 = roundf(_R0);
                      VMOV            S2, R5
                      VCVTR.S32.F32   S0, S0
                      VCVTR.S32.F32   S2, S2
                    v62 = v101;
                      VMOV            R0, S0
                      VMOV            R1, S2
                    _R0 = (unsigned __int16)(_R1 - _R0);
                    v81 = (void *)(v113 - 12);
                    if ( (int *)(v113 - 12) != &dword_28898C0 )
                      v95 = (unsigned int *)(v113 - 4);
                      if ( &pthread_create )
                        __dmb();
                        do
                          v96 = __ldrex(v95);
                        while ( __strex(v96 - 1, v95) );
                      else
                        v96 = (*v95)--;
                      if ( v96 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v81);
                  }
                  else
                    _R0 = ItemInstance::getIcon((ItemInstance *)&v122, 0, 0);
                    _R1 = *(_WORD *)(_R0 + 20);
                      VMOV            S0, R1
                      VLDR            S18, [R0,#4]
                      VLDR            S20, [R0,#0xC]
                      v68 = roundf(_R0);
                      _R5 = v68;
                  v61 = 0;
                  goto LABEL_41;
                v61 = ItemFrameBlockEntity::getClockFrame(v7);
              __asm
                VLDR            S0, [R11,#0x74]
                VCVT.F32.S32    S16, S0
              v62 = v101;
LABEL_41:
              v82 = (ItemInHandRenderer *)BaseEntityRenderContext::getItemInHandRenderer(v62);
              v83 = ItemInHandRenderer::getRenderCallAtFrame(v82, v62, (const ItemInstance *)&v122, v61);
              _R0 = MatrixStack::MatrixStackRef::operator->((int)&v121);
                VLDR            S0, =0.54688
                VMOV.F32        S5, #0.25
                VLDR            S4, [R0,#8]
                VLDR            S12, [R0,#0x18]
                VLDR            S6, [R0,#0xC]
                VLDR            S14, [R0,#0x1C]
                VSUB.F32        S4, S12, S4
                VLDR            S8, [R0,#0x10]
                VLDR            S10, [R0,#0x14]
                VSUB.F32        S6, S14, S6
                VLDMIA          R0, {S1-S2}
                VLDR            S3, [R0,#0x20]
                VSUB.F32        S8, S8, S1
                VLDR            S7, [R0,#0x24]
                VSUB.F32        S2, S10, S2
                VLDR            S1, [R0,#0x28]
                VMUL.F32        S3, S3, S0
                VMUL.F32        S10, S7, S0
                VLDR            S12, [R0,#0x2C]
                VMUL.F32        S14, S1, S0
                VLDR            S1, [R0,#0x34]
                VMUL.F32        S0, S12, S0
                VLDR            S12, [R0,#0x30]
                VMUL.F32        S4, S4, S5
                VMUL.F32        S8, S8, S5
                VMUL.F32        S2, S2, S5
                VADD.F32        S12, S12, S3
                VLDR            S3, [R0,#0x3C]
                VADD.F32        S10, S1, S10
                VLDR            S1, [R0,#0x38]
                VMUL.F32        S6, S6, S5
                VADD.F32        S0, S3, S0
                VADD.F32        S14, S1, S14
                VADD.F32        S8, S12, S8
                VADD.F32        S2, S10, S2
                VADD.F32        S0, S0, S6
                VADD.F32        S4, S14, S4
                VSTR            S8, [R0,#0x30]
                VSTR            S2, [R0,#0x34]
                VSTR            S4, [R0,#0x38]
                VSTR            S0, [R0,#0x3C]
              v86 = MatrixStack::MatrixStackRef::operator->((int)&v121);
              v127 = 1065353216;
              v128 = 0;
              v129 = 0;
              v146 = 90.0;
              glm::rotate<float>((int)&v130, v86, (int)&v146, (int)&v127);
              *(_DWORD *)v86 = v130;
              *(_DWORD *)(v86 + 4) = v131;
              *(_DWORD *)(v86 + 8) = v132;
              *(_DWORD *)(v86 + 12) = v133;
              *(_DWORD *)(v86 + 16) = v134;
              *(_DWORD *)(v86 + 20) = v135;
              *(_DWORD *)(v86 + 24) = v136;
              *(_DWORD *)(v86 + 28) = v137;
              *(_DWORD *)(v86 + 32) = v138;
              *(_DWORD *)(v86 + 36) = v139;
              *(_DWORD *)(v86 + 40) = v140;
              *(_DWORD *)(v86 + 44) = v141;
              *(_DWORD *)(v86 + 48) = v142;
              *(_DWORD *)(v86 + 52) = v143;
              *(_DWORD *)(v86 + 56) = v144;
              *(_DWORD *)(v86 + 60) = v145;
                VMOV.F32        S0, #0.5
                VLDR            S2, [R0]
                VDIV.F32        S0, S0, S16
                VMUL.F32        S2, S2, S0
                VSTR            S2, [R0]
                VLDR            S2, [R0,#4]
                VSTR            S2, [R0,#4]
                VLDR            S2, [R0,#8]
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
                VSTR            S0, [R0,#0x2C]
              v88 = BaseEntityRenderContext::getScreenContext(v62);
              ItemInstance::getColor((ItemInstance *)&v106, &v122);
              if ( ItemInstance::isGlint((ItemInstance *)&v122) == 1 )
                v104 = 1056964608;
                v105 = 1056964608;
                EntityShaderManager::_setupFoilShaderParameters(v98, v88, (int)&Color::NIL, (int)&v106, &v104);
                v89 = BlockEntity::getPosition(v100);
                __asm { VLDR            S0, [SP,#0x220+arg_0] }
                v102 = 1056964608;
                v103 = 1056964608;
                __asm { VSTR            S0, [SP,#0x220+var_21C] }
                EntityShaderManager::_setupShaderParameters(v98, v88, (int)v99, (int)v89, (int)&v106, v97, &v102);
              v90 = (Tessellator *)BaseEntityRenderContext::getTessellator(v62);
              if ( Tessellator::forceTessellateIntercept(v90) == 1 )
                ItemInHandRenderer::tessellateAtFrame(v82, v62, 0, (const ItemInstance *)&v122, v61);
                v91 = (const mce::MaterialPtr *)ItemInHandRenderer::getObjectMaterial((int)v82, (int)v83, 0);
                v92 = (const mce::TexturePtr *)ItemInHandRenderer::getObjectTexture((int)v82, (int)v83, 0);
                Tessellator::triggerIntercept(v90, v91, v92);
                v93 = ItemInstance::isGlint((ItemInstance *)&v122);
                ItemInHandRenderer::renderObject((int)v82, v62, (int)v83, v93);
              goto LABEL_47;
              VMOV.F32        S0, #0.25
              VLDR            S2, [R0]
              VSTR            S2, [R0]
              VLDR            S2, [R0,#4]
              VSTR            S2, [R0,#4]
              VLDR            S2, [R0,#8]
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
              VSTR            S2, [R0,#0x20]
              VLDR            S2, [R0,#0x24]
              VSTR            S2, [R0,#0x24]
              VLDR            S2, [R0,#0x28]
              VSTR            S2, [R0,#0x28]
              VLDR            S2, [R0,#0x2C]
              VMUL.F32        S0, S2, S0
              VMOV.F32        S0, #0.5
              VLDR            S8, [R0,#0xC]
              VMOV.F32        S2, #-0.84375
              VLDR            S10, [R0,#0x10]
              VLDR            S12, [R0,#0x14]
              VMOV.F32        S5, #1.75
              VLDR            S14, [R0,#0x18]
              VLDR            S6, [R0,#8]
              VLDR            S1, [R0,#0x1C]
              VLDMIA          R0, {S3-S4}
              VMUL.F32        S3, S3, S0
              VMUL.F32        S10, S10, S2
              VMUL.F32        S12, S12, S2
              VMUL.F32        S0, S6, S0
              VLDR            S6, [R0,#0x24]
              VMUL.F32        S14, S14, S2
              VMUL.F32        S2, S1, S2
              VMUL.F32        S1, S7, S5
              VSUB.F32        S10, S10, S3
              VMUL.F32        S6, S6, S5
              VLDR            S12, [R0,#0x2C]
              VMUL.F32        S3, S7, S5
              VSUB.F32        S0, S14, S0
              VSUB.F32        S2, S2, S8
              VMUL.F32        S12, S12, S5
              VADD.F32        S8, S10, S1
              VADD.F32        S4, S4, S6
              VLDR            S6, [R0,#0x30]
              VADD.F32        S0, S0, S3
              VADD.F32        S2, S2, S12
              VADD.F32        S6, S8, S6
              VADD.F32        S4, S4, S10
              VADD.F32        S0, S0, S12
              VADD.F32        S2, S2, S8
              VSTR            S0, [R0,#0x38]
              VSTR            S2, [R0,#0x3C]
            BlockEntityRenderDispatcher::renderBanner(v10, v101, (const ItemInstance *)&v122);
LABEL_47:
        MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v121);
        goto LABEL_48;
      }
      v23 = 0;
    v24 = 0;
    goto LABEL_15;
  }
LABEL_48:
  if ( ptr )
    operator delete(ptr);
  if ( v125 )
    operator delete(v125);
  result = v124;
  if ( v124 )
    result = (*(int (**)(void))(*(_DWORD *)v124 + 4))();
  return result;
}
