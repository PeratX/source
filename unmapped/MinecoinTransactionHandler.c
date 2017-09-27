

signed int __fastcall MinecoinTransactionHandler::transactFulfillment(int a1, int a2, int **a3, int *a4)
{
  int v4; // r6@1
  int **v5; // r7@1
  int v6; // r5@1
  int v7; // r1@1
  int *v8; // r2@1
  signed int result; // r0@1
  int v10; // r1@2
  int *v11; // r4@2
  int v12; // r0@2
  int *v13; // r8@4
  unsigned int *v14; // r0@5
  unsigned int v15; // r1@7
  int v16; // r9@10
  int *v17; // r7@10
  unsigned int *v18; // r0@11
  unsigned int v19; // r1@13
  _DWORD *v20; // r0@16
  __int64 v21; // r1@16
  void *v22; // r0@18
  unsigned int *v23; // r1@20
  unsigned int v24; // r0@22
  unsigned int *v25; // r4@26
  unsigned int v26; // r0@28
  void *v27; // r0@33
  unsigned int *v28; // r2@36
  signed int v29; // r1@38
  unsigned int *v30; // r2@40
  signed int v31; // r1@42
  _DWORD *v32; // [sp+8h] [bp-38h]@16
  __int64 v33; // [sp+10h] [bp-30h]@16
  int v34; // [sp+18h] [bp-28h]@10
  int v35; // [sp+1Ch] [bp-24h]@2

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v8 = (int *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 24);
  result = 0;
  if ( !v7 )
  {
    v10 = *a4;
    *a4 = 0;
    std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::reset(v8, v10);
    GameStore::getAppReceipt((GameStore *)&v35, *(_DWORD *)(v4 + 8));
    v11 = *v5;
    ++(*v5)[5];
    v12 = *(_DWORD *)(v4 + 24);
    if ( *(_DWORD *)(v12 + 8) )
    {
      (*(void (**)(void))(v12 + 12))();
      v11 = *v5;
    }
    v13 = v5[1];
    if ( v13 )
      v14 = (unsigned int *)(v13 + 1);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
      }
      else
        ++*v14;
    v16 = *(_DWORD *)(v4 + 16);
    GameStore::getStoreId((GameStore *)&v34, *(_DWORD *)(v4 + 8), 0);
    v17 = *v5;
      v18 = (unsigned int *)(v13 + 1);
          v19 = __ldrex(v18);
        while ( __strex(v19 + 1, v18) );
        ++*v18;
    v20 = operator new(0x10u);
    LODWORD(v21) = sub_13AB590;
    *v20 = v4;
    v20[1] = v6;
    HIDWORD(v21) = sub_13AB0E8;
    v20[2] = v11;
    v20[3] = v13;
    v32 = v20;
    v33 = v21;
    EntitlementManager::purchaseCoinOffer(v16, (const void **)&v34, v17, &v35, (int)&v32);
    if ( (_DWORD)v33 )
      ((void (*)(void))v33)();
    v22 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v34 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
      v23 = (unsigned int *)(v13 + 1);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        v25 = (unsigned int *)(v13 + 2);
        (*(void (__fastcall **)(int *))(*v13 + 8))(v13);
        if ( &pthread_create )
        {
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        }
        else
          v26 = (*v25)--;
        if ( v26 == 1 )
          (*(void (__fastcall **)(int *))(*v13 + 12))(v13);
    v27 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v35 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    result = 1;
  }
  return result;
}


_QWORD *__fastcall MinecoinTransactionHandler::MinecoinTransactionHandler(_QWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  _QWORD *result; // r0@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  result = TransactionHandler::TransactionHandler(a1);
  *(_DWORD *)result = &off_26E7A48;
  *((_DWORD *)result + 2) = v7;
  *((_DWORD *)result + 3) = v6;
  *((_DWORD *)result + 4) = v5;
  *((_DWORD *)result + 5) = a5;
  *((_DWORD *)result + 6) = 0;
  return result;
}


void __fastcall MinecoinTransactionHandler::~MinecoinTransactionHandler(MinecoinTransactionHandler *this)
{
  MinecoinTransactionHandler::~MinecoinTransactionHandler(this);
}


TransactionHandler *__fastcall MinecoinTransactionHandler::~MinecoinTransactionHandler(MinecoinTransactionHandler *this)
{
  MinecoinTransactionHandler *v1; // r4@1
  TransactionContext *v2; // r0@1
  TransactionContext *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_26E7A48;
  v2 = (TransactionContext *)*((_DWORD *)this + 6);
  if ( v2 )
  {
    v3 = TransactionContext::~TransactionContext(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 6) = 0;
  return j_j_j__ZN18TransactionHandlerD2Ev_0(v1);
}


void __fastcall MinecoinTransactionHandler::~MinecoinTransactionHandler(MinecoinTransactionHandler *this)
{
  MinecoinTransactionHandler *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@2
  void *v4; // r0@2
  int v5; // r1@3
  void *v6; // r0@3
  void (__fastcall *v7)(int, int, signed int); // r3@4
  unsigned int *v8; // r12@8
  signed int v9; // r1@10
  unsigned int *v10; // r12@12
  signed int v11; // r1@14

  v1 = this;
  *(_DWORD *)this = &off_26E7A48;
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 20);
    v4 = (void *)(v3 - 12);
    if ( (int *)(v3 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v3 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    v5 = *(_DWORD *)(v2 + 16);
    v6 = (void *)(v5 - 12);
    if ( (int *)(v5 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v5 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = *(void (__fastcall **)(int, int, signed int))(v2 + 8);
    if ( v7 )
      v7(v2, v2, 3);
    operator delete((void *)v2);
  }
  *((_DWORD *)v1 + 6) = 0;
  TransactionHandler::~TransactionHandler(v1);
  operator delete((void *)v1);
}


signed int __fastcall MinecoinTransactionHandler::tryParseTransactionPayload(int a1, const void ***a2, const void **a3)
{
  int *v3; // r4@1
  int v4; // r8@1
  const void ***v5; // r6@1
  const Json::Value *v6; // r0@2
  signed int v7; // r7@3
  void *v8; // r0@3
  void *v9; // r0@4
  const Json::Value *v10; // r0@6
  signed int v11; // r7@7
  void *v12; // r0@9
  void *v13; // r0@11
  void *v14; // r0@16
  char *v15; // r1@17
  Json::Value *v16; // r0@19
  int v17; // r5@20
  signed int v18; // r5@20
  signed int v19; // r4@21
  void *v20; // r0@23
  void *v21; // r0@25
  char *v22; // r0@28
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@39
  signed int v27; // r1@41
  unsigned int *v28; // r2@43
  signed int v29; // r1@45
  unsigned int *v30; // r2@47
  signed int v31; // r1@49
  unsigned int *v32; // r2@51
  signed int v33; // r1@53
  unsigned int *v34; // r2@55
  signed int v35; // r1@57
  unsigned int *v36; // r2@74
  signed int v37; // r1@76
  unsigned int *v38; // r2@82
  signed int v39; // r1@84
  int v40; // [sp+8h] [bp-180h]@20
  int v41; // [sp+Ch] [bp-17Ch]@20
  char v42; // [sp+10h] [bp-178h]@18
  char v43; // [sp+24h] [bp-164h]@18
  int v44; // [sp+94h] [bp-F4h]@16
  int v45; // [sp+A0h] [bp-E8h]@7
  int v46; // [sp+A4h] [bp-E4h]@7
  char v47; // [sp+A8h] [bp-E0h]@6
  int v48; // [sp+C0h] [bp-C8h]@3
  int v49; // [sp+C4h] [bp-C4h]@3
  char v50; // [sp+C8h] [bp-C0h]@3
  char v51; // [sp+D8h] [bp-B0h]@2
  char v52; // [sp+E8h] [bp-A0h]@1
  char v53; // [sp+F8h] [bp-90h]@1
  char *v54; // [sp+168h] [bp-20h]@1

  v3 = (int *)a3;
  v4 = a1;
  v5 = a2;
  sub_21E7EE0(a3, 0, *((_BYTE **)*a3 - 3), 0);
  v54 = (char *)&unk_28898CC;
  Json::Reader::Reader((Json::Reader *)&v53);
  Json::Value::Value(&v52, 0);
  if ( Json::Reader::parse((int)&v53, (int *)*v5 + 2, (int)&v52, 1) == 1 )
  {
    v6 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v52, "originaljson");
    Json::Value::Value((Json::Value *)&v51, v6);
    if ( Json::Value::isString((Json::Value *)&v51) == 1 )
    {
      Json::Value::Value(&v50, 0);
      sub_21E94B4((void **)&v48, (const char *)&unk_257BC67);
      Json::Value::asString(&v49, (int)&v51, &v48);
      v7 = Json::Reader::parse((int)&v53, &v49, (int)&v50, 1);
      v8 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != &dword_28898C0 )
      {
        v30 = (unsigned int *)(v49 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
        }
        else
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      v9 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v48 - 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      if ( v7 == 1 )
        v10 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v50, "developerPayload");
        Json::Value::Value((Json::Value *)&v47, v10);
        if ( Json::Value::isString((Json::Value *)&v47) == 1 )
          sub_21E94B4((void **)&v45, (const char *)&unk_257BC67);
          Json::Value::asString(&v46, (int)&v47, &v45);
          v11 = 1;
          sub_21E94B4((void **)&v46, (const char *)&unk_257BC67);
          v11 = 0;
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v54,
          &v46);
        v12 = (void *)(v46 - 12);
        if ( (int *)(v46 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v46 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
          }
          else
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        if ( v11 == 1 )
          v13 = (void *)(v45 - 12);
          if ( (int *)(v45 - 12) != &dword_28898C0 )
            v38 = (unsigned int *)(v45 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
            }
            else
              v39 = (*v38)--;
            if ( v39 <= 0 )
              j_j_j_j__ZdlPv_9(v13);
        Json::Value::~Value((Json::Value *)&v47);
      Json::Value::~Value((Json::Value *)&v50);
    }
    Json::Value::~Value((Json::Value *)&v51);
  }
  Json::Value::~Value((Json::Value *)&v52);
  Json::Reader::~Reader((Json::Reader *)&v53);
  if ( *((_DWORD *)v54 - 3) )
    goto LABEL_96;
  PurchaseCache::tryGetPayloadFromRecord(&v44, *(_DWORD *)(v4 + 12), *v5);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v54,
    &v44);
  v14 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = v54;
LABEL_96:
    Json::Reader::Reader((Json::Reader *)&v43);
    Json::Value::Value(&v42, 0);
    if ( Json::Reader::parse((int)&v43, (int *)&v54, (int)&v42, 1) == 1 )
      v16 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v42, "xuid");
      if ( Json::Value::isString(v16) == 1 )
        v17 = Json::Value::operator[]((Json::Value *)&v42, "xuid");
        sub_21E94B4((void **)&v40, (const char *)&unk_257BC67);
        Json::Value::asString(&v41, v17, &v40);
        v18 = 1;
      else
        sub_21E94B4((void **)&v41, (const char *)&unk_257BC67);
        v18 = 0;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v41);
      v20 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v41 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      if ( v18 == 1 )
        v21 = (void *)(v40 - 12);
        if ( (int *)(v40 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v40 - 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
      v19 = 1;
      v19 = 0;
    Json::Value::~Value((Json::Value *)&v42);
    Json::Reader::~Reader((Json::Reader *)&v43);
    v15 = v54;
  else
    v19 = 0;
  v22 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v15 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  return v19;
}


int __fastcall MinecoinTransactionHandler::transactPurchase(MinecoinTransactionHandler *this, Offer *a2, TransactionContext *a3)
{
  TransactionContext *v3; // r4@1
  MinecoinTransactionHandler *v4; // r6@1
  Offer *v5; // r5@1
  int v6; // r6@3
  int result; // r0@3

  v3 = a3;
  v4 = this;
  v5 = a2;
  if ( *((_DWORD *)a3 + 2) )
    (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))a3 + 3))(a3, *((_DWORD *)this + 6), 0);
  v6 = *((_DWORD *)v4 + 2);
  Offer::getProductSku(v5);
  Offer::getProductType(v5);
  result = GameStore::purchase(v6);
  if ( *((_DWORD *)v3 + 2) )
  {
    result ^= 1u;
    if ( result == 1 )
      result = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 3))(v3, v3, 2);
  }
  return result;
}
