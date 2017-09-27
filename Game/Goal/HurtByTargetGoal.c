

void __fastcall HurtByTargetGoal::~HurtByTargetGoal(HurtByTargetGoal *this)
{
  HurtByTargetGoal *v1; // r4@1
  FilterGroup *v2; // r0@1
  FilterGroup *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271B014;
  v3 = (FilterGroup *)(*((_QWORD *)this + 1) >> 32);
  v2 = (FilterGroup *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
      v2 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v2) + 48);
    while ( v3 != v2 );
    v2 = (FilterGroup *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall HurtByTargetGoal::start(HurtByTargetGoal *this)
{
  int v1; // r4@1
  int (__fastcall *v2)(int, int); // r5@1
  int v3; // r1@1

  v1 = *((_DWORD *)this + 13);
  v2 = *(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 340);
  v3 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 944))(*((_DWORD *)this + 13));
  return v2(v1, v3);
}


signed int __fastcall HurtByTargetGoal::canUse(HurtByTargetGoal *this)
{
  HurtByTargetGoal *v1; // r4@1
  int v2; // r1@1
  signed int result; // r0@2

  v1 = this;
  v2 = (*(int (**)(void))(**((_DWORD **)this + 13) + 944))();
  if ( v2 )
    result = j_TargetGoal::_canAttack((int)v1, v2, 0);
  else
    result = 0;
  return result;
}


void __fastcall HurtByTargetGoal::~HurtByTargetGoal(HurtByTargetGoal *this)
{
  HurtByTargetGoal::~HurtByTargetGoal(this);
}


Goal *__fastcall HurtByTargetGoal::HurtByTargetGoal(int a1, int a2, int a3, int a4, int a5)
{
  Goal *v5; // r4@1

  v5 = (Goal *)a1;
  j_TargetGoal::TargetGoal(a1, a2, *(float *)&a3, 0, 0, 0, 1098907648, a5);
  *(_DWORD *)v5 = &off_271AFA0;
  j_Goal::setRequiredControlFlags(v5, 1);
  return v5;
}
