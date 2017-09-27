

AppPlatformListener *__fastcall ParrotModel::~ParrotModel(ParrotModel *this)
{
  ParrotModel *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5A34;
  v2 = (ParrotModel *)((char *)this + 48);
  mce::MaterialPtr::~MaterialPtr((ParrotModel *)((char *)this + 2468));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 2248));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 2028));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 1808));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 1588));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 1368));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 1148));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 928));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 708));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 488));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 268));
  ModelPart::~ModelPart(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


signed __int64 __fastcall ParrotModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r7@1
  int v15; // r8@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  __int64 v19; // r0@1
  __int64 v20; // r0@1
  __int64 v21; // r0@1
  __int64 v22; // r0@1

  v9 = a1;
  __asm
  {
    VLDR            S0, [SP,#0x30+arg_C]
    VLDR            S2, [SP,#0x30+arg_8]
  }
  v14 = a1 + 48;
  v15 = a2;
    VLDR            S16, [SP,#0x30+arg_10]
    VSTR            S2, [SP,#0x30+var_30]
    VSTR            S0, [SP,#0x30+var_2C]
    VSTR            S16, [SP,#0x30+var_28]
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R6, S16 }
  ModelPart::render(__PAIR__(v15, v14), v9, _R6, 0, 0);
  LODWORD(v17) = v9 + 708;
  v18 = __PAIR__(v15, ModelPart::render(v17, v9, _R6, 0, 0));
  LODWORD(v18) = v9 + 928;
  v19 = __PAIR__(v15, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = v9 + 1148;
  v20 = __PAIR__(v15, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 1368;
  v21 = __PAIR__(v15, ModelPart::render(v20, v9, _R6, 0, 0));
  LODWORD(v21) = v9 + 1588;
  v22 = __PAIR__(v15, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 1808;
  return __PAIR__(v15, ModelPart::render(v22, v9, _R6, 0, 0));
}


signed int __fastcall ParrotModel::prepareMobModel(ParrotModel *this, Mob *a2, float a3, float a4, float a5)
{
  Mob *v5; // r5@1
  ParrotModel *v6; // r4@1
  Level *v7; // r0@1
  char *v8; // r0@1
  signed int result; // r0@2
  signed int v22; // r0@4

  v5 = a2;
  v6 = this;
  v7 = (Level *)Entity::getLevel(a2);
  v8 = Level::getCurrentTick(v7);
  _R0 = _aeabi_ul2f(*(_QWORD *)v8, *(_QWORD *)v8 >> 32);
  __asm
  {
    VMOV            S2, R0
    VLDR            S0, [SP,#0x18+arg_0]
    VADD.F32        S0, S2, S0
  }
  _R0 = &mce::Math::PI;
    VLDR            S2, [R0]
    VNEG.F32        S2, S2
    VSTR            S0, [R1]
  *((_DWORD *)v6 + 131) = -1100826962;
  *((_DWORD *)v6 + 186) = 1056753215;
  *((_DWORD *)v6 + 406) = -1087195474;
  __asm { VSTR            S2, [R1] }
  *((_DWORD *)v6 + 461) = -1087195474;
  __asm { VSTR            S2, [R0] }
  *((_DWORD *)v6 + 296) = -1124798248;
  *((_DWORD *)v6 + 351) = -1124798248;
  *((_DWORD *)v6 + 288) = 1102053376;
  *((_DWORD *)v6 + 343) = 1102053376;
  if ( Entity::isDancing(v5) == 1 )
    __asm
    {
      VMOV.F32        S0, #-20.0
      VMOV.F32        S2, #20.0
    }
    _R0 = &mce::Math::DEGRAD;
      VLDR            S4, [R0]
      VMUL.F32        S0, S4, S0
      VMUL.F32        S2, S4, S2
      VSTR            S0, [R0]
      VSTR            S2, [R0]
    result = 3;
    *((_DWORD *)v6 + 621) = 3;
  else
    _R6 = (int)v6 + 1404;
    _R7 = (int)v6 + 1184;
    if ( Entity::isSitting(v5) == 1 )
      __asm
      {
        VMOV.F32        S0, #30.0
        VLDR            S4, =1.0153
      }
      *((_DWORD *)v6 + 13) = 1099741266;
      _R2 = &mce::Math::DEGRAD;
      _R1 = (int)v6 + 1152;
      _R0 = (int)v6 + 1372;
        VLDR            S2, [R2]
        VMUL.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VLDR            S4, =1.9
        VSTR            S0, [R4,#0x3C4]
      *((_DWORD *)v6 + 233) = 1102561935;
      *((_DWORD *)v6 + 178) = 1100165939;
      *((_DWORD *)v6 + 408) = -1112356264;
      *((_DWORD *)v6 + 398) = 1100396626;
      *((_DWORD *)v6 + 463) = 1035127384;
      *((_DWORD *)v6 + 453) = 1100396626;
        VLDR            S0, [R1]
        VSTR            S0, [R1]
        VLDR            S0, [R0]
        VLDR            S4, =90.0
        VMUL.F32        S2, S2, S4
        VSTR            S0, [R0]
      v22 = 2;
        VLDR            S0, [R7]
        VADD.F32        S0, S0, S2
        VSTR            S0, [R7]
        VLDR            S0, [R6]
        VSTR            S0, [R6]
    else if ( *((_BYTE *)v5 + 216) || Mob::isJumping(v5) || Entity::isRiding(v5) )
      __asm { VMOV.F32        S0, #20.0 }
      _R0 = &mce::Math::DEGRAD;
      __asm { VLDR            S2, [R0] }
      v22 = 1;
        VLDR            S2, [R7]
        VADD.F32        S2, S2, S0
        VSTR            S2, [R7]
        VLDR            S2, [R6]
        VADD.F32        S0, S2, S0
    else
      v22 = 0;
    *((_DWORD *)v6 + 621) = v22;
    result = 0;
    *((_DWORD *)v6 + 298) = 0;
    *((_DWORD *)v6 + 353) = 0;
  return result;
}


void __fastcall ParrotModel::~ParrotModel(ParrotModel *this)
{
  ParrotModel::~ParrotModel(this);
}


void __fastcall ParrotModel::~ParrotModel(ParrotModel *this)
{
  ParrotModel *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5A34;
  v2 = (ParrotModel *)((char *)this + 48);
  mce::MaterialPtr::~MaterialPtr((ParrotModel *)((char *)this + 2468));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 2248));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 2028));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 1808));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 1588));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 1368));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 1148));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 928));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 708));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 488));
  ModelPart::~ModelPart((ParrotModel *)((char *)v1 + 268));
  ModelPart::~ModelPart(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall ParrotModel::ParrotModel(_QWORD *a1, int a2)
{
  int v2; // r8@1
  _QWORD *v3; // r4@1
  ModelPart *v4; // r7@1
  ModelPart *v5; // r6@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  void *v15; // r0@10
  void *v16; // r0@11
  void *v17; // r0@12
  unsigned int *v19; // r2@14
  signed int v20; // r1@16
  unsigned int *v21; // r2@18
  signed int v22; // r1@20
  unsigned int *v23; // r2@22
  signed int v24; // r1@24
  unsigned int *v25; // r2@26
  signed int v26; // r1@28
  unsigned int *v27; // r2@30
  signed int v28; // r1@32
  unsigned int *v29; // r2@34
  signed int v30; // r1@36
  unsigned int *v31; // r2@38
  signed int v32; // r1@40
  unsigned int *v33; // r2@42
  signed int v34; // r1@44
  unsigned int *v35; // r2@46
  signed int v36; // r1@48
  unsigned int *v37; // r2@50
  signed int v38; // r1@52
  unsigned int *v39; // r2@54
  signed int v40; // r1@56
  unsigned int *v41; // r2@58
  signed int v42; // r1@60
  ModelPart *v43; // [sp+14h] [bp-9Ch]@1
  ModelPart *v44; // [sp+18h] [bp-98h]@1
  ModelPart *v45; // [sp+1Ch] [bp-94h]@1
  ModelPart *v46; // [sp+20h] [bp-90h]@1
  ModelPart *v47; // [sp+24h] [bp-8Ch]@1
  int v48; // [sp+2Ch] [bp-84h]@12
  int v49; // [sp+34h] [bp-7Ch]@11
  int v50; // [sp+3Ch] [bp-74h]@10
  int v51; // [sp+44h] [bp-6Ch]@9
  int v52; // [sp+4Ch] [bp-64h]@8
  int v53; // [sp+54h] [bp-5Ch]@7
  int v54; // [sp+5Ch] [bp-54h]@6
  int v55; // [sp+64h] [bp-4Ch]@5
  int v56; // [sp+6Ch] [bp-44h]@4
  int v57; // [sp+74h] [bp-3Ch]@3
  int v58; // [sp+7Ch] [bp-34h]@2
  int v59; // [sp+84h] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E5A34;
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 6), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 268)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 61), 0, 0, 64, 32);
  v47 = (ModelPart *)((char *)v3 + 708);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 708)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 116), 0, 0, 64, 32);
  v44 = (ModelPart *)((char *)v3 + 1148);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1148)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 171), 0, 0, 64, 32);
  v46 = (ModelPart *)((char *)v3 + 1588);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1588)), 0, 0, 64, 32);
  v43 = (ModelPart *)(v3 + 171);
  v45 = (ModelPart *)(v3 + 226);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 226), 0, 0, 64, 32);
  v4 = (ModelPart *)((char *)v3 + 268);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 2028)), 0, 0, 64, 32);
  v5 = (ModelPart *)(v3 + 116);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 281), 0, 0, 64, 32);
  sub_21E94B4((void **)&v59, "parrot");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v3 + 2468),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v59);
  v6 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v59 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  *((_DWORD *)v3 + 7) = (char *)v3 + 2468;
  Model::registerParts((Model *)v3, v47);
  Model::registerParts((Model *)v3, v5);
  Model::registerParts((Model *)v3, v46);
  Model::registerParts((Model *)v3, v45);
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 6));
  Model::registerParts((Model *)v3, v4);
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 2028));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 281));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 61));
  Model::registerParts((Model *)v3, v44);
  Model::registerParts((Model *)v3, v43);
  sub_21E94B4((void **)&v58, "body");
  ModelPart::load((int)v47, v2, (const void **)&v58, 0);
  v7 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v58 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v57, "tail");
  ModelPart::load((int)v5, v2, (const void **)&v57, 0);
  v8 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v57 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v56, "wing0");
  ModelPart::load((int)v46, v2, (const void **)&v56, 0);
  v9 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v56 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v55, "wing1");
  ModelPart::load((int)v45, v2, (const void **)&v55, 0);
  v10 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v55 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v54, "head");
  ModelPart::load((int)(v3 + 6), v2, (const void **)&v54, 0);
  v11 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v54 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v53, "head2");
  ModelPart::load((int)v4, v2, (const void **)&v53, 0);
  v12 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v53 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  ModelPart::addChild((ModelPart *)(v3 + 6), v4);
  sub_21E94B4((void **)&v52, "beak1");
  ModelPart::load((int)v3 + 2028, v2, (const void **)&v52, 0);
  v13 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v52 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  ModelPart::addChild((ModelPart *)(v3 + 6), (ModelPart *)((char *)v3 + 2028));
  sub_21E94B4((void **)&v51, "beak2");
  ModelPart::load((int)(v3 + 281), v2, (const void **)&v51, 0);
  v14 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v51 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  ModelPart::addChild((ModelPart *)(v3 + 6), (ModelPart *)(v3 + 281));
  sub_21E94B4((void **)&v50, "feather");
  ModelPart::load((int)(v3 + 61), v2, (const void **)&v50, 0);
  v15 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v50 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  ModelPart::addChild((ModelPart *)(v3 + 6), (ModelPart *)(v3 + 61));
  sub_21E94B4((void **)&v49, "leg0");
  ModelPart::load((int)v44, v2, (const void **)&v49, 0);
  v16 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v49 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v48, "leg1");
  ModelPart::load((int)v43, v2, (const void **)&v48, 0);
  v17 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v48 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  return v3;
}


ParrotModel *__fastcall ParrotModel::setupAnim(ParrotModel *this, float _R1, float _R2, float _R3, float a5, float a6, float a7)
{
  ParrotModel *v7; // r4@1
  ParrotModel *result; // r0@1
  float v15; // r1@4
  float v17; // r1@4

  v7 = this;
  __asm
  {
    VLDR            S0, [SP,#0x38+arg_4]
    VLDR            S4, [SP,#0x38+arg_0]
    VMOV            S18, R2
  }
  _R0 = &mce::Math::RADDEG;
    VMOV            S16, R3
    VLDR            S2, [R0]
    VDIV.F32        S6, S0, S2
    VDIV.F32        S2, S4, S2
    VSTR            S6, [R4,#0x54]
    VMOV            S0, R1
    VSTR            S2, [R4,#0x58]
  *((_DWORD *)v7 + 23) = 0;
  *((_DWORD *)v7 + 12) = 0;
  *((_DWORD *)v7 + 177) = 0;
  *((_DWORD *)v7 + 232) = 0;
  *((_DWORD *)v7 + 397) = 1069547520;
  *((_DWORD *)v7 + 452) = -1077936128;
  result = (ParrotModel *)*((_DWORD *)v7 + 621);
  if ( result )
    if ( result == (ParrotModel *)2 )
      return result;
    if ( result == (ParrotModel *)3 )
    {
      _R5 = mce::Math::cos(*((mce::Math **)v7 + 620), _R1);
      _R0 = mce::Math::sin(*((mce::Math **)v7 + 620), v15);
      __asm
      {
        VMOV            S18, R0
        VLDR            S0, =15.69
      }
      *((_DWORD *)v7 + 12) = _R5;
        VADD.F32        S0, S18, S0
        VSTR            S0, [R4,#0x34]
      *((_DWORD *)v7 + 21) = 0;
      *((_DWORD *)v7 + 22) = 0;
      _R0 = mce::Math::sin(*((mce::Math **)v7 + 620), v17);
        VMOV.F32        S2, #1.5
        VLDR            S4, =0.4
        VMOV            S6, R0
        VLDR            S12, =16.5
        VMOV.F32        S0, #-1.5
        VLDR            S14, =16.94
        VMOV            S10, R5
        VLDR            S8, =0.0873
        VMUL.F32        S4, S6, S4
        VLDR            S6, =-0.0873
        VADD.F32        S12, S18, S12
        VLDR            S1, =21.07
        VSUB.F32        S6, S6, S16
        VADD.F32        S2, S10, S2
        VADD.F32        S14, S18, S14
        VADD.F32        S8, S16, S8
        VADD.F32        S0, S10, S0
        VADD.F32        S10, S18, S1
        VSTR            S4, [R4,#0x5C]
      *((_DWORD *)v7 + 177) = _R5;
        VSTR            S12, [R4,#0x2C8]
        VSTR            S6, [R1]
        VSTR            S2, [R7]
        VSTR            S14, [R0]
        VSTR            S8, [R0]
      result = (ParrotModel *)((char *)v7 + 1812);
        VSTR            S0, [R6]
      *((_DWORD *)v7 + 232) = _R5;
      __asm { VSTR            S10, [R4,#0x3A4] }
    }
    __asm
      VLDR            S2, =0.6662
      VMUL.F32        S20, S0, S2
  else
      VMOV            R0, S20
    _R0 = mce::Math::cos(_R0, _R1);
      VLDR            S2, =1.4
      VMUL.F32        S22, S18, S2
    _R1 = &mce::Math::PI;
      VLDR            S0, [R1]
      VADD.F32        S0, S0, S20
      VMOV            R1, S0
      VMOV            S0, R0
    _R0 = (int)v7 + 1184;
      VMUL.F32        S0, S22, S0
      VLDR            S2, [R0]
      VADD.F32        S0, S0, S2
      VSTR            S0, [R0]
    _R0 = mce::Math::cos(_R1, *(float *)&_R1);
    __asm { VMOV            S0, R0 }
    _R0 = (int)v7 + 1404;
    VMOV            R0, S20
    VLDR            S0, =0.3
    VLDR            S2, =15.69
    VMUL.F32        S22, S16, S0
    VMUL.F32        S18, S18, S0
    VADD.F32        S2, S22, S2
    VSTR            S2, [R4,#0x34]
  _R0 = mce::Math::cos(_R0, _R1);
    VMOV            S0, R0
    VLDR            S2, =1.015
    VLDR            S6, =21.07
    VMOV.F32        S4, #22.0
    VMUL.F32        S0, S18, S0
    VLDR            S8, =16.5
    VLDR            S10, =16.94
    VADD.F32        S6, S22, S6
    VLDR            S12, =0.0873
    VADD.F32        S8, S22, S8
    VADD.F32        S10, S22, S10
    VADD.F32        S12, S16, S12
    VADD.F32        S4, S22, S4
    VADD.F32        S0, S0, S2
    VLDR            S2, =-0.0873
    VSUB.F32        S2, S2, S16
    VSTR            S0, [R4,#0x3C4]
    VSTR            S6, [R4,#0x3A4]
    VSTR            S8, [R4,#0x2C8]
    VSTR            S2, [R1]
    VSTR            S10, [R0]
    VSTR            S12, [R0]
    VSTR            S4, [R0]
  result = (ParrotModel *)((char *)v7 + 1372);
  __asm { VSTR            S4, [R0] }
  return result;
}
