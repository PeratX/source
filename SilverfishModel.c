

int __fastcall SilverfishModel::SilverfishModel(SilverfishModel *this, const GeometryPtr *a2, ModelPart *a3, ModelPart *a4, ModelPart *a5, ModelPart *a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, char a16)
{
  return SilverfishModel::SilverfishModel(
           (int)this,
           (int)a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16);
}


signed __int64 __fastcall SilverfishModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r5@1
  __int64 v16; // r0@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  __int64 v19; // r0@1
  __int64 v20; // r0@1
  __int64 v21; // r0@1
  __int64 v22; // r0@1
  __int64 v23; // r0@1
  __int64 v24; // r0@1
  __int64 v25; // r0@1

  v9 = a1;
  __asm { VLDR            S0, [SP,#0x30+arg_C] }
  v14 = a2;
  __asm
  {
    VLDR            S2, [SP,#0x30+arg_8]
    VLDR            S16, [SP,#0x30+arg_10]
    VSTR            S2, [SP,#0x30+var_30]
    VSTR            S0, [SP,#0x30+var_2C]
    VSTR            S16, [SP,#0x30+var_28]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R6, S16 }
  LODWORD(v16) = *(_DWORD *)(v9 + 72);
  v17 = __PAIR__(v14, ModelPart::render(v16, v9, _R6, 0, 0));
  LODWORD(v17) = *(_DWORD *)(v9 + 76);
  v18 = __PAIR__(v14, ModelPart::render(v17, v9, _R6, 0, 0));
  LODWORD(v18) = *(_DWORD *)(v9 + 80);
  v19 = __PAIR__(v14, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = *(_DWORD *)(v9 + 84);
  v20 = __PAIR__(v14, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = *(_DWORD *)(v9 + 88);
  v21 = __PAIR__(v14, ModelPart::render(v20, v9, _R6, 0, 0));
  LODWORD(v21) = *(_DWORD *)(v9 + 92);
  v22 = __PAIR__(v14, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = *(_DWORD *)(v9 + 96);
  v23 = __PAIR__(v14, ModelPart::render(v22, v9, _R6, 0, 0));
  LODWORD(v23) = *(_DWORD *)(v9 + 100);
  v24 = __PAIR__(v14, ModelPart::render(v23, v9, _R6, 0, 0));
  LODWORD(v24) = *(_DWORD *)(v9 + 104);
  v25 = __PAIR__(v14, ModelPart::render(v24, v9, _R6, 0, 0));
  LODWORD(v25) = *(_DWORD *)(v9 + 108);
  return __PAIR__(v14, ModelPart::render(v25, v9, _R6, 0, 0));
}


int __fastcall SilverfishModel::setupAnim(SilverfishModel *this, float a2, float a3, float _R3, float a5, float a6, float a7)
{
  SilverfishModel *v7; // r8@1
  char *v12; // r6@1
  signed int v15; // r4@1
  int v20; // t1@4
  float v21; // r1@4
  int v23; // r0@4
  int v24; // r0@6
  int v25; // r1@6
  int v26; // r0@6
  int v27; // r1@6
  int result; // r0@6

  v7 = this;
  __asm
  {
    VLDR            S0, =0.9
    VMOV            S2, R3
  }
  v12 = (char *)this + 72;
    VMUL.F32        S16, S2, S0
    VLDR            S20, =0.15
  _R0 = &mce::Math::PI;
  _R7 = 0;
  __asm { VLDR            S22, =0.05 }
  v15 = 2;
    VLDR            S24, =0.2
    VLDR            S18, [R0]
  do
    __asm { VMOV            S0, R7 }
    _R0 = _R7 - 2;
    __asm { VCVT.F32.S32    S0, S0 }
    if ( _NF ^ _VF )
      _R0 = v15;
    _R1 = _R0 + 1;
    __asm
    {
      VMOV            S2, R1
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S0, S20
      VMUL.F32        S0, S18, S0
      VADD.F32        S0, S0, S16
      VMOV            R5, S0
      VMUL.F32        S0, S2, S22
      VMOV            S2, R0
      VMUL.F32        S26, S0, S18
      VMUL.F32        S28, S2, S24
    }
    _R0 = mce::Math::cos(_R5, COERCE_FLOAT(_R0 + 1));
    __asm { VMOV            S0, R0 }
    v20 = *(_DWORD *)&v12[4 * _R7];
      VMUL.F32        S0, S26, S0
      VMUL.F32        S26, S28, S18
      VSTR            S0, [R0,#0x28]
    _R0 = mce::Math::sin(_R5, v21);
    v23 = *(_DWORD *)&v12[4 * _R7++];
    __asm { VMUL.F32        S0, S26, S0 }
    --v15;
    __asm { VSTR            S0, [R0] }
  while ( !_ZF );
  *(_DWORD *)(*((_DWORD *)v7 + 25) + 40) = *(_DWORD *)(*((_DWORD *)v7 + 20) + 40);
  v24 = *((_DWORD *)v7 + 22);
  v25 = *((_DWORD *)v7 + 26);
  *(_DWORD *)(v25 + 40) = *(_DWORD *)(v24 + 40);
  *(_DWORD *)v25 = *(_DWORD *)v24;
  v26 = *((_DWORD *)v7 + 19);
  v27 = *((_DWORD *)v7 + 27);
  *(_DWORD *)(v27 + 40) = *(_DWORD *)(v26 + 40);
  result = *(_DWORD *)v26;
  *(_DWORD *)v27 = result;
  return result;
}


int __fastcall SilverfishModel::SilverfishModel(int a1, int a2, ModelPart *a3, ModelPart *a4, ModelPart *a5, ModelPart *a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, char a16)
{
  int v16; // r4@1
  void *v17; // r0@1
  void *v18; // r0@2
  ModelPart *v19; // r1@3
  signed int v20; // r7@3
  int v21; // r6@5
  const void **v22; // r0@5
  char *v23; // r0@5
  void *v24; // r0@6
  unsigned int *v25; // r2@9
  signed int v26; // r1@11
  unsigned int *v27; // r2@13
  signed int v28; // r1@15
  signed int v29; // r7@8
  unsigned int *v30; // r2@25
  signed int v31; // r1@27
  unsigned int *v32; // r2@29
  signed int v33; // r1@31
  int v34; // r9@41
  int v35; // r9@41
  ModelPart *v36; // t1@41
  int v37; // r11@41
  const void **v38; // r0@41
  char *v39; // r0@41
  void *v40; // r0@42
  unsigned int *v42; // r2@45
  signed int v43; // r1@47
  unsigned int *v44; // r2@49
  signed int v45; // r1@51
  mce::MaterialPtr *v46; // [sp+24h] [bp-64h]@2
  int v47; // [sp+3Ch] [bp-4Ch]@1
  int v48; // [sp+40h] [bp-48h]@29
  char *v49; // [sp+44h] [bp-44h]@25
  int v50; // [sp+48h] [bp-40h]@5
  char *v51; // [sp+4Ch] [bp-3Ch]@5
  int v52; // [sp+54h] [bp-34h]@2
  int v53; // [sp+5Ch] [bp-2Ch]@1

  v47 = a2;
  v16 = a1;
  Model::Model((_QWORD *)a1);
  *(_DWORD *)v16 = &off_26E5D50;
  sub_21E94B4((void **)&v53, "silverfish");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v16 + 48),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v53);
  v17 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
  {
    v42 = (unsigned int *)(v53 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
    }
    else
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  }
  sub_21E94B4((void **)&v52, "silverfish_layers");
  v46 = mce::MaterialPtr::MaterialPtr(
          (mce::MaterialPtr *)(v16 + 60),
          (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
          &v52);
  v18 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v52 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  ModelPart::ModelPart(COERCE_FLOAT(v16 + 112), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v16 + 332), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v16 + 552), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v16 + 772), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v16 + 992), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v16 + 1212), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v16 + 1432), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v16 + 1652), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v16 + 1872), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v16 + 2092), 0, 0, 64, 32);
  *(_DWORD *)(v16 + 28) = v16 + 48;
  v19 = (ModelPart *)(v16 + 112);
  *(_DWORD *)(v16 + 72) = v16 + 112;
  *(_DWORD *)(v16 + 76) = v16 + 332;
  *(_DWORD *)(v16 + 80) = v16 + 552;
  *(_DWORD *)(v16 + 84) = v16 + 772;
  *(_DWORD *)(v16 + 88) = v16 + 992;
  *(_DWORD *)(v16 + 92) = v16 + 1212;
  *(_DWORD *)(v16 + 96) = v16 + 1432;
  *(_DWORD *)(v16 + 100) = v16 + 1652;
  v20 = 0;
  *(_DWORD *)(v16 + 104) = v16 + 1872;
  *(_DWORD *)(v16 + 108) = v16 + 2092;
  while ( 1 )
    Model::registerParts((Model *)v16, v19);
    v21 = *(_DWORD *)(v16 + 4 * v20 + 72);
    Util::toString<int,(void *)0,(void *)0>((void **)&v50, v20);
    v22 = sub_21E82D8((const void **)&v50, 0, (unsigned int)"bodyPart_", (_BYTE *)9);
    v51 = (char *)*v22;
    *v22 = &unk_28898CC;
    ModelPart::load(v21, v47, (const void **)&v51, 0);
    v23 = v51 - 12;
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v51 - 4);
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
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v50 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    if ( ++v20 > 6 )
      break;
    v19 = *(ModelPart **)(v16 + 4 * v20 + 72);
  v29 = 0;
  do
    v34 = v16 + 4 * v29;
    v36 = *(ModelPart **)(v34 + 100);
    v35 = v34 + 100;
    Model::registerParts((Model *)v16, v36);
    v37 = *(_DWORD *)v35;
    Util::toString<int,(void *)0,(void *)0>((void **)&v48, v29);
    v38 = sub_21E82D8((const void **)&v48, 0, (unsigned int)"bodyLayer_", (_BYTE *)0xA);
    v49 = (char *)*v38;
    *v38 = &unk_28898CC;
    ModelPart::load(v37, v47, (const void **)&v49, 0);
    v39 = v49 - 12;
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v49 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
    v40 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v48 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
    ++v29;
    *(_DWORD *)(*(_DWORD *)v35 + 88) = v46;
  while ( v29 < 3 );
  return v16;
}


AppPlatformListener *__fastcall SilverfishModel::~SilverfishModel(SilverfishModel *this)
{
  SilverfishModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5D50;
  v2 = (SilverfishModel *)((char *)this + 48);
  ModelPart::~ModelPart((SilverfishModel *)((char *)this + 2092));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 1872));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 1652));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 1432));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 1212));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 992));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 772));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 552));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 332));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 112));
  mce::MaterialPtr::~MaterialPtr((SilverfishModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall SilverfishModel::~SilverfishModel(SilverfishModel *this)
{
  SilverfishModel::~SilverfishModel(this);
}


void __fastcall SilverfishModel::~SilverfishModel(SilverfishModel *this)
{
  SilverfishModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5D50;
  v2 = (SilverfishModel *)((char *)this + 48);
  ModelPart::~ModelPart((SilverfishModel *)((char *)this + 2092));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 1872));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 1652));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 1432));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 1212));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 992));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 772));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 552));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 332));
  ModelPart::~ModelPart((SilverfishModel *)((char *)v1 + 112));
  mce::MaterialPtr::~MaterialPtr((SilverfishModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
