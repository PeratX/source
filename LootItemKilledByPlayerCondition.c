

_BOOL4 __fastcall LootItemKilledByPlayerCondition::applies(LootItemKilledByPlayerCondition *this, Random *a2, LootTableContext *a3)
{
  return j_LootTableContext::getKillerPlayer(a3) != 0;
}


_DWORD *__fastcall LootItemKilledByPlayerCondition::deserialize(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  _DWORD *result; // r0@1

  v1 = a1;
  result = j_operator new(4u);
  *v1 = result;
  *result = &off_2725A88;
  return result;
}
