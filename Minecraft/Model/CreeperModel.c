

void __fastcall CreeperModel::~CreeperModel(CreeperModel *this)
{
  CreeperModel::~CreeperModel(this);
}


int __fastcall CreeperModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r5@1
  __int64 v18; // r0@3
  __int64 v19; // r0@3
  __int64 v20; // r0@3
  __int64 v21; // r0@3
  __int64 v22; // r0@3
  char v24; // [sp+10h] [bp-28h]@1

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
  MatrixStack::push((MatrixStack *)&v24, *(_DWORD *)(v14 + 16) + 16);
  if ( *(_BYTE *)(v9 + 24) )
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v24);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [R0]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0xC]
      VLDR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x10]
      VLDR            S2, [R0,#0x14]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VSTR            S2, [R0,#0x20]
      VLDR            S2, [R0,#0x24]
      VSTR            S2, [R0,#0x24]
      VLDR            S2, [R0,#0x28]
      VSTR            S2, [R0,#0x28]
      VLDR            S2, [R0,#0x2C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x2C]
    }
    LODWORD(_R0) = MatrixStack::MatrixStackRef::operator->((int)&v24);
      VMOV.F32        S0, #24.0
      VLDR            S4, [R0,#0x18]
      VLDR            S6, [R0,#0x1C]
      VLDR            S8, [R0,#0x10]
      VLDR            S10, [R0,#0x34]
      VLDR            S12, [R0,#0x38]
      VLDR            S14, [R0,#0x3C]
      VMUL.F32        S0, S16, S0
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
  __asm { VMOV            R6, S16 }
  LODWORD(_R0) = v9 + 60;
  v18 = __PAIR__(v14, ModelPart::render(_R0, v9, _R6, 0, 0));
  LODWORD(v18) = v9 + 280;
  v19 = __PAIR__(v14, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = v9 + 500;
  v20 = __PAIR__(v14, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 720;
  v21 = __PAIR__(v14, ModelPart::render(v20, v9, _R6, 0, 0));
  LODWORD(v21) = v9 + 940;
  v22 = __PAIR__(v14, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 1160;
  ModelPart::render(v22, v9, _R6, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v24);
}


_QWORD *__fastcall CreeperModel::CreeperModel(_QWORD *a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r8@1
  _QWORD *v5; // r4@1
  const char *v6; // r1@1
  void *v7; // r0@3
  int v8; // r6@4
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  unsigned int *v26; // r2@31
  signed int v27; // r1@33
  unsigned int *v28; // r2@35
  signed int v29; // r1@37
  ModelPart *v30; // [sp+8h] [bp-68h]@4
  int v31; // [sp+14h] [bp-5Ch]@9
  int v32; // [sp+1Ch] [bp-54h]@8
  int v33; // [sp+24h] [bp-4Ch]@7
  int v34; // [sp+2Ch] [bp-44h]@6
  int v35; // [sp+34h] [bp-3Ch]@5
  int v36; // [sp+3Ch] [bp-34h]@4
  int v37; // [sp+44h] [bp-2Ch]@3

  v3 = a3;
  v4 = a2;
  v5 = a1;
  Model::Model(a1);
  v6 = "charged_creeper";
  if ( !v3 )
    v6 = "creeper";
  *(_DWORD *)v5 = &off_26E82A4;
  sub_21E94B4((void **)&v37, v6);
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v5 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v37);
  v7 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 35), 0, 0, 64, 32);
  v30 = (ModelPart *)ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 500)), 0, 0, 64, 32);
  v8 = (int)(v5 + 90);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 145), 0, 0, 64, 32);
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 60));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 35));
  Model::registerParts((Model *)v5, v30);
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 90));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 940));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 145));
  *((_DWORD *)v5 + 7) = v5 + 6;
  sub_21E94B4((void **)&v36, "head");
  ModelPart::load((int)v5 + 60, v4, (const void **)&v36, 0);
  v9 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v36 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v8 = (int)(v5 + 90);
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v35, "body");
  ModelPart::load((int)(v5 + 35), v4, (const void **)&v35, 0);
  v10 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v35 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v34, "leg0");
  ModelPart::load((int)v30, v4, (const void **)&v34, 0);
  v11 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v34 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v33, "leg1");
  ModelPart::load(v8, v4, (const void **)&v33, 0);
  v12 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v33 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v32, "leg2");
  ModelPart::load((int)v5 + 940, v4, (const void **)&v32, 0);
  v13 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v32 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v31, "leg3");
  ModelPart::load((int)(v5 + 145), v4, (const void **)&v31, 0);
  v14 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v31 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return v5;
}


void __fastcall CreeperModel::~CreeperModel(CreeperModel *this)
{
  CreeperModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E82A4;
  v2 = (CreeperModel *)((char *)this + 48);
  ModelPart::~ModelPart((CreeperModel *)((char *)this + 1160));
  ModelPart::~ModelPart((CreeperModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((CreeperModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((CreeperModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((CreeperModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((CreeperModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


AppPlatformListener *__fastcall CreeperModel::~CreeperModel(CreeperModel *this)
{
  CreeperModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E82A4;
  v2 = (CreeperModel *)((char *)this + 48);
  ModelPart::~ModelPart((CreeperModel *)((char *)this + 1160));
  ModelPart::~ModelPart((CreeperModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((CreeperModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((CreeperModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((CreeperModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((CreeperModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


CreeperModel *__fastcall CreeperModel::setupAnim(CreeperModel *this, float _R1, float a3, float a4, float a5, float a6, float a7)
{
  CreeperModel *v11; // r5@1
  CreeperModel *result; // r0@1

  __asm
  {
    VMOV            S2, R1
    VLDR            S0, =0.6662
  }
  v11 = this;
    VMUL.F32        S0, S2, S0
    VLDR            S4, [SP,#0x10+arg_4]
  _R4 = a3;
  _R1 = &mce::Math::DEGRAD;
    VLDR            S2, [R1]
    VMOV            R0, S0
    VLDR            S0, [SP,#0x10+arg_0]
    VMUL.F32        S2, S2, S4
    VSTR            S2, [R5,#0x60]
    VSTR            S0, [R5,#0x64]
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::DEGRAD));
    VLDR            S0, =1.4
    VMOV            S2, R4
    VMOV            S2, R0
  result = (CreeperModel *)((char *)v11 + 1196);
    VMUL.F32        S4, S0, S2
    VNMUL.F32       S0, S0, S2
    VSTR            S4, [R5,#0x218]
    VSTR            S0, [R5,#0x2F4]
    VSTR            S0, [R5,#0x3D0]
    VSTR            S4, [R0]
  return result;
}
