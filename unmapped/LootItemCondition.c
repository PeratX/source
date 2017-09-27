

void __fastcall LootItemCondition::deserialize(_DWORD *a1, Json::Value *a2)
{
  LootItemCondition::deserialize(a1, a2);
}


void __fastcall LootItemCondition::deserialize(_DWORD *a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  _DWORD *v3; // r4@1
  int v4; // r6@1
  void *v5; // r0@1
  unsigned int *v6; // r2@13
  signed int v7; // r1@15
  void *v8; // r0@19
  unsigned int *v9; // r2@21
  signed int v10; // r1@23
  int v11; // [sp+0h] [bp-80h]@18
  char v12; // [sp+10h] [bp-70h]@17
  char v13; // [sp+20h] [bp-60h]@12
  char v14; // [sp+30h] [bp-50h]@11
  char v15; // [sp+40h] [bp-40h]@10
  char v16; // [sp+50h] [bp-30h]@9
  int v17; // [sp+64h] [bp-1Ch]@1
  int v18; // [sp+68h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  v4 = j_Json::Value::operator[](a2, "condition");
  sub_21E94B4((void **)&v17, (const char *)&unk_257BC67);
  j_Json::Value::asString(&v18, v4, &v17);
  v5 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( sub_21E7D6C((const void **)&v18, "killed_by_player") )
    if ( sub_21E7D6C((const void **)&v18, "killed_by_entity") )
      if ( sub_21E7D6C((const void **)&v18, "random_chance") )
      {
        if ( sub_21E7D6C((const void **)&v18, "random_difficulty_chance") )
        {
          if ( sub_21E7D6C((const void **)&v18, "random_chance_with_looting") )
          {
            if ( sub_21E7D6C((const void **)&v18, "random_regional_difficulty_chance") )
            {
              *v3 = 0;
            }
            else
              j_Json::Value::Value((Json::Value *)&v11, v2);
              j_LootItemRandomChanceWithSpecialModifierCondition::deserialize(v3, (Json::Value *)&v11);
              j_Json::Value::~Value((Json::Value *)&v11);
          }
          else
            j_Json::Value::Value((Json::Value *)&v12, v2);
            j_LootItemRandomChanceWithLootingCondition::deserialize(v3, (Json::Value *)&v12);
            j_Json::Value::~Value((Json::Value *)&v12);
        }
        else
          j_Json::Value::Value((Json::Value *)&v13, v2);
          j_LootItemRandomDifficultyChanceCondition::deserialize(v3, (const Json::Value *)&v13);
          j_Json::Value::~Value((Json::Value *)&v13);
      }
      else
        j_Json::Value::Value((Json::Value *)&v14, v2);
        j_LootItemRandomChanceCondition::deserialize(v3, (Json::Value *)&v14);
        j_Json::Value::~Value((Json::Value *)&v14);
      j_Json::Value::Value((Json::Value *)&v15, v2);
      j_LootItemKilledByEntityCondition::deserialize(v3, (Json::Value *)&v15);
      j_Json::Value::~Value((Json::Value *)&v15);
  else
    j_Json::Value::Value((Json::Value *)&v16, v2);
    j_LootItemKilledByPlayerCondition::deserialize(v3);
    j_Json::Value::~Value((Json::Value *)&v16);
  v8 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v18 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}
