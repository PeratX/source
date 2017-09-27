

int __fastcall GuardianModel::setupAnim(GuardianModel *this, Entity *a2, float a3, float a4, float a5, float a6, float a7, float a8)
{
  GuardianModel *v9; // r10@1
  float v17; // r1@4
  int v18; // r6@4
  int v19; // r5@4
  float v26; // r1@5
  float v28; // r1@5
  mce::Math *v30; // r0@7
  mce::Math *v31; // r6@7
  float v32; // r1@7
  float v34; // r1@7
  float v36; // r1@7
  int result; // r0@7
  int v39; // r6@8
  int v40; // r7@8
  char *v41; // r0@8
  int v42; // r1@8
  int v43; // r0@8
  float v44; // r3@9
  float v45; // r1@9
  float v46; // r3@13
  float v53; // r1@18
  float v55; // r1@18
  float v57; // [sp+8h] [bp-B0h]@4
  float v58; // [sp+10h] [bp-A8h]@13
  float v60; // [sp+1Ch] [bp-9Ch]@13
  float v63; // [sp+28h] [bp-90h]@13
  float v66; // [sp+34h] [bp-84h]@9
  float v68; // [sp+40h] [bp-78h]@9
  float v71; // [sp+4Ch] [bp-6Ch]@9

  _R4 = a2;
  v9 = this;
  Guardian::isElderGhost(a2);
  __asm
  {
    VLDR            S0, [SP,#0xB8+arg_8]
    VLDR            S2, [SP,#0xB8+arg_4]
    VLDR            S16, [SP,#0xB8+arg_0]
  }
  if ( _ZF )
    __asm
    {
      VLDR            S4, [R4,#0x1A0]
      VCVT.F32.S32    S4, S4
      VSUB.F32        S4, S16, S4
    }
  else
    __asm { VLDR            S4, =0.0 }
  __asm { VMOV            R1, S4 }
  _R0 = &mce::Math::DEGRAD;
    VLDR            S4, [R0]
    VMUL.F32        S0, S4, S0
    VMUL.F32        S2, S4, S2
    VSTR            S0, [R10,#0x60]
    VSTR            S2, [R10,#0x64]
  v57 = _R1;
  _R0 = Guardian::getSpikesAnimation(_R4, _R1);
    VMOV.F32        S18, #1.0
    VLDR            S2, =-0.55
    VMOV            S0, R0
    VMOV.F32        S4, #1.5
  v18 = (int)v9 + 1160;
    VMOV.F32        S26, #16.0
    VLDR            S24, =0.01
  v19 = 0;
  _R0 = &mce::Math::PI;
  _R8 = 0;
    VSUB.F32        S0, S18, S0
    VMUL.F32        S20, S16, S4
    VLDR            S16, [R0]
    VMUL.F32        S0, S0, S2
    VADD.F32        S22, S0, S18
  do
    _R0 = (char *)&GuardianModel::SPIKE_ANGLES + v19;
    __asm { VMOV            S2, R8 }
    _R9 = (char *)&GuardianModel::SPIKE_POSITIONS + v19;
      VLDR            S0, [R0]
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S0, S16
      VADD.F32        S2, S2, S20
      VSTR            S0, [R6,#0x24]
      VLDR            S0, [R0,#4]
      VMOV            R7, S2
      VSTR            S0, [R6,#0x28]
      VLDR            S0, [R0,#8]
      VSTR            S0, [R6,#0x2C]
      VLDR            S28, [R9]
    _R0 = mce::Math::cos(_R7, v17);
      VMOV            S0, R0
      VMUL.F32        S0, S0, S24
      VADD.F32        S0, S22, S0
      VMUL.F32        S0, S0, S28
      VSTR            S0, [R6]
      VLDR            S28, [R9,#4]
    _R0 = mce::Math::cos(_R7, v26);
      VADD.F32        S0, S0, S26
      VSTR            S0, [R6,#4]
      VLDR            S28, [R9,#8]
    _R0 = mce::Math::cos(_R7, v28);
    __asm { VMOV            S0, R0 }
    v19 += 12;
    ++_R8;
      VSTR            S0, [R6,#8]
    v18 += 220;
  while ( !_ZF );
  v30 = (mce::Math *)Guardian::getTailAnimation(_R4, v57);
  v31 = v30;
  _R0 = mce::Math::sin(v30, v32);
    VMOV            S2, R0
    VLDR            S0, =0.05
    VMUL.F32        S0, S2, S0
    VMUL.F32        S0, S0, S16
    VSTR            S0, [R10,#0x21C]
  _R0 = mce::Math::sin(v31, v34);
    VLDR            S0, =0.1
    VMUL.F32        S0, S16, S0
    VSTR            S0, [R10,#0x2F8]
  *((_DWORD *)v9 + 180) = -1077936128;
  *((_DWORD *)v9 + 181) = 1056964608;
  *((_DWORD *)v9 + 182) = 1096810496;
  _R0 = mce::Math::sin(v31, v36);
    VLDR            S0, =0.15
    VSTR            S0, [R10,#0x3D4]
  *((_DWORD *)v9 + 235) = 1056964608;
  *((_DWORD *)v9 + 236) = 1056964608;
  *((_DWORD *)v9 + 237) = 1086324736;
  *((_DWORD *)v9 + 72) = -1056702464;
  result = Guardian::isElderGhost(_R4);
  if ( !result )
    v39 = Guardian::getTargetEntity(_R4);
    v40 = Entity::getLevel(_R4);
    v41 = Guardian::getEyeTarget(_R4);
    v43 = Level::fetchEntity(v40, v42, *(_QWORD *)v41, *(_QWORD *)v41 >> 32, 0);
    if ( v39 )
      Entity::getAttachPos((AABB *)&v71, v39, 6, 0);
      Entity::getAttachPos((AABB *)&v68, (int)_R4, 6, 0);
      Entity::getViewVector((Entity *)&v66, *(float *)&_R4, 0.0, v44);
      __asm
      {
        VLDR            S0, [SP,#0xB8+var_74]
        VLDR            S2, [SP,#0xB8+var_68]
        VLDR            S24, =0.0
        VSUB.F32        S0, S2, S0
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S18, S24 }
        VLDR            S20, [SP,#0xB8+var_84]
        VLDR            S22, [SP,#0xB8+var_7C]
        VSTR            S18, [R10,#0x11C]
        VLDR            S0, [SP,#0xB8+var_6C]
        VLDR            S2, [SP,#0xB8+var_64]
        VLDR            S4, [SP,#0xB8+var_78]
        VLDR            S6, [SP,#0xB8+var_70]
    else
      if ( !v43 )
LABEL_19:
        result = 1;
        *((_BYTE *)v9 + 333) = 1;
        return result;
      Entity::getAttachPos((AABB *)&v63, v43, 6, 0);
      Entity::getAttachPos((AABB *)&v60, (int)_R4, 6, 0);
      Entity::getViewVector((Entity *)&v58, *(float *)&_R4, 0.0, v46);
        VLDR            S0, [SP,#0xB8+var_98]
        VLDR            S2, [SP,#0xB8+var_8C]
        VLDR            S20, [SP,#0xB8+var_A8]
        VLDR            S22, [SP,#0xB8+var_A0]
        VLDR            S0, [SP,#0xB8+var_90]
        VLDR            S2, [SP,#0xB8+var_88]
        VLDR            S4, [SP,#0xB8+var_9C]
        VLDR            S6, [SP,#0xB8+var_94]
      VSUB.F32        S26, S4, S0
      VSUB.F32        S28, S6, S2
      VMUL.F32        S0, S26, S26
      VMUL.F32        S2, S28, S28
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    _R0 = mce::Math::sqrt(_R0, v45);
      VLDR            D1, =0.0001
      VMOV.F32        S18, S24
      VCVT.F64.F32    D2, S0
      VCMPE.F64       D2, D1
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
        VDIV.F32        S18, S28, S0
        VDIV.F32        S24, S26, S0
      VMOV.F32        S0, #0.5
      VMUL.F32        S0, S16, S0
      VMOV            R5, S0
    _R6 = cosf(_R5);
    _R0 = sinf(_R5);
      VMOV            S2, R6
      VMUL.F32        S4, S0, S24
      VMUL.F32        S6, S2, S18
      VMUL.F32        S2, S2, S24
      VMUL.F32        S0, S0, S18
      VSUB.F32        S4, S6, S4
      VADD.F32        S0, S0, S2
      VMUL.F32        S2, S4, S22
      VMUL.F32        S0, S0, S20
    _R6 = mce::Math::sqrt((mce::Math *)((unsigned int)_R5 & 0x7FFFFFFF), v53);
    _R0 = mce::Math::signum(_R5, v55);
      VADD.F32        S0, S0, S0
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R10,#0x118]
    goto LABEL_19;
  return result;
}


unsigned __int64 __fastcall GuardianModel::render(__int64 a1, float a2, float a3, float a4, int a5, int a6, int a7, int a8)
{
  __int64 v12; // r4@1

  __asm
  {
    VLDR            S0, [SP,#0x28+arg_4]
    VLDR            S16, [SP,#0x28+arg_10]
  }
  v12 = a1;
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDR            S6, [SP,#0x28+arg_0]
      VMOV            R12, S6
      VLDR            S2, [SP,#0x28+arg_C]
      VLDR            S4, [SP,#0x28+arg_8]
      VSTR            S0, [SP,#0x28+var_28]
      VSTR            S4, [SP,#0x28+var_24]
      VSTR            S2, [SP,#0x28+var_20]
      VSTR            S16, [SP,#0x28+var_1C]
    }
    (*(void (**)(void))(*(_DWORD *)a1 + 80))();
  __asm { VMOV            R3, S16 }
  LODWORD(a1) = v12 + 60;
  return __PAIR__(HIDWORD(v12), ModelPart::render(a1, v12, _R3, 0, 0));
}


AppPlatformListener *__fastcall GuardianModel::~GuardianModel(GuardianModel *this)
{
  GuardianModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E55B8;
  v2 = (GuardianModel *)((char *)this + 48);
  ModelPart::~ModelPart((GuardianModel *)((char *)this + 3580));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 3360));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 3140));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 2920));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 2700));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 2480));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 2260));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 2040));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 1820));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((GuardianModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall GuardianModel::~GuardianModel(GuardianModel *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = GuardianModel::~GuardianModel(this);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall GuardianModel::GuardianModel(_QWORD *a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r8@1
  _QWORD *v5; // r11@1
  const char *v6; // r1@1
  void *v7; // r0@3
  int v8; // r7@4
  int v9; // r6@4
  void *v10; // r0@4
  void *v11; // r0@5
  void *v12; // r0@6
  void *v13; // r0@7
  void *v14; // r0@8
  void *v15; // r0@9
  void *v16; // r0@10
  void *v17; // r0@11
  void *v18; // r0@12
  void *v19; // r0@13
  void *v20; // r0@14
  void *v21; // r0@15
  void *v22; // r0@16
  void *v23; // r0@17
  void *v24; // r0@18
  void *v25; // r0@19
  void *v26; // r0@20
  unsigned int *v28; // r2@22
  signed int v29; // r1@24
  unsigned int *v30; // r2@26
  signed int v31; // r1@28
  unsigned int *v32; // r2@30
  signed int v33; // r1@32
  unsigned int *v34; // r2@34
  signed int v35; // r1@36
  unsigned int *v36; // r2@38
  signed int v37; // r1@40
  unsigned int *v38; // r2@42
  signed int v39; // r1@44
  unsigned int *v40; // r2@46
  signed int v41; // r1@48
  unsigned int *v42; // r2@50
  signed int v43; // r1@52
  unsigned int *v44; // r2@54
  signed int v45; // r1@56
  unsigned int *v46; // r2@58
  signed int v47; // r1@60
  unsigned int *v48; // r2@62
  signed int v49; // r1@64
  unsigned int *v50; // r2@66
  signed int v51; // r1@68
  unsigned int *v52; // r2@70
  signed int v53; // r1@72
  unsigned int *v54; // r2@74
  signed int v55; // r1@76
  unsigned int *v56; // r2@78
  signed int v57; // r1@80
  unsigned int *v58; // r2@82
  signed int v59; // r1@84
  unsigned int *v60; // r2@86
  signed int v61; // r1@88
  unsigned int *v62; // r2@90
  signed int v63; // r1@92
  int v64; // [sp+44h] [bp-B4h]@20
  int v65; // [sp+4Ch] [bp-ACh]@19
  int v66; // [sp+54h] [bp-A4h]@18
  int v67; // [sp+5Ch] [bp-9Ch]@17
  int v68; // [sp+64h] [bp-94h]@16
  int v69; // [sp+6Ch] [bp-8Ch]@15
  int v70; // [sp+74h] [bp-84h]@14
  int v71; // [sp+7Ch] [bp-7Ch]@13
  int v72; // [sp+84h] [bp-74h]@12
  int v73; // [sp+8Ch] [bp-6Ch]@11
  int v74; // [sp+94h] [bp-64h]@10
  int v75; // [sp+9Ch] [bp-5Ch]@9
  int v76; // [sp+A4h] [bp-54h]@8
  int v77; // [sp+ACh] [bp-4Ch]@7
  int v78; // [sp+B4h] [bp-44h]@6
  int v79; // [sp+BCh] [bp-3Ch]@5
  int v80; // [sp+C4h] [bp-34h]@4
  int v81; // [sp+CCh] [bp-2Ch]@3

  v3 = a3;
  v4 = a2;
  v5 = a1;
  Model::Model(a1);
  v6 = "guardian_ghost";
  if ( !v3 )
    v6 = "guardian";
  *(_DWORD *)v5 = &off_26E55B8;
  sub_21E94B4((void **)&v81, v6);
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v5 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v81);
  v7 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v81 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 500)), 0, 0, 64, 32);
  v8 = (int)(v5 + 90);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 90), 0, 0, 64, 32);
  v9 = (int)v5 + 940;
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 145), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 1380)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 200), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 1820)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 255), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 2260)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 310), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 2700)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 365), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 3140)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 420), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 3580)), 0, 0, 64, 32);
  *((_DWORD *)v5 + 7) = v5 + 6;
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 60));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 35));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 500));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 90));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 940));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 145));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)(v5 + 145));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 1380));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)((char *)v5 + 1380));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 200));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)(v5 + 200));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 1820));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)((char *)v5 + 1820));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 255));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)(v5 + 255));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 2260));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)((char *)v5 + 2260));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 310));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)(v5 + 310));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 2700));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)((char *)v5 + 2700));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 365));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)(v5 + 365));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 3140));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)((char *)v5 + 3140));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 420));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)(v5 + 420));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 3580));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)((char *)v5 + 3580));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)(v5 + 35));
  ModelPart::addChild((ModelPart *)((char *)v5 + 60), (ModelPart *)((char *)v5 + 500));
  ModelPart::addChild((ModelPart *)((char *)v5 + 500), (ModelPart *)(v5 + 90));
  ModelPart::addChild((ModelPart *)(v5 + 90), (ModelPart *)((char *)v5 + 940));
  sub_21E94B4((void **)&v80, "head");
  ModelPart::load((int)v5 + 60, v4, (const void **)&v80, 0);
  v10 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v80 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v8 = (int)(v5 + 90);
      v9 = (int)v5 + 940;
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v79, "eye");
  ModelPart::load((int)(v5 + 35), v4, (const void **)&v79, 0);
  v11 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v79 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v78, "tailpart0");
  ModelPart::load((int)v5 + 500, v4, (const void **)&v78, 0);
  v12 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v78 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v77, "tailpart1");
  ModelPart::load(v8, v4, (const void **)&v77, 0);
  v13 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v77 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v76, "tailpart2");
  ModelPart::load(v9, v4, (const void **)&v76, 0);
  v14 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v76 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v75, "spikepart0");
  ModelPart::load((int)(v5 + 145), v4, (const void **)&v75, 0);
  v15 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v75 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v74, "spikepart1");
  ModelPart::load((int)v5 + 1380, v4, (const void **)&v74, 0);
  v16 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v74 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v73, "spikepart2");
  ModelPart::load((int)(v5 + 200), v4, (const void **)&v73, 0);
  v17 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v73 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v72, "spikepart3");
  ModelPart::load((int)v5 + 1820, v4, (const void **)&v72, 0);
  v18 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v72 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v71, "spikepart4");
  ModelPart::load((int)(v5 + 255), v4, (const void **)&v71, 0);
  v19 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v71 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v70, "spikepart5");
  ModelPart::load((int)v5 + 2260, v4, (const void **)&v70, 0);
  v20 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v70 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v69, "spikepart6");
  ModelPart::load((int)(v5 + 310), v4, (const void **)&v69, 0);
  v21 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v69 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v68, "spikepart7");
  ModelPart::load((int)v5 + 2700, v4, (const void **)&v68, 0);
  v22 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v68 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v67, "spikepart8");
  ModelPart::load((int)(v5 + 365), v4, (const void **)&v67, 0);
  v23 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v67 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v66, "spikepart9");
  ModelPart::load((int)v5 + 3140, v4, (const void **)&v66, 0);
  v24 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v66 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v65, "spikepart10");
  ModelPart::load((int)(v5 + 420), v4, (const void **)&v65, 0);
  v25 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v65 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v64, "spikepart11");
  ModelPart::load((int)v5 + 3580, v4, (const void **)&v64, 0);
  v26 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v64 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  return v5;
}


void __fastcall GuardianModel::~GuardianModel(GuardianModel *this)
{
  GuardianModel::~GuardianModel(this);
}


int __fastcall GuardianModel::moveEye(int a1, float _R1, int _R2, int a4, int a5, int a6)
{
  float v19; // r1@5
  float v21; // r1@5
  int result; // r0@5

  __asm
  {
    VLDR            S0, [R2,#4]
    VMOV.F32        S4, #1.0
    VLDR            S2, [R1,#4]
    VLDR            S16, =0.0
  }
  _R5 = a4;
    VSUB.F32        S0, S2, S0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S4, S16 }
    VSTR            S4, [R4,#0x11C]
    VLDR            S0, [R1]
    VLDR            S4, [R2]
    VLDR            S2, [R1,#8]
    VLDR            S6, [R2,#8]
    VSUB.F32        S20, S4, S0
    VSUB.F32        S22, S6, S2
    VMUL.F32        S0, S20, S20
    VMUL.F32        S2, S22, S22
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  _R0 = mce::Math::sqrt(_R0, _R1);
    VMOV            S0, R0
    VLDR            D1, =0.0001
    VMOV.F32        S18, S16
  _R8 = a6;
    VCVT.F64.F32    D2, S0
    VCMPE.F64       D2, D1
  if ( !(_NF ^ _VF) )
    __asm
    {
      VDIV.F32        S18, S22, S0
      VDIV.F32        S16, S20, S0
    }
  __asm { VMOV.F32        S0, #0.5 }
  _R0 = &mce::Math::PI;
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VMOV            R6, S0
  _R7 = cosf(_R6);
  _R0 = sinf(_R6);
    VMOV            S2, R7
    VMUL.F32        S4, S0, S16
    VMUL.F32        S6, S2, S18
    VMUL.F32        S2, S2, S16
    VMUL.F32        S0, S0, S18
    VSUB.F32        S4, S6, S4
    VMOV            S6, R5
    VADD.F32        S0, S0, S2
    VMOV            S2, R8
    VMUL.F32        S2, S4, S2
    VMUL.F32        S0, S0, S6
    VMOV            R5, S0
  _R6 = mce::Math::sqrt((mce::Math *)((unsigned int)_R5 & 0x7FFFFFFF), v19);
  result = mce::Math::signum(_R5, v21);
    VMOV            S2, R6
    VADD.F32        S0, S0, S0
    VSTR            S0, [R4,#0x118]
  return result;
}
