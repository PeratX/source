

signed int __fastcall DurableTransactionHandler::transactFulfillment(int a1, Offer *a2, const void ***a3)
{
  const void ***v3; // r5@1
  Offer *v4; // r8@1
  int v5; // r6@1
  const void **v6; // r7@1
  int v7; // r4@1
  void *v8; // r0@1
  int v9; // r4@2
  int v10; // r6@2
  int v11; // r0@2
  unsigned int *v12; // r0@3
  unsigned int v13; // r1@5
  int v14; // r4@8
  unsigned int *v15; // r1@9
  unsigned int v16; // r0@11
  unsigned int *v17; // r5@15
  unsigned int v18; // r0@17
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  const void **v22; // [sp+0h] [bp-30h]@2
  int v23; // [sp+4h] [bp-2Ch]@2
  int v24; // [sp+Ch] [bp-24h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *a3;
  v7 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v24, (const char *)&unk_257BC67);
  PurchaseCache::updateRecord(v7, v6, &v24, 1);
  v8 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (int)*v3;
  v10 = *(_DWORD *)(v5 + 8);
  Offer::getProductType(v4);
  GameStore::acknowledgePurchase(v10);
  v22 = *v3;
  v11 = (int)v3[1];
  v23 = v11;
  if ( v11 )
    v12 = (unsigned int *)(v11 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  Offer::fulfillPurchase((int)v4, (void ***)&v22, (void *)1);
  v14 = v23;
  if ( v23 )
    v15 = (unsigned int *)(v23 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  return 1;
}


void __fastcall DurableTransactionHandler::transactPurchase(DurableTransactionHandler *this, Offer *a2, TransactionContext *a3)
{
  DurableTransactionHandler::transactPurchase(this, a2, a3);
}


_QWORD *__fastcall DurableTransactionHandler::DurableTransactionHandler(_QWORD *a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  _QWORD *result; // r0@1

  v3 = a3;
  v4 = a2;
  result = TransactionHandler::TransactionHandler(a1);
  *(_DWORD *)result = &off_26E79E8;
  *((_DWORD *)result + 2) = v4;
  *((_DWORD *)result + 3) = v3;
  return result;
}


void __fastcall DurableTransactionHandler::~DurableTransactionHandler(DurableTransactionHandler *this)
{
  DurableTransactionHandler::~DurableTransactionHandler(this);
}


void __fastcall DurableTransactionHandler::transactPurchase(DurableTransactionHandler *this, Offer *a2, TransactionContext *a3)
{
  Offer *v3; // r5@1
  int v4; // r6@1
  TransactionContext *v5; // r4@1
  int v6; // r5@1
  signed int v7; // r1@8

  v3 = a2;
  v4 = *((_DWORD *)this + 2);
  v5 = a3;
  Offer::getProductSku(a2);
  Offer::getProductType(v3);
  v6 = GameStore::purchase(v4);
  if ( &dword_28898C0 != &dword_28898C0 )
  {
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(&dword_28898C8);
      while ( __strex(v7 - 1, &dword_28898C8) );
    }
    else
      v7 = dword_28898C8--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(&dword_28898C0);
  }
  if ( !v6 )
    if ( *((_DWORD *)v5 + 2) )
      (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v5 + 3))(v5, v5, 2);
}


void __fastcall DurableTransactionHandler::~DurableTransactionHandler(DurableTransactionHandler *this)
{
  TransactionHandler *v1; // r0@1

  v1 = TransactionHandler::~TransactionHandler(this);
  j_j_j__ZdlPv_5((void *)v1);
}
