

void __fastcall WolfModel::~WolfModel(WolfModel *this)
{
  WolfModel::~WolfModel(this);
}


int __fastcall WolfModel::setupAnim(int result, float a2, float a3, float a4, float a5, float a6, float a7)
{
  __asm
  {
    VLDR            S0, [SP,#arg_4]
    VLDR            S4, [SP,#arg_0]
  }
  *(float *)(result + 1636) = a4;
  _R1 = &mce::Math::DEGRAD;
    VLDR            S2, [R1]
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S2, S4
    VSTR            S0, [R0,#0x60]
    VSTR            S2, [R0,#0x64]
  return result;
}


AppPlatformListener *__fastcall WolfModel::~WolfModel(WolfModel *this)
{
  WolfModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E60C4;
  v2 = (WolfModel *)((char *)this + 48);
  ModelPart::~ModelPart((WolfModel *)((char *)this + 1600));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall WolfModel::~WolfModel(WolfModel *this)
{
  WolfModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E60C4;
  v2 = (WolfModel *)((char *)this + 48);
  ModelPart::~ModelPart((WolfModel *)((char *)this + 1600));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((WolfModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall WolfModel::prepareMobModel(WolfModel *this, Mob *a2, float _R2, float _R3, float a5)
{
  Entity *v5; // r5@1
  WolfModel *v6; // r4@1
  float v11; // r1@1
  float v17; // r1@6
  float v22; // r1@6
  float v24; // r1@6
  int result; // r0@7
  signed int v30; // [sp+0h] [bp-E0h]@6
  signed int v31; // [sp+4h] [bp-DCh]@6
  int v32; // [sp+8h] [bp-D8h]@6
  int v33; // [sp+Ch] [bp-D4h]@6
  signed int v34; // [sp+10h] [bp-D0h]@6
  int v35; // [sp+14h] [bp-CCh]@6
  int v36; // [sp+18h] [bp-C8h]@6
  signed int v37; // [sp+1Ch] [bp-C4h]@6
  int v38; // [sp+20h] [bp-C0h]@6
  int v39; // [sp+24h] [bp-BCh]@6
  int v40; // [sp+28h] [bp-B8h]@6
  int v41; // [sp+2Ch] [bp-B4h]@6
  int v42; // [sp+30h] [bp-B0h]@6
  int v43; // [sp+34h] [bp-ACh]@6
  int v44; // [sp+38h] [bp-A8h]@6
  int v45; // [sp+3Ch] [bp-A4h]@6
  signed int v46; // [sp+40h] [bp-A0h]@6
  int v47; // [sp+44h] [bp-9Ch]@6
  int v48; // [sp+48h] [bp-98h]@6
  int v49; // [sp+4Ch] [bp-94h]@6
  int v50; // [sp+50h] [bp-90h]@6
  int v51; // [sp+54h] [bp-8Ch]@5
  signed int v52; // [sp+58h] [bp-88h]@5
  signed int v53; // [sp+5Ch] [bp-84h]@5
  int v54; // [sp+60h] [bp-80h]@5
  int v55; // [sp+64h] [bp-7Ch]@5
  int v56; // [sp+68h] [bp-78h]@5
  int v57; // [sp+6Ch] [bp-74h]@5
  signed int v58; // [sp+70h] [bp-70h]@5
  signed int v59; // [sp+74h] [bp-6Ch]@5
  int v60; // [sp+78h] [bp-68h]@5
  int v61; // [sp+7Ch] [bp-64h]@5
  int v62; // [sp+80h] [bp-60h]@5
  int v63; // [sp+84h] [bp-5Ch]@5
  int v64; // [sp+88h] [bp-58h]@5
  int v65; // [sp+8Ch] [bp-54h]@5
  int v66; // [sp+90h] [bp-50h]@5
  signed int v67; // [sp+94h] [bp-4Ch]@5
  int v68; // [sp+98h] [bp-48h]@5
  int v69; // [sp+9Ch] [bp-44h]@5
  int v70; // [sp+A0h] [bp-40h]@5
  int v71; // [sp+A4h] [bp-3Ch]@5

  v5 = a2;
  v6 = this;
  __asm
  {
    VMOV            S18, R3
    VMOV            S20, R2
  }
  if ( Entity::isAngry(a2) )
    __asm { VLDR            S0, =0.0 }
  else
    __asm
    {
      VLDR            S0, =0.6662
      VMUL.F32        S0, S20, S0
      VMOV            R0, S0
    }
    _R0 = mce::Math::cos(_R0, v11);
      VLDR            S0, =1.4
      VMOV            S2, R0
      VMUL.F32        S0, S18, S0
      VMUL.F32        S0, S0, S2
    VLDR            S16, [SP,#0xE0+arg_0]
    VSTR            S0, [R0]
  if ( Entity::isSitting(v5) == 1 )
    v69 = -1082130432;
    v70 = 1098907648;
    v71 = -1069547520;
    ModelPart::setPos((WolfModel *)((char *)v6 + 280), (const Vec3 *)&v69);
    __asm { VLDR            S0, =0.4 }
    _R0 = &mce::Math::PI;
      VLDR            S18, [R0]
      VSTR            S0, [R4,#0x13C]
    *((_DWORD *)v6 + 80) = 0;
    v66 = 0;
    v67 = 1099956224;
    v68 = 0;
    ModelPart::setPos((WolfModel *)((char *)v6 + 500), (const Vec3 *)&v66);
      VMOV.F32        S0, #0.25
      VSTR            S0, [R4,#0x218]
    v63 = -1082130432;
    v64 = 1101529088;
    v65 = 1086324736;
    ModelPart::setPos((WolfModel *)((char *)v6 + 1600), (const Vec3 *)&v63);
    v60 = -1071644672;
    v61 = 1102053376;
    v62 = 0x40000000;
    ModelPart::setPos((WolfModel *)((char *)v6 + 720), (const Vec3 *)&v60);
      VMOV.F32        S0, #1.5
      VMUL.F32        S20, S18, S0
      VSTR            S20, [R4,#0x2F4]
    v57 = 1056964608;
    v58 = 1102053376;
    v59 = 0x40000000;
    ModelPart::setPos((WolfModel *)((char *)v6 + 940), (const Vec3 *)&v57);
      VLDR            S0, =1.85
      VSTR            S20, [R4,#0x3D0]
      VMUL.F32        S18, S18, S0
      VSTR            S18, [R0]
    v54 = -1071686615;
    v55 = 1099431936;
    v56 = -1065353216;
    ModelPart::setPos((WolfModel *)((char *)v6 + 1160), (const Vec3 *)&v54);
    __asm { VSTR            S18, [R0] }
    v51 = 1057132380;
    v52 = 1099431936;
    v53 = -1065353216;
    ModelPart::setPos((WolfModel *)((char *)v6 + 1380), (const Vec3 *)&v51);
    v48 = 0;
    v49 = 1096810496;
    v50 = 0x40000000;
    ModelPart::setPos((WolfModel *)((char *)v6 + 500), (const Vec3 *)&v48);
    __asm { VLDR            S0, =90.0 }
    _R0 = &mce::Math::DEGRAD;
      VLDR            S2, [R0]
      VMUL.F32        S0, S2, S0
    v45 = -1082130432;
    v46 = 1096810496;
    v47 = -1069547520;
    ModelPart::setPos((WolfModel *)((char *)v6 + 280), (const Vec3 *)&v45);
    *((_DWORD *)v6 + 79) = *((_DWORD *)v6 + 134);
    v42 = -1082130432;
    v43 = 1094713344;
    v44 = 1090519040;
    ModelPart::setPos((WolfModel *)((char *)v6 + 1600), (const Vec3 *)&v42);
    v39 = -1071644672;
    v40 = 1098907648;
    v41 = 1088421888;
    ModelPart::setPos((WolfModel *)((char *)v6 + 720), (const Vec3 *)&v39);
    v36 = 1056964608;
    v37 = 1098907648;
    v38 = 1088421888;
    ModelPart::setPos((WolfModel *)((char *)v6 + 940), (const Vec3 *)&v36);
    v33 = -1071644672;
    v34 = 1098907648;
    v35 = -1065353216;
    ModelPart::setPos((WolfModel *)((char *)v6 + 1160), (const Vec3 *)&v33);
    v30 = 1056964608;
    v31 = 1098907648;
    v32 = -1065353216;
    ModelPart::setPos((WolfModel *)((char *)v6 + 1380), (const Vec3 *)&v30);
      VMUL.F32        S20, S20, S0
      VMOV            R6, S20
    _R0 = mce::Math::cos(_R6, v17);
      VLDR            S2, =1.4
      VMUL.F32        S18, S18, S2
    _R1 = &mce::Math::PI;
      VLDR            S0, [R1]
      VADD.F32        S0, S0, S20
      VMOV            R7, S0
      VMOV            S0, R0
      VSTR            S0, [R4,#0x2F4]
    _R0 = mce::Math::cos(_R7, COERCE_FLOAT(&mce::Math::PI));
      VSTR            S0, [R4,#0x3D0]
    _R0 = mce::Math::cos(_R7, v22);
      VSTR            S0, [R0]
    _R0 = mce::Math::cos(_R6, v24);
  __asm { VMOV            R6, S16 }
  _R7 = Wolf::getHeadRollAngle(v5, _R6);
  _R0 = Wolf::getBodyRollAngle(v5, _R6, 0.0);
    VMOV            S2, R0
    VMOV            S0, R7
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x68]
  *((_DWORD *)v6 + 81) = Wolf::getBodyRollAngle(v5, _R6, -0.08);
  *((_DWORD *)v6 + 136) = Wolf::getBodyRollAngle(v5, _R6, -0.16);
  result = Wolf::getBodyRollAngle(v5, _R6, -0.2);
  *((_DWORD *)v6 + 411) = result;
  return result;
}


_QWORD *__fastcall WolfModel::WolfModel(_QWORD *a1, int a2)
{
  int v2; // r10@1
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
  int v13; // r3@10
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
  unsigned int *v29; // r2@39
  signed int v30; // r1@41
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
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
  *(_DWORD *)v3 = &off_26E60C4;
  sub_21E94B4((void **)&v41, "wolf");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v41);
  v4 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v41 - 4);
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
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 90), 0, 0, 64, 32);
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
    v17 = (unsigned int *)(v40 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v39, "upperBody");
  ModelPart::load((int)(v3 + 35), v2, (const void **)&v39, 0);
  v6 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v39 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v38, "body");
  ModelPart::load((int)v3 + 500, v2, (const void **)&v38, 0);
  v7 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v38 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v37, "leg0");
  ModelPart::load((int)(v3 + 90), v2, (const void **)&v37, 0);
  v8 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v37 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v36, "leg1");
  ModelPart::load((int)v3 + 940, v2, (const void **)&v36, 0);
  v9 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v36 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v35, "leg2");
  ModelPart::load((int)(v3 + 145), v2, (const void **)&v35, 0);
  v10 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v35 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v34, "leg3");
  ModelPart::load((int)v3 + 1380, v2, (const void **)&v34, 0);
  v11 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v33, "tail");
  ModelPart::load((int)(v3 + 200), v2, (const void **)&v33, 0);
  v12 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v33 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (int)(v3 + 1);
  *(_DWORD *)v13 = 0;
  *(_DWORD *)(v13 + 4) = -1082130432;
  *(_DWORD *)(v13 + 8) = 1050253722;
  return v3;
}


signed __int64 __fastcall WolfModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r5@1
  __int64 v15; // r0@1
  __int64 v19; // r0@2
  __int64 v22; // r0@4
  __int64 v23; // r0@4
  __int64 v24; // r0@4
  __int64 v25; // r0@4
  __int64 v26; // r0@4
  __int64 v27; // r0@4
  char v29; // [sp+10h] [bp-28h]@2

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
    MatrixStack::push((MatrixStack *)&v29, *(_DWORD *)(v14 + 16) + 16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    __asm
    {
      VMOV.F32        S0, #-9.0
      VLDR            S4, [R0,#0x14]
      VADD.F32        S2, S16, S16
      VLDR            S10, [R0,#0x20]
      VLDR            S12, [R0,#0x24]
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
    }
    _R0 = __PAIR__(v14, MatrixStack::MatrixStackRef::operator->((int)&v29));
      VLDR            S0, =1.6
      VMOV            R3, S16
      VLDR            S2, [R0]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0xC]
      VLDR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x10]
      VLDR            S2, [R0,#0x14]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VSTR            S2, [R0,#0x20]
      VLDR            S2, [R0,#0x24]
      VSTR            S2, [R0,#0x24]
      VLDR            S2, [R0,#0x28]
      VSTR            S2, [R0,#0x28]
      VLDR            S2, [R0,#0x2C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x2C]
    LODWORD(_R0) = v9 + 60;
    ModelPart::render(_R0, v9, _R3, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v29);
  else
    __asm { VMOV            R3, S16 }
    LODWORD(v15) = v9 + 60;
    v19 = __PAIR__(v14, ModelPart::render(v15, v9, _R3, 0, 0));
  __asm { VMOV            R6, S16 }
  LODWORD(v19) = v9 + 500;
  v22 = __PAIR__(v14, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 720;
  v23 = __PAIR__(v14, ModelPart::render(v22, v9, _R6, 0, 0));
  LODWORD(v23) = v9 + 940;
  v24 = __PAIR__(v14, ModelPart::render(v23, v9, _R6, 0, 0));
  LODWORD(v24) = v9 + 1160;
  v25 = __PAIR__(v14, ModelPart::render(v24, v9, _R6, 0, 0));
  LODWORD(v25) = v9 + 1380;
  v26 = __PAIR__(v14, ModelPart::render(v25, v9, _R6, 0, 0));
  LODWORD(v26) = v9 + 1600;
  v27 = __PAIR__(v14, ModelPart::render(v26, v9, _R6, 0, 0));
  LODWORD(v27) = v9 + 280;
  return __PAIR__(v14, ModelPart::render(v27, v9, _R6, 0, 0));
}
