

void __fastcall MovingBlock::~MovingBlock(MovingBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


char *__fastcall MovingBlock::getVisualShape(MovingBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5)
{
  BlockSource *v5; // r8@1
  Block *v6; // r5@1
  AABB *v7; // r4@1
  MovingBlockEntity *v8; // r0@1
  BlockSource *v9; // r6@1
  char *v10; // r0@2
  int v11; // r1@2
  char *result; // r0@3
  int v13; // r0@4
  char v14; // [sp+4h] [bp-24h]@4

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = (MovingBlockEntity *)BlockSource::getBlockEntity(a2, a3);
  v9 = v8;
  if ( v8
    && (v10 = MovingBlockEntity::getBlock(v8), v11 = (unsigned __int8)*v10, v11 != *(_BYTE *)(Block::mMovingBlock + 4)) )
  {
    v13 = (*(int (__fastcall **)(_DWORD, _DWORD, AABB *, int))(*(_DWORD *)Block::mBlocks[v11] + 420))(
            Block::mBlocks[v11],
            (unsigned __int8)v10[1],
            v7,
            a5);
    *(_DWORD *)v7 = *(_DWORD *)v13;
    *((_DWORD *)v7 + 1) = *(_DWORD *)(v13 + 4);
    *((_DWORD *)v7 + 2) = *(_DWORD *)(v13 + 8);
    *((_DWORD *)v7 + 3) = *(_DWORD *)(v13 + 12);
    *((_DWORD *)v7 + 4) = *(_DWORD *)(v13 + 16);
    *((_DWORD *)v7 + 5) = *(_DWORD *)(v13 + 20);
    *((_BYTE *)v7 + 24) = *(_BYTE *)(v13 + 24);
    MovingBlockEntity::getDrawPos((MovingBlockEntity *)&v14, v9, *(float *)&v5, 1.0);
    result = (char *)AABB::move(v7, (const Vec3 *)&v14);
  }
  else
    result = j_j_j__ZNK5Block14getVisualShapeEhR4AABBb(v6, 0, v7, a5);
  return result;
}


int __fastcall MovingBlock::canBeSilkTouched(MovingBlock *this)
{
  return 0;
}


int __fastcall MovingBlock::onFallOn(MovingBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, float a5)
{
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r6@1
  Block *v7; // r7@1
  Entity *v8; // r4@1
  MovingBlockEntity *v9; // r0@1
  char *v10; // r0@2
  int result; // r0@3
  int v12; // r0@4

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = (MovingBlockEntity *)BlockSource::getBlockEntity(a2, a3);
  if ( v9 && (v10 = MovingBlockEntity::getBlock(v9), (unsigned __int8)*v10 != *(_BYTE *)(Block::mMovingBlock + 4)) )
  {
    v12 = FullBlock::getBlock((FullBlock *)v10);
    result = (*(int (**)(void))(*(_DWORD *)v12 + 172))();
  }
  else
    result = j_j_j__ZNK5Block8onFallOnER11BlockSourceRK8BlockPosP6Entityf(v7, v6, v5, v8, a5);
  return result;
}


int __fastcall MovingBlock::MovingBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int result; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270A090;
  Block::setSolid((Block *)v3, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 452))(v3);
  *(_DWORD *)(v3 + 20) = 5;
  *(_DWORD *)(v3 + 24) = 0x1000000;
  result = v3;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 19;
  return result;
}


signed int __fastcall MovingBlock::pushesUpFallingBlocks(MovingBlock *this)
{
  return 1;
}


void __fastcall MovingBlock::~MovingBlock(MovingBlock *this)
{
  MovingBlock::~MovingBlock(this);
}
