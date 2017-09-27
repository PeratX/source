

int __fastcall TntRenderer::render(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  int v4; // r4@1
  __int64 *v5; // r5@1
  int v6; // r8@1
  int v7; // r0@1
  ShaderColor *v18; // r0@8
  Dimension *v22; // r0@9
  int v23; // r0@9
  Tessellator *v24; // r5@11
  int v25; // r1@11
  BlockTessellator *v26; // r0@11
  char *v27; // r6@12
  char *v28; // r0@12
  mce::Buffer *v29; // r5@13
  char *v30; // r6@13
  char v32; // [sp+8h] [bp-80h]@13
  char v33; // [sp+20h] [bp-68h]@13
  char v34; // [sp+21h] [bp-67h]@13
  char v35; // [sp+24h] [bp-64h]@12
  char v36; // [sp+3Ch] [bp-4Ch]@12
  char v37; // [sp+3Dh] [bp-4Bh]@12
  int v38; // [sp+40h] [bp-48h]@8
  signed int v39; // [sp+44h] [bp-44h]@8
  int v40; // [sp+48h] [bp-40h]@8
  char v41; // [sp+50h] [bp-38h]@1

  _R6 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = BaseEntityRenderContext::getWorldMatrix(_R6);
  MatrixStack::push((MatrixStack *)&v41, v7);
  _KR00_8 = *v5;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v41);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S8, [R5]
    VLDR            S2, [R0,#4]
    VLDR            S10, [R5,#4]
    VMUL.F32        S0, S0, S8
    VLDR            S14, [R0,#0x14]
    VMUL.F32        S2, S2, S8
    VLDR            S1, [R0,#0x10]
    VLDR            S4, [R0,#8]
    VMUL.F32        S14, S14, S10
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S1, S1, S10
    VLDR            S3, [R0,#0x18]
    VMUL.F32        S4, S4, S8
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S6, S6, S8
    VMUL.F32        S3, S3, S10
    VLDR            S12, [R5,#8]
    VMUL.F32        S10, S5, S10
    VLDR            S7, [R0,#0x20]
    VLDR            S8, [R0,#0x24]
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
  }
  _R0 = SynchedEntityData::getInt((SynchedEntityData *)(_KR00_8 + 176), 56);
    VMOV            S0, R0
    VMOV.F32        S16, #1.0
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R6,#4]
    VMOV.F32        S4, #10.0
    VADD.F32        S0, S0, S16
    VSUB.F32        S0, S0, S2
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    _R0 = SynchedEntityData::getInt((SynchedEntityData *)(_KR00_8 + 176), 56);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R6,#4]
      VADD.F32        S0, S0, S16
      VSUB.F32        S0, S2, S0
      VLDR            S2, =0.1
      VMUL.F32        S0, S0, S2
      VADD.F32        S18, S0, S16
      VLDR            S0, =0.0
      VCMPE.F32       S18, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S18, S0 }
      VCMPE.F32       S18, S16
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S18, S16 }
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v41);
      VMUL.F32        S0, S18, S18
      VLDR            S2, =0.3
      VMUL.F32        S0, S0, S0
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
    VMOV            S2, R0
    VMOV.F32        S0, #-1.0
    VCVT.F32.S32    S2, S2
  v18 = *(ShaderColor **)(v6 + 48);
  v38 = 1065353216;
  v39 = 1065353216;
  v40 = 1065353216;
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.008
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.8
    VADD.F32        S0, S0, S2
    VSTR            S0, [SP,#0x88+var_3C]
  ShaderColor::setColor(v18, (const Color *)&v38);
  _R1 = 1717986919;
  __asm { SMMUL.W         R0, R0, R1 }
  if ( ((_R0 >> 1) + (_R0 >> 31)) & 1 )
      VLDR            S0, [R6,#4]
      VSTR            S0, [SP,#0x88+var_88]
    EntityShaderManager::_setupShaderParameters(v4, v6, *(float *)&_KR00_8, COERCE_FLOAT(&Color::NIL));
  else
    v22 = (Dimension *)Entity::getDimension((Entity *)_KR00_8);
    v23 = Dimension::hasCeiling(v22);
    EntityShaderManager::_setupShaderParameters(v4, v6, 1061997773, (int)&Color::WHITE, v23);
  v24 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R6);
  v25 = Tessellator::forceTessellateIntercept(v24);
  v26 = *(BlockTessellator **)(v4 + 136);
  if ( v25 == 1 )
    v36 = *(_BYTE *)(Block::mTNT + 4);
    v37 = 0;
    BlockTessellator::appendTessellatedBlock(v26, v24, (const FullBlock *)&v36);
    v27 = EntityShaderManager::getEntityMaterial((EntityShaderManager *)v4);
    EntityRenderer::getAtlasTexture((EntityRenderer *)&v35, v4);
    Tessellator::triggerIntercept(v24, (const mce::MaterialPtr *)v27, (const mce::TexturePtr *)&v35);
    v28 = &v35;
    v33 = *(_BYTE *)(Block::mTNT + 4);
    v34 = 0;
    v29 = (mce::Buffer *)BlockTessellator::getMeshForBlock(v26, v24, (const FullBlock *)&v33);
    v30 = EntityShaderManager::getEntityMaterial((EntityShaderManager *)v4);
    EntityRenderer::getAtlasTexture((EntityRenderer *)&v32, v4);
    mce::Mesh::render(v29, v6, (int)v30, (int)&v32, 0, 0);
    v28 = &v32;
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)v28);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v41);
}


void __fastcall TntRenderer::~TntRenderer(TntRenderer *this)
{
  TntRenderer::~TntRenderer(this);
}


void __fastcall TntRenderer::~TntRenderer(TntRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = EntityRenderer::~EntityRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall TntRenderer::TntRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int a3)
{
  int v3; // r4@1
  BaseEntityRenderer *result; // r0@1

  v3 = a3;
  result = EntityRenderer::EntityRenderer(a1, a2, 0);
  *(_DWORD *)result = &off_26DC3B4;
  *((_DWORD *)result + 34) = v3;
  return result;
}
