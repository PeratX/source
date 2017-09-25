

void __fastcall ArmorStandModel::~ArmorStandModel(ArmorStandModel *this)
{
  ArmorStandModel::~ArmorStandModel(this);
}


int __fastcall ArmorStandModel::prepareMobModel(ArmorStandModel *this, Mob *a2, float a3, float a4, float a5)
{
  ArmorStandModel *v10; // r4@1
  int result; // r0@1
  float v13; // [sp+0h] [bp-18h]@0

  __asm { VLDR            S0, [SP,#0x18+arg_0] }
  _R5 = a2;
  v10 = this;
  __asm { VSTR            S0, [SP,#0x18+var_18] }
  ArmorStandArmorModel::prepareMobModel(this, a2, a3, a4, v13);
  result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R5 + 488))(_R5);
  if ( result == 317 )
  {
    *((_DWORD *)v10 + 1254) = 0;
    _R0 = &mce::Math::DEGRAD;
    __asm
    {
      VLDR            S0, [R5,#0x7C]
      VLDR            S2, [R0]
      VNMUL.F32       S0, S2, S0
      VSTR            S0, [R0]
    }
    result = 5024;
    *((_DWORD *)v10 + 1256) = 0;
  }
  return result;
}


void __fastcall ArmorStandModel::~ArmorStandModel(ArmorStandModel *this)
{
  ArmorStandModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E51EC;
  ModelPart::~ModelPart((ArmorStandModel *)((char *)this + 4980));
  ModelPart::~ModelPart((ArmorStandModel *)((char *)v1 + 4760));
  ModelPart::~ModelPart((ArmorStandModel *)((char *)v1 + 4540));
  ModelPart::~ModelPart((ArmorStandModel *)((char *)v1 + 4320));
  mce::MaterialPtr::~MaterialPtr((ArmorStandModel *)((char *)v1 + 4308));
  HumanoidModel::~HumanoidModel(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


AppPlatformListener *__fastcall ArmorStandModel::~ArmorStandModel(ArmorStandModel *this)
{
  ArmorStandModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E51EC;
  ModelPart::~ModelPart((ArmorStandModel *)((char *)this + 4980));
  ModelPart::~ModelPart((ArmorStandModel *)((char *)v1 + 4760));
  ModelPart::~ModelPart((ArmorStandModel *)((char *)v1 + 4540));
  ModelPart::~ModelPart((ArmorStandModel *)((char *)v1 + 4320));
  mce::MaterialPtr::~MaterialPtr((ArmorStandModel *)((char *)v1 + 4308));
  return j_j_j__ZN13HumanoidModelD2Ev_0(v1);
}


ArmorStandArmorModel *__fastcall ArmorStandModel::ArmorStandModel(ArmorStandArmorModel *a1, const GeometryPtr *a2)
{
  const GeometryPtr *v2; // r7@1
  ArmorStandArmorModel *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+8h] [bp-40h]@2
  int v12; // [sp+10h] [bp-38h]@1

  v2 = a2;
  v3 = a1;
  ArmorStandArmorModel::ArmorStandArmorModel(a1, a2);
  *(_DWORD *)v3 = &off_26E51EC;
  sub_21E94B4((void **)&v12, "armor_stand");
  mce::MaterialPtr::MaterialPtr(
    (ArmorStandArmorModel *)((char *)v3 + 4308),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v12);
  v4 = (void *)(v12 - 12);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT((ArmorStandArmorModel *)((char *)v3 + 4320)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ArmorStandArmorModel *)((char *)v3 + 4540)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ArmorStandArmorModel *)((char *)v3 + 4760)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ArmorStandArmorModel *)((char *)v3 + 4980)), 0, 0, 64, 32);
  *((_DWORD *)v3 + 7) = (char *)v3 + 4308;
  Model::registerParts(v3, (ArmorStandArmorModel *)((char *)v3 + 4980));
  sub_21E94B4((void **)&v11, "basePlate");
  ModelPart::load((int)v3 + 4980, (int)v2, (const void **)&v11, 0);
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v3;
}


int __fastcall ArmorStandModel::render(float a1, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  float v13; // r5@1
  int v14; // r4@1
  __int64 v16; // r0@1
  float v18; // [sp+0h] [bp-38h]@0
  int v19; // [sp+4h] [bp-34h]@0
  int v20; // [sp+8h] [bp-30h]@0
  int v21; // [sp+Ch] [bp-2Ch]@0
  int v22; // [sp+10h] [bp-28h]@0
  char v23; // [sp+18h] [bp-20h]@1

  __asm { VLDR            S4, [SP,#0x38+arg_0] }
  v13 = a2;
  __asm { VLDR            S0, [SP,#0x38+arg_8] }
  v14 = LODWORD(a1);
  __asm
  {
    VLDR            S2, [SP,#0x38+arg_4]
    VLDR            S6, [SP,#0x38+arg_C]
    VLDR            S16, [SP,#0x38+arg_10]
    VSTR            S4, [SP,#0x38+var_38]
    VSTR            S2, [SP,#0x38+var_34]
    VSTR            S0, [SP,#0x38+var_30]
    VSTR            S6, [SP,#0x38+var_2C]
    VSTR            S16, [SP,#0x38+var_28]
  }
  HumanoidModel::render(a1, a2, a3, a4, v18, v19, v20, v21, v22);
  MatrixStack::push((MatrixStack *)&v23, *(_DWORD *)(LODWORD(v13) + 16) + 16);
  __asm { VMOV            R3, S16 }
  *((float *)&v16 + 1) = v13;
  LODWORD(v16) = v14 + 4980;
  ModelPart::render(v16, v14, _R3, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v23);
}
