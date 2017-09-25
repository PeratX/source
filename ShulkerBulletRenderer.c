

BaseEntityRenderer *__fastcall ShulkerBulletRenderer::ShulkerBulletRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int *a3)
{
  int *v3; // r6@1
  mce::TextureGroup *v4; // r5@1
  BaseEntityRenderer *v5; // r4@1
  int v6; // r0@1
  char *v7; // r0@1
  char *v8; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  char *v14; // [sp+4h] [bp-24h]@1
  char *v15; // [sp+8h] [bp-20h]@1
  int v16; // [sp+Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  *(_DWORD *)v5 = &off_26DBFC4;
  v6 = *v3;
  *v3 = 0;
  *((_DWORD *)v5 + 34) = v6;
  sub_119C884((void **)&v14, "textures/entity/shulker/spark");
  v15 = v14;
  v16 = 0;
  v14 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((BaseEntityRenderer *)((char *)v5 + 140), v4, (int)&v15, 0);
  v7 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v5;
}


void __fastcall ShulkerBulletRenderer::~ShulkerBulletRenderer(ShulkerBulletRenderer *this)
{
  ShulkerBulletRenderer::~ShulkerBulletRenderer(this);
}


void __fastcall ShulkerBulletRenderer::~ShulkerBulletRenderer(ShulkerBulletRenderer *this)
{
  ShulkerBulletRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DBFC4;
  mce::TexturePtr::~TexturePtr((ShulkerBulletRenderer *)((char *)this + 140));
  v2 = *((_DWORD *)v1 + 34);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 34) = 0;
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall ShulkerBulletRenderer::render(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  int v4; // r9@1
  __int64 *v5; // r4@1
  int v6; // r8@1
  int v8; // r0@1
  int v14; // r7@1
  float v16; // r1@1
  int v18; // r7@1
  float v19; // r1@1
  int v21; // r4@1
  float v23; // r1@1
  int v25; // r3@1
  int v26; // r0@1
  int v27; // r3@1
  char v29; // [sp+18h] [bp-88h]@1
  int v30; // [sp+20h] [bp-80h]@1
  signed int v31; // [sp+24h] [bp-7Ch]@1
  int v32; // [sp+28h] [bp-78h]@1
  int v33; // [sp+2Ch] [bp-74h]@1
  int v34; // [sp+30h] [bp-70h]@1
  int v35; // [sp+34h] [bp-6Ch]@1
  int v36; // [sp+38h] [bp-68h]@1
  int v37; // [sp+3Ch] [bp-64h]@1
  int v38; // [sp+40h] [bp-60h]@1
  int v39; // [sp+44h] [bp-5Ch]@1
  int v40; // [sp+48h] [bp-58h]@1
  int v41; // [sp+4Ch] [bp-54h]@1
  int v42; // [sp+50h] [bp-50h]@1
  int v43; // [sp+54h] [bp-4Ch]@1
  int v44; // [sp+58h] [bp-48h]@1
  int v45; // [sp+5Ch] [bp-44h]@1
  int v46; // [sp+60h] [bp-40h]@1
  int v47; // [sp+64h] [bp-3Ch]@1
  int v48; // [sp+68h] [bp-38h]@1
  float v49; // [sp+6Ch] [bp-34h]@1

  _R6 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _KR00_8 = *v5;
  v8 = BaseEntityRenderContext::getWorldMatrix(_R6);
  MatrixStack::push((MatrixStack *)&v29, v8);
  __asm
  {
    VLDR            S0, [R5,#0x1A0]
    VCVT.F32.S32    S16, S0
    VLDR            S18, [R6,#4]
  }
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v29);
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
  v14 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    VADD.F32        S16, S16, S18
    VLDR            S0, =0.1
    VMUL.F32        S0, S16, S0
    VMOV            R4, S0
  _R0 = mce::Math::sin(_R4, v16);
    VMOV            S0, R0
    VLDR            S18, =180.0
    VMUL.F32        S0, S0, S18
  v30 = 0;
  v31 = 1065353216;
  v32 = 0;
  __asm { VSTR            S0, [SP,#0xA0+var_34] }
  glm::rotate<float>((int)&v33, v14, (int)&v49, (int)&v30);
  *(_DWORD *)v14 = v33;
  *(_DWORD *)(v14 + 4) = v34;
  *(_DWORD *)(v14 + 8) = v35;
  *(_DWORD *)(v14 + 12) = v36;
  *(_DWORD *)(v14 + 16) = v37;
  *(_DWORD *)(v14 + 20) = v38;
  *(_DWORD *)(v14 + 24) = v39;
  *(_DWORD *)(v14 + 28) = v40;
  *(_DWORD *)(v14 + 32) = v41;
  *(_DWORD *)(v14 + 36) = v42;
  *(_DWORD *)(v14 + 40) = v43;
  *(_DWORD *)(v14 + 44) = v44;
  *(_DWORD *)(v14 + 48) = v45;
  *(_DWORD *)(v14 + 52) = v46;
  *(_DWORD *)(v14 + 56) = v47;
  *(_DWORD *)(v14 + 60) = v48;
  v18 = MatrixStack::MatrixStackRef::operator->((int)&v29);
  _R0 = mce::Math::cos(_R4, v19);
  __asm { VMOV            S0, R0 }
  v30 = 1065353216;
  __asm { VMUL.F32        S0, S0, S18 }
  v31 = 0;
  glm::rotate<float>((int)&v33, v18, (int)&v49, (int)&v30);
  *(_DWORD *)v18 = v33;
  *(_DWORD *)(v18 + 4) = v34;
  *(_DWORD *)(v18 + 8) = v35;
  *(_DWORD *)(v18 + 12) = v36;
  *(_DWORD *)(v18 + 16) = v37;
  *(_DWORD *)(v18 + 20) = v38;
  *(_DWORD *)(v18 + 24) = v39;
  *(_DWORD *)(v18 + 28) = v40;
  *(_DWORD *)(v18 + 32) = v41;
  *(_DWORD *)(v18 + 36) = v42;
  *(_DWORD *)(v18 + 40) = v43;
  *(_DWORD *)(v18 + 44) = v44;
  *(_DWORD *)(v18 + 48) = v45;
  *(_DWORD *)(v18 + 52) = v46;
  *(_DWORD *)(v18 + 56) = v47;
  *(_DWORD *)(v18 + 60) = v48;
  v21 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    VLDR            S0, =0.15
    VMOV            R0, S0
  _R0 = mce::Math::sin(_R0, v23);
    VLDR            S2, =360.0
    VMUL.F32        S0, S0, S2
  v32 = 1065353216;
  glm::rotate<float>((int)&v33, v21, (int)&v49, (int)&v30);
  *(_DWORD *)v21 = v33;
  *(_DWORD *)(v21 + 4) = v34;
  *(_DWORD *)(v21 + 8) = v35;
  *(_DWORD *)(v21 + 12) = v36;
  *(_DWORD *)(v21 + 16) = v37;
  *(_DWORD *)(v21 + 20) = v38;
  *(_DWORD *)(v21 + 24) = v39;
  *(_DWORD *)(v21 + 28) = v40;
  *(_DWORD *)(v21 + 32) = v41;
  *(_DWORD *)(v21 + 36) = v42;
  *(_DWORD *)(v21 + 40) = v43;
  *(_DWORD *)(v21 + 44) = v44;
  *(_DWORD *)(v21 + 48) = v45;
  *(_DWORD *)(v21 + 52) = v46;
  *(_DWORD *)(v21 + 56) = v47;
  *(_DWORD *)(v21 + 60) = v48;
  v25 = *((_DWORD *)_R6 + 1);
  EntityShaderManager::_setupShaderParameters(v4, v6, *(float *)&_KR00_8);
  v26 = *(_DWORD *)(v4 + 136);
  *(_DWORD *)(v26 + 32) = v4 + 140;
  v27 = *((_DWORD *)_R6 + 1);
    VLDR            S0, [R5,#0x78]
    VLDR            S2, [R5,#0x7C]
    VSTR            S0, [SP,#0xA0+var_94]
    VSTR            S2, [SP,#0xA0+var_98]
  (*(void (__cdecl **)(int, int))(*(_DWORD *)v26 + 60))(v26, v6);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v29);
}


BaseEntityRenderer *__fastcall ShulkerBulletRenderer::~ShulkerBulletRenderer(ShulkerBulletRenderer *this)
{
  ShulkerBulletRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DBFC4;
  mce::TexturePtr::~TexturePtr((ShulkerBulletRenderer *)((char *)this + 140));
  v2 = *((_DWORD *)v1 + 34);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 34) = 0;
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}
