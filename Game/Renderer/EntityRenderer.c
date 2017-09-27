

void __fastcall EntityRenderer::getAtlasTexture(EntityRenderer *this, int a2)
{
  EntityRenderer::getAtlasTexture(this, a2);
}


void __fastcall EntityRenderer::getAtlasTexture(EntityRenderer *this, int a2)
{
  mce::TextureGroup *v2; // r4@1
  mce::TexturePtr *v3; // r5@1
  char *v4; // r0@1
  char *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  char *v10; // [sp+8h] [bp-20h]@1
  char *v11; // [sp+Ch] [bp-1Ch]@1
  int v12; // [sp+10h] [bp-18h]@1

  v2 = *(mce::TextureGroup **)(a2 + 132);
  v3 = this;
  sub_119C884((void **)&v10, "atlas.terrain");
  v11 = v10;
  v10 = (char *)&unk_28898CC;
  v12 = 0;
  mce::TextureGroup::getTexture(v3, v2, (int)&v11, 0);
  v4 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v10 - 12;
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
}


int __fastcall EntityRenderer::renderTrading(float a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  float v4; // r10@1
  __int64 *v5; // r5@1
  int v6; // r0@1
  int v8; // r8@1
  int result; // r0@1
  const Item *v10; // r5@2
  Tessellator *v12; // r11@2
  float v18; // ST00_4@2
  float v19; // ST04_4@2
  float v20; // ST00_4@2
  float v21; // ST04_4@2
  float v22; // ST00_4@2
  float v23; // ST04_4@2
  ItemRenderer *v24; // r0@2
  int v25; // r0@2
  int v32; // r5@2
  float v34; // [sp+0h] [bp-E0h]@0
  float v35; // [sp+4h] [bp-DCh]@0
  mce::TexturePtr *v36; // [sp+Ch] [bp-D4h]@2
  float v37; // [sp+10h] [bp-D0h]@2
  char v38; // [sp+1Ch] [bp-C4h]@2
  char v40; // [sp+24h] [bp-BCh]@2
  float v41; // [sp+2Ch] [bp-B4h]@2
  int v42; // [sp+38h] [bp-A8h]@2
  signed int v43; // [sp+3Ch] [bp-A4h]@2
  int v44; // [sp+40h] [bp-A0h]@2
  int v45; // [sp+44h] [bp-9Ch]@2
  int v46; // [sp+48h] [bp-98h]@2
  int v47; // [sp+4Ch] [bp-94h]@2
  int v48; // [sp+50h] [bp-90h]@2
  int v49; // [sp+54h] [bp-8Ch]@2
  int v50; // [sp+58h] [bp-88h]@2
  int v51; // [sp+5Ch] [bp-84h]@2
  int v52; // [sp+60h] [bp-80h]@2
  int v53; // [sp+64h] [bp-7Ch]@2
  int v54; // [sp+68h] [bp-78h]@2
  int v55; // [sp+6Ch] [bp-74h]@2
  int v56; // [sp+70h] [bp-70h]@2
  int v57; // [sp+74h] [bp-6Ch]@2
  int v58; // [sp+78h] [bp-68h]@2
  int v59; // [sp+7Ch] [bp-64h]@2
  int v60; // [sp+80h] [bp-60h]@2
  float v61; // [sp+84h] [bp-5Ch]@2

  _R4 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _KR00_8 = *v5;
  v8 = v6;
  result = Entity::isTrading((Entity *)*v5);
  if ( result == 1 )
  {
    v10 = (const Item *)Item::mEmerald;
    _R6 = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)Item::mEmerald + 248))(
            Item::mEmerald,
            0,
            0);
    v12 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R4);
    __asm
    {
      VLDR            S16, [R6,#4]
      VLDR            S18, [R6,#8]
      VLDR            S20, [R6,#0xC]
      VLDR            S22, [R6,#0x10]
    }
    Tessellator::begin(v12, 4, 0);
    _R0 = &Vec3::UNIT_Z;
      VLDR            S0, [R0]
      VLDR            S2, [R0,#4]
      VLDR            S4, [R0,#8]
      VNEG.F32        S0, S0
      VNEG.F32        S2, S2
      VNEG.F32        S4, S4
      VSTR            S0, [SP,#0xE0+var_B4]
      VSTR            S2, [SP,#0xE0+var_B0]
      VSTR            S4, [SP,#0xE0+var_AC]
    Tessellator::normal(v12, (const Vec3 *)&v41);
      VSTR            S16, [SP,#0xE0+var_E0]
      VSTR            S18, [SP,#0xE0+var_DC]
    Tessellator::vertexUV(v12, 0.5, 1.0, 0.0, v34, v35);
      VSTR            S22, [SP,#0xE0+var_DC]
    Tessellator::vertexUV(v12, 0.5, 0.0, 0.0, v18, v19);
      VSTR            S20, [SP,#0xE0+var_E0]
    Tessellator::vertexUV(v12, -0.5, 0.0, 0.0, v20, v21);
    Tessellator::vertexUV(v12, -0.5, 1.0, 0.0, v22, v23);
    v24 = (ItemRenderer *)BaseEntityRenderContext::getItemRenderer(_R4);
    v36 = (mce::TexturePtr *)ItemRenderer::getGraphics(v24, v10);
    v25 = BaseEntityRenderContext::getWorldMatrix(_R4);
    MatrixStack::push((MatrixStack *)&v40, v25);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v40);
      VLDR            S2, [R9,#4]
      VLDR            S6, [R7,#0x13C]
      VLDR            S0, [R9]
      VSUB.F32        S2, S2, S6
      VLDR            S10, [R0,#0xC]
      VLDR            S12, [R0,#0x10]
      VLDR            S14, [R0,#0x14]
      VMUL.F32        S10, S10, S0
      VLDR            S1, [R0,#0x18]
      VLDR            S4, [R9,#8]
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
      VLDR            S0, [R7,#0x134]
      VMOV.F32        S16, #0.5
      VLDR            S2, [R7,#0x13C]
      VLDR            S4, [R0,#0x18]
      VSUB.F32        S0, S0, S2
      VLDR            S2, [R0,#0x14]
      VLDR            S6, [R0,#0x1C]
      VLDR            S8, [R0,#0x10]
      VLDR            S10, [R0,#0x34]
      VLDR            S14, [R0,#0x3C]
      VADD.F32        S0, S0, S16
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S8, S0, S8
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R0,#0x30]
      VADD.F32        S2, S10, S2
      VADD.F32        S4, S12, S4
      VADD.F32        S0, S14, S0
      VSTR            S6, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
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
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)_KR00_8 + 52))(_KR00_8);
    _R0 = BaseEntityRenderContext::getCameraTargetPosition(_R4);
      VLDR            S16, [R0]
      VLDR            S18, [R0,#4]
      VLDR            S20, [R0,#8]
      VLDR            S22, [R9]
      VLDR            S24, [R9,#4]
      VLDR            S26, [R9,#8]
    _R0 = BaseEntityRenderContext::getCameraPosition(_R4);
      VNEG.F32        S0, S22
      VLDR            S6, [R0]
      VNEG.F32        S2, S24
      VLDR            S8, [R0,#4]
      VNEG.F32        S4, S26
      VLDR            S10, [R0,#8]
      VSUB.F32        S0, S0, S16
      VSUB.F32        S2, S2, S18
      VSUB.F32        S4, S4, S20
      VADD.F32        S0, S0, S6
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S4, S10
      VSTR            S0, [SP,#0xE0+var_D0]
      VSTR            S2, [SP,#0xE0+var_CC]
      VSTR            S4, [SP,#0xE0+var_C8]
    mce::MathUtility::getRotationFromNegZToVector((int)&v38, (int)&v37);
    __asm { VLDR            S16, [SP,#0xE0+var_C0] }
    v32 = MatrixStack::MatrixStackRef::operator->((int)&v40);
    v42 = 0;
    _R0 = &mce::Math::RADDEG;
    __asm { VLDR            S0, [R0] }
    v43 = 1065353216;
    v44 = 0;
      VNMUL.F32       S0, S16, S0
      VSTR            S0, [SP,#0xE0+var_5C]
    glm::rotate<float>((int)&v45, v32, (int)&v61, (int)&v42);
    *(_DWORD *)v32 = v45;
    *(_DWORD *)(v32 + 4) = v46;
    *(_DWORD *)(v32 + 8) = v47;
    *(_DWORD *)(v32 + 12) = v48;
    *(_DWORD *)(v32 + 16) = v49;
    *(_DWORD *)(v32 + 20) = v50;
    *(_DWORD *)(v32 + 24) = v51;
    *(_DWORD *)(v32 + 28) = v52;
    *(_DWORD *)(v32 + 32) = v53;
    *(_DWORD *)(v32 + 36) = v54;
    *(_DWORD *)(v32 + 40) = v55;
    *(_DWORD *)(v32 + 44) = v56;
    *(_DWORD *)(v32 + 48) = v57;
    *(_DWORD *)(v32 + 52) = v58;
    *(_DWORD *)(v32 + 56) = v59;
    *(_DWORD *)(v32 + 60) = v60;
      VLDR            S0, [R4,#4]
      VSTR            S0, [SP,#0xE0+var_DC]
    EntityShaderManager::_setupShaderParameters(v4, v8, _KR00_8, COERCE_FLOAT(&Color::NIL), COERCE_FLOAT(&Color::WHITE));
    if ( Tessellator::forceTessellateIntercept(v12) == 1 )
      Tessellator::triggerIntercept(v12, (const mce::MaterialPtr *)(LODWORD(v4) + 84), v36);
    else
      Tessellator::draw((char *)v12, v8, LODWORD(v4) + 84, (int)v36);
    Tessellator::setOffset(v12, (const Vec3 *)&Vec3::ZERO);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v40);
  }
  return result;
}


int __fastcall EntityRenderer::renderDebug(int a1, BaseEntityRenderContext *a2)
{
  Options *v2; // r0@1

  v2 = (Options *)BaseEntityRenderContext::getOptions(a2);
  return j_j_j__ZNK7Options25getDevRenderBoundingBoxesEv(v2);
}


void __fastcall EntityRenderer::~EntityRenderer(EntityRenderer *this)
{
  EntityRenderer::~EntityRenderer(this);
}


int __fastcall EntityRenderer::_buildFlameMesh(EntityRenderer *this, Tessellator *a2)
{
  Tessellator *v2; // r4@1
  EntityRenderer *v3; // r5@1
  void *v4; // r0@1
  mce::TextureGroup *v5; // r5@2
  char *v6; // r0@2
  char *v7; // r0@3
  mce::Texture *v8; // r0@4
  float v15; // ST04_4@4
  float v16; // ST04_4@4
  float v17; // ST04_4@4
  float v18; // ST04_4@4
  float v19; // ST04_4@4
  float v20; // ST04_4@4
  float v21; // ST04_4@4
  float v22; // ST04_4@4
  float v23; // ST04_4@4
  float v24; // ST04_4@4
  float v25; // ST04_4@4
  float v26; // ST04_4@4
  float v27; // ST04_4@4
  float v28; // ST04_4@4
  float v29; // ST04_4@4
  unsigned int *v31; // r2@5
  signed int v32; // r1@7
  unsigned int *v33; // r2@9
  signed int v34; // r1@11
  unsigned int *v35; // r2@13
  signed int v36; // r1@15
  float v37; // [sp+4h] [bp-F4h]@0
  char v38; // [sp+Ch] [bp-ECh]@4
  int v39; // [sp+70h] [bp-88h]@4
  signed int v40; // [sp+74h] [bp-84h]@4
  signed int v41; // [sp+78h] [bp-80h]@4
  signed int v42; // [sp+7Ch] [bp-7Ch]@4
  char *v43; // [sp+84h] [bp-74h]@2
  char *v44; // [sp+88h] [bp-70h]@2
  int v45; // [sp+8Ch] [bp-6Ch]@2
  char v46; // [sp+90h] [bp-68h]@2
  int v47; // [sp+ACh] [bp-4Ch]@1
  char v48; // [sp+B0h] [bp-48h]@1

  v2 = a2;
  v3 = this;
  sub_119C884((void **)&v47, "particles_effects");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)&v48,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v47);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&EntityRenderer::mFlameMaterial, (mce::MaterialPtr *)&v48);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v48);
  v4 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
  {
    v31 = (unsigned int *)(v47 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    }
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = (mce::TextureGroup *)*((_DWORD *)v3 + 33);
  sub_119C884((void **)&v43, "textures/flame_atlas");
  v44 = v43;
  v43 = (char *)&unk_28898CC;
  v45 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v46, v5, (int)&v44, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)&EntityRenderer::mFlameTexture, (mce::TexturePtr *)&v46);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v46);
  v6 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v44 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v43 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  mce::Mesh::reset((mce::Mesh *)&EntityRenderer::mFlameMesh);
  v8 = (mce::Texture *)mce::TexturePtr::operator->((int)&EntityRenderer::mFlameTexture);
  _R5 = *(_QWORD *)mce::Texture::getDescription(v8);
  Tessellator::begin(v2, 16, 0);
  v39 = 1065353216;
  v40 = 1065353216;
  v41 = 1065353216;
  v42 = 1065353216;
  Tessellator::color(v2, (const Color *)&v39);
  __asm
    VMOV            S0, R5
    VCVT.F32.U32    S16, S0
  _R0 = HIDWORD(_R5) / (unsigned int)_R5;
    VMOV            S4, R0
    VLDR            S0, =0.05
    VMOV.F32        S2, #1.0
    VCVT.F32.S32    S4, S4
    VDIV.F32        S18, S0, S16
    VDIV.F32        S0, S2, S4
    VSUB.F32        S16, S0, S18
    VSTR            S16, [SP,#0xF8+var_F4]
  Tessellator::vertexUV(v2, 0.5, -0.0, 0.0, 1.0, v37);
  __asm { VSTR            S16, [SP,#0xF8+var_F4] }
  Tessellator::vertexUV(v2, -0.5, -0.0, 0.0, 0.0, v15);
  __asm { VSTR            S18, [SP,#0xF8+var_F4] }
  Tessellator::vertexUV(v2, -0.5, 1.4, 0.0, 0.0, v16);
  Tessellator::vertexUV(v2, 0.5, 1.4, 0.0, 1.0, v17);
  Tessellator::vertexUV(v2, 0.45, 0.45, 0.03, 1.0, v18);
  Tessellator::vertexUV(v2, -0.45, 0.45, 0.03, 0.0, v19);
  Tessellator::vertexUV(v2, -0.45, 1.85, 0.03, 0.0, v20);
  Tessellator::vertexUV(v2, 0.45, 1.85, 0.03, 1.0, v21);
  Tessellator::vertexUV(v2, 0.5, 1.4, 0.0, 1.0, v22);
  Tessellator::vertexUV(v2, -0.5, 1.4, 0.0, 0.0, v23);
  Tessellator::vertexUV(v2, -0.5, 0.0, 0.0, 0.0, v24);
  Tessellator::vertexUV(v2, 0.5, 0.0, 0.0, 1.0, v25);
  Tessellator::vertexUV(v2, 0.45, 1.85, -0.03, 1.0, v26);
  Tessellator::vertexUV(v2, -0.45, 1.85, -0.03, 0.0, v27);
  Tessellator::vertexUV(v2, -0.45, 0.45, -0.03, 0.0, v28);
  Tessellator::vertexUV(v2, 0.45, 0.45, -0.03, 1.0, v29);
  Tessellator::end((Tessellator *)&v38, (const char *)v2, 0, 0);
  mce::Mesh::operator=((int)&EntityRenderer::mFlameMesh, (int)&v38);
  return mce::Mesh::~Mesh((mce::Mesh *)&v38);
}


Entity *__fastcall EntityRenderer::renderText(int a1, BaseEntityRenderContext *this, int a3, int a4, float a5, float a6)
{
  int v6; // r4@1
  BaseEntityRenderer *v7; // r8@1
  BaseEntityRenderContext *v9; // r5@1
  Entity *result; // r0@1
  const Entity *v11; // r6@2
  int v12; // r0@3
  char *v17; // r6@9
  char *v18; // r0@9
  int v19; // [sp+14h] [bp-5Ch]@8
  signed int v20; // [sp+18h] [bp-58h]@8
  int v21; // [sp+1Ch] [bp-54h]@8
  int v22; // [sp+24h] [bp-4Ch]@9
  signed int v23; // [sp+28h] [bp-48h]@9
  int v24; // [sp+2Ch] [bp-44h]@9
  char v25; // [sp+34h] [bp-3Ch]@7

  v6 = a4;
  v7 = (BaseEntityRenderer *)a1;
  _R7 = (Entity *)a3;
  v9 = this;
  result = *(Entity **)(*(_DWORD *)a4 - 12);
  if ( result )
  {
    result = (Entity *)BaseEntityRenderContext::getCameraEntity(this);
    v11 = result;
    if ( result != _R7 )
    {
      v12 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R7 + 312))(_R7);
      __asm
      {
        VLDR            S0, =32.0
        VLDR            S16, =64.0
      }
      if ( v12 )
        __asm { VMOVNE.F32      S16, S0 }
      result = (Entity *)Entity::distanceToSqr(_R7, v11);
        VMUL.F32        S0, S16, S16
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm
        {
          VLDR            S16, [SP,#0x70+arg_4]
          VLDR            S18, [SP,#0x70+arg_0]
        }
        (*(void (__fastcall **)(char *, Entity *, _DWORD))(*(_DWORD *)_R7 + 80))(&v25, _R7, *((_DWORD *)v9 + 1));
          VLDR            S0, =0.7
          VLDR            S4, [R7,#0x118]
          VADD.F32        S0, S18, S0
          VLDR            S2, [R7,#0x10C]
          VLDR            S6, [R7,#0x13C]
          VADD.F32        S0, S0, S4
          VSUB.F32        S0, S0, S2
          VLDR            S2, [SP,#0x70+var_38]
          VSUB.F32        S0, S0, S6
          VADD.F32        S0, S0, S2
          VSTR            S0, [SP,#0x70+var_38]
        if ( _ZF )
          __asm { VMOV.F32        S0, #0.125 }
          v22 = 1065353216;
          v23 = 1065353216;
          v24 = 1065353216;
          __asm
          {
            VMUL.F32        S0, S16, S0
            VSTR            S0, [SP,#0x70+var_40]
          }
          v17 = BaseEntityRenderer::getDepthTestedNameTagMat(v7);
          v18 = BaseEntityRenderer::getDepthTestedNameTextMat(v7);
          result = (Entity *)BaseEntityRenderer::_renderTextInternal(
                               (int)v7,
                               v9,
                               v6,
                               (int)&v25,
                               (int)&v22,
                               (int)v17,
                               (int)v18,
                               (int)&BaseEntityRenderer::NAME_TAG_COLOR);
        else
          v19 = 1065353216;
          v20 = 1065353216;
          v21 = 1065353216;
          __asm { VSTR            S16, [SP,#0x70+var_50] }
          result = (Entity *)BaseEntityRenderer::renderText((int)v7, v9, v6, (int)&v25, (int)&v19);
    }
  }
  return result;
}


void __fastcall EntityRenderer::~EntityRenderer(EntityRenderer *this)
{
  EntityRenderer *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB448;
  v2 = (EntityRenderer *)((char *)this + 84);
  mce::TexturePtr::~TexturePtr((EntityRenderer *)((char *)this + 108));
  mce::MaterialPtr::~MaterialPtr((EntityRenderer *)((char *)v1 + 96));
  mce::MaterialPtr::~MaterialPtr(v2);
  BaseEntityRenderer::~BaseEntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall EntityRenderer::~EntityRenderer(EntityRenderer *this)
{
  EntityRenderer *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB448;
  v2 = (EntityRenderer *)((char *)this + 84);
  mce::TexturePtr::~TexturePtr((EntityRenderer *)((char *)this + 108));
  mce::MaterialPtr::~MaterialPtr((EntityRenderer *)((char *)v1 + 96));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN18BaseEntityRendererD2Ev(v1);
}


mce::TexturePtr *__fastcall EntityRenderer::resetFireTexture(EntityRenderer *this)
{
  char v2; // [sp+4h] [bp-2Ch]@1
  char v3; // [sp+1Ch] [bp-14h]@1

  mce::Mesh::reset((mce::Mesh *)&EntityRenderer::mFlameMesh);
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v3);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&EntityRenderer::mFlameMaterial, (mce::MaterialPtr *)&v3);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v3);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v2);
  mce::TexturePtr::operator=((mce::TexturePtr *)&EntityRenderer::mFlameTexture, (mce::TexturePtr *)&v2);
  return mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v2);
}


int __fastcall EntityRenderer::renderFlame(EntityRenderer *a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  EntityRenderer *v4; // r6@1
  int result; // r0@1
  Tessellator *v7; // r0@3
  int v8; // r0@4
  int v16; // r7@6
  int v17; // r6@7
  Options *v18; // r0@8
  mce::Texture *v20; // r0@10
  unsigned __int64 *v21; // r0@10
  int v23; // r0@12
  int v24; // r7@15
  int v25; // r0@15
  int v27; // r0@15
  char v28; // [sp+8h] [bp-A0h]@7
  char v30; // [sp+10h] [bp-98h]@4
  int v31; // [sp+18h] [bp-90h]@7
  signed int v32; // [sp+1Ch] [bp-8Ch]@7
  int v33; // [sp+20h] [bp-88h]@7
  int v34; // [sp+24h] [bp-84h]@7
  int v35; // [sp+28h] [bp-80h]@7
  int v36; // [sp+2Ch] [bp-7Ch]@7
  int v37; // [sp+30h] [bp-78h]@7
  int v38; // [sp+34h] [bp-74h]@7
  int v39; // [sp+38h] [bp-70h]@7
  int v40; // [sp+3Ch] [bp-6Ch]@7
  int v41; // [sp+40h] [bp-68h]@7
  int v42; // [sp+44h] [bp-64h]@7
  int v43; // [sp+48h] [bp-60h]@7
  int v44; // [sp+4Ch] [bp-5Ch]@7
  int v45; // [sp+50h] [bp-58h]@7
  int v46; // [sp+54h] [bp-54h]@7
  int v47; // [sp+58h] [bp-50h]@7
  int v48; // [sp+5Ch] [bp-4Ch]@7
  int v49; // [sp+60h] [bp-48h]@7
  float v50; // [sp+64h] [bp-44h]@7

  _KR00_8 = *a3;
  v4 = a1;
  _R4 = a2;
  result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a3 + 320))(*a3);
  if ( result == 1 )
  {
    if ( !mce::Mesh::isValid((mce::Mesh *)&EntityRenderer::mFlameMesh) )
    {
      v7 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R4);
      EntityRenderer::_buildFlameMesh(v4, v7);
    }
    v8 = BaseEntityRenderContext::getWorldMatrix(_R4);
    MatrixStack::push((MatrixStack *)&v30, v8);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v30);
    __asm
      VLDR            S0, [R0]
      VLDR            S8, [R7]
      VLDR            S2, [R0,#4]
      VLDR            S10, [R7,#4]
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
      VLDR            S12, [R7,#8]
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
      VLDR            S16, [R5,#0x10C]
      VLDR            S18, [R5,#0x108]
      VLDR            S22, [R5,#0x114]
      VLDR            S20, [R5,#0x118]
      VSUB.F32        S0, S22, S18
      VLDR            S2, =1.4
      VSUB.F32        S4, S20, S16
      VLDR            S6, [R0]
      VMUL.F32        S16, S0, S2
      VCMPE.F32       S4, S0
      VMRS            APSR_nzcv, FPSCR
      VMUL.F32        S6, S6, S16
      VSTR            S6, [R0]
      VLDR            S6, [R0,#4]
      VSTR            S6, [R0,#4]
      VLDR            S6, [R0,#8]
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S4 }
      VMUL.F32        S0, S0, S2
      VSTR            S6, [R0,#8]
      VLDR            S4, [R0,#0xC]
      VMUL.F32        S4, S4, S16
      VSTR            S4, [R0,#0xC]
      VLDR            S2, [R0,#0x10]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0,#0x10]
      VLDR            S2, [R0,#0x14]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x1C]
      VLDR            S0, [R0,#0x20]
      VMUL.F32        S0, S0, S16
      VSTR            S0, [R0,#0x20]
      VLDR            S0, [R0,#0x24]
      VSTR            S0, [R0,#0x24]
      VLDR            S0, [R0,#0x28]
      VSTR            S0, [R0,#0x28]
      VLDR            S0, [R0,#0x2C]
      VSTR            S0, [R0,#0x2C]
      VLDR            S18, [R5,#0x10C]
    _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_KR00_8 + 52))(_KR00_8);
      VLDR            S22, [R5,#0x10C]
      VLDR            S24, [R0,#4]
    v16 = BaseEntityRenderContext::getCameraEntity(_R4);
    if ( v16 )
      v17 = MatrixStack::MatrixStackRef::operator->((int)&v30);
      Entity::getRotation((Entity *)&v28, v16);
      __asm { VLDR            S0, [SP,#0xA8+var_9C] }
      v31 = 0;
      __asm { VNEG.F32        S0, S0 }
      v32 = 1065353216;
      v33 = 0;
      __asm { VSTR            S0, [SP,#0xA8+var_44] }
      glm::rotate<float>((int)&v34, v17, (int)&v50, (int)&v31);
      *(_DWORD *)v17 = v34;
      *(_DWORD *)(v17 + 4) = v35;
      *(_DWORD *)(v17 + 8) = v36;
      *(_DWORD *)(v17 + 12) = v37;
      *(_DWORD *)(v17 + 16) = v38;
      *(_DWORD *)(v17 + 20) = v39;
      *(_DWORD *)(v17 + 24) = v40;
      *(_DWORD *)(v17 + 28) = v41;
      *(_DWORD *)(v17 + 32) = v42;
      *(_DWORD *)(v17 + 36) = v43;
      *(_DWORD *)(v17 + 40) = v44;
      *(_DWORD *)(v17 + 44) = v45;
      *(_DWORD *)(v17 + 48) = v46;
      *(_DWORD *)(v17 + 52) = v47;
      *(_DWORD *)(v17 + 56) = v48;
      *(_DWORD *)(v17 + 60) = v49;
    v18 = (Options *)BaseEntityRenderContext::getOptions(_R4);
    Options::getPlayerViewPerspective(v18);
      VSUB.F32        S0, S20, S18
      VLDR            S4, =0.02
      VMOV.F32        S6, #-1.0
      VSUB.F32        S2, S24, S22
      VDIV.F32        S0, S0, S16
      VCVTR.S32.F32   S0, S0
      VMOV.F32        S16, #1.0
      VCVT.F32.S32    S0, S0
      VMOV.F32        S8, S16
    if ( _ZF )
      __asm { VMOVEQ.F32      S8, S6 }
      VLDR            S6, [R0,#0x18]
      VLDR            S3, [R0,#0x10]
      VLDR            S10, [R0,#0x20]
      VMUL.F32        S6, S6, S2
      VLDR            S12, [R0,#0x24]
      VMUL.F32        S3, S3, S2
      VLDR            S14, [R0,#0x28]
      VMUL.F32        S0, S0, S4
      VLDR            S4, =-0.3
      VLDR            S1, [R0,#0x2C]
      VADD.F32        S0, S0, S4
      VLDR            S4, [R0,#0x14]
      VMUL.F32        S4, S4, S2
      VMUL.F32        S0, S8, S0
      VLDR            S8, [R0,#0x1C]
      VMUL.F32        S2, S8, S2
      VMUL.F32        S12, S12, S0
      VMUL.F32        S10, S10, S0
      VMUL.F32        S14, S14, S0
      VMUL.F32        S0, S1, S0
      VSUB.F32        S4, S12, S4
      VSUB.F32        S8, S10, S3
      VSUB.F32        S6, S14, S6
      VLDR            S14, [R0,#0x3C]
      VSUB.F32        S0, S0, S2
      VLDR            S2, [R0,#0x30]
      VADD.F32        S4, S10, S4
      VADD.F32        S6, S12, S6
      VADD.F32        S0, S14, S0
      VSTR            S2, [R0,#0x30]
      VSTR            S4, [R0,#0x34]
      VSTR            S6, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    v20 = (mce::Texture *)mce::TexturePtr::operator->((int)&EntityRenderer::mFlameTexture);
    v21 = (unsigned __int64 *)mce::Texture::getDescription(v20);
      VLDR            S0, [R4,#4]
      VLDR            S2, [R5,#0x1B4]
      VSUB.F32        S18, S2, S0
      VSTR            S18, [R5,#0x1B4]
    _R6 = (*v21 >> 32) / (unsigned int)*v21;
      VCMPE.F32       S18, #0.0
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      *(_DWORD *)(_KR00_8 + 436) = 0x40000000;
      v23 = *(_DWORD *)(_KR00_8 + 432) + 1;
      if ( v23 >= _R6 )
        v23 = 0;
      *(_DWORD *)(_KR00_8 + 432) = v23;
    v24 = *(_DWORD *)(BaseEntityRenderContext::getScreenContext(_R4) + 32);
    v25 = BaseEntityRenderContext::getScreenContext(_R4);
      VMOV            S0, R6
      VLDR            S2, [R5,#0x1B0]
      VCVT.F32.S32    S2, S2
      VDIV.F32        S0, S16, S0
      VMOV            R3, S0
    mce::EffectConstants::setUVOffset((mce::EffectConstants *)(v24 + 616), *(mce::RenderContext **)(v25 + 12), 0.0, _R3);
    v27 = BaseEntityRenderContext::getScreenContext(_R4);
    mce::Mesh::render(
      (mce::Buffer *)&EntityRenderer::mFlameMesh,
      v27,
      (int)&EntityRenderer::mFlameMaterial,
      (int)&EntityRenderer::mFlameTexture,
      0,
      0);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v30);
  }
  return result;
}


BaseEntityRenderer *__fastcall EntityRenderer::EntityRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, char a3)
{
  char v3; // r5@1
  mce::TextureGroup *v4; // r6@1
  BaseEntityRenderer *v5; // r4@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  int v16; // [sp+4h] [bp-34h]@3
  int v17; // [sp+8h] [bp-30h]@3
  int v18; // [sp+10h] [bp-28h]@2
  int v19; // [sp+18h] [bp-20h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v5 = &off_26DB448;
  *((_BYTE *)v5 + 76) = v3;
  *((_DWORD *)v5 + 20) = 0;
  sub_119C884((void **)&v19, "entity_alphatest");
  mce::MaterialPtr::MaterialPtr(
    (BaseEntityRenderer *)((char *)v5 + 84),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v19);
  v6 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v18, "entity_alphatest_glint_item");
    (BaseEntityRenderer *)((char *)v5 + 96),
    &v18);
  v7 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v18 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C854(&v16, (int *)&EntityShaderManager::GLINT_TEXTURE_LOCATION);
  v17 = unk_27D2348;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 108), v4, (int)&v16, 0);
  v8 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  *((_DWORD *)v5 + 33) = v4;
  return v5;
}
