

AppPlatformListener *__fastcall SignModel::~SignModel(SignModel *this)
{
  SignModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB140;
  v2 = (SignModel *)((char *)this + 48);
  ModelPart::~ModelPart((SignModel *)((char *)this + 280));
  ModelPart::~ModelPart((SignModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev(v1);
}


signed __int64 __fastcall SignModel::render(__int64 a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  __int64 v3; // r0@1

  v1 = a1;
  LODWORD(a1) = a1 + 60;
  v2 = HIDWORD(a1);
  ModelPart::render(a1, v1, 1031290384, 0, 0);
  LODWORD(v3) = v1 + 280;
  return __PAIR__(v2, ModelPart::render(v3, v1, 1031798784, 0, 0));
}


void __fastcall SignModel::~SignModel(SignModel *this)
{
  SignModel::~SignModel(this);
}


void __fastcall SignModel::~SignModel(SignModel *this)
{
  SignModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB140;
  v2 = (SignModel *)((char *)this + 48);
  ModelPart::~ModelPart((SignModel *)((char *)this + 280));
  ModelPart::~ModelPart((SignModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


_QWORD *__fastcall SignModel::SignModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-5Ch]@2
  signed int v7; // [sp+8h] [bp-58h]@2
  signed int v8; // [sp+Ch] [bp-54h]@2
  int v9; // [sp+10h] [bp-50h]@2
  signed int v10; // [sp+14h] [bp-4Ch]@2
  signed int v11; // [sp+18h] [bp-48h]@2
  int v12; // [sp+1Ch] [bp-44h]@2
  signed int v13; // [sp+20h] [bp-40h]@2
  int v14; // [sp+24h] [bp-3Ch]@2
  int v15; // [sp+28h] [bp-38h]@2
  int v16; // [sp+2Ch] [bp-34h]@2
  int v17; // [sp+30h] [bp-30h]@2
  int v18; // [sp+38h] [bp-28h]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26DB140;
  sub_119C884((void **)&v18, "sign");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v18);
  v2 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 35), 0, 15, 64, 32);
  *((_DWORD *)v1 + 7) = v1 + 6;
  v15 = -1052770304;
  v16 = -1050673152;
  v17 = -1082130432;
  v12 = 1103101952;
  v13 = 1094713344;
  v14 = 0x40000000;
  ModelPart::addBox(
    (ModelPart *)((char *)v1 + 60),
    (const Vec3 *)&v15,
    (const Vec3 *)&v12,
    0.0,
    (const Color *)&Color::WHITE);
  v9 = -1082130432;
  v10 = -1073741824;
  v11 = -1082130432;
  v6 = 0x40000000;
  v7 = 1095761920;
  v8 = 0x40000000;
  ModelPart::addBox((ModelPart *)(v1 + 35), (const Vec3 *)&v9, (const Vec3 *)&v6, 0.0, (const Color *)&Color::WHITE);
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 35));
  return v1;
}
