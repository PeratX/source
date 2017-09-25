

_DWORD *__fastcall FitDoubleXRoom::create(_DWORD *a1, int a2, int *a3, int *a4)
{
  int *v4; // r4@1
  _DWORD *v5; // r6@1
  int v6; // r0@1
  int *v7; // r5@1
  void *v8; // r0@1
  _DWORD *result; // r0@1

  v4 = a4;
  v5 = a1;
  v6 = *a4;
  v7 = a3;
  *(_BYTE *)(v6 + 44) = 1;
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v6 + 12) + 40) + 44) = 1;
  v8 = j_operator new(0x30u);
  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece((int)v8, 1, v7, (int)v4, 2, 1, 1);
  *v5 = result;
  *result = &off_2718F34;
  return result;
}
