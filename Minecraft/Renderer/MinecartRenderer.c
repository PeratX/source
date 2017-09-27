

int __fastcall MinecartRenderer::renderMinecartContents(MinecartRenderer *this, BaseEntityRenderContext *a2, Entity *a3, float a4, const Block *a5, int a6)
{
  BaseEntityRenderContext *v6; // r6@1
  MinecartRenderer *v7; // r10@1
  Entity *v9; // r11@1
  int v10; // r0@1
  Tessellator *v11; // r9@1
  EntityBlockRenderer *v12; // r7@1
  BlockSource *v13; // r0@2
  signed int v14; // r0@3
  ShaderColor *v21; // r0@12
  Dimension *v24; // r0@14
  int v25; // r0@14
  char *v26; // r5@17
  int v27; // r1@19
  BlockTessellator *v28; // r0@19
  char *v29; // r0@20
  int v30; // r1@22
  BlockTessellator *v31; // r0@22
  char *v32; // r4@23
  mce::Buffer *v33; // r4@24
  mce::Buffer *v34; // r4@25
  char *v35; // r5@25
  int v37; // [sp+8h] [bp-D0h]@1
  char v38; // [sp+Ch] [bp-CCh]@24
  char v39; // [sp+24h] [bp-B4h]@20
  char v40; // [sp+3Ch] [bp-9Ch]@25
  char v41; // [sp+54h] [bp-84h]@25
  char v42; // [sp+55h] [bp-83h]@25
  char v43; // [sp+58h] [bp-80h]@23
  char v44; // [sp+70h] [bp-68h]@23
  char v45; // [sp+71h] [bp-67h]@23
  int v46; // [sp+74h] [bp-64h]@12
  signed int v47; // [sp+78h] [bp-60h]@12
  int v48; // [sp+7Ch] [bp-5Ch]@12
  unsigned __int8 v49; // [sp+84h] [bp-54h]@1
  char v50; // [sp+85h] [bp-53h]@1
  char v51; // [sp+88h] [bp-50h]@1

  v6 = a2;
  v7 = this;
  _R4 = a4;
  v9 = a3;
  v37 = BaseEntityRenderContext::getScreenContext(a2);
  v10 = BaseEntityRenderContext::getWorldMatrix(v6);
  MatrixStack::push((MatrixStack *)&v51, v10);
  v11 = (Tessellator *)BaseEntityRenderContext::getTessellator(v6);
  v12 = (EntityBlockRenderer *)BaseEntityRenderContext::getEntityBlockRenderer(v6);
  v49 = *((_BYTE *)a5 + 4);
  v50 = a6;
  if ( BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[v49]) == 22 )
  {
    v13 = (BlockSource *)Entity::getRegion(v9);
    EntityBlockRenderer::render(v12, v6, v13, a5, a6, 1.0);
  }
  else
    v14 = Block::isType(a5, (const Block *)Block::mTNT);
    __asm { VMOV            S16, R4 }
    if ( v14 == 1 )
    {
      _R5 = MinecartTNT::getFuse(v9);
      __asm
      {
        VMOV            S0, R5
        VCVT.F32.S32    S18, S0
      }
      if ( !(_NF ^ _VF) )
        __asm
        {
          VMOV.F32        S20, #1.0
          VSUB.F32        S0, S18, S16
          VMOV.F32        S2, #10.0
          VADD.F32        S0, S0, S20
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm
          {
            VLDR            S2, =-0.1
            VLDR            S22, =0.0
            VMUL.F32        S0, S0, S2
            VADD.F32        S0, S0, S20
            VCMPE.F32       S0, #0.0
            VMRS            APSR_nzcv, FPSCR
            VCMPE.F32       S0, S20
          }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S22, S0 }
          __asm { VMRS            APSR_nzcv, FPSCR }
            __asm { VMOVGT.F32      S22, S20 }
          _R0 = MatrixStack::MatrixStackRef::operator->((int)&v51);
            VMUL.F32        S0, S22, S22
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
        VMOV.F32        S0, #-1.0
        VLDR            S2, =0.008
      v21 = *(ShaderColor **)(v37 + 48);
      v46 = 1065353216;
      v47 = 1065353216;
      v48 = 1065353216;
        VADD.F32        S0, S16, S0
        VSUB.F32        S0, S0, S18
        VMUL.F32        S0, S0, S2
        VLDR            S2, =0.8
        VADD.F32        S0, S0, S2
        VSTR            S0, [SP,#0xD8+var_58]
      ShaderColor::setColor(v21, (const Color *)&v46);
      if ( _R5 < 0 )
        goto LABEL_30;
      _R0 = 1717986919;
      __asm { SMMUL.W         R0, R5, R0 }
      if ( ((_R0 >> 1) + (_R0 >> 31)) & 1 )
LABEL_30:
        __asm { VSTR            S16, [SP,#0xD8+var_D8] }
        EntityShaderManager::_setupShaderParameters((int)v7, v37, *(float *)&v9, COERCE_FLOAT(&Color::NIL));
      else
        v24 = (Dimension *)Entity::getDimension(v9);
        v25 = Dimension::hasCeiling(v24);
        EntityShaderManager::_setupShaderParameters((int)v7, v37, 1061997773, (int)&Color::WHITE, v25);
      v30 = Tessellator::forceTessellateIntercept(v11);
      v31 = (BlockTessellator *)*((_DWORD *)v7 + 330);
      if ( v30 == 1 )
        v44 = *(_BYTE *)(Block::mTNT + 4);
        v45 = 0;
        BlockTessellator::appendTessellatedBlock(v31, v11, (const FullBlock *)&v44);
        v32 = EntityShaderManager::getEntityMaterial(v7);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v43, (int)v7);
        Tessellator::triggerIntercept(v11, (const mce::MaterialPtr *)v32, (const mce::TexturePtr *)&v43);
        v29 = &v43;
        v41 = *(_BYTE *)(Block::mTNT + 4);
        v42 = 0;
        v34 = (mce::Buffer *)BlockTessellator::getMeshForBlock(v31, v11, (const FullBlock *)&v41);
        v35 = EntityShaderManager::getEntityMaterial(v7);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v40, (int)v7);
        mce::Mesh::render(v34, v37, (int)v35, (int)&v40, 0, 0);
        v29 = &v40;
    }
    else
      __asm { VSTR            S16, [SP,#0xD8+var_D8] }
      EntityShaderManager::_setupShaderParameters((int)v7, v37, *(float *)&v9, COERCE_FLOAT(&Color::NIL));
      if ( Block::getRenderLayer(a5) != 3 || Block::mTranslucency[*((_BYTE *)a5 + 4)] & 0x7FFFFFFF )
        v26 = EntityShaderManager::getTransparentEntityMaterial(v7);
        v26 = EntityShaderManager::getStaticMaterial(v7);
      v27 = Tessellator::forceTessellateIntercept(v11);
      v28 = (BlockTessellator *)*((_DWORD *)v7 + 330);
      if ( v27 == 1 )
        BlockTessellator::appendTessellatedBlock(v28, v11, (const FullBlock *)&v49);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v39, (int)v7);
        Tessellator::triggerIntercept(v11, (const mce::MaterialPtr *)v26, (const mce::TexturePtr *)&v39);
        v29 = &v39;
        v33 = (mce::Buffer *)BlockTessellator::getMeshForBlock(v28, v11, (const FullBlock *)&v49);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v38, (int)v7);
        mce::Mesh::render(v33, v37, (int)v26, (int)&v38, 0, 0);
        v29 = &v38;
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)v29);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v51);
}


BaseEntityRenderer *__fastcall MinecartRenderer::MinecartRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int a3)
{
  int v3; // r5@1
  mce::TextureGroup *v4; // r7@1
  BaseEntityRenderer *v5; // r4@1
  char *v6; // r0@1
  char *v7; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  char *v13; // [sp+8h] [bp-40h]@1
  char *v14; // [sp+Ch] [bp-3Ch]@1
  int v15; // [sp+10h] [bp-38h]@1
  char v16; // [sp+14h] [bp-34h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  *(_DWORD *)v5 = &off_26DBB5C;
  MinecartModel::MinecartModel((BaseEntityRenderer *)((char *)v5 + 136));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 1296));
  *((_DWORD *)v5 + 330) = v3;
  sub_119C884((void **)&v13, "textures/entity/minecart");
  v14 = v13;
  v13 = (char *)&unk_28898CC;
  v15 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v16, v4, (int)&v14, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 1296), (mce::TexturePtr *)&v16);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v16);
  v6 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v14 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  *((_DWORD *)v5 + 42) = (char *)v5 + 1296;
  return v5;
}


void __fastcall MinecartRenderer::~MinecartRenderer(MinecartRenderer *this)
{
  MinecartRenderer::~MinecartRenderer(this);
}


int __fastcall MinecartRenderer::renderDebug(int a1, BaseEntityRenderContext *a2)
{
  Options *v2; // r0@1

  v2 = (Options *)BaseEntityRenderContext::getOptions(a2);
  return j_j_j__ZNK7Options25getDevRenderBoundingBoxesEv(v2);
}


void __fastcall MinecartRenderer::~MinecartRenderer(MinecartRenderer *this)
{
  MinecartRenderer *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DBB5C;
  v2 = (MinecartRenderer *)((char *)this + 196);
  mce::TexturePtr::~TexturePtr((MinecartRenderer *)((char *)this + 1296));
  *((_DWORD *)v1 + 34) = &off_26E58D4;
  ModelPart::~ModelPart((MinecartRenderer *)((char *)v1 + 1076));
  ModelPart::~ModelPart((MinecartRenderer *)((char *)v1 + 856));
  ModelPart::~ModelPart((MinecartRenderer *)((char *)v1 + 636));
  ModelPart::~ModelPart((MinecartRenderer *)((char *)v1 + 416));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((MinecartRenderer *)((char *)v1 + 184));
  Model::~Model((MinecartRenderer *)((char *)v1 + 136));
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall MinecartRenderer::~MinecartRenderer(MinecartRenderer *this)
{
  MinecartRenderer *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DBB5C;
  v2 = (MinecartRenderer *)((char *)this + 196);
  mce::TexturePtr::~TexturePtr((MinecartRenderer *)((char *)this + 1296));
  *((_DWORD *)v1 + 34) = &off_26E58D4;
  ModelPart::~ModelPart((MinecartRenderer *)((char *)v1 + 1076));
  ModelPart::~ModelPart((MinecartRenderer *)((char *)v1 + 856));
  ModelPart::~ModelPart((MinecartRenderer *)((char *)v1 + 636));
  ModelPart::~ModelPart((MinecartRenderer *)((char *)v1 + 416));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((MinecartRenderer *)((char *)v1 + 184));
  Model::~Model((MinecartRenderer *)((char *)v1 + 136));
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


int __fastcall MinecartRenderer::render(MinecartRenderer *a1, BaseEntityRenderContext *a2, int a3)
{
  MinecartRenderer *v4; // r8@1
  int v5; // r4@1
  int v6; // r0@1
  int v13; // r6@1
  unsigned int v15; // r5@1
  float v19; // r3@1
  int v24; // r0@11
  float v26; // r1@11
  int v27; // r0@11
  int v29; // r4@13
  int v30; // r4@13
  int v33; // r4@16
  float v35; // r1@16
  const Block *v39; // r7@17
  int v40; // r4@17
  int v41; // r0@18
  int v44; // r4@19
  __int64 v46; // r1@20 OVERLAPPED
  __int64 v47; // ST00_8@20
  int v48; // r0@20
  char v50; // [sp+18h] [bp-108h]@18
  int v51; // [sp+20h] [bp-100h]@11
  char v52; // [sp+24h] [bp-FCh]@11
  float v53; // [sp+28h] [bp-F8h]@2
  float v54; // [sp+2Ch] [bp-F4h]@2
  float v55; // [sp+30h] [bp-F0h]@2
  float v56; // [sp+34h] [bp-ECh]@2
  float v57; // [sp+38h] [bp-E8h]@2
  float v58; // [sp+3Ch] [bp-E4h]@2
  float v59; // [sp+40h] [bp-E0h]@1
  float v60; // [sp+44h] [bp-DCh]@1
  float v61; // [sp+48h] [bp-D8h]@1
  int v62; // [sp+4Ch] [bp-D4h]@1
  float v63; // [sp+54h] [bp-CCh]@1
  mce::Math *v65; // [sp+5Ch] [bp-C4h]@1
  char v66; // [sp+60h] [bp-C0h]@1
  int v67; // [sp+68h] [bp-B8h]@13
  signed int v68; // [sp+6Ch] [bp-B4h]@13
  int v69; // [sp+70h] [bp-B0h]@13
  int v70; // [sp+74h] [bp-ACh]@13
  int v71; // [sp+78h] [bp-A8h]@13
  int v72; // [sp+7Ch] [bp-A4h]@13
  int v73; // [sp+80h] [bp-A0h]@13
  int v74; // [sp+84h] [bp-9Ch]@13
  int v75; // [sp+88h] [bp-98h]@13
  int v76; // [sp+8Ch] [bp-94h]@13
  int v77; // [sp+90h] [bp-90h]@13
  int v78; // [sp+94h] [bp-8Ch]@13
  int v79; // [sp+98h] [bp-88h]@13
  int v80; // [sp+9Ch] [bp-84h]@13
  int v81; // [sp+A0h] [bp-80h]@13
  int v82; // [sp+A4h] [bp-7Ch]@13
  int v83; // [sp+A8h] [bp-78h]@13
  int v84; // [sp+ACh] [bp-74h]@13
  int v85; // [sp+B0h] [bp-70h]@13
  float v86; // [sp+B4h] [bp-6Ch]@13

  _R9 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v66, v6);
  _R10 = *(_QWORD *)v5;
  _R0 = *(_DWORD *)(v5 + 8);
  __asm { VLDR            S16, [R0,#4] }
  v13 = *(_DWORD *)Entity::getUniqueID((Entity *)*(_QWORD *)v5);
  _R4 = MatrixStack::MatrixStackRef::operator->((int)&v66);
  v15 = (97199825 * v13 + 98761) * v13;
  _R6 = _aeabi_l2f((v15 >> 24) & 7, 0);
  _R7 = _aeabi_l2f((v15 >> 20) & 7, 0);
  _R0 = _aeabi_l2f((v15 >> 16) & 7, 0);
  __asm
  {
    VMOV.F32        S18, #0.5
    VLDR            S6, =0.0005
    VMOV            S0, R0
    VLDR            S8, =-0.002
    VMOV            S2, R7
    VLDR            S10, [R4,#4]
    VMOV            S4, R6
    VLDR            S1, [R4,#0x10]
    VLDR            S12, [R4,#8]
    VLDR            S14, [R4,#0xC]
    VLDR            S3, [R4,#0x18]
    VADD.F32        S0, S0, S18
    VLDR            S5, [R4,#0x1C]
    VADD.F32        S2, S2, S18
    VLDR            S7, [R4,#0x20]
    VADD.F32        S4, S4, S18
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VLDR            S6, [R4]
    VADD.F32        S0, S0, S8
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S8
    VLDR            S8, [R4,#0x14]
    VMUL.F32        S6, S6, S0
    VMUL.F32        S1, S1, S2
    VMUL.F32        S10, S10, S0
    VMUL.F32        S8, S8, S2
    VMUL.F32        S14, S14, S0
    VMUL.F32        S0, S12, S0
    VLDR            S12, [R4,#0x24]
    VMUL.F32        S3, S3, S2
    VMUL.F32        S2, S5, S2
    VMUL.F32        S5, S7, S4
    VLDR            S7, [R4,#0x28]
    VADD.F32        S6, S1, S6
    VADD.F32        S8, S8, S10
    VLDR            S10, [R4,#0x2C]
    VMUL.F32        S12, S12, S4
    VMUL.F32        S1, S7, S4
    VADD.F32        S0, S3, S0
    VMUL.F32        S4, S10, S4
    VLDR            S10, [R4,#0x34]
    VADD.F32        S2, S2, S14
    VADD.F32        S6, S6, S5
    VADD.F32        S8, S8, S12
    VLDR            S12, [R4,#0x38]
    VADD.F32        S0, S0, S1
    VADD.F32        S2, S2, S4
    VLDR            S4, [R4,#0x30]
    VADD.F32        S4, S6, S4
    VLDR            S6, [R4,#0x3C]
    VADD.F32        S0, S0, S12
    VADD.F32        S2, S2, S6
    VSTR            S4, [R4,#0x30]
    VSTR            S8, [R4,#0x34]
    VSTR            S0, [R4,#0x38]
    VSTR            S2, [R4,#0x3C]
  }
  Entity::getInterpolatedPosition((Entity *)&v63, *(float *)&_R10, *((_DWORD *)_R9 + 1));
  Entity::getInterpolatedRotation((Entity *)&v62, *(float *)&_R10, *((float *)_R9 + 1), v19);
  v59 = 0.0;
  v60 = 0.0;
  v61 = 0.0;
    VLDR            S24, [R11]
    VLDR            S22, [R11,#4]
    VLDR            S20, [R11,#8]
  if ( RailMovement::getPos((Entity *)_R10, (int)&v59, *(__int64 *)&v63, (int)v65) == 1 )
    v57 = 0.0;
    v58 = 0.0;
    v53 = 0.0;
    v54 = 0.0;
    v55 = 0.0;
    v56 = 0.0;
    if ( !RailMovement::getPosOffs(_R10, COERCE_FLOAT(&v56), *(__int64 *)&v63, v65, 1050253722) )
    {
      v56 = v59;
      v57 = v60;
      v58 = v61;
    }
    if ( RailMovement::getPosOffs(_R10, COERCE_FLOAT(&v53), *(__int64 *)&v63, v65, -1097229926) == 1 )
      __asm
      {
        VLDR            S0, [SP,#0x120+var_F8]
        VLDR            S26, [SP,#0x120+var_F4]
        VLDR            S2, [SP,#0x120+var_F0]
        VLDR            S30, [SP,#0x120+var_E0]
        VLDR            S28, [SP,#0x120+var_D8]
      }
    else
      _R0 = v59;
      *(float *)&_R2 = v61;
      __asm { VMOV            S0, R0 }
      v53 = v59;
      __asm { VMOV            S2, R2 }
      v54 = v60;
      __asm { VMOV.F32        S30, S0 }
      v55 = v61;
        VMOV.F32        S28, S2
        VMOV            S26, R1
    __asm
      VLDR            S6, [SP,#0x120+var_EC]
      VLDR            S17, [SP,#0x120+var_E8]
      VSUB.F32        S0, S0, S6
      VLDR            S8, [SP,#0x120+var_E4]
      VSUB.F32        S4, S26, S17
      VLDR            S19, [SP,#0x120+var_CC]
      VSUB.F32        S2, S2, S8
      VLDR            S23, [SP,#0x120+var_C8]
      VLDR            S21, [SP,#0x120+var_C4]
      VMUL.F32        S8, S0, S0
      VMUL.F32        S6, S4, S4
      VMUL.F32        S10, S2, S2
      VADD.F32        S6, S8, S6
      VADD.F32        S6, S6, S10
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !_ZF )
        VLDR            S8, =0.0001
        VCMPE.F32       S6, S8
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        _R4 = (mce::Math *)*(&Vec3::ZERO + 1);
        _R0 = __PAIR__(Vec3::ZERO, dword_2822498);
      else
        __asm
        {
          VDIV.F32        S2, S2, S6
          VDIV.F32        S4, S4, S6
          VDIV.F32        S0, S0, S6
          VMOV            R0, S2
          VMOV            R4, S4
          VMOV            R1, S0
        }
      v24 = mce::Math::atan2(_R0, _R2);
      mce::Degree::Degree((int)&v52, v24);
      _R0 = mce::Degree::asFloat((mce::Degree *)&v52);
      __asm { VLDR            S16, [R0] }
      v27 = mce::Math::atan(_R4, v26);
      v51 = mce::operator*(v27, 1116864512);
      v62 = *(_DWORD *)mce::Radian::asFloat((mce::Radian *)&v51);
      VADD.F32        S0, S26, S17
      VADD.F32        S2, S28, S20
      VADD.F32        S4, S30, S24
      VSUB.F32        S6, S22, S23
      VMUL.F32        S0, S0, S18
      VSUB.F32        S20, S2, S21
      VSUB.F32        S24, S4, S19
      VADD.F32        S22, S6, S0
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v66);
    VLDR            S0, [R0,#4]
    VLDR            S6, [R0,#0x10]
    VLDR            S8, [R0,#0x14]
    VMUL.F32        S0, S0, S24
    VLDR            S14, [R0]
    VMUL.F32        S6, S6, S22
    VLDR            S2, [R0,#8]
    VMUL.F32        S8, S8, S22
    VLDR            S4, [R0,#0xC]
    VMUL.F32        S14, S14, S24
    VLDR            S10, [R0,#0x18]
    VMUL.F32        S2, S2, S24
    VLDR            S12, [R0,#0x1C]
    VMUL.F32        S4, S4, S24
    VMUL.F32        S10, S10, S22
    VLDR            S3, [R0,#0x20]
    VMUL.F32        S12, S12, S22
    VLDR            S1, [R0,#0x24]
    VMUL.F32        S3, S3, S20
    VLDR            S5, [R0,#0x28]
    VADD.F32        S0, S8, S0
    VLDR            S8, [R0,#0x2C]
    VADD.F32        S6, S6, S14
    VMUL.F32        S1, S1, S20
    VMUL.F32        S14, S5, S20
    VADD.F32        S2, S10, S2
    VLDR            S10, [R0,#0x34]
    VADD.F32        S4, S12, S4
    VLDR            S12, [R0,#0x38]
    VMUL.F32        S8, S8, S20
    VADD.F32        S6, S6, S3
    VLDR            S8, [R0,#0x30]
    VADD.F32        S6, S6, S8
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S0, S0, S10
    VADD.F32        S2, S2, S12
    VSTR            S6, [R0,#0x30]
    VSTR            S0, [R0,#0x34]
    VSTR            S2, [R0,#0x38]
    VSTR            S4, [R0,#0x3C]
  v29 = MatrixStack::MatrixStackRef::operator->((int)&v66);
    VLDR            S0, =180.0
    VSUB.F32        S0, S0, S16
  v67 = 0;
  v68 = 1065353216;
  v69 = 0;
  __asm { VSTR            S0, [SP,#0x120+var_6C] }
  glm::rotate<float>((int)&v70, v29, (int)&v86, (int)&v67);
  *(_DWORD *)v29 = v70;
  *(_DWORD *)(v29 + 4) = v71;
  *(_DWORD *)(v29 + 8) = v72;
  *(_DWORD *)(v29 + 12) = v73;
  *(_DWORD *)(v29 + 16) = v74;
  *(_DWORD *)(v29 + 20) = v75;
  *(_DWORD *)(v29 + 24) = v76;
  *(_DWORD *)(v29 + 28) = v77;
  *(_DWORD *)(v29 + 32) = v78;
  *(_DWORD *)(v29 + 36) = v79;
  *(_DWORD *)(v29 + 40) = v80;
  *(_DWORD *)(v29 + 44) = v81;
  *(_DWORD *)(v29 + 48) = v82;
  *(_DWORD *)(v29 + 52) = v83;
  *(_DWORD *)(v29 + 56) = v84;
  *(_DWORD *)(v29 + 60) = v85;
  v30 = MatrixStack::MatrixStackRef::operator->((int)&v66);
    VLDR            S0, [SP,#0x120+var_D4]
    VNEG.F32        S0, S0
  v68 = 0;
  v69 = 1065353216;
  glm::rotate<float>((int)&v70, v30, (int)&v86, (int)&v67);
  *(_DWORD *)v30 = v70;
  *(_DWORD *)(v30 + 4) = v71;
  *(_DWORD *)(v30 + 8) = v72;
  *(_DWORD *)(v30 + 12) = v73;
  *(_DWORD *)(v30 + 16) = v74;
  *(_DWORD *)(v30 + 20) = v75;
  *(_DWORD *)(v30 + 24) = v76;
  *(_DWORD *)(v30 + 28) = v77;
  *(_DWORD *)(v30 + 32) = v78;
  *(_DWORD *)(v30 + 36) = v79;
  *(_DWORD *)(v30 + 40) = v80;
  *(_DWORD *)(v30 + 44) = v81;
  *(_DWORD *)(v30 + 48) = v82;
  *(_DWORD *)(v30 + 52) = v83;
  *(_DWORD *)(v30 + 56) = v84;
  *(_DWORD *)(v30 + 60) = v85;
  _R0 = Entity::getHurtTime((Entity *)_R10);
    VCVT.F32.S32    S16, S0
    VLDR            S18, [R9,#4]
  _R0 = 40 - Entity::getStructuralIntegrity((Entity *)_R10);
    VSUB.F32        S16, S16, S18
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R9,#4]
    VSUB.F32        S18, S0, S2
    VLDR            S0, =0.0
    VCMPE.F32       S18, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S16, #0.0
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S18, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v33 = MatrixStack::MatrixStackRef::operator->((int)&v66);
    __asm { VMOV            R0, S16 }
    _R6 = mce::Math::sin(_R0, v35);
    _R0 = Entity::getHurtDir((Entity *)_R10);
      VLDR            S2, =0.1
      VMOV            S4, R0
      VMOV            S0, R6
      VMUL.F32        S2, S16, S2
      VCVT.F32.S32    S4, S4
    v67 = 1065353216;
    v68 = 0;
    v69 = 0;
      VMUL.F32        S2, S2, S18
      VMUL.F32        S0, S2, S0
      VMUL.F32        S0, S0, S4
      VSTR            S0, [SP,#0x120+var_6C]
    glm::rotate<float>((int)&v70, v33, (int)&v86, (int)&v67);
    *(_DWORD *)v33 = v70;
    *(_DWORD *)(v33 + 4) = v71;
    *(_DWORD *)(v33 + 8) = v72;
    *(_DWORD *)(v33 + 12) = v73;
    *(_DWORD *)(v33 + 16) = v74;
    *(_DWORD *)(v33 + 20) = v75;
    *(_DWORD *)(v33 + 24) = v76;
    *(_DWORD *)(v33 + 28) = v77;
    *(_DWORD *)(v33 + 32) = v78;
    *(_DWORD *)(v33 + 36) = v79;
    *(_DWORD *)(v33 + 40) = v80;
    *(_DWORD *)(v33 + 44) = v81;
    *(_DWORD *)(v33 + 48) = v82;
    *(_DWORD *)(v33 + 52) = v83;
    *(_DWORD *)(v33 + 56) = v84;
    *(_DWORD *)(v33 + 60) = v85;
  _R6 = Minecart::getDisplayOffset((Minecart *)_R10);
  v39 = (const Block *)Minecart::getDisplayBlock((Minecart *)_R10);
  v40 = Minecart::getDisplayData((Minecart *)_R10);
  if ( v39 )
    v41 = BaseEntityRenderContext::getWorldMatrix(_R9);
    MatrixStack::push((MatrixStack *)&v50, v41);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v50);
      VMOV.F32        S0, #0.75
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
      VSTR            S0, [R0,#0x2C]
      VLDR            S2, =0.0625
      VCVT.F32.S32    S0, S0
      VLDR            S4, [R0,#0x18]
      VLDR            S6, [R0,#0x1C]
      VLDR            S8, [R0,#0x10]
      VLDR            S10, [R0,#0x34]
      VLDR            S12, [R0,#0x38]
      VLDR            S14, [R0,#0x3C]
      VMUL.F32        S0, S0, S2
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
    MinecartRenderer::renderMinecartContents(v4, _R9, (Entity *)_R10, *((float *)_R9 + 1), v39, v40);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v50);
  v44 = BaseEntityRenderContext::getScreenContext(_R9);
    VLDR            S0, [R9,#4]
    VSTR            S0, [SP,#0x120+var_120]
  EntityShaderManager::_setupShaderParameters((int)v4, v44, *(float *)&_R10, COERCE_FLOAT(&Color::NIL));
    VLDR            S0, [R0]
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
  if ( !(*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R10 + 172))(_R10) )
    HIDWORD(v46) = -1110651699;
    LODWORD(v46) = 0;
    v47 = v46;
    LODWORD(v46) = v44;
    v48 = (int)v4 + 136;
    MinecartModel::render(*(__int64 *)((char *)&v46 - 4), _R10, 0, v47, SHIDWORD(v47), 0, 0, 1031798784);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v66);
}
