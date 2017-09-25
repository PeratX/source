

int __fastcall SlimeFloatGoal::tick(SlimeFloatGoal *this)
{
  SlimeFloatGoal *v1; // r4@1
  int v7; // r0@3
  MoveControl *v8; // r0@4
  MoveControl *v9; // r0@4

  v1 = this;
  _R0 = j_Random::_genRandInt32((Random *)(*((_DWORD *)this + 2) + 552));
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v7 = j_Mob::getJumpControl(*((Mob **)v1 + 2));
    (*(void (**)(void))(*(_DWORD *)v7 + 8))();
  v8 = (MoveControl *)j_Mob::getMoveControl(*((Mob **)v1 + 2));
  j_MoveControl::setSpeedModifier(v8, 1.2);
  v9 = (MoveControl *)j_Mob::getMoveControl(*((Mob **)v1 + 2));
  return j_j_j__ZN11MoveControl9setWantedEb(v9, 1);
}


int __fastcall SlimeFloatGoal::canUse(SlimeFloatGoal *this)
{
  SlimeFloatGoal *v1; // r4@1
  int result; // r0@4

  v1 = this;
  if ( j_Mob::getJumpControl(*((Mob **)this + 2)) && j_Mob::getMoveControl(*((Mob **)v1 + 2)) )
  {
    if ( (*(int (**)(void))(**((_DWORD **)v1 + 2) + 208))() )
      result = 1;
    else
      result = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 216))();
  }
  else
    result = 0;
  return result;
}


void __fastcall SlimeFloatGoal::~SlimeFloatGoal(SlimeFloatGoal *this)
{
  SlimeFloatGoal::~SlimeFloatGoal(this);
}


void __fastcall SlimeFloatGoal::~SlimeFloatGoal(SlimeFloatGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


Goal *__fastcall SlimeFloatGoal::SlimeFloatGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271AE1C;
  *((_DWORD *)v3 + 2) = v2;
  j_Goal::setRequiredControlFlags(v3, 5);
  return v3;
}
