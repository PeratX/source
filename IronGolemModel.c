

AppPlatformListener *__fastcall IronGolemModel::~IronGolemModel(IronGolemModel *this)
{
  IronGolemModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E571C;
  v2 = (IronGolemModel *)((char *)this + 48);
  ModelPart::~ModelPart((IronGolemModel *)((char *)this + 1160));
  ModelPart::~ModelPart((IronGolemModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((IronGolemModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((IronGolemModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((IronGolemModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((IronGolemModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall IronGolemModel::~IronGolemModel(IronGolemModel *this)
{
  IronGolemModel::~IronGolemModel(this);
}


signed __int64 __fastcall IronGolemModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r7@1
  int v15; // r8@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  __int64 v19; // r0@1
  __int64 v20; // r0@1
  __int64 v21; // r0@1

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
  LODWORD(v18) = v9 + 940;
  v19 = __PAIR__(v15, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = v9 + 1160;
  v20 = __PAIR__(v15, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 500;
  v21 = __PAIR__(v15, ModelPart::render(v20, v9, _R6, 0, 0));
  LODWORD(v21) = v9 + 720;
  return __PAIR__(v15, ModelPart::render(v21, v9, _R6, 0, 0));
}


_QWORD *__fastcall IronGolemModel::IronGolemModel(_QWORD *a1, int a2)
{
  int v2; // r8@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  int v5; // r6@2
  void *v6; // r0@2
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  int v12; // r3@8
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  unsigned int *v26; // r2@33
  signed int v27; // r1@35
  ModelPart *v28; // [sp+8h] [bp-68h]@2
  int v29; // [sp+14h] [bp-5Ch]@7
  int v30; // [sp+1Ch] [bp-54h]@6
  int v31; // [sp+24h] [bp-4Ch]@5
  int v32; // [sp+2Ch] [bp-44h]@4
  int v33; // [sp+34h] [bp-3Ch]@3
  int v34; // [sp+3Ch] [bp-34h]@2
  int v35; // [sp+44h] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E571C;
  sub_21E94B4((void **)&v35, "iron_golem");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v35);
  v4 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 35), 0, 0, 64, 32);
  v28 = (ModelPart *)ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  v5 = (int)(v3 + 90);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 145), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 60));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 35));
  Model::registerParts((Model *)v3, v28);
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 90));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 940));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 145));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_21E94B4((void **)&v34, "head");
  ModelPart::load((int)v3 + 60, v2, (const void **)&v34, 0);
  v6 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v34 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v5 = (int)(v3 + 90);
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v33, "body");
  ModelPart::load((int)(v3 + 35), v2, (const void **)&v33, 0);
  v7 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v33 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v32, "arm0");
  ModelPart::load((int)v28, v2, (const void **)&v32, 0);
  v8 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v32 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v31, "arm1");
  ModelPart::load(v5, v2, (const void **)&v31, 0);
  v9 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v30, "leg0");
  ModelPart::load((int)v3 + 940, v2, (const void **)&v30, 0);
  v10 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v30 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v29, "leg1");
  ModelPart::load((int)(v3 + 145), v2, (const void **)&v29, 0);
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v29 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (int)(v3 + 1);
  *(_DWORD *)v12 = 0;
  *(_DWORD *)(v12 + 4) = 1058642330;
  *(_DWORD *)(v12 + 8) = 1053609165;
  return v3;
}


void __fastcall IronGolemModel::~IronGolemModel(IronGolemModel *this)
{
  IronGolemModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E571C;
  v2 = (IronGolemModel *)((char *)this + 48);
  ModelPart::~ModelPart((IronGolemModel *)((char *)this + 1160));
  ModelPart::~ModelPart((IronGolemModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((IronGolemModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((IronGolemModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((IronGolemModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((IronGolemModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall IronGolemModel::prepareMobModel(IronGolemModel *this, Mob *a2, float a3, float a4, float a5)
{
  Mob *v5; // r7@1
  IronGolemModel *v6; // r4@1
  mce::Math *v8; // r5@1
  float v10; // r2@1
  float v17; // r2@2
  int result; // r0@2
  float v20; // r2@3
  float v24; // r2@5

  v5 = a2;
  v6 = this;
  _R6 = a4;
  v8 = (mce::Math *)LODWORD(a3);
  _R0 = IronGolem::getAttackAnimationTick(a2);
  if ( _R0 < 1 )
  {
    _R0 = IronGolem::getOfferFlowerTick(v5);
    if ( _R0 >= 1 )
    {
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VMOV            R0, S0
      }
      _R0 = mce::Math::remainder(_R0, 70.0, v20);
        VMOV            S2, R0
        VLDR            S0, =-35.0
      result = 0;
        VADD.F32        S0, S2, S0
        VLDR            S2, =-17.5
        VABS.F32        S0, S0
        VADD.F32        S0, S0, S2
        VLDR            S2, =0.0014286
        VMUL.F32        S0, S0, S2
        VLDR            S2, =-0.8
        VSTR            S0, [R4,#0x218]
      *((_DWORD *)v6 + 189) = 0;
      return result;
    }
    __asm { VMOV            S16, R6 }
    _R0 = mce::Math::remainder(v8, 13.0, v20);
    __asm
      VMOV.F32        S18, #-6.5
      VLDR            S22, =0.46154
      VMOV            S0, R0
      VLDR            S24, =-0.2
      VMOV.F32        S20, #-3.25
      VADD.F32        S0, S0, S18
      VABS.F32        S0, S0
      VADD.F32        S0, S0, S20
      VMUL.F32        S0, S0, S22
      VADD.F32        S0, S0, S24
      VMUL.F32        S0, S0, S16
      VSTR            S0, [R4,#0x218]
    result = mce::Math::remainder(v8, 13.0, v24);
      VSUB.F32        S0, S24, S0
  }
  else
      VMOV            S2, R0
      VLDR            S0, [SP,#0x40+arg_0]
      VCVT.F32.S32    S2, S2
      VSUB.F32        S0, S2, S0
      VMOV            R5, S0
    _R0 = mce::Math::remainder(_R5, 10.0, v10);
      VMOV.F32        S16, #-5.0
      VLDR            S20, =0.6
      VMOV.F32        S18, #-2.5
      VMOV.F32        S22, #-2.0
      VADD.F32        S0, S0, S16
      VMUL.F32        S0, S0, S20
      VADD.F32        S0, S0, S22
    result = mce::Math::remainder(_R5, 10.0, v17);
  __asm { VSTR            S0, [R4,#0x2F4] }
  return result;
}


int __fastcall IronGolemModel::setupAnim(IronGolemModel *this, mce::Math *a2, float a3, float a4, float a5, float a6, float a7)
{
  IronGolemModel *v7; // r4@1
  mce::Math *v12; // r6@1
  float v16; // r2@1
  int result; // r0@1

  v7 = this;
  __asm
  {
    VLDR            S0, [SP,#0x30+arg_0]
    VLDR            S4, [SP,#0x30+arg_4]
  }
  v12 = a2;
  _R0 = &mce::Math::DEGRAD;
  _R5 = a3;
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S2, S4
    VSTR            S2, [R4,#0x60]
    VSTR            S0, [R4,#0x64]
  _R0 = mce::Math::remainder(a2, 13.0, a3);
    VMOV.F32        S16, #-6.5
    VLDR            S2, =-0.46154
    VMOV            S0, R0
    VMOV.F32        S18, #-3.25
    VMOV            S20, R5
    VMUL.F32        S2, S20, S2
    VADD.F32        S0, S0, S16
    VABS.F32        S0, S0
    VADD.F32        S0, S0, S18
    VSTR            S0, [R4,#0x3D0]
  _R0 = mce::Math::remainder(v12, 13.0, v16);
    VLDR            S2, =0.46154
    VSTR            S0, [R0]
  result = 0;
  *((_DWORD *)v7 + 245) = 0;
  *((_DWORD *)v7 + 300) = 0;
  return result;
}


int __fastcall IronGolemModel::triangleWave(IronGolemModel *this, float a2, float a3)
{
  int result; // r0@1

  _R4 = a3;
  _R0 = mce::Math::remainder((mce::Math *)LODWORD(a2), a3, a3);
  __asm
  {
    VMOV.F32        S0, #-0.5
    VMOV            S2, R4
    VMOV            S4, R0
    VMOV.F32        S6, #0.25
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S2, S6
    VADD.F32        S0, S4, S0
    VABS.F32        S0, S0
    VSUB.F32        S0, S0, S2
    VDIV.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}
