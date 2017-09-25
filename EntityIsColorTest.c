

signed int __fastcall EntityIsColorTest::evaluate(int a1, int a2)
{
  int v2; // r4@1
  Entity *v3; // r0@1
  signed int result; // r0@2
  int v5; // r0@3

  v2 = a1;
  v3 = *(Entity **)(a2 + 4);
  if ( v3 )
  {
    v5 = j_Entity::getColor(v3);
    result = j_FilterTest::_testValuesWithOperator((FilterTest *)v2, v5, *(_DWORD *)(v2 + 8));
  }
  else
    result = 0;
  return result;
}
