

void __fastcall OcelotAttackGoal::~OcelotAttackGoal(OcelotAttackGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall OcelotAttackGoal::appendDebugInfo(int a1, int *a2)
{
  int *v2; // r0@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = sub_21E8AF4(&v6, a2);
  sub_21E7408((const void **)v2, "OcelotAttack", 0xCu);
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
}


int __fastcall OcelotAttackGoal::stop(OcelotAttackGoal *this)
{
  OcelotAttackGoal *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 3));
  (*(void (**)(void))(*(_DWORD *)v2 + 40))();
  (*(void (**)(void))(**((_DWORD **)v1 + 3) + 788))();
  return (*(int (**)(void))(**((_DWORD **)v1 + 3) + 796))();
}


void __fastcall OcelotAttackGoal::~OcelotAttackGoal(OcelotAttackGoal *this)
{
  OcelotAttackGoal::~OcelotAttackGoal(this);
}


int __fastcall OcelotAttackGoal::OcelotAttackGoal(float a1, int a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1
  float v8; // r4@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  j_Goal::Goal((Goal *)LODWORD(a1));
  __asm { VLDR            S0, [SP,#0x18+arg_0] }
  *(_DWORD *)LODWORD(v8) = &off_271A8E4;
  __asm { VSTR            S0, [R4,#0x18] }
  *(_DWORD *)(LODWORD(v8) + 8) = 0;
  *(_DWORD *)(LODWORD(v8) + 12) = v7;
  *(_DWORD *)(LODWORD(v8) + 16) = v6;
  *(_DWORD *)(LODWORD(v8) + 20) = v5;
  j_Goal::setRequiredControlFlags((Goal *)LODWORD(v8), 3);
  return LODWORD(v8);
}


int __fastcall OcelotAttackGoal::canContinueToUse(OcelotAttackGoal *this)
{
  OcelotAttackGoal *v1; // r4@1
  int v2; // r0@1
  const Entity *v3; // r5@1
  int result; // r0@4
  int v10; // r0@5

  v1 = this;
  v2 = j_Entity::getTarget(*((Entity **)this + 3));
  v3 = (const Entity *)v2;
  if ( !v2 )
    goto LABEL_10;
  if ( (*(int (**)(void))(*(_DWORD *)v2 + 316))() != 1 )
  _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 3), v3);
  __asm
  {
    VLDR            S0, =225.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v10 = j_Mob::getNavigation(*((Mob **)v1 + 3));
    if ( (*(int (**)(void))(*(_DWORD *)v10 + 36))() == 1 )
      result = (*(int (__fastcall **)(OcelotAttackGoal *))(*(_DWORD *)v1 + 8))(v1);
    else
      result = 1;
  else
LABEL_10:
    result = 0;
  return result;
}


int __fastcall OcelotAttackGoal::canUse(OcelotAttackGoal *this)
{
  OcelotAttackGoal *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 3)) )
    result = j_Entity::getTarget(*((Entity **)v1 + 3)) != 0;
  else
    result = 0;
  return result;
}


void __fastcall OcelotAttackGoal::appendDebugInfo(int a1, int *a2)
{
  OcelotAttackGoal::appendDebugInfo(a1, a2);
}


int __fastcall OcelotAttackGoal::tick(OcelotAttackGoal *this)
{
  int result; // r0@1
  int v3; // r5@1
  LookControl *v4; // r0@2
  int v5; // r3@2
  Entity *v6; // r0@2
  int v7; // r2@2
  void (*v11)(void); // r2@12
  int v12; // r0@17
  int v17; // [sp+4h] [bp-3Ch]@2
  int v18; // [sp+8h] [bp-38h]@2
  int v19; // [sp+Ch] [bp-34h]@2

  _R4 = this;
  result = j_Entity::getTarget(*((Entity **)this + 3));
  v3 = result;
  if ( !result )
    return result;
  v4 = (LookControl *)j_Mob::getLookControl(*((Mob **)_R4 + 3));
  j_LookControl::setLookAt(v4, (Entity *)v3, 30.0, 30.0);
  v5 = *(_DWORD *)(v3 + 268);
  v6 = (Entity *)*((_DWORD *)_R4 + 3);
  v7 = *(_DWORD *)(v3 + 80);
  v17 = *(_DWORD *)(v3 + 72);
  v18 = v5;
  v19 = v7;
  _R7 = j_Entity::distanceToSqr(v6, (const Vec3 *)&v17);
  (*(void (**)(void))(**((_DWORD **)_R4 + 3) + 312))();
  (*(void (**)(void))(**((_DWORD **)_R4 + 3) + 792))();
  _KR00_8 = *((_QWORD *)_R4 + 1);
  __asm
  {
    VLDR            S0, [R0,#0x130]
    VMOV            S16, R7
    VADD.F32        S18, S0, S0
  }
  if ( _NF ^ _VF )
    __asm
    {
      VMOV.F32        S0, #-0.5
      VADD.F32        S4, S18, S0
    }
    if ( _ZF )
      __asm
      {
        VMOV.F32        S6, #15.5
        VMOV.F32        S8, #3.5
        VMOV.F32        S2, #4.0
        VMOV.F32        S0, #15.0
        VMOV.F32        S10, S18
      }
      if ( !_ZF )
        __asm
        {
          VMOVNE.F32      S10, S4
          VMOVNE.F32      S2, S8
          VMOVNE.F32      S0, S6
        }
      __asm { VMOV.F32        S4, S10 }
    else
        VMOV.F32        S2, #4.5
        VMOV.F32        S0, #15.5
  else
      VMOV.F32        S4, #0.5
      VMOV.F32        S2, #4.5
      VMOV.F32        S0, #15.5
      VADD.F32        S4, S18, S4
    VMUL.F32        S4, S4, S4
    VLDR            S20, [R4,#0x10]
    VCMPE.F32       S16, S4
    VMRS            APSR_nzcv, FPSCR
    goto LABEL_16;
    VMUL.F32        S2, S2, S2
    VCMPE.F32       S16, S2
    __asm { VLDR            S20, [R4,#0x14] }
    (*(void (**)(void))(*(_DWORD *)HIDWORD(_KR00_8) + 796))();
    v11 = *(void (**)(void))(**((_DWORD **)_R4 + 3) + 788);
      VMUL.F32        S0, S0, S0
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
LABEL_16:
      (*(void (**)(void))(*(_DWORD *)HIDWORD(_KR00_8) + 788))();
      v11 = *(void (**)(void))(**((_DWORD **)_R4 + 3) + 796);
      goto LABEL_17;
    __asm { VLDR            S20, [R4,#0x18] }
LABEL_17:
  v11();
  v12 = j_Mob::getNavigation(*((Mob **)_R4 + 3));
  __asm { VMOV            R2, S20 }
  (*(void (**)(void))(*(_DWORD *)v12 + 20))();
  __asm { VMUL.F32        S0, S18, S18 }
  result = *((_DWORD *)_R4 + 2) - 1;
  if ( result < 0 )
    result = 0;
  *((_DWORD *)_R4 + 2) = result;
    VCMPE.F32       S16, S0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _VF = 0;
    _ZF = result == 0;
    _NF = result < 0;
    *((_DWORD *)_R4 + 2) = 20;
    result = (*(int (**)(void))(**((_DWORD **)_R4 + 3) + 976))();
  return result;
}
