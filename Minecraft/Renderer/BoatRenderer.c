

BaseEntityRenderer *__fastcall BoatRenderer::~BoatRenderer(BoatRenderer *this)
{
  BoatRenderer *v1; // r4@1
  ModelPart *v2; // r6@1
  AppPlatformListener *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E6A20;
  v2 = (BoatRenderer *)((char *)this + 204);
  *((_DWORD *)this + 34) = &off_26E6A54;
  v3 = (BoatRenderer *)((char *)this + 136);
  mce::Mesh::~Mesh((BoatRenderer *)((char *)this + 1900));
  mce::TexturePtr::~TexturePtr((BoatRenderer *)((char *)v1 + 1876));
  mce::TexturePtr::~TexturePtr((BoatRenderer *)((char *)v1 + 1852));
  mce::TexturePtr::~TexturePtr((BoatRenderer *)((char *)v1 + 1828));
  mce::TexturePtr::~TexturePtr((BoatRenderer *)((char *)v1 + 1804));
  mce::TexturePtr::~TexturePtr((BoatRenderer *)((char *)v1 + 1780));
  mce::TexturePtr::~TexturePtr((BoatRenderer *)((char *)v1 + 1756));
  mce::MaterialPtr::~MaterialPtr((BoatRenderer *)((char *)v1 + 1744));
  *((_DWORD *)v1 + 36) = &off_26E824C;
  ModelPart::~ModelPart((BoatRenderer *)((char *)v1 + 1524));
  ModelPart::~ModelPart((BoatRenderer *)((char *)v1 + 1304));
  ModelPart::~ModelPart((BoatRenderer *)((char *)v1 + 1084));
  ModelPart::~ModelPart((BoatRenderer *)((char *)v1 + 864));
  ModelPart::~ModelPart((BoatRenderer *)((char *)v1 + 644));
  ModelPart::~ModelPart((BoatRenderer *)((char *)v1 + 424));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((BoatRenderer *)((char *)v1 + 192));
  Model::~Model((BoatRenderer *)((char *)v1 + 144));
  AppPlatformListener::~AppPlatformListener(v3);
  return j_j_j__ZN14EntityRendererD2Ev_0(v1);
}


int __fastcall BoatRenderer::render(int a1, BaseEntityRenderContext *a2, int a3)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r8@1
  int v7; // r0@1
  Entity *v8; // r6@1
  __int64 v10; // r2@1
  int v15; // r7@1
  int v16; // r3@1
  int v17; // r0@1
  float v19; // [sp+0h] [bp-C8h]@0
  float v20; // [sp+4h] [bp-C4h]@0
  int v21; // [sp+18h] [bp-B0h]@1
  int v22; // [sp+1Ch] [bp-ACh]@1
  int v23; // [sp+20h] [bp-A8h]@1
  int v24; // [sp+24h] [bp-A4h]@1
  int v25; // [sp+28h] [bp-A0h]@1
  signed int v26; // [sp+2Ch] [bp-9Ch]@1
  int v27; // [sp+30h] [bp-98h]@1
  int v28; // [sp+34h] [bp-94h]@1
  int v29; // [sp+38h] [bp-90h]@1
  int v30; // [sp+3Ch] [bp-8Ch]@1
  signed int v31; // [sp+40h] [bp-88h]@1
  int v32; // [sp+44h] [bp-84h]@1
  int v33; // [sp+48h] [bp-80h]@1
  int v34; // [sp+4Ch] [bp-7Ch]@1
  int v35; // [sp+50h] [bp-78h]@1
  int v36; // [sp+54h] [bp-74h]@1
  __int64 v37; // [sp+58h] [bp-70h]@1
  int v38; // [sp+60h] [bp-68h]@1
  char v39; // [sp+68h] [bp-60h]@1
  int v40; // [sp+70h] [bp-58h]@1
  int v41; // [sp+74h] [bp-54h]@1
  int v42; // [sp+78h] [bp-50h]@1
  int v43; // [sp+7Ch] [bp-4Ch]@1
  int v44; // [sp+80h] [bp-48h]@1
  int v45; // [sp+84h] [bp-44h]@1
  int v46; // [sp+88h] [bp-40h]@1
  int v47; // [sp+8Ch] [bp-3Ch]@1
  int v48; // [sp+90h] [bp-38h]@1
  int v49; // [sp+94h] [bp-34h]@1
  int v50; // [sp+98h] [bp-30h]@1
  int v51; // [sp+9Ch] [bp-2Ch]@1
  int v52; // [sp+A0h] [bp-28h]@1
  int v53; // [sp+A4h] [bp-24h]@1
  int v54; // [sp+A8h] [bp-20h]@1
  int v55; // [sp+ACh] [bp-1Ch]@1

  _R5 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = BaseEntityRenderContext::getWorldMatrix(_R5);
  MatrixStack::push((MatrixStack *)&v39, v7);
  v8 = (Entity *)*(_QWORD *)v5;
  _R1 = *(_DWORD *)(v5 + 8);
  v10 = *(_QWORD *)(*(_QWORD *)v5 >> 32);
  v38 = *(_DWORD *)((*(_QWORD *)v5 >> 32) + 8);
  v37 = v10;
  v21 = 1065353216;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v28 = 0;
  v29 = 0;
  v26 = 1065353216;
  v27 = 0;
  v30 = 0;
  v31 = 1065353216;
  v34 = 0;
  v35 = 0;
  v32 = 0;
  v33 = 0;
  v36 = 1065353216;
  __asm
  {
    VLDR            S0, [R1,#4]
    VLDR            S2, [R5,#4]
    VSTR            S0, [SP,#0xC8+var_C8]
    VSTR            S2, [SP,#0xC8+var_C4]
  }
  BoatRenderer::_calculateBoatTransform(1065353216, (int)&v21, v8, (int)&v37, v19, v20);
  v15 = MatrixStack::MatrixStackRef::operator->((int)&v39);
  glm::detail::operator*<float>((int)&v40, v15, (int)&v21);
  *(_DWORD *)v15 = v40;
  *(_DWORD *)(v15 + 4) = v41;
  *(_DWORD *)(v15 + 8) = v42;
  *(_DWORD *)(v15 + 12) = v43;
  *(_DWORD *)(v15 + 16) = v44;
  *(_DWORD *)(v15 + 20) = v45;
  *(_DWORD *)(v15 + 24) = v46;
  *(_DWORD *)(v15 + 28) = v47;
  *(_DWORD *)(v15 + 32) = v48;
  *(_DWORD *)(v15 + 36) = v49;
  *(_DWORD *)(v15 + 40) = v50;
  *(_DWORD *)(v15 + 44) = v51;
  *(_DWORD *)(v15 + 48) = v52;
  *(_DWORD *)(v15 + 52) = v53;
  *(_DWORD *)(v15 + 56) = v54;
  *(_DWORD *)(v15 + 60) = v55;
  v16 = *((_DWORD *)_R5 + 1);
  EntityShaderManager::_setupShaderParameters(v4, v6, *(float *)&v8);
  *(_DWORD *)(v4 + 176) = v4 + 24 * Boat::getWoodID(v8) + 1756;
  v17 = BaseEntityRenderContext::getScreenContext(_R5);
  BoatModel::render(v4 + 144, v17, *(float *)&v8, *((float *)_R5 + 1), 0.0, -1110651699, 0, 0, 1031798784);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v39);
}


BaseEntityRenderer *__fastcall BoatRenderer::BoatRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r10@1
  BaseEntityRenderer *v3; // r4@1
  void *v4; // r0@1
  char *v5; // r0@2
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
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  unsigned int *v26; // r2@31
  signed int v27; // r1@33
  unsigned int *v28; // r2@35
  signed int v29; // r1@37
  unsigned int *v30; // r2@39
  signed int v31; // r1@41
  unsigned int *v32; // r2@43
  signed int v33; // r1@45
  unsigned int *v34; // r2@47
  signed int v35; // r1@49
  unsigned int *v36; // r2@51
  signed int v37; // r1@53
  unsigned int *v38; // r2@55
  signed int v39; // r1@57
  unsigned int *v40; // r2@59
  signed int v41; // r1@61
  unsigned int *v42; // r2@63
  signed int v43; // r1@65
  char *v44; // [sp+1Ch] [bp-11Ch]@12
  char *v45; // [sp+20h] [bp-118h]@12
  int v46; // [sp+24h] [bp-114h]@12
  char v47; // [sp+28h] [bp-110h]@12
  char *v48; // [sp+44h] [bp-F4h]@10
  char *v49; // [sp+48h] [bp-F0h]@10
  int v50; // [sp+4Ch] [bp-ECh]@10
  char v51; // [sp+50h] [bp-E8h]@10
  char *v52; // [sp+6Ch] [bp-CCh]@8
  char *v53; // [sp+70h] [bp-C8h]@8
  int v54; // [sp+74h] [bp-C4h]@8
  char v55; // [sp+78h] [bp-C0h]@8
  char *v56; // [sp+94h] [bp-A4h]@6
  char *v57; // [sp+98h] [bp-A0h]@6
  int v58; // [sp+9Ch] [bp-9Ch]@6
  char v59; // [sp+A0h] [bp-98h]@6
  char *v60; // [sp+BCh] [bp-7Ch]@4
  char *v61; // [sp+C0h] [bp-78h]@4
  int v62; // [sp+C4h] [bp-74h]@4
  char v63; // [sp+C8h] [bp-70h]@4
  char *v64; // [sp+E4h] [bp-54h]@2
  char *v65; // [sp+E8h] [bp-50h]@2
  int v66; // [sp+ECh] [bp-4Ch]@2
  char v67; // [sp+F0h] [bp-48h]@2
  int v68; // [sp+10Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 1);
  AppPlatformListener::AppPlatformListener((_QWORD *)v3 + 17);
  *(_DWORD *)v3 = &off_26E6A20;
  *((_DWORD *)v3 + 34) = &off_26E6A54;
  BoatModel::BoatModel((BaseEntityRenderer *)((char *)v3 + 144));
  sub_21E94B4((void **)&v68, "water_hole");
  mce::MaterialPtr::MaterialPtr(
    (BaseEntityRenderer *)((char *)v3 + 1744),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v68);
  v4 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v68 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1756));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1780));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1804));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1828));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1852));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 1876));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v3 + 1900));
  sub_21E94B4((void **)&v64, "textures/entity/boat/boat_oak");
  v65 = v64;
  v64 = (char *)&unk_28898CC;
  v66 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v67, v2, (int)&v65, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1756), (mce::TexturePtr *)&v67);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v67);
  v5 = v65 - 12;
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v65 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = v64 - 12;
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v64 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v60, "textures/entity/boat/boat_spruce");
  v61 = v60;
  v60 = (char *)&unk_28898CC;
  v62 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v63, v2, (int)&v61, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1780), (mce::TexturePtr *)&v63);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v63);
  v7 = v61 - 12;
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v61 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = v60 - 12;
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v60 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v56, "textures/entity/boat/boat_birch");
  v57 = v56;
  v56 = (char *)&unk_28898CC;
  v58 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v59, v2, (int)&v57, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1804), (mce::TexturePtr *)&v59);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v59);
  v9 = v57 - 12;
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v57 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v56 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v52, "textures/entity/boat/boat_jungle");
  v53 = v52;
  v52 = (char *)&unk_28898CC;
  v54 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v55, v2, (int)&v53, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1828), (mce::TexturePtr *)&v55);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v55);
  v11 = v53 - 12;
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v53 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = v52 - 12;
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v52 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v48, "textures/entity/boat/boat_acacia");
  v49 = v48;
  v48 = (char *)&unk_28898CC;
  v50 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v51, v2, (int)&v49, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1852), (mce::TexturePtr *)&v51);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v51);
  v13 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v49 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v48 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v44, "textures/entity/boat/boat_darkoak");
  v45 = v44;
  v44 = (char *)&unk_28898CC;
  v46 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v47, v2, (int)&v45, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 1876), (mce::TexturePtr *)&v47);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v47);
  v15 = v45 - 12;
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v45 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v44 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  return v3;
}


int __fastcall BoatRenderer::_calculateBoatTransform(int a1, int a2, Entity *this, int a4, float a5, float a6)
{
  Entity *v6; // r9@1
  char *v9; // r0@1
  unsigned int v10; // r7@1
  float v19; // r3@1
  int result; // r0@1
  float v35; // r1@1
  float v47; // [sp+0h] [bp-90h]@1
  int v48; // [sp+8h] [bp-88h]@1
  signed int v49; // [sp+Ch] [bp-84h]@1
  int v50; // [sp+10h] [bp-80h]@1
  int v51; // [sp+14h] [bp-7Ch]@1
  int v52; // [sp+18h] [bp-78h]@1
  int v53; // [sp+1Ch] [bp-74h]@1
  int v54; // [sp+20h] [bp-70h]@1
  int v55; // [sp+24h] [bp-6Ch]@1
  int v56; // [sp+28h] [bp-68h]@1
  int v57; // [sp+2Ch] [bp-64h]@1
  int v58; // [sp+30h] [bp-60h]@1
  int v59; // [sp+34h] [bp-5Ch]@1
  int v60; // [sp+38h] [bp-58h]@1
  int v61; // [sp+3Ch] [bp-54h]@1
  int v62; // [sp+40h] [bp-50h]@1
  int v63; // [sp+44h] [bp-4Ch]@1
  int v64; // [sp+48h] [bp-48h]@1
  int v65; // [sp+4Ch] [bp-44h]@1
  int v66; // [sp+50h] [bp-40h]@1
  float v67; // [sp+54h] [bp-3Ch]@1

  v6 = this;
  _R6 = a4;
  _R4 = a2;
  v9 = Entity::getUniqueID(this);
  v10 = (97199825 * *(_DWORD *)v9 + 98761) * *(_DWORD *)v9;
  _R0 = _aeabi_l2f((v10 >> 16) & 7, 0);
  __asm
  {
    VMOV.F32        S16, #0.5
    VMOV            S0, R0
    VADD.F32        S18, S0, S16
  }
  _R0 = _aeabi_l2f((v10 >> 20) & 7, 0);
    VADD.F32        S20, S0, S16
  _R0 = _aeabi_l2f((v10 >> 24) & 7, 0);
    VLDR            S2, =0.0005
    VLDR            S8, =-0.002
    VADD.F32        S0, S0, S16
    VLDR            S10, [R4,#4]
    VMUL.F32        S4, S18, S2
    VLDR            S1, [R4,#0x10]
    VMUL.F32        S6, S20, S2
    VLDR            S12, [R4,#8]
    VLDR            S14, [R4,#0xC]
    VLDR            S3, [R4,#0x18]
    VLDR            S5, [R4,#0x1C]
    VLDR            S7, [R4,#0x20]
    VMUL.F32        S0, S0, S2
    VLDR            S16, [SP,#0x90+arg_4]
    VADD.F32        S2, S4, S8
    VADD.F32        S4, S6, S8
    VLDR            S6, [R4]
    VMOV            R2, S16
    VADD.F32        S0, S0, S8
    VLDR            S8, [R4,#0x14]
    VMUL.F32        S6, S2, S6
    VMUL.F32        S1, S4, S1
    VMUL.F32        S10, S2, S10
    VMUL.F32        S8, S4, S8
    VMUL.F32        S14, S2, S14
    VMUL.F32        S2, S2, S12
    VLDR            S12, [R4,#0x24]
    VMUL.F32        S3, S4, S3
    VMUL.F32        S4, S4, S5
    VMUL.F32        S5, S0, S7
    VLDR            S7, [R4,#0x28]
    VADD.F32        S6, S1, S6
    VADD.F32        S8, S8, S10
    VLDR            S10, [R4,#0x2C]
    VMUL.F32        S12, S12, S0
    VMUL.F32        S1, S7, S0
    VADD.F32        S2, S3, S2
    VMUL.F32        S0, S10, S0
    VLDR            S10, [R4,#0x34]
    VADD.F32        S4, S4, S14
    VADD.F32        S6, S6, S5
    VADD.F32        S8, S8, S12
    VLDR            S12, [R4,#0x38]
    VADD.F32        S2, S2, S1
    VADD.F32        S0, S4, S0
    VLDR            S4, [R4,#0x30]
    VADD.F32        S4, S6, S4
    VLDR            S6, [R4,#0x3C]
    VADD.F32        S2, S2, S12
    VADD.F32        S0, S0, S6
    VSTR            S4, [R4,#0x30]
    VSTR            S8, [R4,#0x34]
    VSTR            S2, [R4,#0x38]
    VSTR            S0, [R4,#0x3C]
  Entity::getInterpolatedRotation((Entity *)&v47, *(float *)&v6, _R2, v19);
  _R0 = &Matrix::IDENTITY;
  _R1 = Matrix::IDENTITY;
  *(_DWORD *)_R4 = Matrix::IDENTITY;
  _R2 = *(&Matrix::IDENTITY + 1);
  *(_DWORD *)(_R4 + 4) = *(&Matrix::IDENTITY + 1);
  __asm { VMOV            S0, R1 }
  _R3 = qword_27E89F0;
  *(_DWORD *)(_R4 + 8) = qword_27E89F0;
  __asm { VMOV            S2, R2 }
  _R7 = HIDWORD(qword_27E89F0);
  *(_DWORD *)(_R4 + 12) = HIDWORD(qword_27E89F0);
  __asm { VMOV            S4, R3 }
  _R5 = qword_27E89F8;
  *(_DWORD *)(_R4 + 16) = qword_27E89F8;
  __asm { VMOV            S6, R7 }
  _R1 = HIDWORD(qword_27E89F8);
  *(_DWORD *)(_R4 + 20) = HIDWORD(qword_27E89F8);
  __asm { VMOV            S8, R5 }
  _R2 = qword_27E8A00;
  *(_DWORD *)(_R4 + 24) = qword_27E8A00;
  __asm { VMOV            S10, R1 }
  _R3 = HIDWORD(qword_27E8A00);
  *(_DWORD *)(_R4 + 28) = HIDWORD(qword_27E8A00);
  __asm { VMOV            S12, R2 }
  _R7 = qword_27E8A08;
  *(_DWORD *)(_R4 + 32) = qword_27E8A08;
  __asm { VMOV            S5, R3 }
  _R5 = HIDWORD(qword_27E8A08);
  *(_DWORD *)(_R4 + 36) = HIDWORD(qword_27E8A08);
  __asm { VMOV            S7, R7 }
  _R1 = unk_27E8A10;
  *(_DWORD *)(_R4 + 40) = unk_27E8A10;
  __asm { VMOV            S9, R5 }
  _R2 = qword_27E8A14;
  *(_DWORD *)(_R4 + 44) = qword_27E8A14;
    VLDR            S14, [R6]
    VLDR            S1, [R6,#4]
    VMUL.F32        S0, S0, S14
    VLDR            S3, [R6,#8]
    VMUL.F32        S8, S8, S1
    VMUL.F32        S2, S2, S14
    VMUL.F32        S10, S10, S1
    VMUL.F32        S4, S4, S14
    VMUL.F32        S12, S12, S1
    VMUL.F32        S6, S6, S14
    VMUL.F32        S14, S5, S1
    VMOV            S1, R1
    VMOV            S5, R2
    VADD.F32        S0, S8, S0
    VMUL.F32        S7, S7, S3
    VADD.F32        S2, S10, S2
    VMUL.F32        S8, S9, S3
    VADD.F32        S4, S12, S4
    VMUL.F32        S10, S1, S3
    VADD.F32        S6, S14, S6
    VLDR            S14, [R0,#0x3C]
    VMUL.F32        S12, S5, S3
    VADD.F32        S0, S0, S7
    VADD.F32        S2, S2, S8
    VLDR            S8, [R0,#0x30]
    VADD.F32        S4, S4, S10
    VLDR            S10, [R0,#0x34]
    VADD.F32        S6, S6, S12
    VLDR            S12, [R0,#0x38]
    VLDR            S8, [SP,#0x90+arg_0]
    VADD.F32        S2, S2, S10
    VLDR            S10, =180.0
    VADD.F32        S4, S4, S12
    VSUB.F32        S8, S10, S8
    VADD.F32        S6, S6, S14
    VSTR            S0, [R4,#0x30]
    VSTR            S2, [R4,#0x34]
    VSTR            S4, [R4,#0x38]
    VSTR            S6, [R4,#0x3C]
  v48 = 0;
  v49 = 1065353216;
  v50 = 0;
  __asm { VSTR            S8, [SP,#0x90+var_3C] }
  glm::rotate<float>((int)&v51, _R4, (int)&v67, (int)&v48);
  *(_DWORD *)_R4 = v51;
  *(_DWORD *)(_R4 + 4) = v52;
  *(_DWORD *)(_R4 + 8) = v53;
  *(_DWORD *)(_R4 + 12) = v54;
  *(_DWORD *)(_R4 + 16) = v55;
  *(_DWORD *)(_R4 + 20) = v56;
  *(_DWORD *)(_R4 + 24) = v57;
  *(_DWORD *)(_R4 + 28) = v58;
  *(_DWORD *)(_R4 + 32) = v59;
  *(_DWORD *)(_R4 + 36) = v60;
  *(_DWORD *)(_R4 + 40) = v61;
  *(_DWORD *)(_R4 + 44) = v62;
  *(_DWORD *)(_R4 + 48) = v63;
  *(_DWORD *)(_R4 + 52) = v64;
  *(_DWORD *)(_R4 + 56) = v65;
  *(_DWORD *)(_R4 + 60) = v66;
  __asm { VLDR            S0, [SP,#0x90+var_90] }
  v49 = 0;
  __asm { VNEG.F32        S0, S0 }
  v50 = 1065353216;
  __asm { VSTR            S0, [SP,#0x90+var_3C] }
  _R0 = Entity::getHurtTime(v6);
    VCVT.F32.S32    S18, S0
  result = 40 - Entity::getStructuralIntegrity(v6);
    VCVT.F32.S32    S2, S0
    VSUB.F32        S0, S18, S16
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VLDR            S0, [R4]
      VLDR            S2, [R4,#4]
      VLDR            S4, [R4,#8]
      VLDR            S6, [R4,#0xC]
      VLDR            S8, [R4,#0x10]
      VLDR            S10, [R4,#0x14]
      VLDR            S12, [R4,#0x18]
      VLDR            S14, [R4,#0x1C]
    }
  else
      VSUB.F32        S2, S2, S16
      VLDR            S4, =0.1
      VMOV            R0, S0
      VLDR            S6, =0.0
      VMUL.F32        S0, S0, S4
      VCMPE.F32       S2, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S2, S6 }
    __asm { VMUL.F32        S16, S0, S2 }
    _R0 = mce::Math::sin(_R0, v35);
      VMOV            S0, R0
      VMUL.F32        S16, S16, S0
    _R0 = Entity::getHurtDir(v6);
      VCVT.F32.S32    S0, S0
    v48 = 1065353216;
    v49 = 0;
    v50 = 0;
      VMUL.F32        S0, S16, S0
      VSTR            S0, [SP,#0x90+var_3C]
    glm::rotate<float>((int)&v51, _R4, (int)&v67, (int)&v48);
    _R0 = v51;
    *(_DWORD *)_R4 = v51;
    _R1 = v52;
    *(_DWORD *)(_R4 + 4) = v52;
    __asm { VMOV            S0, R0 }
    _R2 = v53;
    *(_DWORD *)(_R4 + 8) = v53;
    __asm { VMOV            S2, R1 }
    _R3 = v54;
    *(_DWORD *)(_R4 + 12) = v54;
    __asm { VMOV            S4, R2 }
    _R7 = v55;
    *(_DWORD *)(_R4 + 16) = v55;
    __asm { VMOV            S6, R3 }
    _R6 = v56;
    *(_DWORD *)(_R4 + 20) = v56;
    __asm { VMOV            S8, R7 }
    _R5 = v57;
    *(_DWORD *)(_R4 + 24) = v57;
    __asm { VMOV            S10, R6 }
    _R12 = v58;
    *(_DWORD *)(_R4 + 28) = v58;
    __asm { VMOV            S12, R5 }
    *(_DWORD *)(_R4 + 32) = v59;
    __asm { VMOV            S14, R12 }
    *(_DWORD *)(_R4 + 36) = v60;
    *(_DWORD *)(_R4 + 40) = v61;
    *(_DWORD *)(_R4 + 44) = v62;
    *(_DWORD *)(_R4 + 48) = v63;
    *(_DWORD *)(_R4 + 52) = v64;
    *(_DWORD *)(_R4 + 56) = v65;
    result = v66;
    *(_DWORD *)(_R4 + 60) = v66;
    VNEG.F32        S0, S0
    VNEG.F32        S2, S2
    VNEG.F32        S4, S4
    VNEG.F32        S6, S6
    VNEG.F32        S8, S8
    VNEG.F32        S10, S10
    VNEG.F32        S12, S12
    VNEG.F32        S14, S14
    VSTR            S0, [R4]
    VSTR            S2, [R4,#4]
    VSTR            S4, [R4,#8]
    VSTR            S6, [R4,#0xC]
    VSTR            S8, [R4,#0x10]
    VSTR            S10, [R4,#0x14]
    VSTR            S12, [R4,#0x18]
    VSTR            S14, [R4,#0x1C]
  return result;
}


int __fastcall BoatRenderer::renderWaterHole(int a1, BaseEntityRenderContext *a2, int a3)
{
  int v3; // r8@1
  __int64 v4; // r6@1
  BlockSource *v7; // r0@1
  Material *v8; // r0@1
  int result; // r0@1
  int v10; // r0@2
  int v15; // r6@2
  PrefabMeshGenerator *v17; // r7@2
  Tessellator *v18; // r1@2
  int v19; // r0@6
  float v20; // [sp+0h] [bp-128h]@0
  float v21; // [sp+4h] [bp-124h]@0
  char v22; // [sp+Ch] [bp-11Ch]@5
  int v23; // [sp+70h] [bp-B8h]@2
  int v24; // [sp+74h] [bp-B4h]@2
  int v25; // [sp+78h] [bp-B0h]@2
  int v26; // [sp+7Ch] [bp-ACh]@2
  int v27; // [sp+80h] [bp-A8h]@2
  __int64 v28; // [sp+84h] [bp-A4h]@2
  int v29; // [sp+8Ch] [bp-9Ch]@2
  int v30; // [sp+90h] [bp-98h]@2
  int v31; // [sp+94h] [bp-94h]@2
  __int64 v32; // [sp+98h] [bp-90h]@2
  int v33; // [sp+A0h] [bp-88h]@2
  int v34; // [sp+A4h] [bp-84h]@2
  int v35; // [sp+A8h] [bp-80h]@2
  int v36; // [sp+ACh] [bp-7Ch]@2
  char v37; // [sp+B0h] [bp-78h]@2
  int v38; // [sp+B8h] [bp-70h]@1
  int v39; // [sp+BCh] [bp-6Ch]@1
  int v40; // [sp+C0h] [bp-68h]@1
  char v41; // [sp+C4h] [bp-64h]@1
  int v42; // [sp+C8h] [bp-60h]@1
  int v43; // [sp+CCh] [bp-5Ch]@1
  int v44; // [sp+D0h] [bp-58h]@2
  int v45; // [sp+D4h] [bp-54h]@2
  int v46; // [sp+D8h] [bp-50h]@2
  int v47; // [sp+DCh] [bp-4Ch]@2
  int v48; // [sp+E0h] [bp-48h]@2
  int v49; // [sp+E4h] [bp-44h]@2
  int v50; // [sp+E8h] [bp-40h]@2
  int v51; // [sp+ECh] [bp-3Ch]@2
  int v52; // [sp+F0h] [bp-38h]@2
  int v53; // [sp+F4h] [bp-34h]@2
  int v54; // [sp+F8h] [bp-30h]@2
  int v55; // [sp+FCh] [bp-2Ch]@2
  int v56; // [sp+100h] [bp-28h]@2
  int v57; // [sp+104h] [bp-24h]@2
  int v58; // [sp+108h] [bp-20h]@2
  int v59; // [sp+10Ch] [bp-1Ch]@2

  v3 = a1;
  v4 = *(_QWORD *)a3;
  _R5 = a2;
  _R4 = *(_DWORD *)(a3 + 8);
  BlockPos::BlockPos((int)&v41, *(_QWORD *)a3 >> 32);
  v7 = (BlockSource *)Entity::getRegion((Entity *)v4);
  v38 = *(_DWORD *)&v41;
  v39 = v42 + 1;
  v40 = v43;
  v8 = (Material *)BlockSource::getMaterial(v7, (const BlockPos *)&v38);
  result = Material::isLiquid(v8);
  if ( !result )
  {
    v10 = BaseEntityRenderContext::getWorldMatrix(_R5);
    MatrixStack::push((MatrixStack *)&v37, v10);
    v23 = 1065353216;
    v26 = 0;
    v27 = 0;
    v24 = 0;
    v25 = 0;
    v29 = 0;
    v30 = 0;
    v28 = 1065353216LL;
    v31 = 0;
    v32 = 1065353216LL;
    v34 = 0;
    v35 = 0;
    v33 = 0;
    v36 = 1065353216;
    __asm
    {
      VLDR            S0, [R4,#4]
      VLDR            S2, [R5,#4]
      VSTR            S0, [SP,#0x128+var_128]
      VSTR            S2, [SP,#0x128+var_124]
    }
    BoatRenderer::_calculateBoatTransform(1065353216, (int)&v23, (Entity *)v4, SHIDWORD(v4), v20, v21);
    v15 = MatrixStack::MatrixStackRef::operator->((int)&v37);
    glm::detail::operator*<float>((int)&v44, v15, (int)&v23);
    *(_DWORD *)v15 = v44;
    *(_DWORD *)(v15 + 4) = v45;
    *(_DWORD *)(v15 + 8) = v46;
    *(_DWORD *)(v15 + 12) = v47;
    *(_DWORD *)(v15 + 16) = v48;
    *(_DWORD *)(v15 + 20) = v49;
    *(_DWORD *)(v15 + 24) = v50;
    *(_DWORD *)(v15 + 28) = v51;
    *(_DWORD *)(v15 + 32) = v52;
    *(_DWORD *)(v15 + 36) = v53;
    *(_DWORD *)(v15 + 40) = v54;
    *(_DWORD *)(v15 + 44) = v55;
    *(_DWORD *)(v15 + 48) = v56;
    *(_DWORD *)(v15 + 52) = v57;
    *(_DWORD *)(v15 + 56) = v58;
    *(_DWORD *)(v15 + 60) = v59;
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v37);
      VLDR            S0, =1.7
      VLDR            S2, [R0]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VMUL.F32        S0, S2, S0
      VLDR            S2, =0.4
      VSTR            S0, [R0,#0xC]
      VLDR            S0, [R0,#0x10]
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R0,#0x10]
      VLDR            S0, [R0,#0x14]
      VSTR            S0, [R0,#0x14]
      VLDR            S0, [R0,#0x18]
      VSTR            S0, [R0,#0x18]
      VLDR            S0, [R0,#0x1C]
      VSTR            S0, [R0,#0x1C]
    v17 = (PrefabMeshGenerator *)BaseEntityRenderContext::getTessellator(_R5);
    if ( Tessellator::forceTessellateIntercept(v17) == 1 )
      PrefabMeshGenerator::tessellateUnitCube(v17, v18);
      Tessellator::triggerIntercept(
        v17,
        (const mce::MaterialPtr *)(v3 + 1744),
        (const mce::TexturePtr *)&mce::TexturePtr::NONE);
    else
      if ( !mce::Mesh::isValid((mce::Mesh *)(v3 + 1900)) )
      {
        PrefabMeshGenerator::buildUnitCube((PrefabMeshGenerator *)&v22, v17);
        mce::Mesh::operator=(v3 + 1900, (int)&v22);
        mce::Mesh::~Mesh((mce::Mesh *)&v22);
      }
      v19 = BaseEntityRenderContext::getScreenContext(_R5);
      mce::Mesh::render((mce::Buffer *)(v3 + 1900), v19, v3 + 1744, 0, 0);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v37);
  }
  return result;
}


void __fastcall BoatRenderer::~BoatRenderer(BoatRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = BoatRenderer::~BoatRenderer(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall BoatRenderer::~BoatRenderer(BoatRenderer *this)
{
  BoatRenderer::~BoatRenderer(this);
}
