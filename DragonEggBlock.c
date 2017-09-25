

signed int __fastcall DragonEggBlock::attack(DragonEggBlock *this, Player *a2, const BlockPos *a3)
{
  Player *v3; // r5@1
  const BlockPos *v4; // r4@1
  DragonEggBlock *v5; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = (DragonEggBlock *)Entity::getRegion(a2);
  DragonEggBlock::_teleport(v5, v5, (Player *)((char *)v3 + 552), v4);
  return 1;
}


void __fastcall DragonEggBlock::~DragonEggBlock(DragonEggBlock *this)
{
  DragonEggBlock::~DragonEggBlock(this);
}


int __fastcall DragonEggBlock::_teleport(DragonEggBlock *this, BlockSource *a2, Random *a3, const BlockPos *a4)
{
  BlockSource *v4; // r9@1
  Random *v5; // r6@1
  Level *v6; // r0@1
  int result; // r0@1
  int v8; // r4@2
  char v9; // r7@3
  char v10; // r5@3
  char v11; // r11@3
  int v12; // r8@3
  BlockSource *v13; // r10@3
  char v14; // r5@3
  int v15; // r9@3
  int v16; // r7@3
  char v17; // r8@3
  unsigned int v18; // r0@3
  int v19; // r2@3
  int v20; // r3@3
  int v21; // r7@3
  __int64 v22; // kr00_8@10
  BlockSource *v23; // r0@10
  int v24; // r10@10
  __int64 v25; // kr08_8@10
  int v26; // r7@10
  int v27; // r0@10
  unsigned int v28; // r1@12
  int v29; // r0@12
  unsigned int v30; // r1@14
  unsigned int v31; // r0@14
  int v32; // r2@14
  int v33; // r1@16
  __int64 v34; // r2@16
  Player *v35; // [sp+8h] [bp-48h]@10
  const BlockPos *v36; // [sp+Ch] [bp-44h]@1
  char v37; // [sp+10h] [bp-40h]@16
  char v38; // [sp+11h] [bp-3Fh]@16
  char v39; // [sp+14h] [bp-3Ch]@10
  int v40; // [sp+20h] [bp-30h]@3
  int v41; // [sp+24h] [bp-2Ch]@7
  int v42; // [sp+28h] [bp-28h]@7

  v4 = a2;
  v36 = a4;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v6);
  if ( !result )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = Random::_genRandInt32(v5);
      v10 = Random::_genRandInt32(v5);
      v11 = Random::_genRandInt32(v5);
      v12 = v10 & 0xF;
      v13 = v4;
      v14 = Random::_genRandInt32(v5);
      v15 = *((_WORD *)v4 + 12);
      v16 = (v9 & 0xF) - v12;
      v17 = Random::_genRandInt32(v5);
      v18 = Random::_genRandInt32(v5) & 0xF;
      v19 = *((_DWORD *)v36 + 1);
      v20 = *((_DWORD *)v36 + 2);
      v40 = *(_DWORD *)v36 + v16;
      v21 = 0;
      if ( (v11 & 7) - (v14 & 7) > 0 )
        v21 = (v11 & 7) - (v14 & 7);
      if ( (v11 & 7) - (v14 & 7) > v15 )
        v21 = v15;
      v4 = v13;
      v41 = v19 + v21;
      v42 = (v17 & 0xF) - v18 + v20;
      result = BlockSource::isEmptyBlock(v13, (const BlockPos *)&v40);
      if ( result == 1 )
        break;
      if ( ++v8 >= 1000 )
        return result;
    }
    v22 = *(_QWORD *)&v40;
    v23 = v13;
    v24 = v42;
    v25 = *(_QWORD *)v36;
    v26 = *((_DWORD *)v36 + 2);
    v35 = (Player *)BlockSource::getLevel(v23);
    Vec3::Vec3((int)&v39, (int)v36);
    v27 = v25 - v22;
    if ( (signed int)v25 - (signed int)v22 < 0 )
      v27 = -v27;
    v28 = ((unsigned int)(v25 - v22) >> 7) & 0x1000000 | (v27 << 16);
    v29 = HIDWORD(v25) - HIDWORD(v22);
    if ( HIDWORD(v25) - HIDWORD(v22) < 0 )
      v29 = -v29;
    v30 = v28 | ((unsigned int)(HIDWORD(v25) - HIDWORD(v22)) >> 6) & 0x2000000 | (v29 << 8);
    v31 = v26 - v24;
    v32 = v26 - v24;
    if ( v26 - v24 < 0 )
      v32 = -v31;
    v33 = v30 | v32;
    LODWORD(v34) = &v39;
    HIDWORD(v34) = v33 | (v31 >> 5) & 0x4000000;
    Level::broadcastLevelEvent(v35, 2010, v34, 0);
    v37 = *(_BYTE *)(Block::mDragonEgg + 4);
    v38 = 0;
    BlockSource::setBlockAndData((int)v4, (BlockPos *)&v40, (int)&v37, 3, 0);
    result = BlockSource::removeBlock(v4, v36);
  }
  return result;
}


signed int __fastcall DragonEggBlock::use(DragonEggBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Player *v4; // r5@1
  const BlockPos *v5; // r4@1
  DragonEggBlock *v6; // r0@1

  v4 = a2;
  v5 = a3;
  v6 = (DragonEggBlock *)Entity::getRegion(a2);
  DragonEggBlock::_teleport(v6, v6, (Player *)((char *)v4 + 552), v5);
  return 1;
}


int __fastcall DragonEggBlock::DragonEggBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  HeavyBlock::HeavyBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_2707F08;
  Block::setSolid((Block *)v3, 0);
  Block::setPushesOutItems((Block *)v3, 1);
  Block::setIsInteraction((Block *)v3, 1);
  *(_DWORD *)(v3 + 24) = 0x2000000;
  *(_DWORD *)(v3 + 28) = 0;
  return v3;
}


int __fastcall DragonEggBlock::getDustColor(int result, unsigned __int8 a2)
{
  __int64 v2; // kr00_8@1

  v2 = qword_283E6B8;
  *(_QWORD *)result = *(_QWORD *)&Color::NIL;
  *(_QWORD *)(result + 8) = v2;
  return result;
}


void __fastcall DragonEggBlock::~DragonEggBlock(DragonEggBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall DragonEggBlock::breaksFallingBlocks(DragonEggBlock *this, int a2)
{
  return 0;
}
