

int __fastcall EntityIsOwnerTest::evaluate(int a1, int a2)
{
  Entity *v2; // r6@0
  Entity *v3; // r7@1
  int v4; // r4@1
  bool v5; // zf@1
  int v6; // r5@4
  Entity *v7; // r0@5
  char *v8; // r7@5
  int result; // r0@7

  v3 = *(Entity **)a2;
  v4 = a1;
  v5 = *(_DWORD *)a2 == 0;
  if ( *(_DWORD *)a2 )
  {
    v2 = *(Entity **)(a2 + 4);
    v5 = v2 == 0;
  }
  if ( v5 )
    result = 0;
  else
    v6 = 0;
    if ( j_Entity::getOwner(*(Entity **)a2) )
    {
      v7 = (Entity *)j_Entity::getOwner(v3);
      v8 = j_Entity::getUniqueID(v7);
      if ( *(_QWORD *)v8 == *(_QWORD *)j_Entity::getUniqueID(v2) )
        v6 = 1;
    }
    result = j_FilterTest::_testValuesWithOperator((FilterTest *)v4, v6, *(_BYTE *)(v4 + 8));
  return result;
}
