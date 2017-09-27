

signed int __fastcall FilterTestDifficulty::evaluate(int a1, int a2)
{
  int v2; // r4@1
  Level *v3; // r0@1
  signed int result; // r0@2
  int v5; // r0@3

  v2 = a1;
  v3 = *(Level **)(a2 + 20);
  if ( v3 )
  {
    v5 = Level::getDifficulty(v3);
    result = FilterTest::_testValuesWithOperator((FilterTest *)v2, v5, *(_DWORD *)(v2 + 8));
  }
  else
    result = 0;
  return result;
}
