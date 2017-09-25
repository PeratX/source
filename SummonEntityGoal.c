

int __fastcall SummonEntityGoal::_getCurrentSpell(SummonEntityGoal *this)
{
  int v1; // r1@1
  __int64 v2; // kr00_8@2
  int result; // r0@3

  v1 = *((_DWORD *)this + 8);
  if ( v1 < 0 || (v2 = *(_QWORD *)((char *)this + 12), v1 >= 954437177 * ((HIDWORD(v2) - (signed int)v2) >> 3)) )
    result = 0;
  else
    result = v2 + 72 * v1;
  return result;
}


unsigned __int64 __fastcall SummonEntityGoal::stop(SummonEntityGoal *this)
{
  SummonEntityGoal *v1; // r4@1
  Level *v2; // r0@1
  __int64 v3; // r0@1
  __int64 v4; // kr08_8@1
  unsigned __int64 result; // r0@1

  v1 = this;
  j_Goal::setRequiredControlFlags(this, 11);
  j_Entity::setStatusFlag(*((_DWORD *)v1 + 2), 40, 0);
  v2 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
  v4 = *(_QWORD *)j_Level::getCurrentTick(v2);
  LODWORD(v3) = v4;
  HIDWORD(v3) = *(_DWORD *)(*((_DWORD *)v1 + 3) + 72 * *((_DWORD *)v1 + 8) + 8) >> 31;
  result = v3 + __PAIR__(HIDWORD(v4), *(_DWORD *)(*((_DWORD *)v1 + 3) + 72 * *((_DWORD *)v1 + 8) + 8));
  *((_QWORD *)v1 + 6) = result;
  return result;
}


void __fastcall SummonEntityGoal::~SummonEntityGoal(SummonEntityGoal *this)
{
  SummonEntityGoal::~SummonEntityGoal(this);
}


int __fastcall SummonEntityGoal::~SummonEntityGoal(SummonEntityGoal *this)
{
  SummonEntityGoal *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271AEF0;
  j_std::_Destroy<SummonSpellData *>(
    (FilterGroup *)*(_QWORD *)((char *)this + 12),
    (FilterGroup *)(*(_QWORD *)((char *)this + 12) >> 32));
  v2 = (void *)*((_DWORD *)v1 + 3);
  if ( v2 )
    j_operator delete(v2);
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


void __fastcall SummonEntityGoal::~SummonEntityGoal(SummonEntityGoal *this)
{
  SummonEntityGoal *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271AEF0;
  j_std::_Destroy<SummonSpellData *>(
    (FilterGroup *)*(_QWORD *)((char *)this + 12),
    (FilterGroup *)(*(_QWORD *)((char *)this + 12) >> 32));
  v2 = (void *)*((_DWORD *)v1 + 3);
  if ( v2 )
    j_operator delete(v2);
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall SummonEntityGoal::start(SummonEntityGoal *this)
{
  SummonEntityGoal *v1; // r4@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r1@2 OVERLAPPED
  int v8; // r2@2
  Level *v9; // r8@6
  int v10; // r9@6
  int v11; // r7@6
  int v12; // r5@6
  int v13; // r0@6
  int v18; // r5@7
  int v19; // r0@7
  unsigned int v20; // r1@7
  int v21; // r2@8
  unsigned int v22; // r1@9
  unsigned int v23; // r0@9
  int v24; // r2@14
  Level *v25; // r8@17
  int v26; // r9@17
  int v27; // r7@17
  int v28; // r5@17
  int v29; // r0@17
  int v30; // r0@19
  int result; // r0@19

  v1 = this;
  _R6 = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 6) = -1;
  v3 = j_Entity::getTarget(*((Entity **)this + 2));
  v4 = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  *((_DWORD *)v1 + 14) = *(_DWORD *)v4;
  *((_DWORD *)v1 + 15) = *(_DWORD *)(v4 + 4);
  *((_DWORD *)v1 + 16) = *(_DWORD *)(v4 + 8);
  v5 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
  *((_DWORD *)v1 + 17) = *(_DWORD *)v5;
  *((_DWORD *)v1 + 18) = *(_DWORD *)(v5 + 4);
  *((_DWORD *)v1 + 19) = *(_DWORD *)(v5 + 8);
  v6 = *((_DWORD *)v1 + 8);
  if ( v6 >= 0 )
  {
    *(_QWORD *)&v7 = *(_QWORD *)((char *)v1 + 12);
    if ( v6 >= 954437177 * ((v8 - v7) >> 3) )
      _R6 = 0;
    else
      _R6 = v7 + 72 * v6;
  }
  if ( *(_BYTE *)(_R6 + 68) != 164 )
    v9 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
    v10 = j_Entity::getRegion(*((Entity **)v1 + 2));
    v11 = *(_BYTE *)(_R6 + 68);
    v12 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
    v13 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 488))();
    j_Level::broadcastSoundEvent(v9, v10, v11, v12, -1, v13, 0, 0);
  __asm
    VLDR            S0, [R6,#0x30]
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#0x1C]
  v18 = *((_DWORD *)v1 + 2);
  v19 = j_SynchedEntityData::_get((SynchedEntityData *)(v18 + 176), 77);
  v20 = *(_DWORD *)(v19 + 4);
  if ( (unsigned __int8)v20 == 2 )
    v21 = *(_DWORD *)(_R6 + 52);
    if ( *(_DWORD *)(v19 + 12) != v21 )
    {
      *(_DWORD *)(v19 + 12) = v21;
      *(_BYTE *)(v19 + 8) = 1;
      v22 = v20 >> 16;
      v23 = *(_WORD *)(v18 + 188);
      if ( v23 >= v22 )
        LOWORD(v23) = v22;
      *(_WORD *)(v18 + 188) = v23;
      if ( *(_WORD *)(v18 + 190) > v22 )
        LOWORD(v22) = *(_WORD *)(v18 + 190);
      *(_WORD *)(v18 + 190) = v22;
    }
  v24 = 0;
  if ( *((_DWORD *)v1 + 7) > 0 )
    v24 = 1;
  j_Entity::setStatusFlag(*((_DWORD *)v1 + 2), 40, v24);
  if ( *(_BYTE *)(*(_DWORD *)(_R6 + 56) + 56 * *((_DWORD *)v1 + 9) + 52) != 164 )
    v25 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
    v26 = j_Entity::getRegion(*((Entity **)v1 + 2));
    v27 = *(_BYTE *)(*(_DWORD *)(_R6 + 56) + 56 * *((_DWORD *)v1 + 9) + 52);
    v28 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
    v29 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 488))();
    j_Level::broadcastSoundEvent(v25, v26, v27, v28, -1, v29, 0, 0);
  if ( *((_DWORD *)v1 + 7) < 1 )
    result = j_j_j__ZN4Goal23setRequiredControlFlagsEi_0(v1, 8);
  else
    j_Goal::setRequiredControlFlags(v1, 11);
    v30 = j_Mob::getNavigation(*((Mob **)v1 + 2));
    result = (*(int (**)(void))(*(_DWORD *)v30 + 40))();
  return result;
}


int __fastcall SummonEntityGoal::tick(SummonEntityGoal *this)
{
  SummonEntityGoal *v1; // r8@1
  int v3; // r2@2
  int v4; // r6@3
  LookControl *v5; // r0@4
  int v6; // r0@4
  int v7; // r2@6
  int v17; // r0@10
  int v19; // r1@12
  SummonEntityGoal *v20; // r7@14
  SummonEntityGoal *v21; // r6@16
  float v28; // r1@23
  int v30; // r9@23
  void **v31; // r0@23
  void *v35; // r0@23
  void *v36; // r0@24
  void *v37; // r0@25
  int v38; // r6@26
  int v39; // r2@26
  signed int v40; // r1@28
  _DWORD *v43; // r11@33
  int v44; // r5@33
  int v45; // r9@33
  void **v47; // r0@33
  void *v52; // r0@33
  void *v53; // r0@34
  int v54; // r2@39
  signed int v55; // r1@41
  int v56; // r6@43
  int v57; // r2@43
  signed int v58; // r1@45
  int v59; // r2@47
  signed int v60; // r1@49
  int v61; // r6@51
  int v62; // r2@51
  signed int v63; // r1@53
  Level *v64; // r4@77
  int v65; // r9@77
  int v66; // r7@77
  int v67; // r5@77
  int v68; // r0@77
  float v70; // [sp+0h] [bp-E0h]@0
  int v71; // [sp+4h] [bp-DCh]@0
  int v72; // [sp+20h] [bp-C0h]@9
  int v73; // [sp+24h] [bp-BCh]@9
  int *v74; // [sp+28h] [bp-B8h]@9
  int *v75; // [sp+2Ch] [bp-B4h]@9
  int v76; // [sp+30h] [bp-B0h]@8
  _BYTE *v77; // [sp+30h] [bp-B0h]@76
  _DWORD *v78; // [sp+34h] [bp-ACh]@9
  _DWORD *v79; // [sp+38h] [bp-A8h]@9
  _DWORD *v80; // [sp+4Ch] [bp-94h]@7
  int *v81; // [sp+50h] [bp-90h]@9
  Entity *v82; // [sp+54h] [bp-8Ch]@4
  int v83; // [sp+58h] [bp-88h]@33
  int v84; // [sp+5Ch] [bp-84h]@34
  int v85; // [sp+60h] [bp-80h]@33
  int v86; // [sp+64h] [bp-7Ch]@23
  int v87; // [sp+68h] [bp-78h]@24
  int v88; // [sp+6Ch] [bp-74h]@23
  int v89; // [sp+70h] [bp-70h]@12

  v1 = this;
  LODWORD(_R0) = *((_DWORD *)this + 8);
  if ( (signed int)_R0 < 0 )
    return _R0;
  *(__int64 *)((char *)&_R0 + 4) = *(_QWORD *)((char *)v1 + 12);
  if ( (signed int)_R0 >= 954437177 * ((v3 - HIDWORD(_R0)) >> 3) )
  LODWORD(_R0) = 9 * _R0;
  v4 = HIDWORD(_R0) + 8 * _R0;
  if ( !v4 )
  v82 = (Entity *)j_Entity::getTarget(*((Entity **)v1 + 2));
  v5 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 2));
  j_LookControl::setLookAt(v5, v82, 30.0, 30.0);
  v6 = *((_DWORD *)v1 + 7) - 1;
  *((_DWORD *)v1 + 7) = v6;
  if ( !v6 )
  {
    j_Goal::setRequiredControlFlags(v1, 8);
    j_Entity::setStatusFlag(*((_DWORD *)v1 + 2), 40, 0);
  }
  _R0 = *(_QWORD *)(v4 + 56);
  v7 = -1227133513 * ((HIDWORD(_R0) - (signed int)_R0) >> 3);
  HIDWORD(_R0) = *((_DWORD *)v1 + 9);
  if ( SHIDWORD(_R0) >= v7 )
  HIDWORD(_R2) = _R0 + 56 * HIDWORD(_R0);
  LODWORD(_R2) = *((_DWORD *)v1 + 6) + 1;
  *((_DWORD *)v1 + 6) = _R2;
  v80 = (_DWORD *)(_R0 + 56 * HIDWORD(_R0) + 12);
  if ( (signed int)_R2 >= *v80 )
    v74 = (int *)(HIDWORD(_R2) + 44);
    __asm { VMOV.F32        S18, #1.0 }
    HIDWORD(_R0) = &mce::Math::PI;
    _R9 = (_DWORD *)(HIDWORD(_R2) + 48);
    __asm { VLDR            S16, [R1] }
    LODWORD(_R0) = *((_DWORD *)v1 + 10);
    v73 = HIDWORD(_R2) + 8;
    __asm { VLDR            S20, =0.0001 }
    v78 = (_DWORD *)(HIDWORD(_R2) + 16);
    v81 = (int *)(HIDWORD(_R2) + 28);
    LODWORD(_R2) = HIDWORD(_R2) + 4;
    v75 = &dword_28898C0;
    v79 = (_DWORD *)(HIDWORD(_R2) + 4);
    v76 = HIDWORD(_R2);
    v72 = HIDWORD(_R2) + 48;
    while ( 1 )
    {
      if ( (signed int)_R0 >= *_R9 )
        goto LABEL_75;
      _R0 = *((_DWORD *)v1 + 2);
      _R1 = v82;
      __asm
      {
        VLDR            S4, [R0,#0x48]
        VLDR            S0, [R1,#0x48]
        VLDR            S2, [R1,#0x50]
        VLDR            S6, [R0,#0x50]
        VSUB.F32        S0, S0, S4
        VLDR            S26, [R1,#0x4C]
        VSUB.F32        S2, S2, S6
        VLDR            S22, [R0,#0x4C]
        VMOV            R1, S0
        VMOV            R0, S2
      }
      v17 = j_mce::Math::atan2(_R0, _R2);
        VCMPE.F32       S26, S22
        VMRS            APSR_nzcv, FPSCR
        VMOV.F32        S24, S22
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S24, S26 }
      v89 = v17;
      _R0 = j_mce::Radian::asFloat((mce::Radian *)&v89);
      v19 = *v81;
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S22, S26 }
      v20 = (SummonEntityGoal *)((char *)v1 + 76);
      LODWORD(_R2) = (char *)v1 + 64;
      if ( *v79 == 1 )
        LODWORD(_R2) = (char *)v1 + 76;
        v20 = (SummonEntityGoal *)((char *)v1 + 64);
      v21 = (SummonEntityGoal *)((char *)v1 + 68);
        v21 = (SummonEntityGoal *)((char *)v1 + 56);
      HIDWORD(_R2) = (char *)v1 + 56;
        HIDWORD(_R2) = (char *)v1 + 68;
      if ( v19 != 1 )
        __asm { VADD.F32        S24, S24, S18 }
        _R10 = *(_DWORD *)v21;
        _R11 = *(_DWORD *)v20;
        if ( *(_DWORD *)v76 == 1 )
        {
          __asm
          {
            VMOV            S26, R10
            VLDR            S0, [R3]
            VLDR            S2, [R2]
            VMOV            S28, R11
            VSUB.F32        S0, S0, S26
            VSUB.F32        S2, S2, S28
            VMUL.F32        S4, S0, S0
            VMUL.F32        S6, S2, S2
            VADD.F32        S4, S6, S4
            VSQRT.F32       S4, S4
            VCMPE.F32       S4, S20
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            _R6 = Vec3::ZERO;
            _R7 = dword_2822498;
          else
            __asm
            {
              VDIV.F32        S2, S2, S4
              VDIV.F32        S0, S0, S4
              VMOV            R7, S2
              VMOV            R6, S0
            }
          __asm { VLDR            S0, [R9] }
          v43 = _R9;
          __asm { VCVT.F32.S32    S30, S0 }
          v44 = *((_DWORD *)v1 + 10);
          v45 = *v74;
          _R0 = v73;
          __asm { VLDR            S17, [R0] }
          v47 = j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v83, v19);
          __asm { VDIV.F32        S0, S17, S30 }
          _R1 = v44 + 1;
            VMOV            S4, R6
            VMOV            S6, R1
            VMUL.F32        S4, S0, S4
            VCVT.F32.S32    S6, S6
            VMOV            S2, R7
            VMOV            R3, S22
            VMUL.F32        S0, S0, S2
            VMUL.F32        S2, S4, S6
            VMUL.F32        S0, S0, S6
            VADD.F32        S2, S2, S26
            VADD.F32        S0, S0, S28
            VMOV            R1, S2
            VMOV            R2, S0
            VSTR            S24, [SP,#0xE0+var_E0]
          j_SummonEntityGoal::_createSpellEntity((int)v1, _R1, _R2, _R3, v70, v71, v45, (const void **)v47);
          LODWORD(_R2) = v75;
          v52 = (void *)(v85 - 12);
          if ( (int *)(v85 - 12) != v75 )
            v59 = v85 - 4;
            if ( &pthread_create )
              __dmb();
              do
              {
                v60 = __ldrex((unsigned int *)_R2);
                HIDWORD(_R2) = v60 - 1;
              }
              while ( __strex(v60 - 1, (unsigned int *)_R2) );
            else
              v60 = *(_DWORD *)_R2;
              HIDWORD(_R2) = *(_DWORD *)_R2 - 1;
              *(_DWORD *)_R2 = HIDWORD(_R2);
            LODWORD(_R2) = v75;
            if ( v60 <= 0 )
              j_j_j_j__ZdlPv_9(v52);
              LODWORD(_R2) = v75;
          _R9 = v43;
          v53 = (void *)(v84 - 12);
          if ( v84 - 12 != (_DWORD)_R2 )
            v61 = _R2;
            v62 = v84 - 4;
                v63 = __ldrex((unsigned int *)_R2);
                HIDWORD(_R2) = v63 - 1;
              while ( __strex(v63 - 1, (unsigned int *)_R2) );
              v63 = *(_DWORD *)_R2;
            LODWORD(_R2) = v61;
            if ( v63 <= 0 )
              j_j_j_j__ZdlPv_9(v53);
              LODWORD(_R2) = v61;
          v37 = (void *)(v83 - 12);
          if ( v83 - 12 != (_DWORD)_R2 )
            v38 = _R2;
            v39 = v83 - 4;
                v40 = __ldrex((unsigned int *)_R2);
                HIDWORD(_R2) = v40 - 1;
              while ( __strex(v40 - 1, (unsigned int *)_R2) );
              goto LABEL_60;
            goto LABEL_59;
LABEL_36:
          v75 = (int *)_R2;
          goto LABEL_37;
        }
        if ( !*(_DWORD *)v76 )
          __asm { VLDR            S0, [R0] }
          _R0 = 2 * *((_DWORD *)v1 + 10);
            VMOV            S2, R0
            VCVT.F32.S32    S2, S2
            VLDR            S4, [R9]
            VCVT.F32.S32    S4, S4
            VMUL.F32        S2, S2, S16
            VDIV.F32        S2, S2, S4
            VADD.F32        S0, S2, S0
            VMOV            R7, S0
          _R6 = j_mce::Math::cos(_R7, *(float *)&v19);
          _R4 = v73;
          __asm { VLDR            S26, [R4] }
          _R7 = j_mce::Math::sin(_R7, v28);
          __asm { VLDR            S28, [R4] }
          v30 = *v74;
          v31 = j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v86, *v81);
            VMOV            S0, R6
            VMOV            S4, R10
            VMUL.F32        S0, S26, S0
            VMOV            S6, R11
            VMUL.F32        S2, S28, S2
            VADD.F32        S0, S0, S4
            VADD.F32        S2, S2, S6
            VMOV            R1, S0
            VMOV            R2, S2
          j_SummonEntityGoal::_createSpellEntity((int)v1, _R1, _R2, _R3, v70, v71, v30, (const void **)v31);
          v35 = (void *)(v88 - 12);
          if ( (int *)(v88 - 12) != v75 )
            v54 = v88 - 4;
                v55 = __ldrex((unsigned int *)_R2);
                HIDWORD(_R2) = v55 - 1;
              while ( __strex(v55 - 1, (unsigned int *)_R2) );
              v55 = *(_DWORD *)_R2;
            if ( v55 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          _R9 = (_DWORD *)v72;
          v36 = (void *)(v87 - 12);
          if ( v87 - 12 != (_DWORD)_R2 )
            v56 = _R2;
            v57 = v87 - 4;
                v58 = __ldrex((unsigned int *)_R2);
                HIDWORD(_R2) = v58 - 1;
              while ( __strex(v58 - 1, (unsigned int *)_R2) );
              v58 = *(_DWORD *)_R2;
            LODWORD(_R2) = v56;
            if ( v58 <= 0 )
              j_j_j_j__ZdlPv_9(v36);
              LODWORD(_R2) = v56;
          v37 = (void *)(v86 - 12);
          if ( v86 - 12 != (_DWORD)_R2 )
            v39 = v86 - 4;
LABEL_59:
            v40 = *(_DWORD *)_R2;
            HIDWORD(_R2) = *(_DWORD *)_R2 - 1;
            *(_DWORD *)_R2 = HIDWORD(_R2);
LABEL_60:
            LODWORD(_R2) = v38;
            if ( v40 <= 0 )
              j_j_j_j__ZdlPv_9(v37);
              LODWORD(_R2) = v38;
          goto LABEL_36;
LABEL_37:
      HIDWORD(_R0) = *((_DWORD *)v1 + 6) - *v78;
      *((_DWORD *)v1 + 6) = HIDWORD(_R0);
      LODWORD(_R0) = *((_DWORD *)v1 + 10) + 1;
      *((_DWORD *)v1 + 10) = _R0;
      LODWORD(_R2) = *v80;
      if ( SHIDWORD(_R0) < *v80 )
    }
  LODWORD(_R0) = *((_DWORD *)v1 + 10);
  _R9 = (_DWORD *)(HIDWORD(_R2) + 48);
  v76 = HIDWORD(_R2);
LABEL_75:
  if ( (signed int)_R0 >= *_R9 )
    *((_DWORD *)v1 + 10) = 0;
    *((_DWORD *)v1 + 6) = 0;
    ++*((_DWORD *)v1 + 9);
    LODWORD(_R0) = *(_BYTE *)(v76 + 52);
    v77 = (_BYTE *)(v76 + 52);
    if ( (_DWORD)_R0 != 164 )
      v64 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
      v65 = j_Entity::getRegion(*((Entity **)v1 + 2));
      v66 = *v77;
      v67 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
      v68 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 488))();
      LODWORD(_R0) = j_Level::broadcastSoundEvent(v64, v65, v66, v67, -1, v68, 0, 0);
  return _R0;
}


Entity *__fastcall SummonEntityGoal::_createSpellEntity(int a1, int a2, float a3, int a4, float a5, int a6, int a7, const void **a8)
{
  mce::Math *v8; // r5@1
  int v9; // r10@1
  BlockSource *v10; // r7@1
  float v11; // r1@2
  signed int v12; // r4@4
  Entity *result; // r0@4
  int v18; // r4@8
  Entity *v20; // r4@11
  void (__fastcall *v21)(Entity *); // r5@12
  __int64 v22; // r2@12
  int v23; // r4@14
  void (__fastcall *v24)(int, int, Entity **); // r5@14
  int v25; // r1@14
  Entity *v26; // r0@14
  Entity *v27; // [sp+10h] [bp-90h]@14
  int v28; // [sp+14h] [bp-8Ch]@11
  int v29; // [sp+1Ch] [bp-84h]@11
  int v30; // [sp+20h] [bp-80h]@11
  int v31; // [sp+24h] [bp-7Ch]@11
  int v32; // [sp+28h] [bp-78h]@11
  int v33; // [sp+2Ch] [bp-74h]@11
  int v34; // [sp+30h] [bp-70h]@11
  int v35; // [sp+34h] [bp-6Ch]@11
  char v36; // [sp+38h] [bp-68h]@11
  Entity *v37; // [sp+44h] [bp-5Ch]@9
  int v38; // [sp+48h] [bp-58h]@9
  int v39; // [sp+4Ch] [bp-54h]@9
  int v40; // [sp+50h] [bp-50h]@9
  unsigned __int8 v41; // [sp+60h] [bp-40h]@8
  int v42; // [sp+64h] [bp-3Ch]@3
  int v43; // [sp+68h] [bp-38h]@3
  int v44; // [sp+6Ch] [bp-34h]@3
  char v45; // [sp+70h] [bp-30h]@1
  int v46; // [sp+74h] [bp-2Ch]@3
  int v47; // [sp+78h] [bp-28h]@3

  v8 = (mce::Math *)a4;
  v9 = a1;
  j_BlockPos::BlockPos((BlockPos *)&v45, *(float *)&a2, a5, a3);
  v10 = (BlockSource *)j_Entity::getRegion(*(Entity **)(v9 + 8));
  while ( 1 )
  {
    if ( !j_BlockSource::isSolidBlockingBlock(v10, (const BlockPos *)&v45) )
    {
      v42 = *(_DWORD *)&v45;
      v43 = v46 - 1;
      v44 = v47;
      if ( j_BlockSource::isSolidBlockingBlock(v10, (const BlockPos *)&v42) == 1 )
        break;
    }
    v12 = v46--;
    result = (Entity *)j_mce::Math::floor(v8, v11);
    if ( v12 < (signed int)result )
      return result;
  }
  if ( j_BlockSource::isEmptyBlock(v10, (const BlockPos *)&v45) )
    __asm { VLDR            S0, =0.0 }
  else
    j_BlockSource::getBlockAndData((BlockSource *)&v41, v10, (int)&v45);
    v18 = Block::mBlocks[v41];
    if ( v18 )
      j_AABB::AABB((AABB *)&v37);
      _R0 = (*(int (__fastcall **)(int, BlockSource *, char *, Entity **))(*(_DWORD *)v18 + 32))(v18, v10, &v45, &v37);
      v37 = *(Entity **)_R0;
      v38 = *(_DWORD *)(_R0 + 4);
      v39 = *(_DWORD *)(_R0 + 8);
      __asm { VLDR            S0, [SP,#0xA0+var_2C] }
      v40 = *(_DWORD *)(_R0 + 12);
      __asm
      {
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R0,#0x10]
        VSUB.F32        S0, S2, S0
      }
    else
      __asm { VLDR            S0, =0.0 }
  v28 = 0;
  __asm { VSTR            S0, [SP,#0xA0+var_88] }
  v29 = 0;
  j_BlockPos::BlockPos((int)&v30, (int)&v28);
  v33 = *(_DWORD *)&v45 + v30;
  v34 = v31 + v46;
  v35 = v32 + v47;
  j_Vec3::Vec3((int)&v36, (int)&v33);
  result = j_EntityFactory::createSpawnedEntity(&v37, a8, 0, (int)&v36, &Vec2::ZERO);
  v20 = v37;
  if ( v37 )
    v21 = *(void (__fastcall **)(Entity *))(*(_DWORD *)v37 + 348);
    v22 = *(_QWORD *)j_Entity::getUniqueID(*(Entity **)(v9 + 8));
    v21(v20);
    if ( a7 >= 1 )
      j_Entity::setLimitedLife(v20, a7);
    v23 = j_Entity::getLevel(*(Entity **)(v9 + 8));
    v24 = *(void (__fastcall **)(int, int, Entity **))(*(_DWORD *)v23 + 44);
    v25 = j_Entity::getRegion(*(Entity **)(v9 + 8));
    v26 = v37;
    v37 = 0;
    v27 = v26;
    v24(v23, v25, &v27);
    if ( v27 )
      (*(void (**)(void))(*(_DWORD *)v27 + 32))();
    v27 = 0;
    result = v37;
    if ( v37 )
      result = (Entity *)(*(int (**)(void))(*(_DWORD *)v37 + 32))();
  return result;
}


signed int __fastcall SummonEntityGoal::canUse(SummonEntityGoal *this)
{
  SummonEntityGoal *v1; // r4@1
  Entity *v2; // r0@2
  signed int v3; // r0@2
  signed int v4; // r5@3
  __int64 v5; // kr00_8@4
  Level *v6; // r0@4
  bool v7; // cf@4
  bool v8; // zf@4
  __int64 v9; // r0@4
  signed int result; // r0@10

  v1 = this;
  if ( j_Entity::getTarget(*((Entity **)this + 2))
    && (v2 = (Entity *)j_Entity::getTarget(*((Entity **)v1 + 2)),
        v3 = j_SummonEntityGoal::_selectBestSpell(v1, v2),
        *((_DWORD *)v1 + 8) = v3,
        v3 >= 0) )
  {
    v4 = 0;
    if ( v3 < 954437177 * ((signed int)((*(_QWORD *)((char *)v1 + 12) >> 32) - *(_QWORD *)((char *)v1 + 12)) >> 3) )
    {
      v5 = *((_QWORD *)v1 + 6);
      v6 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
      v9 = *(_QWORD *)j_Level::getCurrentTick(v6);
      v7 = (unsigned int)v5 >= (unsigned int)v9;
      v8 = (_DWORD)v5 == (_DWORD)v9;
      LODWORD(v9) = 0;
      if ( v8 || !v7 )
        LODWORD(v9) = 1;
      if ( HIDWORD(v5) <= HIDWORD(v9) )
        v4 = 1;
      if ( HIDWORD(v5) == HIDWORD(v9) )
        v4 = v9;
    }
    result = v4;
  }
  else
    result = 0;
  return result;
}


Goal *__fastcall SummonEntityGoal::SummonEntityGoal(Goal *a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r5@1
  int v4; // r6@1
  Goal *v5; // r4@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v5 = &off_271AEF0;
  *((_DWORD *)v5 + 2) = v4;
  j_std::vector<SummonSpellData,std::allocator<SummonSpellData>>::vector((int)v5 + 12, v3);
  *((_DWORD *)v5 + 10) = 0;
  *((_DWORD *)v5 + 8) = 0;
  *((_DWORD *)v5 + 9) = 0;
  *((_DWORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 12) = 0;
  *((_DWORD *)v5 + 13) = 0;
  *((_DWORD *)v5 + 14) = 0;
  *((_DWORD *)v5 + 15) = 0;
  *((_DWORD *)v5 + 16) = 0;
  *((_DWORD *)v5 + 17) = 0;
  *((_DWORD *)v5 + 18) = 0;
  *((_DWORD *)v5 + 19) = 0;
  j_Goal::setRequiredControlFlags(v5, 11);
  return v5;
}


signed int __fastcall SummonEntityGoal::canContinueToUse(SummonEntityGoal *this)
{
  SummonEntityGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@2 OVERLAPPED
  int v4; // r2@2
  int v5; // r5@3
  signed int result; // r0@9

  v1 = this;
  v2 = *((_DWORD *)this + 8);
  if ( v2 < 0 )
  {
    v5 = 0;
  }
  else
    *(_QWORD *)&v3 = *(_QWORD *)((char *)v1 + 12);
    if ( v2 >= 954437177 * ((v4 - v3) >> 3) )
      v5 = 0;
    else
      v5 = v3 + 72 * v2;
  if ( j_Entity::getTarget(*((Entity **)v1 + 2)) )
    if ( *((_DWORD *)v1 + 7) <= 0 )
    {
      result = 0;
      if ( v5 )
      {
        if ( *((_DWORD *)v1 + 9) < -1227133513
                                 * ((signed int)((*(_QWORD *)(v5 + 56) >> 32) - *(_QWORD *)(v5 + 56)) >> 3) )
          result = 1;
      }
    }
      result = 1;
    result = 0;
  return result;
}


signed int __fastcall SummonEntityGoal::_selectBestSpell(SummonEntityGoal *this, Entity *a2)
{
  Entity *v2; // r4@1
  SummonEntityGoal *v3; // r8@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r7@3
  int *v7; // r5@3
  void **v8; // r11@4
  int v10; // r10@4 OVERLAPPED
  int v11; // r11@5
  int v17; // r4@11
  int v18; // r6@11
  int v19; // r5@14
  __int64 v20; // kr08_8@14
  int v21; // r1@14
  unsigned __int64 *v22; // r0@14
  char *v23; // r1@17
  _DWORD *v24; // r4@18
  signed int v25; // r2@19
  int v26; // r7@19
  unsigned int v27; // r0@19
  unsigned int v28; // r1@21
  unsigned int v29; // r6@21
  int v30; // r7@30
  signed int v33; // r10@37
  void *v34; // r8@37
  int v35; // r5@38
  unsigned int *v36; // r2@40
  signed int v37; // r1@42
  void *v38; // r7@48
  int v39; // r1@48
  void *v40; // r0@48
  int v43; // r3@64
  int v45; // [sp+0h] [bp-80h]@5
  unsigned int v46; // [sp+4h] [bp-7Ch]@5
  char *v47; // [sp+8h] [bp-78h]@5
  _BYTE *v48; // [sp+Ch] [bp-74h]@5
  Vec3 *v49; // [sp+10h] [bp-70h]@5
  int v50; // [sp+14h] [bp-6Ch]@14
  int v51; // [sp+18h] [bp-68h]@14
  int v52; // [sp+1Ch] [bp-64h]@14
  char v53; // [sp+20h] [bp-60h]@14
  void *ptr; // [sp+3Ch] [bp-44h]@4
  unsigned int v55; // [sp+40h] [bp-40h]@1
  int v56; // [sp+44h] [bp-3Ch]@1
  int v57; // [sp+48h] [bp-38h]@1
  signed int v58; // [sp+4Ch] [bp-34h]@1
  int v59; // [sp+50h] [bp-30h]@1
  int v60; // [sp+54h] [bp-2Ch]@60

  v2 = a2;
  v3 = this;
  v56 = 0;
  v57 = 0;
  v58 = 1065353216;
  v59 = 0;
  HIDWORD(v4) = 10;
  LODWORD(v4) = &v58;
  v5 = sub_21E6254(v4);
  v55 = v5;
  if ( v5 == 1 )
  {
    v7 = &v60;
    v60 = 0;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = (int *)j_operator new(4 * v5);
    j___aeabi_memclr4_0((int)v7, v6);
  ptr = v7;
  v8 = &ptr;
  j_Entity::initParams(*((Entity **)v3 + 2), (VariantParameterList *)&ptr);
  *(_QWORD *)&_R9 = *(_QWORD *)((char *)v3 + 12);
  if ( _R9 == v10 )
    v33 = -1;
    v34 = 0;
    v49 = (Entity *)((char *)v2 + 72);
    v11 = 0;
    v46 = 0;
    v45 = 0;
    v47 = 0;
    v48 = 0;
    do
    {
      _R0 = j_Entity::distanceToSqr(*((Entity **)v3 + 2), v49);
      __asm
      {
        VLDR            S2, [R9,#4]
        VMOV            S0, R0
        VCMPE.F32       S2, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        __asm
        {
          VMULGE.F32      S2, S2, S2
          VCMPEGE.F32     S0, S2
          VMRSGE          APSR_nzcv, FPSCR
        }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          VLDR            S2, [R9]
          VMUL.F32        S2, S2, S2
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( !(_NF ^ _VF) )
          v18 = *(_QWORD *)(_R9 + 56) >> 32;
          v17 = *(_QWORD *)(_R9 + 56);
          if ( v17 == v18 )
          {
LABEL_16:
            if ( j_EntityFilterGroup::evaluate(
                   (EntityFilterGroup *)(_R9 + 16),
                   *((const Entity **)v3 + 2),
                   (const VariantParameterList *)&ptr) == 1 )
            {
              v23 = v47;
              if ( v47 == (char *)v45 )
              {
                v24 = 0;
                v25 = v47 - v48;
                v26 = (v47 - v48) >> 2;
                v27 = (v47 - v48) >> 2;
                if ( !v26 )
                  v27 = 1;
                v28 = v27 + (v25 >> 2);
                v29 = v27 + (v25 >> 2);
                if ( 0 != v28 >> 30 )
                  v29 = 0x3FFFFFFF;
                if ( v28 < v27 )
                if ( v29 )
                {
                  if ( v29 >= 0x40000000 )
                    sub_21E57F4();
                  v24 = j_operator new(4 * v29);
                }
                v24[v26] = v11;
                if ( v26 )
                  j___aeabi_memmove4_0((int)v24, (int)v48);
                v30 = (int)&v24[v26];
                if ( v48 )
                  j_operator delete(v48);
                v23 = (char *)v30;
                v45 = (int)&v24[v29];
              }
              else
                *(_DWORD *)v47 = v11;
                v24 = v48;
              _R0 = v46;
              __asm
                VMOV            S0, R0
                VCVT.F32.S32    S0, S0
                VLDR            S2, [R9,#0xC]
                VADD.F32        S0, S2, S0
                VCVTR.S32.F32   S0, S0
                VMOV            R0, S0
              v46 = _R0;
              v47 = v23 + 4;
              v48 = v24;
            }
          }
          else
            while ( 1 )
              if ( *(_DWORD *)(v17 + 20) >= 1 && *(_DWORD *)(v17 + 28) != 1 )
                v19 = j_Entity::getRegion(*((Entity **)v3 + 2));
                v20 = *(_QWORD *)(v17 + 24);
                v21 = *((_DWORD *)v3 + 2);
                v50 = v20;
                v51 = v20;
                v52 = v20;
                j_AABB::grow((AABB *)&v53, (const Vec3 *)(v21 + 264), (int)&v50);
                v22 = (unsigned __int64 *)j_BlockSource::fetchEntities2(v19, SHIDWORD(v20), (const AABB *)&v53, 0);
                if ( (signed int)((*v22 >> 32) - *v22) >> 2 >= *(_DWORD *)(v17 + 20) )
                  break;
              v17 += 56;
              if ( v18 == v17 )
                goto LABEL_16;
      _R9 += 72;
      ++v11;
    }
    while ( _R9 != v10 );
    v8 = &ptr;
    if ( v47 - v48 < 1 )
      v34 = v48;
    else if ( (signed int)v46 <= 0 )
    else
      if ( v46 )
        _R1 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v3 + 2) + 552)) % v46;
      else
        _R1 = 0;
      v43 = 0;
      while ( 1 )
        v33 = *(_DWORD *)&v48[4 * v43];
          VMOV            S0, R1
          VCVT.F32.S32    S0, S0
        _R1 = *((_DWORD *)v3 + 3) + 72 * v33;
          VLDR            S2, [R1,#0xC]
        if ( _NF ^ _VF )
          break;
        __asm { VSUB.F32        S0, S0, S2 }
        ++v43;
          VCVTR.S32.F32   S0, S0
          VMOV            R1, S0
          v34 = v48;
          v33 = -1;
          goto LABEL_38;
LABEL_38:
  v35 = v56;
  while ( v35 )
    v38 = (void *)v35;
    v39 = *(_DWORD *)(v35 + 8);
    v35 = *(_DWORD *)v35;
    v40 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
    j_operator delete(v38);
  j___aeabi_memclr4_0((int)ptr, 4 * v55);
  if ( ptr && v8 + 6 != ptr )
    j_operator delete(ptr);
  if ( v34 )
    j_operator delete(v34);
  return v33;
}
