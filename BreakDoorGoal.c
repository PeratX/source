

void __fastcall BreakDoorGoal::~BreakDoorGoal(BreakDoorGoal *this)
{
  BreakDoorGoal::~BreakDoorGoal(this);
}


int __fastcall BreakDoorGoal::start(BreakDoorGoal *this)
{
  BreakDoorGoal *v1; // r4@1
  Level *v2; // r0@1
  int result; // r0@1
  Player *v4; // r5@2
  float v11; // r1@2
  __int64 v12; // r2@2
  char v13; // [sp+8h] [bp-20h]@2

  v1 = this;
  j_DoorInteractGoal::start(this);
  *((_DWORD *)v1 + 11) = 0;
  v2 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 14));
  result = j_Level::getDifficulty(v2);
  if ( result == 3 )
  {
    v4 = (Player *)j_Entity::getLevel(*((Entity **)v1 + 14));
    j_Vec3::Vec3((int)&v13, (int)v1 + 8);
    _R0 = *((_DWORD *)v1 + 12);
    __asm
    {
      VLDR            S2, =65535.0
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VDIV.F32        S0, S2, S0
      VMOV            R0, S0
    }
    HIDWORD(v12) = j_mce::Math::floor(_R0, v11);
    LODWORD(v12) = &v13;
    result = j_Level::broadcastLevelEvent(v4, 3600, v12, 0);
  }
  return result;
}


signed int __fastcall BreakDoorGoal::canUse(BreakDoorGoal *this)
{
  BreakDoorGoal *v1; // r4@1
  int v2; // r0@2
  bool v3; // zf@2
  Level *v4; // r0@6
  unsigned __int64 *v5; // r0@6
  signed int v6; // r5@7
  signed int result; // r0@10

  v1 = this;
  if ( j_DoorInteractGoal::canUse(this) != 1 )
    goto LABEL_14;
  v2 = *((_DWORD *)v1 + 5);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *((_BYTE *)v1 + 25) == 0;
  if ( v3
    && (v4 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 14)),
        v5 = (unsigned __int64 *)j_Level::getGameRules(v4),
        j_GameRules::getBool(v5, (int **)&GameRules::MOB_GRIEFING) == 1) )
  {
    v6 = 0;
    if ( j_Entity::getTarget(*((Entity **)v1 + 14)) )
    {
      if ( !(*(int (**)(void))(**((_DWORD **)v1 + 14) + 944))() )
        v6 = 1;
    }
    result = v6;
  }
  else
LABEL_14:
    result = 0;
  return result;
}


Goal *__fastcall BreakDoorGoal::BreakDoorGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1
  int v4; // r2@1

  v2 = a2;
  v3 = a1;
  j_DoorInteractGoal::DoorInteractGoal(a1, a2);
  v4 = (int)v3 + 48;
  *(_DWORD *)v3 = &off_2725270;
  *(_DWORD *)v4 = 240;
  *(_DWORD *)(v4 + 4) = -1;
  *(_DWORD *)(v4 + 8) = v2;
  j_Goal::setRequiredControlFlags(v3, 1);
  return v3;
}


void __fastcall BreakDoorGoal::~BreakDoorGoal(BreakDoorGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall BreakDoorGoal::tick(BreakDoorGoal *this)
{
  BreakDoorGoal *v1; // r4@1
  Level *v2; // r0@1
  char *v3; // r0@1
  int v4; // r5@2
  BlockSource *v5; // r6@2
  int result; // r0@3
  Level *v13; // r0@6
  BlockSource *v14; // r0@7
  int v15; // r6@7
  BlockSource *v16; // r0@7
  int v17; // r6@7
  BlockSource *v18; // r0@7
  char v19; // [sp+Ch] [bp-2Ch]@7
  char v20; // [sp+18h] [bp-20h]@2

  v1 = this;
  j_DoorInteractGoal::tick(this);
  v2 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 14));
  v3 = j_Level::getRandom(v2);
  if ( !(j_Random::_genRandInt32((Random *)v3) % 0x14) )
  {
    v4 = j_Entity::getLevel(*((Entity **)v1 + 14));
    v5 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 14));
    j_BlockPos::center((BlockPos *)&v20, (int)v1 + 8);
    j_Level::broadcastDimensionEvent(v4, v5, 1010, (int)&v20, 0);
  }
  __asm { VMOV.F32        S0, #10.0 }
  result = *((_DWORD *)v1 + 11) + 1;
  __asm
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
  *((_DWORD *)v1 + 11) = result;
  _KR00_8 = *((_QWORD *)v1 + 6);
    VMOV            S4, R1
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S2, S0
    VMUL.F32        S0, S0, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R2, S0
  if ( _R2 != HIDWORD(_KR00_8) )
    *((_DWORD *)v1 + 13) = _R2;
  if ( result == (_DWORD)_KR00_8 )
    v13 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 14));
    result = j_Level::getDifficulty(v13);
    if ( result == 3 )
    {
      v14 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 14));
      j_BlockSource::removeBlock(v14, (BreakDoorGoal *)((char *)v1 + 8));
      j_BlockPos::center((BlockPos *)&v19, (int)v1 + 8);
      v15 = j_Entity::getLevel(*((Entity **)v1 + 14));
      v16 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 14));
      j_Level::broadcastDimensionEvent(v15, v16, 1012, (int)&v19, 0);
      v17 = j_Entity::getLevel(*((Entity **)v1 + 14));
      v18 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 14));
      result = j_Level::broadcastDimensionEvent(v17, v18, 2001, (int)&v19, *(_BYTE *)(*((_DWORD *)v1 + 5) + 4));
    }
  return result;
}


int __fastcall BreakDoorGoal::stop(BreakDoorGoal *this)
{
  BreakDoorGoal *v1; // r4@1
  Level *v2; // r0@1
  int result; // r0@1
  Player *v4; // r5@2
  char v5; // [sp+4h] [bp-1Ch]@2

  v1 = this;
  j_Goal::stop(this);
  v2 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 14));
  result = j_Level::getDifficulty(v2);
  if ( result == 3 )
  {
    v4 = (Player *)j_Entity::getLevel(*((Entity **)v1 + 14));
    j_Vec3::Vec3((int)&v5, (int)v1 + 8);
    result = j_Level::broadcastLevelEvent(v4, 3601, (unsigned int)&v5, 0);
  }
  return result;
}


signed int __fastcall BreakDoorGoal::canContinueToUse(BreakDoorGoal *this)
{
  BreakDoorGoal *v1; // r4@1
  Entity *v2; // r5@4
  signed int result; // r0@7
  char v9; // [sp+4h] [bp-1Ch]@4

  v1 = this;
  if ( !j_Entity::getTarget(*((Entity **)this + 14)) )
    goto LABEL_13;
  if ( (*(int (**)(void))(**((_DWORD **)v1 + 14) + 944))() )
  if ( (signed int)*(_QWORD *)((char *)v1 + 44) > (signed int)(*(_QWORD *)((char *)v1 + 44) >> 32) )
  v2 = (Entity *)*((_DWORD *)v1 + 14);
  j_Vec3::Vec3((int)&v9, (int)v1 + 8);
  _R0 = j_Entity::distanceToSqr(v2, (const Vec3 *)&v9);
  __asm
  {
    VMOV.F32        S0, #4.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    if ( j_DoorInteractGoal::_doorBlocksPath(v1) )
    {
      result = 1;
    }
    else
      result = *((_BYTE *)v1 + 25);
      if ( *((_BYTE *)v1 + 25) )
        result = 1;
  else
LABEL_13:
    result = 0;
  return result;
}


int __fastcall BreakDoorGoal::getBreakRate(BreakDoorGoal *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#0x30]
    VMOV.F32        S2, #1.0
    VCVT.F32.S32    S0, S0
    VDIV.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}
