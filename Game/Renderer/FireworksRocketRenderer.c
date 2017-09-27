

BaseEntityRenderer *__fastcall FireworksRocketRenderer::~FireworksRocketRenderer(FireworksRocketRenderer *this)
{
  EntityRenderer *v1; // r4@1
  mce::TexturePtr *v2; // r5@1
  AppPlatformListener *v3; // r6@1

  v1 = this;
  *(_DWORD *)this = &off_26DB5D4;
  v2 = (FireworksRocketRenderer *)((char *)this + 144);
  *((_DWORD *)this + 34) = &off_26DB608;
  v3 = (FireworksRocketRenderer *)((char *)this + 136);
  mce::Mesh::~Mesh((FireworksRocketRenderer *)((char *)this + 168));
  mce::TexturePtr::~TexturePtr(v2);
  AppPlatformListener::~AppPlatformListener(v3);
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


signed int __fastcall FireworksRocketRenderer::_tessellate(FireworksRocketRenderer *this, Tessellator *a2)
{
  Tessellator *v2; // r4@1

  v2 = a2;
  Tessellator::begin(a2, 12, 0);
  Tessellator::normal(v2, (const Vec3 *)&Vec3::UNIT_Z);
  Tessellator::vertexUV(v2, -5.0, -4.0, 0.0, 0.0, 0.0);
  Tessellator::vertexUV(v2, 5.0, -4.0, 0.0, 0.5, 0.0);
  Tessellator::vertexUV(v2, 5.0, 4.0, 0.0, 0.5, 0.5);
  Tessellator::vertexUV(v2, -5.0, 4.0, 0.0, 0.0, 0.5);
  Tessellator::normal(v2, (const Vec3 *)&Vec3::UNIT_Y);
  Tessellator::vertexUV(v2, -5.0, 0.0, -4.0, 0.0, 0.0);
  Tessellator::vertexUV(v2, 5.0, 0.0, -4.0, 0.5, 0.0);
  Tessellator::vertexUV(v2, 5.0, 0.0, 4.0, 0.5, 0.5);
  return Tessellator::vertexUV(v2, -5.0, 0.0, 4.0, 0.0, 0.5);
}


void __fastcall FireworksRocketRenderer::~FireworksRocketRenderer(FireworksRocketRenderer *this)
{
  EntityRenderer *v1; // r4@1
  mce::TexturePtr *v2; // r5@1
  AppPlatformListener *v3; // r6@1

  v1 = this;
  *(_DWORD *)this = &off_26DB5D4;
  v2 = (FireworksRocketRenderer *)((char *)this + 144);
  *((_DWORD *)this + 34) = &off_26DB608;
  v3 = (FireworksRocketRenderer *)((char *)this + 136);
  mce::Mesh::~Mesh((FireworksRocketRenderer *)((char *)this + 168));
  mce::TexturePtr::~TexturePtr(v2);
  AppPlatformListener::~AppPlatformListener(v3);
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall FireworksRocketRenderer::~FireworksRocketRenderer(FireworksRocketRenderer *this)
{
  FireworksRocketRenderer::~FireworksRocketRenderer(this);
}


signed int __fastcall FireworksRocketRenderer::render(int a1, int a2, FireworksRocketEntity **a3)
{
  FireworksRocketEntity **v3; // r6@1
  int v4; // r10@1
  FireworksRocketEntity *v5; // r11@1
  signed int result; // r0@1
  Tessellator *v8; // r9@2
  int v10; // r0@4
  float v17; // r3@4
  int v18; // r6@4
  int v19; // r6@4
  int v20; // r6@4
  int v23; // r0@4
  char *v24; // r0@5
  int v25; // r5@6
  char *v26; // r0@6
  float v27; // [sp+8h] [bp-E8h]@4
  char v29; // [sp+10h] [bp-E0h]@4
  char v30; // [sp+18h] [bp-D8h]@3
  int v31; // [sp+7Ch] [bp-74h]@4
  signed int v32; // [sp+80h] [bp-70h]@4
  int v33; // [sp+84h] [bp-6Ch]@4
  int v34; // [sp+88h] [bp-68h]@4
  int v35; // [sp+8Ch] [bp-64h]@4
  int v36; // [sp+90h] [bp-60h]@4
  int v37; // [sp+94h] [bp-5Ch]@4
  int v38; // [sp+98h] [bp-58h]@4
  int v39; // [sp+9Ch] [bp-54h]@4
  int v40; // [sp+A0h] [bp-50h]@4
  int v41; // [sp+A4h] [bp-4Ch]@4
  int v42; // [sp+A8h] [bp-48h]@4
  int v43; // [sp+ACh] [bp-44h]@4
  int v44; // [sp+B0h] [bp-40h]@4
  int v45; // [sp+B4h] [bp-3Ch]@4
  int v46; // [sp+B8h] [bp-38h]@4
  int v47; // [sp+BCh] [bp-34h]@4
  int v48; // [sp+C0h] [bp-30h]@4
  int v49; // [sp+C4h] [bp-2Ch]@4
  float v50; // [sp+C8h] [bp-28h]@4

  v3 = a3;
  v4 = a1;
  v5 = *a3;
  _R7 = a2;
  result = FireworksRocketEntity::isAttachedToEntity(*a3);
  if ( !result )
  {
    v8 = (Tessellator *)BaseEntityRenderContext::getTessellator((BaseEntityRenderContext *)_R7);
    if ( !mce::Mesh::isValid((mce::Mesh *)(v4 + 168)) )
    {
      FireworksRocketRenderer::_tessellate(0, v8);
      Tessellator::end((Tessellator *)&v30, (const char *)v8, 0, 0);
      mce::Mesh::operator=(v4 + 168, (int)&v30);
      mce::Mesh::~Mesh((mce::Mesh *)&v30);
    }
    _R5 = v3[1];
    v10 = BaseEntityRenderContext::getWorldMatrix((BaseEntityRenderContext *)_R7);
    MatrixStack::push((MatrixStack *)&v29, v10);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    __asm
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
    Entity::getInterpolatedRotation((Entity *)&v27, *(float *)&v5, *(float *)(_R7 + 4), v17);
    v18 = MatrixStack::MatrixStackRef::operator->((int)&v29);
      VLDR            S0, =-90.0
      VLDR            S2, [SP,#0xF0+var_E4]
      VADD.F32        S0, S2, S0
    v31 = 0;
    v32 = 1065353216;
    v33 = 0;
    __asm { VSTR            S0, [SP,#0xF0+var_28] }
    glm::rotate<float>((int)&v34, v18, (int)&v50, (int)&v31);
    *(_DWORD *)v18 = v34;
    *(_DWORD *)(v18 + 4) = v35;
    *(_DWORD *)(v18 + 8) = v36;
    *(_DWORD *)(v18 + 12) = v37;
    *(_DWORD *)(v18 + 16) = v38;
    *(_DWORD *)(v18 + 20) = v39;
    *(_DWORD *)(v18 + 24) = v40;
    *(_DWORD *)(v18 + 28) = v41;
    *(_DWORD *)(v18 + 32) = v42;
    *(_DWORD *)(v18 + 36) = v43;
    *(_DWORD *)(v18 + 40) = v44;
    *(_DWORD *)(v18 + 44) = v45;
    *(_DWORD *)(v18 + 48) = v46;
    *(_DWORD *)(v18 + 52) = v47;
    *(_DWORD *)(v18 + 56) = v48;
    *(_DWORD *)(v18 + 60) = v49;
    v19 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    v32 = 0;
    v50 = v27;
    v33 = 1065353216;
    glm::rotate<float>((int)&v34, v19, (int)&v50, (int)&v31);
    *(_DWORD *)v19 = v34;
    *(_DWORD *)(v19 + 4) = v35;
    *(_DWORD *)(v19 + 8) = v36;
    *(_DWORD *)(v19 + 12) = v37;
    *(_DWORD *)(v19 + 16) = v38;
    *(_DWORD *)(v19 + 20) = v39;
    *(_DWORD *)(v19 + 24) = v40;
    *(_DWORD *)(v19 + 28) = v41;
    *(_DWORD *)(v19 + 32) = v42;
    *(_DWORD *)(v19 + 36) = v43;
    *(_DWORD *)(v19 + 40) = v44;
    *(_DWORD *)(v19 + 44) = v45;
    *(_DWORD *)(v19 + 48) = v46;
    *(_DWORD *)(v19 + 52) = v47;
    *(_DWORD *)(v19 + 56) = v48;
    *(_DWORD *)(v19 + 60) = v49;
    v20 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    v31 = 1065353216;
    v50 = 45.0;
    glm::rotate<float>((int)&v34, v20, (int)&v50, (int)&v31);
    *(_DWORD *)v20 = v34;
    *(_DWORD *)(v20 + 4) = v35;
    *(_DWORD *)(v20 + 8) = v36;
    *(_DWORD *)(v20 + 12) = v37;
    *(_DWORD *)(v20 + 16) = v38;
    *(_DWORD *)(v20 + 20) = v39;
    *(_DWORD *)(v20 + 24) = v40;
    *(_DWORD *)(v20 + 28) = v41;
    *(_DWORD *)(v20 + 32) = v42;
    *(_DWORD *)(v20 + 36) = v43;
    *(_DWORD *)(v20 + 40) = v44;
    *(_DWORD *)(v20 + 44) = v45;
    *(_DWORD *)(v20 + 48) = v46;
    *(_DWORD *)(v20 + 52) = v47;
    *(_DWORD *)(v20 + 56) = v48;
    *(_DWORD *)(v20 + 60) = v49;
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
    *((_BYTE *)v5 + 229) = 1;
    v23 = BaseEntityRenderContext::getScreenContext((BaseEntityRenderContext *)_R7);
      VLDR            S0, [R7,#4]
      VSTR            S0, [SP,#0xF0+var_F0]
    EntityShaderManager::_setupShaderParameters(v4, v23, *(float *)&v5, COERCE_FLOAT(&Color::NIL));
    if ( Tessellator::forceTessellateIntercept(v8) == 1 )
      FireworksRocketRenderer::_tessellate((FireworksRocketRenderer *)1, v8);
      v24 = EntityShaderManager::getTransparentEntityMaterial((EntityShaderManager *)v4);
      Tessellator::triggerIntercept(v8, (const mce::MaterialPtr *)v24, (const mce::TexturePtr *)(v4 + 144));
    else
      v25 = BaseEntityRenderContext::getScreenContext((BaseEntityRenderContext *)_R7);
      v26 = EntityShaderManager::getTransparentEntityMaterial((EntityShaderManager *)v4);
      mce::Mesh::render((mce::Buffer *)(v4 + 168), v25, (int)v26, v4 + 144, 0, 0);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v29);
  }
  return result;
}


BaseEntityRenderer *__fastcall FireworksRocketRenderer::FireworksRocketRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
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
  *(_DWORD *)v3 = &off_26DB5D4;
  *((_DWORD *)v3 + 34) = &off_26DB608;
  sub_119C884((void **)&v11, "textures/entity/fireworks");
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
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 168));
  *((_DWORD *)v3 + 20) = 1067030938;
  return v3;
}
