

void __fastcall WitherSkullRenderer::~WitherSkullRenderer(WitherSkullRenderer *this)
{
  WitherSkullRenderer::~WitherSkullRenderer(this);
}


void __fastcall WitherSkullRenderer::~WitherSkullRenderer(WitherSkullRenderer *this)
{
  WitherSkullRenderer *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DC690;
  v2 = (WitherSkullRenderer *)((char *)this + 196);
  mce::TexturePtr::~TexturePtr((WitherSkullRenderer *)((char *)this + 440));
  mce::TexturePtr::~TexturePtr((WitherSkullRenderer *)((char *)v1 + 416));
  *((_DWORD *)v1 + 34) = &off_26DB1B4;
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((WitherSkullRenderer *)((char *)v1 + 184));
  Model::~Model((WitherSkullRenderer *)((char *)v1 + 136));
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall WitherSkullRenderer::~WitherSkullRenderer(WitherSkullRenderer *this)
{
  WitherSkullRenderer *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DC690;
  v2 = (WitherSkullRenderer *)((char *)this + 196);
  mce::TexturePtr::~TexturePtr((WitherSkullRenderer *)((char *)this + 440));
  mce::TexturePtr::~TexturePtr((WitherSkullRenderer *)((char *)v1 + 416));
  *((_DWORD *)v1 + 34) = &off_26DB1B4;
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((WitherSkullRenderer *)((char *)v1 + 184));
  Model::~Model((WitherSkullRenderer *)((char *)v1 + 136));
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


int __fastcall WitherSkullRenderer::render(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  int v4; // r4@1
  __int64 *v5; // r5@1
  int v6; // r8@1
  int v8; // r0@1
  float v14; // r3@1
  int v15; // r5@1
  __int64 v17; // r0@1
  char v19; // [sp+8h] [bp-80h]@1
  int v20; // [sp+Ch] [bp-7Ch]@1
  char v21; // [sp+10h] [bp-78h]@1
  int v22; // [sp+18h] [bp-70h]@1
  signed int v23; // [sp+1Ch] [bp-6Ch]@1
  int v24; // [sp+20h] [bp-68h]@1
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

  _R7 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _KR00_8 = *v5;
  v8 = BaseEntityRenderContext::getWorldMatrix(_R7);
  MatrixStack::push((MatrixStack *)&v21, v8);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v21);
  __asm
  {
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
  }
  Entity::getInterpolatedRotation((Entity *)&v19, *(float *)&_KR00_8, *((float *)_R7 + 1), v14);
  v15 = MatrixStack::MatrixStackRef::operator->((int)&v21);
  v22 = 0;
  v23 = 1065353216;
  v24 = 0;
  v41 = v20;
  glm::rotate<float>((int)&v25, v15, (int)&v41, (int)&v22);
  *(_DWORD *)v15 = v25;
  *(_DWORD *)(v15 + 4) = v26;
  *(_DWORD *)(v15 + 8) = v27;
  *(_DWORD *)(v15 + 12) = v28;
  *(_DWORD *)(v15 + 16) = v29;
  *(_DWORD *)(v15 + 20) = v30;
  *(_DWORD *)(v15 + 24) = v31;
  *(_DWORD *)(v15 + 28) = v32;
  *(_DWORD *)(v15 + 32) = v33;
  *(_DWORD *)(v15 + 36) = v34;
  *(_DWORD *)(v15 + 40) = v35;
  *(_DWORD *)(v15 + 44) = v36;
  *(_DWORD *)(v15 + 48) = v37;
  *(_DWORD *)(v15 + 52) = v38;
  *(_DWORD *)(v15 + 56) = v39;
  *(_DWORD *)(v15 + 60) = v40;
    VNEG.F32        S0, S0
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
    VLDR            S0, [R7,#4]
    VSTR            S0, [SP,#0x88+var_88]
  EntityShaderManager::_setupShaderParameters(v4, v6, *(float *)&_KR00_8, COERCE_FLOAT(&Color::NIL));
  LODWORD(v17) = WitherSkull::isDangerous((WitherSkull *)_KR00_8);
  HIDWORD(v17) = v4 + 416;
  if ( (_DWORD)v17 )
    HIDWORD(v17) = v4 + 440;
  *(_DWORD *)(v4 + 168) = HIDWORD(v17);
  LODWORD(v17) = v4 + 196;
  ModelPart::render(v17, v4 + 136, 1031798784, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v21);
}


BaseEntityRenderer *__fastcall WitherSkullRenderer::WitherSkullRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r7@1
  BaseEntityRenderer *v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@2
  char *v6; // r0@3
  char *v7; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  char *v17; // [sp+8h] [bp-38h]@3
  char *v18; // [sp+Ch] [bp-34h]@3
  int v19; // [sp+10h] [bp-30h]@3
  char *v20; // [sp+18h] [bp-28h]@1
  char *v21; // [sp+1Ch] [bp-24h]@1
  int v22; // [sp+20h] [bp-20h]@1

  v2 = a2;
  v3 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  *(_DWORD *)v3 = &off_26DC690;
  SkeletonHeadModel::SkeletonHeadModel((BaseEntityRenderer *)((char *)v3 + 136), 0, 35, 64, 64);
  sub_119C884((void **)&v20, "textures/entity/wither_boss/wither");
  v21 = v20;
  v20 = (char *)&unk_28898CC;
  v22 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 416), v2, (int)&v21, 0);
  v4 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v21 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v20 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v17, "textures/entity/wither_boss/wither_invulnerable");
  v18 = v17;
  v17 = (char *)&unk_28898CC;
  v19 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 440), v2, (int)&v18, 0);
  v6 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  return v3;
}
