

void __fastcall RangedAttackGoal::~RangedAttackGoal(RangedAttackGoal *this)
{
  RangedAttackGoal::~RangedAttackGoal(this);
}


int __fastcall RangedAttackGoal::~RangedAttackGoal(RangedAttackGoal *this)
{
  RangedAttackGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271AC14;
  *((_DWORD *)this + 4) = &off_271A67C;
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


int __fastcall RangedAttackGoal::tick(RangedAttackGoal *this)
{
  int result; // r0@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  const Entity *v8; // r5@7
  int v9; // r3@9
  Entity *v10; // r0@9
  int v11; // r2@9
  Sensing *v13; // r0@9
  signed int v14; // r7@9
  int v15; // r6@10
  int v20; // r0@12
  int v21; // r2@16
  LookControl *v22; // r0@17
  signed int v23; // r1@18
  ShooterComponent *v24; // r0@23
  float v25; // r1@25
  AngryComponent *v26; // r0@26
  int v31; // r0@27
  int v33; // r0@36
  int v34; // r0@37
  int v35; // r1@37
  int v36; // r0@38
  Level *v41; // r0@44
  unsigned __int8 v42; // r0@45
  int v43; // r5@45 OVERLAPPED
  int v44; // r6@45 OVERLAPPED
  signed int v45; // r1@45
  signed int v46; // r7@45
  int v47; // r8@48
  int v48; // r0@48
  unsigned int v49; // r1@48
  unsigned int v50; // r1@52
  unsigned int v51; // r0@52
  Entity *v52; // r0@57
  int v53; // r4@58
  int (__fastcall *v54)(int, signed int, char *, signed int); // r6@58
  char v55; // [sp+8h] [bp-40h]@58
  int v56; // [sp+14h] [bp-34h]@9
  int v57; // [sp+18h] [bp-30h]@9
  int v58; // [sp+1Ch] [bp-2Ch]@9

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
  v8 = (const Entity *)*((_DWORD *)_R4 + 5);
  if ( v8 )
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v8 + 316))(*((_DWORD *)_R4 + 5));
    if ( result == 1 )
      v9 = *((_DWORD *)v8 + 67);
      v10 = (Entity *)*((_DWORD *)_R4 + 2);
      v11 = *((_DWORD *)v8 + 20);
      v56 = *((_DWORD *)v8 + 18);
      v57 = v9;
      v58 = v11;
      _R8 = (mce::Math *)j_Entity::distanceToSqr(v10, (const Vec3 *)&v56);
      v13 = (Sensing *)j_Mob::getSensing(*((Mob **)_R4 + 2));
      v14 = j_Sensing::canSee(v13, v8);
      if ( v14 == 1 )
        v15 = *((_DWORD *)_R4 + 12) + 1;
      else
        v15 = 0;
      __asm { VMOV            S16, R8 }
      *((_DWORD *)_R4 + 12) = v15;
      __asm { VLDR            S18, [R4,#0x40] }
      v20 = j_Mob::getNavigation(*((Mob **)_R4 + 2));
      if ( v15 < 20 )
        goto LABEL_63;
      __asm
        VCMPE.F32       S16, S18
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        (*(void (**)(void))(*(_DWORD *)v20 + 40))();
LABEL_63:
        v21 = *((_DWORD *)_R4 + 11);
        (*(void (**)(void))(*(_DWORD *)v20 + 20))();
      v22 = (LookControl *)j_Mob::getLookControl(*((Mob **)_R4 + 2));
      j_LookControl::setLookAt(v22, v8, 30.0, 30.0);
      if ( *((_DWORD *)_R4 + 22) >= 1 )
        v23 = *((_DWORD *)_R4 + 24);
        *((_DWORD *)_R4 + 24) = v23 - 1;
        __asm { VLDR            S0, [R4,#0x40] }
        result = 0;
        __asm
        {
          VCMPE.F32       S16, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          result = 1;
        if ( v23 <= 1 )
          result &= v14;
          if ( result == 1 )
          {
            if ( j_Entity::getShooterComponent(*((Entity **)_R4 + 2)) )
            {
              v24 = (ShooterComponent *)j_Entity::getShooterComponent(*((Entity **)_R4 + 2));
              j_ShooterComponent::onShoot(v24);
            }
            if ( !*((_BYTE *)_R4 + 68) )
              if ( j_Entity::getAngryComponent(*((Entity **)_R4 + 2)) )
              {
                v26 = (AngryComponent *)j_Entity::getAngryComponent(*((Entity **)_R4 + 2));
                j_AngryComponent::restartTimer(v26);
              }
              _R0 = j_mce::Math::sqrt(_R8, v25);
              __asm
                VLDR            S0, [R4,#0x3C]
                VMOV            S2, R0
              _R1 = *(_QWORD *)((char *)_R4 + 52);
              __asm { VDIV.F32        S16, S2, S0 }
              _R0 = HIDWORD(_R1) - _R1;
                VMOV            S0, R0
                VMOV            S2, R1
                VCVT.F32.S32    S0, S0
                VCVT.F32.S32    S2, S2
                VMUL.F32        S0, S0, S16
                VADD.F32        S0, S0, S2
                VMOV            R0, S0
              v31 = j_mce::Math::floor(_R0, *(float *)&_R1);
                VLDR            S0, =0.1
                VMOV.F32        S2, #1.0
                VCMPE.F32       S16, S0
                VMRS            APSR_nzcv, FPSCR
                VCMPE.F32       S16, S2
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                __asm { VMOVGT.F32      S0, S16 }
              __asm { VMRS            APSR_nzcv, FPSCR }
                __asm { VMOVGT.F32      S0, S2 }
              *((_DWORD *)_R4 + 10) = v31;
              __asm { VMOV            R2, S0 }
              (*(void (**)(void))(**((_DWORD **)_R4 + 2) + 904))();
            result = *((_DWORD *)_R4 + 22);
            *((_DWORD *)_R4 + 22) = result - 1;
            if ( result >= 2 )
              result = *((_DWORD *)_R4 + 23);
              *((_DWORD *)_R4 + 24) = result;
          }
        return result;
      if ( *((_BYTE *)_R4 + 68) )
        v33 = *((_DWORD *)_R4 + 20);
        if ( v14 == 1 )
          v34 = v33 + 1;
          *((_DWORD *)_R4 + 20) = v34;
          v35 = *((_DWORD *)_R4 + 18);
          if ( v34 < v35 )
            goto LABEL_44;
          v36 = v34 - 2 * v35;
          *((_DWORD *)_R4 + 22) = *((_DWORD *)_R4 + 21);
          *((_DWORD *)_R4 + 24) = 0;
        else
          v36 = v33 - 1;
        *((_DWORD *)_R4 + 20) = v36;
LABEL_44:
        v41 = (Level *)j_Entity::getLevel(*((Entity **)_R4 + 2));
        result = j_Level::isClientSide(v41);
        if ( !result )
          v42 = j_SynchedEntityData::getInt8((SynchedEntityData *)(*((_DWORD *)_R4 + 2) + 176), 22);
          *(_QWORD *)&v43 = *(_QWORD *)((char *)_R4 + 76);
          v45 = 0;
          v46 = 0;
          if ( v44 > v43 )
            v45 = 1;
          if ( v42 != v45 )
            v47 = *((_DWORD *)_R4 + 2);
            v48 = j_SynchedEntityData::_get((SynchedEntityData *)(v47 + 176), 22);
            v49 = *(_DWORD *)(v48 + 4);
            if ( v44 > v43 )
              v46 = 1;
            if ( !(_BYTE)v49 && *(_BYTE *)(v48 + 9) != v46 )
              *(_BYTE *)(v48 + 9) = v46;
              *(_BYTE *)(v48 + 8) = 1;
              v50 = v49 >> 16;
              v51 = *(_WORD *)(v47 + 188);
              if ( v51 >= v50 )
                LOWORD(v51) = v50;
              *(_WORD *)(v47 + 188) = v51;
              if ( *(_WORD *)(v47 + 190) > v50 )
                LOWORD(v50) = *(_WORD *)(v47 + 190);
              *(_WORD *)(v47 + 190) = v50;
          v52 = (Entity *)*((_DWORD *)_R4 + 2);
          if ( v44 <= v43 )
            result = j_Entity::setCharged(v52, 0);
          else
            j_Entity::setCharged(v52, 1);
            v53 = *((_DWORD *)_R4 + 2);
            v54 = *(int (__fastcall **)(int, signed int, char *, signed int))(*(_DWORD *)v53 + 556);
            j_Entity::getAttachPos((AABB *)&v55, v53, 3, 0);
            result = v54(v53, 42, &v55, -1);
      result = *((_DWORD *)_R4 + 10);
      *((_DWORD *)_R4 + 10) = result - 1;
      if ( result == 1 )
        *((_DWORD *)_R4 + 22) = *((_DWORD *)_R4 + 21);
        *((_DWORD *)_R4 + 24) = 0;
      else if ( result <= 0 )
        _R0 = j_mce::Math::sqrt(_R8, COERCE_FLOAT(result - 1));
          VLDR            S0, [R4,#0x3C]
          VMOV            S2, R0
        _R1 = *(_QWORD *)((char *)_R4 + 52);
        __asm { VDIV.F32        S0, S2, S0 }
        _R0 = HIDWORD(_R1) - _R1;
          VMOV            S4, R1
          VCVT.F32.S32    S2, S2
          VCVT.F32.S32    S4, S4
          VMUL.F32        S0, S2, S0
          VADD.F32        S0, S0, S4
          VMOV            R0, S0
        result = j_mce::Math::floor(_R0, *(float *)&_R1);
        *((_DWORD *)_R4 + 10) = result;
  return result;
}


int __fastcall RangedAttackGoal::RangedAttackGoal(int a1, float a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r9@1
  int v11; // r10@1
  float v12; // r5@1
  int v13; // r4@1
  char v18; // r0@1
  int v19; // r0@3

  v10 = a4;
  v11 = a3;
  v12 = a2;
  v13 = a1;
  j_Goal::Goal((Goal *)a1);
  __asm
  {
    VLDR            S0, [SP,#0x20+arg_4]
    VMUL.F32        S2, S0, S0
  }
  *(_DWORD *)v13 = &off_271AC14;
  *(float *)(v13 + 8) = v12;
  *(_DWORD *)(v13 + 16) = &off_271A67C;
  *(_DWORD *)(v13 + 20) = 0;
  *(_DWORD *)(v13 + 28) = -1;
  *(_DWORD *)(v13 + 24) = -1;
  *(_DWORD *)(v13 + 32) = 0;
  *(_BYTE *)(v13 + 36) = 0;
  *(_DWORD *)(v13 + 40) = 0;
  *(_DWORD *)(v13 + 44) = v11;
  *(_DWORD *)(v13 + 48) = 0;
  *(_DWORD *)(v13 + 52) = v10;
  *(_DWORD *)(v13 + 56) = a5;
  v18 = 0;
    VSTR            S0, [R4,#0x3C]
    VSTR            S2, [R4,#0x40]
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v18 = 1;
  *(_BYTE *)(v13 + 68) = v18;
  v19 = v13 + 72;
  *(_DWORD *)v19 = a7;
  *(_DWORD *)(v19 + 4) = a8;
  *(_DWORD *)(v19 + 8) = 0;
  *(_DWORD *)(v19 + 12) = a9;
  *(_DWORD *)(v13 + 88) = 0;
  *(_DWORD *)(v13 + 92) = a10;
  *(_DWORD *)(v13 + 96) = 0;
  j_Goal::setRequiredControlFlags((Goal *)v13, 3);
  return v13;
}


int __fastcall RangedAttackGoal::setAttackInterval(int result, int a2)
{
  *(_DWORD *)(result + 52) = a2;
  *(_DWORD *)(result + 56) = a2;
  return result;
}


void __fastcall RangedAttackGoal::~RangedAttackGoal(RangedAttackGoal *this)
{
  RangedAttackGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271AC14;
  *((_DWORD *)this + 4) = &off_271A67C;
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


int __fastcall RangedAttackGoal::RangedAttackGoal(RangedAttackGoal *this, Mob *a2, float a3, int a4, int a5, float a6, int a7, int a8, int a9, int a10)
{
  return RangedAttackGoal::RangedAttackGoal(
           (int)this,
           *(float *)&a2,
           SLODWORD(a3),
           a4,
           a5,
           SLODWORD(a6),
           a7,
           a8,
           a9,
           a10);
}


signed int __fastcall RangedAttackGoal::canUse(RangedAttackGoal *this)
{
  RangedAttackGoal *v1; // r4@1
  int v2; // r0@2
  int v3; // r5@2
  int v4; // r0@6
  signed int v5; // r6@7
  int v6; // r0@10

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2)) )
  {
    v2 = j_Entity::getTarget(*((Entity **)v1 + 2));
    v3 = v2;
    if ( v2 )
    {
      if ( (*(int (**)(void))(*(_DWORD *)v2 + 316))() == 1 )
      {
        if ( *((_DWORD *)v1 + 5) != v3 )
        {
          if ( *(_DWORD *)(v3 + 3092) )
          {
            *((_QWORD *)v1 + 3) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v3);
            v4 = *(_DWORD *)(v3 + 3092);
            *((_DWORD *)v1 + 8) = v4;
            j_Level::registerTemporaryPointer(v4, (unsigned int)v1 + 16);
            *((_BYTE *)v1 + 36) = 0;
          }
          else
            *((_DWORD *)v1 + 5) = 0;
            *((_DWORD *)v1 + 6) = -1;
            *((_DWORD *)v1 + 7) = -1;
            v6 = *((_DWORD *)v1 + 8);
            if ( v6 )
              j_Level::unregisterTemporaryPointer(v6, (unsigned int)v1 + 16);
            *((_DWORD *)v1 + 8) = 0;
        }
        v5 = 1;
        if ( j_Entity::hasCategory(v3, 1) == 1 )
          j_Entity::setPersistent(*((Entity **)v1 + 2));
          v5 = 1;
      }
      else
        v5 = 0;
    }
    else
      v5 = 0;
  }
  else
    v5 = 0;
  return v5;
}


unsigned int __fastcall RangedAttackGoal::stop(RangedAttackGoal *this)
{
  RangedAttackGoal *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 7) = -1;
  *((_BYTE *)this + 36) = 0;
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
    j_Level::unregisterTemporaryPointer(v2, (unsigned int)v1 + 16);
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 12) = 0;
  return j_j_j__ZN6Entity10setChargedEb_0(*((Entity **)v1 + 2), 0);
}


int __fastcall RangedAttackGoal::canContinueToUse(RangedAttackGoal *this)
{
  RangedAttackGoal *v1; // r4@1
  int result; // r0@2
  int v3; // r0@3

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 8))() )
  {
    result = 1;
  }
  else
    v3 = j_Mob::getNavigation(*((Mob **)v1 + 2));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 36))() ^ 1;
  return result;
}
