

void __fastcall SnowGolemModel::~SnowGolemModel(SnowGolemModel *this)
{
  SnowGolemModel::~SnowGolemModel(this);
}


signed __int64 __fastcall SnowGolemModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r7@1
  int v15; // r8@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  __int64 v19; // r0@1
  __int64 v20; // r0@1

  v9 = a1;
  __asm
  {
    VLDR            S0, [SP,#0x30+arg_C]
    VLDR            S2, [SP,#0x30+arg_8]
  }
  v14 = a1 + 72;
  v15 = a2;
    VLDR            S16, [SP,#0x30+arg_10]
    VSTR            S2, [SP,#0x30+var_30]
    VSTR            S0, [SP,#0x30+var_2C]
    VSTR            S16, [SP,#0x30+var_28]
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R6, S16 }
  ModelPart::render(__PAIR__(v15, v14), v9, _R6, 0, 0);
  LODWORD(v17) = v9 + 292;
  v18 = __PAIR__(v15, ModelPart::render(v17, v9, _R6, 0, 0));
  LODWORD(v18) = v9 + 512;
  v19 = __PAIR__(v15, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = v9 + 732;
  v20 = __PAIR__(v15, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 952;
  return __PAIR__(v15, ModelPart::render(v20, v9, _R6, 0, 0));
}


void __fastcall SnowGolemModel::~SnowGolemModel(SnowGolemModel *this)
{
  SnowGolemModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5E00;
  v2 = (SnowGolemModel *)((char *)this + 48);
  ModelPart::~ModelPart((SnowGolemModel *)((char *)this + 952));
  ModelPart::~ModelPart((SnowGolemModel *)((char *)v1 + 732));
  ModelPart::~ModelPart((SnowGolemModel *)((char *)v1 + 512));
  ModelPart::~ModelPart((SnowGolemModel *)((char *)v1 + 292));
  ModelPart::~ModelPart((SnowGolemModel *)((char *)v1 + 72));
  mce::MaterialPtr::~MaterialPtr((SnowGolemModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall SnowGolemModel::SnowGolemModel(_QWORD *a1, int a2)
{
  int v2; // r8@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  int v11; // r3@8
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  unsigned int *v23; // r2@29
  signed int v24; // r1@31
  unsigned int *v25; // r2@33
  signed int v26; // r1@35
  int v27; // [sp+14h] [bp-5Ch]@7
  int v28; // [sp+1Ch] [bp-54h]@6
  int v29; // [sp+24h] [bp-4Ch]@5
  int v30; // [sp+2Ch] [bp-44h]@4
  int v31; // [sp+34h] [bp-3Ch]@3
  int v32; // [sp+3Ch] [bp-34h]@2
  int v33; // [sp+44h] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E5E00;
  sub_21E94B4((void **)&v33, "snow_golem");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v33);
  v4 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v32, "snow_golem_pumpkin");
    (mce::MaterialPtr *)((char *)v3 + 60),
    &v32);
  v5 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v32 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 9), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 292)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 64), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 732)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 119), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 64));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 732));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 119));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 9));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 292));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_21E94B4((void **)&v31, "head");
  ModelPart::load((int)(v3 + 64), v2, (const void **)&v31, 0);
  v6 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v31 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v30, "arm1");
  ModelPart::load((int)v3 + 732, v2, (const void **)&v30, 0);
  v7 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v30 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v29, "arm2");
  ModelPart::load((int)(v3 + 119), v2, (const void **)&v29, 0);
  v8 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v29 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v28, "piece1");
  ModelPart::load((int)(v3 + 9), v2, (const void **)&v28, 0);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v28 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v27, "piece2");
  ModelPart::load((int)v3 + 292, v2, (const void **)&v27, 0);
  v10 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v27 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (int)(v3 + 1);
  *(_DWORD *)v11 = 0;
  *(_DWORD *)(v11 + 4) = -1104947446;
  *(_DWORD *)(v11 + 8) = 1045220557;
  return v3;
}


int __fastcall SnowGolemModel::setupAnim(SnowGolemModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  SnowGolemModel *v11; // r4@1
  mce::Math *v15; // r0@1
  float v16; // r1@1
  float v18; // r1@1
  int result; // r0@1

  __asm { VMOV.F32        S0, #0.25 }
  v11 = this;
  __asm
  {
    VLDR            S2, [SP,#0x10+arg_0]
    VLDR            S4, =50.0
  }
  _R0 = &mce::Math::DEGRAD;
    VMUL.F32        S0, S2, S0
    VLDR            S6, [R0]
    VMUL.F32        S4, S6, S4
    VMUL.F32        S2, S6, S2
    VMUL.F32        S0, S0, S6
    VMOV            R1, S4
    VMOV            R0, S0
    VLDR            S0, [SP,#0x10+arg_4]
    VMUL.F32        S0, S6, S0
    VSTR            S0, [R4,#0x224]
    VSTR            S2, [R4,#0x228]
  v15 = (mce::Math *)mce::Math::wrapRadians(_R0, _R1, a3);
  *((_DWORD *)v11 + 28) = v15;
  _R5 = mce::Math::sin(v15, v16);
  result = mce::Math::cos(*((mce::Math **)v11 + 28), v18);
    VMOV.F32        S0, #5.0
    VMOV.F32        S2, #-5.0
  *((_DWORD *)v11 + 194) = 1065353216;
  *((_DWORD *)v11 + 249) = -1082130432;
  __asm { VMOV            S10, R5 }
  _R2 = *((_DWORD *)v11 + 28);
  __asm { VMOV            S8, R0 }
  _R1 = &mce::Math::PI;
  *((_DWORD *)v11 + 193) = _R2;
    VMOV            S4, R2
    VLDR            S6, [R1]
    VMUL.F32        S12, S10, S2
    VADD.F32        S4, S6, S4
    VMUL.F32        S6, S8, S0
    VMUL.F32        S2, S8, S2
    VMUL.F32        S0, S10, S0
    VSTR            S4, [R4,#0x3E0]
    VSTR            S6, [R4,#0x2DC]
    VSTR            S12, [R4,#0x2E4]
    VSTR            S2, [R4,#0x3B8]
    VSTR            S0, [R4,#0x3C0]
  return result;
}


AppPlatformListener *__fastcall SnowGolemModel::~SnowGolemModel(SnowGolemModel *this)
{
  SnowGolemModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5E00;
  v2 = (SnowGolemModel *)((char *)this + 48);
  ModelPart::~ModelPart((SnowGolemModel *)((char *)this + 952));
  ModelPart::~ModelPart((SnowGolemModel *)((char *)v1 + 732));
  ModelPart::~ModelPart((SnowGolemModel *)((char *)v1 + 512));
  ModelPart::~ModelPart((SnowGolemModel *)((char *)v1 + 292));
  ModelPart::~ModelPart((SnowGolemModel *)((char *)v1 + 72));
  mce::MaterialPtr::~MaterialPtr((SnowGolemModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}
