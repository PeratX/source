

LavaSlimeModel *__fastcall LavaSlimeModel::prepareMobModel(LavaSlimeModel *this, Mob *a2, float a3, float a4, float a5)
{
  Mob *v5; // r5@1
  LavaSlimeModel *v6; // r4@1
  LavaSlimeModel *result; // r0@3

  v5 = a2;
  v6 = this;
  _R0 = Slime::getOldSquishValue(a2);
  __asm { VMOV            S16, R0 }
  _R0 = Slime::getSquishValue(v5);
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, [SP,#0x18+arg_0]
    VLDR            S4, =-5.1
    VSUB.F32        S0, S0, S16
    VLDR            S6, =-3.4
    VLDR            S8, =-1.7
    VLDR            S12, =1.7
    VLDR            S10, =5.1
    VLDR            S14, =3.4
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.0
    VADD.F32        S0, S0, S16
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S2 }
    VLDR            S2, =-6.8
    VMUL.F32        S4, S0, S4
    VMUL.F32        S2, S0, S2
    VMUL.F32        S6, S0, S6
    VMUL.F32        S8, S0, S8
    VMUL.F32        S12, S0, S12
    VMUL.F32        S10, S0, S10
    VMUL.F32        S0, S0, S14
    VSTR            S2, [R4,#0x40]
    VSTR            S4, [R4,#0x11C]
    VSTR            S6, [R4,#0x1F8]
    VSTR            S8, [R4,#0x2D4]
  *((_DWORD *)v6 + 236) = 0;
    VSTR            S12, [R0]
    VSTR            S0, [R0]
  result = (LavaSlimeModel *)((char *)v6 + 1604);
  __asm { VSTR            S10, [R0] }
  return result;
}


void __fastcall LavaSlimeModel::~LavaSlimeModel(LavaSlimeModel *this)
{
  LavaSlimeModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5774;
  v2 = (LavaSlimeModel *)((char *)this + 48);
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)this + 1820));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall LavaSlimeModel::LavaSlimeModel(int a1, ModelPart *a2, int a3, mce::MaterialPtr *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, char a12)
{
  int v12; // r9@1
  void *v13; // r0@1
  signed int v14; // r6@2
  unsigned int *v15; // r2@3
  signed int v16; // r1@5
  unsigned int *v17; // r2@7
  signed int v18; // r1@9
  const void **v19; // r0@19
  char *v20; // r0@19
  void *v21; // r0@20
  void *v22; // r0@22
  unsigned int *v24; // r2@24
  signed int v25; // r1@26
  unsigned int *v26; // r2@32
  signed int v27; // r1@34
  ModelPart *v28; // [sp+28h] [bp-50h]@2
  ModelPart *v29; // [sp+2Ch] [bp-4Ch]@1
  int v30; // [sp+3Ch] [bp-3Ch]@22
  int v31; // [sp+40h] [bp-38h]@7
  char *v32; // [sp+44h] [bp-34h]@3
  int v33; // [sp+4Ch] [bp-2Ch]@1

  v29 = a2;
  v12 = a1;
  Model::Model((_QWORD *)a1);
  *(_DWORD *)v12 = &off_26E5774;
  sub_21E94B4((void **)&v33, "magma_cube");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v12 + 48),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v33);
  v13 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  }
  ModelPart::ModelPart(COERCE_FLOAT(v12 + 60), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v12 + 280), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v12 + 500), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v12 + 720), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v12 + 940), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v12 + 1160), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v12 + 1380), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v12 + 1600), 0, 0, 64, 32);
  v28 = (ModelPart *)(v12 + 1820);
  ModelPart::ModelPart(COERCE_FLOAT(v12 + 1820), 0, 0, 64, 32);
  v14 = 0;
  do
    Util::toString<int,(void *)0,(void *)0>((void **)&v31, v14);
    v19 = sub_21E82D8((const void **)&v31, 0, (unsigned int)"bodyCube_", (_BYTE *)9);
    v32 = (char *)*v19;
    *v19 = &unk_28898CC;
    ModelPart::load(v12 + 220 * v14 + 60, (int)v29, (const void **)&v32, 0);
    v20 = v32 - 12;
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v32 - 4);
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
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v31 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    Model::registerParts((Model *)v12, (ModelPart *)(v12 + 220 * v14++ + 60));
  while ( v14 < 8 );
  *(_DWORD *)(v12 + 28) = v12 + 48;
  sub_21E94B4((void **)&v30, "insideCube");
  ModelPart::load((int)v28, (int)v29, (const void **)&v30, 0);
  v22 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v30 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  Model::registerParts((Model *)v12, v28);
  return v12;
}


void __fastcall LavaSlimeModel::~LavaSlimeModel(LavaSlimeModel *this)
{
  LavaSlimeModel::~LavaSlimeModel(this);
}


signed __int64 __fastcall LavaSlimeModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
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
  LODWORD(v17) = v9 + 1820;
  v18 = __PAIR__(v15, ModelPart::render(v17, v9, _R6, 0, 0));
  ModelPart::render(__PAIR__(v15, v14), v9, _R6, 0, 0);
  LODWORD(v19) = v9 + 280;
  v20 = __PAIR__(v15, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 500;
  v21 = __PAIR__(v15, ModelPart::render(v20, v9, _R6, 0, 0));
  LODWORD(v21) = v9 + 720;
  v22 = __PAIR__(v15, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 940;
  v23 = __PAIR__(v15, ModelPart::render(v22, v9, _R6, 0, 0));
  LODWORD(v23) = v9 + 1160;
  v24 = __PAIR__(v15, ModelPart::render(v23, v9, _R6, 0, 0));
  LODWORD(v24) = v9 + 1380;
  v25 = __PAIR__(v15, ModelPart::render(v24, v9, _R6, 0, 0));
  LODWORD(v25) = v9 + 1600;
  return __PAIR__(v15, ModelPart::render(v25, v9, _R6, 0, 0));
}


AppPlatformListener *__fastcall LavaSlimeModel::~LavaSlimeModel(LavaSlimeModel *this)
{
  LavaSlimeModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5774;
  v2 = (LavaSlimeModel *)((char *)this + 48);
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)this + 1820));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((LavaSlimeModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}
