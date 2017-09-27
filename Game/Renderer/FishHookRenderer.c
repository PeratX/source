

BaseEntityRenderer *__fastcall FishHookRenderer::~FishHookRenderer(FishHookRenderer *this)
{
  FishHookRenderer *v1; // r4@1
  mce::Mesh *v2; // r5@1
  AppPlatformListener *v3; // r6@1

  v1 = this;
  *(_DWORD *)this = &off_26DB644;
  v2 = (FishHookRenderer *)((char *)this + 144);
  *((_DWORD *)this + 34) = &off_26DB678;
  v3 = (FishHookRenderer *)((char *)this + 136);
  mce::TexturePtr::~TexturePtr((FishHookRenderer *)((char *)this + 344));
  mce::Mesh::~Mesh((FishHookRenderer *)((char *)v1 + 244));
  mce::Mesh::~Mesh(v2);
  AppPlatformListener::~AppPlatformListener(v3);
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


void __fastcall FishHookRenderer::~FishHookRenderer(FishHookRenderer *this)
{
  FishHookRenderer *v1; // r4@1
  mce::Mesh *v2; // r5@1
  AppPlatformListener *v3; // r6@1

  v1 = this;
  *(_DWORD *)this = &off_26DB644;
  v2 = (FishHookRenderer *)((char *)this + 144);
  *((_DWORD *)this + 34) = &off_26DB678;
  v3 = (FishHookRenderer *)((char *)this + 136);
  mce::TexturePtr::~TexturePtr((FishHookRenderer *)((char *)this + 344));
  mce::Mesh::~Mesh((FishHookRenderer *)((char *)v1 + 244));
  mce::Mesh::~Mesh(v2);
  AppPlatformListener::~AppPlatformListener(v3);
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall FishHookRenderer::FishHookRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r5@1
  BaseEntityRenderer *v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  char *v11; // [sp+4h] [bp-2Ch]@1
  char *v12; // [sp+8h] [bp-28h]@1
  int v13; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  AppPlatformListener::AppPlatformListener((_QWORD *)v3 + 17);
  *(_DWORD *)v3 = &off_26DB644;
  *((_DWORD *)v3 + 34) = &off_26DB678;
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 144));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 244));
  sub_119C884((void **)&v11, "textures/entity/fishhook");
  v12 = v11;
  v11 = (char *)&unk_28898CC;
  v13 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 344), v2, (int)&v12, 0);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  return v3;
}


int __fastcall FishHookRenderer::render(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  int v4; // r9@1
  __int64 *v5; // r5@1
  int v6; // r8@1
  int v8; // r0@1
  Tessellator *v15; // r7@1
  char *v16; // r0@2
  char *v17; // r0@5
  char v19; // [sp+8h] [bp-88h]@4
  char v20; // [sp+6Ch] [bp-24h]@1

  _R6 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _KR00_8 = *v5;
  v8 = BaseEntityRenderContext::getWorldMatrix(_R6);
  MatrixStack::push((MatrixStack *)&v20, v8);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v20);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S8, [R4]
    VLDR            S2, [R0,#4]
    VLDR            S10, [R4,#4]
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
    VLDR            S12, [R4,#8]
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
    VLDR            S0, [R7,#0xD0]
    VLDR            S2, [R7,#0xD4]
    VLDR            S4, [R6,#4]
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S4
    VADD.F32        S0, S0, S2
    VLDR            S2, [R0]
    VMUL.F32        S2, S0, S2
    VSTR            S2, [R0]
    VMUL.F32        S2, S2, S0
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
    VLDR            S0, [R6,#4]
    VSTR            S0, [SP,#0x90+var_90]
  EntityShaderManager::_setupShaderParameters(v4, v6, *(float *)&_KR00_8, COERCE_FLOAT(&Color::NIL));
  v15 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R6);
  if ( Tessellator::forceTessellateIntercept(v15) == 1 )
    FishHookRenderer::_tessellate((FishHookRenderer *)1, v15);
    v16 = EntityShaderManager::getTransparentEntityMaterial((EntityShaderManager *)v4);
    Tessellator::triggerIntercept(v15, (const mce::MaterialPtr *)v16, (const mce::TexturePtr *)(v4 + 344));
  else
    if ( !mce::Mesh::isValid((mce::Mesh *)(v4 + 144)) )
    {
      FishHookRenderer::_tessellate(0, v15);
      Tessellator::end((Tessellator *)&v19, (const char *)v15, 0, 0);
      mce::Mesh::operator=(v4 + 144, (int)&v19);
      mce::Mesh::~Mesh((mce::Mesh *)&v19);
    }
    v17 = EntityShaderManager::getTransparentEntityMaterial((EntityShaderManager *)v4);
    mce::Mesh::render((mce::Buffer *)(v4 + 144), v6, (int)v17, v4 + 344, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v20);
}


signed int __fastcall FishHookRenderer::_tessellate(FishHookRenderer *this, Tessellator *a2)
{
  Tessellator *v2; // r4@1
  float v10; // [sp+8h] [bp-48h]@1
  float v11; // [sp+14h] [bp-3Ch]@1
  float v12; // [sp+20h] [bp-30h]@1

  v2 = a2;
  Tessellator::begin((int)a2, 1, 36, 0);
  _R7 = &Vec3::UNIT_Y;
  __asm
  {
    VLDR            S0, [R7]
    VLDR            S2, [R7,#4]
    VLDR            S4, [R7,#8]
    VNEG.F32        S0, S0
    VNEG.F32        S2, S2
    VNEG.F32        S4, S4
    VSTR            S0, [SP,#0x50+var_30]
    VSTR            S2, [SP,#0x50+var_2C]
    VSTR            S4, [SP,#0x50+var_28]
  }
  Tessellator::normal(v2, (const Vec3 *)&v12);
  Tessellator::vertexUV(v2, -0.1, 0.1, -0.1, 0.0, 0.0);
  Tessellator::vertexUV(v2, -0.1, 0.1, 0.1, 0.125, 0.0);
  Tessellator::vertexUV(v2, 0.1, 0.1, 0.1, 0.125, 1.0);
  Tessellator::vertexUV(v2, 0.1, 0.1, -0.1, 0.0, 1.0);
  Tessellator::normal(v2, (const Vec3 *)&Vec3::UNIT_Y);
  Tessellator::vertexUV(v2, -0.1, -0.1, -0.1, 0.125, 0.0);
  Tessellator::vertexUV(v2, -0.1, -0.1, 0.1, 0.25, 0.0);
  Tessellator::vertexUV(v2, 0.1, -0.1, 0.1, 0.25, 1.0);
  Tessellator::vertexUV(v2, 0.1, -0.1, -0.1, 0.125, 1.0);
  _R9 = Vec3::UNIT_X;
  Tessellator::normal(v2, (const Vec3 *)Vec3::UNIT_X);
  Tessellator::vertexUV(v2, -0.1, -0.1, -0.1, 0.25, 0.0);
  Tessellator::vertexUV(v2, -0.1, -0.1, 0.1, 0.375, 0.0);
  Tessellator::vertexUV(v2, -0.1, 0.1, 0.1, 0.375, 1.0);
  Tessellator::vertexUV(v2, -0.1, 0.1, -0.1, 0.25, 1.0);
    VLDR            S0, [R9]
    VLDR            S2, [R9,#4]
    VLDR            S4, [R9,#8]
    VSTR            S0, [SP,#0x50+var_3C]
    VSTR            S2, [SP,#0x50+var_38]
    VSTR            S4, [SP,#0x50+var_34]
  Tessellator::normal(v2, (const Vec3 *)&v11);
  Tessellator::vertexUV(v2, 0.1, -0.1, -0.1, 0.375, 0.0);
  Tessellator::vertexUV(v2, 0.1, -0.1, 0.1, 0.5, 0.0);
  Tessellator::vertexUV(v2, 0.1, 0.1, 0.1, 0.5, 1.0);
  Tessellator::vertexUV(v2, 0.1, 0.1, -0.1, 0.375, 1.0);
  Tessellator::vertexUV(v2, -0.1, -0.1, -0.1, 0.5, 0.0);
  Tessellator::vertexUV(v2, 0.1, -0.1, -0.1, 0.625, 0.0);
  Tessellator::vertexUV(v2, 0.1, 0.1, -0.1, 0.625, 1.0);
  Tessellator::vertexUV(v2, -0.1, 0.1, -0.1, 0.5, 1.0);
    VSTR            S0, [SP,#0x50+var_48]
    VSTR            S2, [SP,#0x50+var_44]
    VSTR            S4, [SP,#0x50+var_40]
  Tessellator::normal(v2, (const Vec3 *)&v10);
  Tessellator::vertexUV(v2, -0.1, -0.1, 0.1, 0.625, 0.0);
  Tessellator::vertexUV(v2, 0.1, -0.1, 0.1, 0.75, 0.0);
  Tessellator::vertexUV(v2, 0.1, 0.1, 0.1, 0.75, 1.0);
  Tessellator::vertexUV(v2, -0.1, 0.1, 0.1, 0.625, 1.0);
  Tessellator::vertexUV(v2, -0.16667, -0.1, 0.0, 0.75, 0.0);
  Tessellator::vertexUV(v2, 0.033333, -0.1, 0.0, 0.875, 0.0);
  Tessellator::vertexUV(v2, 0.033333, -0.3, 0.0, 0.875, 1.0);
  Tessellator::vertexUV(v2, -0.16667, -0.3, 0.0, 0.75, 1.0);
  Tessellator::vertexUV(v2, -0.1, 0.1, 0.0, 0.875, 1.0);
  Tessellator::vertexUV(v2, 0.1, 0.1, 0.0, 1.0, 1.0);
  Tessellator::vertexUV(v2, 0.1, 0.3, 0.0, 1.0, 0.0);
  Tessellator::vertexUV(v2, -0.1, 0.3, 0.0, 0.875, 0.0);
  Tessellator::normal(v2, (const Vec3 *)&Vec3::UNIT_Z);
  Tessellator::vertexUV(v2, 0.0, 0.1, -0.1, 0.875, 1.0);
  Tessellator::vertexUV(v2, 0.0, 0.1, 0.1, 1.0, 1.0);
  Tessellator::vertexUV(v2, 0.0, 0.3, 0.1, 1.0, 0.0);
  return Tessellator::vertexUV(v2, 0.0, 0.3, -0.1, 0.875, 0.0);
}


void __fastcall FishHookRenderer::~FishHookRenderer(FishHookRenderer *this)
{
  FishHookRenderer::~FishHookRenderer(this);
}
