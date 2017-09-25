

LevelChunk *__fastcall LiquidBlockStatic::neighborChanged(LiquidBlockStatic *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  LiquidBlockStatic *v6; // r6@1
  LevelChunk *result; // r0@1
  char v8; // r0@2
  LevelChunk **v9; // r7@2
  signed int v10; // r0@2
  unsigned __int8 v11; // [sp+Ch] [bp-24h]@1
  char v12; // [sp+10h] [bp-20h]@2
  char v13; // [sp+14h] [bp-1Ch]@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  LiquidBlock::neighborChanged(this, a2, a3, a4);
  BlockSource::getBlockID((BlockSource *)&v11, v5, (int)v4);
  result = (LevelChunk *)v11;
  if ( v11 == *((_BYTE *)v6 + 4) )
  {
    v13 = v11 - 1;
    v8 = BlockSource::getData(v5, v4);
    BlockSource::setBlockAndData((int)v5, v4, &v13, v8, 2, 0);
    v9 = (LevelChunk **)BlockSource::getTickQueue(v5, v4);
    v12 = *((_BYTE *)v6 + 641);
    v10 = LiquidBlock::getTickDelay(v6, v5);
    result = BlockTickingQueue::add(v9, v5, (int)v4, &v12, v10, 0);
  }
  return result;
}


int __fastcall LiquidBlockStatic::_isFlammable(LiquidBlockStatic *this, BlockSource *a2, const BlockPos *a3)
{
  Material *v3; // r0@1

  v3 = (Material *)BlockSource::getMaterial(a2, a3);
  return j_j_j__ZNK8Material11isFlammableEv(v3);
}


Block *__fastcall LiquidBlockStatic::tick(LiquidBlockStatic *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  LiquidBlock *v4; // r7@1
  BlockSource *v5; // r6@1
  Random *v6; // r4@1
  const BlockPos *v7; // r5@1
  Block *result; // r0@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  result = (Block *)Material::isType(*((int **)this + 14), 6);
  if ( result == (Block *)1 )
    result = j_j_j__ZNK11LiquidBlock13trySpreadFireER11BlockSourceRK8BlockPosR6Random(v4, v5, v7, v6);
  return result;
}


int __fastcall LiquidBlockStatic::LiquidBlockStatic(int a1, const void **a2, int a3, _BYTE *a4, int *a5)
{
  _BYTE *v5; // r5@1
  int v6; // r4@1
  char v7; // r0@1

  v5 = a4;
  v6 = a1;
  LiquidBlock::LiquidBlock(a1, a2, a3, (int)a5);
  *(_DWORD *)v6 = &off_270E258;
  *(_BYTE *)(v6 + 641) = *v5;
  v7 = Material::isType(a5, 6);
  Block::setTicking((Block *)v6, v7);
  return v6;
}


LevelChunk *__fastcall LiquidBlockStatic::_setDynamic(LiquidBlockStatic *this, BlockSource *a2, const BlockPos *a3)
{
  LiquidBlockStatic *v3; // r6@1
  BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  char v6; // r0@1
  LevelChunk **v7; // r7@1
  signed int v8; // r0@1
  char v10; // [sp+8h] [bp-20h]@1
  char v11; // [sp+Ch] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v11 = *((_BYTE *)this + 4) - 1;
  v6 = BlockSource::getData(a2, a3);
  BlockSource::setBlockAndData((int)v5, v4, &v11, v6, 2, 0);
  v7 = (LevelChunk **)BlockSource::getTickQueue(v5, v4);
  v10 = *((_BYTE *)v3 + 641);
  v8 = LiquidBlock::getTickDelay(v3, v5);
  return BlockTickingQueue::add(v7, v5, (int)v4, &v10, v8, 0);
}


void __fastcall LiquidBlockStatic::~LiquidBlockStatic(LiquidBlockStatic *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall LiquidBlockStatic::~LiquidBlockStatic(LiquidBlockStatic *this)
{
  LiquidBlockStatic::~LiquidBlockStatic(this);
}
