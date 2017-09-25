

int __fastcall DefendVillageTargetGoal::start(DefendVillageTargetGoal *this)
{
  TargetGoal *v1; // r4@1
  int v2; // r1@1

  v1 = this;
  v2 = *((_DWORD *)this + 16);
  (*(void (**)(void))(**((_DWORD **)this + 13) + 340))();
  return j_j_j__ZN10TargetGoal5startEv(v1);
}


void __fastcall DefendVillageTargetGoal::~DefendVillageTargetGoal(DefendVillageTargetGoal *this)
{
  DefendVillageTargetGoal::~DefendVillageTargetGoal(this);
}


signed int __fastcall DefendVillageTargetGoal::canUse(DefendVillageTargetGoal *this)
{
  DefendVillageTargetGoal *v1; // r4@1
  int v2; // r6@1
  bool v3; // zf@1
  unsigned int *v4; // r0@4
  unsigned int v5; // r1@4
  unsigned int v6; // r2@8
  unsigned int v7; // r3@9
  unsigned int v8; // r1@10
  Village *v9; // r5@10
  unsigned int *v10; // r7@19
  unsigned int v11; // r0@21
  Entity *v12; // r0@26
  Entity *v14; // r0@30

  v1 = this;
  v2 = *((_DWORD *)this + 15);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 4) == 0;
  if ( v3 )
  {
    j_DefendVillageTargetGoal::_updateNearestVillager(this);
    return 0;
  }
  v4 = (unsigned int *)(v2 + 4);
  v5 = *(_DWORD *)(v2 + 4);
  do
    while ( 1 )
    {
      if ( !v5 )
      {
        v9 = 0;
        goto LABEL_26;
      }
      __dmb();
      v6 = __ldrex(v4);
      if ( v6 == v5 )
        break;
      __clrex();
      v5 = v6;
    }
    v7 = __strex(v5 + 1, v4);
    v5 = v6;
  while ( v7 );
  __dmb();
  v8 = *v4;
  v9 = (Village *)*((_DWORD *)v1 + 14);
  if ( !*v4 )
    v9 = (Village *)*v4;
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 - 1, v4) );
  else
    *v4 = v8 - 1;
  if ( v8 == 1 )
    v10 = (unsigned int *)(v2 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
LABEL_26:
  v12 = j_Village::getClosestAggressor(v9, *((Entity **)v1 + 13));
  *((_DWORD *)v1 + 16) = v12;
  if ( j_TargetGoal::_canAttack((int)v1, (int)v12, 0) )
    return 1;
  if ( j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 13) + 552)) % 0x14 )
  v14 = j_Village::getClosestBadStandingPlayer(v9, *((Entity **)v1 + 13));
  *((_DWORD *)v1 + 16) = v14;
  return j_TargetGoal::_canAttack((int)v1, (int)v14, 0);
}


int __fastcall DefendVillageTargetGoal::~DefendVillageTargetGoal(DefendVillageTargetGoal *this)
{
  DefendVillageTargetGoal *v1; // r4@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  FilterGroup *v5; // r0@9
  FilterGroup *v6; // r5@9

  v1 = this;
  *(_DWORD *)this = &off_2725340;
  v2 = *((_DWORD *)this + 15);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  *(_DWORD *)v1 = &off_271B014;
  v6 = (FilterGroup *)(*((_QWORD *)v1 + 1) >> 32);
  v5 = (FilterGroup *)*((_QWORD *)v1 + 1);
  if ( v5 != v6 )
    do
      v5 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v5) + 48);
    while ( v6 != v5 );
    v5 = (FilterGroup *)*((_DWORD *)v1 + 2);
  if ( v5 )
    j_operator delete((void *)v5);
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


int __fastcall DefendVillageTargetGoal::DefendVillageTargetGoal(int a1, int a2, float a3)
{
  int v3; // r4@1

  v3 = a1;
  j_TargetGoal::TargetGoal(a1, a2, a3, 0, 1, 0, 1098907648, 0);
  *(_DWORD *)v3 = &off_2725340;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  j_Goal::setRequiredControlFlags((Goal *)v3, 1);
  return v3;
}


signed int __fastcall DefendVillageTargetGoal::_updateNearestVillager(DefendVillageTargetGoal *this)
{
  DefendVillageTargetGoal *v1; // r4@1
  int v2; // r5@1
  Level *v4; // r0@5
  char *v5; // r0@5
  int v6; // r5@5
  void (__fastcall *v7)(int *, int, char *, signed int); // r7@5
  int v8; // r0@5
  int v9; // r5@5
  unsigned int *v10; // r0@6
  unsigned int v11; // r1@8
  unsigned int *v12; // r0@4
  unsigned int v13; // r1@4
  unsigned int v14; // r2@12
  unsigned int v15; // r3@13
  unsigned int v16; // r1@14
  Village *v17; // r6@14
  int v18; // r0@22
  unsigned int *v19; // r2@23
  unsigned int v20; // r1@25
  int v21; // r0@30
  unsigned int *v22; // r2@31
  unsigned int v23; // r1@33
  unsigned int *v24; // r7@37
  unsigned int v25; // r0@39
  char *v26; // r5@44
  int v27; // r0@44
  Level *v35; // r0@45
  char *v36; // r0@45
  int v37; // r6@45
  void (__fastcall *v38)(int *, int, char *, signed int); // r7@45
  int v39; // r0@45
  unsigned int *v40; // r0@46
  unsigned int v41; // r1@48
  signed int result; // r0@50
  int v43; // r0@52
  unsigned int *v44; // r2@53
  unsigned int v45; // r1@55
  char v46; // [sp+4h] [bp-4Ch]@45
  int v47; // [sp+10h] [bp-40h]@45
  int v48; // [sp+14h] [bp-3Ch]@45
  int v49; // [sp+18h] [bp-38h]@44
  int v50; // [sp+1Ch] [bp-34h]@44
  int v51; // [sp+20h] [bp-30h]@44
  char v52; // [sp+24h] [bp-2Ch]@5
  int v53; // [sp+30h] [bp-20h]@5
  int v54; // [sp+34h] [bp-1Ch]@5

  v1 = this;
  v2 = *((_DWORD *)this + 15);
  _ZF = v2 == 0;
  if ( v2 )
    _ZF = *(_DWORD *)(v2 + 4) == 0;
  if ( _ZF )
  {
    v4 = (Level *)j_Entity::getLevel(*((Entity **)this + 13));
    v5 = j_Level::getVillages(v4);
    v6 = *(_DWORD *)v5;
    v7 = *(void (__fastcall **)(int *, int, char *, signed int))(**(_DWORD **)v5 + 28);
    v8 = (*(int (**)(void))(**((_DWORD **)v1 + 13) + 52))();
    j_BlockPos::BlockPos((int)&v52, v8);
    v7(&v53, v6, &v52, 32);
    *((_DWORD *)v1 + 14) = v53;
    v9 = v54;
    if ( v54 )
    {
      v10 = (unsigned int *)(v54 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 + 1, v10) );
      }
      else
        ++*v10;
    }
    v18 = *((_DWORD *)v1 + 15);
    if ( v18 )
      v19 = (unsigned int *)(v18 + 8);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (**)(void))(*(_DWORD *)v18 + 12))();
    *((_DWORD *)v1 + 15) = v9;
    v21 = v54;
    if ( !v54 )
      goto LABEL_69;
    v22 = (unsigned int *)(v54 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      goto LABEL_66;
    goto LABEL_65;
  }
  v12 = (unsigned int *)(v2 + 4);
  v13 = *(_DWORD *)(v2 + 4);
  do
    while ( 1 )
      if ( !v13 )
        v17 = 0;
        goto LABEL_44;
      v14 = __ldrex(v12);
      if ( v14 == v13 )
        break;
      __clrex();
      v13 = v14;
    v15 = __strex(v13 + 1, v12);
    v13 = v14;
  while ( v15 );
  __dmb();
  v16 = *v12;
  v17 = (Village *)*((_DWORD *)v1 + 14);
  if ( !*v12 )
    v17 = (Village *)*v12;
  if ( &pthread_create )
    __dmb();
    do
      v16 = __ldrex(v12);
    while ( __strex(v16 - 1, v12) );
  else
    *v12 = v16 - 1;
  if ( v16 == 1 )
    v24 = (unsigned int *)(v2 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    else
      v25 = (*v24)--;
    if ( v25 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
LABEL_44:
  v26 = j_Village::getCenter(v17);
  v27 = (*(int (**)(void))(**((_DWORD **)v1 + 13) + 52))();
  j_BlockPos::BlockPos((int)&v49, v27);
  _R0 = v49 - *(_DWORD *)v26;
  __asm { VMOV            S0, R0 }
  _R0 = v50 - *((_DWORD *)v26 + 1);
  __asm { VMOV            S2, R0 }
  _R0 = v51 - *((_DWORD *)v26 + 2);
  __asm
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VMOV            S4, R0
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
  _R0 = 1024;
    VADD.F32        S0, S2, S0
    VMOV            S2, R0
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    return 1;
  v35 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 13));
  v36 = j_Level::getVillages(v35);
  v37 = *(_DWORD *)v36;
  v38 = *(void (__fastcall **)(int *, int, char *, signed int))(**(_DWORD **)v36 + 28);
  v39 = (*(int (**)(void))(**((_DWORD **)v1 + 13) + 52))();
  j_BlockPos::BlockPos((int)&v46, v39);
  v38(&v47, v37, &v46, 32);
  *((_DWORD *)v1 + 14) = v47;
  v9 = v48;
  if ( v48 )
    v40 = (unsigned int *)(v48 + 8);
        v41 = __ldrex(v40);
      while ( __strex(v41 + 1, v40) );
      ++*v40;
  v43 = *((_DWORD *)v1 + 15);
  if ( v43 )
    v44 = (unsigned int *)(v43 + 8);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 == 1 )
      (*(void (**)(void))(*(_DWORD *)v43 + 12))();
  *((_DWORD *)v1 + 15) = v9;
  v21 = v48;
    v22 = (unsigned int *)(v48 + 8);
LABEL_65:
    v23 = (*v22)--;
LABEL_66:
    if ( v23 == 1 )
      (*(void (**)(void))(*(_DWORD *)v21 + 12))();
    v9 = *((_DWORD *)v1 + 15);
LABEL_69:
  if ( v9 )
    result = *(_DWORD *)(v9 + 4) != 0;
    result = 0;
  return result;
}


void __fastcall DefendVillageTargetGoal::~DefendVillageTargetGoal(DefendVillageTargetGoal *this)
{
  DefendVillageTargetGoal *v1; // r4@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  FilterGroup *v5; // r0@9
  FilterGroup *v6; // r5@9

  v1 = this;
  *(_DWORD *)this = &off_2725340;
  v2 = *((_DWORD *)this + 15);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  *(_DWORD *)v1 = &off_271B014;
  v6 = (FilterGroup *)(*((_QWORD *)v1 + 1) >> 32);
  v5 = (FilterGroup *)*((_QWORD *)v1 + 1);
  if ( v5 != v6 )
    do
      v5 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v5) + 48);
    while ( v6 != v5 );
    v5 = (FilterGroup *)*((_DWORD *)v1 + 2);
  if ( v5 )
    j_operator delete((void *)v5);
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}
