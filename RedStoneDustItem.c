

void __fastcall RedStoneDustItem::~RedStoneDustItem(RedStoneDustItem *this)
{
  RedStoneDustItem::~RedStoneDustItem(this);
}


int __fastcall RedStoneDustItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r6@1
  const BlockPos *v10; // r4@1
  int v11; // r9@1
  const BlockPos *v12; // r5@1
  int v13; // r7@3
  int (__fastcall *v14)(int, const BlockPos *, char *, char *); // r12@3
  void (__fastcall *v15)(int, const BlockPos *, char *, char *); // r6@4
  char v17; // [sp+4h] [bp-2Ch]@4
  char v18; // [sp+5h] [bp-2Bh]@4
  char v19; // [sp+8h] [bp-28h]@4
  char v20; // [sp+Ch] [bp-24h]@3
  char v21; // [sp+Dh] [bp-23h]@3
  char v22; // [sp+10h] [bp-20h]@2

  v9 = this;
  v10 = (const BlockPos *)a4;
  v11 = a2;
  v12 = (const BlockPos *)Entity::getRegion(this);
  if ( (*(int (**)(void))(*(_DWORD *)Block::mRedStoneDust + 224))() == 1 )
  {
    BlockSource::getBlockAndData((BlockSource *)&v22, v12, (int)v10);
    if ( !a9 )
    {
      (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v9 + 612))(v9, v11);
      BlockSource::removeBlock(v12, v10);
      v19 = *(_BYTE *)(Block::mRedStoneDust + 4);
      BlockSource::setBlock((int)v12, v10, &v19, 3);
      return 1;
    }
    v13 = 0;
    v14 = *(int (__fastcall **)(int, const BlockPos *, char *, char *))(*(_DWORD *)a9 + 8);
    v20 = *(_BYTE *)(Block::mRedStoneDust + 4);
    v21 = 0;
    if ( !v14(a9, v10, &v22, &v20) )
      v15 = *(void (__fastcall **)(int, const BlockPos *, char *, char *))(*(_DWORD *)a9 + 12);
      v17 = *(_BYTE *)(Block::mRedStoneDust + 4);
      v18 = 0;
      v15(a9, v10, &v22, &v17);
  }
  else
  return v13;
}


void __fastcall RedStoneDustItem::~RedStoneDustItem(RedStoneDustItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall RedStoneDustItem::_calculatePlacePos(RedStoneDustItem *this, ItemInstance *a2, Entity *a3, signed __int8 *a4, BlockPos *a5)
{
  signed __int8 *v5; // r6@1
  BlockSource *v6; // r0@1
  BlockSource *v7; // r4@1
  int v8; // r0@1
  int v9; // r0@2
  signed int result; // r0@15

  v5 = a4;
  v6 = (BlockSource *)Entity::getRegion(a3);
  v7 = v6;
  v8 = BlockSource::getBlock(v6, a5);
  if ( (*(int (**)(void))(*(_DWORD *)v8 + 332))() )
    goto LABEL_19;
  v9 = (unsigned __int8)*v5;
  if ( !*v5 )
  {
    --*((_DWORD *)a5 + 1);
    v9 = (unsigned __int8)*v5;
  }
  if ( v9 == 1 )
    ++*((_DWORD *)a5 + 1);
  if ( v9 == 2 )
    --*((_DWORD *)a5 + 2);
  if ( v9 == 3 )
    ++*((_DWORD *)a5 + 2);
  if ( v9 == 4 )
    --*(_DWORD *)a5;
  if ( v9 == 5 )
    ++*(_DWORD *)a5;
  if ( BlockSource::isEmptyBlock(v7, a5) == 1 )
LABEL_19:
    result = 1;
  else
    result = 0;
  return result;
}
