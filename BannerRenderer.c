

signed int __fastcall BannerRenderer::_setupBannerConstants(BannerRenderer *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r6@1
  mce::RenderContext *v3; // r8@1
  unsigned int v4; // r5@1
  int *v5; // r0@2
  int *v6; // r0@3
  ListTag *v7; // r9@3
  signed int v8; // r4@3
  int v9; // r11@6
  int v10; // r6@6
  int v15; // r0@7
  int v16; // r7@7
  const void **v17; // r0@7
  unsigned int v18; // r8@7
  int *v25; // r0@7
  unsigned __int8 v26; // r0@9
  int *v27; // r0@11
  int *v28; // r0@12
  int v33; // r1@14
  int v34; // r0@14
  int v35; // r2@17
  _DWORD *v36; // r1@17
  float *v37; // r3@19
  int v38; // r2@19
  int v39; // t1@20
  int *v40; // r3@21
  int v41; // r1@21
  int v42; // r0@21
  int *v43; // r2@23
  int v44; // r1@23
  int v45; // t1@24
  unsigned __int64 v47; // [sp+0h] [bp-120h]@6
  mce::RenderContext *v48; // [sp+8h] [bp-118h]@6
  int v49[28]; // [sp+10h] [bp-110h]@1
  float v50; // [sp+80h] [bp-A0h]@1
  float v51; // [sp+84h] [bp-9Ch]@1
  float v52; // [sp+88h] [bp-98h]@1
  float v53; // [sp+8Ch] [bp-94h]@1
  int v54; // [sp+90h] [bp-90h]@1
  int v55; // [sp+94h] [bp-8Ch]@1
  int v56; // [sp+98h] [bp-88h]@1
  int v57; // [sp+9Ch] [bp-84h]@1
  int v58; // [sp+A0h] [bp-80h]@1
  int v59; // [sp+A4h] [bp-7Ch]@1
  int v60; // [sp+A8h] [bp-78h]@1
  int v61; // [sp+ACh] [bp-74h]@1
  int v62; // [sp+B0h] [bp-70h]@1
  int v63; // [sp+B4h] [bp-6Ch]@1
  int v64; // [sp+B8h] [bp-68h]@1
  int v65; // [sp+BCh] [bp-64h]@1
  int v66; // [sp+C0h] [bp-60h]@1
  int v67; // [sp+C4h] [bp-5Ch]@1
  int v68; // [sp+C8h] [bp-58h]@1
  int v69; // [sp+CCh] [bp-54h]@1
  int v70; // [sp+D0h] [bp-50h]@1
  int v71; // [sp+D4h] [bp-4Ch]@1
  int v72; // [sp+D8h] [bp-48h]@1
  int v73; // [sp+DCh] [bp-44h]@1
  int v74; // [sp+E0h] [bp-40h]@1
  int v75; // [sp+E4h] [bp-3Ch]@1
  int v76; // [sp+E8h] [bp-38h]@1
  int v77; // [sp+ECh] [bp-34h]@1

  v2 = a2;
  v3 = (mce::RenderContext *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)&mce::Singleton<mce::GlobalConstantBuffers>::mInstance);
  v4 = mce::Singleton<mce::GlobalConstantBuffers>::mInstance;
  v56 = 0;
  v57 = 0;
  v54 = 0;
  v55 = 0;
  v52 = 0.0;
  v53 = 0.0;
  v50 = 0.0;
  v51 = 0.0;
  v60 = 0;
  v61 = 0;
  v58 = 0;
  v59 = 0;
  v64 = 0;
  v65 = 0;
  v62 = 0;
  v63 = 0;
  v68 = 0;
  v69 = 0;
  v66 = 0;
  v67 = 0;
  v72 = 0;
  v73 = 0;
  v70 = 0;
  v71 = 0;
  v76 = 0;
  v77 = 0;
  v74 = 0;
  v75 = 0;
  v49[6] = 0;
  v49[7] = 0;
  v49[4] = 0;
  v49[5] = 0;
  v49[2] = 0;
  v49[3] = 0;
  v49[0] = 0;
  v49[1] = 0;
  v49[10] = 0;
  v49[11] = 0;
  v49[8] = 0;
  v49[9] = 0;
  v49[14] = 0;
  v49[15] = 0;
  v49[12] = 0;
  v49[13] = 0;
  v49[18] = 0;
  v49[19] = 0;
  v49[16] = 0;
  v49[17] = 0;
  v49[22] = 0;
  v49[23] = 0;
  v49[20] = 0;
  v49[21] = 0;
  v49[26] = 0;
  v49[27] = 0;
  v49[24] = 0;
  v49[25] = 0;
  if ( ItemInstance::hasUserData(v2) == 1 )
  {
    v5 = (int *)ItemInstance::getUserData(v2);
    if ( CompoundTag::contains(*v5, (const void **)&BannerBlockEntity::TAG_PATTERNS) == 1 )
    {
      v6 = (int *)ItemInstance::getUserData(v2);
      v7 = (ListTag *)CompoundTag::getList(*v6, (const void **)&BannerBlockEntity::TAG_PATTERNS);
      v8 = ListTag::size(v7);
      if ( v8 > 6 )
        v8 = 6;
      if ( v8 >= 1 )
      {
        v9 = 0;
        v47 = __PAIR__(v4, (unsigned int)v2);
        v10 = 0;
        __asm { VLDR            S16, =0.0039216 }
        v48 = v3;
        do
        {
          v15 = ListTag::get(v7, v10);
          v16 = v15;
          v17 = CompoundTag::getString(v15, (const void **)&BannerBlockEntity::TAG_PATTERN);
          v18 = BannerPattern::getPatternIndexFromNameID(v17);
          ++v10;
          _R0 = DyePowderItem::COLOR_RGB[(unsigned __int8)CompoundTag::getInt(
                                                            v16,
                                                            (const void **)&BannerBlockEntity::TAG_COLOR)];
          _R1 = (unsigned __int16)_R0 >> 8;
          _R2 = (_R0 >> 16) & 0xFF;
          __asm { VMOV            S0, R2 }
          _R2 = (unsigned __int8)_R0;
          _R0 >>= 24;
          __asm
          {
            VMOV            S2, R1
            VMOV            S4, R2
          }
          _R1 = v18 & 7;
          __asm { VMOV            S6, R0 }
          _R2 = v18 >> 3;
            VCVT.F32.S32    S0, S0
            VCVT.F32.S32    S2, S2
            VCVT.F32.S32    S4, S4
            VCVT.F32.S32    S6, S6
            VMOV            S8, R1
            VMOV            S10, R2
            VCVT.F32.U32    S8, S8
            VMUL.F32        S0, S0, S16
            VMUL.F32        S2, S2, S16
            VMUL.F32        S4, S4, S16
            VMUL.F32        S6, S6, S16
            VCVT.F32.U32    S10, S10
            VSTR            S0, [R0,#0x10]
            VSTR            S2, [R0,#0x14]
            VSTR            S4, [R0,#0x18]
            VSTR            S6, [R0,#0x1C]
          v25 = &v49[v9];
          v9 += 4;
            VSTR            S8, [R0,#0x10]
            VSTR            S10, [R0,#0x14]
          v25[6] = 0;
          v25[7] = 0;
        }
        while ( _NF ^ _VF );
        v3 = v48;
        v4 = HIDWORD(v47);
        v2 = (ItemInstance *)v47;
      }
    }
    else
      v8 = 0;
    v27 = (int *)ItemInstance::getUserData(v2);
    if ( CompoundTag::contains(*v27, (const void **)&BannerBlockEntity::TAG_BASE_COLOR) == 1 )
      v28 = (int *)ItemInstance::getUserData(v2);
      v26 = CompoundTag::getInt(*v28, (const void **)&BannerBlockEntity::TAG_BASE_COLOR);
      v26 = ItemInstance::getAuxValue(v2) & 0xF;
  }
  else
    v26 = ItemInstance::getAuxValue(v2) & 0xF;
    v8 = 0;
  __asm { VLDR            S8, =0.0039216 }
  _R0 = DyePowderItem::COLOR_RGB[v26];
  _R1 = (unsigned __int16)_R0 >> 8;
  _R2 = (_R0 >> 16) & 0xFF;
  __asm { VMOV            S0, R2 }
  _R2 = (unsigned __int8)_R0;
  _R0 >>= 24;
  __asm
    VMOV            S2, R1
    VMOV            S6, R0
    VMOV            S4, R2
    VCVT.F32.S32    S0, S0
  v33 = 4 * v8 + 4;
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [SP,#0x120+var_A0]
    VSTR            S2, [SP,#0x120+var_9C]
    VSTR            S4, [SP,#0x120+var_98]
    VSTR            S6, [SP,#0x120+var_94]
  v34 = *(_DWORD *)(v4 + 748);
  if ( _CF )
    v33 = 4;
  if ( v33 )
    v35 = -5;
    v36 = *(_DWORD **)(v34 + 20);
    if ( -4 * v8 != 0 && (unsigned int)(-5 - 4 * v8) >= 0xFFFFFFFB )
      v35 = -5 - 4 * v8;
    v37 = &v50;
    v38 = ~v35;
    do
      v39 = *(_DWORD *)v37;
      ++v37;
      --v38;
      *v36 = v39;
      ++v36;
    while ( v38 );
    v40 = v49;
    *(_BYTE *)(v34 + 17) = 1;
    v41 = -5;
    v42 = *(_DWORD *)(v4 + 752);
      v41 = -5 - 4 * v8;
    v43 = *(int **)(v42 + 20);
    v44 = ~v41;
      v45 = *v40;
      ++v40;
      --v44;
      *v43 = v45;
      ++v43;
    while ( v44 );
  *(_BYTE *)(v42 + 17) = 1;
  return mce::ConstantBufferContainer::sync(*(mce::ConstantBufferContainer **)(v4 + 756), v3);
}


signed int __fastcall BannerRenderer::_setupBannerConstants(BannerRenderer *this, BlockEntity *a2)
{
  BlockEntity *v2; // r4@1
  int v3; // r7@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r8@1
  int v7; // r2@1
  int v8; // r0@1
  int v9; // r1@1
  int v10; // r0@1
  int v11; // r1@1
  int v16; // r10@2
  int v17; // r5@2
  int v18; // r8@3
  __int64 v19; // kr00_8@3
  int v20; // r6@3
  int v23; // r1@3
  int v24; // r0@3
  int v25; // r0@3
  int v26; // r1@3
  mce::RenderContext *v28; // [sp+4h] [bp-54h]@1
  char v29; // [sp+8h] [bp-50h]@3
  int v30; // [sp+10h] [bp-48h]@3
  char v31; // [sp+18h] [bp-40h]@1
  int v32; // [sp+1Ch] [bp-3Ch]@1
  int v33; // [sp+20h] [bp-38h]@1

  v2 = a2;
  v28 = (mce::RenderContext *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)&mce::Singleton<mce::GlobalConstantBuffers>::mInstance);
  v3 = mce::Singleton<mce::GlobalConstantBuffers>::mInstance;
  BannerBlockEntity::getBaseColor((BannerBlockEntity *)&v31, (int)v2);
  v4 = *(_DWORD *)&v31;
  v5 = v32;
  v6 = v33;
  v7 = BannerBlockEntity::getPatternCount(v2);
  v8 = *(_DWORD *)(v3 + 748);
  v9 = *(_DWORD *)(v8 + 20);
  *(_DWORD *)v9 = v4;
  *(_DWORD *)(v9 + 4) = v5;
  *(_DWORD *)(v9 + 8) = v6;
  *(_DWORD *)(v9 + 12) = 1065353216;
  *(_BYTE *)(v8 + 17) = 1;
  v10 = *(_DWORD *)(v3 + 752);
  v11 = *(_DWORD *)(v10 + 20);
  *(_DWORD *)v11 = 0;
  *(_DWORD *)(v11 + 4) = 0;
  *(_DWORD *)(v11 + 8) = 0;
  *(_DWORD *)(v11 + 12) = 0;
  *(_BYTE *)(v10 + 17) = 1;
  if ( v7 >= 1 )
  {
    __asm { VMOV.F32        S16, #0.125 }
    v16 = 0;
    v17 = 0;
    do
    {
      v18 = v7;
      BannerBlockEntity::getColor((BannerBlockEntity *)&v29, (int)v2, v17);
      v19 = *(_QWORD *)&v29;
      v20 = v30;
      _R0 = BannerBlockEntity::getPattern(v2, v17);
      _R2 = _R0 & 7;
      _R0 >>= 3;
      v23 = *(_DWORD *)(v3 + 748);
      __asm
      {
        VMOV            S2, R0
        VMOV            S0, R2
      }
      ++v17;
        VCVT.F32.U32    S0, S0
        VCVT.F32.U32    S2, S2
      v24 = *(_DWORD *)(v23 + 20) + v16;
      v7 = v18;
      *(_QWORD *)(v24 + 16) = v19;
      *(_DWORD *)(v24 + 24) = v20;
      *(_DWORD *)(v24 + 28) = 1065353216;
      *(_BYTE *)(v23 + 17) = 1;
      v25 = *(_DWORD *)(v3 + 752);
        VMUL.F32        S0, S0, S16
        VMUL.F32        S2, S2, S16
      v26 = *(_DWORD *)(v25 + 20) + v16;
      v16 += 16;
        VSTR            S0, [R1,#0x10]
        VSTR            S2, [R1,#0x14]
      *(_DWORD *)(v26 + 24) = 0;
      *(_DWORD *)(v26 + 28) = 0;
      *(_BYTE *)(v25 + 17) = 1;
    }
    while ( !_ZF );
  }
  return mce::ConstantBufferContainer::sync(*(mce::ConstantBufferContainer **)(v3 + 756), v28);
}


void __fastcall BannerRenderer::~BannerRenderer(BannerRenderer *this)
{
  BannerRenderer::~BannerRenderer(this);
}


BaseEntityRenderer *__fastcall BannerRenderer::BannerRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r5@1
  BaseEntityRenderer *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  char *v6; // r0@3
  char *v7; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  char *v17; // [sp+4h] [bp-5Ch]@3
  char *v18; // [sp+8h] [bp-58h]@3
  int v19; // [sp+Ch] [bp-54h]@3
  char v20; // [sp+10h] [bp-50h]@3
  int v21; // [sp+2Ch] [bp-34h]@2
  int v22; // [sp+34h] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v3 = &off_26E673C;
  BannerModel::BannerModel((BaseEntityRenderer *)((char *)v3 + 76));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1468));
  sub_21E94B4((void **)&v22, "ui_banner");
  mce::MaterialPtr::MaterialPtr(
    (BaseEntityRenderer *)((char *)v3 + 1492),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v22);
  v4 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v22 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v21, "ui_banner_pole");
    (BaseEntityRenderer *)((char *)v3 + 1504),
    &v21);
  v5 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v21 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v17, "textures/entity/banner/banner");
  v18 = v17;
  v17 = (char *)&unk_28898CC;
  v19 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v20, v2, (int)&v18, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1468), (mce::TexturePtr *)&v20);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v20);
  v6 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  *((_DWORD *)v3 + 27) = (char *)v3 + 1468;
  return v3;
}


int __fastcall BannerRenderer::render(BannerRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  BlockSource **v3; // r5@1
  BannerRenderer *v4; // r4@1
  int v6; // r10@1
  signed int v7; // r0@1
  signed int v8; // r7@1
  __int64 v9; // kr08_8@2
  char *v10; // r0@2
  int v11; // r6@2
  int v12; // ST10_4@2
  int v13; // r0@2
  BaseEntityRenderContext *v14; // r11@2
  int v15; // r9@2
  int v16; // r8@2
  unsigned int v17; // r10@2
  Level *v18; // r0@2
  unsigned int v24; // r0@2
  signed int v25; // r8@4
  int v26; // r0@6
  int *v27; // r5@7
  int v30; // r6@9
  int v35; // r6@17
  char *v37; // r0@18
  float v38; // r1@18
  int v44; // r6@18
  int v45; // r7@18
  char *v46; // r5@18
  int v47; // r0@18
  int v48; // r11@18
  __int64 v49; // r0@21
  __int64 v50; // r0@22
  int v51; // r6@23
  int v52; // ST04_4@23
  __int64 v53; // r0@23
  __int64 v54; // r0@24
  __int64 v55; // r0@25
  __int64 v56; // r0@26
  int v58; // [sp+0h] [bp-A8h]@0
  signed int v59; // [sp+14h] [bp-94h]@2
  BlockSource **v60; // [sp+18h] [bp-90h]@2
  int v61; // [sp+1Ch] [bp-8Ch]@1
  BlockEntity *v62; // [sp+20h] [bp-88h]@1
  char v63; // [sp+24h] [bp-84h]@6
  int v64; // [sp+2Ch] [bp-7Ch]@2
  int v65; // [sp+30h] [bp-78h]@9
  int v66; // [sp+34h] [bp-74h]@9
  int v67; // [sp+38h] [bp-70h]@9
  int v68; // [sp+3Ch] [bp-6Ch]@9
  int v69; // [sp+40h] [bp-68h]@9
  int v70; // [sp+44h] [bp-64h]@9
  int v71; // [sp+48h] [bp-60h]@9
  int v72; // [sp+4Ch] [bp-5Ch]@9
  int v73; // [sp+50h] [bp-58h]@9
  int v74; // [sp+54h] [bp-54h]@9
  int v75; // [sp+58h] [bp-50h]@9
  int v76; // [sp+5Ch] [bp-4Ch]@9
  int v77; // [sp+60h] [bp-48h]@9
  int v78; // [sp+64h] [bp-44h]@9
  int v79; // [sp+68h] [bp-40h]@9
  float v80; // [sp+6Ch] [bp-3Ch]@9

  v3 = (BlockSource **)a3;
  v4 = this;
  _R9 = a2;
  v62 = (BlockEntity *)*((_DWORD *)a3 + 1);
  v6 = *(_QWORD *)((char *)a3 + 12);
  v61 = *(_QWORD *)((char *)a3 + 12) >> 32;
  v7 = BlockEntity::isInWorld(*((BlockEntity **)a3 + 1));
  v8 = 0;
  if ( v7 == 1 )
  {
    v59 = 1;
    v60 = v3;
    v9 = *(_QWORD *)v3;
    v10 = BlockEntity::getPosition((BlockEntity *)(*(_QWORD *)v3 >> 32));
    BlockSource::getBlockAndData((BlockSource *)&v64, (const BlockPos *)v9, (int)v10);
    v11 = Block::mBlocks[(unsigned __int8)v64];
    v12 = Block::mStandingBanner;
    v13 = Block::getBlockState(Block::mBlocks[(unsigned __int8)v64], 15);
    v14 = _R9;
    v15 = *(_DWORD *)(v13 + 4);
    v16 = v6;
    v17 = (unsigned int)BYTE1(v64) >> (*(_DWORD *)v13 + 1 - v15);
    v18 = (Level *)BlockSource::getLevel(*v3);
    _R0 = Level::getTime(v18);
    __asm { VMOV            S0, R0 }
    LOBYTE(_R0) = 4 - v15;
    _R9 = v14;
    __asm { VCVT.F32.S32    S16, S0 }
    v24 = (0xFu >> _R0) & v17;
    v6 = v16;
    if ( v11 == v12 )
      v8 = 1;
    v25 = v8;
    v8 = v24;
  }
  else
    v59 = v7;
    v25 = 1;
    __asm { VLDR            S16, =0.0 }
  v26 = BaseEntityRenderContext::getWorldMatrix(_R9);
  MatrixStack::push((MatrixStack *)&v63, v26);
  if ( v25 == 1 )
    v27 = (int *)v60;
    if ( v59 == 1 )
    {
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v63);
      __asm { VMOV.F32        S0, #0.5 }
      _R1 = v60[2];
      __asm
      {
        VLDR            S2, =0.48
        VLDR            S7, [R0,#0x10]
        VLDR            S4, [R1]
        VLDR            S6, [R1,#4]
        VLDR            S8, [R1,#8]
        VADD.F32        S2, S6, S2
        VLDR            S6, [R0]
        VADD.F32        S4, S4, S0
        VLDR            S10, [R0,#4]
        VLDR            S12, [R0,#8]
        VADD.F32        S0, S8, S0
        VLDR            S1, [R0,#0x14]
        VLDR            S5, [R0,#0x1C]
        VLDR            S14, [R0,#0xC]
        VLDR            S3, [R0,#0x18]
        VMUL.F32        S8, S7, S2
        VLDR            S7, [R0,#0x20]
        VMUL.F32        S6, S6, S4
        VMUL.F32        S1, S1, S2
        VMUL.F32        S10, S10, S4
        VMUL.F32        S5, S5, S2
        VMUL.F32        S2, S3, S2
        VLDR            S3, [R0,#0x24]
        VMUL.F32        S12, S12, S4
        VMUL.F32        S4, S14, S4
        VMUL.F32        S14, S3, S0
        VMUL.F32        S3, S7, S0
        VLDR            S7, [R0,#0x28]
        VADD.F32        S6, S8, S6
        VLDR            S8, [R0,#0x2C]
        VADD.F32        S10, S1, S10
        VMUL.F32        S1, S7, S0
        VADD.F32        S2, S2, S12
        VLDR            S12, [R0,#0x38]
        VMUL.F32        S0, S8, S0
        VADD.F32        S4, S5, S4
        VADD.F32        S6, S6, S3
        VADD.F32        S8, S10, S14
        VLDR            S10, [R0,#0x34]
        VADD.F32        S2, S2, S1
        VADD.F32        S0, S4, S0
        VLDR            S4, [R0,#0x30]
        VADD.F32        S4, S6, S4
        VLDR            S6, [R0,#0x3C]
        VADD.F32        S8, S8, S10
        VADD.F32        S0, S0, S6
        VSTR            S4, [R0,#0x30]
        VSTR            S8, [R0,#0x34]
        VSTR            S2, [R0,#0x38]
        VSTR            S0, [R0,#0x3C]
      }
    }
    v30 = MatrixStack::MatrixStackRef::operator->((int)&v63);
    __asm { VLDR            S2, =-0.0625 }
    _R0 = 360 * v8;
    __asm
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VSTR            S0, [SP,#0xA8+var_3C]
    glm::rotate<float>((int)&v64, v30, (int)&v80, (int)&Vec3::UNIT_Y);
    *(_DWORD *)v30 = v64;
    *(_DWORD *)(v30 + 4) = v65;
    *(_DWORD *)(v30 + 8) = v66;
    *(_DWORD *)(v30 + 12) = v67;
    *(_DWORD *)(v30 + 16) = v68;
    *(_DWORD *)(v30 + 20) = v69;
    *(_DWORD *)(v30 + 24) = v70;
    *(_DWORD *)(v30 + 28) = v71;
    *(_DWORD *)(v30 + 32) = v72;
    *(_DWORD *)(v30 + 36) = v73;
    *(_DWORD *)(v30 + 40) = v74;
    *(_DWORD *)(v30 + 44) = v75;
    *(_DWORD *)(v30 + 48) = v76;
    *(_DWORD *)(v30 + 52) = v77;
    *(_DWORD *)(v30 + 56) = v78;
    *(_DWORD *)(v30 + 60) = v79;
    if ( v8 == 2 )
      __asm { VLDR            S18, =180.0 }
    else if ( v8 == 4 )
      __asm { VLDR            S18, =90.0 }
    else
      _R0 = &dword_13409B0;
      if ( v8 == 5 )
        _R0 = &dword_13409B4;
      __asm { VLDR            S18, [R0] }
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v63);
    __asm { VMOV.F32        S0, #0.5 }
    _R1 = v60[2];
      VLDR            S2, =-0.16
      VLDR            S7, [R0,#0x10]
      VLDR            S4, [R1]
      VLDR            S6, [R1,#4]
      VLDR            S8, [R1,#8]
      VADD.F32        S2, S6, S2
      VLDR            S6, [R0]
      VADD.F32        S4, S4, S0
      VLDR            S10, [R0,#4]
      VLDR            S12, [R0,#8]
      VADD.F32        S0, S8, S0
      VLDR            S1, [R0,#0x14]
      VLDR            S5, [R0,#0x1C]
      VLDR            S14, [R0,#0xC]
      VLDR            S3, [R0,#0x18]
      VMUL.F32        S8, S7, S2
      VLDR            S7, [R0,#0x20]
      VMUL.F32        S6, S6, S4
      VMUL.F32        S1, S1, S2
      VMUL.F32        S10, S10, S4
      VMUL.F32        S5, S5, S2
      VMUL.F32        S2, S3, S2
      VLDR            S3, [R0,#0x24]
      VMUL.F32        S12, S12, S4
      VMUL.F32        S4, S14, S4
      VMUL.F32        S14, S3, S0
      VMUL.F32        S3, S7, S0
      VLDR            S7, [R0,#0x28]
      VADD.F32        S6, S8, S6
      VLDR            S8, [R0,#0x2C]
      VADD.F32        S10, S1, S10
      VMUL.F32        S1, S7, S0
      VADD.F32        S2, S2, S12
      VLDR            S12, [R0,#0x38]
      VMUL.F32        S0, S8, S0
      VADD.F32        S4, S5, S4
      VADD.F32        S6, S6, S3
      VADD.F32        S8, S10, S14
      VLDR            S10, [R0,#0x34]
      VADD.F32        S2, S2, S1
      VADD.F32        S0, S4, S0
      VLDR            S4, [R0,#0x30]
      VADD.F32        S4, S6, S4
      VLDR            S6, [R0,#0x3C]
      VADD.F32        S8, S8, S10
      VADD.F32        S0, S0, S6
      VSTR            S4, [R0,#0x30]
      VSTR            S8, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    v35 = MatrixStack::MatrixStackRef::operator->((int)&v63);
      VNEG.F32        S0, S18
    glm::rotate<float>((int)&v64, v35, (int)&v80, (int)&Vec3::UNIT_Y);
    *(_DWORD *)v35 = v64;
    *(_DWORD *)(v35 + 4) = v65;
    *(_DWORD *)(v35 + 8) = v66;
    *(_DWORD *)(v35 + 12) = v67;
    *(_DWORD *)(v35 + 16) = v68;
    *(_DWORD *)(v35 + 20) = v69;
    *(_DWORD *)(v35 + 24) = v70;
    *(_DWORD *)(v35 + 28) = v71;
    *(_DWORD *)(v35 + 32) = v72;
    *(_DWORD *)(v35 + 36) = v73;
    *(_DWORD *)(v35 + 40) = v74;
    *(_DWORD *)(v35 + 44) = v75;
    *(_DWORD *)(v35 + 48) = v76;
    *(_DWORD *)(v35 + 52) = v77;
    *(_DWORD *)(v35 + 56) = v78;
    *(_DWORD *)(v35 + 60) = v79;
      VMOV.F32        S0, #0.3125
      VLDR            S4, [R0,#0x14]
      VMOV.F32        S2, #-0.4375
      VLDR            S6, [R0,#0x18]
      VLDR            S10, [R0,#0x20]
      VLDR            S12, [R0,#0x24]
      VLDR            S14, [R0,#0x28]
      VLDR            S3, [R0,#0x10]
      VLDR            S8, [R0,#0x1C]
      VLDR            S1, [R0,#0x2C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S12, S12, S2
      VMUL.F32        S3, S3, S0
      VMUL.F32        S6, S6, S0
      VMUL.F32        S14, S14, S2
      VMUL.F32        S10, S10, S2
      VMUL.F32        S2, S1, S2
      VSUB.F32        S4, S12, S4
      VSUB.F32        S6, S14, S6
      VLDR            S14, [R0,#0x3C]
      VSUB.F32        S8, S10, S3
      VSUB.F32        S0, S2, S0
      VLDR            S2, [R0,#0x30]
      VADD.F32        S4, S4, S10
      VADD.F32        S6, S6, S12
      VADD.F32        S2, S8, S2
      VADD.F32        S0, S0, S14
      VSTR            S2, [R0,#0x30]
      VSTR            S4, [R0,#0x34]
      VSTR            S6, [R0,#0x38]
  v37 = BlockEntity::getPosition(v62);
  __asm { VLDR            S0, [R9,#4] }
  LODWORD(v38) = 7 * *(_QWORD *)v37 + 9 * (*(_QWORD *)v37 >> 32);
  _R0 = LODWORD(v38) + 13 * *((_DWORD *)v37 + 2);
  __asm
    VADD.F32        S0, S0, S16
    VLDR            S4, =0.02
    VMOV            S2, R0
  _R0 = &mce::Math::PI;
    VCVT.F32.S32    S2, S2
    VLDR            S16, [R0]
    VMUL.F32        S4, S16, S4
    VADD.F32        S0, S0, S2
    VMUL.F32        S0, S4, S0
    VMOV            R0, S0
  _R0 = (BannerRenderer *)mce::Math::cos(_R0, v38);
    VMOV            S0, R0
    VLDR            S2, =0.01
    VMUL.F32        S0, S0, S2
    VLDR            S2, =-0.0125
    VMUL.F32        S0, S16, S0
    VSTR            S0, [R4,#0xA0]
  BannerRenderer::_setupBannerConstants(_R0, v62);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v63);
    VLDR            S0, =0.64
    VLDR            S2, [R0]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0]
    VLDR            S2, [R0,#4]
    VSTR            S2, [R0,#4]
    VLDR            S2, [R0,#8]
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VMUL.F32        S0, S2, S0
    VLDR            S2, =-0.64
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
  v44 = BaseEntityRenderContext::getScreenContext(_R9);
  v45 = *v27;
  v46 = BlockEntity::getPosition(v62);
  __asm { VLDR            S16, [R9,#4] }
  v47 = BaseEntityRenderContext::isIgnoringLightning(_R9);
  __asm { VSTR            S16, [SP,#0xA8+var_A8] }
  EntityShaderManager::_setupShaderParameters((int)v4, v44, v45, (int)v46, v58, v47, &Vec2::ONE);
  *((_DWORD *)v4 + 26) = (char *)v4 + 1444;
  v48 = *((_DWORD *)v4 + 27);
  if ( mce::TexturePtr::operator bool(v61) == 1 )
    *((_DWORD *)v4 + 27) = v61;
  if ( *(_DWORD *)(v6 + 4) )
    *((_DWORD *)v4 + 218) = v6;
    *((_DWORD *)v4 + 196) = *((_DWORD *)v4 + 31);
    *((_DWORD *)v4 + 197) = *((_DWORD *)v4 + 32);
    *((_DWORD *)v4 + 198) = *((_DWORD *)v4 + 33);
    *((_DWORD *)v4 + 205) = *((_DWORD *)v4 + 40);
    *((_DWORD *)v4 + 206) = *((_DWORD *)v4 + 41);
    *((_DWORD *)v4 + 207) = *((_DWORD *)v4 + 42);
    HIDWORD(v49) = BaseEntityRenderContext::getScreenContext(_R9);
    LODWORD(v49) = (char *)v4 + 784;
    ModelPart::render(v49, (int)v4 + 76, 1031798784, 0, 0);
    if ( v25 == 1 )
      *((_DWORD *)v4 + 251) = *((_DWORD *)v4 + 86);
      *((_DWORD *)v4 + 252) = *((_DWORD *)v4 + 87);
      *((_DWORD *)v4 + 253) = *((_DWORD *)v4 + 88);
      *((_DWORD *)v4 + 260) = *((_DWORD *)v4 + 95);
      *((_DWORD *)v4 + 261) = *((_DWORD *)v4 + 96);
      *((_DWORD *)v4 + 262) = *((_DWORD *)v4 + 97);
      *((_DWORD *)v4 + 273) = v6;
      HIDWORD(v50) = BaseEntityRenderContext::getScreenContext(_R9);
      LODWORD(v50) = (char *)v4 + 1004;
      ModelPart::render(v50, (int)v4 + 76, 1031798784, 0, 0);
      *((_DWORD *)v4 + 306) = *((_DWORD *)v4 + 141);
      *((_DWORD *)v4 + 307) = *((_DWORD *)v4 + 142);
      *((_DWORD *)v4 + 308) = *((_DWORD *)v4 + 143);
      *((_DWORD *)v4 + 315) = *((_DWORD *)v4 + 150);
      *((_DWORD *)v4 + 316) = *((_DWORD *)v4 + 151);
      *((_DWORD *)v4 + 317) = *((_DWORD *)v4 + 152);
      *((_DWORD *)v4 + 328) = v6;
      HIDWORD(v55) = BaseEntityRenderContext::getScreenContext(_R9);
      LODWORD(v55) = (char *)v4 + 1224;
      ModelPart::render(v55, (int)v4 + 76, 1031798784, 0, 0);
    v51 = BannerBlockEntity::getPatternCount(v62);
    BaseEntityRenderContext::getScreenContext(_R9);
    v52 = mce::PolygonHelper::calculateIndexCountForQuads((mce::PolygonHelper *)(24 * v51 + 24), 0x18u);
    LODWORD(v53) = (char *)v4 + 124;
    ModelPart::render(v53, (int)v4 + 76, 1031798784, 0, v52);
      HIDWORD(v54) = BaseEntityRenderContext::getScreenContext(_R9);
      LODWORD(v54) = (char *)v4 + 344;
      ModelPart::render(v54, (int)v4 + 76, 1031798784, 0, 0);
      HIDWORD(v56) = BaseEntityRenderContext::getScreenContext(_R9);
      LODWORD(v56) = (char *)v4 + 564;
      ModelPart::render(v56, (int)v4 + 76, 1031798784, 0, 0);
  *((_DWORD *)v4 + 27) = v48;
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v63);
}


void __fastcall BannerRenderer::~BannerRenderer(BannerRenderer *this)
{
  BannerRenderer *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E673C;
  v2 = (BannerRenderer *)((char *)this + 124);
  mce::MaterialPtr::~MaterialPtr((BannerRenderer *)((char *)this + 1504));
  mce::MaterialPtr::~MaterialPtr((BannerRenderer *)((char *)v1 + 1492));
  mce::TexturePtr::~TexturePtr((BannerRenderer *)((char *)v1 + 1468));
  *((_DWORD *)v1 + 19) = &off_26E6758;
  mce::MaterialPtr::~MaterialPtr((BannerRenderer *)((char *)v1 + 1456));
  mce::MaterialPtr::~MaterialPtr((BannerRenderer *)((char *)v1 + 1444));
  ModelPart::~ModelPart((BannerRenderer *)((char *)v1 + 1224));
  ModelPart::~ModelPart((BannerRenderer *)((char *)v1 + 1004));
  ModelPart::~ModelPart((BannerRenderer *)((char *)v1 + 784));
  ModelPart::~ModelPart((BannerRenderer *)((char *)v1 + 564));
  ModelPart::~ModelPart((BannerRenderer *)((char *)v1 + 344));
  ModelPart::~ModelPart(v2);
  Model::~Model((BannerRenderer *)((char *)v1 + 76));
  BlockEntityRenderer::~BlockEntityRenderer(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall BannerRenderer::renderInGui(BannerRenderer *this, BaseEntityRenderContext *a2, BlockEntity *a3, float a4, float a5, float a6, int a7, float a8)
{
  BlockEntity *v8; // r8@1
  BaseEntityRenderContext *v9; // r5@1
  BannerRenderer *v11; // r4@1
  int v12; // r0@1
  int v20; // r7@1
  int v21; // r7@1
  int v22; // r0@1
  int v24; // r7@1
  int v25; // r0@1
  __int64 v26; // r0@2
  __int64 v27; // r0@3
  int v28; // ST04_4@4
  __int64 v29; // r0@4
  char v31; // [sp+Ch] [bp-64h]@1
  int v32; // [sp+14h] [bp-5Ch]@1
  int v33; // [sp+18h] [bp-58h]@1
  int v34; // [sp+1Ch] [bp-54h]@1
  int v35; // [sp+20h] [bp-50h]@1
  int v36; // [sp+24h] [bp-4Ch]@1
  int v37; // [sp+28h] [bp-48h]@1
  int v38; // [sp+2Ch] [bp-44h]@1
  int v39; // [sp+30h] [bp-40h]@1
  int v40; // [sp+34h] [bp-3Ch]@1
  int v41; // [sp+38h] [bp-38h]@1
  int v42; // [sp+3Ch] [bp-34h]@1
  int v43; // [sp+40h] [bp-30h]@1
  int v44; // [sp+44h] [bp-2Ch]@1
  int v45; // [sp+48h] [bp-28h]@1
  int v46; // [sp+4Ch] [bp-24h]@1
  int v47; // [sp+50h] [bp-20h]@1
  int v48; // [sp+54h] [bp-1Ch]@1

  v8 = a3;
  v9 = a2;
  _R7 = a4;
  v11 = this;
  BannerRenderer::_setupBannerConstants(this, a3);
  *((_DWORD *)v11 + 26) = (char *)v11 + 1492;
  v12 = BaseEntityRenderContext::getWorldMatrix(v9);
  MatrixStack::push((MatrixStack *)&v31, v12);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v31);
  __asm
  {
    VMOV.F32        S0, #11.0
    VLDR            S4, [SP,#0x70+arg_0]
    VMOV.F32        S2, #8.5
    VLDR            S8, [R0,#0xC]
    VMOV            S6, R7
    VLDR            S10, [R0,#0x10]
    VLDR            S12, [R0,#0x14]
    VMOV.F32        S5, #-10.0
    VLDR            S14, [R0,#0x18]
    VLDR            S1, [R0,#0x1C]
    VADD.F32        S0, S4, S0
    VADD.F32        S2, S6, S2
    VLDR            S6, [R0,#8]
    VLDMIA          R0, {S3-S4}
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S12, S12, S0
    VMUL.F32        S4, S4, S2
    VMUL.F32        S3, S3, S2
    VMUL.F32        S10, S10, S0
    VMUL.F32        S8, S8, S2
    VMUL.F32        S2, S6, S2
    VLDR            S6, [R0,#0x24]
    VMUL.F32        S14, S14, S0
    VMUL.F32        S0, S1, S0
    VMUL.F32        S1, S7, S5
    VLDR            S7, [R0,#0x28]
    VADD.F32        S4, S12, S4
    VLDR            S12, [R0,#0x2C]
    VADD.F32        S10, S10, S3
    VMUL.F32        S6, S6, S5
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
  }
    VMOV.F32        S2, #5.5
    VLDR            S0, [SP,#0x70+arg_4]
    VMUL.F32        S0, S0, S2
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
  v20 = MatrixStack::MatrixStackRef::operator->((int)&v31);
  v48 = 1101004800;
  glm::rotate<float>((int)&v32, v20, (int)&v48, (int)Vec3::UNIT_X);
  *(_DWORD *)v20 = v32;
  *(_DWORD *)(v20 + 4) = v33;
  *(_DWORD *)(v20 + 8) = v34;
  *(_DWORD *)(v20 + 12) = v35;
  *(_DWORD *)(v20 + 16) = v36;
  *(_DWORD *)(v20 + 20) = v37;
  *(_DWORD *)(v20 + 24) = v38;
  *(_DWORD *)(v20 + 28) = v39;
  *(_DWORD *)(v20 + 32) = v40;
  *(_DWORD *)(v20 + 36) = v41;
  *(_DWORD *)(v20 + 40) = v42;
  *(_DWORD *)(v20 + 44) = v43;
  *(_DWORD *)(v20 + 48) = v44;
  *(_DWORD *)(v20 + 52) = v45;
  *(_DWORD *)(v20 + 56) = v46;
  *(_DWORD *)(v20 + 60) = v47;
  v21 = MatrixStack::MatrixStackRef::operator->((int)&v31);
  v48 = -1041235968;
  glm::rotate<float>((int)&v32, v21, (int)&v48, (int)&Vec3::UNIT_Y);
  *(_DWORD *)v21 = v32;
  *(_DWORD *)(v21 + 4) = v33;
  *(_DWORD *)(v21 + 8) = v34;
  *(_DWORD *)(v21 + 12) = v35;
  *(_DWORD *)(v21 + 16) = v36;
  *(_DWORD *)(v21 + 20) = v37;
  *(_DWORD *)(v21 + 24) = v38;
  *(_DWORD *)(v21 + 28) = v39;
  *(_DWORD *)(v21 + 32) = v40;
  *(_DWORD *)(v21 + 36) = v41;
  *(_DWORD *)(v21 + 40) = v42;
  *(_DWORD *)(v21 + 44) = v43;
  *(_DWORD *)(v21 + 48) = v44;
  *(_DWORD *)(v21 + 52) = v45;
  *(_DWORD *)(v21 + 56) = v46;
  *(_DWORD *)(v21 + 60) = v47;
  v22 = BaseEntityRenderContext::getScreenContext(v9);
    VLDR            S0, [SP,#0x70+arg_C]
    VMOV            R2, S0
  EntityShaderManager::_setupShaderParameters((int)v11, v22, _R2, (int)&Color::NIL, 0);
  v24 = BannerBlockEntity::getPatternCount(v8);
  v25 = (int)v11 + 1504;
  if ( a7 == 1 )
    *((_DWORD *)v11 + 108) = v25;
    HIDWORD(v26) = BaseEntityRenderContext::getScreenContext(v9);
    LODWORD(v26) = (char *)v11 + 344;
    ModelPart::render(v26, (int)v11 + 76, 1031798784, 0, 0);
    *((_DWORD *)v11 + 108) = (char *)v11 + 1456;
  else
    *((_DWORD *)v11 + 163) = v25;
    HIDWORD(v27) = BaseEntityRenderContext::getScreenContext(v9);
    LODWORD(v27) = (char *)v11 + 564;
    ModelPart::render(v27, (int)v11 + 76, 1031798784, 0, 0);
    *((_DWORD *)v11 + 163) = (char *)v11 + 1456;
  BaseEntityRenderContext::getScreenContext(v9);
  v28 = mce::PolygonHelper::calculateIndexCountForQuads((mce::PolygonHelper *)(24 * v24 + 24), 0x18u);
  LODWORD(v29) = (char *)v11 + 124;
  ModelPart::render(v29, (int)v11 + 76, 1031798784, 0, v28);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v31);
}


int __fastcall BannerRenderer::renderByItem(BannerRenderer *this, BaseEntityRenderContext *a2, const ItemInstance *a3)
{
  BaseEntityRenderContext *v3; // r5@1
  BannerRenderer *v4; // r4@1
  const ItemInstance *v5; // r6@1
  int v6; // r0@1
  int *v12; // r0@2
  int *v13; // r0@3
  ListTag *v14; // r0@3
  mce::PolygonHelper *v15; // r6@3
  __int64 v17; // r0@6
  unsigned int v18; // r1@6
  int v19; // ST04_4@6
  __int64 v20; // r0@6
  char v22; // [sp+Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v22, v6);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v22);
  __asm
  {
    VLDR            S0, [R0]
    VMOV.F32        S10, #0.5
    VLDR            S12, [R0,#0x20]
    VLDR            S2, [R0,#4]
    VADD.F32        S0, S12, S0
    VLDR            S8, [R0,#0x24]
    VLDR            S4, [R0,#8]
    VLDR            S14, [R0,#0x28]
    VADD.F32        S2, S8, S2
    VLDR            S6, [R0,#0xC]
    VLDR            S12, [R0,#0x2C]
    VADD.F32        S4, S14, S4
    VLDR            S8, =0.48
    VADD.F32        S6, S12, S6
    VLDR            S14, [R0,#0x10]
    VLDR            S1, [R0,#0x14]
    VMUL.F32        S0, S0, S10
    VMUL.F32        S14, S14, S8
    VLDR            S3, [R0,#0x1C]
    VMUL.F32        S12, S1, S8
    VLDR            S1, [R0,#0x18]
    VMUL.F32        S2, S2, S10
    VMUL.F32        S1, S1, S8
    VMUL.F32        S4, S4, S10
    VMUL.F32        S6, S6, S10
    VLDR            S10, [R0,#0x34]
    VMUL.F32        S8, S3, S8
    VADD.F32        S0, S0, S14
    VADD.F32        S2, S2, S12
    VLDR            S12, [R0,#0x38]
    VADD.F32        S4, S4, S1
    VADD.F32        S6, S6, S8
    VLDR            S8, [R0,#0x30]
    VADD.F32        S0, S0, S8
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S12
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
  }
  *((_DWORD *)v4 + 40) = 0;
  BannerRenderer::_setupBannerConstants(0, v5);
  *((_DWORD *)v4 + 26) = (char *)v4 + 1444;
  if ( ItemInstance::hasUserData(v5) == 1 )
    v12 = (int *)ItemInstance::getUserData(v5);
    if ( CompoundTag::contains(*v12, (const void **)&BannerBlockEntity::TAG_PATTERNS) == 1 )
    {
      v13 = (int *)ItemInstance::getUserData(v5);
      v14 = (ListTag *)CompoundTag::getList(*v13, (const void **)&BannerBlockEntity::TAG_PATTERNS);
      v15 = (mce::PolygonHelper *)(24 * ListTag::size(v14) + 24);
    }
    else
      v15 = (mce::PolygonHelper *)24;
  else
    v15 = (mce::PolygonHelper *)24;
    VLDR            S0, =0.64
    VLDR            S2, [R0]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0]
    VSTR            S2, [R0,#4]
    VLDR            S2, [R0,#8]
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VMUL.F32        S0, S2, S0
    VLDR            S2, =-0.64
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
  HIDWORD(v17) = BaseEntityRenderContext::getScreenContext(v3);
  LODWORD(v17) = (char *)v4 + 344;
  ModelPart::render(v17, (int)v4 + 76, 1031798784, 0, 0);
  BaseEntityRenderContext::getScreenContext(v3);
  v19 = mce::PolygonHelper::calculateIndexCountForQuads(v15, v18);
  LODWORD(v20) = (char *)v4 + 124;
  ModelPart::render(v20, (int)v4 + 76, 1031798784, 0, v19);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v22);
}


int __fastcall BannerRenderer::~BannerRenderer(BannerRenderer *this)
{
  BannerRenderer *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E673C;
  v2 = (BannerRenderer *)((char *)this + 124);
  mce::MaterialPtr::~MaterialPtr((BannerRenderer *)((char *)this + 1504));
  mce::MaterialPtr::~MaterialPtr((BannerRenderer *)((char *)v1 + 1492));
  mce::TexturePtr::~TexturePtr((BannerRenderer *)((char *)v1 + 1468));
  *((_DWORD *)v1 + 19) = &off_26E6758;
  mce::MaterialPtr::~MaterialPtr((BannerRenderer *)((char *)v1 + 1456));
  mce::MaterialPtr::~MaterialPtr((BannerRenderer *)((char *)v1 + 1444));
  ModelPart::~ModelPart((BannerRenderer *)((char *)v1 + 1224));
  ModelPart::~ModelPart((BannerRenderer *)((char *)v1 + 1004));
  ModelPart::~ModelPart((BannerRenderer *)((char *)v1 + 784));
  ModelPart::~ModelPart((BannerRenderer *)((char *)v1 + 564));
  ModelPart::~ModelPart((BannerRenderer *)((char *)v1 + 344));
  ModelPart::~ModelPart(v2);
  Model::~Model((BannerRenderer *)((char *)v1 + 76));
  return j_j_j__ZN19BlockEntityRendererD2Ev_0(v1);
}
