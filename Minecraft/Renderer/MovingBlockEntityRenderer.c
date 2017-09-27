

void __fastcall MovingBlockEntityRenderer::~MovingBlockEntityRenderer(MovingBlockEntityRenderer *this)
{
  MovingBlockEntityRenderer::~MovingBlockEntityRenderer(this);
}


BaseEntityRenderer *__fastcall MovingBlockEntityRenderer::MovingBlockEntityRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int a3)
{
  int v3; // r6@1
  mce::TextureGroup *v4; // r5@1
  BaseEntityRenderer *v5; // r4@1
  char *v6; // r0@1
  char *v7; // r0@2
  void *v8; // r0@3
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  void *v15; // r0@10
  void *v16; // r0@11
  unsigned int *v18; // r2@13
  signed int v19; // r1@15
  unsigned int *v20; // r2@17
  signed int v21; // r1@19
  unsigned int *v22; // r2@21
  signed int v23; // r1@23
  unsigned int *v24; // r2@25
  signed int v25; // r1@27
  unsigned int *v26; // r2@29
  signed int v27; // r1@31
  unsigned int *v28; // r2@33
  signed int v29; // r1@35
  unsigned int *v30; // r2@37
  signed int v31; // r1@39
  unsigned int *v32; // r2@41
  signed int v33; // r1@43
  unsigned int *v34; // r2@45
  signed int v35; // r1@47
  unsigned int *v36; // r2@49
  signed int v37; // r1@51
  unsigned int *v38; // r2@53
  signed int v39; // r1@55
  int v40; // [sp+20h] [bp-E8h]@11
  char v41; // [sp+24h] [bp-E4h]@11
  int v42; // [sp+34h] [bp-D4h]@10
  char v43; // [sp+38h] [bp-D0h]@10
  int v44; // [sp+48h] [bp-C0h]@9
  char v45; // [sp+4Ch] [bp-BCh]@9
  int v46; // [sp+5Ch] [bp-ACh]@8
  char v47; // [sp+60h] [bp-A8h]@8
  int v48; // [sp+70h] [bp-98h]@7
  char v49; // [sp+74h] [bp-94h]@7
  int v50; // [sp+84h] [bp-84h]@6
  char v51; // [sp+88h] [bp-80h]@6
  int v52; // [sp+98h] [bp-70h]@5
  char v53; // [sp+9Ch] [bp-6Ch]@5
  int v54; // [sp+ACh] [bp-5Ch]@4
  char v55; // [sp+B0h] [bp-58h]@4
  int v56; // [sp+C0h] [bp-48h]@3
  char v57; // [sp+C4h] [bp-44h]@3
  char *v58; // [sp+D4h] [bp-34h]@1
  char *v59; // [sp+D8h] [bp-30h]@1
  int v60; // [sp+DCh] [bp-2Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v5 = &off_26DB020;
  *((_DWORD *)v5 + 19) = v3;
  sub_119C884((void **)&v58, "atlas.terrain");
  v59 = v58;
  v58 = (char *)&unk_28898CC;
  v60 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 80), v4, (int)&v59, 0);
  v6 = v59 - 12;
  if ( (int *)(v59 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v59 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = v58 - 12;
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v58 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  mce::MaterialPtr::MaterialPtr((BaseEntityRenderer *)((char *)v5 + 104));
  mce::MaterialPtr::MaterialPtr((BaseEntityRenderer *)((char *)v5 + 116));
  mce::MaterialPtr::MaterialPtr((BaseEntityRenderer *)((char *)v5 + 128));
  mce::MaterialPtr::MaterialPtr((BaseEntityRenderer *)((char *)v5 + 140));
  mce::MaterialPtr::MaterialPtr((BaseEntityRenderer *)((char *)v5 + 152));
  mce::MaterialPtr::MaterialPtr((BaseEntityRenderer *)((char *)v5 + 164));
  mce::MaterialPtr::MaterialPtr((BaseEntityRenderer *)((char *)v5 + 176));
  mce::MaterialPtr::MaterialPtr((BaseEntityRenderer *)((char *)v5 + 188));
  mce::MaterialPtr::MaterialPtr((BaseEntityRenderer *)((char *)v5 + 200));
  mce::MaterialPtr::MaterialPtr((BaseEntityRenderer *)((char *)v5 + 212));
  sub_119C884((void **)&v56, "moving_block_double_side");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)&v57,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v56);
  mce::MaterialPtr::operator=((BaseEntityRenderer *)((char *)v5 + 104), (mce::MaterialPtr *)&v57);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v57);
  v8 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v56 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v54, "moving_block_blend");
    (mce::MaterialPtr *)&v55,
    &v54);
  mce::MaterialPtr::operator=((BaseEntityRenderer *)((char *)v5 + 116), (mce::MaterialPtr *)&v55);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v55);
  v9 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v54 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v52, "moving_block");
    (mce::MaterialPtr *)&v53,
    &v52);
  mce::MaterialPtr::operator=((BaseEntityRenderer *)((char *)v5 + 128), (mce::MaterialPtr *)&v53);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v53);
  v10 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v52 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v50, "moving_block");
    (mce::MaterialPtr *)&v51,
    &v50);
  mce::MaterialPtr::operator=((BaseEntityRenderer *)((char *)v5 + 140), (mce::MaterialPtr *)&v51);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v51);
  v11 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v50 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v48, "moving_block_alpha");
    (mce::MaterialPtr *)&v49,
    &v48);
  mce::MaterialPtr::operator=((BaseEntityRenderer *)((char *)v5 + 152), (mce::MaterialPtr *)&v49);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v49);
  v12 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v48 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v46, "moving_block_alpha");
    (mce::MaterialPtr *)&v47,
    &v46);
  mce::MaterialPtr::operator=((BaseEntityRenderer *)((char *)v5 + 164), (mce::MaterialPtr *)&v47);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v47);
  v13 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v46 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v44, "moving_block_seasons");
    (mce::MaterialPtr *)&v45,
    &v44);
  mce::MaterialPtr::operator=((BaseEntityRenderer *)((char *)v5 + 176), (mce::MaterialPtr *)&v45);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v45);
  v14 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v44 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v42, "moving_block_alpha_seasons");
    (mce::MaterialPtr *)&v43,
    &v42);
  mce::MaterialPtr::operator=((BaseEntityRenderer *)((char *)v5 + 188), (mce::MaterialPtr *)&v43);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v43);
  v15 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v42 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v40, "moving_block_alpha_single_side");
    (mce::MaterialPtr *)&v41,
    &v40);
  mce::MaterialPtr::operator=((BaseEntityRenderer *)((char *)v5 + 200), (mce::MaterialPtr *)&v41);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v41);
  v16 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v40 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  return v5;
}


int __fastcall MovingBlockEntityRenderer::~MovingBlockEntityRenderer(MovingBlockEntityRenderer *this)
{
  MovingBlockEntityRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB020;
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)this + 212));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 200));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 188));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 176));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 164));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 152));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 140));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 128));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 116));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 104));
  mce::TexturePtr::~TexturePtr((MovingBlockEntityRenderer *)((char *)v1 + 80));
  return j_j_j__ZN19BlockEntityRendererD2Ev(v1);
}


int __fastcall MovingBlockEntityRenderer::render(MovingBlockEntityRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  BaseEntityRenderContext *v3; // r4@1
  BlockEntityRenderData *v4; // r5@1
  int v5; // r0@1
  __int64 v6; // kr00_8@1
  int v7; // r8@1
  char *v9; // r0@1
  int v10; // r5@1
  Block *v11; // r11@1
  char *v12; // r0@1
  int (__fastcall *v13)(Block *, _DWORD, char *, int); // r6@1
  char *v14; // r0@1
  int v15; // r0@1
  char *v23; // r5@1
  int v25; // r0@1
  Tessellator *v26; // r5@1
  int v27; // r4@1
  int v28; // r11@2
  int v29; // r7@2
  mce::Buffer *v30; // r9@4
  int v31; // r0@4
  int v32; // r4@6
  int v33; // r0@6
  mce::Buffer *v34; // r4@6
  int v35; // r5@6
  int v36; // r0@6
  BlockEntity *v37; // r4@6
  int v38; // r5@7
  char *v39; // r0@7
  int v40; // r0@7
  int v42; // [sp+0h] [bp-98h]@0
  Block *v43; // [sp+18h] [bp-80h]@1
  BaseEntityRenderContext *v44; // [sp+20h] [bp-78h]@1
  MovingBlockEntityRenderer *v45; // [sp+24h] [bp-74h]@1
  BlockEntity *v46; // [sp+28h] [bp-70h]@1
  char v47; // [sp+2Ch] [bp-6Ch]@7
  float v48; // [sp+38h] [bp-60h]@1
  float v51; // [sp+44h] [bp-54h]@1
  char v54; // [sp+50h] [bp-48h]@1
  int v55; // [sp+58h] [bp-40h]@1
  int v56; // [sp+5Ch] [bp-3Ch]@1
  int v57; // [sp+60h] [bp-38h]@1
  unsigned __int8 v58; // [sp+64h] [bp-34h]@1
  char v59; // [sp+65h] [bp-33h]@1

  v3 = a2;
  v45 = this;
  v4 = a3;
  v5 = BaseEntityRenderContext::getScreenContext(a2);
  v6 = *(_QWORD *)v4;
  v7 = v5;
  _R10 = *((_DWORD *)v4 + 2);
  v46 = (BlockEntity *)(*(_QWORD *)v4 >> 32);
  v9 = MovingBlockEntity::getBlock(v46);
  v58 = *v9;
  v10 = (unsigned __int8)v9[1];
  v11 = (Block *)Block::mBlocks[v58];
  v12 = BlockEntity::getPosition((BlockEntity *)HIDWORD(v6));
  v55 = *(_DWORD *)v12;
  v56 = *((_DWORD *)v12 + 1);
  v57 = *((_DWORD *)v12 + 2);
  v13 = *(int (__fastcall **)(Block *, _DWORD, char *, int))(*(_DWORD *)v11 + 300);
  v14 = BlockEntity::getPosition((BlockEntity *)HIDWORD(v6));
  v59 = v13(v11, v6, v14, v10);
  v15 = BaseEntityRenderContext::getWorldMatrix(v3);
  MatrixStack::push((MatrixStack *)&v54, v15);
  _R5 = MatrixStack::MatrixStackRef::operator->((int)&v54);
  Vec3::Vec3((int)&v51, (int)&v55);
  __asm
  {
    VLDR            S0, [SP,#0x98+var_54]
    VLDR            S6, [R10]
    VLDR            S2, [SP,#0x98+var_50]
    VLDR            S8, [R10,#4]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [SP,#0x98+var_4C]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R10,#8]
    VLDR            S6, [R5]
    VLDR            S8, [R5,#4]
    VSUB.F32        S4, S10, S4
    VLDR            S10, [R5,#0x14]
    VLDR            S1, [R5,#0x10]
    VLDR            S14, [R5,#0xC]
    VMUL.F32        S6, S6, S0
    VLDR            S3, [R5,#0x18]
    VMUL.F32        S8, S8, S0
    VMUL.F32        S10, S10, S2
    VLDR            S12, [R5,#8]
    VMUL.F32        S1, S1, S2
    VLDR            S5, [R5,#0x1C]
    VMUL.F32        S14, S14, S0
    VLDR            S7, [R5,#0x20]
    VMUL.F32        S0, S12, S0
    VLDR            S12, [R5,#0x24]
    VMUL.F32        S3, S3, S2
    VMUL.F32        S2, S5, S2
    VMUL.F32        S5, S7, S4
    VLDR            S7, [R5,#0x28]
    VADD.F32        S8, S10, S8
    VLDR            S10, [R5,#0x2C]
    VADD.F32        S6, S1, S6
    VMUL.F32        S12, S12, S4
    VMUL.F32        S1, S7, S4
    VADD.F32        S0, S3, S0
    VMUL.F32        S4, S10, S4
    VLDR            S10, [R5,#0x34]
    VADD.F32        S2, S2, S14
    VADD.F32        S6, S6, S5
    VADD.F32        S8, S8, S12
    VLDR            S12, [R5,#0x38]
    VADD.F32        S0, S0, S1
    VADD.F32        S2, S2, S4
    VLDR            S4, [R5,#0x30]
    VADD.F32        S4, S6, S4
    VLDR            S6, [R5,#0x3C]
    VADD.F32        S8, S8, S10
    VADD.F32        S0, S0, S12
    VADD.F32        S2, S2, S6
    VSTR            S4, [R5,#0x30]
    VSTR            S8, [R5,#0x34]
    VSTR            S0, [R5,#0x38]
    VSTR            S2, [R5,#0x3C]
  }
  MovingBlockEntity::getDrawPos((MovingBlockEntity *)&v48, v46, *(float *)&v6, *((float *)v3 + 1));
    VLDR            S0, [SP,#0x98+var_60]
    VLDR            S10, [R5,#0xC]
    VLDR            S2, [SP,#0x98+var_5C]
    VLDR            S12, [R5,#0x10]
    VMUL.F32        S10, S10, S0
    VLDR            S14, [R5,#0x14]
    VLDR            S1, [R5,#0x18]
    VMUL.F32        S12, S12, S2
    VLDR            S4, [SP,#0x98+var_58]
    VMUL.F32        S14, S14, S2
    VLDR            S8, [R5,#8]
    VLDR            S3, [R5,#0x1C]
    VLDMIA          R5, {S5-S6}
    VMUL.F32        S2, S3, S2
    VMUL.F32        S5, S5, S0
    VMUL.F32        S0, S8, S0
    VLDR            S8, [R5,#0x24]
    VMUL.F32        S3, S7, S4
    VMUL.F32        S8, S8, S4
    VADD.F32        S2, S2, S10
    VADD.F32        S6, S14, S6
    VLDR            S14, [R5,#0x2C]
    VADD.F32        S12, S12, S5
    VADD.F32        S0, S1, S0
    VMUL.F32        S4, S14, S4
    VADD.F32        S6, S6, S8
    VLDR            S8, [R5,#0x34]
    VADD.F32        S10, S12, S3
    VADD.F32        S0, S0, S5
    VADD.F32        S4, S10, S4
    VLDR            S10, [R5,#0x3C]
    VSTR            S6, [R5,#0x34]
  v23 = BlockEntity::getPosition(v46);
  _R0 = v3;
  __asm { VLDR            S16, [R0,#4] }
  v44 = v3;
  v25 = BaseEntityRenderContext::isIgnoringLightning(v3);
  __asm { VSTR            S16, [SP,#0x98+var_98] }
  EntityShaderManager::_setupShaderParameters((int)v45, v7, v6, (int)v23, v42, v25, &Vec2::ONE);
  v26 = (Tessellator *)BaseEntityRenderContext::getTessellator(v3);
  v27 = (*(int (__fastcall **)(Block *))(*(_DWORD *)v11 + 412))(v11);
  v43 = v11;
  if ( v27 )
    v28 = 0;
    v29 = (int)v45 + 104;
    do
    {
      if ( (1 << v28) & v27 )
      {
        v30 = (mce::Buffer *)BlockTessellator::getMeshForBlockInWorld(
                               *((_DWORD *)v45 + 19),
                               v26,
                               (int)&v58,
                               (int)&v55,
                               v28,
                               (int)v46);
        v31 = BaseEntityRenderContext::getScreenContext(v44);
        mce::Mesh::render(v30, v31, v29, (int)v45 + 80, 0, 0);
      }
      ++v28;
      v29 += 12;
    }
    while ( v28 != 10 );
  v32 = *((_DWORD *)v45 + 19);
  v33 = Block::getRenderLayer(v43);
  v34 = (mce::Buffer *)BlockTessellator::getMeshForBlockInWorld(v32, v26, (int)&v58, (int)&v55, v33, (int)v46);
  v35 = BaseEntityRenderContext::getScreenContext(v44);
  v36 = Block::getRenderLayer(v43);
  mce::Mesh::render(v34, v35, (int)v45 + 12 * v36 + 104, (int)v45 + 80, 0, 0);
  v37 = (BlockEntity *)MovingBlockEntity::getBlockEntity(v46);
  if ( v37 )
    v38 = BaseEntityRenderContext::getBlockEntityRenderDispatcher(v44);
    v39 = BlockEntity::getPosition(v46);
    Vec3::Vec3((int)&v47, (int)v39);
    BlockEntityRenderDispatcher::render(
      v38,
      (int)v44,
      v6,
      v37,
      v40,
      0,
      (int)&mce::MaterialPtr::NONE,
      (int)&mce::TexturePtr::NONE,
      0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v54);
}


void __fastcall MovingBlockEntityRenderer::~MovingBlockEntityRenderer(MovingBlockEntityRenderer *this)
{
  MovingBlockEntityRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB020;
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)this + 212));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 200));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 188));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 176));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 164));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 152));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 140));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 128));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 116));
  mce::MaterialPtr::~MaterialPtr((MovingBlockEntityRenderer *)((char *)v1 + 104));
  mce::TexturePtr::~TexturePtr((MovingBlockEntityRenderer *)((char *)v1 + 80));
  BlockEntityRenderer::~BlockEntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}
