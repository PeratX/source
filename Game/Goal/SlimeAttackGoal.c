

void __fastcall SlimeAttackGoal::~SlimeAttackGoal(SlimeAttackGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall SlimeAttackGoal::canContinueToUse(SlimeAttackGoal *this)
{
  SlimeAttackGoal *v1; // r4@1
  int v2; // r0@1
  signed int result; // r0@2
  int v4; // r1@3
  int v5; // r1@4
  unsigned __int8 v6; // vf@4

  v1 = this;
  v2 = j_Entity::getTarget(*((Entity **)this + 2));
  if ( v2 )
  {
    v4 = (*(int (**)(void))(*(_DWORD *)v2 + 316))();
    result = 0;
    if ( v4 == 1 )
    {
      v5 = *((_DWORD *)v1 + 3);
      v6 = __OFSUB__(v5--, 1);
      *((_DWORD *)v1 + 3) = v5;
      if ( !((unsigned __int8)((v5 < 0) ^ v6) | (v5 == 0)) )
        result = 1;
    }
  }
  else
  return result;
}


int __fastcall SlimeAttackGoal::start(SlimeAttackGoal *this)
{
  *((_DWORD *)this + 3) = 300;
  return j_j_j__ZN4Goal5startEv(this);
}


void __fastcall SlimeAttackGoal::~SlimeAttackGoal(SlimeAttackGoal *this)
{
  SlimeAttackGoal::~SlimeAttackGoal(this);
}


int __fastcall SlimeAttackGoal::tick(SlimeAttackGoal *this)
{
  SlimeAttackGoal *v1; // r4@1
  int v2; // r5@1
  void (__fastcall *v3)(int, int); // r6@1
  int v4; // r0@1
  int v5; // r5@1
  Entity *v6; // r0@1
  int (__fastcall *v7)(int, int, signed int); // r4@1
  int v8; // r0@1
  int v9; // r1@1

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  v3 = *(void (__fastcall **)(int, int))(*(_DWORD *)v2 + 880);
  v4 = j_Entity::getTarget(*((Entity **)this + 2));
  v3(v2, v4);
  v5 = j_Mob::getNavigation(*((Mob **)v1 + 2));
  v6 = (Entity *)*((_DWORD *)v1 + 2);
  v7 = *(int (__fastcall **)(int, int, signed int))(*(_DWORD *)v5 + 12);
  v8 = j_Entity::getTarget(v6);
  v9 = (*(int (**)(void))(*(_DWORD *)v8 + 52))();
  return v7(v5, v9, 1065353216);
}


signed int __fastcall SlimeAttackGoal::canUse(SlimeAttackGoal *this)
{
  SlimeAttackGoal *v1; // r4@1
  int v2; // r0@2
  int v3; // r6@2
  signed int result; // r0@6

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2))
    && (v2 = j_Entity::getTarget(*((Entity **)v1 + 2)), (v3 = v2) != 0)
    && (*(int (**)(void))(*(_DWORD *)v2 + 316))() == 1 )
  {
    if ( j_Entity::hasCategory(v3, 1) == 1 )
      j_Entity::setPersistent(*((Entity **)v1 + 2));
    result = 1;
  }
  else
    result = 0;
  return result;
}


Goal *__fastcall SlimeAttackGoal::SlimeAttackGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271ADE8;
  *((_DWORD *)v3 + 2) = v2;
  *((_DWORD *)v3 + 3) = 0;
  j_Goal::setRequiredControlFlags(v3, 2);
  return v3;
}
