

int __fastcall BoundingBox::orientBox(int result, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11; // r1@2
  int v12; // r3@2
  int v13; // r2@2
  int v14; // r1@3
  int v15; // r3@3
  int v16; // r2@3
  int v17; // r7@3
  int v18; // r6@3
  int v19; // r1@4
  int v20; // r3@4
  int v21; // r2@4
  int v22; // r2@5
  int v23; // r3@5
  int v24; // r1@5

  switch ( a11 )
  {
    default:
      v11 = a2 + a5;
      v12 = a4 + a7;
      v13 = a3 + a6;
      *(_DWORD *)result = 0;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 12) = 0;
      *(_DWORD *)result = v11;
      *(_DWORD *)(result + 4) = v13;
      *(_DWORD *)(result + 8) = v12;
      *(_DWORD *)(result + 12) = v11 + a8 - 1;
      *(_DWORD *)(result + 16) = v13 + a9 - 1;
      *(_DWORD *)(result + 20) = v12 + a10 - 1;
      break;
    case 1:
      v14 = a2 + a7;
      v15 = a4 + a5;
      v16 = a3 + a6;
      v17 = v16 + a9 - 1;
      *(_DWORD *)result = v14 + 1 - a10;
      *(_DWORD *)(result + 4) = v16;
      v18 = v15 + a8 - 1;
      *(_DWORD *)(result + 8) = v15;
      *(_DWORD *)(result + 12) = v14;
      goto LABEL_6;
    case 2:
      v19 = a2 + a5;
      v20 = a4 + a7;
      v21 = a3 + a6;
      *(_DWORD *)result = v19;
      *(_DWORD *)(result + 4) = v21;
      *(_DWORD *)(result + 8) = v20 + 1 - a10;
      *(_DWORD *)(result + 12) = v19 + a8 - 1;
      *(_DWORD *)(result + 16) = v21 + a9 - 1;
      *(_DWORD *)(result + 20) = v20;
    case 3:
      v22 = a3 + a6;
      v23 = a4 + a5;
      v24 = a2 + a7;
      v17 = v22 + a9 - 1;
      v18 = v23 + a8 - 1;
      *(_DWORD *)result = v24;
      *(_DWORD *)(result + 4) = v22;
      *(_DWORD *)(result + 8) = v23;
      *(_DWORD *)(result + 12) = v24 + a10 - 1;
LABEL_6:
      *(_DWORD *)(result + 16) = v17;
      *(_DWORD *)(result + 20) = v18;
  }
  return result;
}
