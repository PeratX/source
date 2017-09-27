

signed __int64 __fastcall IllagerModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r7@1
  int v15; // r8@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  __int64 v19; // r0@1

  v9 = a1;
  __asm
  {
    VLDR            S0, [SP,#0x30+arg_C]
    VLDR            S2, [SP,#0x30+arg_8]
  }
  v14 = a1 + 60;
  v15 = a2;
    VLDR            S16, [SP,#0x30+arg_10]
    VSTR            S2, [SP,#0x30+var_30]
    VSTR            S0, [SP,#0x30+var_2C]
    VSTR            S16, [SP,#0x30+var_28]
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R6, S16 }
  ModelPart::render(__PAIR__(v15, v14), v9, _R6, 0, 0);
  LODWORD(v17) = v9 + 280;
  v18 = __PAIR__(v15, ModelPart::render(v17, v9, _R6, 0, 0));
  LODWORD(v18) = v9 + 720;
  v19 = __PAIR__(v15, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = v9 + 940;
  return __PAIR__(v15, ModelPart::render(v19, v9, _R6, 0, 0));
}


void __fastcall IllagerModel::~IllagerModel(IllagerModel *this)
{
  IllagerModel *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E56C4;
  v2 = (IllagerModel *)((char *)this + 60);
  ModelPart::~ModelPart((IllagerModel *)((char *)this + 1600));
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 1380));
  *(_DWORD *)v1 = &off_26E5F64;
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 280));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((IllagerModel *)((char *)v1 + 48));
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall IllagerModel::~IllagerModel(IllagerModel *this)
{
  IllagerModel::~IllagerModel(this);
}


AppPlatformListener *__fastcall IllagerModel::~IllagerModel(IllagerModel *this)
{
  IllagerModel *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E56C4;
  v2 = (IllagerModel *)((char *)this + 60);
  ModelPart::~ModelPart((IllagerModel *)((char *)this + 1600));
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 1380));
  *(_DWORD *)v1 = &off_26E5F64;
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((IllagerModel *)((char *)v1 + 280));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((IllagerModel *)((char *)v1 + 48));
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


VillagerModel *__fastcall IllagerModel::IllagerModel(VillagerModel *a1, const GeometryPtr *a2)
{
  const GeometryPtr *v2; // r7@1
  VillagerModel *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+Ch] [bp-34h]@2
  int v12; // [sp+14h] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  VillagerModel::VillagerModel(a1, a2);
  *(_DWORD *)v3 = &off_26E56C4;
  ModelPart::ModelPart(COERCE_FLOAT((VillagerModel *)((char *)v3 + 1380)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((VillagerModel *)((char *)v3 + 1600)), 0, 0, 64, 32);
  sub_21E94B4((void **)&v12, "rightarm");
  ModelPart::load((int)v3 + 1600, (int)v2, (const void **)&v12, 0);
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
  sub_21E94B4((void **)&v11, "leftarm");
  ModelPart::load((int)v3 + 1380, (int)v2, (const void **)&v11, 0);
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
