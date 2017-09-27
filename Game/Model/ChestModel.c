

void __fastcall ChestModel::~ChestModel(ChestModel *this)
{
  ChestModel::~ChestModel(this);
}


void __fastcall ChestModel::~ChestModel(ChestModel *this)
{
  ChestModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DAF58;
  v2 = (ChestModel *)((char *)this + 48);
  ModelPart::~ModelPart((ChestModel *)((char *)this + 500));
  ModelPart::~ModelPart((ChestModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((ChestModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


unsigned __int64 __fastcall ChestModel::render(__int64 a1)
{
  __int64 v1; // r4@1
  int v2; // r2@1
  __int64 v3; // r0@1
  __int64 v4; // r0@1

  v1 = a1;
  v2 = a1;
  *(_DWORD *)(a1 + 536) = *(_DWORD *)(a1 + 96);
  LODWORD(a1) = a1 + 60;
  ModelPart::render(a1, v2, 1031798784, 0, 0);
  LODWORD(v3) = v1 + 500;
  v4 = __PAIR__(HIDWORD(v1), ModelPart::render(v3, v1, 1031798784, 0, 0));
  LODWORD(v4) = v1 + 280;
  return __PAIR__(HIDWORD(v1), ModelPart::render(v4, v1, 1031798784, 0, 0));
}


AppPlatformListener *__fastcall ChestModel::~ChestModel(ChestModel *this)
{
  ChestModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DAF58;
  v2 = (ChestModel *)((char *)this + 48);
  ModelPart::~ModelPart((ChestModel *)((char *)this + 500));
  ModelPart::~ModelPart((ChestModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((ChestModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev(v1);
}


_QWORD *__fastcall ChestModel::ChestModel(_QWORD *a1, char a2)
{
  char v2; // r6@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  int v9; // r7@2
  int v10; // r1@8
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  float v14; // [sp+8h] [bp-320h]@8
  int v15; // [sp+Ch] [bp-31Ch]@8
  int v16; // [sp+10h] [bp-318h]@8
  int v17; // [sp+14h] [bp-314h]@8
  int v18; // [sp+18h] [bp-310h]@8
  int v19; // [sp+1Ch] [bp-30Ch]@8
  char v20; // [sp+20h] [bp-308h]@8
  int v21; // [sp+FCh] [bp-22Ch]@8
  signed int v22; // [sp+100h] [bp-228h]@8
  int v23; // [sp+104h] [bp-224h]@8
  int v24; // [sp+108h] [bp-220h]@8
  int v25; // [sp+10Ch] [bp-21Ch]@8
  int v26; // [sp+110h] [bp-218h]@8
  char v27; // [sp+114h] [bp-214h]@8
  float v28; // [sp+1F0h] [bp-138h]@6
  int v29; // [sp+1F4h] [bp-134h]@6
  int v30; // [sp+1F8h] [bp-130h]@6
  int v31; // [sp+1FCh] [bp-12Ch]@6
  signed int v32; // [sp+200h] [bp-128h]@6
  int v33; // [sp+204h] [bp-124h]@6
  char v34; // [sp+208h] [bp-120h]@6
  int v35; // [sp+2E8h] [bp-40h]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26DAF58;
  sub_119C884((void **)&v35, "chest");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v35);
  v4 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  *((_BYTE *)v3 + 720) = v2;
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 60));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 500));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 35));
  __asm
    VMOV.F32        S0, #30.0
    VMOV.F32        S16, #14.0
  v9 = 64;
  if ( !_ZF )
    __asm { VMOVNE.F32      S16, S0 }
  *((_DWORD *)v3 + 7) = v3 + 6;
    v9 = 128;
  ModelPart::ModelPart(COERCE_FLOAT(&v34), 0, 0, v9, 64);
  ModelPart::operator=((int)v3 + 60, (int)&v34);
  ModelPart::~ModelPart((ModelPart *)&v34);
  v31 = 0;
  v32 = -1063256064;
  v33 = -1050673152;
  __asm { VSTR            S16, [SP,#0x328+var_138] }
  v29 = 1084227584;
  v30 = 1096810496;
  ModelPart::addBox(
    (ModelPart *)((char *)v3 + 60),
    (const Vec3 *)&v31,
    (const Vec3 *)&v28,
    0.01,
    (const Color *)&Color::WHITE);
    VMOV.F32        S0, #-7.0
    VMOV.F32        S18, #1.0
    __asm { VMOVNE.F32      S18, S0 }
  __asm { VSTR            S18, [R4,#0x3C] }
  *((_DWORD *)v3 + 16) = 1088421888;
  *((_DWORD *)v3 + 17) = 1097859072;
  ModelPart::ModelPart(COERCE_FLOAT(&v27), 0, 0, v9, 64);
  ModelPart::operator=((int)v3 + 500, (int)&v27);
  ModelPart::~ModelPart((ModelPart *)&v27);
  v24 = -1082130432;
  v25 = -1073741824;
  v26 = -1049624576;
  v21 = 0x40000000;
  v22 = 1082130432;
  v23 = 1065353216;
    (ModelPart *)((char *)v3 + 500),
    (const Vec3 *)&v24,
    (const Vec3 *)&v21,
    0.0,
  v10 = (int)v3 + 500;
  *(_DWORD *)v10 = 1090519040;
  *(_DWORD *)(v10 + 4) = 1088421888;
  *(_DWORD *)(v10 + 8) = 1097859072;
  ModelPart::ModelPart(COERCE_FLOAT(&v20), 0, 19, v9, 64);
  ModelPart::operator=((int)(v3 + 35), (int)&v20);
  ModelPart::~ModelPart((ModelPart *)&v20);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  __asm { VSTR            S16, [SP,#0x328+var_320] }
  v15 = 1092616192;
  v16 = 1096810496;
  ModelPart::addBox((ModelPart *)(v3 + 35), (const Vec3 *)&v17, (const Vec3 *)&v14, 0.0, (const Color *)&Color::WHITE);
  __asm { VSTR            S18, [R4,#0x118] }
  *(_QWORD *)((char *)v3 + 284) = 4575657222494748672LL;
  return v3;
}
