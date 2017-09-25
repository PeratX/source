

Goal *__fastcall PlayGoal::PlayGoal(Goal *a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r5@1
  Goal *v5; // r4@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v5 = &off_271AAE4;
  *((_DWORD *)v5 + 2) = v4;
  *((_DWORD *)v5 + 4) = &off_271AB18;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 7) = -1;
  *((_DWORD *)v5 + 6) = -1;
  *((_DWORD *)v5 + 8) = 0;
  *((_BYTE *)v5 + 36) = 0;
  *((_DWORD *)v5 + 10) = v3;
  *((_DWORD *)v5 + 11) = 0;
  j_Goal::setRequiredControlFlags(v5, 1);
  return v5;
}


int __fastcall PlayGoal::stop(PlayGoal *this)
{
  PlayGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  j_Villager::setChasing(*((Villager **)this + 2), 0);
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = -1;
  *((_DWORD *)v1 + 7) = -1;
  *((_BYTE *)v1 + 36) = 0;
  result = *((_DWORD *)v1 + 8);
  if ( result )
    result = j_Level::unregisterTemporaryPointer(result, (unsigned int)v1 + 16);
  *((_DWORD *)v1 + 8) = 0;
  return result;
}


signed int __fastcall PlayGoal::canContinueToUse(PlayGoal *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 11);
  result = 0;
  if ( v1 > 0 )
    result = 1;
  return result;
}


void __fastcall PlayGoal::~PlayGoal(PlayGoal *this)
{
  PlayGoal::~PlayGoal(this);
}


int __fastcall PlayGoal::~PlayGoal(PlayGoal *this)
{
  PlayGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271AAE4;
  *((_DWORD *)this + 4) = &off_271AB18;
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


void __fastcall PlayGoal::~PlayGoal(PlayGoal *this)
{
  PlayGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271AAE4;
  *((_DWORD *)this + 4) = &off_271AB18;
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


signed int __fastcall PlayGoal::canUse(PlayGoal *this)
{
  PlayGoal *v1; // r4@1
  signed int v2; // r9@4
  int v3; // r5@7
  int v4; // r6@7
  int v5; // r0@7
  Villager **v6; // r6@7
  __int64 v7; // kr00_8@7
  Entity *v12; // r8@8
  Entity *v13; // r7@9
  signed int v15; // r0@18
  int v16; // r0@24
  int v17; // r0@25
  int v19; // [sp+0h] [bp-60h]@0
  int v20; // [sp+4h] [bp-5Ch]@19
  int v21; // [sp+8h] [bp-58h]@19
  int v22; // [sp+Ch] [bp-54h]@19
  int v23; // [sp+10h] [bp-50h]@7
  signed int v24; // [sp+14h] [bp-4Ch]@7
  signed int v25; // [sp+18h] [bp-48h]@7
  char v26; // [sp+1Ch] [bp-44h]@7

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2)) )
  {
    if ( j_Entity::isBaby(*((Entity **)v1 + 2)) == 1 )
    {
      if ( j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % 0x190 )
      {
        v2 = 0;
      }
      else
        v3 = j_Entity::getRegion(*((Entity **)v1 + 2));
        v4 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 488))();
        v5 = *((_DWORD *)v1 + 2);
        v23 = 1086324736;
        v24 = 1077936128;
        v25 = 1086324736;
        j_AABB::grow((AABB *)&v26, (const Vec3 *)(v5 + 264), (int)&v23);
        v7 = *(_QWORD *)j_BlockSource::fetchEntities(v3, v4, (int)&v26, *((_DWORD *)v1 + 2));
        v6 = (Villager **)v7;
        if ( (_DWORD)v7 == HIDWORD(v7) )
          goto LABEL_32;
        __asm { VLDR            S16, =3.4028e38 }
        v12 = 0;
        do
        {
          v13 = *v6;
          if ( *v6 != *((Villager **)v1 + 2) && !j_Villager::isChasing(*v6) && j_Entity::isBaby(v13) == 1 )
          {
            _R0 = j_Entity::distanceToSqr(v13, *((const Entity **)v1 + 2));
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
          ++v6;
        }
        while ( (Villager **)HIDWORD(v7) != v6 );
        if ( v12 )
          v15 = 0;
        else
LABEL_32:
          v20 = 0;
          v21 = 0;
          v22 = 0;
          if ( j_RandomPos::getPos((RandomPos *)&v20, *((Vec3 **)v1 + 2), (Mob *)0x10, 3, v19) != 1 )
            return v2;
          v15 = 1;
          v12 = 0;
        if ( *((Entity **)v1 + 5) != v12 )
          if ( v15 || !*((_DWORD *)v12 + 773) )
            *((_DWORD *)v1 + 5) = 0;
            *((_DWORD *)v1 + 6) = -1;
            *((_DWORD *)v1 + 7) = -1;
            *((_BYTE *)v1 + 36) = 0;
            v17 = *((_DWORD *)v1 + 8);
            if ( v17 )
              j_Level::unregisterTemporaryPointer(v17, (unsigned int)v1 + 16);
            *((_DWORD *)v1 + 8) = 0;
          else
            *((_QWORD *)v1 + 3) = *(_QWORD *)j_Entity::getUniqueID(v12);
            v16 = *((_DWORD *)v12 + 773);
            *((_DWORD *)v1 + 8) = v16;
            j_Level::registerTemporaryPointer(v16, (unsigned int)v1 + 16);
        v2 = 1;
    }
    else
      v2 = 0;
  }
  else
    v2 = 0;
  return v2;
}


signed int __fastcall PlayGoal::start(PlayGoal *this)
{
  PlayGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  signed int result; // r0@9

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
  if ( *((_DWORD *)v1 + 5) )
    j_Villager::setChasing(*((Villager **)v1 + 2), 1);
  result = 1000;
  *((_DWORD *)v1 + 11) = 1000;
  return result;
}


int __fastcall PlayGoal::tick(PlayGoal *this)
{
  PlayGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  Entity *v7; // r0@7
  int result; // r0@8
  int v13; // r0@9
  int v14; // r2@9
  int v15; // r0@10
  int v16; // r0@12
  int v17; // r2@12
  int v18; // [sp+0h] [bp-20h]@0
  int v19; // [sp+4h] [bp-1Ch]@11
  int v20; // [sp+8h] [bp-18h]@11
  int v21; // [sp+Ch] [bp-14h]@11

  v1 = this;
  --*((_DWORD *)this + 11);
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
  v7 = (Entity *)*((_DWORD *)v1 + 2);
  if ( *((_DWORD *)v1 + 5) )
    result = j_Entity::distanceToSqr(v7, *((const Entity **)v1 + 5));
    __asm
      VMOV.F32        S0, #4.0
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v13 = j_Mob::getNavigation(*((Mob **)v1 + 2));
      v14 = *((_DWORD *)v1 + 10);
      result = (*(int (**)(void))(*(_DWORD *)v13 + 20))();
  else
    v15 = j_Mob::getNavigation(v7);
    result = (*(int (**)(void))(*(_DWORD *)v15 + 36))();
    if ( result == 1 )
      v19 = 0;
      v20 = 0;
      v21 = 0;
      result = j_RandomPos::getPos((RandomPos *)&v19, *((Vec3 **)v1 + 2), (Mob *)0x10, 3, v18);
      if ( result == 1 )
        v16 = j_Mob::getNavigation(*((Mob **)v1 + 2));
        v17 = *((_DWORD *)v1 + 10);
        result = (*(int (**)(void))(*(_DWORD *)v16 + 12))();
  return result;
}
