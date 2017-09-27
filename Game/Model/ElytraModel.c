

void __fastcall ElytraModel::~ElytraModel(ElytraModel *this)
{
  ElytraModel::~ElytraModel(this);
}


void __fastcall ElytraModel::~ElytraModel(ElytraModel *this)
{
  ElytraModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5400;
  v2 = (ElytraModel *)((char *)this + 48);
  ModelPart::~ModelPart((ElytraModel *)((char *)this + 280));
  ModelPart::~ModelPart((ElytraModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall ElytraModel::ElytraModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+8h] [bp-60h]@2
  signed int v7; // [sp+Ch] [bp-5Ch]@2
  int v8; // [sp+10h] [bp-58h]@2
  int v9; // [sp+14h] [bp-54h]@2
  int v10; // [sp+18h] [bp-50h]@2
  int v11; // [sp+1Ch] [bp-4Ch]@2
  int v12; // [sp+20h] [bp-48h]@2
  signed int v13; // [sp+24h] [bp-44h]@2
  int v14; // [sp+28h] [bp-40h]@2
  int v15; // [sp+2Ch] [bp-3Ch]@2
  int v16; // [sp+30h] [bp-38h]@2
  int v17; // [sp+34h] [bp-34h]@2
  int v18; // [sp+3Ch] [bp-2Ch]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E5400;
  sub_21E94B4((void **)&v18, "elytra");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v18);
  v2 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 60)), 22, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 35), 22, 0, 64, 32);
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 35));
  *((_DWORD *)v1 + 7) = v1 + 6;
  v15 = -1054867456;
  v16 = 0;
  v17 = 0;
  v12 = 1092616192;
  v13 = 1101004800;
  v14 = 0x40000000;
  ModelPart::addBox(
    (ModelPart *)((char *)v1 + 60),
    (const Vec3 *)&v15,
    (const Vec3 *)&v12,
    1.0,
    (const Color *)&Color::WHITE);
  *((_BYTE *)v1 + 332) = 1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v6 = 1092616192;
  v7 = 1101004800;
  v8 = 0x40000000;
  ModelPart::addBox((ModelPart *)(v1 + 35), (const Vec3 *)&v9, (const Vec3 *)&v6, 1.0, (const Color *)&Color::WHITE);
  return v1;
}


AppPlatformListener *__fastcall ElytraModel::~ElytraModel(ElytraModel *this)
{
  ElytraModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5400;
  v2 = (ElytraModel *)((char *)this + 48);
  ModelPart::~ModelPart((ElytraModel *)((char *)this + 280));
  ModelPart::~ModelPart((ElytraModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


int __fastcall ElytraModel::prepareMobModel(ElytraModel *this, Mob *a2, float a3, float a4, float a5)
{
  int result; // r0@12

  _R4 = this;
  __asm { VMOV.F32        S0, #-15.0 }
  _R5 = a2;
  __asm { VMOV.F32        S2, #15.0 }
  _R0 = &mce::Math::DEGRAD;
  __asm
  {
    VLDR            S22, [R0]
    VMUL.F32        S16, S22, S0
    VMUL.F32        S18, S22, S2
  }
  _R0 = ModelPart::getOrigin((ElytraModel *)((char *)_R4 + 60));
  __asm { VLDR            S20, [R0,#4] }
  if ( Mob::isGliding(_R5) == 1 )
    __asm
    {
      VMOV.F32        S24, #1.0
      VLDR            S0, [R5,#0x70]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S2, S24
    }
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S2, [R5,#0x6C]
        VMUL.F32        S6, S0, S0
        VLDR            S4, [R5,#0x74]
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S2, S6, S2
        VADD.F32        S2, S2, S4
        VLDR            S4, =0.0001
        VSQRT.F32       S2, S2
        VCMPE.F32       S2, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        _R0 = &Vec3::ZERO;
        __asm { VLDR            S0, [R0,#4] }
      else
        __asm { VDIV.F32        S0, S0, S2 }
      __asm { VMOV            R0, S0 }
      _R0 = powf(COERCE_FLOAT(_R0 ^ 0x80000000), 1.5);
        VMOV.F32        S0, #1.0
        VMOV            S2, R0
        VSUB.F32        S2, S0, S2
      VMOV.F32        S0, #20.0
      VLDR            S4, =-90.0
      VSUB.F32        S6, S24, S2
      VMUL.F32        S4, S2, S4
      VMUL.F32        S0, S2, S0
      VMUL.F32        S2, S4, S22
      VMUL.F32        S4, S6, S16
      VMUL.F32        S6, S6, S18
      VMUL.F32        S0, S0, S22
      VADD.F32        S16, S2, S4
      VADD.F32        S18, S0, S6
      VLDR            S0, =0.0
  else if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R5 + 312))(_R5) == 1 )
      VMOV.F32        S0, #5.0
      VLDR            S2, =-45.0
      VLDR            S4, =40.0
      VMOV.F32        S20, #3.0
      VMUL.F32        S16, S22, S2
      VMUL.F32        S18, S22, S4
      VMUL.F32        S0, S22, S0
  else
    __asm { VLDR            S0, =0.0 }
  _R1 = (int)_R5 + 3500;
  _R2 = (int)_R5 + 3504;
  *((_DWORD *)_R4 + 15) = 1084227584;
  _R0 = (int)_R5 + 3508;
    VSTR            S20, [R4,#0x40]
    VLDR            S2, [R1]
    VLDR            S4, [R2]
    VLDR            S6, [R0]
    VSUB.F32        S8, S18, S2
    VSUB.F32        S0, S0, S4
    VLDR            S12, =0.1
    VSUB.F32        S10, S16, S6
    VMUL.F32        S8, S8, S12
    VMUL.F32        S0, S0, S12
    VMUL.F32        S10, S10, S12
    VADD.F32        S2, S8, S2
    VADD.F32        S0, S4, S0
    VADD.F32        S4, S6, S10
    VSTR            S2, [R1]
    VSTR            S0, [R2]
    VSTR            S4, [R0]
    VSTR            S2, [R4,#0x60]
    VSTR            S0, [R4,#0x64]
    VNEG.F32        S0, S0
    VSTR            S4, [R4,#0x68]
    VNEG.F32        S4, S4
    VLDR            S6, [R4,#0x3C]
    VNEG.F32        S6, S6
    VSTR            S6, [R4,#0x118]
    VSTR            S0, [R4,#0x140]
  result = *((_DWORD *)_R4 + 16);
  *((_DWORD *)_R4 + 71) = result;
    VSTR            S2, [R4,#0x13C]
    VSTR            S4, [R4,#0x144]
  return result;
}


int __fastcall ElytraModel::render(int a1, int a2, int a3, int a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r5@1
  int v10; // r4@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  char v20; // [sp+Ch] [bp-1Ch]@1

  v9 = a2;
  v10 = a1;
  MatrixStack::push((MatrixStack *)&v20, *(_DWORD *)(a2 + 16) + 16);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v20);
  __asm
  {
    VLDR            S0, [SP,#0x28+arg_10]
    VMOV.F32        S2, #0.125
    VLDR            S4, [R0,#0x20]
    VMOV            R6, S0
    VLDR            S6, [R0,#0x24]
    VLDR            S8, [R0,#0x28]
    VLDR            S10, [R0,#0x2C]
    VLDR            S12, [R0,#0x30]
    VLDR            S14, [R0,#0x34]
    VMUL.F32        S4, S4, S2
    VLDR            S1, [R0,#0x38]
    VMUL.F32        S6, S6, S2
    VLDR            S3, [R0,#0x3C]
    VMUL.F32        S8, S8, S2
    VMUL.F32        S2, S10, S2
    VADD.F32        S0, S12, S4
    VADD.F32        S4, S14, S6
    VADD.F32        S6, S1, S8
    VADD.F32        S2, S3, S2
    VSTR            S0, [R0,#0x30]
    VSTR            S4, [R0,#0x34]
    VSTR            S6, [R0,#0x38]
    VSTR            S2, [R0,#0x3C]
  }
  LODWORD(v17) = v10 + 60;
  v18 = __PAIR__(v9, ModelPart::render(v17, v10, _R6, 0, 0));
  LODWORD(v18) = v10 + 280;
  ModelPart::render(v18, v10, _R6, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v20);
}
