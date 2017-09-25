

_QWORD *__fastcall EndermanTakeBlockGoal::EndermanTakeBlockGoal(Goal *a1, int a2)
{
  int v2; // r4@1
  _QWORD *result; // r0@1

  v2 = a2;
  result = Goal::Goal(a1);
  *(_DWORD *)result = &off_26F6758;
  *((_DWORD *)result + 2) = v2;
  return result;
}


void __fastcall EndermanTakeBlockGoal::~EndermanTakeBlockGoal(EndermanTakeBlockGoal *this)
{
  EndermanTakeBlockGoal::~EndermanTakeBlockGoal(this);
}


int __fastcall EndermanTakeBlockGoal::tick(EndermanTakeBlockGoal *this)
{
  EndermanTakeBlockGoal *v1; // r4@1
  BlockSource *v2; // r8@1
  float v10; // r1@1
  int v11; // r10@1
  float v15; // r1@1
  int v16; // r11@1
  float v20; // r1@1
  int v21; // r7@1
  int v22; // r6@1
  int result; // r0@1
  int v24; // r5@2
  unsigned int v25; // r9@2
  int v26; // r0@2
  unsigned int v27; // r1@2
  unsigned int v28; // r1@4
  unsigned int v29; // r0@4
  int v30; // r0@9
  unsigned int v31; // r1@9
  unsigned int v32; // r1@11
  unsigned int v33; // r0@11
  char v34; // [sp+8h] [bp-50h]@16
  unsigned __int8 v35; // [sp+Ch] [bp-4Ch]@1

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 2));
  _R0 = *((_DWORD *)v1 + 2);
  __asm { VLDR            S16, [R0,#0x48] }
  _R0 = Random::_genRandInt32((Random *)(_R0 + 552));
  __asm
  {
    VMOV            S0, R0
    VLDR            D9, =2.32830644e-10
    VMOV.F32        S20, #-2.0
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D9
    VMOV.F32        S22, #4.0
    VCVT.F32.F64    S0, D0
    VADD.F32        S2, S16, S20
    VMUL.F32        S0, S0, S22
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  v11 = mce::Math::floor(_R0, v10);
  __asm { VLDR            S16, [R0,#0x4C] }
    VMOV.F32        S2, #3.0
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S16
  v16 = mce::Math::floor(_R0, v15);
  __asm { VLDR            S16, [R0,#0x50] }
  v21 = mce::Math::floor(_R0, v20);
  BlockSource::getBlockID((BlockSource *)&v35, (int)v2, v11, v16, v21);
  v22 = v35;
  result = EnderMan::mMayTake[v35];
  if ( EnderMan::mMayTake[v35] )
    v24 = *((_DWORD *)v1 + 2);
    v25 = BlockSource::getData(v2, v11, v16, v21);
    v26 = SynchedEntityData::_get((SynchedEntityData *)(v24 + 176), 23);
    v27 = *(_DWORD *)(v26 + 4);
    if ( (unsigned __int8)v27 == 1 && *(_WORD *)(v26 + 10) != v22 )
    {
      *(_WORD *)(v26 + 10) = v22;
      *(_BYTE *)(v26 + 8) = 1;
      v28 = v27 >> 16;
      v29 = *(_WORD *)(v24 + 188);
      if ( v29 >= v28 )
        LOWORD(v29) = v28;
      *(_WORD *)(v24 + 188) = v29;
      if ( *(_WORD *)(v24 + 190) > v28 )
        LOWORD(v28) = *(_WORD *)(v24 + 190);
      *(_WORD *)(v24 + 190) = v28;
    }
    v30 = SynchedEntityData::_get((SynchedEntityData *)(v24 + 176), 24);
    v31 = *(_DWORD *)(v30 + 4);
    if ( (unsigned __int8)v31 == 1 && *(_WORD *)(v30 + 10) != v25 )
      *(_WORD *)(v30 + 10) = v25;
      *(_BYTE *)(v30 + 8) = 1;
      v32 = v31 >> 16;
      v33 = *(_WORD *)(v24 + 188);
      if ( v33 >= v32 )
        LOWORD(v33) = v32;
      *(_WORD *)(v24 + 188) = v33;
      if ( *(_WORD *)(v24 + 190) > v32 )
        LOWORD(v32) = *(_WORD *)(v24 + 190);
      *(_WORD *)(v24 + 190) = v32;
    v34 = BlockID::AIR;
    result = BlockSource::setBlock((int)v2, v11, v16, v21, &v34, 3);
  return result;
}


signed int __fastcall EndermanTakeBlockGoal::canUse(EndermanTakeBlockGoal *this)
{
  EndermanTakeBlockGoal *v1; // r4@1
  SynchedEntityData *v2; // r5@1
  char v3; // r6@1
  signed int result; // r0@2
  Level *v5; // r0@3
  unsigned __int64 *v6; // r0@3
  signed int v7; // r5@3

  v1 = this;
  v2 = (SynchedEntityData *)(*((_DWORD *)this + 2) + 176);
  v3 = SynchedEntityData::getShort(v2, 23);
  SynchedEntityData::getShort(v2, 24);
  if ( v3 )
  {
    result = 0;
  }
  else
    v5 = (Level *)Entity::getLevel(*((Entity **)v1 + 2));
    v6 = (unsigned __int64 *)Level::getGameRules(v5);
    v7 = 0;
    if ( GameRules::getBool(v6, (int **)&GameRules::MOB_GRIEFING) == 1
      && !(Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % 0x14) )
    {
      v7 = 1;
    }
    result = v7;
  return result;
}


void __fastcall EndermanTakeBlockGoal::~EndermanTakeBlockGoal(EndermanTakeBlockGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)Goal::~Goal(this);
  j_j_j__ZdlPv_6(v1);
}
