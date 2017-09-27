

unsigned int __fastcall EndermanLeaveBlockGoal::tick(EndermanLeaveBlockGoal *this)
{
  EndermanLeaveBlockGoal *v1; // r4@1
  int v2; // r8@1
  float v10; // r1@1
  int v11; // r6@1
  float v15; // r1@1
  int v16; // r7@1
  float v20; // r1@1
  int v21; // r5@1
  unsigned int result; // r0@1
  SynchedEntityData *v23; // r9@4
  int v24; // r5@4
  int v25; // r7@4
  int v26; // r6@4
  int v27; // r0@4
  unsigned int v28; // r1@4
  unsigned int v29; // r1@6
  unsigned int v30; // r0@6
  unsigned int v31; // r1@11
  unsigned int v32; // r1@13
  unsigned int v33; // r0@13
  char v34; // [sp+Ch] [bp-44h]@4
  char v35; // [sp+Dh] [bp-43h]@4
  unsigned __int8 v36; // [sp+10h] [bp-40h]@1
  unsigned __int8 v37; // [sp+14h] [bp-3Ch]@1

  v1 = this;
  v2 = Entity::getRegion(*((Entity **)this + 2));
  _R0 = *((_DWORD *)v1 + 2);
  __asm { VLDR            S16, [R0,#0x48] }
  _R0 = Random::_genRandInt32((Random *)(_R0 + 552));
  __asm
  {
    VMOV            S0, R0
    VLDR            D9, =2.32830644e-10
    VMOV.F32        S20, #-1.0
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D9
    VCVT.F32.F64    S0, D0
    VADD.F32        S2, S16, S20
    VADD.F32        S0, S0, S0
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  v11 = mce::Math::floor(_R0, v10);
  __asm { VLDR            S16, [R0,#0x4C] }
    VADD.F32        S0, S0, S16
  v16 = mce::Math::floor(_R0, v15);
  __asm { VLDR            S16, [R0,#0x50] }
  v21 = mce::Math::floor(_R0, v20);
  BlockSource::getBlockID((BlockSource *)&v37, v2, v11, v16, v21);
  BlockSource::getBlockID((BlockSource *)&v36, v2, v11, v16 - 1, v21);
  result = BlockID::AIR;
  if ( v37 == BlockID::AIR )
    result = v36;
    if ( v36 != v37 )
    {
      result = Block::mSolid[v36];
      if ( Block::mSolid[v36] )
      {
        v23 = (SynchedEntityData *)(*((_DWORD *)v1 + 2) + 176);
        v34 = SynchedEntityData::getShort(v23, 23);
        v35 = SynchedEntityData::getShort(v23, 24);
        BlockSource::setBlockAndData(v2, v11, v16, v21, (int)&v34, 3);
        v24 = *((_DWORD *)v1 + 2);
        v25 = (unsigned __int8)FullBlock::AIR;
        v26 = BYTE1(FullBlock::AIR);
        v27 = SynchedEntityData::_get((SynchedEntityData *)(v24 + 176), 23);
        v28 = *(_DWORD *)(v27 + 4);
        if ( (unsigned __int8)v28 == 1 && *(_WORD *)(v27 + 10) != v25 )
        {
          *(_WORD *)(v27 + 10) = v25;
          *(_BYTE *)(v27 + 8) = 1;
          v29 = v28 >> 16;
          v30 = *(_WORD *)(v24 + 188);
          if ( v30 >= v29 )
            LOWORD(v30) = v29;
          *(_WORD *)(v24 + 188) = v30;
          if ( *(_WORD *)(v24 + 190) > v29 )
            LOWORD(v29) = *(_WORD *)(v24 + 190);
          *(_WORD *)(v24 + 190) = v29;
        }
        result = SynchedEntityData::_get((SynchedEntityData *)(v24 + 176), 24);
        v31 = *(_DWORD *)(result + 4);
        if ( (unsigned __int8)v31 == 1 && *(_WORD *)(result + 10) != v26 )
          *(_WORD *)(result + 10) = v26;
          *(_BYTE *)(result + 8) = 1;
          v32 = v31 >> 16;
          v33 = *(_WORD *)(v24 + 188);
          if ( v33 >= v32 )
            LOWORD(v33) = v32;
          *(_WORD *)(v24 + 188) = v33;
          result = *(_WORD *)(v24 + 190);
          if ( result > v32 )
            LOWORD(v32) = *(_WORD *)(v24 + 190);
          *(_WORD *)(v24 + 190) = v32;
      }
    }
  return result;
}


void __fastcall EndermanLeaveBlockGoal::~EndermanLeaveBlockGoal(EndermanLeaveBlockGoal *this)
{
  EndermanLeaveBlockGoal::~EndermanLeaveBlockGoal(this);
}


_QWORD *__fastcall EndermanLeaveBlockGoal::EndermanLeaveBlockGoal(Goal *a1, int a2)
{
  int v2; // r4@1
  _QWORD *result; // r0@1

  v2 = a2;
  result = Goal::Goal(a1);
  *(_DWORD *)result = &off_26F6724;
  *((_DWORD *)result + 2) = v2;
  return result;
}


signed int __fastcall EndermanLeaveBlockGoal::canUse(EndermanLeaveBlockGoal *this)
{
  EndermanLeaveBlockGoal *v1; // r4@1
  SynchedEntityData *v2; // r5@1
  char v3; // r6@1
  Level *v4; // r0@2
  unsigned __int64 *v5; // r0@2
  signed int v6; // r5@2
  signed int result; // r0@5

  v1 = this;
  v2 = (SynchedEntityData *)(*((_DWORD *)this + 2) + 176);
  v3 = SynchedEntityData::getShort(v2, 23);
  SynchedEntityData::getShort(v2, 24);
  if ( v3 )
  {
    v4 = (Level *)Entity::getLevel(*((Entity **)v1 + 2));
    v5 = (unsigned __int64 *)Level::getGameRules(v4);
    v6 = 0;
    if ( GameRules::getBool(v5, (int **)&GameRules::MOB_GRIEFING) == 1
      && !(Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % 0x7D0) )
    {
      v6 = 1;
    }
    result = v6;
  }
  else
    result = 0;
  return result;
}


void __fastcall EndermanLeaveBlockGoal::~EndermanLeaveBlockGoal(EndermanLeaveBlockGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)Goal::~Goal(this);
  j_j_j__ZdlPv_6(v1);
}
