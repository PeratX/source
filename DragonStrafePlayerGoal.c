

int __fastcall DragonStrafePlayerGoal::canContinueToUse(DragonStrafePlayerGoal *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 21) )
    result = 0;
  else
    result = *((_DWORD *)this + 6) != 0;
  return result;
}


int __fastcall DragonStrafePlayerGoal::tick(DragonStrafePlayerGoal *this)
{
  DragonStrafePlayerGoal *v1; // r4@1
  int result; // r0@1
  Path *v3; // r0@2
  int *v15; // r7@7
  int v19; // r1@17
  signed int v20; // r1@17
  int v21; // r8@18
  ShooterComponent *v32; // r0@36
  int v33; // r1@37
  Path *v34; // r0@37
  float v35; // [sp+0h] [bp-58h]@12
  int v38; // [sp+Ch] [bp-4Ch]@7
  int v39; // [sp+10h] [bp-48h]@8
  int v40; // [sp+14h] [bp-44h]@11

  v1 = this;
  result = *((_DWORD *)this + 6);
  if ( result )
  {
    v3 = (Path *)*((_DWORD *)v1 + 3);
    if ( v3 && j_Path::isDone(v3) == 1 )
    {
      _R0 = *((_DWORD *)v1 + 2);
      _R1 = *((float *)v1 + 6);
      __asm
      {
        VLDR            S0, [R0,#0x48]
        VLDR            S16, [R1,#0x48]
        VLDR            S2, [R0,#0x50]
        VLDR            S18, [R1,#0x50]
        VSUB.F32        S0, S16, S0
        VSUB.F32        S2, S18, S2
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VADD.F32        S0, S2, S0
        VMOV            R0, S0
      }
      _R0 = j_mce::Math::sqrt(_R0, _R1);
        VLDR            S0, =0.0125
        VMOV            S2, R0
        VMOV.F32        S4, #10.0
        VMUL.F32        S0, S2, S0
        VLDR            S2, =-0.6
        VMOV            R3, S18
        VADD.F32        S0, S0, S2
        VCMPE.F32       S0, S4
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S4 }
      _R1 = *((_DWORD *)v1 + 6);
        VLDR            S2, [R1,#0x4C]
        VMOV            R1, S16
        VMOV            R2, S0
      j_EnderDragon::setTargetPos(*((_DWORD *)v1 + 2), _R1, _R2, _R3);
    }
    v15 = (int *)((char *)v1 + 8);
    j_EnderDragon::getTargetPos((EnderDragon *)&v38, *((_DWORD *)v1 + 2));
    _ZF = (v38 & 0x7FFFFFFF) == 0;
    if ( !(v38 & 0x7FFFFFFF) )
      _ZF = (v39 & 0x7FFFFFFF) == 0;
    if ( _ZF && !(v40 & 0x7FFFFFFF) )
      goto LABEL_43;
    j_EnderDragon::getTargetPos((EnderDragon *)&v35, *v15);
    _R1 = (const Entity *)*v15;
    __asm
      VLDR            S0, [SP,#0x58+var_58]
      VLDR            S2, [SP,#0x58+var_54]
      VLDR            S6, [R1,#0x48]
      VLDR            S8, [R1,#0x4C]
      VSUB.F32        S0, S6, S0
      VLDR            S4, [SP,#0x58+var_50]
      VSUB.F32        S2, S8, S2
      VLDR            S10, [R1,#0x50]
      VSUB.F32        S4, S10, S4
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VLDR            S2, =100.0
      VADD.F32        S0, S0, S4
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      VLDR            S2, =22500.0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_43:
      j_DragonStrafePlayerGoal::findNewTarget(v1);
      _R1 = (const Entity *)*((_DWORD *)v1 + 2);
    _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 6), _R1);
      VLDR            S0, =4096.0
      VMOV            S2, R0
      VCMPE.F32       S2, S0
    if ( !(_NF ^ _VF) )
      result = *((_DWORD *)v1 + 4);
      if ( result < 1 )
        return result;
      --result;
LABEL_25:
      *((_DWORD *)v1 + 4) = result;
      return result;
    v19 = *((_DWORD *)v1 + 6);
    result = (*(int (**)(void))(*(_DWORD *)*v15 + 252))();
    v20 = *((_DWORD *)v1 + 4);
    if ( result != 1 )
      if ( v20 < 1 )
      result = v20 - 1;
      goto LABEL_25;
    v21 = v20 + 1;
    *((_DWORD *)v1 + 4) = v20 + 1;
    _R5 = (Entity *)*v15;
    _R0 = *((_DWORD *)v1 + 6);
      VLDR            S22, =0.0001
      VLDR            S0, [R5,#0x48]
      VLDR            S4, [R0,#0x48]
      VLDR            S2, [R5,#0x50]
      VLDR            S6, [R0,#0x50]
      VSUB.F32        S0, S4, S0
      VSUB.F32        S2, S6, S2
      VMUL.F32        S4, S0, S0
      VMUL.F32        S6, S2, S2
      VADD.F32        S4, S6, S4
      VSQRT.F32       S4, S4
      VCMPE.F32       S4, S22
      _R0 = &Vec3::ZERO;
        VLDR            S16, [R0]
        VLDR            S18, [R0,#4]
        VLDR            S20, [R0,#8]
    else
        VDIV.F32        S20, S2, S4
        VDIV.F32        S16, S0, S4
        VLDR            S18, =0.0
    __asm { VLDR            S0, [R5,#0x7C] }
    _R0 = &mce::Math::DEGRAD;
      VLDR            S2, [R0]
      VMUL.F32        S0, S2, S0
      VMOV            R6, S0
    _R0 = j_sinf(_R6);
    __asm { VMOV            S24, R0 }
    _R0 = j_cosf(_R6);
      VMOV            S0, R0
      VMUL.F32        S2, S24, S24
      VADD.F32        S2, S4, S2
      VSQRT.F32       S2, S2
      VCMPE.F32       S2, S22
        VLDR            S0, [R0]
        VLDR            S2, [R0,#4]
        VLDR            S4, [R0,#8]
        VNEG.F32        S4, S0
        VDIV.F32        S0, S24, S2
        VDIV.F32        S4, S4, S2
        VLDR            S2, =0.0
      VMUL.F32        S4, S4, S20
      VMUL.F32        S2, S2, S18
      VMUL.F32        S0, S0, S16
      VADD.F32        S2, S2, S4
      VMOV            R0, S0
    result = j_acosf(_R0);
      VMOV.F32        S4, #0.5
    _R1 = &mce::Math::RADDEG;
      VLDR            S0, [R1]
      VMUL.F32        S0, S0, S2
      VMOV.F32        S2, #10.0
      result = DragonStrafePlayerGoal::FIREBALL_CHARGE_AMOUNT;
      if ( v21 >= DragonStrafePlayerGoal::FIREBALL_CHARGE_AMOUNT )
        __asm
        {
          VCMPEGE.F32     S0, #0.0
          VMRSGE          APSR_nzcv, FPSCR
        }
        result = *((_BYTE *)v1 + 21);
        if ( !*((_BYTE *)v1 + 21) )
          if ( j_Entity::getShooterComponent(_R5) )
          {
            v32 = (ShooterComponent *)j_Entity::getShooterComponent((Entity *)*v15);
            j_ShooterComponent::onShoot(v32);
          }
          v33 = *((_DWORD *)v1 + 6);
          (*(void (**)(void))(**((_DWORD **)v1 + 2) + 904))();
          *((_DWORD *)v1 + 4) = 0;
          v34 = (Path *)*((_DWORD *)v1 + 3);
          if ( v34 && !j_Path::isDone(v34) )
            do
              j_Path::next(*((Path **)v1 + 3));
            while ( j_Path::isDone(*((Path **)v1 + 3)) != 1 );
          result = 1;
          *((_BYTE *)v1 + 21) = 1;
  }
  return result;
}


Path *__fastcall DragonStrafePlayerGoal::findNewTarget(DragonStrafePlayerGoal *this)
{
  DragonStrafePlayerGoal *v1; // r4@1
  Path *v2; // r0@1
  int v3; // r5@3
  Level *v4; // r0@3
  char *v5; // r0@3
  char v6; // r0@3
  int v7; // r1@3
  int v8; // r2@3
  signed int v9; // r3@3
  EndDragonFight *v11; // r0@8
  int v18; // r3@9
  Node *v19; // r3@9
  Path *v20; // r1@11
  Path *v21; // r0@11
  Path *v22; // r0@12
  Path *v23; // r0@13
  Path *v24; // r0@14
  Path *v26; // [sp+4h] [bp-14h]@11

  v1 = this;
  v2 = (Path *)*((_DWORD *)this + 3);
  if ( !v2 || j_Path::isDone(v2) == 1 )
  {
    v3 = j_EnderDragon::findClosestNode(*((EnderDragon **)v1 + 2));
    v4 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
    v5 = j_Level::getRandom(v4);
    v6 = j_Random::_genRandInt32((Random *)v5);
    v7 = *((_BYTE *)v1 + 20);
    v8 = v3;
    v9 = 1;
    if ( !(v6 & 7) )
    {
      v7 ^= 1u;
      *((_BYTE *)v1 + 20) = v7;
      v8 = v3 + 6;
    }
    if ( !v7 )
      v9 = -1;
    _R6 = v9 + v8;
    if ( j_EnderDragon::getDragonFight(*((EnderDragon **)v1 + 2))
      && (v11 = (EndDragonFight *)j_EnderDragon::getDragonFight(*((EnderDragon **)v1 + 2)),
          j_EndDragonFight::getCrystalsAlive(v11) > 0) )
      _R0 = 715827883;
      __asm { SMMUL.W         R0, R6, R0 }
      v18 = _R6 - 12 * (((signed int)_R0 >> 1) + (_R0 >> 31));
      v19 = (Node *)(v18 + (v18 < 0 ? 0xC : 0));
    else
      v19 = (Node *)(((_R6 + 4) & 7) + 12);
    j_EnderDragon::findPath((EnderDragon *)&v26, *((_DWORD *)v1 + 2), v3, v19, 0);
    v20 = v26;
    v26 = 0;
    v21 = (Path *)*((_DWORD *)v1 + 3);
    *((_DWORD *)v1 + 3) = v20;
    if ( v21 )
      v22 = j_Path::~Path(v21);
      j_operator delete((void *)v22);
      if ( v26 )
      {
        v23 = j_Path::~Path(v26);
        j_operator delete((void *)v23);
      }
    v24 = (Path *)*((_DWORD *)v1 + 3);
    if ( v24 )
      j_Path::next(v24);
  }
  return j_DragonStrafePlayerGoal::navigateToNextPathNode(v1);
}


int __fastcall DragonStrafePlayerGoal::start(DragonStrafePlayerGoal *this)
{
  DragonStrafePlayerGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2
  Entity *v4; // r0@3
  int result; // r0@3

  v1 = this;
  v2 = (Path *)*((_DWORD *)this + 3);
  *((_DWORD *)v1 + 3) = 0;
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 6) = 0;
  *((_BYTE *)v1 + 21) = 0;
  v4 = (Entity *)j_Entity::getTarget(*((Entity **)v1 + 2));
  j_DragonStrafePlayerGoal::setTarget(v1, v4);
  (*(void (**)(void))(**((_DWORD **)v1 + 2) + 352))();
  j_Mob::setFlightSpeed(*((Mob **)v1 + 2), 0.6);
  result = j_EnderDragon::setTurnSpeed(*((EnderDragon **)v1 + 2), 0.7);
  *((_DWORD *)v1 + 4) = 0;
  return result;
}


int __fastcall DragonStrafePlayerGoal::~DragonStrafePlayerGoal(DragonStrafePlayerGoal *this)
{
  DragonStrafePlayerGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_27254E4;
  v2 = (Path *)*((_DWORD *)this + 3);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 3) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


int __fastcall DragonStrafePlayerGoal::stop(DragonStrafePlayerGoal *this)
{
  DragonStrafePlayerGoal *v1; // r4@1

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 2), 0, 0, 0);
  j_Mob::setFlightSpeed(*((Mob **)v1 + 2), 0.6);
  j_EnderDragon::setTurnSpeed(*((EnderDragon **)v1 + 2), 0.7);
  return (*(int (**)(void))(**((_DWORD **)v1 + 2) + 340))();
}


void __fastcall DragonStrafePlayerGoal::~DragonStrafePlayerGoal(DragonStrafePlayerGoal *this)
{
  DragonStrafePlayerGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_27254E4;
  v2 = (Path *)*((_DWORD *)this + 3);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 3) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


Path *__fastcall DragonStrafePlayerGoal::navigateToNextPathNode(DragonStrafePlayerGoal *this)
{
  DragonStrafePlayerGoal *v1; // r4@1
  Path *result; // r0@1
  int v3; // r0@3
  int v8; // r5@3
  int v9; // r6@3
  Level *v10; // r0@4
  char *v11; // r0@4
  int v14; // [sp+4h] [bp-34h]@3
  int v16; // [sp+Ch] [bp-2Ch]@3

  v1 = this;
  result = (Path *)*((_DWORD *)this + 3);
  if ( result )
  {
    result = (Path *)j_Path::isDone(result);
    if ( !result )
    {
      v3 = j_Path::currentPos(*((Path **)v1 + 3));
      j_Vec3::Vec3((int)&v14, v3);
      j_Path::next(*((Path **)v1 + 3));
      __asm { VMOV.F32        S20, #20.0 }
      v8 = v16;
      v9 = v14;
      __asm
      {
        VLDR            S16, [SP,#0x38+var_30]
        VLDR            D9, =2.32830644e-10
      }
      do
        v10 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
        v11 = j_Level::getRandom(v10);
        _R0 = j_Random::_genRandInt32((Random *)v11);
        __asm
        {
          VMOV            S0, R0
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D9
          VCVT.F32.F64    S0, D0
          VMUL.F32        S0, S0, S20
          VADD.F32        S0, S0, S16
          VLDR            S16, [SP,#0x38+var_30]
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
      while ( _NF ^ _VF );
      __asm { VMOV            R2, S0 }
      result = (Path *)j_EnderDragon::setTargetPos(*((_DWORD *)v1 + 2), v9, _R2, v8);
    }
  }
  return result;
}


Goal *__fastcall DragonStrafePlayerGoal::DragonStrafePlayerGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_27254E4;
  *((_DWORD *)v3 + 2) = v2;
  *((_DWORD *)v3 + 3) = 0;
  j_Goal::setRequiredControlFlags(v3, 1);
  return v3;
}


void __fastcall DragonStrafePlayerGoal::~DragonStrafePlayerGoal(DragonStrafePlayerGoal *this)
{
  DragonStrafePlayerGoal::~DragonStrafePlayerGoal(this);
}


int __fastcall DragonStrafePlayerGoal::setTarget(int result, Entity *a2)
{
  int v2; // r4@1
  int v3; // r5@2
  Node *v4; // r6@2
  float v5; // r1@2
  float v14; // r1@2
  float v16; // r1@2
  int v20; // r0@4
  Path *v21; // r1@4
  Path *v22; // r0@4
  Path *v23; // r0@5
  Path *v24; // r0@6
  Path *v25; // [sp+4h] [bp-6Ch]@4
  float v26; // [sp+8h] [bp-68h]@4
  char v27; // [sp+14h] [bp-5Ch]@4
  char v28; // [sp+20h] [bp-50h]@4

  v2 = result;
  if ( a2 )
  {
    *(_DWORD *)(result + 24) = a2;
    (*(void (**)(void))(**(_DWORD **)(result + 8) + 340))();
    v3 = j_EnderDragon::findClosestNode(*(EnderDragon **)(v2 + 8));
    v4 = (Node *)j_EnderDragon::findClosestNode(
                   *(_DWORD *)(v2 + 8),
                   *(mce::Math **)(*(_DWORD *)(v2 + 24) + 72),
                   *(mce::Math **)(*(_DWORD *)(v2 + 24) + 76),
                   *(mce::Math **)(*(_DWORD *)(v2 + 24) + 80));
    _R0 = j_mce::Math::floor(*(mce::Math **)(*(_DWORD *)(v2 + 24) + 72), v5);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S16, S0
    }
    _R0 = j_mce::Math::floor(*(mce::Math **)(*(_DWORD *)(v2 + 24) + 80), *(float *)(v2 + 24));
      VCVT.F32.S32    S18, S0
    _R0 = *(_DWORD *)(v2 + 8);
      VLDR            S0, [R0,#0x48]
      VLDR            S2, [R0,#0x50]
      VSUB.F32        S0, S16, S0
      VSUB.F32        S2, S18, S2
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    _R0 = j_mce::Math::sqrt(_R0, v14);
      VLDR            S0, =0.0125
      VMOV            S2, R0
      VMOV.F32        S4, #10.0
      VMUL.F32        S0, S2, S0
      VLDR            S2, =-0.6
      VADD.F32        S0, S0, S2
      VCMPE.F32       S0, S4
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S4 }
    _R0 = *(_DWORD *)(v2 + 24);
      VLDR            S2, [R0,#0x4C]
    _R0 = j_mce::Math::floor(_R0, v16);
      VCVT.F32.S32    S0, S0
      VSTR            S16, [SP,#0x70+var_68]
      VSTR            S0, [SP,#0x70+var_64]
      VSTR            S18, [SP,#0x70+var_60]
    j_BlockPos::BlockPos((int)&v27, (int)&v26);
    v20 = j_Node::Node((Node *)&v28, (const BlockPos *)&v27);
    j_EnderDragon::findPath((EnderDragon *)&v25, *(_DWORD *)(v2 + 8), v3, v4, v20);
    v21 = v25;
    v25 = 0;
    v22 = *(Path **)(v2 + 12);
    *(_DWORD *)(v2 + 12) = v21;
    if ( v22 )
      v23 = j_Path::~Path(v22);
      j_operator delete((void *)v23);
      if ( v25 )
      {
        v24 = j_Path::~Path(v25);
        j_operator delete((void *)v24);
      }
    result = *(_DWORD *)(v2 + 12);
    if ( result )
      j_Path::next((Path *)result);
      result = (int)j_DragonStrafePlayerGoal::navigateToNextPathNode((DragonStrafePlayerGoal *)v2);
  }
  return result;
}


int __fastcall DragonStrafePlayerGoal::canUse(DragonStrafePlayerGoal *this)
{
  DragonStrafePlayerGoal *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( j_Entity::isSitting(*((Entity **)this + 2)) )
    result = 0;
  else
    result = j_Entity::getTarget(*((Entity **)v1 + 2)) != 0;
  return result;
}
