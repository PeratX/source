

void __fastcall SlimeModel::~SlimeModel(SlimeModel *this)
{
  SlimeModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5DA8;
  v2 = (SlimeModel *)((char *)this + 48);
  ModelPart::~ModelPart((SlimeModel *)((char *)this + 720));
  ModelPart::~ModelPart((SlimeModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((SlimeModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((SlimeModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


AppPlatformListener *__fastcall SlimeModel::~SlimeModel(SlimeModel *this)
{
  SlimeModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5DA8;
  v2 = (SlimeModel *)((char *)this + 48);
  ModelPart::~ModelPart((SlimeModel *)((char *)this + 720));
  ModelPart::~ModelPart((SlimeModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((SlimeModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((SlimeModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


_QWORD *__fastcall SlimeModel::SlimeModel(_QWORD *a1, int a2)
{
  int v2; // r6@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  int v20; // [sp+Ch] [bp-4Ch]@5
  int v21; // [sp+14h] [bp-44h]@4
  int v22; // [sp+1Ch] [bp-3Ch]@3
  int v23; // [sp+24h] [bp-34h]@2
  int v24; // [sp+2Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E5DA8;
  sub_21E94B4((void **)&v24, "slime");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v24);
  v4 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v24 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 90), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 60));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 35));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 500));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 90));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_21E94B4((void **)&v23, "cube");
  ModelPart::load((int)v3 + 60, v2, (const void **)&v23, 0);
  v5 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v23 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v22, "eye0");
  ModelPart::load((int)(v3 + 35), v2, (const void **)&v22, 0);
  v6 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v22 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v21, "eye1");
  ModelPart::load((int)v3 + 500, v2, (const void **)&v21, 0);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v21 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v20, "mouth");
  ModelPart::load((int)(v3 + 90), v2, (const void **)&v20, 0);
  v8 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v3;
}


void __fastcall SlimeModel::~SlimeModel(SlimeModel *this)
{
  SlimeModel::~SlimeModel(this);
}


signed __int64 __fastcall SlimeModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
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
  LODWORD(v18) = v9 + 500;
  v19 = __PAIR__(v15, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = v9 + 720;
  return __PAIR__(v15, ModelPart::render(v19, v9, _R6, 0, 0));
}
