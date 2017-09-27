

_QWORD *__fastcall ZombieModel::ZombieModel(_QWORD *a1, int a2)
{
  _QWORD *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  HumanoidModel::HumanoidModel(a1, a2);
  *(_DWORD *)v2 = &off_26DB290;
  sub_119C884((void **)&v7, "zombie");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v2 + 4308),
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  *((_DWORD *)v2 + 7) = (char *)v2 + 4308;
  return v2;
}


ZombieModel *__fastcall ZombieModel::setupAnim(ZombieModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float v13; // r1@1
  ZombieModel *result; // r0@1
  float v23; // [sp+0h] [bp-38h]@0
  float v24; // [sp+4h] [bp-34h]@0
  float v25; // [sp+8h] [bp-30h]@0

  __asm { VLDR            S0, [SP,#0x38+arg_0] }
  _R5 = a4;
  __asm { VLDR            S2, [SP,#0x38+arg_4] }
  _R4 = this;
  __asm
  {
    VLDR            S4, [SP,#0x38+arg_8]
    VSTR            S0, [SP,#0x38+var_38]
    VSTR            S2, [SP,#0x38+var_34]
    VSTR            S4, [SP,#0x38+var_30]
  }
  HumanoidModel::setupAnim(this, a2, a3, a4, v23, v24, v25);
  __asm { VLDR            S0, =3.4028e38 }
  result = (ZombieModel *)((char *)_R4 + 4300);
    VLDR            S2, [R0]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    result = (ZombieModel *)((char *)_R4 + 4304);
    __asm
    {
      VLDR            S2, [R0]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      __asm
      {
        VMOV            S16, R5
        VLDR            S0, [R4,#0x14]
      }
      _R0 = &mce::Math::PI;
        VLDR            S18, [R0]
        VMUL.F32        S0, S18, S0
        VMOV            R0, S0
      _R0 = mce::Math::sin(_R0, v13);
        VMOV.F32        S0, #1.0
        VLDR            S2, [R4,#0x14]
        VMOV            S20, R0
        VSUB.F32        S2, S0, S2
        VMUL.F32        S2, S2, S2
        VSUB.F32        S0, S0, S2
        VMUL.F32        S0, S0, S18
        VMOV            R1, S0
      _R0 = mce::Math::sin(_R1, *(float *)&_R1);
        VLDR            S0, =0.09
        VMOV            S4, R0
        VLDR            S2, =-1.2
        VMOV.F32        S8, #-0.5
        VMUL.F32        S0, S16, S0
        VLDR            S6, =0.4
        VMUL.F32        S2, S20, S2
        VMUL.F32        S4, S4, S6
        VLDR            S6, =0.6
      *((_DWORD *)_R4 + 200) = 0;
      __asm { VMUL.F32        S6, S20, S6 }
      *((_DWORD *)_R4 + 255) = 0;
        VMUL.F32        S0, S18, S8
        VADD.F32        S2, S4, S2
        VLDR            S4, =0.1
        VSUB.F32        S8, S6, S4
        VSUB.F32        S4, S4, S6
        VADD.F32        S0, S0, S2
        VSTR            S8, [R4,#0x31C]
        VSTR            S4, [R4,#0x3F8]
        VSTR            S0, [R4,#0x318]
        VSTR            S0, [R4,#0x3F4]
      _R0 = mce::Math::cos(_R0, 0.0);
        VLDR            S0, =0.067
        VLDR            S16, =0.05
        VMOV            S0, R0
        VMUL.F32        S0, S0, S16
        VADD.F32        S18, S0, S16
      result = (ZombieModel *)mce::Math::sin(_R1, *(float *)&_R1);
        VLDR            S0, [R4,#0x320]
        VMOV            S2, R0
        VADD.F32        S0, S0, S18
        VMUL.F32        S2, S2, S16
        VSTR            S0, [R4,#0x320]
        VLDR            S0, [R4,#0x3FC]
        VSUB.F32        S0, S0, S18
        VSTR            S0, [R4,#0x3FC]
        VLDR            S0, [R4,#0x318]
        VLDR            S0, [R4,#0x3F4]
  return result;
}


void __fastcall ZombieModel::~ZombieModel(ZombieModel *this)
{
  HumanoidModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB290;
  mce::MaterialPtr::~MaterialPtr((ZombieModel *)((char *)this + 4308));
  HumanoidModel::~HumanoidModel(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall ZombieModel::~ZombieModel(ZombieModel *this)
{
  ZombieModel::~ZombieModel(this);
}


AppPlatformListener *__fastcall ZombieModel::~ZombieModel(ZombieModel *this)
{
  HumanoidModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB290;
  mce::MaterialPtr::~MaterialPtr((ZombieModel *)((char *)this + 4308));
  return j_j_j__ZN13HumanoidModelD2Ev(v1);
}
