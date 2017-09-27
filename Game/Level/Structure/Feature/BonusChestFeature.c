

signed int __fastcall BonusChestFeature::_place(BonusChestFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r4@1
  Feature *v6; // r8@1
  Random *v7; // r7@1
  int v8; // r5@2
  unsigned int v9; // r0@3
  void *v10; // r0@3
  __int64 v11; // r0@4
  int v12; // r2@4
  signed int result; // r0@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  char v16; // [sp+0h] [bp-98h]@15
  char v17; // [sp+1h] [bp-97h]@15
  __int64 v18; // [sp+4h] [bp-94h]@14
  int v19; // [sp+Ch] [bp-8Ch]@14
  char v20; // [sp+10h] [bp-88h]@12
  char v21; // [sp+11h] [bp-87h]@12
  __int64 v22; // [sp+14h] [bp-84h]@11
  int v23; // [sp+1Ch] [bp-7Ch]@11
  char v24; // [sp+20h] [bp-78h]@9
  char v25; // [sp+21h] [bp-77h]@9
  int v26; // [sp+24h] [bp-74h]@8
  int v27; // [sp+28h] [bp-70h]@8
  int v28; // [sp+2Ch] [bp-6Ch]@8
  char v29; // [sp+30h] [bp-68h]@6
  char v30; // [sp+31h] [bp-67h]@6
  int v31; // [sp+34h] [bp-64h]@5
  int v32; // [sp+38h] [bp-60h]@5
  int v33; // [sp+3Ch] [bp-5Ch]@5
  __int64 v34; // [sp+40h] [bp-58h]@4
  int v35; // [sp+48h] [bp-50h]@4
  __int64 v36; // [sp+4Ch] [bp-4Ch]@4
  int v37; // [sp+54h] [bp-44h]@4
  int v38; // [sp+58h] [bp-40h]@4
  int v39; // [sp+5Ch] [bp-3Ch]@4
  int v40; // [sp+60h] [bp-38h]@4
  int v41; // [sp+64h] [bp-34h]@4
  int v42; // [sp+68h] [bp-30h]@4
  int v43; // [sp+6Ch] [bp-2Ch]@4
  int v44; // [sp+74h] [bp-24h]@3
  char v45; // [sp+78h] [bp-20h]@2
  char v46; // [sp+79h] [bp-1Fh]@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  if ( j_BlockSource::isEmptyBlock(a2, a3) == 1
    && (v45 = *(_BYTE *)(Block::mChest + 4),
        v46 = 2,
        j_Feature::_setBlockAndData(v6, v5, v4, (const FullBlock *)&v45),
        (v8 = j_BlockSource::getBlockEntity(v5, v4)) != 0) )
  {
    sub_21E94B4((void **)&v44, "loot_tables/chests/spawn_bonus_chest.json");
    v9 = j_Random::_genRandInt32(v7);
    j_RandomizableBlockEntityContainerBase::setLootTable(v8, &v44, v9 >> 1);
    v10 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v44 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = *(_QWORD *)v4;
    v12 = *((_DWORD *)v4 + 2);
    v41 = *(_DWORD *)v4 + 1;
    v42 = HIDWORD(v11);
    v43 = v12;
    v38 = v11 - 1;
    v39 = HIDWORD(v11);
    v40 = v12;
    v36 = v11;
    v37 = v12 - 1;
    v34 = v11;
    v35 = v12 + 1;
    if ( j_BlockSource::isEmptyBlock(v5, (const BlockPos *)&v38) == 1 )
      v31 = v38;
      v32 = v39 - 1;
      v33 = v40;
      if ( j_BlockSource::isConsideredSolidBlock(v5, (const BlockPos *)&v31) == 1 )
        v29 = *(_BYTE *)(Block::mTorch + 4);
        v30 = 0;
        j_Feature::_setBlockAndData(v6, v5, (const BlockPos *)&v38, (const FullBlock *)&v29);
    if ( j_BlockSource::isEmptyBlock(v5, (const BlockPos *)&v41) == 1 )
      v26 = v41;
      v27 = v42 - 1;
      v28 = v43;
      if ( j_BlockSource::isConsideredSolidBlock(v5, (const BlockPos *)&v26) == 1 )
        v24 = *(_BYTE *)(Block::mTorch + 4);
        v25 = 0;
        j_Feature::_setBlockAndData(v6, v5, (const BlockPos *)&v41, (const FullBlock *)&v24);
    if ( j_BlockSource::isEmptyBlock(v5, (const BlockPos *)&v36) == 1 )
      v22 = v36 - 0x100000000LL;
      v23 = v37;
      if ( j_BlockSource::isConsideredSolidBlock(v5, (const BlockPos *)&v22) == 1 )
        v20 = *(_BYTE *)(Block::mTorch + 4);
        v21 = 0;
        j_Feature::_setBlockAndData(v6, v5, (const BlockPos *)&v36, (const FullBlock *)&v20);
    if ( j_BlockSource::isEmptyBlock(v5, (const BlockPos *)&v34) == 1 )
      v18 = v34 - 0x100000000LL;
      v19 = v35;
      if ( j_BlockSource::isConsideredSolidBlock(v5, (const BlockPos *)&v18) == 1 )
        v16 = *(_BYTE *)(Block::mTorch + 4);
        v17 = 0;
        j_Feature::_setBlockAndData(v6, v5, (const BlockPos *)&v34, (const FullBlock *)&v16);
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall BonusChestFeature::~BonusChestFeature(BonusChestFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Feature::~Feature(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall BonusChestFeature::_getFacingDataId(BonusChestFeature *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  int v5; // r4@1
  const BlockPos *v6; // r6@1
  BlockSource *v7; // r5@1
  int v8; // r2@2
  signed int v9; // r8@3
  signed int result; // r0@6
  int v11; // r2@7
  int v12; // r1@10
  int v13; // r2@10
  signed int v14; // r1@13
  char v15; // r1@16
  int v16; // r0@17
  int v17; // r1@17
  int v18; // r2@17
  signed int v19; // r6@17
  bool v20; // zf@19
  int v21; // r2@19
  int v22; // [sp+0h] [bp-48h]@17
  int v23; // [sp+4h] [bp-44h]@17
  int v24; // [sp+8h] [bp-40h]@17
  int v25; // [sp+Ch] [bp-3Ch]@10
  int v26; // [sp+10h] [bp-38h]@10
  int v27; // [sp+14h] [bp-34h]@10
  __int64 v28; // [sp+18h] [bp-30h]@7
  int v29; // [sp+20h] [bp-28h]@7
  __int64 v30; // [sp+24h] [bp-24h]@2
  int v31; // [sp+2Ch] [bp-1Ch]@2

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( a5 < 1 )
  {
    if ( a5 <= -1 )
    {
      v11 = *((_DWORD *)a3 + 2);
      v28 = *(_QWORD *)v6;
      v29 = v11 - 1;
      if ( j_BlockSource::isEmptyBlock(a2, (const BlockPos *)&v28) != 1 )
      {
        LOBYTE(result) = 3;
        return (unsigned __int8)result;
      }
      v9 = 1;
    }
    else
      v9 = 0;
  }
  else
    v8 = *((_DWORD *)a3 + 2);
    v30 = *(_QWORD *)v6;
    v31 = v8 + 1;
    if ( !j_BlockSource::isEmptyBlock(a2, (const BlockPos *)&v30) )
      LOBYTE(result) = 2;
      return (unsigned __int8)result;
    v9 = 0;
  if ( v5 < 1 )
    if ( v5 <= -1 )
      v16 = *(_DWORD *)v6;
      v17 = *((_DWORD *)v6 + 1);
      v18 = *((_DWORD *)v6 + 2);
      v19 = 0;
      v22 = v16 - 1;
      v23 = v17;
      v24 = v18;
      if ( a5 > 0 )
        v19 = 1;
      result = j_BlockSource::isEmptyBlock(v7, (const BlockPos *)&v22);
      v20 = result == 0;
      v21 = v19 | result ^ 1;
      LOBYTE(result) = 5;
      if ( !v20 )
        LOBYTE(result) = 2;
      if ( !v21 )
      v15 = 5;
      if ( v21 | v9 )
      goto LABEL_24;
    v12 = *((_DWORD *)v6 + 1);
    v13 = *((_DWORD *)v6 + 2);
    v25 = *(_DWORD *)v6 + 1;
    v26 = v12;
    v27 = v13;
    if ( !j_BlockSource::isEmptyBlock(v7, (const BlockPos *)&v25) )
      LOBYTE(result) = 4;
  LOBYTE(result) = 3;
  v14 = 0;
  if ( a5 > 0 )
    LOBYTE(result) = 2;
    v14 = 1;
  if ( v14 | v9 )
    return (unsigned __int8)result;
  v15 = 2;
LABEL_24:
  if ( v5 > 0 )
    v15 = 4;
  return (unsigned __int8)v15;
}


void __fastcall BonusChestFeature::~BonusChestFeature(BonusChestFeature *this)
{
  BonusChestFeature::~BonusChestFeature(this);
}


signed int __fastcall BonusChestFeature::place(BonusChestFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BonusChestFeature *v4; // r9@1
  unsigned int v5; // r0@1
  BlockSource *v6; // r4@1
  const BlockPos *v7; // r5@1
  int v8; // r1@1
  signed int v9; // r2@1
  int v10; // r0@2
  int *v11; // r6@2
  int v12; // r7@2
  signed int v13; // r11@3
  signed int v14; // r7@4
  signed int v15; // r6@4
  int v16; // r1@5
  int v17; // r2@5
  int v18; // r1@7
  int v19; // r2@7
  int v20; // r1@9
  int v21; // r2@9
  int v22; // r1@11
  int v23; // r2@11
  signed int v24; // r4@15
  Level *v25; // r0@16
  char *v26; // r0@16
  unsigned int v28; // [sp+4h] [bp-A04h]@1
  unsigned int v29; // [sp+8h] [bp-A00h]@1
  int v30; // [sp+9C8h] [bp-40h]@1
  char v31; // [sp+9CCh] [bp-3Ch]@1
  int v32; // [sp+9D0h] [bp-38h]@1
  int v33; // [sp+9D4h] [bp-34h]@3
  int v34; // [sp+9D8h] [bp-30h]@5
  int v35; // [sp+9DCh] [bp-2Ch]@5
  int v36; // [sp+9E0h] [bp-28h]@5

  v4 = this;
  v5 = *(_DWORD *)a4;
  v6 = a2;
  v7 = a3;
  v28 = v5;
  v30 = 625;
  v8 = 0;
  v9 = 1;
  v31 = 0;
  v32 = 0;
  v29 = v5;
  do
  {
    v10 = v5 ^ (v5 >> 30);
    v11 = (int *)(&v28 + v8);
    v12 = v8++ + 1812433253 * v10;
    v5 = v9++ + 1812433253 * v10;
    v11[2] = v12 + 1;
  }
  while ( v8 != 397 );
  v30 = 624;
  v13 = 3;
  v33 = 398;
  while ( 2 )
    v14 = 3;
    v15 = -3;
    do
    {
      v16 = *((_DWORD *)v7 + 1);
      v17 = *((_DWORD *)v7 + 2);
      v34 = *(_DWORD *)v7 + v13;
      v35 = v16;
      v36 = v14 + v17;
      if ( j_BlockSource::findNextTopSolidBlockUnder(v6, (BlockPos *)&v34) == 1
        && (++v35, j_BonusChestFeature::_place(v4, v6, (const BlockPos *)&v34, (Random *)&v28) == 1)
        || (v18 = *((_DWORD *)v7 + 1),
            v19 = *((_DWORD *)v7 + 2),
            v34 = *(_DWORD *)v7 - v13,
            v35 = v18,
            v36 = v15 + v19,
            j_BlockSource::findNextTopSolidBlockUnder(v6, (BlockPos *)&v34) == 1)
        || (v20 = *((_DWORD *)v7 + 1),
            v21 = *((_DWORD *)v7 + 2),
            v34 = *(_DWORD *)v7 + v13,
            v35 = v20,
            v36 = v15 + v21,
        || (v22 = *((_DWORD *)v7 + 1),
            v23 = *((_DWORD *)v7 + 2),
            v35 = v22,
            v36 = v14 + v23,
        && (++v35, j_BonusChestFeature::_place(v4, v6, (const BlockPos *)&v34, (Random *)&v28) == 1) )
      {
        v25 = (Level *)j_BlockSource::getLevel(v6);
        v26 = j_Level::getLevelData(v25);
        v24 = 1;
        j_LevelData::setBonusChestSpawned((LevelData *)v26, 1);
        return v24;
      }
      ++v14;
      --v15;
    }
    while ( v14 < 11 );
    if ( ++v13 < 11 )
      continue;
    break;
  return 0;
}
