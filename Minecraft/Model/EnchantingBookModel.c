

_QWORD *__fastcall EnchantingBookModel::EnchantingBookModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  __int64 v3; // r5@2
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+24h] [bp-6F4h]@2
  int v13; // [sp+28h] [bp-6F0h]@2
  int v14; // [sp+2Ch] [bp-6ECh]@2
  int v15; // [sp+30h] [bp-6E8h]@2
  int v16; // [sp+34h] [bp-6E4h]@2
  int v17; // [sp+38h] [bp-6E0h]@2
  int v18; // [sp+3Ch] [bp-6DCh]@2
  signed int v19; // [sp+40h] [bp-6D8h]@2
  int v20; // [sp+44h] [bp-6D4h]@2
  int v21; // [sp+48h] [bp-6D0h]@2
  int v22; // [sp+4Ch] [bp-6CCh]@2
  int v23; // [sp+50h] [bp-6C8h]@2
  int v24; // [sp+54h] [bp-6C4h]@2
  signed int v25; // [sp+58h] [bp-6C0h]@2
  int v26; // [sp+5Ch] [bp-6BCh]@2
  int v27; // [sp+60h] [bp-6B8h]@2
  signed int v28; // [sp+64h] [bp-6B4h]@2
  int v29; // [sp+68h] [bp-6B0h]@2
  int v30; // [sp+6Ch] [bp-6ACh]@2
  signed int v31; // [sp+70h] [bp-6A8h]@2
  int v32; // [sp+74h] [bp-6A4h]@2
  int v33; // [sp+78h] [bp-6A0h]@2
  signed int v34; // [sp+7Ch] [bp-69Ch]@2
  int v35; // [sp+80h] [bp-698h]@2
  int v36; // [sp+84h] [bp-694h]@2
  __int64 v37; // [sp+88h] [bp-690h]@2
  int v38; // [sp+90h] [bp-688h]@2
  signed int v39; // [sp+94h] [bp-684h]@2
  int v40; // [sp+98h] [bp-680h]@2
  int v41; // [sp+9Ch] [bp-67Ch]@2
  int v42; // [sp+A0h] [bp-678h]@2
  int v43; // [sp+A4h] [bp-674h]@2
  int v44; // [sp+A8h] [bp-670h]@2
  int v45; // [sp+ACh] [bp-66Ch]@2
  int v46; // [sp+B0h] [bp-668h]@2
  int v47; // [sp+B4h] [bp-664h]@2
  signed int v48; // [sp+B8h] [bp-660h]@2
  int v49; // [sp+BCh] [bp-65Ch]@2
  int v50; // [sp+C0h] [bp-658h]@2
  signed int v51; // [sp+C4h] [bp-654h]@2
  int v52; // [sp+C8h] [bp-650h]@2
  int v53; // [sp+CCh] [bp-64Ch]@2
  signed int v54; // [sp+D0h] [bp-648h]@2
  int v55; // [sp+D4h] [bp-644h]@2
  int v56; // [sp+D8h] [bp-640h]@2
  int v57; // [sp+DCh] [bp-63Ch]@2
  int v58; // [sp+E0h] [bp-638h]@2
  char v59; // [sp+E4h] [bp-634h]@2
  char v60; // [sp+1C0h] [bp-558h]@2
  char v61; // [sp+29Ch] [bp-47Ch]@2
  char v62; // [sp+378h] [bp-3A0h]@2
  char v63; // [sp+454h] [bp-2C4h]@2
  char v64; // [sp+530h] [bp-1E8h]@2
  char v65; // [sp+60Ch] [bp-10Ch]@2
  int v66; // [sp+6ECh] [bp-2Ch]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E5458;
  sub_21E94B4((void **)&v66, "enchanting_table_book");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v66);
  v2 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v66 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 145), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 1380)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(&v65), 0, 0, 64, 32);
  ModelPart::operator=((int)v1 + 60, (int)&v65);
  ModelPart::~ModelPart((ModelPart *)&v65);
  ModelPart::ModelPart(COERCE_FLOAT(&v64), 16, 0, 64, 32);
  ModelPart::operator=((int)(v1 + 35), (int)&v64);
  ModelPart::~ModelPart((ModelPart *)&v64);
  ModelPart::ModelPart(COERCE_FLOAT(&v63), 0, 10, 64, 32);
  ModelPart::operator=((int)v1 + 500, (int)&v63);
  ModelPart::~ModelPart((ModelPart *)&v63);
  ModelPart::ModelPart(COERCE_FLOAT(&v62), 12, 10, 64, 32);
  ModelPart::operator=((int)(v1 + 90), (int)&v62);
  ModelPart::~ModelPart((ModelPart *)&v62);
  ModelPart::ModelPart(COERCE_FLOAT(&v61), 24, 10, 64, 32);
  ModelPart::operator=((int)v1 + 940, (int)&v61);
  ModelPart::~ModelPart((ModelPart *)&v61);
  ModelPart::ModelPart(COERCE_FLOAT(&v60), 24, 10, 64, 32);
  ModelPart::operator=((int)(v1 + 145), (int)&v60);
  ModelPart::~ModelPart((ModelPart *)&v60);
  ModelPart::ModelPart(COERCE_FLOAT(&v59), 12, 0, 64, 32);
  ModelPart::operator=((int)v1 + 1380, (int)&v59);
  ModelPart::~ModelPart((ModelPart *)&v59);
  v56 = -1061158912;
  v57 = -1063256064;
  v58 = 0;
  v53 = 1086324736;
  v54 = 1092616192;
  v55 = 0;
  ModelPart::addBox(
    (ModelPart *)((char *)v1 + 60),
    (const Vec3 *)&v56,
    (const Vec3 *)&v53,
    0.0,
    (const Color *)&Color::WHITE);
  v50 = 0;
  v51 = -1063256064;
  v52 = 0;
  v47 = 1086324736;
  v48 = 1092616192;
  v49 = 0;
  ModelPart::addBox((ModelPart *)(v1 + 35), (const Vec3 *)&v50, (const Vec3 *)&v47, 0.0, (const Color *)&Color::WHITE);
  LODWORD(v3) = 1090519040;
  HIDWORD(v3) = 1065353216;
  v44 = 0;
  v45 = -1065353216;
  v41 = 1084227584;
  v42 = 1090519040;
  v46 = -1082298204;
  v43 = 1065353216;
    (ModelPart *)((char *)v1 + 500),
    (const Vec3 *)&v44,
    (const Vec3 *)&v41,
  v38 = 0;
  v39 = -1065353216;
  v40 = -1138501878;
  v36 = 1084227584;
  v37 = v3;
  ModelPart::addBox((ModelPart *)(v1 + 90), (const Vec3 *)&v38, (const Vec3 *)&v36, 0.0, (const Color *)&Color::WHITE);
  v33 = 0;
  v34 = -1065353216;
  v35 = 0;
  v30 = 1084227584;
  v31 = 1090519040;
  v32 = 0;
    (ModelPart *)((char *)v1 + 940),
    (const Vec3 *)&v33,
    (const Vec3 *)&v30,
  v27 = 0;
  v28 = -1065353216;
  v29 = 0;
  v24 = 1084227584;
  v25 = 1090519040;
  v26 = 0;
  ModelPart::addBox((ModelPart *)(v1 + 145), (const Vec3 *)&v27, (const Vec3 *)&v24, 0.0, (const Color *)&Color::WHITE);
  WORD1(v3) = -16512;
  v21 = v3;
  v22 = -1063256064;
  v18 = 0x40000000;
  v23 = 0;
  v19 = 1092616192;
  v20 = 0;
    (ModelPart *)((char *)v1 + 1380),
    (const Vec3 *)&v21,
    (const Vec3 *)&v18,
  v15 = 0;
  v16 = 0;
  v17 = v3;
  ModelPart::setPos((ModelPart *)((char *)v1 + 60), (const Vec3 *)&v15);
  v12 = 0;
  v13 = 0;
  v14 = 1065353216;
  ModelPart::setPos((ModelPart *)(v1 + 35), (const Vec3 *)&v12);
  __asm { VMOV.F32        S0, #0.5 }
  _R0 = &mce::Math::PI;
  __asm
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0]
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 35));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 500));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 90));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 940));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 145));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 1380));
  *((_DWORD *)v1 + 7) = v1 + 6;
  return v1;
}


AppPlatformListener *__fastcall EnchantingBookModel::~EnchantingBookModel(EnchantingBookModel *this)
{
  EnchantingBookModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5458;
  v2 = (EnchantingBookModel *)((char *)this + 48);
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)this + 1380));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall EnchantingBookModel::~EnchantingBookModel(EnchantingBookModel *this)
{
  EnchantingBookModel::~EnchantingBookModel(this);
}


unsigned __int64 __fastcall EnchantingBookModel::render(int a1, int a2, int a3, float a4, float a5, float a6, float a7, float a8, float a9)
{
  int v14; // [sp+0h] [bp-18h]@0
  int v15; // [sp+4h] [bp-14h]@0
  int v16; // [sp+8h] [bp-10h]@0
  int v17; // [sp+Ch] [bp-Ch]@0

  __asm
  {
    VLDR            S2, [SP,#0x18+arg_4]
    VLDR            S0, [SP,#0x18+arg_8]
    VLDR            S4, [SP,#0x18+arg_C]
    VLDR            S6, [SP,#0x18+arg_10]
    VSTR            S2, [SP,#0x18+var_18]
    VSTR            S0, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
    VSTR            S6, [SP,#0x18+var_C]
  }
  return EnchantingBookModel::render(a1, *(float *)&a2, a4, a5, v14, v15, v16, v17);
}


unsigned __int64 __fastcall EnchantingBookModel::render(int a1, float a2, float a3, float a4, int a5, int a6, int a7, int a8)
{
  int v8; // r4@1
  int v13; // r7@1
  float v14; // r8@1
  __int64 v16; // r0@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  __int64 v19; // r0@1
  __int64 v20; // r0@1
  __int64 v21; // r0@1

  v8 = a1;
  __asm { VLDR            S0, [SP,#0x30+arg_8] }
  v13 = a1 + 60;
  v14 = a2;
  __asm
  {
    VLDR            S2, [SP,#0x30+arg_4]
    VLDR            S16, [SP,#0x30+arg_C]
    VSTR            S2, [SP,#0x30+var_30]
    VSTR            S0, [SP,#0x30+var_2C]
    VSTR            S16, [SP,#0x30+var_28]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R6, S16 }
  ModelPart::render(__PAIR__(LODWORD(v14), v13), v8, _R6, 0, 0);
  LODWORD(v16) = v8 + 280;
  v17 = __PAIR__(LODWORD(v14), ModelPart::render(v16, v8, _R6, 0, 0));
  LODWORD(v17) = v8 + 500;
  v18 = __PAIR__(LODWORD(v14), ModelPart::render(v17, v8, _R6, 0, 0));
  LODWORD(v18) = v8 + 720;
  v19 = __PAIR__(LODWORD(v14), ModelPart::render(v18, v8, _R6, 0, 0));
  LODWORD(v19) = v8 + 940;
  v20 = __PAIR__(LODWORD(v14), ModelPart::render(v19, v8, _R6, 0, 0));
  LODWORD(v20) = v8 + 1160;
  v21 = __PAIR__(LODWORD(v14), ModelPart::render(v20, v8, _R6, 0, 0));
  LODWORD(v21) = v8 + 1380;
  return __PAIR__(LODWORD(v14), ModelPart::render(v21, v8, _R6, 0, 0));
}


int __fastcall EnchantingBookModel::setupAnim(EnchantingBookModel *this, float _R1, float a3, float a4, float a5, float a6, float a7)
{
  EnchantingBookModel *v11; // r4@1
  float v18; // r1@1
  float v19; // r1@1
  float v20; // r1@1
  float v21; // r1@1
  int result; // r0@1

  __asm
  {
    VLDR            S0, =0.02
    VMOV            S2, R1
  }
  v11 = this;
  _R5 = a4;
  __asm { VMUL.F32        S0, S2, S0 }
  _R6 = a3;
  __asm { VMOV            R0, S0 }
  _R0 = mce::Math::sin(_R0, _R1);
    VMOV            S2, R0
    VLDR            S0, =0.1
    VMOV.F32        S4, #1.25
    VMUL.F32        S0, S2, S0
    VLDR            S2, [SP,#0x10+arg_0]
    VMOV            S10, R5
    VMOV            S8, R6
  _R0 = &mce::Math::PI;
    VLDR            S12, [R0]
    VADD.F32        S0, S0, S4
    VMUL.F32        S4, S0, S2
    VNMUL.F32       S0, S0, S2
    VADD.F32        S6, S4, S4
    VMOV            R5, S4
    VMUL.F32        S8, S6, S8
    VMUL.F32        S6, S6, S10
    VADD.F32        S10, S4, S12
    VSUB.F32        S2, S4, S8
    VSUB.F32        S6, S4, S6
    VSTR            S10, [R4,#0x64]
    VSTR            S0, [R4,#0x140]
    VSTR            S4, [R4,#0x21C]
    VSTR            S0, [R4,#0x2F8]
    VSTR            S2, [R4,#0x3D4]
    VSTR            S6, [R0]
  *((_DWORD *)v11 + 125) = mce::Math::sin(_R5, v18);
  *((_DWORD *)v11 + 180) = mce::Math::sin(_R5, v19);
  *((_DWORD *)v11 + 235) = mce::Math::sin(_R5, v20);
  result = mce::Math::sin(_R5, v21);
  *((_DWORD *)v11 + 290) = result;
  return result;
}


void __fastcall EnchantingBookModel::~EnchantingBookModel(EnchantingBookModel *this)
{
  EnchantingBookModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5458;
  v2 = (EnchantingBookModel *)((char *)this + 48);
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)this + 1380));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((EnchantingBookModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
