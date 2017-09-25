

unsigned int __fastcall BreedGoal::_breed(BreedGoal *this)
{
  BreedGoal *v1; // r4@1
  BreedableComponent *v2; // r5@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4

  v1 = this;
  v2 = (BreedableComponent *)j_Entity::getBreedableComponent(*((Entity **)this + 2));
  if ( !*((_BYTE *)v1 + 36) )
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
    *((_BYTE *)v1 + 36) = 1;
  }
  return j_j_j__ZN18BreedableComponent4mateER3Mob(v2, *((Mob **)v1 + 5));
}


signed int __fastcall BreedGoal::canContinueToUse(BreedGoal *this)
{
  BreedGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  Entity *v7; // r5@7
  PathNavigation *v13; // r6@12
  Path *v14; // r7@12
  const Vec3 *v15; // r0@13
  int v16; // r1@15
  int v17; // r4@16
  signed int result; // r0@17
  float v22; // [sp+4h] [bp-3Ch]@16

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
  v7 = (Entity *)*((_DWORD *)v1 + 5);
  if ( !v7 )
    return 0;
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 316))(*((_DWORD *)v1 + 5)) != 1 )
  if ( j_Entity::isInLove(v7) != 1 )
  if ( *((_DWORD *)v1 + 10) > 59 )
  _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v7);
  __asm
    VMOV.F32        S0, #9.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    return 1;
  v13 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)v1 + 2));
  v14 = (Path *)j_PathNavigation::getPath(v13);
  if ( v14 )
    v15 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v7 + 52))(v7);
    if ( j_Path::endsInXZ(v14, v15) )
      return 1;
  if ( (*(int (__fastcall **)(PathNavigation *, Entity *, _DWORD))(*(_DWORD *)v13 + 20))(v13, v7, *((_DWORD *)v1 + 11)) == 1 )
    v16 = j_PathNavigation::getPath(v13);
    if ( v16 )
      j_Path::getEndPos((Path *)&v22, v16);
      v17 = j_Entity::getRadius(*((Entity **)v1 + 2));
      _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v7 + 52))(v7);
      __asm
        VLDR            S16, [R0]
        VLDR            S18, [R0,#4]
        VLDR            S20, [R0,#8]
      _R0 = j_Entity::getRadius(v7);
      __asm { VLDR            S0, [SP,#0x40+var_3C] }
      _R1 = v17 ^ 0x80000000;
        VLDR            S2, [SP,#0x40+var_38]
        VSUB.F32        S0, S0, S16
        VLDR            S4, [SP,#0x40+var_34]
        VSUB.F32        S2, S2, S18
        VSUB.F32        S4, S4, S20
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VMOV            S2, R1
        VADD.F32        S0, S0, S4
        VMOV            S4, R0
        VSUB.F32        S2, S2, S4
        VSQRT.F32       S0, S0
        VLDR            S2, =0.6
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        return 0;
    result = 0;
  else
  return result;
}


int __fastcall BreedGoal::isCloseEnoughToBreed(float a1, float _R1, float _R2, float _R3, float a5, int a6, int a7, int a8, int a9)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [SP,#arg_8]
    VMOV            S6, R2
    VLDR            S2, [SP,#arg_4]
    VMOV            S4, R1
    VSUB.F32        S0, S6, S0
  }
  result = 0;
    VSUB.F32        S2, S4, S2
    VLDR            S4, [SP,#arg_C]
    VMOV            S6, R3
    VSUB.F32        S4, S6, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S0, S2
    VLDR            S2, [SP,#arg_0]
    VNEG.F32        S2, S2
    VADD.F32        S0, S0, S4
    VLDR            S4, [SP,#arg_10]
    VSUB.F32        S2, S2, S4
    VSQRT.F32       S0, S0
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.6
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 1;
  return result;
}


void __fastcall BreedGoal::~BreedGoal(BreedGoal *this)
{
  BreedGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27252A4;
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


Entity *__fastcall BreedGoal::_moveToFreePartner(BreedGoal *this)
{
  BreedGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r6@1
  BlockSource *v4; // r5@1
  char *v5; // r5@1
  PathNavigation *v6; // r11@1
  const Entity **v7; // r6@1
  Entity *v12; // r9@2
  Entity *v13; // r7@3
  int v15; // r1@7
  int v16; // r10@8
  float v21; // [sp+4h] [bp-8Ch]@8
  int v24; // [sp+10h] [bp-80h]@1
  signed int v25; // [sp+14h] [bp-7Ch]@1
  int v26; // [sp+18h] [bp-78h]@1
  char v27; // [sp+1Ch] [bp-74h]@1

  v1 = this;
  v2 = j_Entity::getRegion(*((Entity **)this + 2));
  v3 = *((_DWORD *)v1 + 2);
  v4 = (BlockSource *)v2;
  v24 = 1090519040;
  v25 = 1090519040;
  v26 = 1090519040;
  j_AABB::grow((AABB *)&v27, (const Vec3 *)(v3 + 264), (int)&v24);
  v5 = j_BlockSource::fetchEntities(v4, (Entity *)v3, (const AABB *)&v27);
  v6 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)v1 + 2));
  v7 = (const Entity **)*(_QWORD *)v5;
  if ( v7 == (const Entity **)(*(_QWORD *)v5 >> 32) )
  {
    v12 = 0;
  }
  else
    __asm
    {
      VLDR            S16, =3.4028e38
      VLDR            S18, =0.6
    }
    do
      v13 = *v7;
      if ( j_Entity::canMate(*((Entity **)v1 + 2), *v7) == 1 )
      {
        _R0 = j_Entity::distanceToSqr(v13, *((const Entity **)v1 + 2));
        __asm
        {
          VMOV            S20, R0
          VCMPE.F32       S20, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          if ( (*(int (__fastcall **)(PathNavigation *, Entity *, _DWORD))(*(_DWORD *)v6 + 20))(
                 v6,
                 v13,
                 *((_DWORD *)v1 + 11)) == 1 )
          {
            v15 = j_PathNavigation::getPath(v6);
            if ( v15 )
            {
              j_Path::getEndPos((Path *)&v21, v15);
              v16 = j_Entity::getRadius(*((Entity **)v1 + 2));
              _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v13 + 52))(v13);
              __asm
              {
                VLDR            S22, [R0]
                VLDR            S24, [R0,#4]
                VLDR            S26, [R0,#8]
              }
              _R0 = j_Entity::getRadius(v13);
              __asm { VLDR            S0, [SP,#0x90+var_8C] }
              _R1 = v16 ^ 0x80000000;
                VLDR            S2, [SP,#0x90+var_88]
                VSUB.F32        S0, S0, S22
                VLDR            S4, [SP,#0x90+var_84]
                VSUB.F32        S2, S2, S24
                VSUB.F32        S4, S4, S26
                VMUL.F32        S0, S0, S0
                VMUL.F32        S2, S2, S2
                VMUL.F32        S4, S4, S4
                VADD.F32        S0, S2, S0
                VMOV            S2, R1
                VADD.F32        S0, S0, S4
                VMOV            S4, R0
                VSUB.F32        S2, S2, S4
                VSQRT.F32       S0, S0
                VCMPE.F32       S0, S18
                VMRS            APSR_nzcv, FPSCR
              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                __asm { VMOVLE.F32      S16, S20 }
                v12 = v13;
            }
          }
      }
      ++v7;
    while ( v7 != *((const Entity ***)v5 + 1) );
  return v12;
}


int __fastcall BreedGoal::canUse(BreedGoal *this)
{
  BreedGoal *v1; // r4@1
  Entity *v2; // r6@3
  bool v3; // zf@4
  int v4; // r0@7
  _BYTE *v5; // r6@7
  int result; // r0@8
  int v7; // r0@10
  int v8; // r0@14
  unsigned int v9; // r2@15
  unsigned int v10; // r3@15
  int v11; // r0@16
  int v12; // r1@16

  v1 = this;
  if ( j_Entity::isInLove(*((Entity **)this + 2)) == 1 && j_Mob::getNavigation(*((Mob **)v1 + 2)) )
  {
    v2 = j_BreedGoal::_moveToFreePartner(v1);
    if ( *((Entity **)v1 + 5) == v2 )
    {
      v5 = (char *)v1 + 36;
    }
    else
      v3 = v2 == 0;
      if ( v2 )
        v3 = *((_DWORD *)v2 + 773) == 0;
      if ( v3 )
      {
        *((_DWORD *)v1 + 5) = 0;
        *((_DWORD *)v1 + 6) = -1;
        *((_DWORD *)v1 + 7) = -1;
        *((_BYTE *)v1 + 36) = 0;
        v5 = (char *)v1 + 36;
        v7 = *((_DWORD *)v1 + 8);
        if ( v7 )
          j_Level::unregisterTemporaryPointer(v7, (unsigned int)v1 + 16);
        *((_DWORD *)v1 + 8) = 0;
      }
      else
        *((_QWORD *)v1 + 3) = *(_QWORD *)j_Entity::getUniqueID(v2);
        v4 = *((_DWORD *)v2 + 773);
        *((_DWORD *)v1 + 8) = v4;
        j_Level::registerTemporaryPointer(v4, (unsigned int)v1 + 16);
    if ( !*v5 )
      v8 = *((_DWORD *)v1 + 8);
      if ( v8 )
        v9 = *((_DWORD *)v1 + 6);
        v10 = *((_DWORD *)v1 + 7);
        if ( (v9 & v10) != -1 )
        {
          v11 = j_Level::fetchEntity(v8, v9 & v10, v9, v10, 0);
          *((_DWORD *)v1 + 5) = v11;
          if ( !v11 )
            *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                    *((_DWORD *)v1 + 8),
                                    v12,
                                    *((_QWORD *)v1 + 3),
                                    *((_QWORD *)v1 + 3) >> 32,
                                    0);
        }
      *v5 = 1;
    result = *((_DWORD *)v1 + 5) != 0;
  }
  else
    result = 0;
  return result;
}


int __fastcall BreedGoal::~BreedGoal(BreedGoal *this)
{
  BreedGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27252A4;
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


int __fastcall BreedGoal::stop(BreedGoal *this)
{
  BreedGoal *v1; // r4@1
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
  *((_DWORD *)v1 + 10) = 0;
  return result;
}


Goal *__fastcall BreedGoal::BreedGoal(Goal *a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r5@1
  Goal *v5; // r4@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v5 = &off_27252A4;
  *((_DWORD *)v5 + 2) = v4;
  *((_DWORD *)v5 + 4) = &off_271A990;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 7) = -1;
  *((_DWORD *)v5 + 6) = -1;
  *((_DWORD *)v5 + 8) = 0;
  *((_BYTE *)v5 + 36) = 0;
  *((_DWORD *)v5 + 10) = 0;
  *((_DWORD *)v5 + 11) = v3;
  j_Goal::setRequiredControlFlags(v5, 3);
  return v5;
}


void __fastcall BreedGoal::~BreedGoal(BreedGoal *this)
{
  BreedGoal::~BreedGoal(this);
}


int __fastcall BreedGoal::tick(BreedGoal *this)
{
  BreedGoal *v1; // r4@1
  LookControl *v2; // r5@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  Entity *v8; // r6@7
  float v9; // r0@7
  int v10; // r5@7
  void (__fastcall *v11)(int, _DWORD, _DWORD); // r6@7
  int v12; // r0@8
  unsigned int v13; // r2@9
  unsigned int v14; // r3@9
  int v15; // r0@10
  int v16; // r1@10
  int result; // r0@13
  int v18; // r0@15
  unsigned int v19; // r2@16
  unsigned int v20; // r3@16
  int v21; // r0@17
  int v22; // r1@17
  Entity *v23; // r5@20
  int v24; // r0@21
  unsigned int v25; // r2@22
  unsigned int v26; // r3@22
  int v27; // r0@23
  int v28; // r1@23
  const Vec3 *v29; // r0@26
  int v36; // r0@27
  unsigned int v37; // r2@28
  unsigned int v38; // r3@28
  int v39; // r0@29
  int v40; // r1@29
  int v42; // r0@33
  unsigned int v43; // r2@34
  unsigned int v44; // r3@34
  int v45; // r0@35
  int v46; // r1@35
  BreedableComponent *v47; // r5@40
  int v48; // r0@41
  unsigned int v49; // r2@42
  unsigned int v50; // r3@42
  int v51; // r0@43
  int v52; // r1@43

  v1 = this;
  v2 = (LookControl *)j_Mob::getLookControl(*((Mob **)this + 2));
  if ( !*((_BYTE *)v1 + 36) )
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
    *((_BYTE *)v1 + 36) = 1;
  }
  v8 = (Entity *)*((_DWORD *)v1 + 5);
  v9 = COERCE_FLOAT((*(int (**)(void))(**((_DWORD **)v1 + 2) + 940))());
  j_LookControl::setLookAt(v2, v8, 10.0, v9);
  v10 = j_Mob::getNavigation(*((Mob **)v1 + 2));
  v11 = *(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v10 + 20);
    v12 = *((_DWORD *)v1 + 8);
    if ( v12 )
      v13 = *((_DWORD *)v1 + 6);
      v14 = *((_DWORD *)v1 + 7);
      if ( (v13 & v14) != -1 )
        v15 = j_Level::fetchEntity(v12, v13 & v14, v13, v14, 0);
        *((_DWORD *)v1 + 5) = v15;
        if ( !v15 )
                                  v16,
  v11(v10, *((_DWORD *)v1 + 5), *((_DWORD *)v1 + 11));
  result = *((_DWORD *)v1 + 10) + 1;
  *((_DWORD *)v1 + 10) = result;
  if ( result == 60 )
    j_Entity::getRadius(*((Entity **)v1 + 2));
    if ( !*((_BYTE *)v1 + 36) )
      v18 = *((_DWORD *)v1 + 8);
      if ( v18 )
        v19 = *((_DWORD *)v1 + 6);
        v20 = *((_DWORD *)v1 + 7);
        if ( (v19 & v20) != -1 )
        {
          v21 = j_Level::fetchEntity(v18, v19 & v20, v19, v20, 0);
          *((_DWORD *)v1 + 5) = v21;
          if ( !v21 )
            *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                    *((_DWORD *)v1 + 8),
                                    v22,
                                    *((_QWORD *)v1 + 3),
                                    *((_QWORD *)v1 + 3) >> 32,
                                    0);
        }
      *((_BYTE *)v1 + 36) = 1;
    j_Entity::getRadius(*((Entity **)v1 + 5));
    v23 = (Entity *)*((_DWORD *)v1 + 2);
      v24 = *((_DWORD *)v1 + 8);
      if ( v24 )
        v25 = *((_DWORD *)v1 + 6);
        v26 = *((_DWORD *)v1 + 7);
        if ( (v25 & v26) != -1 )
          v27 = j_Level::fetchEntity(v24, v25 & v26, v25, v26, 0);
          *((_DWORD *)v1 + 5) = v27;
          if ( !v27 )
                                    v28,
    v29 = (const Vec3 *)(*(int (**)(void))(**((_DWORD **)v1 + 5) + 52))();
    j_Entity::distanceTo(v23, v29);
    _R0 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
    __asm
      VLDR            S16, [R0]
      VLDR            S18, [R0,#4]
      VLDR            S20, [R0,#8]
    _R5 = j_Entity::getRadius(*((Entity **)v1 + 2));
      v36 = *((_DWORD *)v1 + 8);
      if ( v36 )
        v37 = *((_DWORD *)v1 + 6);
        v38 = *((_DWORD *)v1 + 7);
        if ( (v37 & v38) != -1 )
          v39 = j_Level::fetchEntity(v36, v37 & v38, v37, v38, 0);
          *((_DWORD *)v1 + 5) = v39;
          if ( !v39 )
                                    v40,
    __asm { VMOV            S22, R5 }
    _R0 = (*(int (**)(void))(**((_DWORD **)v1 + 5) + 52))();
      VLDR            S24, [R0]
      VLDR            S26, [R0,#4]
      VLDR            S28, [R0,#8]
      v42 = *((_DWORD *)v1 + 8);
      if ( v42 )
        v43 = *((_DWORD *)v1 + 6);
        v44 = *((_DWORD *)v1 + 7);
        if ( (v43 & v44) != -1 )
          v45 = j_Level::fetchEntity(v42, v43 & v44, v43, v44, 0);
          *((_DWORD *)v1 + 5) = v45;
          if ( !v45 )
                                    v46,
      VSUB.F32        S0, S16, S24
      VSUB.F32        S2, S18, S26
      VSUB.F32        S4, S20, S28
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VSQRT.F32       S0, S0
      VSUB.F32        S16, S0, S22
    result = j_Entity::getRadius(*((Entity **)v1 + 5));
      VMOV            S0, R0
      VLDR            S2, =0.6
      VSUB.F32        S0, S16, S0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v47 = (BreedableComponent *)j_Entity::getBreedableComponent(*((Entity **)v1 + 2));
      if ( !*((_BYTE *)v1 + 36) )
        v48 = *((_DWORD *)v1 + 8);
        if ( v48 )
          v49 = *((_DWORD *)v1 + 6);
          v50 = *((_DWORD *)v1 + 7);
          if ( (v49 & v50) != -1 )
          {
            v51 = j_Level::fetchEntity(v48, v49 & v50, v49, v50, 0);
            *((_DWORD *)v1 + 5) = v51;
            if ( !v51 )
              *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                      *((_DWORD *)v1 + 8),
                                      v52,
                                      *((_QWORD *)v1 + 3),
                                      *((_QWORD *)v1 + 3) >> 32,
                                      0);
          }
        *((_BYTE *)v1 + 36) = 1;
      result = j_j_j__ZN18BreedableComponent4mateER3Mob(v47, *((Mob **)v1 + 5));
  return result;
}
