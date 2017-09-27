

unsigned int __fastcall ChickenModel::setupAnim(ChickenModel *this, float _R1, float a3, float a4, float a5, float a6, float a7)
{
  ChickenModel *v7; // r5@1
  float v13; // r4@1
  unsigned int result; // r0@1

  v7 = this;
  __asm
  {
    VMOV            S8, R1
    VLDR            S4, =0.6662
    VLDR            S0, [SP,#0x10+arg_4]
    VLDR            S2, [SP,#0x10+arg_0]
    VMUL.F32        S4, S8, S4
  }
  _R0 = &mce::Math::RADDEG;
  __asm { VLDR            S10, =90.0 }
  v13 = a4;
  _R6 = a3;
    VLDR            S6, [R0]
    VDIV.F32        S0, S0, S6
    VDIV.F32        S2, S2, S6
    VMOV            R0, S4
    VSTR            S0, [R5,#0x6C]
    VDIV.F32        S6, S10, S6
    VSTR            S2, [R5,#0x70]
    VSTR            S0, [R1]
    VSTR            S2, [R1]
    VSTR            S6, [R5,#0x224]
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT((ChickenModel *)((char *)v7 + 1872)));
    VLDR            S0, =1.4
    VMOV            S2, R6
    VMUL.F32        S0, S2, S0
    VMOV            S2, R0
  result = LODWORD(v13) ^ 0x80000000;
    VMUL.F32        S4, S0, S2
    VNMUL.F32       S0, S0, S2
    VSTR            S4, [R5,#0x300]
    VSTR            S0, [R5,#0x3DC]
  *((float *)v7 + 304) = v13;
  *((_DWORD *)v7 + 359) = LODWORD(v13) ^ 0x80000000;
  return result;
}


void __fastcall ChickenModel::~ChickenModel(ChickenModel *this)
{
  ChickenModel::~ChickenModel(this);
}


AppPlatformListener *__fastcall ChickenModel::~ChickenModel(ChickenModel *this)
{
  ChickenModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E52F4;
  v2 = (ChickenModel *)((char *)this + 48);
  ModelPart::~ModelPart((ChickenModel *)((char *)this + 1832));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 1612));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 1392));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 1172));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 952));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 732));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 512));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 292));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 72));
  mce::MaterialPtr::~MaterialPtr((ChickenModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall ChickenModel::~ChickenModel(ChickenModel *this)
{
  ChickenModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E52F4;
  v2 = (ChickenModel *)((char *)this + 48);
  ModelPart::~ModelPart((ChickenModel *)((char *)this + 1832));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 1612));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 1392));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 1172));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 952));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 732));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 512));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 292));
  ModelPart::~ModelPart((ChickenModel *)((char *)v1 + 72));
  mce::MaterialPtr::~MaterialPtr((ChickenModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


signed __int64 __fastcall ChickenModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r5@1
  __int64 v15; // r0@1
  __int64 v19; // r0@2
  __int64 v20; // r0@2
  __int64 v21; // r0@2
  __int64 v22; // r0@2
  __int64 v24; // r0@3
  __int64 v25; // r0@3
  __int64 v27; // r0@4
  __int64 v28; // r0@4
  __int64 v29; // r0@4
  __int64 v30; // r0@4
  char v32; // [sp+10h] [bp-28h]@2

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
  if ( *(_BYTE *)(v9 + 24) )
    MatrixStack::push((MatrixStack *)&v32, *(_DWORD *)(v14 + 16) + 16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v32);
    __asm
    {
      VLDR            S0, [R0]
      VADD.F32        S0, S0, S0
      VSTR            S0, [R0]
      VLDR            S0, [R0,#4]
      VSTR            S0, [R0,#4]
      VLDR            S0, [R0,#8]
      VSTR            S0, [R0,#8]
      VLDR            S0, [R0,#0xC]
      VSTR            S0, [R0,#0xC]
      VLDR            S0, [R0,#0x10]
      VSTR            S0, [R0,#0x10]
      VLDR            S0, [R0,#0x14]
      VSTR            S0, [R0,#0x14]
      VLDR            S0, [R0,#0x18]
      VSTR            S0, [R0,#0x18]
      VLDR            S0, [R0,#0x1C]
      VSTR            S0, [R0,#0x1C]
      VLDR            S0, [R0,#0x20]
      VSTR            S0, [R0,#0x20]
      VLDR            S0, [R0,#0x24]
      VSTR            S0, [R0,#0x24]
      VLDR            S0, [R0,#0x28]
      VSTR            S0, [R0,#0x28]
      VLDR            S0, [R0,#0x2C]
      VSTR            S0, [R0,#0x2C]
    }
      VMOV.F32        S0, #-7.0
      VLDR            S4, [R0,#0x14]
      VADD.F32        S2, S16, S16
      VLDR            S10, [R0,#0x20]
      VLDR            S12, [R0,#0x24]
      VMOV            R6, S16
      VLDR            S14, [R0,#0x28]
      VLDR            S6, [R0,#0x18]
      VLDR            S8, [R0,#0x1C]
      VLDR            S1, [R0,#0x2C]
      VMUL.F32        S0, S16, S0
      VLDR            S3, [R0,#0x10]
      VMUL.F32        S12, S12, S2
      VMUL.F32        S10, S10, S2
      VMUL.F32        S14, S14, S2
      VMUL.F32        S2, S1, S2
      VMUL.F32        S4, S4, S0
      VMUL.F32        S6, S6, S0
      VMUL.F32        S3, S3, S0
      VMUL.F32        S0, S8, S0
      VADD.F32        S4, S12, S4
      VLDR            S12, [R0,#0x38]
      VADD.F32        S6, S14, S6
      VLDR            S14, [R0,#0x3C]
      VADD.F32        S8, S10, S3
      VLDR            S10, [R0,#0x34]
      VADD.F32        S0, S2, S0
      VLDR            S2, [R0,#0x30]
      VADD.F32        S4, S4, S10
      VADD.F32        S6, S6, S12
      VADD.F32        S2, S8, S2
      VADD.F32        S0, S0, S14
      VSTR            S2, [R0,#0x30]
      VSTR            S4, [R0,#0x34]
      VSTR            S6, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    LODWORD(v19) = v9 + 72;
    v20 = __PAIR__(v14, ModelPart::render(v19, v9, _R6, 0, 0));
    LODWORD(v20) = v9 + 1612;
    v21 = __PAIR__(v14, ModelPart::render(v20, v9, _R6, 0, 0));
    HIDWORD(v21) = v14;
    LODWORD(v21) = v9 + 1832;
    ModelPart::render(v21, v9, _R6, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v32);
  else
    __asm { VMOV            R6, S16 }
    LODWORD(v15) = v9 + 72;
    v24 = __PAIR__(v14, ModelPart::render(v15, v9, _R6, 0, 0));
    LODWORD(v24) = v9 + 1612;
    v25 = __PAIR__(v14, ModelPart::render(v24, v9, _R6, 0, 0));
    LODWORD(v25) = v9 + 1832;
    v22 = __PAIR__(v14, ModelPart::render(v25, v9, _R6, 0, 0));
  __asm { VMOV            R6, S16 }
  LODWORD(v22) = v9 + 512;
  v27 = __PAIR__(v14, ModelPart::render(v22, v9, _R6, 0, 0));
  LODWORD(v27) = v9 + 732;
  v28 = __PAIR__(v14, ModelPart::render(v27, v9, _R6, 0, 0));
  LODWORD(v28) = v9 + 952;
  v29 = __PAIR__(v14, ModelPart::render(v28, v9, _R6, 0, 0));
  LODWORD(v29) = v9 + 1172;
  v30 = __PAIR__(v14, ModelPart::render(v29, v9, _R6, 0, 0));
  LODWORD(v30) = v9 + 1392;
  return __PAIR__(v14, ModelPart::render(v30, v9, _R6, 0, 0));
}


_QWORD *__fastcall ChickenModel::ChickenModel(_QWORD *a1, int a2)
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
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  unsigned int *v19; // r2@20
  signed int v20; // r1@22
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  unsigned int *v23; // r2@28
  signed int v24; // r1@30
  unsigned int *v25; // r2@32
  signed int v26; // r1@34
  unsigned int *v27; // r2@36
  signed int v28; // r1@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  unsigned int *v31; // r2@44
  signed int v32; // r1@46
  unsigned int *v33; // r2@48
  signed int v34; // r1@50
  int v35; // [sp+8h] [bp-90h]@3
  int v36; // [sp+24h] [bp-74h]@10
  int v37; // [sp+2Ch] [bp-6Ch]@9
  int v38; // [sp+34h] [bp-64h]@8
  int v39; // [sp+3Ch] [bp-5Ch]@7
  int v40; // [sp+44h] [bp-54h]@6
  int v41; // [sp+4Ch] [bp-4Ch]@5
  int v42; // [sp+54h] [bp-44h]@4
  int v43; // [sp+5Ch] [bp-3Ch]@3
  int v44; // [sp+64h] [bp-34h]@2
  int v45; // [sp+6Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E52F4;
  sub_21E94B4((void **)&v45, "chicken");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v45);
  v4 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v45 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v44, "chicken_legs");
    (mce::MaterialPtr *)((char *)v3 + 60),
    &v44);
  v5 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v44 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 9), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 292)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 64), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 732)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 119), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1172)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 174), 0, 0, 64, 32);
  v35 = (int)v3 + 60;
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1612)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 229), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 9));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1612));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 229));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 64));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 732));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 119));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1172));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 174));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_21E94B4((void **)&v43, "head");
  ModelPart::load((int)(v3 + 9), v2, (const void **)&v43, 0);
  v6 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v43 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v42, "beak");
  ModelPart::load((int)v3 + 1612, v2, (const void **)&v42, 0);
  v7 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v42 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v41, "comb");
  ModelPart::load((int)(v3 + 229), v2, (const void **)&v41, 0);
  v8 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v41 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v40, "body");
  ModelPart::load((int)(v3 + 64), v2, (const void **)&v40, 0);
  v9 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v40 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v39, "leg0");
  ModelPart::load((int)v3 + 732, v2, (const void **)&v39, 0);
  v10 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v39 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v38, "leg1");
  ModelPart::load((int)(v3 + 119), v2, (const void **)&v38, 0);
  v11 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v38 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v37, "wing0");
  ModelPart::load((int)v3 + 1172, v2, (const void **)&v37, 0);
  v12 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v37 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v36, "wing1");
  ModelPart::load((int)(v3 + 174), v2, (const void **)&v36, 0);
  v13 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v36 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  *((_DWORD *)v3 + 205) = v35;
  *((_DWORD *)v3 + 260) = v35;
  *((_DWORD *)v3 + 2) = 0;
  *((_DWORD *)v3 + 3) = -1085485875;
  *((_DWORD *)v3 + 4) = 1047904911;
  return v3;
}
