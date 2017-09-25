

int __fastcall MonsterEggBlock::_getBlockIdFromData(MonsterEggBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  _DWORD **v4; // r0@2

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  switch ( (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32))) )
  {
    case 1u:
      v4 = &Block::mCobblestone;
      break;
    case 2u:
      v4 = Block::mStoneBrick;
    case 3u:
    case 4u:
    case 5u:
    default:
      v4 = &Block::mStone;
  }
  return *(_BYTE *)(**v4 + 4);
}


void __fastcall MonsterEggBlock::~MonsterEggBlock(MonsterEggBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall MonsterEggBlock::~MonsterEggBlock(MonsterEggBlock *this)
{
  MonsterEggBlock::~MonsterEggBlock(this);
}


unsigned int __fastcall MonsterEggBlock::getVariant(MonsterEggBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  unsigned int result; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  result = ((0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)))) - 1;
  if ( result >= 5 )
    result = 5;
  return result;
}


const void **__fastcall MonsterEggBlock::buildDescriptionId(MonsterEggBlock *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  unsigned int v4; // r5@1
  const void **v5; // r4@1
  unsigned __int64 *v6; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = (const void **)this;
  sub_21E94B4((void **)this, "tile.monster_egg.");
  v6 = (unsigned __int64 *)Block::getBlockState(v3, 24);
  switch ( (0xFu >> (4 - (*v6 >> 32))) & (v4 >> (*v6 + 1 - (*v6 >> 32))) )
  {
    case 1u:
      sub_21E7408(v5, "cobble", 6u);
      break;
    case 5u:
      sub_21E7408(v5, "chiseledbrick", 0xDu);
    case 3u:
      sub_21E7408(v5, "mossybrick", 0xAu);
    case 4u:
      sub_21E7408(v5, "crackedbrick", 0xCu);
    case 2u:
      sub_21E7408(v5, "brick", 5u);
    default:
      sub_21E7408(v5, "stone", 5u);
  }
  return sub_21E7408(v5, ".name", 5u);
}


ItemInstance *__fastcall MonsterEggBlock::getSilkTouchItemInstance(MonsterEggBlock *this, int a2, unsigned int a3)
{
  ItemInstance *v3; // r4@1
  unsigned int v4; // r5@1
  unsigned __int64 *v5; // r0@1
  _DWORD **v6; // r0@2

  v3 = this;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState(a2, 24);
  switch ( (0xFu >> (4 - (*v5 >> 32))) & (v4 >> (*v5 + 1 - (*v5 >> 32))) )
  {
    case 1u:
      v6 = &Block::mCobblestone;
      break;
    case 2u:
      v6 = Block::mStoneBrick;
    case 3u:
    case 4u:
    case 5u:
    default:
      v6 = &Block::mStone;
  }
  return ItemInstance::ItemInstance(v3, *(_BYTE *)(**v6 + 4), 1, 0);
}


int __fastcall MonsterEggBlock::getResourceCount(MonsterEggBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


unsigned int __fastcall MonsterEggBlock::getDataForHostBlock(MonsterEggBlock *this, int a2, int a3)
{
  unsigned __int8 v3; // r5@1
  Block *v4; // r4@1
  unsigned __int64 *v5; // r0@2
  unsigned int v6; // r5@2
  signed int v7; // r0@3

  v3 = a2;
  v4 = (Block *)Block::mBlocks[(signed int)this];
  if ( !v4 )
    return 0;
  v5 = (unsigned __int64 *)Block::getBlockState(Block::mMonsterStoneEgg, 24);
  v6 = (v3 >> (*v5 + 1 - (*v5 >> 32))) & (0xFu >> (4 - (*v5 >> 32)));
  if ( v6 )
  {
    v7 = Block::isType(v4, (const Block *)Block::mStoneBrick);
    if ( v6 - 1 <= 2 && v7 )
      return v6 + 2;
  }
  else
    if ( Block::isType(v4, (const Block *)Block::mCobblestone) )
      return 1;
    if ( Block::isType(v4, (const Block *)Block::mStoneBrick) )
      return 2;
  return 0;
}


void __fastcall MonsterEggBlock::spawnResources(MonsterEggBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  MonsterEggBlock::spawnResources(this, a2, a3, a4, a5, a6);
}


signed int __fastcall MonsterEggBlock::getHostBlock(MonsterEggBlock *this, int a2, int a3)
{
  MonsterEggBlock *v3; // r4@1
  unsigned __int8 v4; // r5@1
  Block *v5; // r0@1
  unsigned __int64 *v6; // r0@3
  unsigned int v7; // r0@3
  _DWORD **v8; // r0@5
  signed int result; // r0@7

  v3 = this;
  v4 = a3;
  v5 = (Block *)Block::mBlocks[a2];
  if ( v5 && Block::isType(v5, (const Block *)Block::mMonsterStoneEgg) )
  {
    v6 = (unsigned __int64 *)Block::getBlockState(Block::mMonsterStoneEgg, 24);
    v7 = ((0xFu >> (4 - (*v6 >> 32))) & (v4 >> (*v6 + 1 - (*v6 >> 32)))) - 1;
    if ( v7 <= 4 )
    {
      switch ( v7 )
      {
        case 0u:
          v8 = &Block::mCobblestone;
          goto LABEL_7;
        case 1u:
          v8 = Block::mStoneBrick;
        case 2u:
          *(_BYTE *)v3 = *(_BYTE *)(Block::mStoneBrick + 4);
          result = 1;
          *((_BYTE *)v3 + 1) = 1;
          return result;
        case 3u:
          result = 2;
          *((_BYTE *)v3 + 1) = 2;
        case 4u:
          result = 3;
          *((_BYTE *)v3 + 1) = 3;
        default:
          break;
      }
    }
    v8 = &Block::mStone;
  }
  else
LABEL_7:
  *(_BYTE *)v3 = *(_BYTE *)(**v8 + 4);
  result = 0;
  *((_BYTE *)v3 + 1) = 0;
  return result;
}


_DWORD *__fastcall MonsterEggBlock::MonsterEggBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(23);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &off_270EC58;
  return v3;
}


void __fastcall MonsterEggBlock::spawnResources(MonsterEggBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  BlockSource *v6; // r4@1
  const BlockPos *v7; // r5@1
  Level *v8; // r0@1
  Level *v9; // r0@2
  unsigned __int64 *v10; // r0@2
  Level *v11; // r0@3
  Spawner *v12; // r6@3
  const Vec3 *v13; // r0@3
  Entity *v14; // r4@3
  void *v15; // r0@3
  void *v16; // r0@4
  void *v17; // r0@5
  void *v18; // r0@6
  unsigned int *v19; // r2@10
  signed int v20; // r1@12
  unsigned int *v21; // r2@14
  signed int v22; // r1@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  char v27; // [sp+14h] [bp-34h]@3
  int v28; // [sp+20h] [bp-28h]@3
  int v29; // [sp+24h] [bp-24h]@3
  int v30; // [sp+28h] [bp-20h]@4
  int v31; // [sp+2Ch] [bp-1Ch]@3

  v6 = a2;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  if ( !Level::isClientSide(v8) )
  {
    v9 = (Level *)BlockSource::getLevel(v6);
    v10 = (unsigned __int64 *)Level::getGameRules(v9);
    if ( GameRules::getBool(v10, (int **)&GameRules::DO_TILE_DROPS) == 1 )
    {
      v11 = (Level *)BlockSource::getLevel(v6);
      v12 = (Spawner *)Level::getSpawner(v11);
      EntityTypeToString((void **)&v28, 0x40B27u, 1);
      EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v29, &v28);
      Vec3::Vec3((int)&v27, (int)v7);
      v14 = (Entity *)Spawner::spawnMob(v12, v6, (const EntityDefinitionIdentifier *)&v29, 0, v13, 0, 1, 0);
      v15 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
      {
        v19 = (unsigned int *)(v31 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
        }
        else
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      }
      v16 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v30 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v29 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v28 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      if ( v14 )
        Entity::setPersistent(v14);
    }
  }
}


signed int __fastcall MonsterEggBlock::isCompatibleHostBlock(MonsterEggBlock *this, int a2, int a3)
{
  signed int v3; // r2@3
  signed int result; // r0@5
  signed int v5; // r2@6

  if ( (MonsterEggBlock *)*(_BYTE *)(Block::mStone + 4) != this
    && (MonsterEggBlock *)*(_BYTE *)(Block::mCobblestone + 4) != this )
  {
    v5 = 0;
    if ( (MonsterEggBlock *)*(_BYTE *)(Block::mStoneBrick + 4) == this )
      v5 = 1;
    result = v5;
  }
  else
    v3 = 0;
    if ( !a2 )
      v3 = 1;
    result = v3;
  return result;
}
