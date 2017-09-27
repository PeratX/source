

int __fastcall FindMountGoal::stop(FindMountGoal *this)
{
  FindMountGoal *v1; // r4@1
  int v2; // r0@1
  int result; // r0@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 14));
  (*(void (**)(void))(*(_DWORD *)v2 + 40))();
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = -1;
  *((_DWORD *)v1 + 5) = -1;
  *((_BYTE *)v1 + 28) = 0;
  result = *((_DWORD *)v1 + 6);
  if ( result )
    result = j_Level::unregisterTemporaryPointer(result, (unsigned int)v1 + 8);
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 10) = 0;
  return result;
}


void __fastcall FindMountGoal::~FindMountGoal(FindMountGoal *this)
{
  FindMountGoal::~FindMountGoal(this);
}


signed int __fastcall FindMountGoal::canContinueToUse(FindMountGoal *this)
{
  FindMountGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  int v7; // r5@7
  signed int v8; // r4@11
  int v9; // r0@12

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
  v7 = *((_DWORD *)v1 + 3);
  if ( v7
    && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 316))(*((_DWORD *)v1 + 3)) == 1
    && !j_Entity::isRiding(*((Entity **)v1 + 14))
    && (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v7 + 564))(v7, *((_DWORD *)v1 + 14)) )
    v8 = 1;
  else
    v9 = *((_DWORD *)v1 + 14);
    v8 = 0;
    (*(void (**)(void))(*(_DWORD *)v9 + 340))();
  return v8;
}


void __fastcall FindMountGoal::~FindMountGoal(FindMountGoal *this)
{
  FindMountGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2725580;
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


int __fastcall FindMountGoal::tick(FindMountGoal *this)
{
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  Entity *v7; // r5@7
  LookControl *v8; // r0@7
  int v14; // r0@10
  unsigned int v15; // r2@11
  unsigned int v16; // r3@11
  int v17; // r0@12
  int v18; // r1@12
  Entity *v20; // r0@17
  int result; // r0@22
  int v23; // r0@23
  Level *v24; // r0@25
  char *v25; // r0@25
  int v26; // r0@25
  int v27; // [sp+4h] [bp-2Ch]@16
  int v28; // [sp+8h] [bp-28h]@16
  int v29; // [sp+Ch] [bp-24h]@16

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
  v8 = (LookControl *)j_Mob::getLookControl(*((Mob **)_R4 + 14));
  j_LookControl::setLookAt(v8, v7, 30.0, 30.0);
  __asm
    VLDR            S16, [R4,#0x34]
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    _R0 = *((_DWORD *)_R4 + 14);
    __asm
      VLDR            S0, [R0,#0x130]
      VADD.F32        S16, S0, S0
    if ( !*((_BYTE *)_R4 + 28) )
      v14 = *((_DWORD *)_R4 + 6);
      if ( v14 )
        v15 = *((_DWORD *)_R4 + 4);
        v16 = *((_DWORD *)_R4 + 5);
        if ( (v15 & v16) != -1 )
        {
          v17 = j_Level::fetchEntity(v14, v15 & v16, v15, v16, 0);
          *((_DWORD *)_R4 + 3) = v17;
          if ( !v17 )
            *((_DWORD *)_R4 + 3) = j_Level::fetchEntity(
                                     *((_DWORD *)_R4 + 6),
                                     v18,
                                     *((_QWORD *)_R4 + 2),
                                     *((_QWORD *)_R4 + 2) >> 32,
                                     0);
        }
      *((_BYTE *)_R4 + 28) = 1;
    __asm { VMOV.F32        S0, #2.0 }
    _R0 = *((_DWORD *)_R4 + 3);
      VLDR            S2, [R0,#0x130]
      VADD.F32        S0, S16, S0
      VADD.F32        S0, S0, S2
      VMUL.F32        S16, S0, S0
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( !j_Entity::getFirstAvailableSeatPos(v7, *((Entity **)_R4 + 14), (Vec3 *)&v27) )
    return (*(int (__fastcall **)(FindMountGoal *))(*(_DWORD *)_R4 + 24))(_R4);
  v20 = (Entity *)*((_DWORD *)_R4 + 14);
  if ( v20 != v7 )
    _R0 = j_Entity::distanceToSqr(v20, (const Vec3 *)&v27);
      VMOV            S0, R0
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v7 + 316))(v7) == 1 )
        (*(void (**)(void))(**((_DWORD **)_R4 + 14) + 144))();
        return (*(int (__fastcall **)(FindMountGoal *))(*(_DWORD *)_R4 + 24))(_R4);
  v23 = *((_DWORD *)_R4 + 9);
  _VF = __OFSUB__(v23, 1);
  result = v23 - 1;
  *((_DWORD *)_R4 + 9) = result;
  if ( (unsigned __int8)((result < 0) ^ _VF) | (result == 0) )
    v24 = (Level *)j_Entity::getLevel(*((Entity **)_R4 + 14));
    v25 = j_Level::getRandom(v24);
    *((_DWORD *)_R4 + 9) = j_Random::_genRandInt32((Random *)v25) % 7 + 4;
    v26 = j_Mob::getNavigation(*((Mob **)_R4 + 14));
    result = (*(int (**)(void))(*(_DWORD *)v26 + 20))();
  return result;
}


int __fastcall FindMountGoal::FindMountGoal(int a1, int a2, float a3, int a4, char a5, char a6, int a7)
{
  int v7; // r9@1
  float v8; // r11@1
  int v9; // r8@1
  int v10; // r4@1

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  j_Goal::Goal((Goal *)a1);
  *(_DWORD *)v10 = &off_2725580;
  *(_DWORD *)(v10 + 8) = &off_271A67C;
  *(_DWORD *)(v10 + 12) = 0;
  *(_DWORD *)(v10 + 20) = -1;
  *(_DWORD *)(v10 + 16) = -1;
  __asm { VLDR            S0, [SP,#0x28+arg_8] }
  *(_DWORD *)(v10 + 24) = 0;
  *(_BYTE *)(v10 + 28) = 0;
  *(float *)(v10 + 32) = v8;
  *(_DWORD *)(v10 + 40) = 0;
  *(_DWORD *)(v10 + 44) = v7;
  *(_BYTE *)(v10 + 48) = a5;
  *(_BYTE *)(v10 + 49) = a6;
  __asm { VSTR            S0, [R4,#0x34] }
  *(_DWORD *)(v10 + 56) = v9;
  j_Goal::setRequiredControlFlags((Goal *)v10, 3);
  return v10;
}


int __fastcall FindMountGoal::~FindMountGoal(FindMountGoal *this)
{
  FindMountGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2725580;
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


int __fastcall FindMountGoal::getAttackReachSqr(FindMountGoal *this)
{
  FindMountGoal *v1; // r4@1
  int v7; // r0@2
  unsigned int v8; // r2@3
  unsigned int v9; // r3@3
  int v10; // r0@4
  int v11; // r1@4
  int result; // r0@7

  v1 = this;
  _R0 = *((_DWORD *)this + 14);
  __asm
  {
    VLDR            S0, [R0,#0x130]
    VADD.F32        S16, S0, S0
  }
  if ( !*((_BYTE *)v1 + 28) )
    v7 = *((_DWORD *)v1 + 6);
    if ( v7 )
    {
      v8 = *((_DWORD *)v1 + 4);
      v9 = *((_DWORD *)v1 + 5);
      if ( (v8 & v9) != -1 )
      {
        v10 = j_Level::fetchEntity(v7, v8 & v9, v8, v9, 0);
        *((_DWORD *)v1 + 3) = v10;
        if ( !v10 )
          *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 6),
                                  v11,
                                  *((_QWORD *)v1 + 2),
                                  *((_QWORD *)v1 + 2) >> 32,
                                  0);
      }
    }
    *((_BYTE *)v1 + 28) = 1;
  __asm { VMOV.F32        S0, #2.0 }
  _R0 = *((_DWORD *)v1 + 3);
    VLDR            S2, [R0,#0x130]
    VADD.F32        S0, S16, S0
    VADD.F32        S0, S0, S2
    VMUL.F32        S0, S0, S0
    VMOV            R0, S0
  return result;
}


int __fastcall FindMountGoal::canUse(FindMountGoal *this)
{
  FindMountGoal *v1; // r4@1
  int result; // r0@3
  int v3; // r0@5
  __int64 v4; // r0@9
  int v5; // r5@11
  const Vec3 *v6; // r1@11
  __int64 *v7; // r0@11
  __int64 *v8; // r5@11
  __int64 v9; // r0@11
  FindMountGoal *v14; // r10@12
  unsigned int v15; // r11@12
  int v16; // r7@13
  char *v17; // r6@14
  int v19; // r0@24
  int v20; // r0@25
  int v21; // r0@31
  unsigned int v22; // r2@32
  unsigned int v23; // r3@32
  int v24; // r0@33
  int v25; // r1@33
  Level *v26; // r0@37
  char *v27; // r0@37
  int v28; // r5@37
  int (__fastcall *v29)(int, _DWORD, signed int); // r6@37
  int v30; // r0@38
  unsigned int v31; // r2@39
  unsigned int v32; // r3@39
  int v33; // r0@40
  int v34; // r1@40
  int v35; // [sp+8h] [bp-60h]@11
  int v36; // [sp+Ch] [bp-5Ch]@11
  int v37; // [sp+10h] [bp-58h]@11
  char v38; // [sp+14h] [bp-54h]@11

  v1 = this;
  if ( !j_Mob::getNavigation(*((Mob **)this + 14)) )
    return 0;
  if ( j_Entity::isRiding(*((Entity **)v1 + 14)) )
  v3 = j_Entity::getTarget(*((Entity **)v1 + 14));
  if ( *((_BYTE *)v1 + 49) )
  {
    if ( !v3 )
      return 0;
    if ( j_Entity::isRiding(*((Entity **)v1 + 14)) )
  }
  v4 = *((_QWORD *)v1 + 5);
  if ( (signed int)v4 >= SHIDWORD(v4) )
    v5 = j_Entity::getRegion(*((Entity **)v1 + 14));
    v6 = (const Vec3 *)(*((_DWORD *)v1 + 14) + 264);
    v35 = *((_DWORD *)v1 + 8);
    v36 = v35;
    v37 = v35;
    j_AABB::grow((AABB *)&v38, v6, (int)&v35);
    v7 = (__int64 *)j_BlockSource::fetchEntities2(v5, 256, (const AABB *)&v38, 0);
    v8 = v7;
    v9 = *v7;
    if ( HIDWORD(v9) != (_DWORD)v9 )
    {
      __asm { VMOV.F32        S16, #-1.0 }
      v14 = (FindMountGoal *)((char *)v1 + 16);
      v15 = 0;
      do
      {
        v16 = *(_DWORD *)(v9 + 4 * v15);
        if ( j_Entity::hasCategory(*(_DWORD *)(v9 + 4 * v15), 2) == 1 )
        {
          v17 = j_Entity::getUniqueID(*((Entity **)v1 + 14));
          if ( *(_QWORD *)v17 != *(_QWORD *)j_Entity::getUniqueID((Entity *)v16)
            && (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 316))(v16) == 1
            && (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v16 + 564))(v16, *((_DWORD *)v1 + 14)) == 1
            && !(*(int (__fastcall **)(int))(*(_DWORD *)v16 + 784))(v16)
            && (!*((_BYTE *)v1 + 48) || !(*(int (__fastcall **)(int))(*(_DWORD *)v16 + 208))(v16)) )
          {
            _R0 = j_Entity::distanceToSqr((Entity *)v16, *((const Entity **)v1 + 14));
            __asm
            {
              VCMPE.F32       S16, #0.0
              VMRS            APSR_nzcv, FPSCR
              VMOV            S18, R0
            }
            if ( _NF ^ _VF )
              if ( *((_DWORD *)v1 + 3) != v16 )
              {
                if ( *(_DWORD *)(v16 + 3092) )
                {
                  *(_QWORD *)v14 = *(_QWORD *)j_Entity::getUniqueID((Entity *)v16);
                  v19 = *(_DWORD *)(v16 + 3092);
                  *((_DWORD *)v1 + 6) = v19;
                  j_Level::registerTemporaryPointer(v19, (unsigned int)v1 + 8);
                  *((_BYTE *)v1 + 28) = 0;
                }
                else
                  *((_DWORD *)v1 + 3) = 0;
                  *(_DWORD *)v14 = -1;
                  *((_DWORD *)v1 + 5) = -1;
                  v20 = *((_DWORD *)v1 + 6);
                  if ( v20 )
                    j_Level::unregisterTemporaryPointer(v20, (unsigned int)v1 + 8);
                  *((_DWORD *)v1 + 6) = 0;
              }
              __asm { VMOV.F32        S16, S18 }
            else
              __asm
                VCMPEGE.F32     S18, S16
                VMRSGE          APSR_nzcv, FPSCR
          }
        }
        v9 = *v8;
        ++v15;
      }
      while ( v15 < (HIDWORD(v9) - (signed int)v9) >> 2 );
    }
    if ( !*((_BYTE *)v1 + 28) )
      v21 = *((_DWORD *)v1 + 6);
      if ( v21 )
        v22 = *((_DWORD *)v1 + 4);
        v23 = *((_DWORD *)v1 + 5);
        if ( (v22 & v23) != -1 )
          v24 = j_Level::fetchEntity(v21, v22 & v23, v22, v23, 0);
          *((_DWORD *)v1 + 3) = v24;
          if ( !v24 )
            *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                    *((_DWORD *)v1 + 6),
                                    v25,
                                    *((_QWORD *)v1 + 2),
                                    *((_QWORD *)v1 + 2) >> 32,
                                    0);
      *((_BYTE *)v1 + 28) = 1;
    if ( *((_DWORD *)v1 + 3) )
      v26 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 14));
      v27 = j_Level::getRandom(v26);
      *((_DWORD *)v1 + 9) = j_Random::_genRandInt32((Random *)v27) % 7 + 4;
      v28 = j_Mob::getNavigation(*((Mob **)v1 + 14));
      v29 = *(int (__fastcall **)(int, _DWORD, signed int))(*(_DWORD *)v28 + 20);
      if ( !*((_BYTE *)v1 + 28) )
        v30 = *((_DWORD *)v1 + 6);
        if ( v30 )
          v31 = *((_DWORD *)v1 + 4);
          v32 = *((_DWORD *)v1 + 5);
          if ( (v31 & v32) != -1 )
            v33 = j_Level::fetchEntity(v30, v31 & v32, v31, v32, 0);
            *((_DWORD *)v1 + 3) = v33;
            if ( !v33 )
              *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                      *((_DWORD *)v1 + 6),
                                      v34,
                                      *((_QWORD *)v1 + 2),
                                      *((_QWORD *)v1 + 2) >> 32,
                                      0);
        *((_BYTE *)v1 + 28) = 1;
      result = v29(v28, *((_DWORD *)v1 + 3), 1065353216);
    else
      result = 0;
  else
    *((_DWORD *)v1 + 10) = v4 + 1;
    result = 0;
  return result;
}
