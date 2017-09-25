

void __fastcall SilverfishWakeUpFriendsGoal::~SilverfishWakeUpFriendsGoal(SilverfishWakeUpFriendsGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)Goal::~Goal(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall SilverfishWakeUpFriendsGoal::tick(SilverfishWakeUpFriendsGoal *this)
{
  SilverfishWakeUpFriendsGoal *v1; // r4@1
  int v2; // r0@1
  unsigned __int8 v3; // vf@1
  int result; // r0@1
  const BlockPos *v5; // r5@3
  Level *v6; // r7@3
  int v7; // r4@3
  int v8; // r8@3
  signed int v9; // r9@3
  int v10; // r10@6
  int v11; // r4@9
  unsigned __int64 *v12; // r0@11
  signed int v13; // r0@15
  signed int v14; // r0@19
  signed int v15; // r0@23
  SilverfishWakeUpFriendsGoal *v16; // [sp+8h] [bp-50h]@3
  Random *v17; // [sp+10h] [bp-48h]@3
  char v18; // [sp+14h] [bp-44h]@13
  int v19; // [sp+18h] [bp-40h]@10
  int v20; // [sp+1Ch] [bp-3Ch]@10
  int v21; // [sp+20h] [bp-38h]@10
  int v22; // [sp+24h] [bp-34h]@10
  char v23; // [sp+28h] [bp-30h]@3
  int v24; // [sp+2Ch] [bp-2Ch]@10
  int v25; // [sp+30h] [bp-28h]@10

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  v3 = __OFSUB__(v2, 1);
  result = v2 - 1;
  *((_DWORD *)v1 + 3) = result;
  if ( (unsigned __int8)((result < 0) ^ v3) | (result == 0) )
  {
    v5 = (const BlockPos *)Entity::getRegion(*((Entity **)v1 + 2));
    v16 = v1;
    v6 = (Level *)Entity::getLevel(*((Entity **)v1 + 2));
    v7 = *((_DWORD *)v1 + 2);
    BlockPos::BlockPos((int)&v23, v7 + 72);
    v17 = (Random *)(v7 + 552);
    v8 = 0;
    LOBYTE(v9) = 0;
    do
    {
      if ( v9 & 1 )
      {
        v9 = 1;
      }
      else
        v10 = 0;
        LOBYTE(v9) = 0;
        do
        {
          if ( v9 & 1 )
          {
            v9 = 1;
          }
          else
            v11 = 0;
            v9 = 0;
            do
            {
              v20 = *(_DWORD *)&v23 + v10;
              v21 = v24 + v8;
              v22 = v25 + v11;
              BlockSource::getBlockAndData((BlockSource *)&v19, v5, (int)&v20);
              if ( (unsigned __int8)v19 == *(_BYTE *)(Block::mMonsterStoneEgg + 4) )
              {
                v12 = (unsigned __int64 *)Level::getGameRules(v6);
                if ( GameRules::getBool(v12, (int **)&GameRules::MOB_GRIEFING) == 1 )
                {
                  Level::destroyBlock(v6, v5, (const BlockPos *)&v20, 1);
                }
                else
                  MonsterEggBlock::getHostBlock((MonsterEggBlock *)&v18, (unsigned __int8)v19, BYTE1(v19));
                  BlockSource::setBlockAndData((int)v5, (BlockPos *)&v20, (int)&v18, 3, *((_DWORD *)v16 + 2));
                v9 |= (Random::_genRandInt32(v17) & 0x8000000) >> 27;
              }
              v13 = 0;
              if ( v11 < 1 )
                v13 = 1;
              v11 = v13 - v11;
            }
            while ( (unsigned int)(v11 + 10) <= 0x14 && (v9 ^ 1) & 1 );
          v14 = 0;
          if ( v10 < 1 )
            v14 = 1;
          v10 = v14 - v10;
        }
        while ( (unsigned int)(v10 + 10) <= 0x14 && (v9 ^ 1) & 1 );
      v15 = 0;
      if ( v8 < 1 )
        v15 = 1;
      v8 = v15 - v8;
      result = v8 + 5;
      if ( (unsigned int)(v8 + 5) > 0xA )
        break;
      result = v9 ^ 1;
    }
    while ( (v9 ^ 1) & 1 );
  }
  return result;
}


signed int __fastcall SilverfishWakeUpFriendsGoal::canUse(SilverfishWakeUpFriendsGoal *this)
{
  SilverfishWakeUpFriendsGoal *v1; // r4@1
  signed int result; // r0@2
  signed int v3; // r1@5

  v1 = this;
  if ( Mob::getNavigation(*((Mob **)this + 2)) )
  {
    if ( (*(int (**)(void))(**((_DWORD **)v1 + 2) + 944))() || (*(int (**)(void))(**((_DWORD **)v1 + 2) + 952))() )
    {
      v3 = *((_DWORD *)v1 + 3);
      if ( v3 <= 0 )
      {
        v3 = 20;
        *((_DWORD *)v1 + 3) = 20;
      }
    }
    else
    result = 0;
    if ( v3 > 0 )
      result = 1;
  }
  else
  return result;
}


_QWORD *__fastcall SilverfishWakeUpFriendsGoal::SilverfishWakeUpFriendsGoal(Goal *a1, int a2)
{
  int v2; // r4@1
  _QWORD *result; // r0@1

  v2 = a2;
  result = Goal::Goal(a1);
  *(_DWORD *)result = &off_26F96F0;
  *((_DWORD *)result + 2) = v2;
  *((_DWORD *)result + 3) = 0;
  return result;
}


void __fastcall SilverfishWakeUpFriendsGoal::~SilverfishWakeUpFriendsGoal(SilverfishWakeUpFriendsGoal *this)
{
  SilverfishWakeUpFriendsGoal::~SilverfishWakeUpFriendsGoal(this);
}
