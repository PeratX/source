

WitherBossModel *__fastcall WitherBossModel::prepareMobModel(WitherBossModel *this, Mob *a2, float a3, float a4, float a5)
{
  WitherBossModel *v5; // r4@1
  Mob *v6; // r5@1
  WitherBossModel *result; // r0@1
  float v14; // [sp+0h] [bp-28h]@1

  v5 = this;
  v6 = a2;
  WitherBoss::getHeadRot((WitherBoss *)&v14, (int)a2, 0);
  _R7 = (int)v6 + 3412;
  __asm
  {
    VLDR            S2, [SP,#0x28+var_24]
    VLDR            S0, [R7]
    VSUB.F32        S0, S2, S0
  }
  _R0 = &mce::Math::DEGRAD;
    VLDR            S16, [R0]
    VMUL.F32        S0, S0, S16
    VSTR            S0, [R4,#0x3D4]
    VLDR            S0, [SP,#0x28+var_28]
    VSTR            S0, [R4,#0x3D0]
  WitherBoss::getHeadRot((WitherBoss *)&v14, (int)v6, 1);
    VSTR            S0, [R0]
  result = (WitherBossModel *)((char *)v5 + 1196);
  return result;
}


void __fastcall WitherBossModel::~WitherBossModel(WitherBossModel *this)
{
  WitherBossModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E606C;
  v2 = (WitherBossModel *)((char *)this + 48);
  ModelPart::~ModelPart((WitherBossModel *)((char *)this + 1160));
  ModelPart::~ModelPart((WitherBossModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((WitherBossModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((WitherBossModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((WitherBossModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((WitherBossModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall WitherBossModel::WitherBossModel(_QWORD *a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r8@1
  _QWORD *v5; // r4@1
  const char *v6; // r1@1
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  void *v12; // r0@8
  void *v13; // r0@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  unsigned int *v23; // r2@27
  signed int v24; // r1@29
  unsigned int *v25; // r2@31
  signed int v26; // r1@33
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  int v29; // [sp+14h] [bp-5Ch]@9
  int v30; // [sp+1Ch] [bp-54h]@8
  int v31; // [sp+24h] [bp-4Ch]@7
  int v32; // [sp+2Ch] [bp-44h]@6
  int v33; // [sp+34h] [bp-3Ch]@5
  int v34; // [sp+3Ch] [bp-34h]@4
  int v35; // [sp+44h] [bp-2Ch]@3

  v3 = a3;
  v4 = a2;
  v5 = a1;
  Model::Model(a1);
  v6 = "wither_boss_armor";
  if ( !v3 )
    v6 = "wither_boss";
  *(_DWORD *)v5 = &off_26E606C;
  sub_21E94B4((void **)&v35, v6);
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v5 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v35);
  v7 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v35 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 145), 0, 0, 64, 32);
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 60));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 35));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 500));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 90));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 940));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 145));
  *((_DWORD *)v5 + 7) = v5 + 6;
  sub_21E94B4((void **)&v34, "upperBodyPart1");
  ModelPart::load((int)v5 + 60, v4, (const void **)&v34, 0);
  v8 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v34 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v33, "upperBodyPart2");
  ModelPart::load((int)(v5 + 35), v4, (const void **)&v33, 0);
  v9 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v33 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v32, "upperBodyPart3");
  ModelPart::load((int)v5 + 500, v4, (const void **)&v32, 0);
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v32 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v31, "head1");
  ModelPart::load((int)(v5 + 90), v4, (const void **)&v31, 0);
  v11 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v31 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v30, "head2");
  ModelPart::load((int)v5 + 940, v4, (const void **)&v30, 0);
  v12 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v30 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v29, "head3");
  ModelPart::load((int)(v5 + 145), v4, (const void **)&v29, 0);
  v13 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v29 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  return v5;
}


int __fastcall WitherBossModel::setupAnim(WitherBossModel *this, float a2, float a3, float _R3, float a5, float a6, float a7)
{
  WitherBossModel *v11; // r4@1
  int result; // r0@1
  int v20; // [sp+4h] [bp-4Ch]@1

  __asm
  {
    VLDR            S16, =0.1
    VMOV            S0, R3
  }
  v11 = this;
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  _R0 = mce::Math::cos(_R0, a2);
    VMOV            S18, R0
    VLDR            S0, =0.05
    VMUL.F32        S0, S18, S0
    VLDR            S2, =0.065
  _R0 = &mce::Math::DEGRAD;
  _R1 = &mce::Math::PI;
    VLDR            S20, [R0]
    VADD.F32        S0, S0, S2
    VLDR            S2, [SP,#0x50+arg_4]
    VLDR            S22, [R1]
    VMUL.F32        S24, S20, S2
    VMUL.F32        S0, S0, S22
    VADD.F32        S0, S0, S24
    VSTR            S0, [R4,#0x13C]
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::PI));
    VMOV            S28, R0
    VMOV.F32        S26, #10.0
  _R0 = mce::Math::sin(*((mce::Math **)v11 + 79), *((float *)v11 + 79));
    VMOV            S0, R0
    VLDR            S6, =6.9
    VMUL.F32        S2, S28, S26
    VMOV.F32        S4, #-0.5
  v20 = -1073741824;
    VMUL.F32        S0, S0, S26
    VADD.F32        S2, S2, S6
    VADD.F32        S0, S0, S4
    VSTR            S2, [SP,#0x50+var_48]
    VSTR            S0, [SP,#0x50+var_44]
  result = ModelPart::setPos((WitherBossModel *)((char *)v11 + 500), (const Vec3 *)&v20);
    VMUL.F32        S0, S18, S16
    VLDR            S2, =0.265
    VLDR            S2, [SP,#0x50+arg_0]
    VMUL.F32        S2, S20, S2
    VMUL.F32        S0, S22, S0
    VSTR            S0, [R4,#0x218]
    VSTR            S24, [R4,#0x2F4]
    VSTR            S2, [R4,#0x2F8]
  return result;
}


AppPlatformListener *__fastcall WitherBossModel::~WitherBossModel(WitherBossModel *this)
{
  WitherBossModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E606C;
  v2 = (WitherBossModel *)((char *)this + 48);
  ModelPart::~ModelPart((WitherBossModel *)((char *)this + 1160));
  ModelPart::~ModelPart((WitherBossModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((WitherBossModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((WitherBossModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((WitherBossModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((WitherBossModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


signed __int64 __fastcall WitherBossModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r8@1
  int v15; // r5@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  __int64 v19; // r0@1
  unsigned __int64 v20; // r0@1
  __int64 v21; // r0@1
  __int64 v22; // r0@1

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
  LODWORD(v17) = v9 + 720;
  v18 = __PAIR__(v15, ModelPart::render(v17, v9, _R6, 0, 0));
  LODWORD(v18) = v9 + 940;
  v19 = __PAIR__(v15, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = v9 + 1160;
  v20 = __PAIR__(v15, ModelPart::render(v19, v9, _R6, 0, 0));
  ModelPart::render(__PAIR__(v15, v14), v9, _R6, 0, 0);
  LODWORD(v21) = v9 + 280;
  v22 = __PAIR__(v15, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 500;
  return __PAIR__(v15, ModelPart::render(v22, v9, _R6, 0, 0));
}


void __fastcall WitherBossModel::~WitherBossModel(WitherBossModel *this)
{
  WitherBossModel::~WitherBossModel(this);
}
