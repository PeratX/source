

int __fastcall CommandParameterData::CommandParameterData(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a2;
  v3 = a1;
  *(_WORD *)a1 = *(_WORD *)a2;
  *(_QWORD *)(a1 + 4) = *(_QWORD *)(a2 + 4);
  sub_21E8AF4((int *)(a1 + 12), (int *)(a2 + 12));
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v3 + 20) = *(_DWORD *)(v2 + 20);
  *(_DWORD *)(v3 + 24) = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v3 + 28) = *(_DWORD *)(v2 + 28);
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v2 + 32);
  *(_BYTE *)(v3 + 36) = *(_BYTE *)(v2 + 36);
  return v3;
}


int __fastcall CommandParameterData::CommandParameterData(int a1, _WORD *a2, __int64 a3, const char *a4, int a5, int a6, int a7, char a8, int a9)
{
  int v9; // r4@1
  int result; // r0@1

  v9 = a1;
  *(_WORD *)a1 = *a2;
  *(_QWORD *)(a1 + 4) = a3;
  sub_21E94B4((void **)(a1 + 12), a4);
  *(_DWORD *)(v9 + 16) = a6;
  result = v9;
  *(_DWORD *)(v9 + 20) = -1;
  *(_DWORD *)(v9 + 24) = a5;
  *(_DWORD *)(v9 + 28) = a7;
  *(_DWORD *)(v9 + 32) = a9;
  *(_BYTE *)(v9 + 36) = a8;
  return result;
}
