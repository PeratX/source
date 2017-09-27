

void __fastcall ShulkerBulletModel::~ShulkerBulletModel(ShulkerBulletModel *this)
{
  ShulkerBulletModel::~ShulkerBulletModel(this);
}


AppPlatformListener *__fastcall ShulkerBulletModel::~ShulkerBulletModel(ShulkerBulletModel *this)
{
  Model *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5CA0;
  v2 = (ShulkerBulletModel *)((char *)this + 48);
  ModelPart::~ModelPart((ShulkerBulletModel *)((char *)this + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


int __fastcall ShulkerBulletModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r6@1
  __int64 v16; // r0@1

  v9 = a1;
  __asm { VLDR            S16, [SP,#0x38+arg_C] }
  v14 = a2;
  __asm
  {
    VLDR            S18, [SP,#0x38+arg_8]
    VLDR            S20, [SP,#0x38+arg_10]
    VSTR            S18, [SP,#0x38+var_38]
    VSTR            S16, [SP,#0x38+var_34]
    VSTR            S20, [SP,#0x38+var_30]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R3, S20 }
  HIDWORD(v16) = v14;
  _R0 = &mce::Math::DEGRAD;
    VLDR            S0, [R0]
    VMUL.F32        S2, S0, S18
    VMUL.F32        S0, S0, S16
    VSTR            S0, [R4,#0x60]
    VSTR            S2, [R4,#0x64]
  LODWORD(v16) = v9 + 60;
  return ModelPart::render(v16, v9, _R3, 0, 0);
}


void __fastcall ShulkerBulletModel::~ShulkerBulletModel(ShulkerBulletModel *this)
{
  Model *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5CA0;
  v2 = (ShulkerBulletModel *)((char *)this + 48);
  ModelPart::~ModelPart((ShulkerBulletModel *)((char *)this + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall ShulkerBulletModel::ShulkerBulletModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  __int64 v3; // r2@2
  ModelPart *v4; // r0@2
  __int64 v5; // r2@2
  ModelPart *v6; // r0@2
  __int64 v7; // r2@2
  ModelPart *v8; // r0@2
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+4h] [bp-6Ch]@2
  signed int v13; // [sp+8h] [bp-68h]@2
  signed int v14; // [sp+Ch] [bp-64h]@2
  int v15; // [sp+10h] [bp-60h]@2
  signed int v16; // [sp+14h] [bp-5Ch]@2
  int v17; // [sp+18h] [bp-58h]@2
  int v18; // [sp+1Ch] [bp-54h]@2
  signed int v19; // [sp+20h] [bp-50h]@2
  signed int v20; // [sp+24h] [bp-4Ch]@2
  int v21; // [sp+28h] [bp-48h]@2
  signed int v22; // [sp+2Ch] [bp-44h]@2
  int v23; // [sp+30h] [bp-40h]@2
  int v24; // [sp+34h] [bp-3Ch]@2
  signed int v25; // [sp+38h] [bp-38h]@2
  int v26; // [sp+3Ch] [bp-34h]@2
  int v27; // [sp+40h] [bp-30h]@2
  signed int v28; // [sp+44h] [bp-2Ch]@2
  int v29; // [sp+48h] [bp-28h]@2
  int v30; // [sp+50h] [bp-20h]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E5CA0;
  sub_21E94B4((void **)&v30, "shulker_bullet");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v30);
  v2 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v30 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 60)), 0, 0, 64, 32);
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  *((_DWORD *)v1 + 7) = v1 + 6;
  LODWORD(v3) = 0;
  v4 = (ModelPart *)ModelPart::texOffs((ModelPart *)((char *)v1 + 60), 0, v3);
  v27 = -1065353216;
  v28 = -1065353216;
  v29 = -1082130432;
  v24 = 1090519040;
  v25 = 1090519040;
  v26 = 0x40000000;
  ModelPart::addBox(v4, (const Vec3 *)&v27, (const Vec3 *)&v24, 0.0, (const Color *)&Color::WHITE);
  LODWORD(v5) = 10;
  v6 = (ModelPart *)ModelPart::texOffs((ModelPart *)((char *)v1 + 60), 0, v5);
  v21 = -1082130432;
  v22 = -1065353216;
  v18 = 0x40000000;
  v23 = -1065353216;
  v19 = 1090519040;
  v20 = 1090519040;
  ModelPart::addBox(v6, (const Vec3 *)&v21, (const Vec3 *)&v18, 0.0, (const Color *)&Color::WHITE);
  LODWORD(v7) = 0;
  v8 = (ModelPart *)ModelPart::texOffs((ModelPart *)((char *)v1 + 60), 20, v7);
  v15 = -1065353216;
  v16 = -1082130432;
  v17 = -1065353216;
  v12 = 1090519040;
  v13 = 0x40000000;
  v14 = 1090519040;
  ModelPart::addBox(v8, (const Vec3 *)&v15, (const Vec3 *)&v12, 0.0, (const Color *)&Color::WHITE);
  ModelPart::setPos((ModelPart *)((char *)v1 + 60), (const Vec3 *)&Vec3::ZERO);
  return v1;
}
