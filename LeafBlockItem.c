

void __fastcall LeafBlockItem::buildDescriptionId(LeafBlockItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  const ItemInstance *v3; // r4@1
  int *v4; // r5@1
  int v5; // r6@1
  void (__fastcall *v6)(char **, int, _DWORD); // r7@1
  unsigned __int8 v7; // r0@1
  char *v8; // r1@2
  char *v9; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  char *v12; // [sp+4h] [bp-24h]@1

  v3 = a2;
  v4 = (int *)this;
  v5 = *((_DWORD *)a2 + 29);
  v6 = *(void (__fastcall **)(char **, int, _DWORD))(*(_DWORD *)v5 + 380);
  v7 = ItemInstance::getAuxValue(a3);
  v6(&v12, v5, v7);
  if ( *((_DWORD *)v12 - 3) )
  {
    *v4 = (int)v12;
    v8 = (char *)&unk_28898CC;
    v12 = (char *)&unk_28898CC;
  }
  else
    sub_21E8AF4(v4, (int *)v3 + 5);
    sub_21E7408((const void **)v4, ".name", 5u);
    v8 = v12;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall LeafBlockItem::~LeafBlockItem(LeafBlockItem *this)
{
  LeafBlockItem::~LeafBlockItem(this);
}


int __fastcall LeafBlockItem::getLevelDataForAuxValue(LeafBlockItem *this, int a2)
{
  char v2; // r4@1
  BlockState *v3; // r0@1
  signed int v4; // r5@1

  v2 = a2;
  v3 = (BlockState *)Block::getBlockState(Block::mLeaves, 29);
  v4 = 1 << (*(_QWORD *)v3 + 1 - (unsigned int)(*(_QWORD *)v3 >> 32));
  return (unsigned __int8)(v2 & ~(unsigned __int8)BlockState::getMask(v3)) | (unsigned __int8)v4;
}


void __fastcall LeafBlockItem::~LeafBlockItem(LeafBlockItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall LeafBlockItem::buildDescriptionId(LeafBlockItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  LeafBlockItem::buildDescriptionId(this, a2, a3);
}
