

int __fastcall MoveThroughVillageGoal::~MoveThroughVillageGoal(MoveThroughVillageGoal *this)
{
  MoveThroughVillageGoal *v1; // r4@1
  void *v2; // r0@1
  Path *v3; // r0@3
  Path *v4; // r0@4

  v1 = this;
  *(_DWORD *)this = &off_271A804;
  v2 = (void *)*((_DWORD *)this + 6);
  if ( v2 )
    j_operator delete(v2);
  v3 = (Path *)*((_DWORD *)v1 + 3);
  if ( v3 )
  {
    v4 = j_Path::~Path(v3);
    j_operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 3) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


void __fastcall MoveThroughVillageGoal::~MoveThroughVillageGoal(MoveThroughVillageGoal *this)
{
  MoveThroughVillageGoal::~MoveThroughVillageGoal(this);
}


void __fastcall MoveThroughVillageGoal::start(MoveThroughVillageGoal *this)
{
  MoveThroughVillageGoal::start(this);
}


DoorInfo *__fastcall MoveThroughVillageGoal::_getNextDoorInfo(MoveThroughVillageGoal *this, Village *a2)
{
  MoveThroughVillageGoal *v2; // r10@1
  float v3; // r1@1
  DoorInfo **v4; // r4@1
  __int64 v5; // kr00_8@1
  signed int v6; // r8@2
  DoorInfo *v7; // r9@2
  DoorInfo *v8; // r7@3
  int v9; // r6@3
  float v10; // r1@3
  int v11; // r5@3
  float v12; // r1@3
  int v13; // r0@3
  int v14; // r6@3
  int v16; // [sp+0h] [bp-30h]@3
  int v17; // [sp+4h] [bp-2Ch]@3
  int v18; // [sp+8h] [bp-28h]@3

  v2 = this;
  v5 = *(_QWORD *)j_Village::getDoorInfos(a2);
  v4 = (DoorInfo **)v5;
  if ( (_DWORD)v5 != HIDWORD(v5) )
  {
    v6 = 0x7FFFFFFF;
    v7 = 0;
    while ( 1 )
    {
      v8 = *v4;
      v9 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v2 + 9) + 72), v3);
      v11 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v2 + 9) + 76), v10);
      v13 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v2 + 9) + 80), v12);
      v16 = v9;
      v17 = v11;
      v18 = v13;
      v14 = j_DoorInfo::distanceToSqr(v8, (const BlockPos *)&v16);
      if ( v14 >= v6 )
        break;
      if ( !j_MoveThroughVillageGoal::_hasVisited(v2, v8) )
        goto LABEL_7;
LABEL_8:
      ++v4;
      if ( (DoorInfo **)HIDWORD(v5) == v4 )
        return v7;
    }
    v14 = v6;
    v8 = v7;
LABEL_7:
    v6 = v14;
    v7 = v8;
    goto LABEL_8;
  }
  return 0;
}


Goal *__fastcall MoveThroughVillageGoal::MoveThroughVillageGoal(Goal *a1, int a2, int a3, char a4)
{
  char v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  Goal *v7; // r4@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v7 = &off_271A804;
  *((_DWORD *)v7 + 2) = v5;
  *((_DWORD *)v7 + 3) = 0;
  *((_DWORD *)v7 + 4) = 0;
  *((_BYTE *)v7 + 20) = v4;
  *((_DWORD *)v7 + 6) = 0;
  *((_DWORD *)v7 + 7) = 0;
  *((_DWORD *)v7 + 8) = 0;
  *((_DWORD *)v7 + 9) = v6;
  j_Goal::setRequiredControlFlags(v7, 1);
  return v7;
}


void __fastcall MoveThroughVillageGoal::start(MoveThroughVillageGoal *this)
{
  MoveThroughVillageGoal *v1; // r4@1
  int v2; // r0@1
  Path *v3; // r2@1
  void (*v4)(void); // r3@1
  int v5; // r2@1
  Path *v6; // r0@2
  Path *v7; // [sp+4h] [bp-Ch]@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 9));
  v3 = (Path *)*((_DWORD *)v1 + 3);
  v4 = *(void (**)(void))(*(_DWORD *)v2 + 24);
  *((_DWORD *)v1 + 3) = 0;
  v7 = v3;
  v5 = *((_DWORD *)v1 + 2);
  v4();
  if ( v7 )
  {
    v6 = j_Path::~Path(v7);
    j_operator delete((void *)v6);
  }
}


signed int __fastcall MoveThroughVillageGoal::_hasVisited(MoveThroughVillageGoal *this, const DoorInfo *a2)
{
  int *v2; // r7@1
  int *v3; // r9@1
  const DoorInfo *v4; // r4@1
  signed int result; // r0@8
  int v10; // [sp+0h] [bp-78h]@6
  char v12; // [sp+Ch] [bp-6Ch]@6
  char v14; // [sp+18h] [bp-60h]@4
  char v16; // [sp+24h] [bp-54h]@4
  float v18; // [sp+30h] [bp-48h]@2
  float v19; // [sp+3Ch] [bp-3Ch]@2

  v3 = (int *)(*((_QWORD *)this + 3) >> 32);
  v2 = (int *)*((_QWORD *)this + 3);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_8:
    result = 0;
  }
  else
    while ( 1 )
    {
      j_DoorInfo::getPosition((DoorInfo *)&v19, (int)v4);
      __asm { VLDR            S16, [SP,#0x78+var_3C] }
      j_DoorInfo::getPosition((DoorInfo *)&v18, *v2);
      __asm
      {
        VLDR            S0, [SP,#0x78+var_48]
        VCMPE.F32       S16, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        j_DoorInfo::getPosition((DoorInfo *)&v16, (int)v4);
        __asm { VLDR            S16, [SP,#0x78+var_50] }
        j_DoorInfo::getPosition((DoorInfo *)&v14, *v2);
        __asm
        {
          VLDR            S0, [SP,#0x78+var_5C]
          VCMPE.F32       S16, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          j_DoorInfo::getPosition((DoorInfo *)&v12, (int)v4);
          __asm { VLDR            S16, [SP,#0x78+var_64] }
          j_DoorInfo::getPosition((DoorInfo *)&v10, *v2);
          __asm
          {
            VLDR            S0, [SP,#0x78+var_70]
            VCMPE.F32       S16, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _ZF )
            break;
      ++v2;
      if ( v3 == v2 )
        goto LABEL_8;
    }
    result = 1;
  return result;
}


int __fastcall MoveThroughVillageGoal::_updateVisited(int result)
{
  __int64 v1; // kr00_8@1

  v1 = *(_QWORD *)(result + 24);
  if ( (unsigned int)((HIDWORD(v1) - (signed int)v1) >> 2) >= 0x10 )
    *(_DWORD *)(result + 28) = HIDWORD(v1) - 4;
  return result;
}


void __fastcall MoveThroughVillageGoal::~MoveThroughVillageGoal(MoveThroughVillageGoal *this)
{
  MoveThroughVillageGoal *v1; // r4@1
  void *v2; // r0@1
  Path *v3; // r0@3
  Path *v4; // r0@4

  v1 = this;
  *(_DWORD *)this = &off_271A804;
  v2 = (void *)*((_DWORD *)this + 6);
  if ( v2 )
    j_operator delete(v2);
  v3 = (Path *)*((_DWORD *)v1 + 3);
  if ( v3 )
  {
    v4 = j_Path::~Path(v3);
    j_operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 3) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall MoveThroughVillageGoal::canUse(MoveThroughVillageGoal *this)
{
  MoveThroughVillageGoal *v1; // r9@1
  __int64 v2; // kr00_8@2
  BlockSource *v3; // r0@4
  int v4; // r0@5
  signed int v5; // r6@6
  Level *v6; // r0@7
  char *v7; // r0@7
  int v8; // r5@7
  void (__fastcall *v9)(Village **, int, char *, _DWORD); // r4@7
  int v10; // r5@7
  unsigned int *v11; // r0@9
  unsigned int v12; // r1@9
  unsigned int v13; // r2@12
  unsigned int v14; // r3@13
  unsigned int v15; // r1@14
  signed int v16; // r0@14
  Village *v17; // r1@18
  DoorInfo *v18; // r0@20
  unsigned int *v19; // r1@21
  unsigned int v20; // r0@23
  unsigned int *v21; // r6@28
  unsigned int v22; // r0@30
  PathNavigation *v23; // r5@37
  char v24; // r8@37
  void (__fastcall *v25)(Path **, PathNavigation *, char *); // r6@37
  Path *v26; // r1@37
  Path *v27; // r0@37
  Path *v28; // r0@38
  Path *v29; // r0@39
  Vec3 *v30; // r7@43
  Path *v31; // r1@44
  Path *v32; // r0@44
  Path *v33; // r0@45
  Path *v34; // r0@46
  int v35; // r0@49
  unsigned int *v36; // r2@50
  unsigned int v37; // r1@52
  Path *v39; // [sp+4h] [bp-5Ch]@43
  char v40; // [sp+8h] [bp-58h]@43
  int v41; // [sp+14h] [bp-4Ch]@43
  int v42; // [sp+18h] [bp-48h]@43
  int v43; // [sp+1Ch] [bp-44h]@43
  char v44; // [sp+20h] [bp-40h]@37
  Path *v45; // [sp+2Ch] [bp-34h]@37
  char v46; // [sp+30h] [bp-30h]@7
  Village *v47; // [sp+3Ch] [bp-24h]@7
  int v48; // [sp+40h] [bp-20h]@7

  v1 = this;
  if ( !j_Mob::getNavigation(*((Mob **)this + 9)) )
    goto LABEL_60;
  v2 = *((_QWORD *)v1 + 3);
  if ( (unsigned int)((HIDWORD(v2) - (signed int)v2) >> 2) >= 0x10 )
    *((_DWORD *)v1 + 7) = HIDWORD(v2) - 4;
  v3 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 9));
  if ( *((_BYTE *)v1 + 20) && (v4 = j_BlockSource::getDimension(v3), (*(int (**)(void))(*(_DWORD *)v4 + 196))()) )
  {
LABEL_60:
    v5 = 0;
  }
  else
    v6 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 9));
    v7 = j_Level::getVillages(v6);
    v8 = *(_DWORD *)v7;
    v9 = *(void (__fastcall **)(Village **, int, char *, _DWORD))(**(_DWORD **)v7 + 24);
    j_BlockPos::BlockPos((int)&v46, *((_DWORD *)v1 + 9) + 72);
    v9(&v47, v8, &v46, 0);
    v10 = v48;
    if ( v48 )
    {
      if ( *(_DWORD *)(v48 + 4) )
      {
        v11 = (unsigned int *)(v48 + 4);
        v12 = *(_DWORD *)(v48 + 4);
        do
        {
          while ( 1 )
          {
            if ( !v12 )
            {
              v16 = 1;
              v10 = 0;
              goto LABEL_18;
            }
            __dmb();
            v13 = __ldrex(v11);
            if ( v13 == v12 )
              break;
            __clrex();
            v12 = v13;
          }
          v14 = __strex(v12 + 1, v11);
          v12 = v13;
        }
        while ( v14 );
        __dmb();
        v15 = *v11;
        v16 = 0;
        if ( !v15 )
          v16 = 1;
LABEL_18:
        v17 = v47;
        if ( v16 )
          v17 = 0;
        v18 = j_MoveThroughVillageGoal::_getNextDoorInfo(v1, v17);
        *((_DWORD *)v1 + 4) = v18;
        if ( v10 )
          v19 = (unsigned int *)(v10 + 4);
          if ( &pthread_create )
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          else
            v20 = (*v19)--;
          if ( v20 == 1 )
            v21 = (unsigned int *)(v10 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
            if ( &pthread_create )
              __dmb();
              do
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
            else
              v22 = (*v21)--;
            if ( v22 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
          v18 = (DoorInfo *)*((_DWORD *)v1 + 4);
        if ( v18 )
          v23 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)v1 + 9));
          v24 = j_PathNavigation::canOpenDoors(v23);
          j_PathNavigation::setCanOpenDoors(v23, 0);
          v25 = *(void (__fastcall **)(Path **, PathNavigation *, char *))(*(_DWORD *)v23 + 8);
          j_DoorInfo::getPosition((DoorInfo *)&v44, *((_DWORD *)v1 + 4));
          v25(&v45, v23, &v44);
          v26 = v45;
          v45 = 0;
          v27 = (Path *)*((_DWORD *)v1 + 3);
          *((_DWORD *)v1 + 3) = v26;
          if ( v27 )
            v28 = j_Path::~Path(v27);
            j_operator delete((void *)v28);
            if ( v45 )
              v29 = j_Path::~Path(v45);
              j_operator delete((void *)v29);
          j_PathNavigation::setCanOpenDoors(v23, v24);
          if ( *((_DWORD *)v1 + 3) )
            v5 = 1;
            v41 = 0;
            v42 = 0;
            v43 = 0;
            v30 = (Vec3 *)*((_DWORD *)v1 + 9);
            j_DoorInfo::getPosition((DoorInfo *)&v40, *((_DWORD *)v1 + 4));
            if ( j_RandomPos::getPosTowards((RandomPos *)&v41, v30, (Mob *)0xA, 7, (int)&v40, v39) == 1 )
              j_PathNavigation::setCanOpenDoors(v23, 0);
              (*(void (__fastcall **)(Path **, PathNavigation *, int *))(*(_DWORD *)v23 + 8))(&v39, v23, &v41);
              v31 = v39;
              v39 = 0;
              v32 = (Path *)*((_DWORD *)v1 + 3);
              *((_DWORD *)v1 + 3) = v31;
              if ( v32 )
              {
                v33 = j_Path::~Path(v32);
                j_operator delete((void *)v33);
                if ( v39 )
                {
                  v34 = j_Path::~Path(v39);
                  j_operator delete((void *)v34);
                }
              }
              j_PathNavigation::setCanOpenDoors(v23, v24);
              v5 = *((_DWORD *)v1 + 3) != 0;
              v5 = 0;
        else
          v5 = 0;
      }
      else
        v5 = 0;
      v35 = v48;
      if ( v48 )
        v36 = (unsigned int *)(v48 + 8);
        if ( &pthread_create )
          __dmb();
          do
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 == 1 )
          (*(void (**)(void))(*(_DWORD *)v35 + 12))();
    }
  return v5;
}


int __fastcall MoveThroughVillageGoal::stop(MoveThroughVillageGoal *this)
{
  MoveThroughVillageGoal *v1; // r4@1
  int v2; // r5@1
  Entity *v3; // r6@2
  int result; // r0@2
  __int64 v12; // r6@5
  Entity *v13; // r5@6
  __int64 v14; // r0@8
  void *v15; // r8@10
  unsigned int v16; // r2@10
  unsigned int v17; // r1@12
  unsigned int v18; // r5@12
  signed int v19; // r2@20
  int v20; // r0@20
  int v22; // [sp+0h] [bp-48h]@6
  float v23; // [sp+Ch] [bp-3Ch]@2

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 9));
  if ( (*(int (**)(void))(*(_DWORD *)v2 + 36))() )
    goto LABEL_29;
  v3 = (Entity *)*((_DWORD *)v1 + 9);
  _R0 = j_DoorInfo::getIndoorX(*((DoorInfo **)v1 + 4));
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S16, S0
  }
  _R0 = j_DoorInfo::getIndoorY(*((DoorInfo **)v1 + 4));
    VCVT.F32.S32    S18, S0
  _R0 = j_DoorInfo::getIndoorZ(*((DoorInfo **)v1 + 4));
    VCVT.F32.S32    S0, S0
    VSTR            S16, [SP,#0x48+var_3C]
    VSTR            S18, [SP,#0x48+var_38]
    VSTR            S0, [SP,#0x48+var_34]
  result = j_Entity::distanceToSqr(v3, (const Vec3 *)&v23);
    VMOV.F32        S0, #16.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
LABEL_29:
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 36))(v2) == 1 )
    {
      HIDWORD(v12) = (char *)v1 + 16;
    }
    else
      v13 = (Entity *)*((_DWORD *)v1 + 9);
      j_DoorInfo::getPosition((DoorInfo *)&v22, *((_DWORD *)v1 + 4));
      result = j_Entity::distanceToSqr(v13, (const Vec3 *)&v22);
      __asm
      {
        VMOV.F32        S0, #16.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        return result;
    v14 = *(_QWORD *)((char *)v1 + 28);
    if ( (_DWORD)v14 == HIDWORD(v14) )
      v15 = (void *)*((_DWORD *)v1 + 6);
      v16 = ((signed int)v14 - (signed int)v15) >> 2;
      if ( !v16 )
        v16 = 1;
      HIDWORD(v14) = v16 + (((signed int)v14 - (signed int)v15) >> 2);
      v18 = v16 + (((signed int)v14 - (signed int)v15) >> 2);
      if ( 0 != HIDWORD(v14) >> 30 )
        v18 = 0x3FFFFFFF;
      if ( v17 < v16 )
      if ( v18 )
        if ( v18 >= 0x40000000 )
          sub_21E57F4();
        LODWORD(v12) = j_operator new(4 * v18);
        LODWORD(v14) = *((_QWORD *)v1 + 3) >> 32;
        v15 = (void *)*((_QWORD *)v1 + 3);
      else
        LODWORD(v12) = 0;
      v19 = v14 - (_DWORD)v15;
      v20 = *(_DWORD *)HIDWORD(v12);
      HIDWORD(v12) = v12 + v19;
      *(_DWORD *)(v12 + v19) = v20;
      if ( 0 != v19 >> 2 )
        j___aeabi_memmove4_0(v12, (int)v15);
      HIDWORD(v12) += 4;
      if ( v15 )
        j_operator delete(v15);
      result = v12 + 4 * v18;
      *((_QWORD *)v1 + 3) = v12;
      *((_DWORD *)v1 + 8) = result;
      *(_DWORD *)v14 = *(_DWORD *)HIDWORD(v12);
      result = *((_DWORD *)v1 + 7) + 4;
      *((_DWORD *)v1 + 7) = result;
  return result;
}


signed int __fastcall MoveThroughVillageGoal::canContinueToUse(MoveThroughVillageGoal *this)
{
  MoveThroughVillageGoal *v1; // r5@1
  int v2; // r0@1
  signed int v3; // r4@1
  int v4; // r1@2
  char v12; // [sp+4h] [bp-24h]@2

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 9));
  v3 = 0;
  if ( !(*(int (**)(void))(*(_DWORD *)v2 + 36))() )
  {
    v4 = *((_DWORD *)v1 + 4);
    _R5 = (Entity *)*((_DWORD *)v1 + 9);
    __asm { VLDR            S16, [R5,#0x130] }
    j_DoorInfo::getPosition((DoorInfo *)&v12, v4);
    __asm
    {
      VMOV.F32        S0, #4.0
      VADD.F32        S16, S16, S0
    }
    _R0 = j_Entity::distanceToSqr(_R5, (const Vec3 *)&v12);
      VMUL.F32        S0, S16, S16
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v3 = 1;
  }
  return v3;
}
