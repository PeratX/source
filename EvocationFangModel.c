

void __fastcall EvocationFangModel::~EvocationFangModel(EvocationFangModel *this)
{
  EvocationFangModel::~EvocationFangModel(this);
}


_QWORD *__fastcall EvocationFangModel::EvocationFangModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  __int64 v3; // r2@2
  __int64 v4; // r2@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-9Ch]@2
  signed int v9; // [sp+8h] [bp-98h]@2
  int v10; // [sp+Ch] [bp-94h]@2
  int v11; // [sp+10h] [bp-90h]@2
  int v12; // [sp+14h] [bp-8Ch]@2
  int v13; // [sp+18h] [bp-88h]@2
  int v14; // [sp+1Ch] [bp-84h]@2
  int v15; // [sp+20h] [bp-80h]@2
  int v16; // [sp+24h] [bp-7Ch]@2
  int v17; // [sp+28h] [bp-78h]@2
  signed int v18; // [sp+2Ch] [bp-74h]@2
  int v19; // [sp+30h] [bp-70h]@2
  int v20; // [sp+34h] [bp-6Ch]@2
  int v21; // [sp+38h] [bp-68h]@2
  int v22; // [sp+3Ch] [bp-64h]@2
  int v23; // [sp+40h] [bp-60h]@2
  int v24; // [sp+44h] [bp-5Ch]@2
  int v25; // [sp+48h] [bp-58h]@2
  int v26; // [sp+4Ch] [bp-54h]@2
  signed int v27; // [sp+50h] [bp-50h]@2
  signed int v28; // [sp+54h] [bp-4Ch]@2
  int v29; // [sp+58h] [bp-48h]@2
  signed int v30; // [sp+5Ch] [bp-44h]@2
  signed int v31; // [sp+60h] [bp-40h]@2
  int v32; // [sp+64h] [bp-3Ch]@2
  int v33; // [sp+68h] [bp-38h]@2
  int v34; // [sp+6Ch] [bp-34h]@2
  int v35; // [sp+74h] [bp-2Ch]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E54B0;
  sub_21E94B4((void **)&v35, "fang");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v35);
  v2 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 500)), 0, 0, 64, 32);
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 35));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 500));
  *((_DWORD *)v1 + 7) = v1 + 6;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v29 = 1092616192;
  v30 = 1094713344;
  v31 = 1092616192;
  ModelPart::addBox(
    (ModelPart *)((char *)v1 + 60),
    (const Vec3 *)&v32,
    (const Vec3 *)&v29,
    0.0,
    (const Color *)&Color::WHITE);
  v26 = -1063256064;
  v27 = 1102053376;
  v28 = -1063256064;
  ModelPart::setPos((ModelPart *)((char *)v1 + 60), (const Vec3 *)&v26);
  LODWORD(v3) = 0;
  ModelPart::texOffs((ModelPart *)(v1 + 35), 40, v3);
  v23 = 0;
  v24 = 0;
  v20 = 1082130432;
  v21 = 1096810496;
  v25 = 0;
  v22 = 1090519040;
  ModelPart::addBox((ModelPart *)(v1 + 35), (const Vec3 *)&v23, (const Vec3 *)&v20, 0.01, (const Color *)&Color::WHITE);
  v17 = 1069547520;
  v18 = 1102053376;
  v19 = -1065353216;
  ModelPart::setPos((ModelPart *)(v1 + 35), (const Vec3 *)&v17);
  LODWORD(v4) = 0;
  ModelPart::texOffs((ModelPart *)((char *)v1 + 500), 40, v4);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v11 = 1082130432;
  v12 = 1096810496;
  v13 = 1090519040;
    (ModelPart *)((char *)v1 + 500),
    (const Vec3 *)&v14,
    (const Vec3 *)&v11,
  v8 = -1077936128;
  v9 = 1102053376;
  v10 = 1082130432;
  ModelPart::setPos((ModelPart *)((char *)v1 + 500), (const Vec3 *)&v8);
  return v1;
}


void __fastcall EvocationFangModel::~EvocationFangModel(EvocationFangModel *this)
{
  EvocationFangModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E54B0;
  v2 = (EvocationFangModel *)((char *)this + 48);
  ModelPart::~ModelPart((EvocationFangModel *)((char *)this + 500));
  ModelPart::~ModelPart((EvocationFangModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((EvocationFangModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


unsigned __int64 __fastcall EvocationFangModel::render(int a1, float a2, int a3, int _R3, int a5, int a6, int a7, int a8, int a9)
{
  int v13; // r4@1
  float v14; // r5@1
  __int64 v18; // r0@3
  __int64 v19; // r0@3
  __int64 v20; // r0@3

  __asm { VMOV            S16, R3 }
  v13 = a1;
  __asm
  {
    VMOV.F32        S0, #1.0
    VADD.F32        S2, S16, S16
  }
  v14 = a2;
  _R0 = &mce::Math::PI;
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
    VMUL.F32        S4, S2, S2
    VMUL.F32        S2, S4, S2
    VLDR            S4, =0.35
    VSUB.F32        S0, S0, S2
    VLDR            S2, =2.7
    VMUL.F32        S2, S16, S2
    VMUL.F32        S0, S0, S4
    VLDR            S4, [R0]
    VMOV            R0, S2
    VMUL.F32        S0, S4, S0
    VSUB.F32        S2, S4, S0
    VADD.F32        S0, S0, S4
    VSTR            S2, [R4,#0x144]
    VSTR            S4, [R4,#0x21C]
    VSTR            S0, [R4,#0x220]
  _R0 = mce::Math::sin(_R0, a2);
    VMOV            S0, R0
    VLDR            S2, =-7.2
    VMOV.F32        S4, #24.0
    VADD.F32        S0, S0, S16
  LODWORD(v18) = v13 + 60;
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R4,#0x11C]
    VSTR            S0, [R4,#0x1F8]
    VSTR            S0, [R4,#0x40]
  v19 = __PAIR__(LODWORD(v14), ModelPart::render(v18, v13, a9, 0, 0));
  LODWORD(v19) = v13 + 280;
  v20 = __PAIR__(LODWORD(v14), ModelPart::render(v19, v13, a9, 0, 0));
  LODWORD(v20) = v13 + 500;
  return __PAIR__(LODWORD(v14), ModelPart::render(v20, v13, a9, 0, 0));
}


AppPlatformListener *__fastcall EvocationFangModel::~EvocationFangModel(EvocationFangModel *this)
{
  EvocationFangModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E54B0;
  v2 = (EvocationFangModel *)((char *)this + 48);
  ModelPart::~ModelPart((EvocationFangModel *)((char *)this + 500));
  ModelPart::~ModelPart((EvocationFangModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((EvocationFangModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}
