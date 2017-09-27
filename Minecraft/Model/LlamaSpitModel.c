

void __fastcall LlamaSpitModel::~LlamaSpitModel(LlamaSpitModel *this)
{
  LlamaSpitModel::~LlamaSpitModel(this);
}


int __fastcall LlamaSpitModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r5@1
  __int64 v14; // r6@1

  v9 = a1;
  __asm
  {
    VLDR            S0, [SP,#0x30+arg_C]
    VLDR            S2, [SP,#0x30+arg_8]
  }
  LODWORD(v14) = a1 + 60;
  HIDWORD(v14) = a2;
    VLDR            S16, [SP,#0x30+arg_10]
    VSTR            S2, [SP,#0x30+var_30]
    VSTR            S0, [SP,#0x30+var_2C]
    VSTR            S16, [SP,#0x30+var_28]
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R3, S16 }
  return ModelPart::render(v14, v9, _R3, 0, 0);
}


_QWORD *__fastcall LlamaSpitModel::LlamaSpitModel(_QWORD *a1, int a2)
{
  int v2; // r6@1
  _QWORD *v3; // r4@1
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
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E587C;
  sub_21E94B4((void **)&v12, "llama_spit");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v12);
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
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 60)), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 60));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_21E94B4((void **)&v11, "body");
  ModelPart::load((int)v3 + 60, v2, (const void **)&v11, 0);
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


void __fastcall LlamaSpitModel::~LlamaSpitModel(LlamaSpitModel *this)
{
  Model *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E587C;
  v2 = (LlamaSpitModel *)((char *)this + 48);
  ModelPart::~ModelPart((LlamaSpitModel *)((char *)this + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


AppPlatformListener *__fastcall LlamaSpitModel::~LlamaSpitModel(LlamaSpitModel *this)
{
  Model *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E587C;
  v2 = (LlamaSpitModel *)((char *)this + 48);
  ModelPart::~ModelPart((LlamaSpitModel *)((char *)this + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}
