

signed int __fastcall NetherWartBlock::getResource(NetherWartBlock *this, Random *a2, int a3, int a4)
{
  return -1;
}


Block *__fastcall NetherWartBlock::NetherWartBlock(Block *a1, const void **a2, int a3)
{
  Block *v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  void (__fastcall *v7)(Block *, int *, int *); // r3@1
  int v9; // [sp+0h] [bp-28h]@1
  signed int v10; // [sp+4h] [bp-24h]@1
  signed int v11; // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@1
  int v13; // [sp+10h] [bp-18h]@1
  int v14; // [sp+14h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(8);
  BushBlock::BushBlock((int)v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270F65C;
  Block::setTicking(v3, 1);
  v7 = *(void (__fastcall **)(Block *, int *, int *))(*(_DWORD *)v3 + 452);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v9 = 1065353216;
  v10 = 1048576000;
  v11 = 1065353216;
  v7(v3, &v12, &v9);
  return v3;
}


int __fastcall NetherWartBlock::spawnResources(NetherWartBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  BlockSource *v6; // r11@1
  Block *v7; // r10@1
  unsigned __int8 v8; // r7@1
  const BlockPos *v9; // r8@1
  Level *v10; // r0@1
  int result; // r0@1
  signed int v12; // r4@2
  unsigned __int64 *v13; // r0@2
  Level *v14; // r0@3
  char *v15; // r0@3
  signed int v16; // r5@4
  int v17; // [sp+0h] [bp-70h]@5
  int v18; // [sp+8h] [bp-68h]@9
  void *v19; // [sp+24h] [bp-4Ch]@7
  void *ptr; // [sp+34h] [bp-3Ch]@5

  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = a3;
  v10 = (Level *)BlockSource::getLevelConst(a2);
  result = Level::isClientSide(v10);
  if ( !result )
  {
    v12 = 1;
    v13 = (unsigned __int64 *)Block::getBlockState((int)v7, 1);
    if ( (signed int)((0xFu >> (4 - (*v13 >> 32))) & (v8 >> (*v13 + 1 - (*v13 >> 32)))) >= 3 )
    {
      v14 = (Level *)BlockSource::getLevel(v6);
      v15 = Level::getRandom(v14);
      v12 = Random::_genRandInt32((Random *)v15) % 3 + 2;
    }
    v16 = 0;
    do
      ItemInstance::ItemInstance((ItemInstance *)&v17, Item::mNether_wart);
      Block::popResource(v7, v6, v9, (const ItemInstance *)&v17);
      if ( ptr )
        operator delete(ptr);
      if ( v19 )
        operator delete(v19);
      result = v18;
      if ( v18 )
        result = (*(int (**)(void))(*(_DWORD *)v18 + 4))();
      ++v16;
      v18 = 0;
    while ( v16 < v12 );
  }
  return result;
}


void __fastcall NetherWartBlock::~NetherWartBlock(NetherWartBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall NetherWartBlock::canSurvive(NetherWartBlock *this, BlockSource *a2, const BlockPos *a3)
{
  NetherWartBlock *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r2@1
  int (__fastcall *v6)(NetherWartBlock *, int); // r5@1
  int v7; // r0@1
  __int64 v9; // [sp+4h] [bp-1Ch]@1
  int v10; // [sp+Ch] [bp-14h]@1

  v3 = this;
  v4 = *(_QWORD *)a3;
  v5 = *((_DWORD *)a3 + 2);
  v6 = *(int (__fastcall **)(NetherWartBlock *, int))(*(_DWORD *)this + 228);
  v9 = v4 - 0x100000000LL;
  v10 = v5;
  v7 = BlockSource::getBlock(a2, (const BlockPos *)&v9);
  return v6(v3, v7);
}


int __fastcall NetherWartBlock::canBeSilkTouched(NetherWartBlock *this)
{
  return 0;
}


int __fastcall NetherWartBlock::tick(NetherWartBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r10@1
  NetherWartBlock *v6; // r7@1
  Random *v7; // r8@1
  unsigned int v8; // r9@1
  unsigned __int64 *v9; // r0@1
  signed int v10; // r4@1
  int v11; // r0@3
  int v12; // ST0C_4@3
  int v13; // r11@3
  char v14; // r0@3
  int v15; // r1@3
  int v16; // r2@3
  int v17; // r3@3
  char v19; // [sp+10h] [bp-28h]@3

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = BlockSource::getData(a2, a3);
  v9 = (unsigned __int64 *)Block::getBlockState((int)v6, 1);
  v10 = (v8 >> (*v9 + 1 - (*v9 >> 32))) & (0xFu >> (4 - (*v9 >> 32)));
  if ( v10 <= 2 && !(Random::_genRandInt32(v7) % 0xA) )
  {
    v11 = Block::getBlockState((int)v6, 1);
    v12 = *(_DWORD *)v11;
    v13 = *(_DWORD *)(v11 + 4);
    v14 = BlockState::getMask((BlockState *)v11);
    v15 = *(_DWORD *)v4;
    v16 = *((_DWORD *)v4 + 1);
    v17 = *((_DWORD *)v4 + 2);
    v19 = *((_BYTE *)v6 + 4);
    BlockSource::setBlockAndData((int)v5, v15, v16, v17, &v19, v8 & ~v14 | (((_BYTE)v10 + 1) << (v12 + 1 - v13)), 2);
  }
  return BushBlock::tick(v6, v5, v4, v7);
}


int __fastcall NetherWartBlock::growCropsToMax(NetherWartBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  BlockPos *v4; // r8@1
  NetherWartBlock *v5; // r6@1
  BlockState *v6; // r0@1
  int v7; // r4@1
  int v8; // r7@1
  char v10; // [sp+Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  v6 = (BlockState *)Block::getBlockState((int)this, 1);
  v7 = *(_QWORD *)v6 >> 32;
  v8 = *(_QWORD *)v6;
  BlockState::getMask(v6);
  v10 = *((_BYTE *)v5 + 4);
  return BlockSource::setBlockAndData((int)v3, v4, &v10, 3 << (v8 + 1 - v7), 2, 0);
}


void __fastcall NetherWartBlock::~NetherWartBlock(NetherWartBlock *this)
{
  NetherWartBlock::~NetherWartBlock(this);
}


int __fastcall NetherWartBlock::getResourceCount(NetherWartBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}
