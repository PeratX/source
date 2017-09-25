

void __fastcall VillagerRenderer::~VillagerRenderer(VillagerRenderer *this)
{
  VillagerRenderer *v1; // r4@1
  char *v2; // r0@1
  char *v3; // r5@1
  int v4; // r6@2

  v1 = this;
  *(_DWORD *)this = &off_26DC4A8;
  v3 = (char *)(*(_QWORD *)((char *)this + 644) >> 32);
  v2 = (char *)*(_QWORD *)((char *)this + 644);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (int)(v2 + 24);
      (**(void (***)(void))v2)();
      v2 = (char *)v4;
    }
    while ( v3 != (char *)v4 );
    v2 = (char *)*((_DWORD *)v1 + 161);
  }
  if ( v2 )
    operator delete(v2);
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall VillagerRenderer::render(int a1, BaseEntityRenderContext *a2, Entity **a3)
{
  Entity **v3; // r4@1
  int v4; // r6@1
  BaseEntityRenderContext *v5; // r5@1
  int v6; // r0@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Entity::getVariant(*a3);
  return MobRenderer::renderModel(v4, v5, (int)v3, *(_DWORD *)(v4 + 140), *(_DWORD *)(v4 + 644) + 24 * v6);
}


signed int __fastcall VillagerRenderer::additionalRendering(VillagerRenderer *this, BaseEntityRenderContext *a2, Model *a3, Mob *a4, float a5, float a6, float a7, float a8, float a9, float a10)
{
  Entity *v10; // r4@1
  BaseEntityRenderContext *v11; // r8@1
  Model *v12; // r7@1
  ItemInstance *v13; // r0@1
  ItemInstance *v14; // r6@1
  signed int result; // r0@1
  int v23; // r0@3
  int v26; // r7@6
  int v27; // r7@6
  int v32; // r7@8
  signed int v33; // r0@8
  int v35; // r7@9
  int v37; // r7@9
  ItemInHandRenderer *v38; // r0@11
  char v39; // [sp+14h] [bp-74h]@3
  int v40; // [sp+1Ch] [bp-6Ch]@6
  signed int v41; // [sp+20h] [bp-68h]@6
  int v42; // [sp+24h] [bp-64h]@6
  int v43; // [sp+28h] [bp-60h]@6
  int v44; // [sp+2Ch] [bp-5Ch]@6
  int v45; // [sp+30h] [bp-58h]@6
  int v46; // [sp+34h] [bp-54h]@6
  int v47; // [sp+38h] [bp-50h]@6
  int v48; // [sp+3Ch] [bp-4Ch]@6
  int v49; // [sp+40h] [bp-48h]@6
  int v50; // [sp+44h] [bp-44h]@6
  int v51; // [sp+48h] [bp-40h]@6
  int v52; // [sp+4Ch] [bp-3Ch]@6
  int v53; // [sp+50h] [bp-38h]@6
  int v54; // [sp+54h] [bp-34h]@6
  int v55; // [sp+58h] [bp-30h]@6
  int v56; // [sp+5Ch] [bp-2Ch]@6
  int v57; // [sp+60h] [bp-28h]@6
  int v58; // [sp+64h] [bp-24h]@6
  int v59; // [sp+68h] [bp-20h]@6

  v10 = a4;
  v11 = a2;
  v12 = a3;
  v13 = (ItemInstance *)(*(int (__fastcall **)(Mob *))(*(_DWORD *)a4 + 908))(a4);
  v14 = v13;
  result = ItemInstance::isNull(v13);
  if ( !result )
  {
    result = *((_BYTE *)v14 + 14);
    if ( *((_BYTE *)v14 + 14) )
    {
      __asm
      {
        VLDR            S6, [SP,#0x88+arg_8]
        VLDR            S8, [SP,#0x88+arg_4]
        VLDR            S10, [SP,#0x88+arg_0]
        VMOV            R3, S6
        VMOV            R2, S8
        VMOV            R1, S10
        VLDR            S0, [SP,#0x88+arg_14]
        VLDR            S2, [SP,#0x88+arg_10]
        VLDR            S4, [SP,#0x88+arg_C]
        VSTR            S4, [SP,#0x88+var_88]
        VSTR            S2, [SP,#0x88+var_84]
        VSTR            S0, [SP,#0x88+var_80]
      }
      (*(void (__fastcall **)(Model *, int, int, int))(*(_DWORD *)v12 + 64))(v12, _R1, _R2, _R3);
      v23 = BaseEntityRenderContext::getWorldMatrix(v11);
      MatrixStack::push((MatrixStack *)&v39, v23);
      if ( Entity::isBaby(v10) == 1 )
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v39);
        __asm
        {
          VMOV.F32        S0, #0.5
          VLDR            S2, [R0]
          VMUL.F32        S2, S2, S0
          VSTR            S2, [R0]
          VLDR            S2, [R0,#4]
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
        }
      if ( *((_DWORD *)v14 + 1) )
          VMOV.F32        S0, #-0.25
          VLDR            S10, [R0,#0x20]
          VLDR            S12, [R0,#0x24]
          VLDR            S14, [R0,#0x28]
          VLDR            S2, =0.0625
          VLDR            S4, [R0,#0x14]
          VLDR            S6, [R0,#0x18]
          VLDR            S3, [R0,#0x10]
          VMUL.F32        S4, S4, S2
          VLDR            S8, [R0,#0x1C]
          VMUL.F32        S12, S12, S0
          VLDR            S1, [R0,#0x2C]
          VMUL.F32        S3, S3, S2
          VMUL.F32        S6, S6, S2
          VMUL.F32        S14, S14, S0
          VMUL.F32        S10, S10, S0
          VMUL.F32        S2, S8, S2
          VMUL.F32        S0, S1, S0
          VADD.F32        S4, S12, S4
          VLDR            S12, [R0,#0x38]
          VADD.F32        S6, S14, S6
          VLDR            S14, [R0,#0x3C]
          VADD.F32        S8, S10, S3
          VLDR            S10, [R0,#0x34]
          VADD.F32        S0, S0, S2
          VLDR            S2, [R0,#0x30]
          VADD.F32        S4, S4, S10
          VADD.F32        S6, S6, S12
          VADD.F32        S2, S8, S2
          VADD.F32        S0, S0, S14
          VSTR            S2, [R0,#0x30]
          VSTR            S4, [R0,#0x34]
          VSTR            S6, [R0,#0x38]
          VSTR            S0, [R0,#0x3C]
        v26 = MatrixStack::MatrixStackRef::operator->((int)&v39);
        v40 = 1065353216;
        v41 = 0;
        v42 = 0;
        v59 = 1106247680;
        glm::rotate<float>((int)&v43, v26, (int)&v59, (int)&v40);
        *(_DWORD *)v26 = v43;
        *(_DWORD *)(v26 + 4) = v44;
        *(_DWORD *)(v26 + 8) = v45;
        *(_DWORD *)(v26 + 12) = v46;
        *(_DWORD *)(v26 + 16) = v47;
        *(_DWORD *)(v26 + 20) = v48;
        *(_DWORD *)(v26 + 24) = v49;
        *(_DWORD *)(v26 + 28) = v50;
        *(_DWORD *)(v26 + 32) = v51;
        *(_DWORD *)(v26 + 36) = v52;
        *(_DWORD *)(v26 + 40) = v53;
        *(_DWORD *)(v26 + 44) = v54;
        *(_DWORD *)(v26 + 48) = v55;
        *(_DWORD *)(v26 + 52) = v56;
        *(_DWORD *)(v26 + 56) = v57;
        *(_DWORD *)(v26 + 60) = v58;
        v27 = MatrixStack::MatrixStackRef::operator->((int)&v39);
        v40 = 0;
        v41 = 1065353216;
        v59 = -1063256064;
        glm::rotate<float>((int)&v43, v27, (int)&v59, (int)&v40);
        *(_DWORD *)v27 = v43;
        *(_DWORD *)(v27 + 4) = v44;
        *(_DWORD *)(v27 + 8) = v45;
        *(_DWORD *)(v27 + 12) = v46;
        *(_DWORD *)(v27 + 16) = v47;
        *(_DWORD *)(v27 + 20) = v48;
        *(_DWORD *)(v27 + 24) = v49;
        *(_DWORD *)(v27 + 28) = v50;
        *(_DWORD *)(v27 + 32) = v51;
        *(_DWORD *)(v27 + 36) = v52;
        *(_DWORD *)(v27 + 40) = v53;
        *(_DWORD *)(v27 + 44) = v54;
        *(_DWORD *)(v27 + 48) = v55;
        *(_DWORD *)(v27 + 52) = v56;
        *(_DWORD *)(v27 + 56) = v57;
        *(_DWORD *)(v27 + 60) = v58;
          VMOV.F32        S0, #0.375
          VMOV.F32        S4, #-0.375
          VMUL.F32        S2, S2, S4
      else
        if ( *(_DWORD *)v14 == Item::mBow )
          _R0 = MatrixStack::MatrixStackRef::operator->((int)&v39);
          __asm
          {
            VLDR            S0, [R0,#0x14]
            VMOV.F32        S1, #0.125
            VLDR            S8, [R0,#0x24]
            VLDR            S2, [R0,#0x18]
            VLDR            S10, [R0,#0x28]
            VSUB.F32        S0, S0, S8
            VLDR            S4, [R0,#0x1C]
            VLDR            S12, [R0,#0x2C]
            VSUB.F32        S2, S2, S10
            VLDR            S6, [R0,#0x20]
            VLDR            S14, [R0,#0x10]
            VSUB.F32        S4, S4, S12
            VLDR            S8, [R0,#0x30]
            VSUB.F32        S6, S14, S6
            VLDR            S10, [R0,#0x34]
            VMUL.F32        S0, S0, S1
            VLDR            S12, [R0,#0x38]
            VLDR            S14, [R0,#0x3C]
            VMUL.F32        S2, S2, S1
            VMUL.F32        S4, S4, S1
            VMUL.F32        S6, S6, S1
            VADD.F32        S0, S0, S10
            VADD.F32        S2, S2, S12
            VADD.F32        S4, S4, S14
            VADD.F32        S6, S6, S8
            VSTR            S6, [R0,#0x30]
            VSTR            S0, [R0,#0x34]
            VSTR            S2, [R0,#0x38]
            VSTR            S4, [R0,#0x3C]
          }
          v35 = MatrixStack::MatrixStackRef::operator->((int)&v39);
          v40 = 0;
          v41 = 1065353216;
          v42 = 0;
          v59 = -1036779520;
          glm::rotate<float>((int)&v43, v35, (int)&v59, (int)&v40);
          *(_DWORD *)v35 = v43;
          *(_DWORD *)(v35 + 4) = v44;
          *(_DWORD *)(v35 + 8) = v45;
          *(_DWORD *)(v35 + 12) = v46;
          *(_DWORD *)(v35 + 16) = v47;
          *(_DWORD *)(v35 + 20) = v48;
          *(_DWORD *)(v35 + 24) = v49;
          *(_DWORD *)(v35 + 28) = v50;
          *(_DWORD *)(v35 + 32) = v51;
          *(_DWORD *)(v35 + 36) = v52;
          *(_DWORD *)(v35 + 40) = v53;
          *(_DWORD *)(v35 + 44) = v54;
          *(_DWORD *)(v35 + 48) = v55;
          *(_DWORD *)(v35 + 52) = v56;
          *(_DWORD *)(v35 + 56) = v57;
          *(_DWORD *)(v35 + 60) = v58;
            VMOV.F32        S0, #0.625
            VLDR            S2, [R0]
            VMOV.F32        S4, #-0.625
            VMUL.F32        S2, S2, S0
            VSTR            S2, [R0]
            VLDR            S2, [R0,#4]
            VSTR            S2, [R0,#4]
            VLDR            S2, [R0,#8]
            VSTR            S2, [R0,#8]
            VLDR            S2, [R0,#0xC]
            VSTR            S2, [R0,#0xC]
            VLDR            S2, [R0,#0x10]
            VMUL.F32        S2, S2, S4
            VSTR            S2, [R0,#0x10]
            VLDR            S2, [R0,#0x14]
            VSTR            S2, [R0,#0x14]
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
          v37 = MatrixStack::MatrixStackRef::operator->((int)&v39);
          v40 = 1065353216;
          v41 = 0;
          v59 = -1027080192;
          glm::rotate<float>((int)&v43, v37, (int)&v59, (int)&v40);
          *(_DWORD *)v37 = v43;
          *(_DWORD *)(v37 + 4) = v44;
          *(_DWORD *)(v37 + 8) = v45;
          *(_DWORD *)(v37 + 12) = v46;
          *(_DWORD *)(v37 + 16) = v47;
          *(_DWORD *)(v37 + 20) = v48;
          *(_DWORD *)(v37 + 24) = v49;
          *(_DWORD *)(v37 + 28) = v50;
          *(_DWORD *)(v37 + 32) = v51;
          *(_DWORD *)(v37 + 36) = v52;
          *(_DWORD *)(v37 + 40) = v53;
          *(_DWORD *)(v37 + 44) = v54;
          *(_DWORD *)(v37 + 48) = v55;
          *(_DWORD *)(v37 + 52) = v56;
          *(_DWORD *)(v37 + 56) = v57;
          *(_DWORD *)(v37 + 60) = v58;
          v32 = MatrixStack::MatrixStackRef::operator->((int)&v39);
          v33 = -1046478848;
        else
            VMOV.F32        S0, #0.1875
            VLDR            S8, [R0,#0xC]
            VMOV.F32        S2, #0.3125
            VLDR            S10, [R0,#0x10]
            VLDR            S12, [R0,#0x14]
            VMOV.F32        S5, #-0.5
            VLDR            S14, [R0,#0x18]
            VLDR            S6, [R0,#8]
            VLDR            S1, [R0,#0x1C]
            VLDMIA          R0, {S3-S4}
            VMUL.F32        S8, S8, S0
            VMUL.F32        S3, S3, S0
            VLDR            S7, [R0,#0x20]
            VMUL.F32        S10, S10, S2
            VMUL.F32        S4, S4, S0
            VMUL.F32        S12, S12, S2
            VMUL.F32        S0, S6, S0
            VLDR            S6, [R0,#0x24]
            VMUL.F32        S14, S14, S2
            VMUL.F32        S2, S1, S2
            VMUL.F32        S1, S7, S5
            VLDR            S7, [R0,#0x28]
            VADD.F32        S10, S10, S3
            VMUL.F32        S6, S6, S5
            VADD.F32        S4, S12, S4
            VMUL.F32        S3, S7, S5
            VADD.F32        S0, S14, S0
            VADD.F32        S2, S2, S8
            VMUL.F32        S12, S12, S5
            VADD.F32        S8, S10, S1
            VADD.F32        S4, S4, S6
            VLDR            S6, [R0,#0x30]
            VADD.F32        S0, S0, S3
            VADD.F32        S6, S8, S6
            VLDR            S8, [R0,#0x3C]
            VADD.F32        S4, S4, S10
            VADD.F32        S0, S0, S12
            VSTR            S4, [R0,#0x34]
            VSTR            S0, [R0,#0x38]
            VSTR            S2, [R0,#0x3C]
            VMOV.F32        S0, #0.375
            VMOV.F32        S4, #-0.375
          v42 = 1065353216;
          v33 = 1101004800;
        v59 = v33;
        glm::rotate<float>((int)&v43, v32, (int)&v59, (int)&v40);
        *(_DWORD *)v32 = v43;
        *(_DWORD *)(v32 + 4) = v44;
        *(_DWORD *)(v32 + 8) = v45;
        *(_DWORD *)(v32 + 12) = v46;
        *(_DWORD *)(v32 + 16) = v47;
        *(_DWORD *)(v32 + 20) = v48;
        *(_DWORD *)(v32 + 24) = v49;
        *(_DWORD *)(v32 + 28) = v50;
        *(_DWORD *)(v32 + 32) = v51;
        *(_DWORD *)(v32 + 36) = v52;
        *(_DWORD *)(v32 + 40) = v53;
        *(_DWORD *)(v32 + 44) = v54;
        *(_DWORD *)(v32 + 48) = v55;
        *(_DWORD *)(v32 + 52) = v56;
        *(_DWORD *)(v32 + 56) = v57;
        *(_DWORD *)(v32 + 60) = v58;
      v38 = (ItemInHandRenderer *)BaseEntityRenderContext::getItemInHandRenderer(v11);
      ItemInHandRenderer::renderItem(v38, v11, v10, v14, 0, 0, 1, 0);
      result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v39);
    }
  }
  return result;
}


int __fastcall VillagerRenderer::VillagerRenderer(int a1, mce::TextureGroup *a2, int a3)
{
  int v3; // r4@1
  int v4; // r7@1
  mce::TextureGroup *v5; // r6@1
  _QWORD *v6; // r5@1
  char *v7; // r0@1
  char *v8; // r0@2
  int *v9; // r5@5
  mce::TexturePtr *v10; // r7@5
  char *v11; // r0@5
  char *v12; // r0@6
  int v13; // r7@7
  char *v14; // r0@7
  char *v15; // r0@8
  int v16; // r7@9
  char *v17; // r0@9
  char *v18; // r0@10
  int v19; // r7@11
  char *v20; // r0@11
  char *v21; // r0@12
  int v22; // r7@13
  char *v23; // r0@13
  char *v24; // r0@14
  unsigned int *v26; // r2@16
  signed int v27; // r1@18
  unsigned int *v28; // r2@20
  signed int v29; // r1@22
  unsigned int *v30; // r2@24
  signed int v31; // r1@26
  unsigned int *v32; // r2@28
  signed int v33; // r1@30
  unsigned int *v34; // r2@32
  signed int v35; // r1@34
  unsigned int *v36; // r2@36
  signed int v37; // r1@38
  unsigned int *v38; // r2@40
  signed int v39; // r1@42
  unsigned int *v40; // r2@44
  signed int v41; // r1@46
  unsigned int *v42; // r2@48
  signed int v43; // r1@50
  unsigned int *v44; // r2@52
  signed int v45; // r1@54
  unsigned int *v46; // r2@56
  signed int v47; // r1@58
  unsigned int *v48; // r2@60
  signed int v49; // r1@62
  char *v50; // [sp+4h] [bp-10Ch]@13
  char *v51; // [sp+8h] [bp-108h]@13
  int v52; // [sp+Ch] [bp-104h]@13
  char v53; // [sp+10h] [bp-100h]@13
  char *v54; // [sp+2Ch] [bp-E4h]@11
  char *v55; // [sp+30h] [bp-E0h]@11
  int v56; // [sp+34h] [bp-DCh]@11
  char v57; // [sp+38h] [bp-D8h]@11
  char *v58; // [sp+54h] [bp-BCh]@9
  char *v59; // [sp+58h] [bp-B8h]@9
  int v60; // [sp+5Ch] [bp-B4h]@9
  char v61; // [sp+60h] [bp-B0h]@9
  char *v62; // [sp+7Ch] [bp-94h]@7
  char *v63; // [sp+80h] [bp-90h]@7
  int v64; // [sp+84h] [bp-8Ch]@7
  char v65; // [sp+88h] [bp-88h]@7
  char *v66; // [sp+A4h] [bp-6Ch]@5
  char *v67; // [sp+A8h] [bp-68h]@5
  int v68; // [sp+ACh] [bp-64h]@5
  char v69; // [sp+B0h] [bp-60h]@5
  char *v70; // [sp+CCh] [bp-44h]@1
  char *v71; // [sp+D0h] [bp-40h]@1
  int v72; // [sp+D4h] [bp-3Ch]@1
  char v73; // [sp+D8h] [bp-38h]@1
  _QWORD *v74; // [sp+F0h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x564u);
  VillagerModel::VillagerModel(v6, v4);
  v74 = v6;
  sub_119C884((void **)&v70, "textures/entity/villager/farmer");
  v71 = v70;
  v70 = (char *)&unk_28898CC;
  v72 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v73, v5, (int)&v71, 0);
  MobRenderer::MobRenderer(v3, (int *)&v74, (mce::TexturePtr *)&v73);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v73);
  v7 = v71 - 12;
  if ( (int *)(v71 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v71 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v70 - 12;
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v70 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( v74 )
    (*(void (**)(void))(*(_DWORD *)v74 + 4))();
  v9 = (int *)(v3 + 644);
  v74 = 0;
  *(_DWORD *)v3 = &off_26DC4A8;
  *(_DWORD *)(v3 + 644) = 0;
  *(_DWORD *)(v3 + 648) = 0;
  *(_DWORD *)(v3 + 652) = 0;
  std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>::_M_default_append(v3 + 644, 5u);
  v10 = *(mce::TexturePtr **)(v3 + 644);
  sub_119C884((void **)&v66, "textures/entity/villager/farmer");
  v67 = v66;
  v66 = (char *)&unk_28898CC;
  v68 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v69, v5, (int)&v67, 0);
  mce::TexturePtr::operator=(v10, (mce::TexturePtr *)&v69);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v69);
  v11 = v67 - 12;
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v67 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = v66 - 12;
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v66 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = *v9;
  sub_119C884((void **)&v62, "textures/entity/villager/librarian");
  v63 = v62;
  v62 = (char *)&unk_28898CC;
  v64 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v65, v5, (int)&v63, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v13 + 24), (mce::TexturePtr *)&v65);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v65);
  v14 = v63 - 12;
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v63 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v62 - 12;
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v62 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = *v9;
  sub_119C884((void **)&v58, "textures/entity/villager/priest");
  v59 = v58;
  v58 = (char *)&unk_28898CC;
  v60 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v61, v5, (int)&v59, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v16 + 48), (mce::TexturePtr *)&v61);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v61);
  v17 = v59 - 12;
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v59 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = v58 - 12;
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v58 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = *v9;
  sub_119C884((void **)&v54, "textures/entity/villager/smith");
  v55 = v54;
  v54 = (char *)&unk_28898CC;
  v56 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v57, v5, (int)&v55, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v19 + 72), (mce::TexturePtr *)&v57);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v57);
  v20 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v55 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = v54 - 12;
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v54 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = *v9;
  sub_119C884((void **)&v50, "textures/entity/villager/butcher");
  v51 = v50;
  v50 = (char *)&unk_28898CC;
  v52 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v53, v5, (int)&v51, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v22 + 96), (mce::TexturePtr *)&v53);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v53);
  v23 = v51 - 12;
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v51 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = v50 - 12;
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v50 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  return v3;
}


void __fastcall VillagerRenderer::setupScale(int a1, int a2, int _R2)
{
  __asm
  {
    VMOV.F32        S0, #0.9375
    VLDR            S2, [R2]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R2]
    VLDR            S2, [R2,#4]
    VSTR            S2, [R2,#4]
    VLDR            S2, [R2,#8]
    VSTR            S2, [R2,#8]
    VLDR            S2, [R2,#0xC]
    VSTR            S2, [R2,#0xC]
    VLDR            S2, [R2,#0x10]
    VSTR            S2, [R2,#0x10]
    VLDR            S2, [R2,#0x14]
    VSTR            S2, [R2,#0x14]
    VLDR            S2, [R2,#0x18]
    VSTR            S2, [R2,#0x18]
    VLDR            S2, [R2,#0x1C]
    VSTR            S2, [R2,#0x1C]
    VLDR            S2, [R2,#0x20]
    VSTR            S2, [R2,#0x20]
    VLDR            S2, [R2,#0x24]
    VSTR            S2, [R2,#0x24]
    VLDR            S2, [R2,#0x28]
    VSTR            S2, [R2,#0x28]
    VLDR            S2, [R2,#0x2C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R2,#0x2C]
  }
}


void __fastcall VillagerRenderer::setupScale(int a1, int a2, int _R2)
{
  VillagerRenderer::setupScale(a1, a2, _R2);
}


BaseEntityRenderer *__fastcall VillagerRenderer::~VillagerRenderer(VillagerRenderer *this)
{
  VillagerRenderer *v1; // r4@1
  char *v2; // r0@1
  char *v3; // r5@1
  int v4; // r6@2

  v1 = this;
  *(_DWORD *)this = &off_26DC4A8;
  v3 = (char *)(*(_QWORD *)((char *)this + 644) >> 32);
  v2 = (char *)*(_QWORD *)((char *)this + 644);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (int)(v2 + 24);
      (**(void (***)(void))v2)();
      v2 = (char *)v4;
    }
    while ( v3 != (char *)v4 );
    v2 = (char *)*((_DWORD *)v1 + 161);
  }
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


void __fastcall VillagerRenderer::~VillagerRenderer(VillagerRenderer *this)
{
  VillagerRenderer::~VillagerRenderer(this);
}
