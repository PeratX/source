

void __fastcall ServerItemPurchaseScreenController::~ServerItemPurchaseScreenController(ServerItemPurchaseScreenController *this)
{
  void *v1; // r0@1

  v1 = (void *)ScreenshotCarouselPurchaseScreen::~ScreenshotCarouselPurchaseScreen(this);
  j_j_j__ZdlPv_5(v1);
}


ModalScreenData *__fastcall ServerItemPurchaseScreenController::_handlePolymorphicButtonPress(ServerItemPurchaseScreenController *this)
{
  ServerItemPurchaseScreenController *v1; // r4@1
  StoreCatalogItemModel *v2; // r5@1
  ModalScreenData *result; // r0@2
  int v4; // r6@3
  int *v5; // r1@4

  v1 = this;
  v2 = (ServerItemPurchaseScreenController *)((char *)this + 452);
  if ( !*((_BYTE *)this + 476) || (result = (ModalScreenData *)StoreCatalogItemModel::isOwned(v2)) == 0 )
  {
    v4 = StoreCatalogItemModel::getItemPerformanceRequirements(v2);
    result = (ModalScreenData *)MainMenuScreenModel::getDevicePerfTier(*((MainMenuScreenModel **)v1 + 106));
    if ( v4 <= (signed int)result )
    {
      v5 = (int *)StoreCatalogItemModel::getProductId(v2);
      result = j_j_j__ZN31PurchaseEnabledScreenController14_purchaseOfferERKSs_0((int)v1, v5);
    }
  }
  return result;
}


int __fastcall ServerItemPurchaseScreenController::ServerItemPurchaseScreenController(int a1, int a2, StoreCatalogItemModel *a3, int a4)
{
  int v4; // r4@1
  StoreCatalogItemModel *v5; // r5@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r6@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r7@14
  unsigned int v13; // r0@16
  int v14; // r0@21
  char v15; // r1@21
  int v17; // [sp+Ch] [bp-1Ch]@1
  int v18; // [sp+10h] [bp-18h]@1

  v4 = a1;
  v17 = *(_DWORD *)a2;
  v5 = a3;
  v6 = *(_DWORD *)(a2 + 4);
  v18 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  ScreenshotCarouselPurchaseScreen::ScreenshotCarouselPurchaseScreen(v4, (int)&v17, a3, a4, 6, 4);
  v9 = v18;
  if ( v18 )
    v10 = (unsigned int *)(v18 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  *(_DWORD *)v4 = &off_26E3538;
  v14 = StoreCatalogItemModel::getStoreCategory(v5);
  v15 = 0;
  if ( v14 == 7 )
    v15 = 1;
  *(_BYTE *)(v4 + 476) = v15;
  MainMenuScreenModel::setStoreCatalogItemViewed(
    *(MainMenuScreenModel **)(v4 + 424),
    (const StoreCatalogItemModel *)(v4 + 452));
  return v4;
}


void __fastcall ServerItemPurchaseScreenController::_getPolymorphicButtonText(ServerItemPurchaseScreenController *this, int a2)
{
  int v2; // r6@1
  StoreCatalogItemModel *v3; // r5@1
  void **v4; // r4@1
  int v5; // r7@1
  void *v6; // r0@5
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  char *v9; // r5@10
  char *v10; // r4@11
  int v11; // r6@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int *v14; // r0@21
  void *v15; // r0@26
  unsigned int *v16; // r2@34
  signed int v17; // r1@36
  int v18; // [sp+4h] [bp-4Ch]@5
  int v19; // [sp+8h] [bp-48h]@11
  char *v20; // [sp+Ch] [bp-44h]@11
  char *v21; // [sp+10h] [bp-40h]@11
  char *v22; // [sp+14h] [bp-3Ch]@11
  int v23; // [sp+1Ch] [bp-34h]@11
  int v24; // [sp+24h] [bp-2Ch]@32

  v2 = a2;
  v3 = (StoreCatalogItemModel *)(a2 + 452);
  v4 = (void **)this;
  v5 = StoreCatalogItemModel::getItemPerformanceRequirements((StoreCatalogItemModel *)(a2 + 452));
  if ( v5 > MainMenuScreenModel::getDevicePerfTier(*(MainMenuScreenModel **)(v2 + 424)) )
  {
    sub_21E94B4(v4, "store.itemIsIncompatible");
    return;
  }
  if ( *(_BYTE *)(v2 + 476) && StoreCatalogItemModel::isOwned(v3) )
    sub_21E94B4((void **)&v18, "store.3pserverItem.alreadyPurchased");
    I18n::get((int *)v4, (int **)&v18);
    v6 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) == &dword_28898C0 )
      return;
    v7 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      goto LABEL_43;
    }
LABEL_42:
    v8 = (*v7)--;
LABEL_43:
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v9 = StoreCatalogItemModel::getPrice(v3);
  if ( !sub_21E7D6C((const void **)v9, "0") )
    sub_21E94B4((void **)&v24, "store.free");
    I18n::get((int *)v4, (int **)&v24);
    v6 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) == &dword_28898C0 )
    v7 = (unsigned int *)(v24 - 4);
    goto LABEL_42;
  sub_21E94B4((void **)&v23, "store.3pserverItem.unlock");
  sub_21E8AF4(&v19, (int *)v9);
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v20 = (char *)operator new(4u);
  v22 = v20 + 4;
  v21 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v19,
                  (int)&v20,
                  (int)v20);
  I18n::get((int *)v4, &v23, (unsigned __int64 *)&v20);
  v11 = (int)v21;
  v10 = v20;
  if ( v20 != v21 )
    do
      v14 = (int *)(*(_DWORD *)v10 - 12);
      if ( v14 != &dword_28898C0 )
      {
        v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      }
      v10 += 4;
    while ( v10 != (char *)v11 );
    v10 = v20;
  if ( v10 )
    operator delete(v10);
  v15 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v6 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v23 - 4);
}


void __fastcall ServerItemPurchaseScreenController::~ServerItemPurchaseScreenController(ServerItemPurchaseScreenController *this)
{
  ServerItemPurchaseScreenController::~ServerItemPurchaseScreenController(this);
}


signed int __fastcall ServerItemPurchaseScreenController::_polymorphicButtonVisible(ServerItemPurchaseScreenController *this)
{
  return 1;
}


int __fastcall ServerItemPurchaseScreenController::_buttonCoinIconVisible(ServerItemPurchaseScreenController *this)
{
  ServerItemPurchaseScreenController *v1; // r5@1
  StoreCatalogItemModel *v2; // r4@1
  int v3; // r6@1
  int result; // r0@2

  v1 = this;
  v2 = (ServerItemPurchaseScreenController *)((char *)this + 452);
  v3 = StoreCatalogItemModel::getItemPerformanceRequirements((ServerItemPurchaseScreenController *)((char *)this + 452));
  if ( v3 <= MainMenuScreenModel::getDevicePerfTier(*((MainMenuScreenModel **)v1 + 106)) )
  {
    if ( *((_BYTE *)v1 + 476) )
      result = StoreCatalogItemModel::isOwned(v2) ^ 1;
    else
      result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall ServerItemPurchaseScreenController::_onPurchaseSuccess(int a1, const void **a2)
{
  int v2; // r9@1
  int v3; // r5@1
  int *v4; // r0@1
  char *v5; // r0@1
  int *v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@2
  void *v9; // r0@3
  char *v10; // r5@4
  int v11; // r7@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  int *v14; // r0@14
  void *v15; // r0@19
  void *v16; // r0@20
  int result; // r0@21
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34
  unsigned int *v24; // r2@36
  signed int v25; // r1@38
  unsigned int *v26; // r2@40
  signed int v27; // r1@42
  int v28; // [sp+8h] [bp-50h]@1
  int v29; // [sp+10h] [bp-48h]@1
  int v30; // [sp+14h] [bp-44h]@1
  char *v31; // [sp+18h] [bp-40h]@1
  char *v32; // [sp+1Ch] [bp-3Ch]@1
  char *v33; // [sp+20h] [bp-38h]@1
  int v34; // [sp+28h] [bp-30h]@1
  int v35; // [sp+2Ch] [bp-2Ch]@1
  int v36; // [sp+30h] [bp-28h]@1

  v2 = a1;
  v36 = MainMenuScreenModel::getStoreCatalogItemByProductId(*(_DWORD *)(a1 + 424), a2);
  v3 = *(_DWORD *)(v2 + 424);
  sub_21E94B4((void **)&v34, "store.purchase.success");
  v4 = (int *)StoreCatalogItemModel::getTitle((StoreCatalogItemModel *)&v36);
  sub_21E8AF4(&v30, v4);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v5 = (char *)operator new(4u);
  v31 = v5;
  v33 = v5 + 4;
  v32 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v30,
                  (int)&v31,
                  (int)v5);
  I18n::get(&v35, &v34, (unsigned __int64 *)&v31);
  sub_21E94B4((void **)&v29, (const char *)&unk_257BC67);
  v6 = (int *)sub_21E94B4((void **)&v28, (const char *)&unk_257BC67);
  MinecraftScreenModel::pushToast(v3, 6, &v35, &v29, v6);
  v7 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v28 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v29 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v35 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v11 = (int)v32;
  v10 = v31;
  if ( v31 != v32 )
    do
      v14 = (int *)(*(_DWORD *)v10 - 12);
      if ( v14 != &dword_28898C0 )
      {
        v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      }
      v10 += 4;
    while ( v10 != (char *)v11 );
    v10 = v31;
  if ( v10 )
    operator delete(v10);
  v15 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v30 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v34 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  result = StoreCatalogItemModel::getStoreCategory((StoreCatalogItemModel *)&v36);
  if ( result == 6 )
    result = MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(v2 + 424));
  return result;
}


void __fastcall ServerItemPurchaseScreenController::_getPolymorphicButtonText(ServerItemPurchaseScreenController *this, int a2)
{
  ServerItemPurchaseScreenController::_getPolymorphicButtonText(this, a2);
}
