

void __fastcall NetherReactorBlock::~NetherReactorBlock(NetherReactorBlock *this)
{
  NetherReactorBlock::~NetherReactorBlock(this);
}


_DWORD *__fastcall NetherReactorBlock::NetherReactorBlock(int a1, const void **a2, char a3, int a4)
{
  _DWORD *result; // r0@1

  result = EntityBlock::EntityBlock(a1, a2, a3, a4);
  *result = &off_270F45C;
  result[8] = 3;
  return result;
}


int __fastcall NetherReactorBlock::spawnResources(NetherReactorBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  BlockSource *v6; // r10@1
  Block *v7; // r9@1
  const BlockPos *v8; // r8@1
  Level *v9; // r0@1
  int result; // r0@1
  signed int v11; // r5@2
  int v12; // [sp+0h] [bp-B0h]@10
  int v13; // [sp+8h] [bp-A8h]@14
  void *v14; // [sp+24h] [bp-8Ch]@12
  void *v15; // [sp+34h] [bp-7Ch]@10
  char v16; // [sp+48h] [bp-68h]@3
  int v17; // [sp+50h] [bp-60h]@7
  void *v18; // [sp+6Ch] [bp-44h]@5
  void *ptr; // [sp+7Ch] [bp-34h]@3

  v6 = a2;
  v7 = this;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v9);
  if ( !result )
  {
    v11 = 0;
    do
    {
      ItemInstance::ItemInstance((ItemInstance *)&v16, Item::mIronIngot, 1);
      Block::popResource(v7, v6, v8, (const ItemInstance *)&v16);
      if ( ptr )
        operator delete(ptr);
      if ( v18 )
        operator delete(v18);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      ++v11;
      v17 = 0;
    }
    while ( v11 < 6 );
    ItemInstance::ItemInstance((ItemInstance *)&v12, Item::mDiamond, 1);
    Block::popResource(v7, v6, v8, (const ItemInstance *)&v12);
    if ( v15 )
      operator delete(v15);
    if ( v14 )
      operator delete(v14);
    if ( v13 )
      (*(void (**)(void))(*(_DWORD *)v13 + 4))();
    v13 = 0;
    result = 0;
  }
  return result;
}


void __fastcall NetherReactorBlock::~NetherReactorBlock(NetherReactorBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
