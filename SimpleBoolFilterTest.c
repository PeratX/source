

signed int __fastcall SimpleBoolFilterTest::setup(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1

  v3 = a3;
  v4 = a1;
  FilterTest::setup(a1, a2, a3);
  v5 = *(_DWORD *)(v3 + 32);
  if ( v5 )
    LOBYTE(v5) = 1;
  *(_BYTE *)(v4 + 8) = v5;
  return 1;
}
