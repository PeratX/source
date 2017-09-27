

signed int __fastcall FollowMobGoal::tick(FollowMobGoal *this)
{
  signed int result; // r0@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  LookControl *v9; // r6@10
  float v10; // r0@10
  int v11; // r0@10
  int v17; // r0@12
  int v18; // r2@13

  _R4 = this;
  result = *((_BYTE *)this + 36);
  if ( !result )
  {
    v3 = *((_DWORD *)_R4 + 8);
    if ( v3 )
    {
      v4 = *((_DWORD *)_R4 + 6);
      v5 = *((_DWORD *)_R4 + 7);
      if ( (v4 & v5) != -1 )
      {
        v6 = j_Level::fetchEntity(v3, v4 & v5, v4, v5, 0);
        *((_DWORD *)_R4 + 5) = v6;
        if ( !v6 )
          *((_DWORD *)_R4 + 5) = j_Level::fetchEntity(
                                   *((_DWORD *)_R4 + 8),
                                   v7,
                                   *((_QWORD *)_R4 + 3),
                                   *((_QWORD *)_R4 + 3) >> 32,
                                   0);
      }
    }
    result = 1;
    *((_BYTE *)_R4 + 36) = 1;
  }
  _R5 = (Entity *)*((_DWORD *)_R4 + 5);
  if ( _R5 )
    result = j_Entity::isLeashed(*((Entity **)_R4 + 5));
    if ( !result )
      result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 316))(_R5);
      if ( result == 1 )
        v9 = (LookControl *)j_Mob::getLookControl(*((Mob **)_R4 + 2));
        v10 = COERCE_FLOAT((*(int (**)(void))(**((_DWORD **)_R4 + 2) + 940))());
        j_LookControl::setLookAt(v9, _R5, 10.0, v10);
        v11 = *((_DWORD *)_R4 + 11);
        _VF = __OFSUB__(v11, 1);
        result = v11 - 1;
        *((_DWORD *)_R4 + 11) = result;
        if ( (unsigned __int8)((result < 0) ^ _VF) | (result == 0) )
        {
          *((_DWORD *)_R4 + 11) = 10;
          _R0 = (Mob *)*((_DWORD *)_R4 + 2);
          __asm
          {
            VLDR            S0, [R5,#0x48]
            VLDR            S2, [R5,#0x4C]
            VLDR            S6, [R0,#0x48]
            VLDR            S8, [R0,#0x4C]
            VSUB.F32        S0, S6, S0
            VLDR            S4, [R5,#0x50]
            VSUB.F32        S2, S8, S2
            VLDR            S10, [R0,#0x50]
            VSUB.F32        S4, S10, S4
            VMUL.F32        S0, S0, S0
            VMUL.F32        S2, S2, S2
            VMUL.F32        S4, S4, S4
            VADD.F32        S0, S2, S0
            VLDR            S2, [R4,#0x30]
            VMUL.F32        S16, S2, S2
            VADD.F32        S18, S0, S4
          }
          v17 = j_Mob::getNavigation(_R0);
            VCMPE.F32       S18, S16
            VMRS            APSR_nzcv, FPSCR
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            result = (*(int (**)(void))(*(_DWORD *)v17 + 40))();
          else
            v18 = *((_DWORD *)_R4 + 10);
            result = (*(int (**)(void))(*(_DWORD *)v17 + 20))();
        }
  return result;
}


int __fastcall FollowMobGoal::start(int result)
{
  *(_DWORD *)(result + 44) = 0;
  return result;
}


int __fastcall FollowMobGoal::~FollowMobGoal(FollowMobGoal *this)
{
  FollowMobGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2725684;
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


_QWORD *__fastcall FollowMobGoal::FollowMobGoal(Goal *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  _QWORD *result; // r0@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  result = j_Goal::Goal(a1);
  *(_DWORD *)result = &off_2725684;
  *((_DWORD *)result + 2) = v7;
  *((_DWORD *)result + 4) = &off_271A990;
  *((_DWORD *)result + 5) = 0;
  *((_DWORD *)result + 6) = -1;
  *((_DWORD *)result + 7) = -1;
  *((_DWORD *)result + 8) = 0;
  *((_BYTE *)result + 36) = 0;
  *((_DWORD *)result + 10) = v6;
  *((_DWORD *)result + 11) = 0;
  *((_DWORD *)result + 12) = v5;
  *((_DWORD *)result + 13) = a5;
  return result;
}


signed int __fastcall FollowMobGoal::canContinueToUse(FollowMobGoal *this)
{
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  const Entity *v7; // r5@7
  int v8; // r0@9
  signed int v9; // r6@9

  _R4 = this;
  if ( !*((_BYTE *)this + 36) )
  {
    v2 = *((_DWORD *)this + 8);
    if ( v2 )
    {
      v3 = *((_DWORD *)_R4 + 6);
      v4 = *((_DWORD *)_R4 + 7);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)_R4 + 5) = v5;
        if ( !v5 )
          *((_DWORD *)_R4 + 5) = j_Level::fetchEntity(
                                   *((_DWORD *)_R4 + 8),
                                   v6,
                                   *((_QWORD *)_R4 + 3),
                                   *((_QWORD *)_R4 + 3) >> 32,
                                   0);
      }
    }
    *((_BYTE *)_R4 + 36) = 1;
  }
  v7 = (const Entity *)*((_DWORD *)_R4 + 5);
  if ( v7 )
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 316))(*((_DWORD *)_R4 + 5)) == 1 )
      v8 = j_Mob::getNavigation(*((Mob **)_R4 + 2));
      v9 = 0;
      if ( !(*(int (**)(void))(*(_DWORD *)v8 + 36))() )
        _R0 = j_Entity::distanceToSqr(*((Entity **)_R4 + 2), v7);
        __asm
        {
          VLDR            S0, [R4,#0x30]
          VMOV            S2, R0
          VMUL.F32        S0, S0, S0
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v9 = 1;
    else
  else
    v9 = 0;
  return v9;
}


void __fastcall FollowMobGoal::~FollowMobGoal(FollowMobGoal *this)
{
  FollowMobGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2725684;
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


int __fastcall FollowMobGoal::stop(FollowMobGoal *this)
{
  FollowMobGoal *v1; // r4@1
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


signed int __fastcall FollowMobGoal::canUse(FollowMobGoal *this)
{
  int v2; // r0@2
  int v7; // r5@2
  int v8; // r6@2
  _DWORD *v9; // r4@2
  int v10; // r5@3
  int v11; // r7@3
  signed int result; // r0@8
  int v13; // r0@11
  int v14; // r0@12
  float v15; // [sp+4h] [bp-44h]@2
  char v16; // [sp+10h] [bp-38h]@2

  _R8 = this;
  if ( !j_Mob::getNavigation(*((Mob **)this + 2)) )
    goto LABEL_8;
  v2 = j_Entity::getRegion(*((Entity **)_R8 + 2));
  __asm { VLDR            S0, [R8,#0x34] }
  v7 = v2;
  __asm
  {
    VCVT.F32.S32    S0, S0
    VSTR            S0, [SP,#0x48+var_44]
    VSTR            S0, [SP,#0x48+var_40]
    VSTR            S0, [SP,#0x48+var_3C]
  }
  j_AABB::grow((AABB *)&v16, (const Vec3 *)(*((_DWORD *)_R8 + 2) + 264), (int)&v15);
  v8 = j_BlockSource::fetchEntities(v7, 256, (int)&v16, *((_DWORD *)_R8 + 2));
  v9 = (_DWORD *)*(_QWORD *)v8;
  if ( v9 != (_DWORD *)(*(_QWORD *)v8 >> 32) )
    while ( 1 )
    {
      v10 = *v9;
      v11 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v9 + 488))(*v9);
      if ( v11 != (*(int (**)(void))(**((_DWORD **)_R8 + 2) + 488))()
        && (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 488))(v10) != 319
        && (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 316))(v10) == 1
        && !j_Entity::isRemoved((Entity *)v10) )
      {
        break;
      }
      ++v9;
      if ( v9 == *(_DWORD **)(v8 + 4) )
        goto LABEL_8;
    }
    if ( *((_DWORD *)_R8 + 5) != v10 )
      if ( *(_DWORD *)(v10 + 3092) )
        *((_QWORD *)_R8 + 3) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v10);
        v13 = *(_DWORD *)(v10 + 3092);
        *((_DWORD *)_R8 + 8) = v13;
        j_Level::registerTemporaryPointer(v13, (unsigned int)_R8 + 16);
        *((_BYTE *)_R8 + 36) = 0;
      else
        *((_DWORD *)_R8 + 5) = 0;
        *((_DWORD *)_R8 + 6) = -1;
        *((_DWORD *)_R8 + 7) = -1;
        v14 = *((_DWORD *)_R8 + 8);
        if ( v14 )
          j_Level::unregisterTemporaryPointer(v14, (unsigned int)_R8 + 16);
        *((_DWORD *)_R8 + 8) = 0;
    result = 1;
  else
LABEL_8:
    result = 0;
  return result;
}


void __fastcall FollowMobGoal::~FollowMobGoal(FollowMobGoal *this)
{
  FollowMobGoal::~FollowMobGoal(this);
}
