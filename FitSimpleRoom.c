

unsigned int __fastcall FitSimpleRoom::create(Random *a1, int a2, int *a3, int a4, Random *a5)
{
  int v5; // r6@1
  Random *v6; // r8@1
  int *v7; // r7@1
  _DWORD *v8; // r4@1
  unsigned int v9; // r0@1
  unsigned int result; // r0@1

  v5 = a4;
  v6 = a1;
  v7 = a3;
  *(_BYTE *)(*(_DWORD *)a4 + 44) = 1;
  v8 = j_operator new(0x34u);
  OceanMonumentPiece::OceanMonumentPiece((int)v8, 1, v7, v5, 1, 1, 1);
  *v8 = &off_2718E5C;
  v9 = j_Random::_genRandInt32(a5);
  *(_DWORD *)v6 = v8;
  result = v9 % 3;
  v8[12] = result;
  return result;
}
