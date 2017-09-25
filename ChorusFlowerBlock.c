

int __fastcall ChorusFlowerBlock::canSurvive(ChorusFlowerBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  int v5; // r0@1
  int v6; // r1@1
  int v7; // r2@1
  Block *v8; // r0@1
  int v10; // r1@3
  int v11; // r2@3
  int v12; // r10@4
  _BYTE *v13; // r6@4
  int v14; // r11@4
  signed int v15; // r0@9
  char v16; // [sp+4h] [bp-54h]@7
  char v17; // [sp+10h] [bp-48h]@5
  int v18; // [sp+1Ch] [bp-3Ch]@3
  int v19; // [sp+20h] [bp-38h]@3
  int v20; // [sp+24h] [bp-34h]@3
  int v21; // [sp+28h] [bp-30h]@1
  int v22; // [sp+2Ch] [bp-2Ch]@1
  int v23; // [sp+30h] [bp-28h]@1

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v21 = v5;
  v22 = v6 - 1;
  v23 = v7;
  v8 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v21);
  if ( Block::canGrowChorus(v8) )
    return 1;
  v10 = *((_DWORD *)v3 + 1);
  v11 = *((_DWORD *)v3 + 2);
  v18 = *(_DWORD *)v3;
  v19 = v10 - 1;
  v20 = v11;
  if ( BlockSource::isEmptyBlock(v4, (const BlockPos *)&v18) != 1 )
    return 0;
  v12 = 0;
  v14 = dword_2803214;
  v13 = (_BYTE *)Facing::Plane::HORIZONTAL;
  if ( Facing::Plane::HORIZONTAL == dword_2803214 )
  {
LABEL_9:
    v15 = 1;
    goto LABEL_12;
  }
  while ( 1 )
    BlockPos::relative((BlockPos *)&v17, (int)v3, *v13, 1);
    if ( *(_BYTE *)(BlockSource::getBlock(v4, (const BlockPos *)&v17) + 4) != *(_BYTE *)(Block::mChorusPlantBlock + 4) )
      break;
    ++v12;
LABEL_8:
    if ( (_BYTE *)v14 == ++v13 )
      goto LABEL_9;
  BlockPos::relative((BlockPos *)&v16, (int)v3, *v13, 1);
  if ( BlockSource::isEmptyBlock(v4, (const BlockPos *)&v16) == 1 )
    goto LABEL_8;
  v15 = 0;
LABEL_12:
  if ( v12 != 1 )
    v12 = 0;
  return v15 & v12;
}


LevelChunk *__fastcall ChorusFlowerBlock::neighborChanged(ChorusFlowerBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  ChorusFlowerBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  LevelChunk *result; // r0@1
  LevelChunk **v8; // r0@3
  char v9; // [sp+Ch] [bp-24h]@3
  char v10; // [sp+10h] [bp-20h]@2

  v4 = this;
  v5 = a3;
  v6 = a2;
  result = (LevelChunk *)(*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    ChunkPos::ChunkPos((ChunkPos *)&v10, v5);
    result = (LevelChunk *)BlockSource::getChunk(v6, (const ChunkPos *)&v10);
    if ( result )
    {
      v8 = (LevelChunk **)LevelChunk::getTickQueue(result);
      v9 = *((_BYTE *)v4 + 4);
      result = BlockTickingQueue::add(v8, v6, (int)v5, &v9, 1u, 0);
    }
  }
  return result;
}


signed int __fastcall ChorusFlowerBlock::getVariant(ChorusFlowerBlock *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( a2 == 5 )
    result = 1;
  return result;
}


int __fastcall ChorusFlowerBlock::generatePlant(ChorusFlowerBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4, int a5)
{
  ChorusFlowerBlock *v5; // r7@1
  const BlockPos *v6; // r5@1
  Random *v7; // r4@1
  BlockSource *v8; // r6@1
  int v10; // [sp+8h] [bp-18h]@1

  v5 = this;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  LOBYTE(v10) = *(_BYTE *)(Block::mChorusPlantBlock + 4);
  BlockSource::setBlock((int)this, a2, (char *)&v10, 3);
  return ChorusFlowerBlock::_growTreeRecursive(v5, v8, __PAIR__((unsigned int)v6, (unsigned int)v8), v7, 0, v10);
}


int __fastcall ChorusFlowerBlock::ChorusFlowerBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  __int64 v7; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(2);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_2705ACC;
  Block::setTicking((Block *)v3, 1);
  Block::setPushesOutItems((Block *)v3, 1);
  v7 = *(_QWORD *)(v3 + 24);
  LODWORD(v7) = v7 | 0x2000000;
  *(_QWORD *)(v3 + 24) = v7;
  return v3;
}


void __fastcall ChorusFlowerBlock::~ChorusFlowerBlock(ChorusFlowerBlock *this)
{
  ChorusFlowerBlock::~ChorusFlowerBlock(this);
}


int __fastcall ChorusFlowerBlock::getResourceCount(ChorusFlowerBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


int __fastcall ChorusFlowerBlock::playerDestroy(ChorusFlowerBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  ChorusFlowerBlock *v4; // r5@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r0@1
  BlockSource *v7; // r6@1
  Level *v8; // r0@1
  int result; // r0@1
  int v10; // [sp+0h] [bp-60h]@2
  int v11; // [sp+8h] [bp-58h]@6
  void *v12; // [sp+24h] [bp-3Ch]@4
  void *ptr; // [sp+34h] [bp-2Ch]@2

  v4 = this;
  v5 = a3;
  v6 = (BlockSource *)Entity::getRegion(a2);
  v7 = v6;
  v8 = (Level *)BlockSource::getLevel(v6);
  result = Level::isClientSide(v8);
  if ( !result )
  {
    ItemInstance::ItemInstance((ItemInstance *)&v10, *((_BYTE *)v4 + 4), 1, 0);
    Block::popResource(v4, v7, v5, (const ItemInstance *)&v10);
    if ( ptr )
      operator delete(ptr);
    if ( v12 )
      operator delete(v12);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    result = 0;
  }
  return result;
}


int __fastcall ChorusFlowerBlock::mayPlace(ChorusFlowerBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  ChorusFlowerBlock *v5; // r6@1
  int result; // r0@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( Block::mayPlace(this, a2, a3) == 1 )
    result = (*(int (__fastcall **)(ChorusFlowerBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 324))(
               v5,
               v4,
               v3);
  else
    result = 0;
  return result;
}


int __fastcall ChorusFlowerBlock::isWaterBlocking(ChorusFlowerBlock *this)
{
  return 0;
}


int __fastcall ChorusFlowerBlock::_placeGrownFlower(ChorusFlowerBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  Level *v6; // r6@1
  char v8; // [sp+10h] [bp-28h]@1
  char v9; // [sp+1Ch] [bp-1Ch]@1
  unsigned __int8 v10; // [sp+1Dh] [bp-1Bh]@1

  v4 = a3;
  v5 = a2;
  v9 = *((_BYTE *)this + 4);
  v10 = a4;
  BlockSource::setBlockAndData((int)a2, a3, (int)&v9, 3, 0);
  v6 = (Level *)BlockSource::getLevel(v5);
  Vec3::Vec3((int)&v8, (int)v4);
  return Level::broadcastSoundEvent(v6, (int)v5, 114, (int)&v8, -1, 1, 0, 0);
}


void __fastcall ChorusFlowerBlock::~ChorusFlowerBlock(ChorusFlowerBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ChorusFlowerBlock::_growTreeRecursive(ChorusFlowerBlock *this, BlockSource *a2, __int64 a3, Random *a4, int a5, int a6)
{
  BlockSource *v6; // r4@1
  signed int v7; // r6@1
  BlockSource *v8; // r5@1
  signed int v9; // r10@3
  int v10; // r1@4
  int v11; // r2@4
  _BYTE *v12; // r8@4
  int v13; // r11@4
  int v14; // r0@5
  int result; // r0@6
  Random *v16; // r11@9
  signed int v17; // r6@10
  unsigned int v18; // r8@12
  int v19; // r7@15
  int v20; // r6@15
  int v21; // r10@16
  int v22; // r1@16
  int v23; // r2@16
  int v24; // r0@16
  int v25; // r0@19
  _BYTE *v26; // r7@24
  int v27; // r11@24
  int v28; // r10@25
  int v29; // r0@26
  int v30; // r2@33
  int v31; // r3@33
  int v32; // [sp+8h] [bp-90h]@0
  signed int v33; // [sp+18h] [bp-80h]@15
  __int64 v34; // [sp+1Ch] [bp-7Ch]@1
  signed int v35; // [sp+28h] [bp-70h]@3
  char v36; // [sp+2Ch] [bp-6Ch]@33
  char v37; // [sp+2Dh] [bp-6Bh]@33
  int v38; // [sp+30h] [bp-68h]@33
  int v39; // [sp+34h] [bp-64h]@33
  int v40; // [sp+38h] [bp-60h]@33
  char v41; // [sp+3Ch] [bp-5Ch]@29
  int v42; // [sp+40h] [bp-58h]@23
  int v43; // [sp+44h] [bp-54h]@23
  int v44; // [sp+48h] [bp-50h]@23
  int v45; // [sp+4Ch] [bp-4Ch]@16
  int v46; // [sp+50h] [bp-48h]@16
  int v47; // [sp+54h] [bp-44h]@16
  char v48; // [sp+58h] [bp-40h]@8
  int v49; // [sp+5Ch] [bp-3Ch]@4
  int v50; // [sp+60h] [bp-38h]@4
  int v51; // [sp+64h] [bp-34h]@4
  char v52; // [sp+68h] [bp-30h]@6

  v6 = this;
  v7 = 1;
  v34 = a3;
  v8 = a2;
  if ( !a5 )
    v7 = 2;
  v35 = (Random::_genRandInt32((Random *)HIDWORD(a3)) & 3) + v7;
  v9 = 0;
  do
  {
    v10 = *((_DWORD *)v8 + 1);
    v11 = *((_DWORD *)v8 + 2);
    ++v9;
    v49 = *(_DWORD *)v8;
    v50 = v10 + v9;
    v51 = v11;
    v13 = dword_2803214;
    v12 = (_BYTE *)Facing::Plane::HORIZONTAL;
    if ( Facing::Plane::HORIZONTAL != dword_2803214 )
    {
      do
      {
        v14 = *v12;
        if ( v14 != 6 )
        {
          BlockPos::relative((BlockPos *)&v52, (int)&v49, (char)v14, 1);
          result = BlockSource::isEmptyBlock(v6, (const BlockPos *)&v52);
          if ( result != 1 )
            return result;
        }
        ++v12;
      }
      while ( (_BYTE *)v13 != v12 );
    }
    v48 = *(_BYTE *)(Block::mChorusPlantBlock + 4);
    BlockSource::setBlock((int)v6, (BlockPos *)&v49, &v48, 3);
  }
  while ( v9 < v35 );
  v16 = (Random *)HIDWORD(v34);
  if ( a5 > 3 )
    goto LABEL_33;
  v17 = 0;
    v17 = -1;
  v18 = Random::_genRandInt32((Random *)HIDWORD(v34)) & 3;
  if ( v18 == v17 )
LABEL_33:
    v30 = *((_DWORD *)v8 + 1);
    v31 = *((_DWORD *)v8 + 2);
    v38 = *(_DWORD *)v8;
    v39 = v35 + v30;
    v40 = v31;
    v36 = *(_BYTE *)(Block::mChorusFlowerBlock + 4);
    v37 = 5;
    return BlockSource::setBlockAndData((int)v6, (BlockPos *)&v38, (int)&v36, 3, 0);
    ++v18;
  v19 = v34;
  v20 = 0;
  v33 = 0;
    v21 = *(_BYTE *)(Facing::Plane::HORIZONTAL + (Random::_genRandInt32(v16) & 3));
    v22 = *((_DWORD *)v8 + 1);
    v23 = *((_DWORD *)v8 + 2);
    v45 = *(_DWORD *)v8;
    v46 = v35 + v22;
    v47 = v23;
    BlockPos::relative((BlockPos *)&v49, (int)&v45, v21, 1);
    v24 = v49 - *(_DWORD *)v19;
    if ( v49 - *(_DWORD *)v19 < 0 )
      v24 = -v24;
    if ( v24 < (signed int)a4 )
      v25 = v51 - *(_DWORD *)(v19 + 8);
      if ( v51 - *(_DWORD *)(v19 + 8) < 0 )
        v25 = -v25;
      if ( v25 < (signed int)a4 && BlockSource::isEmptyBlock(v6, (const BlockPos *)&v49) == 1 )
        v42 = v49;
        v43 = v50 - 1;
        v44 = v51;
        if ( BlockSource::isEmptyBlock(v6, (const BlockPos *)&v42) == 1 )
          v27 = dword_2803214;
          v26 = (_BYTE *)Facing::Plane::HORIZONTAL;
          if ( Facing::Plane::HORIZONTAL == dword_2803214 )
          {
LABEL_29:
            v41 = *(_BYTE *)(Block::mChorusPlantBlock + 4);
            BlockSource::setBlock((int)v6, (BlockPos *)&v49, &v41, 3);
            v16 = (Random *)HIDWORD(v34);
            v19 = v34;
            ChorusFlowerBlock::_growTreeRecursive(v6, (BlockSource *)&v49, v34, a4, a5 + 1, v32);
            v33 = 1;
            goto LABEL_31;
          }
          v28 = Facing::OPPOSITE_FACING[v21];
          while ( 1 )
            v29 = *v26;
            if ( v29 != v28 )
            {
              BlockPos::relative((BlockPos *)&v52, (int)&v49, (char)v29, 1);
              if ( BlockSource::isEmptyBlock(v6, (const BlockPos *)&v52) != 1 )
                break;
            }
            if ( (_BYTE *)v27 == ++v26 )
              goto LABEL_29;
        v16 = (Random *)HIDWORD(v34);
        v19 = v34;
LABEL_31:
    ++v20;
  while ( v20 != v18 );
  result = v33;
  if ( !(v33 & 1) )
  return result;
}


int __fastcall ChorusFlowerBlock::_placeDeadFlower(ChorusFlowerBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  Level *v5; // r6@1
  char v7; // [sp+10h] [bp-28h]@1
  char v8; // [sp+1Ch] [bp-1Ch]@1
  char v9; // [sp+1Dh] [bp-1Bh]@1

  v3 = a3;
  v4 = a2;
  v8 = *((_BYTE *)this + 4);
  v9 = 5;
  BlockSource::setBlockAndData((int)a2, a3, (int)&v8, 3, 0);
  v5 = (Level *)BlockSource::getLevel(v4);
  Vec3::Vec3((int)&v7, (int)v3);
  return Level::broadcastSoundEvent(v5, (int)v4, 115, (int)&v7, -1, 1, 0, 0);
}


unsigned int __fastcall ChorusFlowerBlock::tick(ChorusFlowerBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  ChorusFlowerBlock *v4; // r7@1
  Random *v5; // r10@1
  const BlockPos *v6; // r5@1
  BlockSource *v7; // r4@1
  int v8; // r1@2
  int v9; // r2@2
  unsigned int result; // r0@2
  unsigned int v11; // r8@4
  int v12; // r1@5
  int v13; // r2@5
  int v14; // r6@5
  int v15; // r1@6
  int v16; // r2@6
  int v17; // r1@8
  int v18; // r2@8
  int v19; // r6@8
  int v20; // r9@10
  Level *v21; // r0@11
  int v22; // r6@13
  int v23; // r1@15
  int v24; // r2@15
  int v25; // r11@15
  int v26; // r6@15
  signed int v27; // r6@17
  int v28; // r1@19
  int v29; // r2@19
  int v30; // r9@19
  int v31; // r6@19
  int v32; // r1@23
  int v33; // r2@23
  int v34; // r6@23
  int v35; // r11@23
  int v36; // r2@24
  unsigned int v37; // r11@30
  unsigned int v38; // r0@32
  int v39; // r1@32
  _BYTE *v40; // r8@35
  int v41; // r11@35
  int v42; // r0@36
  char *v43; // r8@39
  int v44; // r6@39
  Level *v45; // r0@39
  int v46; // r1@39
  int v47; // r2@39
  unsigned int v48; // r2@42
  char *v49; // r0@43
  int v50; // r9@46
  unsigned int v51; // r8@46
  _DWORD *v52; // r11@46
  int v53; // r6@47
  _BYTE *v54; // r8@49
  _BYTE *v55; // r10@49
  int v56; // r6@50
  int v57; // r0@51
  Level *v58; // r6@54
  int v59; // r6@60
  char v60; // [sp+18h] [bp-A0h]@46
  char v61; // [sp+1Ch] [bp-9Ch]@46
  unsigned int v62; // [sp+28h] [bp-90h]@46
  int v63; // [sp+2Ch] [bp-8Ch]@12
  Random *v64; // [sp+2Ch] [bp-8Ch]@49
  unsigned int v65; // [sp+30h] [bp-88h]@12
  char v66; // [sp+34h] [bp-84h]@58
  int v67; // [sp+38h] [bp-80h]@48
  int v68; // [sp+3Ch] [bp-7Ch]@48
  int v69; // [sp+40h] [bp-78h]@48
  char v70; // [sp+44h] [bp-74h]@39
  char v71; // [sp+45h] [bp-73h]@39
  int v72; // [sp+48h] [bp-70h]@48
  int v73; // [sp+4Ch] [bp-6Ch]@48
  char v74; // [sp+50h] [bp-68h]@39
  int v75; // [sp+54h] [bp-64h]@8
  int v76; // [sp+58h] [bp-60h]@8
  int v77; // [sp+5Ch] [bp-5Ch]@8
  int v78; // [sp+60h] [bp-58h]@6
  int v79; // [sp+64h] [bp-54h]@6
  int v80; // [sp+68h] [bp-50h]@6
  int v81; // [sp+6Ch] [bp-4Ch]@5
  int v82; // [sp+70h] [bp-48h]@5
  int v83; // [sp+74h] [bp-44h]@5
  int v84; // [sp+78h] [bp-40h]@2
  int v85; // [sp+7Ch] [bp-3Ch]@2
  int v86; // [sp+80h] [bp-38h]@2
  char v87; // [sp+84h] [bp-34h]@54
  char v88; // [sp+85h] [bp-33h]@54
  char v89; // [sp+88h] [bp-30h]@37

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !(*(int (**)(void))(*(_DWORD *)this + 324))() )
  {
    v21 = (Level *)BlockSource::getLevel(v7);
    return j_j_j__ZN5Level12destroyBlockER11BlockSourceRK8BlockPosb_0(v21, v7, v6, 0);
  }
  v8 = *((_DWORD *)v6 + 1);
  v9 = *((_DWORD *)v6 + 2);
  v84 = *(_DWORD *)v6;
  v85 = v8 + 1;
  v86 = v9;
  result = BlockSource::isEmptyBlock(v7, (const BlockPos *)&v84);
  if ( result != 1 )
    return result;
  result = v85;
  if ( v85 >= *((_WORD *)v7 + 12) )
  result = BlockSource::getData(v7, v6);
  v11 = result;
  if ( result > 4 )
  Random::_genRandInt32(v5);
  v12 = *((_DWORD *)v6 + 1);
  v13 = *((_DWORD *)v6 + 2);
  v81 = *(_DWORD *)v6;
  v82 = v12 - 1;
  v83 = v13;
  v14 = BlockSource::getBlock(v7, (const BlockPos *)&v81);
  if ( Block::canGrowChorus((Block *)v14)
    || (v15 = *((_DWORD *)v6 + 1),
        v16 = *((_DWORD *)v6 + 2),
        v78 = *(_DWORD *)v6,
        v79 = v15 - 1,
        v80 = v16,
        BlockSource::isEmptyBlock(v7, (const BlockPos *)&v78) == 1) )
    if ( *(_BYTE *)(v14 + 4) != *(_BYTE *)(Block::mChorusPlantBlock + 4) )
    {
      v65 = v11;
      v63 = 0;
LABEL_35:
      v41 = dword_2803214;
      v40 = (_BYTE *)Facing::Plane::HORIZONTAL;
      if ( Facing::Plane::HORIZONTAL == dword_2803214 )
      {
LABEL_39:
        v74 = *(_BYTE *)(Block::mChorusPlantBlock + 4);
        BlockSource::setBlock((int)v7, v6, &v74, 3);
        v70 = *((_BYTE *)v4 + 4);
        v71 = v65;
        BlockSource::setBlockAndData((int)v7, (BlockPos *)&v84, (int)&v70, 3, 0);
        v43 = &v89;
        v44 = BlockSource::getLevel(v7);
        Vec3::Vec3((int)&v89, (int)&v84);
        v45 = (Level *)v44;
        v46 = (int)v7;
        v47 = 114;
        return Level::broadcastSoundEvent(v45, v46, v47, (int)v43, -1, 1, 0, 0);
      }
      while ( 1 )
        v42 = *v40;
        if ( v42 != 6 )
        {
          BlockPos::relative((BlockPos *)&v89, (int)&v84, (char)v42, 1);
          result = BlockSource::isEmptyBlock(v7, (const BlockPos *)&v89);
          if ( result != 1 )
            break;
        }
        if ( (_BYTE *)v41 == ++v40 )
          goto LABEL_39;
      v11 = v65;
      v22 = v63;
LABEL_41:
      if ( v11 > 5 )
        return result;
      goto LABEL_42;
    }
    v17 = *((_DWORD *)v6 + 1);
    v18 = *((_DWORD *)v6 + 2);
    v75 = *(_DWORD *)v6;
    v76 = v17 - 2;
    v77 = v18;
    v19 = BlockSource::getBlock(v7, (const BlockPos *)&v75);
    if ( Block::canGrowChorus((Block *)v19) == 1 )
      if ( *(_BYTE *)(v19 + 4) != *(_BYTE *)(Block::mChorusPlantBlock + 4) )
        v27 = 1;
LABEL_34:
        v65 = v11;
        v63 = v27 != 0;
        goto LABEL_35;
      v20 = 2;
    else
      v20 = 1;
    v23 = *((_DWORD *)v6 + 1);
    v24 = *((_DWORD *)v6 + 2);
    v25 = v20 + 1;
    v76 = v23 - (v20 + 1);
    v77 = v24;
    v26 = BlockSource::getBlock(v7, (const BlockPos *)&v75);
    if ( Block::canGrowChorus((Block *)v26) )
      if ( *(_BYTE *)(v26 + 4) != *(_BYTE *)(Block::mChorusPlantBlock + 4) )
LABEL_29:
        if ( v20 >= 2 )
          v37 = 5;
          if ( !v27 )
            v37 = 4;
          v38 = Random::_genRandInt32(v5);
          v39 = v38 % v37;
          result = v38 / v37;
          if ( v39 < v20 )
          {
            v22 = v27 != 0;
            goto LABEL_41;
          }
        goto LABEL_34;
      v25 = v20;
    v28 = *((_DWORD *)v6 + 1);
    v29 = *((_DWORD *)v6 + 2);
    v30 = v25 + 1;
    v76 = v28 - (v25 + 1);
    v77 = v29;
    v31 = BlockSource::getBlock(v7, (const BlockPos *)&v75);
    if ( Block::canGrowChorus((Block *)v31) == 1 )
      if ( *(_BYTE *)(v31 + 4) != *(_BYTE *)(Block::mChorusPlantBlock + 4) )
        v20 = v25;
        goto LABEL_29;
      v30 = v25;
    v32 = *((_DWORD *)v6 + 1);
    v33 = *((_DWORD *)v6 + 2);
    v34 = v30;
    v20 = v30 + 1;
    v76 = v32 - v20;
    v77 = v33;
    v35 = BlockSource::getBlock(v7, (const BlockPos *)&v75);
    if ( Block::canGrowChorus((Block *)v35) == 1 )
      v36 = v34;
      if ( *(_BYTE *)(v35 + 4) != *(_BYTE *)(Block::mChorusPlantBlock + 4) )
        v20 = v36;
      v20 = v34;
    v27 = 0;
    goto LABEL_29;
  v22 = 0;
LABEL_42:
  v48 = Random::_genRandInt32(v5) & 3;
  if ( v48 == v22 << 31 >> 31 )
    v49 = (char *)v4 + 4;
LABEL_60:
    v70 = *v49;
    v71 = 5;
    BlockSource::setBlockAndData((int)v7, v6, (int)&v70, 3, 0);
    v43 = &v89;
    v59 = BlockSource::getLevel(v7);
    Vec3::Vec3((int)&v89, (int)v6);
    v45 = (Level *)v59;
    v46 = (int)v7;
    v47 = 115;
    return Level::broadcastSoundEvent(v45, v46, v47, (int)v43, -1, 1, 0, 0);
  if ( v22 )
    ++v48;
  v62 = v48;
  v60 = v11 + 1;
  v50 = 0;
  v51 = v48;
  v52 = &Facing::Plane::HORIZONTAL;
  v61 = 0;
  do
    v53 = *(_BYTE *)(*v52 + (Random::_genRandInt32(v5) & 3));
    BlockPos::relative((BlockPos *)&v70, (int)v6, v53, 1);
    if ( BlockSource::isEmptyBlock(v7, (const BlockPos *)&v70) == 1 )
      v67 = *(_DWORD *)&v70;
      v68 = v72 - 1;
      v69 = v73;
      if ( BlockSource::isEmptyBlock(v7, (const BlockPos *)&v67) == 1 )
        v64 = v5;
        v54 = (_BYTE *)(*(_QWORD *)v52 >> 32);
        v55 = (_BYTE *)*(_QWORD *)v52;
        if ( v55 == v54 )
LABEL_54:
          v87 = *((_BYTE *)v4 + 4);
          v88 = v60;
          BlockSource::setBlockAndData((int)v7, (BlockPos *)&v70, (int)&v87, 3, 0);
          v58 = (Level *)BlockSource::getLevel(v7);
          Vec3::Vec3((int)&v89, (int)&v70);
          v61 = 1;
          Level::broadcastSoundEvent(v58, (int)v7, 114, (int)&v89, -1, 1, 0, 0);
        else
          v56 = Facing::OPPOSITE_FACING[v53];
          while ( 1 )
            v57 = *v55;
            if ( v57 != v56 )
            {
              BlockPos::relative((BlockPos *)&v89, (int)&v70, (char)v57, 1);
              if ( BlockSource::isEmptyBlock(v7, (const BlockPos *)&v89) != 1 )
                break;
            }
            if ( v54 == ++v55 )
              goto LABEL_54;
        v5 = v64;
        v51 = v62;
        v52 = &Facing::Plane::HORIZONTAL;
    ++v50;
  while ( v50 != v51 );
  v49 = (char *)v4 + 4;
  if ( !(v61 & 1) )
    goto LABEL_60;
  v66 = *(_BYTE *)(Block::mChorusPlantBlock + 4);
  return BlockSource::setBlock((int)v7, v6, &v66, 3);
}


signed int __fastcall ChorusFlowerBlock::_allNeighborsEmpty(ChorusFlowerBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4)
{
  BlockSource *v4; // r9@1
  BlockSource *v5; // r8@1
  int v6; // r4@1
  _BYTE *v7; // r7@1
  int v8; // r5@2
  int v9; // r0@3
  signed int result; // r0@6
  int v11; // [sp+0h] [bp-28h]@4

  v4 = this;
  v5 = a2;
  v6 = dword_2803214;
  v7 = (_BYTE *)Facing::Plane::HORIZONTAL;
  if ( Facing::Plane::HORIZONTAL == dword_2803214 )
  {
LABEL_6:
    result = 1;
  }
  else
    v8 = (unsigned __int8)a3;
    while ( 1 )
    {
      v9 = *v7;
      if ( v9 != v8 )
      {
        BlockPos::relative((BlockPos *)&v11, (int)v5, (char)v9, 1);
        if ( BlockSource::isEmptyBlock(v4, (const BlockPos *)&v11) != 1 )
          break;
      }
      if ( (_BYTE *)v6 == ++v7 )
        goto LABEL_6;
    }
    result = 0;
  return result;
}
