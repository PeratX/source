

void __fastcall MoveTowardsRestrictionGoal::~MoveTowardsRestrictionGoal(MoveTowardsRestrictionGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall MoveTowardsRestrictionGoal::canContinueToUse(MoveTowardsRestrictionGoal *this)
{
  int v1; // r0@1

  v1 = j_Mob::getNavigation(*((Mob **)this + 2));
  return (*(int (**)(void))(*(_DWORD *)v1 + 36))() ^ 1;
}


void __fastcall MoveTowardsRestrictionGoal::~MoveTowardsRestrictionGoal(MoveTowardsRestrictionGoal *this)
{
  MoveTowardsRestrictionGoal::~MoveTowardsRestrictionGoal(this);
}


int __fastcall MoveTowardsRestrictionGoal::start(MoveTowardsRestrictionGoal *this)
{
  MoveTowardsRestrictionGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r3@1
  int v4; // r12@1
  int (*v5)(void); // lr@1
  int v6; // r2@1
  int v8; // [sp+4h] [bp-14h]@1
  int v9; // [sp+8h] [bp-10h]@1
  int v10; // [sp+Ch] [bp-Ch]@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 2));
  v3 = *((_DWORD *)v1 + 4);
  v4 = *((_DWORD *)v1 + 5);
  v5 = *(int (**)(void))(*(_DWORD *)v2 + 12);
  v8 = *((_DWORD *)v1 + 3);
  v9 = v3;
  v10 = v4;
  v6 = *((_DWORD *)v1 + 6);
  return v5();
}


signed int __fastcall MoveTowardsRestrictionGoal::canUse(MoveTowardsRestrictionGoal *this)
{
  MoveTowardsRestrictionGoal *v1; // r4@1
  signed int v2; // r5@3
  const Vec3 *v8; // [sp+4h] [bp-34h]@8
  float v9; // [sp+10h] [bp-28h]@8
  int v12; // [sp+1Ch] [bp-1Ch]@8
  int v13; // [sp+20h] [bp-18h]@8
  int v14; // [sp+24h] [bp-14h]@8

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2)) )
  {
    if ( j_Entity::isWithinRestriction(*((Entity **)v1 + 2)) )
    {
      v2 = 0;
    }
    else if ( j_Entity::hasCategory(*((_DWORD *)v1 + 2), 4096) == 1 && j_Entity::isInLove(*((Entity **)v1 + 2)) )
    else
      v12 = 0;
      v13 = 0;
      v14 = 0;
      j_Entity::getRestrictCenter((Entity *)&v9, *((_DWORD *)v1 + 2));
      __asm
      {
        VLDR            S0, [SP,#0x38+var_28]
        VLDR            S2, [SP,#0x38+var_24]
        VLDR            S4, [SP,#0x38+var_20]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VSTR            S0, [SP,#0x38+var_34]
        VSTR            S2, [SP,#0x38+var_30]
        VSTR            S4, [SP,#0x38+var_2C]
      }
      if ( j_RandomPos::getPosTowards((RandomPos *)&v12, *((Vec3 **)v1 + 2), (Mob *)0x10, 7, (int)&v8, v8) == 1 )
        v2 = 1;
        *((_DWORD *)v1 + 3) = v12;
        *((_DWORD *)v1 + 4) = v13;
        *((_DWORD *)v1 + 5) = v14;
  }
  else
    v2 = 0;
  return v2;
}


Goal *__fastcall MoveTowardsRestrictionGoal::MoveTowardsRestrictionGoal(Goal *a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  Goal *v5; // r4@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v5 = &off_271A87C;
  *((_DWORD *)v5 + 2) = v4;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 4) = 0;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 6) = v3;
  j_Goal::setRequiredControlFlags(v5, 1);
  return v5;
}
