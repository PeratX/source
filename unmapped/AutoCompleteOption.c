

int *__fastcall AutoCompleteOption::AutoCompleteOption(int *a1, int *a2, int *a3, int *a4, int a5, int a6, int a7)
{
  int *v7; // r6@1
  int *v8; // r5@1
  int *v9; // r7@1
  int *v10; // r4@1

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  sub_21E8AF4(a1, a2);
  if ( *(_DWORD *)(*v7 - 12) )
    v9 = v7;
  sub_21E8AF4(v10 + 1, v9);
  sub_21E8AF4(v10 + 2, v8);
  v10[3] = a5;
  v10[4] = a6;
  v10[5] = a7;
  CommandItem::CommandItem((int)(v10 + 6));
  *((_BYTE *)v10 + 32) = 0;
  return v10;
}
