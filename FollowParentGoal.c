

void __fastcall FollowParentGoal::~FollowParentGoal(FollowParentGoal *this)
{
  FollowParentGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27256EC;
  *((_DWORD *)this + 4) = &off_271A990;
  v2 = (char *)this + 16;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = -1;
  *((_DWORD *)v2 + 3) = -1;
  v2[20] = 0;
  v3 = *((_DWORD *)this + 8);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, (unsigned int)v2);
  *((_DWORD *)v1 + 8) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


_QWORD *__fastcall FollowParentGoal::FollowParentGoal(Goal *a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  _QWORD *result; // r0@1

  v3 = a3;
  v4 = a2;
  result = j_Goal::Goal(a1);
  *(_DWORD *)result = &off_27256EC;
  *((_DWORD *)result + 2) = v4;
  *((_DWORD *)result + 4) = &off_271A990;
  *((_DWORD *)result + 5) = 0;
  *((_DWORD *)result + 6) = -1;
  *((_DWORD *)result + 7) = -1;
  *((_DWORD *)result + 8) = 0;
  *((_BYTE *)result + 36) = 0;
  *((_DWORD *)result + 10) = v3;
  *((_DWORD *)result + 11) = 0;
  return result;
}


int __fastcall FollowParentGoal::tick(FollowParentGoal *this)
{
  FollowParentGoal *v1; // r4@1
  int v2; // r0@1
  unsigned __int8 v3; // vf@1
  int result; // r0@1
  int v5; // r0@4
  unsigned int v6; // r2@5
  unsigned int v7; // r3@5
  int v8; // r0@6
  int v9; // r1@6
  int v10; // r5@10
  int (__fastcall *v11)(int, _DWORD, _DWORD); // r12@10
  int v12; // r0@11
  unsigned int v13; // r2@12
  unsigned int v14; // r3@12
  int (__fastcall *v15)(int, _DWORD, _DWORD); // r7@13
  int v16; // r0@13
  int v17; // r1@13
  int v18; // r0@14

  v1 = this;
  v2 = *((_DWORD *)this + 11);
  v3 = __OFSUB__(v2, 1);
  result = v2 - 1;
  *((_DWORD *)v1 + 11) = result;
  if ( (unsigned __int8)((result < 0) ^ v3) | (result == 0) )
  {
    *((_DWORD *)v1 + 11) = 10;
    if ( !*((_BYTE *)v1 + 36) )
    {
      v5 = *((_DWORD *)v1 + 8);
      if ( v5 )
      {
        v6 = *((_DWORD *)v1 + 6);
        v7 = *((_DWORD *)v1 + 7);
        if ( (v6 & v7) != -1 )
        {
          v8 = j_Level::fetchEntity(v5, v6 & v7, v6, v7, 0);
          *((_DWORD *)v1 + 5) = v8;
          if ( !v8 )
            *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                    *((_DWORD *)v1 + 8),
                                    v9,
                                    *((_QWORD *)v1 + 3),
                                    *((_QWORD *)v1 + 3) >> 32,
                                    0);
        }
      }
      *((_BYTE *)v1 + 36) = 1;
    }
    result = *((_DWORD *)v1 + 5);
    if ( result )
      v10 = j_Mob::getNavigation(*((Mob **)v1 + 2));
      v11 = *(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v10 + 20);
      if ( !*((_BYTE *)v1 + 36) )
        v12 = *((_DWORD *)v1 + 8);
        if ( v12 )
          v13 = *((_DWORD *)v1 + 6);
          v14 = *((_DWORD *)v1 + 7);
          if ( (v13 & v14) != -1 )
          {
            v15 = *(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v10 + 20);
            v16 = j_Level::fetchEntity(v12, v13 & v14, v13, v14, 0);
            v11 = v15;
            *((_DWORD *)v1 + 5) = v16;
            if ( !v16 )
            {
              v18 = j_Level::fetchEntity(*((_DWORD *)v1 + 8), v17, *((_QWORD *)v1 + 3), *((_QWORD *)v1 + 3) >> 32, 0);
              v11 = v15;
              *((_DWORD *)v1 + 5) = v18;
            }
          }
        *((_BYTE *)v1 + 36) = 1;
      result = v11(v10, *((_DWORD *)v1 + 5), *((_DWORD *)v1 + 10));
  }
  return result;
}


int __fastcall FollowParentGoal::~FollowParentGoal(FollowParentGoal *this)
{
  FollowParentGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27256EC;
  *((_DWORD *)this + 4) = &off_271A990;
  v2 = (char *)this + 16;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = -1;
  *((_DWORD *)v2 + 3) = -1;
  v2[20] = 0;
  v3 = *((_DWORD *)this + 8);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, (unsigned int)v2);
  *((_DWORD *)v1 + 8) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


int __fastcall FollowParentGoal::start(int result)
{
  *(_DWORD *)(result + 44) = 0;
  return result;
}


int __fastcall FollowParentGoal::stop(FollowParentGoal *this)
{
  FollowParentGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 7) = -1;
  *((_BYTE *)this + 36) = 0;
  result = *((_DWORD *)this + 8);
  if ( result )
    result = j_Level::unregisterTemporaryPointer(result, (unsigned int)v1 + 16);
  *((_DWORD *)v1 + 8) = 0;
  return result;
}


signed int __fastcall FollowParentGoal::canContinueToUse(FollowParentGoal *this)
{
  FollowParentGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  const Entity *v7; // r6@7
  signed int v8; // r5@8
  signed int v14; // r0@9

  v1 = this;
  if ( !*((_BYTE *)this + 36) )
  {
    v2 = *((_DWORD *)this + 8);
    if ( v2 )
    {
      v3 = *((_DWORD *)v1 + 6);
      v4 = *((_DWORD *)v1 + 7);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)v1 + 5) = v5;
        if ( !v5 )
          *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 8),
                                  v6,
                                  *((_QWORD *)v1 + 3),
                                  *((_QWORD *)v1 + 3) >> 32,
                                  0);
      }
    }
    *((_BYTE *)v1 + 36) = 1;
  }
  v7 = (const Entity *)*((_DWORD *)v1 + 5);
  if ( v7 )
    v8 = 0;
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 316))(*((_DWORD *)v1 + 5)) == 1 )
      _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v7);
      __asm
        VMOV            S4, R0
        VLDR            S2, =256.0
        VMOV.F32        S0, #9.0
      v14 = 0;
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S4, S0
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v14 = 1;
      __asm { VMRS            APSR_nzcv, FPSCR }
      if ( !(_NF ^ _VF) )
        v8 = 1;
      v8 &= v14;
  else
  return v8;
}


void __fastcall FollowParentGoal::~FollowParentGoal(FollowParentGoal *this)
{
  FollowParentGoal::~FollowParentGoal(this);
}


signed int __fastcall FollowParentGoal::canUse(FollowParentGoal *this)
{
  FollowParentGoal *v1; // r9@1
  signed int result; // r0@3
  int v3; // r0@5
  int v4; // r6@5
  BlockSource *v5; // r5@5
  char *v6; // r6@5
  const Entity **v7; // r4@5
  const Entity *v12; // r8@6
  const Entity *v13; // r7@7
  int v14; // r5@7
  int v16; // r0@20
  int v17; // r0@21
  int v18; // [sp+0h] [bp-50h]@5
  signed int v19; // [sp+4h] [bp-4Ch]@5
  signed int v20; // [sp+8h] [bp-48h]@5
  char v21; // [sp+Ch] [bp-44h]@5

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2)) )
  {
    if ( j_Entity::getAge(*((Entity **)v1 + 2)) <= -1 )
    {
      v3 = j_Entity::getRegion(*((Entity **)v1 + 2));
      v4 = *((_DWORD *)v1 + 2);
      v5 = (BlockSource *)v3;
      v18 = 1090519040;
      v19 = 1082130432;
      v20 = 1090519040;
      j_AABB::grow((AABB *)&v21, (const Vec3 *)(v4 + 264), (int)&v18);
      v6 = j_BlockSource::fetchEntities(v5, (Entity *)v4, (const AABB *)&v21);
      result = 0;
      v7 = (const Entity **)*(_QWORD *)v6;
      if ( v7 != (const Entity **)(*(_QWORD *)v6 >> 32) )
      {
        __asm { VLDR            S16, =3.4028e38 }
        v12 = 0;
        do
        {
          v13 = *v7;
          v14 = (*(int (__fastcall **)(const Entity *))(*(_DWORD *)*v7 + 488))(*v7);
          if ( v14 == (*(int (**)(void))(**((_DWORD **)v1 + 2) + 488))()
            && !j_Entity::isBaby(v13)
            && (*(int (__fastcall **)(const Entity *))(*(_DWORD *)v13 + 316))(v13) == 1
            && !j_Entity::isRemoved(v13) )
          {
            _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v13);
            __asm
            {
              VMOV            S0, R0
              VCMPE.F32       S0, S16
              VMRS            APSR_nzcv, FPSCR
            }
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              v12 = v13;
            else
              __asm { VMOVGT.F32      S0, S16 }
            __asm { VMOV.F32        S16, S0 }
          }
          ++v7;
        }
        while ( v7 != *((const Entity ***)v6 + 1) );
        __asm { VMOV.F32        S0, #9.0 }
        result = 0;
        __asm
          VCMPE.F32       S16, S0
          VMRS            APSR_nzcv, FPSCR
        if ( !(_NF ^ _VF) && v12 )
          if ( *((const Entity **)v1 + 5) != v12 )
            if ( *((_DWORD *)v12 + 773) )
              *((_QWORD *)v1 + 3) = *(_QWORD *)j_Entity::getUniqueID(v12);
              v16 = *((_DWORD *)v12 + 773);
              *((_DWORD *)v1 + 8) = v16;
              j_Level::registerTemporaryPointer(v16, (unsigned int)v1 + 16);
              *((_BYTE *)v1 + 36) = 0;
              *((_DWORD *)v1 + 5) = 0;
              *((_DWORD *)v1 + 6) = -1;
              *((_DWORD *)v1 + 7) = -1;
              v17 = *((_DWORD *)v1 + 8);
              if ( v17 )
                j_Level::unregisterTemporaryPointer(v17, (unsigned int)v1 + 16);
              *((_DWORD *)v1 + 8) = 0;
          result = 1;
      }
    }
    else
  }
  else
    result = 0;
  return result;
}
