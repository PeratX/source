

void __fastcall PlayerRideTamedGoal::~PlayerRideTamedGoal(PlayerRideTamedGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall PlayerRideTamedGoal::~PlayerRideTamedGoal(PlayerRideTamedGoal *this)
{
  PlayerRideTamedGoal::~PlayerRideTamedGoal(this);
}


Goal *__fastcall PlayerRideTamedGoal::PlayerRideTamedGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271AAB0;
  *((_DWORD *)v3 + 2) = v2;
  j_Goal::setRequiredControlFlags(v3, 3);
  return v3;
}


unsigned int __fastcall PlayerRideTamedGoal::canUse(PlayerRideTamedGoal *this)
{
  int v1; // r0@1
  unsigned int result; // r0@2

  v1 = *((_DWORD *)this + 2);
  if ( *(_QWORD *)(v1 + 476) >> 32 == (unsigned int)*(_QWORD *)(v1 + 476) )
    result = 0;
  else
    result = j_Entity::isTame((Entity *)v1);
  return result;
}


unsigned int __fastcall PlayerRideTamedGoal::canContinueToUse(PlayerRideTamedGoal *this)
{
  int v1; // r0@1
  unsigned int result; // r0@2

  v1 = *((_DWORD *)this + 2);
  if ( *(_QWORD *)(v1 + 476) >> 32 == (unsigned int)*(_QWORD *)(v1 + 476) )
    result = 0;
  else
    result = j_Entity::isTame((Entity *)v1);
  return result;
}
