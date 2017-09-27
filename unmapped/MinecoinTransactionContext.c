

int __fastcall MinecoinTransactionContext::MinecoinTransactionContext(int a1, int *a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-3Ch]@1
  char v10; // [sp+8h] [bp-38h]@1
  char v11; // [sp+18h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  TransactionContext::TransactionContext(a1, a2);
  Json::Value::Value(&v11, 0);
  v4 = Json::Value::operator[]((Json::Value *)&v11, "xuid");
  Json::Value::Value((int)&v10, (const char **)v2);
  Json::Value::operator=(v4, (const Json::Value *)&v10);
  Json::Value::~Value((Json::Value *)&v10);
  Json::Value::toStyledString((Json::Value *)&v9, (const Json::Value *)&v11);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 20),
    &v9);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  Json::Value::~Value((Json::Value *)&v11);
  return v3;
}
