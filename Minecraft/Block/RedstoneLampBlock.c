

int __fastcall RedstoneLampBlock::tick(RedstoneLampBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r5@1
  RedstoneLampBlock *v5; // r7@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  int result; // r0@1
  Dimension *v9; // r0@2
  CircuitSystem *v10; // r0@2
  CircuitSystem *v11; // r6@2
  bool v12; // zf@2
  char v13; // [sp+0h] [bp-18h]@6

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v7);
  if ( !result )
  {
    v9 = (Dimension *)BlockSource::getDimension(v4);
    v10 = (CircuitSystem *)Dimension::getCircuitSystem(v9);
    v11 = v10;
    result = CircuitSystem::getStrength(v10, v6);
    v12 = result == -1;
    if ( result != -1 )
      v12 = *((_BYTE *)v5 + 641) == 0;
    if ( !v12 && !result )
    {
      *(_BYTE *)v11 = 1;
      v13 = *(_BYTE *)(Block::mUnlitRedStoneLamp + 4);
      BlockSource::setBlock((int)v4, v6, &v13, 3);
      result = 0;
      *(_BYTE *)v11 = 0;
    }
  }
  return result;
}


int __fastcall RedstoneLampBlock::onPlace(RedstoneLampBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  RedstoneLampBlock *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  Block::onPlace(this, a2, a3);
  return (*(int (__fastcall **)(RedstoneLampBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 188))(v5, v4, v3);
}


int __fastcall RedstoneLampBlock::onRedstoneUpdate(RedstoneLampBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  BlockSource *v5; // r5@1
  RedstoneLampBlock *v6; // r7@1
  int v7; // r6@1
  const BlockPos *v8; // r4@1
  Level *v9; // r0@1
  int result; // r0@1
  Dimension *v11; // r0@2
  _BYTE *v12; // r0@2
  _BYTE *v13; // r8@2
  LevelChunk **v14; // r0@2
  char v15; // [sp+Ch] [bp-24h]@4
  char v16; // [sp+10h] [bp-20h]@3
  char v17; // [sp+14h] [bp-1Ch]@5

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v9);
  if ( !result )
  {
    v11 = (Dimension *)BlockSource::getDimension(v5);
    v12 = (_BYTE *)Dimension::getCircuitSystem(v11);
    v13 = v12;
    *v12 = 1;
    v14 = (LevelChunk **)BlockSource::getTickQueue(v5, v8);
    if ( v7 )
    {
      v16 = *((_BYTE *)v6 + 4);
      BlockTickingQueue::remove((int)v14, (int)v8, &v16);
      if ( !*((_BYTE *)v6 + 641) )
      {
        v15 = *(_BYTE *)(Block::mLitRedStoneLamp + 4);
        BlockSource::setBlock((int)v5, v8, &v15, 3);
      }
    }
    else
      v17 = *((_BYTE *)v6 + 4);
      BlockTickingQueue::add(v14, v5, (int)v8, &v17, 4u, 0);
    result = 0;
    *v13 = 0;
  }
  return result;
}


int __fastcall RedstoneLampBlock::onLoaded(RedstoneLampBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  const BlockPos *v4; // r5@1
  Level *v5; // r0@1
  int result; // r0@1
  Dimension *v7; // r0@2
  int v8; // r0@2

  v3 = a2;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v5);
  if ( !result )
  {
    v7 = (Dimension *)BlockSource::getDimension(v3);
    v8 = Dimension::getCircuitSystem(v7);
    result = CircuitSystem::create<ConsumerComponent>(v8, v4, (int)v3, 0);
    if ( result )
      *(_BYTE *)(result + 44) = 1;
  }
  return result;
}


void __fastcall RedstoneLampBlock::~RedstoneLampBlock(RedstoneLampBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall RedstoneLampBlock::~RedstoneLampBlock(RedstoneLampBlock *this)
{
  RedstoneLampBlock::~RedstoneLampBlock(this);
}


int __fastcall RedstoneLampBlock::shouldConnectToRedstone(RedstoneLampBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 0;
}


int __fastcall RedstoneLampBlock::RedstoneLampBlock(int a1, const void **a2, char a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  char v6; // r6@1
  const void **v7; // r7@1
  int v8; // r0@1
  int v9; // r12@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(30);
  Block::Block(v4, v7, v6, v8);
  v9 = v4 + 60;
  *(_DWORD *)v4 = &off_2712090;
  *(_BYTE *)(v4 + 641) = v5;
  *(_DWORD *)v9 = 1057984400;
  *(_DWORD *)(v9 + 4) = 1051109031;
  *(_DWORD *)(v9 + 8) = 1045220558;
  *(_DWORD *)(v9 + 12) = 0;
  if ( v5 )
    Block::setLightEmission((Block *)v4, 1.0);
  return v4;
}
