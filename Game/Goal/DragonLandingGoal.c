

unsigned int __fastcall DragonLandingGoal::canUse(DragonLandingGoal *this)
{
  return j_Entity::isSitting(*((Entity **)this + 2)) ^ 1;
}


int __fastcall DragonLandingGoal::start(DragonLandingGoal *this)
{
  DragonLandingGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2
  int result; // r0@3

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 2), 0, 0, 0);
  v2 = (Path *)*((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = 0;
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  j_Mob::setFlightSpeed(*((Mob **)v1 + 2), 0.6);
  result = j_EnderDragon::setTurnSpeed(*((EnderDragon **)v1 + 2), 0.7);
  *((_BYTE *)v1 + 16) = 0;
  return result;
}


signed int __fastcall DragonLandingGoal::canContinueToUse(DragonLandingGoal *this)
{
  DragonLandingGoal *v1; // r4@1
  signed int result; // r0@4
  float v8; // [sp+4h] [bp-14h]@2

  v1 = this;
  if ( !*((_BYTE *)this + 16) )
    goto LABEL_8;
  j_EnderDragon::getTargetPos((EnderDragon *)&v8, *((_DWORD *)this + 2));
  _R0 = (EnderDragon *)*((_DWORD *)v1 + 2);
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
    VMOV.F32        S2, #1.0
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    j_EnderDragon::resetFlameCount(_R0);
    (*(void (**)(void))(**((_DWORD **)v1 + 2) + 352))();
    result = 0;
  else
LABEL_8:
    result = 1;
  return result;
}


void __fastcall DragonLandingGoal::~DragonLandingGoal(DragonLandingGoal *this)
{
  DragonLandingGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_272547C;
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


int __fastcall DragonLandingGoal::stop(DragonLandingGoal *this)
{
  DragonLandingGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 2), 0, 0, 0);
  j_Mob::setFlightSpeed(*((Mob **)v1 + 2), 0.6);
  result = j_EnderDragon::setTurnSpeed(*((EnderDragon **)v1 + 2), 0.7);
  *((_BYTE *)v1 + 16) = 0;
  return result;
}


Path *__fastcall DragonLandingGoal::findNewTarget(DragonLandingGoal *this)
{
  DragonLandingGoal *v1; // r4@1
  Path *v2; // r0@1
  int v3; // r8@3
  int v4; // r5@3
  BlockSource *v5; // r0@3
  int v6; // r0@3
  int v8; // r7@3
  int v9; // r0@3
  int v18; // r0@7
  Node *v20; // r6@9
  int v21; // r0@9
  Path *v22; // r1@9
  Path *v23; // r0@9
  Path *v24; // r0@10
  Path *v25; // r0@11
  Path *v26; // r0@12
  Path *result; // r0@14
  int v29; // r6@16
  BlockSource *v30; // r0@16
  Path *v36; // [sp+4h] [bp-64h]@9
  char v37; // [sp+8h] [bp-60h]@9
  int v38; // [sp+30h] [bp-38h]@3
  int v39; // [sp+34h] [bp-34h]@3
  int v40; // [sp+38h] [bp-30h]@3
  int v41; // [sp+3Ch] [bp-2Ch]@3
  int v42; // [sp+40h] [bp-28h]@3
  int v43; // [sp+44h] [bp-24h]@3

  v1 = this;
  v2 = (Path *)*((_DWORD *)this + 3);
  if ( !v2 || j_Path::isDone(v2) == 1 )
  {
    v3 = j_EnderDragon::findClosestNode(*((EnderDragon **)v1 + 2));
    v4 = EndPodiumFeature::END_PODIUM_LOCATION;
    v5 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
    v6 = j_BlockSource::getAboveTopSolidBlock(v5, (const BlockPos *)&EndPodiumFeature::END_PODIUM_LOCATION, 0, 0);
    _R6 = v6;
    v8 = dword_281D338;
    v41 = v4;
    v42 = v6;
    v43 = dword_281D338;
    v9 = j_Entity::getDimension(*((Entity **)v1 + 2));
    v38 = v4;
    v39 = _R6;
    v40 = v8;
    _R0 = j_Dimension::fetchNearestAttackablePlayer(v9, (int)&v38, 1124073472, 0);
    if ( _R0 )
    {
      __asm
      {
        VLDR            S0, [R0,#0x48]
        VLDR            S2, [R0,#0x50]
        VMUL.F32        S4, S0, S0
        VMUL.F32        S6, S2, S2
        VADD.F32        S4, S6, S4
        VLDR            S6, =0.0001
        VSQRT.F32       S4, S4
        VCMPE.F32       S4, S6
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        _R0 = &Vec3::ZERO;
        __asm
        {
          VLDR            S0, [R0]
          VLDR            S2, [R0,#8]
        }
      else
          VDIV.F32        S2, S2, S4
          VDIV.F32        S0, S0, S4
      __asm { VLDR            S4, =-40.0 }
      _R2 = (mce::Math *)1121058816;
      v18 = *((_DWORD *)v1 + 2);
        VMUL.F32        S0, S0, S4
        VMUL.F32        S2, S2, S4
        VMOV            R1, S0
        VMOV            R3, S2
    }
    else
      __asm { VMOV            S0, R6 }
      _R1 = (mce::Math *)1109393408;
      _R3 = 0;
      __asm { VCVT.F32.S32    S0, S0 }
      __asm { VMOV            R2, S0 }
    v20 = (Node *)j_EnderDragon::findClosestNode(v18, _R1, _R2, _R3);
    v21 = j_Node::Node((Node *)&v37, (const BlockPos *)&v41);
    j_EnderDragon::findPath((EnderDragon *)&v36, *((_DWORD *)v1 + 2), v3, v20, v21);
    v22 = v36;
    v36 = 0;
    v23 = (Path *)*((_DWORD *)v1 + 3);
    *((_DWORD *)v1 + 3) = v22;
    if ( v23 )
      v24 = j_Path::~Path(v23);
      j_operator delete((void *)v24);
      if ( v36 )
        v25 = j_Path::~Path(v36);
        j_operator delete((void *)v25);
    v26 = (Path *)*((_DWORD *)v1 + 3);
    if ( v26 )
      j_Path::next(v26);
  }
  j_DragonLandingGoal::navigateToNextPathNode(v1);
  result = (Path *)*((_DWORD *)v1 + 3);
  if ( result )
    result = (Path *)j_Path::isDone(result);
    if ( result == (Path *)1 )
      _R5 = &EndPodiumFeature::END_PODIUM_LOCATION;
      *((_BYTE *)v1 + 16) = 1;
      v29 = *((_DWORD *)v1 + 2);
        VLDR            S0, [R5]
        VCVT.F32.S32    S16, S0
      v30 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
      _R0 = j_BlockSource::getAboveTopSolidBlock(v30, (const BlockPos *)&EndPodiumFeature::END_PODIUM_LOCATION, 0, 0);
        VMOV            S0, R0
        VMOV            R1, S16
        VCVT.F32.S32    S0, S0
      _R0 = dword_281D338;
        VMOV            S2, R0
        VCVT.F32.S32    S2, S2
        VMOV            R2, S0
      j_EnderDragon::setTargetPos(v29, _R1, _R2, _R3);
      j_Mob::setFlightSpeed(*((Mob **)v1 + 2), 1.5);
      result = (Path *)j_EnderDragon::setTurnSpeed(*((EnderDragon **)v1 + 2), 0.0);
  return result;
}


void __fastcall DragonLandingGoal::~DragonLandingGoal(DragonLandingGoal *this)
{
  DragonLandingGoal::~DragonLandingGoal(this);
}


Goal *__fastcall DragonLandingGoal::DragonLandingGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_272547C;
  *((_DWORD *)v3 + 2) = v2;
  *((_DWORD *)v3 + 3) = 0;
  j_Goal::setRequiredControlFlags(v3, 1);
  return v3;
}


Path *__fastcall DragonLandingGoal::navigateToNextPathNode(DragonLandingGoal *this)
{
  DragonLandingGoal *v1; // r4@1
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


int __fastcall DragonLandingGoal::~DragonLandingGoal(DragonLandingGoal *this)
{
  DragonLandingGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_272547C;
  v2 = (Path *)*((_DWORD *)this + 3);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 3) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


Path *__fastcall DragonLandingGoal::tick(DragonLandingGoal *this)
{
  DragonLandingGoal *v1; // r4@1
  Path *result; // r0@1
  float v8; // [sp+0h] [bp-20h]@7
  int v11; // [sp+Ch] [bp-14h]@2
  int v12; // [sp+10h] [bp-10h]@3
  int v13; // [sp+14h] [bp-Ch]@6

  v1 = this;
  result = (Path *)*((_BYTE *)this + 16);
  if ( !result )
  {
    j_EnderDragon::getTargetPos((EnderDragon *)&v11, *((_DWORD *)v1 + 2));
    _ZF = (v11 & 0x7FFFFFFF) == 0;
    if ( !(v11 & 0x7FFFFFFF) )
      _ZF = (v12 & 0x7FFFFFFF) == 0;
    if ( _ZF && !(v13 & 0x7FFFFFFF) )
      goto LABEL_15;
    j_EnderDragon::getTargetPos((EnderDragon *)&v8, *((_DWORD *)v1 + 2));
    _R0 = *((_DWORD *)v1 + 2);
    __asm
    {
      VLDR            S0, [SP,#0x20+var_20]
      VLDR            S2, [SP,#0x20+var_1C]
      VLDR            S6, [R0,#0x48]
      VLDR            S8, [R0,#0x4C]
      VSUB.F32        S0, S6, S0
      VLDR            S4, [SP,#0x20+var_18]
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
      VLDR            S2, =22500.0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF)
      || (result = (Path *)*(_WORD *)(_R0 + 218), (_BYTE)result)
      || (unsigned int)result >= 0x100 )
LABEL_15:
      result = j_DragonLandingGoal::findNewTarget(v1);
  }
  return result;
}
