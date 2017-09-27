

signed int __fastcall FitSimpleTopRoom::fits(int a1, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( !(**(_BYTE **)(*(_DWORD *)a2 + 24) & 0x3E) )
    result = 1;
  return result;
}


_DWORD *__fastcall FitSimpleTopRoom::create(_DWORD *a1, int a2, int *a3, int a4)
{
  int v4; // r4@1
  _DWORD *v5; // r6@1
  int *v6; // r5@1
  void *v7; // r0@1
  _DWORD *result; // r0@1

  v4 = a4;
  v5 = a1;
  v6 = a3;
  *(_BYTE *)(*(_DWORD *)a4 + 44) = 1;
  v7 = j_operator new(0x30u);
  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece((int)v7, 1, v6, v4, 1, 1, 1);
  *v5 = result;
  *result = &off_2718EA4;
  return result;
}
