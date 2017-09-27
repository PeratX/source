

AppPlatformListener *__fastcall PistonArmModel::~PistonArmModel(PistonArmModel *this)
{
  PistonArmModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB058;
  v2 = (PistonArmModel *)((char *)this + 48);
  ModelPart::~ModelPart((PistonArmModel *)((char *)this + 500));
  ModelPart::~ModelPart((PistonArmModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((PistonArmModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev(v1);
}


void __fastcall PistonArmModel::~PistonArmModel(PistonArmModel *this)
{
  PistonArmModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB058;
  v2 = (PistonArmModel *)((char *)this + 48);
  ModelPart::~ModelPart((PistonArmModel *)((char *)this + 500));
  ModelPart::~ModelPart((PistonArmModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((PistonArmModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


unsigned __int64 __fastcall PistonArmModel::renderArm(int a1, unsigned int a2, int _R2)
{
  int v7; // r4@1
  int v8; // r6@1
  unsigned int v9; // r5@1
  __int64 v10; // r0@1
  __int64 v11; // r0@1
  int v13; // [sp+8h] [bp-20h]@1
  int v14; // [sp+10h] [bp-18h]@1

  __asm { VMOV.F32        S0, #8.0 }
  v7 = a1;
  __asm { VMOV            S2, R2 }
  v8 = a1 + 60;
  __asm { VMOV.F32        S4, #2.0 }
  v9 = a2;
  v13 = 0;
  __asm
  {
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSTR            S0, [SP,#0x28+var_1C]
  }
  v14 = 0;
  ModelPart::setPos((ModelPart *)(a1 + 60), (const Vec3 *)&v13);
  ModelPart::render(__PAIR__(v9, v8), v7, 1031798784, 0, 0);
  LODWORD(v10) = v7 + 280;
  v11 = __PAIR__(v9, ModelPart::render(v10, v7, 1031798784, 0, 0));
  LODWORD(v11) = v7 + 500;
  return __PAIR__(v9, ModelPart::render(v11, v7, 1031798784, 0, 0));
}


_QWORD *__fastcall PistonArmModel::PistonArmModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-32Ch]@2
  signed int v7; // [sp+8h] [bp-328h]@2
  int v8; // [sp+Ch] [bp-324h]@2
  int v9; // [sp+10h] [bp-320h]@2
  signed int v10; // [sp+14h] [bp-31Ch]@2
  signed int v11; // [sp+18h] [bp-318h]@2
  int v12; // [sp+1Ch] [bp-314h]@2
  int v13; // [sp+20h] [bp-310h]@2
  signed int v14; // [sp+24h] [bp-30Ch]@2
  char v15; // [sp+28h] [bp-308h]@2
  int v16; // [sp+104h] [bp-22Ch]@2
  signed int v17; // [sp+108h] [bp-228h]@2
  int v18; // [sp+10Ch] [bp-224h]@2
  int v19; // [sp+110h] [bp-220h]@2
  signed int v20; // [sp+114h] [bp-21Ch]@2
  signed int v21; // [sp+118h] [bp-218h]@2
  int v22; // [sp+11Ch] [bp-214h]@2
  int v23; // [sp+120h] [bp-210h]@2
  signed int v24; // [sp+124h] [bp-20Ch]@2
  char v25; // [sp+128h] [bp-208h]@2
  int v26; // [sp+204h] [bp-12Ch]@2
  int v27; // [sp+208h] [bp-128h]@2
  int v28; // [sp+20Ch] [bp-124h]@2
  int v29; // [sp+210h] [bp-120h]@2
  signed int v30; // [sp+214h] [bp-11Ch]@2
  signed int v31; // [sp+218h] [bp-118h]@2
  int v32; // [sp+21Ch] [bp-114h]@2
  signed int v33; // [sp+220h] [bp-110h]@2
  signed int v34; // [sp+224h] [bp-10Ch]@2
  char v35; // [sp+228h] [bp-108h]@2
  int v36; // [sp+308h] [bp-28h]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26DB058;
  sub_21E94B4((void **)&v36, "piston_arm");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v36);
  v2 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v36 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 500)), 0, 0, 64, 32);
  *((_DWORD *)v1 + 7) = v1 + 6;
  ModelPart::ModelPart(COERCE_FLOAT(&v35), 0, 0, 128, 32);
  ModelPart::operator=((int)v1 + 500, (int)&v35);
  ModelPart::~ModelPart((ModelPart *)&v35);
  v32 = -1048576000;
  v33 = -1073741824;
  v34 = -1048576000;
  v29 = 1098907648;
  v30 = 1082130432;
  v31 = 1098907648;
  ModelPart::addBox(
    (ModelPart *)((char *)v1 + 500),
    (const Vec3 *)&v32,
    (const Vec3 *)&v29,
    0.0,
    (const Color *)&Color::WHITE);
  v26 = 1090519040;
  v27 = 0;
  v28 = 1090519040;
  ModelPart::setPos((ModelPart *)((char *)v1 + 500), (const Vec3 *)&v26);
  ModelPart::ModelPart(COERCE_FLOAT(&v25), 64, 0, 128, 32);
  ModelPart::operator=((int)(v1 + 35), (int)&v25);
  ModelPart::~ModelPart((ModelPart *)&v25);
  v22 = -1073741824;
  v23 = 0;
  v24 = -1073741824;
  v19 = 1082130432;
  v20 = 1090519040;
  v21 = 1082130432;
  ModelPart::addBox((ModelPart *)(v1 + 35), (const Vec3 *)&v22, (const Vec3 *)&v19, 0.0, (const Color *)&Color::WHITE);
  v16 = 0;
  v17 = 0x40000000;
  v18 = 0;
  ModelPart::setPos((ModelPart *)(v1 + 35), (const Vec3 *)&v16);
  ModelPart::ModelPart(COERCE_FLOAT(&v15), 64, 18, 128, 32);
  ModelPart::operator=((int)v1 + 60, (int)&v15);
  ModelPart::~ModelPart((ModelPart *)&v15);
  v12 = -1069547520;
  v13 = 0;
  v14 = -1069547520;
  v9 = 1086324736;
  v10 = 1090519040;
  v11 = 1086324736;
    (ModelPart *)((char *)v1 + 60),
    (const Vec3 *)&v12,
    (const Vec3 *)&v9,
  v6 = 0;
  v7 = 0x40000000;
  v8 = 0;
  ModelPart::setPos((ModelPart *)((char *)v1 + 60), (const Vec3 *)&v6);
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 35));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 500));
  return v1;
}


void __fastcall PistonArmModel::~PistonArmModel(PistonArmModel *this)
{
  PistonArmModel::~PistonArmModel(this);
}
