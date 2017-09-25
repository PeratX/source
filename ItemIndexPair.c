

ItemInstance *__fastcall ItemIndexPair::ItemIndexPair(ItemInstance *a1, int a2, int a3)
{
  int v3; // r4@1
  ItemInstance *result; // r0@1

  v3 = a3;
  result = ItemInstance::ItemInstance(a1, a2);
  *((_DWORD *)result + 18) = v3;
  return result;
}
