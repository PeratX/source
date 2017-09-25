

int __fastcall ItemSpriteRenderer::_renderQuad(ItemSpriteRenderer *this, BaseEntityRenderContext *a2, Entity *a3, mce::Mesh *a4, const Vec3 *a5, float a6, float a7)
{
  BaseEntityRenderContext *v7; // r6@1
  ItemSpriteRenderer *v8; // r10@1
  mce::Mesh *v9; // r8@1
  int v11; // r9@1
  int v12; // r0@1
  int v20; // r5@1
  int v21; // r5@1
  Tessellator *v23; // r5@1
  ItemRenderer *v24; // r6@1
  int v25; // r0@2
  float v27; // ST00_4@3
  float v28; // ST04_4@3
  float v29; // ST00_4@3
  float v30; // ST04_4@3
  float v31; // ST00_4@3
  float v32; // ST04_4@3
  const mce::TexturePtr *v33; // r0@3
  float v36; // ST00_4@5
  float v37; // ST04_4@5
  float v38; // ST00_4@5
  float v39; // ST04_4@5
  float v40; // ST00_4@5
  float v41; // ST04_4@5
  char *v42; // r7@5
  const mce::TexturePtr *v43; // r0@5
  int v44; // r0@6
  char *v45; // r5@7
  int v46; // r0@7
  int v48; // [sp+0h] [bp-B8h]@0
  float v49; // [sp+0h] [bp-B8h]@2
  float v50; // [sp+4h] [bp-B4h]@0
  float v51; // [sp+10h] [bp-A8h]@1
  char v53; // [sp+18h] [bp-A0h]@1
  int v54; // [sp+20h] [bp-98h]@1
  signed int v55; // [sp+24h] [bp-94h]@1
  int v56; // [sp+28h] [bp-90h]@1
  int v57; // [sp+2Ch] [bp-8Ch]@1
  int v58; // [sp+30h] [bp-88h]@1
  int v59; // [sp+34h] [bp-84h]@1
  int v60; // [sp+38h] [bp-80h]@1
  int v61; // [sp+3Ch] [bp-7Ch]@1
  int v62; // [sp+40h] [bp-78h]@1
  int v63; // [sp+44h] [bp-74h]@1
  int v64; // [sp+48h] [bp-70h]@1
  int v65; // [sp+4Ch] [bp-6Ch]@1
  int v66; // [sp+50h] [bp-68h]@1
  int v67; // [sp+54h] [bp-64h]@1
  int v68; // [sp+58h] [bp-60h]@1
  int v69; // [sp+5Ch] [bp-5Ch]@1
  int v70; // [sp+60h] [bp-58h]@1
  int v71; // [sp+64h] [bp-54h]@1
  int v72; // [sp+68h] [bp-50h]@1
  float v73; // [sp+6Ch] [bp-4Ch]@1

  v7 = a2;
  v8 = this;
  v9 = a4;
  _R11 = a3;
  v11 = BaseEntityRenderContext::getScreenContext(a2);
  v12 = BaseEntityRenderContext::getWorldMatrix(v7);
  MatrixStack::push((MatrixStack *)&v53, v12);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v53);
  _R1 = a5;
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S8, [R1]
    VLDR            S10, [R1,#4]
    VLDR            S14, [R0,#0x14]
    VMUL.F32        S0, S0, S8
    VLDR            S1, [R0,#0x10]
    VMUL.F32        S2, S2, S8
    VLDR            S4, [R0,#8]
    VMUL.F32        S14, S14, S10
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S1, S1, S10
    VLDR            S3, [R0,#0x18]
    VMUL.F32        S4, S4, S8
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S6, S6, S8
    VMUL.F32        S3, S3, S10
    VLDR            S12, [R1,#8]
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
    VMOV.F32        S0, #0.5
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
  BaseEntityRenderContext::getCameraRotation((BaseEntityRenderContext *)&v51, *(float *)&v7, *((float *)v7 + 1));
  v20 = MatrixStack::MatrixStackRef::operator->((int)&v53);
    VLDR            S0, [SP,#0xB8+var_A4]
    VLDR            S2, =180.0
    VSUB.F32        S0, S2, S0
  v54 = 0;
  v55 = 1065353216;
  v56 = 0;
  __asm { VSTR            S0, [SP,#0xB8+var_4C] }
  glm::rotate<float>((int)&v57, v20, (int)&v73, (int)&v54);
  *(_DWORD *)v20 = v57;
  *(_DWORD *)(v20 + 4) = v58;
  *(_DWORD *)(v20 + 8) = v59;
  *(_DWORD *)(v20 + 12) = v60;
  *(_DWORD *)(v20 + 16) = v61;
  *(_DWORD *)(v20 + 20) = v62;
  *(_DWORD *)(v20 + 24) = v63;
  *(_DWORD *)(v20 + 28) = v64;
  *(_DWORD *)(v20 + 32) = v65;
  *(_DWORD *)(v20 + 36) = v66;
  *(_DWORD *)(v20 + 40) = v67;
  *(_DWORD *)(v20 + 44) = v68;
  *(_DWORD *)(v20 + 48) = v69;
  *(_DWORD *)(v20 + 52) = v70;
  *(_DWORD *)(v20 + 56) = v71;
  *(_DWORD *)(v20 + 60) = v72;
  v21 = MatrixStack::MatrixStackRef::operator->((int)&v53);
    VLDR            S0, [SP,#0xB8+var_A8]
    VNEG.F32        S0, S0
  v54 = 1065353216;
  v55 = 0;
  glm::rotate<float>((int)&v57, v21, (int)&v73, (int)&v54);
  *(_DWORD *)v21 = v57;
  *(_DWORD *)(v21 + 4) = v58;
  *(_DWORD *)(v21 + 8) = v59;
  *(_DWORD *)(v21 + 12) = v60;
  *(_DWORD *)(v21 + 16) = v61;
  *(_DWORD *)(v21 + 20) = v62;
  *(_DWORD *)(v21 + 24) = v63;
  *(_DWORD *)(v21 + 28) = v64;
  *(_DWORD *)(v21 + 32) = v65;
  *(_DWORD *)(v21 + 36) = v66;
  *(_DWORD *)(v21 + 40) = v67;
  *(_DWORD *)(v21 + 44) = v68;
  *(_DWORD *)(v21 + 48) = v69;
  *(_DWORD *)(v21 + 52) = v70;
  *(_DWORD *)(v21 + 56) = v71;
  *(_DWORD *)(v21 + 60) = v72;
    VLDR            S0, [R11,#0xD0]
    VLDR            S2, [R11,#0xD4]
    VLDR            S16, [SP,#0xB8+arg_8]
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S16
    VADD.F32        S0, S0, S2
    VMUL.F32        S2, S0, S2
  v23 = (Tessellator *)BaseEntityRenderContext::getTessellator(v7);
  v24 = (ItemRenderer *)BaseEntityRenderContext::getItemRenderer(v7);
  if ( (*(int (__fastcall **)(ItemSpriteRenderer *, Entity *))(*(_DWORD *)v8 + 48))(v8, _R11) == 1 )
    v25 = (*(int (__fastcall **)(ItemSpriteRenderer *, Entity *))(*(_DWORD *)v8 + 44))(v8, _R11);
    __asm { VSTR            S16, [SP,#0xB8+var_B8] }
    EntityShaderManager::_setupFoilShaderParameters(*(float *)&v8, v11, *(float *)&_R11, v25, v48);
    if ( Tessellator::forceTessellateIntercept(v23) == 1 )
    {
      _R0 = (*(int (__fastcall **)(ItemSpriteRenderer *, Entity *))(*(_DWORD *)v8 + 44))(v8, _R11);
      __asm
      {
        VLDR            S16, [R0,#4]
        VLDR            S18, [R0,#8]
        VLDR            S20, [R0,#0xC]
        VLDR            S22, [R0,#0x10]
      }
      Tessellator::begin(v23, 4, 0);
      Tessellator::normal(v23, (const Vec3 *)&Vec3::UNIT_Z);
        VSTR            S16, [SP,#0xB8+var_B8]
        VSTR            S22, [SP,#0xB8+var_B4]
      Tessellator::vertexUV(v23, -0.5, -0.25, 0.0, v49, v50);
        VSTR            S20, [SP,#0xB8+var_B8]
      Tessellator::vertexUV(v23, 0.5, -0.25, 0.0, v27, v28);
        VSTR            S18, [SP,#0xB8+var_B4]
      Tessellator::vertexUV(v23, 0.5, 0.75, 0.0, v29, v30);
      Tessellator::vertexUV(v23, -0.5, 0.75, 0.0, v31, v32);
      v33 = (const mce::TexturePtr *)ItemRenderer::getGraphics(v24, *((const Item **)v8 + 36));
      Tessellator::triggerIntercept(v23, (ItemSpriteRenderer *)((char *)v8 + 96), v33);
    }
    else
      v44 = ItemRenderer::getGraphics(v24, *((const Item **)v8 + 36));
      mce::Mesh::render(v9, v11, (int)v8 + 96, v44, (int)v8 + 108, 0, 0);
  else
    __asm { VMOV            R3, S16 }
    EntityShaderManager::_setupShaderParameters((int)v8, v11, *(float *)&_R11);
      _R0 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v8 + 44))(v8, _R11);
      Tessellator::vertexUV(v23, -0.5, -0.25, 0.0, *(float *)&v48, v50);
      Tessellator::vertexUV(v23, 0.5, -0.25, 0.0, v36, v37);
      Tessellator::vertexUV(v23, 0.5, 0.75, 0.0, v38, v39);
      Tessellator::vertexUV(v23, -0.5, 0.75, 0.0, v40, v41);
      v42 = EntityShaderManager::getTransparentEntityMaterial(v8);
      v43 = (const mce::TexturePtr *)ItemRenderer::getGraphics(v24, *((const Item **)v8 + 36));
      Tessellator::triggerIntercept(v23, (const mce::MaterialPtr *)v42, v43);
      v45 = EntityShaderManager::getTransparentEntityMaterial(v8);
      v46 = ItemRenderer::getGraphics(v24, *((const Item **)v8 + 36));
      mce::Mesh::render(v9, v11, (int)v45, v46, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v53);
}


signed int __fastcall ItemSpriteRenderer::_tessellateQuad(ItemSpriteRenderer *this, Tessellator *a2, Entity *a3)
{
  Tessellator *v3; // r4@1
  float v9; // ST00_4@1
  float v10; // ST04_4@1
  float v11; // ST00_4@1
  float v12; // ST04_4@1
  float v13; // ST00_4@1
  float v14; // ST04_4@1
  float v16; // [sp+0h] [bp-38h]@0
  float v17; // [sp+4h] [bp-34h]@0

  v3 = a2;
  _R0 = (*(int (**)(void))(*(_DWORD *)this + 44))();
  __asm
  {
    VLDR            S16, [R0,#4]
    VLDR            S18, [R0,#8]
    VLDR            S20, [R0,#0xC]
    VLDR            S22, [R0,#0x10]
  }
  Tessellator::begin(v3, 4, 0);
  Tessellator::normal(v3, (const Vec3 *)&Vec3::UNIT_Z);
    VSTR            S16, [SP,#0x38+var_38]
    VSTR            S22, [SP,#0x38+var_34]
  Tessellator::vertexUV(v3, -0.5, -0.25, 0.0, v16, v17);
    VSTR            S20, [SP,#0x38+var_38]
  Tessellator::vertexUV(v3, 0.5, -0.25, 0.0, v9, v10);
    VSTR            S18, [SP,#0x38+var_34]
  Tessellator::vertexUV(v3, 0.5, 0.75, 0.0, v11, v12);
  return Tessellator::vertexUV(v3, -0.5, 0.75, 0.0, v13, v14);
}


BaseEntityRenderer *__fastcall ItemSpriteRenderer::~ItemSpriteRenderer(ItemSpriteRenderer *this)
{
  ItemSpriteRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB924;
  *((_DWORD *)this + 34) = &off_26DB960;
  mce::Mesh::~Mesh((ItemSpriteRenderer *)((char *)this + 148));
  AppPlatformListener::~AppPlatformListener((ItemSpriteRenderer *)((char *)v1 + 136));
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


BaseEntityRenderer *__fastcall ItemSpriteRenderer::ItemSpriteRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int a3, char a4)
{
  int v4; // r7@1
  char v5; // r5@1
  BaseEntityRenderer *v6; // r4@1

  v4 = a3;
  v5 = a4;
  v6 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  AppPlatformListener::AppPlatformListener((_QWORD *)v6 + 17);
  *(_DWORD *)v6 = &off_26DB924;
  *((_DWORD *)v6 + 34) = &off_26DB960;
  *((_DWORD *)v6 + 36) = v4;
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v6 + 148));
  *((_BYTE *)v6 + 248) = v5;
  *((_DWORD *)v6 + 20) = 1067030938;
  return v6;
}


int __fastcall ItemSpriteRenderer::_buildQuad(ItemSpriteRenderer *this, BaseEntityRenderContext *a2, Entity *a3, mce::Mesh *a4)
{
  ItemSpriteRenderer *v4; // r7@1
  mce::Mesh *v5; // r4@1
  Entity *v6; // r6@1
  Tessellator *v7; // r5@1
  float v13; // ST00_4@1
  float v14; // ST04_4@1
  float v15; // ST00_4@1
  float v16; // ST04_4@1
  float v17; // ST00_4@1
  float v18; // ST04_4@1
  float v20; // [sp+0h] [bp-A8h]@0
  float v21; // [sp+4h] [bp-A4h]@0
  char v22; // [sp+Ch] [bp-9Ch]@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = (Tessellator *)BaseEntityRenderContext::getTessellator(a2);
  _R0 = (*(int (__fastcall **)(ItemSpriteRenderer *, Entity *))(*(_DWORD *)v4 + 44))(v4, v6);
  __asm
  {
    VLDR            S16, [R0,#4]
    VLDR            S18, [R0,#8]
    VLDR            S20, [R0,#0xC]
    VLDR            S22, [R0,#0x10]
  }
  Tessellator::begin(v7, 4, 0);
  Tessellator::normal(v7, (const Vec3 *)&Vec3::UNIT_Z);
    VSTR            S16, [SP,#0xA8+var_A8]
    VSTR            S22, [SP,#0xA8+var_A4]
  Tessellator::vertexUV(v7, -0.5, -0.25, 0.0, v20, v21);
    VSTR            S20, [SP,#0xA8+var_A8]
  Tessellator::vertexUV(v7, 0.5, -0.25, 0.0, v13, v14);
    VSTR            S18, [SP,#0xA8+var_A4]
  Tessellator::vertexUV(v7, 0.5, 0.75, 0.0, v15, v16);
  Tessellator::vertexUV(v7, -0.5, 0.75, 0.0, v17, v18);
  Tessellator::end((Tessellator *)&v22, (const char *)v7, 0, 0);
  mce::Mesh::operator=((int)v5, (int)&v22);
  return mce::Mesh::~Mesh((mce::Mesh *)&v22);
}


int __fastcall ItemSpriteRenderer::_renderQuad(int a1, BaseEntityRenderContext *this, int a3, int a4, int a5, int a6, float a7)
{
  return ItemSpriteRenderer::_renderQuad(
           (ItemSpriteRenderer *)a1,
           this,
           (Entity *)a3,
           (mce::Mesh *)a4,
           (const Vec3 *)a5,
           *(float *)&a6,
           a7);
}


void __fastcall ItemSpriteRenderer::~ItemSpriteRenderer(ItemSpriteRenderer *this)
{
  ItemSpriteRenderer::~ItemSpriteRenderer(this);
}


void __fastcall ItemSpriteRenderer::~ItemSpriteRenderer(ItemSpriteRenderer *this)
{
  ItemSpriteRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB924;
  *((_DWORD *)this + 34) = &off_26DB960;
  mce::Mesh::~Mesh((ItemSpriteRenderer *)((char *)this + 148));
  AppPlatformListener::~AppPlatformListener((ItemSpriteRenderer *)((char *)v1 + 136));
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall ItemSpriteRenderer::render(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  ItemSpriteRenderer *v3; // r6@1
  mce::Mesh *v4; // r7@1
  __int64 v6; // kr00_8@1
  int v12; // [sp+4h] [bp-24h]@0
  float v13; // [sp+8h] [bp-20h]@0

  v3 = (ItemSpriteRenderer *)a1;
  v4 = (mce::Mesh *)(a1 + 148);
  _R4 = a2;
  v6 = *a3;
  if ( !mce::Mesh::isValid((mce::Mesh *)(a1 + 148)) )
    ItemSpriteRenderer::_buildQuad(v3, _R4, (Entity *)v6, v4);
  __asm
  {
    VLDR            S0, [R4,#4]
    VSTR            S0, [SP,#0x28+var_20]
  }
  return ItemSpriteRenderer::_renderQuad((int)v3, _R4, v6, (int)v4, SHIDWORD(v6), v12, v13);
}
