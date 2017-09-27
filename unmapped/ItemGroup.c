

signed int __fastcall ItemGroup::isEmpty(ItemGroup *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 18);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


ItemInstance *__fastcall ItemGroup::ItemGroup(ItemInstance *a1, int a2)
{
  int v2; // r5@1
  ItemInstance *v3; // r4@1
  unsigned int v4; // r5@1
  unsigned int v5; // r0@1
  ItemInstance *result; // r0@3

  v2 = a2;
  v3 = a1;
  ItemInstance::ItemInstance(a1, a2);
  *((_DWORD *)v3 + 18) = 0;
  v4 = *(_BYTE *)(v2 + 14);
  v5 = ItemInstance::getMaxStackSize(v3);
  if ( v5 < v4 )
    v4 = v5;
  result = v3;
  *((_DWORD *)v3 + 18) = v4;
  return result;
}


void *__fastcall ItemGroup::getItemType(ItemGroup *this, int a2)
{
  int v2; // r5@1
  ItemInstance *v3; // r4@1
  bool v4; // zf@1
  void *result; // r0@6

  v2 = a2;
  v3 = this;
  v4 = *(_BYTE *)(a2 + 15) == 0;
  if ( *(_BYTE *)(a2 + 15) )
    v4 = *(_DWORD *)a2 == 0;
  if ( v4 || ItemInstance::isNull((ItemInstance *)a2) || !*(_BYTE *)(v2 + 14) )
  {
    result = (void *)ItemInstance::ItemInstance(v3, (int)&ItemInstance::EMPTY_ITEM);
  }
  else
    ItemInstance::ItemInstance(v3, v2);
    result = ItemInstance::set(v3, 1);
  return result;
}


int __fastcall ItemGroup::setCount(ItemGroup *this, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  ItemGroup *v4; // r5@1
  int result; // r0@3

  v2 = a2;
  v3 = a2;
  v4 = this;
  if ( a2 <= 0 )
    v3 = 0;
  result = ItemInstance::getMaxStackSize(this);
  if ( result < v2 )
    v3 = result;
  *((_DWORD *)v4 + 18) = v3;
  return result;
}


ItemInstance *__fastcall ItemGroup::ItemGroup(ItemInstance *a1, int a2, int a3)
{
  int v3; // r5@1
  ItemInstance *v4; // r4@1
  int v5; // r6@1
  int v6; // r0@1
  ItemInstance *result; // r0@5

  v3 = a3;
  v4 = a1;
  ItemInstance::ItemInstance(a1, a2);
  v5 = 0;
  *((_DWORD *)v4 + 18) = 0;
  v6 = ItemInstance::getMaxStackSize(v4);
  if ( v3 > 0 )
    v5 = v3;
  if ( v6 < v3 )
    v5 = v6;
  result = v4;
  *((_DWORD *)v4 + 18) = v5;
  return result;
}


void *__fastcall ItemGroup::getItemStack(ItemGroup *this, int a2)
{
  int v2; // r5@1
  ItemInstance *v3; // r4@1
  void *result; // r0@2

  v2 = a2;
  v3 = this;
  if ( *(_DWORD *)(a2 + 72) < 1 )
  {
    result = (void *)ItemInstance::ItemInstance(this, (int)&ItemInstance::EMPTY_ITEM);
  }
  else
    ItemInstance::ItemInstance(this, a2);
    result = ItemInstance::set(v3, *(_BYTE *)(v2 + 72));
  return result;
}
