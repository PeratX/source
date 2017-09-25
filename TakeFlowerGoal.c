

void __fastcall TakeFlowerGoal::~TakeFlowerGoal(TakeFlowerGoal *this)
{
  TakeFlowerGoal::~TakeFlowerGoal(this);
}


Goal *__fastcall TakeFlowerGoal::TakeFlowerGoal(Goal *a1, int a2)
{
  int v2; // r9@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271AF58;
  *((_DWORD *)v3 + 2) = &off_271AF8C;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 5) = -1;
  *((_DWORD *)v3 + 4) = -1;
  *((_DWORD *)v3 + 6) = 0;
  *((_BYTE *)v3 + 28) = 0;
  *((_DWORD *)v3 + 8) = 0;
  *((_BYTE *)v3 + 36) = 0;
  *((_DWORD *)v3 + 10) = v2;
  j_Goal::setRequiredControlFlags(v3, 3);
  return v3;
}


void __fastcall TakeFlowerGoal::~TakeFlowerGoal(TakeFlowerGoal *this)
{
  TakeFlowerGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271AF58;
  *((_DWORD *)this + 2) = &off_271AF8C;
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


signed int __fastcall TakeFlowerGoal::canContinueToUse(TakeFlowerGoal *this)
{
  TakeFlowerGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  IronGolem *v7; // r0@7
  signed int v8; // r4@7

  v1 = this;
  if ( !*((_BYTE *)this + 28) )
  {
    v2 = *((_DWORD *)this + 6);
    if ( v2 )
    {
      v3 = *((_DWORD *)v1 + 4);
      v4 = *((_DWORD *)v1 + 5);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)v1 + 3) = v5;
        if ( !v5 )
          *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 6),
                                  v6,
                                  *((_QWORD *)v1 + 2),
                                  *((_QWORD *)v1 + 2) >> 32,
                                  0);
      }
    }
    *((_BYTE *)v1 + 28) = 1;
  }
  v7 = (IronGolem *)*((_DWORD *)v1 + 3);
  v8 = 0;
  if ( v7 && j_IronGolem::getOfferFlowerTick(v7) > 0 )
    v8 = 1;
  return v8;
}


int __fastcall TakeFlowerGoal::stop(TakeFlowerGoal *this)
{
  TakeFlowerGoal *v1; // r4@1
  int v2; // r0@1
  int result; // r0@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 10));
  (*(void (**)(void))(*(_DWORD *)v2 + 40))();
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = -1;
  *((_DWORD *)v1 + 5) = -1;
  *((_BYTE *)v1 + 28) = 0;
  result = *((_DWORD *)v1 + 6);
  if ( result )
    result = j_Level::unregisterTemporaryPointer(result, (unsigned int)v1 + 8);
  *((_DWORD *)v1 + 6) = 0;
  return result;
}


int __fastcall TakeFlowerGoal::tick(TakeFlowerGoal *this)
{
  TakeFlowerGoal *v1; // r4@1
  int result; // r0@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  Entity *v8; // r5@7
  LookControl *v9; // r0@8
  int v10; // r0@9
  int v15; // r0@13

  v1 = this;
  result = *((_BYTE *)this + 28);
  if ( !result )
  {
    v3 = *((_DWORD *)v1 + 6);
    if ( v3 )
    {
      v4 = *((_DWORD *)v1 + 4);
      v5 = *((_DWORD *)v1 + 5);
      if ( (v4 & v5) != -1 )
      {
        v6 = j_Level::fetchEntity(v3, v4 & v5, v4, v5, 0);
        *((_DWORD *)v1 + 3) = v6;
        if ( !v6 )
          *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 6),
                                  v7,
                                  *((_QWORD *)v1 + 2),
                                  *((_QWORD *)v1 + 2) >> 32,
                                  0);
      }
    }
    result = 1;
    *((_BYTE *)v1 + 28) = 1;
  }
  v8 = (Entity *)*((_DWORD *)v1 + 3);
  if ( v8 )
    v9 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 10));
    j_LookControl::setLookAt(v9, v8, 30.0, 30.0);
    if ( j_IronGolem::getOfferFlowerTick(v8) == *((_DWORD *)v1 + 8) )
      v10 = j_Mob::getNavigation(*((Mob **)v1 + 10));
      (*(void (**)(void))(*(_DWORD *)v10 + 20))();
      *((_BYTE *)v1 + 36) = 1;
    else
      result = *((_BYTE *)v1 + 36);
      if ( !*((_BYTE *)v1 + 36) )
        return result;
    result = j_Entity::distanceToSqr(*((Entity **)v1 + 10), v8);
    __asm
      VMOV.F32        S0, #4.0
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      j_IronGolem::offerFlower(v8, 0);
      v15 = j_Mob::getNavigation(*((Mob **)v1 + 10));
      result = (*(int (**)(void))(*(_DWORD *)v15 + 40))();
  return result;
}


signed int __fastcall TakeFlowerGoal::canUse(TakeFlowerGoal *this)
{
  TakeFlowerGoal *v1; // r8@1
  BlockSource *v2; // r0@2
  int v3; // r5@2
  int v4; // r0@2
  int v5; // r1@3
  IronGolem **v6; // r4@3
  __int64 v7; // kr00_8@3
  IronGolem *v8; // r5@4
  IronGolem *v9; // r6@5
  bool v10; // zf@7
  int v11; // r0@12
  signed int result; // r0@13
  int v13; // r0@14
  int v14; // [sp+4h] [bp-44h]@3
  signed int v15; // [sp+8h] [bp-40h]@3
  signed int v16; // [sp+Ch] [bp-3Ch]@3
  char v17; // [sp+10h] [bp-38h]@3

  v1 = this;
  if ( !j_Mob::getNavigation(*((Mob **)this + 10)) )
    goto LABEL_20;
  v2 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 10));
  v3 = (int)v2;
  v4 = j_BlockSource::getDimension(v2);
  if ( (*(int (**)(void))(*(_DWORD *)v4 + 196))() != 1 )
  v5 = *((_DWORD *)v1 + 10);
  v14 = 1086324736;
  v15 = 0x40000000;
  v16 = 1086324736;
  j_AABB::grow((AABB *)&v17, (const Vec3 *)(v5 + 264), (int)&v14);
  v7 = *(_QWORD *)j_BlockSource::fetchEntities(v3, 788, (int)&v17, *((_DWORD *)v1 + 10));
  v6 = (IronGolem **)v7;
  if ( (_DWORD)v7 == HIDWORD(v7) )
  v8 = 0;
  while ( 1 )
  {
    v9 = *v6;
    if ( j_IronGolem::getOfferFlowerTick(*v6) > 0 )
      break;
    v10 = HIDWORD(v7) - 4 == (_DWORD)v6;
    ++v6;
    if ( v10 )
      goto LABEL_9;
  }
  v8 = v9;
LABEL_9:
  if ( v8 )
    if ( *((IronGolem **)v1 + 3) != v8 )
    {
      if ( *((_DWORD *)v8 + 773) )
      {
        *((_QWORD *)v1 + 2) = *(_QWORD *)j_Entity::getUniqueID(v8);
        v11 = *((_DWORD *)v8 + 773);
        *((_DWORD *)v1 + 6) = v11;
        j_Level::registerTemporaryPointer(v11, (unsigned int)v1 + 8);
        *((_BYTE *)v1 + 28) = 0;
      }
      else
        *((_DWORD *)v1 + 3) = 0;
        *((_DWORD *)v1 + 4) = -1;
        *((_DWORD *)v1 + 5) = -1;
        v13 = *((_DWORD *)v1 + 6);
        if ( v13 )
          j_Level::unregisterTemporaryPointer(v13, (unsigned int)v1 + 8);
        *((_DWORD *)v1 + 6) = 0;
    }
    result = 1;
  else
LABEL_20:
    result = 0;
  return result;
}


Mob *__fastcall TakeFlowerGoal::start(TakeFlowerGoal *this)
{
  TakeFlowerGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  Mob *result; // r0@7
  int v8; // r0@8

  v1 = this;
  *((_DWORD *)this + 8) = j_Random::_genRandInt32((Random *)(*((_DWORD *)this + 10) + 552)) % 0x140;
  *((_BYTE *)v1 + 36) = 0;
  if ( !*((_BYTE *)v1 + 28) )
  {
    v2 = *((_DWORD *)v1 + 6);
    if ( v2 )
    {
      v3 = *((_DWORD *)v1 + 4);
      v4 = *((_DWORD *)v1 + 5);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)v1 + 3) = v5;
        if ( !v5 )
          *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 6),
                                  v6,
                                  *((_QWORD *)v1 + 2),
                                  *((_QWORD *)v1 + 2) >> 32,
                                  0);
      }
    }
    *((_BYTE *)v1 + 28) = 1;
  }
  result = (Mob *)*((_DWORD *)v1 + 3);
  if ( result )
    v8 = j_Mob::getNavigation(result);
    result = (Mob *)(*(int (**)(void))(*(_DWORD *)v8 + 40))();
  return result;
}


int __fastcall TakeFlowerGoal::~TakeFlowerGoal(TakeFlowerGoal *this)
{
  TakeFlowerGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271AF58;
  *((_DWORD *)this + 2) = &off_271AF8C;
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
