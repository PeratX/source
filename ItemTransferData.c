

ItemInstance *__fastcall ItemTransferData::ItemTransferData(ItemInstance *a1, int a2)
{
  int v2; // r5@1
  ItemInstance *v3; // r4@1

  v2 = a2;
  v3 = a1;
  ItemInstance::ItemInstance(a1, a2);
  sub_21E8AF4((int *)v3 + 18, (int *)(v2 + 72));
  *((_DWORD *)v3 + 19) = *(_DWORD *)(v2 + 76);
  sub_21E8AF4((int *)v3 + 20, (int *)(v2 + 80));
  *((_DWORD *)v3 + 21) = *(_DWORD *)(v2 + 84);
  return v3;
}


ItemInstance *__fastcall ItemTransferData::ItemTransferData(ItemInstance *a1)
{
  ItemInstance *v1; // r4@1

  v1 = a1;
  ItemInstance::ItemInstance(a1, (int)&ItemInstance::EMPTY_ITEM);
  sub_21E8AF4((int *)v1 + 18, (int *)&Util::EMPTY_STRING);
  *((_DWORD *)v1 + 19) = -1;
  sub_21E8AF4((int *)v1 + 20, (int *)&Util::EMPTY_STRING);
  *((_DWORD *)v1 + 21) = -1;
  return v1;
}
