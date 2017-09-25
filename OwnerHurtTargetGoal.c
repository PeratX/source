

int __fastcall OwnerHurtTargetGoal::start(OwnerHurtTargetGoal *this)
{
  OwnerHurtTargetGoal *v1; // r4@1
  int v2; // r5@1
  void (__fastcall *v3)(int, _DWORD); // r6@1
  int v4; // r0@2
  unsigned int v5; // r2@3
  unsigned int v6; // r3@3
  int v7; // r0@4
  int v8; // r1@4

  v1 = this;
  v2 = *((_DWORD *)this + 20);
  v3 = *(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 340);
  if ( !*((_BYTE *)this + 76) )
  {
    v4 = *((_DWORD *)this + 18);
    if ( v4 )
    {
      v5 = *((_DWORD *)v1 + 16);
      v6 = *((_DWORD *)v1 + 17);
      if ( (v5 & v6) != -1 )
      {
        v7 = j_Level::fetchEntity(v4, v5 & v6, v5, v6, 0);
        *((_DWORD *)v1 + 15) = v7;
        if ( !v7 )
          *((_DWORD *)v1 + 15) = j_Level::fetchEntity(
                                   *((_DWORD *)v1 + 18),
                                   v8,
                                   *((_QWORD *)v1 + 8),
                                   *((_QWORD *)v1 + 8) >> 32,
                                   0);
      }
    }
    *((_BYTE *)v1 + 76) = 1;
  }
  v3(v2, *((_DWORD *)v1 + 15));
  return j_j_j__ZN10TargetGoal5startEv(v1);
}


signed int __fastcall OwnerHurtTargetGoal::canUse(OwnerHurtTargetGoal *this)
{
  OwnerHurtTargetGoal *v1; // r4@1
  signed int v2; // r7@3
  Mob *v4; // r0@8
  Mob *v5; // r6@8
  int v6; // r5@9
  int v7; // r0@12
  int v8; // r6@12
  int v9; // r0@17
  int v10; // r0@19

  v1 = this;
  if ( j_Entity::isTame(*((Entity **)this + 20)) == 1 )
  {
    if ( j_Entity::getTarget(*((Entity **)v1 + 20)) )
    {
      v2 = 0;
    }
    else if ( j_Entity::isSitting(*((Entity **)v1 + 20)) )
    else
      v4 = (Mob *)j_Entity::getPlayerOwner(*((Entity **)v1 + 20));
      v5 = v4;
      if ( v4 )
      {
        v6 = j_Mob::getLastHurtMobTimestamp(v4);
        if ( v6 == *((_DWORD *)v1 + 21) )
        {
          v2 = 0;
        }
        else
          v7 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v5 + 960))(v5);
          v8 = v7;
          if ( v7 )
          {
            v2 = 0;
            if ( (*(int (**)(void))(*(_DWORD *)v7 + 488))() != 2849 && j_TargetGoal::_canAttack((int)v1, v8, 0) == 1 )
            {
              if ( *((_DWORD *)v1 + 15) != v8 )
              {
                if ( *(_DWORD *)(v8 + 3092) )
                {
                  *((_QWORD *)v1 + 8) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v8);
                  v9 = *(_DWORD *)(v8 + 3092);
                  *((_DWORD *)v1 + 18) = v9;
                  j_Level::registerTemporaryPointer(v9, (unsigned int)v1 + 56);
                  *((_BYTE *)v1 + 76) = 0;
                }
                else
                  *((_DWORD *)v1 + 15) = 0;
                  *((_DWORD *)v1 + 16) = -1;
                  *((_DWORD *)v1 + 17) = -1;
                  v10 = *((_DWORD *)v1 + 18);
                  if ( v10 )
                    j_Level::unregisterTemporaryPointer(v10, (unsigned int)v1 + 56);
                  *((_DWORD *)v1 + 18) = 0;
              }
              v2 = 1;
              *((_DWORD *)v1 + 21) = v6;
            }
          }
          else
      }
      else
        v2 = 0;
  }
  else
    v2 = 0;
  return v2;
}


int __fastcall OwnerHurtTargetGoal::OwnerHurtTargetGoal(int a1, int a2, float a3)
{
  int v3; // r5@1
  int v4; // r4@1

  v3 = a2;
  v4 = a1;
  j_TargetGoal::TargetGoal(a1, a2, a3, 1, 60, 0, 1098907648, 0);
  *(_DWORD *)v4 = &off_271AA10;
  *(_DWORD *)(v4 + 56) = &off_271A990;
  *(_DWORD *)(v4 + 60) = 0;
  *(_DWORD *)(v4 + 68) = -1;
  *(_DWORD *)(v4 + 64) = -1;
  *(_DWORD *)(v4 + 72) = 0;
  *(_BYTE *)(v4 + 76) = 0;
  *(_DWORD *)(v4 + 80) = v3;
  *(_DWORD *)(v4 + 84) = 0;
  j_Goal::setRequiredControlFlags((Goal *)v4, 1);
  return v4;
}


void __fastcall OwnerHurtTargetGoal::~OwnerHurtTargetGoal(OwnerHurtTargetGoal *this)
{
  OwnerHurtTargetGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1
  FilterGroup *v4; // r0@3
  FilterGroup *v5; // r5@3

  v1 = this;
  *(_DWORD *)this = &off_271AA10;
  *((_DWORD *)this + 14) = &off_271A990;
  v2 = (char *)this + 56;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = -1;
  *((_DWORD *)v2 + 3) = -1;
  v2[20] = 0;
  v3 = *((_DWORD *)this + 18);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, (unsigned int)v2);
  *((_DWORD *)v1 + 18) = 0;
  *(_DWORD *)v1 = &off_271B014;
  v5 = (FilterGroup *)(*((_QWORD *)v1 + 1) >> 32);
  v4 = (FilterGroup *)*((_QWORD *)v1 + 1);
  if ( v4 != v5 )
  {
    do
      v4 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v4) + 48);
    while ( v5 != v4 );
    v4 = (FilterGroup *)*((_DWORD *)v1 + 2);
  }
  if ( v4 )
    j_operator delete((void *)v4);
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall OwnerHurtTargetGoal::~OwnerHurtTargetGoal(OwnerHurtTargetGoal *this)
{
  OwnerHurtTargetGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1
  FilterGroup *v4; // r0@3
  FilterGroup *v5; // r5@3

  v1 = this;
  *(_DWORD *)this = &off_271AA10;
  *((_DWORD *)this + 14) = &off_271A990;
  v2 = (char *)this + 56;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = -1;
  *((_DWORD *)v2 + 3) = -1;
  v2[20] = 0;
  v3 = *((_DWORD *)this + 18);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, (unsigned int)v2);
  *((_DWORD *)v1 + 18) = 0;
  *(_DWORD *)v1 = &off_271B014;
  v5 = (FilterGroup *)(*((_QWORD *)v1 + 1) >> 32);
  v4 = (FilterGroup *)*((_QWORD *)v1 + 1);
  if ( v4 != v5 )
  {
    do
      v4 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v4) + 48);
    while ( v5 != v4 );
    v4 = (FilterGroup *)*((_DWORD *)v1 + 2);
  }
  if ( v4 )
    j_operator delete((void *)v4);
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


void __fastcall OwnerHurtTargetGoal::~OwnerHurtTargetGoal(OwnerHurtTargetGoal *this)
{
  OwnerHurtTargetGoal::~OwnerHurtTargetGoal(this);
}
