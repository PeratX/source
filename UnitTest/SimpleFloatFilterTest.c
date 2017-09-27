

signed int __fastcall SimpleFloatFilterTest::setup(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1

  v3 = a3;
  v4 = a1;
  FilterTest::setup(a1, a2, a3);
  *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 36);
  return 1;
}
