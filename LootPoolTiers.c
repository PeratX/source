

int __fastcall LootPoolTiers::deserialize(int **a1, Json::Value *a2)
{
  int **v2; // r4@1
  Json::Value *v3; // r6@1
  int *v4; // r0@1
  int *v5; // r5@1
  Json::Value *v6; // r0@1
  Json::Value *v7; // r0@1
  Json::Value *v8; // r0@1
  int result; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = (int *)j_operator new(0xCu);
  v5 = v4;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  *v2 = v4;
  v6 = (Json::Value *)j_Json::Value::operator[](v3, "initial_range");
  *v5 = j_Json::Value::asInt(v6, 0);
  v7 = (Json::Value *)j_Json::Value::operator[](v3, "bonus_rolls");
  v5[1] = j_Json::Value::asInt(v7, 0);
  v8 = (Json::Value *)j_Json::Value::operator[](v3, "bonus_chance");
  result = j_Json::Value::asFloat(v8, 0.0);
  __asm
  {
    VMOV            S0, R0
    VSTR            S0, [R5,#8]
  }
  return result;
}
