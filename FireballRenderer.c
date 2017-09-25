

void __fastcall FireballRenderer::~FireballRenderer(FireballRenderer *this)
{
  EntityRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB5A4;
  mce::TexturePtr::~TexturePtr((FireballRenderer *)((char *)this + 136));
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall FireballRenderer::render(int a1, BaseEntityRenderContext *a2, int a3)
{
  BaseEntityRenderContext *v3; // r9@1
  int v6; // r0@1
  Tessellator *v13; // r6@1
  int v14; // r7@1
  int v15; // r7@1
  char *v16; // r0@2
  int v17; // r5@3
  char *v18; // r0@3
  float v20; // [sp+Ch] [bp-7Ch]@1
  char v22; // [sp+14h] [bp-74h]@1
  int v23; // [sp+1Ch] [bp-6Ch]@1
  signed int v24; // [sp+20h] [bp-68h]@1
  int v25; // [sp+24h] [bp-64h]@1
  int v26; // [sp+28h] [bp-60h]@1
  int v27; // [sp+2Ch] [bp-5Ch]@1
  int v28; // [sp+30h] [bp-58h]@1
  int v29; // [sp+34h] [bp-54h]@1
  int v30; // [sp+38h] [bp-50h]@1
  int v31; // [sp+3Ch] [bp-4Ch]@1
  int v32; // [sp+40h] [bp-48h]@1
  int v33; // [sp+44h] [bp-44h]@1
  int v34; // [sp+48h] [bp-40h]@1
  int v35; // [sp+4Ch] [bp-3Ch]@1
  int v36; // [sp+50h] [bp-38h]@1
  int v37; // [sp+54h] [bp-34h]@1
  int v38; // [sp+58h] [bp-30h]@1
  int v39; // [sp+5Ch] [bp-2Ch]@1
  int v40; // [sp+60h] [bp-28h]@1
  int v41; // [sp+64h] [bp-24h]@1
  float v42; // [sp+68h] [bp-20h]@1

  v3 = a2;
  _R8 = a1;
  _R4 = *(_DWORD *)(a3 + 4);
  v6 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v22, v6);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v22);
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
    VLDR            S0, [R8,#0xA0]
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
  v13 = (Tessellator *)BaseEntityRenderContext::getTessellator(v3);
  BaseEntityRenderContext::getCameraRotation((BaseEntityRenderContext *)&v20, *(float *)&v3, *((float *)v3 + 1));
  v14 = MatrixStack::MatrixStackRef::operator->((int)&v22);
    VLDR            S0, [SP,#0x88+var_78]
    VLDR            S2, =180.0
    VSUB.F32        S0, S2, S0
  v23 = 0;
  v24 = 1065353216;
  v25 = 0;
  __asm { VSTR            S0, [SP,#0x88+var_20] }
  glm::rotate<float>((int)&v26, v14, (int)&v42, (int)&v23);
  *(_DWORD *)v14 = v26;
  *(_DWORD *)(v14 + 4) = v27;
  *(_DWORD *)(v14 + 8) = v28;
  *(_DWORD *)(v14 + 12) = v29;
  *(_DWORD *)(v14 + 16) = v30;
  *(_DWORD *)(v14 + 20) = v31;
  *(_DWORD *)(v14 + 24) = v32;
  *(_DWORD *)(v14 + 28) = v33;
  *(_DWORD *)(v14 + 32) = v34;
  *(_DWORD *)(v14 + 36) = v35;
  *(_DWORD *)(v14 + 40) = v36;
  *(_DWORD *)(v14 + 44) = v37;
  *(_DWORD *)(v14 + 48) = v38;
  *(_DWORD *)(v14 + 52) = v39;
  *(_DWORD *)(v14 + 56) = v40;
  *(_DWORD *)(v14 + 60) = v41;
  v15 = MatrixStack::MatrixStackRef::operator->((int)&v22);
    VLDR            S0, [SP,#0x88+var_7C]
    VNEG.F32        S0, S0
  v23 = 1065353216;
  v24 = 0;
  glm::rotate<float>((int)&v26, v15, (int)&v42, (int)&v23);
  *(_DWORD *)v15 = v26;
  *(_DWORD *)(v15 + 4) = v27;
  *(_DWORD *)(v15 + 8) = v28;
  *(_DWORD *)(v15 + 12) = v29;
  *(_DWORD *)(v15 + 16) = v30;
  *(_DWORD *)(v15 + 20) = v31;
  *(_DWORD *)(v15 + 24) = v32;
  *(_DWORD *)(v15 + 28) = v33;
  *(_DWORD *)(v15 + 32) = v34;
  *(_DWORD *)(v15 + 36) = v35;
  *(_DWORD *)(v15 + 40) = v36;
  *(_DWORD *)(v15 + 44) = v37;
  *(_DWORD *)(v15 + 48) = v38;
  *(_DWORD *)(v15 + 52) = v39;
  *(_DWORD *)(v15 + 56) = v40;
  *(_DWORD *)(v15 + 60) = v41;
  Tessellator::begin(v13, 4, 0);
  Tessellator::normal(v13, 0.0, 1.0, 0.0);
  Tessellator::vertexUV(v13, -0.5, -0.25, 0.0, 0.0, 1.0);
  Tessellator::vertexUV(v13, 0.5, -0.25, 0.0, 1.0, 1.0);
  Tessellator::vertexUV(v13, 0.5, 0.75, 0.0, 1.0, 0.0);
  Tessellator::vertexUV(v13, -0.5, 0.75, 0.0, 0.0, 0.0);
  if ( Tessellator::forceTessellateIntercept(v13) == 1 )
    v16 = EntityShaderManager::getTransparentEntityMaterial((EntityShaderManager *)_R8);
    Tessellator::triggerIntercept(v13, (const mce::MaterialPtr *)v16, (const mce::TexturePtr *)(_R8 + 136));
  else
    v17 = BaseEntityRenderContext::getScreenContext(v3);
    v18 = EntityShaderManager::getTransparentEntityMaterial((EntityShaderManager *)_R8);
    Tessellator::draw((char *)v13, v17, (int)v18, _R8 + 136);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v22);
}


BaseEntityRenderer *__fastcall FireballRenderer::~FireballRenderer(FireballRenderer *this)
{
  EntityRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB5A4;
  mce::TexturePtr::~TexturePtr((FireballRenderer *)((char *)this + 136));
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


BaseEntityRenderer *__fastcall FireballRenderer::FireballRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int a3, int *a4)
{
  int *v5; // r7@1
  mce::TextureGroup *v6; // r6@1
  BaseEntityRenderer *v7; // r4@1
  char *v8; // r0@1
  char *v13; // r0@2
  unsigned int *v15; // r2@4
  signed int v16; // r1@6
  unsigned int *v17; // r2@8
  signed int v18; // r1@10
  char *v19; // [sp+0h] [bp-30h]@1
  char *v20; // [sp+4h] [bp-2Ch]@1
  int v21; // [sp+8h] [bp-28h]@1

  _R8 = a3;
  v5 = a4;
  v6 = a2;
  v7 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  *(_DWORD *)v7 = &off_26DB5A4;
  sub_119C854((int *)&v19, v5);
  v20 = v19;
  v21 = 0;
  v19 = (char *)&unk_28898CC;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v7 + 136), v6, (int)&v20, 0);
  v8 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  __asm { VMOV            S16, R8 }
  v13 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  __asm { VSTR            S16, [R4,#0xA0] }
  return v7;
}


void __fastcall FireballRenderer::~FireballRenderer(FireballRenderer *this)
{
  FireballRenderer::~FireballRenderer(this);
}
