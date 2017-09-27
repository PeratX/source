

int __fastcall ChargeAttackGoal::canContinueToUse(ChargeAttackGoal *this)
{
  ChargeAttackGoal *v1; // r4@1
  MoveControl *v2; // r0@1
  int v3; // r0@4
  int result; // r0@4

  v1 = this;
  v2 = (MoveControl *)j_Mob::getMoveControl(*((Mob **)this + 2));
  if ( j_MoveControl::hasWanted(v2) == 1
    && j_Entity::getStatusFlag(*((_DWORD *)v1 + 2), 41) == 1
    && j_Entity::getTarget(*((Entity **)v1 + 2)) )
  {
    v3 = j_Entity::getTarget(*((Entity **)v1 + 2));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 316))();
  }
  else
    result = 0;
  return result;
}


int __fastcall ChargeAttackGoal::tick(ChargeAttackGoal *this)
{
  ChargeAttackGoal *v1; // r4@1
  int v2; // r5@1
  int result; // r0@2
  Entity *v4; // r6@3
  const Vec3 *v5; // r0@3
  int v10; // r0@5
  char v11; // [sp+4h] [bp-1Ch]@5

  v1 = this;
  v2 = j_Entity::getTarget(*((Entity **)this + 2));
  if ( j_AABB::intersects((AABB *)(*((_DWORD *)v1 + 2) + 264), (const AABB *)(v2 + 264)) == 1 )
  {
    (*(void (**)(void))(**((_DWORD **)v1 + 2) + 976))();
    result = j_j_j__ZN6Entity13setStatusFlagE11EntityFlagsb_1(*((_DWORD *)v1 + 2), 41, 0);
  }
  else
    v4 = (Entity *)*((_DWORD *)v1 + 2);
    v5 = (const Vec3 *)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 52))(v2);
    result = j_Entity::distanceToSqr(v4, v5);
    __asm
    {
      VMOV.F32        S0, #9.0
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      j_Entity::getAttachPos((AABB *)&v11, v2, 6, 0);
      v10 = j_Mob::getMoveControl(*((Mob **)v1 + 2));
      result = (*(int (**)(void))(*(_DWORD *)v10 + 8))();
  return result;
}


int __fastcall ChargeAttackGoal::start(ChargeAttackGoal *this)
{
  ChargeAttackGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  Level *v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r0@1
  char v9; // [sp+14h] [bp-24h]@1

  v1 = this;
  v2 = j_Entity::getTarget(*((Entity **)this + 2));
  j_Entity::getAttachPos((AABB *)&v9, v2, 6, 0);
  v3 = j_Mob::getMoveControl(*((Mob **)v1 + 2));
  (*(void (**)(void))(*(_DWORD *)v3 + 8))();
  j_Entity::setStatusFlag(*((_DWORD *)v1 + 2), 41, 1);
  v4 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
  v5 = j_Entity::getRegion(*((Entity **)v1 + 2));
  v6 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
  v7 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 488))();
  return j_Level::broadcastSoundEvent(v4, v5, 122, v6, -1, v7, 0, 0);
}


signed int __fastcall ChargeAttackGoal::canUse(ChargeAttackGoal *this)
{
  ChargeAttackGoal *v1; // r4@1
  MoveControl *v2; // r0@3
  signed int result; // r0@4
  unsigned int v4; // r0@5
  signed int v5; // r5@5
  Entity *v6; // r4@6
  int v7; // r0@6
  const Vec3 *v8; // r0@6

  v1 = this;
  if ( j_Mob::getMoveControl(*((Mob **)this + 2))
    && j_Entity::getTarget(*((Entity **)v1 + 2))
    && (v2 = (MoveControl *)j_Mob::getMoveControl(*((Mob **)v1 + 2)), !j_MoveControl::hasWanted(v2)) )
  {
    v4 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
    v5 = 0;
    if ( v4 == 7 * (v4 / 7) )
    {
      v6 = (Entity *)*((_DWORD *)v1 + 2);
      v7 = j_Entity::getTarget(v6);
      v8 = (const Vec3 *)(*(int (**)(void))(*(_DWORD *)v7 + 52))();
      _R0 = j_Entity::distanceToSqr(v6, v8);
      __asm
      {
        VMOV.F32        S0, #4.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v5 = 1;
    }
    result = v5;
  }
  else
    result = 0;
  return result;
}


void __fastcall ChargeAttackGoal::~ChargeAttackGoal(ChargeAttackGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall ChargeAttackGoal::~ChargeAttackGoal(ChargeAttackGoal *this)
{
  ChargeAttackGoal::~ChargeAttackGoal(this);
}


Goal *__fastcall ChargeAttackGoal::ChargeAttackGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_27252D8;
  *((_DWORD *)v3 + 2) = v2;
  j_Goal::setRequiredControlFlags(v3, 3);
  return v3;
}
