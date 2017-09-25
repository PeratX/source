

int __fastcall AuxDataBlockItem::getLevelDataForAuxValue(AuxDataBlockItem *this, int a2)
{
  return a2;
}


void __fastcall AuxDataBlockItem::~AuxDataBlockItem(AuxDataBlockItem *this)
{
  AuxDataBlockItem::~AuxDataBlockItem(this);
}


int __fastcall AuxDataBlockItem::buildDescriptionId(AuxDataBlockItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  int v3; // r5@1
  AuxDataBlockItem *v4; // r4@1
  int (__fastcall *v5)(AuxDataBlockItem *, int, _DWORD); // r6@1
  unsigned __int8 v6; // r0@1

  v3 = *((_DWORD *)a2 + 29);
  v4 = this;
  v5 = *(int (__fastcall **)(AuxDataBlockItem *, int, _DWORD))(*(_DWORD *)v3 + 380);
  v6 = j_ItemInstance::getAuxValue(a3);
  return v5(v4, v3, v6);
}


void __fastcall AuxDataBlockItem::~AuxDataBlockItem(AuxDataBlockItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall AuxDataBlockItem::AuxDataBlockItem(int a1, const void **a2, __int16 a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1

  v4 = a4;
  v5 = a1;
  j_BlockItem::BlockItem(a1, a2, a3);
  *(_DWORD *)v5 = &off_271FF88;
  *(_DWORD *)(v5 + 116) = v4;
  j_Item::setMaxDamage((Item *)v5, 0);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v5 + 24))(v5, 1);
  return v5;
}
