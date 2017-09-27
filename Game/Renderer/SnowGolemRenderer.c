

BaseEntityRenderer *__fastcall SnowGolemRenderer::~SnowGolemRenderer(SnowGolemRenderer *this)
{
  SnowGolemRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DC178;
  *((_DWORD *)this + 161) = &off_26DC1DC;
  mce::Mesh::~Mesh((SnowGolemRenderer *)((char *)this + 656));
  AppPlatformListener::~AppPlatformListener((SnowGolemRenderer *)((char *)v1 + 644));
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


void __fastcall SnowGolemRenderer::~SnowGolemRenderer(SnowGolemRenderer *this)
{
  SnowGolemRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DC178;
  *((_DWORD *)this + 161) = &off_26DC1DC;
  mce::Mesh::~Mesh((SnowGolemRenderer *)((char *)this + 656));
  AppPlatformListener::~AppPlatformListener((SnowGolemRenderer *)((char *)v1 + 644));
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall SnowGolemRenderer::~SnowGolemRenderer(SnowGolemRenderer *this)
{
  SnowGolemRenderer::~SnowGolemRenderer(this);
}


int __fastcall SnowGolemRenderer::additionalRendering(SnowGolemRenderer *this, BaseEntityRenderContext *a2, Model *a3, Mob *a4, float a5, float a6, float a7, float a8, float a9, float a10)
{
  Entity *v14; // r6@1
  Model *v15; // r10@1
  BaseEntityRenderContext *v16; // r7@1
  SnowGolemRenderer *v17; // r11@1
  int result; // r0@1
  Tessellator *v19; // r9@3
  BlockTessellator *v20; // r0@4
  int v21; // r0@5
  ModelPart *v22; // r2@5
  char *v23; // r0@5
  int v25; // r4@5
  int v28; // r6@5
  int v30; // r6@5
  int v32; // r6@5
  BlockTessellator *v36; // r0@6
  char *v37; // r0@6
  int v38; // r4@7
  float v39; // [sp+0h] [bp-218h]@0
  float v40; // [sp+4h] [bp-214h]@0
  float v41; // [sp+8h] [bp-210h]@0
  float v42; // [sp+Ch] [bp-20Ch]@0
  float v43; // [sp+10h] [bp-208h]@0
  float v44; // [sp+14h] [bp-204h]@0
  char v45; // [sp+18h] [bp-200h]@7
  char v46; // [sp+30h] [bp-1E8h]@6
  char v47; // [sp+48h] [bp-1D0h]@6
  char v48; // [sp+49h] [bp-1CFh]@6
  char v49; // [sp+4Ch] [bp-1CCh]@5
  char v53; // [sp+128h] [bp-F0h]@5
  char v54; // [sp+130h] [bp-E8h]@4
  char v55; // [sp+194h] [bp-84h]@4
  char v56; // [sp+195h] [bp-83h]@4
  int v57; // [sp+198h] [bp-80h]@5
  int v58; // [sp+19Ch] [bp-7Ch]@5
  int v59; // [sp+1A0h] [bp-78h]@5
  int v60; // [sp+1A4h] [bp-74h]@5
  int v61; // [sp+1A8h] [bp-70h]@5
  int v62; // [sp+1ACh] [bp-6Ch]@5
  int v63; // [sp+1B0h] [bp-68h]@5
  int v64; // [sp+1B4h] [bp-64h]@5
  int v65; // [sp+1B8h] [bp-60h]@5
  int v66; // [sp+1BCh] [bp-5Ch]@5
  int v67; // [sp+1C0h] [bp-58h]@5
  int v68; // [sp+1C4h] [bp-54h]@5
  int v69; // [sp+1C8h] [bp-50h]@5
  int v70; // [sp+1CCh] [bp-4Ch]@5
  int v71; // [sp+1D0h] [bp-48h]@5
  int v72; // [sp+1D4h] [bp-44h]@5
  int v73; // [sp+1D8h] [bp-40h]@5
  int v74; // [sp+1DCh] [bp-3Ch]@5
  int v75; // [sp+1E0h] [bp-38h]@5
  int v76; // [sp+1E4h] [bp-34h]@5

  __asm { VLDR            S6, [SP,#0x218+arg_0] }
  v14 = a4;
  __asm { VLDR            S0, [SP,#0x218+arg_C] }
  v15 = a3;
  __asm { VLDR            S2, [SP,#0x218+arg_8] }
  v16 = a2;
  __asm { VLDR            S4, [SP,#0x218+arg_4] }
  v17 = this;
  __asm
  {
    VLDR            S8, [SP,#0x218+arg_10]
    VLDR            S10, [SP,#0x218+arg_14]
    VSTR            S6, [SP,#0x218+var_218]
    VSTR            S4, [SP,#0x218+var_214]
    VSTR            S2, [SP,#0x218+var_210]
    VSTR            S0, [SP,#0x218+var_20C]
    VSTR            S8, [SP,#0x218+var_208]
    VSTR            S10, [SP,#0x218+var_204]
  }
  MobRenderer::additionalRendering(this, a2, a3, a4, v39, v40, v41, v42, v43, v44);
  result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v14 + 172))(v14);
  if ( !result )
    result = Entity::isSheared(v14);
    if ( !result )
    {
      v19 = (Tessellator *)BaseEntityRenderContext::getTessellator(v16);
      if ( !mce::Mesh::isValid((SnowGolemRenderer *)((char *)v17 + 656)) )
      {
        Tessellator::begin(v19, 0, 0);
        Tessellator::voidBeginAndEndCalls(v19, 1);
        v20 = (BlockTessellator *)*((_DWORD *)v17 + 163);
        v55 = *(_BYTE *)(Block::mPumpkin + 4);
        v56 = 0;
        BlockTessellator::appendTessellatedBlock(v20, v19, (const FullBlock *)&v55);
        Tessellator::voidBeginAndEndCalls(v19, 0);
        Tessellator::end((Tessellator *)&v54, (const char *)v19, 0, 0);
        mce::Mesh::operator=((int)v17 + 656, (int)&v54);
        mce::Mesh::~Mesh((mce::Mesh *)&v54);
      }
      v21 = BaseEntityRenderContext::getWorldMatrix(v16);
      MatrixStack::push((MatrixStack *)&v53, v21);
      ModelPart::ModelPart(COERCE_FLOAT(&v49), 0, 0, 64, 32);
      Model::copyModelPart((Model *)((char *)v15 + 512), (const ModelPart *)&v49, v22);
      v23 = Entity::getEntityData(v14);
      _R6 = SynchedEntityData::getFloat((SynchedEntityData *)v23, 39);
      v25 = MatrixStack::MatrixStackRef::operator->((int)&v53);
      v57 = 1065353216;
      v58 = 0;
      v59 = 0;
      v76 = 1127481344;
      glm::rotate<float>((int)&v60, v25, (int)&v76, (int)&v57);
      *(_DWORD *)v25 = v60;
      *(_DWORD *)(v25 + 4) = v61;
      *(_DWORD *)(v25 + 8) = v62;
      *(_DWORD *)(v25 + 12) = v63;
      *(_DWORD *)(v25 + 16) = v64;
      *(_DWORD *)(v25 + 20) = v65;
      *(_DWORD *)(v25 + 24) = v66;
      *(_DWORD *)(v25 + 28) = v67;
      *(_DWORD *)(v25 + 32) = v68;
      *(_DWORD *)(v25 + 36) = v69;
      *(_DWORD *)(v25 + 40) = v70;
      *(_DWORD *)(v25 + 44) = v71;
      *(_DWORD *)(v25 + 48) = v72;
      *(_DWORD *)(v25 + 52) = v73;
      *(_DWORD *)(v25 + 56) = v74;
      *(_DWORD *)(v25 + 60) = v75;
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v53);
      __asm
        VMOV.F32        S0, #0.625
        VLDR            S2, [R0]
        VMOV            S16, R6
        VMUL.F32        S0, S16, S0
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
        VMOV.F32        S0, #-0.3125
        VLDR            S4, [R0,#0x18]
        VLDR            S6, [R0,#0x1C]
        VLDR            S8, [R0,#0x10]
        VLDR            S10, [R0,#0x34]
        VLDR            S12, [R0,#0x38]
        VLDR            S14, [R0,#0x3C]
        VMUL.F32        S4, S4, S0
        VMUL.F32        S8, S8, S0
        VMUL.F32        S0, S6, S0
        VLDR            S6, [R0,#0x30]
        VADD.F32        S2, S10, S2
        VADD.F32        S4, S12, S4
        VADD.F32        S6, S6, S8
        VADD.F32        S0, S14, S0
        VSTR            S6, [R0,#0x30]
        VSTR            S2, [R0,#0x34]
        VSTR            S4, [R0,#0x38]
        VSTR            S0, [R0,#0x3C]
      v28 = MatrixStack::MatrixStackRef::operator->((int)&v53);
      __asm { VLDR            S0, [SP,#0x218+var_1A0] }
      _R0 = &mce::Math::RADDEG;
      v57 = 0;
      v59 = 1065353216;
        VSTR            S0, [SP,#0x218+var_34]
      glm::rotate<float>((int)&v60, v28, (int)&v76, (int)&v57);
      *(_DWORD *)v28 = v60;
      *(_DWORD *)(v28 + 4) = v61;
      *(_DWORD *)(v28 + 8) = v62;
      *(_DWORD *)(v28 + 12) = v63;
      *(_DWORD *)(v28 + 16) = v64;
      *(_DWORD *)(v28 + 20) = v65;
      *(_DWORD *)(v28 + 24) = v66;
      *(_DWORD *)(v28 + 28) = v67;
      *(_DWORD *)(v28 + 32) = v68;
      *(_DWORD *)(v28 + 36) = v69;
      *(_DWORD *)(v28 + 40) = v70;
      *(_DWORD *)(v28 + 44) = v71;
      *(_DWORD *)(v28 + 48) = v72;
      *(_DWORD *)(v28 + 52) = v73;
      *(_DWORD *)(v28 + 56) = v74;
      *(_DWORD *)(v28 + 60) = v75;
      v30 = MatrixStack::MatrixStackRef::operator->((int)&v53);
      __asm { VLDR            S0, [SP,#0x218+var_1A4] }
      *(_QWORD *)&v57 = 4575657221408423936LL;
        VNMUL.F32       S0, S0, S2
      glm::rotate<float>((int)&v60, v30, (int)&v76, (int)&v57);
      *(_DWORD *)v30 = v60;
      *(_DWORD *)(v30 + 4) = v61;
      *(_DWORD *)(v30 + 8) = v62;
      *(_DWORD *)(v30 + 12) = v63;
      *(_DWORD *)(v30 + 16) = v64;
      *(_DWORD *)(v30 + 20) = v65;
      *(_DWORD *)(v30 + 24) = v66;
      *(_DWORD *)(v30 + 28) = v67;
      *(_DWORD *)(v30 + 32) = v68;
      *(_DWORD *)(v30 + 36) = v69;
      *(_DWORD *)(v30 + 40) = v70;
      *(_DWORD *)(v30 + 44) = v71;
      *(_DWORD *)(v30 + 48) = v72;
      *(_DWORD *)(v30 + 52) = v73;
      *(_DWORD *)(v30 + 56) = v74;
      *(_DWORD *)(v30 + 60) = v75;
      v32 = MatrixStack::MatrixStackRef::operator->((int)&v53);
      __asm { VLDR            S0, [SP,#0x218+var_1A8] }
      __asm { VLDR            S2, [R0] }
      __asm { VMUL.F32        S0, S2, S0 }
      __asm { VSTR            S0, [SP,#0x218+var_34] }
      glm::rotate<float>((int)&v60, v32, (int)&v76, (int)&v57);
      *(_DWORD *)v32 = v60;
      *(_DWORD *)(v32 + 4) = v61;
      *(_DWORD *)(v32 + 8) = v62;
      *(_DWORD *)(v32 + 12) = v63;
      *(_DWORD *)(v32 + 16) = v64;
      *(_DWORD *)(v32 + 20) = v65;
      *(_DWORD *)(v32 + 24) = v66;
      *(_DWORD *)(v32 + 28) = v67;
      *(_DWORD *)(v32 + 32) = v68;
      *(_DWORD *)(v32 + 36) = v69;
      *(_DWORD *)(v32 + 40) = v70;
      *(_DWORD *)(v32 + 44) = v71;
      *(_DWORD *)(v32 + 48) = v72;
      *(_DWORD *)(v32 + 52) = v73;
      *(_DWORD *)(v32 + 56) = v74;
      *(_DWORD *)(v32 + 60) = v75;
        VMOV.F32        S0, #0.3125
        VMOV.F32        S0, #0.15625
      if ( Tessellator::forceTessellateIntercept(v19) == 1 )
        v36 = (BlockTessellator *)*((_DWORD *)v17 + 163);
        v47 = *(_BYTE *)(Block::mPumpkin + 4);
        v48 = 0;
        BlockTessellator::appendTessellatedBlock(v36, v19, (const FullBlock *)&v47);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v46, (int)v17);
        Tessellator::triggerIntercept(v19, (Model *)((char *)v15 + 60), (const mce::TexturePtr *)&v46);
        v37 = &v46;
      else
        v38 = BaseEntityRenderContext::getScreenContext(v16);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v45, (int)v17);
        mce::Mesh::render((SnowGolemRenderer *)((char *)v17 + 656), v38, (int)v15 + 60, (int)&v45, 0, 0);
        v37 = &v45;
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)v37);
      ModelPart::~ModelPart((ModelPart *)&v49);
      result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v53);
    }
  return result;
}


int __fastcall SnowGolemRenderer::SnowGolemRenderer(int a1, mce::TextureGroup *a2, const GeometryPtr *a3, int a4)
{
  int v4; // r4@1
  int v5; // r8@1
  const GeometryPtr *v6; // r5@1
  mce::TextureGroup *v7; // r6@1
  SnowGolemModel *v8; // r7@1
  char *v9; // r0@1
  char *v10; // r0@2
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  char *v16; // [sp+4h] [bp-44h]@1
  char *v17; // [sp+8h] [bp-40h]@1
  int v18; // [sp+Ch] [bp-3Ch]@1
  char v19; // [sp+10h] [bp-38h]@1
  SnowGolemModel *v20; // [sp+28h] [bp-20h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (SnowGolemModel *)operator new(0x494u);
  SnowGolemModel::SnowGolemModel(v8, v6);
  v20 = v8;
  sub_119C884((void **)&v16, "textures/entity/snow_golem");
  v17 = v16;
  v16 = (char *)&unk_28898CC;
  v18 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v19, v7, (int)&v17, 0);
  MobRenderer::MobRenderer(v4, (int *)&v20, (mce::TexturePtr *)&v19);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v19);
  v9 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v17 - 4);
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
  }
  v10 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  v20 = 0;
  AppPlatformListener::AppPlatformListener((_QWORD *)(v4 + 644));
  *(_DWORD *)v4 = &off_26DC178;
  *(_DWORD *)(v4 + 644) = &off_26DC1DC;
  *(_DWORD *)(v4 + 652) = v5;
  mce::Mesh::Mesh((mce::Mesh *)(v4 + 656));
  MobRenderer::setArmor((MobRenderer *)v4, *(Model **)(v4 + 140));
  return v4;
}
