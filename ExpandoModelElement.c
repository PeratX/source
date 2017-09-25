

ItemInstance *__fastcall ExpandoModelElement::ExpandoModelElement(ItemInstance *a1, int a2, int a3, int *a4)
{
  int *v4; // r5@1
  int v5; // r6@1
  ItemInstance *v6; // r4@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  ItemInstance::ItemInstance(a1, a2);
  *((_DWORD *)v6 + 18) = v5;
  sub_21E8AF4((int *)v6 + 19, v4);
  return v6;
}
