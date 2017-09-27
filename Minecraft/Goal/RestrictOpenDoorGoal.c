

DoorInfo *__fastcall RestrictOpenDoorGoal::tick(RestrictOpenDoorGoal *this)
{
  DoorInfo *result; // r0@1

  result = (DoorInfo *)j_RestrictOpenDoorGoal::_getDoorInfo(this);
  if ( result )
    result = (DoorInfo *)j_j_j__ZN8DoorInfo15incBookingCountEv(result);
  return result;
}


void __fastcall RestrictOpenDoorGoal::~RestrictOpenDoorGoal(RestrictOpenDoorGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


_QWORD *__fastcall RestrictOpenDoorGoal::RestrictOpenDoorGoal(Goal *a1, int a2)
{
  int v2; // r4@1
  _QWORD *result; // r0@1

  v2 = a2;
  result = j_Goal::Goal(a1);
  *(_DWORD *)result = &off_271AC48;
  *((_DWORD *)result + 2) = v2;
  return result;
}


int __fastcall RestrictOpenDoorGoal::start(RestrictOpenDoorGoal *this)
{
  PathNavigation *v1; // r4@1

  v1 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)this + 2));
  j_PathNavigation::setCanOpenDoors(v1, 0);
  return j_j_j__ZN14PathNavigation15setCanPassDoorsEb(v1, 0);
}


signed int __fastcall RestrictOpenDoorGoal::canContinueToUse(RestrictOpenDoorGoal *this)
{
  RestrictOpenDoorGoal *v1; // r4@1
  BlockSource *v2; // r0@1
  int v3; // r0@1
  float v4; // r1@2
  DoorInfo *v5; // r5@2
  int v6; // r6@3
  float v7; // r1@3
  int v8; // r0@3
  signed int result; // r0@3

  v1 = this;
  v2 = (BlockSource *)j_Entity::getRegion(*((Entity **)this + 2));
  v3 = j_BlockSource::getDimension(v2);
  if ( (*(int (**)(void))(*(_DWORD *)v3 + 196))() || (v5 = (DoorInfo *)j_RestrictOpenDoorGoal::_getDoorInfo(v1)) == 0 )
  {
    result = 0;
  }
  else
    v6 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 2) + 72), v4);
    v8 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 2) + 80), v7);
    result = j_DoorInfo::isInsideSide(v5, v6, v8);
  return result;
}


void __fastcall RestrictOpenDoorGoal::~RestrictOpenDoorGoal(RestrictOpenDoorGoal *this)
{
  RestrictOpenDoorGoal::~RestrictOpenDoorGoal(this);
}


int __fastcall RestrictOpenDoorGoal::_getDoorInfo(RestrictOpenDoorGoal *this)
{
  int v1; // r1@1
  int v2; // r4@1
  unsigned int *v3; // r7@2
  Village *v4; // r2@2
  unsigned int v5; // r1@4
  int result; // r0@6
  unsigned int *v7; // r1@9
  unsigned int v8; // r3@9
  unsigned int v9; // r6@12
  unsigned int v10; // r5@13
  int v11; // r8@14
  unsigned int v12; // r3@14
  signed int v13; // r1@14
  int v14; // r0@18
  int v15; // r6@20
  unsigned int *v16; // r1@21
  unsigned int v17; // r0@23
  unsigned int *v18; // r5@28
  unsigned int v19; // r0@30
  unsigned int v20; // r0@37

  v1 = *((_DWORD *)this + 2);
  v2 = *(_DWORD *)(v1 + 4168);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    v4 = *(Village **)(v1 + 4164);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v3);
      while ( __strex(v5 + 1, v3) );
    }
    else
      ++*v3;
    if ( *(_DWORD *)(v2 + 4) )
      v7 = (unsigned int *)(v2 + 4);
      v8 = *(_DWORD *)(v2 + 4);
      {
        while ( 1 )
        {
          if ( !v8 )
          {
            v13 = 1;
            v11 = 0;
            goto LABEL_18;
          }
          __dmb();
          v9 = __ldrex(v7);
          if ( v9 == v8 )
            break;
          __clrex();
          v8 = v9;
        }
        v10 = __strex(v8 + 1, v7);
        v8 = v9;
      }
      while ( v10 );
      v11 = v2;
      v12 = *v7;
      v13 = 0;
      if ( !v12 )
        v13 = 1;
LABEL_18:
      v14 = *((_DWORD *)this + 2);
      if ( v13 )
        v4 = 0;
      v15 = j_Village::getClosestDoorInfo(v4, (const Vec3 *)(v14 + 72));
      if ( v11 )
        v16 = (unsigned int *)(v11 + 4);
        if ( &pthread_create )
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        else
          v17 = (*v16)--;
        if ( v17 == 1 )
          v18 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          if ( &pthread_create )
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          else
            v19 = (*v18)--;
          if ( v19 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      v15 = 0;
        v20 = __ldrex(v3);
      while ( __strex(v20 - 1, v3) );
      v20 = (*v3)--;
    if ( v20 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
    result = v15;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall RestrictOpenDoorGoal::canUse(RestrictOpenDoorGoal *this)
{
  RestrictOpenDoorGoal *v1; // r4@1
  BlockSource *v2; // r0@2
  int v3; // r0@2
  signed int result; // r0@3
  DoorInfo *v5; // r0@4
  signed int v6; // r5@4

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2))
    && (v2 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2)),
        v3 = j_BlockSource::getDimension(v2),
        !(*(int (**)(void))(*(_DWORD *)v3 + 196))()) )
  {
    v5 = (DoorInfo *)j_RestrictOpenDoorGoal::_getDoorInfo(v1);
    v6 = 0;
    if ( v5 )
    {
      if ( j_DoorInfo::distanceToInsideSqr(v5, (const Vec3 *)(*((_DWORD *)v1 + 2) + 72)) < 3 )
        v6 = 1;
    }
    result = v6;
  }
  else
    result = 0;
  return result;
}


int __fastcall RestrictOpenDoorGoal::stop(RestrictOpenDoorGoal *this)
{
  PathNavigation *v1; // r4@1

  v1 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)this + 2));
  j_PathNavigation::setCanOpenDoors(v1, 1);
  return j_j_j__ZN14PathNavigation15setCanPassDoorsEb(v1, 1);
}
