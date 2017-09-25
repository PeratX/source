

int __fastcall RealmsTransactionContext::RealmsTransactionContext(int a1, int *a2, int *a3, int *a4, char a5)
{
  int *v5; // r6@1
  int *v6; // r7@1
  int v7; // r4@1
  int v8; // r6@1
  int v9; // r6@1
  int v10; // r6@1
  void *v11; // r0@1
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  int v15; // [sp+4h] [bp-5Ch]@1
  char v16; // [sp+8h] [bp-58h]@1
  char v17; // [sp+18h] [bp-48h]@1
  char v18; // [sp+28h] [bp-38h]@1
  char v19; // [sp+38h] [bp-28h]@1

  v5 = a4;
  v6 = a3;
  v7 = a1;
  TransactionContext::TransactionContext(a1, a2);
  sub_119C854((int *)(v7 + 24), v6);
  sub_119C854((int *)(v7 + 28), v5);
  *(_DWORD *)(v7 + 44) = &unk_28898CC;
  *(_DWORD *)(v7 + 48) = &unk_28898CC;
  *(_DWORD *)(v7 + 52) = &unk_28898CC;
  *(_DWORD *)(v7 + 56) = &unk_28898CC;
  *(_BYTE *)(v7 + 72) = 0;
  *(_DWORD *)(v7 + 76) = 0;
  *(_DWORD *)(v7 + 80) = 2;
  *(_BYTE *)(v7 + 84) = 0;
  *(_BYTE *)(v7 + 85) = 0;
  *(_BYTE *)(v7 + 86) = 0;
  *(_DWORD *)(v7 + 88) = 0;
  *(_DWORD *)(v7 + 92) = 0;
  *(_DWORD *)(v7 + 96) = 0;
  *(_BYTE *)(v7 + 104) = a5;
  Json::Value::Value(&v19, 0);
  v8 = Json::Value::operator[]((Json::Value *)&v19, "xuid");
  Json::Value::Value((int)&v18, (const char **)(v7 + 16));
  Json::Value::operator=(v8, (const Json::Value *)&v18);
  Json::Value::~Value((Json::Value *)&v18);
  v9 = Json::Value::operator[]((Json::Value *)&v19, "world_name");
  Json::Value::Value((int)&v17, (const char **)(v7 + 24));
  Json::Value::operator=(v9, (const Json::Value *)&v17);
  Json::Value::~Value((Json::Value *)&v17);
  v10 = Json::Value::operator[]((Json::Value *)&v19, "subscription_id");
  Json::Value::Value((int)&v16, (const char **)(v7 + 28));
  Json::Value::operator=(v10, (const Json::Value *)&v16);
  Json::Value::~Value((Json::Value *)&v16);
  Json::Value::toStyledString((Json::Value *)&v15, (const Json::Value *)&v19);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v7 + 20),
    &v15);
  v11 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  }
  Json::Value::~Value((Json::Value *)&v19);
  return v7;
}
