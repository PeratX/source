

void __fastcall ChalkboardModel::~ChalkboardModel(ChalkboardModel *this)
{
  ChalkboardModel::~ChalkboardModel(this);
}


AppPlatformListener *__fastcall ChalkboardModel::~ChalkboardModel(ChalkboardModel *this)
{
  ChalkboardModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E529C;
  v2 = (ChalkboardModel *)((char *)this + 48);
  ModelPart::~ModelPart((ChalkboardModel *)((char *)this + 500));
  ModelPart::~ModelPart((ChalkboardModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((ChalkboardModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall ChalkboardModel::~ChalkboardModel(ChalkboardModel *this)
{
  ChalkboardModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E529C;
  v2 = (ChalkboardModel *)((char *)this + 48);
  ModelPart::~ModelPart((ChalkboardModel *)((char *)this + 500));
  ModelPart::~ModelPart((ChalkboardModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((ChalkboardModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall ChalkboardModel::ChalkboardModel(_QWORD *a1, int a2)
{
  int v2; // r5@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  int v17; // [sp+8h] [bp-40h]@4
  int v18; // [sp+10h] [bp-38h]@3
  int v19; // [sp+18h] [bp-30h]@2
  int v20; // [sp+20h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E529C;
  sub_21E94B4((void **)&v20, "chalkboard");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v20);
  v4 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 60));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 35));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 500));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_21E94B4((void **)&v19, "body");
  ModelPart::load((int)v3 + 60, v2, (const void **)&v19, 0);
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v19 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v18, "leftLeg");
  ModelPart::load((int)(v3 + 35), v2, (const void **)&v18, 0);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v17, "rightLeg");
  ModelPart::load((int)v3 + 500, v2, (const void **)&v17, 0);
  v7 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v3;
}


int __fastcall ChalkboardModel::showLegs(int result, bool a2)
{
  *(_BYTE *)(result + 333) = a2;
  *(_BYTE *)(result + 553) = a2;
  return result;
}


unsigned __int64 __fastcall ChalkboardModel::render(__int64 a1)
{
  __int64 v1; // r4@1
  __int64 v2; // r0@1
  __int64 v3; // r0@1

  v1 = a1;
  LODWORD(a1) = a1 + 60;
  ModelPart::render(a1, v1, 1065353216, 0, 0);
  LODWORD(v2) = v1 + 280;
  v3 = __PAIR__(HIDWORD(v1), ModelPart::render(v2, v1, 1065353216, 0, 0));
  LODWORD(v3) = v1 + 500;
  return __PAIR__(HIDWORD(v1), ModelPart::render(v3, v1, 1065353216, 0, 0));
}
