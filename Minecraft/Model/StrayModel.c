

AppPlatformListener *__fastcall StrayModel::~StrayModel(StrayModel *this)
{
  StrayModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB3F0;
  mce::MaterialPtr::~MaterialPtr((StrayModel *)((char *)this + 4332));
  *(_DWORD *)v1 = &off_26DB238;
  mce::MaterialPtr::~MaterialPtr((StrayModel *)((char *)v1 + 4320));
  *(_DWORD *)v1 = &off_26DB290;
  mce::MaterialPtr::~MaterialPtr((StrayModel *)((char *)v1 + 4308));
  return j_j_j__ZN13HumanoidModelD2Ev(v1);
}


void __fastcall StrayModel::~StrayModel(StrayModel *this)
{
  StrayModel::~StrayModel(this);
}


void __fastcall StrayModel::~StrayModel(StrayModel *this)
{
  StrayModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB3F0;
  mce::MaterialPtr::~MaterialPtr((StrayModel *)((char *)this + 4332));
  *(_DWORD *)v1 = &off_26DB238;
  mce::MaterialPtr::~MaterialPtr((StrayModel *)((char *)v1 + 4320));
  *(_DWORD *)v1 = &off_26DB290;
  mce::MaterialPtr::~MaterialPtr((StrayModel *)((char *)v1 + 4308));
  HumanoidModel::~HumanoidModel(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


SkeletonModel *__fastcall StrayModel::StrayModel(SkeletonModel *a1, const GeometryPtr *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  SkeletonModel *v6; // r4@1
  const char *v7; // r1@1
  void *v8; // r0@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  int v12; // [sp+4h] [bp-1Ch]@5

  v4 = a4;
  v5 = a3;
  v6 = a1;
  SkeletonModel::SkeletonModel(a1, a2, a3);
  v7 = "stray_clothes";
  *(_DWORD *)v6 = &off_26DB3F0;
  if ( !v4 )
    v7 = "stray";
  if ( v5 )
    v7 = "armor";
  sub_119C884((void **)&v12, v7);
  mce::MaterialPtr::MaterialPtr(
    (SkeletonModel *)((char *)v6 + 4332),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v12);
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  *((_DWORD *)v6 + 7) = (char *)v6 + 4332;
  return v6;
}
