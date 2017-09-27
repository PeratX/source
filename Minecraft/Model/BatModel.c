

AppPlatformListener *__fastcall BatModel::~BatModel(BatModel *this)
{
  BatModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E819C;
  v2 = (BatModel *)((char *)this + 48);
  ModelPart::~ModelPart((BatModel *)((char *)this + 1600));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall BatModel::~BatModel(BatModel *this)
{
  BatModel::~BatModel(this);
}


_QWORD *__fastcall BatModel::BatModel(_QWORD *a1, int a2)
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
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  unsigned int *v28; // r2@39
  signed int v29; // r1@41
  unsigned int *v30; // r2@43
  signed int v31; // r1@45
  ModelPart *v32; // [sp+14h] [bp-74h]@2
  int v33; // [sp+1Ch] [bp-6Ch]@9
  int v34; // [sp+24h] [bp-64h]@8
  int v35; // [sp+2Ch] [bp-5Ch]@7
  int v36; // [sp+34h] [bp-54h]@6
  int v37; // [sp+3Ch] [bp-4Ch]@5
  int v38; // [sp+44h] [bp-44h]@4
  int v39; // [sp+4Ch] [bp-3Ch]@3
  int v40; // [sp+54h] [bp-34h]@2
  int v41; // [sp+5Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E819C;
  sub_21E94B4((void **)&v41, "bat");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v41);
  v4 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v41 - 4);
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
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 90), 0, 0, 64, 32);
  v32 = (ModelPart *)((char *)v3 + 940);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 145), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1380)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 200), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 60));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 35));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 500));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 90));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 940));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 145));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1380));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 200));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_21E94B4((void **)&v40, "head");
  ModelPart::load((int)v3 + 60, v2, (const void **)&v40, 0);
  v5 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v40 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v39, "body");
  ModelPart::load((int)(v3 + 35), v2, (const void **)&v39, 0);
  v6 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v39 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v38, "rightWing");
  ModelPart::load((int)v3 + 500, v2, (const void **)&v38, 0);
  v7 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v38 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v37, "leftWing");
  ModelPart::load((int)(v3 + 90), v2, (const void **)&v37, 0);
  v8 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v37 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v36, "rightWingTip");
  ModelPart::load((int)v32, v2, (const void **)&v36, 0);
  v9 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v36 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v35, "leftWingTip");
  ModelPart::load((int)(v3 + 145), v2, (const void **)&v35, 0);
  v10 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v35 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v34, "rightEar");
  ModelPart::load((int)v3 + 1380, v2, (const void **)&v34, (int)v3 + 60);
  v11 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v34 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v33, "leftEar");
  ModelPart::load((int)(v3 + 200), v2, (const void **)&v33, (int)v3 + 60);
  v12 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v33 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  ModelPart::addChild((ModelPart *)(v3 + 35), (ModelPart *)((char *)v3 + 500));
  ModelPart::addChild((ModelPart *)(v3 + 35), (ModelPart *)(v3 + 90));
  ModelPart::addChild((ModelPart *)((char *)v3 + 500), v32);
  ModelPart::addChild((ModelPart *)(v3 + 90), (ModelPart *)(v3 + 145));
  return v3;
}


signed __int64 __fastcall BatModel::render(int a1, int a2, Entity *this, int a4, int a5, float a6, float a7, float a8, float a9)
{
  int v9; // r4@1
  int v14; // r8@1
  float v18; // r1@2
  __int64 v24; // r0@4
  __int64 v25; // r0@4
  int v27; // [sp+8h] [bp-78h]@2
  int v28; // [sp+Ch] [bp-74h]@2
  int v29; // [sp+10h] [bp-70h]@2
  int v30; // [sp+14h] [bp-6Ch]@2
  int v31; // [sp+18h] [bp-68h]@2
  int v32; // [sp+1Ch] [bp-64h]@2
  int v33; // [sp+20h] [bp-60h]@2
  int v34; // [sp+24h] [bp-5Ch]@2
  int v35; // [sp+28h] [bp-58h]@2
  int v36; // [sp+2Ch] [bp-54h]@3
  int v37; // [sp+30h] [bp-50h]@3
  int v38; // [sp+34h] [bp-4Ch]@3
  int v39; // [sp+38h] [bp-48h]@3
  int v40; // [sp+3Ch] [bp-44h]@3
  int v41; // [sp+40h] [bp-40h]@3
  int v42; // [sp+44h] [bp-3Ch]@3
  signed int v43; // [sp+48h] [bp-38h]@3
  int v44; // [sp+4Ch] [bp-34h]@3

  v9 = a1;
  __asm { VLDR            S0, [SP,#0x80+arg_C] }
  v14 = a2;
  _R0 = &mce::Math::DEGRAD;
  __asm
  {
    VLDR            S18, [R0]
    VMUL.F32        S20, S18, S0
  }
  Entity::isResting(this);
    VLDR            S16, [SP,#0x80+arg_10]
    VLDR            S0, [SP,#0x80+arg_8]
    VSTR            S20, [R4,#0x60]
  if ( _ZF )
    __asm { VMUL.F32        S0, S18, S0 }
    _R0 = &mce::Math::PI;
    __asm
    {
      VLDR            S18, [R0]
      VSUB.F32        S0, S18, S0
      VSTR            S0, [R4,#0x64]
      VSTR            S18, [R4,#0x68]
    }
    v42 = 0;
    v43 = -1073741824;
    v44 = 0;
    ModelPart::setPos((ModelPart *)(v9 + 60), (const Vec3 *)&v42);
    v39 = -1069547520;
    v40 = 0;
    v41 = 1077936128;
    ModelPart::setPos((ModelPart *)(v9 + 500), (const Vec3 *)&v39);
    v36 = 1077936128;
    v37 = 0;
    v38 = 1077936128;
    ModelPart::setPos((ModelPart *)(v9 + 720), (const Vec3 *)&v36);
      VLDR            S0, =-0.05
      VLDR            S4, =-0.55
      VLDR            S2, =-0.4
      VMUL.F32        S6, S18, S0
      VMUL.F32        S8, S18, S4
      VSTR            S18, [R4,#0x13C]
      VMUL.F32        S0, S18, S2
      VNMUL.F32       S2, S18, S4
      VSTR            S6, [R4,#0x218]
      VSTR            S0, [R4,#0x21C]
      VSTR            S8, [R4,#0x3D4]
      VSTR            S6, [R4,#0x2F4]
  else
      VMUL.F32        S0, S18, S0
      VLDR            S20, [SP,#0x80+arg_4]
    *(_DWORD *)(v9 + 104) = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    ModelPart::setPos((ModelPart *)(v9 + 60), (const Vec3 *)&v33);
    v30 = 0;
    v31 = 0;
    v32 = 0;
    ModelPart::setPos((ModelPart *)(v9 + 500), (const Vec3 *)&v30);
    v27 = 0;
    v28 = 0;
    v29 = 0;
    ModelPart::setPos((ModelPart *)(v9 + 720), (const Vec3 *)&v27);
      VLDR            S0, =0.1
      VMUL.F32        S0, S20, S0
      VMOV            R0, S0
    _R0 = mce::Math::cos(_R0, v18);
      VLDR            S0, =1.3
      VMOV.F32        S18, #0.25
      VMOV            S2, R0
      VLDR            S4, =0.15
      VMUL.F32        S2, S2, S4
    _R1 = &mce::Math::PI;
      VLDR            S20, [R1]
      VMUL.F32        S0, S20, S18
      VADD.F32        S0, S2, S0
      VSTR            S0, [R4,#0x13C]
    *(_DWORD *)(v9 + 320) = 0;
    _R0 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::PI));
      VMOV            S0, R0
      VMOV.F32        S4, #0.125
      VMUL.F32        S2, S20, S0
      VMOV.F32        S6, #-0.125
      VMUL.F32        S0, S2, S18
      VMUL.F32        S4, S2, S4
      VMUL.F32        S2, S2, S6
      VSTR            S4, [R4,#0x3D4]
    VMOV            R7, S16
    VNEG.F32        S0, S0
  HIDWORD(v24) = v14;
    VSTR            S0, [R4,#0x2F8]
    VSTR            S2, [R0]
  LODWORD(v24) = v9 + 60;
  ModelPart::render(v24, v9, _R7, 0, 0);
  LODWORD(v25) = v9 + 280;
  return __PAIR__(v14, ModelPart::render(v25, v9, _R7, 0, 0));
}


void __fastcall BatModel::~BatModel(BatModel *this)
{
  BatModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E819C;
  v2 = (BatModel *)((char *)this + 48);
  ModelPart::~ModelPart((BatModel *)((char *)this + 1600));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((BatModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
