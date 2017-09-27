

int *__fastcall PurchaseInfo::PurchaseInfo(int *a1, int *a2, int *a3, int *a4, int a5, char a6)
{
  int *v6; // r4@1
  int *v7; // r7@1
  int *v8; // r5@1

  v6 = a4;
  v7 = a3;
  v8 = a1;
  sub_DA73B4(a1, a2);
  sub_DA73B4(v8 + 1, v7);
  sub_DA73B4(v8 + 2, v6);
  *((_BYTE *)v8 + 12) = a5;
  *((_BYTE *)v8 + 13) = a6;
  return v8;
}


int *__fastcall PurchaseInfo::PurchaseInfo(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1

  v2 = a2;
  v3 = a1;
  sub_DA73B4(a1, a2);
  sub_DA73B4(v3 + 1, v2 + 1);
  sub_DA73B4(v3 + 2, v2 + 2);
  *((_WORD *)v3 + 6) = *((_WORD *)v2 + 6);
  return v3;
}
