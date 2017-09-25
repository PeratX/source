

int __fastcall SaplingBlockItem::buildDescriptionId(SaplingBlockItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  SaplingBlockItem *v3; // r4@1
  int v4; // r5@1
  int (__fastcall *v5)(SaplingBlockItem *, int, _DWORD); // r6@1
  unsigned __int8 v6; // r0@1

  v3 = this;
  v4 = Block::mSapling;
  v5 = *(int (__fastcall **)(SaplingBlockItem *, int, _DWORD))(*(_DWORD *)Block::mSapling + 380);
  v6 = ItemInstance::getAuxValue(a3);
  return v5(v3, v4, v6);
}


void __fastcall SaplingBlockItem::~SaplingBlockItem(SaplingBlockItem *this)
{
  SaplingBlockItem::~SaplingBlockItem(this);
}


int __fastcall SaplingBlockItem::getLevelDataForAuxValue(SaplingBlockItem *this, int a2)
{
  return a2;
}


void __fastcall SaplingBlockItem::~SaplingBlockItem(SaplingBlockItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}
