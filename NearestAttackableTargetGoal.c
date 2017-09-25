

signed int __fastcall NearestAttackableTargetGoal::canContinueToUse(NearestAttackableTargetGoal *this)
{
  NearestAttackableTargetGoal *v1; // r4@1
  signed int result; // r0@2
  int v3; // r1@4

  v1 = this;
  if ( j_TargetGoal::canContinueToUse(this) == 1 )
  {
    if ( *((_BYTE *)v1 + 65) )
    {
      v3 = j_NearestAttackableTargetGoal::_findTarget(v1);
      if ( v3 != *((_DWORD *)v1 + 14) )
      {
        *((_DWORD *)v1 + 14) = v3;
        (*(void (**)(void))(**((_DWORD **)v1 + 13) + 340))();
      }
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall NearestAttackableTargetGoal::start(NearestAttackableTargetGoal *this)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)*(_QWORD *)((char *)this + 52) + 340))(
           *(_QWORD *)((char *)this + 52),
           *(_QWORD *)((char *)this + 52) >> 32);
}


int __fastcall NearestAttackableTargetGoal::_isPlayerTargetVisible(NearestAttackableTargetGoal *this, const Player *a2, float a3)
{
  NearestAttackableTargetGoal *v3; // r5@1
  Entity *v4; // r4@1
  const Vec3 *v6; // r0@1
  signed int v13; // r1@11
  signed int v14; // r0@11

  v3 = this;
  v4 = a2;
  _R7 = a3;
  v6 = (const Vec3 *)(*(int (**)(void))(**((_DWORD **)this + 13) + 52))();
  _R6 = j_Entity::distanceToSqr(v4, v6);
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)v4 + 312))(v4);
  __asm
  {
    VMOV            S16, R7
    VLDR            S0, =0.8
    VMUL.F32        S0, S16, S0
    VMOV.F32        S18, S16
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S18, S0 }
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 172))(v4) == 1
    && !(*(int (**)(void))(**((_DWORD **)v3 + 13) + 248))() )
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 1016))(v4);
    __asm
    {
      VLDR            S2, =0.1
      VMOV            S4, R0
      VLDR            S0, =0.7
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
      VMUL.F32        S0, S18, S0
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S4, S2 }
    __asm { VMUL.F32        S18, S0, S4 }
  __asm { VMOV            S20, R6 }
  if ( (*(int (**)(void))(**((_DWORD **)v3 + 13) + 488))() != 1116976 )
    j_Player::isHiddenFrom(v4, *((Mob **)v3 + 13));
      VMOV.F32        S0, #0.5
    if ( !_ZF )
      __asm { VMOVNE.F32      S18, S0 }
  __asm { VMUL.F32        S0, S18, S18 }
  v13 = 0;
  v14 = 0;
    VCMPE.F32       S20, S0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S16, #0.0
  if ( _NF ^ _VF )
    v13 = 1;
  __asm { VMRS            APSR_nzcv, FPSCR }
    v14 = 1;
  return v14 | v13;
}


int __fastcall NearestAttackableTargetGoal::NearestAttackableTargetGoal(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1

  v9 = a1;
  j_TargetGoal::TargetGoal(a1, a2, *(float *)&a3, a6, a7, a8, a4, 0);
  *(_DWORD *)v9 = &off_271AFDC;
  *(_DWORD *)(v9 + 60) = a5;
  *(_BYTE *)(v9 + 65) = a9;
  j_Goal::setRequiredControlFlags((Goal *)v9, 1);
  return v9;
}


signed int __fastcall NearestAttackableTargetGoal::canUse(NearestAttackableTargetGoal *this)
{
  NearestAttackableTargetGoal *v1; // r4@1
  unsigned int v2; // r5@1
  int v3; // r0@1
  __int64 v4; // r5@4
  Level *v5; // r0@4
  unsigned int v6; // kr00_4@4
  signed int v7; // r5@4
  int v8; // r0@5

  v1 = this;
  v2 = *((_DWORD *)this + 15);
  v3 = *((_DWORD *)this + 13);
  if ( (signed int)v2 < 1 )
  {
    v4 = *(_QWORD *)j_Entity::getUniqueID((Entity *)v3);
    v5 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 13));
    v6 = v4;
    v7 = 0;
    if ( (*(_QWORD *)j_Level::getCurrentTick(v5) + __PAIR__(HIDWORD(v4), v6)) % 0xA )
      return v7;
  }
  else if ( j_Random::_genRandInt32((Random *)(v3 + 552)) % v2 )
    return 0;
  v8 = j_NearestAttackableTargetGoal::_findTarget(v1);
  if ( v8 )
    v7 = 1;
    *((_DWORD *)v1 + 14) = v8;
    return v7;
  return 0;
}


void __fastcall NearestAttackableTargetGoal::~NearestAttackableTargetGoal(NearestAttackableTargetGoal *this)
{
  NearestAttackableTargetGoal *v1; // r4@1
  FilterGroup *v2; // r0@1
  FilterGroup *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271B014;
  v3 = (FilterGroup *)(*((_QWORD *)this + 1) >> 32);
  v2 = (FilterGroup *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
      v2 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v2) + 48);
    while ( v3 != v2 );
    v2 = (FilterGroup *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall NearestAttackableTargetGoal::_findTarget(NearestAttackableTargetGoal *this)
{
  int v1; // r8@1
  NearestAttackableTargetGoal *v2; // r6@1
  __int64 v4; // kr00_8@1
  int *v10; // r3@3
  int v11; // r0@7
  int v12; // r7@7
  BlockSource *v13; // r5@7
  char *v14; // r0@7
  char *v15; // r7@7
  signed int v16; // r0@7
  signed int i; // r10@8
  int v18; // r4@9
  int v21; // r11@9
  _DWORD *v22; // r2@9
  int v23; // r8@9
  _DWORD *v24; // r3@9
  signed int v25; // r7@9
  int v27; // t1@10
  char *v28; // r1@14
  int v32; // r9@17 OVERLAPPED
  char *v34; // r2@20
  int v35; // r1@20
  char *v38; // r2@27
  char *v39; // r2@35
  __int64 v42; // kr08_8@39
  signed int v43; // r2@39
  char *v44; // r1@42
  int v45; // r0@42
  int v46; // r6@48
  signed int v53; // [sp+4h] [bp-5Ch]@14
  int v54; // [sp+8h] [bp-58h]@9
  int v55; // [sp+10h] [bp-50h]@7
  int v56; // [sp+14h] [bp-4Ch]@7
  int v57; // [sp+18h] [bp-48h]@7
  char v58; // [sp+1Ch] [bp-44h]@7
  int v59; // [sp+38h] [bp-28h]@1

  v1 = 0;
  v2 = this;
  v59 = 0;
  _R4 = 0;
  v4 = *((_QWORD *)this + 1);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    __asm { VLDR            S0, =0.0 }
    _R1 = (int *)(v4 + 32);
    do
    {
      __asm { VLDR            S2, [R1] }
      v10 = &v59;
      __asm
      {
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        v10 = _R1;
      _R1 += 12;
      _R4 = *v10;
      v59 = _R4;
      __asm { VMOV            S0, R4 }
    }
    while ( !_ZF );
  }
  v11 = j_Entity::getRegion(*((Entity **)this + 13));
  v12 = *((_DWORD *)v2 + 13);
  v55 = _R4;
  v56 = _R4;
  v13 = (BlockSource *)v11;
  v57 = _R4;
  j_AABB::grow((AABB *)&v58, (const Vec3 *)(v12 + 264), (int)&v55);
  v14 = j_BlockSource::fetchEntities(v13, (Entity *)v12, (const AABB *)&v58);
  v15 = v14;
  v16 = (*(_QWORD *)v14 >> 32) - *(_QWORD *)v14;
  if ( 0 == v16 >> 2 )
    return v1;
  i = v16 >> 2;
  if ( (unsigned int)(v16 >> 2) >= 0x20000000 )
    sub_21E57F4();
  v18 = 2 * v16;
  _R5 = j_operator new(2 * v16);
  j___aeabi_memclr4_0((int)_R5, v18);
  _R0 = *((_DWORD *)v2 + 13);
  v21 = (int)_R5 + 4;
  v22 = *(_DWORD **)v15;
  v23 = (int)_R5 + 8 * i;
  v24 = (char *)_R5 + 4;
  v25 = i;
  __asm
    VLDR            S0, [R0,#0x48]
    VLDR            S2, [R0,#0x4C]
    VLDR            S4, [R0,#0x50]
  v54 = (int)v2;
  do
    --v25;
    *v24 = *v22;
    v27 = *v22;
    ++v22;
    _R0 = v27;
    __asm
      VLDR            S6, [R0,#0x48]
      VLDR            S8, [R0,#0x4C]
      VSUB.F32        S6, S0, S6
      VLDR            S10, [R0,#0x50]
      VSUB.F32        S8, S2, S8
      VSUB.F32        S10, S4, S10
      VMUL.F32        S6, S6, S6
      VMUL.F32        S8, S8, S8
      VMUL.F32        S10, S10, S10
      VADD.F32        S6, S8, S6
      VADD.F32        S6, S6, S10
      VSTR            S6, [R3,#-4]
    v24 += 2;
  while ( !_ZF );
  if ( _R5 == (void *)v23 )
    v1 = 0;
LABEL_60:
    j_operator delete(_R5);
  sub_1A3B3C4((int)_R5, (char *)_R5 + 8 * i, 2 * (31 - __clz(8 * i >> 3)), 0);
  if ( 8 * i < 129 )
    v39 = (char *)_R5 + 8;
    if ( (char *)_R5 + 8 == (void *)v23 )
      goto LABEL_48;
    _R3 = (char *)_R5;
      _R4 = v39;
        VLDR            S2, [R5]
        VLDR            S0, [R4]
        v42 = *(_QWORD *)v39;
        v43 = v39 - (_BYTE *)_R5;
        if ( 0 != (_R4 - (_BYTE *)_R5) >> 3 )
          j___aeabi_memmove4_0((int)&_R3[-8 * (v43 >> 3) + 16], (int)_R5);
        *(_QWORD *)_R5 = v42;
      else
        __asm { VLDR            S2, [R3] }
        v44 = v39;
        v45 = *((_DWORD *)_R3 + 3);
        __asm
        {
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          *(_QWORD *)v44 = *(_QWORD *)_R3;
          v44 = _R3;
          __asm { VLDR            S2, [R3,#-8] }
          _R3 -= 8;
          __asm
          {
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          }
        __asm { VSTR            S0, [R1] }
        *((_DWORD *)v44 + 1) = v45;
      v39 = _R4 + 8;
      _R3 = _R4;
    while ( _R4 + 8 != (char *)v23 );
  else
    v28 = (char *)_R5 + 8;
    _R7 = (char *)_R5 + 128;
    _R0 = (char *)_R5;
    v53 = i;
      _R4 = v28;
        *(_QWORD *)&v32 = *(_QWORD *)v28;
        if ( (v28 - (_BYTE *)_R5) >> 3 )
          j___aeabi_memmove4_0((int)&_R0[-8 * ((v28 - (_BYTE *)_R5) >> 3) + 16], (int)_R5);
        *(_QWORD *)_R5 = *(_QWORD *)&v32;
        __asm { VLDR            S2, [R0] }
        v34 = v28;
        v35 = *((_DWORD *)_R0 + 3);
          *(_QWORD *)v34 = *(_QWORD *)_R0;
          v34 = _R0;
          __asm { VLDR            S2, [R0,#-8] }
          _R0 -= 8;
        __asm { VSTR            S0, [R2] }
        *((_DWORD *)v34 + 1) = v35;
      v28 = _R4 + 8;
      _R0 = _R4;
    while ( _R4 + 8 != _R7 );
    for ( i = v53; _R7 != (char *)v23; *(_QWORD *)v38 = _R0 )
      _R0 = *(_QWORD *)_R7;
        VLDR            S2, [R7,#-8]
        VMOV            S0, R0
        VCMPE.F32       S2, S0
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v38 = _R7;
        _R3 = _R7 - 8;
        do
          *(_QWORD *)v38 = *(_QWORD *)_R3;
          v38 = _R3;
        while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
      _R7 += 8;
LABEL_55:
    goto LABEL_59;
LABEL_48:
  v46 = 0;
  while ( j_TargetGoal::_canAttack(v54, *(_DWORD *)(v21 + v46), 0) != 1
       || !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v21 + v46) + 48) + 140) )
    v46 += 8;
    if ( 8 * i == v46 )
      goto LABEL_55;
  v1 = *(_DWORD *)((char *)_R5 + v46 + 4);
LABEL_59:
  if ( _R5 )
    goto LABEL_60;
  return v1;
}


void __fastcall NearestAttackableTargetGoal::~NearestAttackableTargetGoal(NearestAttackableTargetGoal *this)
{
  NearestAttackableTargetGoal::~NearestAttackableTargetGoal(this);
}
