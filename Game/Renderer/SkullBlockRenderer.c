

unsigned int __fastcall SkullBlockRenderer::getTextureForSkullType(int a1, unsigned int a2)
{
  if ( a2 > 5 )
    a2 = 3;
  return a1 + 24 * a2 + 1164;
}


void __fastcall SkullBlockRenderer::~SkullBlockRenderer(SkullBlockRenderer *this)
{
  SkullBlockRenderer::~SkullBlockRenderer(this);
}


BaseEntityRenderer *__fastcall SkullBlockRenderer::SkullBlockRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r10@1
  BaseEntityRenderer *v3; // r9@1
  void *v4; // r0@1
  void *v5; // r0@2
  char *v6; // r0@3
  char *v7; // r0@4
  char *v8; // r0@5
  char *v9; // r0@6
  char *v10; // r0@7
  char *v11; // r0@8
  char *v12; // r0@9
  char *v13; // r0@10
  char *v14; // r0@11
  char *v15; // r0@12
  char *v16; // r0@13
  char *v17; // r0@14
  unsigned int *v19; // r2@16
  signed int v20; // r1@18
  unsigned int *v21; // r2@20
  signed int v22; // r1@22
  unsigned int *v23; // r2@24
  signed int v24; // r1@26
  unsigned int *v25; // r2@28
  signed int v26; // r1@30
  unsigned int *v27; // r2@32
  signed int v28; // r1@34
  unsigned int *v29; // r2@36
  signed int v30; // r1@38
  unsigned int *v31; // r2@40
  signed int v32; // r1@42
  unsigned int *v33; // r2@44
  signed int v34; // r1@46
  unsigned int *v35; // r2@48
  signed int v36; // r1@50
  unsigned int *v37; // r2@52
  signed int v38; // r1@54
  unsigned int *v39; // r2@56
  signed int v40; // r1@58
  unsigned int *v41; // r2@60
  signed int v42; // r1@62
  unsigned int *v43; // r2@64
  signed int v44; // r1@66
  unsigned int *v45; // r2@68
  signed int v46; // r1@70
  char *v47; // [sp+24h] [bp-124h]@13
  char *v48; // [sp+28h] [bp-120h]@13
  int v49; // [sp+2Ch] [bp-11Ch]@13
  char v50; // [sp+30h] [bp-118h]@13
  char *v51; // [sp+4Ch] [bp-FCh]@11
  char *v52; // [sp+50h] [bp-F8h]@11
  int v53; // [sp+54h] [bp-F4h]@11
  char v54; // [sp+58h] [bp-F0h]@11
  char *v55; // [sp+74h] [bp-D4h]@9
  char *v56; // [sp+78h] [bp-D0h]@9
  int v57; // [sp+7Ch] [bp-CCh]@9
  char v58; // [sp+80h] [bp-C8h]@9
  char *v59; // [sp+9Ch] [bp-ACh]@7
  char *v60; // [sp+A0h] [bp-A8h]@7
  int v61; // [sp+A4h] [bp-A4h]@7
  char v62; // [sp+A8h] [bp-A0h]@7
  char *v63; // [sp+C4h] [bp-84h]@5
  char *v64; // [sp+C8h] [bp-80h]@5
  int v65; // [sp+CCh] [bp-7Ch]@5
  char v66; // [sp+D0h] [bp-78h]@5
  char *v67; // [sp+ECh] [bp-5Ch]@3
  char *v68; // [sp+F0h] [bp-58h]@3
  int v69; // [sp+F4h] [bp-54h]@3
  char v70; // [sp+F8h] [bp-50h]@3
  int v71; // [sp+114h] [bp-34h]@2
  int v72; // [sp+11Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v3 = &off_26DB198;
  SkeletonHeadModel::SkeletonHeadModel((BaseEntityRenderer *)((char *)v3 + 76), 0, 0, 64, 32);
  SkeletonHeadModel::SkeletonHeadModel((BaseEntityRenderer *)((char *)v3 + 356), 0, 0, 64, 64);
  DragonHeadModel::DragonHeadModel((BaseEntityRenderer *)((char *)v3 + 636));
  sub_119C884((void **)&v72, "ui_mob_head");
  mce::MaterialPtr::MaterialPtr(
    (BaseEntityRenderer *)((char *)v3 + 1140),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v72);
  v4 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v72 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  sub_119C884((void **)&v71, "ui_dragon_head");
    (BaseEntityRenderer *)((char *)v3 + 1152),
    &v71);
  v5 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v71 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1164));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1188));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1212));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1236));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1260));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1284));
  sub_119C884((void **)&v67, "textures/entity/skulls/skeleton");
  v68 = v67;
  v67 = (char *)&unk_28898CC;
  v69 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v70, v2, (int)&v68, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1164), (mce::TexturePtr *)&v70);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v70);
  v6 = v68 - 12;
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v68 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = v67 - 12;
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v67 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v63, "textures/entity/skulls/wither_skeleton");
  v64 = v63;
  v63 = (char *)&unk_28898CC;
  v65 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v66, v2, (int)&v64, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1188), (mce::TexturePtr *)&v66);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v66);
  v8 = v64 - 12;
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v64 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v63 - 12;
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v63 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v59, "textures/entity/skulls/zombie");
  v60 = v59;
  v59 = (char *)&unk_28898CC;
  v61 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v62, v2, (int)&v60, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1212), (mce::TexturePtr *)&v62);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v62);
  v10 = v60 - 12;
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v60 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v59 - 12;
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v59 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v55, "textures/entity/steve");
  v56 = v55;
  v55 = (char *)&unk_28898CC;
  v57 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v58, v2, (int)&v56, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1236), (mce::TexturePtr *)&v58);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v58);
  v12 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v56 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v55 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v51, "textures/entity/skulls/creeper");
  v52 = v51;
  v51 = (char *)&unk_28898CC;
  v53 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v54, v2, (int)&v52, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1260), (mce::TexturePtr *)&v54);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v54);
  v14 = v52 - 12;
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v52 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v51 - 12;
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v51 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v47, "textures/entity/dragon/dragon");
  v48 = v47;
  v47 = (char *)&unk_28898CC;
  v49 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v50, v2, (int)&v48, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1284), (mce::TexturePtr *)&v50);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v50);
  v16 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v48 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = v47 - 12;
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v47 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  return v3;
}


int __fastcall SkullBlockRenderer::renderInGui(int a1, BaseEntityRenderContext *this, int a3, int a4, float a5, float a6, float a7, float a8)
{
  int v8; // r4@1
  unsigned int v9; // r5@1
  int result; // r0@1
  BaseEntityRenderContext *v11; // r6@3
  int v16; // r8@6
  int v17; // r0@9
  int v20; // r7@9
  int v21; // r7@9
  int v22; // r0@9
  int v24; // r1@9
  char v25; // [sp+4h] [bp-7Ch]@9
  int v26; // [sp+Ch] [bp-74h]@9
  int v27; // [sp+10h] [bp-70h]@9
  int v28; // [sp+14h] [bp-6Ch]@9
  int v29; // [sp+18h] [bp-68h]@9
  int v30; // [sp+1Ch] [bp-64h]@9
  int v31; // [sp+20h] [bp-60h]@9
  int v32; // [sp+24h] [bp-5Ch]@9
  int v33; // [sp+28h] [bp-58h]@9
  int v34; // [sp+2Ch] [bp-54h]@9
  int v35; // [sp+30h] [bp-50h]@9
  int v36; // [sp+34h] [bp-4Ch]@9
  int v37; // [sp+38h] [bp-48h]@9
  int v38; // [sp+3Ch] [bp-44h]@9
  int v39; // [sp+40h] [bp-40h]@9
  int v40; // [sp+44h] [bp-3Ch]@9
  int v41; // [sp+48h] [bp-38h]@9
  int v42; // [sp+4Ch] [bp-34h]@9

  v8 = a1;
  v9 = a4;
  result = a1 + 1140;
  *(_DWORD *)(v8 + 104) = result;
  if ( a4 > 5 )
    v9 = 3;
  v11 = this;
  if ( v9 != -1 )
  {
    __asm
    {
      VLDR            S2, [SP,#0x80+arg_4]
      VLDR            S0, [SP,#0x80+arg_0]
      VLDR            S16, [SP,#0x80+arg_8]
    }
    if ( _ZF )
      __asm { VCVT.F64.F32    D2, S16 }
      v16 = v8 + 636;
      *(_DWORD *)(v8 + 664) = v8 + 1152;
      __asm
      {
        VLDR            D3, =0.6
        VMOV.F32        S8, #6.0
        VMUL.F64        D2, D2, D3
        VMOV.F32        S6, #10.0
        VADD.F32        S20, S0, S8
        VCVT.F32.F64    S16, D2
        VADD.F32        S18, S2, S6
      }
    else
        VMOV.F32        S4, #11.5
        VMOV.F32        S6, #8.0
        VADD.F32        S18, S2, S4
        VADD.F32        S20, S0, S6
      if ( _ZF )
        *(_DWORD *)(v8 + 384) = result;
        v16 = v8 + 356;
      else
        v16 = v8 + 76;
    v17 = BaseEntityRenderContext::getWorldMatrix(this);
    MatrixStack::push((MatrixStack *)&v25, v17);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v25);
      VLDR            S0, [R0,#4]
      VMOV.F32        S1, #-10.0
      VLDR            S6, [R0,#0x10]
      VLDR            S8, [R0,#0x14]
      VMUL.F32        S0, S0, S20
      VLDR            S14, [R0]
      VMUL.F32        S6, S6, S18
      VLDR            S2, [R0,#8]
      VMUL.F32        S8, S8, S18
      VLDR            S4, [R0,#0xC]
      VMUL.F32        S14, S14, S20
      VLDR            S10, [R0,#0x18]
      VMUL.F32        S2, S2, S20
      VLDR            S12, [R0,#0x1C]
      VMUL.F32        S4, S4, S20
      VMUL.F32        S10, S10, S18
      VLDR            S5, [R0,#0x20]
      VMUL.F32        S12, S12, S18
      VLDR            S3, [R0,#0x24]
      VMUL.F32        S5, S5, S1
      VLDR            S7, [R0,#0x28]
      VADD.F32        S0, S8, S0
      VLDR            S8, [R0,#0x2C]
      VADD.F32        S6, S6, S14
      VMUL.F32        S3, S3, S1
      VMUL.F32        S14, S7, S1
      VADD.F32        S2, S10, S2
      VLDR            S10, [R0,#0x34]
      VADD.F32        S4, S12, S4
      VLDR            S12, [R0,#0x38]
      VMUL.F32        S8, S8, S1
      VADD.F32        S6, S6, S5
      VADD.F32        S0, S0, S3
      VADD.F32        S2, S2, S14
      VADD.F32        S4, S4, S8
      VLDR            S8, [R0,#0x30]
      VADD.F32        S6, S6, S8
      VLDR            S8, [R0,#0x3C]
      VADD.F32        S0, S0, S10
      VADD.F32        S2, S2, S12
      VSTR            S6, [R0,#0x30]
      VSTR            S0, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
      VSTR            S4, [R0,#0x3C]
      VMOV.F32        S0, #15.5
      VLDR            S2, [R0]
      VMUL.F32        S0, S16, S0
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
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
    v20 = MatrixStack::MatrixStackRef::operator->((int)&v25);
    v42 = 1106247680;
    glm::rotate<float>((int)&v26, v20, (int)&v42, (int)Vec3::UNIT_X);
    *(_DWORD *)v20 = v26;
    *(_DWORD *)(v20 + 4) = v27;
    *(_DWORD *)(v20 + 8) = v28;
    *(_DWORD *)(v20 + 12) = v29;
    *(_DWORD *)(v20 + 16) = v30;
    *(_DWORD *)(v20 + 20) = v31;
    *(_DWORD *)(v20 + 24) = v32;
    *(_DWORD *)(v20 + 28) = v33;
    *(_DWORD *)(v20 + 32) = v34;
    *(_DWORD *)(v20 + 36) = v35;
    *(_DWORD *)(v20 + 40) = v36;
    *(_DWORD *)(v20 + 44) = v37;
    *(_DWORD *)(v20 + 48) = v38;
    *(_DWORD *)(v20 + 52) = v39;
    *(_DWORD *)(v20 + 56) = v40;
    *(_DWORD *)(v20 + 60) = v41;
    v21 = MatrixStack::MatrixStackRef::operator->((int)&v25);
    v42 = -1038090240;
    glm::rotate<float>((int)&v26, v21, (int)&v42, (int)&Vec3::UNIT_Y);
    *(_DWORD *)v21 = v26;
    *(_DWORD *)(v21 + 4) = v27;
    *(_DWORD *)(v21 + 8) = v28;
    *(_DWORD *)(v21 + 12) = v29;
    *(_DWORD *)(v21 + 16) = v30;
    *(_DWORD *)(v21 + 20) = v31;
    *(_DWORD *)(v21 + 24) = v32;
    *(_DWORD *)(v21 + 28) = v33;
    *(_DWORD *)(v21 + 32) = v34;
    *(_DWORD *)(v21 + 36) = v35;
    *(_DWORD *)(v21 + 40) = v36;
    *(_DWORD *)(v21 + 44) = v37;
    *(_DWORD *)(v21 + 48) = v38;
    *(_DWORD *)(v21 + 52) = v39;
    *(_DWORD *)(v21 + 56) = v40;
    *(_DWORD *)(v21 + 60) = v41;
    v22 = BaseEntityRenderContext::getScreenContext(v11);
      VLDR            S0, [SP,#0x80+arg_C]
      VMOV            R2, S0
    EntityShaderManager::_setupShaderParameters(v8, v22, _R2, (int)&Color::NIL, 0);
    v24 = BaseEntityRenderContext::getScreenContext(v11);
    if ( v9 > 5 )
      v9 = 3;
    BlockEntityRenderer::_renderModel(v8, v24, v16, v8 + 24 * v9 + 1164);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v25);
  }
  return result;
}


int __fastcall SkullBlockRenderer::renderSkull(float a1, int a2, int a3, int a4, int a5, float a6, int a7, int a8, int a9, float a10)
{
  return SkullBlockRenderer::renderSkull(
           SLODWORD(a1),
           (BaseEntityRenderContext *)a2,
           a3,
           a4,
           *(float *)&a5,
           SLODWORD(a6),
           a7,
           a8,
           a9,
           a10);
}


int __fastcall SkullBlockRenderer::~SkullBlockRenderer(SkullBlockRenderer *this)
{
  SkullBlockRenderer *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB198;
  v2 = (SkullBlockRenderer *)((char *)this + 136);
  mce::TexturePtr::~TexturePtr((SkullBlockRenderer *)((char *)this + 1284));
  mce::TexturePtr::~TexturePtr((SkullBlockRenderer *)((char *)v1 + 1260));
  mce::TexturePtr::~TexturePtr((SkullBlockRenderer *)((char *)v1 + 1236));
  mce::TexturePtr::~TexturePtr((SkullBlockRenderer *)((char *)v1 + 1212));
  mce::TexturePtr::~TexturePtr((SkullBlockRenderer *)((char *)v1 + 1188));
  mce::TexturePtr::~TexturePtr((SkullBlockRenderer *)((char *)v1 + 1164));
  mce::MaterialPtr::~MaterialPtr((SkullBlockRenderer *)((char *)v1 + 1152));
  mce::MaterialPtr::~MaterialPtr((SkullBlockRenderer *)((char *)v1 + 1140));
  *((_DWORD *)v1 + 159) = &off_26E53A4;
  ModelPart::~ModelPart((SkullBlockRenderer *)((char *)v1 + 920));
  ModelPart::~ModelPart((SkullBlockRenderer *)((char *)v1 + 700));
  mce::MaterialPtr::~MaterialPtr((SkullBlockRenderer *)((char *)v1 + 688));
  Model::~Model((SkullBlockRenderer *)((char *)v1 + 636));
  *((_DWORD *)v1 + 89) = &off_26DB1B4;
  ModelPart::~ModelPart((SkullBlockRenderer *)((char *)v1 + 416));
  mce::MaterialPtr::~MaterialPtr((SkullBlockRenderer *)((char *)v1 + 404));
  Model::~Model((SkullBlockRenderer *)((char *)v1 + 356));
  *((_DWORD *)v1 + 19) = &off_26DB1B4;
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((SkullBlockRenderer *)((char *)v1 + 124));
  Model::~Model((SkullBlockRenderer *)((char *)v1 + 76));
  return j_j_j__ZN19BlockEntityRendererD2Ev(v1);
}


void __fastcall SkullBlockRenderer::~SkullBlockRenderer(SkullBlockRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)SkullBlockRenderer::~SkullBlockRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall SkullBlockRenderer::renderSkull(int a1, BaseEntityRenderContext *this, int a3, int a4, float a5, int a6, int a7, int a8, int a9, float a10)
{
  unsigned int v10; // r6@1
  int v11; // r4@1
  int v15; // r5@1
  BaseEntityRenderContext *v17; // r9@1
  int result; // r0@1
  int v19; // r8@6
  int v20; // r0@9
  int v27; // r5@18
  int v29; // r1@21
  int v30; // r1@24
  char v31; // [sp+Ch] [bp-74h]@9
  int v32; // [sp+14h] [bp-6Ch]@18
  int v33; // [sp+18h] [bp-68h]@18
  int v34; // [sp+1Ch] [bp-64h]@18
  int v35; // [sp+20h] [bp-60h]@18
  int v36; // [sp+24h] [bp-5Ch]@18
  int v37; // [sp+28h] [bp-58h]@18
  int v38; // [sp+2Ch] [bp-54h]@18
  int v39; // [sp+30h] [bp-50h]@18
  int v40; // [sp+34h] [bp-4Ch]@18
  int v41; // [sp+38h] [bp-48h]@18
  int v42; // [sp+3Ch] [bp-44h]@18
  int v43; // [sp+40h] [bp-40h]@18
  int v44; // [sp+44h] [bp-3Ch]@18
  int v45; // [sp+48h] [bp-38h]@18
  int v46; // [sp+4Ch] [bp-34h]@18
  int v47; // [sp+50h] [bp-30h]@18
  float v48; // [sp+54h] [bp-2Ch]@18

  v10 = a6;
  v11 = a1;
  __asm { VLDR            S0, [SP,#0x80+arg_14] }
  v15 = a4;
  _R7 = a3;
  v17 = this;
  __asm { VSTR            S0, [R4,#0x2AC] }
  result = a1 + 124;
  *(_DWORD *)(v11 + 104) = result;
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v10 = 3;
  if ( v10 != -1 )
  {
    if ( v10 == 5 )
    {
      v19 = v11 + 636;
      *(_DWORD *)(v11 + 664) = v11 + 688;
    }
    else if ( v10 == 3 )
      *(_DWORD *)(v11 + 384) = v11 + 404;
      v19 = v11 + 356;
    else
      v19 = v11 + 76;
    v20 = BaseEntityRenderContext::getWorldMatrix(this);
    MatrixStack::push((MatrixStack *)&v31, v20);
    __asm { VLDR            S16, [SP,#0x80+arg_0] }
    switch ( v15 )
      case 1:
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v31);
        __asm
        {
          VMOV.F32        S0, #0.5
          VLDR            S2, [R7]
          VLDR            S4, [R7,#4]
          VLDR            S1, [R0,#0x10]
          VLDR            S6, [R7,#8]
          VLDR            S8, [R0]
          VMUL.F32        S1, S1, S4
          VLDR            S7, [R0,#0x14]
          VLDR            S10, [R0,#4]
          VADD.F32        S2, S2, S0
          VLDR            S12, [R0,#8]
          VADD.F32        S0, S6, S0
          VLDR            S14, [R0,#0xC]
          VLDR            S3, [R0,#0x18]
          VMUL.F32        S7, S7, S4
          VLDR            S5, [R0,#0x1C]
          VMUL.F32        S8, S8, S2
          VMUL.F32        S6, S10, S2
          VMUL.F32        S10, S5, S4
          VLDR            S5, [R0,#0x20]
          VMUL.F32        S4, S3, S4
          VLDR            S3, [R0,#0x24]
          VMUL.F32        S12, S12, S2
          VMUL.F32        S2, S14, S2
          VMUL.F32        S14, S3, S0
          VMUL.F32        S3, S5, S0
          VLDR            S5, [R0,#0x28]
          VADD.F32        S8, S1, S8
          VLDR            S1, [R0,#0x2C]
          VADD.F32        S6, S7, S6
          VMUL.F32        S5, S5, S0
          VADD.F32        S4, S4, S12
          VLDR            S12, [R0,#0x38]
          VADD.F32        S2, S10, S2
          VLDR            S10, [R0,#0x34]
          VMUL.F32        S0, S1, S0
          VADD.F32        S8, S8, S3
          VADD.F32        S6, S6, S14
          VADD.F32        S4, S4, S5
          VADD.F32        S0, S2, S0
          VLDR            S2, [R0,#0x30]
          VADD.F32        S2, S8, S2
          VLDR            S8, [R0,#0x3C]
          VADD.F32        S6, S6, S10
          VADD.F32        S0, S0, S8
          VSTR            S2, [R0,#0x30]
          VSTR            S6, [R0,#0x34]
          VSTR            S4, [R0,#0x38]
        }
        goto LABEL_17;
      case 2:
          VLDR            S4, [R7]
          VMOV.F32        S2, #0.25
          VLDR            S6, [R7,#4]
          VLDR            S8, [R7,#8]
          VADD.F32        S0, S4, S0
          VLDR            S4, =0.74
          VADD.F32        S2, S6, S2
          VLDR            S6, [R0]
          VADD.F32        S4, S8, S4
          VLDR            S8, [R0,#0x14]
          VLDR            S7, [R0,#0x20]
          VMUL.F32        S6, S6, S0
          VMUL.F32        S1, S1, S2
          VMUL.F32        S10, S10, S0
          VMUL.F32        S14, S14, S0
          VMUL.F32        S0, S12, S0
          VLDR            S12, [R0,#0x24]
          VMUL.F32        S3, S3, S2
          VMUL.F32        S2, S5, S2
          VMUL.F32        S5, S7, S4
          VLDR            S7, [R0,#0x28]
          VADD.F32        S6, S1, S6
          VADD.F32        S8, S8, S10
          VLDR            S10, [R0,#0x2C]
          VMUL.F32        S12, S12, S4
          VMUL.F32        S1, S7, S4
          VADD.F32        S0, S3, S0
          VMUL.F32        S4, S10, S4
          VADD.F32        S2, S2, S14
          VADD.F32        S6, S6, S5
          VADD.F32        S8, S8, S12
          VADD.F32        S0, S0, S1
          VADD.F32        S2, S2, S4
          VLDR            S4, [R0,#0x30]
          VADD.F32        S4, S6, S4
          VLDR            S6, [R0,#0x3C]
          VADD.F32        S0, S0, S12
          VADD.F32        S2, S2, S6
        goto LABEL_14;
      case 3:
          VLDR            S4, =0.26
          VLDR            S16, =180.0
LABEL_14:
          VSTR            S4, [R0,#0x30]
          VSTR            S8, [R0,#0x34]
          VSTR            S0, [R0,#0x38]
          VSTR            S2, [R0,#0x3C]
        goto LABEL_18;
      case 4:
          VMOV.F32        S0, #0.25
          VLDR            S2, =0.74
          VMOV.F32        S10, #0.5
          VADD.F32        S2, S4, S2
          VLDR            S4, [R0]
          VLDR            S6, [R0,#4]
          VLDR            S10, [R0,#0x14]
          VMUL.F32        S4, S4, S2
          VMUL.F32        S6, S6, S2
          VMUL.F32        S14, S14, S2
          VLDR            S16, =270.0
          VMUL.F32        S1, S1, S0
          VMUL.F32        S2, S12, S2
          VMUL.F32        S3, S3, S0
          VMUL.F32        S0, S5, S0
          VMUL.F32        S5, S7, S8
          VMUL.F32        S12, S12, S8
          VADD.F32        S6, S10, S6
          VADD.F32        S4, S1, S4
          VMUL.F32        S1, S7, S8
          VADD.F32        S2, S3, S2
          VMUL.F32        S8, S10, S8
          VADD.F32        S0, S0, S14
          VADD.F32        S6, S6, S12
          VADD.F32        S2, S2, S1
          VLDR            S8, [R0,#0x30]
          VADD.F32        S4, S4, S8
          VADD.F32        S2, S2, S12
        break;
      default:
          VLDR            S2, =0.26
          VLDR            S16, =90.0
    __asm
      VSTR            S4, [R0,#0x30]
      VSTR            S6, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
LABEL_17:
    __asm { VSTR            S0, [R0,#0x3C] }
LABEL_18:
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v31);
      VLDR            S0, [R0]
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
    v27 = MatrixStack::MatrixStackRef::operator->((int)&v31);
    __asm { VSTR            S16, [SP,#0x80+var_2C] }
    glm::rotate<float>((int)&v32, v27, (int)&v48, (int)&Vec3::UNIT_Y);
    _ZF = a7 == 0;
    *(_DWORD *)v27 = v32;
    *(_DWORD *)(v27 + 4) = v33;
    *(_DWORD *)(v27 + 8) = v34;
    *(_DWORD *)(v27 + 12) = v35;
    *(_DWORD *)(v27 + 16) = v36;
    *(_DWORD *)(v27 + 20) = v37;
    *(_DWORD *)(v27 + 24) = v38;
    *(_DWORD *)(v27 + 28) = v39;
    *(_DWORD *)(v27 + 32) = v40;
    *(_DWORD *)(v27 + 36) = v41;
    *(_DWORD *)(v27 + 40) = v42;
    *(_DWORD *)(v27 + 44) = v43;
    *(_DWORD *)(v27 + 48) = v44;
    *(_DWORD *)(v27 + 52) = v45;
    *(_DWORD *)(v27 + 56) = v46;
    *(_DWORD *)(v27 + 60) = v47;
    if ( a7 )
      v27 = a8;
      _ZF = a8 == 0;
    if ( _ZF )
      v30 = BaseEntityRenderContext::getScreenContext(v17);
      if ( v10 > 5 )
        v10 = 3;
      BlockEntityRenderer::_renderModel(v11, v30, v19, v11 + 24 * v10 + 1164);
      v29 = BaseEntityRenderContext::getScreenContext(v17);
      BlockEntityRenderer::_renderModel(v11, v29, v19, v11 + 24 * v10 + 1164, a7, v27);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v31);
  }
  return result;
}


int __fastcall SkullBlockRenderer::render(SkullBlockRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  SkullBlockRenderer *v4; // r10@1
  BlockEntityRenderData *v5; // r5@1
  int v6; // r9@1
  __int64 v7; // kr00_8@1
  char *v8; // r0@1
  char v9; // r8@1
  int v10; // r6@1
  char *v16; // r0@7
  char *v17; // r0@8
  int v18; // r0@9
  int v19; // r5@9
  int v20; // r0@9
  int v21; // ST00_4@9
  int v23; // [sp+0h] [bp-70h]@0
  int v24; // [sp+10h] [bp-60h]@0
  int v25; // [sp+18h] [bp-58h]@1
  int v26; // [sp+1Ch] [bp-54h]@1
  int v27; // [sp+20h] [bp-50h]@1
  int v28; // [sp+24h] [bp-4Ch]@7
  int v29; // [sp+28h] [bp-48h]@7
  int v30; // [sp+2Ch] [bp-44h]@7
  __int64 v31; // [sp+30h] [bp-40h]@4

  _R4 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = *(_QWORD *)v5;
  v27 = *((_DWORD *)v5 + 2);
  v8 = BlockEntity::getPosition((BlockEntity *)(*(_QWORD *)v5 >> 32));
  v9 = BlockSource::getData((BlockSource *)v7, (const BlockPos *)v8);
  v26 = *((_DWORD *)v5 + 3);
  v25 = *((_DWORD *)v5 + 4);
  v10 = BlockEntity::isInWorld((BlockEntity *)HIDWORD(v7));
  _R0 = SkullBlockEntity::getRotation((SkullBlockEntity *)HIDWORD(v7));
  __asm { VLDR            S2, =0.0625 }
  _R0 *= 360;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
  }
  if ( !_ZF )
    v10 = v9 & 7;
  if ( *((_DWORD *)v5 + 5) )
    v31 = 4647714816536870912LL;
  else
    v31 = *(_QWORD *)&Vec2::ONE;
  __asm { VMUL.F32        S16, S0, S2 }
  if ( BlockEntity::isInWorld((BlockEntity *)HIDWORD(v7)) == 1 )
    v16 = BlockEntity::getPosition((BlockEntity *)HIDWORD(v7));
    v28 = *(_DWORD *)v16;
    v29 = *((_DWORD *)v16 + 1);
    v30 = *((_DWORD *)v16 + 2);
    v17 = BaseEntityRenderContext::getCameraTargetPosition(_R4);
    BlockPos::BlockPos((int)&v28, (int)v17);
  __asm { VLDR            S18, [R4,#4] }
  v18 = BaseEntityRenderContext::isIgnoringLightning(_R4);
  __asm { VSTR            S18, [SP,#0x70+var_70] }
  EntityShaderManager::_setupShaderParameters((int)v4, v6, v7, (int)&v28, v23, v18, &v31);
  v19 = SkullBlockEntity::getSkullType((SkullBlockEntity *)HIDWORD(v7));
  v20 = SkullBlockEntity::getMouthAnimation((SkullBlockEntity *)HIDWORD(v7), *((float *)_R4 + 1));
  __asm { VSTR            S16, [SP,#0x70+var_70] }
  return SkullBlockRenderer::renderSkull(
           *(float *)&v4,
           (int)_R4,
           v27,
           v10,
           v21,
           *(float *)&v19,
           v26,
           v25,
           v24,
           *(float *)&v20);
}
