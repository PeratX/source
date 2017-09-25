

AppPlatformListener *__fastcall MinecartModel::~MinecartModel(MinecartModel *this)
{
  MinecartModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E58D4;
  v2 = (MinecartModel *)((char *)this + 48);
  ModelPart::~ModelPart((MinecartModel *)((char *)this + 940));
  ModelPart::~ModelPart((MinecartModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((MinecartModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((MinecartModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((MinecartModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall MinecartModel::~MinecartModel(MinecartModel *this)
{
  MinecartModel::~MinecartModel(this);
}


void __fastcall MinecartModel::~MinecartModel(MinecartModel *this)
{
  MinecartModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E58D4;
  v2 = (MinecartModel *)((char *)this + 48);
  ModelPart::~ModelPart((MinecartModel *)((char *)this + 940));
  ModelPart::~ModelPart((MinecartModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((MinecartModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((MinecartModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((MinecartModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


unsigned __int64 __fastcall MinecartModel::render(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 v8; // r4@1
  __int64 v9; // r0@1
  __int64 v10; // r0@1
  __int64 v11; // r0@1
  __int64 v12; // r0@1

  v8 = a1;
  LODWORD(a1) = a1 + 60;
  ModelPart::render(a1, v8, a8, 0, 0);
  LODWORD(v9) = v8 + 280;
  v10 = __PAIR__(HIDWORD(v8), ModelPart::render(v9, v8, a8, 0, 0));
  LODWORD(v10) = v8 + 500;
  v11 = __PAIR__(HIDWORD(v8), ModelPart::render(v10, v8, a8, 0, 0));
  LODWORD(v11) = v8 + 720;
  v12 = __PAIR__(HIDWORD(v8), ModelPart::render(v11, v8, a8, 0, 0));
  LODWORD(v12) = v8 + 940;
  return __PAIR__(HIDWORD(v8), ModelPart::render(v12, v8, a8, 0, 0));
}


_QWORD *__fastcall MinecartModel::MinecartModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int v11; // [sp+Ch] [bp-544h]@2
  int v12; // [sp+10h] [bp-540h]@2
  int v13; // [sp+14h] [bp-53Ch]@2
  int v14; // [sp+18h] [bp-538h]@2
  signed int v15; // [sp+1Ch] [bp-534h]@2
  int v16; // [sp+20h] [bp-530h]@2
  int v17; // [sp+24h] [bp-52Ch]@2
  signed int v18; // [sp+28h] [bp-528h]@2
  int v19; // [sp+2Ch] [bp-524h]@2
  char v20; // [sp+30h] [bp-520h]@2
  int v21; // [sp+10Ch] [bp-444h]@2
  int v22; // [sp+110h] [bp-440h]@2
  int v23; // [sp+114h] [bp-43Ch]@2
  int v24; // [sp+118h] [bp-438h]@2
  signed int v25; // [sp+11Ch] [bp-434h]@2
  int v26; // [sp+120h] [bp-430h]@2
  int v27; // [sp+124h] [bp-42Ch]@2
  signed int v28; // [sp+128h] [bp-428h]@2
  int v29; // [sp+12Ch] [bp-424h]@2
  char v30; // [sp+130h] [bp-420h]@2
  int v31; // [sp+20Ch] [bp-344h]@2
  signed int v32; // [sp+210h] [bp-340h]@2
  int v33; // [sp+214h] [bp-33Ch]@2
  int v34; // [sp+218h] [bp-338h]@2
  signed int v35; // [sp+21Ch] [bp-334h]@2
  int v36; // [sp+220h] [bp-330h]@2
  int v37; // [sp+224h] [bp-32Ch]@2
  signed int v38; // [sp+228h] [bp-328h]@2
  int v39; // [sp+22Ch] [bp-324h]@2
  char v40; // [sp+230h] [bp-320h]@2
  int v41; // [sp+30Ch] [bp-244h]@2
  signed int v42; // [sp+310h] [bp-240h]@2
  int v43; // [sp+314h] [bp-23Ch]@2
  int v44; // [sp+318h] [bp-238h]@2
  signed int v45; // [sp+31Ch] [bp-234h]@2
  int v46; // [sp+320h] [bp-230h]@2
  int v47; // [sp+324h] [bp-22Ch]@2
  int v48; // [sp+328h] [bp-228h]@2
  int v49; // [sp+32Ch] [bp-224h]@2
  char v50; // [sp+330h] [bp-220h]@2
  int v51; // [sp+40Ch] [bp-144h]@2
  int v52; // [sp+410h] [bp-140h]@2
  int v53; // [sp+414h] [bp-13Ch]@2
  int v54; // [sp+418h] [bp-138h]@2
  int v55; // [sp+41Ch] [bp-134h]@2
  int v56; // [sp+420h] [bp-130h]@2
  int v57; // [sp+424h] [bp-12Ch]@2
  int v58; // [sp+428h] [bp-128h]@2
  int v59; // [sp+42Ch] [bp-124h]@2
  char v60; // [sp+430h] [bp-120h]@2
  int v61; // [sp+510h] [bp-40h]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E58D4;
  sub_21E94B4((void **)&v61, "minecart");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v61);
  v2 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v61 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 940)), 0, 0, 64, 32);
  *((_DWORD *)v1 + 7) = v1 + 6;
  ModelPart::ModelPart(COERCE_FLOAT(&v60), 0, 10, 64, 32);
  ModelPart::operator=((int)v1 + 60, (int)&v60);
  ModelPart::~ModelPart((ModelPart *)&v60);
  v57 = -1054867456;
  v58 = -1056964608;
  v59 = -1082130432;
  v54 = 1101004800;
  v55 = 1098907648;
  v56 = 0x40000000;
  ModelPart::addBox(
    (ModelPart *)((char *)v1 + 60),
    (const Vec3 *)&v57,
    (const Vec3 *)&v54,
    0.0,
    (const Color *)&Color::WHITE);
  v51 = 0;
  v52 = 1082130432;
  v53 = 0;
  ModelPart::setPos((ModelPart *)((char *)v1 + 60), (const Vec3 *)&v51);
  __asm { VMOV.F32        S0, #0.5 }
  _R0 = &mce::Math::PI;
  __asm
    VLDR            S16, [R0]
    VMUL.F32        S18, S16, S0
    VSTR            S18, [R4,#0x60]
  ModelPart::ModelPart(COERCE_FLOAT(&v50), 0, 0, 64, 32);
  ModelPart::operator=((int)(v1 + 35), (int)&v50);
  ModelPart::~ModelPart((ModelPart *)&v50);
  v47 = -1056964608;
  v48 = -1055916032;
  v49 = -1082130432;
  v44 = 1098907648;
  v45 = 1090519040;
  v46 = 0x40000000;
  ModelPart::addBox((ModelPart *)(v1 + 35), (const Vec3 *)&v47, (const Vec3 *)&v44, 0.0, (const Color *)&Color::WHITE);
  v41 = -1055916032;
  v42 = 1082130432;
  v43 = 0;
  ModelPart::setPos((ModelPart *)(v1 + 35), (const Vec3 *)&v41);
    VMOV.F32        S0, #1.5
    VMUL.F32        S0, S16, S0
    VSTR            S0, [R4,#0x140]
  ModelPart::ModelPart(COERCE_FLOAT(&v40), 0, 0, 64, 32);
  ModelPart::operator=((int)v1 + 500, (int)&v40);
  ModelPart::~ModelPart((ModelPart *)&v40);
  v37 = -1056964608;
  v38 = -1055916032;
  v39 = -1082130432;
  v34 = 1098907648;
  v35 = 1090519040;
  v36 = 0x40000000;
    (ModelPart *)((char *)v1 + 500),
    (const Vec3 *)&v37,
    (const Vec3 *)&v34,
  v31 = 1091567616;
  v32 = 1082130432;
  v33 = 0;
  ModelPart::setPos((ModelPart *)((char *)v1 + 500), (const Vec3 *)&v31);
  __asm { VSTR            S18, [R4,#0x21C] }
  ModelPart::ModelPart(COERCE_FLOAT(&v30), 0, 0, 64, 32);
  ModelPart::operator=((int)(v1 + 90), (int)&v30);
  ModelPart::~ModelPart((ModelPart *)&v30);
  v27 = -1056964608;
  v28 = -1055916032;
  v29 = -1082130432;
  v24 = 1098907648;
  v25 = 1090519040;
  v26 = 0x40000000;
  ModelPart::addBox((ModelPart *)(v1 + 90), (const Vec3 *)&v27, (const Vec3 *)&v24, 0.0, (const Color *)&Color::WHITE);
  v21 = 0;
  v22 = 1082130432;
  v23 = -1059061760;
  ModelPart::setPos((ModelPart *)(v1 + 90), (const Vec3 *)&v21);
  __asm { VSTR            S16, [R4,#0x2F8] }
  ModelPart::ModelPart(COERCE_FLOAT(&v20), 0, 0, 64, 32);
  ModelPart::operator=((int)v1 + 940, (int)&v20);
  ModelPart::~ModelPart((ModelPart *)&v20);
  v17 = -1056964608;
  v18 = -1055916032;
  v19 = -1082130432;
  v14 = 1098907648;
  v15 = 1090519040;
  v16 = 0x40000000;
    (ModelPart *)((char *)v1 + 940),
    (const Vec3 *)&v17,
    (const Vec3 *)&v14,
  v11 = 0;
  v12 = 1082130432;
  v13 = 1088421888;
  ModelPart::setPos((ModelPart *)((char *)v1 + 940), (const Vec3 *)&v11);
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 35));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 500));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 90));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 940));
  return v1;
}
