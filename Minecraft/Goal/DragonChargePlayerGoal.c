

int __fastcall DragonChargePlayerGoal::canUse(DragonChargePlayerGoal *this)
{
  DragonChargePlayerGoal *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( j_Entity::isSitting(*((Entity **)this + 2)) == 1 )
    result = j_Entity::getTarget(*((Entity **)v1 + 2)) != 0;
  else
    result = 0;
  return result;
}


void __fastcall DragonChargePlayerGoal::~DragonChargePlayerGoal(DragonChargePlayerGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


unsigned int __fastcall DragonChargePlayerGoal::tick(DragonChargePlayerGoal *this)
{
  DragonChargePlayerGoal *v1; // r4@1
  unsigned int result; // r0@4
  float v8; // [sp+4h] [bp-14h]@1

  v1 = this;
  j_EnderDragon::getTargetPos((EnderDragon *)&v8, *((_DWORD *)this + 2));
  _R0 = *((_DWORD *)v1 + 2);
  __asm
  {
    VLDR            S0, [SP,#0x18+var_14]
    VLDR            S2, [SP,#0x18+var_10]
    VLDR            S6, [R0,#0x48]
    VLDR            S8, [R0,#0x4C]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [SP,#0x18+var_C]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R0,#0x50]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VLDR            S2, =100.0
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    goto LABEL_9;
    VLDR            S2, =22500.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) || (result = *(_WORD *)(_R0 + 218), (_BYTE)result) || result >= 0x100 )
LABEL_9:
    result = *((_DWORD *)v1 + 3) + 1;
    *((_DWORD *)v1 + 3) = result;
  return result;
}


Goal *__fastcall DragonChargePlayerGoal::DragonChargePlayerGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_27253AC;
  *((_DWORD *)v3 + 2) = v2;
  j_Goal::setRequiredControlFlags(v3, 1);
  return v3;
}


int __fastcall DragonChargePlayerGoal::stop(DragonChargePlayerGoal *this)
{
  DragonChargePlayerGoal *v1; // r4@1

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 2), 0, 0, 0);
  *((_DWORD *)v1 + 3) = 0;
  j_Mob::setFlightSpeed(*((Mob **)v1 + 2), 0.6);
  return (*(int (**)(void))(**((_DWORD **)v1 + 2) + 340))();
}


void __fastcall DragonChargePlayerGoal::~DragonChargePlayerGoal(DragonChargePlayerGoal *this)
{
  DragonChargePlayerGoal::~DragonChargePlayerGoal(this);
}


int __fastcall DragonChargePlayerGoal::start(DragonChargePlayerGoal *this)
{
  DragonChargePlayerGoal *v1; // r4@1
  Dimension *v2; // r0@1
  int v3; // r3@1
  int v4; // r0@1
  int result; // r0@2

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 2) + 352))();
  *((_DWORD *)v1 + 3) = 0;
  j_Mob::setFlightSpeed(*((Mob **)v1 + 2), 3.0);
  j_EnderDragon::setTurnSpeed(*((EnderDragon **)v1 + 2), 0.7);
  v2 = (Dimension *)j_Entity::getDimension(*((Entity **)v1 + 2));
  v3 = j_Dimension::fetchNearestAttackablePlayer(
         v2,
         *((Entity **)v1 + 2),
         DragonChargePlayerGoal::SITTING_CHARGE_VIEW_RANGE);
  v4 = *((_DWORD *)v1 + 2);
  if ( v3 )
    result = j_j_j__ZN11EnderDragon12setTargetPosE4Vec3_0(
               v4,
               *(_DWORD *)(v3 + 72),
               *(_DWORD *)(v3 + 76),
               *(_DWORD *)(v3 + 80));
  else
    result = j_j_j__ZN11EnderDragon12setTargetPosE4Vec3_0(v4, 0, 0, 0);
  return result;
}


int __fastcall DragonChargePlayerGoal::canContinueToUse(DragonChargePlayerGoal *this)
{
  DragonChargePlayerGoal *v1; // r4@1
  bool v2; // zf@1
  signed int v3; // r0@6
  int result; // r0@8
  int v5; // [sp+4h] [bp-14h]@1
  int v6; // [sp+8h] [bp-10h]@2
  int v7; // [sp+Ch] [bp-Ch]@5

  v1 = this;
  j_EnderDragon::getTargetPos((EnderDragon *)&v5, *((_DWORD *)this + 2));
  v2 = (v5 & 0x7FFFFFFF) == 0;
  if ( !(v5 & 0x7FFFFFFF) )
    v2 = (v6 & 0x7FFFFFFF) == 0;
  result = 0;
  if ( !v2 || v7 & 0x7FFFFFFF )
  {
    v3 = *((_DWORD *)v1 + 3);
    if ( v3 < 1 || (*((_DWORD *)v1 + 3) = v3 + 1, v3 < DragonChargePlayerGoal::CHARGE_RECOVERY_TIME) )
      result = 1;
  }
  return result;
}
