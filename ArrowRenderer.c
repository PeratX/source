

void __fastcall ArrowRenderer::~ArrowRenderer(ArrowRenderer *this)
{
  ArrowRenderer::~ArrowRenderer(this);
}


BaseEntityRenderer *__fastcall ArrowRenderer::ArrowRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r7@1
  BaseEntityRenderer *v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  char *v11; // [sp+4h] [bp-24h]@1
  char *v12; // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  AppPlatformListener::AppPlatformListener((_QWORD *)v3 + 17);
  *(_DWORD *)v3 = &off_26E68F0;
  *((_DWORD *)v3 + 34) = &off_26E6924;
  sub_21E94B4((void **)&v11, "textures/entity/arrows");
  v12 = v11;
  v11 = (char *)&unk_28898CC;
  v13 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 144), v2, (int)&v12, 0);
  v4 = v12 - 12;
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 168));
  *((_DWORD *)v3 + 20) = 1067030938;
  return v3;
}


BaseEntityRenderer *__fastcall ArrowRenderer::~ArrowRenderer(ArrowRenderer *this)
{
  EntityRenderer *v1; // r4@1
  mce::TexturePtr *v2; // r5@1
  AppPlatformListener *v3; // r6@1

  v1 = this;
  *(_DWORD *)this = &off_26E68F0;
  v2 = (ArrowRenderer *)((char *)this + 144);
  *((_DWORD *)this + 34) = &off_26E6924;
  v3 = (ArrowRenderer *)((char *)this + 136);
  mce::Mesh::~Mesh((ArrowRenderer *)((char *)this + 168));
  mce::TexturePtr::~TexturePtr(v2);
  AppPlatformListener::~AppPlatformListener(v3);
  return j_j_j__ZN14EntityRendererD2Ev_0(v1);
}


int __fastcall ArrowRenderer::render(int a1, BaseEntityRenderContext *a2, _QWORD *a3)
{
  int v4; // r11@1
  _QWORD *v5; // r6@1
  Tessellator *v6; // r10@1
  float v7; // r5@3 OVERLAPPED
  int v8; // r0@3
  float v16; // r3@3
  int v17; // r6@3
  int v18; // r6@3
  float v20; // r1@3
  int v23; // r6@4
  int v24; // r6@5
  char *v27; // r0@6
  int v28; // r5@7
  char *v29; // r0@7
  int v31; // [sp+8h] [bp-F8h]@1
  float v32; // [sp+Ch] [bp-F4h]@3
  char v34; // [sp+14h] [bp-ECh]@3
  char v35; // [sp+1Ch] [bp-E4h]@2
  int v36; // [sp+80h] [bp-80h]@3
  signed int v37; // [sp+84h] [bp-7Ch]@3
  int v38; // [sp+88h] [bp-78h]@3
  __int64 v39; // [sp+8Ch] [bp-74h]@3
  __int64 v40; // [sp+94h] [bp-6Ch]@3
  __int64 v41; // [sp+9Ch] [bp-64h]@3
  __int64 v42; // [sp+A4h] [bp-5Ch]@3
  __int64 v43; // [sp+ACh] [bp-54h]@3
  __int64 v44; // [sp+B4h] [bp-4Ch]@3
  __int64 v45; // [sp+BCh] [bp-44h]@3
  __int64 v46; // [sp+C4h] [bp-3Ch]@3
  float v47; // [sp+CCh] [bp-34h]@3

  _R7 = a2;
  v4 = a1;
  v5 = a3;
  v31 = BaseEntityRenderContext::getScreenContext(a2);
  v6 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R7);
  if ( !mce::Mesh::isValid((mce::Mesh *)(v4 + 168)) )
  {
    ArrowRenderer::_tessellate(0, v6);
    Tessellator::end((Tessellator *)&v35, (const char *)v6, 0, 0);
    mce::Mesh::operator=(v4 + 168, (int)&v35);
    mce::Mesh::~Mesh((mce::Mesh *)&v35);
  }
  *(_QWORD *)&v7 = *v5;
  v8 = BaseEntityRenderContext::getWorldMatrix(_R7);
  MatrixStack::push((MatrixStack *)&v34, v8);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v34);
  __asm
    VLDR            S0, [R0]
    VLDR            S8, [R6]
    VLDR            S2, [R0,#4]
    VLDR            S10, [R6,#4]
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
    VLDR            S12, [R6,#8]
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
    VLDR            S0, =0.075
    VLDR            S2, [R0,#0x14]
    VLDR            S4, [R0,#0x18]
    VLDR            S8, [R0,#0x10]
    VMUL.F32        S2, S2, S0
    VLDR            S6, [R0,#0x1C]
    VMUL.F32        S4, S4, S0
    VMUL.F32        S8, S8, S0
    VMUL.F32        S0, S6, S0
    VLDR            S6, [R0,#0x30]
    VLDR            S14, [R0,#0x3C]
    VADD.F32        S2, S10, S2
    VADD.F32        S4, S12, S4
    VADD.F32        S0, S14, S0
    VSTR            S6, [R0,#0x30]
    VSTR            S0, [R0,#0x3C]
  Entity::getInterpolatedRotation((Entity *)&v32, v7, *((float *)_R7 + 1), v16);
  v17 = MatrixStack::MatrixStackRef::operator->((int)&v34);
    VLDR            S0, =-90.0
    VLDR            S2, [SP,#0x100+var_F0]
    VADD.F32        S0, S2, S0
  v36 = 0;
  v37 = 1065353216;
  v38 = 0;
  __asm { VSTR            S0, [SP,#0x100+var_34] }
  glm::rotate<float>((int)&v39, v17, (int)&v47, (int)&v36);
  *(_QWORD *)v17 = v39;
  *(_QWORD *)(v17 + 8) = v40;
  *(_QWORD *)(v17 + 16) = v41;
  *(_QWORD *)(v17 + 24) = v42;
  *(_QWORD *)(v17 + 32) = v43;
  *(_QWORD *)(v17 + 40) = v44;
  *(_QWORD *)(v17 + 48) = v45;
  *(_QWORD *)(v17 + 56) = v46;
  v18 = MatrixStack::MatrixStackRef::operator->((int)&v34);
  v37 = 0;
  v47 = v32;
  v38 = 1065353216;
  glm::rotate<float>((int)&v39, v18, (int)&v47, (int)&v36);
  *(_QWORD *)v18 = v39;
  *(_QWORD *)(v18 + 8) = v40;
  *(_QWORD *)(v18 + 16) = v41;
  *(_QWORD *)(v18 + 24) = v42;
  *(_QWORD *)(v18 + 32) = v43;
  *(_QWORD *)(v18 + 40) = v44;
  *(_QWORD *)(v18 + 48) = v45;
  *(_QWORD *)(v18 + 56) = v46;
  _R0 = Entity::getShakeTime((Entity *)LODWORD(v7));
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R7,#4]
    VSUB.F32        S16, S0, S2
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VMOV.F32        S0, #3.0
      VMUL.F32        S0, S16, S0
      VMOV            R0, S0
    }
    _R4 = mce::Math::sin(_R0, v20);
    v23 = MatrixStack::MatrixStackRef::operator->((int)&v34);
    __asm { VMOV            S0, R4 }
    v36 = 0;
    v37 = 0;
    __asm { VNMUL.F32       S0, S16, S0 }
    v38 = 1065353216;
    __asm { VSTR            S0, [SP,#0x100+var_34] }
    glm::rotate<float>((int)&v39, v23, (int)&v47, (int)&v36);
    *(_QWORD *)v23 = v39;
    *(_QWORD *)(v23 + 8) = v40;
    *(_QWORD *)(v23 + 16) = v41;
    *(_QWORD *)(v23 + 24) = v42;
    *(_QWORD *)(v23 + 32) = v43;
    *(_QWORD *)(v23 + 40) = v44;
    *(_QWORD *)(v23 + 48) = v45;
    *(_QWORD *)(v23 + 56) = v46;
  v24 = MatrixStack::MatrixStackRef::operator->((int)&v34);
  v36 = 1065353216;
  v47 = 45.0;
  glm::rotate<float>((int)&v39, v24, (int)&v47, (int)&v36);
  *(_QWORD *)v24 = v39;
  *(_QWORD *)(v24 + 8) = v40;
  *(_QWORD *)(v24 + 16) = v41;
  *(_QWORD *)(v24 + 24) = v42;
  *(_QWORD *)(v24 + 32) = v43;
  *(_QWORD *)(v24 + 40) = v44;
  *(_QWORD *)(v24 + 48) = v45;
  *(_QWORD *)(v24 + 56) = v46;
    VLDR            S0, =0.05625
    VLDR            S2, [R0]
    VSTR            S2, [R0]
    VSTR            S2, [R0,#4]
    VLDR            S2, [R0,#8]
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VSTR            S2, [R0,#0xC]
    VLDR            S2, [R0,#0x10]
    VSTR            S2, [R0,#0x10]
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
    VMOV.F32        S0, #5.0
    VLDR            S8, [R0]
    VSUB.F32        S2, S10, S2
    VSUB.F32        S4, S12, S4
    VSUB.F32        S6, S6, S8
    VSUB.F32        S0, S14, S0
  *(_BYTE *)(LODWORD(v7) + 229) = 1;
    VLDR            S0, [R7,#4]
    VSTR            S0, [SP,#0x100+var_100]
  EntityShaderManager::_setupShaderParameters(v4, v31, v7, COERCE_FLOAT(&Color::NIL));
  if ( Tessellator::forceTessellateIntercept(v6) == 1 )
    ArrowRenderer::_tessellate((ArrowRenderer *)1, v6);
    v27 = EntityShaderManager::getTransparentEntityMaterial((EntityShaderManager *)v4);
    Tessellator::triggerIntercept(v6, (const mce::MaterialPtr *)v27, (const mce::TexturePtr *)(v4 + 144));
  else
    v28 = BaseEntityRenderContext::getScreenContext(_R7);
    v29 = EntityShaderManager::getTransparentEntityMaterial((EntityShaderManager *)v4);
    mce::Mesh::render((mce::Buffer *)(v4 + 168), v28, (int)v29, v4 + 144, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v34);
}


signed int __fastcall ArrowRenderer::_tessellate(ArrowRenderer *this, Tessellator *a2)
{
  Tessellator *v2; // r4@1

  v2 = a2;
  Tessellator::begin(a2, 12, 0);
  Tessellator::normal(v2, (const Vec3 *)Vec3::UNIT_X);
  Tessellator::vertexUV(v2, -7.0, -2.0, -2.0, 0.0, 0.15625);
  Tessellator::vertexUV(v2, -7.0, -2.0, 2.0, 0.15625, 0.15625);
  Tessellator::vertexUV(v2, -7.0, 2.0, 2.0, 0.15625, 0.3125);
  Tessellator::vertexUV(v2, -7.0, 2.0, -2.0, 0.0, 0.3125);
  Tessellator::normal(v2, (const Vec3 *)&Vec3::UNIT_Z);
  Tessellator::vertexUV(v2, -8.0, -2.0, 0.0, 0.0, 0.0);
  Tessellator::vertexUV(v2, 8.0, -2.0, 0.0, 0.5, 0.0);
  Tessellator::vertexUV(v2, 8.0, 2.0, 0.0, 0.5, 0.15625);
  Tessellator::vertexUV(v2, -8.0, 2.0, 0.0, 0.0, 0.15625);
  Tessellator::normal(v2, (const Vec3 *)&Vec3::UNIT_Y);
  Tessellator::vertexUV(v2, -8.0, 0.0, -2.0, 0.0, 0.0);
  Tessellator::vertexUV(v2, 8.0, 0.0, -2.0, 0.5, 0.0);
  Tessellator::vertexUV(v2, 8.0, 0.0, 2.0, 0.5, 0.15625);
  return Tessellator::vertexUV(v2, -8.0, 0.0, 2.0, 0.0, 0.15625);
}


void __fastcall ArrowRenderer::~ArrowRenderer(ArrowRenderer *this)
{
  EntityRenderer *v1; // r4@1
  mce::TexturePtr *v2; // r5@1
  AppPlatformListener *v3; // r6@1

  v1 = this;
  *(_DWORD *)this = &off_26E68F0;
  v2 = (ArrowRenderer *)((char *)this + 144);
  *((_DWORD *)this + 34) = &off_26E6924;
  v3 = (ArrowRenderer *)((char *)this + 136);
  mce::Mesh::~Mesh((ArrowRenderer *)((char *)this + 168));
  mce::TexturePtr::~TexturePtr(v2);
  AppPlatformListener::~AppPlatformListener(v3);
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
