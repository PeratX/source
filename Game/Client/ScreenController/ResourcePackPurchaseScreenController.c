

void __fastcall ResourcePackPurchaseScreenController::~ResourcePackPurchaseScreenController(ResourcePackPurchaseScreenController *this)
{
  void *v1; // r0@1

  v1 = (void *)ScreenshotCarouselPurchaseScreen::~ScreenshotCarouselPurchaseScreen(this);
  j_j_j__ZdlPv_3(v1);
}


void __fastcall ResourcePackPurchaseScreenController::_handlePolymorphicButtonPress(ResourcePackPurchaseScreenController *this)
{
  ResourcePackPurchaseScreenController::_handlePolymorphicButtonPress(this);
}


int __fastcall ResourcePackPurchaseScreenController::_polymorphicButtonVisible(ResourcePackPurchaseScreenController *this)
{
  return DlcBatchModel::isDownloadActive(*((DlcBatchModel **)this + 119)) ^ 1;
}


_DWORD *__fastcall ResourcePackPurchaseScreenController::ResourcePackPurchaseScreenController(_DWORD *a1, int a2, StoreCatalogItemModel *a3, int a4)
{
  _DWORD *v4; // r11@1
  int *v5; // r6@1
  int v6; // r7@1
  StoreCatalogItemModel *v7; // r5@1
  int v8; // r0@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  signed int v11; // r0@8
  int v12; // r1@10
  int v13; // r7@12
  unsigned int *v14; // r1@13
  unsigned int v15; // r0@15
  unsigned int *v16; // r4@19
  unsigned int v17; // r0@21
  int v18; // r6@26
  int *v19; // r0@26
  int v20; // r9@26
  __int64 v21; // r6@26
  unsigned int *v22; // r2@28
  signed int v23; // r1@30
  int *v24; // r0@36
  void *v25; // r0@41
  int *v26; // r0@42
  unsigned int *v28; // r2@45
  signed int v29; // r1@47
  int v30; // [sp+8h] [bp-40h]@26
  char *v31; // [sp+Ch] [bp-3Ch]@26
  char *v32; // [sp+10h] [bp-38h]@26
  char *v33; // [sp+14h] [bp-34h]@26
  int v34; // [sp+18h] [bp-30h]@1
  int v35; // [sp+1Ch] [bp-2Ch]@1

  v4 = a1;
  v5 = (int *)a2;
  v6 = a4;
  v7 = a3;
  *a1 = &off_26D7BC0;
  v34 = *(_DWORD *)a2;
  v8 = *(_DWORD *)(a2 + 4);
  v35 = v8;
  if ( v8 )
  {
    v9 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  if ( a4 == 6 )
    v11 = 0;
  else
    v11 = MinecraftScreenModel::isDesktopScalingRules((MinecraftScreenModel *)v4[106]);
  v12 = 3;
  if ( v11 )
    v12 = 4;
  ScreenshotCarouselPurchaseScreen::ScreenshotCarouselPurchaseScreen((int)v4, (int)&v34, v7, v6, 6, v12);
  v13 = v35;
  if ( v35 )
    v14 = (unsigned int *)(v35 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  *v4 = &off_26D7BC0;
  v18 = *v5;
  v19 = (int *)StoreCatalogItemModel::getProductId(v7);
  sub_DA73B4(&v30, v19);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v31 = (char *)operator new(4u);
  v33 = v31 + 4;
  v32 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v30,
                  (int)&v31,
                  (int)v31);
  v20 = MainMenuScreenModel::getDlcBatchModel(v18, (unsigned __int64 *)&v31);
  v21 = *(_QWORD *)&v31;
  if ( v31 != v32 )
    do
      v24 = (int *)(*(_DWORD *)v21 - 12);
      if ( v24 != &dword_28898C0 )
        v22 = (unsigned int *)(*(_DWORD *)v21 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9(v24);
      LODWORD(v21) = v21 + 4;
    while ( (_DWORD)v21 != HIDWORD(v21) );
    LODWORD(v21) = v31;
  if ( (_DWORD)v21 )
    operator delete((void *)v21);
  v25 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v30 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
  v4[119] = v20;
  v26 = (int *)StoreCatalogItemModel::getProductId((StoreCatalogItemModel *)(v4 + 113));
  EntityInteraction::setInteractText(v4 + 111, v26);
  MainMenuScreenModel::setStoreCatalogItemViewed(
    (MainMenuScreenModel *)v4[106],
    (const StoreCatalogItemModel *)(v4 + 113));
  if ( StoreCatalogItemModel::getStoreCategory((StoreCatalogItemModel *)(v4 + 113)) != 2 )
    PurchaseEnabledScreenController::_registerDownloadProgressBinds((int)v4, v4 + 111);
  return v4;
}


int __fastcall ResourcePackPurchaseScreenController::tick(ResourcePackPurchaseScreenController *this)
{
  PurchaseEnabledScreenController *v1; // r4@1

  v1 = this;
  StoreCatalogItemModel::getStoreCategory((ResourcePackPurchaseScreenController *)((char *)this + 452));
  return j_j_j__ZN31PurchaseEnabledScreenController4tickEv(v1);
}


const void **__fastcall ResourcePackPurchaseScreenController::getAdditionalScreenInfo(ResourcePackPurchaseScreenController *this, int a2)
{
  const void **v2; // r5@1
  const void **v3; // r4@1

  v2 = (const void **)this;
  v3 = (const void **)StoreCatalogItemModel::getProductId((StoreCatalogItemModel *)(a2 + 452));
  *v2 = &unk_28898CC;
  sub_DA7404(v2, *((_DWORD *)*v3 - 3) + 3);
  sub_DA73D4(v2, " - ", 3u);
  return sub_DA7564(v2, v3);
}


void __fastcall ResourcePackPurchaseScreenController::_getPolymorphicButtonText(ResourcePackPurchaseScreenController *this, int a2)
{
  ResourcePackPurchaseScreenController::_getPolymorphicButtonText(this, a2);
}


void __fastcall ResourcePackPurchaseScreenController::~ResourcePackPurchaseScreenController(ResourcePackPurchaseScreenController *this)
{
  ResourcePackPurchaseScreenController::~ResourcePackPurchaseScreenController(this);
}


void __fastcall ResourcePackPurchaseScreenController::_getPolymorphicButtonText(ResourcePackPurchaseScreenController *this, int a2)
{
  int v2; // r5@1
  StoreCatalogItemModel *v3; // r6@1
  int *v4; // r4@1
  int v5; // r7@1
  void *v6; // r0@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  signed int v9; // r0@8
  char *v10; // r5@11
  char *v11; // r4@12
  int v12; // r6@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  int *v15; // r0@22
  void *v16; // r0@27
  unsigned int *v17; // r2@46
  signed int v18; // r1@48
  int v19; // [sp+14h] [bp-4Ch]@12
  char *v20; // [sp+18h] [bp-48h]@12
  char *v21; // [sp+1Ch] [bp-44h]@12
  char *v22; // [sp+20h] [bp-40h]@12
  int v23; // [sp+28h] [bp-38h]@12
  int v24; // [sp+30h] [bp-30h]@33
  int v25; // [sp+38h] [bp-28h]@2

  v2 = a2;
  v3 = (StoreCatalogItemModel *)(a2 + 452);
  v4 = (int *)this;
  v5 = StoreCatalogItemModel::getItemPerformanceRequirements((StoreCatalogItemModel *)(a2 + 452));
  if ( v5 > MainMenuScreenModel::getDevicePerfTier(*(MainMenuScreenModel **)(v2 + 424)) )
  {
    sub_DA7364((void **)&v25, "store.itemIsIncompatible");
    sub_DA73B4(v4, &v25);
    v6 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) == &dword_28898C0 )
      return;
    v7 = (unsigned int *)(v25 - 4);
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
      j_j_j_j_j__ZdlPv_9(v6);
    return;
  }
  if ( StoreCatalogItemModel::isOwned(v3) )
    v9 = DlcBatchModel::getDlcInstalledState(*(DlcBatchModel **)(v2 + 476));
    if ( v9 == 2 )
      sub_DA7364((void **)v4, "store.content.update");
    else if ( v9 )
      if ( (*(_DWORD *)(v2 + 456) | 4) == 5 )
        sub_DA7364((void **)v4, "gui.continue");
      else
        sub_DA7364((void **)v4, "store.resourcePack.activateTexturePack");
    else
      sub_DA7364((void **)v4, "store.content.download");
  else
    v10 = StoreCatalogItemModel::getPrice(v3);
    if ( !sub_DA7374((const void **)v10, "0") )
      sub_DA7364((void **)&v24, "store.free");
      I18n::get(v4, (int **)&v24);
      v6 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) == &dword_28898C0 )
        return;
      v7 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        goto LABEL_43;
      }
      goto LABEL_42;
    sub_DA7364((void **)&v23, "store.resourcePack.unlock");
    sub_DA73B4(&v19, (int *)v10);
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v20 = (char *)operator new(4u);
    v22 = v20 + 4;
    v21 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v19,
                    (int)&v20,
                    (int)v20);
    I18n::get(v4, &v23, (unsigned __int64 *)&v20);
    v12 = (int)v21;
    v11 = v20;
    if ( v20 != v21 )
        v15 = (int *)(*(_DWORD *)v11 - 12);
        if ( v15 != &dword_28898C0 )
        {
          v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
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
            j_j_j_j_j__ZdlPv_9(v15);
        }
        v11 += 4;
      while ( v11 != (char *)v12 );
      v11 = v20;
    if ( v11 )
      operator delete(v11);
    v16 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v19 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9(v16);
    v6 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v23 - 4);
}


signed int __fastcall ResourcePackPurchaseScreenController::_buttonCoinIconVisible(ResourcePackPurchaseScreenController *this)
{
  ResourcePackPurchaseScreenController *v1; // r6@1
  StoreCatalogItemModel *v2; // r5@1
  signed int v3; // r4@1
  int v4; // r6@2

  v1 = this;
  v2 = (ResourcePackPurchaseScreenController *)((char *)this + 452);
  v3 = 0;
  if ( !StoreCatalogItemModel::isOwned((ResourcePackPurchaseScreenController *)((char *)this + 452)) )
  {
    v4 = MainMenuScreenModel::getDevicePerfTier(*((MainMenuScreenModel **)v1 + 106));
    if ( v4 >= StoreCatalogItemModel::getItemPerformanceRequirements(v2) )
      v3 = 1;
  }
  return v3;
}


void __fastcall ResourcePackPurchaseScreenController::_handlePolymorphicButtonPress(ResourcePackPurchaseScreenController *this)
{
  ResourcePackPurchaseScreenController *v1; // r4@1
  StoreCatalogItemModel *v2; // r5@1
  int v3; // r4@3
  int *v4; // r0@3
  char *v5; // r4@5
  int v6; // r6@5
  int *v7; // r0@7
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int *v10; // r0@16
  void *v11; // r0@21
  unsigned int *v12; // r2@26
  signed int v13; // r1@28
  char v14; // [sp+Ch] [bp-44h]@3
  void (*v15)(void); // [sp+14h] [bp-3Ch]@3
  int v16; // [sp+1Ch] [bp-34h]@3
  char *v17; // [sp+20h] [bp-30h]@3
  char *v18; // [sp+24h] [bp-2Ch]@3
  char *v19; // [sp+28h] [bp-28h]@3

  v1 = this;
  v2 = (ResourcePackPurchaseScreenController *)((char *)this + 452);
  if ( StoreCatalogItemModel::isOwned((ResourcePackPurchaseScreenController *)((char *)this + 452)) )
  {
    if ( (DlcBatchModel::getDlcInstalledState(*((DlcBatchModel **)v1 + 119)) | 2) == 2 )
    {
      v3 = *((_DWORD *)v1 + 108);
      v4 = (int *)StoreCatalogItemModel::getProductId(v2);
      sub_DA73B4(&v16, v4);
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v17 = (char *)operator new(4u);
      v19 = v17 + 4;
      v18 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                      (int)&v16,
                      (int)&v17,
                      (int)v17);
      v15 = 0;
      DlcPreCheckScreenHandler::tryDownload(v3, (unsigned __int64 *)&v17, (int)&v14, 0, 0, 0, 0);
      if ( v15 )
        v15();
      v6 = (int)v18;
      v5 = v17;
      if ( v17 != v18 )
      {
        do
        {
          v10 = (int *)(*(_DWORD *)v5 - 12);
          if ( v10 != &dword_28898C0 )
          {
            v8 = (unsigned int *)(*(_DWORD *)v5 - 4);
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
              j_j_j_j_j__ZdlPv_9(v10);
          }
          v5 += 4;
        }
        while ( v5 != (char *)v6 );
        v5 = v17;
      }
      if ( v5 )
        operator delete(v5);
      v11 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v16 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9(v11);
    }
    else if ( (*((_DWORD *)v1 + 114) | 4) == 5 )
      j_j_j__ZN20MinecraftScreenModel11leaveScreenEv(*((MinecraftScreenModel **)v1 + 106));
    else
      j_j_j__ZN20MinecraftScreenModel23navigateToOptionsScreenE16SettingsTabIndexb(*((_DWORD *)v1 + 106), 15, 0);
  }
  else
    v7 = (int *)StoreCatalogItemModel::getProductId(v2);
    j_j_j__ZN31PurchaseEnabledScreenController14_purchaseOfferERKSs((int)v1, v7);
}
