

void __fastcall WitherRandomAttackPosGoal::~WitherRandomAttackPosGoal(WitherRandomAttackPosGoal *this)
{
  WitherRandomAttackPosGoal::~WitherRandomAttackPosGoal(this);
}


void __fastcall WitherRandomAttackPosGoal::~WitherRandomAttackPosGoal(WitherRandomAttackPosGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall WitherRandomAttackPosGoal::start(WitherRandomAttackPosGoal *this)
{
  RandomStrollGoal *v1; // r4@1
  Mob *v2; // r5@1

  v1 = this;
  *((_BYTE *)this + 36) = 1;
  v2 = (Mob *)*((_DWORD *)this + 8);
  j_WitherBoss::setIsPathing(*((WitherBoss **)this + 8), 1);
  _R0 = j_Mob::getFlightSpeed(v2);
  __asm
  {
    VMOV.F32        S0, #15.0
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VMOV            R1, S0
  }
  j_Mob::setFlightSpeed(v2, _R1);
  return j_j_j__ZN16RandomStrollGoal5startEv_0(v1);
}


signed int __fastcall WitherRandomAttackPosGoal::canUse(WitherRandomAttackPosGoal *this)
{
  WitherBoss *v2; // r5@1
  signed int v3; // r5@3
  int v4; // r0@6
  int v13; // r0@13
  int v14; // [sp+0h] [bp-38h]@0
  float v15; // [sp+4h] [bp-34h]@7
  int v16; // [sp+8h] [bp-30h]@7
  int v17; // [sp+Ch] [bp-2Ch]@7

  _R4 = this;
  v2 = (WitherBoss *)*((_DWORD *)this + 8);
  if ( j_Entity::getTarget(*((Entity **)this + 8)) )
  {
    if ( j_WitherBoss::isPowered(v2) )
    {
      v3 = 0;
    }
    else if ( j_WitherBoss::wantsToMove(v2) == 1 )
      v4 = j_Entity::getTarget(*((Entity **)_R4 + 8));
      _R0 = (*(int (**)(void))(*(_DWORD *)v4 + 52))();
      __asm
      {
        VLDR            S16, [R0]
        VLDR            S18, [R0,#4]
        VLDR            S20, [R0,#8]
      }
      (*(void (__fastcall **)(_DWORD))(**((_DWORD **)_R4 + 8) + 52))(*((_DWORD *)_R4 + 8));
      if ( !*((_BYTE *)_R4 + 36) )
        v15 = 0.0;
        v16 = 0;
        v17 = 0;
        if ( j_RandomPos::getPos(
               (RandomPos *)&v15,
               *((Vec3 **)_R4 + 8),
               (Mob *)*((_QWORD *)_R4 + 3),
               *((_QWORD *)_R4 + 3) >> 32,
               v14) == 1 )
        {
          _R0 = (*(int (**)(void))(**((_DWORD **)_R4 + 8) + 52))();
          __asm
          {
            VLDR            S0, [R0]
            VLDR            S2, [SP,#0x38+var_34]
            VSUB.F32        S0, S2, S0
            VSTR            S0, [SP,#0x38+var_34]
            VLDR            S2, [R0,#8]
            VLDR            S4, [SP,#0x38+var_2C]
            VSUB.F32        S2, S4, S2
            VMUL.F32        S4, S0, S0
            VMUL.F32        S6, S2, S2
            VSTR            S2, [SP,#0x38+var_2C]
          }
          v16 = 0;
            VADD.F32        S4, S4, S6
            VLDR            S6, =0.0001
            VSQRT.F32       S4, S4
            VCMPE.F32       S4, S6
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            _R0 = &Vec3::ZERO;
            __asm
            {
              VLDR            S0, [R0]
              VLDR            S4, [R0,#4]
              VLDR            S2, [R0,#8]
            }
          else
              VDIV.F32        S2, S2, S4
              VDIV.F32        S0, S0, S4
              VLDR            S4, =0.0
            VLDR            S6, [R4,#0x18]
            VCVT.F32.S32    S6, S6
            VMUL.F32        S0, S6, S0
            VMUL.F32        S4, S6, S4
            VMUL.F32        S2, S6, S2
            VADD.F32        S0, S0, S16
            VADD.F32        S4, S4, S18
            VADD.F32        S2, S2, S20
            VSTR            S4, [SP,#0x38+var_30]
          v13 = *(_DWORD *)((*(int (**)(void))(**((_DWORD **)_R4 + 8) + 52))() + 4);
          v3 = 1;
          v16 = v13;
          *((float *)_R4 + 2) = v15;
          *((_DWORD *)_R4 + 3) = v13;
          *((_DWORD *)_R4 + 4) = v17;
        }
    else
  }
  else
    v3 = 0;
  return v3;
}


int __fastcall WitherRandomAttackPosGoal::stop(WitherRandomAttackPosGoal *this)
{
  Goal *v1; // r4@1
  Mob *v2; // r5@1

  v1 = this;
  *((_BYTE *)this + 36) = 0;
  v2 = (Mob *)*((_DWORD *)this + 8);
  _R0 = j_Mob::getFlightSpeed(*((Mob **)this + 8));
  __asm
  {
    VMOV            S2, R0
    VLDR            S0, =0.066667
    VMUL.F32        S0, S2, S0
    VMOV            R1, S0
  }
  j_Mob::setFlightSpeed(v2, _R1);
  j_WitherBoss::setWantsToMove(v2, 0);
  j_WitherBoss::setIsPathing(v2, 0);
  j_WitherBoss::setShotDelay(v2, 20);
  return j_j_j__ZN4Goal4stopEv_0(v1);
}


RandomStrollGoal *__fastcall WitherRandomAttackPosGoal::WitherRandomAttackPosGoal(RandomStrollGoal *this, int a2, int a3, int a4, int a5)
{
  RandomStrollGoal *v5; // r4@1

  v5 = this;
  j_RandomStrollGoal::RandomStrollGoal(this, (Mob *)a2, *(float *)&a3, a4, a5);
  *(_DWORD *)v5 = &off_271B158;
  *((_BYTE *)v5 + 36) = 0;
  j_Goal::setRequiredControlFlags(v5, 3);
  return v5;
}
