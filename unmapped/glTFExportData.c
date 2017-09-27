

int *__fastcall glTFExportData::glTFExportData(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r8@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r4@1
  int v9; // r5@1
  int v10; // r6@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r3@1
  int v14; // r4@1
  int v15; // r5@1
  int v16; // r6@1
  int v17; // r7@1
  int *result; // r0@1

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v3 + 1, v2 + 1);
  sub_21E8AF4(v3 + 2, v2 + 2);
  v4 = (int)(v2 + 3);
  v5 = (int)(v3 + 3);
  v6 = v2[3];
  v7 = v2[4];
  v8 = v2[5];
  v9 = *(_DWORD *)(v4 + 12);
  v10 = *(_DWORD *)(v4 + 16);
  v4 += 20;
  *(_DWORD *)v5 = v6;
  *(_DWORD *)(v5 + 4) = v7;
  *(_DWORD *)(v5 + 8) = v8;
  *(_DWORD *)(v5 + 12) = v9;
  *(_DWORD *)(v5 + 16) = v10;
  v11 = (int)(v3 + 8);
  v12 = *(_DWORD *)v4;
  v13 = *(_DWORD *)(v4 + 4);
  v14 = *(_DWORD *)(v4 + 8);
  v15 = *(_DWORD *)(v4 + 12);
  v16 = *(_DWORD *)(v4 + 16);
  v17 = *(_DWORD *)(v4 + 20);
  result = v3;
  *(_DWORD *)v11 = v12;
  *(_DWORD *)(v11 + 4) = v13;
  *(_DWORD *)(v11 + 8) = v14;
  *(_DWORD *)(v11 + 12) = v15;
  *(_DWORD *)(v11 + 16) = v16;
  *(_DWORD *)(v11 + 20) = v17;
  return result;
}


int __fastcall glTFExportData::glTFExportData(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 3;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  return result;
}
