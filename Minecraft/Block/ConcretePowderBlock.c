

signed int __fastcall ConcretePowderBlock::shouldStopFalling(ConcretePowderBlock *this, Entity *a2)
{
  Entity *v2; // r4@1
  BlockSource *v3; // r5@2
  int v4; // r0@2
  int *v5; // r0@2
  BlockSource *v6; // r5@3
  int v7; // r0@3
  ConcretePowderBlock *v8; // r0@3
  signed int result; // r0@4
  char v10; // [sp+4h] [bp-2Ch]@3
  unsigned __int8 v11; // [sp+5h] [bp-2Bh]@3
  char v12; // [sp+8h] [bp-28h]@3
  char v13; // [sp+14h] [bp-1Ch]@2

  v2 = a2;
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 488))(a2) != 66
    || (v3 = (BlockSource *)Entity::getRegion(v2),
        v4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 52))(v2),
        BlockPos::BlockPos((int)&v13, v4),
        v5 = (int *)BlockSource::getMaterial(v3, (const BlockPos *)&v13),
        Material::isType(v5, 5) != 1)
    || (v6 = (BlockSource *)Entity::getRegion(v2),
        v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 52))(v2),
        BlockPos::BlockPos((int)&v12, v7),
        v8 = (ConcretePowderBlock *)FallingBlock::getBlock((FallingBlock *)&v10, (int)v2),
        ConcretePowderBlock::_tryTouchWater(v8, v6, (const BlockPos *)&v12, v11) != 1) )
  {
    result = *((_BYTE *)v2 + 216);
    if ( *((_BYTE *)v2 + 216) )
      result = 1;
  }
  else
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)v2 + 44))(v2);
    result = 0;
  return result;
}


int __fastcall ConcretePowderBlock::getSpawnResourcesAuxValue(ConcretePowderBlock *this, int a2)
{
  return a2;
}


int __fastcall ConcretePowderBlock::getDustColor(ConcretePowderBlock *this, int a2, unsigned int a3)
{
  ConcretePowderBlock *v3; // r5@1
  unsigned int v4; // r4@1
  unsigned __int64 *v5; // r0@1
  unsigned int v6; // r0@1
  int v7; // r1@1
  char *v8; // r0@1
  __int64 v9; // r2@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState(a2, 24);
  v6 = (0xFu >> (4 - (*v5 >> 32))) & (v4 >> (*v5 + 1 - (*v5 >> 32)));
  v7 = 16 * v6;
  v8 = (char *)&unk_280CE8C + 16 * v6;
  v9 = *(_QWORD *)(v8 + 4);
  result = *((_DWORD *)v8 + 3);
  *(_DWORD *)v3 = *(_DWORD *)((char *)&unk_280CE8C + v7);
  *(_QWORD *)((char *)v3 + 4) = v9;
  *((_DWORD *)v3 + 3) = result;
  return result;
}


int __fastcall ConcretePowderBlock::getMapColor(ConcretePowderBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r7@1
  ConcretePowderBlock *v6; // r4@1
  unsigned int v7; // r5@1
  unsigned __int64 *v8; // r0@1
  unsigned int v9; // r0@1
  int result; // r0@2
  int v11; // r2@3
  char *v12; // r0@3
  __int64 v13; // kr00_8@3

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = BlockSource::getData(a3, a4);
  v8 = (unsigned __int64 *)Block::getBlockState((int)v5, 24);
  v9 = (0xFu >> (4 - (*v8 >> 32))) & (v7 >> (*v8 + 1 - (*v8 >> 32)));
  if ( v9 < 0x10 )
  {
    v11 = 16 * v9;
    v12 = (char *)&unk_280CE8C + 16 * v9;
    v13 = *(_QWORD *)(v12 + 4);
    result = *((_DWORD *)v12 + 3);
    *(_DWORD *)v6 = *(_DWORD *)((char *)&unk_280CE8C + v11);
    *(_QWORD *)((char *)v6 + 4) = v13;
    *((_DWORD *)v6 + 3) = result;
  }
  else
    result = Block::getMapColor(v6, v5, v4);
  return result;
}


signed int __fastcall ConcretePowderBlock::onPlace(ConcretePowderBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  HeavyBlock *v5; // r6@1
  ConcretePowderBlock *v6; // r0@1
  signed int result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (ConcretePowderBlock *)BlockSource::getData(a2, a3);
  result = ConcretePowderBlock::_tryTouchWater(v6, v4, v3, (unsigned __int8)v6);
  if ( !result )
    result = j_j_j__ZNK10HeavyBlock7onPlaceER11BlockSourceRK8BlockPos(v5, v4, v3);
  return result;
}


void __fastcall ConcretePowderBlock::buildDescriptionId(ConcretePowderBlock *this, int a2, int a3)
{
  ConcretePowderBlock::buildDescriptionId(this, a2, a3);
}


void __fastcall ConcretePowderBlock::~ConcretePowderBlock(ConcretePowderBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


LevelChunk *__fastcall ConcretePowderBlock::neighborChanged(ConcretePowderBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r6@1
  HeavyBlock *v6; // r7@1
  const BlockPos *v7; // r4@1
  ConcretePowderBlock *v8; // r0@1
  LevelChunk *result; // r0@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = (ConcretePowderBlock *)BlockSource::getData(a2, a3);
  result = (LevelChunk *)ConcretePowderBlock::_tryTouchWater(v8, v5, v4, (unsigned __int8)v8);
  if ( !result )
    result = j_j_j__ZNK10HeavyBlock15neighborChangedER11BlockSourceRK8BlockPosS4_(v6, v5, v4, v7);
  return result;
}


_DWORD *__fastcall ConcretePowderBlock::ConcretePowderBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(14);
  HeavyBlock::HeavyBlock((int)v3, v5, v4, v6);
  *v3 = &loc_2706CCC;
  return v3;
}


signed int __fastcall ConcretePowderBlock::_tryTouchWater(ConcretePowderBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  unsigned __int8 v6; // r6@1
  int *v7; // r0@1
  int *v8; // r0@2
  int *v9; // r0@3
  int *v10; // r0@4
  int *v11; // r0@5
  signed int result; // r0@6
  char v13; // [sp+4h] [bp-4h]@6
  unsigned __int8 v14; // [sp+5h] [bp-3h]@6
  int v15; // [sp+8h] [bp+0h]@1

  v4 = a3;
  v5 = a2;
  v6 = a4;
  BlockPos::neighbor((BlockPos *)&v15, (int)a3, 1);
  v7 = (int *)BlockSource::getMaterial(v5, (const BlockPos *)&v15);
  if ( Material::isType(v7, 5) == 1
    || (BlockPos::neighbor((BlockPos *)&v15, (int)v4, 2),
        v8 = (int *)BlockSource::getMaterial(v5, (const BlockPos *)&v15),
        Material::isType(v8, 5))
    || (BlockPos::neighbor((BlockPos *)&v15, (int)v4, 3),
        v9 = (int *)BlockSource::getMaterial(v5, (const BlockPos *)&v15),
        Material::isType(v9, 5))
    || (BlockPos::neighbor((BlockPos *)&v15, (int)v4, 4),
        v10 = (int *)BlockSource::getMaterial(v5, (const BlockPos *)&v15),
        Material::isType(v10, 5))
    || (BlockPos::neighbor((BlockPos *)&v15, (int)v4, 5),
        v11 = (int *)BlockSource::getMaterial(v5, (const BlockPos *)&v15),
        Material::isType(v11, 5)) )
  {
    v13 = *(_BYTE *)(Block::mConcrete + 4);
    v14 = v6;
    BlockSource::setBlockAndData((int)v5, v4, (int)&v13, 3, 0);
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall ConcretePowderBlock::~ConcretePowderBlock(ConcretePowderBlock *this)
{
  ConcretePowderBlock::~ConcretePowderBlock(this);
}


signed int __fastcall ConcretePowderBlock::isValidAuxValue(ConcretePowderBlock *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( (unsigned int)a2 < 0x10 )
    result = 1;
  return result;
}


void __fastcall ConcretePowderBlock::buildDescriptionId(ConcretePowderBlock *this, int a2, int a3)
{
  ConcretePowderBlock *v3; // r4@1
  int v4; // r5@1
  int *v5; // r0@1
  const void **v6; // r0@1
  const void **v7; // r0@1
  char *v8; // r0@1
  void *v9; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int v14; // [sp+4h] [bp-2Ch]@1
  char *v15; // [sp+8h] [bp-28h]@1

  v3 = this;
  v4 = a3;
  v5 = sub_21E8AF4(&v14, (int *)(a2 + 8));
  sub_21E7408((const void **)v5, ".", 1u);
  v6 = sub_21E72F0((const void **)&v14, (const void **)&DyePowderItem::COLOR_DESCS[15 - v4]);
  v15 = (char *)*v6;
  *v6 = &unk_28898CC;
  v7 = sub_21E7408((const void **)&v15, ".name", 5u);
  *(_DWORD *)v3 = *v7;
  *v7 = &unk_28898CC;
  v8 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}
