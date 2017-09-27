

int __fastcall CommandSyntaxInformation::CommandSyntaxInformation(int result)
{
  *(_BYTE *)result = 0;
  *(_QWORD *)(result + 4) = (unsigned int)&unk_28898CC;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


int __fastcall CommandSyntaxInformation::CommandSyntaxInformation(int a1, char a2, int *a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r0@1

  v4 = a1;
  *(_BYTE *)a1 = a2;
  v5 = a4;
  sub_21E8AF4((int *)(a1 + 4), a3);
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 8) = *(_DWORD *)v5;
  *(_DWORD *)v5 = 0;
  v6 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = v6;
  v7 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = v7;
  return v4;
}
