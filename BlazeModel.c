

BlazeModel *__fastcall BlazeModel::setupAnim(BlazeModel *this, float a2, float a3, float _R3, float a5, float a6, float a7)
{
  BlazeModel *v11; // r4@1
  float v16; // r1@1
  float v18; // r1@1
  float v23; // r1@1
  float v25; // r1@1
  float v30; // r1@1
  float v32; // r1@1
  float v37; // r1@1
  float v39; // r1@1
  float v44; // r1@1
  float v46; // r1@1
  float v51; // r1@1
  float v53; // r1@1
  float v58; // r1@1
  float v60; // r1@1
  float v65; // r1@1
  float v67; // r1@1
  float v72; // r1@1
  float v74; // r1@1
  float v79; // r1@1
  float v81; // r1@1
  float v86; // r1@1
  float v88; // r1@1
  float v93; // r1@1
  float v95; // r1@1
  BlazeModel *result; // r0@1

  __asm { VMOV.F32        S22, #0.25 }
  v11 = this;
  __asm { VMOV            S16, R3 }
  _R1 = &mce::Math::PI;
  __asm
  {
    VMUL.F32        S0, S16, S22
    VLDR            S18, [R1]
    VMOV            R0, S0
    VLDR            S0, =-0.1
    VMUL.F32        S30, S16, S0
    VMUL.F32        S20, S30, S18
  }
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::PI));
    VMOV            R5, S20
    VMOV.F32        S28, #-2.0
    VMOV            S0, R0
    VADD.F32        S0, S0, S28
    VSTR            S0, [R4,#0x4C]
  _R0 = mce::Math::cos(_R5, v16);
    VMOV.F32        S26, #9.0
    VMUL.F32        S0, S0, S26
    VSTR            S0, [R4,#0x48]
  _R0 = mce::Math::sin(_R5, v18);
    VMOV.F32        S24, #2.0
    VMOV.F32        S20, #0.5
    VMOV            S2, R0
    VMUL.F32        S2, S2, S26
    VADD.F32        S0, S16, S24
    VSTR            S2, [R4,#0x50]
    VMUL.F32        S0, S0, S22
    VMOV            R1, S0
    VADD.F32        S0, S30, S20
    VMUL.F32        S17, S18, S0
  _R0 = mce::Math::cos(_R1, *(float *)&_R1);
    VMOV            R5, S17
    VSTR            S0, [R4,#0x128]
  _R0 = mce::Math::cos(_R5, v23);
    VSTR            S0, [R4,#0x124]
  _R0 = mce::Math::sin(_R5, v25);
    VMOV.F32        S0, #4.0
    VMOV.F32        S2, #1.0
    VADD.F32        S0, S16, S0
    VADD.F32        S0, S30, S2
    VSTR            S2, [R4,#0x12C]
    VSTR            S0, [R4,#0x204]
  _R0 = mce::Math::cos(_R5, v30);
    VSTR            S0, [R4,#0x200]
  _R0 = mce::Math::sin(_R5, v32);
    VMOV.F32        S0, #6.0
    VMOV.F32        S2, #1.5
    VMUL.F32        S30, S18, S0
    VSTR            S2, [R4,#0x208]
    VMOV            R5, S30
    VSTR            S0, [R4,#0x2E0]
  _R0 = mce::Math::cos(_R5, v37);
    VSTR            S0, [R4,#0x2DC]
  _R0 = mce::Math::sin(_R5, v39);
    VMOV.F32        S0, #8.0
    VLDR            S2, =0.03
    VMUL.F32        S28, S16, S2
    VSTR            S2, [R4,#0x2E4]
    VADD.F32        S0, S28, S22
    VMUL.F32        S26, S0, S18
    VMOV            R5, S26
    VADD.F32        S0, S0, S24
    VSTR            S0, [R4,#0x3BC]
  _R0 = mce::Math::cos(_R5, v44);
    VMOV.F32        S26, #7.0
    VSTR            S0, [R4,#0x3B8]
  _R0 = mce::Math::sin(_R5, v46);
    VMOV.F32        S0, #10.0
    VMOV.F32        S2, #0.75
    VADD.F32        S0, S28, S2
    VSTR            S2, [R4,#0x3C0]
    VSTR            S0, [R0]
  _R0 = mce::Math::cos(_R5, v51);
  _R0 = mce::Math::sin(_R5, v53);
    VMOV.F32        S0, #12.0
    VMOV.F32        S2, #1.25
    VADD.F32        S30, S16, S0
    VMUL.F32        S0, S30, S22
    VSTR            S2, [R0]
  _R0 = mce::Math::cos(_R5, v58);
  _R0 = mce::Math::sin(_R5, v60);
    VMOV.F32        S0, #14.0
    VMOV.F32        S2, #1.75
    VMUL.F32        S22, S18, S0
    VMOV            R5, S22
  _R0 = mce::Math::cos(_R5, v65);
  _R0 = mce::Math::sin(_R5, v67);
    VMUL.F32        S0, S30, S20
    VLDR            S2, =0.05
    VMUL.F32        S24, S16, S2
    VLDR            S0, =0.15
    VSUB.F32        S0, S0, S24
    VMOV.F32        S26, #11.0
    VADD.F32        S0, S0, S26
  _R0 = mce::Math::cos(_R5, v72);
    VMOV.F32        S22, #5.0
  _R0 = mce::Math::sin(_R5, v74);
    VMOV.F32        S0, #13.5
    VMUL.F32        S2, S2, S22
    VMUL.F32        S0, S0, S20
    VLDR            S0, =0.65
    VMUL.F32        S28, S18, S0
    VMOV            R5, S28
  _R0 = mce::Math::cos(_R5, v79);
  _R0 = mce::Math::sin(_R5, v81);
    VMOV.F32        S0, #15.0
    VLDR            S0, =1.15
  _R0 = mce::Math::cos(_R5, v86);
  _R0 = mce::Math::sin(_R5, v88);
    VLDR            S0, =16.5
    VLDR            S0, =1.65
    VMUL.F32        S16, S18, S0
    VMOV            R5, S16
  _R0 = mce::Math::cos(_R5, v93);
  _R0 = mce::Math::sin(_R5, v95);
    VLDR            S2, [SP,#0x50+arg_0]
    VLDR            S6, [SP,#0x50+arg_4]
  _R1 = &mce::Math::DEGRAD;
    VLDR            S4, [R1]
    VMUL.F32        S2, S4, S2
    VMUL.F32        S4, S4, S6
  result = (BlazeModel *)((char *)v11 + 2748);
  __asm { VSTR            S4, [R0] }
  return result;
}


void __fastcall BlazeModel::~BlazeModel(BlazeModel *this)
{
  BlazeModel::~BlazeModel(this);
}


AppPlatformListener *__fastcall BlazeModel::~BlazeModel(BlazeModel *this)
{
  BlazeModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5244;
  v2 = (BlazeModel *)((char *)this + 48);
  ModelPart::~ModelPart((BlazeModel *)((char *)this + 2712));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 2492));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 2272));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 2052));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 1832));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 1612));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 1392));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 1172));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 952));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 732));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 512));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 292));
  ModelPart::~ModelPart((BlazeModel *)((char *)v1 + 72));
  mce::MaterialPtr::~MaterialPtr((BlazeModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall BlazeModel::~BlazeModel(BlazeModel *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = BlazeModel::~BlazeModel(this);
  j_j_j__ZdlPv_5((void *)v1);
}


signed __int64 __fastcall BlazeModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r8@1
  int v15; // r5@1
  __int64 v17; // r0@1
  unsigned __int64 v18; // r0@1
  __int64 v19; // r0@1
  __int64 v20; // r0@1
  __int64 v21; // r0@1
  __int64 v22; // r0@1
  __int64 v23; // r0@1
  __int64 v24; // r0@1
  __int64 v25; // r0@1
  __int64 v26; // r0@1
  __int64 v27; // r0@1
  __int64 v28; // r0@1
  __int64 v29; // r0@1

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
  LODWORD(v17) = v9 + 2712;
  v18 = __PAIR__(v15, ModelPart::render(v17, v9, _R6, 0, 0));
  ModelPart::render(__PAIR__(v15, v14), v9, _R6, 0, 0);
  LODWORD(v19) = v9 + 292;
  v20 = __PAIR__(v15, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 512;
  v21 = __PAIR__(v15, ModelPart::render(v20, v9, _R6, 0, 0));
  LODWORD(v21) = v9 + 732;
  v22 = __PAIR__(v15, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 952;
  v23 = __PAIR__(v15, ModelPart::render(v22, v9, _R6, 0, 0));
  LODWORD(v23) = v9 + 1172;
  v24 = __PAIR__(v15, ModelPart::render(v23, v9, _R6, 0, 0));
  LODWORD(v24) = v9 + 1392;
  v25 = __PAIR__(v15, ModelPart::render(v24, v9, _R6, 0, 0));
  LODWORD(v25) = v9 + 1612;
  v26 = __PAIR__(v15, ModelPart::render(v25, v9, _R6, 0, 0));
  LODWORD(v26) = v9 + 1832;
  v27 = __PAIR__(v15, ModelPart::render(v26, v9, _R6, 0, 0));
  LODWORD(v27) = v9 + 2052;
  v28 = __PAIR__(v15, ModelPart::render(v27, v9, _R6, 0, 0));
  LODWORD(v28) = v9 + 2272;
  v29 = __PAIR__(v15, ModelPart::render(v28, v9, _R6, 0, 0));
  LODWORD(v29) = v9 + 2492;
  return __PAIR__(v15, ModelPart::render(v29, v9, _R6, 0, 0));
}


signed int __fastcall BlazeModel::modelVersion(BlazeModel *this)
{
  return 8;
}


ModelPart *__fastcall BlazeModel::BlazeModel(ModelPart *a1, ModelPart *a2, ModelPart *a3, ModelPart *a4, ModelPart *a5, ModelPart *a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, char a18)
{
  ModelPart *v18; // r5@1
  ModelPart *v19; // r4@1
  void *v20; // r0@1
  void *v21; // r0@2
  signed int v22; // r6@3
  unsigned int *v23; // r2@4
  signed int v24; // r1@6
  unsigned int *v25; // r2@8
  signed int v26; // r1@10
  const void **v27; // r0@20
  char *v28; // r0@20
  void *v29; // r0@21
  void *v30; // r0@23
  unsigned int *v32; // r2@25
  signed int v33; // r1@27
  unsigned int *v34; // r2@29
  signed int v35; // r1@31
  unsigned int *v36; // r2@41
  signed int v37; // r1@43
  ModelPart *v38; // [sp+38h] [bp-58h]@3
  mce::MaterialPtr *v39; // [sp+40h] [bp-50h]@2
  int v40; // [sp+4Ch] [bp-44h]@23
  int v41; // [sp+50h] [bp-40h]@8
  char *v42; // [sp+54h] [bp-3Ch]@4
  int v43; // [sp+5Ch] [bp-34h]@2
  int v44; // [sp+64h] [bp-2Ch]@1

  v18 = a2;
  v19 = a1;
  Model::Model(a1);
  *(_DWORD *)v19 = &off_26E5244;
  sub_21E94B4((void **)&v44, "blaze_head");
  mce::MaterialPtr::MaterialPtr(
    (ModelPart *)((char *)v19 + 48),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v44);
  v20 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  }
  sub_21E94B4((void **)&v43, "blaze_body");
  v39 = mce::MaterialPtr::MaterialPtr(
          (ModelPart *)((char *)v19 + 60),
          (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
          &v43);
  v21 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v43 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 72)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 292)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 512)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 732)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 952)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 1172)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 1392)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 1612)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 1832)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 2052)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 2272)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 2492)), 0, 0, 64, 32);
  v38 = (ModelPart *)((char *)v19 + 2712);
  ModelPart::ModelPart(COERCE_FLOAT((ModelPart *)((char *)v19 + 2712)), 0, 0, 64, 32);
  v22 = 0;
  *((_DWORD *)v19 + 7) = (char *)v19 + 48;
  do
    Util::toString<int,(void *)0,(void *)0>((void **)&v41, v22);
    v27 = sub_21E82D8((const void **)&v41, 0, (unsigned int)"upperBodyParts", (_BYTE *)0xE);
    v42 = (char *)*v27;
    *v27 = &unk_28898CC;
    ModelPart::load((int)v19 + 220 * v22 + 72, (int)v18, (const void **)&v42, 0);
    v28 = v42 - 12;
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v42 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    v29 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v41 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    Model::registerParts(v19, (ModelPart *)((char *)v19 + 220 * v22++ + 72));
  while ( v22 < 12 );
  sub_21E94B4((void **)&v40, "head");
  ModelPart::load((int)v38, (int)v18, (const void **)&v40, 0);
  v30 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v40 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  *((_DWORD *)v19 + 700) = v39;
  Model::registerParts(v19, v38);
  return v19;
}
