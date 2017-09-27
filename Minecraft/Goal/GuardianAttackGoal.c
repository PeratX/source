

void __fastcall GuardianAttackGoal::~GuardianAttackGoal(GuardianAttackGoal *this)
{
  GuardianAttackGoal *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A5D0;
  (*(void (**)(void))(**((_DWORD **)this + 2) + 340))();
  j_Guardian::setAttackTime(*((Guardian **)v1 + 2), 0);
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall GuardianAttackGoal::canUse(GuardianAttackGoal *this)
{
  GuardianAttackGoal *v1; // r4@1
  int v2; // r0@1
  int result; // r0@3

  v1 = this;
  v2 = j_Entity::getTarget(*((Entity **)this + 2));
  if ( v2 && (*(int (**)(void))(*(_DWORD *)v2 + 316))() == 1 )
    result = j_Mob::getNavigation(*((Mob **)v1 + 2)) != 0;
  else
    result = 0;
  return result;
}


Goal *__fastcall GuardianAttackGoal::GuardianAttackGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271A5D0;
  *((_DWORD *)v3 + 2) = v2;
  *((_DWORD *)v3 + 3) = 0;
  j_Goal::setRequiredControlFlags(v3, 3);
  return v3;
}


signed int __fastcall GuardianAttackGoal::canContinueToUse(GuardianAttackGoal *this)
{
  GuardianAttackGoal *v1; // r4@1
  int v2; // r0@1
  __int64 v3; // r1@2
  signed int result; // r0@4
  __int64 v10; // [sp+0h] [bp-18h]@2
  int v11; // [sp+8h] [bp-10h]@2

  v1 = this;
  v2 = j_Entity::getTarget(*((Entity **)this + 2));
  if ( v2 && (v3 = *(_QWORD *)(v2 + 72), v11 = *(_DWORD *)(v2 + 80), v10 = v3, j_Goal::canContinueToUse(v1) == 1) )
  {
    if ( j_Guardian::isElder(*((Guardian **)v1 + 2)) )
    {
      result = 1;
    }
    else
      _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), (const Vec3 *)&v10);
      __asm
      {
        VMOV.F32        S0, #9.0
        VMOV            S2, R0
      }
      result = 0;
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall GuardianAttackGoal::~GuardianAttackGoal(GuardianAttackGoal *this)
{
  GuardianAttackGoal::~GuardianAttackGoal(this);
}


int __fastcall GuardianAttackGoal::start(GuardianAttackGoal *this)
{
  GuardianAttackGoal *v1; // r4@1
  int v2; // r0@1
  LookControl *v3; // r5@1
  Entity *v4; // r1@1

  v1 = this;
  *((_DWORD *)this + 3) = -10;
  v2 = j_Mob::getNavigation(*((Mob **)this + 2));
  (*(void (**)(void))(*(_DWORD *)v2 + 40))();
  v3 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 2));
  v4 = (Entity *)j_Entity::getTarget(*((Entity **)v1 + 2));
  return j_j_j__ZN11LookControl9setLookAtEP6Entityff_0(v3, v4, 90.0, 90.0);
}


int __fastcall GuardianAttackGoal::~GuardianAttackGoal(GuardianAttackGoal *this)
{
  GuardianAttackGoal *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A5D0;
  (*(void (**)(void))(**((_DWORD **)this + 2) + 340))();
  j_Guardian::setAttackTime(*((Guardian **)v1 + 2), 0);
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


int __fastcall GuardianAttackGoal::stop(GuardianAttackGoal *this)
{
  GuardianAttackGoal *v1; // r4@1

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 2) + 340))();
  return j_j_j__ZN8Guardian13setAttackTimeEi_0(*((Guardian **)v1 + 2), 0);
}


int __fastcall GuardianAttackGoal::tick(GuardianAttackGoal *this)
{
  GuardianAttackGoal *v1; // r4@1
  Entity *v2; // r5@1
  int v3; // r0@1
  LookControl *v4; // r0@1
  int v5; // r0@2
  int v6; // r1@4
  int v7; // r0@4
  Level *v14; // r0@5
  char v15; // r8@5
  int result; // r0@10
  int v18; // r0@11
  char v19; // [sp+8h] [bp-70h]@5
  char v20; // [sp+30h] [bp-48h]@5

  v1 = this;
  v2 = (Entity *)j_Entity::getTarget(*((Entity **)this + 2));
  v3 = j_Mob::getNavigation(*((Mob **)v1 + 2));
  (*(void (**)(void))(*(_DWORD *)v3 + 40))();
  v4 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 2));
  j_LookControl::setLookAt(v4, v2, 90.0, 90.0);
  if ( (*(int (**)(void))(**((_DWORD **)v1 + 2) + 252))() )
  {
    v5 = *((_DWORD *)v1 + 3);
    *((_DWORD *)v1 + 3) = v5 + 1;
    if ( v5 == -1 )
    {
      v18 = j_Entity::getLevel(*((Entity **)v1 + 2));
      j_Level::broadcastEntityEvent(v18, *((_DWORD *)v1 + 2), 28, 0);
    }
    else if ( v5 + 1 >= j_Guardian::getAttackDuration(*((Guardian **)v1 + 2)) )
      v6 = *((_DWORD *)v1 + 2);
      v7 = *(_DWORD *)(*(_DWORD *)(v6 + 48) + 88);
      if ( v7 )
      {
        _R6 = j_FloatRange::getValue((FloatRange *)(v7 + 4), (Random *)(v6 + 552));
        j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v20, *((Entity **)v1 + 2), 2);
        __asm
        {
          VMOV            S0, R6
          VCVTR.S32.F32   S0, S0
          VMOV            R2, S0
        }
        j_Entity::hurt(v2, (const EntityDamageSource *)&v20, _R2, 1, 0);
        j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v20);
        v14 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
        j_Level::getDifficulty(v14);
        j_Guardian::isElder(*((Guardian **)v1 + 2));
        v15 = j_Entity::getChainedDamageEffects(v2);
        j_Entity::setChainedDamageEffects(v2, 1);
        j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v19, *((Entity **)v1 + 2), 14);
          VMOV.F32        S2, #3.0
          VMOV.F32        S4, #2.0
          VMOV.F32        S0, #1.0
        if ( _ZF )
          __asm { VMOVEQ.F32      S0, S2 }
        __asm { VADD.F32        S2, S0, S4 }
        if ( !_ZF )
          __asm { VMOVNE.F32      S0, S2 }
        j_Entity::hurt(v2, (const EntityDamageSource *)&v19, _R2, 1, 0);
        j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v19);
        j_Entity::setChainedDamageEffects(v2, v15);
        (*(void (**)(void))(**((_DWORD **)v1 + 2) + 340))();
        j_Guardian::setAttackTime(*((Guardian **)v1 + 2), 0);
      }
    result = j_Goal::tick(v1);
  }
  else
    result = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 340))();
  return result;
}
