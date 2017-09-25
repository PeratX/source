

Goal *__fastcall WitherDoNothingGoal::WitherDoNothingGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  Goal::Goal(a1);
  *(_DWORD *)v3 = &off_26F0D94;
  *((_DWORD *)v3 + 2) = v2;
  Goal::setRequiredControlFlags(v3, 7);
  return v3;
}


void __fastcall WitherDoNothingGoal::~WitherDoNothingGoal(WitherDoNothingGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)Goal::~Goal(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall WitherDoNothingGoal::canUse(WitherDoNothingGoal *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = SynchedEntityData::getInt((SynchedEntityData *)(*((_DWORD *)this + 2) + 176), 49);
  v2 = 0;
  if ( v1 > 0 )
    v2 = 1;
  return v2;
}


void __fastcall WitherDoNothingGoal::~WitherDoNothingGoal(WitherDoNothingGoal *this)
{
  WitherDoNothingGoal::~WitherDoNothingGoal(this);
}
