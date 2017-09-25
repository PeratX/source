

signed int __fastcall DragonTakeoffGoal::canContinueToUse(DragonTakeoffGoal *this)
{
  DragonTakeoffGoal *v1; // r4@1
  int v2; // r7@1
  BlockSource *v3; // r0@1
  signed int v4; // r6@1
  int v11; // [sp+0h] [bp-20h]@1
  int v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@1

  v1 = this;
  v2 = EndPodiumFeature::END_PODIUM_LOCATION;
  v3 = (BlockSource *)j_Entity::getRegion(*((Entity **)this + 4));
  v4 = 0;
  v11 = v2;
  v12 = j_BlockSource::getAboveTopSolidBlock(v3, (const BlockPos *)&EndPodiumFeature::END_PODIUM_LOCATION, 0, 0);
  v13 = dword_281D338;
  _R0 = j_Entity::distanceSqrToBlockPosCenter(*((Entity **)v1 + 4), (const BlockPos *)&v11);
  __asm
  {
    VLDR            S0, =100.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v4 = 1;
  return v4;
}


signed int __fastcall DragonTakeoffGoal::canUse(DragonTakeoffGoal *this)
{
  DragonTakeoffGoal *v1; // r5@1
  signed int v2; // r4@1

  v1 = this;
  v2 = 0;
  if ( j_Entity::isSitting(*((Entity **)this + 4)) == 1 && !j_Entity::getTarget(*((Entity **)v1 + 4)) )
    v2 = 1;
  return v2;
}


Path *__fastcall DragonTakeoffGoal::findNewTarget(DragonTakeoffGoal *this)
{
  DragonTakeoffGoal *v1; // r4@1
  int v2; // r5@1
  EndDragonFight *v10; // r0@2
  int v13; // r3@3
  Node *v14; // r3@3
  Path *v15; // r1@5
  Path *v16; // r0@5
  Path *v17; // r0@6
  Path *v18; // r0@7
  Path *result; // r0@8
  Path *v20; // [sp+8h] [bp-20h]@5
  float v21; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  v2 = j_EnderDragon::findClosestNode(*((EnderDragon **)this + 4));
  (*(void (__fastcall **)(float *))(**((_DWORD **)v1 + 4) + 244))(&v21);
  __asm
  {
    VLDR            S0, =-40.0
    VLDR            S2, [SP,#0x28+var_1C]
    VLDR            S4, [SP,#0x28+var_14]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S0, S4, S0
    VMOV            R1, S2
    VMOV            R3, S0
  }
  _R6 = j_EnderDragon::findClosestNode(*((_DWORD *)v1 + 4), _R1, (mce::Math *)0x42D20000, _R3);
  if ( j_EnderDragon::getDragonFight(*((EnderDragon **)v1 + 4))
    && (v10 = (EndDragonFight *)j_EnderDragon::getDragonFight(*((EnderDragon **)v1 + 4)),
        j_EndDragonFight::getCrystalsAlive(v10) > 0) )
    _R0 = 715827883;
    __asm { SMMUL.W         R0, R6, R0 }
    v13 = _R6 - 12 * (((signed int)_R0 >> 1) + (_R0 >> 31));
    v14 = (Node *)(v13 + (v13 < 0 ? 0xC : 0));
  else
    v14 = (Node *)(((_R6 + 4) & 7) + 12);
  j_EnderDragon::findPath((EnderDragon *)&v20, *((_DWORD *)v1 + 4), v2, v14, 0);
  v15 = v20;
  v20 = 0;
  v16 = (Path *)*((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = v15;
  if ( v16 )
    v17 = j_Path::~Path(v16);
    j_operator delete((void *)v17);
    if ( v20 )
    {
      v18 = j_Path::~Path(v20);
      j_operator delete((void *)v18);
    }
  result = (Path *)*((_DWORD *)v1 + 3);
  if ( result )
    j_Path::next(result);
    result = (Path *)j_DragonTakeoffGoal::navigateToNextPathNode(v1);
  return result;
}


int __fastcall DragonTakeoffGoal::navigateToNextPathNode(DragonTakeoffGoal *this)
{
  DragonTakeoffGoal *v1; // r4@1
  int v2; // r0@1
  Level *v7; // r0@2
  char *v8; // r0@2
  int v12; // [sp+4h] [bp-2Ch]@1
  int v14; // [sp+Ch] [bp-24h]@3

  v1 = this;
  v2 = j_Path::currentPos(*((Path **)this + 3));
  j_Vec3::Vec3((int)&v12, v2);
  j_Path::next(*((Path **)v1 + 3));
  __asm
  {
    VMOV.F32        S20, #20.0
    VLDR            S18, [SP,#0x30+var_28]
    VLDR            D8, =2.32830644e-10
  }
  do
    v7 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 4));
    v8 = j_Level::getRandom(v7);
    _R0 = j_Random::_genRandInt32((Random *)v8);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D8
      VCVT.F32.F64    S0, D0
      VMUL.F32        S0, S0, S20
      VADD.F32        S0, S0, S18
      VLDR            S18, [SP,#0x30+var_28]
      VCMPE.F32       S0, S18
      VMRS            APSR_nzcv, FPSCR
    }
  while ( _NF ^ _VF );
  __asm { VMOV            R2, S0 }
  return j_EnderDragon::setTargetPos(*((_DWORD *)v1 + 4), v12, _R2, v14);
}


signed int __fastcall DragonTakeoffGoal::start(DragonTakeoffGoal *this)
{
  DragonTakeoffGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2
  signed int result; // r0@3

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 4), 0, 0, 0);
  v2 = (Path *)*((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = 0;
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  (*(void (**)(void))(**((_DWORD **)v1 + 4) + 352))();
  result = 1;
  *((_BYTE *)v1 + 8) = 1;
  return result;
}


int __fastcall DragonTakeoffGoal::~DragonTakeoffGoal(DragonTakeoffGoal *this)
{
  DragonTakeoffGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_2725518;
  v2 = (Path *)*((_DWORD *)this + 3);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 3) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


void __fastcall DragonTakeoffGoal::stop(DragonTakeoffGoal *this)
{
  DragonTakeoffGoal::stop(this);
}


int __fastcall DragonTakeoffGoal::tick(int result)
{
  if ( *(_BYTE *)(result + 8) )
  {
    *(_BYTE *)(result + 8) = 0;
    result = (int)j_j_j__ZN17DragonTakeoffGoal13findNewTargetEv((DragonTakeoffGoal *)result);
  }
  return result;
}


void __fastcall DragonTakeoffGoal::~DragonTakeoffGoal(DragonTakeoffGoal *this)
{
  DragonTakeoffGoal::~DragonTakeoffGoal(this);
}


void __fastcall DragonTakeoffGoal::stop(DragonTakeoffGoal *this)
{
  DragonTakeoffGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 4), 0, 0, 0);
  v2 = (Path *)*((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = 0;
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_j_j__ZdlPv_7((void *)v3);
  }
}


Goal *__fastcall DragonTakeoffGoal::DragonTakeoffGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_2725518;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 4) = v2;
  j_Goal::setRequiredControlFlags(v3, 1);
  return v3;
}


void __fastcall DragonTakeoffGoal::~DragonTakeoffGoal(DragonTakeoffGoal *this)
{
  DragonTakeoffGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_2725518;
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
