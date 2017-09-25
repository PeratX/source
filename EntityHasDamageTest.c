

int __fastcall EntityHasDamageTest::evaluate(int a1, int a2)
{
  int v2; // r4@1
  Entity *v3; // r0@1
  DamageSensorComponent *v4; // r0@2
  signed int v5; // r1@4
  int result; // r0@5
  int v7; // r0@6

  v2 = a1;
  v3 = *(Entity **)(a2 + 4);
  if ( v3 && (v4 = (DamageSensorComponent *)j_Entity::getDamageSensorComponent(v3)) != 0 )
  {
    if ( *(_DWORD *)(v2 + 8) == -2 )
    {
      v5 = j_DamageSensorComponent::isFatal(v4);
    }
    else
      v7 = j_DamageSensorComponent::getCause(v4);
      v5 = 0;
      if ( v7 == *(_DWORD *)(v2 + 8) )
        v5 = 1;
    result = j_FilterTest::_testValuesWithOperator((FilterTest *)v2, v5, 1);
  }
  else
    result = 0;
  return result;
}
