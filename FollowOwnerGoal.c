

int __fastcall FollowOwnerGoal::stop(FollowOwnerGoal *this)
{
  FollowOwnerGoal *v1; // r4@1
  PathNavigation *v2; // r5@1
  int v3; // r0@1

  v1 = this;
  v2 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)this + 2));
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = -1;
  *((_DWORD *)v1 + 7) = -1;
  *((_BYTE *)v1 + 36) = 0;
  v3 = *((_DWORD *)v1 + 8);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, (unsigned int)v1 + 16);
  *((_DWORD *)v1 + 8) = 0;
  (*(void (__fastcall **)(PathNavigation *))(*(_DWORD *)v2 + 40))(v2);
  j_PathNavigation::setAvoidWater(v2, *((_BYTE *)v1 + 56));
  return j_j_j__ZN14PathNavigation15setAvoidPortalsEb(v2, *((_BYTE *)v1 + 57));
}


void __fastcall FollowOwnerGoal::~FollowOwnerGoal(FollowOwnerGoal *this)
{
  FollowOwnerGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27256B8;
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


int __fastcall FollowOwnerGoal::tick(FollowOwnerGoal *this)
{
  FollowOwnerGoal *v1; // r4@1
  int result; // r0@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  int v8; // r5@7
  LookControl *v9; // r6@8
  float v10; // r0@8
  int v11; // r0@10
  int v13; // r0@12
  int v14; // r2@12
  BlockSource *v18; // r6@15
  float v19; // r1@15
  int v20; // r7@15
  float v21; // r1@15
  int v22; // r10@15
  int v23; // r0@15
  int v24; // r9@15
  int v25; // r1@15
  int v26; // r11@16
  Material *v28; // r0@18
  Material *v29; // r0@19
  Material *v30; // r0@20
  Material *v31; // r0@21
  Material *v32; // r0@22
  Material *v33; // r0@25
  Material *v34; // r0@26
  Material *v35; // r0@27
  Material *v36; // r0@28
  Material *v37; // r0@29
  int v40; // [sp+8h] [bp-48h]@15
  int v41; // [sp+Ch] [bp-44h]@12
  int v42; // [sp+10h] [bp-40h]@15
  int v43; // [sp+14h] [bp-3Ch]@16
  int v44; // [sp+18h] [bp-38h]@15
  int v45; // [sp+1Ch] [bp-34h]@15
  float v46; // [sp+20h] [bp-30h]@33

  v1 = this;
  result = *((_BYTE *)this + 36);
  if ( !result )
  {
    v3 = *((_DWORD *)v1 + 8);
    if ( v3 )
    {
      v4 = *((_DWORD *)v1 + 6);
      v5 = *((_DWORD *)v1 + 7);
      if ( (v4 & v5) != -1 )
      {
        v6 = j_Level::fetchEntity(v3, v4 & v5, v4, v5, 0);
        *((_DWORD *)v1 + 5) = v6;
        if ( !v6 )
          *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 8),
                                  v7,
                                  *((_QWORD *)v1 + 3),
                                  *((_QWORD *)v1 + 3) >> 32,
                                  0);
      }
    }
    result = 1;
    *((_BYTE *)v1 + 36) = 1;
  }
  v8 = *((_DWORD *)v1 + 5);
  if ( v8 )
    v9 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 2));
    v10 = COERCE_FLOAT((*(int (**)(void))(**((_DWORD **)v1 + 2) + 940))());
    j_LookControl::setLookAt(v9, (Entity *)v8, 10.0, v10);
    result = j_Entity::isSitting(*((Entity **)v1 + 2));
    if ( !result )
      result = j_Entity::isRiding(*((Entity **)v1 + 2));
      if ( !result )
        v11 = *((_DWORD *)v1 + 11);
        _VF = __OFSUB__(v11, 1);
        result = v11 - 1;
        *((_DWORD *)v1 + 11) = result;
        if ( (unsigned __int8)((result < 0) ^ _VF) | (result == 0) )
        {
          *((_DWORD *)v1 + 11) = 10;
          v13 = j_Mob::getNavigation(*((Mob **)v1 + 2));
          v14 = *((_DWORD *)v1 + 10);
          v41 = v13;
          result = (*(int (**)(void))(*(_DWORD *)v13 + 20))();
          if ( !result )
          {
            result = j_Entity::isLeashed(*((Entity **)v1 + 2));
            if ( !result )
            {
              result = j_Entity::distanceToSqr(*((Entity **)v1 + 2), (const Entity *)v8);
              __asm
              {
                VLDR            S0, =144.0
                VMOV            S2, R0
                VCMPE.F32       S2, S0
                VMRS            APSR_nzcv, FPSCR
              }
              if ( !(_NF ^ _VF) )
                v18 = (BlockSource *)j_Entity::getRegion((Entity *)v8);
                v20 = j_mce::Math::floor(*(mce::Math **)(v8 + 72), v19);
                v40 = j_mce::Math::floor(*(mce::Math **)(v8 + 80), v21);
                v42 = v20 - 2;
                v22 = v40 - 2;
                v23 = j_mce::Math::floor(*(mce::Math **)(v8 + 268), *(float *)&v40);
                v24 = v23 - 1;
                v44 = v23 + 1;
                v25 = 0;
                v45 = v23;
LABEL_16:
                v26 = 0;
                v43 = v25;
                _R7 = v42 + v25;
                if ( (unsigned int)(v25 - 1) > 2 )
                {
                  while ( 1 )
                  {
                    v33 = (Material *)j_BlockSource::getMaterial(v18, _R7, v24, v22 + v26);
                    result = j_Material::isSolid(v33);
                    if ( result == 1 )
                    {
                      v34 = (Material *)j_BlockSource::getMaterial(v18, _R7, v45, v22 + v26);
                      result = j_Material::isSolid(v34);
                      if ( !result )
                      {
                        v35 = (Material *)j_BlockSource::getMaterial(v18, _R7, v45, v22 + v26);
                        result = j_Material::isLiquid(v35);
                        if ( !result )
                        {
                          v36 = (Material *)j_BlockSource::getMaterial(v18, _R7, v44, v22 + v26);
                          result = j_Material::isSolid(v36);
                          if ( !result )
                          {
                            v37 = (Material *)j_BlockSource::getMaterial(v18, _R7, v44, v22 + v26);
                            result = j_Material::isLiquid(v37);
                            if ( result != 1 )
                              break;
                          }
                        }
                      }
                    }
                    if ( ++v26 >= 5 )
LABEL_31:
                      v25 = v43 + 1;
                      if ( v43 + 1 < 5 )
                        goto LABEL_16;
                      return result;
                  }
                }
                else
                    result = v26 - 1;
                    if ( (unsigned int)(v26 - 1) >= 3 )
                      v28 = (Material *)j_BlockSource::getMaterial(v18, _R7, v24, v22 + v26);
                      result = j_Material::isSolid(v28);
                      if ( result == 1 )
                        v29 = (Material *)j_BlockSource::getMaterial(v18, _R7, v45, v22 + v26);
                        result = j_Material::isSolid(v29);
                          v30 = (Material *)j_BlockSource::getMaterial(v18, _R7, v45, v22 + v26);
                          result = j_Material::isLiquid(v30);
                            v31 = (Material *)j_BlockSource::getMaterial(v18, _R7, v44, v22 + v26);
                            result = j_Material::isSolid(v31);
                            if ( !result )
                            {
                              v32 = (Material *)j_BlockSource::getMaterial(v18, _R7, v44, v22 + v26);
                              result = j_Material::isLiquid(v32);
                              if ( result != 1 )
                                break;
                            }
                      goto LABEL_31;
                __asm
                  VMOV            S2, R7
                  VMOV.F32        S0, #0.5
                  VCVT.F32.S32    S2, S2
                _R0 = v40 + v26 - 2;
                  VMOV            S4, R0
                  VCVT.F32.S32    S4, S4
                _R0 = v45;
                  VADD.F32        S2, S2, S0
                  VMOV            S6, R0
                  VCVT.F32.S32    S6, S6
                  VADD.F32        S0, S4, S0
                  VSTR            S2, [SP,#0x50+var_30]
                  VSTR            S6, [SP,#0x50+var_2C]
                  VSTR            S0, [SP,#0x50+var_28]
                j_Entity::moveTo(*((_DWORD *)v1 + 2), (int)&v46);
                result = (*(int (**)(void))(*(_DWORD *)v41 + 40))();
            }
          }
        }
  return result;
}


signed int __fastcall FollowOwnerGoal::canContinueToUse(FollowOwnerGoal *this)
{
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  const Entity *v7; // r5@7
  signed int v8; // r6@9
  int v9; // r0@11

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
    if ( j_Entity::isSitting(*((Entity **)_R4 + 2)) )
      v8 = 0;
    else
      v9 = j_Mob::getNavigation(*((Mob **)_R4 + 2));
      if ( !(*(int (**)(void))(*(_DWORD *)v9 + 36))() )
        _R0 = j_Entity::distanceToSqr(*((Entity **)_R4 + 2), v7);
        __asm
        {
          VLDR            S0, [R4,#0x34]
          VMOV            S2, R0
          VMUL.F32        S0, S0, S0
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v8 = 1;
  else
    v8 = 0;
  return v8;
}


int __fastcall FollowOwnerGoal::~FollowOwnerGoal(FollowOwnerGoal *this)
{
  FollowOwnerGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27256B8;
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


signed int __fastcall FollowOwnerGoal::canUse(FollowOwnerGoal *this)
{
  signed int v2; // r5@3
  int v9; // r0@10
  int v10; // r0@11

  _R4 = this;
  if ( !j_Mob::getNavigation(*((Mob **)this + 2)) )
    return 0;
  if ( j_Entity::isTame(*((Entity **)_R4 + 2)) != 1 )
  v2 = j_Entity::getPlayerOwner(*((Entity **)_R4 + 2));
  if ( !v2 )
  if ( j_Entity::isSitting(*((Entity **)_R4 + 2)) )
  _R0 = j_Entity::distanceToSqr(*((Entity **)_R4 + 2), (const Entity *)v2);
  __asm
  {
    VLDR            S0, [R4,#0x30]
    VMOV            S2, R0
    VMUL.F32        S0, S0, S0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
  if ( *((_DWORD *)_R4 + 5) != v2 )
    if ( *(_DWORD *)(v2 + 3092) )
    {
      *((_QWORD *)_R4 + 3) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v2);
      v9 = *(_DWORD *)(v2 + 3092);
      *((_DWORD *)_R4 + 8) = v9;
      j_Level::registerTemporaryPointer(v9, (unsigned int)_R4 + 16);
      *((_BYTE *)_R4 + 36) = 0;
      return 1;
    }
    *((_DWORD *)_R4 + 5) = 0;
    *((_DWORD *)_R4 + 6) = -1;
    *((_DWORD *)_R4 + 7) = -1;
    *((_BYTE *)_R4 + 36) = 0;
    v10 = *((_DWORD *)_R4 + 8);
    if ( v10 )
      j_Level::unregisterTemporaryPointer(v10, (unsigned int)_R4 + 16);
    *((_DWORD *)_R4 + 8) = 0;
  return 1;
}


Entity *__fastcall FollowOwnerGoal::onPlayerDimensionChanged(int a1, Entity *a2)
{
  int v2; // r5@1
  Entity *v3; // r6@1
  Entity *result; // r0@1
  char *v5; // r0@4
  int v6; // [sp+0h] [bp-18h]@4
  int v7; // [sp+4h] [bp-14h]@4

  v2 = a1;
  v3 = a2;
  result = (Entity *)j_Entity::getPlayerOwner(*(Entity **)(a1 + 8));
  if ( result == v3 )
  {
    result = (Entity *)j_Entity::isSitting(*(Entity **)(v2 + 8));
    if ( !result )
    {
      if ( j_Entity::isLeashed(*(Entity **)(v2 + 8)) != 1
        || (j_Entity::getLeashHolder((Entity *)&v6, *(_DWORD *)(v2 + 8)),
            v5 = j_Entity::getUniqueID(v3),
            (result = (Entity *)(*(_QWORD *)v5 ^ v6 | (*(_QWORD *)v5 >> 32) ^ v7)) == 0) )
      {
        *(_DWORD *)(*(_DWORD *)(v2 + 8) + 452) = (*(int (**)(void))(**(_DWORD **)(v2 + 8) + 516))();
        result = (Entity *)(*(int (**)(void))(**(_DWORD **)(v2 + 8) + 532))();
      }
    }
  }
  return result;
}


void __fastcall FollowOwnerGoal::~FollowOwnerGoal(FollowOwnerGoal *this)
{
  FollowOwnerGoal::~FollowOwnerGoal(this);
}


int __fastcall FollowOwnerGoal::start(FollowOwnerGoal *this)
{
  FollowOwnerGoal *v1; // r4@1
  PathNavigation *v2; // r5@1

  v1 = this;
  v2 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)this + 2));
  *((_DWORD *)v1 + 11) = 0;
  *((_BYTE *)v1 + 56) = j_PathNavigation::getAvoidWater(v2);
  *((_BYTE *)v1 + 57) = j_PathNavigation::getAvoidPortals(v2);
  j_PathNavigation::setAvoidWater(v2, 0);
  return j_j_j__ZN14PathNavigation15setAvoidPortalsEb(v2, 1);
}


_QWORD *__fastcall FollowOwnerGoal::FollowOwnerGoal(float a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  _QWORD *result; // r0@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  result = j_Goal::Goal((Goal *)LODWORD(a1));
  __asm { VLDR            S0, [SP,#0x10+arg_0] }
  *(_DWORD *)result = &off_27256B8;
  *((_DWORD *)result + 2) = v7;
  *((_DWORD *)result + 4) = &off_271A990;
  *((_DWORD *)result + 5) = 0;
  *((_DWORD *)result + 6) = -1;
  *((_DWORD *)result + 7) = -1;
  *((_DWORD *)result + 8) = 0;
  *((_BYTE *)result + 36) = 0;
  __asm { VSTR            S0, [R0,#0x34] }
  *((_DWORD *)result + 10) = v6;
  *((_DWORD *)result + 11) = 0;
  *((_DWORD *)result + 12) = v5;
  *((_WORD *)result + 28) = 0;
  return result;
}
