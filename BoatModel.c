

AppPlatformListener *__fastcall BoatModel::~BoatModel(BoatModel *this)
{
  BoatModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E824C;
  v2 = (BoatModel *)((char *)this + 48);
  ModelPart::~ModelPart((BoatModel *)((char *)this + 1380));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall BoatModel::~BoatModel(BoatModel *this)
{
  BoatModel::~BoatModel(this);
}


void __fastcall BoatModel::_makePaddle(BoatModel *this, bool a2, int a3)
{
  BoatModel::_makePaddle(this, a2, a3);
}


_QWORD *__fastcall BoatModel::BoatModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  bool v8; // r1@2
  bool v9; // r1@2
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  int v13; // [sp+24h] [bp-70Ch]@2
  signed int v14; // [sp+28h] [bp-708h]@2
  int v15; // [sp+2Ch] [bp-704h]@2
  char v16; // [sp+30h] [bp-700h]@2
  int v17; // [sp+10Ch] [bp-624h]@2
  signed int v18; // [sp+110h] [bp-620h]@2
  signed int v19; // [sp+114h] [bp-61Ch]@2
  char v20; // [sp+118h] [bp-618h]@2
  int v21; // [sp+1F4h] [bp-53Ch]@2
  int v22; // [sp+1F8h] [bp-538h]@2
  int v23; // [sp+1FCh] [bp-534h]@2
  int v24; // [sp+200h] [bp-530h]@2
  signed int v25; // [sp+204h] [bp-52Ch]@2
  int v26; // [sp+208h] [bp-528h]@2
  int v27; // [sp+20Ch] [bp-524h]@2
  signed int v28; // [sp+210h] [bp-520h]@2
  int v29; // [sp+214h] [bp-51Ch]@2
  int v30; // [sp+218h] [bp-518h]@2
  int v31; // [sp+21Ch] [bp-514h]@2
  int v32; // [sp+220h] [bp-510h]@2
  int v33; // [sp+224h] [bp-50Ch]@2
  signed int v34; // [sp+228h] [bp-508h]@2
  int v35; // [sp+22Ch] [bp-504h]@2
  int v36; // [sp+230h] [bp-500h]@2
  signed int v37; // [sp+234h] [bp-4FCh]@2
  int v38; // [sp+238h] [bp-4F8h]@2
  int v39; // [sp+23Ch] [bp-4F4h]@2
  signed int v40; // [sp+240h] [bp-4F0h]@2
  int v41; // [sp+244h] [bp-4ECh]@2
  int v42; // [sp+248h] [bp-4E8h]@2
  int v43; // [sp+24Ch] [bp-4E4h]@2
  int v44; // [sp+250h] [bp-4E0h]@2
  int v45; // [sp+254h] [bp-4DCh]@2
  signed int v46; // [sp+258h] [bp-4D8h]@2
  int v47; // [sp+25Ch] [bp-4D4h]@2
  int v48; // [sp+260h] [bp-4D0h]@2
  signed int v49; // [sp+264h] [bp-4CCh]@2
  signed int v50; // [sp+268h] [bp-4C8h]@2
  int v51; // [sp+26Ch] [bp-4C4h]@2
  int v52; // [sp+270h] [bp-4C0h]@2
  int v53; // [sp+274h] [bp-4BCh]@2
  int v54; // [sp+278h] [bp-4B8h]@2
  int v55; // [sp+27Ch] [bp-4B4h]@2
  int v56; // [sp+280h] [bp-4B0h]@2
  int v57; // [sp+284h] [bp-4ACh]@2
  int v58; // [sp+288h] [bp-4A8h]@2
  int v59; // [sp+28Ch] [bp-4A4h]@2
  int v60; // [sp+290h] [bp-4A0h]@2
  int v61; // [sp+294h] [bp-49Ch]@2
  int v62; // [sp+298h] [bp-498h]@2
  int v63; // [sp+29Ch] [bp-494h]@2
  int v64; // [sp+2A0h] [bp-490h]@2
  int v65; // [sp+2A4h] [bp-48Ch]@2
  char v66; // [sp+2A8h] [bp-488h]@2
  char v67; // [sp+384h] [bp-3ACh]@2
  char v68; // [sp+460h] [bp-2D0h]@2
  char v69; // [sp+53Ch] [bp-1F4h]@2
  char v70; // [sp+618h] [bp-118h]@2
  int v71; // [sp+6F8h] [bp-38h]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E824C;
  sub_21E94B4((void **)&v71, "boat");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v71);
  v2 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v71 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 145), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 1380)), 0, 0, 64, 32);
  *((_DWORD *)v1 + 7) = v1 + 6;
  ModelPart::ModelPart(COERCE_FLOAT(&v70), 0, 0, 128, 64);
  ModelPart::operator=((int)v1 + 60, (int)&v70);
  ModelPart::~ModelPart((ModelPart *)&v70);
  ModelPart::ModelPart(COERCE_FLOAT(&v69), 0, 19, 128, 64);
  ModelPart::operator=((int)(v1 + 35), (int)&v69);
  ModelPart::~ModelPart((ModelPart *)&v69);
  ModelPart::ModelPart(COERCE_FLOAT(&v68), 0, 27, 128, 64);
  ModelPart::operator=((int)v1 + 500, (int)&v68);
  ModelPart::~ModelPart((ModelPart *)&v68);
  ModelPart::ModelPart(COERCE_FLOAT(&v67), 0, 35, 128, 64);
  ModelPart::operator=((int)(v1 + 90), (int)&v67);
  ModelPart::~ModelPart((ModelPart *)&v67);
  ModelPart::ModelPart(COERCE_FLOAT(&v66), 0, 43, 128, 64);
  ModelPart::operator=((int)v1 + 940, (int)&v66);
  ModelPart::~ModelPart((ModelPart *)&v66);
  v63 = -1050673152;
  v64 = -1055916032;
  v65 = -1069547520;
  v60 = 1105199104;
  v61 = 1098907648;
  v62 = 1077936128;
  ModelPart::addBox(
    (ModelPart *)((char *)v1 + 60),
    (const Vec3 *)&v63,
    (const Vec3 *)&v60,
    0.0,
    (const Color *)&Color::WHITE);
  v57 = 0;
  v58 = 1077936128;
  v59 = 1065353216;
  ModelPart::setPos((ModelPart *)((char *)v1 + 60), (const Vec3 *)&v57);
  v54 = -1051721728;
  v51 = 1099956224;
  v55 = -1059061760;
  v52 = 1086324736;
  v56 = -1082130432;
  v53 = 0x40000000;
  ModelPart::addBox((ModelPart *)(v1 + 35), (const Vec3 *)&v54, (const Vec3 *)&v51, 0.0, (const Color *)&Color::WHITE);
  v48 = -1049624576;
  v49 = 1082130432;
  v50 = 1082130432;
  ModelPart::setPos((ModelPart *)(v1 + 35), (const Vec3 *)&v48);
  v45 = -1056964608;
  v46 = -1059061760;
  v42 = 1098907648;
  v43 = 1086324736;
  v47 = -1082130432;
  v44 = 0x40000000;
    (ModelPart *)((char *)v1 + 500),
    (const Vec3 *)&v45,
    (const Vec3 *)&v42,
  v39 = 1097859072;
  v40 = 1082130432;
  v41 = 0;
  ModelPart::setPos((ModelPart *)((char *)v1 + 500), (const Vec3 *)&v39);
  v36 = -1050673152;
  v37 = -1059061760;
  v38 = -1082130432;
  v33 = 1105199104;
  v34 = 1086324736;
  v35 = 0x40000000;
  ModelPart::addBox((ModelPart *)(v1 + 90), (const Vec3 *)&v36, (const Vec3 *)&v33, 0.0, (const Color *)&Color::WHITE);
  v30 = 0;
  v31 = 1082130432;
  v32 = -1055916032;
  ModelPart::setPos((ModelPart *)(v1 + 90), (const Vec3 *)&v30);
  v27 = -1050673152;
  v28 = -1059061760;
  v29 = -1082130432;
  v24 = 1105199104;
  v25 = 1086324736;
  v26 = 0x40000000;
    (ModelPart *)((char *)v1 + 940),
    (const Vec3 *)&v27,
    (const Vec3 *)&v24,
  v21 = 0;
  v22 = 1082130432;
  v23 = 1091567616;
  ModelPart::setPos((ModelPart *)((char *)v1 + 940), (const Vec3 *)&v21);
  __asm
    VMOV.F32        S0, #0.5
    VMOV.F32        S2, #1.5
  _R0 = &mce::Math::PI;
    VLDR            S16, [R0]
    VMUL.F32        S0, S16, S0
    VMUL.F32        S2, S16, S2
    VSTR            S0, [R4,#0x60]
    VSTR            S2, [R4,#0x140]
    VSTR            S0, [R4,#0x21C]
    VSTR            S16, [R4,#0x2F8]
  BoatModel::_makePaddle((BoatModel *)&v20, v8, 1);
  ModelPart::operator=((int)(v1 + 145), (int)&v20);
  ModelPart::~ModelPart((ModelPart *)&v20);
  v17 = 1077936128;
  v18 = -1063256064;
  v19 = 1091567616;
  ModelPart::setPos((ModelPart *)(v1 + 145), (const Vec3 *)&v17);
  BoatModel::_makePaddle((BoatModel *)&v16, v9, 0);
  ModelPart::operator=((int)v1 + 1380, (int)&v16);
  ModelPart::~ModelPart((ModelPart *)&v16);
  v13 = 1077936128;
  v14 = -1063256064;
  v15 = -1055916032;
  ModelPart::setPos((ModelPart *)((char *)v1 + 1380), (const Vec3 *)&v13);
    VLDR            S0, =0.0625
    VSTR            S16, [R0]
    VSTR            S0, [R0]
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 145));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 1380));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 35));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 500));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 90));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 940));
  return v1;
}


void __fastcall BoatModel::~BoatModel(BoatModel *this)
{
  BoatModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E824C;
  v2 = (BoatModel *)((char *)this + 48);
  ModelPart::~ModelPart((BoatModel *)((char *)this + 1380));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((BoatModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


unsigned __int64 __fastcall BoatModel::_animatePaddle(int a1, unsigned int a2, Entity *a3, int a4, int a5, int a6)
{
  int v6; // r6@1
  unsigned int v7; // r5@1
  int v8; // r4@1
  float v15; // r0@1
  void *v19; // r1@1

  v6 = a4;
  v7 = a2;
  v8 = a1;
  _R0 = Boat::getRowingTime(a3, a4, a6);
  __asm
  {
    VMOV.F32        S0, #20.0
    VMOV            S2, R0
    VMUL.F32        S16, S2, S0
    VMOV            R0, S16
  }
  v15 = sinf(_R0);
  __asm { VMOV.F32        S18, #1.0 }
  _R7 = v15;
    VSUB.F32        S0, S18, S16
    VMOV            R0, S0
  _R0 = sinf(_R0);
    VMOV.F32        S0, #0.25
    VMOV            S6, R0
    VLDR            S10, =-0.33333
    VMOV.F32        S4, #-0.125
    VADD.F32        S6, S6, S18
  v19 = &mce::Math::PI;
  __asm { VMOV            S8, R7 }
  LODWORD(_R0) = v8 + 220 * v6;
    VSUB.F32        S8, S8, S18
    VLDR            S2, [R1]
    VMUL.F32        S0, S2, S0
    VMUL.F32        S4, S2, S4
  HIDWORD(_R0) = _R0 + 1196;
    VMUL.F32        S10, S2, S10
    VMUL.F32        S6, S0, S6
    VMUL.F32        S4, S4, S8
    VSUB.F32        S0, S6, S0
    VADD.F32        S4, S4, S10
    VSUB.F32        S2, S2, S0
  if ( _ZF )
    __asm { VMOVEQ.F32      S0, S2 }
  __asm { VSTR            S4, [R1] }
  LODWORD(_R0) = _R0 + 1160;
  __asm { VSTR            S0, [R1] }
  return __PAIR__(v7, ModelPart::render(_R0, v8, a5, 0, 0));
}


void __fastcall BoatModel::_makePaddle(BoatModel *this, bool a2, int a3)
{
  int v3; // r5@1
  ModelPart *v4; // r4@1
  int v5; // r2@1
  int v10; // [sp+8h] [bp-40h]@5
  int v11; // [sp+Ch] [bp-3Ch]@5
  int v12; // [sp+10h] [bp-38h]@5
  float v13; // [sp+14h] [bp-34h]@5
  int v14; // [sp+18h] [bp-30h]@5
  int v15; // [sp+1Ch] [bp-2Ch]@5
  int v16; // [sp+20h] [bp-28h]@3
  signed int v17; // [sp+24h] [bp-24h]@3
  int v18; // [sp+28h] [bp-20h]@3
  int v19; // [sp+2Ch] [bp-1Ch]@3
  int v20; // [sp+30h] [bp-18h]@3
  signed int v21; // [sp+34h] [bp-14h]@3

  v3 = a3;
  v4 = this;
  v5 = 20;
  if ( v3 )
    v5 = 0;
  ModelPart::ModelPart(*(float *)&this, 62, v5, 128, 64);
  v19 = -1082130432;
  v20 = 0;
  v21 = -1063256064;
  v16 = 0x40000000;
  v17 = 0x40000000;
  v18 = 1099956224;
  ModelPart::addBox(v4, (const Vec3 *)&v19, (const Vec3 *)&v16, 0.0, (const Color *)&Color::WHITE);
  __asm
  {
    VLDR            S2, =-0.999
    VLDR            S0, =0.001
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
  v10 = 1065353216;
  v11 = 1086324736;
  __asm { VSTR            S0, [SP,#0x48+var_34] }
  v14 = -1069547520;
  v15 = 1090519040;
  v12 = 1088421888;
  ModelPart::addBox(v4, (const Vec3 *)&v13, (const Vec3 *)&v10, 0.0, (const Color *)&Color::WHITE);
}


int __fastcall BoatModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v10; // r9@1
  Entity *v11; // r8@1
  int v12; // r7@1
  int v13; // r10@1
  __int64 v19; // r0@1
  __int64 v20; // r0@1
  __int64 v21; // r0@1
  __int64 v22; // r0@1

  v9 = a1;
  v10 = LODWORD(a4);
  v11 = (Entity *)LODWORD(a3);
  v12 = a1 + 60;
  v13 = a2;
  __asm
  {
    VLDR            S0, [SP,#0x68+arg_C]
    VLDR            S2, [SP,#0x68+arg_8]
    VLDR            S16, [SP,#0x68+arg_10]
    VSTR            S2, [SP,#0x68+var_68]
    VSTR            S0, [SP,#0x68+var_64]
    VSTR            S16, [SP,#0x68+var_60]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R6, S16 }
  ModelPart::render(__PAIR__(v13, v12), v9, _R6, 0, 0);
  LODWORD(v19) = v9 + 280;
  v20 = __PAIR__(v13, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 500;
  v21 = __PAIR__(v13, ModelPart::render(v20, v9, _R6, 0, 0));
  LODWORD(v21) = v9 + 720;
  v22 = __PAIR__(v13, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 940;
  ModelPart::render(v22, v9, _R6, 0, 0);
  _R0 = Boat::getRowingTime(v11, 0, v10);
    VMOV.F32        S18, #20.0
    VMOV            S0, R0
    VMUL.F32        S20, S0, S18
    VMOV            R0, S20
  _R0 = sinf(_R0);
    VMOV.F32        S16, #1.0
    VMOV            S2, R0
  _R2 = &mce::Math::PI;
    VSUB.F32        S0, S16, S20
    VLDR            S22, [R2]
    VMOV.F32        S20, #0.25
    VSUB.F32        S26, S16, S2
    VMOV            R1, S0
    VMOV.F32        S0, #0.125
    VMUL.F32        S24, S22, S0
  _R0 = __PAIR__(v13, COERCE_UNSIGNED_INT(sinf(_R1)));
    VLDR            S2, =0.33333
    VMUL.F32        S20, S22, S20
    VADD.F32        S0, S0, S16
    VMUL.F32        S28, S22, S2
    VMUL.F32        S2, S24, S26
    VMUL.F32        S0, S0, S20
    VSUB.F32        S2, S2, S28
    VSUB.F32        S0, S0, S20
    VSTR            S2, [R0]
    VSTR            S0, [R0]
  LODWORD(_R0) = v9 + 1160;
  ModelPart::render(_R0, v9, _R6, 0, 0);
  _R0 = Boat::getRowingTime(v11, 1, v10);
    VMUL.F32        S18, S0, S18
    VMOV            R0, S18
    VSUB.F32        S0, S18, S16
    VSUB.F32        S18, S16, S0
    VMOV.F32        S2, #1.25
    VSUB.F32        S0, S0, S16
    VMUL.F32        S4, S24, S18
    VMUL.F32        S2, S22, S2
    VSUB.F32        S4, S4, S28
    VADD.F32        S0, S2, S0
    VSTR            S4, [R0]
  LODWORD(_R0) = v9 + 1380;
  return ModelPart::render(_R0, v9, _R6, 0, 0);
}
