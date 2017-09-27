

int __fastcall MakeLoveGoal::~MakeLoveGoal(MakeLoveGoal *this)
{
  Goal *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_271A6F8;
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


Entity *__fastcall MakeLoveGoal::tick(MakeLoveGoal *this)
{
  MakeLoveGoal *v1; // r4@1
  int v2; // r5@1
  char *v3; // r0@1
  int v4; // r1@1
  Entity *result; // r0@1
  Entity *v6; // r5@1
  LookControl *v7; // r0@3
  BlockSource *v13; // r0@10
  int v14; // r0@10

  v1 = this;
  --*((_DWORD *)this + 3);
  v2 = j_Entity::getLevel(*((Entity **)this + 2));
  v3 = j_Entity::lovePartnerId(*((Entity **)v1 + 2));
  result = (Entity *)j_Level::fetchEntity(v2, v4, *(_QWORD *)v3, *(_QWORD *)v3 >> 32, 0);
  v6 = result;
  if ( result )
  {
    result = (Entity *)(*(int (**)(void))(*(_DWORD *)result + 488))();
    if ( result == (Entity *)783 )
    {
      v7 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 2));
      j_LookControl::setLookAt(v7, v6, 10.0, 30.0);
      if ( !*((_DWORD *)v1 + 3) && j_Entity::isInLove(v6) == 1 )
      {
        _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v6);
        __asm
        {
          VMOV.F32        S0, #2.25
          VMOV            S2, R0
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          j_MakeLoveGoal::_breed(v1, v6);
      }
      result = (Entity *)(j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % 0x23);
      if ( !result )
        v13 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
        v14 = j_BlockSource::getLevel(v13);
        result = (Entity *)j_j_j__ZN5Level20broadcastEntityEventEP6Entity11EntityEventi_1(
                             v14,
                             *((_DWORD *)v1 + 2),
                             21,
                             0);
    }
  }
  return result;
}


void __fastcall MakeLoveGoal::~MakeLoveGoal(MakeLoveGoal *this)
{
  Goal *v1; // r5@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  *(_DWORD *)this = &off_271A6F8;
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall MakeLoveGoal::start(int result)
{
  *(_DWORD *)(result + 12) = 300;
  return result;
}


void __fastcall MakeLoveGoal::_breed(MakeLoveGoal *this, Villager *a2)
{
  MakeLoveGoal *v2; // r5@1
  Villager *v3; // r4@1
  int v4; // r0@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  Entity *v8; // r6@4
  void *v9; // r0@5
  int v10; // r6@6
  void (__fastcall *v11)(int, int, Entity **); // r7@6
  int v12; // r1@6
  Entity *v13; // r0@6
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  unsigned int *v20; // r2@27
  signed int v21; // r1@29
  Entity *v22; // [sp+4h] [bp-34h]@6
  int v23; // [sp+Ch] [bp-2Ch]@5
  int v24; // [sp+10h] [bp-28h]@1
  int v25; // [sp+14h] [bp-24h]@2
  int v26; // [sp+18h] [bp-20h]@1
  Entity *v27; // [sp+1Ch] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(**((_DWORD **)this + 2) + 488))();
  j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v24, v4);
  j_EntityFactory::createBornEntity(
    (EntityFactory *)&v27,
    (const EntityDefinitionIdentifier *)&v24,
    *((Entity **)v2 + 2));
  v5 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = v27;
  if ( v27 )
    sub_21E94B4((void **)&v23, "parent");
    j_Entity::pushInitialParameter<Villager>((int)v8, &v23, (int)v3);
    v9 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    j_Entity::setPersistent(v27);
    v10 = j_Entity::getLevel(*((Entity **)v2 + 2));
    v11 = *(void (__fastcall **)(int, int, Entity **))(*(_DWORD *)v10 + 44);
    v12 = j_Entity::getRegion(*((Entity **)v2 + 2));
    v13 = v27;
    v27 = 0;
    v22 = v13;
    v11(v10, v12, &v22);
    if ( v22 )
      (*(void (**)(void))(*(_DWORD *)v22 + 32))();
    v22 = 0;
    if ( !j_Villager::isWillingToBreed(*((Villager **)v2 + 2), 0) )
      j_Villager::consumeLoveFood(*((Villager **)v2 + 2));
    j_Villager::setWillingToBreed(*((Villager **)v2 + 2), 0);
    if ( !j_Villager::isWillingToBreed(v3, 0) )
      j_Villager::consumeLoveFood(v3);
    j_Villager::setWillingToBreed(v3, 0);
    if ( v27 )
      (*(void (**)(void))(*(_DWORD *)v27 + 32))();
}


signed int __fastcall MakeLoveGoal::canUse(MakeLoveGoal *this)
{
  MakeLoveGoal *v1; // r4@1
  signed int v2; // r6@5
  int v3; // r0@10
  int v4; // r5@10
  int v5; // r1@10
  unsigned int *v6; // r0@11
  unsigned int v7; // r2@13
  unsigned int v8; // r1@19
  int v9; // r0@22
  unsigned int *v10; // r2@23
  unsigned int v11; // r1@25
  unsigned int *v12; // r1@31
  unsigned int v13; // r0@33
  int v14; // r5@39
  unsigned int *v15; // r0@41
  unsigned int v16; // r1@41
  unsigned int v17; // r2@44
  unsigned int v18; // r3@45
  unsigned int v19; // r1@46
  Village *v20; // r6@46
  unsigned int *v21; // r7@57
  unsigned int v22; // r0@59
  int v23; // r5@66
  int v24; // r0@66
  unsigned __int64 *v25; // r6@66
  int v26; // r0@66
  Entity **v27; // r5@66
  Entity **v28; // r11@66
  PathNavigation *v29; // r9@66
  Entity *v33; // r10@67
  Entity *v34; // r7@68
  char *v35; // r6@68
  signed int v36; // r0@69
  Path *v39; // r6@81
  const Vec3 *v40; // r0@82
  int v42; // [sp+0h] [bp-60h]@66
  signed int v43; // [sp+4h] [bp-5Ch]@66
  signed int v44; // [sp+8h] [bp-58h]@66
  char v45; // [sp+Ch] [bp-54h]@66

  v1 = this;
  if ( !j_Mob::getNavigation(*((Mob **)this + 2)) )
    return 0;
  if ( j_Entity::isInLove(*((Entity **)v1 + 2)) == 1 && j_Villager::isChasing(*((Villager **)v1 + 2)) != 1 )
  if ( j_Entity::isBaby(*((Entity **)v1 + 2)) )
  if ( j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % 0x1F4 )
  v3 = *((_DWORD *)v1 + 2);
  v4 = *(_DWORD *)(v3 + 4168);
  v5 = *(_DWORD *)(v3 + 4164);
  if ( v4 )
  {
    v6 = (unsigned int *)(v4 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
    *((_DWORD *)v1 + 4) = v5;
        v8 = __ldrex(v6);
      while ( __strex(v8 + 1, v6) );
  }
  else
  v9 = *((_DWORD *)v1 + 5);
  if ( v9 )
    v10 = (unsigned int *)(v9 + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (**)(void))(*(_DWORD *)v9 + 12))();
  *((_DWORD *)v1 + 5) = v4;
  if ( !v4 )
  v12 = (unsigned int *)(v4 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v13 = __ldrex(v12);
    while ( __strex(v13 - 1, v12) );
    v13 = (*v12)--;
  if ( v13 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  v14 = *((_DWORD *)v1 + 5);
  if ( !v14 )
  if ( !*(_DWORD *)(v14 + 4) )
  v15 = (unsigned int *)(v14 + 4);
  v16 = *(_DWORD *)(v14 + 4);
  do
    while ( 1 )
      if ( !v16 )
        return 0;
      v17 = __ldrex(v15);
      if ( v17 == v16 )
        break;
      __clrex();
      v16 = v17;
    v18 = __strex(v16 + 1, v15);
    v16 = v17;
  while ( v18 );
  __dmb();
  v19 = *v15;
  v20 = (Village *)*((_DWORD *)v1 + 4);
  if ( !*v15 )
    v20 = (Village *)*v15;
      v19 = __ldrex(v15);
    while ( __strex(v19 - 1, v15) );
    *v15 = v19 - 1;
  if ( v19 == 1 )
    v21 = (unsigned int *)(v14 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  if ( !v20 )
  if ( j_Village::checkNeedMoreVillagers(v20) != 1 )
  v23 = j_Entity::getRegion(*((Entity **)v1 + 2));
  v24 = *((_DWORD *)v1 + 2);
  v42 = 1090519040;
  v43 = 1077936128;
  v44 = 1090519040;
  j_AABB::grow((AABB *)&v45, (const Vec3 *)(v24 + 264), (int)&v42);
  v25 = (unsigned __int64 *)j_BlockSource::fetchEntities(v23, 783, (int)&v45, *((_DWORD *)v1 + 2));
  v26 = j_Mob::getNavigation(*((Mob **)v1 + 2));
  v28 = (Entity **)(*v25 >> 32);
  v27 = (Entity **)*v25;
  v29 = (PathNavigation *)v26;
  if ( v27 == v28 )
  __asm { VLDR            S16, =3.4028e38 }
  v33 = 0;
  while ( 1 )
    v34 = *v27;
    v35 = j_Entity::lovePartnerId(*v27);
    if ( ((unsigned int)*(_QWORD *)v35 & (unsigned int)(*(_QWORD *)v35 >> 32)) != -1 )
      _ZF = *(_QWORD *)v35 == *(_QWORD *)j_Entity::getUniqueID(*((Entity **)v1 + 2));
      v36 = 2;
      if ( _ZF )
        v33 = v34;
      else
        v36 = 3;
      goto LABEL_72;
    _R0 = j_Entity::distanceToSqr(v34, *((const Entity **)v1 + 2));
    __asm
      VMOV            S18, R0
      VCMPE.F32       S18, S16
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      if ( !j_Entity::getAge(v34)
        && j_Villager::isWillingToBreed(v34, 1) == 1
        && (*(int (__fastcall **)(PathNavigation *, Entity *, signed int))(*(_DWORD *)v29 + 20))(v29, v34, 1058642330) == 1 )
      {
        v39 = (Path *)j_PathNavigation::getPath(v29);
        if ( v39 )
          break;
      }
LABEL_85:
    ++v27;
    if ( v28 == v27 )
      goto LABEL_86;
  v40 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v34 + 52))(v34);
  _ZF = j_Path::endsInXZ(v39, v40) == 0;
  v36 = 3;
  if ( !_ZF )
    __asm { VMOVNE.F32      S16, S18 }
    v33 = v34;
    v36 = 0;
LABEL_72:
  _ZF = v36 == 3;
  if ( v36 != 3 )
    _ZF = v36 == 0;
  if ( _ZF )
    goto LABEL_85;
LABEL_86:
  if ( v33 )
    j_Entity::setInLove(*((Entity **)v1 + 2), v33);
    v2 = 1;
    j_Villager::setChasing(*((Villager **)v1 + 2), 1);
    j_Entity::setInLove(v33, *((Entity **)v1 + 2));
    j_Villager::setChasing(v33, 0);
    j_Villager::stopGoals(v33);
    v2 = 0;
  return v2;
}


Goal *__fastcall MakeLoveGoal::MakeLoveGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271A6F8;
  *((_DWORD *)v3 + 2) = v2;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 4) = 0;
  *((_DWORD *)v3 + 5) = 0;
  j_Goal::setRequiredControlFlags(v3, 3);
  return v3;
}


signed int __fastcall MakeLoveGoal::canContinueToUse(MakeLoveGoal *this)
{
  MakeLoveGoal *v1; // r4@1
  int v2; // r5@3
  unsigned int v3; // r1@4
  unsigned int *v4; // r0@4
  unsigned int v5; // r2@7
  unsigned int v6; // r3@8
  unsigned int v7; // r1@9
  Village *v8; // r6@9
  signed int v9; // r6@15
  unsigned int *v10; // r7@21
  unsigned int v11; // r0@23
  signed int v12; // r0@29
  int v13; // r5@30
  char *v14; // r0@30
  int v15; // r1@30
  int v16; // r0@30
  const Entity *v17; // r5@30
  PathNavigation *v23; // r4@34
  Path *v24; // r6@34
  const Vec3 *v25; // r0@35
  Path *v26; // r4@37
  const Vec3 *v27; // r0@38

  v1 = this;
  if ( *((_DWORD *)this + 3) < 0 )
  {
    v9 = 0;
  }
  else if ( j_Entity::isInLove(*((Entity **)this + 2)) == 1 )
    v2 = *((_DWORD *)v1 + 5);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 4);
      v4 = (unsigned int *)(v2 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v3 )
            return 0;
          __dmb();
          v5 = __ldrex(v4);
          if ( v5 == v3 )
            break;
          __clrex();
          v3 = v5;
        }
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
      }
      while ( v6 );
      __dmb();
      v7 = *v4;
      v8 = (Village *)*((_DWORD *)v1 + 4);
      if ( !*v4 )
        v8 = (Village *)*v4;
      if ( &pthread_create )
        __dmb();
        do
          v7 = __ldrex(v4);
        while ( __strex(v7 - 1, v4) );
      else
        *v4 = v7 - 1;
      if ( v7 == 1 )
        v10 = (unsigned int *)(v2 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
        if ( &pthread_create )
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      if ( v8 )
        v12 = j_Village::checkNeedMoreVillagers(v8);
        v9 = 0;
        if ( v12 == 1 )
          v13 = j_Entity::getLevel(*((Entity **)v1 + 2));
          v14 = j_Entity::lovePartnerId(*((Entity **)v1 + 2));
          v16 = j_Level::fetchEntity(v13, v15, *(_QWORD *)v14, *(_QWORD *)v14 >> 32, 0);
          v17 = (const Entity *)v16;
          if ( v16 )
          {
            if ( (*(int (**)(void))(*(_DWORD *)v16 + 488))() == 783 )
            {
              if ( j_Villager::isWillingToBreed(v17, 1) == 1 )
              {
                _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v17);
                __asm
                {
                  VMOV.F32        S0, #2.25
                  VMOV            S2, R0
                  VCMPE.F32       S2, S0
                  VMRS            APSR_nzcv, FPSCR
                }
                if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                  v23 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)v1 + 2));
                  v24 = (Path *)j_PathNavigation::getPath(v23);
                  if ( !v24
                    || (v25 = (const Vec3 *)(*(int (__fastcall **)(const Entity *))(*(_DWORD *)v17 + 52))(v17),
                        !j_Path::endsInXZ(v24, v25)) )
                  {
                    if ( (*(int (__fastcall **)(PathNavigation *, const Entity *, signed int))(*(_DWORD *)v23 + 20))(
                           v23,
                           v17,
                           1058642330) != 1 )
                      return 0;
                    v26 = (Path *)j_PathNavigation::getPath(v23);
                    if ( !v26 )
                    v27 = (const Vec3 *)(*(int (__fastcall **)(const Entity *))(*(_DWORD *)v17 + 52))(v17);
                    if ( j_Path::endsInXZ(v26, v27) != 1 )
                  }
                v9 = 1;
              }
              else
                v9 = 0;
            }
            else
              v9 = 0;
          }
    }
    else
      v9 = 0;
  else
  return v9;
}


int __fastcall MakeLoveGoal::appendDebugInfo(int a1, const void **a2, __int64 a3)
{
  const void **v3; // r5@1
  int v4; // r4@1
  void *v5; // r0@1
  int v6; // r5@2
  char *v7; // r0@2
  int v8; // r1@2
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+4h] [bp-1Ch]@1

  v3 = a2;
  v4 = a1;
  LODWORD(a3) = *(_DWORD *)(a1 + 12);
  j_Util::format((Util *)&v12, "MakeLove[%d]", a3);
  sub_21E72F0(v3, (const void **)&v12);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = j_Entity::getLevel(*(Entity **)(v4 + 8));
  v7 = j_Entity::lovePartnerId(*(Entity **)(v4 + 8));
  return j_Level::fetchEntity(v6, v8, *(_QWORD *)v7, *(_QWORD *)v7 >> 32, 0);
}


unsigned int __fastcall MakeLoveGoal::stop(MakeLoveGoal *this)
{
  MakeLoveGoal *v1; // r4@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  int v5; // r5@9
  char *v6; // r0@9
  int v7; // r1@9
  Entity *v8; // r0@9

  v1 = this;
  *((_DWORD *)this + 4) = 0;
  v2 = *((_DWORD *)this + 5);
  *((_DWORD *)v1 + 5) = 0;
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  v5 = j_Entity::getLevel(*((Entity **)v1 + 2));
  v6 = j_Entity::lovePartnerId(*((Entity **)v1 + 2));
  v8 = (Entity *)j_Level::fetchEntity(v5, v7, *(_QWORD *)v6, *(_QWORD *)v6 >> 32, 0);
  if ( v8 )
    j_Entity::setInLove(v8, 0);
  return j_j_j__ZN6Entity9setInLoveEPS__0(*((Entity **)v1 + 2), 0);
}


void __fastcall MakeLoveGoal::~MakeLoveGoal(MakeLoveGoal *this)
{
  MakeLoveGoal::~MakeLoveGoal(this);
}


void __fastcall MakeLoveGoal::_breed(MakeLoveGoal *this, Villager *a2)
{
  MakeLoveGoal::_breed(this, a2);
}
