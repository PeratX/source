

Goal *__fastcall OfferFlowerGoal::OfferFlowerGoal(Goal *a1, int a2)
{
  int v2; // r9@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271A95C;
  *((_DWORD *)v3 + 2) = &off_271A990;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 5) = -1;
  *((_DWORD *)v3 + 4) = -1;
  *((_DWORD *)v3 + 6) = 0;
  *((_BYTE *)v3 + 28) = 0;
  *((_DWORD *)v3 + 8) = 0;
  *((_DWORD *)v3 + 9) = v2;
  j_Goal::setRequiredControlFlags(v3, 3);
  return v3;
}


signed int __fastcall OfferFlowerGoal::canContinueToUse(OfferFlowerGoal *this)
{
  OfferFlowerGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  signed int result; // r0@7

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
  result = 0;
  if ( *((_DWORD *)v1 + 3) )
    if ( *((_DWORD *)v1 + 8) > 0 )
      result = 1;
  return result;
}


int __fastcall OfferFlowerGoal::~OfferFlowerGoal(OfferFlowerGoal *this)
{
  OfferFlowerGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A95C;
  *((_DWORD *)this + 2) = &off_271A990;
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


int __fastcall OfferFlowerGoal::tick(OfferFlowerGoal *this)
{
  OfferFlowerGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  Entity *v7; // r5@7
  LookControl *v8; // r0@8
  int result; // r0@9

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
  v7 = (Entity *)*((_DWORD *)v1 + 3);
  if ( v7 )
    v8 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 9));
    j_LookControl::setLookAt(v8, v7, 30.0, 30.0);
  result = *((_DWORD *)v1 + 8) - 1;
  *((_DWORD *)v1 + 8) = result;
  return result;
}


int __fastcall OfferFlowerGoal::stop(OfferFlowerGoal *this)
{
  OfferFlowerGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  j_IronGolem::offerFlower(*((IronGolem **)this + 9), 0);
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


signed int __fastcall OfferFlowerGoal::canUse(OfferFlowerGoal *this)
{
  OfferFlowerGoal *v1; // r4@1
  BlockSource *v2; // r0@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r6@3
  Entity *v6; // r0@3
  Entity *v7; // r5@3
  int (__fastcall *v8)(Entity *, int *); // r6@4
  int v9; // r6@4
  void *v10; // r0@4
  int v11; // r0@8
  signed int result; // r0@9
  int v13; // r0@10
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  int v16; // [sp+4h] [bp-44h]@4
  int v17; // [sp+8h] [bp-40h]@3
  signed int v18; // [sp+Ch] [bp-3Ch]@3
  signed int v19; // [sp+10h] [bp-38h]@3
  char v20; // [sp+14h] [bp-34h]@3

  v1 = this;
  v2 = (BlockSource *)j_Entity::getRegion(*((Entity **)this + 9));
  v3 = (int)v2;
  v4 = j_BlockSource::getDimension(v2);
  if ( (*(int (**)(void))(*(_DWORD *)v4 + 196))() != 1 )
    goto LABEL_24;
  if ( j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 9) + 552)) % 0x1F40 )
  v5 = *((_DWORD *)v1 + 9);
  v17 = 1086324736;
  v18 = 0x40000000;
  v19 = 1086324736;
  j_AABB::grow((AABB *)&v20, (const Vec3 *)(v5 + 264), (int)&v17);
  v6 = j_BlockSource::fetchNearestEntityOfType(v3, v5, (int)&v20, 256);
  v7 = v6;
  if ( !v6 )
  v8 = *(int (__fastcall **)(Entity *, int *))(*(_DWORD *)v6 + 16);
  sub_21E94B4((void **)&v16, "minecraft:behavior.take_flower");
  v9 = v8(v7, &v16);
  v10 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v16 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  if ( v9 != 1 )
LABEL_24:
    result = 0;
  else
    if ( *((Entity **)v1 + 3) != v7 )
      if ( *((_DWORD *)v7 + 773) )
      {
        *((_QWORD *)v1 + 2) = *(_QWORD *)j_Entity::getUniqueID(v7);
        v11 = *((_DWORD *)v7 + 773);
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
    result = 1;
  return result;
}


void __fastcall OfferFlowerGoal::~OfferFlowerGoal(OfferFlowerGoal *this)
{
  OfferFlowerGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A95C;
  *((_DWORD *)this + 2) = &off_271A990;
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


int __fastcall OfferFlowerGoal::start(OfferFlowerGoal *this)
{
  *((_DWORD *)this + 8) = 400;
  return j_j_j__ZN9IronGolem11offerFlowerEb_0(*((IronGolem **)this + 9), 1);
}


void __fastcall OfferFlowerGoal::~OfferFlowerGoal(OfferFlowerGoal *this)
{
  OfferFlowerGoal::~OfferFlowerGoal(this);
}
