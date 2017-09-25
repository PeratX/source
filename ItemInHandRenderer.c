

int __fastcall ItemInHandRenderer::_tessellateBlockItem(ItemInHandRenderer *this, Tessellator *a2, BlockTessellator *a3, const FullBlock *a4)
{
  Tessellator *v4; // r6@1
  BlockTessellator *v5; // r5@1
  const FullBlock *v6; // r4@1

  v4 = a2;
  v5 = a3;
  v6 = a4;
  Tessellator::begin(a2, 0, 0);
  Tessellator::voidBeginAndEndCalls(v4, 1);
  return j_j_j__ZN16BlockTessellator22appendTessellatedBlockER11TessellatorRK9FullBlock(v5, v4, v6);
}


int *__fastcall ItemInHandRenderer::renderItem(ItemInHandRenderer *this, BaseEntityRenderContext *a2, Entity *a3, const ItemInstance *a4, int a5, int a6, int a7, int a8)
{
  const ItemInstance *v10; // r5@1
  Entity *v11; // r10@1
  int *result; // r0@1
  int v13; // r11@2
  int v14; // r0@6
  ItemInHandRenderer *v15; // r0@6
  BaseEntityRenderContext *v16; // r1@6
  int v22; // r7@8
  int v23; // r0@8
  char *v24; // r0@8
  EntityBlockRenderer *v25; // r7@12
  BlockSource *v26; // r4@12
  int v27; // r0@12
  int v28; // r0@14
  ItemInHandRenderer *v29; // r0@14
  BaseEntityRenderContext *v30; // r1@14
  BlockEntityRenderDispatcher *v33; // r7@16
  Mob *v34; // r1@18
  int v35; // r0@23
  BaseEntityRenderContext *v37; // r1@26
  ItemInHandRenderer *v38; // r0@26
  int v39; // r7@29
  int v40; // r7@29
  int v43; // r0@30
  ItemInHandRenderer *v44; // r0@30
  BaseEntityRenderContext *v45; // r1@30
  int v49; // r7@32
  BlockSource *v52; // r9@32
  BlockEntity *v53; // r11@32
  BlockEntityRenderDispatcher *v56; // r0@32
  int v57; // r0@32
  int v60; // r7@33
  int v61; // r7@33
  int v64; // r7@36
  int v65; // r7@36
  int v66; // r7@36
  int v72; // r0@39
  Options *v73; // r0@45
  int v74; // r0@45
  int v78; // r7@59
  int v81; // r0@60
  int v82; // ST08_4@62
  int v83; // ST08_4@64
  int v84; // ST08_4@65
  Tessellator *v85; // r11@66
  unsigned int v86; // r0@67
  const mce::MaterialPtr *v87; // r1@68
  int v88; // r0@69
  int v89; // r2@70
  const mce::TexturePtr *v90; // r2@76
  LevelRenderer *v93; // r0@84
  char *v94; // r0@84
  Tessellator *v96; // r5@84
  int v99; // r0@86
  int v100; // [sp+4h] [bp-1ECh]@0
  Mob *v112; // [sp+48h] [bp-1A8h]@0
  Mob *v113; // [sp+4Ch] [bp-1A4h]@0
  int *v114; // [sp+50h] [bp-1A0h]@0
  int v115; // [sp+54h] [bp-19Ch]@1
  char v116; // [sp+58h] [bp-198h]@88
  char v117; // [sp+BCh] [bp-134h]@86
  float v118; // [sp+C4h] [bp-12Ch]@84
  int v121; // [sp+D0h] [bp-120h]@62
  signed int v122; // [sp+D4h] [bp-11Ch]@62
  char v123; // [sp+D8h] [bp-118h]@61
  char v124; // [sp+E8h] [bp-108h]@23
  float v125; // [sp+F0h] [bp-100h]@32
  char v126; // [sp+FCh] [bp-F4h]@32
  int v127; // [sp+114h] [bp-DCh]@32
  signed int v128; // [sp+118h] [bp-D8h]@32
  int v129; // [sp+11Ch] [bp-D4h]@32
  char v130; // [sp+120h] [bp-D0h]@30
  char v131; // [sp+128h] [bp-C8h]@14
  char v132; // [sp+130h] [bp-C0h]@6
  int v133; // [sp+138h] [bp-B8h]@29
  signed int v134; // [sp+13Ch] [bp-B4h]@29
  int v135; // [sp+140h] [bp-B0h]@29
  int v136; // [sp+144h] [bp-ACh]@29
  int v137; // [sp+148h] [bp-A8h]@29
  int v138; // [sp+14Ch] [bp-A4h]@29
  int v139; // [sp+150h] [bp-A0h]@29
  int v140; // [sp+154h] [bp-9Ch]@29
  int v141; // [sp+158h] [bp-98h]@29
  int v142; // [sp+15Ch] [bp-94h]@29
  int v143; // [sp+160h] [bp-90h]@29
  int v144; // [sp+164h] [bp-8Ch]@29
  int v145; // [sp+168h] [bp-88h]@29
  int v146; // [sp+16Ch] [bp-84h]@29
  int v147; // [sp+170h] [bp-80h]@29
  int v148; // [sp+174h] [bp-7Ch]@29
  int v149; // [sp+178h] [bp-78h]@29
  int v150; // [sp+17Ch] [bp-74h]@29
  int v151; // [sp+180h] [bp-70h]@29
  int v152; // [sp+184h] [bp-6Ch]@29

  _R6 = a2;
  _R8 = this;
  v10 = a4;
  v11 = a3;
  v115 = BaseEntityRenderContext::getScreenContext(a2);
  result = (int *)*((_BYTE *)v10 + 14);
  if ( !*((_BYTE *)v10 + 14) )
    return result;
  v13 = *((_DWORD *)v10 + 1);
  if ( v13 )
    result = (int *)BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(v13 + 4)]);
  else
    result = (int *)(*(int (**)(void))(**(_DWORD **)v10 + 60))();
  if ( result == (int *)83 )
  {
    v14 = BaseEntityRenderContext::getWorldMatrix(_R6);
    v15 = (ItemInHandRenderer *)MatrixStack::push((MatrixStack *)&v132, v14);
    if ( a6 == 1 )
    {
      ItemInHandRenderer::_renderItemRepositionByJSON(v15, v16, v10, (MatrixStack::MatrixStackRef *)&v132);
      _R0 = *(_DWORD *)v10;
      __asm { VLDR            S16, [R0,#0x60] }
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v132);
      __asm
      {
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
      }
    }
    v22 = BaseEntityRenderContext::getBlockEntityRenderDispatcher(_R6);
    __asm
      VLDR            S0, [R6,#4]
      VSTR            S0, [SP,#0x1F0+var_1EC]
    EntityShaderManager::_setupShaderParameters(
      *(float *)&_R8,
      v115,
      (int)v11,
      COERCE_FLOAT(&Color::NIL),
      COERCE_FLOAT(&Color::WHITE));
    v23 = ItemInstance::getAuxValue(v10);
    BlockEntityRenderDispatcher::renderSkull(
      v22,
      (int)_R6,
      (int)&Vec3::ZERO,
      5,
      1127481344,
      *(float *)&v23,
      0,
      0.0);
    v24 = &v132;
LABEL_80:
    result = (int *)MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)v24);
    goto LABEL_81;
  }
  if ( !v13 || result != (int *)22 )
    if ( result == (int *)89 )
      v28 = BaseEntityRenderContext::getWorldMatrix(_R6);
      v29 = (ItemInHandRenderer *)MatrixStack::push((MatrixStack *)&v131, v28);
      if ( a6 == 1 )
        ItemInHandRenderer::_renderItemRepositionByJSON(v29, v30, v10, (MatrixStack::MatrixStackRef *)&v131);
        _R0 = *(_DWORD *)v10;
        __asm { VLDR            S16, [R0,#0x60] }
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v131);
        __asm
        {
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
        }
      v33 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(_R6);
        VLDR            S0, [R6,#4]
        VSTR            S0, [SP,#0x1F0+var_1EC]
      EntityShaderManager::_setupShaderParameters(
        *(float *)&_R8,
        v115,
        (int)v11,
        COERCE_FLOAT(&Color::NIL),
        COERCE_FLOAT(&Color::WHITE));
      BlockEntityRenderDispatcher::renderShulkerBox(v33, _R6, v10);
      v24 = &v131;
      goto LABEL_80;
    if ( *(_DWORD *)v10 == Item::mBanner )
      BannerBlockEntity::setItemValues(*((BannerBlockEntity **)_R8 + 80), v10);
      v43 = BaseEntityRenderContext::getWorldMatrix(_R6);
      v44 = (ItemInHandRenderer *)MatrixStack::push((MatrixStack *)&v130, v43);
        ItemInHandRenderer::_renderItemRepositionByJSON(v44, v45, v10, (MatrixStack::MatrixStackRef *)&v130);
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v130);
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v130);
        VMOV.F32        S0, #0.875
        VLDR            S2, [R0]
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
      v49 = MatrixStack::MatrixStackRef::operator->((int)&v130);
      v127 = 0;
      v128 = 1065353216;
      v129 = 0;
      v133 = 1112014848;
      glm::rotate<float>((int)&v137, v49, (int)&v133, (int)&v127);
      *(_DWORD *)v49 = v137;
      *(_DWORD *)(v49 + 4) = v138;
      *(_DWORD *)(v49 + 8) = v139;
      *(_DWORD *)(v49 + 12) = v140;
      *(_DWORD *)(v49 + 16) = v141;
      *(_DWORD *)(v49 + 20) = v142;
      *(_DWORD *)(v49 + 24) = v143;
      *(_DWORD *)(v49 + 28) = v144;
      *(_DWORD *)(v49 + 32) = v145;
      *(_DWORD *)(v49 + 36) = v146;
      *(_DWORD *)(v49 + 40) = v147;
      *(_DWORD *)(v49 + 44) = v148;
      *(_DWORD *)(v49 + 48) = v149;
      *(_DWORD *)(v49 + 52) = v150;
      *(_DWORD *)(v49 + 56) = v151;
      *(_DWORD *)(v49 + 60) = v152;
        VMOV.F32        S0, #0.5
        VLDR            S10, [R0,#0x10]
        VLDR            S12, [R0,#0x14]
        VLDR            S14, [R0,#0x18]
        VLDR            S2, =-0.6
        VLDR            S6, [R0,#8]
        VLDR            S8, [R0,#0xC]
        VLDR            S1, [R0,#0x1C]
        VMUL.F32        S6, S6, S2
        VLDMIA          R0, {S3-S4}
        VMUL.F32        S14, S14, S0
        VMUL.F32        S12, S12, S0
        VMUL.F32        S4, S4, S2
        VMUL.F32        S3, S3, S2
        VMUL.F32        S10, S10, S0
        VMUL.F32        S2, S8, S2
        VMUL.F32        S0, S1, S0
        VADD.F32        S6, S14, S6
        VLDR            S14, [R0,#0x3C]
        VADD.F32        S4, S12, S4
        VLDR            S12, [R0,#0x38]
        VADD.F32        S8, S10, S3
        VLDR            S10, [R0,#0x34]
        VADD.F32        S0, S0, S2
        VLDR            S2, [R0,#0x30]
        VADD.F32        S6, S6, S12
        VADD.F32        S4, S4, S10
        VADD.F32        S2, S8, S2
        VADD.F32        S0, S0, S14
        VSTR            S2, [R0,#0x30]
        VSTR            S4, [R0,#0x34]
        VSTR            S6, [R0,#0x38]
        VSTR            S0, [R0,#0x3C]
      v52 = (BlockSource *)Entity::getRegion(v11);
      v53 = (BlockEntity *)*((_DWORD *)_R8 + 80);
      _R7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v11 + 52))(v11);
      _R0 = BaseEntityRenderContext::getCameraTargetPosition(_R6);
        VLDR            S6, [R7]
        VLDR            S4, [R0,#8]
        VSUB.F32        S0, S6, S0
        VLDR            S8, [R7,#4]
        VLDR            S10, [R7,#8]
        VSUB.F32        S2, S8, S2
        VSUB.F32        S4, S10, S4
        VSTR            S0, [SP,#0x1F0+var_100]
        VSTR            S2, [SP,#0x1F0+var_FC]
        VSTR            S4, [SP,#0x1F0+var_F8]
      BlockEntityRenderData::BlockEntityRenderData(
        (BlockEntityRenderData *)&v126,
        v52,
        v53,
        (const Vec3 *)&v125,
        (const mce::MaterialPtr *)&mce::MaterialPtr::NONE,
        (const mce::TexturePtr *)&mce::TexturePtr::NONE,
        0);
      v56 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(_R6);
      v57 = BlockEntityRenderDispatcher::getRenderer(v56, *((BlockEntity **)_R8 + 80));
      (*(void (**)(void))(*(_DWORD *)v57 + 12))();
      v24 = &v130;
    v34 = (Mob *)Entity::hasCategory((int)v11, 2);
    v112 = v34;
    if ( v34 )
      v34 = v11;
    v113 = v34;
    result = ItemInHandRenderer::_getRenderCall(_R8, v34, v10, 0);
    if ( !result )
      result = ItemInHandRenderer::_rebuildItem(_R8, _R6, v113, v10, 0);
    if ( *((_BYTE *)result + 135) != a5 )
LABEL_81:
      if ( a5 )
        return result;
      goto LABEL_82;
    v114 = result;
    v35 = BaseEntityRenderContext::getWorldMatrix(_R6);
    MatrixStack::push((MatrixStack *)&v124, v35);
    *((_QWORD *)_R8 + 44) = *(_QWORD *)&Matrix::IDENTITY;
    *((_QWORD *)_R8 + 45) = qword_27E89F0;
    *((_QWORD *)_R8 + 46) = qword_27E89F8;
    *((_QWORD *)_R8 + 47) = qword_27E8A00;
    *((_QWORD *)_R8 + 48) = qword_27E8A08;
    *((_QWORD *)_R8 + 49) = qword_27E8A10;
    *((_QWORD *)_R8 + 50) = *(_QWORD *)&qword_27E8A18;
    *((_QWORD *)_R8 + 51) = *(_QWORD *)&qword_27E8A20;
    if ( a7 != 1 )
LABEL_61:
      ItemInstance::getColor((ItemInstance *)&v123, (int *)v10);
      if ( ItemInstance::isGlint(v10) == 1 )
        v121 = 1056964608;
        v122 = 1056964608;
        __asm { VLDR            S0, [R6,#4] }
        v82 = *((_BYTE *)v114 + 136);
        __asm { VSTR            S0, [SP,#0x1F0+var_1EC] }
        EntityShaderManager::_setupFoilShaderParameters(
          (int)_R8,
          v115,
          *(float *)&v11,
          (unsigned int)&v123,
          &v121,
          v100);
      else if ( v112 == (Mob *)1 )
        v83 = *((_BYTE *)v114 + 136);
        EntityShaderManager::_setupShaderParameters(
          *(float *)&_R8,
          (int)v113,
          COERCE_FLOAT((Mob *)((char *)v113 + 232)),
          COERCE_FLOAT(&v123));
      else
        v84 = *((_BYTE *)v114 + 136);
          (int)v11,
          COERCE_FLOAT(&Color::NIL),
      v85 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R6);
      if ( Tessellator::forceTessellateIntercept(v85) == 1 )
        ItemInHandRenderer::tessellateAtFrame(_R8, _R6, v113, v10, 0);
        v86 = v114[33];
        if ( (_BYTE)v86 )
          v87 = (ItemInHandRenderer *)((char *)_R8 + 168);
        else
          v89 = (unsigned __int8)(v86 >> 16);
          if ( v86 & 0xFF00 )
            v89 |= 4u;
          if ( v86 >> 16 > 0xFF )
            v89 |= 2u;
          v87 = (const mce::MaterialPtr *)*((_DWORD *)_R8 + v89 + 66);
          if ( !v87 )
            v87 = (ItemInHandRenderer *)((char *)_R8 + 132);
        v90 = (const mce::TexturePtr *)&mce::TexturePtr::NONE;
        if ( !(_BYTE)v86 )
          v90 = (const mce::TexturePtr *)(v114 + 27);
        Tessellator::triggerIntercept(v85, v87, v90);
        v88 = ItemInstance::isGlint(v10);
        ItemInHandRenderer::renderObject((int)_R8, _R6, (int)v114, v88);
      v24 = &v124;
      VMOV.F32        S16, #1.5
      VMOV.F32        S0, #1.0
      VMOV.F32        S20, S16
    if ( !_ZF )
      __asm { VMOVNE.F32      S20, S0 }
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v124);
      VLDR            S0, [R0]
      VMUL.F32        S0, S0, S20
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
    v38 = (ItemInHandRenderer *)*((_BYTE *)v114 + 132);
    if ( *((_BYTE *)v114 + 132) )
      if ( a6 || (v38 = *(ItemInHandRenderer **)v10) == 0 )
        ItemInHandRenderer::_renderItemRepositionByJSON(v38, v37, v10, (MatrixStack::MatrixStackRef *)&v124);
        __asm { VLDR            S18, [R0,#0x60] }
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v124);
          VMUL.F32        S0, S18, S20
          VLDR            S4, =0.03125
          VMOV.F32        S2, #0.46875
          VLDR            S8, [R0]
          VMOV.F32        S6, #-0.46875
          VLDR            S10, [R0,#4]
          VLDR            S1, [R0,#0x10]
          VLDR            S12, [R0,#8]
          VLDR            S14, [R0,#0xC]
          VLDR            S3, [R0,#0x18]
          VMUL.F32        S4, S0, S4
          VLDR            S5, [R0,#0x1C]
          VMUL.F32        S2, S0, S2
          VLDR            S7, [R0,#0x20]
          VMUL.F32        S0, S0, S6
          VMUL.F32        S6, S8, S4
          VLDR            S8, [R0,#0x14]
          VMUL.F32        S1, S1, S2
          VMUL.F32        S10, S10, S4
          VMUL.F32        S8, S8, S2
          VMUL.F32        S14, S14, S4
          VMUL.F32        S4, S12, S4
          VLDR            S12, [R0,#0x24]
          VMUL.F32        S3, S3, S2
          VMUL.F32        S2, S5, S2
          VMUL.F32        S5, S7, S0
          VLDR            S7, [R0,#0x28]
          VADD.F32        S6, S1, S6
          VADD.F32        S8, S8, S10
          VLDR            S10, [R0,#0x2C]
          VMUL.F32        S12, S12, S0
          VMUL.F32        S1, S7, S0
          VADD.F32        S4, S3, S4
          VMUL.F32        S0, S10, S0
          VLDR            S10, [R0,#0x34]
          VADD.F32        S2, S2, S14
          VADD.F32        S6, S6, S5
          VADD.F32        S8, S8, S12
          VLDR            S12, [R0,#0x38]
          VADD.F32        S4, S4, S1
          VADD.F32        S0, S2, S0
          VLDR            S2, [R0,#0x30]
          VADD.F32        S2, S6, S2
          VLDR            S6, [R0,#0x3C]
          VADD.F32        S4, S4, S12
          VADD.F32        S0, S0, S6
          VSTR            S2, [R0,#0x30]
          VSTR            S8, [R0,#0x34]
          VSTR            S4, [R0,#0x38]
          VSTR            S0, [R0,#0x3C]
        v60 = MatrixStack::MatrixStackRef::operator->((int)&v124);
        v133 = 1065353216;
        v134 = 0;
        v135 = 0;
        v136 = 1110704128;
        glm::rotate<float>((int)&v137, v60, (int)&v136, (int)&v133);
        *(_DWORD *)v60 = v137;
        *(_DWORD *)(v60 + 4) = v138;
        *(_DWORD *)(v60 + 8) = v139;
        *(_DWORD *)(v60 + 12) = v140;
        *(_DWORD *)(v60 + 16) = v141;
        *(_DWORD *)(v60 + 20) = v142;
        *(_DWORD *)(v60 + 24) = v143;
        *(_DWORD *)(v60 + 28) = v144;
        *(_DWORD *)(v60 + 32) = v145;
        *(_DWORD *)(v60 + 36) = v146;
        *(_DWORD *)(v60 + 40) = v147;
        *(_DWORD *)(v60 + 44) = v148;
        *(_DWORD *)(v60 + 48) = v149;
        *(_DWORD *)(v60 + 52) = v150;
        *(_DWORD *)(v60 + 56) = v151;
        *(_DWORD *)(v60 + 60) = v152;
        v61 = MatrixStack::MatrixStackRef::operator->((int)&v124);
        v133 = 0;
        v135 = 1065353216;
        v136 = 1119092736;
        glm::rotate<float>((int)&v137, v61, (int)&v136, (int)&v133);
        *(_DWORD *)v61 = v137;
        *(_DWORD *)(v61 + 4) = v138;
        *(_DWORD *)(v61 + 8) = v139;
        *(_DWORD *)(v61 + 12) = v140;
        *(_DWORD *)(v61 + 16) = v141;
        *(_DWORD *)(v61 + 20) = v142;
        *(_DWORD *)(v61 + 24) = v143;
        *(_DWORD *)(v61 + 28) = v144;
        *(_DWORD *)(v61 + 32) = v145;
        *(_DWORD *)(v61 + 36) = v146;
        *(_DWORD *)(v61 + 40) = v147;
        *(_DWORD *)(v61 + 44) = v148;
        *(_DWORD *)(v61 + 48) = v149;
        *(_DWORD *)(v61 + 52) = v150;
        *(_DWORD *)(v61 + 56) = v151;
        *(_DWORD *)(v61 + 60) = v152;
          VMUL.F32        S0, S0, S18
        v39 = MatrixStack::MatrixStackRef::operator->((int)&v124);
        v134 = 1065353216;
        v136 = 1112014848;
        glm::rotate<float>((int)&v137, v39, (int)&v136, (int)&v133);
        *(_DWORD *)v39 = v137;
        *(_DWORD *)(v39 + 4) = v138;
        *(_DWORD *)(v39 + 8) = v139;
        *(_DWORD *)(v39 + 12) = v140;
        *(_DWORD *)(v39 + 16) = v141;
        *(_DWORD *)(v39 + 20) = v142;
        *(_DWORD *)(v39 + 24) = v143;
        *(_DWORD *)(v39 + 28) = v144;
        *(_DWORD *)(v39 + 32) = v145;
        *(_DWORD *)(v39 + 36) = v146;
        *(_DWORD *)(v39 + 40) = v147;
        *(_DWORD *)(v39 + 44) = v148;
        *(_DWORD *)(v39 + 48) = v149;
        *(_DWORD *)(v39 + 52) = v150;
        *(_DWORD *)(v39 + 56) = v151;
        *(_DWORD *)(v39 + 60) = v152;
        v40 = MatrixStack::MatrixStackRef::operator->((int)&v124);
        v136 = 1135050752;
        glm::rotate<float>((int)&v137, v40, (int)&v136, (int)&v133);
        *(_DWORD *)v40 = v137;
        *(_DWORD *)(v40 + 4) = v138;
        *(_DWORD *)(v40 + 8) = v139;
        *(_DWORD *)(v40 + 12) = v140;
        *(_DWORD *)(v40 + 16) = v141;
        *(_DWORD *)(v40 + 20) = v142;
        *(_DWORD *)(v40 + 24) = v143;
        *(_DWORD *)(v40 + 28) = v144;
        *(_DWORD *)(v40 + 32) = v145;
        *(_DWORD *)(v40 + 36) = v146;
        *(_DWORD *)(v40 + 40) = v147;
        *(_DWORD *)(v40 + 44) = v148;
        *(_DWORD *)(v40 + 48) = v149;
        *(_DWORD *)(v40 + 52) = v150;
        *(_DWORD *)(v40 + 56) = v151;
        *(_DWORD *)(v40 + 60) = v152;
          VLDR            S0, =0.075
          VLDR            S6, [R0,#0xC]
          VLDR            S4, [R0,#8]
          VLDR            S8, [R0,#0x10]
          VMUL.F32        S6, S6, S0
          VLDR            S3, =-0.245
          VLDR            S10, [R0,#0x14]
          VLDR            S12, [R0,#0x18]
          VMUL.F32        S8, S8, S3
          VLDR            S14, [R0,#0x1C]
          VMUL.F32        S10, S10, S3
          VLDMIA          R0, {S1-S2}
          VMUL.F32        S12, S12, S3
          VMUL.F32        S14, S14, S3
          VMUL.F32        S2, S2, S0
          VLDR            S5, =-0.1
          VMUL.F32        S1, S1, S0
          VMUL.F32        S0, S4, S0
          VLDR            S4, [R0,#0x24]
          VMUL.F32        S3, S7, S5
          VMUL.F32        S4, S4, S5
          VADD.F32        S6, S14, S6
          VADD.F32        S2, S10, S2
          VADD.F32        S8, S8, S1
          VADD.F32        S0, S12, S0
          VMUL.F32        S1, S7, S5
          VMUL.F32        S10, S10, S5
          VADD.F32        S2, S2, S4
          VADD.F32        S8, S8, S3
          VADD.F32        S0, S0, S1
          VADD.F32        S4, S6, S10
          VLDR            S6, [R0,#0x30]
          VADD.F32        S2, S2, S10
          VADD.F32        S6, S8, S6
          VLDR            S8, [R0,#0x3C]
          VADD.F32        S0, S0, S12
          VADD.F32        S4, S4, S8
          VSTR            S6, [R0,#0x30]
          VSTR            S2, [R0,#0x34]
          VSTR            S0, [R0,#0x38]
          VSTR            S4, [R0,#0x3C]
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v124);
        VLDR            S0, =0.0625
      if ( _ZF )
        v64 = MatrixStack::MatrixStackRef::operator->((int)&v124);
        glm::rotate<float>((int)&v137, v64, (int)&v136, (int)&v133);
        *(_DWORD *)v64 = v137;
        *(_DWORD *)(v64 + 4) = v138;
        *(_DWORD *)(v64 + 8) = v139;
        *(_DWORD *)(v64 + 12) = v140;
        *(_DWORD *)(v64 + 16) = v141;
        *(_DWORD *)(v64 + 20) = v142;
        *(_DWORD *)(v64 + 24) = v143;
        *(_DWORD *)(v64 + 28) = v144;
        *(_DWORD *)(v64 + 32) = v145;
        *(_DWORD *)(v64 + 36) = v146;
        *(_DWORD *)(v64 + 40) = v147;
        *(_DWORD *)(v64 + 44) = v148;
        *(_DWORD *)(v64 + 48) = v149;
        *(_DWORD *)(v64 + 52) = v150;
        *(_DWORD *)(v64 + 56) = v151;
        *(_DWORD *)(v64 + 60) = v152;
        v65 = MatrixStack::MatrixStackRef::operator->((int)&v124);
        v136 = -1028390912;
        glm::rotate<float>((int)&v137, v65, (int)&v136, (int)&v133);
        *(_DWORD *)v65 = v137;
        *(_DWORD *)(v65 + 4) = v138;
        *(_DWORD *)(v65 + 8) = v139;
        *(_DWORD *)(v65 + 12) = v140;
        *(_DWORD *)(v65 + 16) = v141;
        *(_DWORD *)(v65 + 20) = v142;
        *(_DWORD *)(v65 + 24) = v143;
        *(_DWORD *)(v65 + 28) = v144;
        *(_DWORD *)(v65 + 32) = v145;
        *(_DWORD *)(v65 + 36) = v146;
        *(_DWORD *)(v65 + 40) = v147;
        *(_DWORD *)(v65 + 44) = v148;
        *(_DWORD *)(v65 + 48) = v149;
        *(_DWORD *)(v65 + 52) = v150;
        *(_DWORD *)(v65 + 56) = v151;
        *(_DWORD *)(v65 + 60) = v152;
        v66 = MatrixStack::MatrixStackRef::operator->((int)&v124);
        glm::rotate<float>((int)&v137, v66, (int)&v136, (int)&v133);
        *(_DWORD *)v66 = v137;
        *(_DWORD *)(v66 + 4) = v138;
        *(_DWORD *)(v66 + 8) = v139;
        *(_DWORD *)(v66 + 12) = v140;
        *(_DWORD *)(v66 + 16) = v141;
        *(_DWORD *)(v66 + 20) = v142;
        *(_DWORD *)(v66 + 24) = v143;
        *(_DWORD *)(v66 + 28) = v144;
        *(_DWORD *)(v66 + 32) = v145;
        *(_DWORD *)(v66 + 36) = v146;
        *(_DWORD *)(v66 + 40) = v147;
        *(_DWORD *)(v66 + 44) = v148;
        *(_DWORD *)(v66 + 48) = v149;
        *(_DWORD *)(v66 + 52) = v150;
        *(_DWORD *)(v66 + 56) = v151;
        *(_DWORD *)(v66 + 60) = v152;
          VMOV.F32        S0, #16.0
          VLDR            S2, [R0,#0x20]
          VLDR            S6, [R0,#0x28]
          VLDR            S8, [R0,#0x2C]
          VLDR            S10, [R0,#0x30]
          VLDR            S12, [R0,#0x34]
          VLDR            S14, [R0,#0x38]
          VLDR            S1, [R0,#0x3C]
          VMUL.F32        S4, S4, S0
          VMUL.F32        S0, S8, S0
          VSUB.F32        S2, S10, S2
          VSUB.F32        S4, S12, S4
          VSUB.F32        S6, S14, S6
          VSUB.F32        S0, S1, S0
          VSTR            S4, [R0,#0x34]
          VSTR            S6, [R0,#0x38]
    else if ( a6 == 1 )
      ItemInHandRenderer::_renderItemRepositionByJSON(v38, v37, v10, (MatrixStack::MatrixStackRef *)&v124);
      _R0 = *(ItemInHandRenderer **)v10;
      __asm { VLDR            S18, [R0,#0x60] }
        VMUL.F32        S0, S0, S18
    _R1 = v114;
      VLDR            S2, [R0]
      VLDR            S0, [R1,#0x68]
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
    v72 = ClientInstance::getLocalPlayer(*((ClientInstance **)_R8 + 28));
    if ( !v13 )
      if ( *(_DWORD *)v10 != Item::mClock )
        if ( (Entity *)v72 != v11 || *(_DWORD *)v10 != Item::mCompass )
          goto LABEL_56;
LABEL_45:
        v73 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R8 + 28));
        v74 = Options::getPlayerViewPerspective(v73);
        _ZF = v74 == 0;
        if ( !v74 )
          _ZF = a8 == 0;
        if ( _ZF )
          _R0 = GuiData::getScreenSizeData(*(GuiData **)(v115 + 24));
          __asm
          {
            VLDR            S0, [R0,#8]
            VLDR            S2, [R0,#0xC]
            VDIV.F32        S18, S0, S2
            VCMPE.F32       S18, S16
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            _R0 = MatrixStack::MatrixStackRef::operator->((int)&v124);
            __asm
            {
              VMOV.F32        S0, #0.5
              VMOV.F32        S2, #12.0
              VMOV.F32        S4, #-4.0
              VCMPE.F32       S18, S0
              VMRS            APSR_nzcv, FPSCR
              VCMPE.F32       S18, S16
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F32      S0, S18 }
              VSUB.F32        S0, S0, S16
              VMUL.F32        S0, S0, S2
              VADD.F32        S0, S0, S4
              __asm { VMOVGT.F32      S0, S4 }
              VLDR            S2, [R0,#4]
              VLDR            S4, [R0,#8]
              VLDR            S8, [R0]
              VMUL.F32        S2, S2, S0
              VLDR            S6, [R0,#0xC]
              VMUL.F32        S4, S4, S0
              VMUL.F32        S8, S8, S0
              VLDR            S10, [R0,#0x34]
              VMUL.F32        S0, S6, S0
              VLDR            S6, [R0,#0x30]
              VLDR            S12, [R0,#0x38]
              VLDR            S14, [R0,#0x3C]
              VADD.F32        S2, S10, S2
              VADD.F32        S4, S12, S4
              VADD.F32        S6, S6, S8
              VADD.F32        S0, S14, S0
              VSTR            S6, [R0,#0x30]
              VSTR            S2, [R0,#0x34]
              VSTR            S4, [R0,#0x38]
              VSTR            S0, [R0,#0x3C]
        goto LABEL_56;
      if ( (Entity *)v72 == v11 )
        goto LABEL_45;
LABEL_56:
    if ( v13
      && (Block::isType((Block *)v13, (const Block *)Block::mWoodButton)
       || Block::isType((Block *)v13, (const Block *)Block::mStoneButton) == 1) )
      v78 = MatrixStack::MatrixStackRef::operator->((int)&v124);
      v133 = 0;
      v134 = 0;
      v135 = 1065353216;
      v136 = 1122369536;
      glm::rotate<float>((int)&v137, v78, (int)&v136, (int)&v133);
      *(_DWORD *)v78 = v137;
      *(_DWORD *)(v78 + 4) = v138;
      *(_DWORD *)(v78 + 8) = v139;
      *(_DWORD *)(v78 + 12) = v140;
      *(_DWORD *)(v78 + 16) = v141;
      *(_DWORD *)(v78 + 20) = v142;
      *(_DWORD *)(v78 + 24) = v143;
      *(_DWORD *)(v78 + 28) = v144;
      *(_DWORD *)(v78 + 32) = v145;
      *(_DWORD *)(v78 + 36) = v146;
      *(_DWORD *)(v78 + 40) = v147;
      *(_DWORD *)(v78 + 44) = v148;
      *(_DWORD *)(v78 + 48) = v149;
      *(_DWORD *)(v78 + 52) = v150;
      *(_DWORD *)(v78 + 56) = v151;
      *(_DWORD *)(v78 + 60) = v152;
        VLDR            S0, =0.2
        VLDR            S6, [R0,#0xC]
        VLDR            S8, [R0,#0x10]
        VMUL.F32        S6, S6, S0
        VLDR            S3, =-0.4
        VLDR            S10, [R0,#0x14]
        VLDR            S12, [R0,#0x18]
        VMUL.F32        S8, S8, S3
        VLDR            S14, [R0,#0x1C]
        VMUL.F32        S10, S10, S3
        VLDMIA          R0, {S1-S2}
        VMUL.F32        S12, S12, S3
        VMUL.F32        S14, S14, S3
        VLDR            S5, =-0.45
        VMUL.F32        S1, S1, S0
        VLDR            S7, [R0,#0x20]
        VMUL.F32        S0, S4, S0
        VLDR            S4, [R0,#0x24]
        VMUL.F32        S3, S7, S5
        VLDR            S7, [R0,#0x28]
        VMUL.F32        S4, S4, S5
        VADD.F32        S2, S10, S2
        VLDR            S10, [R0,#0x2C]
        VADD.F32        S8, S8, S1
        VADD.F32        S0, S12, S0
        VMUL.F32        S1, S7, S5
        VMUL.F32        S10, S10, S5
        VADD.F32        S2, S2, S4
        VADD.F32        S8, S8, S3
        VADD.F32        S0, S0, S1
        VADD.F32        S4, S6, S10
        VLDR            S6, [R0,#0x30]
        VADD.F32        S2, S2, S10
        VADD.F32        S6, S8, S6
        VLDR            S8, [R0,#0x3C]
        VADD.F32        S0, S0, S12
        VADD.F32        S4, S4, S8
        VSTR            S6, [R0,#0x30]
        VSTR            S2, [R0,#0x34]
        VSTR            S0, [R0,#0x38]
        VSTR            S4, [R0,#0x3C]
    v81 = MatrixStack::MatrixStackRef::operator*((int)&v124);
    *((_DWORD *)_R8 + 88) = *(_DWORD *)v81;
    *((_DWORD *)_R8 + 89) = *(_DWORD *)(v81 + 4);
    *((_DWORD *)_R8 + 90) = *(_DWORD *)(v81 + 8);
    *((_DWORD *)_R8 + 91) = *(_DWORD *)(v81 + 12);
    *((_DWORD *)_R8 + 92) = *(_DWORD *)(v81 + 16);
    *((_DWORD *)_R8 + 93) = *(_DWORD *)(v81 + 20);
    *((_DWORD *)_R8 + 94) = *(_DWORD *)(v81 + 24);
    *((_DWORD *)_R8 + 95) = *(_DWORD *)(v81 + 28);
    *((_DWORD *)_R8 + 96) = *(_DWORD *)(v81 + 32);
    *((_DWORD *)_R8 + 97) = *(_DWORD *)(v81 + 36);
    *((_DWORD *)_R8 + 98) = *(_DWORD *)(v81 + 40);
    *((_DWORD *)_R8 + 99) = *(_DWORD *)(v81 + 44);
    *((_DWORD *)_R8 + 100) = *(_DWORD *)(v81 + 48);
    *((_DWORD *)_R8 + 101) = *(_DWORD *)(v81 + 52);
    *((_DWORD *)_R8 + 102) = *(_DWORD *)(v81 + 56);
    *((_DWORD *)_R8 + 103) = *(_DWORD *)(v81 + 60);
    goto LABEL_61;
  if ( a5 )
  v25 = (EntityBlockRenderer *)BaseEntityRenderContext::getEntityBlockRenderer(_R6);
  v26 = (BlockSource *)Entity::getRegion(v11);
  v27 = ItemInstance::getAuxValue(v10);
  EntityBlockRenderer::render(v25, _R6, v26, (const Block *)v13, v27, 1.0);
LABEL_82:
  result = (int *)Item::mFishingRod;
  if ( *(_DWORD *)v10 == Item::mFishingRod )
    result = (int *)*((_DWORD *)v11 + 133);
    if ( result )
      _R4 = (*(int (**)(void))(*result + 52))();
        VLDR            S0, [R4]
        VSTR            S0, [SP,#0x1F0+var_1AC]
        VLDR            S0, [R4,#4]
        VSTR            S0, [SP,#0x1F0+var_1A8]
        VLDR            S0, [R4,#8]
        VSTR            S0, [SP,#0x1F0+var_1A0]
        VSTR            S0, [SP,#0x1F0+var_1C0]
        VSTR            S0, [SP,#0x1F0+var_1B0]
        VSTR            S0, [SP,#0x1F0+var_1A4]
      v93 = (LevelRenderer *)ClientInstance::getLevelRenderer(*((ClientInstance **)_R8 + 28));
      v94 = LevelRenderer::getLevelRendererPlayer(v93);
      LevelRendererPlayer::getComfortRenderAdj((LevelRendererPlayer *)&v118, (int)v94);
        VLDR            S23, [SP,#0x1F0+var_12C]
        VLDR            S25, [SP,#0x1F0+var_128]
        VLDR            S27, [SP,#0x1F0+var_124]
      _R0 = ClientInstance::getGameRenderer(*((ClientInstance **)_R8 + 28));
        VLDR            S0, [R8,#0x164]
        VLDR            S16, [R0,#0x24C]
        VSTR            S0, [SP,#0x1F0+var_1C4]
        VLDR            S0, [R8,#0x168]
        VLDR            S18, [R0,#0x250]
        VSTR            S0, [SP,#0x1F0+var_1B8]
        VLDR            S0, [R8,#0x160]
        VLDR            S20, [R0,#0x248]
        VSTR            S0, [SP,#0x1F0+var_1B4]
        VLDR            S0, [R8,#0x188]
        VLDR            S22, [R0,#0x258]
        VSTR            S0, [SP,#0x1F0+var_1CC]
        VLDR            S0, [R8,#0x180]
        VLDR            S28, [R0,#0x278]
        VSTR            S0, [SP,#0x1F0+var_1C8]
        VLDR            S0, [R8,#0x190]
        VLDR            S30, [R0,#0x27C]
        VSTR            S0, [SP,#0x1F0+var_1BC]
        VLDR            S0, [R8,#0x194]
        VLDR            S17, [R0,#0x280]
        VSTR            S0, [SP,#0x1F0+var_1D4]
        VLDR            S0, [R8,#0x198]
        VLDR            S19, [R0,#0x26C]
        VLDR            S21, [R0,#0x270]
        VLDR            S31, [R0,#0x268]
        VLDR            S24, [R0,#0x260]
        VLDR            S26, [R0,#0x25C]
        VLDR            S29, [R8,#0x184]
        VSTR            S0, [SP,#0x1F0+var_1D0]
      v96 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R6);
      _R4 = 0;
      Tessellator::begin((int)v96, 5, 15, 0);
        VLDR            S4, [SP,#0x1F0+var_1A8]
        VLDR            S6, [SP,#0x1F0+var_1B0]
        VLDR            S0, [SP,#0x1F0+var_1AC]
        VSUB.F32        S4, S4, S6
      _R0 = &FishHookRenderer::BOBBER_SIZE;
        VLDR            S2, [SP,#0x1F0+var_1C0]
        VLDR            S8, [SP,#0x1F0+var_1A4]
        VLDR            S6, [R0]
        VSUB.F32        S0, S0, S2
        VADD.F32        S4, S4, S6
        VSUB.F32        S0, S0, S23
        VSUB.F32        S4, S4, S25
        VMUL.F32        S2, S16, S0
        VMUL.F32        S12, S20, S0
        VMUL.F32        S0, S18, S0
        VMUL.F32        S6, S26, S4
        VMUL.F32        S14, S22, S4
        VMUL.F32        S4, S24, S4
        VADD.F32        S2, S6, S2
        VLDR            S6, [SP,#0x1F0+var_1A0]
        VSUB.F32        S6, S6, S8
        VADD.F32        S0, S4, S0
        VSUB.F32        S6, S6, S27
        VMUL.F32        S10, S19, S6
        VMUL.F32        S8, S21, S6
        VMUL.F32        S4, S31, S6
        VADD.F32        S6, S14, S12
        VLDR            S10, [SP,#0x1F0+var_1B4]
        VADD.F32        S0, S0, S8
        VLDR            S8, [SP,#0x1F0+var_1CC]
        VADD.F32        S4, S6, S4
        VMOV.F32        S6, #15.0
        VADD.F32        S16, S2, S30
        VADD.F32        S18, S0, S17
        VLDR            S0, [SP,#0x1F0+var_1C4]
        VADD.F32        S20, S4, S28
        VLDR            S4, [SP,#0x1F0+var_1B8]
        VMUL.F32        S0, S0, S6
        VLDR            S28, =0.0625
        VMUL.F32        S4, S4, S6
        VMUL.F32        S6, S10, S6
        VLDR            S10, [SP,#0x1F0+var_1C8]
        VSUB.F32        S2, S29, S16
        VSUB.F32        S8, S8, S18
        VSUB.F32        S10, S10, S20
        VADD.F32        S0, S2, S0
        VADD.F32        S2, S8, S4
        VADD.F32        S4, S10, S6
        VLDR            S6, [SP,#0x1F0+var_1D4]
        VADD.F32        S22, S0, S6
        VLDR            S0, [SP,#0x1F0+var_1D0]
        VADD.F32        S24, S2, S0
        VLDR            S0, [SP,#0x1F0+var_1BC]
        VADD.F32        S26, S4, S0
      do
          VMOV            S0, R4
          VCVT.F32.U32    S0, S0
          VMUL.F32        S0, S0, S28
          VMUL.F32        S2, S0, S0
          VMUL.F32        S4, S0, S26
          VMUL.F32        S0, S0, S24
          VMUL.F32        S2, S2, S22
          VADD.F32        S4, S4, S20
          VADD.F32        S0, S0, S18
          VADD.F32        S2, S2, S16
          VSTR            S4, [SP,#0x1F0+var_A8]
          VSTR            S0, [SP,#0x1F0+var_A0]
          VSTR            S2, [SP,#0x1F0+var_A4]
        Tessellator::vertex(v96, (const Vec3 *)&v137);
        ++_R4;
      while ( _R4 != 17 );
      v99 = BaseEntityRenderContext::getWorldMatrix(_R6);
      MatrixStack::pushIdentity((MatrixStack *)&v117, v99);
      ShaderColor::setColor(*(ShaderColor **)(v115 + 48), (const Color *)&Color::BLACK);
      if ( Tessellator::forceTessellateIntercept(v96) == 1 )
        Tessellator::triggerIntercept(
          v96,
          (ItemInHandRenderer *)((char *)_R8 + 252),
          (const mce::TexturePtr *)&mce::TexturePtr::NONE);
        Tessellator::end((Tessellator *)&v116, (const char *)v96, 0, 0);
        mce::Mesh::render((mce::Buffer *)&v116, v115, (int)_R8 + 252, 0, 0);
        mce::Mesh::~Mesh((mce::Mesh *)&v116);
      result = (int *)MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v117);
  return result;
}


void __fastcall ItemInHandRenderer::~ItemInHandRenderer(ItemInHandRenderer *this)
{
  ItemInHandRenderer *v1; // r0@1

  v1 = ItemInHandRenderer::~ItemInHandRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


signed int __fastcall ItemInHandRenderer::tick(ItemInHandRenderer *this)
{
  Player *v2; // r0@1
  ItemInstance *v3; // r0@1
  int v4; // r5@1
  signed int result; // r0@1

  _R4 = this;
  *((_DWORD *)this + 31) = *((_DWORD *)this + 30);
  v2 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 28));
  v3 = (ItemInstance *)Player::getSelectedItem(v2);
  v4 = (int)v3;
  result = ItemInstance::matches(v3, (ItemInHandRenderer *)((char *)_R4 + 40));
  __asm { VMOV.F32        S0, #1.0 }
  if ( !result )
  {
    result = *(_BYTE *)(v4 + 14);
    _ZF = result == 0;
    if ( !*(_BYTE *)(v4 + 14) )
    {
      result = *((_BYTE *)_R4 + 54);
      _ZF = result == 0;
    }
    if ( !_ZF )
      __asm { VLDR            S0, =0.0 }
  }
  __asm
    VLDR            S2, [R4,#0x78]
    VLDR            S4, =-0.4
    VSUB.F32        S0, S0, S2
    VLDR            S6, =0.4
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S6
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S4, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S4, S6 }
    VADD.F32        S0, S4, S2
    VLDR            S2, =0.1
    VCMPE.F32       S0, S2
    VSTR            S0, [R4,#0x78]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = j_j_j__ZN12ItemInstanceaSERKS__1((int)_R4 + 40, v4);
  return result;
}


int __fastcall ItemInHandRenderer::_renderLeftHand(ItemInHandRenderer *this, BaseEntityRenderContext *a2, PlayerRenderer *a3)
{
  BaseEntityRenderContext *v3; // r4@1
  ItemInHandRenderer *v4; // r9@1
  PlayerRenderer *v5; // r8@1
  int v6; // r0@1
  int v7; // r7@1
  int v8; // r7@1
  int v9; // r7@1
  Player *v16; // r0@1
  char v18; // [sp+4h] [bp-74h]@1
  int v19; // [sp+Ch] [bp-6Ch]@1
  signed int v20; // [sp+10h] [bp-68h]@1
  int v21; // [sp+14h] [bp-64h]@1
  int v22; // [sp+18h] [bp-60h]@1
  int v23; // [sp+1Ch] [bp-5Ch]@1
  int v24; // [sp+20h] [bp-58h]@1
  int v25; // [sp+24h] [bp-54h]@1
  int v26; // [sp+28h] [bp-50h]@1
  int v27; // [sp+2Ch] [bp-4Ch]@1
  int v28; // [sp+30h] [bp-48h]@1
  int v29; // [sp+34h] [bp-44h]@1
  int v30; // [sp+38h] [bp-40h]@1
  int v31; // [sp+3Ch] [bp-3Ch]@1
  int v32; // [sp+40h] [bp-38h]@1
  int v33; // [sp+44h] [bp-34h]@1
  int v34; // [sp+48h] [bp-30h]@1
  int v35; // [sp+4Ch] [bp-2Ch]@1
  int v36; // [sp+50h] [bp-28h]@1
  int v37; // [sp+54h] [bp-24h]@1
  int v38; // [sp+58h] [bp-20h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v18, v6);
  v7 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  v19 = 0;
  v20 = 1065353216;
  v21 = 0;
  v38 = dword_2807DF0;
  glm::rotate<float>((int)&v22, v7, (int)&v38, (int)&v19);
  *(_DWORD *)v7 = v22;
  *(_DWORD *)(v7 + 4) = v23;
  *(_DWORD *)(v7 + 8) = v24;
  *(_DWORD *)(v7 + 12) = v25;
  *(_DWORD *)(v7 + 16) = v26;
  *(_DWORD *)(v7 + 20) = v27;
  *(_DWORD *)(v7 + 24) = v28;
  *(_DWORD *)(v7 + 28) = v29;
  *(_DWORD *)(v7 + 32) = v30;
  *(_DWORD *)(v7 + 36) = v31;
  *(_DWORD *)(v7 + 40) = v32;
  *(_DWORD *)(v7 + 44) = v33;
  *(_DWORD *)(v7 + 48) = v34;
  *(_DWORD *)(v7 + 52) = v35;
  *(_DWORD *)(v7 + 56) = v36;
  *(_DWORD *)(v7 + 60) = v37;
  v8 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  v19 = 1065353216;
  v20 = 0;
  v38 = MapConstants::MAP_LEFTHAND_ROT;
  glm::rotate<float>((int)&v22, v8, (int)&v38, (int)&v19);
  *(_DWORD *)v8 = v22;
  *(_DWORD *)(v8 + 4) = v23;
  *(_DWORD *)(v8 + 8) = v24;
  *(_DWORD *)(v8 + 12) = v25;
  *(_DWORD *)(v8 + 16) = v26;
  *(_DWORD *)(v8 + 20) = v27;
  *(_DWORD *)(v8 + 24) = v28;
  *(_DWORD *)(v8 + 28) = v29;
  *(_DWORD *)(v8 + 32) = v30;
  *(_DWORD *)(v8 + 36) = v31;
  *(_DWORD *)(v8 + 40) = v32;
  *(_DWORD *)(v8 + 44) = v33;
  *(_DWORD *)(v8 + 48) = v34;
  *(_DWORD *)(v8 + 52) = v35;
  *(_DWORD *)(v8 + 56) = v36;
  *(_DWORD *)(v8 + 60) = v37;
  v9 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  v38 = dword_2807DF4;
  v21 = 1065353216;
  glm::rotate<float>((int)&v22, v9, (int)&v38, (int)&v19);
  *(_DWORD *)v9 = v22;
  *(_DWORD *)(v9 + 4) = v23;
  *(_DWORD *)(v9 + 8) = v24;
  *(_DWORD *)(v9 + 12) = v25;
  *(_DWORD *)(v9 + 16) = v26;
  *(_DWORD *)(v9 + 20) = v27;
  *(_DWORD *)(v9 + 24) = v28;
  *(_DWORD *)(v9 + 28) = v29;
  *(_DWORD *)(v9 + 32) = v30;
  *(_DWORD *)(v9 + 36) = v31;
  *(_DWORD *)(v9 + 40) = v32;
  *(_DWORD *)(v9 + 44) = v33;
  *(_DWORD *)(v9 + 48) = v34;
  *(_DWORD *)(v9 + 52) = v35;
  *(_DWORD *)(v9 + 56) = v36;
  *(_DWORD *)(v9 + 60) = v37;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S14, [R0,#0x14]
  }
  _R1 = &MapConstants::MAP_LEFTHAND_POS;
    VLDR            S1, [R0,#0x10]
    VLDR            S4, [R0,#8]
    VLDR            S8, [R1]
    VLDR            S10, [R1,#4]
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S0, S0, S8
    VLDR            S3, [R0,#0x18]
    VMUL.F32        S1, S1, S10
    VMUL.F32        S2, S2, S8
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S14, S14, S10
    VLDR            S12, [R1,#8]
    VMUL.F32        S3, S3, S10
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S10, S5, S10
    VMUL.F32        S5, S7, S12
    VLDR            S7, [R0,#0x28]
    VADD.F32        S0, S1, S0
    VADD.F32        S2, S14, S2
    VLDR            S14, [R0,#0x2C]
    VMUL.F32        S8, S8, S12
    VMUL.F32        S1, S7, S12
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VLDR            S10, [R0,#0x34]
    VMUL.F32        S12, S14, S12
    VADD.F32        S0, S0, S5
    VADD.F32        S2, S2, S8
    VLDR            S8, [R0,#0x30]
    VADD.F32        S4, S4, S1
    VADD.F32        S6, S6, S12
    VLDR            S12, [R0,#0x38]
    VADD.F32        S0, S0, S8
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S12
    VADD.F32        S6, S6, S8
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
  v16 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 28));
  PlayerRenderer::renderLeftHand(v5, v3, v16);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v18);
}


int __fastcall ItemInHandRenderer::_renderOffHandMap(ItemInHandRenderer *this, BaseEntityRenderContext *a2, PlayerRenderer *a3)
{
  BaseEntityRenderContext *v3; // r4@1
  ItemInHandRenderer *v4; // r9@1
  PlayerRenderer *v5; // r8@1
  int v6; // r0@1
  int v7; // r7@1
  int v8; // r7@1
  int v9; // r7@1
  Player *v16; // r0@1
  char v18; // [sp+4h] [bp-74h]@1
  int v19; // [sp+Ch] [bp-6Ch]@1
  signed int v20; // [sp+10h] [bp-68h]@1
  int v21; // [sp+14h] [bp-64h]@1
  int v22; // [sp+18h] [bp-60h]@1
  int v23; // [sp+1Ch] [bp-5Ch]@1
  int v24; // [sp+20h] [bp-58h]@1
  int v25; // [sp+24h] [bp-54h]@1
  int v26; // [sp+28h] [bp-50h]@1
  int v27; // [sp+2Ch] [bp-4Ch]@1
  int v28; // [sp+30h] [bp-48h]@1
  int v29; // [sp+34h] [bp-44h]@1
  int v30; // [sp+38h] [bp-40h]@1
  int v31; // [sp+3Ch] [bp-3Ch]@1
  int v32; // [sp+40h] [bp-38h]@1
  int v33; // [sp+44h] [bp-34h]@1
  int v34; // [sp+48h] [bp-30h]@1
  int v35; // [sp+4Ch] [bp-2Ch]@1
  int v36; // [sp+50h] [bp-28h]@1
  int v37; // [sp+54h] [bp-24h]@1
  int v38; // [sp+58h] [bp-20h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v18, v6);
  v7 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  v19 = 0;
  v20 = 1065353216;
  v21 = 0;
  v38 = unk_2807E94;
  glm::rotate<float>((int)&v22, v7, (int)&v38, (int)&v19);
  *(_DWORD *)v7 = v22;
  *(_DWORD *)(v7 + 4) = v23;
  *(_DWORD *)(v7 + 8) = v24;
  *(_DWORD *)(v7 + 12) = v25;
  *(_DWORD *)(v7 + 16) = v26;
  *(_DWORD *)(v7 + 20) = v27;
  *(_DWORD *)(v7 + 24) = v28;
  *(_DWORD *)(v7 + 28) = v29;
  *(_DWORD *)(v7 + 32) = v30;
  *(_DWORD *)(v7 + 36) = v31;
  *(_DWORD *)(v7 + 40) = v32;
  *(_DWORD *)(v7 + 44) = v33;
  *(_DWORD *)(v7 + 48) = v34;
  *(_DWORD *)(v7 + 52) = v35;
  *(_DWORD *)(v7 + 56) = v36;
  *(_DWORD *)(v7 + 60) = v37;
  v8 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  v19 = 1065353216;
  v20 = 0;
  v38 = MapConstants::MINI_MAP_LEFTHAND_ROT;
  glm::rotate<float>((int)&v22, v8, (int)&v38, (int)&v19);
  *(_DWORD *)v8 = v22;
  *(_DWORD *)(v8 + 4) = v23;
  *(_DWORD *)(v8 + 8) = v24;
  *(_DWORD *)(v8 + 12) = v25;
  *(_DWORD *)(v8 + 16) = v26;
  *(_DWORD *)(v8 + 20) = v27;
  *(_DWORD *)(v8 + 24) = v28;
  *(_DWORD *)(v8 + 28) = v29;
  *(_DWORD *)(v8 + 32) = v30;
  *(_DWORD *)(v8 + 36) = v31;
  *(_DWORD *)(v8 + 40) = v32;
  *(_DWORD *)(v8 + 44) = v33;
  *(_DWORD *)(v8 + 48) = v34;
  *(_DWORD *)(v8 + 52) = v35;
  *(_DWORD *)(v8 + 56) = v36;
  *(_DWORD *)(v8 + 60) = v37;
  v9 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  v38 = unk_2807E98;
  v21 = 1065353216;
  glm::rotate<float>((int)&v22, v9, (int)&v38, (int)&v19);
  *(_DWORD *)v9 = v22;
  *(_DWORD *)(v9 + 4) = v23;
  *(_DWORD *)(v9 + 8) = v24;
  *(_DWORD *)(v9 + 12) = v25;
  *(_DWORD *)(v9 + 16) = v26;
  *(_DWORD *)(v9 + 20) = v27;
  *(_DWORD *)(v9 + 24) = v28;
  *(_DWORD *)(v9 + 28) = v29;
  *(_DWORD *)(v9 + 32) = v30;
  *(_DWORD *)(v9 + 36) = v31;
  *(_DWORD *)(v9 + 40) = v32;
  *(_DWORD *)(v9 + 44) = v33;
  *(_DWORD *)(v9 + 48) = v34;
  *(_DWORD *)(v9 + 52) = v35;
  *(_DWORD *)(v9 + 56) = v36;
  *(_DWORD *)(v9 + 60) = v37;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S14, [R0,#0x14]
  }
  _R1 = &MapConstants::MINI_MAP_LEFTHAND_POS;
    VLDR            S1, [R0,#0x10]
    VLDR            S4, [R0,#8]
    VLDR            S8, [R1]
    VLDR            S10, [R1,#4]
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S0, S0, S8
    VLDR            S3, [R0,#0x18]
    VMUL.F32        S1, S1, S10
    VMUL.F32        S2, S2, S8
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S14, S14, S10
    VLDR            S12, [R1,#8]
    VMUL.F32        S3, S3, S10
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S10, S5, S10
    VMUL.F32        S5, S7, S12
    VLDR            S7, [R0,#0x28]
    VADD.F32        S0, S1, S0
    VADD.F32        S2, S14, S2
    VLDR            S14, [R0,#0x2C]
    VMUL.F32        S8, S8, S12
    VMUL.F32        S1, S7, S12
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VLDR            S10, [R0,#0x34]
    VMUL.F32        S12, S14, S12
    VADD.F32        S0, S0, S5
    VADD.F32        S2, S2, S8
    VLDR            S8, [R0,#0x30]
    VADD.F32        S4, S4, S1
    VADD.F32        S6, S6, S12
    VLDR            S12, [R0,#0x38]
    VADD.F32        S0, S0, S8
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S12
    VADD.F32        S6, S6, S8
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
  v16 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 28));
  PlayerRenderer::renderLeftHand(v5, v3, v16);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v18);
}


void __fastcall ItemInHandRenderer::initMaterials(ItemInHandRenderer *this, mce::TextureGroup *a2)
{
  ItemInHandRenderer::initMaterials(this, a2);
}


int __fastcall ItemInHandRenderer::getObjectMaterial(int a1, int a2, int a3)
{
  unsigned int v3; // r1@1
  int v4; // r1@3
  int result; // r0@5
  unsigned int v6; // r3@6
  int v7; // r1@7
  int v8; // r2@10
  int v9; // r1@14

  v3 = *(_DWORD *)(a2 + 132);
  if ( (_BYTE)v3 )
  {
    if ( a3 == 1 )
      v4 = a1 + 240;
    else
      v4 = a1 + 168;
    result = v4;
  }
  else
    v6 = v3 >> 16;
    {
      v7 = a1 + 216;
      if ( (_BYTE)v6 )
        v7 = a1 + 228;
      result = v7;
    }
      v8 = (unsigned __int8)v6;
      if ( v6 > 0xFF )
        v8 = (unsigned __int8)v6 | 2;
      if ( v3 & 0xFF00 )
        v8 |= 4u;
      v9 = *(_DWORD *)(a1 + 4 * v8 + 264);
      if ( !v9 )
        v9 = a1 + 132;
      result = v9;
  return result;
}


int __fastcall ItemInHandRenderer::onActiveResourcePacksChanged(ItemInHandRenderer *this)
{
  ItemInHandRenderer *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 83);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v2 + 124));
      mce::Mesh::~Mesh((mce::Mesh *)(v2 + 20));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 324), 4 * (*(_QWORD *)((char *)v1 + 324) >> 32));
  result = 0;
  *((_DWORD *)v1 + 83) = 0;
  *((_DWORD *)v1 + 84) = 0;
  return result;
}


int __fastcall ItemInHandRenderer::_setPlayerBob(int a1, LocalPlayer *a2, int a3, int a4)
{
  int v5; // r4@1
  float v14; // r1@1
  float v17; // r1@1
  float v19; // r1@1
  mce::Math *v21; // r0@4
  float v22; // r1@4
  mce::Math *v25; // r0@8
  float v26; // r1@8
  int result; // r0@17
  int v29; // [sp+0h] [bp-80h]@13
  signed int v30; // [sp+4h] [bp-7Ch]@13
  int v31; // [sp+8h] [bp-78h]@13
  int v32; // [sp+Ch] [bp-74h]@13
  int v33; // [sp+10h] [bp-70h]@13
  int v34; // [sp+14h] [bp-6Ch]@13
  int v35; // [sp+18h] [bp-68h]@13
  int v36; // [sp+1Ch] [bp-64h]@13
  int v37; // [sp+20h] [bp-60h]@13
  int v38; // [sp+24h] [bp-5Ch]@13
  int v39; // [sp+28h] [bp-58h]@13
  int v40; // [sp+2Ch] [bp-54h]@13
  int v41; // [sp+30h] [bp-50h]@13
  int v42; // [sp+34h] [bp-4Ch]@13
  int v43; // [sp+38h] [bp-48h]@15
  int v44; // [sp+3Ch] [bp-44h]@15
  int v45; // [sp+40h] [bp-40h]@15
  int v46; // [sp+44h] [bp-3Ch]@15
  int v47; // [sp+48h] [bp-38h]@17
  float v48; // [sp+4Ch] [bp-34h]@13

  _R6 = a2;
  v5 = a4;
  _R5 = a3;
  _R0 = LocalPlayer::getLookBob(a2);
  __asm
  {
    VLDR            S16, [R0]
    VLDR            S18, [R0,#4]
  }
  _R0 = LocalPlayer::getOldLookBob(_R6);
    VLDR            S22, [R0,#4]
    VLDR            S20, [R0]
    VSUB.F32        S0, S18, S22
    VMOV            R0, S0
  _R0 = mce::Math::wrapDegrees(_R0, v14);
    VMOV            S0, R5
    VMOV            S2, R0
    VNEG.F32        S4, S22
    VMUL.F32        S2, S2, S0
    VSUB.F32        S6, S20, S16
    VLDR            S16, =0.1
    VSUB.F32        S2, S4, S2
    VLDR            S4, [R6,#0x78]
    VMUL.F32        S0, S6, S0
    VLDR            S6, [R6,#0x7C]
    VADD.F32        S2, S2, S6
    VSUB.F32        S0, S0, S20
    VMOV            R0, S2
    VADD.F32        S0, S4, S0
    VMUL.F32        S20, S0, S16
  _R0 = mce::Math::wrapDegrees(_R0, v17);
    VMOV.F32        S18, #1.0
    VABS.F32        S0, S20
    VMUL.F32        S16, S2, S16
    VCMPE.F32       S0, S18
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VCMPE.F32       S20, #0.0
      VMOV            R0, S0
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S0, #-1.0
      VMOV.F32        S20, S18
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S20, S0 }
    v21 = (mce::Math *)mce::Math::sqrt(_R0, v19);
    _R0 = mce::Math::sqrt(v21, v22);
      VMOV            S0, R0
      VMUL.F32        S20, S0, S20
    VABS.F32        S0, S16
      VCMPE.F32       S16, #0.0
      __asm { VMOVLT.F32      S18, S0 }
    v25 = (mce::Math *)mce::Math::sqrt(_R0, v19);
    _R0 = mce::Math::sqrt(v25, v26);
      VMUL.F32        S16, S0, S18
    VMOV.F32        S18, #-10.0
    VADD.F32        S0, S20, S20
    VMOV.F32        S20, #10.0
    VMOV.F32        S2, S18
    VCMPE.F32       S0, S20
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S20 }
  v29 = 1065353216;
  v30 = 0;
  v31 = 0;
  __asm { VSTR            S2, [SP,#0x80+var_34] }
  glm::rotate<float>((int)&v32, v5, (int)&v48, (int)&v29);
  __asm { VADD.F32        S0, S16, S16 }
  *(_DWORD *)v5 = v32;
  *(_DWORD *)(v5 + 4) = v33;
  *(_DWORD *)(v5 + 8) = v34;
  __asm { VCMPE.F32       S0, S18 }
  *(_DWORD *)(v5 + 12) = v35;
  *(_DWORD *)(v5 + 16) = v36;
  __asm { VCMPE.F32       S0, S20 }
  *(_DWORD *)(v5 + 20) = v37;
  *(_DWORD *)(v5 + 24) = v38;
  *(_DWORD *)(v5 + 28) = v39;
  *(_DWORD *)(v5 + 32) = v40;
  *(_DWORD *)(v5 + 36) = v41;
  *(_DWORD *)(v5 + 40) = v42;
    __asm { VMOVGT.F32      S18, S0 }
  *(_DWORD *)(v5 + 44) = v43;
  *(_DWORD *)(v5 + 48) = v44;
  *(_DWORD *)(v5 + 52) = v45;
  *(_DWORD *)(v5 + 56) = v46;
    __asm { VMOVGT.F32      S18, S20 }
  *(_DWORD *)(v5 + 60) = v47;
  v29 = 0;
  v30 = 1065353216;
  __asm { VSTR            S18, [SP,#0x80+var_34] }
  result = v47;
  return result;
}


ItemInHandRenderer *__fastcall ItemInHandRenderer::~ItemInHandRenderer(ItemInHandRenderer *this)
{
  ItemInHandRenderer *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  char *v4; // r0@3
  int v5; // r0@6
  int v6; // r5@8
  void *v7; // r0@9
  void *v8; // r0@12
  void *v9; // r0@14
  int v10; // r0@16

  v1 = this;
  *(_DWORD *)this = &off_26DC7A8;
  v2 = *((_DWORD *)this + 83);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v2 + 124));
      mce::Mesh::~Mesh((mce::Mesh *)(v2 + 20));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 324), 4 * (*(_QWORD *)((char *)v1 + 324) >> 32));
  *((_DWORD *)v1 + 83) = 0;
  *((_DWORD *)v1 + 84) = 0;
  v4 = (char *)*((_DWORD *)v1 + 81);
  if ( v4 && (char *)v1 + 348 != v4 )
    operator delete(v4);
  v5 = *((_DWORD *)v1 + 80);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *((_DWORD *)v1 + 80) = 0;
  mce::TexturePtr::~TexturePtr((ItemInHandRenderer *)((char *)v1 + 296));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 252));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 240));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 228));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 216));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 204));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 192));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 180));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 168));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 156));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 144));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 132));
  v6 = *((_DWORD *)v1 + 29);
  if ( v6 )
    v7 = *(void **)(v6 + 4);
    if ( v7 )
      operator delete(v7);
    operator delete((void *)v6);
  *((_DWORD *)v1 + 29) = 0;
  v8 = (void *)*((_DWORD *)v1 + 23);
  if ( v8 )
    operator delete(v8);
  v9 = (void *)*((_DWORD *)v1 + 19);
  if ( v9 )
    operator delete(v9);
  v10 = *((_DWORD *)v1 + 12);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  *((_DWORD *)v1 + 12) = 0;
  *(_DWORD *)v1 = &off_26DCC64;
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 28));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 16));
  mce::MaterialPtr::~MaterialPtr((ItemInHandRenderer *)((char *)v1 + 4));
  return v1;
}


int __fastcall ItemInHandRenderer::_renderMapInHand(ItemInHandRenderer *this, BaseEntityRenderContext *a2, Player *a3, float a4, float a5, float a6)
{
  ItemInHandRenderer *v10; // r11@1
  Player *v13; // r9@1
  BaseEntityRenderContext *v14; // r10@1
  float v20; // r1@1
  float v23; // r1@1
  int v24; // r0@1
  float v27; // r1@1
  int v29; // r0@1
  int v40; // r4@5
  int v41; // r4@5
  int v43; // r4@5
  int v44; // r0@5
  float v47; // r1@5
  float v49; // r1@5
  float v52; // r1@5
  int v54; // r7@5
  int v56; // r7@5
  int v58; // r4@5
  Options *v60; // r0@6
  int v64; // r4@8
  int v65; // r4@8
  int v66; // r4@8
  Level *v71; // r0@8
  const ItemInstance *v72; // r1@8
  MapItemSavedData *v73; // r4@8
  _BOOL4 v74; // r6@9
  int v75; // r0@9
  int v76; // r7@9
  int v77; // r0@10
  int v78; // r0@10
  mce::Math *v80; // [sp+10h] [bp-C0h]@1
  char v81; // [sp+14h] [bp-BCh]@10
  char v82; // [sp+20h] [bp-B0h]@5
  char v83; // [sp+28h] [bp-A8h]@1
  int v84; // [sp+30h] [bp-A0h]@5
  signed int v85; // [sp+34h] [bp-9Ch]@5
  int v86; // [sp+38h] [bp-98h]@5
  int v87; // [sp+3Ch] [bp-94h]@5
  int v88; // [sp+40h] [bp-90h]@5
  int v89; // [sp+44h] [bp-8Ch]@5
  int v90; // [sp+48h] [bp-88h]@5
  int v91; // [sp+4Ch] [bp-84h]@5
  int v92; // [sp+50h] [bp-80h]@5
  int v93; // [sp+54h] [bp-7Ch]@5
  int v94; // [sp+58h] [bp-78h]@5
  int v95; // [sp+5Ch] [bp-74h]@5
  int v96; // [sp+60h] [bp-70h]@5
  int v97; // [sp+64h] [bp-6Ch]@5
  int v98; // [sp+68h] [bp-68h]@5
  int v99; // [sp+6Ch] [bp-64h]@5
  int v100; // [sp+70h] [bp-60h]@5
  int v101; // [sp+74h] [bp-5Ch]@5
  int v102; // [sp+78h] [bp-58h]@5
  int v103; // [sp+7Ch] [bp-54h]@5

  __asm { VLDR            S16, [SP,#0xD0+arg_4] }
  v10 = this;
  _R4 = a4;
  __asm { VMOV            R6, S16 }
  v13 = a3;
  v14 = a2;
  _R7 = &MapConstants::MAP_SWING_POS_SCALE;
  __asm { VLDR            S20, [R7] }
  v80 = _R6;
  _R0 = mce::Math::sqrt(_R6, *(float *)&a2);
  __asm { VMOV            S0, R0 }
  _R1 = &mce::Math::PI;
  __asm
  {
    VLDR            S18, [R1]
    VMUL.F32        S0, S18, S0
    VMOV            R0, S0
  }
  _R5 = mce::Math::sin(_R0, COERCE_FLOAT(&mce::Math::PI));
  __asm { VLDR            S22, [R7,#4] }
  _R0 = mce::Math::sqrt(_R6, v20);
    VMOV            S0, R0
    VADD.F32        S0, S0, S0
  v24 = mce::Math::sin(_R0, v23);
  __asm { VMUL.F32        S0, S18, S16 }
  _R6 = v24;
    VLDR            S24, [R7,#8]
  _R7 = mce::Math::sin(_R0, v27);
  v29 = BaseEntityRenderContext::getWorldMatrix(v14);
  MatrixStack::push((MatrixStack *)&v83, v29);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v83);
    VMOV            S0, R4
    VLDR            S3, =0.0
    VMOV            S2, R5
    VLDR            S10, [R0]
    VLDR            S12, [R0,#4]
    VMOV            S4, R6
  _R1 = &MapConstants::MAP_PLAYER_PITCH_SCALE;
    VMUL.F32        S2, S2, S20
    VLDR            S14, [R0,#8]
    VMUL.F32        S4, S4, S22
    VLDR            S1, [R0,#0xC]
    VMOV            S6, R7
    VLDR            S8, [R1]
    VLDR            S5, [R0,#0x18]
    VMUL.F32        S6, S6, S24
    VDIV.F32        S0, S0, S8
    VLDR            S8, =1.1
    VMUL.F32        S12, S12, S2
    VMUL.F32        S14, S14, S2
    VSUB.F32        S0, S8, S0
    VMOV.F32        S8, #1.0
    VMUL.F32        S1, S1, S2
    VMUL.F32        S2, S10, S2
    VMUL.F32        S5, S5, S4
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S8
    VADD.F32        S14, S5, S14
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S3, S0 }
    VLDR            S7, [R0,#0x14]
    VLDR            S9, [R0,#0x10]
    VMUL.F32        S7, S7, S4
    VLDR            S11, [R0,#0x1C]
    VMUL.F32        S9, S9, S4
    VLDR            S10, [R0,#0x20]
    VMUL.F32        S4, S11, S4
    VADD.F32        S12, S7, S12
    VADD.F32        S2, S9, S2
    VADD.F32        S4, S4, S1
    __asm { VMOVGT.F32      S3, S8 }
    VLDR            S0, [R0,#0x24]
    VMUL.F32        S3, S3, S18
    VLDR            S7, [R0,#0x2C]
    VMUL.F32        S8, S10, S6
    VLDR            S10, [R0,#0x28]
    VMUL.F32        S0, S0, S6
    VMUL.F32        S10, S10, S6
    VMUL.F32        S6, S7, S6
    VMOV            R1, S3
    VADD.F32        S2, S2, S8
    VADD.F32        S0, S12, S0
    VLDR            S12, [R0,#0x38]
    VADD.F32        S8, S14, S10
    VLDR            S10, [R0,#0x34]
    VADD.F32        S4, S4, S6
    VLDR            S6, [R0,#0x30]
    VADD.F32        S2, S2, S6
    VLDR            S6, [R0,#0x3C]
    VADD.F32        S0, S0, S10
    VADD.F32        S8, S8, S12
    VSTR            S2, [R0,#0x30]
    VSTR            S0, [R0,#0x34]
    VSTR            S8, [R0,#0x38]
    VSTR            S4, [R0,#0x3C]
  _R4 = mce::Math::cos(_R1, *(float *)&_R1);
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S14, [R0,#0x14]
  _R1 = &MapConstants::MAP_HANDS_POS;
    VLDR            S1, [R0,#0x10]
    VLDR            S4, [R0,#8]
    VLDR            S10, [R1,#4]
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S0, S0, S8
    VLDR            S3, [R0,#0x18]
    VMUL.F32        S1, S1, S10
    VMUL.F32        S2, S2, S8
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S14, S14, S10
    VLDR            S12, [R1,#8]
    VMUL.F32        S3, S3, S10
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S10, S5, S10
    VMUL.F32        S5, S7, S12
    VLDR            S7, [R0,#0x28]
    VADD.F32        S0, S1, S0
    VADD.F32        S2, S14, S2
    VLDR            S14, [R0,#0x2C]
    VMUL.F32        S8, S8, S12
    VMUL.F32        S1, S7, S12
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VMUL.F32        S12, S14, S12
    VADD.F32        S0, S0, S5
    VLDR            S8, [R0,#0x30]
    VADD.F32        S6, S6, S12
    VADD.F32        S0, S0, S8
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S12
    VADD.F32        S6, S6, S8
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
    VLDR            S0, [SP,#0xD0+arg_0]
    VLDR            S4, [R0,#0x18]
    VLDR            S6, [R0,#0x1C]
  _R1 = &MapConstants::MAP_HANDS_HEIGHT_SCALE;
    VLDR            S8, [R0,#0x10]
    VLDR            S2, [R1]
    VMUL.F32        S0, S2, S0
    VLDR            S2, [R0,#0x14]
    VLDR            S14, [R0,#0x3C]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S4, S4, S0
    VMUL.F32        S8, S8, S0
    VMUL.F32        S0, S6, S0
    VADD.F32        S2, S10, S2
    VADD.F32        S4, S12, S4
    VADD.F32        S0, S14, S0
    VSTR            S6, [R0,#0x30]
    VSTR            S0, [R0,#0x3C]
    VMOV.F32        S2, #0.5
  _R1 = &MapConstants::MAP_HANDS_TILT_SCALE;
    VMUL.F32        S0, S0, S2
    VSUB.F32        S18, S2, S0
    VLDR            S0, [R1]
    VMUL.F32        S0, S0, S18
  v40 = MatrixStack::MatrixStackRef::operator->((int)&v83);
  v84 = 0;
  v85 = 1065353216;
  v86 = 0;
  v103 = dword_2807DCC;
  glm::rotate<float>((int)&v87, v40, (int)&v103, (int)&v84);
  *(_DWORD *)v40 = v87;
  *(_DWORD *)(v40 + 4) = v88;
  *(_DWORD *)(v40 + 8) = v89;
  *(_DWORD *)(v40 + 12) = v90;
  *(_DWORD *)(v40 + 16) = v91;
  *(_DWORD *)(v40 + 20) = v92;
  *(_DWORD *)(v40 + 24) = v93;
  *(_DWORD *)(v40 + 28) = v94;
  *(_DWORD *)(v40 + 32) = v95;
  *(_DWORD *)(v40 + 36) = v96;
  *(_DWORD *)(v40 + 40) = v97;
  *(_DWORD *)(v40 + 44) = v98;
  *(_DWORD *)(v40 + 48) = v99;
  *(_DWORD *)(v40 + 52) = v100;
  *(_DWORD *)(v40 + 56) = v101;
  *(_DWORD *)(v40 + 60) = v102;
  v41 = MatrixStack::MatrixStackRef::operator->((int)&v83);
  _R0 = &MapConstants::MAP_HANDS_ROT;
  __asm { VLDR            S0, [R0,#8] }
  v85 = 0;
  __asm { VMUL.F32        S0, S0, S18 }
  v86 = 1065353216;
  __asm { VSTR            S0, [SP,#0xD0+var_54] }
  glm::rotate<float>((int)&v87, v41, (int)&v103, (int)&v84);
  *(_DWORD *)v41 = v87;
  *(_DWORD *)(v41 + 4) = v88;
  *(_DWORD *)(v41 + 8) = v89;
  *(_DWORD *)(v41 + 12) = v90;
  *(_DWORD *)(v41 + 16) = v91;
  *(_DWORD *)(v41 + 20) = v92;
  *(_DWORD *)(v41 + 24) = v93;
  *(_DWORD *)(v41 + 28) = v94;
  *(_DWORD *)(v41 + 32) = v95;
  *(_DWORD *)(v41 + 36) = v96;
  *(_DWORD *)(v41 + 40) = v97;
  *(_DWORD *)(v41 + 44) = v98;
  *(_DWORD *)(v41 + 48) = v99;
  *(_DWORD *)(v41 + 52) = v100;
  *(_DWORD *)(v41 + 56) = v101;
  *(_DWORD *)(v41 + 60) = v102;
  v43 = MatrixStack::MatrixStackRef::operator->((int)&v83);
  v84 = 1065353216;
  v103 = MapConstants::MAP_HANDS_ROT;
  glm::rotate<float>((int)&v87, v43, (int)&v103, (int)&v84);
  *(_DWORD *)v43 = v87;
  *(_DWORD *)(v43 + 4) = v88;
  *(_DWORD *)(v43 + 8) = v89;
  *(_DWORD *)(v43 + 12) = v90;
  *(_DWORD *)(v43 + 16) = v91;
  *(_DWORD *)(v43 + 20) = v92;
  *(_DWORD *)(v43 + 24) = v93;
  *(_DWORD *)(v43 + 28) = v94;
  *(_DWORD *)(v43 + 32) = v95;
  *(_DWORD *)(v43 + 36) = v96;
  *(_DWORD *)(v43 + 40) = v97;
  *(_DWORD *)(v43 + 44) = v98;
  *(_DWORD *)(v43 + 48) = v99;
  *(_DWORD *)(v43 + 52) = v100;
  *(_DWORD *)(v43 + 56) = v101;
  *(_DWORD *)(v43 + 60) = v102;
  ItemInHandRenderer::_renderMapHands(v10, v14, v13);
  v44 = BaseEntityRenderContext::getWorldMatrix(v14);
  MatrixStack::push((MatrixStack *)&v82, v44);
  __asm { VMUL.F32        S0, S16, S16 }
  _R0 = &mce::Math::PI;
    VLDR            S16, [R0]
    VMUL.F32        S0, S0, S16
  _R5 = mce::Math::sin(_R0, v47);
  _R0 = mce::Math::sqrt(v80, v49);
    VMUL.F32        S0, S16, S0
  _R4 = mce::Math::sin(_R0, v52);
  v54 = MatrixStack::MatrixStackRef::operator->((int)&v82);
  __asm { VMOV            S0, R5 }
  _R0 = &MapConstants::MAP_SWING_ROT;
  __asm { VLDR            S2, [R0,#4] }
    VSTR            S0, [SP,#0xD0+var_54]
  glm::rotate<float>((int)&v87, v54, (int)&v103, (int)&v84);
  *(_DWORD *)v54 = v87;
  *(_DWORD *)(v54 + 4) = v88;
  *(_DWORD *)(v54 + 8) = v89;
  *(_DWORD *)(v54 + 12) = v90;
  *(_DWORD *)(v54 + 16) = v91;
  *(_DWORD *)(v54 + 20) = v92;
  *(_DWORD *)(v54 + 24) = v93;
  *(_DWORD *)(v54 + 28) = v94;
  *(_DWORD *)(v54 + 32) = v95;
  *(_DWORD *)(v54 + 36) = v96;
  *(_DWORD *)(v54 + 40) = v97;
  *(_DWORD *)(v54 + 44) = v98;
  *(_DWORD *)(v54 + 48) = v99;
  *(_DWORD *)(v54 + 52) = v100;
  *(_DWORD *)(v54 + 56) = v101;
  *(_DWORD *)(v54 + 60) = v102;
  v56 = MatrixStack::MatrixStackRef::operator->((int)&v82);
  __asm { VMOV            S16, R4 }
  __asm { VMUL.F32        S0, S0, S16 }
  glm::rotate<float>((int)&v87, v56, (int)&v103, (int)&v84);
  *(_DWORD *)v56 = v87;
  *(_DWORD *)(v56 + 4) = v88;
  *(_DWORD *)(v56 + 8) = v89;
  *(_DWORD *)(v56 + 12) = v90;
  *(_DWORD *)(v56 + 16) = v91;
  *(_DWORD *)(v56 + 20) = v92;
  *(_DWORD *)(v56 + 24) = v93;
  *(_DWORD *)(v56 + 28) = v94;
  *(_DWORD *)(v56 + 32) = v95;
  *(_DWORD *)(v56 + 36) = v96;
  *(_DWORD *)(v56 + 40) = v97;
  *(_DWORD *)(v56 + 44) = v98;
  *(_DWORD *)(v56 + 48) = v99;
  *(_DWORD *)(v56 + 52) = v100;
  *(_DWORD *)(v56 + 56) = v101;
  *(_DWORD *)(v56 + 60) = v102;
  v58 = MatrixStack::MatrixStackRef::operator->((int)&v82);
  __asm { VLDR            S0, [R0] }
  glm::rotate<float>((int)&v87, v58, (int)&v103, (int)&v84);
  *(_DWORD *)v58 = v87;
  *(_DWORD *)(v58 + 4) = v88;
  *(_DWORD *)(v58 + 8) = v89;
  *(_DWORD *)(v58 + 12) = v90;
  *(_DWORD *)(v58 + 16) = v91;
  *(_DWORD *)(v58 + 20) = v92;
  *(_DWORD *)(v58 + 24) = v93;
  *(_DWORD *)(v58 + 28) = v94;
  *(_DWORD *)(v58 + 32) = v95;
  *(_DWORD *)(v58 + 36) = v96;
  *(_DWORD *)(v58 + 40) = v97;
  *(_DWORD *)(v58 + 44) = v98;
  *(_DWORD *)(v58 + 48) = v99;
  *(_DWORD *)(v58 + 52) = v100;
  *(_DWORD *)(v58 + 56) = v101;
  *(_DWORD *)(v58 + 60) = v102;
  if ( ClientInstance::getSplitScreenCount(*((ClientInstance **)v10 + 28)) == 2 )
    v60 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v10 + 28));
    if ( !Options::getSplitscreenDirection(v60) )
    {
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v82);
      __asm
      {
        VLDR            S0, =0.6
        VLDR            S2, [R0]
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
      }
    }
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v82);
  _R1 = &MapConstants::MAP_PRE_ROT_SCALE;
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
    VSTR            S0, [R0,#0x24]
    VLDR            S0, [R0,#0x28]
    VSTR            S0, [R0,#0x28]
    VLDR            S0, [R0,#0x2C]
    VSTR            S0, [R0,#0x2C]
  v64 = MatrixStack::MatrixStackRef::operator->((int)&v82);
  v103 = unk_2807E14;
  glm::rotate<float>((int)&v87, v64, (int)&v103, (int)&v84);
  *(_DWORD *)v64 = v87;
  *(_DWORD *)(v64 + 4) = v88;
  *(_DWORD *)(v64 + 8) = v89;
  *(_DWORD *)(v64 + 12) = v90;
  *(_DWORD *)(v64 + 16) = v91;
  *(_DWORD *)(v64 + 20) = v92;
  *(_DWORD *)(v64 + 24) = v93;
  *(_DWORD *)(v64 + 28) = v94;
  *(_DWORD *)(v64 + 32) = v95;
  *(_DWORD *)(v64 + 36) = v96;
  *(_DWORD *)(v64 + 40) = v97;
  *(_DWORD *)(v64 + 44) = v98;
  *(_DWORD *)(v64 + 48) = v99;
  *(_DWORD *)(v64 + 52) = v100;
  *(_DWORD *)(v64 + 56) = v101;
  *(_DWORD *)(v64 + 60) = v102;
  v65 = MatrixStack::MatrixStackRef::operator->((int)&v82);
  v103 = unk_2807E18;
  glm::rotate<float>((int)&v87, v65, (int)&v103, (int)&v84);
  *(_DWORD *)v65 = v87;
  *(_DWORD *)(v65 + 4) = v88;
  *(_DWORD *)(v65 + 8) = v89;
  *(_DWORD *)(v65 + 12) = v90;
  *(_DWORD *)(v65 + 16) = v91;
  *(_DWORD *)(v65 + 20) = v92;
  *(_DWORD *)(v65 + 24) = v93;
  *(_DWORD *)(v65 + 28) = v94;
  *(_DWORD *)(v65 + 32) = v95;
  *(_DWORD *)(v65 + 36) = v96;
  *(_DWORD *)(v65 + 40) = v97;
  *(_DWORD *)(v65 + 44) = v98;
  *(_DWORD *)(v65 + 48) = v99;
  *(_DWORD *)(v65 + 52) = v100;
  *(_DWORD *)(v65 + 56) = v101;
  *(_DWORD *)(v65 + 60) = v102;
  v66 = MatrixStack::MatrixStackRef::operator->((int)&v82);
  v103 = MapConstants::MAP_GLOBAL_ROT;
  glm::rotate<float>((int)&v87, v66, (int)&v103, (int)&v84);
  *(_DWORD *)v66 = v87;
  *(_DWORD *)(v66 + 4) = v88;
  *(_DWORD *)(v66 + 8) = v89;
  *(_DWORD *)(v66 + 12) = v90;
  *(_DWORD *)(v66 + 16) = v91;
  *(_DWORD *)(v66 + 20) = v92;
  *(_DWORD *)(v66 + 24) = v93;
  *(_DWORD *)(v66 + 28) = v94;
  *(_DWORD *)(v66 + 32) = v95;
  *(_DWORD *)(v66 + 36) = v96;
  *(_DWORD *)(v66 + 40) = v97;
  *(_DWORD *)(v66 + 44) = v98;
  *(_DWORD *)(v66 + 48) = v99;
  *(_DWORD *)(v66 + 52) = v100;
  *(_DWORD *)(v66 + 56) = v101;
  *(_DWORD *)(v66 + 60) = v102;
  _R1 = &MapConstants::MAP_GLOBAL_POS;
  _R1 = &MapConstants::MAP_FINAL_SCALE;
  v71 = (Level *)ClientInstance::getLevel(*((ClientInstance **)v10 + 28));
  v73 = Level::getMapSavedData(v71, (ItemInHandRenderer *)((char *)v10 + 40));
  if ( v73 )
    v74 = MapItem::doesDisplayPlayerMarkers((ItemInHandRenderer *)((char *)v10 + 40), v72);
    v75 = BaseEntityRenderContext::getEntityRenderDispatcher(v14);
    v76 = EntityRenderDispatcher::getRenderer(v75, 59);
    if ( v76 )
      v77 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v13 + 52))(v13);
      BlockPos::BlockPos((int)&v81, v77);
      v78 = Entity::getRegion(v13);
      MapRenderer::render(v76, v14, (int)v13, (int)&v81, v78, (int)v73, 0, !v74);
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v82);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v83);
}


void __fastcall ItemInHandRenderer::initMaterials(ItemInHandRenderer *this, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r5@1
  ItemInHandRenderer *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r0@12
  unsigned int *v16; // r2@14
  signed int v17; // r1@16
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  unsigned int *v36; // r2@54
  signed int v37; // r1@56
  unsigned int *v38; // r2@58
  signed int v39; // r1@60
  int v40; // [sp+4h] [bp-124h]@12
  int v41; // [sp+8h] [bp-120h]@12
  char v42; // [sp+Ch] [bp-11Ch]@12
  int v43; // [sp+28h] [bp-100h]@11
  char v44; // [sp+2Ch] [bp-FCh]@11
  int v45; // [sp+3Ch] [bp-ECh]@10
  char v46; // [sp+40h] [bp-E8h]@10
  int v47; // [sp+50h] [bp-D8h]@9
  char v48; // [sp+54h] [bp-D4h]@9
  int v49; // [sp+64h] [bp-C4h]@8
  char v50; // [sp+68h] [bp-C0h]@8
  int v51; // [sp+78h] [bp-B0h]@7
  char v52; // [sp+7Ch] [bp-ACh]@7
  int v53; // [sp+8Ch] [bp-9Ch]@6
  char v54; // [sp+90h] [bp-98h]@6
  int v55; // [sp+A0h] [bp-88h]@5
  char v56; // [sp+A4h] [bp-84h]@5
  int v57; // [sp+B4h] [bp-74h]@4
  char v58; // [sp+B8h] [bp-70h]@4
  int v59; // [sp+C8h] [bp-60h]@3
  char v60; // [sp+CCh] [bp-5Ch]@3
  int v61; // [sp+DCh] [bp-4Ch]@2
  char v62; // [sp+E0h] [bp-48h]@2
  int v63; // [sp+F0h] [bp-38h]@1
  char v64; // [sp+F4h] [bp-34h]@1

  v2 = a2;
  v3 = this;
  sub_119C884((void **)&v63, "item_in_hand");
  mce::RenderMaterialGroup::getMaterial(
    (mce::MaterialPtr *)&v64,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v63);
  mce::MaterialPtr::operator=((ItemInHandRenderer *)((char *)v3 + 168), (mce::MaterialPtr *)&v64);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v64);
  v4 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v63 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  sub_119C884((void **)&v61, "opaque_block");
    (mce::MaterialPtr *)&v62,
    &v61);
  mce::MaterialPtr::operator=((ItemInHandRenderer *)((char *)v3 + 132), (mce::MaterialPtr *)&v62);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v62);
  v5 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v61 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v59, "opaque_block_color");
    (mce::MaterialPtr *)&v60,
    &v59);
  mce::MaterialPtr::operator=((ItemInHandRenderer *)((char *)v3 + 144), (mce::MaterialPtr *)&v60);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v60);
  v6 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v59 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v57, "entity_alphatest");
    (mce::MaterialPtr *)&v58,
    &v57);
  mce::MaterialPtr::operator=((ItemInHandRenderer *)((char *)v3 + 156), (mce::MaterialPtr *)&v58);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v58);
  v7 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v57 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v55, "item_in_hand_entity_alphatest_color");
    (mce::MaterialPtr *)&v56,
    &v55);
  mce::MaterialPtr::operator=((ItemInHandRenderer *)((char *)v3 + 204), (mce::MaterialPtr *)&v56);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v56);
  v8 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v55 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v53, "entity_alphablend");
    (mce::MaterialPtr *)&v54,
    &v53);
  mce::MaterialPtr::operator=((ItemInHandRenderer *)((char *)v3 + 180), (mce::MaterialPtr *)&v54);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v54);
  v9 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v53 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v51, "entity_alphablend_nocolor");
    (mce::MaterialPtr *)&v52,
    &v51);
  mce::MaterialPtr::operator=((ItemInHandRenderer *)((char *)v3 + 192), (mce::MaterialPtr *)&v52);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v52);
  v10 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v51 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v49, "item_in_hand_glint");
    (mce::MaterialPtr *)&v50,
    &v49);
  mce::MaterialPtr::operator=((ItemInHandRenderer *)((char *)v3 + 240), (mce::MaterialPtr *)&v50);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v50);
  v11 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v49 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v47, "entity_glint");
    (mce::MaterialPtr *)&v48,
    &v47);
  mce::MaterialPtr::operator=((ItemInHandRenderer *)((char *)v3 + 216), (mce::MaterialPtr *)&v48);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v48);
  v12 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v47 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v45, "entity_alphatest_glint");
    (mce::MaterialPtr *)&v46,
    &v45);
  mce::MaterialPtr::operator=((ItemInHandRenderer *)((char *)v3 + 228), (mce::MaterialPtr *)&v46);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v46);
  v13 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v45 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v43, "entity_flat_color_line");
    (mce::MaterialPtr *)&v44,
    &v43);
  mce::MaterialPtr::operator=((ItemInHandRenderer *)((char *)v3 + 252), (mce::MaterialPtr *)&v44);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v44);
  v14 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v43 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  *((_DWORD *)v3 + 66) = (char *)v3 + 132;
  *((_DWORD *)v3 + 67) = (char *)v3 + 156;
  *((_DWORD *)v3 + 68) = (char *)v3 + 192;
  *((_DWORD *)v3 + 70) = (char *)v3 + 144;
  *((_DWORD *)v3 + 69) = 0;
  *((_DWORD *)v3 + 71) = (char *)v3 + 204;
  *((_DWORD *)v3 + 72) = (char *)v3 + 180;
  *((_DWORD *)v3 + 73) = 0;
  sub_119C854(&v40, (int *)&EntityShaderManager::GLINT_TEXTURE_LOCATION);
  v41 = unk_27D2348;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v42, v2, (int)&v40, 0);
  mce::TexturePtr::operator=((ItemInHandRenderer *)((char *)v3 + 296), (mce::TexturePtr *)&v42);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v42);
  v15 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v40 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
}


_DWORD *__fastcall ItemInHandRenderer::ItemInHandRenderer(_DWORD *a1, int a2, int a3, mce::TextureGroup *a4)
{
  mce::TextureGroup *v4; // r10@1
  int v5; // r5@1
  int v6; // r6@1
  _DWORD *v7; // r4@1
  TextureTessellator *v8; // r6@1
  BannerBlockEntity *v9; // r5@1
  double v10; // r0@1
  unsigned int v11; // r0@1
  int v12; // r8@3
  void *v13; // r5@3

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  EntityShaderManager::EntityShaderManager(a1);
  *v7 = &off_26DC7A8;
  ItemInstance::ItemInstance((int)(v7 + 10));
  v7[28] = v6;
  v8 = (TextureTessellator *)operator new(0x18u);
  TextureTessellator::TextureTessellator(v8);
  v7[29] = v8;
  v7[30] = 0;
  v7[31] = 0;
  v7[32] = v5;
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v7 + 33));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v7 + 36));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v7 + 39));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v7 + 42));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v7 + 45));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v7 + 48));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v7 + 51));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v7 + 54));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v7 + 57));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v7 + 60));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v7 + 63));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 74));
  v9 = (BannerBlockEntity *)operator new(0x80u);
  BannerBlockEntity::BannerBlockEntity(v9, (const BlockPos *)&BlockPos::MIN);
  v7[80] = v9;
  v7[83] = 0;
  v7[84] = 0;
  v7[85] = 1065353216;
  v7[86] = 0;
  LODWORD(v10) = v7 + 85;
  v11 = sub_119C844(v10);
  v7[82] = v11;
  if ( v11 == 1 )
  {
    v13 = v7 + 87;
    v7[87] = 0;
  }
  else
    if ( v11 >= 0x40000000 )
      sub_119C874();
    v12 = 4 * v11;
    v13 = operator new(4 * v11);
    _aeabi_memclr4(v13, v12);
  v7[81] = v13;
  v7[88] = 1065353216;
  v7[91] = 0;
  v7[92] = 0;
  v7[89] = 0;
  v7[90] = 0;
  v7[95] = 0;
  v7[96] = 0;
  *(_QWORD *)(v7 + 93) = 1065353216LL;
  v7[97] = 0;
  v7[98] = 1065353216;
  v7[101] = 0;
  v7[102] = 0;
  v7[99] = 0;
  v7[100] = 0;
  v7[103] = 1065353216;
  ItemInHandRenderer::initMaterials((ItemInHandRenderer *)v7, v4);
  return v7;
}


void *__fastcall ItemInHandRenderer::getObjectTexture(int a1, int a2, int a3)
{
  void *result; // r0@1

  result = (void *)(a2 + 108);
  if ( *(_BYTE *)(a2 + 132) )
  {
    if ( !a3 )
      result = &mce::TexturePtr::NONE;
  }
  return result;
}


_DWORD *__fastcall ItemInHandRenderer::_rebuildItem(ItemInHandRenderer *this, BaseEntityRenderContext *a2, Mob *a3, const ItemInstance *a4, int a5)
{
  ItemInstance *v5; // r6@1
  ItemInHandRenderer *v6; // r11@1
  Mob *v7; // r8@1
  int v8; // r4@3
  int v9; // r5@6
  unsigned __int8 v10; // r4@7
  unsigned __int8 v11; // r0@7
  int v12; // r1@7
  mce::TextureGroup *v13; // r4@9
  char *v14; // r0@9
  char *v15; // r0@10
  unsigned int v16; // r7@11
  unsigned int v17; // r8@11
  int v18; // r9@11
  unsigned int *v19; // r0@11
  unsigned int *v20; // r11@12
  __int64 v21; // r4@12
  _DWORD *v22; // r6@14
  _QWORD *v24; // r0@21
  unsigned int v25; // r0@22
  int v26; // r8@22
  int v27; // r4@23
  int v28; // r0@23
  signed int v29; // r1@23
  Tessellator *v30; // r6@26
  BlockTessellator *v31; // r4@26
  char *v32; // r0@26
  int v33; // r0@26
  ItemRenderer *v34; // r0@30
  int v35; // r0@30
  const char *v41; // r0@32
  int v42; // r4@33
  int (__fastcall *v43)(int, int); // r5@33
  int v44; // r0@33
  __int64 v45; // kr18_8@33
  unsigned int v46; // r8@33
  int v47; // r9@33
  _DWORD *v48; // r0@33
  _DWORD *v49; // r6@34
  unsigned int v50; // r4@34
  unsigned int v51; // r7@34
  _DWORD *v52; // r5@36
  bool v53; // zf@39
  _QWORD *v54; // r0@43
  unsigned int *v56; // r2@45
  signed int v57; // r1@47
  unsigned int *v58; // r2@49
  signed int v59; // r1@51
  Mob *v60; // [sp+14h] [bp-20Ch]@10
  ItemInstance *v61; // [sp+18h] [bp-208h]@7
  ItemInHandRenderer *v62; // [sp+1Ch] [bp-204h]@11
  BaseEntityRenderContext *v63; // [sp+20h] [bp-200h]@1
  int v64; // [sp+24h] [bp-1FCh]@11
  char v65; // [sp+28h] [bp-1F8h]@32
  unsigned __int16 v66; // [sp+8Ch] [bp-194h]@30
  unsigned __int16 v67; // [sp+8Eh] [bp-192h]@30
  char v68; // [sp+90h] [bp-190h]@30
  char v69; // [sp+A8h] [bp-178h]@26
  char v70; // [sp+C0h] [bp-160h]@26
  char v71; // [sp+124h] [bp-FCh]@26
  char v72; // [sp+125h] [bp-FBh]@26
  int v73; // [sp+128h] [bp-F8h]@22
  int v74; // [sp+194h] [bp-8Ch]@22
  char v75[5]; // [sp+1ACh] [bp-74h]@22
  char *v76; // [sp+1BCh] [bp-64h]@9
  char *v77; // [sp+1C0h] [bp-60h]@9
  int v78; // [sp+1C4h] [bp-5Ch]@9
  char v79; // [sp+1C8h] [bp-58h]@9
  __int64 v80; // [sp+1E0h] [bp-40h]@9
  __int64 *v81; // [sp+1ECh] [bp-34h]@21
  __int64 *v82; // [sp+1F8h] [bp-28h]@43

  v5 = a4;
  v6 = this;
  v7 = a3;
  v63 = a2;
  if ( *((_BYTE *)a4 + 15) )
  {
    if ( ItemInstance::isStackedByData(a4) == 1 )
      v8 = ItemInstance::getAuxValue(v5) << 16;
    else
      v8 = 0;
  }
  else
    v8 = 0;
  v9 = ItemInstance::getId(v5) | v8;
  if ( v7 )
    v10 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v7 + 488))(v7);
    v61 = v5;
    v11 = (*(int (**)(void))(**(_DWORD **)v5 + 240))();
    v12 = v10;
    v11 = a5;
    v12 = 0;
  LODWORD(v80) = v9;
  HIDWORD(v80) = v12 | (v11 << 8);
  v13 = (mce::TextureGroup *)BaseEntityRenderContext::getTextures(v63);
  sub_119C884((void **)&v76, "atlas.terrain");
  v77 = v76;
  v76 = (char *)&unk_28898CC;
  v78 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v79, v13, (int)&v77, 0);
  v14 = v77 - 12;
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v77 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
    }
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v60 = v7;
  v15 = v76 - 12;
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v76 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = *(_QWORD *)((char *)v6 + 324) >> 32;
  v17 = v80;
  v18 = (unsigned int)v80 % v16;
  v19 = *(unsigned int **)(*(_QWORD *)((char *)v6 + 324) + 4 * v18);
  v64 = (int)v6 + 324;
  v62 = v6;
  if ( !v19 )
    goto LABEL_21;
  v20 = (unsigned int *)*v19;
  LODWORD(v21) = *(_QWORD *)(*v19 + 8) >> 32;
  HIDWORD(v21) = *(_QWORD *)(*v19 + 8);
  while ( v21 != __PAIR__(v80, HIDWORD(v80)) )
    v22 = (_DWORD *)*v20;
    if ( *v20 )
      LODWORD(v21) = *((_QWORD *)v22 + 1) >> 32;
      HIDWORD(v21) = *((_QWORD *)v22 + 1);
      v19 = v20;
      v20 = (unsigned int *)*v20;
      if ( HIDWORD(v21) % v16 == v18 )
        continue;
  _ZF = v19 == 0;
  if ( v19 )
    v16 = *v19;
    _ZF = *v19 == 0;
  if ( _ZF )
LABEL_21:
    v81 = &v80;
    v24 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIKx10RenderCallELb0EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESD_IJEEEEEPS6_DpOT_(
            v64,
            (int)&unk_262CFA6,
            &v81);
    v16 = std::_Hashtable<long long,std::pair<long long const,RenderCall>,std::allocator<std::pair<long long const,RenderCall>>,std::__detail::_Select1st,std::equal_to<long long>,std::hash<long long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
            v18,
            v17,
            (int)v24);
  _aeabi_memclr8(&v73, 140);
  mce::Mesh::Mesh((mce::Mesh *)((unsigned int)&v73 | 4));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v74);
  *(_DWORD *)&v75[1] = 0;
  *(_DWORD *)(v16 + 16) = v73;
  mce::Mesh::operator=(v16 + 20, (unsigned int)&v73 | 4);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v16 + 124), (mce::TexturePtr *)&v74);
  v25 = *(_DWORD *)v75;
  *(_BYTE *)(v16 + 148) = v75[0];
  *(_BYTE *)(v16 + 149) = BYTE1(v25);
  *(_BYTE *)(v16 + 150) = v25 >> 16;
  *(_BYTE *)(v16 + 151) = BYTE3(v25);
  *(_BYTE *)(v16 + 152) = v75[4];
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v74);
  mce::Mesh::~Mesh((mce::Mesh *)((unsigned int)&v73 | 4));
  v26 = *((_DWORD *)v61 + 1);
  if ( !v26 )
    (*(void (**)(void))(**(_DWORD **)v61 + 60))();
LABEL_30:
    *(_DWORD *)(v16 + 16) = ItemInstance::getId(v61);
    *(_BYTE *)(v16 + 148) = 1;
    v34 = (ItemRenderer *)BaseEntityRenderContext::getItemRenderer(v63);
    v35 = ItemRenderer::getGraphics(v34, v61);
    mce::TexturePtr::clone((mce::TexturePtr *)&v68, v35);
    mce::TexturePtr::operator=((mce::TexturePtr *)(v16 + 124), (mce::TexturePtr *)&v68);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v68);
    ItemInHandRenderer::_tessellateTextureItem(
      (ItemInHandRenderer *)&v66,
      v63,
      *((TextureTessellator **)v62 + 29),
      v60,
      v61,
      a5,
      &v67,
      &v66);
    _R1 = v67;
    _R0 = &TextureAtlas::MIN_TILE_SIDE;
    if ( v67 < (unsigned int)v66 )
      _R1 = v66;
    __asm
      VMOV            S2, R1
      VLDR            S0, [R0]
      VCVT.F32.U32    S2, S2
      VCVT.F32.U32    S0, S0
      VDIV.F32        S0, S0, S2
      VSTR            S0, [R7,#0x78]
    v41 = (const char *)BaseEntityRenderContext::getTessellator(v63);
    Tessellator::end((Tessellator *)&v65, v41, 0, 0);
    mce::Mesh::operator=(v16 + 20, (int)&v65);
    mce::Mesh::~Mesh((mce::Mesh *)&v65);
    goto LABEL_33;
  v27 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(v26 + 4)]);
  v28 = BlockTessellator::canRender(v27);
  v29 = 0;
  if ( v27 != 22 )
    v29 = 1;
  if ( (v28 & v29) != 1 )
    goto LABEL_30;
  v30 = (Tessellator *)BaseEntityRenderContext::getTessellator(v63);
  v31 = (BlockTessellator *)*((_DWORD *)v62 + 32);
  v71 = *(_BYTE *)(v26 + 4);
  v72 = ItemInstance::getAuxValue(v61);
  Tessellator::begin(v30, 0, 0);
  Tessellator::voidBeginAndEndCalls(v30, 1);
  BlockTessellator::appendTessellatedBlock(v31, v30, (const FullBlock *)&v71);
  Tessellator::voidBeginAndEndCalls(v30, 0);
  Tessellator::end((Tessellator *)&v70, (const char *)v30, 0, 0);
  mce::Mesh::operator=(v16 + 20, (int)&v70);
  mce::Mesh::~Mesh((mce::Mesh *)&v70);
  *(_DWORD *)(v16 + 120) = 1065353216;
  mce::TexturePtr::clone((mce::TexturePtr *)&v69, (int)&v79);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v16 + 124), (mce::TexturePtr *)&v69);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v69);
  *(_DWORD *)(v16 + 16) = ItemInstance::getId(v61);
  *(_BYTE *)(v16 + 148) = 0;
  v32 = mce::Mesh::getVertexFormat((mce::Mesh *)(v16 + 20));
  *(_BYTE *)(v16 + 149) = mce::VertexFormat::hasField(v32, 1);
  *(_BYTE *)(v16 + 150) = Block::isAlphaTested((Block *)v26);
  v33 = Block::getRenderLayer((Block *)v26);
  if ( v33 != 1 )
    LOBYTE(v33) = 0;
  *(_BYTE *)(v16 + 151) = v33;
LABEL_33:
  v42 = *(_DWORD *)v61;
  v43 = *(int (__fastcall **)(int, int))(**(_DWORD **)v61 + 244);
  v44 = ItemInstance::getAuxValue(v61);
  *(_BYTE *)(v16 + 152) = v43(v42, v44);
  v45 = *(_QWORD *)((char *)v62 + 324);
  v46 = v80;
  v47 = (unsigned int)v80 % (unsigned int)(*(_QWORD *)((char *)v62 + 324) >> 32);
  v48 = *(_DWORD **)(v45 + 4 * v47);
  if ( !v48 )
    goto LABEL_43;
  v49 = (_DWORD *)*v48;
  v50 = *(_QWORD *)(*v48 + 8) >> 32;
  v51 = *(_QWORD *)(*v48 + 8);
  while ( v80 != __PAIR__(v50, v51) )
    v52 = (_DWORD *)*v49;
    if ( *v49 )
      v50 = *((_QWORD *)v52 + 1) >> 32;
      v51 = *((_QWORD *)v52 + 1);
      v48 = v49;
      v49 = (_DWORD *)*v49;
      if ( v51 % HIDWORD(v45) == v47 )
  v53 = v48 == 0;
  if ( v48 )
    v49 = (_DWORD *)*v48;
    v53 = *v48 == 0;
  if ( v53 )
LABEL_43:
    v82 = &v80;
    v54 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIKx10RenderCallELb0EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESD_IJEEEEEPS6_DpOT_(
            &v82);
    v49 = (_DWORD *)std::_Hashtable<long long,std::pair<long long const,RenderCall>,std::allocator<std::pair<long long const,RenderCall>>,std::__detail::_Select1st,std::equal_to<long long>,std::hash<long long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                      v64,
                      v47,
                      v46,
                      (int)v54);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v79);
  return v49 + 4;
}


void __fastcall ItemInHandRenderer::~ItemInHandRenderer(ItemInHandRenderer *this)
{
  ItemInHandRenderer::~ItemInHandRenderer(this);
}


int __fastcall ItemInHandRenderer::renderObject(int a1, BaseEntityRenderContext *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r0@1
  unsigned int v8; // r2@1
  int v9; // r1@1
  mce::Buffer *v10; // r0@2
  int v11; // r2@3
  unsigned int v12; // r0@4
  int result; // r0@8
  int v14; // r3@10
  int v15; // r2@14
  int v16; // [sp+0h] [bp-20h]@3

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = BaseEntityRenderContext::getScreenContext(a2);
  v8 = *(_DWORD *)(v6 + 132);
  v9 = v7;
  if ( (_BYTE)v8 )
  {
    v10 = (mce::Buffer *)(v6 + 4);
    if ( v5 == 1 )
    {
      v16 = v4 + 296;
      v11 = v4 + 240;
      return mce::Mesh::render(v10, v9, v11, v6 + 108, v16, 0, 0);
    }
    result = mce::Mesh::render(v10, v9, v4 + 168, 0, 0);
  }
  else
    v12 = v8 >> 16;
      v11 = v4 + 216;
      if ( (_BYTE)v12 )
        v11 = v4 + 228;
      v10 = (mce::Buffer *)(v6 + 4);
    v14 = (unsigned __int8)v12;
    if ( v12 > 0xFF )
      v14 = (unsigned __int8)v12 | 2;
    if ( v8 & 0xFF00 )
      v14 |= 4u;
    v15 = *(_DWORD *)(v4 + 4 * v14 + 264);
    if ( !v15 )
      v15 = v4 + 132;
    result = mce::Mesh::render((mce::Buffer *)(v6 + 4), v9, v15, v6 + 108, 0, 0);
  return result;
}


int __fastcall ItemInHandRenderer::_renderMapInOffHand(ItemInHandRenderer *this, BaseEntityRenderContext *a2, Player *a3, float a4, float a5, float a6)
{
  ItemInHandRenderer *v6; // r9@1
  Player *v7; // r8@1
  BaseEntityRenderContext *v8; // r10@1
  int v16; // r0@1
  float v19; // r1@1
  float v21; // r1@1
  int v23; // r0@1
  int v27; // r4@1
  int v28; // r4@1
  int v29; // r4@1
  int v30; // r0@1
  float v33; // r1@1
  float v35; // r1@1
  int v37; // r4@1
  int v39; // r4@1
  int v41; // r4@1
  int v45; // r4@1
  int v46; // r4@1
  int v47; // r4@1
  Options *v50; // r0@2
  char *v56; // r4@4
  Level *v57; // r0@4
  const ItemInstance *v58; // r1@4
  MapItemSavedData *v59; // r6@4
  _BOOL4 v60; // r7@5
  int v61; // r0@5
  int v62; // r4@5
  int v63; // r0@6
  int v64; // r0@6
  char v66; // [sp+14h] [bp-A4h]@6
  char v67; // [sp+20h] [bp-98h]@1
  char v68; // [sp+28h] [bp-90h]@1
  int v69; // [sp+30h] [bp-88h]@1
  signed int v70; // [sp+34h] [bp-84h]@1
  int v71; // [sp+38h] [bp-80h]@1
  int v72; // [sp+3Ch] [bp-7Ch]@1
  int v73; // [sp+40h] [bp-78h]@1
  int v74; // [sp+44h] [bp-74h]@1
  int v75; // [sp+48h] [bp-70h]@1
  int v76; // [sp+4Ch] [bp-6Ch]@1
  int v77; // [sp+50h] [bp-68h]@1
  int v78; // [sp+54h] [bp-64h]@1
  int v79; // [sp+58h] [bp-60h]@1
  int v80; // [sp+5Ch] [bp-5Ch]@1
  int v81; // [sp+60h] [bp-58h]@1
  int v82; // [sp+64h] [bp-54h]@1
  int v83; // [sp+68h] [bp-50h]@1
  int v84; // [sp+6Ch] [bp-4Ch]@1
  int v85; // [sp+70h] [bp-48h]@1
  int v86; // [sp+74h] [bp-44h]@1
  int v87; // [sp+78h] [bp-40h]@1
  int v88; // [sp+7Ch] [bp-3Ch]@1

  v6 = this;
  v7 = a3;
  v8 = a2;
  _R0 = &mce::Math::PI;
  __asm
  {
    VLDR            S18, [R0]
    VMOV            R6, S18
  }
  _R5 = &MapConstants::MAP_SWING_POS_SCALE;
  __asm { VLDR            S16, [R5] }
  v16 = mce::Math::sin(_R6, *(float *)&a2);
  __asm { VADD.F32        S0, S18, S18 }
  _R4 = v16;
    VLDR            S18, [R5,#4]
    VMOV            R0, S0
  _R7 = mce::Math::sin(_R0, v19);
  __asm { VLDR            S20, [R5,#8] }
  _R6 = mce::Math::sin(_R6, v21);
  v23 = BaseEntityRenderContext::getWorldMatrix(v8);
  MatrixStack::push((MatrixStack *)&v68, v23);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v68);
    VMOV            S0, R4
    VLDR            S6, [R0]
    VMOV            S2, R7
    VLDR            S8, [R0,#4]
    VMUL.F32        S0, S0, S16
    VLDR            S14, [R0,#0x14]
    VMUL.F32        S2, S2, S18
    VLDR            S1, [R0,#0x10]
    VMOV            S4, R6
    VLDR            S12, [R0,#0xC]
    VLDR            S3, [R0,#0x18]
    VLDR            S10, [R0,#8]
    VMUL.F32        S4, S4, S20
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
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
  _R1 = &MapConstants::MAP_HANDS_POS;
    VLDR            S4, [R0,#8]
    VLDR            S8, [R1]
    VLDR            S10, [R1,#4]
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S0, S0, S8
    VMUL.F32        S1, S1, S10
    VMUL.F32        S2, S2, S8
    VMUL.F32        S14, S14, S10
    VLDR            S12, [R1,#8]
    VMUL.F32        S3, S3, S10
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S10, S5, S10
    VMUL.F32        S5, S7, S12
    VADD.F32        S0, S1, S0
    VADD.F32        S2, S14, S2
    VMUL.F32        S8, S8, S12
    VMUL.F32        S1, S7, S12
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VMUL.F32        S12, S14, S12
    VADD.F32        S0, S0, S5
    VADD.F32        S2, S2, S8
    VLDR            S8, [R0,#0x30]
    VADD.F32        S4, S4, S1
    VADD.F32        S6, S6, S12
    VADD.F32        S0, S0, S8
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S12
    VADD.F32        S6, S6, S8
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
  MatrixStack::MatrixStackRef::operator->((int)&v68);
  v27 = MatrixStack::MatrixStackRef::operator->((int)&v68);
  v69 = 0;
  v70 = 1065353216;
  v71 = 0;
  v88 = dword_2807DCC;
  glm::rotate<float>((int)&v72, v27, (int)&v88, (int)&v69);
  *(_DWORD *)v27 = v72;
  *(_DWORD *)(v27 + 4) = v73;
  *(_DWORD *)(v27 + 8) = v74;
  *(_DWORD *)(v27 + 12) = v75;
  *(_DWORD *)(v27 + 16) = v76;
  *(_DWORD *)(v27 + 20) = v77;
  *(_DWORD *)(v27 + 24) = v78;
  *(_DWORD *)(v27 + 28) = v79;
  *(_DWORD *)(v27 + 32) = v80;
  *(_DWORD *)(v27 + 36) = v81;
  *(_DWORD *)(v27 + 40) = v82;
  *(_DWORD *)(v27 + 44) = v83;
  *(_DWORD *)(v27 + 48) = v84;
  *(_DWORD *)(v27 + 52) = v85;
  *(_DWORD *)(v27 + 56) = v86;
  *(_DWORD *)(v27 + 60) = v87;
  v28 = MatrixStack::MatrixStackRef::operator->((int)&v68);
  v70 = 0;
  v71 = 1065353216;
  v88 = 0;
  glm::rotate<float>((int)&v72, v28, (int)&v88, (int)&v69);
  *(_DWORD *)v28 = v72;
  *(_DWORD *)(v28 + 4) = v73;
  *(_DWORD *)(v28 + 8) = v74;
  *(_DWORD *)(v28 + 12) = v75;
  *(_DWORD *)(v28 + 16) = v76;
  *(_DWORD *)(v28 + 20) = v77;
  *(_DWORD *)(v28 + 24) = v78;
  *(_DWORD *)(v28 + 28) = v79;
  *(_DWORD *)(v28 + 32) = v80;
  *(_DWORD *)(v28 + 36) = v81;
  *(_DWORD *)(v28 + 40) = v82;
  *(_DWORD *)(v28 + 44) = v83;
  *(_DWORD *)(v28 + 48) = v84;
  *(_DWORD *)(v28 + 52) = v85;
  *(_DWORD *)(v28 + 56) = v86;
  *(_DWORD *)(v28 + 60) = v87;
  v29 = MatrixStack::MatrixStackRef::operator->((int)&v68);
  v69 = 1065353216;
  v88 = MapConstants::MAP_HANDS_ROT;
  glm::rotate<float>((int)&v72, v29, (int)&v88, (int)&v69);
  *(_DWORD *)v29 = v72;
  *(_DWORD *)(v29 + 4) = v73;
  *(_DWORD *)(v29 + 8) = v74;
  *(_DWORD *)(v29 + 12) = v75;
  *(_DWORD *)(v29 + 16) = v76;
  *(_DWORD *)(v29 + 20) = v77;
  *(_DWORD *)(v29 + 24) = v78;
  *(_DWORD *)(v29 + 28) = v79;
  *(_DWORD *)(v29 + 32) = v80;
  *(_DWORD *)(v29 + 36) = v81;
  *(_DWORD *)(v29 + 40) = v82;
  *(_DWORD *)(v29 + 44) = v83;
  *(_DWORD *)(v29 + 48) = v84;
  *(_DWORD *)(v29 + 52) = v85;
  *(_DWORD *)(v29 + 56) = v86;
  *(_DWORD *)(v29 + 60) = v87;
  ItemInHandRenderer::_renderMapHands(v6, v8, v7);
  v30 = BaseEntityRenderContext::getWorldMatrix(v8);
  MatrixStack::push((MatrixStack *)&v67, v30);
    VMOV            R4, S0
  _R6 = mce::Math::sin(_R4, v33);
  _R7 = mce::Math::sin(_R4, v35);
  v37 = MatrixStack::MatrixStackRef::operator->((int)&v67);
  __asm { VMOV            S0, R6 }
  _R0 = &MapConstants::MAP_SWING_ROT;
  __asm { VLDR            S2, [R0,#4] }
    VMUL.F32        S0, S2, S0
    VSTR            S0, [SP,#0xB8+var_3C]
  glm::rotate<float>((int)&v72, v37, (int)&v88, (int)&v69);
  *(_DWORD *)v37 = v72;
  *(_DWORD *)(v37 + 4) = v73;
  *(_DWORD *)(v37 + 8) = v74;
  *(_DWORD *)(v37 + 12) = v75;
  *(_DWORD *)(v37 + 16) = v76;
  *(_DWORD *)(v37 + 20) = v77;
  *(_DWORD *)(v37 + 24) = v78;
  *(_DWORD *)(v37 + 28) = v79;
  *(_DWORD *)(v37 + 32) = v80;
  *(_DWORD *)(v37 + 36) = v81;
  *(_DWORD *)(v37 + 40) = v82;
  *(_DWORD *)(v37 + 44) = v83;
  *(_DWORD *)(v37 + 48) = v84;
  *(_DWORD *)(v37 + 52) = v85;
  *(_DWORD *)(v37 + 56) = v86;
  *(_DWORD *)(v37 + 60) = v87;
  v39 = MatrixStack::MatrixStackRef::operator->((int)&v67);
  __asm { VMOV            S16, R7 }
  __asm { VLDR            S0, [R0,#8] }
  __asm { VMUL.F32        S0, S0, S16 }
  __asm { VSTR            S0, [SP,#0xB8+var_3C] }
  glm::rotate<float>((int)&v72, v39, (int)&v88, (int)&v69);
  *(_DWORD *)v39 = v72;
  *(_DWORD *)(v39 + 4) = v73;
  *(_DWORD *)(v39 + 8) = v74;
  *(_DWORD *)(v39 + 12) = v75;
  *(_DWORD *)(v39 + 16) = v76;
  *(_DWORD *)(v39 + 20) = v77;
  *(_DWORD *)(v39 + 24) = v78;
  *(_DWORD *)(v39 + 28) = v79;
  *(_DWORD *)(v39 + 32) = v80;
  *(_DWORD *)(v39 + 36) = v81;
  *(_DWORD *)(v39 + 40) = v82;
  *(_DWORD *)(v39 + 44) = v83;
  *(_DWORD *)(v39 + 48) = v84;
  *(_DWORD *)(v39 + 52) = v85;
  *(_DWORD *)(v39 + 56) = v86;
  *(_DWORD *)(v39 + 60) = v87;
  v41 = MatrixStack::MatrixStackRef::operator->((int)&v67);
  __asm { VLDR            S0, [R0] }
  glm::rotate<float>((int)&v72, v41, (int)&v88, (int)&v69);
  *(_DWORD *)v41 = v72;
  *(_DWORD *)(v41 + 4) = v73;
  *(_DWORD *)(v41 + 8) = v74;
  *(_DWORD *)(v41 + 12) = v75;
  *(_DWORD *)(v41 + 16) = v76;
  *(_DWORD *)(v41 + 20) = v77;
  *(_DWORD *)(v41 + 24) = v78;
  *(_DWORD *)(v41 + 28) = v79;
  *(_DWORD *)(v41 + 32) = v80;
  *(_DWORD *)(v41 + 36) = v81;
  *(_DWORD *)(v41 + 40) = v82;
  *(_DWORD *)(v41 + 44) = v83;
  *(_DWORD *)(v41 + 48) = v84;
  *(_DWORD *)(v41 + 52) = v85;
  *(_DWORD *)(v41 + 56) = v86;
  *(_DWORD *)(v41 + 60) = v87;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v67);
  _R1 = &MapConstants::MAP_PRE_ROT_SCALE;
    VLDR            S2, [R1]
    VMUL.F32        S0, S0, S2
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
  v45 = MatrixStack::MatrixStackRef::operator->((int)&v67);
  v88 = unk_2807E14;
  glm::rotate<float>((int)&v72, v45, (int)&v88, (int)&v69);
  *(_DWORD *)v45 = v72;
  *(_DWORD *)(v45 + 4) = v73;
  *(_DWORD *)(v45 + 8) = v74;
  *(_DWORD *)(v45 + 12) = v75;
  *(_DWORD *)(v45 + 16) = v76;
  *(_DWORD *)(v45 + 20) = v77;
  *(_DWORD *)(v45 + 24) = v78;
  *(_DWORD *)(v45 + 28) = v79;
  *(_DWORD *)(v45 + 32) = v80;
  *(_DWORD *)(v45 + 36) = v81;
  *(_DWORD *)(v45 + 40) = v82;
  *(_DWORD *)(v45 + 44) = v83;
  *(_DWORD *)(v45 + 48) = v84;
  *(_DWORD *)(v45 + 52) = v85;
  *(_DWORD *)(v45 + 56) = v86;
  *(_DWORD *)(v45 + 60) = v87;
  v46 = MatrixStack::MatrixStackRef::operator->((int)&v67);
  v88 = unk_2807E18;
  glm::rotate<float>((int)&v72, v46, (int)&v88, (int)&v69);
  *(_DWORD *)v46 = v72;
  *(_DWORD *)(v46 + 4) = v73;
  *(_DWORD *)(v46 + 8) = v74;
  *(_DWORD *)(v46 + 12) = v75;
  *(_DWORD *)(v46 + 16) = v76;
  *(_DWORD *)(v46 + 20) = v77;
  *(_DWORD *)(v46 + 24) = v78;
  *(_DWORD *)(v46 + 28) = v79;
  *(_DWORD *)(v46 + 32) = v80;
  *(_DWORD *)(v46 + 36) = v81;
  *(_DWORD *)(v46 + 40) = v82;
  *(_DWORD *)(v46 + 44) = v83;
  *(_DWORD *)(v46 + 48) = v84;
  *(_DWORD *)(v46 + 52) = v85;
  *(_DWORD *)(v46 + 56) = v86;
  *(_DWORD *)(v46 + 60) = v87;
  v47 = MatrixStack::MatrixStackRef::operator->((int)&v67);
  v88 = MapConstants::MAP_GLOBAL_ROT;
  glm::rotate<float>((int)&v72, v47, (int)&v88, (int)&v69);
  *(_DWORD *)v47 = v72;
  *(_DWORD *)(v47 + 4) = v73;
  *(_DWORD *)(v47 + 8) = v74;
  *(_DWORD *)(v47 + 12) = v75;
  *(_DWORD *)(v47 + 16) = v76;
  *(_DWORD *)(v47 + 20) = v77;
  *(_DWORD *)(v47 + 24) = v78;
  *(_DWORD *)(v47 + 28) = v79;
  *(_DWORD *)(v47 + 32) = v80;
  *(_DWORD *)(v47 + 36) = v81;
  *(_DWORD *)(v47 + 40) = v82;
  *(_DWORD *)(v47 + 44) = v83;
  *(_DWORD *)(v47 + 48) = v84;
  *(_DWORD *)(v47 + 52) = v85;
  *(_DWORD *)(v47 + 56) = v86;
  *(_DWORD *)(v47 + 60) = v87;
  _R1 = &MapConstants::MINI_MAP_GLOBAL_POS;
  if ( ClientInstance::getSplitScreenCount(*((ClientInstance **)v6 + 28)) == 2 )
    v50 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v6 + 28));
    if ( !Options::getSplitscreenDirection(v50) )
    {
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v67);
      __asm
      {
        VLDR            S0, =0.1
        VMOV.F32        S3, #0.25
        VLDR            S6, [R0,#0xC]
        VLDR            S4, [R0,#8]
        VLDR            S8, [R0,#0x10]
        VMUL.F32        S6, S6, S0
        VLDR            S5, =0.4
        VLDR            S10, [R0,#0x14]
        VLDR            S12, [R0,#0x18]
        VMUL.F32        S8, S8, S5
        VLDR            S14, [R0,#0x1C]
        VMUL.F32        S10, S10, S5
        VLDMIA          R0, {S1-S2}
        VMUL.F32        S12, S12, S5
        VMUL.F32        S14, S14, S5
        VMUL.F32        S2, S2, S0
        VLDR            S7, [R0,#0x20]
        VMUL.F32        S1, S1, S0
        VMUL.F32        S0, S4, S0
        VLDR            S4, [R0,#0x24]
        VMUL.F32        S5, S7, S3
        VLDR            S7, [R0,#0x28]
        VMUL.F32        S4, S4, S3
        VADD.F32        S6, S14, S6
        VADD.F32        S2, S10, S2
        VLDR            S10, [R0,#0x2C]
        VADD.F32        S8, S8, S1
        VADD.F32        S0, S12, S0
        VLDR            S12, [R0,#0x38]
        VMUL.F32        S1, S7, S3
        VMUL.F32        S10, S10, S3
        VADD.F32        S2, S2, S4
        VADD.F32        S8, S8, S5
        VADD.F32        S0, S0, S1
        VADD.F32        S4, S6, S10
        VLDR            S6, [R0,#0x30]
        VLDR            S10, [R0,#0x34]
        VADD.F32        S2, S2, S10
        VADD.F32        S6, S8, S6
        VLDR            S8, [R0,#0x3C]
        VADD.F32        S0, S0, S12
        VADD.F32        S4, S4, S8
        VSTR            S6, [R0,#0x30]
        VSTR            S2, [R0,#0x34]
        VSTR            S0, [R0,#0x38]
        VSTR            S4, [R0,#0x3C]
      }
        VLDR            S0, =0.8
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
        VLDR            S2, [R0,#0x20]
        VSTR            S2, [R0,#0x20]
        VLDR            S2, [R0,#0x24]
        VSTR            S2, [R0,#0x24]
        VLDR            S2, [R0,#0x28]
        VSTR            S2, [R0,#0x28]
        VLDR            S2, [R0,#0x2C]
        VMUL.F32        S0, S2, S0
        VSTR            S0, [R0,#0x2C]
    }
  _R1 = &MapConstants::MINI_MAP_FINAL_SCALE;
  v56 = Mob::getOffhandSlot(v7);
  v57 = (Level *)ClientInstance::getLevel(*((ClientInstance **)v6 + 28));
  v59 = Level::getMapSavedData(v57, (const ItemInstance *)v56);
  if ( v59 )
    v60 = MapItem::doesDisplayPlayerMarkers((MapItem *)v56, v58);
    v61 = BaseEntityRenderContext::getEntityRenderDispatcher(v8);
    v62 = EntityRenderDispatcher::getRenderer(v61, 59);
    if ( v62 )
      v63 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v7 + 52))(v7);
      BlockPos::BlockPos((int)&v66, v63);
      v64 = Entity::getRegion(v7);
      MapRenderer::render(v62, v8, (int)v7, (int)&v66, v64, (int)v59, 0, !v60);
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v67);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v68);
}


int __fastcall ItemInHandRenderer::_renderRightHand(ItemInHandRenderer *this, BaseEntityRenderContext *a2, PlayerRenderer *a3)
{
  BaseEntityRenderContext *v3; // r4@1
  ItemInHandRenderer *v4; // r9@1
  PlayerRenderer *v5; // r8@1
  int v6; // r0@1
  int v7; // r7@1
  int v8; // r7@1
  int v9; // r7@1
  Player *v16; // r0@1
  char v18; // [sp+4h] [bp-74h]@1
  int v19; // [sp+Ch] [bp-6Ch]@1
  signed int v20; // [sp+10h] [bp-68h]@1
  int v21; // [sp+14h] [bp-64h]@1
  int v22; // [sp+18h] [bp-60h]@1
  int v23; // [sp+1Ch] [bp-5Ch]@1
  int v24; // [sp+20h] [bp-58h]@1
  int v25; // [sp+24h] [bp-54h]@1
  int v26; // [sp+28h] [bp-50h]@1
  int v27; // [sp+2Ch] [bp-4Ch]@1
  int v28; // [sp+30h] [bp-48h]@1
  int v29; // [sp+34h] [bp-44h]@1
  int v30; // [sp+38h] [bp-40h]@1
  int v31; // [sp+3Ch] [bp-3Ch]@1
  int v32; // [sp+40h] [bp-38h]@1
  int v33; // [sp+44h] [bp-34h]@1
  int v34; // [sp+48h] [bp-30h]@1
  int v35; // [sp+4Ch] [bp-2Ch]@1
  int v36; // [sp+50h] [bp-28h]@1
  int v37; // [sp+54h] [bp-24h]@1
  int v38; // [sp+58h] [bp-20h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v18, v6);
  v7 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  v19 = 0;
  v20 = 1065353216;
  v21 = 0;
  v38 = dword_2807DD8;
  glm::rotate<float>((int)&v22, v7, (int)&v38, (int)&v19);
  *(_DWORD *)v7 = v22;
  *(_DWORD *)(v7 + 4) = v23;
  *(_DWORD *)(v7 + 8) = v24;
  *(_DWORD *)(v7 + 12) = v25;
  *(_DWORD *)(v7 + 16) = v26;
  *(_DWORD *)(v7 + 20) = v27;
  *(_DWORD *)(v7 + 24) = v28;
  *(_DWORD *)(v7 + 28) = v29;
  *(_DWORD *)(v7 + 32) = v30;
  *(_DWORD *)(v7 + 36) = v31;
  *(_DWORD *)(v7 + 40) = v32;
  *(_DWORD *)(v7 + 44) = v33;
  *(_DWORD *)(v7 + 48) = v34;
  *(_DWORD *)(v7 + 52) = v35;
  *(_DWORD *)(v7 + 56) = v36;
  *(_DWORD *)(v7 + 60) = v37;
  v8 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  v19 = 1065353216;
  v20 = 0;
  v38 = MapConstants::MAP_RIGHTHAND_ROT;
  glm::rotate<float>((int)&v22, v8, (int)&v38, (int)&v19);
  *(_DWORD *)v8 = v22;
  *(_DWORD *)(v8 + 4) = v23;
  *(_DWORD *)(v8 + 8) = v24;
  *(_DWORD *)(v8 + 12) = v25;
  *(_DWORD *)(v8 + 16) = v26;
  *(_DWORD *)(v8 + 20) = v27;
  *(_DWORD *)(v8 + 24) = v28;
  *(_DWORD *)(v8 + 28) = v29;
  *(_DWORD *)(v8 + 32) = v30;
  *(_DWORD *)(v8 + 36) = v31;
  *(_DWORD *)(v8 + 40) = v32;
  *(_DWORD *)(v8 + 44) = v33;
  *(_DWORD *)(v8 + 48) = v34;
  *(_DWORD *)(v8 + 52) = v35;
  *(_DWORD *)(v8 + 56) = v36;
  *(_DWORD *)(v8 + 60) = v37;
  v9 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  v38 = dword_2807DDC;
  v21 = 1065353216;
  glm::rotate<float>((int)&v22, v9, (int)&v38, (int)&v19);
  *(_DWORD *)v9 = v22;
  *(_DWORD *)(v9 + 4) = v23;
  *(_DWORD *)(v9 + 8) = v24;
  *(_DWORD *)(v9 + 12) = v25;
  *(_DWORD *)(v9 + 16) = v26;
  *(_DWORD *)(v9 + 20) = v27;
  *(_DWORD *)(v9 + 24) = v28;
  *(_DWORD *)(v9 + 28) = v29;
  *(_DWORD *)(v9 + 32) = v30;
  *(_DWORD *)(v9 + 36) = v31;
  *(_DWORD *)(v9 + 40) = v32;
  *(_DWORD *)(v9 + 44) = v33;
  *(_DWORD *)(v9 + 48) = v34;
  *(_DWORD *)(v9 + 52) = v35;
  *(_DWORD *)(v9 + 56) = v36;
  *(_DWORD *)(v9 + 60) = v37;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S14, [R0,#0x14]
  }
  _R1 = &MapConstants::MAP_RIGHTHAND_POS;
    VLDR            S1, [R0,#0x10]
    VLDR            S4, [R0,#8]
    VLDR            S8, [R1]
    VLDR            S10, [R1,#4]
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S0, S0, S8
    VLDR            S3, [R0,#0x18]
    VMUL.F32        S1, S1, S10
    VMUL.F32        S2, S2, S8
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S14, S14, S10
    VLDR            S12, [R1,#8]
    VMUL.F32        S3, S3, S10
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S10, S5, S10
    VMUL.F32        S5, S7, S12
    VLDR            S7, [R0,#0x28]
    VADD.F32        S0, S1, S0
    VADD.F32        S2, S14, S2
    VLDR            S14, [R0,#0x2C]
    VMUL.F32        S8, S8, S12
    VMUL.F32        S1, S7, S12
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VLDR            S10, [R0,#0x34]
    VMUL.F32        S12, S14, S12
    VADD.F32        S0, S0, S5
    VADD.F32        S2, S2, S8
    VLDR            S8, [R0,#0x30]
    VADD.F32        S4, S4, S1
    VADD.F32        S6, S6, S12
    VLDR            S12, [R0,#0x38]
    VADD.F32        S0, S0, S8
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S12
    VADD.F32        S6, S6, S8
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
  v16 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 28));
  PlayerRenderer::renderRightHand(v5, v3, v16);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v18);
}


PlayerRenderer *__fastcall ItemInHandRenderer::_renderMapHands(ItemInHandRenderer *this, BaseEntityRenderContext *a2, Player *a3)
{
  Player *v3; // r7@1
  ItemInHandRenderer *v4; // r5@1
  BaseEntityRenderContext *v5; // r4@1
  PlayerRenderer *result; // r0@1
  EntityRenderDispatcher *v7; // r6@2
  Entity *v8; // r0@2
  PlayerRenderer *v9; // r9@2
  char *v10; // r0@3
  signed int v11; // r8@3
  int v12; // r10@3
  ItemInstance *v13; // r0@3
  signed int v14; // r0@3

  v3 = a3;
  v4 = this;
  v5 = a2;
  result = (PlayerRenderer *)(*(int (__fastcall **)(Player *))(*(_DWORD *)a3 + 172))(a3);
  if ( !result )
  {
    v7 = (EntityRenderDispatcher *)BaseEntityRenderContext::getEntityRenderDispatcher(v5);
    v8 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 28));
    result = (PlayerRenderer *)EntityRenderDispatcher::getRenderer(v7, v8);
    v9 = result;
    if ( result )
    {
      v10 = Mob::getOffhandSlot(v3);
      v11 = ItemInstance::getId((ItemInstance *)v10);
      v12 = *(_WORD *)(Item::mFilledMap + 18);
      v13 = (ItemInstance *)Player::getSelectedItem(v3);
      v14 = ItemInstance::getId(v13);
      if ( v11 != v12 || v14 == *(_WORD *)(Item::mFilledMap + 18) )
      {
        ItemInHandRenderer::_renderRightHand(v4, v5, v9);
        result = (PlayerRenderer *)j_j_j__ZN18ItemInHandRenderer15_renderLeftHandER23BaseEntityRenderContextR14PlayerRenderer(
                                     v4,
                                     v5,
                                     v9);
      }
      else
        result = (PlayerRenderer *)j_j_j__ZN18ItemInHandRenderer17_renderOffHandMapER23BaseEntityRenderContextR14PlayerRenderer(
    }
  }
  return result;
}


int __fastcall ItemInHandRenderer::onAppSuspended(ItemInHandRenderer *this)
{
  ItemInHandRenderer *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 83);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v2 + 124));
      mce::Mesh::~Mesh((mce::Mesh *)(v2 + 20));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 324), 4 * (*(_QWORD *)((char *)v1 + 324) >> 32));
  result = 0;
  *((_DWORD *)v1 + 83) = 0;
  *((_DWORD *)v1 + 84) = 0;
  return result;
}


char *__fastcall ItemInHandRenderer::_tessellateTextureItem(ItemInHandRenderer *this, BaseEntityRenderContext *a2, TextureTessellator *a3, Mob *a4, const ItemInstance *a5, int a6, unsigned __int16 *a7, unsigned __int16 *a8)
{
  BaseEntityRenderContext *v8; // r4@1
  int v9; // r0@2
  mce::TextureGroup *v11; // r11@4
  Tessellator *v12; // r6@4
  ImageUtils *v13; // r4@5
  bool v14; // r2@5
  unsigned int v15; // r0@5
  const mce::ImageBuffer *v16; // r0@7
  char *result; // r0@7
  unsigned int v18; // r7@8
  int v25; // r0@8
  ItemRenderer *v38; // r0@8
  int v39; // r0@8
  int v40; // r0@8
  bool v41; // r2@8
  mce::TextureContainer *v42; // r4@9
  const mce::ImageBuffer *v43; // r0@9
  int v44; // r0@10
  ImageUtils *v45; // r5@11
  mce::ImageBuffer *v46; // r4@11
  bool v47; // r2@11
  int v48; // r5@11
  char *v49; // r0@11
  char *v50; // r0@12
  __int64 v51; // r4@13
  unsigned int *v52; // r2@22
  signed int v53; // r1@24
  Tessellator *v54; // [sp+1Ch] [bp-E4h]@8
  TextureTessellator *v55; // [sp+20h] [bp-E0h]@1
  char v56; // [sp+24h] [bp-DCh]@8
  char v57; // [sp+3Ch] [bp-C4h]@8
  int v58; // [sp+7Ch] [bp-84h]@8
  int v59; // [sp+80h] [bp-80h]@8
  int v60; // [sp+84h] [bp-7Ch]@8
  char *v61; // [sp+88h] [bp-78h]@8
  int v62; // [sp+8Ch] [bp-74h]@8
  int v63; // [sp+90h] [bp-70h]@8
  int v64; // [sp+94h] [bp-6Ch]@8
  int v65; // [sp+98h] [bp-68h]@8
  char v66; // [sp+9Ch] [bp-64h]@8
  signed int v67; // [sp+A0h] [bp-60h]@8
  signed int v68; // [sp+A4h] [bp-5Ch]@8
  int v69; // [sp+A8h] [bp-58h]@8
  int v70; // [sp+ACh] [bp-54h]@8
  char v71; // [sp+B0h] [bp-50h]@8

  v55 = a3;
  v8 = a2;
  if ( a4 )
    v9 = (*(int (__fastcall **)(Mob *, const ItemInstance *, _DWORD))(*(_DWORD *)a4 + 816))(a4, a5, 0);
  else
    v9 = ItemInstance::getIcon(a5, a6, 0);
  _R5 = v9;
  v11 = (mce::TextureGroup *)BaseEntityRenderContext::getTextures(v8);
  v12 = (Tessellator *)BaseEntityRenderContext::getTessellator(v8);
  if ( mce::TextureGroup::isLoaded(v11, (const ResourceLocation *)(_R5 + 24), 0) == 1 )
  {
    v13 = (ImageUtils *)(mce::TextureGroup::getTexturePair(v11, (const ResourceLocation *)(_R5 + 24)) + 64);
    ImageUtils::uncompress(v13, 0, v14);
    *a8 = *(_DWORD *)mce::TextureContainer::getTextureDescription(v13);
    v15 = *((_WORD *)mce::TextureContainer::getTextureDescription(v13) + 2);
    *a7 = v15;
    if ( v15 > *a8 )
      LOWORD(v15) = *a8;
    v16 = (const mce::ImageBuffer *)mce::TextureContainer::getImage(v13, 0);
    result = TextureTessellator::tessellate(v55, v12, v16, 0, 0, *a8, *a7, 1, 1, 1);
  }
    v18 = *(_DWORD *)(_R5 + 20);
    v54 = v12;
    _R0 = (unsigned __int16)v18;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.U32    S16, S0
      VLDR            S0, [R5,#4]
      VLDR            S18, [R5,#8]
      VLDR            S20, [R5,#0xC]
      VLDR            S22, [R5,#0x10]
      VMUL.F32        S0, S16, S0
      VMOV            R0, S0
    }
    v25 = roundf(_R0);
    __asm { VMUL.F32        S0, S20, S16 }
    _R5 = v25;
    __asm { VMOV            R0, S0 }
    _R0 = roundf(_R0);
    _R1 = v18 >> 16;
      VMOV            S16, R0
      VMOV            S0, R1
      VCVT.F32.U32    S0, S0
      VMUL.F32        S2, S0, S18
      VMUL.F32        S0, S22, S0
      VMOV            R1, S2
      VMOV            R7, S0
    _R0 = roundf(_R1);
      VMOV            S18, R0
      VMOV            S20, R5
    _R0 = roundf(_R7);
      VCVTR.S32.F32   S2, S20
      VCVTR.S32.F32   S4, S18
      VCVTR.S32.F32   S6, S16
      VCVTR.S32.F32   S0, S0
      VMOV            R10, S2
      VMOV            R5, S4
      VMOV            R6, S6
    *a8 = _R6 - _R10;
    *a7 = _R7 - _R5;
    mce::Texture::Texture((mce::Texture *)&v57);
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = (char *)&unk_28898CC;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 1;
    v66 = 0;
    v67 = 1;
    v68 = 1;
    v69 = 0;
    v70 = 8;
    v71 = 0;
    v38 = (ItemRenderer *)BaseEntityRenderContext::getItemRenderer(v8);
    v39 = ItemRenderer::getGraphics(v38, a5);
    mce::TexturePtr::clone((mce::TexturePtr *)&v56, v39);
    v40 = mce::TextureGroup::getTexturePair(v11, (const mce::TexturePtr *)&v56);
    if ( v40 )
      v42 = (mce::TextureContainer *)(v40 + 64);
      ImageUtils::uncompress((ImageUtils *)(v40 + 64), 0, v41);
      v43 = (const mce::ImageBuffer *)mce::TextureContainer::getImage(v42, 0);
      TextureTessellator::tessellate(
        v55,
        v54,
        v43,
        _R10,
        (unsigned __int16)_R5,
        (unsigned __int16)_R6,
        (unsigned __int16)_R7,
        1,
        1);
    else
      v44 = mce::TextureGroup::getMissingTexture(v11);
      if ( v44 )
      {
        v45 = (ImageUtils *)(v44 + 64);
        v46 = (mce::ImageBuffer *)mce::TextureContainer::getImage((mce::TextureContainer *)(v44 + 64), 0);
        ImageUtils::uncompress(v45, 0, v47);
        v48 = *(_DWORD *)mce::ImageBuffer::getImageDescription(v46);
        v49 = mce::ImageBuffer::getImageDescription(v46);
        TextureTessellator::tessellate(v55, v54, v46, 0, 0, v48, *((_DWORD *)v49 + 1), 1, 1, 1);
      }
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v56);
    v50 = v61 - 12;
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v61 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
      else
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v50);
    v51 = *(_QWORD *)&v58;
    if ( v58 != v59 )
      do
        if ( *(_DWORD *)v51 )
          operator delete(*(void **)v51);
        LODWORD(v51) = v51 + 40;
      while ( HIDWORD(v51) != (_DWORD)v51 );
      LODWORD(v51) = v58;
    if ( (_DWORD)v51 )
      operator delete((void *)v51);
    result = (char *)mce::Texture::~Texture((mce::Texture *)&v57);
  return result;
}


int __fastcall ItemInHandRenderer::_fetchMaterialFor(int a1, int a2)
{
  unsigned int v2; // r2@1
  int v3; // r1@1
  int v4; // r3@1
  int v5; // r1@5

  v2 = *(_WORD *)(a2 + 134);
  v3 = *(_BYTE *)(a2 + 133);
  v4 = (unsigned __int8)v2;
  if ( v2 > 0xFF )
    v4 = (unsigned __int8)v2 | 2;
  if ( v3 )
    v4 |= 4u;
  v5 = *(_DWORD *)(a1 + 4 * v4 + 264);
  if ( !v5 )
    v5 = a1 + 132;
  return v5;
}


int __fastcall ItemInHandRenderer::onItemUsed(int result)
{
  *(_DWORD *)(result + 120) = 0;
  return result;
}


_DWORD *__fastcall ItemInHandRenderer::getRenderCallAtFrame(ItemInHandRenderer *this, BaseEntityRenderContext *a2, const ItemInstance *a3, int a4)
{
  ItemInstance *v4; // r8@1
  unsigned __int64 v5; // r10@1
  BaseEntityRenderContext *v6; // r9@1
  int v7; // r6@3
  unsigned int v8; // r6@6
  __int64 v9; // r4@6
  unsigned int v10; // r7@6
  int v11; // r0@6
  int v12; // r1@7
  int v13; // r11@7
  int v14; // r4@7
  int v15; // r10@7
  _DWORD *result; // r0@11
  _BYTE v17[12]; // [sp+4h] [bp-34h]@7

  v4 = a3;
  v5 = __PAIR__((unsigned int)this, a4);
  v6 = a2;
  if ( *((_BYTE *)a3 + 15) )
  {
    if ( ItemInstance::isStackedByData(a3) == 1 )
      v7 = ItemInstance::getAuxValue(v4) << 16;
    else
      v7 = 0;
  }
  else
    v7 = 0;
  v8 = v7 | ItemInstance::getId(v4);
  v9 = *(_QWORD *)(HIDWORD(v5) + 324);
  v10 = v8 % (unsigned int)(*(_QWORD *)(HIDWORD(v5) + 324) >> 32);
  v11 = *(_DWORD *)(v9 + 4 * v10);
  if ( v11 )
    *(_QWORD *)&v17[4] = __PAIR__((unsigned int)v6, HIDWORD(v5));
    v12 = v5;
    HIDWORD(v5) = *(_DWORD *)v11;
    *(_DWORD *)v17 = v5;
    v15 = *(_QWORD *)(*(_DWORD *)v11 + 8) >> 32;
    v14 = *(_QWORD *)(*(_DWORD *)v11 + 8);
    while ( v8 ^ v14 | (v12 << 8) ^ v15 )
    {
      if ( *(_DWORD *)v13 )
      {
        v15 = *(_QWORD *)(*(_DWORD *)v13 + 8) >> 32;
        LODWORD(v9) = *(_QWORD *)(*(_DWORD *)v13 + 8);
        v11 = v13;
        v13 = *(_DWORD *)v13;
        if ( (unsigned int)v9 % HIDWORD(v9) == v10 )
          continue;
      }
      v6 = *(BaseEntityRenderContext **)&v17[8];
      result = 0;
      v5 = *(_QWORD *)v17;
      goto LABEL_17;
    }
    v6 = *(BaseEntityRenderContext **)&v17[8];
    HIDWORD(v5) = *(_DWORD *)&v17[4];
    if ( v11 )
      result = *(_DWORD **)v11;
    LODWORD(v5) = *(_DWORD *)v17;
    result = 0;
LABEL_17:
  if ( result )
    result += 4;
  if ( !result )
    result = ItemInHandRenderer::_rebuildItem((ItemInHandRenderer *)HIDWORD(v5), v6, 0, v4, v5);
  return result;
}


signed int __fastcall ItemInHandRenderer::renderOffhandItem(ItemInHandRenderer *this, BaseEntityRenderContext *a2, Player *a3)
{
  ItemInHandRenderer *v4; // r11@1
  Player *v5; // r6@1
  int v6; // r8@1
  char *v7; // r0@1
  char *v8; // r7@1
  signed int result; // r0@1
  float v11; // r3@9
  float v12; // r3@10
  int v13; // r0@13
  int v14; // r5@13
  int v20; // r5@13
  int v21; // r5@13
  int v27; // r0@13
  int v28; // ST08_4@13
  int v29; // r0@13
  int v30; // [sp+0h] [bp-A0h]@0
  float v31; // [sp+4h] [bp-9Ch]@0
  int *v32; // [sp+10h] [bp-90h]@11
  char v33; // [sp+14h] [bp-8Ch]@13
  char v34; // [sp+24h] [bp-7Ch]@13
  int v35; // [sp+2Ch] [bp-74h]@13
  signed int v36; // [sp+30h] [bp-70h]@13
  int v37; // [sp+34h] [bp-6Ch]@13
  int v38; // [sp+38h] [bp-68h]@13
  int v39; // [sp+3Ch] [bp-64h]@13
  int v40; // [sp+40h] [bp-60h]@13
  int v41; // [sp+44h] [bp-5Ch]@13
  int v42; // [sp+48h] [bp-58h]@13
  int v43; // [sp+4Ch] [bp-54h]@13
  int v44; // [sp+50h] [bp-50h]@13
  int v45; // [sp+54h] [bp-4Ch]@13
  int v46; // [sp+58h] [bp-48h]@13
  int v47; // [sp+5Ch] [bp-44h]@13
  int v48; // [sp+60h] [bp-40h]@13
  int v49; // [sp+64h] [bp-3Ch]@13
  int v50; // [sp+68h] [bp-38h]@13
  int v51; // [sp+6Ch] [bp-34h]@13
  int v52; // [sp+70h] [bp-30h]@13
  int v53; // [sp+74h] [bp-2Ch]@13
  int v54; // [sp+78h] [bp-28h]@13

  _R4 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = Mob::getOffhandSlot(v5);
  v8 = v7;
  result = (unsigned __int8)v7[15];
  _ZF = result == 0;
  if ( result )
  {
    result = *(_DWORD *)v8;
    _ZF = *(_DWORD *)v8 == 0;
  }
  if ( !_ZF )
    result = ItemInstance::isNull((ItemInstance *)v8);
    if ( !result )
    {
      result = (unsigned __int8)v8[14];
      if ( v8[14] )
      {
        result = ItemInstance::getId((ItemInHandRenderer *)((char *)v4 + 40));
        if ( result != *(_WORD *)(Item::mFilledMap + 18) )
        {
          if ( ItemInstance::getId((ItemInHandRenderer *)((char *)v4 + 40)) != *(_WORD *)(Item::mBow + 18)
            || (result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v5 + 916))(v5), result <= 0) )
          {
            if ( ItemInstance::getId((ItemInstance *)v8) == *(_WORD *)(Item::mFilledMap + 18) )
            {
              mce::Math::lerpRotate(*((mce::Math **)v5 + 32), *((float *)v5 + 30), *((float *)_R4 + 1), v11);
              (*(void (__fastcall **)(Player *, _DWORD))(*(_DWORD *)v5 + 900))(v5, *((_DWORD *)_R4 + 1));
              result = ItemInHandRenderer::_renderMapInOffHand(v4, _R4, v5, v12, *(float *)&v30, v31);
            }
            else
              v32 = ItemInHandRenderer::_getRenderCall(v4, v5, (const ItemInstance *)v8, 0);
              if ( !v32 )
                v32 = ItemInHandRenderer::_rebuildItem(v4, _R4, v5, (const ItemInstance *)v8, 0);
              v13 = BaseEntityRenderContext::getWorldMatrix(_R4);
              MatrixStack::push((MatrixStack *)&v34, v13);
              v14 = MatrixStack::MatrixStackRef::operator->((int)&v34);
              v35 = 1065353216;
              v36 = 0;
              v37 = 0;
              v54 = 1119092736;
              glm::rotate<float>((int)&v38, v14, (int)&v54, (int)&v35);
              *(_DWORD *)v14 = v38;
              *(_DWORD *)(v14 + 4) = v39;
              *(_DWORD *)(v14 + 8) = v40;
              *(_DWORD *)(v14 + 12) = v41;
              *(_DWORD *)(v14 + 16) = v42;
              *(_DWORD *)(v14 + 20) = v43;
              *(_DWORD *)(v14 + 24) = v44;
              *(_DWORD *)(v14 + 28) = v45;
              *(_DWORD *)(v14 + 32) = v46;
              *(_DWORD *)(v14 + 36) = v47;
              *(_DWORD *)(v14 + 40) = v48;
              *(_DWORD *)(v14 + 44) = v49;
              *(_DWORD *)(v14 + 48) = v50;
              *(_DWORD *)(v14 + 52) = v51;
              *(_DWORD *)(v14 + 56) = v52;
              *(_DWORD *)(v14 + 60) = v53;
              _R0 = MatrixStack::MatrixStackRef::operator->((int)&v34);
              __asm
              {
                VMOV.F32        S0, #1.25
                VLDR            S6, [R0,#8]
                VMOV.F32        S2, #-1.125
                VLDR            S10, [R0,#0x10]
                VLDR            S12, [R0,#0x14]
                VLDR            S14, [R0,#0x18]
                VLDR            S8, [R0,#0xC]
                VLDR            S1, [R0,#0x1C]
                VLDMIA          R0, {S3-S4}
                VMUL.F32        S6, S6, S0
                VMUL.F32        S14, S14, S2
                VMUL.F32        S4, S4, S0
                VMUL.F32        S12, S12, S2
                VMUL.F32        S3, S3, S0
                VMUL.F32        S10, S10, S2
                VMUL.F32        S0, S8, S0
                VMUL.F32        S2, S1, S2
                VSUB.F32        S6, S14, S6
                VLDR            S14, [R0,#0x3C]
                VSUB.F32        S4, S12, S4
                VLDR            S12, [R0,#0x38]
                VSUB.F32        S8, S10, S3
                VLDR            S10, [R0,#0x34]
                VSUB.F32        S0, S2, S0
                VLDR            S2, [R0,#0x30]
                VADD.F32        S6, S6, S12
                VADD.F32        S4, S4, S10
                VADD.F32        S2, S8, S2
                VADD.F32        S0, S0, S14
                VSTR            S2, [R0,#0x30]
                VSTR            S4, [R0,#0x34]
                VSTR            S6, [R0,#0x38]
                VSTR            S0, [R0,#0x3C]
              }
              v20 = MatrixStack::MatrixStackRef::operator->((int)&v34);
              v35 = 0;
              v54 = -1029701632;
              v37 = 1065353216;
              glm::rotate<float>((int)&v38, v20, (int)&v54, (int)&v35);
              *(_DWORD *)v20 = v38;
              *(_DWORD *)(v20 + 4) = v39;
              *(_DWORD *)(v20 + 8) = v40;
              *(_DWORD *)(v20 + 12) = v41;
              *(_DWORD *)(v20 + 16) = v42;
              *(_DWORD *)(v20 + 20) = v43;
              *(_DWORD *)(v20 + 24) = v44;
              *(_DWORD *)(v20 + 28) = v45;
              *(_DWORD *)(v20 + 32) = v46;
              *(_DWORD *)(v20 + 36) = v47;
              *(_DWORD *)(v20 + 40) = v48;
              *(_DWORD *)(v20 + 44) = v49;
              *(_DWORD *)(v20 + 48) = v50;
              *(_DWORD *)(v20 + 52) = v51;
              *(_DWORD *)(v20 + 56) = v52;
              *(_DWORD *)(v20 + 60) = v53;
              v21 = MatrixStack::MatrixStackRef::operator->((int)&v34);
              v36 = 1065353216;
              v54 = -1046478848;
              glm::rotate<float>((int)&v38, v21, (int)&v54, (int)&v35);
              *(_DWORD *)v21 = v38;
              *(_DWORD *)(v21 + 4) = v39;
              *(_DWORD *)(v21 + 8) = v40;
              *(_DWORD *)(v21 + 12) = v41;
              *(_DWORD *)(v21 + 16) = v42;
              *(_DWORD *)(v21 + 20) = v43;
              *(_DWORD *)(v21 + 24) = v44;
              *(_DWORD *)(v21 + 28) = v45;
              *(_DWORD *)(v21 + 32) = v46;
              *(_DWORD *)(v21 + 36) = v47;
              *(_DWORD *)(v21 + 40) = v48;
              *(_DWORD *)(v21 + 44) = v49;
              *(_DWORD *)(v21 + 48) = v50;
              *(_DWORD *)(v21 + 52) = v51;
              *(_DWORD *)(v21 + 56) = v52;
              *(_DWORD *)(v21 + 60) = v53;
                VMOV.F32        S0, #-0.3125
                VMOV.F32        S2, #0.25
                VMUL.F32        S8, S8, S0
                VLDR            S5, =-0.03125
                VLDR            S7, [R0,#0x20]
                VMUL.F32        S0, S6, S0
                VLDR            S6, [R0,#0x24]
                VMUL.F32        S1, S7, S5
                VLDR            S7, [R0,#0x28]
                VADD.F32        S10, S10, S3
                VMUL.F32        S6, S6, S5
                VADD.F32        S4, S12, S4
                VLDR            S12, [R0,#0x2C]
                VMUL.F32        S3, S7, S5
                VADD.F32        S0, S14, S0
                VADD.F32        S2, S2, S8
                VMUL.F32        S12, S12, S5
                VADD.F32        S8, S10, S1
                VADD.F32        S4, S4, S6
                VLDR            S6, [R0,#0x30]
                VADD.F32        S0, S0, S3
                VADD.F32        S2, S2, S12
                VADD.F32        S6, S8, S6
                VLDR            S8, [R0,#0x3C]
                VADD.F32        S0, S0, S12
                VSTR            S6, [R0,#0x30]
                VSTR            S0, [R0,#0x38]
                VSTR            S2, [R0,#0x3C]
                VLDR            S0, =0.0625
                VLDR            S2, [R0]
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
              _R1 = v32;
                VLDR            S0, [R1,#0x68]
              ItemInstance::getColor((ItemInstance *)&v33, (int *)v8);
              v27 = MatrixStack::MatrixStackRef::operator*((int)&v34);
              *((_DWORD *)v4 + 88) = *(_DWORD *)v27;
              *((_DWORD *)v4 + 89) = *(_DWORD *)(v27 + 4);
              *((_DWORD *)v4 + 90) = *(_DWORD *)(v27 + 8);
              *((_DWORD *)v4 + 91) = *(_DWORD *)(v27 + 12);
              *((_DWORD *)v4 + 92) = *(_DWORD *)(v27 + 16);
              *((_DWORD *)v4 + 93) = *(_DWORD *)(v27 + 20);
              *((_DWORD *)v4 + 94) = *(_DWORD *)(v27 + 24);
              *((_DWORD *)v4 + 95) = *(_DWORD *)(v27 + 28);
              *((_DWORD *)v4 + 96) = *(_DWORD *)(v27 + 32);
              *((_DWORD *)v4 + 97) = *(_DWORD *)(v27 + 36);
              *((_DWORD *)v4 + 98) = *(_DWORD *)(v27 + 40);
              *((_DWORD *)v4 + 99) = *(_DWORD *)(v27 + 44);
              *((_DWORD *)v4 + 100) = *(_DWORD *)(v27 + 48);
              *((_DWORD *)v4 + 101) = *(_DWORD *)(v27 + 52);
              *((_DWORD *)v4 + 102) = *(_DWORD *)(v27 + 56);
              *((_DWORD *)v4 + 103) = *(_DWORD *)(v27 + 60);
              __asm { VLDR            S0, [R4,#4] }
              v28 = *((_BYTE *)v32 + 136);
              __asm { VSTR            S0, [SP,#0xA0+var_9C] }
              EntityShaderManager::_setupShaderParameters(
                *(float *)&v4,
                v6,
                (int)v5,
                COERCE_FLOAT((Player *)((char *)v5 + 232)),
                COERCE_FLOAT(&v33));
              v29 = ItemInstance::isGlint((ItemInstance *)v8);
              ItemInHandRenderer::renderObject((int)v4, _R4, (int)v32, v29);
              result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v34);
          }
        }
      }
    }
  return result;
}


int __fastcall ItemInHandRenderer::_getFrameID(ItemInHandRenderer *this, Mob *a2, const ItemInstance *a3, int a4)
{
  ItemInstance *v4; // r5@1
  Mob *v5; // r4@1
  int v6; // r7@3
  int v7; // r7@6
  char v8; // r6@7
  char v9; // r0@7

  v4 = a3;
  v5 = a2;
  if ( *((_BYTE *)a3 + 15) )
  {
    if ( ItemInstance::isStackedByData(a3) == 1 )
      v6 = ItemInstance::getAuxValue(v4) << 16;
    else
      v6 = 0;
  }
  else
    v6 = 0;
  v7 = v6 | ItemInstance::getId(v4);
  if ( v5 )
    v8 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v5 + 488))(v5);
    v9 = (*(int (**)(void))(**(_DWORD **)v4 + 240))();
  return v7;
}


int __fastcall ItemInHandRenderer::_adjustHandPositionForVR(ItemInHandRenderer *this, MatrixStack::MatrixStackRef *a2, int a3, float a4)
{
  ItemInHandRenderer *v4; // r4@1
  int v5; // r0@1
  int v6; // r0@1
  unsigned __int64 v12; // kr78_8@1
  int v13; // ST28_4@1
  int v14; // ST2C_4@1
  unsigned __int64 v15; // kr80_8@1
  int v16; // ST20_4@1
  int v17; // ST24_4@1
  unsigned __int64 v18; // kr88_8@1
  int v19; // ST18_4@1
  int v20; // ST1C_4@1
  unsigned __int64 v21; // kr90_8@1
  int v22; // ST10_4@1
  int v23; // ST14_4@1
  float v24; // r7@1
  unsigned __int64 v25; // kr98_8@1
  float v26; // ST0C_4@1
  __int64 v27; // r8@1
  __int64 v28; // r10@1
  __int64 v29; // r5@1 OVERLAPPED
  unsigned __int64 v30; // krA0_8@1
  int v31; // ST28_4@1
  int v32; // ST2C_4@1
  unsigned __int64 v33; // krA8_8@1
  int v34; // ST20_4@1
  int v35; // ST24_4@1
  unsigned __int64 v36; // krB0_8@1
  int v37; // ST18_4@1
  int v38; // ST1C_4@1
  unsigned __int64 v39; // krB8_8@1
  float v40; // ST10_4@1
  int v41; // ST14_4@1
  __int64 v42; // kr50_8@1
  unsigned int v43; // r4@1
  const ItemInstance *v44; // r5@1
  Mob *v45; // r4@1
  signed int v46; // r6@4
  int *v47; // r0@4
  int v52; // r5@9
  int v53; // r6@9
  int *v55; // r0@18
  float v56; // r4@20
  int v59; // r5@22
  __int64 v60; // kr70_8@22
  int v61; // ST30_4@22
  int v62; // ST2C_4@22
  int v63; // ST28_4@22
  int v64; // r10@22
  int v65; // r4@22
  int v66; // r7@22
  int v67; // r9@22
  int v68; // r11@22
  int v69; // r0@22
  int v70; // r1@22
  int v71; // r2@22
  int v72; // r8@22
  int v73; // r3@22
  int v74; // r0@22
  int v77; // r4@23
  int v78; // r4@23
  float v80; // [sp+4h] [bp-3ECh]@1
  int v81; // [sp+8h] [bp-3E8h]@1
  signed int v82; // [sp+24h] [bp-3CCh]@13
  ItemInHandRenderer *v83; // [sp+30h] [bp-3C0h]@1
  MatrixStack::MatrixStackRef *v84; // [sp+34h] [bp-3BCh]@1
  __int64 v85; // [sp+38h] [bp-3B8h]@22
  int v86; // [sp+40h] [bp-3B0h]@22
  int v87; // [sp+44h] [bp-3ACh]@22
  int v88; // [sp+48h] [bp-3A8h]@22
  int v89; // [sp+4Ch] [bp-3A4h]@22
  int v90; // [sp+50h] [bp-3A0h]@22
  int v91; // [sp+54h] [bp-39Ch]@22
  int v92; // [sp+58h] [bp-398h]@22
  int v93; // [sp+5Ch] [bp-394h]@22
  int v94; // [sp+60h] [bp-390h]@22
  int v95; // [sp+64h] [bp-38Ch]@22
  int v96; // [sp+68h] [bp-388h]@22
  int v97; // [sp+6Ch] [bp-384h]@22
  int v98; // [sp+70h] [bp-380h]@22
  int v99; // [sp+74h] [bp-37Ch]@22
  __int64 v100; // [sp+78h] [bp-378h]@22
  int v101; // [sp+80h] [bp-370h]@22
  int v102; // [sp+84h] [bp-36Ch]@22
  int v103; // [sp+88h] [bp-368h]@22
  int v104; // [sp+8Ch] [bp-364h]@22
  int v105; // [sp+90h] [bp-360h]@22
  int v106; // [sp+94h] [bp-35Ch]@22
  int v107; // [sp+98h] [bp-358h]@22
  int v108; // [sp+9Ch] [bp-354h]@22
  int v109; // [sp+A0h] [bp-350h]@22
  int v110; // [sp+A4h] [bp-34Ch]@22
  int v111; // [sp+A8h] [bp-348h]@22
  int v112; // [sp+ACh] [bp-344h]@22
  int v113; // [sp+B0h] [bp-340h]@22
  int v114; // [sp+B4h] [bp-33Ch]@22
  __int64 v115; // [sp+B8h] [bp-338h]@22
  int v116; // [sp+C0h] [bp-330h]@22
  int v117; // [sp+C4h] [bp-32Ch]@22
  int v118; // [sp+C8h] [bp-328h]@22
  int v119; // [sp+CCh] [bp-324h]@22
  int v120; // [sp+D0h] [bp-320h]@22
  int v121; // [sp+D4h] [bp-31Ch]@22
  int v122; // [sp+D8h] [bp-318h]@22
  int v123; // [sp+DCh] [bp-314h]@22
  int v124; // [sp+E0h] [bp-310h]@22
  int v125; // [sp+E4h] [bp-30Ch]@22
  int v126; // [sp+E8h] [bp-308h]@22
  int v127; // [sp+ECh] [bp-304h]@22
  int v128; // [sp+F0h] [bp-300h]@22
  int v129; // [sp+F4h] [bp-2FCh]@22
  __int64 v130; // [sp+F8h] [bp-2F8h]@22
  int v131; // [sp+100h] [bp-2F0h]@22
  int v132; // [sp+104h] [bp-2ECh]@22
  int v133; // [sp+108h] [bp-2E8h]@22
  int v134; // [sp+10Ch] [bp-2E4h]@22
  int v135; // [sp+110h] [bp-2E0h]@22
  int v136; // [sp+114h] [bp-2DCh]@22
  int v137; // [sp+118h] [bp-2D8h]@22
  int v138; // [sp+11Ch] [bp-2D4h]@22
  int v139; // [sp+120h] [bp-2D0h]@22
  int v140; // [sp+124h] [bp-2CCh]@22
  int v141; // [sp+128h] [bp-2C8h]@22
  int v142; // [sp+12Ch] [bp-2C4h]@22
  int v143; // [sp+130h] [bp-2C0h]@22
  int v144; // [sp+134h] [bp-2BCh]@22
  __int64 v145; // [sp+138h] [bp-2B8h]@22
  int v146; // [sp+140h] [bp-2B0h]@22
  int v147; // [sp+144h] [bp-2ACh]@22
  int v148; // [sp+148h] [bp-2A8h]@22
  int v149; // [sp+14Ch] [bp-2A4h]@22
  int v150; // [sp+150h] [bp-2A0h]@22
  int v151; // [sp+154h] [bp-29Ch]@22
  int v152; // [sp+158h] [bp-298h]@22
  int v153; // [sp+15Ch] [bp-294h]@22
  int v154; // [sp+160h] [bp-290h]@22
  int v155; // [sp+164h] [bp-28Ch]@22
  int v156; // [sp+168h] [bp-288h]@22
  int v157; // [sp+16Ch] [bp-284h]@22
  int v158; // [sp+170h] [bp-280h]@22
  int v159; // [sp+174h] [bp-27Ch]@22
  int v160; // [sp+178h] [bp-278h]@1
  int v161; // [sp+17Ch] [bp-274h]@1
  int v162; // [sp+180h] [bp-270h]@1
  int v163; // [sp+184h] [bp-26Ch]@1
  int v164; // [sp+188h] [bp-268h]@1
  int v165; // [sp+18Ch] [bp-264h]@1
  int v166; // [sp+190h] [bp-260h]@1
  float v167; // [sp+194h] [bp-25Ch]@1
  __int64 v168; // [sp+198h] [bp-258h]@1
  float v169; // [sp+1A0h] [bp-250h]@1
  __int64 v170; // [sp+1A4h] [bp-24Ch]@1
  int v171; // [sp+1ACh] [bp-244h]@1
  unsigned __int64 v172; // [sp+1B0h] [bp-240h]@1
  __int64 v173; // [sp+1B8h] [bp-238h]@1
  __int64 v174; // [sp+1C0h] [bp-230h]@1
  __int64 v175; // [sp+1C8h] [bp-228h]@1
  __int64 v176; // [sp+1D0h] [bp-220h]@1
  __int64 v177; // [sp+1D8h] [bp-218h]@1
  __int64 v178; // [sp+1E0h] [bp-210h]@1
  __int64 v179; // [sp+1E8h] [bp-208h]@1
  __int64 v180; // [sp+1F0h] [bp-200h]@1
  int v181; // [sp+1F8h] [bp-1F8h]@1
  int v182; // [sp+1FCh] [bp-1F4h]@1
  int v183; // [sp+200h] [bp-1F0h]@1
  int v184; // [sp+204h] [bp-1ECh]@1
  int v185; // [sp+208h] [bp-1E8h]@1
  int v186; // [sp+20Ch] [bp-1E4h]@1
  int v187; // [sp+210h] [bp-1E0h]@1
  int v188; // [sp+214h] [bp-1DCh]@1
  float v189; // [sp+218h] [bp-1D8h]@1
  float v190; // [sp+21Ch] [bp-1D4h]@1
  __int64 v191; // [sp+220h] [bp-1D0h]@1
  __int64 v192; // [sp+228h] [bp-1C8h]@1
  __int64 v193; // [sp+230h] [bp-1C0h]@1
  __int64 v194; // [sp+238h] [bp-1B8h]@1
  __int64 v195; // [sp+240h] [bp-1B0h]@1
  __int64 v196; // [sp+248h] [bp-1A8h]@1
  __int64 v197; // [sp+250h] [bp-1A0h]@1
  __int64 v198; // [sp+258h] [bp-198h]@1
  __int64 v199; // [sp+260h] [bp-190h]@1
  __int64 v200; // [sp+268h] [bp-188h]@1
  __int64 v201; // [sp+270h] [bp-180h]@1
  float v202; // [sp+278h] [bp-178h]@1
  __int64 v203; // [sp+288h] [bp-168h]@1
  __int64 v204; // [sp+290h] [bp-160h]@1
  __int64 v205; // [sp+2A8h] [bp-148h]@1
  __int64 v206; // [sp+2B0h] [bp-140h]@1
  char v207; // [sp+2B8h] [bp-138h]@1
  char v208; // [sp+2F8h] [bp-F8h]@1
  int v209; // [sp+338h] [bp-B8h]@23
  signed int v210; // [sp+33Ch] [bp-B4h]@23
  int v211; // [sp+340h] [bp-B0h]@23
  int v212; // [sp+344h] [bp-ACh]@23
  __int64 v213; // [sp+348h] [bp-A8h]@22
  int v214; // [sp+350h] [bp-A0h]@22
  int v215; // [sp+354h] [bp-9Ch]@22
  int v216; // [sp+358h] [bp-98h]@22
  int v217; // [sp+35Ch] [bp-94h]@22
  int v218; // [sp+360h] [bp-90h]@22
  int v219; // [sp+364h] [bp-8Ch]@22
  int v220; // [sp+368h] [bp-88h]@22
  int v221; // [sp+36Ch] [bp-84h]@22
  int v222; // [sp+370h] [bp-80h]@22
  int v223; // [sp+374h] [bp-7Ch]@22
  int v224; // [sp+378h] [bp-78h]@22
  int v225; // [sp+37Ch] [bp-74h]@22
  int v226; // [sp+380h] [bp-70h]@22
  int v227; // [sp+384h] [bp-6Ch]@22

  v80 = a4;
  v81 = a3;
  v84 = a2;
  v4 = this;
  v83 = this;
  v5 = ClientInstance::getHoloInput(*((ClientInstance **)this + 28));
  HolographicPlatform::getTransform((int)&v208, v5, 18, 15, 0);
  v6 = ClientInstance::getHoloInput(*((ClientInstance **)v4 + 28));
  HolographicPlatform::getTransform((int)&v207, v6, 15, 2, 14);
  _aeabi_memclr8(&v202, 56);
  __asm { VLDR            S0, =8.7423e-8 }
  _R4 = &Matrix::IDENTITY;
  __asm
  {
    VLDR            S2, [R4,#0x20]
    VLDR            S4, [R4,#0x24]
    VLDR            S6, [R4,#0x28]
    VMUL.F32        S8, S2, S0
    VLDR            S10, [R4,#0x2C]
    VMUL.F32        S12, S4, S0
    VMUL.F32        S14, S6, S0
    VLDR            S1, [R4,#4]
    VMUL.F32        S0, S10, S0
    VLDR            S3, [R4,#8]
    VLDR            S5, [R4,#0xC]
    VLDR            S7, [R4]
    VSUB.F32        S8, S8, S7
    VSUB.F32        S12, S12, S1
    VSUB.F32        S14, S14, S3
    VSUB.F32        S0, S0, S5
    VSTR            S8, [SP,#0x3F0+var_178]
    VSTR            S12, [SP,#0x3F0+var_174]
    VSTR            S14, [SP,#0x3F0+var_170]
    VSTR            S0, [SP,#0x3F0+var_16C]
    VLDR            S0, =-8.7423e-8
  }
  v203 = qword_27E89F8;
  __asm { VMUL.F32        S8, S7, S0 }
  v204 = qword_27E8A00;
    VMUL.F32        S12, S1, S0
    VMUL.F32        S14, S3, S0
    VMUL.F32        S0, S5, S0
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S12, S4
    VSUB.F32        S6, S14, S6
    VSUB.F32        S0, S0, S10
    VSTR            S2, [SP,#0x3F0+var_158]
    VSTR            S4, [SP,#0x3F0+var_154]
    VSTR            S6, [SP,#0x3F0+var_150]
    VSTR            S0, [SP,#0x3F0+var_14C]
  v205 = *(__int64 *)((char *)&qword_27E8A14 + 4);
  v206 = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr8(&v194, 60);
  v12 = *(_QWORD *)&Matrix::IDENTITY;
  v13 = v12 >> 32;
  v14 = v12;
  v194 = *(_QWORD *)&Matrix::IDENTITY;
  v15 = qword_27E89F0;
  v16 = v15 >> 32;
  v17 = v15;
  v195 = qword_27E89F0;
  v18 = qword_27E89F8;
  v19 = v18 >> 32;
  v20 = v18;
  v196 = qword_27E89F8;
  v21 = qword_27E8A00;
  v22 = v21 >> 32;
  v23 = v21;
  v197 = qword_27E8A00;
  v25 = qword_27E8A08;
  LODWORD(v24) = v25 >> 32;
  LODWORD(v26) = v25;
  v198 = qword_27E8A08;
  v27 = unk_27E8A10;
  v28 = *(__int64 *)((char *)&qword_27E8A14 + 4);
  *((float *)&v29 + 1) = *(&qword_27E8A20 + 1);
  *(float *)&v29 = qword_27E8A20;
  v199 = unk_27E8A10;
  v200 = *(__int64 *)((char *)&qword_27E8A14 + 4);
  v201 = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr8(&v181, 60);
  v181 = v14;
  v182 = v13;
  v183 = v17;
  v184 = v16;
  v185 = v20;
  v186 = v19;
  v187 = v23;
  v188 = v22;
  v189 = v26;
  v190 = v24;
  v191 = v27;
  v192 = v28;
  v193 = v29;
  _aeabi_memclr8(&v173, 60);
  v30 = *(_QWORD *)&Matrix::IDENTITY;
  v31 = v30 >> 32;
  v32 = v30;
  v173 = *(_QWORD *)&Matrix::IDENTITY;
  v33 = qword_27E89F0;
  v34 = v33 >> 32;
  v35 = v33;
  v174 = qword_27E89F0;
  v36 = qword_27E89F8;
  v37 = v36 >> 32;
  v38 = v36;
  v175 = qword_27E89F8;
  v39 = qword_27E8A00;
  LODWORD(v40) = v39 >> 32;
  v41 = v39;
  v176 = qword_27E8A00;
  v42 = qword_27E8A08;
  *(__int64 *)((char *)&v29 + 4) = qword_27E8A14;
  HIDWORD(v28) = unk_27E8A10;
  *(float *)&v29 = unk_27E8A1C;
  v43 = *((_DWORD *)&qword_27E8A20 + 1);
  *(float *)&v27 = qword_27E8A20;
  v177 = qword_27E8A08;
  v178 = unk_27E8A10;
  v179 = *(__int64 *)((char *)&qword_27E8A14 + 4);
  v180 = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr8(&v160, 60);
  v160 = v32;
  v161 = v31;
  v162 = v35;
  v163 = v34;
  v164 = v38;
  v165 = v37;
  v166 = v41;
  v167 = v40;
  v168 = v42;
  v169 = *((float *)&v28 + 1);
  v170 = *(__int64 *)((char *)&v29 + 4);
  v171 = v29;
  v172 = __PAIR__(v43, (unsigned int)v27);
  v44 = (ItemInHandRenderer *)((char *)v83 + 40);
  v45 = (Mob *)ClientInstance::getLocalPlayer(*((ClientInstance **)v83 + 28));
  if ( *((_DWORD *)v83 + 11) )
    if ( !Entity::hasCategory((int)v45, 2) )
      v45 = 0;
    v46 = 0;
    v47 = ItemInHandRenderer::_getRenderCall(v83, v45, v44, 0);
    if ( v47 )
    {
      if ( *((_BYTE *)v47 + 132) )
      {
        _R0 = v80;
        __asm
        {
          VLDR            S2, [SP,#0x3F0+var_1F8]
          VLDR            S10, =0.11
          VLDR            S4, [SP,#0x3F0+var_1F4]
          VMOV            S0, R0
          VLDR            S6, [SP,#0x3F0+var_1F0]
          VMUL.F32        S2, S2, S10
          VLDR            S8, [SP,#0x3F0+var_1EC]
          VMUL.F32        S4, S4, S10
          VLDR            S12, =-0.03
          VMUL.F32        S6, S6, S10
          VLDR            S14, [SP,#0x3F0+var_1E4]
          VMUL.F32        S8, S8, S10
          VLDR            S1, [SP,#0x3F0+var_1E8]
          VLDR            S3, [SP,#0x3F0+var_1E0]
          VMUL.F32        S14, S14, S12
          VLDR            S5, [SP,#0x3F0+var_1DC]
          VMUL.F32        S1, S1, S12
          VMUL.F32        S3, S3, S12
          VLDR            S18, =0.34202
          VMUL.F32        S10, S5, S12
          VLDR            S12, =1.3963
          VLDR            S24, [SP,#0x3F0+var_274]
          VMUL.F32        S0, S0, S12
          VLDR            S12, [SP,#0x3F0+var_1C8+4]
          VLDR            S16, =0.93969
          VSUB.F32        S4, S14, S4
          VLDR            S14, [SP,#0x3F0+var_1C0]
          VSUB.F32        S2, S1, S2
          VLDR            S28, [SP,#0x3F0+var_258+4]
          VSUB.F32        S6, S3, S6
          VLDR            S22, [SP,#0x3F0+var_278]
          VSUB.F32        S8, S10, S8
          VLDR            S10, [SP,#0x3F0+var_1C8]
          VLDR            S26, [SP,#0x3F0+var_270]
          VMUL.F32        S23, S22, S18
          VMOV            R4, S0
          VLDR            S30, [SP,#0x3F0+var_250]
          VMUL.F32        S0, S24, S18
          VLDR            S19, [SP,#0x3F0+var_258]
          VADD.F32        S4, S4, S12
          VLDR            S20, [SP,#0x3F0+var_26C]
          VADD.F32        S2, S2, S10
          VLDR            S10, [SP,#0x3F0+var_1C0+4]
          VADD.F32        S6, S6, S14
          VADD.F32        S8, S8, S10
          VMUL.F32        S17, S26, S18
          VMUL.F32        S21, S30, S16
          VMUL.F32        S25, S19, S16
          VSTR            S2, [SP,#0x3F0+var_1C8]
          VMUL.F32        S2, S28, S16
          VSTR            S4, [SP,#0x3F0+var_1C8+4]
          VSTR            S6, [SP,#0x3F0+var_1C0]
          VSTR            S8, [SP,#0x3F0+var_1C0+4]
          VADD.F32        S27, S2, S0
        }
        _R5 = cosf(_R4);
        _R0 = sinf(_R4);
          VADD.F32        S10, S21, S17
          VLDR            S12, [SP,#0x3F0+var_264]
          VMOV            S8, R5
          VLDR            S3, [SP,#0x3F0+var_260]
          VMOV            S6, R0
          VMUL.F32        S2, S24, S16
          VMUL.F32        S0, S28, S18
          VMUL.F32        S4, S12, S6
          VMUL.F32        S1, S27, S8
          VMUL.F32        S14, S30, S18
          VLDR            S30, [SP,#0x3F0+var_25C]
          VMUL.F32        S5, S26, S16
          VLDR            S26, [SP,#0x3F0+var_24C]
          VMUL.F32        S9, S3, S6
          VADD.F32        S7, S25, S23
          VMUL.F32        S13, S10, S8
          VSUB.F32        S15, S2, S0
          VMUL.F32        S0, S22, S16
          VLDR            S22, [SP,#0x3F0+var_268]
          VMUL.F32        S11, S19, S18
          VSUB.F32        S1, S1, S4
          VSUB.F32        S14, S5, S14
          VMUL.F32        S4, S7, S8
          VSUB.F32        S5, S13, S9
          VMUL.F32        S2, S22, S6
          VMUL.F32        S24, S20, S18
          VSUB.F32        S11, S0, S11
          VMUL.F32        S0, S1, S18
          VMUL.F32        S9, S15, S16
          VMUL.F32        S28, S26, S16
          VMUL.F32        S7, S7, S6
          VSUB.F32        S13, S4, S2
          VMUL.F32        S2, S14, S16
          VMUL.F32        S4, S5, S18
          VMUL.F32        S20, S20, S16
          VADD.F32        S0, S0, S9
          VADD.F32        S24, S28, S24
          VMUL.F32        S1, S1, S16
          VMUL.F32        S9, S13, S18
          VMUL.F32        S14, S14, S18
          VADD.F32        S2, S4, S2
          VMUL.F32        S4, S11, S16
          VMUL.F32        S3, S3, S8
          VMUL.F32        S28, S24, S6
          VMUL.F32        S24, S24, S8
          VMUL.F32        S12, S12, S8
          VADD.F32        S4, S9, S4
          VMUL.F32        S9, S11, S18
          VMUL.F32        S11, S13, S16
          VMUL.F32        S13, S15, S18
          VMUL.F32        S15, S5, S16
          VMUL.F32        S5, S10, S6
          VMUL.F32        S10, S27, S6
          VMUL.F32        S6, S30, S6
          VSTR            S4, [SP,#0x3F0+var_278]
          VSTR            S0, [SP,#0x3F0+var_274]
          VSTR            S2, [SP,#0x3F0+var_270]
          VSUB.F32        S1, S1, S13
          VADD.F32        S10, S10, S12
          VSUB.F32        S6, S24, S6
          VMUL.F32        S24, S26, S18
          VADD.F32        S12, S5, S3
          VSUB.F32        S3, S15, S14
          VSUB.F32        S14, S11, S9
          VMUL.F32        S26, S6, S16
          VSUB.F32        S20, S20, S24
          VMUL.F32        S6, S6, S18
          VMUL.F32        S18, S30, S8
          VMUL.F32        S8, S22, S8
          VADD.F32        S5, S28, S18
          VADD.F32        S8, S7, S8
          VADD.F32        S6, S6, S20
          VSUB.F32        S7, S26, S24
          VSTR            S6, [SP,#0x3F0+var_26C]
          VSTR            S8, [SP,#0x3F0+var_268]
          VSTR            S10, [SP,#0x3F0+var_264]
          VSTR            S12, [SP,#0x3F0+var_260]
          VSTR            S5, [SP,#0x3F0+var_25C]
          VSTR            S14, [SP,#0x3F0+var_258]
          VSTR            S1, [SP,#0x3F0+var_258+4]
          VSTR            S3, [SP,#0x3F0+var_250]
          VSTR            S7, [SP,#0x3F0+var_24C]
        if ( _ZF )
          __asm
          {
            VLDR            S9, =0.38268
            VMUL.F32        S17, S6, S16
            VLDR            S11, =0.92388
          }
          v46 = 1;
            VMUL.F32        S13, S8, S9
            VMUL.F32        S15, S14, S11
            VMUL.F32        S18, S10, S9
            VMUL.F32        S20, S1, S11
            VMUL.F32        S22, S12, S9
            VMUL.F32        S24, S3, S11
            VMUL.F32        S12, S12, S11
            VMUL.F32        S3, S3, S9
            VSUB.F32        S13, S15, S13
            VMUL.F32        S10, S10, S11
            VSUB.F32        S15, S20, S18
            VLDR            S20, =0.34202
            VMUL.F32        S1, S1, S9
            VSUB.F32        S18, S24, S22
            VMUL.F32        S22, S4, S20
            VMUL.F32        S26, S0, S20
            VMUL.F32        S24, S13, S16
            VMUL.F32        S13, S13, S20
            VMUL.F32        S28, S15, S16
            VMUL.F32        S4, S4, S16
            VMUL.F32        S30, S18, S16
            VMUL.F32        S18, S18, S20
            VMUL.F32        S15, S15, S20
            VADD.F32        S22, S24, S22
            VMUL.F32        S24, S2, S20
            VADD.F32        S26, S28, S26
            VMUL.F32        S28, S5, S9
            VMUL.F32        S0, S0, S16
            VMUL.F32        S2, S2, S16
            VMUL.F32        S5, S5, S11
            VMUL.F32        S8, S8, S11
            VSTR            S22, [SP,#0x3F0+var_278]
            VADD.F32        S24, S30, S24
            VMUL.F32        S30, S7, S11
            VSTR            S26, [SP,#0x3F0+var_274]
            VMUL.F32        S14, S14, S9
            VMUL.F32        S7, S7, S9
            VMUL.F32        S6, S6, S20
            VADD.F32        S10, S1, S10
            VADD.F32        S12, S3, S12
            VSUB.F32        S2, S18, S2
            VSTR            S24, [SP,#0x3F0+var_270]
            VSUB.F32        S28, S30, S28
            VADD.F32        S8, S14, S8
            VADD.F32        S14, S7, S5
            VSUB.F32        S0, S15, S0
            VSUB.F32        S4, S13, S4
            VMUL.F32        S30, S28, S20
            VMUL.F32        S28, S28, S16
            VSUB.F32        S1, S30, S17
            VADD.F32        S6, S28, S6
            VSTR            S6, [SP,#0x3F0+var_26C]
            VSTR            S8, [SP,#0x3F0+var_268]
            VSTR            S10, [SP,#0x3F0+var_264]
            VSTR            S12, [SP,#0x3F0+var_260]
            VSTR            S14, [SP,#0x3F0+var_25C]
            VSTR            S4, [SP,#0x3F0+var_258]
            VSTR            S0, [SP,#0x3F0+var_258+4]
            VSTR            S2, [SP,#0x3F0+var_250]
            VSTR            S1, [SP,#0x3F0+var_24C]
        else
          v46 = 0;
      }
      else
        v46 = 0;
    }
    __asm
      VLDR            S0, =0.35
      VLDR            S2, [SP,#0x3F0+var_238]
    v82 = v46;
      VMUL.F32        S2, S2, S0
      VSTR            S2, [SP,#0x3F0+var_238]
      VLDR            S2, [SP,#0x3F0+var_238+4]
      VSTR            S2, [SP,#0x3F0+var_238+4]
      VLDR            S2, [SP,#0x3F0+var_230]
      VSTR            S2, [SP,#0x3F0+var_230]
      VLDR            S2, [SP,#0x3F0+var_230+4]
      VSTR            S2, [SP,#0x3F0+var_230+4]
      VLDR            S2, [SP,#0x3F0+var_228]
      VSTR            S2, [SP,#0x3F0+var_228]
      VLDR            S2, [SP,#0x3F0+var_228+4]
      VSTR            S2, [SP,#0x3F0+var_228+4]
      VLDR            S2, [SP,#0x3F0+var_220]
      VSTR            S2, [SP,#0x3F0+var_220]
      VLDR            S2, [SP,#0x3F0+var_220+4]
      VSTR            S2, [SP,#0x3F0+var_220+4]
      VLDR            S2, [SP,#0x3F0+var_218]
      VSTR            S2, [SP,#0x3F0+var_218]
      VLDR            S2, [SP,#0x3F0+var_218+4]
      VSTR            S2, [SP,#0x3F0+var_218+4]
      VLDR            S2, [SP,#0x3F0+var_210]
      VSTR            S2, [SP,#0x3F0+var_210]
      VLDR            S2, [SP,#0x3F0+var_210+4]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [SP,#0x3F0+var_210+4]
  else
    if ( !v81 )
      v52 = *(_DWORD *)v44;
      v53 = Item::mBow;
      if ( v52 == Item::mBow )
        _R0 = &unk_27D13E0;
          VLDR            S4, [R0,#4]
          VLDR            S2, [R0,#8]
          VLDR            S0, [R0,#0xC]
          VLDR            S4, =-0.08
          VLDR            S0, =0.08
          VMOV.F32        S2, S4
      __asm
        VLDR            S6, [SP,#0x3F0+var_1F8]
        VLDR            S8, [SP,#0x3F0+var_1F4]
        VLDR            S14, [SP,#0x3F0+var_1E4]
        VMUL.F32        S6, S6, S4
        VLDR            S1, [SP,#0x3F0+var_1E8]
        VMUL.F32        S8, S8, S4
        VLDR            S12, [SP,#0x3F0+var_1EC]
        VMUL.F32        S14, S14, S2
        VLDR            S3, [SP,#0x3F0+var_1E0]
        VMUL.F32        S1, S1, S2
        VLDR            S10, [SP,#0x3F0+var_1F0]
        VMUL.F32        S12, S12, S4
        VLDR            S5, [SP,#0x3F0+var_1DC]
        VMUL.F32        S3, S3, S2
        VMUL.F32        S4, S10, S4
        VLDR            S7, [SP,#0x3F0+var_1D8]
        VMUL.F32        S2, S5, S2
        VLDR            S10, [SP,#0x3F0+var_1D4]
        VMUL.F32        S5, S7, S0
        VLDR            S7, [SP,#0x3F0+var_1D0]
        VADD.F32        S8, S14, S8
        VLDR            S14, [SP,#0x3F0+var_1D0+4]
        VADD.F32        S6, S1, S6
        VMUL.F32        S10, S10, S0
        VMUL.F32        S1, S7, S0
        VADD.F32        S4, S3, S4
        VADD.F32        S2, S2, S12
        VLDR            S12, [SP,#0x3F0+var_1C0]
        VMUL.F32        S0, S14, S0
        VADD.F32        S6, S6, S5
        VADD.F32        S8, S8, S10
        VLDR            S10, [SP,#0x3F0+var_1C8+4]
        VADD.F32        S4, S4, S1
        VADD.F32        S0, S2, S0
        VLDR            S2, [SP,#0x3F0+var_1C8]
        VADD.F32        S2, S6, S2
        VLDR            S6, [SP,#0x3F0+var_1C0+4]
        VADD.F32        S4, S4, S12
        VADD.F32        S0, S0, S6
        VSTR            S2, [SP,#0x3F0+var_1C8]
        VSTR            S8, [SP,#0x3F0+var_1C8+4]
        VSTR            S4, [SP,#0x3F0+var_1C0]
        VSTR            S0, [SP,#0x3F0+var_1C0+4]
      if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)v45 + 916))(v45) <= 0 )
        v55 = &dword_F1140C;
        if ( v52 == v53 )
          v55 = &dword_F11410;
        v56 = *(float *)v55;
        _R0 = cosf(*(float *)v55);
        __asm { VMOV            S16, R0 }
        _R0 = sinf(v56);
          VLDR            S0, [SP,#0x3F0+var_1A8]
          VMOV            S10, R0
          VLDR            S2, [SP,#0x3F0+var_1A8+4]
          VLDR            S4, [SP,#0x3F0+var_1A0]
          VMUL.F32        S3, S0, S16
          VLDR            S6, [SP,#0x3F0+var_1A0+4]
          VMUL.F32        S12, S2, S16
          VLDR            S8, [SP,#0x3F0+var_198+4]
          VMUL.F32        S7, S4, S16
          VLDR            S1, [SP,#0x3F0+var_198]
          VMUL.F32        S15, S6, S16
          VLDR            S5, [SP,#0x3F0+var_190]
          VMUL.F32        S14, S8, S10
          VLDR            S11, [SP,#0x3F0+var_190+4]
          VMUL.F32        S9, S1, S10
          VMUL.F32        S13, S5, S10
          VMUL.F32        S18, S11, S10
          VMUL.F32        S0, S0, S10
          VMUL.F32        S8, S8, S16
          VMUL.F32        S5, S5, S16
          VMUL.F32        S10, S11, S16
          VADD.F32        S3, S9, S3
          VADD.F32        S12, S14, S12
          VADD.F32        S14, S13, S7
          VADD.F32        S7, S18, S15
          VSUB.F32        S0, S1, S0
          VSUB.F32        S2, S8, S2
          VSUB.F32        S4, S5, S4
          VSUB.F32        S6, S10, S6
          VSTR            S3, [SP,#0x3F0+var_1A8]
          VSTR            S12, [SP,#0x3F0+var_1A8+4]
          VSTR            S14, [SP,#0x3F0+var_1A0]
          VSTR            S7, [SP,#0x3F0+var_1A0+4]
          VSTR            S0, [SP,#0x3F0+var_198]
          VSTR            S2, [SP,#0x3F0+var_198+4]
          VSTR            S4, [SP,#0x3F0+var_190]
          VSTR            S6, [SP,#0x3F0+var_190+4]
      else if ( v52 == v53 )
          VLDR            S0, =0.38268
          VLDR            S2, [SP,#0x3F0+var_198+4]
          VLDR            S12, [SP,#0x3F0+var_198]
          VMUL.F32        S1, S2, S0
          VLDR            S14, =0.92388
          VMUL.F32        S3, S12, S0
          VLDR            S4, [SP,#0x3F0+var_1A8]
          VMUL.F32        S13, S5, S0
          VLDR            S6, [SP,#0x3F0+var_1A8+4]
          VMUL.F32        S12, S12, S14
          VLDR            S8, [SP,#0x3F0+var_1A0]
          VMUL.F32        S9, S4, S14
          VLDR            S10, [SP,#0x3F0+var_1A0+4]
          VMUL.F32        S7, S6, S14
          VMUL.F32        S4, S4, S0
          VMUL.F32        S15, S8, S14
          VMUL.F32        S16, S11, S0
          VMUL.F32        S18, S10, S14
          VMUL.F32        S6, S6, S0
          VMUL.F32        S2, S2, S14
          VMUL.F32        S8, S8, S0
          VMUL.F32        S0, S10, S0
          VMUL.F32        S10, S11, S14
          VMUL.F32        S5, S5, S14
          VSUB.F32        S14, S9, S3
          VSUB.F32        S1, S7, S1
          VADD.F32        S2, S2, S6
          VSUB.F32        S3, S15, S13
          VSUB.F32        S7, S18, S16
          VADD.F32        S4, S12, S4
          VADD.F32        S6, S5, S8
          VADD.F32        S0, S10, S0
          VSTR            S14, [SP,#0x3F0+var_1A8]
          VSTR            S1, [SP,#0x3F0+var_1A8+4]
          VSTR            S3, [SP,#0x3F0+var_1A0]
          VSTR            S4, [SP,#0x3F0+var_198]
          VSTR            S6, [SP,#0x3F0+var_190]
          VSTR            S0, [SP,#0x3F0+var_190+4]
    v82 = 0;
  v59 = MatrixStack::MatrixStackRef::operator*((int)v84);
  glm::detail::operator*<float>((int)&v213, (int)&v207, (int)&v208);
  _aeabi_memclr8(&v145, 56);
  v145 = v213;
  v146 = v214;
  v147 = v215;
  v148 = v216;
  v149 = v217;
  v150 = v218;
  v151 = v219;
  v152 = v220;
  v153 = v221;
  v154 = v222;
  v155 = v223;
  v156 = v224;
  v157 = v225;
  v158 = v226;
  v159 = v227;
  glm::detail::operator*<float>((int)&v213, (int)&v145, (int)&v160);
  _aeabi_memclr8(&v130, 56);
  v130 = v213;
  v131 = v214;
  v132 = v215;
  v133 = v216;
  v134 = v217;
  v135 = v218;
  v136 = v219;
  v137 = v220;
  v138 = v221;
  v139 = v222;
  v140 = v223;
  v141 = v224;
  v142 = v225;
  v143 = v226;
  v144 = v227;
  glm::detail::operator*<float>((int)&v213, (int)&v130, (int)&v181);
  _aeabi_memclr8(&v115, 56);
  v115 = v213;
  v116 = v214;
  v117 = v215;
  v118 = v216;
  v119 = v217;
  v120 = v218;
  v121 = v219;
  v122 = v220;
  v123 = v221;
  v124 = v222;
  v125 = v223;
  v126 = v224;
  v127 = v225;
  v128 = v226;
  v129 = v227;
  glm::detail::operator*<float>((int)&v213, (int)&v115, (int)&v202);
  _aeabi_memclr8(&v100, 56);
  v100 = v213;
  v101 = v214;
  v102 = v215;
  v103 = v216;
  v104 = v217;
  v105 = v218;
  v106 = v219;
  v107 = v220;
  v108 = v221;
  v109 = v222;
  v110 = v223;
  v111 = v224;
  v112 = v225;
  v113 = v226;
  v114 = v227;
  glm::detail::operator*<float>((int)&v213, (int)&v100, (int)&v194);
  _aeabi_memclr8(&v85, 56);
  v85 = v213;
  v86 = v214;
  v87 = v215;
  v88 = v216;
  v89 = v217;
  v90 = v218;
  v91 = v219;
  v92 = v220;
  v93 = v221;
  v94 = v222;
  v95 = v223;
  v96 = v224;
  v97 = v225;
  v98 = v226;
  v99 = v227;
  glm::detail::operator*<float>((int)&v213, (int)&v85, (int)&v173);
  v60 = *(_QWORD *)&v214;
  v61 = v227;
  v62 = v226;
  v63 = v225;
  v64 = v224;
  v65 = v220;
  v66 = v221;
  v67 = v222;
  v68 = v223;
  v69 = v216;
  v70 = v217;
  v71 = v218;
  v72 = v219;
  *(_QWORD *)v59 = v213;
  *(_QWORD *)(v59 + 8) = v60;
  v73 = v59 + 16;
  *(_DWORD *)v73 = v69;
  *(_DWORD *)(v73 + 4) = v70;
  *(_DWORD *)(v73 + 8) = v71;
  *(_DWORD *)(v73 + 12) = v72;
  v74 = v59 + 32;
  *(_DWORD *)v74 = v65;
  *(_DWORD *)(v74 + 4) = v66;
  *(_DWORD *)(v74 + 8) = v67;
  *(_DWORD *)(v74 + 12) = v68;
  *(_DWORD *)(v59 + 48) = v64;
  *(_DWORD *)(v59 + 52) = v63;
  *(_DWORD *)(v59 + 56) = v62;
  *(_DWORD *)(v59 + 60) = v61;
  if ( v82 == 1 )
    _R0 = MatrixStack::MatrixStackRef::operator->((int)v84);
      VLDR            S0, =-0.075
      VLDR            S6, [R0,#0xC]
      VLDR            S4, [R0,#8]
      VLDR            S8, [R0,#0x10]
      VMUL.F32        S6, S6, S0
      VLDR            S3, =0.245
      VLDR            S10, [R0,#0x14]
      VLDR            S12, [R0,#0x18]
      VMUL.F32        S8, S8, S3
      VLDR            S14, [R0,#0x1C]
      VMUL.F32        S10, S10, S3
      VLDMIA          R0, {S1-S2}
      VMUL.F32        S12, S12, S3
      VMUL.F32        S14, S14, S3
      VLDR            S5, =0.1
      VMUL.F32        S1, S1, S0
      VLDR            S7, [R0,#0x20]
      VMUL.F32        S0, S4, S0
      VLDR            S4, [R0,#0x24]
      VMUL.F32        S3, S7, S5
      VLDR            S7, [R0,#0x28]
      VMUL.F32        S4, S4, S5
      VADD.F32        S6, S14, S6
      VADD.F32        S2, S10, S2
      VLDR            S10, [R0,#0x2C]
      VADD.F32        S8, S8, S1
      VADD.F32        S0, S12, S0
      VLDR            S12, [R0,#0x38]
      VMUL.F32        S1, S7, S5
      VMUL.F32        S10, S10, S5
      VADD.F32        S2, S2, S4
      VADD.F32        S8, S8, S3
      VADD.F32        S0, S0, S1
      VADD.F32        S4, S6, S10
      VLDR            S6, [R0,#0x30]
      VLDR            S10, [R0,#0x34]
      VADD.F32        S2, S2, S10
      VADD.F32        S6, S8, S6
      VLDR            S8, [R0,#0x3C]
      VADD.F32        S0, S0, S12
      VADD.F32        S4, S4, S8
      VSTR            S6, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S0, [R0,#0x38]
      VSTR            S4, [R0,#0x3C]
    v77 = MatrixStack::MatrixStackRef::operator->((int)v84);
    v209 = 0;
    v210 = 0;
    v212 = -1012432896;
    v211 = 1065353216;
    glm::rotate<float>((int)&v213, v77, (int)&v212, (int)&v209);
    *(_QWORD *)v77 = v213;
    *(_DWORD *)(v77 + 8) = v214;
    *(_DWORD *)(v77 + 12) = v215;
    *(_DWORD *)(v77 + 16) = v216;
    *(_DWORD *)(v77 + 20) = v217;
    *(_DWORD *)(v77 + 24) = v218;
    *(_DWORD *)(v77 + 28) = v219;
    *(_DWORD *)(v77 + 32) = v220;
    *(_DWORD *)(v77 + 36) = v221;
    *(_DWORD *)(v77 + 40) = v222;
    *(_DWORD *)(v77 + 44) = v223;
    *(_DWORD *)(v77 + 48) = v224;
    *(_DWORD *)(v77 + 52) = v225;
    *(_DWORD *)(v77 + 56) = v226;
    *(_DWORD *)(v77 + 60) = v227;
    v78 = MatrixStack::MatrixStackRef::operator->((int)v84);
    v210 = 1065353216;
    v212 = -1035468800;
    v211 = 0;
    glm::rotate<float>((int)&v213, v78, (int)&v212, (int)&v209);
    *(_QWORD *)v78 = v213;
    *(_DWORD *)(v78 + 8) = v214;
    *(_DWORD *)(v78 + 12) = v215;
    *(_DWORD *)(v78 + 16) = v216;
    *(_DWORD *)(v78 + 20) = v217;
    *(_DWORD *)(v78 + 24) = v218;
    *(_DWORD *)(v78 + 28) = v219;
    *(_DWORD *)(v78 + 32) = v220;
    *(_DWORD *)(v78 + 36) = v221;
    *(_DWORD *)(v78 + 40) = v222;
    *(_DWORD *)(v78 + 44) = v223;
    *(_DWORD *)(v78 + 48) = v224;
    *(_DWORD *)(v78 + 52) = v225;
    *(_DWORD *)(v78 + 56) = v226;
    *(_DWORD *)(v78 + 60) = v227;
  return v82 ^ 1;
}


int __fastcall ItemInHandRenderer::render(ItemInHandRenderer *this, BaseEntityRenderContext *a2, int a3)
{
  int v5; // r0@1
  int v10; // r10@1
  float v12; // r3@1
  int v13; // r7@1
  char *v14; // r0@1
  int v15; // ST28_4@1
  int v16; // ST2C_4@1
  int v17; // ST30_4@1
  int v18; // ST34_4@1
  __int64 v19; // ST38_8@1
  int v20; // r0@1
  int v21; // r0@2
  int v22; // r11@3
  signed int v23; // r0@3
  int v25; // r0@5
  signed int v26; // r0@6
  float v27; // r1@6
  float v29; // r1@14
  float v33; // r1@14
  float v35; // r1@14
  float v38; // r1@14
  float v41; // r1@14
  float v44; // r1@14
  Options *v48; // r0@15
  signed int v50; // r4@17
  float v56; // r1@21
  float v58; // r1@21
  float v61; // r1@21
  Options *v62; // r0@22
  int v63; // r0@23
  signed int v64; // r0@26
  LocalPlayer *v65; // r4@31
  int v66; // r0@31
  float v73; // r1@33
  int v75; // r0@35
  int v77; // r0@37
  float v81; // r1@40
  int v84; // r4@42
  int v85; // r4@42
  int v86; // r4@42
  Options *v90; // r0@46
  int v91; // r4@49
  int v92; // r4@49
  int v93; // r4@49
  signed int v94; // r7@51
  int v95; // r4@52
  int v96; // r4@52
  int v97; // r4@52
  int v98; // r4@52
  int v100; // r0@54
  int v101; // r4@57
  int v102; // r4@57
  int v103; // r4@57
  int v104; // r0@57
  int v106; // r0@59
  int v110; // r4@64
  int v112; // r4@64
  int v114; // r4@64
  int v118; // r4@66
  float v124; // r1@72
  int v127; // r4@75
  int v128; // r4@75
  int v132; // r4@75
  int v133; // r4@75
  Options *v134; // r0@76
  int v139; // r4@77
  int v140; // r4@79
  int v144; // r0@84
  __int64 v145; // r2@84
  int v146; // r0@84
  int v147; // r0@84
  int v148; // r0@85
  int v150; // r7@88
  int v152; // r4@89
  int v153; // r4@89
  float v155; // r1@89
  float v159; // r1@89
  int v162; // r4@89
  int v163; // r4@89
  int v165; // r4@90
  int v166; // r4@90
  int v167; // r4@91
  int v169; // r4@93
  int v170; // r4@93
  int v171; // r4@93
  EntityRenderDispatcher *v173; // r4@93
  Entity *v174; // r0@93
  PlayerRenderer *v175; // r4@93
  float v176; // [sp+0h] [bp-F8h]@0
  float v177; // [sp+4h] [bp-F4h]@0
  int v178; // [sp+14h] [bp-E4h]@21
  int v179; // [sp+18h] [bp-E0h]@21
  int v180; // [sp+1Ch] [bp-DCh]@23
  int v181; // [sp+20h] [bp-D8h]@1
  int v182; // [sp+24h] [bp-D4h]@6
  int v183; // [sp+24h] [bp-D4h]@14
  char v184; // [sp+40h] [bp-B8h]@1
  int v185; // [sp+48h] [bp-B0h]@42
  __int64 v186; // [sp+4Ch] [bp-ACh]@42
  int v187; // [sp+54h] [bp-A4h]@42
  int v188; // [sp+58h] [bp-A0h]@42
  int v189; // [sp+5Ch] [bp-9Ch]@42
  int v190; // [sp+60h] [bp-98h]@42
  int v191; // [sp+64h] [bp-94h]@42
  int v192; // [sp+68h] [bp-90h]@42
  int v193; // [sp+6Ch] [bp-8Ch]@42
  int v194; // [sp+70h] [bp-88h]@42
  int v195; // [sp+74h] [bp-84h]@42
  int v196; // [sp+78h] [bp-80h]@42
  int v197; // [sp+7Ch] [bp-7Ch]@42
  int v198; // [sp+80h] [bp-78h]@42
  int v199; // [sp+84h] [bp-74h]@42
  int v200; // [sp+88h] [bp-70h]@42
  int v201; // [sp+8Ch] [bp-6Ch]@42
  int v202; // [sp+90h] [bp-68h]@42
  float v203; // [sp+94h] [bp-64h]@42

  _R9 = a2;
  _R5 = this;
  v181 = a3;
  v5 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v184, v5);
  __asm
  {
    VLDR            S20, [R5,#0x78]
    VLDR            S18, [R5,#0x7C]
    VLDR            S22, [R9,#4]
  }
  v10 = ClientInstance::getLocalPlayer(*((ClientInstance **)_R5 + 28));
    VLDR            S28, [R9,#4]
    VLDR            S24, [R5,#0x78]
    VLDR            S26, [R5,#0x7C]
    VMOV            R2, S28
  v13 = mce::Math::lerpRotate(*(mce::Math **)(v10 + 128), *(float *)(v10 + 120), _R2, v12);
  v14 = ClientInstance::getViewportInfo(*((ClientInstance **)_R5 + 28));
  v15 = *(_DWORD *)v14;
  v16 = *((_DWORD *)v14 + 1);
  v17 = *((_DWORD *)v14 + 2);
  v18 = *((_DWORD *)v14 + 3);
  v19 = *((_QWORD *)v14 + 2);
  v20 = ClientInstance::getHoloInput(*((ClientInstance **)_R5 + 28));
  if ( !(*(int (**)(void))(*(_DWORD *)v20 + 44))() )
    v21 = *(_DWORD *)(BaseEntityRenderContext::getScreenContext(_R9) + 12);
    mce::RenderContext::setViewport();
  ItemInHandRenderer::renderOffhandItem(_R5, _R9, (Player *)v10);
  v22 = (int)_R5 + 40;
  v23 = ItemInstance::getId((ItemInHandRenderer *)((char *)_R5 + 40));
  __asm { VMOV.F32        S16, #1.0 }
  if ( v23 == *(_WORD *)(Item::mFilledMap + 18) )
    _R0 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v10 + 900))(v10, *((_DWORD *)_R9 + 1));
    __asm
    {
      VSUB.F32        S0, S26, S24
      VSUB.F32        S2, S16, S26
      VMUL.F32        S0, S0, S28
      VADD.F32        S0, S2, S0
      VMOV            S2, R0
      VSTR            S0, [SP,#0xF8+var_F8]
      VSTR            S2, [SP,#0xF8+var_F4]
    }
    ItemInHandRenderer::_renderMapInHand(_R5, _R9, (Player *)v10, *(float *)&v13, v176, v177);
    goto LABEL_81;
  __asm { VSUB.F32        S0, S20, S18 }
  v25 = *(_DWORD *)v22;
    VMUL.F32        S0, S0, S22
    VADD.F32        S22, S0, S18
  if ( !_ZF )
    v182 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 916))(v10);
    v26 = 0;
    v27 = *(float *)&Item::mBow;
    if ( v182 < 1 )
      v26 = 1;
    if ( *(_DWORD *)v22 == Item::mBow || v26 )
      if ( v182 > 0 )
      {
        __asm { VLDR            S20, =0.0 }
        goto LABEL_21;
      }
    else if ( ItemInstance::getUseAnimation((ItemInHandRenderer *)((char *)_R5 + 40)) )
      __asm { VLDR            S20, =0.0 }
      goto LABEL_21;
    __asm { VMOV            S20, R0 }
LABEL_21:
    __asm { VMOV            R0, S20 }
    _R4 = mce::Math::sqrt(_R0, v27);
    __asm { VMUL.F32        S0, S20, S20 }
    _R0 = &mce::Math::PI;
      VLDR            S18, [R0]
      VMUL.F32        S0, S0, S18
      VMOV            R0, S0
    v178 = mce::Math::sin(_R0, v56);
      VMUL.F32        S0, S18, S20
    _R7 = mce::Math::sin(_R0, v58);
      VMOV            S24, R4
      VMUL.F32        S0, S18, S24
    v179 = mce::Math::sin(_R0, v61);
    if ( ClientInstance::isRealityFullVRMode(*((ClientInstance **)_R5 + 28)) != 1 )
      goto LABEL_97;
    v62 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R5 + 28));
    if ( Options::getVRHandControlsItem(v62) != 1 )
    v63 = ClientInstance::getHoloInput(*((ClientInstance **)_R5 + 28));
    v180 = 0;
    if ( v182 > 0 || !*(_BYTE *)(v63 + 661) )
      goto LABEL_31;
    if ( *(_DWORD *)v22 )
      v64 = *(_BYTE *)(*(_DWORD *)v22 + 68);
      if ( *(_BYTE *)(*(_DWORD *)v22 + 68) )
        v64 = 1;
    else
LABEL_97:
      v64 = 0;
    v180 = v64;
LABEL_31:
    v65 = (LocalPlayer *)ClientInstance::getLocalPlayer(*((ClientInstance **)_R5 + 28));
    __asm { VLDR            S20, [R9,#4] }
    v66 = MatrixStack::MatrixStackRef::operator*((int)&v184);
    __asm { VMOV            R2, S20 }
    ItemInHandRenderer::_setPlayerBob(v66, v65, _R2, v66);
    _R0 = v179;
      _R4 = MatrixStack::MatrixStackRef::operator->((int)&v184);
      __asm
        VADD.F32        S0, S18, S18
        VMUL.F32        S0, S24, S0
        VMOV            R0, S0
      _R0 = mce::Math::sin(_R0, v81);
        VLDR            S4, =-0.4
        VMOV            S2, R0
        VLDR            S6, =0.2
        VMOV            S0, R7
        VMUL.F32        S4, S20, S4
        VLDR            S8, [R4]
        VMUL.F32        S2, S2, S6
        VLDR            S6, =-0.2
        VLDR            S10, [R4,#4]
        VLDR            S1, [R4,#0x10]
        VMUL.F32        S0, S0, S6
        VLDR            S14, [R4,#0xC]
        VLDR            S3, [R4,#0x18]
        VLDR            S12, [R4,#8]
        VMUL.F32        S6, S8, S4
        VLDR            S8, [R4,#0x14]
        VMUL.F32        S1, S1, S2
        VLDR            S5, [R4,#0x1C]
        VMUL.F32        S10, S10, S4
        VLDR            S7, [R4,#0x20]
        VMUL.F32        S8, S8, S2
        VMUL.F32        S14, S14, S4
        VMUL.F32        S4, S12, S4
        VLDR            S12, [R4,#0x24]
        VMUL.F32        S3, S3, S2
        VMUL.F32        S2, S5, S2
        VMUL.F32        S5, S7, S0
        VLDR            S7, [R4,#0x28]
        VADD.F32        S6, S1, S6
        VADD.F32        S8, S8, S10
        VLDR            S10, [R4,#0x2C]
        VMUL.F32        S12, S12, S0
        VMUL.F32        S1, S7, S0
        VADD.F32        S4, S3, S4
        VMUL.F32        S0, S10, S0
        VLDR            S10, [R4,#0x34]
        VADD.F32        S2, S2, S14
        VADD.F32        S6, S6, S5
        VADD.F32        S8, S8, S12
        VLDR            S12, [R4,#0x38]
        VADD.F32        S4, S4, S1
        VADD.F32        S0, S2, S0
        VLDR            S2, [R4,#0x30]
        VADD.F32        S2, S6, S2
        VLDR            S6, [R4,#0x3C]
        VADD.F32        S4, S4, S12
        VADD.F32        S0, S0, S6
        VSTR            S2, [R4,#0x30]
        VSTR            S8, [R4,#0x34]
        VSTR            S4, [R4,#0x38]
        VSTR            S0, [R4,#0x3C]
    else if ( (unsigned __int8)(ItemInstance::getUseAnimation((ItemInHandRenderer *)((char *)_R5 + 40)) - 1) <= 1u )
      _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 916))(v10);
        VMOV            S0, R0
        VCVT.F32.S32    S26, S0
        VLDR            S28, [R9,#4]
      _R0 = ItemInstance::getMaxUseDuration((ItemInHandRenderer *)((char *)_R5 + 40));
        VCVT.F32.S32    S24, S0
        VSUB.F32        S0, S26, S28
        VADD.F32        S26, S0, S16
        VMOV.F32        S0, #0.25
        VMUL.F32        S0, S26, S0
        VMUL.F32        S0, S0, S18
      _R0 = mce::Math::cos(_R0, v73);
        VDIV.F32        S18, S26, S24
        VSUB.F32        S0, S16, S18
        VLDR            D3, =0.2
        VLDR            S4, =0.1
        VMUL.F32        S2, S2, S4
        VLDR            S4, =0.0
        VCVT.F64.F32    D0, S0
        VCMPE.F64       D0, D3
        VMRS            APSR_nzcv, FPSCR
        VABS.F32        S0, S2
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S4, S16 }
        VLDR            S2, [R4,#0x14]
        VMUL.F32        S0, S0, S4
        VLDR            S4, [R4,#0x18]
        VLDR            S8, [R4,#0x10]
        VLDR            S6, [R4,#0x1C]
        VLDR            S14, [R4,#0x3C]
        VMUL.F32        S2, S2, S0
        VMUL.F32        S4, S4, S0
        VMUL.F32        S8, S8, S0
        VMUL.F32        S0, S6, S0
        VLDR            S6, [R4,#0x30]
        VADD.F32        S2, S10, S2
        VADD.F32        S4, S12, S4
        VADD.F32        S6, S6, S8
        VADD.F32        S0, S14, S0
        VSTR            S6, [R4,#0x30]
        VSTR            S2, [R4,#0x34]
      v75 = ClientInstance::getHoloInput(*((ClientInstance **)_R5 + 28));
      (*(void (**)(void))(*(_DWORD *)v75 + 44))();
        VMUL.F32        S0, S18, S18
        VMUL.F32        S2, S0, S0
        VMUL.F32        S0, S2, S0
        VLDR            S2, =0.6
        VSUB.F32        S18, S16, S0
        VMOV.F32        S0, #-0.5
        VMUL.F32        S24, S18, S2
        VMUL.F32        S26, S18, S0
      if ( _ZF )
        _R4 = mce::Singleton<mce::RendererSettings>::mInstance;
        v77 = BaseEntityRenderContext::getScreenContext(_R9);
        _R0 = GuiData::getScreenSizeData(*(GuiData **)(v77 + 24));
        __asm
        {
          VLDR            S0, [R4,#0x14]
          VLDR            S2, [R4,#0x18]
          VLDR            S4, [R0,#8]
          VLDR            S6, [R0,#0xC]
          VDIV.F32        S2, S0, S2
          VDIV.F32        S4, S4, S6
          VDIV.F32        S0, S4, S2
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm
          {
            VMUL.F32        S0, S0, S24
            VADD.F32        S24, S0, S24
          }
        else
            VMOV.F32        S2, #-1.0
            VLDR            S4, =-0.1
            VMUL.F32        S4, S18, S4
            VADD.F32        S0, S0, S2
            VMUL.F32        S0, S4, S0
            VADD.F32        S26, S0, S26
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        VLDR            S0, [R0,#4]
        VLDR            S2, [R0,#8]
        VLDR            S4, [R0,#0xC]
        VMUL.F32        S0, S0, S24
        VLDR            S6, [R0,#0x10]
        VMUL.F32        S2, S2, S24
        VLDR            S8, [R0,#0x14]
        VMUL.F32        S4, S4, S24
        VLDR            S10, [R0,#0x18]
        VMUL.F32        S6, S6, S26
        VLDR            S12, [R0,#0x1C]
        VMUL.F32        S8, S8, S26
        VLDR            S14, [R0]
        VMUL.F32        S10, S10, S26
        VMUL.F32        S12, S12, S26
        VMUL.F32        S14, S14, S24
        VADD.F32        S0, S8, S0
        VLDR            S8, [R0,#0x30]
        VLDR            S10, [R0,#0x34]
        VLDR            S12, [R0,#0x38]
        VADD.F32        S6, S6, S14
        VLDR            S14, [R0,#0x3C]
        VADD.F32        S0, S0, S10
        VADD.F32        S2, S2, S12
        VADD.F32        S4, S4, S14
        VSTR            S6, [R0,#0x30]
        VSTR            S0, [R0,#0x34]
        VSTR            S2, [R0,#0x38]
        VSTR            S4, [R0,#0x3C]
      v84 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        VLDR            S0, =90.0
        VMUL.F32        S0, S18, S0
      v185 = 0;
      v186 = 1065353216LL;
      __asm { VSTR            S0, [SP,#0xF8+var_64] }
      glm::rotate<float>((int)&v187, v84, (int)&v203, (int)&v185);
      *(_DWORD *)v84 = v187;
      *(_DWORD *)(v84 + 4) = v188;
      *(_DWORD *)(v84 + 8) = v189;
      *(_DWORD *)(v84 + 12) = v190;
      *(_DWORD *)(v84 + 16) = v191;
      *(_DWORD *)(v84 + 20) = v192;
      *(_DWORD *)(v84 + 24) = v193;
      *(_DWORD *)(v84 + 28) = v194;
      *(_DWORD *)(v84 + 32) = v195;
      *(_DWORD *)(v84 + 36) = v196;
      *(_DWORD *)(v84 + 40) = v197;
      *(_DWORD *)(v84 + 44) = v198;
      *(_DWORD *)(v84 + 48) = v199;
      *(_DWORD *)(v84 + 52) = v200;
      *(_DWORD *)(v84 + 56) = v201;
      *(_DWORD *)(v84 + 60) = v202;
      v85 = MatrixStack::MatrixStackRef::operator->((int)&v184);
      __asm { VMOV.F32        S0, #10.0 }
      *(_QWORD *)&v185 = 1065353216LL;
      HIDWORD(v186) = 0;
        VSTR            S0, [SP,#0xF8+var_64]
      glm::rotate<float>((int)&v187, v85, (int)&v203, (int)&v185);
      *(_DWORD *)v85 = v187;
      *(_DWORD *)(v85 + 4) = v188;
      *(_DWORD *)(v85 + 8) = v189;
      *(_DWORD *)(v85 + 12) = v190;
      *(_DWORD *)(v85 + 16) = v191;
      *(_DWORD *)(v85 + 20) = v192;
      *(_DWORD *)(v85 + 24) = v193;
      *(_DWORD *)(v85 + 28) = v194;
      *(_DWORD *)(v85 + 32) = v195;
      *(_DWORD *)(v85 + 36) = v196;
      *(_DWORD *)(v85 + 40) = v197;
      *(_DWORD *)(v85 + 44) = v198;
      *(_DWORD *)(v85 + 48) = v199;
      *(_DWORD *)(v85 + 52) = v200;
      *(_DWORD *)(v85 + 56) = v201;
      *(_DWORD *)(v85 + 60) = v202;
      v86 = MatrixStack::MatrixStackRef::operator->((int)&v184);
      __asm { VMOV.F32        S0, #30.0 }
      v186 = 4575657221408423936LL;
      glm::rotate<float>((int)&v187, v86, (int)&v203, (int)&v185);
      *(_DWORD *)v86 = v187;
      *(_DWORD *)(v86 + 4) = v188;
      *(_DWORD *)(v86 + 8) = v189;
      *(_DWORD *)(v86 + 12) = v190;
      *(_DWORD *)(v86 + 16) = v191;
      *(_DWORD *)(v86 + 20) = v192;
      *(_DWORD *)(v86 + 24) = v193;
      *(_DWORD *)(v86 + 28) = v194;
      *(_DWORD *)(v86 + 32) = v195;
      *(_DWORD *)(v86 + 36) = v196;
      *(_DWORD *)(v86 + 40) = v197;
      *(_DWORD *)(v86 + 44) = v198;
      *(_DWORD *)(v86 + 48) = v199;
      *(_DWORD *)(v86 + 52) = v200;
      *(_DWORD *)(v86 + 56) = v201;
      *(_DWORD *)(v86 + 60) = v202;
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v184);
      VMOV.F32        S18, #-1.0
      VLDR            S2, =-0.52
    _R1 = v178;
      VLDR            S6, [R0,#8]
      VLDR            S8, [R0,#0xC]
      VLDR            S10, [R0,#0x10]
      VMOV            S24, R1
      VLDR            S12, [R0,#0x14]
      VLDR            S14, [R0,#0x18]
      VADD.F32        S0, S22, S18
      VLDR            S22, =0.6
      VLDR            S1, [R0,#0x1C]
      VLDMIA          R0, {S3-S4}
      VLDR            S5, =-0.72
      VLDR            S7, [R0,#0x20]
      VMUL.F32        S0, S0, S22
      VADD.F32        S0, S0, S2
      VLDR            S2, =0.56
      VMUL.F32        S3, S3, S2
      VMUL.F32        S4, S4, S2
      VMUL.F32        S8, S8, S2
      VMUL.F32        S2, S6, S2
      VLDR            S6, [R0,#0x24]
      VMUL.F32        S10, S10, S0
      VMUL.F32        S12, S12, S0
      VMUL.F32        S14, S14, S0
      VMUL.F32        S0, S1, S0
      VMUL.F32        S1, S7, S5
      VLDR            S7, [R0,#0x28]
      VMUL.F32        S6, S6, S5
      VADD.F32        S10, S10, S3
      VADD.F32        S4, S12, S4
      VLDR            S12, [R0,#0x2C]
      VMUL.F32        S3, S7, S5
      VADD.F32        S2, S14, S2
      VADD.F32        S0, S0, S8
      VMUL.F32        S12, S12, S5
      VADD.F32        S8, S10, S1
      VLDR            S10, [R0,#0x34]
      VADD.F32        S4, S4, S6
      VLDR            S6, [R0,#0x30]
      VADD.F32        S2, S2, S3
      VADD.F32        S0, S0, S12
      VLDR            S12, [R0,#0x38]
      VADD.F32        S6, S8, S6
      VLDR            S8, [R0,#0x3C]
      VADD.F32        S4, S4, S10
      VADD.F32        S2, S2, S12
      VSTR            S6, [R0,#0x30]
      VSTR            S4, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    if ( _ZF
      && BaseEntityRenderContext::isRealityFullVRMode(_R9) == 1
      && (v90 = (Options *)BaseEntityRenderContext::getOptions(_R9), Options::getVRHandControlsItem(v90) == 1)
      && *(_BYTE *)(ClientInstance::getHoloInput(*((ClientInstance **)_R5 + 28)) + 661) )
      if ( ItemInHandRenderer::_adjustHandPositionForVR(
             _R5,
             (MatrixStack::MatrixStackRef *)&v184,
             v180,
             *(float *)&v179) == 1 )
        v91 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        __asm { VMOV.F32        S26, #10.0 }
        v185 = 0;
        v186 = 1065353216LL;
          VMUL.F32        S0, S24, S26
          VSTR            S0, [SP,#0xF8+var_64]
        glm::rotate<float>((int)&v187, v91, (int)&v203, (int)&v185);
        *(_DWORD *)v91 = v187;
        *(_DWORD *)(v91 + 4) = v188;
        *(_DWORD *)(v91 + 8) = v189;
        *(_DWORD *)(v91 + 12) = v190;
        *(_DWORD *)(v91 + 16) = v191;
        *(_DWORD *)(v91 + 20) = v192;
        *(_DWORD *)(v91 + 24) = v193;
        *(_DWORD *)(v91 + 28) = v194;
        *(_DWORD *)(v91 + 32) = v195;
        *(_DWORD *)(v91 + 36) = v196;
        *(_DWORD *)(v91 + 40) = v197;
        *(_DWORD *)(v91 + 44) = v198;
        *(_DWORD *)(v91 + 48) = v199;
        *(_DWORD *)(v91 + 52) = v200;
        *(_DWORD *)(v91 + 56) = v201;
        *(_DWORD *)(v91 + 60) = v202;
        v92 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        __asm { VMUL.F32        S0, S20, S26 }
        v186 = 4575657221408423936LL;
        __asm { VSTR            S0, [SP,#0xF8+var_64] }
        glm::rotate<float>((int)&v187, v92, (int)&v203, (int)&v185);
        *(_DWORD *)v92 = v187;
        *(_DWORD *)(v92 + 4) = v188;
        *(_DWORD *)(v92 + 8) = v189;
        *(_DWORD *)(v92 + 12) = v190;
        *(_DWORD *)(v92 + 16) = v191;
        *(_DWORD *)(v92 + 20) = v192;
        *(_DWORD *)(v92 + 24) = v193;
        *(_DWORD *)(v92 + 28) = v194;
        *(_DWORD *)(v92 + 32) = v195;
        *(_DWORD *)(v92 + 36) = v196;
        *(_DWORD *)(v92 + 40) = v197;
        *(_DWORD *)(v92 + 44) = v198;
        *(_DWORD *)(v92 + 48) = v199;
        *(_DWORD *)(v92 + 52) = v200;
        *(_DWORD *)(v92 + 56) = v201;
        *(_DWORD *)(v92 + 60) = v202;
        v93 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        __asm { VLDR            S0, =-80.0 }
        v185 = 1065353216;
        __asm { VMUL.F32        S0, S20, S0 }
        v186 = 0LL;
        glm::rotate<float>((int)&v187, v93, (int)&v203, (int)&v185);
        *(_DWORD *)v93 = v187;
        *(_DWORD *)(v93 + 4) = v188;
        *(_DWORD *)(v93 + 8) = v189;
        *(_DWORD *)(v93 + 12) = v190;
        *(_DWORD *)(v93 + 16) = v191;
        *(_DWORD *)(v93 + 20) = v192;
        *(_DWORD *)(v93 + 24) = v193;
        *(_DWORD *)(v93 + 28) = v194;
        *(_DWORD *)(v93 + 32) = v195;
        *(_DWORD *)(v93 + 36) = v196;
        *(_DWORD *)(v93 + 40) = v197;
        *(_DWORD *)(v93 + 44) = v198;
        *(_DWORD *)(v93 + 48) = v199;
        *(_DWORD *)(v93 + 52) = v200;
        *(_DWORD *)(v93 + 56) = v201;
        *(_DWORD *)(v93 + 60) = v202;
      if ( (*((_DWORD *)_R5 + 11) != 0) | v180 )
        v94 = 1;
      else
        v118 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        v203 = 45.0;
        glm::rotate<float>((int)&v187, v118, (int)&v203, (int)&v185);
        *(_DWORD *)v118 = v187;
        *(_DWORD *)(v118 + 4) = v188;
        *(_DWORD *)(v118 + 8) = v189;
        *(_DWORD *)(v118 + 12) = v190;
        *(_DWORD *)(v118 + 16) = v191;
        *(_DWORD *)(v118 + 20) = v192;
        *(_DWORD *)(v118 + 24) = v193;
        *(_DWORD *)(v118 + 28) = v194;
        *(_DWORD *)(v118 + 32) = v195;
        *(_DWORD *)(v118 + 36) = v196;
        *(_DWORD *)(v118 + 40) = v197;
        *(_DWORD *)(v118 + 44) = v198;
        *(_DWORD *)(v118 + 48) = v199;
        *(_DWORD *)(v118 + 52) = v200;
        *(_DWORD *)(v118 + 56) = v201;
        *(_DWORD *)(v118 + 60) = v202;
      v95 = MatrixStack::MatrixStackRef::operator->((int)&v184);
      v203 = 45.0;
      glm::rotate<float>((int)&v187, v95, (int)&v203, (int)&v185);
      *(_DWORD *)v95 = v187;
      *(_DWORD *)(v95 + 4) = v188;
      *(_DWORD *)(v95 + 8) = v189;
      *(_DWORD *)(v95 + 12) = v190;
      *(_DWORD *)(v95 + 16) = v191;
      *(_DWORD *)(v95 + 20) = v192;
      *(_DWORD *)(v95 + 24) = v193;
      *(_DWORD *)(v95 + 28) = v194;
      *(_DWORD *)(v95 + 32) = v195;
      *(_DWORD *)(v95 + 36) = v196;
      *(_DWORD *)(v95 + 40) = v197;
      *(_DWORD *)(v95 + 44) = v198;
      *(_DWORD *)(v95 + 48) = v199;
      *(_DWORD *)(v95 + 52) = v200;
      *(_DWORD *)(v95 + 56) = v201;
      *(_DWORD *)(v95 + 60) = v202;
      v96 = MatrixStack::MatrixStackRef::operator->((int)&v184);
      __asm { VMOV.F32        S26, #-20.0 }
        VMUL.F32        S0, S24, S26
      glm::rotate<float>((int)&v187, v96, (int)&v203, (int)&v185);
      *(_DWORD *)v96 = v187;
      *(_DWORD *)(v96 + 4) = v188;
      *(_DWORD *)(v96 + 8) = v189;
      *(_DWORD *)(v96 + 12) = v190;
      *(_DWORD *)(v96 + 16) = v191;
      *(_DWORD *)(v96 + 20) = v192;
      *(_DWORD *)(v96 + 24) = v193;
      *(_DWORD *)(v96 + 28) = v194;
      *(_DWORD *)(v96 + 32) = v195;
      *(_DWORD *)(v96 + 36) = v196;
      *(_DWORD *)(v96 + 40) = v197;
      *(_DWORD *)(v96 + 44) = v198;
      *(_DWORD *)(v96 + 48) = v199;
      *(_DWORD *)(v96 + 52) = v200;
      *(_DWORD *)(v96 + 56) = v201;
      *(_DWORD *)(v96 + 60) = v202;
      v97 = MatrixStack::MatrixStackRef::operator->((int)&v184);
      __asm { VMUL.F32        S0, S20, S26 }
      v94 = 0;
      glm::rotate<float>((int)&v187, v97, (int)&v203, (int)&v185);
      *(_DWORD *)v97 = v187;
      *(_DWORD *)(v97 + 4) = v188;
      *(_DWORD *)(v97 + 8) = v189;
      *(_DWORD *)(v97 + 12) = v190;
      *(_DWORD *)(v97 + 16) = v191;
      *(_DWORD *)(v97 + 20) = v192;
      *(_DWORD *)(v97 + 24) = v193;
      *(_DWORD *)(v97 + 28) = v194;
      *(_DWORD *)(v97 + 32) = v195;
      *(_DWORD *)(v97 + 36) = v196;
      *(_DWORD *)(v97 + 40) = v197;
      *(_DWORD *)(v97 + 44) = v198;
      *(_DWORD *)(v97 + 48) = v199;
      *(_DWORD *)(v97 + 52) = v200;
      *(_DWORD *)(v97 + 56) = v201;
      *(_DWORD *)(v97 + 60) = v202;
      v98 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        VLDR            S0, =-80.0
        VMUL.F32        S0, S20, S0
      glm::rotate<float>((int)&v187, v98, (int)&v203, (int)&v185);
      *(_DWORD *)v98 = v187;
      *(_DWORD *)(v98 + 4) = v188;
      *(_DWORD *)(v98 + 8) = v189;
      *(_DWORD *)(v98 + 12) = v190;
      *(_DWORD *)(v98 + 16) = v191;
      *(_DWORD *)(v98 + 20) = v192;
      *(_DWORD *)(v98 + 24) = v193;
      *(_DWORD *)(v98 + 28) = v194;
      *(_DWORD *)(v98 + 32) = v195;
      *(_DWORD *)(v98 + 36) = v196;
      *(_DWORD *)(v98 + 40) = v197;
      *(_DWORD *)(v98 + 44) = v198;
      *(_DWORD *)(v98 + 48) = v199;
      *(_DWORD *)(v98 + 52) = v200;
      *(_DWORD *)(v98 + 56) = v201;
      *(_DWORD *)(v98 + 60) = v202;
      VLDR            S0, =0.4
      VLDR            S2, [R0]
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
    if ( v182 >= 1 )
      v100 = ItemInstance::getUseAnimation((ItemInHandRenderer *)((char *)_R5 + 40));
      if ( v100 == 5 )
        _R4 = ItemInstance::getMaxUseDuration((ItemInHandRenderer *)((char *)_R5 + 40));
        _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v10 + 916))(v10);
          VMOV            S0, R4
          VLDR            S4, =0.1
          VMOV            S2, R0
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S2, S2
          VADD.F32        S0, S0, S18
          VSUB.F32        S0, S0, S2
          VLDR            S2, [R9,#4]
          VADD.F32        S0, S0, S2
          VLDR            S2, =0.05
          VMUL.F32        S2, S0, S2
          VMUL.F32        S0, S0, S4
          VMUL.F32        S2, S2, S2
          VADD.F32        S0, S2, S0
          VLDR            S2, =0.33333
          VMUL.F32        S18, S0, S2
          VCMPE.F32       S18, S16
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S18, S16 }
        v110 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        __asm { VSUB.F32        S0, S16, S18 }
        _R0 = &unk_27D13E0;
          VMUL.F32        S2, S0, S0
          VMUL.F32        S0, S2, S0
          VSUB.F32        S16, S16, S0
          VLDR            S0, [R0,#0x10]
          VMUL.F32        S0, S0, S16
          VSTR            S0, [SP,#0xF8+var_B0]
        glm::rotate<float>((int)&v187, v110, (int)&v185, (int)Vec3::UNIT_X);
        *(_DWORD *)v110 = v187;
        *(_DWORD *)(v110 + 4) = v188;
        *(_DWORD *)(v110 + 8) = v189;
        *(_DWORD *)(v110 + 12) = v190;
        *(_DWORD *)(v110 + 16) = v191;
        *(_DWORD *)(v110 + 20) = v192;
        *(_DWORD *)(v110 + 24) = v193;
        *(_DWORD *)(v110 + 28) = v194;
        *(_DWORD *)(v110 + 32) = v195;
        *(_DWORD *)(v110 + 36) = v196;
        *(_DWORD *)(v110 + 40) = v197;
        *(_DWORD *)(v110 + 44) = v198;
        *(_DWORD *)(v110 + 48) = v199;
        *(_DWORD *)(v110 + 52) = v200;
        *(_DWORD *)(v110 + 56) = v201;
        *(_DWORD *)(v110 + 60) = v202;
        v112 = MatrixStack::MatrixStackRef::operator->((int)&v184);
          VLDR            S0, [R0,#0x14]
        glm::rotate<float>((int)&v187, v112, (int)&v185, (int)&Vec3::UNIT_Y);
        *(_DWORD *)v112 = v187;
        *(_DWORD *)(v112 + 4) = v188;
        *(_DWORD *)(v112 + 8) = v189;
        *(_DWORD *)(v112 + 12) = v190;
        *(_DWORD *)(v112 + 16) = v191;
        *(_DWORD *)(v112 + 20) = v192;
        *(_DWORD *)(v112 + 24) = v193;
        *(_DWORD *)(v112 + 28) = v194;
        *(_DWORD *)(v112 + 32) = v195;
        *(_DWORD *)(v112 + 36) = v196;
        *(_DWORD *)(v112 + 40) = v197;
        *(_DWORD *)(v112 + 44) = v198;
        *(_DWORD *)(v112 + 48) = v199;
        *(_DWORD *)(v112 + 52) = v200;
        *(_DWORD *)(v112 + 56) = v201;
        *(_DWORD *)(v112 + 60) = v202;
        v114 = MatrixStack::MatrixStackRef::operator->((int)&v184);
          VLDR            S0, [R0,#0x18]
        glm::rotate<float>((int)&v187, v114, (int)&v185, (int)&Vec3::UNIT_Z);
        *(_DWORD *)v114 = v187;
        *(_DWORD *)(v114 + 4) = v188;
        *(_DWORD *)(v114 + 8) = v189;
        *(_DWORD *)(v114 + 12) = v190;
        *(_DWORD *)(v114 + 16) = v191;
        *(_DWORD *)(v114 + 20) = v192;
        *(_DWORD *)(v114 + 24) = v193;
        *(_DWORD *)(v114 + 28) = v194;
        *(_DWORD *)(v114 + 32) = v195;
        *(_DWORD *)(v114 + 36) = v196;
        *(_DWORD *)(v114 + 40) = v197;
        *(_DWORD *)(v114 + 44) = v198;
        *(_DWORD *)(v114 + 48) = v199;
        *(_DWORD *)(v114 + 52) = v200;
        *(_DWORD *)(v114 + 56) = v201;
        *(_DWORD *)(v114 + 60) = v202;
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        __asm { VLDR            S0, [R0] }
        _R1 = &unk_27D13E0;
          VLDR            S2, [R0,#4]
          VLDR            S14, [R0,#0x14]
          VLDR            S8, [R1,#0x1C]
          VLDR            S10, [R1,#0x20]
          VLDR            S1, [R0,#0x10]
          VMUL.F32        S0, S0, S8
          VMUL.F32        S2, S2, S8
          VMUL.F32        S14, S14, S10
          VLDR            S3, [R0,#0x18]
          VMUL.F32        S1, S1, S10
          VLDR            S5, [R0,#0x1C]
          VMUL.F32        S6, S6, S8
          VMUL.F32        S4, S4, S8
          VLDR            S12, [R1,#0x24]
          VMUL.F32        S3, S3, S10
          VLDR            S7, [R0,#0x20]
          VMUL.F32        S10, S5, S10
          VLDR            S8, [R0,#0x24]
          VMUL.F32        S5, S7, S12
          VLDR            S7, [R0,#0x28]
          VADD.F32        S2, S14, S2
          VLDR            S14, [R0,#0x2C]
          VADD.F32        S0, S1, S0
          VMUL.F32        S8, S8, S12
          VMUL.F32        S1, S7, S12
          VADD.F32        S4, S3, S4
          VADD.F32        S6, S10, S6
          VLDR            S10, [R0,#0x34]
          VMUL.F32        S12, S14, S12
          VADD.F32        S0, S0, S5
          VADD.F32        S2, S2, S8
          VLDR            S8, [R0,#0x30]
          VADD.F32        S4, S4, S1
          VADD.F32        S6, S6, S12
          VLDR            S12, [R0,#0x38]
          VADD.F32        S0, S0, S8
          VLDR            S8, [R0,#0x3C]
          VADD.F32        S2, S2, S10
          VADD.F32        S4, S4, S12
          VADD.F32        S6, S6, S8
          VSTR            S0, [R0,#0x30]
          VSTR            S2, [R0,#0x34]
          VSTR            S4, [R0,#0x38]
          VSTR            S6, [R0,#0x3C]
      else if ( v100 == 4 )
        if ( !v94 )
          v101 = MatrixStack::MatrixStackRef::operator->((int)&v184);
          v185 = 0;
          v186 = 4575657221408423936LL;
          v203 = -18.0;
          glm::rotate<float>((int)&v187, v101, (int)&v203, (int)&v185);
          *(_DWORD *)v101 = v187;
          *(_DWORD *)(v101 + 4) = v188;
          *(_DWORD *)(v101 + 8) = v189;
          *(_DWORD *)(v101 + 12) = v190;
          *(_DWORD *)(v101 + 16) = v191;
          *(_DWORD *)(v101 + 20) = v192;
          *(_DWORD *)(v101 + 24) = v193;
          *(_DWORD *)(v101 + 28) = v194;
          *(_DWORD *)(v101 + 32) = v195;
          *(_DWORD *)(v101 + 36) = v196;
          *(_DWORD *)(v101 + 40) = v197;
          *(_DWORD *)(v101 + 44) = v198;
          *(_DWORD *)(v101 + 48) = v199;
          *(_DWORD *)(v101 + 52) = v200;
          *(_DWORD *)(v101 + 56) = v201;
          *(_DWORD *)(v101 + 60) = v202;
          v102 = MatrixStack::MatrixStackRef::operator->((int)&v184);
          v186 = 1065353216LL;
          v203 = -12.0;
          glm::rotate<float>((int)&v187, v102, (int)&v203, (int)&v185);
          *(_DWORD *)v102 = v187;
          *(_DWORD *)(v102 + 4) = v188;
          *(_DWORD *)(v102 + 8) = v189;
          *(_DWORD *)(v102 + 12) = v190;
          *(_DWORD *)(v102 + 16) = v191;
          *(_DWORD *)(v102 + 20) = v192;
          *(_DWORD *)(v102 + 24) = v193;
          *(_DWORD *)(v102 + 28) = v194;
          *(_DWORD *)(v102 + 32) = v195;
          *(_DWORD *)(v102 + 36) = v196;
          *(_DWORD *)(v102 + 40) = v197;
          *(_DWORD *)(v102 + 44) = v198;
          *(_DWORD *)(v102 + 48) = v199;
          *(_DWORD *)(v102 + 52) = v200;
          *(_DWORD *)(v102 + 56) = v201;
          *(_DWORD *)(v102 + 60) = v202;
          v103 = MatrixStack::MatrixStackRef::operator->((int)&v184);
          v185 = 1065353216;
          v186 = 0LL;
          v203 = -8.0;
          glm::rotate<float>((int)&v187, v103, (int)&v203, (int)&v185);
          *(_DWORD *)v103 = v187;
          *(_DWORD *)(v103 + 4) = v188;
          *(_DWORD *)(v103 + 8) = v189;
          *(_DWORD *)(v103 + 12) = v190;
          *(_DWORD *)(v103 + 16) = v191;
          *(_DWORD *)(v103 + 20) = v192;
          *(_DWORD *)(v103 + 24) = v193;
          *(_DWORD *)(v103 + 28) = v194;
          *(_DWORD *)(v103 + 32) = v195;
          *(_DWORD *)(v103 + 36) = v196;
          *(_DWORD *)(v103 + 40) = v197;
          *(_DWORD *)(v103 + 44) = v198;
          *(_DWORD *)(v103 + 48) = v199;
          *(_DWORD *)(v103 + 52) = v200;
          *(_DWORD *)(v103 + 56) = v201;
          *(_DWORD *)(v103 + 60) = v202;
          v104 = ClientInstance::getHoloInput(*((ClientInstance **)_R5 + 28));
          (*(void (**)(void))(*(_DWORD *)v104 + 44))();
            VLDR            S24, =0.2
            VLDR            S20, =-0.9
          if ( _ZF )
            _R4 = mce::Singleton<mce::RendererSettings>::mInstance;
            v106 = BaseEntityRenderContext::getScreenContext(_R9);
            _R0 = GuiData::getScreenSizeData(*(GuiData **)(v106 + 24));
            __asm
            {
              VLDR            S0, [R4,#0x14]
              VLDR            S2, [R4,#0x18]
              VLDR            S4, [R0,#8]
              VLDR            S6, [R0,#0xC]
              VDIV.F32        S2, S0, S2
              VDIV.F32        S4, S4, S6
              VDIV.F32        S0, S4, S2
              VCMPE.F32       S4, S2
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _NF ^ _VF )
              __asm
              {
                VLDR            S2, =-0.9
                VMUL.F32        S20, S0, S2
              }
            else
                VSUB.F32        S0, S16, S0
                VLDR            S2, =0.2
                VMUL.F32        S0, S0, S22
                VADD.F32        S24, S0, S2
          _R0 = MatrixStack::MatrixStackRef::operator->((int)&v184);
            VLDR            S0, [R0,#4]
            VLDR            S2, [R0,#8]
            VLDR            S4, [R0,#0xC]
            VMUL.F32        S0, S0, S20
            VLDR            S6, [R0,#0x10]
            VMUL.F32        S2, S2, S20
            VLDR            S8, [R0,#0x14]
            VMUL.F32        S4, S4, S20
            VLDR            S10, [R0,#0x18]
            VMUL.F32        S6, S6, S24
            VLDR            S12, [R0,#0x1C]
            VMUL.F32        S8, S8, S24
            VLDR            S14, [R0]
            VMUL.F32        S10, S10, S24
            VMUL.F32        S12, S12, S24
            VMUL.F32        S14, S14, S20
            VADD.F32        S0, S8, S0
            VLDR            S8, [R0,#0x30]
            VADD.F32        S2, S10, S2
            VLDR            S10, [R0,#0x34]
            VADD.F32        S4, S12, S4
            VLDR            S12, [R0,#0x38]
            VADD.F32        S6, S6, S14
            VLDR            S14, [R0,#0x3C]
            VADD.F32        S0, S0, S10
            VADD.F32        S2, S2, S12
            VADD.F32        S4, S4, S14
            VADD.F32        S6, S6, S8
            VSTR            S6, [R0,#0x30]
            VSTR            S0, [R0,#0x34]
            VSTR            S2, [R0,#0x38]
            VSTR            S4, [R0,#0x3C]
          VLDR            S20, =0.1
          VADD.F32        S22, S0, S2
          VLDR            S0, =0.05
          VMUL.F32        S0, S22, S0
          VMUL.F32        S2, S22, S20
          VMUL.F32        S0, S0, S0
          VCMPE.F32       S18, S20
          _R4 = MatrixStack::MatrixStackRef::operator->((int)&v184);
            VLDR            S24, =-0.1
            VLDR            S2, =1.3
            VADD.F32        S0, S22, S24
            VMUL.F32        S0, S0, S2
            VMOV            R0, S0
          _R0 = mce::Math::sin(_R0, v124);
            VADD.F32        S2, S18, S24
            VLDR            S4, =0.01
            VMOV            S0, R0
            VLDR            S6, [R4,#0x1C]
            VLDR            S8, [R4,#0x10]
            VLDR            S10, [R4,#0x34]
            VLDR            S12, [R4,#0x38]
            VLDR            S14, [R4,#0x3C]
            VMUL.F32        S2, S2, S4
            VLDR            S4, [R4,#0x18]
            VMUL.F32        S0, S2, S0
            VLDR            S2, [R4,#0x14]
            VMUL.F32        S2, S2, S0
            VMUL.F32        S4, S4, S0
            VMUL.F32        S8, S8, S0
            VMUL.F32        S0, S6, S0
            VLDR            S6, [R4,#0x30]
            VADD.F32        S0, S14, S0
            VSTR            S6, [R4,#0x30]
            VSTR            S2, [R4,#0x34]
            VSTR            S4, [R4,#0x38]
            VSTR            S0, [R4,#0x3C]
            VMUL.F32        S0, S18, S20
            VLDR            S2, [R0,#0x20]
            VLDR            S4, [R0,#0x24]
            VLDR            S6, [R0,#0x28]
            VLDR            S8, [R0,#0x2C]
            VLDR            S10, [R0,#0x30]
            VLDR            S12, [R0,#0x34]
            VLDR            S14, [R0,#0x38]
            VLDR            S1, [R0,#0x3C]
            VMUL.F32        S6, S6, S0
            VMUL.F32        S0, S8, S0
            VADD.F32        S6, S14, S6
            VADD.F32        S0, S1, S0
            VSTR            S2, [R0,#0x30]
            VSTR            S4, [R0,#0x34]
            VSTR            S6, [R0,#0x38]
            VSTR            S0, [R0,#0x3C]
        v127 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        v203 = -335.0;
        glm::rotate<float>((int)&v187, v127, (int)&v203, (int)&v185);
        *(_DWORD *)v127 = v187;
        *(_DWORD *)(v127 + 4) = v188;
        *(_DWORD *)(v127 + 8) = v189;
        *(_DWORD *)(v127 + 12) = v190;
        *(_DWORD *)(v127 + 16) = v191;
        *(_DWORD *)(v127 + 20) = v192;
        *(_DWORD *)(v127 + 24) = v193;
        *(_DWORD *)(v127 + 28) = v194;
        *(_DWORD *)(v127 + 32) = v195;
        *(_DWORD *)(v127 + 36) = v196;
        *(_DWORD *)(v127 + 40) = v197;
        *(_DWORD *)(v127 + 44) = v198;
        *(_DWORD *)(v127 + 48) = v199;
        *(_DWORD *)(v127 + 52) = v200;
        *(_DWORD *)(v127 + 56) = v201;
        *(_DWORD *)(v127 + 60) = v202;
        v128 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        v203 = -50.0;
        glm::rotate<float>((int)&v187, v128, (int)&v203, (int)&v185);
        *(_DWORD *)v128 = v187;
        *(_DWORD *)(v128 + 4) = v188;
        *(_DWORD *)(v128 + 8) = v189;
        *(_DWORD *)(v128 + 12) = v190;
        *(_DWORD *)(v128 + 16) = v191;
        *(_DWORD *)(v128 + 20) = v192;
        *(_DWORD *)(v128 + 24) = v193;
        *(_DWORD *)(v128 + 28) = v194;
        *(_DWORD *)(v128 + 32) = v195;
        *(_DWORD *)(v128 + 36) = v196;
        *(_DWORD *)(v128 + 40) = v197;
        *(_DWORD *)(v128 + 44) = v198;
        *(_DWORD *)(v128 + 48) = v199;
        *(_DWORD *)(v128 + 52) = v200;
        *(_DWORD *)(v128 + 56) = v201;
        *(_DWORD *)(v128 + 60) = v202;
          VMOV.F32        S20, #0.5
          VLDR            S2, [R0,#0x18]
          VLDR            S4, [R0,#0x1C]
          VLDR            S6, [R0,#0x10]
          VMUL.F32        S6, S6, S20
          VLDR            S14, [R0,#0x3C]
          VMUL.F32        S0, S0, S20
          VMUL.F32        S2, S2, S20
          VMUL.F32        S4, S4, S20
          VADD.F32        S6, S8, S6
          VADD.F32        S0, S10, S0
          VADD.F32        S2, S12, S2
          VADD.F32        S4, S14, S4
          VSTR            S6, [R0,#0x30]
          VSTR            S0, [R0,#0x34]
          VSTR            S2, [R0,#0x38]
          VSTR            S4, [R0,#0x3C]
          VLDR            S0, =0.2
          VLDR            S2, [R0,#0x20]
          VMUL.F32        S0, S18, S0
          VADD.F32        S0, S0, S16
          VMUL.F32        S2, S2, S0
          VSTR            S2, [R0,#0x20]
          VLDR            S2, [R0,#0x24]
          VSTR            S2, [R0,#0x24]
          VLDR            S2, [R0,#0x28]
          VSTR            S2, [R0,#0x28]
          VLDR            S2, [R0,#0x2C]
          VSTR            S0, [R0,#0x2C]
          VSUB.F32        S0, S10, S0
          VSUB.F32        S2, S12, S2
          VSUB.F32        S4, S14, S4
          VSUB.F32        S6, S8, S6
        v132 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        v203 = 50.0;
        glm::rotate<float>((int)&v187, v132, (int)&v203, (int)&v185);
        *(_DWORD *)v132 = v187;
        *(_DWORD *)(v132 + 4) = v188;
        *(_DWORD *)(v132 + 8) = v189;
        *(_DWORD *)(v132 + 12) = v190;
        *(_DWORD *)(v132 + 16) = v191;
        *(_DWORD *)(v132 + 20) = v192;
        *(_DWORD *)(v132 + 24) = v193;
        *(_DWORD *)(v132 + 28) = v194;
        *(_DWORD *)(v132 + 32) = v195;
        *(_DWORD *)(v132 + 36) = v196;
        *(_DWORD *)(v132 + 40) = v197;
        *(_DWORD *)(v132 + 44) = v198;
        *(_DWORD *)(v132 + 48) = v199;
        *(_DWORD *)(v132 + 52) = v200;
        *(_DWORD *)(v132 + 56) = v201;
        *(_DWORD *)(v132 + 60) = v202;
        v133 = MatrixStack::MatrixStackRef::operator->((int)&v184);
        v203 = 335.0;
        glm::rotate<float>((int)&v187, v133, (int)&v203, (int)&v185);
        *(_DWORD *)v133 = v187;
        *(_DWORD *)(v133 + 4) = v188;
        *(_DWORD *)(v133 + 8) = v189;
        *(_DWORD *)(v133 + 12) = v190;
        *(_DWORD *)(v133 + 16) = v191;
        *(_DWORD *)(v133 + 20) = v192;
        *(_DWORD *)(v133 + 24) = v193;
        *(_DWORD *)(v133 + 28) = v194;
        *(_DWORD *)(v133 + 32) = v195;
        *(_DWORD *)(v133 + 36) = v196;
        *(_DWORD *)(v133 + 40) = v197;
        *(_DWORD *)(v133 + 44) = v198;
        *(_DWORD *)(v133 + 48) = v199;
        *(_DWORD *)(v133 + 52) = v200;
        *(_DWORD *)(v133 + 56) = v201;
        *(_DWORD *)(v133 + 60) = v202;
    v134 = (Options *)BaseEntityRenderContext::getOptions(_R9);
    if ( Options::getBobView(v134) == 1 )
      _R0 = getTimeS();
        VMOV            D0, R0, R1
        VCVT.F32.F64    S0, D0
        VADD.F32        S0, S0, S0
      _R4 = sinf(_R0);
        VMOV            S16, R4
        VLDR            S0, =0.011
        VLDR            S2, [R0,#0x14]
        VMUL.F32        S0, S16, S0
        VLDR            S4, [R0,#0x18]
        VLDR            S8, [R0,#0x10]
        VLDR            S6, [R0,#0x1C]
        VLDR            S6, [R0,#0x30]
        VSTR            S2, [R0,#0x34]
        VSTR            S4, [R0,#0x38]
        VSTR            S0, [R0,#0x3C]
      v139 = MatrixStack::MatrixStackRef::operator->((int)&v184);
      __asm { VLDR            S0, =0.297 }
      v185 = 1065353216;
      __asm { VMUL.F32        S0, S16, S0 }
      v186 = 0LL;
      glm::rotate<float>((int)&v187, v139, (int)&v203, (int)&v185);
      *(_DWORD *)v139 = v187;
      *(_DWORD *)(v139 + 4) = v188;
      *(_DWORD *)(v139 + 8) = v189;
      *(_DWORD *)(v139 + 12) = v190;
      *(_DWORD *)(v139 + 16) = v191;
      *(_DWORD *)(v139 + 20) = v192;
      *(_DWORD *)(v139 + 24) = v193;
      *(_DWORD *)(v139 + 28) = v194;
      *(_DWORD *)(v139 + 32) = v195;
      *(_DWORD *)(v139 + 36) = v196;
      *(_DWORD *)(v139 + 40) = v197;
      *(_DWORD *)(v139 + 44) = v198;
      *(_DWORD *)(v139 + 48) = v199;
      *(_DWORD *)(v139 + 52) = v200;
      *(_DWORD *)(v139 + 56) = v201;
      *(_DWORD *)(v139 + 60) = v202;
    if ( (*(int (**)(void))(**(_DWORD **)v22 + 256))() == 1 )
      v140 = MatrixStack::MatrixStackRef::operator->((int)&v184);
      v203 = 180.0;
      glm::rotate<float>((int)&v187, v140, (int)&v203, (int)&v185);
      *(_DWORD *)v140 = v187;
      *(_DWORD *)(v140 + 4) = v188;
      *(_DWORD *)(v140 + 8) = v189;
      *(_DWORD *)(v140 + 12) = v190;
      *(_DWORD *)(v140 + 16) = v191;
      *(_DWORD *)(v140 + 20) = v192;
      *(_DWORD *)(v140 + 24) = v193;
      *(_DWORD *)(v140 + 28) = v194;
      *(_DWORD *)(v140 + 32) = v195;
      *(_DWORD *)(v140 + 36) = v196;
      *(_DWORD *)(v140 + 40) = v197;
      *(_DWORD *)(v140 + 44) = v198;
      *(_DWORD *)(v140 + 48) = v199;
      *(_DWORD *)(v140 + 52) = v200;
      *(_DWORD *)(v140 + 56) = v201;
      *(_DWORD *)(v140 + 60) = v202;
    ItemInHandRenderer::renderItem(_R5, _R9, (Entity *)v10, (ItemInHandRenderer *)((char *)_R5 + 40), v181, v180, 1, 0);
  if ( *(_BYTE *)(v10 + 4312) || (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 172))(v10) )
  _R8 = (mce::Math *)(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v10 + 900))(v10, *((_DWORD *)_R9 + 1));
  __asm { VMOV            S18, R8 }
  _R7 = mce::Math::sqrt(_R8, v29);
  __asm { VMUL.F32        S0, S18, S18 }
  _R0 = &mce::Math::PI;
    VLDR            S20, [R0]
    VMUL.F32        S0, S0, S20
    VMOV            R0, S0
  v183 = mce::Math::sin(_R0, v33);
    VMUL.F32        S0, S20, S18
  _R4 = mce::Math::sin(_R0, v35);
    VMOV            S0, R7
    VMUL.F32        S0, S20, S0
  _R6 = mce::Math::sin(_R0, v38);
  _R7 = MatrixStack::MatrixStackRef::operator->((int)&v184);
  _R0 = mce::Math::sqrt(_R8, v41);
    VADD.F32        S2, S20, S20
    VMOV            S0, R0
    VMUL.F32        S0, S0, S2
  _R0 = mce::Math::sin(_R0, v44);
    VMOV            S20, R6
    VLDR            S2, =-0.3
    VLDR            S4, =0.4
    VMOV            S0, R4
    VMUL.F32        S24, S20, S2
    VLDR            S6, [R7]
    VMOV            S2, R0
    VLDR            S8, [R7,#4]
    VLDR            S14, [R7,#0x10]
    VMUL.F32        S2, S2, S4
    VLDR            S4, =-0.4
    VLDR            S10, [R7,#8]
    VMUL.F32        S0, S0, S4
    VLDR            S12, [R7,#0xC]
    VLDR            S1, [R7,#0x18]
    VMUL.F32        S4, S6, S24
    VLDR            S6, [R7,#0x14]
    VMUL.F32        S8, S8, S24
    VLDR            S3, [R7,#0x1C]
    VMUL.F32        S12, S12, S24
    VLDR            S5, [R7,#0x24]
    VMUL.F32        S6, S6, S2
    VLDR            S7, [R7,#0x20]
    VMUL.F32        S14, S14, S2
    VMUL.F32        S1, S1, S2
    VMUL.F32        S2, S3, S2
    VMUL.F32        S10, S10, S24
    VMUL.F32        S3, S5, S0
    VMUL.F32        S5, S7, S0
    VLDR            S7, [R7,#0x28]
    VADD.F32        S6, S6, S8
    VLDR            S8, [R7,#0x2C]
    VADD.F32        S4, S14, S4
    VMUL.F32        S14, S7, S0
    VADD.F32        S2, S2, S12
    VLDR            S12, [R7,#0x38]
    VMUL.F32        S0, S8, S0
    VADD.F32        S10, S1, S10
    VADD.F32        S6, S6, S3
    VADD.F32        S4, S4, S5
    VADD.F32        S0, S2, S0
    VLDR            S2, [R7,#0x30]
    VADD.F32        S8, S10, S14
    VLDR            S10, [R7,#0x34]
    VADD.F32        S6, S6, S10
    VADD.F32        S2, S4, S2
    VLDR            S4, [R7,#0x3C]
    VADD.F32        S0, S0, S4
    VADD.F32        S8, S8, S12
    VSTR            S2, [R7,#0x30]
    VSTR            S6, [R7,#0x34]
    VSTR            S8, [R7,#0x38]
    VSTR            S0, [R7,#0x3C]
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v184);
    VMOV.F32        S0, #-1.0
    VLDR            S2, =0.6
    VLDR            S6, [R0,#8]
    VLDR            S8, [R0,#0xC]
    VLDR            S10, [R0,#0x10]
    VLDR            S12, [R0,#0x14]
    VLDR            S14, [R0,#0x18]
    VLDR            S1, [R0,#0x1C]
    VADD.F32        S0, S22, S0
    VLDMIA          R0, {S3-S4}
    VLDR            S5, =-0.72
    VLDR            S7, [R0,#0x20]
    VLDR            S2, =-0.6
    VADD.F32        S0, S0, S2
    VLDR            S2, =0.64
    VMUL.F32        S3, S3, S2
    VMUL.F32        S4, S4, S2
    VMUL.F32        S8, S8, S2
    VMUL.F32        S2, S6, S2
    VLDR            S6, [R0,#0x24]
    VMUL.F32        S10, S10, S0
    VMUL.F32        S12, S12, S0
    VMUL.F32        S14, S14, S0
    VMUL.F32        S0, S1, S0
    VMUL.F32        S1, S7, S5
    VLDR            S7, [R0,#0x28]
    VMUL.F32        S6, S6, S5
    VADD.F32        S10, S10, S3
    VADD.F32        S4, S12, S4
    VLDR            S12, [R0,#0x2C]
    VMUL.F32        S3, S7, S5
    VADD.F32        S2, S14, S2
    VADD.F32        S0, S0, S8
    VMUL.F32        S12, S12, S5
    VADD.F32        S8, S10, S1
    VLDR            S10, [R0,#0x34]
    VADD.F32        S4, S4, S6
    VLDR            S6, [R0,#0x30]
    VADD.F32        S2, S2, S3
    VADD.F32        S0, S0, S12
    VLDR            S12, [R0,#0x38]
    VADD.F32        S6, S8, S6
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S4, S4, S10
    VSTR            S6, [R0,#0x30]
    VSTR            S4, [R0,#0x34]
    VSTR            S2, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
  if ( BaseEntityRenderContext::isRealityFullVRMode(_R9) == 1 )
    v48 = (Options *)BaseEntityRenderContext::getOptions(_R9);
    if ( Options::getVRHandControlsItem(v48) == 1 )
      if ( *(_BYTE *)(ClientInstance::getHoloInput(*((ClientInstance **)_R5 + 28)) + 661) )
        ItemInHandRenderer::_adjustHandPositionForVR(_R5, (MatrixStack::MatrixStackRef *)&v184, 0, 0.0);
          VMOV.F32        S0, #0.5
          VLDR            S2, [R0]
        v50 = 1;
          VSTR            S2, [R0]
          VSTR            S2, [R0,#4]
          VLDR            S2, [R0,#8]
          VSTR            S2, [R0,#8]
          VLDR            S2, [R0,#0xC]
          VSTR            S2, [R0,#0xC]
          VLDR            S2, [R0,#0x10]
          VSTR            S2, [R0,#0x10]
          VLDR            S2, [R0,#0x14]
          VSTR            S2, [R0,#0x14]
          VSTR            S2, [R0,#0x18]
          VLDR            S2, [R0,#0x1C]
          VSTR            S2, [R0,#0x1C]
        v50 = 0;
      v50 = 0;
  else
    v50 = 0;
  v150 = MatrixStack::MatrixStackRef::operator->((int)&v184);
  _R0 = v183;
  __asm { VMOV            S22, R0 }
  v185 = 0;
  v186 = 1065353216LL;
  v203 = 45.0;
  glm::rotate<float>((int)&v187, v150, (int)&v203, (int)&v185);
  *(_DWORD *)v150 = v187;
  *(_DWORD *)(v150 + 4) = v188;
  *(_DWORD *)(v150 + 8) = v189;
  *(_DWORD *)(v150 + 12) = v190;
  *(_DWORD *)(v150 + 16) = v191;
  *(_DWORD *)(v150 + 20) = v192;
  *(_DWORD *)(v150 + 24) = v193;
  *(_DWORD *)(v150 + 28) = v194;
  *(_DWORD *)(v150 + 32) = v195;
  *(_DWORD *)(v150 + 36) = v196;
  *(_DWORD *)(v150 + 40) = v197;
  *(_DWORD *)(v150 + 44) = v198;
  *(_DWORD *)(v150 + 48) = v199;
  *(_DWORD *)(v150 + 52) = v200;
  *(_DWORD *)(v150 + 56) = v201;
  *(_DWORD *)(v150 + 60) = v202;
  if ( v50 == 1 )
    v152 = MatrixStack::MatrixStackRef::operator->((int)&v184);
    v185 = 0;
    v186 = 1065353216LL;
    v203 = 40.0;
    glm::rotate<float>((int)&v187, v152, (int)&v203, (int)&v185);
    *(_DWORD *)v152 = v187;
    *(_DWORD *)(v152 + 4) = v188;
    *(_DWORD *)(v152 + 8) = v189;
    *(_DWORD *)(v152 + 12) = v190;
    *(_DWORD *)(v152 + 16) = v191;
    *(_DWORD *)(v152 + 20) = v192;
    *(_DWORD *)(v152 + 24) = v193;
    *(_DWORD *)(v152 + 28) = v194;
    *(_DWORD *)(v152 + 32) = v195;
    *(_DWORD *)(v152 + 36) = v196;
    *(_DWORD *)(v152 + 40) = v197;
    *(_DWORD *)(v152 + 44) = v198;
    *(_DWORD *)(v152 + 48) = v199;
    *(_DWORD *)(v152 + 52) = v200;
    *(_DWORD *)(v152 + 56) = v201;
    *(_DWORD *)(v152 + 60) = v202;
    v153 = MatrixStack::MatrixStackRef::operator->((int)&v184);
    v186 = 4575657221408423936LL;
    v203 = 10.0;
    glm::rotate<float>((int)&v187, v153, (int)&v203, (int)&v185);
    *(_DWORD *)v153 = v187;
    *(_DWORD *)(v153 + 4) = v188;
    *(_DWORD *)(v153 + 8) = v189;
    *(_DWORD *)(v153 + 12) = v190;
    *(_DWORD *)(v153 + 16) = v191;
    *(_DWORD *)(v153 + 20) = v192;
    *(_DWORD *)(v153 + 24) = v193;
    *(_DWORD *)(v153 + 28) = v194;
    *(_DWORD *)(v153 + 32) = v195;
    *(_DWORD *)(v153 + 36) = v196;
    *(_DWORD *)(v153 + 40) = v197;
    *(_DWORD *)(v153 + 44) = v198;
    *(_DWORD *)(v153 + 48) = v199;
    *(_DWORD *)(v153 + 52) = v200;
    *(_DWORD *)(v153 + 56) = v201;
    *(_DWORD *)(v153 + 60) = v202;
    _R7 = MatrixStack::MatrixStackRef::operator->((int)&v184);
    _R0 = mce::Math::sqrt(_R8, v155);
    __asm { VMOV            S0, R0 }
      VADD.F32        S2, S2, S2
      VMUL.F32        S0, S0, S2
    _R0 = mce::Math::sin(_R0, v159);
      VLDR            S0, =0.9
      VLDR            S4, =0.3
      VMUL.F32        S0, S20, S0
      VLDR            S8, [R7,#0xC]
      VMUL.F32        S2, S2, S4
      VLDR            S10, [R7,#0x10]
      VLDR            S12, [R7,#0x14]
      VLDR            S14, [R7,#0x18]
      VLDR            S6, [R7,#8]
      VLDR            S1, [R7,#0x1C]
      VLDMIA          R7, {S3-S4}
      VMUL.F32        S8, S8, S0
      VMUL.F32        S3, S3, S0
      VLDR            S5, [R7,#0x20]
      VMUL.F32        S10, S10, S2
      VMUL.F32        S4, S4, S0
      VMUL.F32        S12, S12, S2
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R7,#0x24]
      VMUL.F32        S14, S14, S2
      VMUL.F32        S2, S1, S2
      VMUL.F32        S1, S5, S24
      VLDR            S5, [R7,#0x28]
      VMUL.F32        S6, S6, S24
      VLDR            S12, [R7,#0x2C]
      VMUL.F32        S3, S5, S24
      VADD.F32        S0, S14, S0
      VADD.F32        S2, S2, S8
      VMUL.F32        S12, S12, S24
      VLDR            S10, [R7,#0x34]
      VLDR            S6, [R7,#0x30]
      VADD.F32        S0, S0, S3
      VLDR            S12, [R7,#0x38]
      VLDR            S8, [R7,#0x3C]
      VSTR            S6, [R7,#0x30]
      VSTR            S4, [R7,#0x34]
      VSTR            S0, [R7,#0x38]
      VSTR            S2, [R7,#0x3C]
    v162 = MatrixStack::MatrixStackRef::operator->((int)&v184);
    __asm { VMOV.F32        S24, #20.0 }
      VMUL.F32        S0, S22, S24
      VSTR            S0, [SP,#0xF8+var_64]
    glm::rotate<float>((int)&v187, v162, (int)&v203, (int)&v185);
    *(_DWORD *)v162 = v187;
    *(_DWORD *)(v162 + 4) = v188;
    *(_DWORD *)(v162 + 8) = v189;
    *(_DWORD *)(v162 + 12) = v190;
    *(_DWORD *)(v162 + 16) = v191;
    *(_DWORD *)(v162 + 20) = v192;
    *(_DWORD *)(v162 + 24) = v193;
    *(_DWORD *)(v162 + 28) = v194;
    *(_DWORD *)(v162 + 32) = v195;
    *(_DWORD *)(v162 + 36) = v196;
    *(_DWORD *)(v162 + 40) = v197;
    *(_DWORD *)(v162 + 44) = v198;
    *(_DWORD *)(v162 + 48) = v199;
    *(_DWORD *)(v162 + 52) = v200;
    *(_DWORD *)(v162 + 56) = v201;
    *(_DWORD *)(v162 + 60) = v202;
    v163 = MatrixStack::MatrixStackRef::operator->((int)&v184);
    __asm { VMOV.F32        S0, #-30.0 }
    glm::rotate<float>((int)&v187, v163, (int)&v203, (int)&v185);
    *(_DWORD *)v163 = v187;
    *(_DWORD *)(v163 + 4) = v188;
    *(_DWORD *)(v163 + 8) = v189;
    *(_DWORD *)(v163 + 12) = v190;
    *(_DWORD *)(v163 + 16) = v191;
    *(_DWORD *)(v163 + 20) = v192;
    *(_DWORD *)(v163 + 24) = v193;
    *(_DWORD *)(v163 + 28) = v194;
    *(_DWORD *)(v163 + 32) = v195;
    *(_DWORD *)(v163 + 36) = v196;
    *(_DWORD *)(v163 + 40) = v197;
    *(_DWORD *)(v163 + 44) = v198;
    *(_DWORD *)(v163 + 48) = v199;
    *(_DWORD *)(v163 + 52) = v200;
    *(_DWORD *)(v163 + 56) = v201;
    *(_DWORD *)(v163 + 60) = v202;
      VLDR            S0, =0.45
      VLDR            S4, [R0,#8]
      VLDR            S8, [R0]
      VLDR            S6, [R0,#0xC]
      VLDR            S14, [R0,#0x3C]
      VSUB.F32        S2, S10, S2
      VSUB.F32        S4, S12, S4
      VSUB.F32        S6, S6, S8
      VLDR            S8, =0.01
      VSUB.F32        S0, S14, S0
      VCMPE.F32       S18, S8
      VMRS            APSR_nzcv, FPSCR
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      goto LABEL_93;
    v165 = MatrixStack::MatrixStackRef::operator->((int)&v184);
      VSUB.F32        S0, S16, S18
      VLDR            S2, =40.0
      VADD.F32        S0, S0, S24
    glm::rotate<float>((int)&v187, v165, (int)&v203, (int)&v185);
    *(_DWORD *)v165 = v187;
    *(_DWORD *)(v165 + 4) = v188;
    *(_DWORD *)(v165 + 8) = v189;
    *(_DWORD *)(v165 + 12) = v190;
    *(_DWORD *)(v165 + 16) = v191;
    *(_DWORD *)(v165 + 20) = v192;
    *(_DWORD *)(v165 + 24) = v193;
    *(_DWORD *)(v165 + 28) = v194;
    *(_DWORD *)(v165 + 32) = v195;
    *(_DWORD *)(v165 + 36) = v196;
    *(_DWORD *)(v165 + 40) = v197;
    *(_DWORD *)(v165 + 44) = v198;
    *(_DWORD *)(v165 + 48) = v199;
    *(_DWORD *)(v165 + 52) = v200;
    *(_DWORD *)(v165 + 56) = v201;
    *(_DWORD *)(v165 + 60) = v202;
    v166 = MatrixStack::MatrixStackRef::operator->((int)&v184);
    __asm { VMUL.F32        S0, S18, S24 }
    v167 = MatrixStack::MatrixStackRef::operator->((int)&v184);
      VLDR            S0, =70.0
    __asm { VSTR            S0, [SP,#0xF8+var_64] }
    glm::rotate<float>((int)&v187, v167, (int)&v203, (int)&v185);
    *(_DWORD *)v167 = v187;
    *(_DWORD *)(v167 + 4) = v188;
    *(_DWORD *)(v167 + 8) = v189;
    *(_DWORD *)(v167 + 12) = v190;
    *(_DWORD *)(v167 + 16) = v191;
    *(_DWORD *)(v167 + 20) = v192;
    *(_DWORD *)(v167 + 24) = v193;
    *(_DWORD *)(v167 + 28) = v194;
    *(_DWORD *)(v167 + 32) = v195;
    *(_DWORD *)(v167 + 36) = v196;
    *(_DWORD *)(v167 + 40) = v197;
    *(_DWORD *)(v167 + 44) = v198;
    *(_DWORD *)(v167 + 48) = v199;
    *(_DWORD *)(v167 + 52) = v200;
    *(_DWORD *)(v167 + 56) = v201;
    *(_DWORD *)(v167 + 60) = v202;
    __asm { VMOV.F32        S0, #-20.0 }
    __asm { VMUL.F32        S0, S22, S0 }
  __asm { VSTR            S0, [SP,#0xF8+var_64] }
  glm::rotate<float>((int)&v187, v166, (int)&v203, (int)&v185);
  *(_DWORD *)v166 = v187;
  *(_DWORD *)(v166 + 4) = v188;
  *(_DWORD *)(v166 + 8) = v189;
  *(_DWORD *)(v166 + 12) = v190;
  *(_DWORD *)(v166 + 16) = v191;
  *(_DWORD *)(v166 + 20) = v192;
  *(_DWORD *)(v166 + 24) = v193;
  *(_DWORD *)(v166 + 28) = v194;
  *(_DWORD *)(v166 + 32) = v195;
  *(_DWORD *)(v166 + 36) = v196;
  *(_DWORD *)(v166 + 40) = v197;
  *(_DWORD *)(v166 + 44) = v198;
  *(_DWORD *)(v166 + 48) = v199;
  *(_DWORD *)(v166 + 52) = v200;
  *(_DWORD *)(v166 + 56) = v201;
  *(_DWORD *)(v166 + 60) = v202;
LABEL_93:
    VLDR            S2, =3.6
    VMOV.F32        S0, #3.5
    VLDR            S12, [R0,#0x10]
    VLDR            S3, [R0,#0x14]
    VMUL.F32        S12, S12, S2
    VLDR            S4, [R0]
    VMUL.F32        S2, S1, S2
    VLDR            S5, [R0,#0x24]
    VLDR            S6, [R0,#4]
    VMUL.F32        S1, S5, S0
    VLDR            S8, [R0,#8]
    VSUB.F32        S4, S12, S4
    VLDR            S10, [R0,#0xC]
    VSUB.F32        S8, S14, S8
    VSUB.F32        S6, S3, S6
    VMUL.F32        S3, S7, S0
    VMUL.F32        S0, S12, S0
    VSUB.F32        S2, S2, S10
    VADD.F32        S6, S6, S1
    VADD.F32        S8, S8, S3
    VLDR            S2, [R0,#0x30]
    VLDR            S4, [R0,#0x3C]
    VSTR            S2, [R0,#0x30]
    VSTR            S6, [R0,#0x34]
    VSTR            S8, [R0,#0x38]
  v169 = MatrixStack::MatrixStackRef::operator->((int)&v184);
  v186 = 4575657221408423936LL;
  v203 = 120.0;
  glm::rotate<float>((int)&v187, v169, (int)&v203, (int)&v185);
  *(_DWORD *)v169 = v187;
  *(_DWORD *)(v169 + 4) = v188;
  *(_DWORD *)(v169 + 8) = v189;
  *(_DWORD *)(v169 + 12) = v190;
  *(_DWORD *)(v169 + 16) = v191;
  *(_DWORD *)(v169 + 20) = v192;
  *(_DWORD *)(v169 + 24) = v193;
  *(_DWORD *)(v169 + 28) = v194;
  *(_DWORD *)(v169 + 32) = v195;
  *(_DWORD *)(v169 + 36) = v196;
  *(_DWORD *)(v169 + 40) = v197;
  *(_DWORD *)(v169 + 44) = v198;
  *(_DWORD *)(v169 + 48) = v199;
  *(_DWORD *)(v169 + 52) = v200;
  *(_DWORD *)(v169 + 56) = v201;
  *(_DWORD *)(v169 + 60) = v202;
  v170 = MatrixStack::MatrixStackRef::operator->((int)&v184);
  *(_QWORD *)&v185 = 1065353216LL;
  v203 = 200.0;
  HIDWORD(v186) = 0;
  glm::rotate<float>((int)&v187, v170, (int)&v203, (int)&v185);
  *(_DWORD *)v170 = v187;
  *(_DWORD *)(v170 + 4) = v188;
  *(_DWORD *)(v170 + 8) = v189;
  *(_DWORD *)(v170 + 12) = v190;
  *(_DWORD *)(v170 + 16) = v191;
  *(_DWORD *)(v170 + 20) = v192;
  *(_DWORD *)(v170 + 24) = v193;
  *(_DWORD *)(v170 + 28) = v194;
  *(_DWORD *)(v170 + 32) = v195;
  *(_DWORD *)(v170 + 36) = v196;
  *(_DWORD *)(v170 + 40) = v197;
  *(_DWORD *)(v170 + 44) = v198;
  *(_DWORD *)(v170 + 48) = v199;
  *(_DWORD *)(v170 + 52) = v200;
  *(_DWORD *)(v170 + 56) = v201;
  *(_DWORD *)(v170 + 60) = v202;
  v171 = MatrixStack::MatrixStackRef::operator->((int)&v184);
  v203 = -135.0;
  glm::rotate<float>((int)&v187, v171, (int)&v203, (int)&v185);
  *(_DWORD *)v171 = v187;
  *(_DWORD *)(v171 + 4) = v188;
  *(_DWORD *)(v171 + 8) = v189;
  *(_DWORD *)(v171 + 12) = v190;
  *(_DWORD *)(v171 + 16) = v191;
  *(_DWORD *)(v171 + 20) = v192;
  *(_DWORD *)(v171 + 24) = v193;
  *(_DWORD *)(v171 + 28) = v194;
  *(_DWORD *)(v171 + 32) = v195;
  *(_DWORD *)(v171 + 36) = v196;
  *(_DWORD *)(v171 + 40) = v197;
  *(_DWORD *)(v171 + 44) = v198;
  *(_DWORD *)(v171 + 48) = v199;
  *(_DWORD *)(v171 + 52) = v200;
  *(_DWORD *)(v171 + 56) = v201;
  *(_DWORD *)(v171 + 60) = v202;
  MatrixStack::MatrixStackRef::operator->((int)&v184);
    VLDR            S0, =5.6
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VLDR            S8, [R0]
    VMUL.F32        S2, S2, S0
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S4, S4, S0
    VMUL.F32        S8, S8, S0
    VMUL.F32        S0, S6, S0
    VLDR            S14, [R0,#0x3C]
    VADD.F32        S2, S10, S2
    VADD.F32        S0, S14, S0
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
  v173 = (EntityRenderDispatcher *)BaseEntityRenderContext::getEntityRenderDispatcher(_R9);
  v174 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)_R5 + 28));
  v175 = (PlayerRenderer *)EntityRenderDispatcher::getRenderer(v173, v174);
  if ( v175 )
    MatrixStack::MatrixStackRef::operator->((int)&v184);
    PlayerRenderer::renderRightHand(v175, _R9, (Player *)v10);
LABEL_81:
  if ( *(_DWORD *)v22 )
      VLDR            S0, [R0]
      VLDR            S10, [R0,#0x20]
      VLDR            S8, [R0,#0x24]
      VADD.F32        S0, S10, S0
      VLDR            S12, [R0,#0x28]
      VADD.F32        S2, S8, S2
      VLDR            S10, [R0,#0x2C]
      VLDR            S8, =-0.3
      VADD.F32        S6, S10, S6
      VLDR            S10, =0.2
      VLDR            S12, [R0,#0x10]
      VLDR            S14, [R0,#0x14]
      VMUL.F32        S0, S0, S10
      VLDR            S1, [R0,#0x18]
      VMUL.F32        S12, S12, S8
      VLDR            S3, [R0,#0x1C]
      VMUL.F32        S14, S14, S8
      VMUL.F32        S2, S2, S10
      VMUL.F32        S1, S1, S8
      VMUL.F32        S4, S4, S10
      VMUL.F32        S6, S6, S10
      VMUL.F32        S8, S3, S8
      VADD.F32        S2, S2, S14
      VADD.F32        S4, S4, S1
      VADD.F32        S6, S6, S8
      VLDR            S8, [R0,#0x30]
      VADD.F32        S2, S2, S10
      VADD.F32        S4, S4, S12
      VSTR            S0, [R0,#0x30]
      VSTR            S6, [R0,#0x3C]
      VLDR            S0, =-0.4
      VLDR            S8, [R0,#0x10]
      VLDR            S3, =0.2
      VLDR            S10, [R0,#0x14]
      VLDR            S12, [R0,#0x18]
      VMUL.F32        S8, S8, S3
      VLDR            S14, [R0,#0x1C]
      VMUL.F32        S10, S10, S3
      VLDMIA          R0, {S1-S2}
      VMUL.F32        S12, S12, S3
      VMUL.F32        S1, S1, S0
      VMUL.F32        S6, S14, S3
      VADD.F32        S2, S10, S2
      VADD.F32        S8, S8, S1
      VADD.F32        S0, S6, S0
      VADD.F32        S0, S0, S14
  v144 = MatrixStack::MatrixStackRef::operator->((int)&v184);
  v145 = *(_QWORD *)(v144 + 48);
  v146 = *(_DWORD *)(v144 + 56);
  *(_QWORD *)(v10 + 4700) = v145;
  *(_DWORD *)(v10 + 4708) = v146;
  v147 = ClientInstance::getHoloInput(*((ClientInstance **)_R5 + 28));
  if ( !(*(int (**)(void))(*(_DWORD *)v147 + 44))() )
    v148 = *(_DWORD *)(BaseEntityRenderContext::getScreenContext(_R9) + 12);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v184);
}


char *__fastcall ItemInHandRenderer::tessellateAtFrame(ItemInHandRenderer *this, BaseEntityRenderContext *a2, Mob *a3, const ItemInstance *a4, int a5)
{
  ItemInstance *v5; // r4@1
  Mob *v6; // r8@1
  int v7; // r6@1
  BaseEntityRenderContext *v8; // r9@1
  ItemInHandRenderer *v9; // r7@1
  int v10; // r5@2
  Tessellator *v11; // r5@4
  BlockTessellator *v12; // r7@4
  char v14; // [sp+14h] [bp-24h]@6
  unsigned __int16 v15; // [sp+16h] [bp-22h]@6
  char v16; // [sp+18h] [bp-20h]@4
  char v17; // [sp+19h] [bp-1Fh]@4

  v5 = a4;
  v6 = a3;
  v7 = *((_DWORD *)a4 + 1);
  v8 = a2;
  v9 = this;
  if ( v7 )
  {
    v10 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(v7 + 4)]);
    if ( BlockTessellator::canRender(v10) == 1 && v10 != 22 )
    {
      v11 = (Tessellator *)BaseEntityRenderContext::getTessellator(v8);
      v12 = (BlockTessellator *)*((_DWORD *)v9 + 32);
      v16 = *(_BYTE *)(v7 + 4);
      v17 = ItemInstance::getAuxValue(v5);
      Tessellator::begin(v11, 0, 0);
      Tessellator::voidBeginAndEndCalls(v11, 1);
      return (char *)BlockTessellator::appendTessellatedBlock(v12, v11, (const FullBlock *)&v16);
    }
  }
  else
    (*(void (**)(void))(**(_DWORD **)a4 + 60))();
  return ItemInHandRenderer::_tessellateTextureItem(
           (ItemInHandRenderer *)a5,
           v8,
           *((TextureTessellator **)v9 + 29),
           v6,
           v5,
           a5,
           &v15,
           (unsigned __int16 *)&v14);
}


int *__fastcall ItemInHandRenderer::_getRenderCall(ItemInHandRenderer *this, Mob *a2, const ItemInstance *a3, int a4)
{
  ItemInstance *v4; // r7@1
  ItemInHandRenderer *v5; // r9@1
  int v6; // r8@1
  Mob *v7; // r5@1
  int v8; // r4@3
  unsigned int v9; // r6@6
  int v10; // r4@7
  __int64 v11; // kr00_8@9
  int v12; // r11@9
  int **v13; // r0@9
  int *v14; // r5@10
  unsigned int v15; // r10@10
  int v16; // r8@10
  int v17; // r4@10
  unsigned int v18; // r6@10
  int v19; // r7@12
  int *result; // r0@14

  v4 = a3;
  v5 = this;
  v6 = a4;
  v7 = a2;
  if ( *((_BYTE *)a3 + 15) )
  {
    if ( ItemInstance::isStackedByData(a3) == 1 )
      v8 = ItemInstance::getAuxValue(v4) << 16;
    else
      v8 = 0;
  }
  else
    v8 = 0;
  v9 = ItemInstance::getId(v4) | v8;
  if ( v7 )
    LOBYTE(v10) = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v7 + 488))(v7);
    v6 = (*(int (**)(void))(**(_DWORD **)v4 + 240))();
    v10 = (unsigned __int8)v10;
    v10 = 0;
  v11 = *(_QWORD *)((char *)v5 + 324);
  v12 = v9 % HIDWORD(v11);
  v13 = *(int ***)(v11 + 4 * (v9 % HIDWORD(v11)));
  if ( v13 )
    v14 = *v13;
    v15 = v9;
    v16 = v10 | (v6 << 8);
    v17 = *((_QWORD *)*v13 + 1) >> 32;
    v18 = *((_QWORD *)*v13 + 1);
    while ( v15 ^ v18 | v16 ^ v17 )
    {
      v19 = *v14;
      if ( !*v14 )
      {
        result = 0;
        goto LABEL_21;
      }
      v17 = *(_QWORD *)(v19 + 8) >> 32;
      v18 = *(_QWORD *)(v19 + 8);
      v13 = (int **)v11;
      v14 = *(int **)v11;
      if ( v18 % HIDWORD(v11) != v12 )
    }
    if ( v13 )
      result = *v13;
      result = 0;
    result = 0;
LABEL_21:
  if ( result )
    result += 4;
  return result;
}


int __fastcall ItemInHandRenderer::_renderItemRepositionByJSON(ItemInHandRenderer *this, BaseEntityRenderContext *a2, const ItemInstance *a3, MatrixStack::MatrixStackRef *a4)
{
  MatrixStack::MatrixStackRef *v5; // r4@1
  float v10; // r8@1
  int v12; // r0@1
  int v13; // r5@1
  int v14; // r0@1
  int v15; // r5@1
  int v16; // r4@1
  int result; // r0@1
  int v18; // [sp+0h] [bp-90h]@1
  signed int v19; // [sp+4h] [bp-8Ch]@1
  int v20; // [sp+8h] [bp-88h]@1
  int v21; // [sp+Ch] [bp-84h]@1
  int v22; // [sp+10h] [bp-80h]@1
  int v23; // [sp+14h] [bp-7Ch]@1
  int v24; // [sp+18h] [bp-78h]@1
  int v25; // [sp+1Ch] [bp-74h]@1
  int v26; // [sp+20h] [bp-70h]@1
  int v27; // [sp+24h] [bp-6Ch]@1
  int v28; // [sp+28h] [bp-68h]@1
  int v29; // [sp+2Ch] [bp-64h]@1
  int v30; // [sp+30h] [bp-60h]@1
  int v31; // [sp+34h] [bp-5Ch]@1
  int v32; // [sp+38h] [bp-58h]@1
  int v33; // [sp+3Ch] [bp-54h]@1
  int v34; // [sp+40h] [bp-50h]@1
  int v35; // [sp+44h] [bp-4Ch]@1
  int v36; // [sp+48h] [bp-48h]@1
  float v37; // [sp+4Ch] [bp-44h]@1

  _R0 = *(_DWORD *)a3;
  v5 = a4;
  __asm
  {
    VLDR            S18, [R0,#0x4C]
    VLDR            S20, [R0,#0x50]
    VLDR            S16, [R0,#0x54]
    VLDR            S22, [R0,#0x48]
  }
  v10 = *(float *)(*(_DWORD *)a3 + 88);
  __asm { VLDR            S24, [R0,#0x5C] }
  _R0 = MatrixStack::MatrixStackRef::operator->((int)a4);
    VLDR            S0, [R0,#4]
    VLDR            S6, [R0,#0x10]
    VLDR            S8, [R0,#0x14]
    VMUL.F32        S0, S0, S22
    VLDR            S14, [R0]
    VMUL.F32        S6, S6, S18
    VLDR            S2, [R0,#8]
    VMUL.F32        S8, S8, S18
    VLDR            S4, [R0,#0xC]
    VMUL.F32        S14, S14, S22
    VLDR            S10, [R0,#0x18]
    VMUL.F32        S2, S2, S22
    VLDR            S12, [R0,#0x1C]
    VMUL.F32        S4, S4, S22
    VMUL.F32        S10, S10, S18
    VLDR            S3, [R0,#0x20]
    VMUL.F32        S12, S12, S18
    VLDR            S1, [R0,#0x24]
    VMUL.F32        S3, S3, S20
    VLDR            S5, [R0,#0x28]
    VSUB.F32        S0, S8, S0
    VLDR            S8, [R0,#0x2C]
    VSUB.F32        S6, S6, S14
    VMUL.F32        S1, S1, S20
    VMUL.F32        S14, S5, S20
    VSUB.F32        S2, S10, S2
    VLDR            S10, [R0,#0x34]
    VSUB.F32        S4, S12, S4
    VLDR            S12, [R0,#0x38]
    VMUL.F32        S8, S8, S20
    VSUB.F32        S6, S6, S3
    VSUB.F32        S0, S0, S1
    VSUB.F32        S2, S2, S14
    VSUB.F32        S4, S4, S8
    VLDR            S8, [R0,#0x30]
    VADD.F32        S6, S8, S6
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S0, S10, S0
    VADD.F32        S2, S12, S2
    VADD.F32        S4, S8, S4
    VSTR            S6, [R0,#0x30]
    VSTR            S0, [R0,#0x34]
    VSTR            S2, [R0,#0x38]
    VSTR            S4, [R0,#0x3C]
  v12 = MatrixStack::MatrixStackRef::operator->((int)v5);
  __asm { VNEG.F32        S0, S24 }
  v13 = v12;
  v18 = 0;
  v19 = 0;
  v20 = 1065353216;
  __asm { VSTR            S0, [SP,#0x90+var_44] }
  glm::rotate<float>((int)&v21, v12, (int)&v37, (int)&v18);
  *(_DWORD *)v13 = v21;
  *(_DWORD *)(v13 + 4) = v22;
  *(_DWORD *)(v13 + 8) = v23;
  *(_DWORD *)(v13 + 12) = v24;
  *(_DWORD *)(v13 + 16) = v25;
  *(_DWORD *)(v13 + 20) = v26;
  *(_DWORD *)(v13 + 24) = v27;
  *(_DWORD *)(v13 + 28) = v28;
  *(_DWORD *)(v13 + 32) = v29;
  *(_DWORD *)(v13 + 36) = v30;
  *(_DWORD *)(v13 + 40) = v31;
  *(_DWORD *)(v13 + 44) = v32;
  *(_DWORD *)(v13 + 48) = v33;
  *(_DWORD *)(v13 + 52) = v34;
  *(_DWORD *)(v13 + 56) = v35;
  *(_DWORD *)(v13 + 60) = v36;
  v14 = MatrixStack::MatrixStackRef::operator->((int)v5);
  __asm { VNEG.F32        S0, S16 }
  v15 = v14;
  *(_QWORD *)&v18 = 1065353216LL;
  v20 = 0;
  glm::rotate<float>((int)&v21, v14, (int)&v37, (int)&v18);
  *(_DWORD *)v15 = v21;
  *(_DWORD *)(v15 + 4) = v22;
  *(_DWORD *)(v15 + 8) = v23;
  *(_DWORD *)(v15 + 12) = v24;
  *(_DWORD *)(v15 + 16) = v25;
  *(_DWORD *)(v15 + 20) = v26;
  *(_DWORD *)(v15 + 24) = v27;
  *(_DWORD *)(v15 + 28) = v28;
  *(_DWORD *)(v15 + 32) = v29;
  *(_DWORD *)(v15 + 36) = v30;
  *(_DWORD *)(v15 + 40) = v31;
  *(_DWORD *)(v15 + 44) = v32;
  *(_DWORD *)(v15 + 48) = v33;
  *(_DWORD *)(v15 + 52) = v34;
  *(_DWORD *)(v15 + 56) = v35;
  *(_DWORD *)(v15 + 60) = v36;
  v16 = MatrixStack::MatrixStackRef::operator->((int)v5);
  v19 = 1065353216;
  v37 = v10;
  glm::rotate<float>((int)&v21, v16, (int)&v37, (int)&v18);
  *(_DWORD *)v16 = v21;
  *(_DWORD *)(v16 + 4) = v22;
  *(_DWORD *)(v16 + 8) = v23;
  *(_DWORD *)(v16 + 12) = v24;
  *(_DWORD *)(v16 + 16) = v25;
  *(_DWORD *)(v16 + 20) = v26;
  *(_DWORD *)(v16 + 24) = v27;
  *(_DWORD *)(v16 + 28) = v28;
  *(_DWORD *)(v16 + 32) = v29;
  *(_DWORD *)(v16 + 36) = v30;
  *(_DWORD *)(v16 + 40) = v31;
  *(_DWORD *)(v16 + 44) = v32;
  *(_DWORD *)(v16 + 48) = v33;
  *(_DWORD *)(v16 + 52) = v34;
  *(_DWORD *)(v16 + 56) = v35;
  result = v36;
  *(_DWORD *)(v16 + 60) = v36;
  return result;
}
