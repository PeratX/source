

void __fastcall SquidOutOfWaterGoal::~SquidOutOfWaterGoal(SquidOutOfWaterGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)Goal::~Goal(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall SquidOutOfWaterGoal::start(SquidOutOfWaterGoal *this)
{
  SquidOutOfWaterGoal *v1; // r4@1
  Random *v2; // r5@1
  float v10; // r1@1
  float v12; // r1@1
  int v14; // t1@1
  int result; // r0@1

  v1 = this;
  v2 = (Random *)(*((_DWORD *)this + 2) + 552);
  _R0 = Random::_genRandInt32(v2);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  }
  _R0 = &mce::Math::PI;
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VADD.F32        S0, S0, S0
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VMOV            R6, S0
  _R7 = mce::Math::cos(_R6, v10);
  Random::_genRandInt32(v2);
    VLDR            S16, =0.2
    VMOV            S0, R7
    VMUL.F32        S18, S0, S16
  _R0 = mce::Math::sin(_R6, v12);
  v14 = *((_DWORD *)v1 + 2);
    VMUL.F32        S0, S0, S16
    VSTR            S18, [R0]
  *(_DWORD *)(*((_DWORD *)v1 + 2) + 4324) = 0;
  result = *((_DWORD *)v1 + 2) + 4328;
  __asm { VSTR            S0, [R0] }
  return result;
}


int __fastcall SquidOutOfWaterGoal::canContinueToUse(SquidOutOfWaterGoal *this)
{
  return (*(int (**)(void))(**((_DWORD **)this + 2) + 208))() ^ 1;
}


void __fastcall SquidOutOfWaterGoal::~SquidOutOfWaterGoal(SquidOutOfWaterGoal *this)
{
  SquidOutOfWaterGoal::~SquidOutOfWaterGoal(this);
}


int __fastcall SquidOutOfWaterGoal::canUse(SquidOutOfWaterGoal *this)
{
  return (*(int (**)(void))(**((_DWORD **)this + 2) + 208))() ^ 1;
}
