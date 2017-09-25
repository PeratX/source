

void __fastcall IronGolemRenderer::~IronGolemRenderer(IronGolemRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall IronGolemRenderer::setupRotations(int a1, float a2, int a3, int a4, int a5, int a6)
{
  float v10; // r5@1
  float v11; // r2@1
  int result; // r0@1
  int v16; // [sp+4h] [bp-6Ch]@0
  int v17; // [sp+8h] [bp-68h]@2
  int v18; // [sp+Ch] [bp-64h]@2
  int v19; // [sp+10h] [bp-60h]@2
  int v20; // [sp+14h] [bp-5Ch]@2
  int v21; // [sp+18h] [bp-58h]@2
  int v22; // [sp+1Ch] [bp-54h]@2
  int v23; // [sp+20h] [bp-50h]@2
  int v24; // [sp+24h] [bp-4Ch]@2
  int v25; // [sp+28h] [bp-48h]@2
  int v26; // [sp+2Ch] [bp-44h]@2
  int v27; // [sp+30h] [bp-40h]@2
  int v28; // [sp+34h] [bp-3Ch]@2
  int v29; // [sp+38h] [bp-38h]@2
  int v30; // [sp+3Ch] [bp-34h]@2
  int v31; // [sp+40h] [bp-30h]@2
  int v32; // [sp+44h] [bp-2Ch]@2
  int v33; // [sp+48h] [bp-28h]@2
  int v34; // [sp+4Ch] [bp-24h]@2
  int v35; // [sp+50h] [bp-20h]@2
  float v36; // [sp+54h] [bp-1Ch]@2

  __asm { VLDR            S16, [SP,#0x70+arg_4] }
  v10 = a2;
  __asm { VSTR            S16, [SP,#0x70+var_6C] }
  MobRenderer::setupRotations(a1, a2, a3, a4, a5, v16);
  result = LODWORD(v10) + 3484;
  __asm
  {
    VLDR            D1, =0.01
    VLDR            S0, [R0]
    VCVT.F64.F32    D2, S0
    VCMPE.F64       D2, D1
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm { VMOV.F32        S2, #-1.0 }
    _R0 = LODWORD(v10) + 3488;
    __asm
    {
      VMOV.F32        S4, #6.0
      VADD.F32        S2, S16, S2
      VMUL.F32        S0, S0, S2
      VLDR            S2, [R0]
      VADD.F32        S0, S0, S4
      VADD.F32        S0, S0, S2
      VMOV            R0, S0
    }
    _R0 = mce::Math::remainder(_R0, 13.0, v11);
      VMOV.F32        S0, #-6.5
      VMOV            S2, R0
    v17 = 0;
    v18 = 0;
    v19 = 1065353216;
      VADD.F32        S0, S2, S0
      VMOV.F32        S2, #-3.25
      VABS.F32        S0, S0
      VADD.F32        S0, S0, S0
      VSTR            S0, [SP,#0x70+var_1C]
    glm::rotate<float>((int)&v20, a5, (int)&v36, (int)&v17);
    *(_DWORD *)a5 = v20;
    *(_DWORD *)(a5 + 4) = v21;
    *(_DWORD *)(a5 + 8) = v22;
    *(_DWORD *)(a5 + 12) = v23;
    *(_DWORD *)(a5 + 16) = v24;
    *(_DWORD *)(a5 + 20) = v25;
    *(_DWORD *)(a5 + 24) = v26;
    *(_DWORD *)(a5 + 28) = v27;
    *(_DWORD *)(a5 + 32) = v28;
    *(_DWORD *)(a5 + 36) = v29;
    *(_DWORD *)(a5 + 40) = v30;
    *(_DWORD *)(a5 + 44) = v31;
    *(_DWORD *)(a5 + 48) = v32;
    *(_DWORD *)(a5 + 52) = v33;
    *(_DWORD *)(a5 + 56) = v34;
    result = v35;
    *(_DWORD *)(a5 + 60) = v35;
  return result;
}


int __fastcall IronGolemRenderer::IronGolemRenderer(int a1, mce::TextureGroup *a2, const GeometryPtr *a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  const GeometryPtr *v6; // r4@1
  mce::TextureGroup *v7; // r6@1
  IronGolemModel *v8; // r7@1
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
  IronGolemModel *v20; // [sp+28h] [bp-20h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (IronGolemModel *)operator new(0x564u);
  IronGolemModel::IronGolemModel(v8, v6);
  v20 = v8;
  sub_119C884((void **)&v16, "textures/entity/iron_golem");
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
  *(_DWORD *)v4 = &off_26DB838;
  *(_DWORD *)(v4 + 644) = v5;
  return v4;
}


void __fastcall IronGolemRenderer::~IronGolemRenderer(IronGolemRenderer *this)
{
  IronGolemRenderer::~IronGolemRenderer(this);
}


int __fastcall IronGolemRenderer::additionalRendering(IronGolemRenderer *this, BaseEntityRenderContext *a2, Model *a3, Mob *a4, float a5, float a6, float a7, float a8, float a9, float a10)
{
  Mob *v14; // r6@1
  BaseEntityRenderContext *v15; // r5@1
  IronGolemRenderer *v16; // r4@1
  int result; // r0@1
  int v19; // r0@3
  int v20; // r0@3
  int v21; // r6@3
  int v22; // r1@3
  int v26; // r6@3
  Tessellator *v28; // r6@3
  int v29; // r1@3
  BlockTessellator *v30; // r0@3
  char *v31; // r5@4
  char *v32; // r0@4
  mce::Buffer *v33; // r6@5
  int v34; // r5@5
  char *v35; // r7@5
  float v36; // [sp+0h] [bp-C0h]@0
  float v37; // [sp+4h] [bp-BCh]@0
  float v38; // [sp+8h] [bp-B8h]@0
  float v39; // [sp+Ch] [bp-B4h]@0
  float v40; // [sp+10h] [bp-B0h]@0
  float v41; // [sp+14h] [bp-ACh]@0
  char v42; // [sp+1Ch] [bp-A4h]@5
  char v43; // [sp+34h] [bp-8Ch]@5
  char v44; // [sp+35h] [bp-8Bh]@5
  char v45; // [sp+38h] [bp-88h]@4
  char v46; // [sp+50h] [bp-70h]@4
  char v47; // [sp+51h] [bp-6Fh]@4
  char v48; // [sp+54h] [bp-6Ch]@3
  int v49; // [sp+5Ch] [bp-64h]@3
  int v50; // [sp+60h] [bp-60h]@3
  int v51; // [sp+64h] [bp-5Ch]@3
  int v52; // [sp+68h] [bp-58h]@3
  int v53; // [sp+6Ch] [bp-54h]@3
  int v54; // [sp+70h] [bp-50h]@3
  int v55; // [sp+74h] [bp-4Ch]@3
  int v56; // [sp+78h] [bp-48h]@3
  int v57; // [sp+7Ch] [bp-44h]@3
  int v58; // [sp+80h] [bp-40h]@3
  int v59; // [sp+84h] [bp-3Ch]@3
  int v60; // [sp+88h] [bp-38h]@3
  int v61; // [sp+8Ch] [bp-34h]@3
  int v62; // [sp+90h] [bp-30h]@3
  int v63; // [sp+94h] [bp-2Ch]@3
  int v64; // [sp+98h] [bp-28h]@3
  int v65; // [sp+9Ch] [bp-24h]@3
  int v66; // [sp+A0h] [bp-20h]@3
  int v67; // [sp+A4h] [bp-1Ch]@3
  float v68; // [sp+A8h] [bp-18h]@3

  __asm { VLDR            S6, [SP,#0xC0+arg_0] }
  v14 = a4;
  __asm { VLDR            S0, [SP,#0xC0+arg_C] }
  v15 = a2;
  __asm { VLDR            S2, [SP,#0xC0+arg_8] }
  v16 = this;
  __asm
  {
    VLDR            S4, [SP,#0xC0+arg_4]
    VLDR            S8, [SP,#0xC0+arg_10]
    VLDR            S10, [SP,#0xC0+arg_14]
    VSTR            S6, [SP,#0xC0+var_C0]
    VSTR            S4, [SP,#0xC0+var_BC]
    VSTR            S2, [SP,#0xC0+var_B8]
    VSTR            S0, [SP,#0xC0+var_B4]
    VSTR            S8, [SP,#0xC0+var_B0]
    VSTR            S10, [SP,#0xC0+var_AC]
  }
  MobRenderer::additionalRendering(this, a2, a3, a4, v36, v37, v38, v39, v40, v41);
  result = IronGolem::getOfferFlowerTick(v14);
  if ( result )
    result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v14 + 172))(v14);
    if ( !result )
    {
      _R7 = *((_DWORD *)v16 + 35);
      v19 = BaseEntityRenderContext::getWorldMatrix(v15);
      MatrixStack::push((MatrixStack *)&v48, v19);
      v20 = MatrixStack::MatrixStackRef::operator->((int)&v48);
      v21 = v20;
      __asm
      {
        VLDR            S0, =180.0
        VLDR            S2, [R7,#0x218]
      }
      v22 = v20;
      __asm { VMUL.F32        S0, S2, S0 }
      _R0 = &mce::Math::PI;
      __asm { VLDR            S2, [R0] }
      v49 = 1065353216;
      v50 = 0;
      v51 = 0;
        VDIV.F32        S0, S0, S2
        VMOV.F32        S2, #5.0
        VADD.F32        S0, S0, S2
        VSTR            S0, [SP,#0xC0+var_18]
      glm::rotate<float>((int)&v52, v22, (int)&v68, (int)&v49);
      *(_DWORD *)v21 = v52;
      *(_DWORD *)(v21 + 4) = v53;
      *(_DWORD *)(v21 + 8) = v54;
      *(_DWORD *)(v21 + 12) = v55;
      *(_DWORD *)(v21 + 16) = v56;
      *(_DWORD *)(v21 + 20) = v57;
      *(_DWORD *)(v21 + 24) = v58;
      *(_DWORD *)(v21 + 28) = v59;
      *(_DWORD *)(v21 + 32) = v60;
      *(_DWORD *)(v21 + 36) = v61;
      *(_DWORD *)(v21 + 40) = v62;
      *(_DWORD *)(v21 + 44) = v63;
      *(_DWORD *)(v21 + 48) = v64;
      *(_DWORD *)(v21 + 52) = v65;
      *(_DWORD *)(v21 + 56) = v66;
      *(_DWORD *)(v21 + 60) = v67;
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v48);
        VMOV.F32        S0, #-0.6875
        VLDR            S8, [R0,#0xC]
        VMOV.F32        S2, #1.25
        VLDR            S10, [R0,#0x10]
        VLDR            S12, [R0,#0x14]
        VMOV.F32        S5, #-0.9375
        VLDR            S14, [R0,#0x18]
        VLDR            S6, [R0,#8]
        VLDR            S1, [R0,#0x1C]
        VLDMIA          R0, {S3-S4}
        VMUL.F32        S8, S8, S0
        VMUL.F32        S3, S3, S0
        VLDR            S7, [R0,#0x20]
        VMUL.F32        S10, S10, S2
        VMUL.F32        S4, S4, S0
        VMUL.F32        S12, S12, S2
        VMUL.F32        S0, S6, S0
        VLDR            S6, [R0,#0x24]
        VMUL.F32        S14, S14, S2
        VMUL.F32        S2, S1, S2
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
        VLDR            S10, [R0,#0x34]
        VADD.F32        S4, S4, S6
        VLDR            S6, [R0,#0x30]
        VADD.F32        S0, S0, S3
        VADD.F32        S2, S2, S12
        VLDR            S12, [R0,#0x38]
        VADD.F32        S6, S8, S6
        VLDR            S8, [R0,#0x3C]
        VADD.F32        S4, S4, S10
        VADD.F32        S0, S0, S12
        VSTR            S6, [R0,#0x30]
        VSTR            S4, [R0,#0x34]
        VSTR            S0, [R0,#0x38]
        VSTR            S2, [R0,#0x3C]
      v26 = MatrixStack::MatrixStackRef::operator->((int)&v48);
      v68 = 90.0;
      glm::rotate<float>((int)&v52, v26, (int)&v68, (int)&v49);
      *(_DWORD *)v26 = v52;
      *(_DWORD *)(v26 + 4) = v53;
      *(_DWORD *)(v26 + 8) = v54;
      *(_DWORD *)(v26 + 12) = v55;
      *(_DWORD *)(v26 + 16) = v56;
      *(_DWORD *)(v26 + 20) = v57;
      *(_DWORD *)(v26 + 24) = v58;
      *(_DWORD *)(v26 + 28) = v59;
      *(_DWORD *)(v26 + 32) = v60;
      *(_DWORD *)(v26 + 36) = v61;
      *(_DWORD *)(v26 + 40) = v62;
      *(_DWORD *)(v26 + 44) = v63;
      *(_DWORD *)(v26 + 48) = v64;
      *(_DWORD *)(v26 + 52) = v65;
      *(_DWORD *)(v26 + 56) = v66;
      *(_DWORD *)(v26 + 60) = v67;
        VLDR            S0, =0.8
        VLDR            S2, [R0]
        VLDR            S4, =-0.8
        VMUL.F32        S2, S2, S0
        VSTR            S2, [R0]
        VLDR            S2, [R0,#4]
        VSTR            S2, [R0,#4]
        VLDR            S2, [R0,#8]
        VSTR            S2, [R0,#8]
        VLDR            S2, [R0,#0xC]
        VSTR            S2, [R0,#0xC]
        VLDR            S2, [R0,#0x10]
        VMUL.F32        S2, S2, S4
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
      v28 = (Tessellator *)BaseEntityRenderContext::getTessellator(v15);
      v29 = Tessellator::forceTessellateIntercept(v28);
      v30 = (BlockTessellator *)*((_DWORD *)v16 + 161);
      if ( v29 == 1 )
        v46 = *(_BYTE *)(Block::mRedFlower + 4);
        v47 = 0;
        BlockTessellator::appendTessellatedBlock(v30, v28, (const FullBlock *)&v46);
        v31 = EntityShaderManager::getTransparentEntityMaterial(v16);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v45, (int)v16);
        Tessellator::triggerIntercept(v28, (const mce::MaterialPtr *)v31, (const mce::TexturePtr *)&v45);
        v32 = &v45;
      else
        v43 = *(_BYTE *)(Block::mRedFlower + 4);
        v44 = 0;
        v33 = (mce::Buffer *)BlockTessellator::getMeshForBlock(v30, v28, (const FullBlock *)&v43);
        v34 = BaseEntityRenderContext::getScreenContext(v15);
        v35 = EntityShaderManager::getTransparentEntityMaterial(v16);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v42, (int)v16);
        mce::Mesh::render(v33, v34, (int)v35, (int)&v42, 0, 0);
        v32 = &v42;
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)v32);
      result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v48);
    }
  return result;
}
