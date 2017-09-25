

void __fastcall PolarBearModel::~PolarBearModel(PolarBearModel *this)
{
  PolarBearModel::~PolarBearModel(this);
}


PolarBearModel *__fastcall PolarBearModel::prepareMobModel(PolarBearModel *this, Mob *a2, float a3, float a4, float a5)
{
  PolarBearModel *v5; // r4@1
  PolarBearModel *result; // r0@1

  v5 = this;
  _R0 = PolarBear::getStandingAnimationScale(a2, a5);
  __asm
  {
    VMOV            S0, R0
    VMOV.F32        S2, #1.0
    VMUL.F32        S0, S0, S0
    VSUB.F32        S2, S2, S0
    VSTR            S0, [R0]
  }
  result = (PolarBearModel *)((char *)v5 + 1596);
  __asm { VSTR            S2, [R0] }
  return result;
}


AppPlatformListener *__fastcall PolarBearModel::~PolarBearModel(PolarBearModel *this)
{
  PolarBearModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5B40;
  mce::MaterialPtr::~MaterialPtr((PolarBearModel *)((char *)this + 1604));
  return j_j_j__ZN14QuadrupedModelD2Ev(v1);
}


signed __int64 __fastcall PolarBearModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r5@1
  Entity *v10; // r6@1
  int v11; // r4@1
  __int64 v16; // r0@1
  __int64 v22; // r0@2
  __int64 v23; // r0@2
  __int64 v26; // r0@4
  __int64 v27; // r0@4
  __int64 v28; // r0@4
  __int64 v29; // r0@4
  char v31; // [sp+10h] [bp-28h]@2

  v9 = a1;
  v10 = (Entity *)LODWORD(a3);
  v11 = a2;
  __asm
  {
    VLDR            S0, [SP,#0x38+arg_C]
    VLDR            S2, [SP,#0x38+arg_8]
    VLDR            S16, [SP,#0x38+arg_10]
    VSTR            S2, [SP,#0x38+var_38]
    VSTR            S0, [SP,#0x38+var_34]
    VSTR            S16, [SP,#0x38+var_30]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  if ( Entity::isBaby(v10) == 1 )
    *(_DWORD *)(v9 + 1588) = -1082130432;
    *(_DWORD *)(v9 + 1592) = 1077936128;
    MatrixStack::push((MatrixStack *)&v31, *(_DWORD *)(v11 + 16) + 16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v31);
    __asm
    {
      VMOV.F32        S0, #1.25
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
    }
    _R1 = v9 + 1592;
    _R2 = v9 + 1588;
      VLDR            S4, [R0,#0x14]
      VMOV            R3, S16
      VLDR            S0, [R2]
      VLDR            S2, [R1]
      VMUL.F32        S0, S0, S16
      VLDR            S6, [R0,#0x18]
      VMUL.F32        S2, S2, S16
      VLDR            S10, [R0,#0x20]
      VLDR            S12, [R0,#0x24]
      VLDR            S14, [R0,#0x28]
      VLDR            S3, [R0,#0x10]
      VLDR            S8, [R0,#0x1C]
      VLDR            S1, [R0,#0x2C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S12, S12, S2
      VMUL.F32        S3, S3, S0
      VMUL.F32        S6, S6, S0
      VMUL.F32        S14, S14, S2
      VMUL.F32        S10, S10, S2
      VMUL.F32        S0, S8, S0
      VMUL.F32        S2, S1, S2
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
    HIDWORD(v22) = v11;
    LODWORD(v22) = v9 + 48;
    ModelPart::render(v22, v9, _R3, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v31);
  else
    __asm { VMOV            R3, S16 }
    LODWORD(v16) = v9 + 48;
    v23 = __PAIR__(v11, ModelPart::render(v16, v9, _R3, 0, 0));
  __asm { VMOV            R6, S16 }
  LODWORD(v23) = v9 + 488;
  v26 = __PAIR__(v11, ModelPart::render(v23, v9, _R6, 0, 0));
  LODWORD(v26) = v9 + 708;
  v27 = __PAIR__(v11, ModelPart::render(v26, v9, _R6, 0, 0));
  LODWORD(v27) = v9 + 928;
  v28 = __PAIR__(v11, ModelPart::render(v27, v9, _R6, 0, 0));
  LODWORD(v28) = v9 + 1148;
  v29 = __PAIR__(v11, ModelPart::render(v28, v9, _R6, 0, 0));
  LODWORD(v29) = v9 + 1368;
  return __PAIR__(v11, ModelPart::render(v29, v9, _R6, 0, 0));
}


QuadrupedModel *__fastcall PolarBearModel::PolarBearModel(QuadrupedModel *a1, const GeometryPtr *a2)
{
  QuadrupedModel *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  QuadrupedModel::QuadrupedModel(a1, a2);
  *(_DWORD *)v2 = &off_26E5B40;
  sub_21E94B4((void **)&v7, "polar_bear");
  mce::MaterialPtr::MaterialPtr(
    (QuadrupedModel *)((char *)v2 + 1604),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v7);
  v3 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  *((_DWORD *)v2 + 7) = (char *)v2 + 1604;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = -1087163597;
  *((_DWORD *)v2 + 4) = 1056964608;
  return v2;
}


void __fastcall PolarBearModel::~PolarBearModel(PolarBearModel *this)
{
  PolarBearModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5B40;
  mce::MaterialPtr::~MaterialPtr((PolarBearModel *)((char *)this + 1604));
  QuadrupedModel::~QuadrupedModel(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


PolarBearModel *__fastcall PolarBearModel::setupAnim(PolarBearModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  PolarBearModel *result; // r0@1
  float v17; // [sp+0h] [bp-18h]@0
  float v18; // [sp+4h] [bp-14h]@0
  float v19; // [sp+8h] [bp-10h]@0

  __asm { VLDR            S0, [SP,#0x18+arg_0] }
  _R4 = this;
  __asm
  {
    VLDR            S2, [SP,#0x18+arg_4]
    VLDR            S4, [SP,#0x18+arg_8]
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
  }
  QuadrupedModel::setupAnim(this, a2, a3, a4, v17, v18, v19);
    VMOV.F32        S0, #14.0
    VLDR            S8, =-0.35
    VMOV.F32        S4, #-6.0
    VMOV.F32        S6, #9.0
    VMOV.F32        S10, #11.0
  _R1 = (int)_R4 + 1596;
  _R0 = &mce::Math::PI;
    VMOV.F32        S14, #0.5
    VMOV.F32        S2, #-8.0
    VLDR            S1, [R1]
    VMOV.F32        S5, #-4.0
    VLDR            S7, =0.45
    VLDR            S12, [R0]
  _R0 = (int)_R4 + 1600;
    VMUL.F32        S0, S1, S0
    VMUL.F32        S8, S12, S8
    VLDR            S3, [R0]
    VMUL.F32        S6, S1, S6
    VMUL.F32        S10, S3, S10
    VMUL.F32        S4, S3, S4
  _R1 = (int)_R4 + 1404;
    VMUL.F32        S14, S12, S14
    VMUL.F32        S2, S1, S2
    VMUL.F32        S5, S3, S5
    VMUL.F32        S8, S8, S3
    VMUL.F32        S7, S3, S7
    VADD.F32        S6, S10, S6
    VADD.F32        S0, S0, S4
    VMOV.F32        S4, #-12.0
    VMOV.F32        S10, #-16.0
    VADD.F32        S2, S5, S2
    VADD.F32        S8, S14, S8
    VMUL.F32        S14, S7, S12
    VLDR            S7, =0.15
    VSTR            S6, [R4,#0x1EC]
    VMOV.F32        S5, #-3.0
    VMUL.F32        S10, S1, S10
    VSTR            S8, [R4,#0x20C]
    VMOV.F32        S8, #10.0
    VSTR            S0, [R0]
    VSTR            S2, [R0]
  result = (PolarBearModel *)((char *)_R4 + 1184);
    VLDR            S6, [R0]
    VSUB.F32        S6, S6, S14
    VMUL.F32        S8, S1, S8
    VMUL.F32        S1, S3, S5
    VSTR            S6, [R0]
    VMUL.F32        S6, S7, S12
    VSTR            S0, [R3]
    VSTR            S2, [R2]
    VADD.F32        S2, S8, S4
    VLDR            S0, [R1]
    VADD.F32        S4, S1, S10
    VSUB.F32        S0, S0, S14
    VSTR            S0, [R1]
    VSTR            S2, [R4,#0x34]
    VSTR            S4, [R4,#0x38]
    VLDR            S0, [R4,#0x54]
    VADD.F32        S0, S6, S0
    VSTR            S0, [R4,#0x54]
  return result;
}
