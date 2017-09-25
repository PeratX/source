

void __fastcall EndermiteModel::~EndermiteModel(EndermiteModel *this)
{
  EndermiteModel::~EndermiteModel(this);
}


void __fastcall EndermiteModel::~EndermiteModel(EndermiteModel *this)
{
  EndermiteModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E83AC;
  v2 = (EndermiteModel *)((char *)this + 48);
  ModelPart::~ModelPart((EndermiteModel *)((char *)this + 2068));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 1848));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 1628));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 1408));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 1188));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 968));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 748));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 528));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 308));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 88));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


signed __int64 __fastcall EndermiteModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r5@1
  __int64 v16; // r0@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  __int64 v19; // r0@1

  v9 = a1;
  __asm { VLDR            S0, [SP,#0x30+arg_C] }
  v14 = a2;
  __asm
  {
    VLDR            S2, [SP,#0x30+arg_8]
    VLDR            S16, [SP,#0x30+arg_10]
    VSTR            S2, [SP,#0x30+var_30]
    VSTR            S0, [SP,#0x30+var_2C]
    VSTR            S16, [SP,#0x30+var_28]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R6, S16 }
  LODWORD(v16) = *(_DWORD *)(v9 + 60);
  v17 = __PAIR__(v14, ModelPart::render(v16, v9, _R6, 0, 0));
  LODWORD(v17) = *(_DWORD *)(v9 + 64);
  v18 = __PAIR__(v14, ModelPart::render(v17, v9, _R6, 0, 0));
  LODWORD(v18) = *(_DWORD *)(v9 + 68);
  v19 = __PAIR__(v14, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = *(_DWORD *)(v9 + 72);
  return __PAIR__(v14, ModelPart::render(v19, v9, _R6, 0, 0));
}


AppPlatformListener *__fastcall EndermiteModel::~EndermiteModel(EndermiteModel *this)
{
  EndermiteModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E83AC;
  v2 = (EndermiteModel *)((char *)this + 48);
  ModelPart::~ModelPart((EndermiteModel *)((char *)this + 2068));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 1848));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 1628));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 1408));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 1188));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 968));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 748));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 528));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 308));
  ModelPart::~ModelPart((EndermiteModel *)((char *)v1 + 88));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


int __fastcall EndermiteModel::setupAnim(EndermiteModel *this, float a2, float a3, float _R3, float a5, float a6, float a7)
{
  EndermiteModel *v11; // r4@1
  int v14; // t1@1
  int v18; // t1@1
  float v19; // r1@1
  int v21; // t1@1
  float v22; // r1@1
  int v25; // t1@1
  float v26; // r1@1
  int v28; // t1@1
  float v29; // r1@1
  int v32; // t1@1
  float v33; // r1@1
  int result; // r0@1

  __asm
  {
    VLDR            S0, =0.9
    VMOV            S2, R3
  }
  v11 = this;
    VMUL.F32        S16, S2, S0
    VMOV            R5, S16
  _R0 = mce::Math::cos(_R5, a2);
    VMOV            S2, R0
    VLDR            S0, =0.15
  v14 = *((_DWORD *)v11 + 15);
  _R1 = &mce::Math::PI;
    VLDR            S18, [R1]
    VMUL.F32        S0, S18, S0
    VMUL.F32        S2, S0, S2
    VADD.F32        S20, S0, S16
    VSTR            S2, [R0,#0x28]
  _R0 = mce::Math::sin(_R5, COERCE_FLOAT(&mce::Math::PI));
    VMOV            R5, S20
    VLDR            S0, =0.4
  v18 = *((_DWORD *)v11 + 15);
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R0]
  _R0 = mce::Math::cos(_R5, v19);
    VLDR            S0, =0.1
    VMUL.F32        S20, S18, S0
    VMOV            S0, R0
  v21 = *((_DWORD *)v11 + 16);
    VMUL.F32        S0, S20, S0
    VSTR            S0, [R0,#0x28]
  _R0 = mce::Math::sin(_R5, v22);
    VLDR            S0, =0.3
    VLDR            S2, =0.2
    VMUL.F32        S22, S18, S2
    VADD.F32        S0, S0, S16
    VMOV            R5, S0
  v25 = *((_DWORD *)v11 + 16);
    VMUL.F32        S0, S22, S0
  _R0 = mce::Math::cos(_R5, v26);
    VLDR            S0, =0.05
  v28 = *((_DWORD *)v11 + 17);
  mce::Math::sin(_R5, v29);
    VLDR            S0, =0.45
  **((_DWORD **)v11 + 17) = 0;
  _R0 = mce::Math::cos(_R5, 0.0);
  __asm { VMOV            S0, R0 }
  v32 = *((_DWORD *)v11 + 18);
  _R0 = mce::Math::sin(_R5, v33);
  result = *((_DWORD *)v11 + 18);
  return result;
}


_QWORD *__fastcall EndermiteModel::EndermiteModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  ModelPart *v7; // r1@2
  unsigned int v8; // r10@2
  _QWORD *v9; // r5@4
  ModelPart **v10; // r11@4
  ModelPart *v14; // r0@4
  ModelPart *v16; // r0@4
  int v17; // r0@4
  unsigned int *v20; // r2@10
  signed int v21; // r1@12
  int v22; // [sp+38h] [bp-70h]@4
  float v23; // [sp+44h] [bp-64h]@4
  float v24; // [sp+50h] [bp-58h]@4
  int v25; // [sp+54h] [bp-54h]@4
  int v26; // [sp+60h] [bp-48h]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E83AC;
  sub_21E94B4((void **)&v26, "endermite");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v26);
  v2 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 11), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 308)), 0, 5, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 66), 0, 14, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 748)), 0, 18, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 121), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 1188)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 176), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 1628)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 231), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 2068)), 0, 0, 64, 32);
  __asm
    VMOV.F32        S16, #-3.5
    VMOV.F32        S18, #-0.5
  *((_DWORD *)v1 + 7) = v1 + 6;
  __asm { VMOV.F32        S20, #0.5 }
  v7 = (ModelPart *)(v1 + 11);
  *((_DWORD *)v1 + 15) = v1 + 11;
  *((_DWORD *)v1 + 16) = (char *)v1 + 308;
  v8 = 0;
  *((_DWORD *)v1 + 17) = v1 + 66;
  *((_DWORD *)v1 + 18) = (char *)v1 + 748;
  while ( 1 )
    v9 = v1;
    Model::registerParts((Model *)v1, v7);
    v10 = (ModelPart **)((char *)v1 + 4 * v8 + 60);
    _R0 = &dword_262D2C4[3 * v8];
    _R9 = _R0[2];
    __asm { VLDR            S0, [R0] }
    _R4 = _R0[1];
    __asm
      VMOV            S2, R9
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VMOV            S8, R4
      VCVT.F32.S32    S8, S8
    v14 = *v10;
      VMUL.F32        S4, S0, S18
      VSTR            S0, [SP,#0xA8+var_64]
      VMUL.F32        S6, S2, S18
      VSTR            S8, [SP,#0xA8+var_60]
      VSTR            S2, [SP,#0xA8+var_5C]
      VSTR            S4, [SP,#0xA8+var_58]
    v25 = 0;
    __asm { VSTR            S6, [SP,#0xA8+var_50] }
    ModelPart::addBox(v14, (const Vec3 *)&v24, (const Vec3 *)&v23, 0.0, (const Color *)&Color::WHITE);
    _R0 = 24 - _R4;
      VMOV            S0, R0
    v16 = *v10;
    v22 = 0;
      VSTR            S0, [SP,#0xA8+var_6C]
      VSTR            S16, [SP,#0xA8+var_68]
    ModelPart::setPos(v16, (const Vec3 *)&v22);
    __asm { VSTR            S16, [R0] }
    v17 = v8 + 1;
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      ++v8;
      v1 = v9;
      _R1 = dword_262D2C4[3 * v17 + 2] + _R9;
      __asm
      {
        VMOV            S0, R1
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S20
        VADD.F32        S16, S0, S16
      }
      goto LABEL_3;
    v1 = v9;
    if ( v17 > 3 )
      return v9;
    v8 = 2147483648;
LABEL_3:
    v7 = (ModelPart *)*((_DWORD *)v1 + v8 + 15);
}
