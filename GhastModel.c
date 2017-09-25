

void __fastcall GhastModel::~GhastModel(GhastModel *this)
{
  GhastModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5560;
  v2 = (GhastModel *)((char *)this + 48);
  ModelPart::~ModelPart((GhastModel *)((char *)this + 2040));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 1820));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall GhastModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r5@1
  __int64 v17; // r0@3
  __int64 v18; // r0@3
  __int64 v19; // r0@3
  __int64 v20; // r0@3
  __int64 v21; // r0@3
  __int64 v22; // r0@3
  __int64 v23; // r0@3
  __int64 v24; // r0@3
  __int64 v25; // r0@3
  char v27; // [sp+10h] [bp-28h]@1

  v9 = a1;
  __asm { VLDR            S0, [SP,#0x38+arg_C] }
  v14 = a2;
  __asm
  {
    VLDR            S2, [SP,#0x38+arg_8]
    VLDR            S16, [SP,#0x38+arg_10]
    VSTR            S2, [SP,#0x38+var_38]
    VSTR            S0, [SP,#0x38+var_34]
    VSTR            S16, [SP,#0x38+var_30]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  MatrixStack::push((MatrixStack *)&v27, *(_DWORD *)(v14 + 16) + 16);
  if ( *(_BYTE *)(v9 + 24) )
    LODWORD(_R0) = MatrixStack::MatrixStackRef::operator->((int)&v27);
    __asm
    {
      VMOV.F32        S0, #24.0
      VLDR            S2, [R0,#0x14]
      VLDR            S4, [R0,#0x18]
      VLDR            S6, [R0,#0x1C]
      VLDR            S8, [R0,#0x10]
      VLDR            S10, [R0,#0x34]
      VLDR            S12, [R0,#0x38]
      VLDR            S14, [R0,#0x3C]
      VMUL.F32        S0, S16, S0
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S8, S8, S0
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R0,#0x30]
      VADD.F32        S2, S10, S2
      VADD.F32        S4, S12, S4
      VADD.F32        S6, S6, S8
      VADD.F32        S0, S14, S0
      VSTR            S6, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    }
  __asm { VMOV            R6, S16 }
  LODWORD(_R0) = v9 + 60;
  v17 = __PAIR__(v14, ModelPart::render(_R0, v9, _R6, 0, 0));
  LODWORD(v17) = v9 + 280;
  v18 = __PAIR__(v14, ModelPart::render(v17, v9, _R6, 0, 0));
  LODWORD(v18) = v9 + 500;
  v19 = __PAIR__(v14, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = v9 + 720;
  v20 = __PAIR__(v14, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 940;
  v21 = __PAIR__(v14, ModelPart::render(v20, v9, _R6, 0, 0));
  LODWORD(v21) = v9 + 1160;
  v22 = __PAIR__(v14, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 1380;
  v23 = __PAIR__(v14, ModelPart::render(v22, v9, _R6, 0, 0));
  LODWORD(v23) = v9 + 1600;
  v24 = __PAIR__(v14, ModelPart::render(v23, v9, _R6, 0, 0));
  LODWORD(v24) = v9 + 1820;
  v25 = __PAIR__(v14, ModelPart::render(v24, v9, _R6, 0, 0));
  LODWORD(v25) = v9 + 2040;
  ModelPart::render(v25, v9, _R6, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v27);
}


void __fastcall GhastModel::~GhastModel(GhastModel *this)
{
  GhastModel::~GhastModel(this);
}


GhastModel *__fastcall GhastModel::setupAnim(GhastModel *this, float a2, float a3, float _R3, float a5, float a6, float a7)
{
  GhastModel *v11; // r4@1
  GhastModel *result; // r0@1

  __asm
  {
    VLDR            S0, =0.3
    VMOV            S2, R3
  }
  v11 = this;
    VMUL.F32        S20, S2, S0
    VMOV            R0, S20
  _R0 = mce::Math::sin(_R0, a2);
    VMOV.F32        S0, #1.0
    VLDR            S16, =0.2
    VLDR            S18, =0.4
    VADD.F32        S0, S20, S0
    VMOV            R1, S0
    VMOV            S0, R0
    VMUL.F32        S0, S0, S16
    VADD.F32        S0, S0, S18
    VSTR            S0, [R4,#0x13C]
  _R0 = mce::Math::sin(_R1, *(float *)&_R1);
    VMOV.F32        S0, #2.0
    VSTR            S0, [R4,#0x218]
    VMOV.F32        S0, #3.0
    VSTR            S0, [R4,#0x2F4]
    VMOV.F32        S0, #4.0
    VSTR            S0, [R4,#0x3D0]
    VMOV.F32        S0, #5.0
    VSTR            S0, [R0]
    VMOV.F32        S0, #6.0
    VMOV.F32        S0, #7.0
    VMOV.F32        S0, #8.0
  __asm { VMOV            S0, R0 }
  result = (GhastModel *)((char *)v11 + 2076);
  return result;
}


ModelPart *__fastcall GhastModel::GhastModel(ModelPart *a1, ModelPart *a2, ModelPart *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, char a12)
{
  ModelPart *v12; // r5@1
  ModelPart *v13; // r4@1
  void *v14; // r0@1
  void *v15; // r0@2
  signed int v16; // r6@3
  unsigned int *v17; // r2@4
  signed int v18; // r1@6
  unsigned int *v19; // r2@8
  signed int v20; // r1@10
  const void **v21; // r0@20
  char *v22; // r0@20
  void *v23; // r0@21
  unsigned int *v25; // r2@24
  signed int v26; // r1@26
  unsigned int *v27; // r2@28
  signed int v28; // r1@30
  int v29; // [sp+38h] [bp-40h]@8
  char *v30; // [sp+3Ch] [bp-3Ch]@4
  int v31; // [sp+44h] [bp-34h]@2
  int v32; // [sp+4Ch] [bp-2Ch]@1

  v12 = a2;
  v13 = a1;
  Model::Model(a1);
  *(_DWORD *)v13 = &off_26E5560;
  sub_21E94B4((void **)&v32, "ghast");
  mce::MaterialPtr::MaterialPtr(
    (ModelPart *)((char *)v13 + 48),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v32);
  v14 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  }
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v13 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v13 + 280)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v13 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v13 + 720)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v13 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v13 + 1160)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v13 + 1380)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v13 + 1600)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v13 + 1820)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v13 + 2040)), 0, 0, 64, 32);
  Model::registerParts(v13, (ModelPart *)((char *)v13 + 60));
  *((_DWORD *)v13 + 7) = (char *)v13 + 48;
  sub_21E94B4((void **)&v31, "body");
  ModelPart::load((int)v13 + 60, (int)v12, (const void **)&v31, 0);
  v15 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v31 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = 0;
  do
    Util::toString<int,(void *)0,(void *)0>((void **)&v29, v16);
    v21 = sub_21E82D8((const void **)&v29, 0, (unsigned int)"tentacles_", (_BYTE *)0xA);
    v30 = (char *)*v21;
    *v21 = &unk_28898CC;
    ModelPart::load((int)v13 + 220 * v16 + 280, (int)v12, (const void **)&v30, 0);
    v22 = v30 - 12;
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v29 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    Model::registerParts(v13, (ModelPart *)((char *)v13 + 220 * v16++ + 280));
  while ( v16 < 9 );
  return v13;
}


AppPlatformListener *__fastcall GhastModel::~GhastModel(GhastModel *this)
{
  GhastModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5560;
  v2 = (GhastModel *)((char *)this + 48);
  ModelPart::~ModelPart((GhastModel *)((char *)this + 2040));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 1820));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((GhastModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}
