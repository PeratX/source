

int __fastcall EntityUndergroundTest::evaluate(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@2
  float v5; // r1@2
  int v6; // r8@2
  float v7; // r1@2
  int v8; // r7@2
  float v9; // r1@2
  int v10; // r0@2
  signed int v11; // r0@2
  int result; // r0@2

  v2 = a2;
  v3 = a1;
  if ( *(_DWORD *)(a2 + 12) )
  {
    v4 = (*(int (**)(void))(**(_DWORD **)(a2 + 4) + 52))();
    v6 = j_mce::Math::floor(*(mce::Math **)v4, v5);
    v8 = j_mce::Math::floor(*(mce::Math **)(v4 + 4), v7);
    v10 = j_mce::Math::floor(*(mce::Math **)(v4 + 8), v9);
    v11 = j_BlockSource::canSeeSky(*(BlockSource **)(v2 + 12), v6, v8, v10);
    result = j_FilterTest::_testValuesWithOperator((FilterTest *)v3, v11 ^ 1, *(_BYTE *)(v3 + 8));
  }
  else
    result = 0;
  return result;
}
