

Entity *__fastcall PickupItemsGoal::canUse(PickupItemsGoal *this)
{
  int v2; // r0@1
  Level *v3; // r0@2
  unsigned __int64 *v4; // r0@2
  Entity *v5; // r5@2
  int v6; // r0@3
  int v11; // r6@3
  const Vec3 *v12; // r1@3
  Entity **v13; // r7@3
  __int64 v14; // kr00_8@3
  Entity *v15; // r6@4
  ShareableComponent *v16; // r0@8
  ContainerComponent *v17; // r0@10
  int v19; // r0@20
  _BYTE *v20; // r4@20
  int v21; // r0@24
  int v22; // r5@27
  void (__fastcall *v23)(Path **, int, _DWORD); // r6@27
  int v24; // r0@28
  unsigned int v25; // r2@29
  unsigned int v26; // r3@29
  int v27; // r0@30
  int v28; // r1@30
  Path *v29; // r1@33
  Path *v30; // r0@33
  Path *v31; // r0@34
  Path *v32; // r0@35
  Path *v34; // [sp+8h] [bp-48h]@33
  float v35; // [sp+Ch] [bp-44h]@3
  int v36; // [sp+10h] [bp-40h]@3
  char v37; // [sp+18h] [bp-38h]@3

  _R8 = this;
  v2 = *((_DWORD *)this + 11);
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 404) )
  {
    v3 = (Level *)j_Entity::getLevel((Entity *)v2);
    v4 = (unsigned __int64 *)j_Level::getGameRules(v3);
    v5 = 0;
    if ( j_GameRules::getBool(v4, (int **)&GameRules::MOB_GRIEFING) == 1 )
    {
      v6 = j_Entity::getRegion(*((Entity **)_R8 + 11));
      __asm { VLDR            S0, [R8,#0x30] }
      v11 = v6;
      __asm { VCVT.F32.S32    S0, S0 }
      v12 = (const Vec3 *)(*((_DWORD *)_R8 + 11) + 264);
      __asm { VSTR            S0, [SP,#0x50+var_44] }
      v36 = 0;
      __asm { VSTR            S0, [SP,#0x50+var_3C] }
      j_AABB::grow((AABB *)&v37, v12, (int)&v35);
      v14 = *(_QWORD *)j_BlockSource::fetchEntities(v11, 64, (int)&v37, 0);
      v13 = (Entity **)v14;
      if ( (_DWORD)v14 != HIDWORD(v14) )
      {
        do
        {
          v15 = *v13;
          if ( !j_Entity::isRemoved(*v13) && j_Entity::hasCategory((int)v15, 1024) == 1 && *((_DWORD *)v15 + 873) <= 0 )
          {
            if ( !j_Entity::getShareableComponent(*((Entity **)_R8 + 11))
              || (v16 = (ShareableComponent *)j_Entity::getShareableComponent(*((Entity **)_R8 + 11)),
                  j_ShareableComponent::willPickup(v16, (Entity *)((char *)v15 + 3416)) == 1) )
            {
              if ( !j_Entity::getContainerComponent(*((Entity **)_R8 + 11))
                || (v17 = (ContainerComponent *)j_Entity::getContainerComponent(*((Entity **)_R8 + 11)),
                    j_ContainerComponent::hasRoomForItem(v17, v15) == 1) )
              {
                if ( v5 )
                {
                  _R0 = j_Entity::distanceToSqr(v15, *((const Entity **)_R8 + 11));
                  __asm
                  {
                    VMOV            S0, R0
                    VCMPE.F32       S0, #0.0
                    VMRS            APSR_nzcv, FPSCR
                  }
                  if ( _NF ^ _VF )
                    v5 = v15;
                }
                else
                  v5 = v15;
              }
            }
          }
          ++v13;
        }
        while ( (Entity **)HIDWORD(v14) != v13 );
        if ( v5 )
          if ( *((Entity **)_R8 + 3) == v5 )
            v20 = (char *)_R8 + 28;
          else if ( *((_DWORD *)v5 + 773) )
            *((_QWORD *)_R8 + 2) = *(_QWORD *)j_Entity::getUniqueID(v5);
            v19 = *((_DWORD *)v5 + 773);
            *((_DWORD *)_R8 + 6) = v19;
            j_Level::registerTemporaryPointer(v19, (unsigned int)_R8 + 8);
            *((_BYTE *)_R8 + 28) = 0;
          else
            *((_DWORD *)_R8 + 3) = 0;
            *((_DWORD *)_R8 + 4) = -1;
            *((_DWORD *)_R8 + 5) = -1;
            v21 = *((_DWORD *)_R8 + 6);
            if ( v21 )
              j_Level::unregisterTemporaryPointer(v21, (unsigned int)_R8 + 8);
            *((_DWORD *)_R8 + 6) = 0;
          v22 = j_Mob::getNavigation(*((Mob **)_R8 + 11));
          v23 = *(void (__fastcall **)(Path **, int, _DWORD))(*(_DWORD *)v22 + 16);
          if ( !*((_BYTE *)_R8 + 28) )
            v24 = *((_DWORD *)_R8 + 6);
            if ( v24 )
              v25 = *((_DWORD *)_R8 + 4);
              v26 = *((_DWORD *)_R8 + 5);
              if ( (v25 & v26) != -1 )
                v27 = j_Level::fetchEntity(v24, v25 & v26, v25, v26, 0);
                *((_DWORD *)_R8 + 3) = v27;
                if ( !v27 )
                  *((_DWORD *)_R8 + 3) = j_Level::fetchEntity(
                                           *((_DWORD *)_R8 + 6),
                                           v28,
                                           *((_QWORD *)_R8 + 2),
                                           *((_QWORD *)_R8 + 2) >> 32,
                                           0);
            *v20 = 1;
          v23(&v34, v22, *((_DWORD *)_R8 + 3));
          v29 = v34;
          v34 = 0;
          v30 = (Path *)*((_DWORD *)_R8 + 15);
          *((_DWORD *)_R8 + 15) = v29;
          if ( v30 )
            v31 = j_Path::~Path(v30);
            j_operator delete((void *)v31);
            if ( v34 )
              v32 = j_Path::~Path(v34);
              j_operator delete((void *)v32);
          v5 = (Entity *)(*((_DWORD *)_R8 + 15) != 0);
        else
          v5 = 0;
      }
    }
  }
  else
  return v5;
}


int __fastcall PickupItemsGoal::stop(PickupItemsGoal *this)
{
  PickupItemsGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3

  v1 = this;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 5) = -1;
  *((_BYTE *)this + 28) = 0;
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
    j_Level::unregisterTemporaryPointer(v2, (unsigned int)v1 + 8);
  *((_DWORD *)v1 + 6) = 0;
  v3 = j_Mob::getNavigation(*((Mob **)v1 + 11));
  return (*(int (**)(void))(*(_DWORD *)v3 + 40))();
}


void __fastcall PickupItemsGoal::~PickupItemsGoal(PickupItemsGoal *this)
{
  PickupItemsGoal::~PickupItemsGoal(this);
}


int __fastcall PickupItemsGoal::~PickupItemsGoal(PickupItemsGoal *this)
{
  PickupItemsGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2
  unsigned int v4; // r1@3
  int v5; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_271AA7C;
  v2 = (Path *)*((_DWORD *)this + 15);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 15) = 0;
  *((_DWORD *)v1 + 2) = &off_271A67C;
  v4 = (unsigned int)v1 + 8;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = -1;
  *(_DWORD *)(v4 + 12) = -1;
  *(_BYTE *)(v4 + 20) = 0;
  v5 = *((_DWORD *)v1 + 6);
  if ( v5 )
    j_Level::unregisterTemporaryPointer(v5, v4);
  *((_DWORD *)v1 + 6) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


int __fastcall PickupItemsGoal::PickupItemsGoal(int a1, float a2, int a3, char a4, int a5, int a6)
{
  char v6; // r9@1
  int v7; // r7@1
  float v8; // r5@1
  int v9; // r4@1
  int v14; // r0@1

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  j_Goal::Goal((Goal *)a1);
  __asm
  {
    VLDR            S0, [SP,#0x20+arg_4]
    VMUL.F32        S0, S0, S0
  }
  *(_DWORD *)v9 = &off_271AA7C;
  *(_DWORD *)(v9 + 8) = &off_271A67C;
  *(_DWORD *)(v9 + 12) = 0;
  v14 = v9 + 40;
  *(_DWORD *)(v9 + 20) = -1;
  *(_DWORD *)(v9 + 16) = -1;
  *(_DWORD *)(v9 + 24) = 0;
  *(_BYTE *)(v9 + 28) = 0;
  *(_DWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 36) = 0;
  *(_DWORD *)v14 = 0;
  *(float *)(v14 + 4) = v8;
  *(_DWORD *)(v14 + 8) = a5;
  *(_DWORD *)(v9 + 52) = v7;
  *(_BYTE *)(v9 + 56) = v6;
  *(_DWORD *)(v9 + 60) = 0;
  __asm { VSTR            S0, [R4,#0x44] }
  *(_DWORD *)(v9 + 72) = 0;
  j_Goal::setRequiredControlFlags((Goal *)v9, 3);
  return v9;
}


int __fastcall PickupItemsGoal::tick(PickupItemsGoal *this)
{
  int result; // r0@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  int v8; // r5@7
  LookControl *v9; // r0@9
  int v10; // r3@9
  Entity *v11; // r0@9
  int v12; // r2@9
  Sensing *v18; // r0@10
  int v19; // r0@14
  Level *v20; // r0@14
  char *v21; // r0@14
  unsigned int v22; // r0@14
  unsigned int v23; // r0@14
  int v24; // r0@15
  int v25; // r0@19
  int v26; // r2@19
  int v27; // [sp+4h] [bp-24h]@9
  int v28; // [sp+8h] [bp-20h]@9
  int v29; // [sp+Ch] [bp-1Ch]@9

  _R4 = this;
  result = *((_BYTE *)this + 28);
  if ( !result )
  {
    v3 = *((_DWORD *)_R4 + 6);
    if ( v3 )
    {
      v4 = *((_DWORD *)_R4 + 4);
      v5 = *((_DWORD *)_R4 + 5);
      if ( (v4 & v5) != -1 )
      {
        v6 = j_Level::fetchEntity(v3, v4 & v5, v4, v5, 0);
        *((_DWORD *)_R4 + 3) = v6;
        if ( !v6 )
          *((_DWORD *)_R4 + 3) = j_Level::fetchEntity(
                                   *((_DWORD *)_R4 + 6),
                                   v7,
                                   *((_QWORD *)_R4 + 2),
                                   *((_QWORD *)_R4 + 2) >> 32,
                                   0);
      }
    }
    result = 1;
    *((_BYTE *)_R4 + 28) = 1;
  }
  v8 = *((_DWORD *)_R4 + 3);
  if ( v8 )
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v8 + 316))(*((_DWORD *)_R4 + 3));
    if ( result == 1 )
      v9 = (LookControl *)j_Mob::getLookControl(*((Mob **)_R4 + 11));
      j_LookControl::setLookAt(v9, (Entity *)v8, 30.0, 30.0);
      v10 = *(_DWORD *)(v8 + 268);
      v11 = (Entity *)*((_DWORD *)_R4 + 11);
      v12 = *(_DWORD *)(v8 + 80);
      v27 = *(_DWORD *)(v8 + 72);
      v28 = v10;
      v29 = v12;
      _R0 = j_Entity::distanceToSqr(v11, (const Vec3 *)&v27);
      __asm { VMOV            S16, R0 }
      result = *((_DWORD *)_R4 + 18) - 1;
      *((_DWORD *)_R4 + 18) = result;
      if ( !*((_BYTE *)_R4 + 56) )
        v18 = (Sensing *)j_Mob::getSensing(*((Mob **)_R4 + 11));
        result = j_Sensing::canSee(v18, (const Entity *)v8);
        if ( result != 1 )
          goto LABEL_21;
        result = *((_DWORD *)_R4 + 18);
      if ( result <= 0 )
        result = j_Entity::distanceToSqr((Entity *)v8, (PickupItemsGoal *)((char *)_R4 + 32));
        __asm
        {
          VMOV            S0, R0
          VLDR            S2, [R4,#0x44]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !(_NF ^ _VF) )
          v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 52))(v8);
          *((_DWORD *)_R4 + 8) = *(_DWORD *)v19;
          *((_DWORD *)_R4 + 9) = *(_DWORD *)(v19 + 4);
          *((_DWORD *)_R4 + 10) = *(_DWORD *)(v19 + 8);
          v20 = (Level *)j_Entity::getLevel(*((Entity **)_R4 + 11));
          v21 = j_Level::getRandom(v20);
          v22 = j_Random::_genRandInt32((Random *)v21);
          __asm
          {
            VLDR            S0, =1024.0
            VCMPE.F32       S16, S0
            VMRS            APSR_nzcv, FPSCR
          }
          v23 = v22 % 7;
          *((_DWORD *)_R4 + 18) = v23 + 4;
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VLDR            S0, =256.0
              VCMPE.F32       S16, S0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              goto LABEL_19;
            v24 = v23 + 9;
          else
            v24 = v23 + 14;
          *((_DWORD *)_R4 + 18) = v24;
LABEL_19:
          v25 = j_Mob::getNavigation(*((Mob **)_R4 + 11));
          v26 = *((_DWORD *)_R4 + 13);
          result = (*(int (**)(void))(*(_DWORD *)v25 + 20))();
          if ( !result )
            result = *((_DWORD *)_R4 + 18) + 15;
            *((_DWORD *)_R4 + 18) = result;
LABEL_21:
      __asm
        VLDR            S0, [R4,#0x44]
        VCMPE.F32       S16, S0
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        j_Mob::pickUpItem(*((Mob **)_R4 + 11), (ItemEntity *)v8);
        *((_DWORD *)_R4 + 3) = 0;
        *((_DWORD *)_R4 + 4) = -1;
        *((_DWORD *)_R4 + 5) = -1;
        *((_BYTE *)_R4 + 28) = 0;
        result = *((_DWORD *)_R4 + 6);
        if ( result )
          result = j_Level::unregisterTemporaryPointer(result, (unsigned int)_R4 + 8);
        *((_DWORD *)_R4 + 6) = 0;
      return result;
  return result;
}


signed int __fastcall PickupItemsGoal::start(PickupItemsGoal *this)
{
  PickupItemsGoal *v1; // r4@1
  int v2; // r0@1
  Path *v3; // r2@1
  void (*v4)(void); // r3@1
  int v5; // r2@1
  Path *v6; // r0@2
  signed int result; // r0@3
  Path *v8; // [sp+4h] [bp-Ch]@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 11));
  v3 = (Path *)*((_DWORD *)v1 + 15);
  v4 = *(void (**)(void))(*(_DWORD *)v2 + 24);
  *((_DWORD *)v1 + 15) = 0;
  v8 = v3;
  v5 = *((_DWORD *)v1 + 13);
  v4();
  if ( v8 )
  {
    v6 = j_Path::~Path(v8);
    j_operator delete((void *)v6);
  }
  result = 10;
  *((_DWORD *)v1 + 18) = 10;
  return result;
}


signed int __fastcall PickupItemsGoal::canContinueToUse(PickupItemsGoal *this)
{
  PickupItemsGoal *v1; // r4@1
  int v2; // r0@3
  unsigned int v3; // r2@4
  unsigned int v4; // r3@4
  int v5; // r0@5
  int v6; // r1@5
  int v7; // r5@8
  Entity *v8; // r4@10
  signed int result; // r0@10
  char v10; // [sp+4h] [bp-1Ch]@10

  v1 = this;
  if ( !*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 11) + 48) + 404) )
    goto LABEL_14;
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
  v7 = *((_DWORD *)v1 + 3);
  if ( v7 && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 316))(*((_DWORD *)v1 + 3)) == 1 )
    v8 = (Entity *)*((_DWORD *)v1 + 11);
    j_BlockPos::BlockPos((BlockPos *)&v10, *(float *)(v7 + 72), *(float *)(v7 + 76), *(float *)(v7 + 80));
    result = j_Entity::isWithinRestriction(v8, (const BlockPos *)&v10);
  else
LABEL_14:
    result = 0;
  return result;
}


void __fastcall PickupItemsGoal::~PickupItemsGoal(PickupItemsGoal *this)
{
  PickupItemsGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2
  unsigned int v4; // r1@3
  int v5; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_271AA7C;
  v2 = (Path *)*((_DWORD *)this + 15);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 15) = 0;
  *((_DWORD *)v1 + 2) = &off_271A67C;
  v4 = (unsigned int)v1 + 8;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = -1;
  *(_DWORD *)(v4 + 12) = -1;
  *(_BYTE *)(v4 + 20) = 0;
  v5 = *((_DWORD *)v1 + 6);
  if ( v5 )
    j_Level::unregisterTemporaryPointer(v5, v4);
  *((_DWORD *)v1 + 6) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}
