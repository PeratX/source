

int __fastcall EntityBlock::neighborChanged(EntityBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  int result; // r0@1

  result = BlockSource::getBlockEntity(a2, a3);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 80))();
  return result;
}


_DWORD *__fastcall EntityBlock::EntityBlock(int a1, const void **a2, char a3, int a4)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Block::Block(a1, a2, a3, a4);
  *result = &off_270AA28;
  return result;
}


int __fastcall EntityBlock::triggerEvent(EntityBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  const BlockPos *v5; // r6@1
  BlockSource *v6; // r7@1
  int result; // r0@1

  v5 = a3;
  v6 = a2;
  Block::triggerEvent(this, a2, a3, a4, a5);
  result = BlockSource::getBlockEntity(v6, *(_DWORD *)v5, *((_DWORD *)v5 + 1), *((_DWORD *)v5 + 2));
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 72))();
  return result;
}


void __fastcall EntityBlock::~EntityBlock(EntityBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall EntityBlock::~EntityBlock(EntityBlock *this)
{
  EntityBlock::~EntityBlock(this);
}


_DWORD *__fastcall EntityBlock::newBlockEntity(NetherReactorBlockEntity **a1, Block *a2, int a3, char *a4)
{
  NetherReactorBlockEntity **v4; // r6@1
  char *v5; // r4@1
  int v6; // r5@1
  int v7; // r0@1
  char v9; // [sp+4h] [bp-14h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = Block::getBlockEntityType(a2);
  v9 = *v5;
  return BlockEntityFactory::createBlockEntity(v4, v7, v6, &v9);
}
