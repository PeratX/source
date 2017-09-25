

signed int __fastcall SilverfishMergeWithStoneGoal::start(SilverfishMergeWithStoneGoal *this)
{
  SilverfishMergeWithStoneGoal *v1; // r4@1
  const BlockPos *v2; // r6@2
  Level *v3; // r8@2
  float v4; // r1@2
  int v5; // r0@2
  int v10; // r7@2
  float v13; // r1@2
  int v14; // r5@2
  float v15; // r1@2
  int v16; // r0@2
  int v17; // r2@2
  signed int result; // r0@2
  int v19; // r2@2
  char v20; // r0@3
  char v21; // [sp+8h] [bp-38h]@3
  MonsterEggBlock *v22; // [sp+Ch] [bp-34h]@2
  int v23; // [sp+10h] [bp-30h]@2
  int v24; // [sp+14h] [bp-2Ch]@2
  int v25; // [sp+18h] [bp-28h]@2
  int v26; // [sp+1Ch] [bp-24h]@2
  int v27; // [sp+20h] [bp-20h]@2
  int v28; // [sp+24h] [bp-1Ch]@2

  v1 = this;
  if ( *((_BYTE *)this + 44) )
  {
    v2 = (const BlockPos *)Entity::getRegion(*((Entity **)this + 9));
    v3 = (Level *)Entity::getLevel(*((Entity **)v1 + 9));
    v5 = mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 9) + 72), v4);
    __asm { VMOV.F32        S0, #0.5 }
    v10 = v5;
    _R0 = *((_DWORD *)v1 + 9);
    __asm
    {
      VLDR            S2, [R0,#0x4C]
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    }
    v14 = mce::Math::floor(_R0, v13);
    v16 = mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 9) + 80), v15);
    v26 = v10;
    v27 = v14;
    v28 = v16;
    BlockPos::neighbor((BlockPos *)&v23, (int)&v26, *((_BYTE *)v1 + 40));
    v26 = v23;
    v27 = v24;
    v28 = v25;
    BlockSource::getBlockAndData((BlockSource *)&v22, v2, (int)&v26);
    result = MonsterEggBlock::isCompatibleHostBlock((MonsterEggBlock *)(unsigned __int8)v22, BYTE1(v22), v17);
    if ( result == 1 )
      v21 = *(_BYTE *)(Block::mMonsterStoneEgg + 4);
      v20 = MonsterEggBlock::getDataForHostBlock((MonsterEggBlock *)(unsigned __int8)v22, BYTE1(v22), v19);
      BlockSource::setBlockAndData((int)v2, (BlockPos *)&v26, &v21, v20, 3, *((_DWORD *)v1 + 9));
      if ( !Level::isClientSide(v3) )
        Level::broadcastEntityEvent((int)v3, *((_DWORD *)v1 + 9), 27, 0);
      result = (*(int (**)(void))(**((_DWORD **)v1 + 9) + 44))();
  }
  else
    result = j_j_j__ZN16RandomStrollGoal5startEv(this);
  return result;
}


void __fastcall SilverfishMergeWithStoneGoal::~SilverfishMergeWithStoneGoal(SilverfishMergeWithStoneGoal *this)
{
  SilverfishMergeWithStoneGoal::~SilverfishMergeWithStoneGoal(this);
}


void __fastcall SilverfishMergeWithStoneGoal::~SilverfishMergeWithStoneGoal(SilverfishMergeWithStoneGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)Goal::~Goal(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall SilverfishMergeWithStoneGoal::canContinueToUse(SilverfishMergeWithStoneGoal *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 44) )
    result = 0;
  else
    result = RandomStrollGoal::canContinueToUse(this);
  return result;
}


Goal *__fastcall SilverfishMergeWithStoneGoal::SilverfishMergeWithStoneGoal(RandomStrollGoal *a1, Mob *a2)
{
  Mob *v2; // r4@1
  Goal *result; // r0@1

  v2 = a2;
  result = RandomStrollGoal::RandomStrollGoal(a1, a2, 1.0, 10, 7);
  *(_DWORD *)result = &off_26F9724;
  *((_DWORD *)result + 9) = v2;
  *((_DWORD *)result + 10) = 0;
  *((_BYTE *)result + 44) = 0;
  return result;
}


int __fastcall SilverfishMergeWithStoneGoal::canUse(SilverfishMergeWithStoneGoal *this)
{
  SilverfishMergeWithStoneGoal *v1; // r4@1
  int v2; // r0@3
  int v3; // r5@4
  Level *v4; // r0@4
  unsigned __int64 *v5; // r0@4
  Random *v6; // r6@5
  const BlockPos *v7; // r5@6
  unsigned int v8; // r0@6
  int v9; // r0@6
  __int64 v14; // r6@6
  float v17; // r1@6
  float v18; // r1@6
  int v19; // r0@6
  int v20; // r2@6
  int result; // r0@7
  MonsterEggBlock *v22; // [sp+0h] [bp-30h]@6
  __int64 v23; // [sp+4h] [bp-2Ch]@6
  int v24; // [sp+Ch] [bp-24h]@6
  __int64 v25; // [sp+10h] [bp-20h]@6
  int v26; // [sp+18h] [bp-18h]@6

  v1 = this;
  if ( Entity::getTarget(*((Entity **)this + 9))
    || !Mob::getNavigation(*((Mob **)v1 + 9))
    || (v2 = Mob::getNavigation(*((Mob **)v1 + 9)), (*(int (**)(void))(*(_DWORD *)v2 + 36))() != 1) )
  {
    result = 0;
  }
  else
    v3 = *((_DWORD *)v1 + 9);
    v4 = (Level *)Entity::getLevel(*((Entity **)v1 + 9));
    v5 = (unsigned __int64 *)Level::getGameRules(v4);
    if ( GameRules::getBool(v5, (int **)&GameRules::MOB_GRIEFING) != 1 )
      goto LABEL_12;
    v6 = (Random *)(v3 + 552);
    if ( Random::_genRandInt32((Random *)(v3 + 552)) % 0xA )
    v7 = (const BlockPos *)Entity::getRegion(*((Entity **)v1 + 9));
    v8 = Random::_genRandInt32(v6);
    *((_DWORD *)v1 + 10) = v8 % 6;
    v9 = mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 9) + 72), COERCE_FLOAT(3 * (v8 / 6)));
    __asm { VMOV.F32        S0, #0.5 }
    LODWORD(v14) = v9;
    _R0 = *((_DWORD *)v1 + 9);
    __asm
    {
      VLDR            S2, [R0,#0x4C]
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    }
    HIDWORD(v14) = mce::Math::floor(_R0, v17);
    v19 = mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 9) + 80), v18);
    v25 = v14;
    v26 = v19;
    BlockPos::neighbor((BlockPos *)&v23, (int)&v25, *((_BYTE *)v1 + 40));
    v25 = v23;
    v26 = v24;
    BlockSource::getBlockAndData((BlockSource *)&v22, v7, (int)&v25);
    if ( MonsterEggBlock::isCompatibleHostBlock((MonsterEggBlock *)(unsigned __int8)v22, BYTE1(v22), v20) != 1 )
LABEL_12:
      *((_BYTE *)v1 + 44) = 0;
      result = RandomStrollGoal::canUse(v1);
    else
      result = 1;
      *((_BYTE *)v1 + 44) = 1;
  return result;
}
