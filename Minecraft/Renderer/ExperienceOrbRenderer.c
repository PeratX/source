

void __fastcall ExperienceOrbRenderer::~ExperienceOrbRenderer(ExperienceOrbRenderer *this)
{
  ExperienceOrbRenderer::~ExperienceOrbRenderer(this);
}


BaseEntityRenderer *__fastcall ExperienceOrbRenderer::ExperienceOrbRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int a3)
{
  mce::TextureGroup *v4; // r6@1
  BaseEntityRenderer *v5; // r4@1
  char *v10; // r0@1
  char *v11; // r0@2
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  char *v17; // [sp+4h] [bp-24h]@1
  char *v18; // [sp+8h] [bp-20h]@1
  int v19; // [sp+Ch] [bp-1Ch]@1

  _R7 = a3;
  v4 = a2;
  v5 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  AppPlatformListener::AppPlatformListener((_QWORD *)v5 + 17);
  __asm { VMOV            S0, R7 }
  *(_DWORD *)v5 = &off_26DB508;
  *((_DWORD *)v5 + 34) = &off_26DB538;
  __asm { VSTR            S0, [R4,#0x90] }
  sub_119C884((void **)&v17, "textures/entity/experience_orb");
  v18 = v17;
  v17 = (char *)&unk_28898CC;
  v19 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 148), v4, (int)&v18, 0);
  v10 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  v11 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  *((_DWORD *)v5 + 20) = 1061997773;
  return v5;
}


void __fastcall ExperienceOrbRenderer::~ExperienceOrbRenderer(ExperienceOrbRenderer *this)
{
  ExperienceOrbRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB508;
  *((_DWORD *)this + 34) = &off_26DB538;
  mce::TexturePtr::~TexturePtr((ExperienceOrbRenderer *)((char *)this + 148));
  AppPlatformListener::~AppPlatformListener((ExperienceOrbRenderer *)((char *)v1 + 136));
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall ExperienceOrbRenderer::~ExperienceOrbRenderer(ExperienceOrbRenderer *this)
{
  ExperienceOrbRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB508;
  *((_DWORD *)this + 34) = &off_26DB538;
  mce::TexturePtr::~TexturePtr((ExperienceOrbRenderer *)((char *)this + 148));
  AppPlatformListener::~AppPlatformListener((ExperienceOrbRenderer *)((char *)v1 + 136));
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


int __fastcall ExperienceOrbRenderer::render(int a1, BaseEntityRenderContext *a2, int a3)
{
  int v5; // r4@1
  int v6; // r8@1
  int v8; // r0@1
  Tessellator *v15; // r6@1
  signed int v17; // r0@1
  int v18; // r1@1
  int v19; // r2@1
  float v27; // r1@1
  int v29; // r4@1
  int v30; // r4@1
  void *v31; // r0@1
  float v32; // ST00_4@2
  float v33; // ST04_4@2
  float v34; // ST00_4@2
  float v35; // ST04_4@2
  float v36; // ST00_4@2
  float v37; // ST04_4@2
  unsigned int *v39; // r2@6
  signed int v40; // r1@8
  float v41; // [sp+0h] [bp-E0h]@1
  float v42; // [sp+4h] [bp-DCh]@0
  int v43; // [sp+10h] [bp-D0h]@1
  char v44; // [sp+14h] [bp-CCh]@1
  float v45; // [sp+20h] [bp-C0h]@1
  float v47; // [sp+28h] [bp-B8h]@1
  int v48; // [sp+2Ch] [bp-B4h]@1
  int v49; // [sp+34h] [bp-ACh]@1
  char v50; // [sp+38h] [bp-A8h]@1
  int v51; // [sp+40h] [bp-A0h]@1
  signed int v52; // [sp+44h] [bp-9Ch]@1
  int v53; // [sp+48h] [bp-98h]@1
  int v54; // [sp+4Ch] [bp-94h]@1
  int v55; // [sp+50h] [bp-90h]@1
  int v56; // [sp+54h] [bp-8Ch]@1
  int v57; // [sp+58h] [bp-88h]@1
  int v58; // [sp+5Ch] [bp-84h]@1
  int v59; // [sp+60h] [bp-80h]@1
  int v60; // [sp+64h] [bp-7Ch]@1
  int v61; // [sp+68h] [bp-78h]@1
  int v62; // [sp+6Ch] [bp-74h]@1
  int v63; // [sp+70h] [bp-70h]@1
  int v64; // [sp+74h] [bp-6Ch]@1
  int v65; // [sp+78h] [bp-68h]@1
  int v66; // [sp+7Ch] [bp-64h]@1
  int v67; // [sp+80h] [bp-60h]@1
  int v68; // [sp+84h] [bp-5Ch]@1
  int v69; // [sp+88h] [bp-58h]@1
  float v70; // [sp+8Ch] [bp-54h]@1

  _R7 = a2;
  _R9 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _R5 = *(_DWORD *)(v5 + 4);
  v8 = BaseEntityRenderContext::getWorldMatrix(_R7);
  MatrixStack::push((MatrixStack *)&v50, v8);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v50);
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
    VLDR            S0, [R9,#0x90]
    VLDR            S2, [R0]
    VMUL.F32        S2, S2, S0
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
  v15 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R7);
  _R4 = *(ExperienceOrb **)v5;
  v17 = ExperienceOrb::getIconIndex(_R4);
    VLDR            S0, [R4,#0x1A0]
    VMOV.F32        S24, #0.5
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R7,#4]
  v18 = v17 + ((unsigned int)(v17 >> 31) >> 30);
  v19 = v17 - (v18 & 0xFFFFFFC);
  _R0 = 4 * v18 & 0xFFFFFFF0;
  _R1 = 16 * v19 + 16;
    VADD.F32        S0, S0, S2
    VMUL.F32        S26, S0, S24
    VMOV            S0, R0
  _R0 += 16;
    VCVT.F32.S32    S16, S0
    VCVT.F32.S32    S20, S0
    VMOV            R0, S26
    VMOV            S0, R1
  _R1 = 16 * v19;
    VCVT.F32.S32    S18, S0
    VCVT.F32.S32    S22, S0
  _R4 = mce::Math::sin(_R0, COERCE_FLOAT(16 * v19));
  __asm { VLDR            S0, =1.3333 }
  _R0 = &mce::Math::PI;
    VADD.F32        S0, S0, S26
    VMOV            R0, S0
  _R0 = mce::Math::sin(_R0, v27);
    VMOV.F32        S4, #1.0
    VMOV            S0, R4
    VMOV            S2, R0
    VADD.F32        S0, S0, S4
    VADD.F32        S2, S2, S4
    VLDR            S4, =0.1
    VMUL.F32        S0, S0, S24
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0xE0+var_B8]
  v48 = 1065353216;
  __asm { VSTR            S2, [SP,#0xE0+var_B0] }
  v49 = 1056964608;
  BaseEntityRenderContext::getCameraRotation((BaseEntityRenderContext *)&v45, *(float *)&_R7, *((float *)_R7 + 1));
  v29 = MatrixStack::MatrixStackRef::operator->((int)&v50);
    VLDR            S0, [SP,#0xE0+var_BC]
    VLDR            S2, =180.0
    VSUB.F32        S0, S2, S0
  v51 = 0;
  v52 = 1065353216;
  v53 = 0;
  __asm { VSTR            S0, [SP,#0xE0+var_54] }
  glm::rotate<float>((int)&v54, v29, (int)&v70, (int)&v51);
  *(_DWORD *)v29 = v54;
  *(_DWORD *)(v29 + 4) = v55;
  *(_DWORD *)(v29 + 8) = v56;
  *(_DWORD *)(v29 + 12) = v57;
  *(_DWORD *)(v29 + 16) = v58;
  *(_DWORD *)(v29 + 20) = v59;
  *(_DWORD *)(v29 + 24) = v60;
  *(_DWORD *)(v29 + 28) = v61;
  *(_DWORD *)(v29 + 32) = v62;
  *(_DWORD *)(v29 + 36) = v63;
  *(_DWORD *)(v29 + 40) = v64;
  *(_DWORD *)(v29 + 44) = v65;
  *(_DWORD *)(v29 + 48) = v66;
  *(_DWORD *)(v29 + 52) = v67;
  *(_DWORD *)(v29 + 56) = v68;
  *(_DWORD *)(v29 + 60) = v69;
  v30 = MatrixStack::MatrixStackRef::operator->((int)&v50);
    VMOV.F32        S0, #-0.75
    VLDR            S2, [SP,#0xE0+var_C0]
  v51 = 1065353216;
  v52 = 0;
    VSTR            S0, [SP,#0xE0+var_54]
  glm::rotate<float>((int)&v54, v30, (int)&v70, (int)&v51);
  *(_DWORD *)v30 = v54;
  *(_DWORD *)(v30 + 4) = v55;
  *(_DWORD *)(v30 + 8) = v56;
  *(_DWORD *)(v30 + 12) = v57;
  *(_DWORD *)(v30 + 16) = v58;
  *(_DWORD *)(v30 + 20) = v59;
  *(_DWORD *)(v30 + 24) = v60;
  *(_DWORD *)(v30 + 28) = v61;
  *(_DWORD *)(v30 + 32) = v62;
  *(_DWORD *)(v30 + 36) = v63;
  *(_DWORD *)(v30 + 40) = v64;
  *(_DWORD *)(v30 + 44) = v65;
  *(_DWORD *)(v30 + 48) = v66;
  *(_DWORD *)(v30 + 52) = v67;
  *(_DWORD *)(v30 + 56) = v68;
  *(_DWORD *)(v30 + 60) = v69;
  EntityShaderManager::_setupShaderParameters(_R9, v6, 1065353216, (int)&v47, 0);
  sub_119C884((void **)&v43, "entity_custom");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)&v44,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v43);
  v31 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
    }
    else
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  Tessellator::begin(v15, 4, 0);
  Tessellator::normal(v15, (const Vec3 *)&Vec3::UNIT_Y);
    VLDR            S24, =0.015625
    VMUL.F32        S26, S20, S24
    VMUL.F32        S20, S22, S24
    VSTR            S20, [SP,#0xE0+var_E0]
    VSTR            S26, [SP,#0xE0+var_DC]
  Tessellator::vertexUV(v15, -0.5, -0.25, 0.0, v41, v42);
    VMUL.F32        S18, S18, S24
    VSTR            S18, [SP,#0xE0+var_E0]
  Tessellator::vertexUV(v15, 0.5, -0.25, 0.0, v32, v33);
    VMUL.F32        S16, S16, S24
    VSTR            S16, [SP,#0xE0+var_DC]
  Tessellator::vertexUV(v15, 0.5, 0.75, 0.0, v34, v35);
  Tessellator::vertexUV(v15, -0.5, 0.75, 0.0, v36, v37);
  if ( Tessellator::forceTessellateIntercept(v15) == 1 )
    Tessellator::triggerIntercept(v15, (const mce::MaterialPtr *)&v44, (const mce::TexturePtr *)(_R9 + 148));
  else
    Tessellator::draw((char *)v15, v6, (int)&v44, _R9 + 148);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v44);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v50);
}
