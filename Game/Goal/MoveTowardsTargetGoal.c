

signed int __fastcall MoveTowardsTargetGoal::canContinueToUse(MoveTowardsTargetGoal *this)
{
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  Entity *v7; // r5@7
  int v8; // r0@8
  signed int v9; // r6@9

  _R4 = this;
  if ( !*((_BYTE *)this + 28) )
  {
    v2 = *((_DWORD *)this + 6);
    if ( v2 )
    {
      v3 = *((_DWORD *)_R4 + 4);
      v4 = *((_DWORD *)_R4 + 5);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)_R4 + 3) = v5;
        if ( !v5 )
          *((_DWORD *)_R4 + 3) = j_Level::fetchEntity(
                                   *((_DWORD *)_R4 + 6),
                                   v6,
                                   *((_QWORD *)_R4 + 2),
                                   *((_QWORD *)_R4 + 2) >> 32,
                                   0);
      }
    }
    *((_BYTE *)_R4 + 28) = 1;
  }
  v7 = (Entity *)*((_DWORD *)_R4 + 3);
  if ( v7 )
    v8 = j_Mob::getNavigation(*((Mob **)_R4 + 13));
    if ( (*(int (**)(void))(*(_DWORD *)v8 + 36))() )
      v9 = 0;
    else
      if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v7 + 316))(v7) == 1 )
        _R0 = j_Entity::distanceToSqr(v7, *((const Entity **)_R4 + 13));
        __asm
        {
          VLDR            S0, [R4,#0x30]
          VMOV            S2, R0
          VMUL.F32        S0, S0, S0
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          v9 = 1;
  else
    v9 = 0;
  return v9;
}


int __fastcall MoveTowardsTargetGoal::start(MoveTowardsTargetGoal *this)
{
  MoveTowardsTargetGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r3@1
  int v4; // r12@1
  int (*v5)(void); // lr@1
  int v6; // r2@1
  int v8; // [sp+4h] [bp-14h]@1
  int v9; // [sp+8h] [bp-10h]@1
  int v10; // [sp+Ch] [bp-Ch]@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 13));
  v3 = *((_DWORD *)v1 + 9);
  v4 = *((_DWORD *)v1 + 10);
  v5 = *(int (**)(void))(*(_DWORD *)v2 + 12);
  v8 = *((_DWORD *)v1 + 8);
  v9 = v3;
  v10 = v4;
  v6 = *((_DWORD *)v1 + 11);
  return v5();
}


signed int __fastcall MoveTowardsTargetGoal::canUse(MoveTowardsTargetGoal *this)
{
  int v2; // r6@2
  int v4; // r0@6
  _BYTE *v5; // r6@6
  signed int v6; // r5@7
  int v7; // r0@9
  int v8; // r0@13
  unsigned int v9; // r2@14
  unsigned int v10; // r3@14
  int v11; // r0@15
  int v12; // r1@15
  int v13; // r6@18
  int v18; // r1@21
  int v19; // r2@21
  const Vec3 *v21; // [sp+4h] [bp-2Ch]@21
  int v22; // [sp+8h] [bp-28h]@21
  int v23; // [sp+Ch] [bp-24h]@21
  int v24; // [sp+10h] [bp-20h]@21
  int v25; // [sp+14h] [bp-1Ch]@21
  int v26; // [sp+18h] [bp-18h]@21

  _R4 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 13)) )
  {
    v2 = j_Entity::getTarget(*((Entity **)_R4 + 13));
    if ( *((_DWORD *)_R4 + 3) == v2 )
    {
      v5 = (char *)_R4 + 28;
    }
    else
      _ZF = v2 == 0;
      if ( v2 )
        _ZF = *(_DWORD *)(v2 + 3092) == 0;
      if ( _ZF )
      {
        *((_DWORD *)_R4 + 3) = 0;
        *((_DWORD *)_R4 + 4) = -1;
        *((_DWORD *)_R4 + 5) = -1;
        *((_BYTE *)_R4 + 28) = 0;
        v5 = (char *)_R4 + 28;
        v7 = *((_DWORD *)_R4 + 6);
        if ( v7 )
          j_Level::unregisterTemporaryPointer(v7, (unsigned int)_R4 + 8);
        *((_DWORD *)_R4 + 6) = 0;
      }
      else
        *((_QWORD *)_R4 + 2) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v2);
        v4 = *(_DWORD *)(v2 + 3092);
        *((_DWORD *)_R4 + 6) = v4;
        j_Level::registerTemporaryPointer(v4, (unsigned int)_R4 + 8);
    if ( !*v5 )
      v8 = *((_DWORD *)_R4 + 6);
      if ( v8 )
        v9 = *((_DWORD *)_R4 + 4);
        v10 = *((_DWORD *)_R4 + 5);
        if ( (v9 & v10) != -1 )
        {
          v11 = j_Level::fetchEntity(v8, v9 & v10, v9, v10, 0);
          *((_DWORD *)_R4 + 3) = v11;
          if ( !v11 )
            *((_DWORD *)_R4 + 3) = j_Level::fetchEntity(
                                     *((_DWORD *)_R4 + 6),
                                     v12,
                                     *((_QWORD *)_R4 + 2),
                                     *((_QWORD *)_R4 + 2) >> 32,
                                     0);
        }
      *v5 = 1;
    v13 = *((_DWORD *)_R4 + 3);
    if ( v13 )
      _R0 = j_Entity::distanceToSqr(*((Entity **)_R4 + 3), *((const Entity **)_R4 + 13));
      __asm
        VLDR            S0, [R4,#0x30]
        VMOV            S2, R0
      v6 = 0;
        VMUL.F32        S0, S0, S0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v18 = *(_DWORD *)(v13 + 76);
        v19 = *(_DWORD *)(v13 + 80);
        v21 = *(const Vec3 **)(v13 + 72);
        v22 = v18;
        v23 = v19;
        if ( j_RandomPos::getPosTowards((RandomPos *)&v24, *((Vec3 **)_R4 + 13), (Mob *)0x10, 7, (int)&v21, v21) == 1 )
          v6 = 1;
          *((_DWORD *)_R4 + 8) = v24;
          *((_DWORD *)_R4 + 9) = v25;
          *((_DWORD *)_R4 + 10) = v26;
  }
  else
    v6 = 0;
  return v6;
}


Goal *__fastcall MoveTowardsTargetGoal::MoveTowardsTargetGoal(Goal *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // r8@1
  int v5; // r11@1
  Goal *v6; // r4@1

  v4 = __PAIR__(a2, a4);
  v5 = a3;
  v6 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v6 = &off_271A8B0;
  *((_DWORD *)v6 + 2) = &off_271A67C;
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 5) = -1;
  *((_DWORD *)v6 + 4) = -1;
  *((_DWORD *)v6 + 6) = 0;
  *((_BYTE *)v6 + 28) = 0;
  *((_DWORD *)v6 + 8) = 0;
  *((_DWORD *)v6 + 9) = 0;
  *((_DWORD *)v6 + 10) = 0;
  *((_DWORD *)v6 + 11) = v5;
  *((_QWORD *)v6 + 6) = v4;
  j_Goal::setRequiredControlFlags(v6, 1);
  return v6;
}


int __fastcall MoveTowardsTargetGoal::~MoveTowardsTargetGoal(MoveTowardsTargetGoal *this)
{
  MoveTowardsTargetGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A8B0;
  *((_DWORD *)this + 2) = &off_271A67C;
  v2 = (char *)this + 8;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = -1;
  *((_DWORD *)v2 + 3) = -1;
  v2[20] = 0;
  v3 = *((_DWORD *)this + 6);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, (unsigned int)v2);
  *((_DWORD *)v1 + 6) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


void __fastcall MoveTowardsTargetGoal::~MoveTowardsTargetGoal(MoveTowardsTargetGoal *this)
{
  MoveTowardsTargetGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A8B0;
  *((_DWORD *)this + 2) = &off_271A67C;
  v2 = (char *)this + 8;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = -1;
  *((_DWORD *)v2 + 3) = -1;
  v2[20] = 0;
  v3 = *((_DWORD *)this + 6);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, (unsigned int)v2);
  *((_DWORD *)v1 + 6) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall MoveTowardsTargetGoal::~MoveTowardsTargetGoal(MoveTowardsTargetGoal *this)
{
  MoveTowardsTargetGoal::~MoveTowardsTargetGoal(this);
}


int __fastcall MoveTowardsTargetGoal::stop(MoveTowardsTargetGoal *this)
{
  MoveTowardsTargetGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 5) = -1;
  *((_BYTE *)this + 28) = 0;
  result = *((_DWORD *)this + 6);
  if ( result )
    result = j_Level::unregisterTemporaryPointer(result, (unsigned int)v1 + 8);
  *((_DWORD *)v1 + 6) = 0;
  return result;
}
