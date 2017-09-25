

int *__fastcall SkinPackMeta::SkinPackMeta(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1

  v2 = a2;
  v3 = a1;
  sub_DA73B4(a1, a2);
  sub_DA73B4(v3 + 1, v2 + 1);
  Json::Value::Value((Json::Value *)(v3 + 2), (const Json::Value *)(v2 + 2));
  return v3;
}
