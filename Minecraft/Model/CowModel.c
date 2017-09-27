

void __fastcall CowModel::~CowModel(CowModel *this)
{
  CowModel::~CowModel(this);
}


void __fastcall CowModel::~CowModel(CowModel *this)
{
  CowModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E534C;
  mce::MaterialPtr::~MaterialPtr((CowModel *)((char *)this + 1608));
  mce::MaterialPtr::~MaterialPtr((CowModel *)((char *)v1 + 1596));
  QuadrupedModel::~QuadrupedModel(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


AppPlatformListener *__fastcall CowModel::~CowModel(CowModel *this)
{
  CowModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E534C;
  mce::MaterialPtr::~MaterialPtr((CowModel *)((char *)this + 1608));
  mce::MaterialPtr::~MaterialPtr((CowModel *)((char *)v1 + 1596));
  return j_j_j__ZN14QuadrupedModelD2Ev(v1);
}


QuadrupedModel *__fastcall CowModel::CowModel(QuadrupedModel *a1, const GeometryPtr *a2, int a3)
{
  int v3; // r5@1
  QuadrupedModel *v4; // r4@1
  const char *v5; // r1@1
  void *v6; // r0@3
  void *v7; // r0@4
  unsigned int *v14; // r2@6
  signed int v15; // r1@8
  unsigned int *v16; // r2@10
  signed int v17; // r1@12
  int v18; // [sp+8h] [bp-30h]@4
  int v19; // [sp+10h] [bp-28h]@3

  v3 = a3;
  v4 = a1;
  QuadrupedModel::QuadrupedModel(a1, a2);
  v5 = "mooshroom";
  *(_DWORD *)v4 = &off_26E534C;
  if ( !v3 )
    v5 = "cow";
  sub_21E94B4((void **)&v19, v5);
  mce::MaterialPtr::MaterialPtr(
    (QuadrupedModel *)((char *)v4 + 1596),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v19);
  v6 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v18, "mooshroom_mushrooms");
    (QuadrupedModel *)((char *)v4 + 1608),
    &v18);
  v7 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  __asm { VMOV.F32        S0, #2.0 }
  _R0 = (int)v4 + 1592;
  *((_DWORD *)v4 + 7) = (char *)v4 + 1596;
  __asm
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0]
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = -1090519040;
  *((_DWORD *)v4 + 4) = 1056964608;
  return v4;
}
