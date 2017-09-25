

signed int __fastcall MeleeAttackGoal::canContinueToUse(MeleeAttackGoal *this)
{
  MeleeAttackGoal *v1; // r4@1
  int v2; // r0@1
  unsigned int v3; // r5@2
  int v4; // r5@5
  int v5; // r0@7
  unsigned int v6; // r2@8
  unsigned int v7; // r3@8
  int v8; // r0@9
  int v9; // r1@9
  int v10; // r0@12
  signed int v11; // r6@12
  Entity *v12; // r6@21
  int v13; // r0@23
  char v15; // [sp+8h] [bp-20h]@22

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 88) )
  {
    v3 = *((_DWORD *)v1 + 15);
    if ( (signed int)v3 >= 1 )
    {
      if ( !(j_Random::_genRandInt32((Random *)(v2 + 552)) % v3) )
      {
        v11 = 0;
        (*(void (**)(void))(**((_DWORD **)v1 + 2) + 340))();
        return v11;
      }
      v2 = *((_DWORD *)v1 + 2);
    }
    v4 = j_Entity::getTarget((Entity *)v2);
    if ( v4 )
      if ( !*((_BYTE *)v1 + 36) )
        v5 = *((_DWORD *)v1 + 8);
        if ( v5 )
        {
          v6 = *((_DWORD *)v1 + 6);
          v7 = *((_DWORD *)v1 + 7);
          if ( (v6 & v7) != -1 )
          {
            v8 = j_Level::fetchEntity(v5, v6 & v7, v6, v7, 0);
            *((_DWORD *)v1 + 5) = v8;
            if ( !v8 )
              *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                      *((_DWORD *)v1 + 8),
                                      v9,
                                      *((_QWORD *)v1 + 3),
                                      *((_QWORD *)v1 + 3) >> 32,
                                      0);
          }
        }
        *((_BYTE *)v1 + 36) = 1;
      v10 = *((_DWORD *)v1 + 5);
      v11 = 0;
      if ( v4 == v10 && v10 )
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 316))(v4) == 1 )
          if ( j_Entity::isRiding(*((Entity **)v1 + 2)) )
            v11 = 1;
          else
            v12 = (Entity *)*((_DWORD *)v1 + 2);
            if ( *((_BYTE *)v1 + 48) )
            {
              j_BlockPos::BlockPos((BlockPos *)&v15, *(float *)(v4 + 72), *(float *)(v4 + 76), *(float *)(v4 + 80));
              v11 = j_Entity::isWithinRestriction(v12, (const BlockPos *)&v15);
            }
            else
              v13 = j_Mob::getNavigation(*((Mob **)v1 + 2));
              v11 = (*(int (**)(void))(*(_DWORD *)v13 + 36))() ^ 1;
        else
          v11 = 0;
    else
  }
  else
    v11 = 0;
  return v11;
}


void __fastcall MeleeAttackGoal::~MeleeAttackGoal(MeleeAttackGoal *this)
{
  MeleeAttackGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2
  unsigned int v4; // r1@3
  int v5; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_271A760;
  v2 = (Path *)*((_DWORD *)this + 13);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 4) = &off_271A67C;
  v4 = (unsigned int)v1 + 16;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = -1;
  *(_DWORD *)(v4 + 12) = -1;
  *(_BYTE *)(v4 + 20) = 0;
  v5 = *((_DWORD *)v1 + 8);
  if ( v5 )
    j_Level::unregisterTemporaryPointer(v5, v4);
  *((_DWORD *)v1 + 8) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


_DWORD *__fastcall MeleeAttackGoal::appendDebugInfo(int a1, const void **a2)
{
  const void **v2; // r5@1
  int v3; // r6@1
  _DWORD *result; // r0@1
  _DWORD *v5; // r0@2
  void *v6; // r0@2
  void **v7; // r0@3
  void *v8; // r0@3
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  int v13; // [sp+0h] [bp-D8h]@2
  void **v14; // [sp+4h] [bp-D4h]@2
  int v15; // [sp+8h] [bp-D0h]@4
  void **v16; // [sp+Ch] [bp-CCh]@2
  void **v17; // [sp+10h] [bp-C8h]@2
  int v18; // [sp+2Ch] [bp-ACh]@4
  int v19; // [sp+34h] [bp-A4h]@3
  int v20; // [sp+38h] [bp-A0h]@4

  v2 = a2;
  v3 = a1;
  sub_21E7408(a2, "MeleeAttack", 0xBu);
  result = (_DWORD *)j_Entity::getAngryComponent(*(Entity **)(v3 + 8));
  if ( result )
  {
    sub_21D103C((int)&v14, 24);
    sub_21CBF38((char *)&v16, (int)" ", 1);
    v5 = (_DWORD *)j_Entity::getAngryComponent(*(Entity **)(v3 + 8));
    sub_21CC43C(&v16, *v5);
    sub_21CFED8(&v13, (int)&v17);
    sub_21E72F0(v2, (const void **)&v13);
    v6 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = off_26D3F84;
    v14 = off_26D3F60;
    *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v14) = off_26D3F80[0];
    v16 = v7;
    v17 = &off_27734E8;
    v8 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v19 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v17 = &off_26D40A8;
    sub_21C802C((unsigned int **)&v18);
    v14 = (void **)off_26D3F68;
    *(void ***)((char *)&v14 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
    v15 = 0;
    result = sub_21B6560(&v20);
  }
  return result;
}


int __fastcall MeleeAttackGoal::~MeleeAttackGoal(MeleeAttackGoal *this)
{
  MeleeAttackGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2
  unsigned int v4; // r1@3
  int v5; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_271A760;
  v2 = (Path *)*((_DWORD *)this + 13);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 4) = &off_271A67C;
  v4 = (unsigned int)v1 + 16;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = -1;
  *(_DWORD *)(v4 + 12) = -1;
  *(_BYTE *)(v4 + 20) = 0;
  v5 = *((_DWORD *)v1 + 8);
  if ( v5 )
    j_Level::unregisterTemporaryPointer(v5, v4);
  *((_DWORD *)v1 + 8) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


int __fastcall MeleeAttackGoal::stop(MeleeAttackGoal *this)
{
  MeleeAttackGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3

  v1 = this;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 7) = -1;
  *((_BYTE *)this + 36) = 0;
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
    j_Level::unregisterTemporaryPointer(v2, (unsigned int)v1 + 16);
  *((_DWORD *)v1 + 8) = 0;
  v3 = j_Mob::getNavigation(*((Mob **)v1 + 2));
  return (*(int (**)(void))(*(_DWORD *)v3 + 40))();
}


int __fastcall MeleeAttackGoal::start(MeleeAttackGoal *this)
{
  MeleeAttackGoal *v1; // r4@1
  int v2; // r0@1
  Path *v3; // r2@1
  void (*v4)(void); // r3@1
  int v5; // r2@1
  Path *v6; // r0@2
  int result; // r0@3
  Path *v8; // [sp+4h] [bp-Ch]@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 2));
  v3 = (Path *)*((_DWORD *)v1 + 13);
  v4 = *(void (**)(void))(*(_DWORD *)v2 + 24);
  *((_DWORD *)v1 + 13) = 0;
  v8 = v3;
  v5 = *((_DWORD *)v1 + 11);
  v4();
  if ( v8 )
  {
    v6 = j_Path::~Path(v8);
    j_operator delete((void *)v6);
  }
  result = 0;
  *((_DWORD *)v1 + 17) = 0;
  return result;
}


int __fastcall MeleeAttackGoal::_getAttackReachSqr(MeleeAttackGoal *this)
{
  int *v7; // r1@1
  int v10; // r0@11
  int v11; // r0@13
  unsigned int v12; // r2@14
  unsigned int v13; // r3@14
  int v14; // r0@15
  int v15; // r1@15
  int result; // r0@18
  int v18; // [sp+4h] [bp-1Ch]@1

  __asm { VMOV.F32        S0, #0.5 }
  _R4 = this;
  _R0 = (Entity *)*((_DWORD *)this + 2);
  v18 = 1056964608;
  v7 = &v18;
  __asm
  {
    VLDR            S2, [R0,#0x130]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    v7 = (int *)((char *)_R0 + 304);
  _R5 = *v7;
  if ( j_Entity::isRiding(_R0) == 1 )
    _R0 = j_Entity::getRide(*((Entity **)_R4 + 2));
    __asm
    {
      VLDR            S2, [R0,#0x130]
      VLDR            S4, =1.39
      VCMPE.F32       S2, #0.0
      VLDR            S0, =0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S2, S4
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S2 }
      VMOV            S2, R5
      __asm { VMOVGT.F32      S0, S4 }
      VCMPE.F32       S2, S0
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S2, S0 }
      VLDR            S0, =0.1
      VADD.F32        S0, S2, S0
      VMOV            R5, S0
    VLDR            S0, [R4,#0x40]
    VMOV            S2, R5
  v10 = *((_BYTE *)_R4 + 36);
    VMUL.F32        S0, S2, S0
    VMUL.F32        S16, S0, S0
  if ( _ZF )
    v11 = *((_DWORD *)_R4 + 8);
    if ( v11 )
      v12 = *((_DWORD *)_R4 + 6);
      v13 = *((_DWORD *)_R4 + 7);
      if ( (v12 & v13) != -1 )
      {
        v14 = j_Level::fetchEntity(v11, v12 & v13, v12, v13, 0);
        *((_DWORD *)_R4 + 5) = v14;
        if ( !v14 )
          *((_DWORD *)_R4 + 5) = j_Level::fetchEntity(
                                   *((_DWORD *)_R4 + 8),
                                   v15,
                                   *((_QWORD *)_R4 + 3),
                                   *((_QWORD *)_R4 + 3) >> 32,
                                   0);
      }
    *((_BYTE *)_R4 + 36) = 1;
  _R0 = *((_DWORD *)_R4 + 5);
    VLDR            S0, [R0,#0x130]
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  return result;
}


int __fastcall MeleeAttackGoal::tick(MeleeAttackGoal *this)
{
  int result; // r0@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  int v8; // r5@7
  int v9; // r6@8
  LookControl *v10; // r0@8
  Entity *v11; // r0@8
  int v12; // r3@9
  int v13; // r2@9
  int *v14; // r1@9
  int v15; // r3@10
  int v16; // r2@10
  Sensing *v20; // r0@12
  Level *v25; // r0@26
  char *v26; // r0@26
  unsigned int v27; // r0@26
  unsigned int v28; // r0@26
  int v29; // r0@27
  int v30; // r0@31
  int v31; // r2@31
  int v32; // r0@33
  int v33; // r5@35
  const Entity *v34; // r1@35
  int (__fastcall *v35)(int, int, int); // r7@35
  int v36; // r0@36
  unsigned int v37; // r2@37
  unsigned int v38; // r3@37
  int v39; // r0@38
  int v40; // r1@38
  int v41; // r6@41
  int v42; // r0@41
  int v46; // r0@45
  int v47; // r5@45
  int v48; // r0@45
  bool v49; // zf@45
  Level *v50; // r0@50
  int v51; // r0@50
  AttributeInstance *v52; // r5@51
  int v53; // r0@51
  int v55; // r0@51
  Mob *v56; // r5@51
  int v57; // r0@52
  unsigned int v58; // r2@53
  unsigned int v59; // r3@53
  int v60; // r0@54
  int v61; // r1@54
  int v62; // r0@58
  unsigned int v63; // r2@59
  unsigned int v64; // r3@59
  int v65; // r0@60
  int v66; // r1@60
  int v67; // r0@65
  unsigned int v68; // r2@66
  unsigned int v69; // r3@66
  int v70; // r0@67
  int v71; // r1@67
  Mob *v72; // r5@70
  MobEffect *v73; // r0@71
  int v74; // r0@72
  void *v76; // r0@73
  AngryComponent *v77; // r0@75
  unsigned int *v78; // r2@77
  signed int v79; // r1@79
  char v80; // [sp+4h] [bp-8Ch]@72
  int v81; // [sp+14h] [bp-7Ch]@70
  char v82; // [sp+18h] [bp-78h]@50
  void **v83; // [sp+20h] [bp-70h]@50
  signed int v84; // [sp+24h] [bp-6Ch]@50
  signed int v85; // [sp+28h] [bp-68h]@50
  char v86; // [sp+2Ch] [bp-64h]@50
  __int64 v87; // [sp+30h] [bp-60h]@50
  char v88; // [sp+38h] [bp-58h]@50
  int v89; // [sp+3Ch] [bp-54h]@50
  float v90; // [sp+40h] [bp-50h]@22
  __int64 v91; // [sp+44h] [bp-4Ch]@22
  int v92; // [sp+4Ch] [bp-44h]@10
  int v93; // [sp+50h] [bp-40h]@10
  int v94; // [sp+54h] [bp-3Ch]@10
  int v95; // [sp+58h] [bp-38h]@9
  int v96; // [sp+5Ch] [bp-34h]@9
  int v97; // [sp+60h] [bp-30h]@9

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
  v8 = *((_DWORD *)_R4 + 5);
  if ( v8 )
    v9 = j_Entity::getRide(*((Entity **)_R4 + 5));
    v10 = (LookControl *)j_Mob::getLookControl(*((Mob **)_R4 + 2));
    j_LookControl::setLookAt(v10, (Entity *)v8, 30.0, 30.0);
    v11 = (Entity *)*((_DWORD *)_R4 + 2);
    if ( v9 )
      v12 = *(_DWORD *)(v9 + 268);
      v13 = *(_DWORD *)(v9 + 80);
      v95 = *(_DWORD *)(v9 + 72);
      v96 = v12;
      v14 = &v95;
      v97 = v13;
    else
      v15 = *(_DWORD *)(v8 + 268);
      v16 = *(_DWORD *)(v8 + 80);
      v92 = *(_DWORD *)(v8 + 72);
      v93 = v15;
      v14 = &v92;
      v94 = v16;
    _R0 = j_Entity::distanceToSqr(v11, (const Vec3 *)v14);
    __asm { VMOV            S16, R0 }
    _R6 = (*(int (__fastcall **)(MeleeAttackGoal *))(*(_DWORD *)_R4 + 44))(_R4);
    --*((_DWORD *)_R4 + 17);
    if ( !*((_BYTE *)_R4 + 48) )
      v20 = (Sensing *)j_Mob::getSensing(*((Mob **)_R4 + 2));
      if ( j_Sensing::canSee(v20, (const Entity *)v8) != 1 )
        goto LABEL_33;
    if ( j_Entity::isRiding(*((Entity **)_R4 + 2)) == 1 && *((_DWORD *)_R4 + 17) > 0 )
      goto LABEL_33;
    __asm
      VLDR            S0, [R4,#0x48]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
      __asm
        VLDR            S2, [R4,#0x4C]
        VCMPE.F32       S2, #0.0
        VMRS            APSR_nzcv, FPSCR
        VMOV            R0, S2
      if ( _ZF )
        _ZF = (*((_DWORD *)_R4 + 20) & 0x7FFFFFFF) == 0;
        goto LABEL_26;
      LODWORD(_R0) = *((_DWORD *)_R4 + 19);
    HIDWORD(_R0) = *((_DWORD *)_R4 + 20);
    __asm { VSTR            S0, [SP,#0x90+var_50] }
    v91 = _R0;
    _R0 = j_Entity::distanceToSqr((Entity *)v8, (const Vec3 *)&v90);
      VMOV.F32        S0, #1.0
      VMOV            S2, R0
      VCMPE.F32       S2, S0
    if ( _NF ^ _VF )
      _R0 = j_Random::_genRandInt32((Random *)(*((_DWORD *)_R4 + 2) + 552));
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VLDR            S2, =0.05
        VCMPE.F32       S0, S2
      if ( !(_NF ^ _VF) )
LABEL_33:
        __asm { VMOV            S18, R6 }
        v32 = *((_DWORD *)_R4 + 10) - 1;
        if ( v32 < 0 )
          v32 = 0;
        *((_DWORD *)_R4 + 10) = v32;
        v33 = *((_DWORD *)_R4 + 2);
        v34 = (const Entity *)*((_DWORD *)_R4 + 2);
        v35 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v33 + 1112);
        if ( !*((_BYTE *)_R4 + 36) )
        {
          v36 = *((_DWORD *)_R4 + 8);
          if ( v36 )
          {
            v37 = *((_DWORD *)_R4 + 6);
            v38 = *((_DWORD *)_R4 + 7);
            if ( (v37 & v38) != -1 )
            {
              v39 = j_Level::fetchEntity(v36, v37 & v38, v37, v38, 0);
              *((_DWORD *)_R4 + 5) = v39;
              if ( !v39 )
                *((_DWORD *)_R4 + 5) = j_Level::fetchEntity(
                                         *((_DWORD *)_R4 + 8),
                                         v40,
                                         *((_QWORD *)_R4 + 3),
                                         *((_QWORD *)_R4 + 3) >> 32,
                                         0);
            }
          }
          *((_BYTE *)_R4 + 36) = 1;
          v34 = (const Entity *)*((_DWORD *)_R4 + 2);
        }
        v41 = *((_DWORD *)_R4 + 5);
        v42 = j_Entity::distanceTo(*((Entity **)_R4 + 5), v34);
        result = v35(v33, v41, v42);
        __asm
          VCMPE.F32       S16, S18
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          result = *((_DWORD *)_R4 + 10);
          _VF = 0;
          _ZF = result == 0;
          _NF = result < 0;
          *((_DWORD *)_R4 + 10) = 20;
          v46 = (*(int (**)(void))(**((_DWORD **)_R4 + 2) + 908))();
          v47 = v46;
          v48 = *(_BYTE *)(v46 + 15);
          v49 = v48 == 0;
          if ( v48 )
            v49 = *(_DWORD *)v47 == 0;
          if ( !v49 && !j_ItemInstance::isNull((ItemInstance *)v47) && *(_BYTE *)(v47 + 14) )
            (*(void (**)(void))(**((_DWORD **)_R4 + 2) + 928))();
            j_Entity::getRuntimeID((Entity *)&v82, *((_DWORD *)_R4 + 2));
            v84 = 2;
            v85 = 1;
            v86 = 0;
            v83 = &off_26DA5D0;
            v87 = *(_QWORD *)&v82;
            v88 = 4;
            v89 = 0;
            v50 = (Level *)j_Entity::getLevel(*((Entity **)_R4 + 2));
            v51 = j_Level::getPacketSender(v50);
            (*(void (**)(void))(*(_DWORD *)v51 + 8))();
          v52 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)_R4 + 2) + 1000))();
          v53 = *((_DWORD *)_R4 + 2);
          _R6 = *(_DWORD *)(*(_DWORD *)(v53 + 48) + 88);
          v55 = j_FloatRange::getValue((FloatRange *)(_R6 + 4), (Random *)(v53 + 552));
          j_AttributeInstance::setDefaultValue(v52, *(float *)&v55, 2);
          v56 = (Mob *)*((_DWORD *)_R4 + 2);
          if ( !*((_BYTE *)_R4 + 36) )
            v57 = *((_DWORD *)_R4 + 8);
            if ( v57 )
              v58 = *((_DWORD *)_R4 + 6);
              v59 = *((_DWORD *)_R4 + 7);
              if ( (v58 & v59) != -1 )
              {
                v60 = j_Level::fetchEntity(v57, v58 & v59, v58, v59, 0);
                *((_DWORD *)_R4 + 5) = v60;
                if ( !v60 )
                  *((_DWORD *)_R4 + 5) = j_Level::fetchEntity(
                                           *((_DWORD *)_R4 + 8),
                                           v61,
                                           *((_QWORD *)_R4 + 3),
                                           *((_QWORD *)_R4 + 3) >> 32,
                                           0);
              }
            *((_BYTE *)_R4 + 36) = 1;
          j_Mob::doHurtTarget(v56, *((Entity **)_R4 + 5));
            v62 = *((_DWORD *)_R4 + 8);
            if ( v62 )
              v63 = *((_DWORD *)_R4 + 6);
              v64 = *((_DWORD *)_R4 + 7);
              if ( (v63 & v64) != -1 )
                v65 = j_Level::fetchEntity(v62, v63 & v64, v63, v64, 0);
                *((_DWORD *)_R4 + 5) = v65;
                if ( !v65 )
                                           v66,
          if ( j_Entity::hasCategory(*((_DWORD *)_R4 + 5), 2) == 1 )
            if ( !*((_BYTE *)_R4 + 36) )
              v67 = *((_DWORD *)_R4 + 8);
              if ( v67 )
                v68 = *((_DWORD *)_R4 + 6);
                v69 = *((_DWORD *)_R4 + 7);
                if ( (v68 & v69) != -1 )
                {
                  v70 = j_Level::fetchEntity(v67, v68 & v69, v68, v69, 0);
                  *((_DWORD *)_R4 + 5) = v70;
                  if ( !v70 )
                    *((_DWORD *)_R4 + 5) = j_Level::fetchEntity(
                                             *((_DWORD *)_R4 + 8),
                                             v71,
                                             *((_QWORD *)_R4 + 3),
                                             *((_QWORD *)_R4 + 3) >> 32,
                                             0);
                }
              *((_BYTE *)_R4 + 36) = 1;
            v72 = (Mob *)*((_DWORD *)_R4 + 5);
            sub_21E8AF4(&v81, (int *)(_R6 + 12));
            if ( *(_DWORD *)(v81 - 12) )
              v73 = (MobEffect *)j_MobEffect::getByName((int **)&v81);
              if ( v73 )
                v74 = j_MobEffect::getId(v73);
                __asm
                  VMOV.F32        S0, #20.0
                  VLDR            S2, [R6,#0x10]
                  VMUL.F32        S0, S2, S0
                  VCVTR.S32.F32   S0, S0
                  VMOV            R2, S0
                j_MobEffectInstance::MobEffectInstance((int)&v80, v74, _R2);
                j_Mob::addEffect(v72, (const MobEffectInstance *)&v80);
            v76 = (void *)(v81 - 12);
            if ( (int *)(v81 - 12) != &dword_28898C0 )
              v78 = (unsigned int *)(v81 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v79 = __ldrex(v78);
                while ( __strex(v79 - 1, v78) );
              else
                v79 = (*v78)--;
              if ( v79 <= 0 )
                j_j_j_j__ZdlPv_9(v76);
          result = j_Entity::getAngryComponent(*((Entity **)_R4 + 2));
          if ( result )
            v77 = (AngryComponent *)j_Entity::getAngryComponent(*((Entity **)_R4 + 2));
            result = j_AngryComponent::restartTimer(v77);
        return result;
LABEL_26:
    *((_DWORD *)_R4 + 18) = *(_DWORD *)(v8 + 72);
    *((_DWORD *)_R4 + 19) = *(_DWORD *)(v8 + 268);
    *((_DWORD *)_R4 + 20) = *(_DWORD *)(v8 + 80);
    v25 = (Level *)j_Entity::getLevel(*((Entity **)_R4 + 2));
    v26 = j_Level::getRandom(v25);
    v27 = j_Random::_genRandInt32((Random *)v26);
      VLDR            S0, =1024.0
      VCMPE.F32       S16, S0
    v28 = v27 % 7;
    *((_DWORD *)_R4 + 17) = v28 + 4;
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        VLDR            S0, =256.0
        VCMPE.F32       S16, S0
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        goto LABEL_31;
      v29 = v28 + 9;
      v29 = v28 + 14;
    *((_DWORD *)_R4 + 17) = v29;
LABEL_31:
    v30 = j_Mob::getNavigation(*((Mob **)_R4 + 2));
    v31 = *((_DWORD *)_R4 + 11);
    if ( !(*(int (**)(void))(*(_DWORD *)v30 + 20))() )
      *((_DWORD *)_R4 + 17) += 15;
    goto LABEL_33;
  return result;
}


void __fastcall MeleeAttackGoal::~MeleeAttackGoal(MeleeAttackGoal *this)
{
  MeleeAttackGoal::~MeleeAttackGoal(this);
}


signed int __fastcall MeleeAttackGoal::canUse(MeleeAttackGoal *this)
{
  MeleeAttackGoal *v1; // r4@1
  int v2; // r0@2
  int v3; // r0@3
  int v4; // r5@3
  int v5; // r1@5
  int v6; // r0@9
  signed int v7; // r6@10
  int v8; // r0@15
  int v9; // r6@19
  void (__fastcall *v10)(Path **, int, _DWORD); // r7@19
  int v11; // r0@20
  unsigned int v12; // r2@21
  unsigned int v13; // r3@21
  int v14; // r0@22
  int v15; // r1@22
  Path *v16; // r1@25
  Path *v17; // r0@25
  Path *v18; // r0@26
  Path *v19; // r0@27
  Path *v21; // [sp+8h] [bp-20h]@25

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2)) )
  {
    v2 = *((_DWORD *)v1 + 2);
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 48) + 88) )
    {
      v3 = j_Entity::getTarget((Entity *)v2);
      v4 = v3;
      if ( v3 )
      {
        if ( (*(int (**)(void))(*(_DWORD *)v3 + 316))() == 1 )
        {
          v5 = *((_DWORD *)v1 + 14);
          if ( v5 && j_Entity::hasCategory(v4, v5) != 1 )
          {
            v7 = 0;
          }
          else
            if ( *((_DWORD *)v1 + 5) != v4 )
            {
              if ( *(_DWORD *)(v4 + 3092) )
              {
                *((_QWORD *)v1 + 3) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v4);
                v6 = *(_DWORD *)(v4 + 3092);
                *((_DWORD *)v1 + 8) = v6;
                j_Level::registerTemporaryPointer(v6, (unsigned int)v1 + 16);
                *((_BYTE *)v1 + 36) = 0;
              }
              else
                *((_DWORD *)v1 + 5) = 0;
                *((_DWORD *)v1 + 6) = -1;
                *((_DWORD *)v1 + 7) = -1;
                v8 = *((_DWORD *)v1 + 8);
                if ( v8 )
                  j_Level::unregisterTemporaryPointer(v8, (unsigned int)v1 + 16);
                *((_DWORD *)v1 + 8) = 0;
            }
            if ( j_Entity::isRiding(*((Entity **)v1 + 2)) )
              return 1;
            v9 = j_Mob::getNavigation(*((Mob **)v1 + 2));
            v10 = *(void (__fastcall **)(Path **, int, _DWORD))(*(_DWORD *)v9 + 16);
            if ( !*((_BYTE *)v1 + 36) )
              v11 = *((_DWORD *)v1 + 8);
              if ( v11 )
                v12 = *((_DWORD *)v1 + 6);
                v13 = *((_DWORD *)v1 + 7);
                if ( (v12 & v13) != -1 )
                {
                  v14 = j_Level::fetchEntity(v11, v12 & v13, v12, v13, 0);
                  *((_DWORD *)v1 + 5) = v14;
                  if ( !v14 )
                    *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                            *((_DWORD *)v1 + 8),
                                            v15,
                                            *((_QWORD *)v1 + 3),
                                            *((_QWORD *)v1 + 3) >> 32,
                                            0);
                }
              *((_BYTE *)v1 + 36) = 1;
            v10(&v21, v9, *((_DWORD *)v1 + 5));
            v16 = v21;
            v21 = 0;
            v17 = (Path *)*((_DWORD *)v1 + 13);
            *((_DWORD *)v1 + 13) = v16;
            if ( v17 )
              v18 = j_Path::~Path(v17);
              j_operator delete((void *)v18);
              if ( v21 )
                v19 = j_Path::~Path(v21);
                j_operator delete((void *)v19);
            if ( *((_DWORD *)v1 + 13) )
              v7 = 1;
              if ( j_Entity::hasCategory(v4, 1) == 1 )
                j_Entity::setPersistent(*((Entity **)v1 + 2));
                return 1;
        }
        else
          v7 = 0;
      }
      else
        v7 = 0;
    }
    else
      v7 = 0;
  }
  else
    v7 = 0;
  return v7;
}


int __fastcall MeleeAttackGoal::MeleeAttackGoal(int a1, int a2, float a3, char a4, int a5, int a6, int a7)
{
  char v7; // r6@1
  float v8; // r7@1
  int v9; // r5@1
  int v10; // r4@1
  int v15; // r1@1

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  j_Goal::Goal((Goal *)a1);
  __asm { VLDR            S0, [SP,#0x18+arg_8] }
  *(_DWORD *)v10 = &off_271A760;
  *(_DWORD *)(v10 + 8) = v9;
  *(_DWORD *)(v10 + 16) = &off_271A67C;
  *(_DWORD *)(v10 + 20) = 0;
  *(_DWORD *)(v10 + 28) = -1;
  *(_DWORD *)(v10 + 24) = -1;
  *(_DWORD *)(v10 + 32) = 0;
  *(_BYTE *)(v10 + 36) = 0;
  *(_DWORD *)(v10 + 40) = 20;
  *(float *)(v10 + 44) = v8;
  v15 = v10 + 52;
  *(_BYTE *)(v10 + 48) = v7;
  *(_DWORD *)v15 = 0;
  *(_DWORD *)(v15 + 4) = a5;
  *(_DWORD *)(v15 + 8) = a6;
  __asm { VSTR            S0, [R4,#0x40] }
  *(_DWORD *)(v10 + 68) = 0;
  *(_DWORD *)(v10 + 72) = 0;
  *(_DWORD *)(v10 + 76) = 0;
  *(_DWORD *)(v10 + 80) = 0;
  j_Goal::setRequiredControlFlags((Goal *)v10, 3);
  return v10;
}
