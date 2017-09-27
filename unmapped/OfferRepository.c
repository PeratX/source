

void __fastcall OfferRepository::onQueryProductsSuccess(OfferRepository *a1, _QWORD *a2)
{
  const void **v2; // r5@1 OVERLAPPED
  const void **v3; // r6@1 OVERLAPPED
  OfferRepository *i; // r4@1
  Offer *v5; // r0@2

  *(_QWORD *)&v2 = *a2;
  for ( i = a1; v3 != v2; v2 += 4 )
  {
    v5 = OfferRepository::_getOfferByProductSku(i, v2);
    Offer::setProductInfo(v5, (const ProductInfo *)v2);
  }
}


void __fastcall OfferRepository::getStoreId(OfferRepository *this, int a2, int a3)
{
  GameStore::getStoreId(this, *(_DWORD *)(a2 + 80), a3);
}


int __fastcall OfferRepository::fulfillPriorPurchase(OfferRepository *this, int a2, int *a3)
{
  const void **v3; // r4@0
  int *v4; // r7@1
  int v5; // r8@1
  OfferRepository *v6; // r6@1
  unsigned int v7; // r3@2
  unsigned int *v8; // r5@2
  unsigned int v9; // r0@5
  int v10; // r9@8
  bool v11; // zf@8
  Offer *v12; // r9@11
  unsigned int v13; // r0@13
  int v14; // r0@18
  int v15; // r6@18
  unsigned int *v16; // r1@19
  unsigned int v17; // r0@21
  unsigned int *v18; // r4@25
  unsigned int v19; // r0@27
  void *v20; // r0@32
  unsigned int v21; // r0@36
  unsigned int *v22; // r4@40
  unsigned int v23; // r0@42
  unsigned int *v25; // r2@48
  signed int v26; // r1@50
  int v27; // [sp+8h] [bp-30h]@18
  const void **v28; // [sp+Ch] [bp-2Ch]@11
  int v29; // [sp+10h] [bp-28h]@11
  int v30; // [sp+14h] [bp-24h]@11

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = this;
  if ( v5 )
  {
    v7 = *(_DWORD *)(v5 + 4);
    v8 = (unsigned int *)(v5 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v7 )
          return 0;
        __dmb();
        v9 = __ldrex(v8);
        if ( v9 == v7 )
          break;
        __clrex();
        v7 = v9;
      }
      v11 = __strex(v7 + 1, v8) == 0;
      v7 = v9;
    }
    while ( !v11 );
    __dmb();
    v10 = 0;
    v11 = *v8 == 0;
    if ( *v8 )
      v3 = *(const void ***)a2;
      v11 = *(_DWORD *)a2 == 0;
    if ( v11 )
      goto LABEL_58;
    v12 = OfferRepository::_getOfferByProductSku(v6, v3);
    sub_119C854(&v30, (int *)(*v4 + 16));
    v28 = v3;
    v29 = v5;
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v8);
      while ( __strex(v13 + 1, v8) );
    else
      ++*v8;
    v14 = *v4;
    *v4 = 0;
    v27 = v14;
    v10 = OfferRepository::_tryFulfillPurchaseForOffer((int)v6, v12, (int)&v28, (const void **)&v30, &v27);
    std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v27);
    v15 = v29;
    if ( v29 )
      v16 = (unsigned int *)(v29 + 4);
      if ( &pthread_create )
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        v18 = (unsigned int *)(v15 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        }
        else
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
    v20 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v30 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    if ( v5 )
LABEL_58:
          v21 = __ldrex(v8);
        while ( __strex(v21 - 1, v8) );
        v21 = (*v8)--;
      if ( v21 == 1 )
        v22 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  else
  return v10;
}


Offer *__fastcall OfferRepository::_getAvailableRealmsTrialOffer(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  OfferRepository *v7; // r4@1
  Offer *v8; // r4@4
  void *v9; // r0@4
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  void *v12; // r0@10
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  int v16; // [sp+4h] [bp-2Ch]@10
  int v17; // [sp+8h] [bp-28h]@4

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = (OfferRepository *)a1;
  if ( OfferRepository::isRealmsTrialOfferAvailable(a1, a2, a3, a4) != 1 )
    return 0;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      OfferRepository::_buildRealmsProductSku(&v17, (int)v7, v5, v4, 1);
      v8 = OfferRepository::_getOfferByProductSku(v7, (const void **)&v17);
      v9 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v17 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v9);
      }
      return v8;
    }
  }
  OfferRepository::_buildRealmsProductSku(&v16, (int)v7, v5, v4, 1);
  v8 = OfferRepository::_getOfferByProductSku(v7, (const void **)&v16);
  v12 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  return v8;
}


signed int __fastcall OfferRepository::getUnfulfilledMinecoinPurchase(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int *v4; // r9@1
  int *v5; // r10@1
  signed int result; // r0@1
  unsigned int v7; // r1@5
  unsigned int *v8; // r0@5
  unsigned int v9; // r2@8
  unsigned int v10; // r3@9
  signed int v11; // r0@11
  int v12; // r1@17
  int v13; // r0@19
  unsigned int *v14; // r2@20
  unsigned int v15; // r1@22
  int *v16; // r0@29
  int v17; // r7@29
  unsigned int *v18; // r0@30
  unsigned int v19; // r1@32
  signed int v20; // r11@34
  int v21; // r0@36
  unsigned int *v22; // r2@37
  unsigned int v23; // r1@39
  int v24; // r4@45
  unsigned int *v25; // r1@46
  unsigned int v26; // r0@48
  unsigned int *v27; // r7@52
  unsigned int v28; // r0@54
  const void **v29; // [sp+4h] [bp-3Ch]@2
  int *v30; // [sp+8h] [bp-38h]@2
  int v31; // [sp+Ch] [bp-34h]@4
  int v32; // [sp+10h] [bp-30h]@4
  int v33; // [sp+14h] [bp-2Ch]@19
  int v34; // [sp+18h] [bp-28h]@4

  v2 = a1;
  v3 = a2;
  v4 = (int *)(*(_QWORD *)(a1 + 20) >> 32);
  v5 = (int *)*(_QWORD *)(a1 + 20);
  result = 0;
  if ( v5 != v4 )
  {
    v29 = (const void **)(a2 + 8);
    v30 = (int *)(a2 + 4);
    while ( 1 )
    {
      if ( Offer::getCategory((Offer *)*v5) == 1 )
      {
        Offer::getNextUnfulfilledPurchase((Offer *)&v31, *v5);
        v34 = v32;
        if ( v32 )
        {
          v7 = *(_DWORD *)(v32 + 4);
          v8 = (unsigned int *)(v32 + 4);
          do
          {
            while ( 1 )
            {
              if ( !v7 )
              {
                v34 = 0;
                v11 = 1;
                goto LABEL_17;
              }
              __dmb();
              v9 = __ldrex(v8);
              if ( v9 == v7 )
                break;
              __clrex();
              v7 = v9;
            }
            v10 = __strex(v7 + 1, v8);
            v7 = v9;
          }
          while ( v10 );
          __dmb();
          if ( v34 )
            v11 = 0;
            if ( !*(_DWORD *)(v34 + 4) )
              v11 = 1;
          else
            v11 = 1;
        }
        else
          v11 = 1;
LABEL_17:
        v12 = v31;
        if ( v11 )
          v12 = 0;
        v13 = v32;
        v33 = v12;
          v14 = (unsigned int *)(v32 + 8);
          if ( &pthread_create )
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (**)(void))(*(_DWORD *)v13 + 12))();
          v12 = v33;
        if ( v12 )
          v16 = (int *)Offer::getProductSku((Offer *)*v5);
          EntityInteraction::setInteractText(v30, v16);
          *(_DWORD *)(v3 + 12) = v33;
          v17 = v34;
            v18 = (unsigned int *)(v34 + 8);
            if ( &pthread_create )
              do
                v19 = __ldrex(v18);
              while ( __strex(v19 + 1, v18) );
            else
              ++*v18;
          v21 = *(_DWORD *)(v3 + 16);
          if ( v21 )
            v22 = (unsigned int *)(v21 + 8);
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            if ( v23 == 1 )
              (*(void (**)(void))(*(_DWORD *)v21 + 12))();
          *(_DWORD *)(v3 + 16) = v17;
          v20 = 1;
          *(_BYTE *)v3 = MinecoinTransactionHandler::tryParseTransactionPayload(
                           *(_DWORD *)(v2 + 92),
                           (const void ***)&v33,
                           v29);
          v20 = 0;
        v24 = v34;
        if ( v34 )
          v25 = (unsigned int *)(v34 + 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 == 1 )
            v27 = (unsigned int *)(v24 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
              v28 = (*v27)--;
            if ( v28 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
        if ( v20 )
          break;
      }
      ++v5;
      if ( v5 == v4 )
        return 0;
    }
    result = 1;
  }
  return result;
}


void __fastcall OfferRepository::onQueryPurchasesSuccess(int a1, _QWORD *a2)
{
  int v2; // r4@1
  _QWORD *v3; // r6@1
  Offer **i; // r5@1
  Offer **v5; // r7@1
  const void **v6; // r5@5 OVERLAPPED
  const void **v7; // r6@5 OVERLAPPED
  signed int v8; // r0@6
  int v9; // r2@6
  int j; // r5@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  int v15; // r6@27
  void *v16; // r0@27
  void *v17; // r0@28
  int v18; // [sp+Ch] [bp-4Ch]@11
  int v19; // [sp+10h] [bp-48h]@15
  char v20; // [sp+14h] [bp-44h]@5
  int v21; // [sp+18h] [bp-40h]@5
  int v22; // [sp+1Ch] [bp-3Ch]@5
  int *v23; // [sp+20h] [bp-38h]@5
  int *v24; // [sp+24h] [bp-34h]@5
  int v25; // [sp+28h] [bp-30h]@5
  int v26; // [sp+2Ch] [bp-2Ch]@6
  int v27; // [sp+30h] [bp-28h]@6

  v2 = a1;
  v3 = a2;
  v5 = (Offer **)(*(_QWORD *)(a1 + 20) >> 32);
  for ( i = (Offer **)*(_QWORD *)(a1 + 20); v5 != i; ++i )
  {
    if ( Offer::getProductType(*i) == 2 )
      Offer::clearPurchases(*i);
  }
  v25 = 0;
  v21 = 0;
  v22 = 0;
  v23 = &v21;
  v24 = &v21;
  PurchaseCache::getCachedPurchaseIdSet(*(_DWORD *)(v2 + 96), (int)&v20);
  for ( *(_QWORD *)&v6 = *v3; v7 != v6; v6 += 4 )
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::equal_range(
      (int)&v26,
      (int)&v20,
      v6);
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase_aux(
      v26,
      v27);
    v8 = PurchaseCache::isPurchaseFulfilled(*(_DWORD *)(v2 + 96), v6);
    v9 = 2;
    if ( v8 )
      v9 = 1;
    OfferRepository::_addPurchaseToOffer((OfferRepository *)v2, v6, v9);
  for ( j = (int)v23; (int *)j != &v21; j = sub_119CB48(j) )
    v15 = *(_DWORD *)(v2 + 96);
    sub_119C854(&v19, (int *)(j + 16));
    sub_119C884((void **)&v18, (const char *)&unk_257BC67);
    PurchaseCache::updateRecord(v15, (const void **)&v19, &v18, 0);
    v16 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    }
    v17 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v19 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
  OfferRepository::_notifyLegacyDurables((OfferRepository *)v2, 0);
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)&v20,
    v22);
}


char *__fastcall OfferRepository::getOffers(OfferRepository *this, int a2)
{
  OfferRepository *v2; // r11@1
  char *result; // r0@1
  int *v4; // r7@1
  int *v5; // r9@1
  char *v6; // r5@2
  int v7; // r8@3
  _BYTE *v8; // r10@6
  char *v9; // r6@6
  signed int v10; // r0@6
  unsigned int v11; // r1@6
  unsigned int v12; // r0@8
  unsigned int v13; // r4@8
  signed int v14; // r2@15
  int v15; // r5@15

  v2 = this;
  result = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  v5 = (int *)(*(_QWORD *)(a2 + 20) >> 32);
  v4 = (int *)*(_QWORD *)(a2 + 20);
  if ( v4 != v5 )
  {
    v6 = 0;
    do
    {
      v7 = *v4;
      if ( *v4 )
      {
        if ( v6 == *((char **)v2 + 2) )
        {
          v8 = *(_BYTE **)v2;
          v9 = 0;
          v10 = (signed int)&v6[-*(_DWORD *)v2];
          v11 = v10 >> 2;
          if ( !(v10 >> 2) )
            v11 = 1;
          v12 = v11 + (v10 >> 2);
          v13 = v12;
          if ( 0 != v12 >> 30 )
            v13 = 0x3FFFFFFF;
          if ( v12 < v11 )
          if ( v13 )
          {
            if ( v13 >= 0x40000000 )
              sub_119C874();
            v9 = (char *)operator new(4 * v13);
          }
          v14 = v6 - v8;
          v15 = (int)&v9[v6 - v8];
          *(_DWORD *)&v9[v14] = v7;
          if ( v14 >> 2 )
            _aeabi_memmove4(v9, v8);
          v6 = (char *)(v15 + 4);
          if ( v8 )
            operator delete(v8);
          result = &v9[4 * v13];
          *(_DWORD *)v2 = v9;
          *((_DWORD *)v2 + 1) = v6;
          *((_DWORD *)v2 + 2) = result;
        }
        else
          *(_DWORD *)v6 = v7;
          result = (char *)*((_DWORD *)v2 + 1);
          v6 = result + 4;
          *((_DWORD *)v2 + 1) = result + 4;
      }
      ++v4;
    }
    while ( v5 != v4 );
  }
  return result;
}


void __fastcall OfferRepository::onPurchaseFailed(OfferRepository *a1, const void **a2)
{
  OfferRepository *v2; // r4@1
  Offer *v3; // r5@1
  Offer *v4; // r6@1
  void *v5; // r0@1
  int v6; // r0@2
  int *v7; // r4@2
  int v8; // t1@2
  bool v9; // zf@2
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  int v12; // [sp+8h] [bp-20h]@1

  v2 = a1;
  v3 = OfferRepository::_getOfferByProductSku(a1, a2);
  v4 = (Offer *)*((_DWORD *)v2 + 1);
  GameStore::getStoreId((GameStore *)&v12, *((_DWORD *)v2 + 20), 0);
  MinecraftEventing::fireEventStoreOfferPurchaseResolved(v4, (const char **)&v12, 1, -1, v3);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v8 = *((_DWORD *)v2 + 25);
  v7 = (int *)((char *)v2 + 100);
  v6 = v8;
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)(v6 + 8) == 0;
  if ( !v9 )
    (*(void (**)(void))(v6 + 12))();
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::reset(v7, 0);
}


int __fastcall OfferRepository::purchaseGame(OfferRepository *this)
{
  int v1; // r0@1
  int result; // r0@1
  int v3; // [sp+0h] [bp-18h]@1
  int (*v4)(void); // [sp+8h] [bp-10h]@1

  v1 = *((_DWORD *)this + 20);
  v4 = 0;
  result = GameStore::purchaseGame(v1, (int)&v3);
  if ( v4 )
    result = v4();
  return result;
}


void __fastcall OfferRepository::_createMinecoinOffers(OfferRepository *this)
{
  const void **v1; // r11@1
  char *v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  int v6; // r1@10
  int v7; // t1@10
  void *v8; // r0@10
  const void **v9; // r6@13
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  unsigned int *v14; // r2@22
  signed int v15; // r1@24
  int v16; // r0@38
  int *v17; // r10@38
  const void **v18; // r0@38
  int *v19; // r0@38
  void *v20; // r0@38
  char *v21; // r0@39
  void *v22; // r0@40
  const void **v23; // r4@43
  unsigned int *v24; // r2@44
  signed int v25; // r1@46
  int *v26; // r0@52
  OfferRepository *v27; // [sp+8h] [bp-D8h]@1
  int v28; // [sp+Ch] [bp-D4h]@22
  char *v29; // [sp+10h] [bp-D0h]@18
  int v30; // [sp+14h] [bp-CCh]@14
  char v31; // [sp+68h] [bp-78h]@1
  int v32; // [sp+6Ch] [bp-74h]@1
  int v33; // [sp+70h] [bp-70h]@1
  int v34; // [sp+74h] [bp-6Ch]@1
  int v35; // [sp+78h] [bp-68h]@1
  int v36; // [sp+7Ch] [bp-64h]@1
  int v37; // [sp+80h] [bp-60h]@1
  int v38; // [sp+84h] [bp-5Ch]@1
  int v39; // [sp+88h] [bp-58h]@1
  int v40; // [sp+8Ch] [bp-54h]@1
  int v41; // [sp+90h] [bp-50h]@1
  int v42; // [sp+94h] [bp-4Ch]@1
  int v43; // [sp+98h] [bp-48h]@1
  int v44; // [sp+9Ch] [bp-44h]@1
  int v45; // [sp+A0h] [bp-40h]@1
  int v46; // [sp+A4h] [bp-3Ch]@1
  int v47; // [sp+A8h] [bp-38h]@1
  int v48; // [sp+ACh] [bp-34h]@1
  int v49; // [sp+B0h] [bp-30h]@1
  int v50; // [sp+B4h] [bp-2Ch]@1
  char v51; // [sp+B8h] [bp-28h]@1

  v27 = this;
  sub_119C884((void **)&v31, "minecoin.100");
  sub_119C884((void **)&v32, "minecoin.200");
  sub_119C884((void **)&v33, "minecoin.300");
  sub_119C884((void **)&v34, "minecoin.400");
  sub_119C884((void **)&v35, "minecoin.500");
  sub_119C884((void **)&v36, "minecoin.600");
  sub_119C884((void **)&v37, "minecoin.700");
  sub_119C884((void **)&v38, "minecoin.800");
  sub_119C884((void **)&v39, "minecoin.900");
  sub_119C884((void **)&v40, "minecoin.1000");
  sub_119C884((void **)&v41, "minecoin.1100");
  sub_119C884((void **)&v42, "minecoin.1200");
  sub_119C884((void **)&v43, "minecoin.1300");
  sub_119C884((void **)&v44, "minecoin.1400");
  sub_119C884((void **)&v45, "minecoin.1500");
  sub_119C884((void **)&v46, "minecoin.1600");
  sub_119C884((void **)&v47, "minecoin.1700");
  sub_119C884((void **)&v48, "minecoin.1800");
  sub_119C884((void **)&v49, "minecoin.1900");
  sub_119C884((void **)&v50, "minecoin.2000");
  v1 = (const void **)operator new(0x50u);
  v2 = &v51;
  v3 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>((int)&v31, (int)&v51, (int)v1);
  do
  {
    v7 = *((_DWORD *)v2 - 1);
    v2 -= 4;
    v6 = v7;
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 - 1, v4) );
      }
      else
        v5 = (*v4)--;
      if ( v5 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    }
  }
  while ( v2 != &v31 );
  if ( v1 != (const void **)v3 )
    v9 = v1;
    do
      v16 = OfferRepository::_createOffer(v27);
      v17 = (int *)Offer::setCategory(v16, 1);
      GameStore::getProductSkuPrefix((GameStore *)&v28, *((_DWORD *)v27 + 20));
      v18 = sub_119C8A4((const void **)&v28, v9);
      v29 = (char *)*v18;
      *v18 = &unk_28898CC;
      sub_119C854(&v30, (int *)&v29);
      v19 = Offer::setProductSku(v17, &v30);
      Offer::setProductType((int)v19, 3);
      v20 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v30 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      v21 = v29 - 12;
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v29 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
      v22 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v28 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      ++v9;
    while ( v9 != (const void **)v3 );
    if ( v1 != (const void **)v3 )
      v23 = v1;
      do
        v26 = (int *)((char *)*v23 - 12);
        if ( v26 != &dword_28898C0 )
          v24 = (unsigned int *)((char *)*v23 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
          }
          else
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v26);
        ++v23;
      while ( v23 != (const void **)v3 );
  if ( v1 )
    operator delete(v1);
}


void __fastcall OfferRepository::_restoreDurablesFromCache(OfferRepository *this)
{
  OfferRepository::_restoreDurablesFromCache(this);
}


OfferRepository *__fastcall OfferRepository::~OfferRepository(OfferRepository *this)
{
  OfferRepository *v1; // r4@1
  void (*v2)(void); // r3@1
  PurchaseCache *v3; // r0@3
  PurchaseCache *v4; // r0@4
  int v5; // r0@5
  int v6; // r0@7
  int v7; // r0@9
  int v8; // r0@11
  void *v9; // r0@13
  void *v10; // r0@15
  Offer **v11; // r5@17 OVERLAPPED
  Offer **v12; // r6@17 OVERLAPPED
  Offer *v13; // r0@19

  v1 = this;
  *(_DWORD *)this = &off_26DF970;
  v2 = (void (*)(void))*((_DWORD *)this + 28);
  if ( v2 )
    v2();
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr((_DWORD *)v1 + 25);
  v3 = (PurchaseCache *)*((_DWORD *)v1 + 24);
  if ( v3 )
  {
    v4 = PurchaseCache::~PurchaseCache(v3);
    operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 24) = 0;
  v5 = *((_DWORD *)v1 + 23);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *((_DWORD *)v1 + 23) = 0;
  v6 = *((_DWORD *)v1 + 22);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *((_DWORD *)v1 + 22) = 0;
  v7 = *((_DWORD *)v1 + 21);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  *((_DWORD *)v1 + 21) = 0;
  v8 = *((_DWORD *)v1 + 20);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 20) = 0;
  std::_Rb_tree<RealmsOfferType,std::pair<RealmsOfferType const,OfferRepository::RealmsOfferTypeContainer>,std::_Select1st<std::pair<RealmsOfferType const,OfferRepository::RealmsOfferTypeContainer>>,std::less<RealmsOfferType>,std::allocator<std::pair<RealmsOfferType const,OfferRepository::RealmsOfferTypeContainer>>>::_M_erase(
    (int)v1 + 56,
    *((_DWORD *)v1 + 16));
  v9 = (void *)*((_DWORD *)v1 + 11);
  if ( v9 )
    operator delete(v9);
  v10 = (void *)*((_DWORD *)v1 + 8);
  if ( v10 )
    operator delete(v10);
  *(_QWORD *)&v11 = *(_QWORD *)((char *)v1 + 20);
  if ( v11 != v12 )
    do
    {
      if ( *v11 )
      {
        v13 = Offer::~Offer(*v11);
        operator delete((void *)v13);
      }
      *v11 = 0;
      ++v11;
    }
    while ( v12 != v11 );
    v11 = (Offer **)*((_DWORD *)v1 + 5);
  if ( v11 )
    operator delete(v11);
  return v1;
}


signed int __fastcall OfferRepository::purchaseRealmsOffer(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6; // r4@1
  int v7; // r5@1
  Offer *v8; // r6@2
  void *v9; // r3@3
  int v10; // r2@4
  void *v11; // r1@5
  char *v12; // r3@15
  char *v13; // r6@15
  int v14; // r7@16
  Offer **v15; // r5@25
  __int64 v16; // kr00_8@25
  bool v17; // zf@29
  int v18; // r1@32
  signed int result; // r0@32
  int v20; // [sp+4h] [bp-2Ch]@32
  int v21; // [sp+8h] [bp-28h]@1
  int v22; // [sp+Ch] [bp-24h]@1
  int v23; // [sp+10h] [bp-20h]@1
  int *v24; // [sp+18h] [bp-18h]@14

  v6 = a1;
  v7 = a2;
  v23 = a2;
  v21 = a4;
  v22 = a3;
  if ( a5 == 1 )
  {
    v8 = OfferRepository::_getAvailableRealmsTrialOffer(a1, a2, a3, a4);
    if ( v8 )
      goto LABEL_36;
  }
  v9 = *(void **)(v6 + 64);
  if ( v9 )
    v10 = v6 + 60;
    do
    {
      v11 = v9;
      while ( *((_DWORD *)v11 + 4) < v7 )
      {
        v11 = (void *)*((_DWORD *)v11 + 3);
        if ( !v11 )
        {
          v11 = (void *)v10;
          goto LABEL_12;
        }
      }
      v9 = (void *)*((_DWORD *)v11 + 2);
      v10 = (int)v11;
    }
    while ( v9 );
  else
    v11 = (void *)(v6 + 60);
LABEL_12:
  if ( v11 == (void *)(v6 + 60) || *((_DWORD *)v11 + 4) > v7 )
    v24 = &v23;
    v11 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS2_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
            v6 + 56,
            (int)v11,
            (int)&unk_262D16D,
            &v24);
  v12 = (char *)*((_DWORD *)v11 + 7);
  v13 = (char *)v11 + 24;
  if ( v12 )
    v14 = (int)v11 + 24;
      v13 = v12;
      while ( *((_DWORD *)v13 + 4) < v22 )
        v13 = (char *)*((_DWORD *)v13 + 3);
        if ( !v13 )
          v13 = (char *)v14;
          goto LABEL_22;
      v12 = (char *)*((_DWORD *)v13 + 2);
      v14 = (int)v13;
    while ( v12 );
LABEL_22:
  if ( v13 == (char *)v11 + 24 || v22 < *((_DWORD *)v13 + 4) )
    v24 = &v22;
    v13 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS2_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                    (int)v11 + 20,
                    (int)v13,
                    (int)&unk_262D16D,
                    &v24);
  v16 = *(_QWORD *)std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
                     (int)(v13 + 20),
                     &v21);
  v15 = (Offer **)v16;
  if ( (_DWORD)v16 == HIDWORD(v16) )
    goto LABEL_37;
  v8 = 0;
  while ( !Offer::isAvailableForPurchase(*v15) )
    v17 = HIDWORD(v16) - 4 == (_DWORD)v15;
    ++v15;
    if ( v17 )
      goto LABEL_31;
  v8 = *v15;
LABEL_31:
  if ( v8 )
LABEL_36:
    v18 = *a6;
    *a6 = 0;
    v20 = v18;
    OfferRepository::purchaseOffer(v6, v8, &v20);
    std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v20);
    result = 1;
LABEL_37:
    result = 0;
  return result;
}


void __fastcall OfferRepository::update(OfferRepository *this)
{
  OfferRepository::update(this);
}


void __fastcall OfferRepository::onPurchaseFailed(OfferRepository *a1, const void **a2)
{
  OfferRepository::onPurchaseFailed(a1, a2);
}


signed int __fastcall OfferRepository::purchaseOffer(int a1, Offer *a2, int *a3)
{
  int v3; // r5@1
  Offer *v4; // r8@1
  int *v5; // r6@1
  int v6; // r7@1
  void *v7; // r0@1
  int v8; // r1@2
  int v9; // r7@2
  int v10; // r0@2
  void *v11; // r0@2
  int v12; // r7@3
  unsigned int *v13; // r1@4
  unsigned int v14; // r0@6
  unsigned int *v15; // r4@10
  unsigned int v16; // r0@12
  TransactionHandler *v17; // r1@19
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  Social::User *v23; // [sp+4h] [bp-2Ch]@2
  int v24; // [sp+8h] [bp-28h]@3
  int v25; // [sp+Ch] [bp-24h]@2
  int v26; // [sp+10h] [bp-20h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 4);
  GameStore::getStoreId((GameStore *)&v26, *(_DWORD *)(a1 + 80), 0);
  MinecraftEventing::fireEventStoreOfferPurchaseAttempt(v6, (const char **)&v26, v4);
  v7 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = *v5;
  *v5 = 0;
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::reset((int *)(v3 + 100), v8);
  v9 = *(_DWORD *)(v3 + 80);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v23, *(_DWORD *)(v3 + 8));
  v10 = Social::User::getLiveUser(v23);
  Social::XboxLiveUserManager::getCurrentXUID((Social::XboxLiveUserManager *)&v25, v10);
  GameStore::updateXUID(v9);
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v25 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = v24;
  if ( v24 )
    v13 = (unsigned int *)(v24 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  if ( Offer::getCategory(v4) )
    if ( Offer::getCategory(v4) == 1 )
      v17 = *(TransactionHandler **)(v3 + 92);
      v17 = *(TransactionHandler **)(v3 + 84);
  else
    v17 = *(TransactionHandler **)(v3 + 88);
  Offer::transactPurchase(v4, v17, *(TransactionContext **)(v3 + 100));
  return 1;
}


void __fastcall OfferRepository::_notifyLegacyDurables(OfferRepository *this, int a2)
{
  OfferRepository::_notifyLegacyDurables(this, a2);
}


void __fastcall OfferRepository::onQueryProductsSuccess(OfferRepository *a1, _QWORD *a2)
{
  OfferRepository::onQueryProductsSuccess(a1, a2);
}


int *__fastcall OfferRepository::getOfferByProductSku(int a1, _BYTE **a2)
{
  int **v2; // r5@1
  int **v3; // r6@1
  _BYTE **v4; // r4@1
  int v5; // r7@2
  int *result; // r0@4

  v2 = (int **)(*(_QWORD *)(a1 + 20) >> 32);
  v3 = (int **)*(_QWORD *)(a1 + 20);
  v4 = a2;
  if ( v3 == v2 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( 1 )
    {
      v5 = (int)(v3 + 1);
      if ( Offer::matchesSku(*v3, v4) == 1 )
        break;
      ++v3;
      if ( v2 == (int **)v5 )
        goto LABEL_4;
    }
    result = *v3;
  return result;
}


signed int __fastcall OfferRepository::getUnfulfilledRealmsPurchase(OfferRepository *this, RealmsPurchaseDetails *a2)
{
  OfferRepository *v2; // r6@1
  RealmsPurchaseDetails *v3; // r5@1
  int *v4; // r8@1
  int *v5; // r10@1
  signed int v6; // r11@1
  unsigned int v7; // r1@5
  unsigned int *v8; // r0@5
  unsigned int v9; // r2@8
  unsigned int v10; // r3@9
  signed int v11; // r0@11
  int v12; // r1@17
  int v13; // r0@19
  unsigned int *v14; // r2@20
  unsigned int v15; // r1@22
  int *v16; // r0@29
  bool v17; // zf@29
  signed int v18; // r0@29
  int v19; // r4@31
  unsigned int *v20; // r0@32
  unsigned int v21; // r1@34
  signed int v22; // r4@36
  int v23; // r0@38
  unsigned int *v24; // r2@39
  unsigned int v25; // r1@41
  int v26; // r7@47
  unsigned int *v27; // r1@48
  unsigned int v28; // r0@50
  unsigned int *v29; // r11@54
  unsigned int v30; // r0@56
  const void **v32; // [sp+4h] [bp-44h]@2
  const void **v33; // [sp+8h] [bp-40h]@2
  const void **v34; // [sp+Ch] [bp-3Ch]@2
  int *v35; // [sp+10h] [bp-38h]@2
  int v36; // [sp+14h] [bp-34h]@4
  int v37; // [sp+18h] [bp-30h]@4
  int v38; // [sp+1Ch] [bp-2Ch]@19
  int v39; // [sp+20h] [bp-28h]@4

  v2 = this;
  v3 = a2;
  v4 = (int *)(*(_QWORD *)((char *)this + 20) >> 32);
  v5 = (int *)*(_QWORD *)((char *)this + 20);
  v6 = 0;
  if ( v5 != v4 )
  {
    v34 = (const void **)((char *)a2 + 20);
    v33 = (const void **)((char *)a2 + 16);
    v32 = (const void **)((char *)a2 + 12);
    v35 = (int *)((char *)a2 + 8);
    while ( 1 )
    {
      if ( !Offer::getCategory((Offer *)*v5) )
      {
        Offer::getNextUnfulfilledPurchase((Offer *)&v36, *v5);
        v39 = v37;
        if ( v37 )
        {
          v7 = *(_DWORD *)(v37 + 4);
          v8 = (unsigned int *)(v37 + 4);
          do
          {
            while ( 1 )
            {
              if ( !v7 )
              {
                v39 = 0;
                v11 = 1;
                goto LABEL_17;
              }
              __dmb();
              v9 = __ldrex(v8);
              if ( v9 == v7 )
                break;
              __clrex();
              v7 = v9;
            }
            v10 = __strex(v7 + 1, v8);
            v7 = v9;
          }
          while ( v10 );
          __dmb();
          if ( v39 )
            v11 = 0;
            if ( !*(_DWORD *)(v39 + 4) )
              v11 = 1;
          else
            v11 = 1;
        }
        else
          v11 = 1;
LABEL_17:
        v12 = v36;
        if ( v11 )
          v12 = 0;
        v13 = v37;
        v38 = v12;
          v14 = (unsigned int *)(v37 + 8);
          if ( &pthread_create )
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (**)(void))(*(_DWORD *)v13 + 12))();
          v12 = v38;
        if ( v12 )
          v16 = (int *)Offer::getProductSku((Offer *)*v5);
          EntityInteraction::setInteractText(v35, v16);
          v17 = sub_119CA58(v35, "2player", 0, 7u) == -1;
          v18 = 0;
          if ( v17 )
            v18 = 1;
          *((_DWORD *)v3 + 1) = v18;
          *((_DWORD *)v3 + 6) = v38;
          v19 = v39;
            v20 = (unsigned int *)(v39 + 8);
            if ( &pthread_create )
              do
                v21 = __ldrex(v20);
              while ( __strex(v21 + 1, v20) );
            else
              ++*v20;
          v23 = *((_DWORD *)v3 + 7);
          if ( v23 )
            v24 = (unsigned int *)(v23 + 8);
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
              v25 = (*v24)--;
            if ( v25 == 1 )
              (*(void (**)(void))(*(_DWORD *)v23 + 12))();
          *((_DWORD *)v3 + 7) = v19;
          v22 = 1;
          *(_BYTE *)v3 = RealmsTransactionHandler::tryParseRealmsTransactionPayload(
                           *((_DWORD *)v2 + 22),
                           (const void ***)&v38,
                           v32,
                           v33,
                           v34);
          v22 = 0;
        v26 = v39;
        if ( v39 )
          v27 = (unsigned int *)(v39 + 4);
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 == 1 )
            v29 = (unsigned int *)(v26 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
              v30 = (*v29)--;
            if ( v30 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
        if ( v22 )
          break;
      }
      ++v5;
      if ( v5 == v4 )
        return 0;
    }
    v6 = 1;
  }
  return v6;
}


int __fastcall OfferRepository::getFirstRealmsOfferForTier(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r1@1
  int v4; // r0@1
  void *v5; // r2@2
  int v6; // r4@2
  void *v7; // r3@3
  void *v8; // r1@4
  void *v9; // r2@10
  int v10; // r4@10
  void *v11; // r3@11
  void *v12; // r1@12
  char *v13; // r3@22
  int v14; // r2@23
  char *v15; // r4@24
  char *v16; // r3@34
  int v17; // r2@35
  int v18; // r0@45
  int *v19; // r1@45
  void *v20; // r2@45
  __int64 v21; // kr00_8@51
  int result; // r0@52
  int v23; // [sp+4h] [bp-24h]@34
  int v24; // [sp+8h] [bp-20h]@10
  int v25; // [sp+Ch] [bp-1Ch]@22
  int v26; // [sp+10h] [bp-18h]@2
  int v27; // [sp+14h] [bp-14h]@1
  int *v28; // [sp+1Ch] [bp-Ch]@21

  v2 = a1;
  v27 = a2;
  v3 = GameStore::allowsSubscriptions(*(GameStore **)(a1 + 80));
  v4 = v2 + 56;
  if ( v3 == 1 )
  {
    v26 = 1;
    v5 = *(void **)(v2 + 64);
    v6 = v2 + 60;
    if ( v5 )
    {
      v7 = (void *)v6;
      do
      {
        v8 = v5;
        while ( *((_DWORD *)v8 + 4) < 1 )
        {
          v8 = (void *)*((_DWORD *)v8 + 3);
          if ( !v8 )
          {
            v8 = v7;
            goto LABEL_19;
          }
        }
        v5 = (void *)*((_DWORD *)v8 + 2);
        v7 = v8;
      }
      while ( v5 );
    }
    else
      v8 = (void *)v6;
LABEL_19:
    if ( v8 == (void *)v6 || *((_DWORD *)v8 + 4) >= 2 )
      v28 = &v26;
      v8 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
             v4,
             (int)v8,
             (int)&unk_262D16D,
             &v28);
    v25 = 2;
    v13 = (char *)*((_DWORD *)v8 + 7);
    if ( v13 )
      v14 = (int)v8 + 24;
        v15 = v13;
        while ( *((_DWORD *)v15 + 4) < 2 )
          v15 = (char *)*((_DWORD *)v15 + 3);
          if ( !v15 )
            v15 = (char *)v14;
            goto LABEL_43;
        v13 = (char *)*((_DWORD *)v15 + 2);
        v14 = (int)v15;
      while ( v13 );
      v15 = (char *)v8 + 24;
LABEL_43:
    if ( v15 == (char *)v8 + 24 || *((_DWORD *)v15 + 4) >= 3 )
      v18 = (int)v8 + 20;
      v19 = &v25;
      v20 = &unk_262D16D;
LABEL_50:
      v28 = v19;
      v15 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                      v18,
                      (int)v15,
                      (int)v20,
                      &v28);
      goto LABEL_51;
  }
  else
    v24 = 0;
    v9 = *(void **)(v2 + 64);
    v10 = v2 + 60;
    if ( v9 )
      v11 = (void *)v10;
        v12 = v9;
        while ( *((_DWORD *)v12 + 4) < 0 )
          v12 = (void *)*((_DWORD *)v12 + 3);
          if ( !v12 )
            v12 = v11;
            goto LABEL_31;
        v9 = (void *)*((_DWORD *)v12 + 2);
        v11 = v12;
      while ( v9 );
      v12 = (void *)v10;
LABEL_31:
    if ( v12 == (void *)v10 || *((_DWORD *)v12 + 4) >= 1 )
      v28 = &v24;
      v12 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
              v4,
              (int)v12,
              (int)&unk_262D16D,
              &v28);
    v23 = 0;
    v16 = (char *)*((_DWORD *)v12 + 7);
    if ( v16 )
      v17 = (int)v12 + 24;
        v15 = v16;
        while ( *((_DWORD *)v15 + 4) < 0 )
            v15 = (char *)v17;
            goto LABEL_47;
        v16 = (char *)*((_DWORD *)v15 + 2);
        v17 = (int)v15;
      while ( v16 );
      v15 = (char *)v12 + 24;
LABEL_47:
    if ( v15 == (char *)v12 + 24 || *((_DWORD *)v15 + 4) >= 1 )
      v18 = (int)v12 + 20;
      v19 = &v23;
      goto LABEL_50;
LABEL_51:
  v21 = *(_QWORD *)std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
                     (int)(v15 + 20),
                     &v27);
  if ( HIDWORD(v21) == (_DWORD)v21 )
    result = 0;
    result = *(_DWORD *)v21;
  return result;
}


void __fastcall OfferRepository::_restoreDurablesFromCache(OfferRepository *this)
{
  OfferRepository *v1; // r4@1
  const void **i; // r5@1
  unsigned __int64 v3; // kr08_8@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  unsigned int *v14; // r2@23
  signed int v15; // r1@25
  Offer *v16; // r8@55
  int v17; // r0@55
  unsigned int *v18; // r2@56
  unsigned int v19; // r1@58
  void *v20; // r0@63
  void *v21; // r0@64
  void *v22; // r0@65
  void *v23; // r0@66
  void *v24; // r0@67
  void *v25; // r0@68
  const void **v26; // [sp+14h] [bp-5Ch]@1
  OfferRepository *v27; // [sp+18h] [bp-58h]@1
  int v28; // [sp+20h] [bp-50h]@15
  int v29; // [sp+28h] [bp-48h]@19
  int v30; // [sp+2Ch] [bp-44h]@23
  int v31; // [sp+30h] [bp-40h]@11
  int v32; // [sp+34h] [bp-3Ch]@7
  int v33; // [sp+38h] [bp-38h]@3
  char v34; // [sp+40h] [bp-30h]@55
  int v35; // [sp+44h] [bp-2Ch]@55

  v1 = this;
  v27 = this;
  GameStore::restoreFromCache(*((GameStore **)this + 20), *((PurchaseCache **)this + 24));
  v3 = *(_QWORD *)PurchaseCache::getTransactionRecords(*((PurchaseCache **)v1 + 24));
  v26 = (const void **)(v3 >> 32);
  for ( i = (const void **)v3; i != v26; i += 3 )
  {
    if ( sub_119CA58((int *)i, "skin", 0, 4u) != -1
      || sub_119CA58((int *)i, "resourcepack", 0, 0xCu) != -1
      || sub_119CA58((int *)i, "mashup", 0, 6u) != -1
      || sub_119CA58((int *)i, "fullgame", 0, 8u) != -1 )
    {
      v16 = OfferRepository::_getOfferByProductSku(v27, i);
      Offer::setProductType((int)v16, 2);
      sub_119C854(&v30, (int *)i);
      sub_119C884((void **)&v29, (const char *)&unk_257BC67);
      sub_119C884((void **)&v28, (const char *)&unk_257BC67);
      PurchaseInfo::PurchaseInfo(&v31, &v30, &v29, &v28, 1, 0);
      Offer::addPurchase((int)&v34, (int)v16, &v31, 1);
      v17 = v35;
      if ( v35 )
      {
        v18 = (unsigned int *)(v35 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        }
        else
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (**)(void))(*(_DWORD *)v17 + 12))();
      }
      v20 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v4 = (unsigned int *)(v33 - 4);
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      v21 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v32 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
      v22 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v31 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      v23 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v28 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      v24 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v29 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v24);
      v25 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v30 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v25);
    }
  }
  OfferRepository::_notifyLegacyDurables(v27, 1);
}


int __fastcall OfferRepository::_createOffer(OfferRepository *this)
{
  OfferRepository *v1; // r4@1
  Offer *v2; // r5@1
  __int64 v3; // r0@1
  int v4; // r4@2
  Offer *v5; // r0@4
  Offer *v7; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = (Offer *)operator new(0x1Cu);
  Offer::Offer((int)v2);
  v7 = v2;
  v3 = *((_QWORD *)v1 + 3);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<std::unique_ptr<Offer,std::default_delete<Offer>>,std::allocator<std::unique_ptr<Offer,std::default_delete<Offer>>>>::_M_emplace_back_aux<std::unique_ptr<Offer,std::default_delete<Offer>>>(
      (OfferRepository *)((char *)v1 + 20),
      (int *)&v7);
    v4 = *(_DWORD *)(*((_DWORD *)v1 + 6) - 4);
    if ( v7 )
    {
      v5 = Offer::~Offer(v7);
      operator delete((void *)v5);
    }
  }
  else
    v7 = 0;
    *(_DWORD *)v3 = v2;
    *((_DWORD *)v1 + 6) = v3 + 4;
    v4 = *(_DWORD *)v3;
  return v4;
}


void __fastcall OfferRepository::getStoreId(OfferRepository *this, int a2, int a3)
{
  OfferRepository::getStoreId(this, a2, a3);
}


int __fastcall OfferRepository::checkRealmsPaymentService(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int *); // r3@1
  int result; // r0@3
  int v6; // [sp+0h] [bp-20h]@2
  int (*v7)(void); // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@2

  v2 = *(_DWORD *)(a1 + 88);
  v3 = a2;
  v7 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v6);
    v8 = *(_DWORD *)(v3 + 12);
    v7 = *(int (**)(void))(v3 + 8);
  }
  result = RealmsTransactionHandler::checkRealmsPaymentService(v2, (int)&v6);
  if ( v7 )
    result = v7();
  return result;
}


char *__fastcall OfferRepository::_createRealmsOffers(OfferRepository *this)
{
  OfferRepository *v1; // r10@1
  int v2; // r6@1
  int v3; // r0@1
  int *v4; // r5@1
  int *v5; // r0@2
  void *v6; // r0@2
  int v7; // r0@3
  int *v8; // r5@3
  int *v9; // r0@3
  void *v10; // r0@3
  int v11; // r9@4
  int v12; // r8@4
  void *v13; // r2@4
  int v14; // r0@5
  void *v15; // r1@6
  int *v16; // r0@12
  void *v17; // r0@12
  int v18; // r0@13
  int *v19; // r5@13
  int *v20; // r0@13
  void *v21; // r0@13
  int v22; // r9@14
  int v23; // r8@14
  void *v24; // r2@14
  int v25; // r0@15
  void *v26; // r1@16
  char *v27; // r3@26
  int v28; // r2@27
  char *v29; // r6@28
  char *v30; // r3@38
  int v31; // r2@39
  char *v32; // r6@40
  char *v33; // r7@50 OVERLAPPED
  int v34; // r0@50
  int v35; // r6@50
  char *v36; // r0@50
  char *v37; // r2@50
  int v38; // r11@50
  char *v39; // r7@56 OVERLAPPED
  int v40; // r0@56
  int v41; // r6@56
  char *v42; // r0@56
  char *v43; // r2@56
  int v44; // r11@56
  _BYTE *v45; // r5@58
  signed int v46; // r1@58
  unsigned int v47; // r2@58
  unsigned int v48; // r1@60
  unsigned int v49; // r4@60
  int v50; // r9@66
  _BYTE *v51; // r5@67
  signed int v52; // r1@67
  unsigned int v53; // r2@67
  unsigned int v54; // r1@69
  unsigned int v55; // r4@69
  int v56; // r9@75
  char *v57; // r8@77
  int v58; // r8@79 OVERLAPPED
  int v59; // r0@82
  int *v60; // r5@82
  int *v61; // r0@82
  void *v62; // r0@82
  void *v63; // r2@83
  void *v64; // r0@84
  void *v65; // r1@85
  char *v66; // r3@95
  int v67; // r2@96
  char *v68; // r6@97
  char *v69; // r7@107 OVERLAPPED
  int v70; // r0@107
  int v71; // r6@107
  char *v72; // r0@107
  char *v73; // r2@107
  int v74; // r11@107
  _BYTE *v75; // r5@109
  signed int v76; // r1@109
  unsigned int v77; // r2@109
  unsigned int v78; // r1@111
  unsigned int v79; // r4@111
  int v80; // r9@117
  char *v81; // r8@119
  int v82; // r8@121 OVERLAPPED
  int v83; // r0@124
  int *v84; // r5@124
  int *v85; // r0@124
  void *v86; // r0@124
  void *v87; // r2@125
  void *v88; // r0@126
  void *v89; // r1@127
  char *v90; // r3@137
  int v91; // r2@138
  char *v92; // r7@139
  int v93; // r0@149
  int v94; // r6@149
  char *v95; // r0@149
  char *v96; // r2@149
  int v97; // r11@149
  _BYTE *v98; // r5@151
  unsigned int v99; // r2@151
  unsigned int v100; // r1@153
  unsigned int v101; // r4@153
  char *v102; // r7@159 OVERLAPPED
  char *v103; // r8@161
  int v104; // r8@163 OVERLAPPED
  int v105; // r0@166
  int *v106; // r5@166
  int *v107; // r0@166
  void *v108; // r0@166
  void *v109; // r2@167
  void *v110; // r0@168
  void *v111; // r1@169
  char *v112; // r3@179
  int v113; // r2@180
  char *v114; // r6@181
  char *v115; // r7@191 OVERLAPPED
  int v116; // r0@191
  int v117; // r6@191
  char *v118; // r0@191
  char *v119; // r2@191
  int v120; // r11@191
  _BYTE *v121; // r5@193
  signed int v122; // r1@193
  unsigned int v123; // r2@193
  unsigned int v124; // r1@195
  unsigned int v125; // r4@195
  int v126; // r9@201
  int v127; // r11@203
  int v128; // r8@207
  int v129; // r0@208
  int *v130; // r5@208
  int *v131; // r0@208
  void *v132; // r0@208
  void *v133; // r2@209
  void *v134; // r0@210
  void *v135; // r1@211
  char *v136; // r3@221
  int v137; // r2@222
  char *v138; // r6@223
  char *v139; // r7@233 OVERLAPPED
  int v140; // r0@233
  int v141; // r6@233
  char *v142; // r0@233
  char *v143; // r2@233
  int v144; // r11@233
  _BYTE *v145; // r5@235
  signed int v146; // r1@235
  unsigned int v147; // r2@235
  unsigned int v148; // r1@237
  unsigned int v149; // r4@237
  int v150; // r9@243
  char *v151; // r8@245
  int v152; // r8@247 OVERLAPPED
  int v153; // r0@250
  int *v154; // r5@250
  int *v155; // r0@250
  void *v156; // r0@250
  void *v157; // r2@251
  void *v158; // r0@252
  void *v159; // r1@253
  char *v160; // r3@263
  int v161; // r2@264
  char *v162; // r7@265
  int v163; // r0@275
  int v164; // r6@275
  char *v165; // r0@275
  char *v166; // r2@275
  int v167; // r11@275
  _BYTE *v168; // r5@277
  int v169; // r9@277
  unsigned int v170; // r2@277
  unsigned int v171; // r1@279
  unsigned int v172; // r4@279
  char *v173; // r7@285 OVERLAPPED
  char *v174; // r8@287
  int v175; // r8@289 OVERLAPPED
  int v176; // r0@292
  int *v177; // r5@292
  int *v178; // r0@292
  void *v179; // r0@292
  void *v180; // r2@293
  void *v181; // r0@294
  void *v182; // r1@295
  char *v183; // r3@305
  int v184; // r2@306
  char *v185; // r7@307
  int v186; // r0@317
  int v187; // r5@317
  char *v188; // r0@317
  char *v189; // r2@317
  int v190; // r8@317
  _BYTE *v191; // r4@318
  signed int v192; // r1@318
  unsigned int v193; // r2@318
  unsigned int v194; // r1@320
  unsigned int v195; // r7@320
  char *v196; // r6@325
  int v197; // r11@327
  int v198; // r8@331
  int v199; // r0@332
  int *v200; // r5@332
  int *v201; // r0@332
  void *v202; // r0@332
  void *v203; // r2@333
  void *v204; // r0@334
  void *v205; // r1@335
  char *v206; // r3@345
  int v207; // r2@346
  char *v208; // r7@347
  int v209; // r0@357
  int v210; // r6@357
  char *v211; // r0@357
  char *v212; // r2@357
  int v213; // r11@357
  _BYTE *v214; // r5@359
  int v215; // r9@359
  unsigned int v216; // r2@359
  unsigned int v217; // r1@361
  unsigned int v218; // r4@361
  char *v219; // r7@367 OVERLAPPED
  int v220; // r11@369
  int v221; // r8@373
  int v222; // r0@374
  int *v223; // r5@374
  int *v224; // r0@374
  void *v225; // r0@374
  void *v226; // r2@375
  void *v227; // r0@376
  void *v228; // r1@377
  char *v229; // r3@387
  int v230; // r2@388
  char *v231; // r7@389
  int v232; // r0@399
  char *v233; // r2@399
  char *result; // r0@400
  signed int v235; // r1@401
  unsigned int v236; // r2@401
  unsigned int v237; // r1@403
  int v238; // r8@411
  int v239; // r8@413
  unsigned int *v240; // r2@416
  signed int v241; // r1@418
  unsigned int *v242; // r2@420
  signed int v243; // r1@422
  unsigned int *v244; // r2@424
  signed int v245; // r1@426
  unsigned int *v246; // r2@428
  signed int v247; // r1@430
  unsigned int *v248; // r2@432
  signed int v249; // r1@434
  unsigned int *v250; // r2@436
  signed int v251; // r1@438
  unsigned int *v252; // r2@440
  signed int v253; // r1@442
  unsigned int *v254; // r2@444
  signed int v255; // r1@446
  unsigned int *v256; // r2@448
  signed int v257; // r1@450
  unsigned int *v258; // r2@452
  signed int v259; // r1@454
  unsigned int *v260; // r2@456
  signed int v261; // r1@458
  unsigned int *v262; // r2@460
  signed int v263; // r1@462
  int v264; // [sp+8h] [bp-D8h]@65
  int v265; // [sp+8h] [bp-D8h]@74
  int v266; // [sp+8h] [bp-D8h]@116
  int v267; // [sp+8h] [bp-D8h]@151
  int v268; // [sp+8h] [bp-D8h]@200
  int v269; // [sp+8h] [bp-D8h]@242
  int v270; // [sp+8h] [bp-D8h]@277
  int v271; // [sp+8h] [bp-D8h]@359
  int v272; // [sp+Ch] [bp-D4h]@317
  int v273; // [sp+10h] [bp-D0h]@305
  int v274; // [sp+14h] [bp-CCh]@293
  int v275; // [sp+18h] [bp-C8h]@292
  int v276; // [sp+1Ch] [bp-C4h]@233
  int v277; // [sp+20h] [bp-C0h]@221
  int v278; // [sp+24h] [bp-BCh]@209
  int v279; // [sp+28h] [bp-B8h]@208
  int v280; // [sp+2Ch] [bp-B4h]@149
  int v281; // [sp+30h] [bp-B0h]@137
  int v282; // [sp+34h] [bp-ACh]@125
  int v283; // [sp+38h] [bp-A8h]@124
  int v284; // [sp+3Ch] [bp-A4h]@56
  int v285; // [sp+40h] [bp-A0h]@38
  int v286; // [sp+44h] [bp-9Ch]@14
  int v287; // [sp+48h] [bp-98h]@13
  int v288; // [sp+4Ch] [bp-94h]@12
  int v289; // [sp+50h] [bp-90h]@399
  int v290; // [sp+54h] [bp-8Ch]@387
  int v291; // [sp+58h] [bp-88h]@375
  int v292; // [sp+5Ch] [bp-84h]@374
  int v293; // [sp+60h] [bp-80h]@357
  int v294; // [sp+64h] [bp-7Ch]@345
  int v295; // [sp+68h] [bp-78h]@333
  int v296; // [sp+6Ch] [bp-74h]@332
  int v297; // [sp+70h] [bp-70h]@275
  int v298; // [sp+74h] [bp-6Ch]@263
  int v299; // [sp+78h] [bp-68h]@251
  int v300; // [sp+7Ch] [bp-64h]@250
  int v301; // [sp+80h] [bp-60h]@191
  int v302; // [sp+84h] [bp-5Ch]@179
  int v303; // [sp+88h] [bp-58h]@167
  int v304; // [sp+8Ch] [bp-54h]@166
  int v305; // [sp+90h] [bp-50h]@107
  int v306; // [sp+94h] [bp-4Ch]@95
  int v307; // [sp+98h] [bp-48h]@83
  int v308; // [sp+9Ch] [bp-44h]@82
  int v309; // [sp+A0h] [bp-40h]@50
  int v310; // [sp+A4h] [bp-3Ch]@26
  int v311; // [sp+A8h] [bp-38h]@4
  int v312; // [sp+ACh] [bp-34h]@3
  int v313; // [sp+B0h] [bp-30h]@2
  int *v314; // [sp+B8h] [bp-28h]@25

  v1 = this;
  v2 = GameStore::allowsSubscriptions(*((GameStore **)this + 20));
  v3 = OfferRepository::_createOffer(v1);
  v4 = (int *)Offer::setCategory(v3, 0);
  if ( v2 == 1 )
  {
    OfferRepository::_buildRealmsProductSku(&v313, (int)v1, 2, 1, 1);
    v5 = Offer::setProductSku(v4, &v313);
    Offer::setProductType((int)v5, 5);
    v6 = (void *)(v313 - 12);
    if ( (int *)(v313 - 12) != &dword_28898C0 )
    {
      v240 = (unsigned int *)(v313 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v241 = __ldrex(v240);
        while ( __strex(v241 - 1, v240) );
      }
      else
        v241 = (*v240)--;
      if ( v241 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    v7 = OfferRepository::_createOffer(v1);
    v8 = (int *)Offer::setCategory(v7, 0);
    OfferRepository::_buildRealmsProductSku(&v312, (int)v1, 2, 0, 2);
    v9 = Offer::setProductSku(v8, &v312);
    Offer::setProductType((int)v9, 5);
    v10 = (void *)(v312 - 12);
    if ( (int *)(v312 - 12) != &dword_28898C0 )
      v244 = (unsigned int *)(v312 - 4);
          v245 = __ldrex(v244);
        while ( __strex(v245 - 1, v244) );
        v245 = (*v244)--;
      if ( v245 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    v11 = (int)v1 + 60;
    v311 = 1;
    v12 = (int)v1 + 56;
    v13 = (void *)*((_DWORD *)v1 + 16);
    if ( v13 )
      v14 = (int)v1 + 60;
      do
        v15 = v13;
        while ( *((_DWORD *)v15 + 4) < 1 )
        {
          v15 = (void *)*((_DWORD *)v15 + 3);
          if ( !v15 )
          {
            v15 = (void *)v14;
            goto LABEL_23;
          }
        }
        v13 = (void *)*((_DWORD *)v15 + 2);
        v14 = (int)v15;
      while ( v13 );
    else
      v15 = (char *)v1 + 60;
LABEL_23:
    if ( v15 == (void *)v11 || *((_DWORD *)v15 + 4) >= 2 )
      v314 = &v311;
      v15 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
              (int)v1 + 56,
              (int)v15,
              (int)&unk_262D16D,
              &v314);
    v310 = 2;
    v27 = (char *)*((_DWORD *)v15 + 7);
    if ( v27 )
      v28 = (int)v15 + 24;
        v29 = v27;
        while ( *((_DWORD *)v29 + 4) < 2 )
          v29 = (char *)*((_DWORD *)v29 + 3);
          if ( !v29 )
            v29 = (char *)v28;
            goto LABEL_47;
        v27 = (char *)*((_DWORD *)v29 + 2);
        v28 = (int)v29;
      while ( v27 );
      v29 = (char *)v15 + 24;
LABEL_47:
    if ( v29 == (char *)v15 + 24 || *((_DWORD *)v29 + 4) >= 3 )
      v314 = &v310;
      v29 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                      (int)v15 + 20,
                      (int)v29,
                      (int)&unk_262D16D,
                      &v314);
    v33 = 0;
    v309 = 0;
    v34 = std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
            (int)(v29 + 20),
            &v309);
    v35 = v34;
    v37 = (char *)(*(_QWORD *)(v34 + 4) >> 32);
    v36 = (char *)*(_QWORD *)(v34 + 4);
    v38 = *(_DWORD *)(*((_DWORD *)v1 + 6) - 4);
    if ( v36 == v37 )
      v45 = *(_BYTE **)v35;
      v46 = (signed int)&v36[-*(_DWORD *)v35];
      v47 = v46 >> 2;
      if ( 0 == v46 >> 2 )
        v47 = 1;
      v48 = v47 + (v46 >> 2);
      v49 = v48;
      if ( 0 != v48 >> 30 )
        v49 = 0x3FFFFFFF;
      if ( v48 < v47 )
      if ( v49 )
        v264 = (int)v1 + 60;
        if ( v49 >= 0x40000000 )
          goto LABEL_512;
        v50 = (int)v1 + 56;
        v33 = (char *)operator new(4 * v49);
        v36 = (char *)(*(_QWORD *)v35 >> 32);
        v45 = (_BYTE *)*(_QWORD *)v35;
      v57 = &v33[v36 - v45];
      *(_DWORD *)v57 = v38;
      if ( (v36 - v45) >> 2 )
        _aeabi_memmove4(v33, v45);
      v58 = (int)(v57 + 4);
      if ( v45 )
        operator delete(v45);
      *(_QWORD *)v35 = *(_QWORD *)&v33;
      v12 = v50;
      v11 = v264;
      *(_DWORD *)(v35 + 8) = &v33[4 * v49];
      *(_DWORD *)v36 = v38;
      *(_DWORD *)(v35 + 4) += 4;
    v59 = OfferRepository::_createOffer(v1);
    v60 = (int *)Offer::setCategory(v59, 0);
    OfferRepository::_buildRealmsProductSku(&v308, (int)v1, 2, 0, 3);
    v61 = Offer::setProductSku(v60, &v308);
    Offer::setProductType((int)v61, 5);
    v62 = (void *)(v308 - 12);
    if ( (int *)(v308 - 12) != &dword_28898C0 )
      v248 = (unsigned int *)(v308 - 4);
          v249 = __ldrex(v248);
        while ( __strex(v249 - 1, v248) );
        v249 = (*v248)--;
      if ( v249 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v62);
    v307 = 1;
    v63 = (void *)*((_DWORD *)v1 + 16);
    if ( v63 )
      v64 = (void *)v11;
        v65 = v63;
        while ( *((_DWORD *)v65 + 4) < 1 )
          v65 = (void *)*((_DWORD *)v65 + 3);
          if ( !v65 )
            v65 = v64;
            goto LABEL_92;
        v63 = (void *)*((_DWORD *)v65 + 2);
        v64 = v65;
      while ( v63 );
      v65 = (void *)v11;
LABEL_92:
    if ( v65 == (void *)v11 || *((_DWORD *)v65 + 4) >= 2 )
      v314 = &v307;
      v65 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
              v12,
              (int)v65,
    v306 = 2;
    v66 = (char *)*((_DWORD *)v65 + 7);
    if ( v66 )
      v67 = (int)v65 + 24;
        v68 = v66;
        while ( *((_DWORD *)v68 + 4) < 2 )
          v68 = (char *)*((_DWORD *)v68 + 3);
          if ( !v68 )
            v68 = (char *)v67;
            goto LABEL_104;
        v66 = (char *)*((_DWORD *)v68 + 2);
        v67 = (int)v68;
      while ( v66 );
      v68 = (char *)v65 + 24;
LABEL_104:
    if ( v68 == (char *)v65 + 24 || *((_DWORD *)v68 + 4) >= 3 )
      v314 = &v306;
      v68 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                      (int)v65 + 20,
                      (int)v68,
    v69 = 0;
    v305 = 0;
    v70 = std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
            (int)(v68 + 20),
            &v305);
    v71 = v70;
    v73 = (char *)(*(_QWORD *)(v70 + 4) >> 32);
    v72 = (char *)*(_QWORD *)(v70 + 4);
    v74 = *(_DWORD *)(*((_DWORD *)v1 + 6) - 4);
    if ( v72 == v73 )
      v75 = *(_BYTE **)v71;
      v76 = (signed int)&v72[-*(_DWORD *)v71];
      v77 = v76 >> 2;
      if ( 0 == v76 >> 2 )
        v77 = 1;
      v78 = v77 + (v76 >> 2);
      v79 = v78;
      if ( 0 != v78 >> 30 )
        v79 = 0x3FFFFFFF;
      if ( v78 < v77 )
      if ( v79 )
        v266 = v11;
        if ( v79 >= 0x40000000 )
        v80 = v12;
        v69 = (char *)operator new(4 * v79);
        v72 = (char *)(*(_QWORD *)v71 >> 32);
        v75 = (_BYTE *)*(_QWORD *)v71;
      v103 = &v69[v72 - v75];
      *(_DWORD *)v103 = v74;
      if ( (v72 - v75) >> 2 )
        _aeabi_memmove4(v69, v75);
      v104 = (int)(v103 + 4);
      if ( v75 )
        operator delete(v75);
      *(_QWORD *)v71 = *(_QWORD *)&v69;
      v12 = v80;
      v11 = v266;
      *(_DWORD *)(v71 + 8) = &v69[4 * v79];
      *(_DWORD *)v72 = v74;
      *(_DWORD *)(v71 + 4) += 4;
    v105 = OfferRepository::_createOffer(v1);
    v106 = (int *)Offer::setCategory(v105, 0);
    OfferRepository::_buildRealmsProductSku(&v304, (int)v1, 2, 0, 4);
    v107 = Offer::setProductSku(v106, &v304);
    Offer::setProductType((int)v107, 5);
    v108 = (void *)(v304 - 12);
    if ( (int *)(v304 - 12) != &dword_28898C0 )
      v252 = (unsigned int *)(v304 - 4);
          v253 = __ldrex(v252);
        while ( __strex(v253 - 1, v252) );
        v253 = (*v252)--;
      if ( v253 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v108);
    v303 = 1;
    v109 = (void *)*((_DWORD *)v1 + 16);
    if ( v109 )
      v110 = (void *)v11;
        v111 = v109;
        while ( *((_DWORD *)v111 + 4) < 1 )
          v111 = (void *)*((_DWORD *)v111 + 3);
          if ( !v111 )
            v111 = v110;
            goto LABEL_176;
        v109 = (void *)*((_DWORD *)v111 + 2);
        v110 = v111;
      while ( v109 );
      v111 = (void *)v11;
LABEL_176:
    if ( v111 == (void *)v11 || *((_DWORD *)v111 + 4) >= 2 )
      v314 = &v303;
      v111 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
               v12,
               (int)v111,
               (int)&unk_262D16D,
               &v314);
    v302 = 2;
    v112 = (char *)*((_DWORD *)v111 + 7);
    if ( v112 )
      v113 = (int)v111 + 24;
        v114 = v112;
        while ( *((_DWORD *)v114 + 4) < 2 )
          v114 = (char *)*((_DWORD *)v114 + 3);
          if ( !v114 )
            v114 = (char *)v113;
            goto LABEL_188;
        v112 = (char *)*((_DWORD *)v114 + 2);
        v113 = (int)v114;
      while ( v112 );
      v114 = (char *)v111 + 24;
LABEL_188:
    if ( v114 == (char *)v111 + 24 || *((_DWORD *)v114 + 4) >= 3 )
      v314 = &v302;
      v114 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                       (int)v111 + 20,
                       (int)v114,
                       (int)&unk_262D16D,
                       &v314);
    v115 = 0;
    v301 = 0;
    v116 = std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
             (int)(v114 + 20),
             &v301);
    v117 = v116;
    v119 = (char *)(*(_QWORD *)(v116 + 4) >> 32);
    v118 = (char *)*(_QWORD *)(v116 + 4);
    v120 = *(_DWORD *)(*((_DWORD *)v1 + 6) - 4);
    if ( v118 == v119 )
      v121 = *(_BYTE **)v117;
      v122 = (signed int)&v118[-*(_DWORD *)v117];
      v123 = v122 >> 2;
      if ( 0 == v122 >> 2 )
        v123 = 1;
      v124 = v123 + (v122 >> 2);
      v125 = v124;
      if ( 0 != v124 >> 30 )
        v125 = 0x3FFFFFFF;
      if ( v124 < v123 )
      if ( v125 )
        v268 = v11;
        if ( v125 >= 0x40000000 )
        v126 = v12;
        v115 = (char *)operator new(4 * v125);
        v118 = (char *)(*(_QWORD *)v117 >> 32);
        v121 = (_BYTE *)*(_QWORD *)v117;
      v151 = &v115[v118 - v121];
      *(_DWORD *)v151 = v120;
      if ( (v118 - v121) >> 2 )
        _aeabi_memmove4(v115, v121);
      v152 = (int)(v151 + 4);
      if ( v121 )
        operator delete(v121);
      *(_QWORD *)v117 = *(_QWORD *)&v115;
      v12 = v126;
      v11 = v268;
      *(_DWORD *)(v117 + 8) = &v115[4 * v125];
      *(_DWORD *)v118 = v120;
      *(_DWORD *)(v117 + 4) += 4;
    v153 = OfferRepository::_createOffer(v1);
    v154 = (int *)Offer::setCategory(v153, 0);
    OfferRepository::_buildRealmsProductSku(&v300, (int)v1, 2, 1, 2);
    v155 = Offer::setProductSku(v154, &v300);
    Offer::setProductType((int)v155, 5);
    v156 = (void *)(v300 - 12);
    if ( (int *)(v300 - 12) != &dword_28898C0 )
      v256 = (unsigned int *)(v300 - 4);
          v257 = __ldrex(v256);
        while ( __strex(v257 - 1, v256) );
        v257 = (*v256)--;
      if ( v257 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v156);
    v299 = 1;
    v157 = (void *)*((_DWORD *)v1 + 16);
    if ( v157 )
      v158 = (void *)v11;
        v159 = v157;
        while ( *((_DWORD *)v159 + 4) < 1 )
          v159 = (void *)*((_DWORD *)v159 + 3);
          if ( !v159 )
            v159 = v158;
            goto LABEL_260;
        v157 = (void *)*((_DWORD *)v159 + 2);
        v158 = v159;
      while ( v157 );
      v159 = (void *)v11;
LABEL_260:
    if ( v159 == (void *)v11 || *((_DWORD *)v159 + 4) >= 2 )
      v314 = &v299;
      v159 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
               (int)v159,
    v298 = 2;
    v160 = (char *)*((_DWORD *)v159 + 7);
    if ( v160 )
      v161 = (int)v159 + 24;
        v162 = v160;
        while ( *((_DWORD *)v162 + 4) < 2 )
          v162 = (char *)*((_DWORD *)v162 + 3);
          if ( !v162 )
            v162 = (char *)v161;
            goto LABEL_272;
        v160 = (char *)*((_DWORD *)v162 + 2);
        v161 = (int)v162;
      while ( v160 );
      v162 = (char *)v159 + 24;
LABEL_272:
    if ( v162 == (char *)v159 + 24 || *((_DWORD *)v162 + 4) >= 3 )
      v314 = &v298;
      v162 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                       (int)v159 + 20,
                       (int)v162,
    v297 = 1;
    v163 = std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
             (int)(v162 + 20),
             &v297);
    v164 = v163;
    v166 = (char *)(*(_QWORD *)(v163 + 4) >> 32);
    v165 = (char *)*(_QWORD *)(v163 + 4);
    v167 = *(_DWORD *)(*((_DWORD *)v1 + 6) - 4);
    if ( v165 == v166 )
      v168 = *(_BYTE **)v164;
      v270 = v11;
      v169 = v12;
      v170 = (signed int)&v165[-*(_DWORD *)v164] >> 2;
      if ( !v170 )
        v170 = 1;
      v171 = v170 + ((v165 - v168) >> 2);
      v172 = v170 + ((v165 - v168) >> 2);
      if ( 0 != v171 >> 30 )
        v172 = 0x3FFFFFFF;
      if ( v171 < v170 )
      if ( v172 )
        if ( v172 >= 0x40000000 )
        v173 = (char *)operator new(4 * v172);
        v165 = (char *)(*(_QWORD *)v164 >> 32);
        v168 = (_BYTE *)*(_QWORD *)v164;
        v173 = 0;
      *(_DWORD *)&v173[v165 - v168] = v167;
      v197 = (int)&v173[v165 - v168];
      if ( 0 != (v165 - v168) >> 2 )
        _aeabi_memmove4(v173, v168);
      if ( v168 )
        operator delete(v168);
      v198 = v197 + 4;
      *(_QWORD *)v164 = *(_QWORD *)&v173;
      v12 = v169;
      v11 = v270;
      *(_DWORD *)(v164 + 8) = &v173[4 * v172];
      *(_DWORD *)v165 = v167;
      *(_DWORD *)(v164 + 4) += 4;
    v199 = OfferRepository::_createOffer(v1);
    v200 = (int *)Offer::setCategory(v199, 0);
    OfferRepository::_buildRealmsProductSku(&v296, (int)v1, 2, 1, 3);
    v201 = Offer::setProductSku(v200, &v296);
    Offer::setProductType((int)v201, 5);
    v202 = (void *)(v296 - 12);
    if ( (int *)(v296 - 12) != &dword_28898C0 )
      v260 = (unsigned int *)(v296 - 4);
          v261 = __ldrex(v260);
        while ( __strex(v261 - 1, v260) );
        v261 = (*v260)--;
      if ( v261 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v202);
    v295 = 1;
    v203 = (void *)*((_DWORD *)v1 + 16);
    if ( v203 )
      v204 = (void *)v11;
        v205 = v203;
        while ( *((_DWORD *)v205 + 4) < 1 )
          v205 = (void *)*((_DWORD *)v205 + 3);
          if ( !v205 )
            v205 = v204;
            goto LABEL_342;
        v203 = (void *)*((_DWORD *)v205 + 2);
        v204 = v205;
      while ( v203 );
      v205 = (void *)v11;
LABEL_342:
    if ( v205 == (void *)v11 || *((_DWORD *)v205 + 4) >= 2 )
      v314 = &v295;
      v205 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
               (int)v205,
    v294 = 2;
    v206 = (char *)*((_DWORD *)v205 + 7);
    if ( v206 )
      v207 = (int)v205 + 24;
        v208 = v206;
        while ( *((_DWORD *)v208 + 4) < 2 )
          v208 = (char *)*((_DWORD *)v208 + 3);
          if ( !v208 )
            v208 = (char *)v207;
            goto LABEL_354;
        v206 = (char *)*((_DWORD *)v208 + 2);
        v207 = (int)v208;
      while ( v206 );
      v208 = (char *)v205 + 24;
LABEL_354:
    if ( v208 == (char *)v205 + 24 || *((_DWORD *)v208 + 4) >= 3 )
      v314 = &v294;
      v208 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                       (int)v205 + 20,
                       (int)v208,
    v293 = 1;
    v209 = std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
             (int)(v208 + 20),
             &v293);
    v210 = v209;
    v212 = (char *)(*(_QWORD *)(v209 + 4) >> 32);
    v211 = (char *)*(_QWORD *)(v209 + 4);
    v213 = *(_DWORD *)(*((_DWORD *)v1 + 6) - 4);
    if ( v211 == v212 )
      v214 = *(_BYTE **)v210;
      v271 = v11;
      v215 = v12;
      v216 = (signed int)&v211[-*(_DWORD *)v210] >> 2;
      if ( !v216 )
        v216 = 1;
      v217 = v216 + ((v211 - v214) >> 2);
      v218 = v216 + ((v211 - v214) >> 2);
      if ( 0 != v217 >> 30 )
        v218 = 0x3FFFFFFF;
      if ( v217 < v216 )
      if ( v218 )
        if ( v218 >= 0x40000000 )
        v219 = (char *)operator new(4 * v218);
        v211 = (char *)(*(_QWORD *)v210 >> 32);
        v214 = (_BYTE *)*(_QWORD *)v210;
        v219 = 0;
      *(_DWORD *)&v219[v211 - v214] = v213;
      v220 = (int)&v219[v211 - v214];
      if ( 0 != (v211 - v214) >> 2 )
        _aeabi_memmove4(v219, v214);
      if ( v214 )
        operator delete(v214);
      v221 = v220 + 4;
      *(_QWORD *)v210 = *(_QWORD *)&v219;
      v12 = v215;
      v11 = v271;
      *(_DWORD *)(v210 + 8) = &v219[4 * v218];
      *(_DWORD *)v211 = v213;
      *(_DWORD *)(v210 + 4) += 4;
    v222 = OfferRepository::_createOffer(v1);
    v223 = (int *)Offer::setCategory(v222, 0);
    OfferRepository::_buildRealmsProductSku(&v292, (int)v1, 2, 1, 4);
    v224 = Offer::setProductSku(v223, &v292);
    Offer::setProductType((int)v224, 5);
    v225 = (void *)(v292 - 12);
    if ( (int *)(v292 - 12) != &dword_28898C0 )
      v262 = (unsigned int *)(v292 - 4);
          v263 = __ldrex(v262);
        while ( __strex(v263 - 1, v262) );
        v263 = (*v262)--;
      if ( v263 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v225);
    v291 = 1;
    v226 = (void *)*((_DWORD *)v1 + 16);
    if ( v226 )
      v227 = (void *)v11;
        v228 = v226;
        while ( *((_DWORD *)v228 + 4) < 1 )
          v228 = (void *)*((_DWORD *)v228 + 3);
          if ( !v228 )
            v228 = v227;
            goto LABEL_384;
        v226 = (void *)*((_DWORD *)v228 + 2);
        v227 = v228;
      while ( v226 );
      v228 = (void *)v11;
LABEL_384:
    if ( v228 == (void *)v11 || *((_DWORD *)v228 + 4) >= 2 )
      v314 = &v291;
      v228 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
               (int)v228,
    v290 = 2;
    v229 = (char *)*((_DWORD *)v228 + 7);
    if ( v229 )
      v230 = (int)v228 + 24;
        v231 = v229;
        while ( *((_DWORD *)v231 + 4) < 2 )
          v231 = (char *)*((_DWORD *)v231 + 3);
          if ( !v231 )
            v231 = (char *)v230;
            goto LABEL_396;
        v229 = (char *)*((_DWORD *)v231 + 2);
        v230 = (int)v231;
      while ( v229 );
      v231 = (char *)v228 + 24;
LABEL_396:
    if ( v231 == (char *)v228 + 24 || *((_DWORD *)v231 + 4) >= 3 )
      v314 = &v290;
      v231 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                       (int)v228 + 20,
                       (int)v231,
    v289 = 1;
    v232 = std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
             (int)(v231 + 20),
             &v289);
    v187 = v232;
    v233 = (char *)(*(_QWORD *)(v232 + 4) >> 32);
    v188 = (char *)*(_QWORD *)(v232 + 4);
    v190 = *(_DWORD *)(*((_DWORD *)v1 + 6) - 4);
    if ( v188 != v233 )
LABEL_400:
      *(_DWORD *)v188 = v190;
      result = (char *)(*(_DWORD *)(v187 + 4) + 4);
      *(_DWORD *)(v187 + 4) = result;
      return result;
    v191 = *(_BYTE **)v187;
    v235 = (signed int)&v188[-*(_DWORD *)v187];
    v236 = v235 >> 2;
    if ( !(v235 >> 2) )
      v236 = 1;
    v237 = v236 + (v235 >> 2);
    v195 = v237;
    if ( 0 != v237 >> 30 )
      v195 = 0x3FFFFFFF;
    if ( v237 < v236 )
    if ( !v195 )
      v196 = 0;
      goto LABEL_411;
LABEL_408:
    if ( v195 < 0x40000000 )
      v196 = (char *)operator new(4 * v195);
      v191 = *(_BYTE **)v187;
      v188 = *(char **)(v187 + 4);
LABEL_512:
    sub_119C874();
  }
  OfferRepository::_buildRealmsProductSku(&v288, (int)v1, 0, 1, 1);
  v16 = Offer::setProductSku(v4, &v288);
  Offer::setProductType((int)v16, 3);
  v17 = (void *)(v288 - 12);
  if ( (int *)(v288 - 12) != &dword_28898C0 )
    v242 = (unsigned int *)(v288 - 4);
    if ( &pthread_create )
      __dmb();
        v243 = __ldrex(v242);
      while ( __strex(v243 - 1, v242) );
      v243 = (*v242)--;
    if ( v243 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = OfferRepository::_createOffer(v1);
  v19 = (int *)Offer::setCategory(v18, 0);
  OfferRepository::_buildRealmsProductSku(&v287, (int)v1, 0, 0, 0);
  v20 = Offer::setProductSku(v19, &v287);
  Offer::setProductType((int)v20, 3);
  v21 = (void *)(v287 - 12);
  if ( (int *)(v287 - 12) != &dword_28898C0 )
    v246 = (unsigned int *)(v287 - 4);
        v247 = __ldrex(v246);
      while ( __strex(v247 - 1, v246) );
      v247 = (*v246)--;
    if ( v247 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = (int)v1 + 60;
  v286 = 0;
  v23 = (int)v1 + 56;
  v24 = (void *)*((_DWORD *)v1 + 16);
  if ( v24 )
    v25 = (int)v1 + 60;
    do
      v26 = v24;
      while ( *((_DWORD *)v26 + 4) < 0 )
        v26 = (void *)*((_DWORD *)v26 + 3);
        if ( !v26 )
          v26 = (void *)v25;
          goto LABEL_35;
      v24 = (void *)*((_DWORD *)v26 + 2);
      v25 = (int)v26;
    while ( v24 );
  else
    v26 = (char *)v1 + 60;
LABEL_35:
  if ( v26 == (void *)v22 || *((_DWORD *)v26 + 4) >= 1 )
    v314 = &v286;
    v26 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
            (int)v1 + 56,
            (int)v26,
            (int)&unk_262D16D,
            &v314);
  v285 = 0;
  v30 = (char *)*((_DWORD *)v26 + 7);
  if ( v30 )
    v31 = (int)v26 + 24;
      v32 = v30;
      while ( *((_DWORD *)v32 + 4) < 0 )
        v32 = (char *)*((_DWORD *)v32 + 3);
        if ( !v32 )
          v32 = (char *)v31;
          goto LABEL_53;
      v30 = (char *)*((_DWORD *)v32 + 2);
      v31 = (int)v32;
    while ( v30 );
    v32 = (char *)v26 + 24;
LABEL_53:
  if ( v32 == (char *)v26 + 24 || *((_DWORD *)v32 + 4) >= 1 )
    v314 = &v285;
    v32 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                    (int)v26 + 20,
                    (int)v32,
                    (int)&unk_262D16D,
                    &v314);
  v39 = 0;
  v284 = 0;
  v40 = std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
          (int)(v32 + 20),
          &v284);
  v41 = v40;
  v43 = (char *)(*(_QWORD *)(v40 + 4) >> 32);
  v42 = (char *)*(_QWORD *)(v40 + 4);
  v44 = *(_DWORD *)(*((_DWORD *)v1 + 6) - 4);
  if ( v42 == v43 )
    v51 = *(_BYTE **)v41;
    v52 = (signed int)&v42[-*(_DWORD *)v41];
    v53 = v52 >> 2;
    if ( 0 == v52 >> 2 )
      v53 = 1;
    v54 = v53 + (v52 >> 2);
    v55 = v54;
    if ( 0 != v54 >> 30 )
      v55 = 0x3FFFFFFF;
    if ( v54 < v53 )
    if ( v55 )
      v265 = (int)v1 + 60;
      if ( v55 >= 0x40000000 )
        goto LABEL_512;
      v56 = (int)v1 + 56;
      v39 = (char *)operator new(4 * v55);
      v42 = (char *)(*(_QWORD *)v41 >> 32);
      v51 = (_BYTE *)*(_QWORD *)v41;
    v81 = &v39[v42 - v51];
    *(_DWORD *)v81 = v44;
    if ( (v42 - v51) >> 2 )
      _aeabi_memmove4(v39, v51);
    v82 = (int)(v81 + 4);
    if ( v51 )
      operator delete(v51);
    *(_QWORD *)v41 = *(_QWORD *)&v39;
    v23 = v56;
    v22 = v265;
    *(_DWORD *)(v41 + 8) = &v39[4 * v55];
    *(_DWORD *)v42 = v44;
    *(_DWORD *)(v41 + 4) += 4;
  v83 = OfferRepository::_createOffer(v1);
  v84 = (int *)Offer::setCategory(v83, 0);
  OfferRepository::_buildRealmsProductSku(&v283, (int)v1, 0, 1, 0);
  v85 = Offer::setProductSku(v84, &v283);
  Offer::setProductType((int)v85, 3);
  v86 = (void *)(v283 - 12);
  if ( (int *)(v283 - 12) != &dword_28898C0 )
    v250 = (unsigned int *)(v283 - 4);
        v251 = __ldrex(v250);
      while ( __strex(v251 - 1, v250) );
      v251 = (*v250)--;
    if ( v251 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v86);
  v282 = 0;
  v87 = (void *)*((_DWORD *)v1 + 16);
  if ( v87 )
    v88 = (void *)v22;
      v89 = v87;
      while ( *((_DWORD *)v89 + 4) < 0 )
        v89 = (void *)*((_DWORD *)v89 + 3);
        if ( !v89 )
          v89 = v88;
          goto LABEL_134;
      v87 = (void *)*((_DWORD *)v89 + 2);
      v88 = v89;
    while ( v87 );
    v89 = (void *)v22;
LABEL_134:
  if ( v89 == (void *)v22 || *((_DWORD *)v89 + 4) >= 1 )
    v314 = &v282;
    v89 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
            v23,
            (int)v89,
  v281 = 0;
  v90 = (char *)*((_DWORD *)v89 + 7);
  if ( v90 )
    v91 = (int)v89 + 24;
      v92 = v90;
      while ( *((_DWORD *)v92 + 4) < 0 )
        v92 = (char *)*((_DWORD *)v92 + 3);
        if ( !v92 )
          v92 = (char *)v91;
          goto LABEL_146;
      v90 = (char *)*((_DWORD *)v92 + 2);
      v91 = (int)v92;
    while ( v90 );
    v92 = (char *)v89 + 24;
LABEL_146:
  if ( v92 == (char *)v89 + 24 || *((_DWORD *)v92 + 4) >= 1 )
    v314 = &v281;
    v92 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                    (int)v89 + 20,
                    (int)v92,
  v280 = 1;
  v93 = std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
          (int)(v92 + 20),
          &v280);
  v94 = v93;
  v96 = (char *)(*(_QWORD *)(v93 + 4) >> 32);
  v95 = (char *)*(_QWORD *)(v93 + 4);
  v97 = *(_DWORD *)(*((_DWORD *)v1 + 6) - 4);
  if ( v95 == v96 )
    v98 = *(_BYTE **)v94;
    v267 = v23;
    v99 = (signed int)&v95[-*(_DWORD *)v94] >> 2;
    if ( !v99 )
      v99 = 1;
    v100 = v99 + ((v95 - v98) >> 2);
    v101 = v99 + ((v95 - v98) >> 2);
    if ( 0 != v100 >> 30 )
      v101 = 0x3FFFFFFF;
    if ( v100 < v99 )
    if ( v101 )
      if ( v101 >= 0x40000000 )
      v102 = (char *)operator new(4 * v101);
      v95 = (char *)(*(_QWORD *)v94 >> 32);
      v98 = (_BYTE *)*(_QWORD *)v94;
      v102 = 0;
    *(_DWORD *)&v102[v95 - v98] = v97;
    v127 = (int)&v102[v95 - v98];
    if ( 0 != (v95 - v98) >> 2 )
      _aeabi_memmove4(v102, v98);
    if ( v98 )
      operator delete(v98);
    v128 = v127 + 4;
    *(_QWORD *)v94 = *(_QWORD *)&v102;
    v23 = v267;
    *(_DWORD *)(v94 + 8) = &v102[4 * v101];
    *(_DWORD *)v95 = v97;
    *(_DWORD *)(v94 + 4) += 4;
  v129 = OfferRepository::_createOffer(v1);
  v130 = (int *)Offer::setCategory(v129, 0);
  OfferRepository::_buildRealmsProductSku(&v279, (int)v1, 1, 0, 0);
  v131 = Offer::setProductSku(v130, &v279);
  Offer::setProductType((int)v131, 3);
  v132 = (void *)(v279 - 12);
  if ( (int *)(v279 - 12) != &dword_28898C0 )
    v254 = (unsigned int *)(v279 - 4);
        v255 = __ldrex(v254);
      while ( __strex(v255 - 1, v254) );
      v255 = (*v254)--;
    if ( v255 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v132);
  v278 = 0;
  v133 = (void *)*((_DWORD *)v1 + 16);
  if ( v133 )
    v134 = (void *)v22;
      v135 = v133;
      while ( *((_DWORD *)v135 + 4) < 0 )
        v135 = (void *)*((_DWORD *)v135 + 3);
        if ( !v135 )
          v135 = v134;
          goto LABEL_218;
      v133 = (void *)*((_DWORD *)v135 + 2);
      v134 = v135;
    while ( v133 );
    v135 = (void *)v22;
LABEL_218:
  if ( v135 == (void *)v22 || *((_DWORD *)v135 + 4) >= 1 )
    v314 = &v278;
    v135 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
             v23,
             (int)v135,
             (int)&unk_262D16D,
             &v314);
  v277 = 1;
  v136 = (char *)*((_DWORD *)v135 + 7);
  if ( v136 )
    v137 = (int)v135 + 24;
      v138 = v136;
      while ( *((_DWORD *)v138 + 4) < 1 )
        v138 = (char *)*((_DWORD *)v138 + 3);
        if ( !v138 )
          v138 = (char *)v137;
          goto LABEL_230;
      v136 = (char *)*((_DWORD *)v138 + 2);
      v137 = (int)v138;
    while ( v136 );
    v138 = (char *)v135 + 24;
LABEL_230:
  if ( v138 == (char *)v135 + 24 || *((_DWORD *)v138 + 4) >= 2 )
    v314 = &v277;
    v138 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                     (int)v135 + 20,
                     (int)v138,
                     (int)&unk_262D16D,
                     &v314);
  v139 = 0;
  v276 = 0;
  v140 = std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
           (int)(v138 + 20),
           &v276);
  v141 = v140;
  v143 = (char *)(*(_QWORD *)(v140 + 4) >> 32);
  v142 = (char *)*(_QWORD *)(v140 + 4);
  v144 = *(_DWORD *)(*((_DWORD *)v1 + 6) - 4);
  if ( v142 == v143 )
    v145 = *(_BYTE **)v141;
    v146 = (signed int)&v142[-*(_DWORD *)v141];
    v147 = v146 >> 2;
    if ( 0 == v146 >> 2 )
      v147 = 1;
    v148 = v147 + (v146 >> 2);
    v149 = v148;
    if ( 0 != v148 >> 30 )
      v149 = 0x3FFFFFFF;
    if ( v148 < v147 )
    if ( v149 )
      v269 = v22;
      if ( v149 >= 0x40000000 )
      v150 = v23;
      v139 = (char *)operator new(4 * v149);
      v142 = (char *)(*(_QWORD *)v141 >> 32);
      v145 = (_BYTE *)*(_QWORD *)v141;
    v174 = &v139[v142 - v145];
    *(_DWORD *)v174 = v144;
    if ( (v142 - v145) >> 2 )
      _aeabi_memmove4(v139, v145);
    v175 = (int)(v174 + 4);
    if ( v145 )
      operator delete(v145);
    *(_QWORD *)v141 = *(_QWORD *)&v139;
    v23 = v150;
    v22 = v269;
    *(_DWORD *)(v141 + 8) = &v139[4 * v149];
    *(_DWORD *)v142 = v144;
    *(_DWORD *)(v141 + 4) += 4;
  v176 = OfferRepository::_createOffer(v1);
  v177 = (int *)Offer::setCategory(v176, 0);
  OfferRepository::_buildRealmsProductSku(&v275, (int)v1, 1, 1, 0);
  v178 = Offer::setProductSku(v177, &v275);
  Offer::setProductType((int)v178, 3);
  v179 = (void *)(v275 - 12);
  if ( (int *)(v275 - 12) != &dword_28898C0 )
    v258 = (unsigned int *)(v275 - 4);
        v259 = __ldrex(v258);
      while ( __strex(v259 - 1, v258) );
      v259 = (*v258)--;
    if ( v259 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v179);
  v274 = 0;
  v180 = (void *)*((_DWORD *)v1 + 16);
  if ( v180 )
    v181 = (void *)v22;
      v182 = v180;
      while ( *((_DWORD *)v182 + 4) < 0 )
        v182 = (void *)*((_DWORD *)v182 + 3);
        if ( !v182 )
          v182 = v181;
          goto LABEL_302;
      v180 = (void *)*((_DWORD *)v182 + 2);
      v181 = v182;
    while ( v180 );
    v182 = (void *)v22;
LABEL_302:
  if ( v182 == (void *)v22 || *((_DWORD *)v182 + 4) >= 1 )
    v314 = &v274;
    v182 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
             (int)v182,
  v273 = 1;
  v183 = (char *)*((_DWORD *)v182 + 7);
  if ( v183 )
    v184 = (int)v182 + 24;
      v185 = v183;
      while ( *((_DWORD *)v185 + 4) < 1 )
        v185 = (char *)*((_DWORD *)v185 + 3);
        if ( !v185 )
          v185 = (char *)v184;
          goto LABEL_314;
      v183 = (char *)*((_DWORD *)v185 + 2);
      v184 = (int)v185;
    while ( v183 );
    v185 = (char *)v182 + 24;
LABEL_314:
  if ( v185 == (char *)v182 + 24 || *((_DWORD *)v185 + 4) >= 2 )
    v314 = &v273;
    v185 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                     (int)v182 + 20,
                     (int)v185,
  v272 = 1;
  v186 = std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
           (int)(v185 + 20),
           &v272);
  v187 = v186;
  v189 = (char *)(*(_QWORD *)(v186 + 4) >> 32);
  v188 = (char *)*(_QWORD *)(v186 + 4);
  v190 = *(_DWORD *)(*((_DWORD *)v1 + 6) - 4);
  if ( v188 != v189 )
    goto LABEL_400;
  v191 = *(_BYTE **)v187;
  v192 = (signed int)&v188[-*(_DWORD *)v187];
  v193 = v192 >> 2;
  if ( !(v192 >> 2) )
    v193 = 1;
  v194 = v193 + (v192 >> 2);
  v195 = v194;
  if ( 0 != v194 >> 30 )
    v195 = 0x3FFFFFFF;
  if ( v194 < v193 )
  if ( v195 )
    goto LABEL_408;
  v196 = 0;
LABEL_411:
  *(_DWORD *)&v196[v188 - v191] = v190;
  v238 = (int)&v196[v188 - v191];
  if ( 0 != (v188 - v191) >> 2 )
    _aeabi_memmove4(v196, v191);
  v239 = v238 + 4;
  if ( v191 )
    operator delete(v191);
  *(_DWORD *)v187 = v196;
  result = &v196[4 * v195];
  *(_DWORD *)(v187 + 4) = v239;
  *(_DWORD *)(v187 + 8) = result;
  return result;
}


int __fastcall OfferRepository::getRealmsOffer(int a1, int a2, int a3, int a4)
{
  void *v4; // r2@1
  int v5; // r3@2
  void *v6; // r12@3
  char *v7; // r3@13
  char *v8; // r1@13
  int v9; // r0@14
  __int64 v10; // kr00_8@23
  int result; // r0@24
  int v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@1
  int *v15; // [sp+14h] [bp-Ch]@12

  v14 = a2;
  v12 = a4;
  v13 = a3;
  v4 = *(void **)(a1 + 64);
  if ( v4 )
  {
    v5 = a1 + 60;
    do
    {
      v6 = v4;
      while ( *((_DWORD *)v6 + 4) < a2 )
      {
        v6 = (void *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = (void *)v5;
          goto LABEL_10;
        }
      }
      v4 = (void *)*((_DWORD *)v6 + 2);
      v5 = (int)v6;
    }
    while ( v4 );
  }
  else
    v6 = (void *)(a1 + 60);
LABEL_10:
  if ( v6 == (void *)(a1 + 60) || *((_DWORD *)v6 + 4) > a2 )
    v15 = &v14;
    v6 = j__ZNSt8_Rb_treeI15RealmsOfferTypeSt4pairIKS0_N15OfferRepository24RealmsOfferTypeContainerEESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS2_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_(
           a1 + 56,
           (int)v6,
           (int)&unk_262D16D,
           &v15);
  v7 = (char *)*((_DWORD *)v6 + 7);
  v8 = (char *)v6 + 24;
  if ( v7 )
    v9 = (int)v6 + 24;
      v8 = v7;
      while ( *((_DWORD *)v8 + 4) < v13 )
        v8 = (char *)*((_DWORD *)v8 + 3);
        if ( !v8 )
          v8 = (char *)v9;
          goto LABEL_20;
      v7 = (char *)*((_DWORD *)v8 + 2);
      v9 = (int)v8;
    while ( v7 );
LABEL_20:
  if ( v8 == (char *)v6 + 24 || v13 < *((_DWORD *)v8 + 4) )
    v15 = &v13;
    v8 = (char *)j__ZNSt8_Rb_treeI17RealmsOfferPeriodSt4pairIKS0_St3mapI15RealmsOfferTierSt6vectorIP5OfferSaIS7_EESt4lessIS4_ESaIS1_IKS4_S9_EEEESt10_Select1stISG_ESA_IS0_ESaISG_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS2_EESQ_IJEEEEESt17_Rb_tree_iteratorISG_ESt23_Rb_tree_const_iteratorISG_EDpOT_(
                   (int)v6 + 20,
                   (int)v8,
                   (int)&unk_262D16D,
                   &v15);
  v10 = *(_QWORD *)std::map<RealmsOfferTier,std::vector<Offer *,std::allocator<Offer *>>,std::less<RealmsOfferTier>,std::allocator<std::pair<RealmsOfferTier const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
                     (int)(v8 + 20),
                     &v12);
  if ( HIDWORD(v10) == (_DWORD)v10 )
    result = 0;
    result = *(_DWORD *)v10;
  return result;
}


int __fastcall OfferRepository::_tryFulfillPurchaseForOffer(int a1, Offer *a2, int a3, const void **a4, int *a5)
{
  int v5; // r6@1
  const void **v6; // r10@1
  int v7; // r5@1
  Offer *v8; // r8@1
  int v9; // r0@3
  int v10; // r7@3
  unsigned int *v11; // r1@4
  unsigned int v12; // r0@6
  unsigned int *v13; // r4@10
  unsigned int v14; // r0@12
  int v15; // r4@14
  size_t v16; // r2@18
  int v17; // r1@23
  int v18; // r0@28
  unsigned int *v19; // r0@29
  unsigned int v20; // r2@31
  int v21; // r0@34
  int v22; // r5@34
  unsigned int *v23; // r1@35
  unsigned int v24; // r0@37
  unsigned int *v25; // r6@41
  unsigned int v26; // r0@43
  char *v27; // r0@48
  unsigned int *v29; // r2@50
  signed int v30; // r1@52
  int v31; // [sp+4h] [bp-3Ch]@34
  int v32; // [sp+8h] [bp-38h]@28
  int v33; // [sp+Ch] [bp-34h]@28
  Social::User *v34; // [sp+10h] [bp-30h]@3
  int v35; // [sp+14h] [bp-2Ch]@3
  void *s2; // [sp+18h] [bp-28h]@3

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *(_DWORD *)(*(_DWORD *)(*a5 + 20) - 12) || *(_BYTE *)(*(_DWORD *)a3 + 13) )
  {
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v34, *(_DWORD *)(a1 + 8));
    v9 = Social::User::getLiveUser(v34);
    Social::XboxLiveUserManager::getCurrentXUID((Social::XboxLiveUserManager *)&s2, v9);
    v10 = v35;
    if ( v35 )
    {
      v11 = (unsigned int *)(v35 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    }
    v16 = *((_DWORD *)*v6 - 3);
    if ( v16 == *((_DWORD *)s2 - 3) && !memcmp(*v6, s2, v16) || *(_BYTE *)(*(_DWORD *)v7 + 13) )
      if ( Offer::getCategory(v8) )
        if ( Offer::getCategory(v8) == 1 )
          v17 = *(_DWORD *)(v5 + 92);
          v17 = *(_DWORD *)(v5 + 84);
        v17 = *(_DWORD *)(v5 + 88);
      v32 = *(_DWORD *)v7;
      v18 = *(_DWORD *)(v7 + 4);
      v33 = v18;
      if ( v18 )
        v19 = (unsigned int *)(v18 + 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 + 1, v19) );
          ++*v19;
      v21 = *a5;
      *a5 = 0;
      v31 = v21;
      v15 = Offer::transactFulfillment((int)v8, v17, (int)&v32, (void **)&v31);
      std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v31);
      v22 = v33;
      if ( v33 )
        v23 = (unsigned int *)(v33 + 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 == 1 )
          v25 = (unsigned int *)(v22 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
    else
      v15 = 0;
    v27 = (char *)s2 - 12;
    if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)((char *)s2 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v27);
  }
  else
    v15 = 0;
  return v15;
}


  if ( OfferRepository::isTrial(*(OfferRepository **)(v1 + 296)) )
{
    result = 0;
  }
  else
  {
    v3 = *(_DWORD *)(v1 + 220);
    v4 = v1 + 216;
    for ( i = v1 + 216; v3; v3 = *(_DWORD *)(v3 + 8) )
      i = v3;
    if ( i != v4 && !*(_BYTE *)(i + 16) )
      v4 = i;
    v6 = ClientInstance::getLevel(*(ClientInstance **)(v4 + 20));
    if ( !v6 )
      result = 1;
  return result;
}


void __fastcall OfferRepository::onQueryPurchasesSuccess(int a1, _QWORD *a2)
{
  OfferRepository::onQueryPurchasesSuccess(a1, a2);
}


void __fastcall OfferRepository::onPurchaseCanceled(OfferRepository *a1, const void **a2)
{
  OfferRepository *v2; // r4@1
  Offer *v3; // r5@1
  Offer *v4; // r6@1
  void *v5; // r0@1
  int v6; // r0@2
  int *v7; // r4@2
  int v8; // t1@2
  bool v9; // zf@2
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  int v12; // [sp+8h] [bp-20h]@1

  v2 = a1;
  v3 = OfferRepository::_getOfferByProductSku(a1, a2);
  v4 = (Offer *)*((_DWORD *)v2 + 1);
  GameStore::getStoreId((GameStore *)&v12, *((_DWORD *)v2 + 20), 0);
  MinecraftEventing::fireEventStoreOfferPurchaseResolved(v4, (const char **)&v12, 1, 0, v3);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v8 = *((_DWORD *)v2 + 25);
  v7 = (int *)((char *)v2 + 100);
  v6 = v8;
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)(v6 + 8) == 0;
  if ( !v9 )
    (*(void (**)(void))(v6 + 12))();
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::reset(v7, 0);
}


void __fastcall OfferRepository::onPurchaseCanceled(OfferRepository *a1, const void **a2)
{
  OfferRepository::onPurchaseCanceled(a1, a2);
}


int __fastcall OfferRepository::registerLicenseChangeCallback(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int *); // r3@1
  int result; // r0@3
  int v6; // [sp+0h] [bp-20h]@2
  int (*v7)(void); // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@2

  v2 = *(_DWORD *)(a1 + 80);
  v3 = a2;
  v7 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v6);
    v8 = *(_DWORD *)(v3 + 12);
    v7 = *(int (**)(void))(v3 + 8);
  }
  result = GameStore::registerLicenseChangeCallback(v2, (int)&v6);
  if ( v7 )
    result = v7();
  return result;
}


void __fastcall OfferRepository::_notifyLegacyDurables(OfferRepository *this, int a2)
{
  int *v2; // r4@1
  int *v3; // r6@1
  int v4; // r4@4
  int v5; // r9@4
  int v6; // r11@5
  int *v7; // r0@6
  unsigned int *v8; // r10@6
  int *v9; // r1@9
  unsigned int v10; // r2@10
  bool v11; // zf@11
  unsigned int v12; // r0@19
  unsigned int *v13; // r7@23
  unsigned int v14; // r0@25
  int v15; // r7@31
  int v16; // r0@32
  unsigned int *v17; // r2@33
  unsigned int v18; // r1@35
  int *v19; // r4@46
  int v20; // r4@47
  void *v21; // r0@47
  void *v22; // r0@48
  int v23; // r6@49
  unsigned int *v24; // r2@51
  signed int v25; // r1@53
  unsigned int *v26; // r2@55
  signed int v27; // r1@57
  unsigned int *v28; // r2@59
  signed int v29; // r1@61
  int v30; // r1@75
  void *v31; // r0@75
  int v32; // r1@76
  void *v33; // r0@76
  int *v34; // r0@77
  unsigned int *v35; // r2@83
  signed int v36; // r1@85
  unsigned int *v37; // r2@87
  signed int v38; // r1@89
  int v39; // [sp+4h] [bp-54h]@2
  OfferRepository *v40; // [sp+8h] [bp-50h]@2
  int *v41; // [sp+Ch] [bp-4Ch]@1
  int v42; // [sp+10h] [bp-48h]@47
  int v43; // [sp+14h] [bp-44h]@47
  int v44; // [sp+18h] [bp-40h]@4
  int v45; // [sp+1Ch] [bp-3Ch]@4
  int *v46; // [sp+24h] [bp-34h]@1
  int *v47; // [sp+28h] [bp-30h]@1
  int *v48; // [sp+2Ch] [bp-2Ch]@1

  v46 = 0;
  v47 = 0;
  v48 = 0;
  v2 = (int *)(*(_QWORD *)((char *)this + 20) >> 32);
  v3 = (int *)*(_QWORD *)((char *)this + 20);
  v41 = v2;
  if ( v3 != v2 )
  {
    v39 = a2;
    v40 = this;
    do
    {
      if ( Offer::getProductType((Offer *)*v3) == 2 )
      {
        Offer::getAllPurchases((Offer *)&v44, *v3);
        v5 = v45;
        v4 = v44;
        if ( v44 != v45 )
        {
          do
          {
            v6 = *(_DWORD *)(v4 + 4);
            if ( v6 )
            {
              v7 = *(int **)(v6 + 4);
              v8 = (unsigned int *)(v6 + 4);
              while ( v7 )
              {
                __dmb();
                v9 = (int *)__ldrex(v8);
                if ( v9 == v7 )
                {
                  v10 = __strex((unsigned int)v7 + 1, v8);
                  v7 = v9;
                  if ( !v10 )
                  {
                    __dmb();
                    v11 = *v8 == 0;
                    if ( *v8 )
                    {
                      v9 = *(int **)v4;
                      v11 = *(_DWORD *)v4 == 0;
                    }
                    if ( !v11 )
                      if ( v47 == v48 )
                      {
                        std::vector<PurchaseInfo,std::allocator<PurchaseInfo>>::_M_emplace_back_aux<PurchaseInfo const&>(
                          (unsigned __int64 *)&v46,
                          v9);
                      }
                      else
                        PurchaseInfo::PurchaseInfo(v47, v9);
                        v47 += 4;
                    if ( &pthread_create )
                      __dmb();
                      do
                        v12 = __ldrex(v8);
                      while ( __strex(v12 - 1, v8) );
                    else
                      v12 = (*v8)--;
                    if ( v12 == 1 )
                      v13 = (unsigned int *)(v6 + 8);
                      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
                      if ( &pthread_create )
                        __dmb();
                        do
                          v14 = __ldrex(v13);
                        while ( __strex(v14 - 1, v13) );
                        v14 = (*v13)--;
                      if ( v14 == 1 )
                        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
                    break;
                  }
                }
                else
                  __clrex();
              }
            }
            v4 += 8;
          }
          while ( v4 != v5 );
          v4 = v45;
          v15 = v44;
          if ( v44 != v45 )
            do
              v16 = *(_DWORD *)(v15 + 4);
              if ( v16 )
                v17 = (unsigned int *)(v16 + 8);
                if ( &pthread_create )
                  __dmb();
                  do
                    v18 = __ldrex(v17);
                  while ( __strex(v18 - 1, v17) );
                  v18 = (*v17)--;
                if ( v18 == 1 )
                  (*(void (**)(void))(*(_DWORD *)v16 + 12))();
              v15 += 8;
            while ( v15 != v4 );
            v4 = v44;
        }
        if ( v4 )
          operator delete((void *)v4);
        v2 = v41;
      }
      ++v3;
    }
    while ( v3 != v2 );
    v19 = v47;
    if ( v46 != v47 )
      v20 = *((_DWORD *)v40 + 3);
      GameStore::getStoreId((GameStore *)&v43, *((_DWORD *)v40 + 20), 0);
      GameStore::getAppReceipt((GameStore *)&v42, *((_DWORD *)v40 + 20));
      EntitlementManager::processLegacyOfferOwnership(v20, (int)&v43, v39, (unsigned __int64 *)&v46);
      v21 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v42 - 4);
        if ( &pthread_create )
          __dmb();
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        else
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
      v22 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v43 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      v19 = v47;
      v23 = (int)v46;
      if ( v46 != v47 )
        do
          v30 = *(_DWORD *)(v23 + 8);
          v31 = (void *)(v30 - 12);
          if ( (int *)(v30 - 12) != &dword_28898C0 )
            v24 = (unsigned int *)(v30 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
            else
              v25 = (*v24)--;
            if ( v25 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v31);
          v32 = *(_DWORD *)(v23 + 4);
          v33 = (void *)(v32 - 12);
          if ( (int *)(v32 - 12) != &dword_28898C0 )
            v26 = (unsigned int *)(v32 - 4);
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v33);
          v34 = (int *)(*(_DWORD *)v23 - 12);
          if ( v34 != &dword_28898C0 )
            v28 = (unsigned int *)(*(_DWORD *)v23 - 4);
                v29 = __ldrex(v28);
              while ( __strex(v29 - 1, v28) );
              v29 = (*v28)--;
            if ( v29 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v34);
          v23 += 16;
        while ( (int *)v23 != v19 );
        v19 = v46;
    if ( v19 )
      operator delete(v19);
  }
}


void __fastcall OfferRepository::onPurchaseSuccessful(OfferRepository *a1, const void **a2)
{
  const void **v2; // r8@1
  OfferRepository *v3; // r5@1
  Offer *v4; // r6@1
  Offer *v5; // r4@1
  void *v6; // r0@1
  void *v7; // r0@6
  int v8; // r7@8
  void (__fastcall *v9)(int, int, int *, int *); // r10@8
  int v10; // r9@8
  int *v11; // r0@9
  void *v12; // r0@11
  void *v13; // r0@12
  void *v14; // r0@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  int v23; // [sp+10h] [bp-38h]@9
  int v24; // [sp+18h] [bp-30h]@8
  int v25; // [sp+1Ch] [bp-2Ch]@3
  int v26; // [sp+20h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  v4 = OfferRepository::_getOfferByProductSku(a1, a2);
  v5 = (Offer *)*((_DWORD *)v3 + 1);
  GameStore::getStoreId((GameStore *)&v26, *((_DWORD *)v3 + 20), 0);
  MinecraftEventing::fireEventStoreOfferPurchaseResolved(v5, (const char **)&v26, 1, 1, v4);
  v6 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  if ( ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 4)) )
    ClientInstance::getLocalPlayer(*((ClientInstance **)v3 + 4));
    mce::UUID::asString((mce::UUID *)&v25);
  else
    sub_119C854(&v25, (int *)&Util::EMPTY_STRING);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v7 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v7 = &ServiceLocator<AppPlatform>::mDefaultService;
  v8 = *(_DWORD *)v7;
  v9 = *(void (__fastcall **)(int, int, int *, int *))(**(_DWORD **)v7 + 544);
  v10 = Offer::getProductSku(v4);
  sub_119C884((void **)&v24, (const char *)&unk_257BC67);
  if ( *((_DWORD *)*Offer::getUnformattedPrice(v4) - 3) )
    v11 = (int *)Offer::getUnformattedPrice(v4);
    sub_119C854(&v23, v11);
    sub_119C884((void **)&v23, "0");
  MinecraftEventing::getPlayerSessionId(*((MinecraftEventing **)v3 + 1));
  Offer::getCurrencyCode(v4);
  v9(v8, v10, &v24, &v23);
  v12 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  OfferRepository::_addPurchaseToOffer(v3, v2, 0);
  v14 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v25 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
}


int __fastcall OfferRepository::restorePurchases(int a1, int a2, __int64 a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int result; // r0@3
  int v6; // [sp+0h] [bp-20h]@2
  int (*v7)(void); // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@2

  v3 = *(_DWORD *)(a1 + 80);
  v4 = a2;
  v7 = 0;
  HIDWORD(a3) = *(_DWORD *)(a2 + 8);
  if ( HIDWORD(a3) )
  {
    ((void (__fastcall *)(_DWORD))HIDWORD(a3))(&v6);
    v8 = *(_DWORD *)(v4 + 12);
    v7 = *(int (**)(void))(v4 + 8);
  }
  result = GameStore::restorePurchases(v3, (int)&v6, a3);
  if ( v7 )
    result = v7();
  return result;
}


char *__fastcall OfferRepository::getOffersByCategory(OfferRepository *this, int a2)
{
  OfferRepository *v2; // r10@1
  char *result; // r0@1
  Offer **i; // r4@1
  Offer **v5; // r11@1
  int v6; // r0@3
  int v7; // r6@3
  __int64 v8; // r0@3
  Offer *v9; // r8@3
  void *v10; // r5@5
  char *v11; // r7@5 OVERLAPPED
  signed int v12; // r1@5
  unsigned int v13; // r2@5
  unsigned int v14; // r1@7
  unsigned int v15; // r9@7
  char *v16; // r8@14
  int v17; // r8@16 OVERLAPPED
  int v18; // [sp+0h] [bp-28h]@3

  v2 = this;
  *((_DWORD *)this + 1) = 0;
  result = (char *)this + 4;
  *((_DWORD *)result + 1) = 0;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = 0;
  *((_DWORD *)result + 4) = 0;
  *((_DWORD *)result + 2) = result;
  *((_DWORD *)result + 3) = result;
  v5 = (Offer **)(*(_QWORD *)(a2 + 20) >> 32);
  for ( i = (Offer **)*(_QWORD *)(a2 + 20); v5 != i; ++i )
  {
    result = (char *)Offer::getCategory(*i);
    if ( result != (char *)4 )
    {
      v18 = Offer::getCategory(*i);
      v6 = std::map<OfferCategory,std::vector<Offer *,std::allocator<Offer *>>,std::less<OfferCategory>,std::allocator<std::pair<OfferCategory const,std::vector<Offer *,std::allocator<Offer *>>>>>::operator[](
             (int)v2,
             &v18);
      v7 = v6;
      v8 = *(_QWORD *)(v6 + 4);
      v9 = *i;
      if ( (_DWORD)v8 == HIDWORD(v8) )
      {
        v10 = *(void **)v7;
        v11 = 0;
        v12 = v8 - *(_DWORD *)v7;
        v13 = v12 >> 2;
        if ( !(v12 >> 2) )
          v13 = 1;
        v14 = v13 + (v12 >> 2);
        v15 = v14;
        if ( 0 != v14 >> 30 )
          v15 = 0x3FFFFFFF;
        if ( v14 < v13 )
        if ( v15 )
        {
          if ( v15 >= 0x40000000 )
            sub_119C874();
          v11 = (char *)operator new(4 * v15);
          LODWORD(v8) = *(_QWORD *)v7 >> 32;
          v10 = (void *)*(_QWORD *)v7;
        }
        *(_DWORD *)&v11[v8 - (_DWORD)v10] = v9;
        v16 = &v11[v8 - (_DWORD)v10];
        if ( ((signed int)v8 - (signed int)v10) >> 2 )
          _aeabi_memmove4(v11, v10);
        v17 = (int)(v16 + 4);
        if ( v10 )
          operator delete(v10);
        result = &v11[4 * v15];
        *(_QWORD *)v7 = *(_QWORD *)&v11;
        *(_DWORD *)(v7 + 8) = result;
      }
      else
        *(_DWORD *)v8 = v9;
        result = (char *)(*(_DWORD *)(v7 + 4) + 4);
        *(_DWORD *)(v7 + 4) = result;
    }
  }
  return result;
}


signed int __fastcall OfferRepository::isRealmsTrialOfferAvailable(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r0@1
  bool v9; // zf@1
  bool v10; // zf@5
  Offer *v11; // r4@9
  void *v12; // r0@9
  int v13; // r0@13
  bool v14; // zf@14
  Offer *v15; // r4@18
  void *v16; // r0@18
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  unsigned int *v20; // r2@30
  signed int v21; // r1@32
  int v22; // [sp+4h] [bp-2Ch]@18
  int v23; // [sp+8h] [bp-28h]@9

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = GameStore::allowsSubscriptions(*(GameStore **)(a1 + 80));
  v9 = v5 == 1;
  if ( v5 == 1 )
    v9 = v6 == 2;
  if ( !v9 )
    goto LABEL_40;
  v10 = v7 == 1;
  if ( v7 == 1 )
    v10 = v8 == 1;
  if ( v10 )
  {
    OfferRepository::_buildRealmsProductSku(&v23, v4, 2, 1, 1);
    v11 = OfferRepository::_getOfferByProductSku((OfferRepository *)v4, (const void **)&v23);
    v12 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
    {
      v18 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    }
    if ( Offer::isAvailableForPurchase(v11) == 1 && !Offer::hasTransactionHistory(v11) )
      return 1;
  }
  else
LABEL_40:
    v13 = GameStore::allowsSubscriptions(*(GameStore **)(v4 + 80));
    if ( v5 == 1 )
      v14 = (v6 | v7) == 0;
      if ( !(v6 | v7) )
        v14 = (v13 ^ 1) == 1;
      if ( v14 )
        OfferRepository::_buildRealmsProductSku(&v22, v4, v6, 1, 1);
        v15 = OfferRepository::_getOfferByProductSku((OfferRepository *)v4, (const void **)&v22);
        v16 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
        {
          v20 = (unsigned int *)(v22 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v16);
        }
        if ( Offer::isAvailableForPurchase(v15) )
          return 1;
  return 0;
}


void __fastcall OfferRepository::_buildRealmsProductSku(int *a1, int a2, int a3, int a4, int a5)
{
  OfferRepository::_buildRealmsProductSku(a1, a2, a3, a4, a5);
}


char *__fastcall OfferRepository::_addPurchaseToOffer(OfferRepository *a1, const void **a2, int a3)
{
  int v3; // r4@1
  int *v4; // r7@1
  OfferRepository *v5; // r6@1
  Offer *v6; // r9@1
  int v7; // r5@2
  int v8; // r8@2
  unsigned int v9; // r1@3
  unsigned int *v10; // r0@3
  unsigned int v11; // r2@6
  unsigned int v12; // r3@7
  signed int v13; // r1@8
  int v14; // r8@11
  char *result; // r0@13
  int v16; // r10@13
  unsigned int v17; // r1@14
  unsigned int *v18; // r0@14
  unsigned int v19; // r2@17
  unsigned int v20; // r3@18
  signed int v21; // r1@19
  int v22; // r0@23
  unsigned int *v23; // r2@26
  unsigned int v24; // r1@28
  int v25; // r5@32
  unsigned int *v26; // r2@35
  unsigned int v27; // r1@37
  int v28; // r0@43
  int v29; // r1@47
  unsigned int *v30; // r0@52
  unsigned int v31; // r2@54
  int v32; // r0@57
  int v33; // r5@57
  unsigned int *v34; // r1@58
  unsigned int *v35; // r6@64
  unsigned int *v36; // r1@72
  unsigned int *v37; // r5@78
  int (__fastcall *v38)(int); // r1@84
  int v39; // r0@84
  bool v40; // zf@89
  int v41; // r1@93
  unsigned int *v42; // r0@94
  unsigned int v43; // r2@96
  int v44; // r4@103
  unsigned int *v45; // r1@104
  unsigned int *v46; // r5@110
  unsigned int *v47; // r1@118
  unsigned int *v48; // r4@124
  int v49; // [sp+0h] [bp-48h]@103
  int v50; // [sp+4h] [bp-44h]@93
  int v51; // [sp+8h] [bp-40h]@93
  int v52; // [sp+Ch] [bp-3Ch]@13
  int v53; // [sp+10h] [bp-38h]@13
  int v54; // [sp+14h] [bp-34h]@57
  int v55; // [sp+18h] [bp-30h]@51
  int v56; // [sp+1Ch] [bp-2Ch]@51
  int v57; // [sp+20h] [bp-28h]@2
  int v58; // [sp+24h] [bp-24h]@2

  v3 = a3;
  v4 = (int *)a2;
  v5 = a1;
  v6 = OfferRepository::_getOfferByProductSku(a1, a2);
  if ( *((_DWORD *)v5 + 25) )
  {
    v7 = 0;
    Offer::addPurchase((int)&v57, (int)v6, v4, 0);
    v8 = v58;
    if ( v58 )
    {
      v9 = *(_DWORD *)(v58 + 4);
      v10 = (unsigned int *)(v58 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v9 )
          {
            v13 = 1;
            v8 = 0;
            goto LABEL_23;
          }
          __dmb();
          v11 = __ldrex(v10);
          if ( v11 == v9 )
            break;
          __clrex();
          v9 = v11;
        }
        v12 = __strex(v9 + 1, v10);
        v9 = v11;
      }
      while ( v12 );
      __dmb();
      v13 = 0;
      if ( !*v10 )
        v13 = 1;
LABEL_23:
      v22 = v58;
      v7 = v57;
      if ( v13 )
        v7 = 0;
      if ( v58 )
        v23 = (unsigned int *)(v58 + 8);
        if ( &pthread_create )
          do
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
        else
          v24 = (*v23)--;
        if ( v24 == 1 )
          (*(void (**)(void))(*(_DWORD *)v22 + 12))();
    }
    else
      v8 = 0;
    PurchaseCache::createRecord(*((_QWORD *)v5 + 12), (const void **)v4, (int *)((*((_QWORD *)v5 + 12) >> 32) + 20));
    v28 = *((_DWORD *)v5 + 25);
    if ( *(_DWORD *)(v28 + 8) )
      (*(void (**)(void))(v28 + 12))();
    if ( Offer::getCategory(v6) )
      if ( Offer::getCategory(v6) == 1 )
        v29 = *((_DWORD *)v5 + 23);
      else
        v29 = *((_DWORD *)v5 + 21);
      v29 = *((_DWORD *)v5 + 22);
    v55 = v7;
    v56 = v8;
    if ( v8 )
      v30 = (unsigned int *)(v8 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 + 1, v30) );
        ++*v30;
    v32 = *((_DWORD *)v5 + 25);
    *((_DWORD *)v5 + 25) = 0;
    v54 = v32;
    Offer::transactFulfillment((int)v6, v29, (int)&v55, (void **)&v54);
    result = (char *)std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v54);
    v33 = v56;
    if ( v56 )
      v34 = (unsigned int *)(v56 + 4);
          result = (char *)__ldrex(v34);
        while ( __strex((unsigned int)(result - 1), v34) );
        result = (char *)(*v34)--;
      if ( result == (char *)1 )
        v35 = (unsigned int *)(v33 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
            result = (char *)__ldrex(v35);
          while ( __strex((unsigned int)(result - 1), v35) );
          result = (char *)(*v35)--;
        if ( result == (char *)1 )
          result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
      v36 = (unsigned int *)(v8 + 4);
          result = (char *)__ldrex(v36);
        while ( __strex((unsigned int)(result - 1), v36) );
        result = (char *)(*v36)--;
        v37 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
            result = (char *)__ldrex(v37);
          while ( __strex((unsigned int)(result - 1), v37) );
          result = (char *)(*v37)--;
          v38 = *(int (__fastcall **)(int))(*(_DWORD *)v8 + 12);
          v39 = v8;
          return (char *)v38(v39);
  }
  else
    v14 = Offer::getProductType(v6);
    if ( v14 == 3 )
      v3 = 0;
    result = (char *)Offer::addPurchase((int)&v52, (int)v6, v4, v3);
    v16 = v53;
    if ( v53 )
      v17 = *(_DWORD *)(v53 + 4);
      v18 = (unsigned int *)(v53 + 4);
          if ( !v17 )
            v21 = 1;
            v16 = 0;
            goto LABEL_32;
          v19 = __ldrex(v18);
          if ( v19 == v17 )
          v17 = v19;
        v20 = __strex(v17 + 1, v18);
        v17 = v19;
      while ( v20 );
      v21 = 0;
      if ( !*v18 )
        v21 = 1;
LABEL_32:
      result = (char *)v53;
      v25 = v52;
      if ( v21 )
        v25 = 0;
      if ( v53 )
        v26 = (unsigned int *)(v53 + 8);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 == 1 )
          result = (char *)(*(int (**)(void))(*(_DWORD *)result + 12))();
      v25 = 0;
      v16 = 0;
    if ( v3 != 1 )
      v40 = v14 == 5;
      if ( v14 != 5 )
        v40 = v14 == 3;
      if ( v40 )
        if ( Offer::getCategory(v6) )
          result = (char *)Offer::getCategory(v6);
          if ( result == (char *)1 )
            result = OfferRepository::_queuePurchaseForFulfillment(1, (unsigned __int64 *)((char *)v5 + 44), (int)v6);
          result = OfferRepository::_queuePurchaseForFulfillment(0, (unsigned __int64 *)v5 + 4, (int)v6);
      else if ( v14 == 2 )
        v41 = *((_DWORD *)v5 + 21);
        v50 = v25;
        v51 = v16;
        if ( v16 )
          v42 = (unsigned int *)(v16 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v43 = __ldrex(v42);
            while ( __strex(v43 + 1, v42) );
          else
            ++*v42;
        v49 = 0;
        Offer::transactFulfillment((int)v6, v41, (int)&v50, (void **)&v49);
        result = (char *)std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v49);
        v44 = v51;
        if ( v51 )
          v45 = (unsigned int *)(v51 + 4);
              result = (char *)__ldrex(v45);
            while ( __strex((unsigned int)(result - 1), v45) );
            result = (char *)(*v45)--;
            v46 = (unsigned int *)(v44 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = (char *)__ldrex(v46);
              while ( __strex((unsigned int)(result - 1), v46) );
            }
            else
              result = (char *)(*v46)--;
            if ( result == (char *)1 )
              result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
    if ( v16 )
      v47 = (unsigned int *)(v16 + 4);
          result = (char *)__ldrex(v47);
        while ( __strex((unsigned int)(result - 1), v47) );
        result = (char *)(*v47)--;
        v48 = (unsigned int *)(v16 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
            result = (char *)__ldrex(v48);
          while ( __strex((unsigned int)(result - 1), v48) );
          result = (char *)(*v48)--;
          v38 = *(int (__fastcall **)(int))(*(_DWORD *)v16 + 12);
          v39 = v16;
  return result;
}


signed int __fastcall OfferRepository::prepareAppStoreForPurchases(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r0@4
  void (__fastcall *v7)(int *); // r3@4
  int v8; // r1@5
  signed int result; // r0@6
  int v10; // r5@8
  void (__cdecl *v11)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@8
  int v12; // [sp+0h] [bp-20h]@5
  int v13; // [sp+4h] [bp-1Ch]@5
  void (__cdecl *v14)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@4
  int v15; // [sp+Ch] [bp-14h]@5

  v4 = a1;
  v5 = a2;
  if ( *(_BYTE *)(a1 + 145) )
  {
    if ( !*(_BYTE *)(a1 + 144) )
    {
      *(_BYTE *)(a1 + 146) = 1;
      *(_BYTE *)(a1 + 144) = 0;
    }
    v6 = 0;
    v14 = 0;
    v7 = *(void (__fastcall **)(int *))(a2 + 8);
    if ( v7 )
      v7(&v12);
      v6 = *(_DWORD *)(v5 + 12);
      v15 = *(_DWORD *)(v5 + 12);
      v8 = *(_DWORD *)(v5 + 8);
      v14 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v5 + 8);
      v3 = v13;
      v2 = v12;
    else
      v8 = 0;
    v10 = v4 + 104;
    *(_QWORD *)&v12 = *(_QWORD *)(v4 + 104);
    *(_DWORD *)v10 = v2;
    *(_DWORD *)(v10 + 4) = v3;
    v14 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 112);
    v11 = v14;
    *(_DWORD *)(v4 + 112) = v8;
    v15 = *(_DWORD *)(v4 + 116);
    *(_DWORD *)(v4 + 116) = v6;
    if ( v11 )
      v11(&v12, &v12, 3, v11);
    result = 1;
    *(_BYTE *)(v4 + 120) = 1;
  }
  else
    result = 0;
  return result;
}


Offer *__fastcall OfferRepository::getRealmsTrialOfferIfAvailable(OfferRepository *this)
{
  OfferRepository *v1; // r4@1
  Offer *v2; // r4@2
  void *v3; // r0@2
  void *v4; // r0@7
  unsigned int *v6; // r2@11
  signed int v7; // r1@13
  unsigned int *v8; // r2@15
  signed int v9; // r1@17
  int v10; // [sp+8h] [bp-28h]@7
  int v11; // [sp+Ch] [bp-24h]@2

  v1 = this;
  if ( GameStore::allowsSubscriptions(*((GameStore **)this + 20)) == 1 )
  {
    OfferRepository::_buildRealmsProductSku(&v11, (int)v1, 2, 1, 1);
    v2 = OfferRepository::_getOfferByProductSku(v1, (const void **)&v11);
    v3 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v11 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v3);
    }
    if ( Offer::isAvailableForPurchase(v2) == 1 )
      if ( Offer::hasTransactionHistory(v2) )
        v2 = 0;
      return v2;
    return 0;
  }
  OfferRepository::_buildRealmsProductSku(&v10, (int)v1, 0, 1, 1);
  v2 = OfferRepository::_getOfferByProductSku(v1, (const void **)&v10);
  v4 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  if ( !Offer::isAvailableForPurchase(v2) )
  return v2;
}


int __fastcall OfferRepository::OfferRepository(int a1, int a2, int *a3, int *a4, int a5, int a6, int a7, int a8)
{
  int v8; // r5@1
  int *v9; // r11@1
  int *v10; // r9@1
  int v11; // r6@1
  int v12; // r6@1
  void *v13; // r0@2
  int *v14; // r7@4
  void *v15; // r0@5
  int *v16; // r10@7
  void *v17; // r0@7
  int v18; // r7@8
  __int64 v19; // r1@8
  double v20; // r0@8
  int v21; // r4@8
  int v22; // r0@8
  int v23; // r8@10
  _QWORD *v24; // r6@10
  int v25; // r0@10
  int v26; // r9@12
  int v27; // r6@12
  int v28; // r8@12
  _QWORD *v29; // r4@12
  int v30; // r0@12
  int v31; // r10@14
  int v32; // r8@14
  int v33; // r6@14
  int v34; // r9@14
  _QWORD *v35; // r4@14
  int v36; // r0@14
  unsigned int *v38; // r2@17
  signed int v39; // r1@19
  int v40; // [sp+10h] [bp-30h]@7

  v8 = a1;
  v9 = a4;
  v10 = a3;
  *(_DWORD *)a1 = &off_26DF970;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a5;
  *(_DWORD *)(a1 + 12) = a8;
  *(_DWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  v11 = a1 + 60;
  _aeabi_memclr4(a1 + 20, 36);
  *(_DWORD *)(v8 + 68) = v11;
  *(_DWORD *)(v8 + 72) = v11;
  *(_DWORD *)(v8 + 80) = 0;
  v12 = v8 + 80;
  *(_DWORD *)(v12 + 4) = 0;
  *(_DWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 12) = 0;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v13 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v13 = &ServiceLocator<AppPlatform>::mDefaultService;
  v14 = (int *)(*(int (**)(void))(**(_DWORD **)v13 + 272))();
    v15 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v15 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v15 + 488))(&v40);
  std::make_unique<PurchaseCache,std::string const&,std::string>((_DWORD *)(v8 + 96), v14, &v40);
  v16 = v10;
  v17 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
  {
    v38 = (unsigned int *)(v40 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v17);
  }
  *(_DWORD *)(v8 + 100) = 0;
  v18 = v8 + 100;
  LODWORD(v19) = 10000;
  HIDWORD(v19) = 2147483648;
  *(_DWORD *)(v18 + 12) = 0;
  *(_BYTE *)(v18 + 20) = 0;
  *(_DWORD *)(v18 + 24) = 10000;
  *(_DWORD *)(v18 + 28) = 2147483648;
  *(_BYTE *)(v18 + 32) = 0;
  *(_BYTE *)(v18 + 33) = 1;
  *(_BYTE *)(v18 + 34) = 0;
  *(_QWORD *)(v18 + 36) = v19;
  LODWORD(v19) = 2000;
  *(_BYTE *)(v18 + 44) = 0;
  *(_BYTE *)(v18 + 45) = 1;
  *(_BYTE *)(v18 + 46) = 0;
  *(_QWORD *)(v18 + 48) = v19;
  *(_WORD *)(v18 + 56) = 256;
  *(_BYTE *)(v18 + 58) = 0;
  LODWORD(v20) = operator new(0x5Cu);
  v21 = LODWORD(v20);
  GameStore::GameStore(v20);
  v22 = *(_DWORD *)v12;
  *(_DWORD *)v12 = v21;
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
    v21 = *(_DWORD *)v12;
  v23 = *(_DWORD *)(v8 + 96);
  v24 = operator new(0x10u);
  DurableTransactionHandler::DurableTransactionHandler(v24, v21, v23);
  v25 = *(_DWORD *)(v8 + 84);
  *(_DWORD *)(v8 + 84) = v24;
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  v26 = *(_DWORD *)(v8 + 8);
  v27 = *(_DWORD *)(v8 + 80);
  v28 = *(_DWORD *)(v8 + 96);
  v29 = operator new(0x18u);
  RealmsTransactionHandler::RealmsTransactionHandler(v29, v27, v28, v16, v9, v26);
  v30 = *(_DWORD *)(v8 + 88);
  *(_DWORD *)(v8 + 88) = v29;
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  v31 = *(_DWORD *)(v8 + 4);
  v32 = *(_DWORD *)(v8 + 12);
  v33 = *(_DWORD *)(v8 + 80);
  v34 = *(_DWORD *)(v8 + 96);
  v35 = operator new(0x1Cu);
  MinecoinTransactionHandler::MinecoinTransactionHandler(v35, v33, v34, v32, v31);
  v36 = *(_DWORD *)(v8 + 92);
  *(_DWORD *)(v8 + 92) = v35;
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 4))();
  OfferRepository::_createMinecoinOffers((OfferRepository *)v8);
  OfferRepository::_createRealmsOffers((OfferRepository *)v8);
  OfferRepository::_restoreDurablesFromCache((OfferRepository *)v8);
  return v8;
}


signed int __fastcall OfferRepository::hasRealmsOffersWithProductInfo(OfferRepository *this)
{
  __int64 v1; // r4@1
  signed int result; // r0@5

  v1 = *(_QWORD *)((char *)this + 20);
  if ( (_DWORD)v1 == HIDWORD(v1) )
  {
LABEL_5:
    result = 0;
  }
  else
    while ( Offer::getCategory(*(Offer **)v1) || !Offer::hasProductInfo(*(Offer **)v1) )
    {
      LODWORD(v1) = v1 + 4;
      if ( HIDWORD(v1) == (_DWORD)v1 )
        goto LABEL_5;
    }
    result = 1;
  return result;
}


void __fastcall OfferRepository::update(OfferRepository *this)
{
  OfferRepository *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@2
  int v4; // r1@3
  int v5; // r0@6
  signed int v6; // r1@6
  int v7; // r2@7
  bool v8; // zf@12
  int v9; // r0@16
  int v10; // r1@17
  Social::XboxLiveUserManager *v11; // r0@23
  int v12; // r5@23
  int v13; // r6@23
  unsigned int *v14; // r1@24
  unsigned int v15; // r0@26
  Offer **v16; // r5@28
  Offer **i; // r7@28
  int *v18; // r1@29
  int v19; // r5@34
  _DWORD *v20; // r0@34
  __int64 v21; // r1@34
  int *v22; // r4@36
  int *v23; // r6@36
  int v24; // r5@38
  _DWORD *v25; // r0@38
  __int64 v26; // r2@38
  unsigned int *v27; // r2@41
  signed int v28; // r1@43
  int *v29; // r0@49
  unsigned int *v30; // r7@56
  unsigned int v31; // r0@58
  Offer ***v32; // r5@65
  __int64 v33; // r0@66
  unsigned int v34; // r1@68
  unsigned int *v35; // r0@68
  unsigned int v36; // r2@71
  unsigned int v37; // r3@72
  signed int v38; // r0@74
  unsigned int v39; // r6@77
  TransactionContext *v40; // r7@77
  signed int v41; // r6@77
  __int64 v42; // r0@78
  unsigned int v43; // r1@80
  unsigned int *v44; // r0@80
  unsigned int v45; // r2@83
  unsigned int v46; // r3@84
  signed int v47; // r0@86
  int v48; // r1@94
  int v49; // r0@96
  unsigned int *v50; // r2@97
  unsigned int v51; // r1@99
  void *v52; // r5@106
  Offer *v53; // r1@106
  unsigned int *v54; // r0@107
  unsigned int v55; // r2@109
  int v56; // r5@112
  int v57; // r6@112
  unsigned int *v58; // r1@113
  unsigned int v59; // r0@115
  unsigned int *v60; // r7@119
  unsigned int v61; // r0@121
  char *v62; // r0@126
  int v63; // r0@129
  int v64; // r2@129
  int v65; // r1@129
  bool v66; // zf@129
  int v67; // r4@134
  unsigned int *v68; // r1@135
  unsigned int v69; // r0@137
  unsigned int *v70; // r5@141
  unsigned int v71; // r0@143
  int v72; // r1@146
  int v73; // r0@148
  unsigned int *v74; // r2@149
  unsigned int v75; // r1@151
  void *v76; // r6@158
  Offer *v77; // r1@158
  unsigned int *v78; // r0@159
  unsigned int v79; // r2@161
  int v80; // r8@164
  int v81; // r6@164
  unsigned int *v82; // r1@165
  unsigned int v83; // r0@167
  unsigned int *v84; // r7@171
  unsigned int v85; // r0@173
  char *v86; // r0@178
  char *v87; // r0@179
  char *v88; // r0@180
  int v89; // r0@183
  int v90; // r2@183
  int v91; // r1@183
  bool v92; // zf@183
  unsigned int *v93; // r1@189
  unsigned int v94; // r0@191
  unsigned int *v95; // r2@203
  signed int v96; // r1@205
  unsigned int *v97; // r2@211
  signed int v98; // r1@213
  unsigned int *v99; // r2@215
  signed int v100; // r1@217
  unsigned int *v101; // r2@219
  signed int v102; // r1@221
  void *v103; // [sp+4h] [bp-A4h]@112
  int v104; // [sp+8h] [bp-A0h]@106
  int v105; // [sp+Ch] [bp-9Ch]@106
  char *v106; // [sp+10h] [bp-98h]@106
  int v107; // [sp+14h] [bp-94h]@67
  int v108; // [sp+18h] [bp-90h]@67
  int v109; // [sp+1Ch] [bp-8Ch]@96
  int v110; // [sp+20h] [bp-88h]@67
  void *v111; // [sp+24h] [bp-84h]@164
  int v112; // [sp+28h] [bp-80h]@158
  int v113; // [sp+2Ch] [bp-7Ch]@158
  char *v114; // [sp+30h] [bp-78h]@158
  char *v115; // [sp+34h] [bp-74h]@158
  char *v116; // [sp+38h] [bp-70h]@158
  int v117; // [sp+3Ch] [bp-6Ch]@79
  int v118; // [sp+40h] [bp-68h]@79
  int v119; // [sp+44h] [bp-64h]@148
  int v120; // [sp+48h] [bp-60h]@79
  TransactionContext *v121; // [sp+4Ch] [bp-5Ch]@77
  Social::User *v122; // [sp+50h] [bp-58h]@23
  int v123; // [sp+54h] [bp-54h]@23
  _DWORD *v124; // [sp+58h] [bp-50h]@38
  void (*v125)(void); // [sp+60h] [bp-48h]@38
  int (__fastcall *v126)(int **, int); // [sp+64h] [bp-44h]@38
  _DWORD *v127; // [sp+68h] [bp-40h]@34
  __int64 v128; // [sp+70h] [bp-38h]@34
  int *v129; // [sp+78h] [bp-30h]@28
  int *v130; // [sp+7Ch] [bp-2Ch]@28
  int *v131; // [sp+80h] [bp-28h]@28

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 22) + 8))();
  v2 = *((_DWORD *)v1 + 20);
  if ( *(_DWORD *)(v2 + 56) == 1 )
  {
    GameStore::update((GameStore *)v2);
    v3 = getTimeMs();
    if ( *((_BYTE *)v1 + 133)
      && (v4 = *((_DWORD *)v1 + 33), !(_BYTE)v4)
      && (v4 & 0xFF0000 || (signed int)(*(_QWORD *)((char *)v1 + 124) + (*(_QWORD *)((char *)v1 + 124) >> 32)) <= v3) )
    {
      *((_BYTE *)v1 + 134) = 0;
      *((_DWORD *)v1 + 32) = v3;
      *((_BYTE *)v1 + 132) = 1;
      v129 = 0;
      v130 = 0;
      v131 = 0;
      v16 = (Offer **)(*(_QWORD *)((char *)v1 + 20) >> 32);
      for ( i = (Offer **)*(_QWORD *)((char *)v1 + 20); v16 != i; ++i )
      {
        v18 = (int *)Offer::getProductSku(*i);
        if ( *(_DWORD *)(*v18 - 12) )
        {
          if ( v130 == v131 )
          {
            std::vector<ProductSku,std::allocator<ProductSku>>::_M_emplace_back_aux<ProductSku const&>(
              (unsigned __int64 *)&v129,
              v18);
          }
          else
            sub_119C854(v130, v18);
            ++v130;
        }
      }
      v19 = *((_DWORD *)v1 + 20);
      v20 = operator new(4u);
      LODWORD(v21) = sub_10D3A2E;
      *v20 = v1;
      HIDWORD(v21) = sub_10D3A08;
      v127 = v20;
      v128 = v21;
      GameStore::queryProducts(v19, (int)&v129, (int)&v127);
      if ( (_DWORD)v128 )
        ((void (*)(void))v128)();
      v23 = v130;
      v22 = v129;
      if ( v129 != v130 )
        do
          v29 = (int *)(*v22 - 12);
          if ( v29 != &dword_28898C0 )
            v27 = (unsigned int *)(*v22 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
            }
            else
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v29);
          ++v22;
        while ( v22 != v23 );
        v22 = v129;
      if ( v22 )
        operator delete(v22);
    }
    else
      v5 = getTimeMs();
      v6 = *((_BYTE *)v1 + 145);
      if ( *((_BYTE *)v1 + 145)
        && (v7 = *((_DWORD *)v1 + 36), !(_BYTE)v7)
        && (v7 & 0xFF0000 || (signed int)(*((_QWORD *)v1 + 17) + (*((_QWORD *)v1 + 17) >> 32)) <= v5) )
        *((_BYTE *)v1 + 146) = 0;
        *((_DWORD *)v1 + 35) = v5;
        *((_BYTE *)v1 + 144) = 1;
        v24 = *((_DWORD *)v1 + 20);
        v25 = operator new(4u);
        *v25 = v1;
        v124 = v25;
        v125 = (void (*)(void))sub_10D3AB8;
        v126 = sub_10D3A64;
        LODWORD(v26) = *((_BYTE *)v1 + 120);
        GameStore::queryPurchases(v24, (int)&v124, v26);
        if ( v125 )
          v125();
        *((_BYTE *)v1 + 120) = 0;
      else
        if ( *((_BYTE *)v1 + 145) )
          v6 = 1;
        v8 = *((_BYTE *)v1 + 133) == 0;
        if ( !*((_BYTE *)v1 + 133) )
          v8 = v6 == 0;
        if ( v8 )
          v9 = getTimeMs();
          if ( *((_BYTE *)v1 + 157) )
            v10 = *((_DWORD *)v1 + 39);
            if ( !(_BYTE)v10
              && (v10 & 0xFF0000
               || (signed int)(*(_QWORD *)((char *)v1 + 148) + (*(_QWORD *)((char *)v1 + 148) >> 32)) <= v9) )
              *((_DWORD *)v1 + 38) = v9;
              *((_BYTE *)v1 + 158) = 0;
              *((_BYTE *)v1 + 156) = 0;
              if ( RealmsTransactionHandler::isIdle(*((RealmsTransactionHandler **)v1 + 22)) == 1
                && TransactionHandler::isIdle(*((TransactionHandler **)v1 + 23)) == 1
                && TransactionHandler::isIdle(*((TransactionHandler **)v1 + 21)) == 1 )
              {
                Social::UserManager::getPrimaryUser((Social::UserManager *)&v122, *((_DWORD *)v1 + 2));
                v11 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v122);
                v12 = Social::XboxLiveUserManager::isSignedIn(v11);
                v13 = v123;
                if ( !v123 )
                  goto LABEL_237;
                v14 = (unsigned int *)(v123 + 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v15 = __ldrex(v14);
                  while ( __strex(v15 - 1, v14) );
                }
                else
                  v15 = (*v14)--;
                if ( v15 != 1 )
                v30 = (unsigned int *)(v13 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
                    v31 = __ldrex(v30);
                  while ( __strex(v31 - 1, v30) );
                  v31 = (*v30)--;
                if ( v31 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
                  if ( !v12 )
                    return;
LABEL_237:
                  if ( v12 != 1 )
                v32 = (Offer ***)((char *)v1 + 32);
                if ( *((_DWORD *)v1 + 9) == *((_DWORD *)v1 + 8) )
                  v33 = *(_QWORD *)((char *)v1 + 44);
                  if ( HIDWORD(v33) != (_DWORD)v33 )
                  {
                    Offer::getNextUnfulfilledPurchase((Offer *)&v107, *(_DWORD *)v33);
                    v110 = v108;
                    if ( v108 )
                    {
                      v34 = *(_DWORD *)(v108 + 4);
                      v35 = (unsigned int *)(v108 + 4);
                      do
                      {
                        while ( 1 )
                        {
                          if ( !v34 )
                          {
                            v110 = 0;
                            v38 = 1;
                            goto LABEL_94;
                          }
                          __dmb();
                          v36 = __ldrex(v35);
                          if ( v36 == v34 )
                            break;
                          __clrex();
                          v34 = v36;
                        }
                        v37 = __strex(v34 + 1, v35);
                        v34 = v36;
                      }
                      while ( v37 );
                      __dmb();
                      if ( v110 )
                        v38 = 0;
                        if ( !*(_DWORD *)(v110 + 4) )
                          v38 = 1;
                      else
                        v38 = 1;
                    }
                    else
                      v38 = 1;
LABEL_94:
                    v48 = v107;
                    if ( v38 )
                      v48 = 0;
                    v49 = v108;
                    v109 = v48;
                      v50 = (unsigned int *)(v108 + 8);
                      if ( &pthread_create )
                        __dmb();
                        do
                          v51 = __ldrex(v50);
                        while ( __strex(v51 - 1, v50) );
                        v51 = (*v50)--;
                      if ( v51 == 1 )
                        (*(void (**)(void))(*(_DWORD *)v49 + 12))();
                      v48 = v109;
                    if ( !v48 )
                      goto LABEL_238;
                    v106 = (char *)&unk_28898CC;
                    MinecoinTransactionHandler::tryParseTransactionPayload(
                      *((_DWORD *)v1 + 23),
                      (const void ***)&v109,
                      (const void **)&v106);
                    v52 = operator new(0x18u);
                    MinecoinTransactionContext::MinecoinTransactionContext((int)v52, (int *)&v106);
                    v53 = (Offer *)**((_DWORD **)v1 + 11);
                    v104 = v109;
                    v105 = v110;
                    if ( v110 )
                      v54 = (unsigned int *)(v110 + 4);
                          v55 = __ldrex(v54);
                        while ( __strex(v55 + 1, v54) );
                        ++*v54;
                    v103 = v52;
                    v56 = OfferRepository::_tryFulfillPurchaseForOffer(
                            (int)v1,
                            v53,
                            (int)&v104,
                            (const void **)&v106,
                            (int *)&v103);
                    std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v103);
                    v57 = v105;
                    if ( v105 )
                      v58 = (unsigned int *)(v105 + 4);
                          v59 = __ldrex(v58);
                        while ( __strex(v59 - 1, v58) );
                        v59 = (*v58)--;
                      if ( v59 == 1 )
                        v60 = (unsigned int *)(v57 + 8);
                        (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 8))(v57);
                        if ( &pthread_create )
                          do
                            v61 = __ldrex(v60);
                          while ( __strex(v61 - 1, v60) );
                        else
                          v61 = (*v60)--;
                        if ( v61 == 1 )
                          (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 12))(v57);
                    v62 = v106 - 12;
                    if ( (int *)(v106 - 12) != &dword_28898C0 )
                      v95 = (unsigned int *)(v106 - 4);
                          v96 = __ldrex(v95);
                        while ( __strex(v96 - 1, v95) );
                        v96 = (*v95)--;
                      if ( v96 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v62);
                    if ( !v56 || Offer::shouldRetryFulfillment(**((Offer ***)v1 + 11)) == 1 )
LABEL_238:
                      v64 = *(_QWORD *)((char *)v1 + 44) >> 32;
                      v63 = *(_QWORD *)((char *)v1 + 44);
                      v65 = v63 + 4;
                      v66 = v63 + 4 == v64;
                      if ( v63 + 4 != v64 )
                        v66 = v64 == v65;
                      if ( !v66 )
                        _aeabi_memmove4(v63, v65);
                        v64 = *((_DWORD *)v1 + 12);
                      *((_DWORD *)v1 + 12) = v64 - 4;
                    v67 = v110;
                      v68 = (unsigned int *)(v110 + 4);
                          v69 = __ldrex(v68);
                        while ( __strex(v69 - 1, v68) );
                        v69 = (*v68)--;
                      if ( v69 == 1 )
                        v70 = (unsigned int *)(v67 + 8);
                        (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 8))(v67);
                            v71 = __ldrex(v70);
                          while ( __strex(v71 - 1, v70) );
                          goto LABEL_200;
LABEL_199:
                        v71 = (*v70)--;
LABEL_200:
                        if ( v71 == 1 )
                          (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 12))(v67);
                        return;
                  }
                  v39 = *((_DWORD *)v1 + 22);
                  v40 = (TransactionContext *)operator new(0x18u);
                  TransactionContext::TransactionContext(v40);
                  v121 = v40;
                  v41 = RealmsTransactionHandler::tryCheckPurchaseFulfillment(
                          v39,
                          (unsigned __int64 *)v1 + 4,
                          (int *)&v121);
                  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v121);
                  if ( !v41 )
                    v42 = *((_QWORD *)v1 + 4);
                    if ( HIDWORD(v42) != (_DWORD)v42 )
                      Offer::getNextUnfulfilledPurchase((Offer *)&v117, *(_DWORD *)v42);
                      v120 = v118;
                      if ( v118 )
                        v43 = *(_DWORD *)(v118 + 4);
                        v44 = (unsigned int *)(v118 + 4);
                          while ( 1 )
                            if ( !v43 )
                            {
                              v120 = 0;
                              v47 = 1;
                              goto LABEL_146;
                            }
                            __dmb();
                            v45 = __ldrex(v44);
                            if ( v45 == v43 )
                              break;
                            __clrex();
                            v43 = v45;
                          v46 = __strex(v43 + 1, v44);
                          v43 = v45;
                        while ( v46 );
                        if ( v120 )
                          v47 = 0;
                          if ( !*(_DWORD *)(v120 + 4) )
                            v47 = 1;
                          v47 = 1;
                        v47 = 1;
LABEL_146:
                      v72 = v117;
                      if ( v47 )
                        v72 = 0;
                      v73 = v118;
                      v119 = v72;
                        v74 = (unsigned int *)(v118 + 8);
                            v75 = __ldrex(v74);
                          while ( __strex(v75 - 1, v74) );
                          v75 = (*v74)--;
                        if ( v75 == 1 )
                          (*(void (**)(void))(*(_DWORD *)v73 + 12))();
                        v72 = v119;
                      if ( !v72 )
                        goto LABEL_239;
                      v116 = (char *)&unk_28898CC;
                      v114 = (char *)&unk_28898CC;
                      v115 = (char *)&unk_28898CC;
                      RealmsTransactionHandler::tryParseRealmsTransactionPayload(
                        *((_DWORD *)v1 + 22),
                        (const void ***)&v119,
                        (const void **)&v116,
                        (const void **)&v115,
                        (const void **)&v114);
                      v76 = operator new(0x70u);
                      RealmsTransactionContext::RealmsTransactionContext(
                        (int)v76,
                        (int *)&v116,
                        (int *)&v115,
                        (int *)&v114,
                        0);
                      v77 = **v32;
                      v112 = v119;
                      v113 = v120;
                      if ( v120 )
                        v78 = (unsigned int *)(v120 + 4);
                            v79 = __ldrex(v78);
                          while ( __strex(v79 + 1, v78) );
                          ++*v78;
                      v111 = v76;
                      v80 = OfferRepository::_tryFulfillPurchaseForOffer(
                              (int)v1,
                              v77,
                              (int)&v112,
                              (const void **)&v116,
                              (int *)&v111);
                      std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v111);
                      v81 = v113;
                      if ( v113 )
                        v82 = (unsigned int *)(v113 + 4);
                            v83 = __ldrex(v82);
                          while ( __strex(v83 - 1, v82) );
                          v83 = (*v82)--;
                        if ( v83 == 1 )
                          v84 = (unsigned int *)(v81 + 8);
                          (*(void (__fastcall **)(int))(*(_DWORD *)v81 + 8))(v81);
                          if ( &pthread_create )
                            do
                              v85 = __ldrex(v84);
                            while ( __strex(v85 - 1, v84) );
                          else
                            v85 = (*v84)--;
                          if ( v85 == 1 )
                            (*(void (__fastcall **)(int))(*(_DWORD *)v81 + 12))(v81);
                      v86 = v114 - 12;
                      if ( (int *)(v114 - 12) != &dword_28898C0 )
                        v97 = (unsigned int *)(v114 - 4);
                            v98 = __ldrex(v97);
                          while ( __strex(v98 - 1, v97) );
                          v98 = (*v97)--;
                        if ( v98 <= 0 )
                          j_j_j_j_j__ZdlPv_9_1(v86);
                      v87 = v115 - 12;
                      if ( (int *)(v115 - 12) != &dword_28898C0 )
                        v99 = (unsigned int *)(v115 - 4);
                            v100 = __ldrex(v99);
                          while ( __strex(v100 - 1, v99) );
                          v100 = (*v99)--;
                        if ( v100 <= 0 )
                          j_j_j_j_j__ZdlPv_9_1(v87);
                      v88 = v116 - 12;
                      if ( (int *)(v116 - 12) != &dword_28898C0 )
                        v101 = (unsigned int *)(v116 - 4);
                            v102 = __ldrex(v101);
                          while ( __strex(v102 - 1, v101) );
                          v102 = (*v101)--;
                        if ( v102 <= 0 )
                          j_j_j_j_j__ZdlPv_9_1(v88);
                      if ( !v80 || !Offer::shouldRetryFulfillment(**v32) )
LABEL_239:
                        v90 = *((_QWORD *)v1 + 4) >> 32;
                        v89 = *((_QWORD *)v1 + 4);
                        v91 = v89 + 4;
                        v92 = v89 + 4 == v90;
                        if ( v89 + 4 != v90 )
                          v92 = v90 == v91;
                        if ( !v92 )
                          _aeabi_memmove4(v89, v91);
                          v90 = *((_DWORD *)v1 + 9);
                        *((_DWORD *)v1 + 9) = v90 - 4;
                      v67 = v120;
                        v93 = (unsigned int *)(v120 + 4);
                            v94 = __ldrex(v93);
                          while ( __strex(v94 - 1, v93) );
                          v94 = (*v93)--;
                        if ( v94 == 1 )
                          v70 = (unsigned int *)(v67 + 8);
                          (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 8))(v67);
                              v71 = __ldrex(v70);
                            while ( __strex(v71 - 1, v70) );
                            goto LABEL_200;
                          goto LABEL_199;
              }
  }
}


void __fastcall OfferRepository::~OfferRepository(OfferRepository *this)
{
  OfferRepository::~OfferRepository(this);
}


void __fastcall OfferRepository::onPurchaseSuccessful(OfferRepository *a1, const void **a2)
{
  OfferRepository::onPurchaseSuccessful(a1, a2);
}


void __fastcall OfferRepository::~OfferRepository(OfferRepository *this)
{
  OfferRepository *v1; // r0@1

  v1 = OfferRepository::~OfferRepository(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall OfferRepository::_createMinecoinOffers(OfferRepository *this)
{
  OfferRepository::_createMinecoinOffers(this);
}


void __fastcall OfferRepository::_buildRealmsProductSku(int *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r7@1
  int *v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r0@1
  const char *v10; // r1@1
  const char *v11; // r1@3
  const char *v12; // r1@7
  const char *v13; // r1@12
  const void **v14; // r0@17
  const void **v15; // r0@17
  const void **v16; // r0@17
  const void **v17; // r0@17
  char *v18; // r0@17
  char *v19; // r0@18
  char *v20; // r0@19
  void *v21; // r0@20
  char *v22; // r0@21
  void *v23; // r0@22
  void *v24; // r0@23
  void *v25; // r0@24
  void *v26; // r0@25
  void *v27; // r0@26
  void *v28; // r0@27
  unsigned int *v29; // r2@29
  signed int v30; // r1@31
  unsigned int *v31; // r2@33
  signed int v32; // r1@35
  unsigned int *v33; // r2@37
  signed int v34; // r1@39
  unsigned int *v35; // r2@41
  signed int v36; // r1@43
  unsigned int *v37; // r2@45
  signed int v38; // r1@47
  unsigned int *v39; // r2@49
  signed int v40; // r1@51
  unsigned int *v41; // r2@53
  signed int v42; // r1@55
  unsigned int *v43; // r2@57
  signed int v44; // r1@59
  unsigned int *v45; // r2@61
  signed int v46; // r1@63
  unsigned int *v47; // r2@65
  signed int v48; // r1@67
  unsigned int *v49; // r2@69
  signed int v50; // r1@71
  int v51; // [sp+0h] [bp-58h]@17
  char *v52; // [sp+4h] [bp-54h]@17
  char *v53; // [sp+8h] [bp-50h]@17
  char *v54; // [sp+Ch] [bp-4Ch]@17
  char *v55; // [sp+10h] [bp-48h]@17
  int v56; // [sp+18h] [bp-40h]@17
  int v57; // [sp+20h] [bp-38h]@9
  int v58; // [sp+28h] [bp-30h]@7
  int v59; // [sp+30h] [bp-28h]@3
  int v60; // [sp+38h] [bp-20h]@1
  int v61; // [sp+3Ch] [bp-1Ch]@1

  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = a3;
  GameStore::getRealmsSkuPrefix((GameStore *)&v61, *(_DWORD *)(a2 + 80));
  sub_119C884((void **)&v60, "realms.");
  v9 = GameStore::allowsSubscriptions(*(GameStore **)(v5 + 80));
  v10 = "subscription.";
  if ( !v9 )
    v10 = "consumable.";
  sub_119C884((void **)&v59, v10);
  v11 = "180days.";
  if ( v8 != 1 )
    v11 = "monthly.";
  if ( !v8 )
    v11 = "30days.";
  sub_119C884((void **)&v58, v11);
  v12 = "2player";
  if ( v7 )
    v12 = "10player";
  sub_119C884((void **)&v57, v12);
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      v13 = ".trial";
    }
    else if ( a5 == 2 )
      v13 = ".01";
    else
      v13 = ".02";
      if ( a5 != 3 )
        v13 = ".03";
  }
  else
    v13 = (const char *)&unk_257BC67;
  sub_119C884((void **)&v56, v13);
  sub_119C854(&v51, &v61);
  sub_119C8A4((const void **)&v51, (const void **)&v60);
  v14 = sub_119C8A4((const void **)&v51, (const void **)&v59);
  v52 = (char *)*v14;
  *v14 = &unk_28898CC;
  v15 = sub_119C8A4((const void **)&v52, (const void **)&v58);
  v53 = (char *)*v15;
  *v15 = &unk_28898CC;
  v16 = sub_119C8A4((const void **)&v53, (const void **)&v57);
  v54 = (char *)*v16;
  *v16 = &unk_28898CC;
  v17 = sub_119C8A4((const void **)&v54, (const void **)&v56);
  v55 = (char *)*v17;
  *v17 = &unk_28898CC;
  v18 = v54 - 12;
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v54 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = v53 - 12;
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v53 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = v52 - 12;
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v52 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v51 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C854(v6, (int *)&v55);
  v22 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v55 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v56 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v57 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v58 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v59 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v60 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v61 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
}


int __fastcall OfferRepository::_getTransactionHandlerForOffer(OfferRepository *this, const Offer *a2)
{
  Offer *v2; // r5@1
  OfferRepository *v3; // r4@1
  int result; // r0@3

  v2 = a2;
  v3 = this;
  if ( Offer::getCategory(a2) )
  {
    if ( Offer::getCategory(v2) == 1 )
      result = *((_DWORD *)v3 + 23);
    else
      result = *((_DWORD *)v3 + 21);
  }
  else
    result = *((_DWORD *)v3 + 22);
  return result;
}


char *__fastcall OfferRepository::_queuePurchaseForFulfillment(int a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r6@1
  char *result; // r0@1
  char *v6; // r5@1
  char *v7; // r1@2
  int v8; // t1@3
  unsigned int v9; // r2@7
  unsigned int v10; // r1@9
  unsigned int v11; // r7@9
  char *v12; // r8@15
  char *v13; // r6@17
  int v14; // r6@19

  v3 = a2;
  v4 = a3;
  result = (char *)(*a2 >> 32);
  v6 = (char *)*a2;
  if ( v6 == result )
  {
LABEL_5:
    if ( result == *((char **)v3 + 2) )
    {
      v9 = (result - v6) >> 2;
      if ( !v9 )
        v9 = 1;
      v10 = v9 + ((result - v6) >> 2);
      v11 = v9 + ((result - v6) >> 2);
      if ( 0 != v10 >> 30 )
        v11 = 0x3FFFFFFF;
      if ( v10 < v9 )
      if ( v11 )
      {
        if ( v11 >= 0x40000000 )
          sub_119C874();
        v12 = (char *)operator new(4 * v11);
        result = (char *)(*v3 >> 32);
        v6 = (char *)*v3;
      }
      else
        v12 = 0;
      *(_DWORD *)&v12[result - v6] = v4;
      v13 = &v12[result - v6];
      if ( 0 != (result - v6) >> 2 )
        _aeabi_memmove4(v12, v6);
      v14 = (int)(v13 + 4);
      if ( v6 )
        operator delete(v6);
      result = &v12[4 * v11];
      *(_DWORD *)v3 = v12;
      *((_DWORD *)v3 + 1) = v14;
      *((_DWORD *)v3 + 2) = result;
    }
    else
      *(_DWORD *)result = a3;
      result = (char *)(*((_DWORD *)v3 + 1) + 4);
      *((_DWORD *)v3 + 1) = result;
  }
  else
    v7 = (char *)*a2;
    while ( 1 )
      v8 = *(_DWORD *)v7;
      v7 += 4;
      if ( v8 == a3 )
        break;
      if ( result == v7 )
        goto LABEL_5;
  return result;
}


Offer *__fastcall OfferRepository::_getOfferByProductSku(OfferRepository *this, const void **a2)
{
  OfferRepository *v2; // r6@1
  const void **v3; // r5@1
  Offer **v4; // r4@1
  Offer **v5; // r7@1
  _DWORD *v6; // r0@2
  size_t v7; // r2@2
  Offer *v8; // r4@5
  int v9; // r6@8
  int v10; // r1@24

  v2 = this;
  v3 = a2;
  v5 = (Offer **)(*(_QWORD *)((char *)this + 20) >> 32);
  v4 = (Offer **)*(_QWORD *)((char *)this + 20);
  if ( v4 == v5 )
    goto LABEL_5;
  while ( 1 )
  {
    v6 = *(_DWORD **)Offer::getProductSku(*v4);
    v7 = *(v6 - 3);
    if ( v7 == *((_DWORD *)*v3 - 3) && !memcmp(v6, *v3, v7) )
      break;
    ++v4;
    if ( v5 == v4 )
      goto LABEL_5;
  }
  v8 = *v4;
  if ( !v8 )
LABEL_5:
    v8 = (Offer *)OfferRepository::_createOffer(v2);
    Offer::setProductSku((int *)v8, (int *)v3);
  if ( Offer::getCategory(v8) == 4 )
    if ( sub_119CA58((int *)v3, "skin", 0, 4u) == -1 )
    {
      if ( sub_119CA58((int *)v3, "resourcepack", 0, 0xCu) == -1 )
      {
        if ( sub_119CA58((int *)v3, "mashup", 0, 6u) == -1 )
        {
          if ( sub_119CA58((int *)v3, "fullgame", 0, 8u) == -1 )
          {
            v9 = 0;
            if ( sub_119CA58((int *)v3, "minecoin", 0, 8u) == -1 )
            {
              if ( sub_119CA58((int *)v3, "realms", 0, 6u) == -1 )
                v9 = 4;
            }
            else
              v9 = 1;
          }
          else
            v9 = 2;
        }
        else
          v9 = 2;
      }
      else
        v9 = 2;
    }
    else
      v9 = 2;
    Offer::setCategory((int)v8, v9);
  if ( Offer::getProductType(v8) == 6 )
              if ( sub_119CA58((int *)v3, "realms", 0, 6u) != -1 )
              {
                if ( sub_119CA58((int *)v3, "consumable", 0, 0xAu) != -1 )
                {
                  v10 = 3;
                  goto LABEL_39;
                }
                if ( sub_119CA58((int *)v3, "subscription", 0, 0xCu) != -1 )
                  v10 = 5;
              }
              v10 = 6;
              goto LABEL_39;
            v10 = 3;
            v10 = 2;
          v10 = 2;
        v10 = 2;
      v10 = 2;
LABEL_39:
    Offer::setProductType((int)v8, v10);
  return v8;
}
