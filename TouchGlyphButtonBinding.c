

int __fastcall TouchGlyphButtonBinding::TouchGlyphButtonBinding(int a1, int a2, int a3, int a4, int a5, int a6, int a7, float a8, int a9, char a10, int a11, int a12, char a13)
{
  int *v13; // r5@1
  int *v14; // r7@1
  int v15; // r4@1
  int v16; // r1@1
  int v21; // r3@1
  int v22; // r6@1
  int v23; // r7@1
  int v24; // r1@1
  int v25; // r3@1
  int v26; // r6@1
  int v27; // r7@1
  int result; // r0@1

  v13 = (int *)a4;
  v14 = (int *)a3;
  v15 = a1;
  sub_119C854((int *)a1, (int *)a2);
  sub_119C854((int *)(v15 + 4), v14);
  sub_119C854((int *)(v15 + 8), v13);
  v16 = v15 + 12;
  __asm { VLDR            S0, [SP,#0x30+arg_1C] }
  v21 = *(_DWORD *)(a5 + 4);
  v22 = *(_DWORD *)(a5 + 8);
  v23 = *(_DWORD *)(a5 + 12);
  *(_DWORD *)v16 = *(_DWORD *)a5;
  *(_DWORD *)(v16 + 4) = v21;
  *(_DWORD *)(v16 + 8) = v22;
  *(_DWORD *)(v16 + 12) = v23;
  v24 = v15 + 28;
  v25 = *(_DWORD *)(a5 + 20);
  v26 = *(_DWORD *)(a5 + 24);
  v27 = *(_DWORD *)(a5 + 28);
  result = v15;
  *(_DWORD *)v24 = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(v24 + 4) = v25;
  *(_DWORD *)(v24 + 8) = v26;
  *(_DWORD *)(v24 + 12) = v27;
  *(_DWORD *)(v15 + 44) = a6;
  *(_DWORD *)(v15 + 48) = a7;
  *(float *)(v15 + 52) = a8;
  *(_DWORD *)(v15 + 56) = a9;
  *(_BYTE *)(v15 + 60) = a10;
  *(_DWORD *)(v15 + 64) = a11;
  __asm { VSTR            S0, [R4,#0x44] }
  *(_BYTE *)(v15 + 72) = a13;
  return result;
}


int *__fastcall TouchGlyphButtonBinding::TouchGlyphButtonBinding(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r7@1
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
  int v17; // r1@1
  int v18; // r3@1
  int v19; // r4@1
  int v20; // r5@1
  int v21; // r6@1

  v2 = a2;
  v3 = a1;
  sub_119C854(a1, a2);
  sub_119C854(v3 + 1, v2 + 1);
  sub_119C854(v3 + 2, v2 + 2);
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
  *(_DWORD *)v11 = v12;
  *(_DWORD *)(v11 + 4) = v13;
  *(_DWORD *)(v11 + 8) = v14;
  *(_DWORD *)(v11 + 12) = v15;
  *(_DWORD *)(v11 + 16) = v16;
  v17 = (int)(v3 + 13);
  v18 = *(_DWORD *)(v4 + 4);
  v19 = *(_DWORD *)(v4 + 8);
  v20 = *(_DWORD *)(v4 + 12);
  v21 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)v17 = *(_DWORD *)v4;
  *(_DWORD *)(v17 + 4) = v18;
  *(_DWORD *)(v17 + 8) = v19;
  *(_DWORD *)(v17 + 12) = v20;
  *(_DWORD *)(v17 + 16) = v21;
  *((_BYTE *)v3 + 72) = *(_BYTE *)(v4 + 20);
  return v3;
}
