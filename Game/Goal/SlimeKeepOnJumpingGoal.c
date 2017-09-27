

int __fastcall SlimeKeepOnJumpingGoal::tick(SlimeKeepOnJumpingGoal *this)
{
  SlimeKeepOnJumpingGoal *v1; // r4@1
  MoveControl *v2; // r0@1
  MoveControl *v3; // r0@1

  v1 = this;
  v2 = (MoveControl *)j_Mob::getMoveControl(*((Mob **)this + 2));
  j_MoveControl::setSpeedModifier(v2, 1.0);
  v3 = (MoveControl *)j_Mob::getMoveControl(*((Mob **)v1 + 2));
  return j_j_j__ZN11MoveControl9setWantedEb(v3, 1);
}


Goal *__fastcall SlimeKeepOnJumpingGoal::SlimeKeepOnJumpingGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271AE50;
  *((_DWORD *)v3 + 2) = v2;
  j_Goal::setRequiredControlFlags(v3, 5);
  return v3;
}


_BOOL4 __fastcall SlimeKeepOnJumpingGoal::canUse(SlimeKeepOnJumpingGoal *this)
{
  return j_Mob::getMoveControl(*((Mob **)this + 2)) != 0;
}


void __fastcall SlimeKeepOnJumpingGoal::~SlimeKeepOnJumpingGoal(SlimeKeepOnJumpingGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall SlimeKeepOnJumpingGoal::~SlimeKeepOnJumpingGoal(SlimeKeepOnJumpingGoal *this)
{
  SlimeKeepOnJumpingGoal::~SlimeKeepOnJumpingGoal(this);
}
