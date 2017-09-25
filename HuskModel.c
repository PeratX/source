

ZombieModel *__fastcall HuskModel::HuskModel(ZombieModel *a1, const GeometryPtr *a2)
{
  const GeometryPtr *v2; // r7@1
  ZombieModel *v3; // r4@1
  void *v4; // r0@1
  int v5; // r6@2
  void *v6; // r0@2
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  int v21; // [sp+Ch] [bp-4Ch]@5
  int v22; // [sp+14h] [bp-44h]@4
  int v23; // [sp+1Ch] [bp-3Ch]@3
  int v24; // [sp+24h] [bp-34h]@2
  int v25; // [sp+2Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  ZombieModel::ZombieModel(a1, a2);
  *(_DWORD *)v3 = &off_26DB398;
  sub_119C884((void **)&v25, "husk");
  mce::MaterialPtr::MaterialPtr(
    (ZombieModel *)((char *)v3 + 4320),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v25);
  v4 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  sub_119C884((void **)&v24, "husk_clothes");
  v5 = (int)v3 + 4332;
    (ZombieModel *)((char *)v3 + 4332),
    &v24);
  v6 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v24 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  ModelPart::ModelPart(COERCE_FLOAT((ZombieModel *)((char *)v3 + 4344)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ZombieModel *)((char *)v3 + 4564)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ZombieModel *)((char *)v3 + 4784)), 0, 0, 64, 32);
  *((_DWORD *)v3 + 7) = (char *)v3 + 4320;
  sub_119C884((void **)&v23, "hat");
  ModelPart::load((int)v3 + 4344, (int)v2, (const void **)&v23, 0);
  v7 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v23 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v22, "leftSleeve");
  ModelPart::load((int)v3 + 4564, (int)v2, (const void **)&v22, 0);
  v8 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v21, "rightSleeve");
  ModelPart::load((int)v3 + 4784, (int)v2, (const void **)&v21, 0);
  v9 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  *((_DWORD *)v3 + 1108) = v5;
  *((_DWORD *)v3 + 1163) = v5;
  *((_DWORD *)v3 + 1218) = v5;
  return v3;
}


void __fastcall HuskModel::~HuskModel(HuskModel *this)
{
  HuskModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB398;
  ModelPart::~ModelPart((HuskModel *)((char *)this + 4784));
  ModelPart::~ModelPart((HuskModel *)((char *)v1 + 4564));
  ModelPart::~ModelPart((HuskModel *)((char *)v1 + 4344));
  mce::MaterialPtr::~MaterialPtr((HuskModel *)((char *)v1 + 4332));
  mce::MaterialPtr::~MaterialPtr((HuskModel *)((char *)v1 + 4320));
  *(_DWORD *)v1 = &off_26DB290;
  mce::MaterialPtr::~MaterialPtr((HuskModel *)((char *)v1 + 4308));
  HumanoidModel::~HumanoidModel(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall HuskModel::~HuskModel(HuskModel *this)
{
  HuskModel::~HuskModel(this);
}


AppPlatformListener *__fastcall HuskModel::~HuskModel(HuskModel *this)
{
  HuskModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB398;
  ModelPart::~ModelPart((HuskModel *)((char *)this + 4784));
  ModelPart::~ModelPart((HuskModel *)((char *)v1 + 4564));
  ModelPart::~ModelPart((HuskModel *)((char *)v1 + 4344));
  mce::MaterialPtr::~MaterialPtr((HuskModel *)((char *)v1 + 4332));
  mce::MaterialPtr::~MaterialPtr((HuskModel *)((char *)v1 + 4320));
  *(_DWORD *)v1 = &off_26DB290;
  mce::MaterialPtr::~MaterialPtr((HuskModel *)((char *)v1 + 4308));
  return j_j_j__ZN13HumanoidModelD2Ev(v1);
}


unsigned __int64 __fastcall HuskModel::render(float a1, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  float v13; // r5@1
  int v14; // r4@1
  ModelPart *v15; // r2@1
  ModelPart *v16; // r2@1
  ModelPart *v17; // r2@1
  __int64 v18; // r0@1
  __int64 v21; // r0@2
  __int64 v24; // r0@4
  float v26; // [sp+0h] [bp-48h]@0
  int v27; // [sp+4h] [bp-44h]@0
  int v28; // [sp+8h] [bp-40h]@0
  int v29; // [sp+Ch] [bp-3Ch]@0
  int v30; // [sp+10h] [bp-38h]@0
  char v31; // [sp+18h] [bp-30h]@2

  __asm { VLDR            S4, [SP,#0x48+arg_0] }
  v13 = a2;
  __asm { VLDR            S0, [SP,#0x48+arg_8] }
  v14 = LODWORD(a1);
  __asm
  {
    VLDR            S2, [SP,#0x48+arg_4]
    VLDR            S6, [SP,#0x48+arg_C]
    VLDR            S16, [SP,#0x48+arg_10]
    VSTR            S4, [SP,#0x48+var_48]
    VSTR            S2, [SP,#0x48+var_44]
    VSTR            S0, [SP,#0x48+var_40]
    VSTR            S6, [SP,#0x48+var_3C]
    VSTR            S16, [SP,#0x48+var_38]
  }
  HumanoidModel::render(a1, a2, a3, a4, v26, v27, v28, v29, v30);
  Model::copyModelPart((Model *)(v14 + 96), (const ModelPart *)(v14 + 4344), v15);
  Model::copyModelPart((Model *)(v14 + 976), (const ModelPart *)(v14 + 4564), v16);
  Model::copyModelPart((Model *)(v14 + 756), (const ModelPart *)(v14 + 4784), v17);
  if ( *(_BYTE *)(v14 + 24) )
    MatrixStack::push((MatrixStack *)&v31, *(_DWORD *)(LODWORD(v13) + 16) + 16);
    _R0 = __PAIR__(LODWORD(v13), MatrixStack::MatrixStackRef::operator->((int)&v31));
    __asm
    {
      VLDR            S0, =1.4
      VMOV            R3, S16
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
    LODWORD(_R0) = v14 + 4344;
    ModelPart::render(_R0, v14, _R3, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v31);
  else
    __asm { VMOV            R3, S16 }
    LODWORD(v18) = v14 + 4344;
    v21 = __PAIR__(LODWORD(v13), ModelPart::render(v18, v14, _R3, 0, 0));
  __asm { VMOV            R6, S16 }
  LODWORD(v21) = v14 + 4564;
  v24 = __PAIR__(LODWORD(v13), ModelPart::render(v21, v14, _R6, 0, 0));
  LODWORD(v24) = v14 + 4784;
  return __PAIR__(LODWORD(v13), ModelPart::render(v24, v14, _R6, 0, 0));
}
