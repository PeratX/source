

int *__fastcall PlayerListInfo::PlayerListInfo(int *a1, int *a2)
{
  int *v2; // r9@1
  int *v3; // r8@1
  int v4; // r1@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  v4 = (int)(v3 + 2);
  v5 = v2[3];
  v6 = v2[4];
  v7 = v2[5];
  v8 = v2[6];
  v9 = v2[7];
  *(_DWORD *)v4 = v2[2];
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  *(_DWORD *)(v4 + 20) = v9;
  sub_21E8AF4(v3 + 8, v2 + 8);
  sub_21E8AF4(v3 + 9, v2 + 9);
  *((_WORD *)v3 + 20) = *((_WORD *)v2 + 20);
  return v3;
}


int *__fastcall PlayerListInfo::PlayerListInfo(int *a1)
{
  int *v1; // r5@1

  v1 = a1;
  sub_21E8AF4(a1, (int *)&Util::EMPTY_STRING);
  v1[2] = -1;
  v1[3] = -1;
  v1[4] = 0;
  v1[5] = 0;
  v1[6] = 0;
  v1[7] = 0;
  sub_21E8AF4(v1 + 8, (int *)&Util::EMPTY_STRING);
  sub_21E8AF4(v1 + 9, (int *)&Core::PathBuffer<std::string>::EMPTY);
  *((_WORD *)v1 + 20) = 0;
  return v1;
}
