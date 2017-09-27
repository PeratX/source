

void __fastcall MountPathingGoal::~MountPathingGoal(MountPathingGoal *this)
{
  MountPathingGoal::~MountPathingGoal(this);
}


int __fastcall MountPathingGoal::canContinueToUse(MountPathingGoal *this)
{
  MountPathingGoal *v1; // r4@1
  __int64 v2; // r0@1
  Entity *v3; // r5@2
  int v4; // r0@5
  unsigned int v5; // r2@6
  unsigned int v6; // r3@6
  int v7; // r0@7
  int v8; // r1@7
  int v9; // r0@10
  int result; // r0@13
  int v11; // r0@14

  v1 = this;
  v2 = *(_QWORD *)(*((_DWORD *)this + 12) + 476);
  if ( HIDWORD(v2) == (_DWORD)v2 )
    goto LABEL_18;
  v3 = *(Entity **)v2;
  if ( j_Entity::hasCategory(*(_DWORD *)v2, 2) != 1 || !j_Entity::getTarget(v3) )
  if ( !*((_BYTE *)v1 + 28) )
  {
    v4 = *((_DWORD *)v1 + 6);
    if ( v4 )
    {
      v5 = *((_DWORD *)v1 + 4);
      v6 = *((_DWORD *)v1 + 5);
      if ( (v5 & v6) != -1 )
      {
        v7 = j_Level::fetchEntity(v4, v5 & v6, v5, v6, 0);
        *((_DWORD *)v1 + 3) = v7;
        if ( !v7 )
          *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 6),
                                  v8,
                                  *((_QWORD *)v1 + 2),
                                  *((_QWORD *)v1 + 2) >> 32,
                                  0);
      }
    }
    *((_BYTE *)v1 + 28) = 1;
  }
  v9 = *((_DWORD *)v1 + 3);
  if ( v9 && (*(int (**)(void))(*(_DWORD *)v9 + 316))() == 1 )
    if ( *((_BYTE *)v1 + 40) )
      result = 1;
    else
      v11 = j_Mob::getNavigation(*((Mob **)v1 + 12));
      result = (*(int (**)(void))(*(_DWORD *)v11 + 36))() ^ 1;
  else
LABEL_18:
    result = 0;
  return result;
}


Goal *__fastcall MountPathingGoal::MountPathingGoal(Goal *a1, int a2, int a3, int a4, char a5)
{
  int v6; // r10@1
  int v7; // r7@1
  Goal *v8; // r4@1
  Goal *result; // r0@1

  _R5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  j_Goal::Goal(a1);
  __asm
  {
    VMOV            S0, R5
    VMUL.F32        S0, S0, S0
  }
  *(_DWORD *)v8 = &off_271A798;
  *((_DWORD *)v8 + 2) = &off_271A67C;
  *((_DWORD *)v8 + 3) = 0;
  *((_DWORD *)v8 + 5) = -1;
  *((_DWORD *)v8 + 4) = -1;
  *((_DWORD *)v8 + 6) = 0;
  *((_BYTE *)v8 + 28) = 0;
  *((_DWORD *)v8 + 12) = v7;
  *((_DWORD *)v8 + 8) = v6;
  __asm { VSTR            S0, [R4,#0x24] }
  *((_BYTE *)v8 + 40) = a5;
  j_Goal::setRequiredControlFlags(v8, 3);
  result = v8;
  *((_DWORD *)v8 + 11) = 0;
  return result;
}


int __fastcall MountPathingGoal::start(int result)
{
  *(_DWORD *)(result + 44) = 0;
  return result;
}


signed int __fastcall MountPathingGoal::tick(MountPathingGoal *this)
{
  MountPathingGoal *v1; // r4@1
  LookControl *v2; // r5@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  Sensing *v8; // r5@8
  int v9; // r0@9
  unsigned int v10; // r2@10
  unsigned int v11; // r3@10
  int v12; // r0@11
  int v13; // r1@11
  signed int result; // r0@14
  int v15; // r0@15
  Level *v17; // r0@17
  char *v18; // r0@17
  Entity *v20; // r5@17
  int v24; // r0@18
  unsigned int v25; // r2@19
  unsigned int v26; // r3@19
  int v27; // r0@20
  int v28; // r1@20
  int v29; // r0@23
  int v30; // r1@23
  int v31; // r2@23
  int v32; // r0@23
  int v33; // r5@24
  int (__fastcall *v34)(int, _DWORD, _DWORD); // r6@24
  int v35; // r0@25
  unsigned int v36; // r2@26
  unsigned int v37; // r3@26
  int v38; // r0@27
  int v39; // r1@27
  int v40; // [sp+4h] [bp-2Ch]@23
  int v41; // [sp+8h] [bp-28h]@23
  int v42; // [sp+Ch] [bp-24h]@23

  v1 = this;
  v2 = (LookControl *)j_Mob::getLookControl(*((Mob **)this + 12));
  if ( !*((_BYTE *)v1 + 28) )
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
    *((_BYTE *)v1 + 28) = 1;
  }
  j_LookControl::setLookAt(v2, *((Entity **)v1 + 3), 30.0, 30.0);
  if ( *((_BYTE *)v1 + 40) )
    goto LABEL_33;
  v8 = (Sensing *)j_Mob::getSensing(*((Mob **)v1 + 12));
    v9 = *((_DWORD *)v1 + 6);
    if ( v9 )
      v10 = *((_DWORD *)v1 + 4);
      v11 = *((_DWORD *)v1 + 5);
      if ( (v10 & v11) != -1 )
        v12 = j_Level::fetchEntity(v9, v10 & v11, v10, v11, 0);
        *((_DWORD *)v1 + 3) = v12;
        if ( !v12 )
                                  v13,
  result = j_Sensing::canSee(v8, *((const Entity **)v1 + 3));
  if ( result == 1 )
LABEL_33:
    v15 = *((_DWORD *)v1 + 11);
    _VF = __OFSUB__(v15, 1);
    result = v15 - 1;
    *((_DWORD *)v1 + 11) = result;
    if ( (unsigned __int8)((result < 0) ^ _VF) | (result == 0) )
      v17 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 12));
      v18 = j_Level::getRandom(v17);
      *((_DWORD *)v1 + 11) = j_Random::_genRandInt32((Random *)v18) % 7 + 4;
      _R0 = (*(int (__fastcall **)(MountPathingGoal *))(*(_DWORD *)v1 + 44))(v1);
      v20 = (Entity *)*((_DWORD *)v1 + 12);
      __asm { VMOV            S16, R0 }
      if ( !*((_BYTE *)v1 + 28) )
        v24 = *((_DWORD *)v1 + 6);
        if ( v24 )
        {
          v25 = *((_DWORD *)v1 + 4);
          v26 = *((_DWORD *)v1 + 5);
          if ( (v25 & v26) != -1 )
          {
            v27 = j_Level::fetchEntity(v24, v25 & v26, v25, v26, 0);
            *((_DWORD *)v1 + 3) = v27;
            if ( !v27 )
              *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                      *((_DWORD *)v1 + 6),
                                      v28,
                                      *((_QWORD *)v1 + 2),
                                      *((_QWORD *)v1 + 2) >> 32,
                                      0);
          }
        }
        *((_BYTE *)v1 + 28) = 1;
      v29 = *((_DWORD *)v1 + 3);
      v30 = *(_DWORD *)(v29 + 72);
      v31 = *(_DWORD *)(v29 + 80);
      v32 = *(_DWORD *)(v29 + 268);
      v40 = v30;
      v41 = v32;
      v42 = v31;
      result = j_Entity::distanceToSqr(v20, (const Vec3 *)&v40);
      __asm
        VMOV            S0, R0
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
        v33 = j_Mob::getNavigation(*((Mob **)v1 + 12));
        v34 = *(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v33 + 20);
        if ( !*((_BYTE *)v1 + 28) )
          v35 = *((_DWORD *)v1 + 6);
          if ( v35 )
            v36 = *((_DWORD *)v1 + 4);
            v37 = *((_DWORD *)v1 + 5);
            if ( (v36 & v37) != -1 )
            {
              v38 = j_Level::fetchEntity(v35, v36 & v37, v36, v37, 0);
              *((_DWORD *)v1 + 3) = v38;
              if ( !v38 )
                *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                        *((_DWORD *)v1 + 6),
                                        v39,
                                        *((_QWORD *)v1 + 2),
                                        *((_QWORD *)v1 + 2) >> 32,
                                        0);
            }
          *((_BYTE *)v1 + 28) = 1;
        result = v34(v33, *((_DWORD *)v1 + 3), *((_DWORD *)v1 + 8));
  return result;
}


int __fastcall MountPathingGoal::_getAttackReachSqr(MountPathingGoal *this)
{
  int v7; // r0@1
  int v8; // r0@3
  unsigned int v9; // r2@4
  unsigned int v10; // r3@4
  int v11; // r0@5
  int v12; // r1@5
  int result; // r0@8

  _R4 = this;
  _R0 = *((_DWORD *)this + 12);
  __asm { VLDR            S0, [R0,#0x130] }
  v7 = *((_BYTE *)_R4 + 28);
  __asm
  {
    VADD.F32        S0, S0, S0
    VMUL.F32        S16, S0, S0
  }
  if ( _ZF )
    v8 = *((_DWORD *)_R4 + 6);
    if ( v8 )
    {
      v9 = *((_DWORD *)_R4 + 4);
      v10 = *((_DWORD *)_R4 + 5);
      if ( (v9 & v10) != -1 )
      {
        v11 = j_Level::fetchEntity(v8, v9 & v10, v9, v10, 0);
        *((_DWORD *)_R4 + 3) = v11;
        if ( !v11 )
          *((_DWORD *)_R4 + 3) = j_Level::fetchEntity(
                                   *((_DWORD *)_R4 + 6),
                                   v12,
                                   *((_QWORD *)_R4 + 2),
                                   *((_QWORD *)_R4 + 2) >> 32,
                                   0);
      }
    }
    *((_BYTE *)_R4 + 28) = 1;
  _R0 = *((_DWORD *)_R4 + 3);
    VLDR            S2, [R4,#0x24]
    VLDR            S0, [R0,#0x130]
    VADD.F32        S0, S0, S16
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


int __fastcall MountPathingGoal::stop(MountPathingGoal *this)
{
  MountPathingGoal *v1; // r4@1
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
  v3 = j_Mob::getNavigation(*((Mob **)v1 + 12));
  return (*(int (**)(void))(*(_DWORD *)v3 + 40))();
}


int __fastcall MountPathingGoal::_init(MountPathingGoal *this, float a2, float _R2, bool a4)
{
  MountPathingGoal *v8; // r4@1
  int result; // r0@1

  __asm { VMOV            S0, R2 }
  v8 = this;
  *((float *)this + 8) = a2;
  __asm
  {
    VMUL.F32        S0, S0, S0
    VSTR            S0, [R4,#0x24]
  }
  *((_BYTE *)this + 40) = a4;
  j_Goal::setRequiredControlFlags(this, 3);
  result = 0;
  *((_DWORD *)v8 + 11) = 0;
  return result;
}


int __fastcall MountPathingGoal::canUse(MountPathingGoal *this)
{
  MountPathingGoal *v1; // r4@1
  __int64 v2; // r0@1
  bool v3; // zf@1
  Entity *v4; // r5@4
  int v5; // r6@5
  int v6; // r0@8
  _BYTE *v7; // r6@8
  int result; // r0@9
  int v9; // r0@11
  Level *v10; // r0@14
  char *v11; // r0@14
  int v12; // r5@14
  int (__fastcall *v13)(int, _DWORD, _DWORD); // r7@14
  int v14; // r0@15
  unsigned int v15; // r2@16
  unsigned int v16; // r3@16
  int v17; // r0@17
  int v18; // r1@17

  v1 = this;
  LODWORD(v2) = j_Mob::getNavigation(*((Mob **)this + 12));
  v3 = (_DWORD)v2 == 0;
  if ( (_DWORD)v2 )
  {
    v2 = *(_QWORD *)(*((_DWORD *)v1 + 12) + 476);
    v3 = HIDWORD(v2) == (_DWORD)v2;
  }
  if ( v3 || (v4 = *(Entity **)v2, j_Entity::hasCategory(*(_DWORD *)v2, 2) != 1) || (v5 = j_Entity::getTarget(v4)) == 0 )
    result = 0;
  else
    if ( *((_DWORD *)v1 + 3) == v5 )
    {
      v7 = (char *)v1 + 28;
    }
    else if ( *(_DWORD *)(v5 + 3092) )
      *((_QWORD *)v1 + 2) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v5);
      v6 = *(_DWORD *)(v5 + 3092);
      *((_DWORD *)v1 + 6) = v6;
      j_Level::registerTemporaryPointer(v6, (unsigned int)v1 + 8);
      *((_BYTE *)v1 + 28) = 0;
    else
      *((_DWORD *)v1 + 3) = 0;
      *((_DWORD *)v1 + 4) = -1;
      *((_DWORD *)v1 + 5) = -1;
      v9 = *((_DWORD *)v1 + 6);
      if ( v9 )
        j_Level::unregisterTemporaryPointer(v9, (unsigned int)v1 + 8);
      *((_DWORD *)v1 + 6) = 0;
    v10 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 12));
    v11 = j_Level::getRandom(v10);
    *((_DWORD *)v1 + 11) = j_Random::_genRandInt32((Random *)v11) % 7 + 4;
    v12 = j_Mob::getNavigation(*((Mob **)v1 + 12));
    v13 = *(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v12 + 20);
    if ( !*((_BYTE *)v1 + 28) )
      v14 = *((_DWORD *)v1 + 6);
      if ( v14 )
      {
        v15 = *((_DWORD *)v1 + 4);
        v16 = *((_DWORD *)v1 + 5);
        if ( (v15 & v16) != -1 )
        {
          v17 = j_Level::fetchEntity(v14, v15 & v16, v15, v16, 0);
          *((_DWORD *)v1 + 3) = v17;
          if ( !v17 )
            *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                    *((_DWORD *)v1 + 6),
                                    v18,
                                    *((_QWORD *)v1 + 2),
                                    *((_QWORD *)v1 + 2) >> 32,
                                    0);
        }
      }
      *v7 = 1;
    result = v13(v12, *((_DWORD *)v1 + 3), *((_DWORD *)v1 + 8));
  return result;
}


void __fastcall MountPathingGoal::~MountPathingGoal(MountPathingGoal *this)
{
  MountPathingGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A798;
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


int __fastcall MountPathingGoal::~MountPathingGoal(MountPathingGoal *this)
{
  MountPathingGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A798;
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
