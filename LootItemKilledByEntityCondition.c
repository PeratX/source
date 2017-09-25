

_BOOL4 __fastcall LootItemKilledByEntityCondition::applies(LootItemKilledByEntityCondition *this, Random *a2, LootTableContext *a3)
{
  LootItemKilledByEntityCondition *v3; // r4@1
  int v4; // r0@1

  v3 = this;
  v4 = j_LootTableContext::getKillerEntity(a3);
  return v4 && (*(int (**)(void))(*(_DWORD *)v4 + 488))() == *((_DWORD *)v3 + 1);
}


int __fastcall LootItemKilledByEntityCondition::LootItemKilledByEntityCondition(int result, int a2)
{
  *(_DWORD *)result = &off_2725A74;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


void __fastcall LootItemKilledByEntityCondition::deserialize(_DWORD *a1, Json::Value *a2)
{
  LootItemKilledByEntityCondition::deserialize(a1, a2);
}


void __fastcall LootItemKilledByEntityCondition::deserialize(_DWORD *a1, Json::Value *a2)
{
  _DWORD *v2; // r4@1
  int v3; // r5@1
  void *v4; // r0@1
  char *v5; // r5@2
  _DWORD *v6; // r0@2
  int v7; // r1@2
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+Ch] [bp-24h]@1

  v2 = a1;
  v3 = j_Json::Value::operator[](a2, "entity_type");
  sub_21E94B4((void **)&v13, (const char *)&unk_257BC67);
  j_Json::Value::asString(&v14, v3, &v13);
  v4 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = j_EntityTypeFromString((const void **)&v14);
  v6 = j_operator new(8u);
  *v6 = &off_2725A74;
  v6[1] = v5;
  v7 = v14;
  *v2 = v6;
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v7 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}
