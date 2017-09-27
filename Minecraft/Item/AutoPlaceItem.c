

int *__fastcall AutoPlaceItem::AutoPlaceItem(int *a1, int *a2, char a3)
{
  char v3; // r4@1
  int *result; // r0@1

  v3 = a3;
  result = sub_21E8AF4(a1, a2);
  *((_BYTE *)result + 4) = v3;
  return result;
}
