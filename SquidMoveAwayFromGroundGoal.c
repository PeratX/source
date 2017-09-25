

int __fastcall SquidMoveAwayFromGroundGoal::start(SquidMoveAwayFromGroundGoal *this)
{
  SquidMoveAwayFromGroundGoal *v1; // r4@1
  Random *v2; // r5@1
  float v10; // r1@1
  float v13; // r1@1
  int v15; // t1@1
  int v16; // t1@1
  int result; // r0@1
  float v18; // [sp+4h] [bp-2Ch]@1

  v1 = this;
  v2 = (Random *)(*((_DWORD *)this + 2) + 552);
  _R0 = Random::_genRandInt32(v2);
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  }
  _R0 = &mce::Math::PI;
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VADD.F32        S0, S0, S0
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VMOV            R6, S0
  _R0 = mce::Math::cos(_R6, v10);
    VLDR            S18, =0.2
    VMUL.F32        S0, S0, S18
    VSTR            S0, [SP,#0x30+var_2C]
    VLDR            S2, =-0.1
    VADD.F32        S0, S0, S2
    VSTR            S0, [SP,#0x30+var_28]
  _R0 = mce::Math::sin(_R6, v13);
    VSTR            S0, [SP,#0x30+var_24]
  Squid::checkForSteeringCollision(*((Squid **)v1 + 2), (const Vec3 *)&v18, 5.0, (Vec3 *)&v18);
    VLDR            S0, =0.0025
    VLDR            S2, [SP,#0x30+var_2C]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [SP,#0x30+var_2C]
    VLDR            S4, [SP,#0x30+var_28]
    VMUL.F32        S4, S4, S0
    VSTR            S4, [SP,#0x30+var_28]
  v15 = *((_DWORD *)v1 + 2);
    VLDR            S6, [SP,#0x30+var_24]
    VMUL.F32        S0, S6, S0
    VSTR            S2, [R0]
  v16 = *((_DWORD *)v1 + 2);
  __asm { VSTR            S4, [R0] }
  result = *((_DWORD *)v1 + 2) + 4328;
  __asm { VSTR            S0, [R0] }
  return result;
}


void __fastcall SquidMoveAwayFromGroundGoal::~SquidMoveAwayFromGroundGoal(SquidMoveAwayFromGroundGoal *this)
{
  SquidMoveAwayFromGroundGoal::~SquidMoveAwayFromGroundGoal(this);
}


void __fastcall SquidMoveAwayFromGroundGoal::~SquidMoveAwayFromGroundGoal(SquidMoveAwayFromGroundGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)Goal::~Goal(this);
  j_j_j__ZdlPv_6(v1);
}
