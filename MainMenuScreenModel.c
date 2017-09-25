

int __fastcall MainMenuScreenModel::getStoreCatalogItemByPackIdentity(MainMenuScreenModel *this, const mce::UUID *a2)
{
  const mce::UUID *v2; // r4@1
  StoreCatalogRepository *v3; // r0@1
  void *v4; // r0@1
  int v6; // [sp+4h] [bp-Ch]@1

  v2 = a2;
  v3 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  v4 = (void *)StoreCatalogRepository::getStoreCatalogItemByPackIdentity(v3, v2);
  StoreCatalogItemModel::StoreCatalogItemModel(&v6, v4);
  return v6;
}


void __fastcall MainMenuScreenModel::navigateToUGCViewerScreen(int a1, int a2)
{
  MainMenuScreenModel::navigateToUGCViewerScreen(a1, a2);
}


void __fastcall MainMenuScreenModel::navigateToRealmsCreateScreen(int a1, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)(a1 + 20);
  SceneFactory::createRealmsCreateScreen((unsigned __int64 *)&v8, SHIDWORD(v2), a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


void __fastcall MainMenuScreenModel::getRealmsProductDescription(MainMenuScreenModel *this)
{
  MainMenuScreenModel::getRealmsProductDescription(this);
}


void __fastcall MainMenuScreenModel::navigateToCreateNewWorldFromTemplateScreen(MainMenuScreenModel *this, const LevelSummary *a2)
{
  MainMenuScreenModel::navigateToCreateNewWorldFromTemplateScreen(this, a2);
}


unsigned int __fastcall MainMenuScreenModel::createContentManager(MainMenuScreenModel *this, int a2)
{
  int v2; // r6@1
  MainMenuScreenModel *v3; // r9@1
  int v4; // r8@1
  unsigned int v5; // r0@2
  unsigned int *v6; // r7@2
  unsigned int v7; // r1@5
  unsigned int v8; // r2@6
  unsigned int v9; // r0@9
  int v10; // r10@12
  int v11; // r4@12
  int v12; // r5@12
  int v13; // r5@12
  unsigned int *v14; // r1@13
  unsigned int v15; // r0@15
  unsigned int *v16; // r4@19
  unsigned int v17; // r0@21
  unsigned int result; // r0@28
  unsigned int *v19; // r4@32
  int v20; // [sp+Ch] [bp-2Ch]@12
  int v21; // [sp+10h] [bp-28h]@7
  int v22; // [sp+14h] [bp-24h]@7

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 8);
  if ( !v4 )
    std::__throw_bad_weak_ptr();
  v5 = *(_DWORD *)(v4 + 4);
  v6 = (unsigned int *)(v4 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v5 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
        break;
      __clrex();
      v5 = v7;
    }
    v8 = __strex(v5 + 1, v6);
    v5 = v7;
  }
  while ( v8 );
  __dmb();
  v21 = *(_DWORD *)(v2 + 4);
  v22 = v4;
  if ( &pthread_create )
    __dmb();
    do
      v9 = __ldrex(v6);
    while ( __strex(v9 + 1, v6) );
  else
    ++*v6;
  v10 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v2 + 12));
  v11 = MinecraftGame::getContentCatalogService(*(MinecraftGame **)(v2 + 12));
  v12 = MinecraftGame::getPackSourceFactory(*(MinecraftGame **)(v2 + 12));
  v20 = MinecraftScreenModel::getResourcePackRepository((MinecraftScreenModel *)v2);
  std::make_unique<ContentManager,std::shared_ptr<MainMenuScreenModel>,StoreCatalogRepository &,ContentCatalogService &,PackSourceFactory &,ResourcePackRepository *>(
    v3,
    (int)&v21,
    v10,
    v11,
    v12,
    &v20);
  v13 = v22;
  if ( v22 )
    v14 = (unsigned int *)(v22 + 4);
    if ( &pthread_create )
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
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
      result = __ldrex(v6);
    while ( __strex(result - 1, v6) );
    result = (*v6)--;
  if ( result == 1 )
    v19 = (unsigned int *)(v4 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
      result = (*v19)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return result;
}


signed int __fastcall MainMenuScreenModel::getNumStoreCatalogCategoryRows(MainMenuScreenModel *this)
{
  StoreCatalogRepository *v1; // r0@1
  char *v2; // r0@1

  v1 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  v2 = StoreCatalogRepository::getStoreContentRows(v1);
  return (signed int)((*(_QWORD *)v2 >> 32) - *(_QWORD *)v2) >> 3;
}


signed int __fastcall MainMenuScreenModel::prepareAppStoreForPurchases(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  signed int v5; // r4@3
  int v7; // [sp+0h] [bp-20h]@2
  void (*v8)(void); // [sp+8h] [bp-18h]@1
  int v9; // [sp+Ch] [bp-14h]@2

  v2 = a2;
  v3 = MinecraftGame::getOfferRepository(*(MinecraftGame **)(a1 + 12));
  v8 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v7, v2, 2);
    v9 = *(_DWORD *)(v2 + 12);
    v8 = *(void (**)(void))(v2 + 8);
  }
  v5 = OfferRepository::prepareAppStoreForPurchases(v3, (int)&v7);
  if ( v8 )
    v8();
  return v5;
}


  if ( MainMenuScreenModel::getUnfulfilledMinecoinPurchase(*(_DWORD *)(v1 + 424), (int)&v18) == 1 )
{
    if ( v18 )
    {
      MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&s2, *(_DWORD *)(v1 + 424));
      v2 = (char *)s2;
      v3 = 0;
      v4 = (char *)s2 - 12;
      v5 = *((_DWORD *)s1 - 3);
      if ( v5 == *((_DWORD *)s2 - 3) && !memcmp(s1, s2, v5) )
        v3 = 1;
      if ( (int *)v4 != &dword_28898C0 )
      {
        v15 = (unsigned int *)(v2 - 4);
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
          j_j_j_j_j__ZdlPv_9_2(v4);
      }
      if ( v3 == 1 )
        MinecoinPurchaseScreenController::_promptForAutoFulfillment(v1, (unsigned __int64 *)&v21);
      else
        MinecoinPurchaseScreenController::_promptForXuidOverrideAndFulfillment(v1, (unsigned __int64 *)&v21);
    }
    else
      MinecoinPurchaseScreenController::_promptForUnknownXuidOverrideAndFulfillment(v1, (unsigned __int64 *)&v21);
  }
  v6 = v22;
  if ( v22 )
  {
    v7 = (unsigned int *)(v22 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  v9 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)((char *)s1 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  v10 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v19 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v10);
}


signed int __fastcall MainMenuScreenModel::getStoreCatalogNavButtonSize(int a1, int **a2)
{
  int **v2; // r4@1
  int v3; // r0@1
  int v4; // r0@1

  v2 = a2;
  v3 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a1 + 12));
  v4 = StoreCatalogRepository::getStoreButtonContentTypeList(v3, v2);
  return (signed int)((*(_QWORD *)(v4 + 24) >> 32) - *(_QWORD *)(v4 + 24)) >> 2;
}


void __fastcall MainMenuScreenModel::getRealmsProductDescription(MainMenuScreenModel *this)
{
  int *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@2
  unsigned int *v4; // r2@4
  signed int v5; // r1@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  int v8; // [sp+4h] [bp-2Ch]@1
  int v9; // [sp+Ch] [bp-24h]@1

  v1 = (int *)this;
  sub_DA7364((void **)&v9, "store/realms_purchase_info_");
  sub_DA7364((void **)&v8, ".txt");
  I18n::getLocalizedAssetFileWithFallback(v1, &v9, (const void **)&v8);
  v2 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9(v2);
  }
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v9 - 4);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
}


void __fastcall MainMenuScreenModel::navigateToPatchNotesScreen(MainMenuScreenModel *this)
{
  PatchNotesModel *v1; // r0@2
  PatchNotesModel *v2; // [sp+4h] [bp-Ch]@1

  v2 = 0;
  MainMenuScreenModel::navigateToPatchNotesScreen((int)this, &v2);
  if ( v2 )
  {
    v1 = PatchNotesModel::~PatchNotesModel(v2);
    j_j_j__ZdlPv_3((void *)v1);
  }
}


void __fastcall MainMenuScreenModel::updateStoreCatalogUpdateRow(MainMenuScreenModel *this)
{
  StoreCatalogRepository *v1; // r0@1

  v1 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  j_j_j__ZN22StoreCatalogRepository27updateStoreCatalogUpdateRowEv(v1);
}


int __fastcall MainMenuScreenModel::getUserCoinBalance(MainMenuScreenModel *this)
{
  int result; // r0@1

  result = *(_DWORD *)(MinecraftGame::getEntitlementManager(*((MinecraftGame **)this + 3)) + 72);
  __dmb();
  return result;
}


unsigned int __fastcall MainMenuScreenModel::_getWeakPtr(MainMenuScreenModel *this, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r2@2
  unsigned int *v4; // r5@2
  unsigned int v5; // r3@5
  unsigned int v6; // r6@6
  int v7; // r1@7
  unsigned int v8; // r2@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int result; // r0@32

  v2 = *(_DWORD *)(a2 + 8);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)(a2 + 4);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
  *(_DWORD *)this = v7;
  *((_DWORD *)this + 1) = v2;
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v4);
    while ( __strex(result - 1, v4) );
    result = (*v4)--;
  if ( result == 1 )
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


void __fastcall MainMenuScreenModel::navigateToThirdPartyStoreScreen(MainMenuScreenModel *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createThirdPartyStoreScreen((SceneFactory *)&v7, SHIDWORD(v1));
  SceneStack::pushScreen(v1, (int)&v7, 0);
  v2 = v8;
  if ( v8 )
  {
    v3 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
}


void __fastcall MainMenuScreenModel::tryNavigateToSafeZoneScreenOnFirstSignin(MainMenuScreenModel *this)
{
  MainMenuScreenModel::tryNavigateToSafeZoneScreenOnFirstSignin(this);
}


signed int __fastcall MainMenuScreenModel::getUnfulfilledRealmsPurchase(MainMenuScreenModel *this, RealmsPurchaseDetails *a2)
{
  RealmsPurchaseDetails *v2; // r4@1
  OfferRepository *v3; // r0@1

  v2 = a2;
  v3 = (OfferRepository *)MinecraftGame::getOfferRepository(*((MinecraftGame **)this + 3));
  return j_j_j__ZN15OfferRepository28getUnfulfilledRealmsPurchaseER21RealmsPurchaseDetails(v3, v2);
}


void __fastcall MainMenuScreenModel::getStoreCatalogStringFromDictionary(int *a1, int a2, int *a3)
{
  int *v3; // r5@1
  int *v4; // r4@1
  int v5; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a2 + 12));
  StoreCatalogRepository::getStoreDictionaryString(v3, v5, v4);
}


void __fastcall MainMenuScreenModel::navigateToPlayScreen(int a1, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)(a1 + 20);
  SceneFactory::createPlayScreen((unsigned __int64 *)&v8, SHIDWORD(v2), a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


void __fastcall MainMenuScreenModel::navigateToDlcProgressScreen(int a1, unsigned __int64 *a2, int a3, char a4)
{
  __int64 v4; // kr00_8@1
  int v5; // r4@1
  char v6; // r6@1
  void (__fastcall *v7)(char *, int, signed int); // r3@1
  unsigned __int64 *v8; // r5@1
  int v9; // r4@3
  unsigned int *v10; // r1@4
  unsigned int v11; // r0@6
  unsigned int *v12; // r5@10
  unsigned int v13; // r0@12
  char v14; // [sp+8h] [bp-30h]@2
  void (*v15)(void); // [sp+10h] [bp-28h]@1
  int v16; // [sp+14h] [bp-24h]@2
  char v17; // [sp+18h] [bp-20h]@3
  int v18; // [sp+1Ch] [bp-1Ch]@3

  v4 = *(_QWORD *)(a1 + 20);
  v5 = a3;
  v15 = 0;
  v6 = a4;
  v7 = *(void (__fastcall **)(char *, int, signed int))(a3 + 8);
  v8 = a2;
  if ( v7 )
  {
    v7(&v14, a3, 2);
    v16 = *(_DWORD *)(v5 + 12);
    v15 = *(void (**)(void))(v5 + 8);
  }
  SceneFactory::createDlcProgressScreen((unsigned __int64 *)&v17, SHIDWORD(v4), v8, (int)&v14, v6);
  SceneStack::pushScreen(v4, (int)&v17, 0);
  v9 = v18;
  if ( v18 )
    v10 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
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
  if ( v15 )
    v15();
}


void __fastcall MainMenuScreenModel::navigateToCoinPurchaseScreen(MainMenuScreenModel *this)
{
  MainMenuScreenModel::navigateToCoinPurchaseScreen(this);
}


void __fastcall MainMenuScreenModel::getContentIdsFromDlcDependencies(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, char a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, void *a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, char a32)
{
  int v32; // r9@1
  int v33; // r8@1
  unsigned __int64 *v34; // r6@1
  double v35; // r0@1
  unsigned int v36; // r0@1
  int v37; // r5@3
  int *v38; // r7@3
  int v39; // r4@4
  int v40; // r5@4
  char *v41; // r7@5
  unsigned int *v42; // r2@6
  signed int v43; // r1@8
  unsigned int *v44; // r2@10
  signed int v45; // r1@12
  unsigned int *v46; // r2@14
  signed int v47; // r1@16
  unsigned int *v48; // r2@30
  signed int v49; // r1@32
  unsigned int *v50; // r2@34
  signed int v51; // r1@36
  int v52; // r10@46
  int v53; // r1@46
  int v54; // r2@46
  int v55; // r3@46
  int v56; // r0@46
  void *v57; // r0@46
  void *v58; // r0@47
  void *v59; // r0@48
  int v60; // r10@50
  char *v61; // r4@50
  void *v62; // r0@50
  int v63; // r7@50
  bool v64; // zf@51
  void *v65; // r0@52
  int *v66; // r2@54
  _DWORD *v67; // r6@54
  int *i; // r0@55
  int *v69; // r1@57
  unsigned int *v70; // r2@64
  signed int v71; // r1@66
  void *v72; // r5@72
  int v73; // r1@72
  void *v74; // r0@72
  char v75; // [sp+10h] [bp-B8h]@52
  int v76; // [sp+18h] [bp-B0h]@34
  int v77; // [sp+1Ch] [bp-ACh]@30
  char v78; // [sp+20h] [bp-A8h]@5
  int v79; // [sp+24h] [bp-A4h]@46
  int v80; // [sp+28h] [bp-A0h]@46
  int v81; // [sp+2Ch] [bp-9Ch]@46
  int v82; // [sp+30h] [bp-98h]@46
  int v83; // [sp+38h] [bp-90h]@14
  int v84; // [sp+3Ch] [bp-8Ch]@10
  int v85; // [sp+40h] [bp-88h]@6
  char v86; // [sp+48h] [bp-80h]@46
  char v87; // [sp+50h] [bp-78h]@46
  int v88; // [sp+60h] [bp-68h]@50
  void *ptr; // [sp+80h] [bp-48h]@4
  unsigned int v90; // [sp+84h] [bp-44h]@1
  _DWORD *v91; // [sp+88h] [bp-40h]@1
  int v92; // [sp+8Ch] [bp-3Ch]@1
  signed int v93; // [sp+90h] [bp-38h]@1
  int v94; // [sp+94h] [bp-34h]@1
  int v95; // [sp+98h] [bp-30h]@75

  v32 = a2;
  v33 = a1;
  v34 = (unsigned __int64 *)a3;
  v91 = 0;
  v92 = 0;
  v93 = 1065353216;
  v94 = 0;
  HIDWORD(v35) = 10;
  LODWORD(v35) = &v93;
  v36 = sub_DA7744(v35);
  v90 = v36;
  if ( v36 == 1 )
  {
    v38 = &v95;
    v95 = 0;
  }
  else
    if ( v36 >= 0x40000000 )
      sub_DA7414();
    v37 = 4 * v36;
    v38 = (int *)operator new(4 * v36);
    _aeabi_memclr4(v38, v37);
  ptr = v38;
  v39 = *v34 >> 32;
  v40 = *v34;
  if ( v40 != v39 )
    v41 = &v78;
    do
    {
      v52 = MinecraftGame::getEntitlementManager(*(MinecraftGame **)(v32 + 12));
      v53 = *(_DWORD *)(v40 + 4);
      v54 = *(_DWORD *)(v40 + 8);
      v55 = *(_DWORD *)(v40 + 12);
      *(_DWORD *)&v78 = *(_DWORD *)v40;
      v79 = v53;
      v80 = v54;
      v81 = v55;
      SemVersion::SemVersion((int)&v82, v40 + 16);
      v86 = *(_BYTE *)(v40 + 40);
      v56 = EntitlementManager::getEntitlement(v52, (int)v41);
      Entitlement::Entitlement((int)&v87, v56);
      v57 = (void *)(v85 - 12);
      if ( (int *)(v85 - 12) != &dword_28898C0 )
      {
        v42 = (unsigned int *)(v85 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
        }
        else
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j_j__ZdlPv_9(v57);
      }
      v58 = (void *)(v84 - 12);
      if ( (int *)(v84 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v84 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j_j__ZdlPv_9(v58);
      v59 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v83 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j_j__ZdlPv_9(v59);
      if ( Entitlement::isOwned((Entitlement *)&v87) == 1 )
        sub_DA73B4(&v77, &v88);
        v60 = v39;
        v61 = v41;
        v62 = (void *)(v77 - 12);
        v63 = *(_DWORD *)(v77 - 12);
        if ( (int *)(v77 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v77 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
          }
          else
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j_j__ZdlPv_9(v62);
        v64 = v63 == 0;
        v41 = v61;
        v39 = v60;
        if ( !v64 )
          sub_DA73B4(&v76, &v88);
          std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
            (int *)&v75,
            (unsigned __int64 *)&ptr,
            (int **)&v76);
          v65 = (void *)(v76 - 12);
          if ( (int *)(v76 - 12) != &dword_28898C0 )
            v50 = (unsigned int *)(v76 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v51 = __ldrex(v50);
              while ( __strex(v51 - 1, v50) );
              v39 = v60;
            }
            else
              v51 = (*v50)--;
            if ( v51 <= 0 )
              j_j_j_j_j__ZdlPv_9(v65);
      Entitlement::~Entitlement((Entitlement *)&v87);
      v40 += 56;
    }
    while ( v40 != v39 );
  v66 = 0;
  *(_DWORD *)v33 = 0;
  *(_DWORD *)(v33 + 4) = 0;
  v67 = v91;
  *(_DWORD *)(v33 + 8) = 0;
  if ( v67 )
    for ( i = 0; ; i = (int *)*(_QWORD *)(v33 + 4) )
      v69 = v67 + 1;
      if ( i == v66 )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)v33,
          v69);
      else
        *(_DWORD *)(v33 + 4) = sub_DA73B4(i, v69) + 1;
      v67 = (_DWORD *)*v67;
      if ( !v67 )
        break;
      v66 = (int *)(*(_QWORD *)(v33 + 4) >> 32);
    v67 = v91;
  while ( v67 )
    v72 = v67;
    v73 = *(_QWORD *)v67 >> 32;
    v67 = (_DWORD *)*(_QWORD *)v67;
    v74 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v73 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j_j__ZdlPv_9(v74);
    operator delete(v72);
  _aeabi_memclr4(ptr, 4 * v90);
  if ( ptr )
    if ( &v95 != ptr )
      operator delete(ptr);
}


int __fastcall MainMenuScreenModel::getDevicePerfTier(MainMenuScreenModel *this)
{
  StoreCatalogRepository *v1; // r0@1

  v1 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK22StoreCatalogRepository17getDevicePerfTierEv(v1);
}


void __fastcall MainMenuScreenModel::navigateToStoreItemListScreen(int a1, int *a2, int *a3, int *a4)
{
  MainMenuScreenModel::navigateToStoreItemListScreen(a1, a2, a3, a4);
}


int __fastcall MainMenuScreenModel::navigateToRealmsWorldProgressScreen(int a1, int *a2, int *a3, int *a4)
{
  __int64 v4; // kr00_8@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  int result; // r0@17
  int v13; // [sp+8h] [bp-20h]@1
  int v14; // [sp+Ch] [bp-1Ch]@1
  char v15; // [sp+10h] [bp-18h]@1
  int v16; // [sp+14h] [bp-14h]@1

  v4 = *(_QWORD *)(a1 + 20);
  v5 = *a3;
  *a3 = 0;
  v14 = v5;
  v6 = *a4;
  *a4 = 0;
  v13 = v6;
  SceneFactory::createRealmsJoinProgressScreen((unsigned __int64 *)&v15, SHIDWORD(v4), a2, &v14, (int)&v13, 1);
  SceneStack::pushScreen(v4, (int)&v15, 0);
  v7 = v16;
  if ( v16 )
  {
    v8 = (unsigned int *)(v16 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  v13 = 0;
  result = v14;
  if ( v14 )
    result = (*(int (**)(void))(*(_DWORD *)v14 + 4))();
  return result;
}


int __fastcall MainMenuScreenModel::getDlcBatchModel(int a1, unsigned __int64 *a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r6@1
  int v4; // r7@1
  unsigned __int64 *v5; // r8@1
  int v6; // r5@1
  int v7; // r7@4
  int v8; // r0@4
  __int64 v9; // r0@4
  int v11; // [sp+0h] [bp-58h]@4

  v2 = a1;
  v3 = a2;
  v5 = (unsigned __int64 *)(a1 + 68);
  v4 = *(_DWORD *)(a1 + 68);
  v6 = *(_DWORD *)(a1 + 72);
  if ( v4 == v6 )
  {
LABEL_4:
    v7 = MinecraftGame::getDownloadMonitor(*(MinecraftGame **)(v2 + 12));
    v8 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v2 + 12));
    DlcBatchModel::DlcBatchModel((int)&v11, v7, v8, v3);
    v9 = *(_QWORD *)(v2 + 72);
    if ( (_DWORD)v9 == HIDWORD(v9) )
    {
      std::vector<DlcBatchModel,std::allocator<DlcBatchModel>>::_M_emplace_back_aux<DlcBatchModel>(v5, (int)&v11);
    }
    else
      DlcBatchModel::DlcBatchModel(v9, (int)&v11);
      *(_DWORD *)(v2 + 72) += 64;
    DlcBatchModel::~DlcBatchModel((DlcBatchModel *)&v11);
    v4 = *(_DWORD *)(v2 + 72) - 64;
  }
  else
    while ( !DlcBatchModel::compareToPackIds(v4, v3) )
      v4 += 64;
      if ( v6 == v4 )
        goto LABEL_4;
  return v4;
}


void __fastcall MainMenuScreenModel::navigateToRealmsWhitelistScreen(MainMenuScreenModel *this, const Realms::World *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createRealmsWhitelistScreen((SceneFactory *)&v8, (const Realms::World *)HIDWORD(v2), a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


MinecraftScreenModel *__fastcall MainMenuScreenModel::~MainMenuScreenModel(MainMenuScreenModel *this)
{
  MainMenuScreenModel *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r5@15
  unsigned int *v8; // r1@16
  unsigned int v9; // r0@18
  unsigned int *v10; // r6@22
  unsigned int v11; // r0@24
  WorldSeedCatalogModel *v12; // r0@29
  WorldSeedCatalogModel *v13; // r0@30
  PatchNotesModel *v14; // r0@31
  PatchNotesModel *v15; // r0@32
  MinecoinCatalogModel *v16; // r0@33
  MinecoinCatalogModel *v17; // r0@34
  char *v18; // r0@35
  char *v19; // r5@35
  int v20; // r6@36

  v1 = this;
  *(_DWORD *)this = &off_26D7E50;
  v2 = *((_DWORD *)this + 26);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = *((_DWORD *)v1 + 24);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  v12 = (WorldSeedCatalogModel *)*((_DWORD *)v1 + 22);
  if ( v12 )
    v13 = WorldSeedCatalogModel::~WorldSeedCatalogModel(v12);
    operator delete((void *)v13);
  *((_DWORD *)v1 + 22) = 0;
  v14 = (PatchNotesModel *)*((_DWORD *)v1 + 21);
  if ( v14 )
    v15 = PatchNotesModel::~PatchNotesModel(v14);
    operator delete((void *)v15);
  *((_DWORD *)v1 + 21) = 0;
  v16 = (MinecoinCatalogModel *)*((_DWORD *)v1 + 20);
  if ( v16 )
    v17 = MinecoinCatalogModel::~MinecoinCatalogModel(v16);
    operator delete((void *)v17);
  *((_DWORD *)v1 + 20) = 0;
  v19 = (char *)(*(_QWORD *)((char *)v1 + 68) >> 32);
  v18 = (char *)*(_QWORD *)((char *)v1 + 68);
  if ( v18 != v19 )
    do
      v20 = (int)(v18 + 64);
      (**(void (***)(void))v18)();
      v18 = (char *)v20;
    while ( v19 != (char *)v20 );
    v18 = (char *)*((_DWORD *)v1 + 17);
  if ( v18 )
    operator delete(v18);
  return j_j_j__ZN20MinecraftScreenModelD2Ev(v1);
}


signed int __fastcall MainMenuScreenModel::purchaseMinecoinOffer(int a1, MinecoinModel *a2, int *a3)
{
  int v3; // r7@1
  int *v4; // r5@1
  Offer *v5; // r6@1
  signed int v6; // r4@1
  int v7; // r0@2
  int v8; // r1@2
  int v10; // [sp+0h] [bp-18h]@2

  v3 = a1;
  v4 = a3;
  v5 = (Offer *)MinecoinModel::_getOffer(a2);
  v6 = 0;
  if ( v5 )
  {
    v7 = MinecraftGame::getOfferRepository(*(MinecraftGame **)(v3 + 12));
    v8 = *v4;
    *v4 = 0;
    v10 = v8;
    v6 = OfferRepository::purchaseOffer(v7, v5, &v10);
    std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v10);
  }
  return v6;
}


void __fastcall MainMenuScreenModel::updateStoreCatalogUpdateRow(MainMenuScreenModel *this)
{
  MainMenuScreenModel::updateStoreCatalogUpdateRow(this);
}


_DWORD *__fastcall MainMenuScreenModel::getUserCoinBalanceAsString(MainMenuScreenModel *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  int v4; // r1@1
  void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  void **v10; // [sp+0h] [bp-D0h]@1
  int v11; // [sp+4h] [bp-CCh]@2
  void **v12; // [sp+8h] [bp-C8h]@1
  void **v13; // [sp+Ch] [bp-C4h]@1
  int v14; // [sp+28h] [bp-A8h]@2
  int v15; // [sp+30h] [bp-A0h]@1
  int v16; // [sp+34h] [bp-9Ch]@2

  v2 = a2;
  v3 = (int *)this;
  sub_DA7794((int)&v10, 24);
  v4 = *(_DWORD *)(MinecraftGame::getEntitlementManager(*(MinecraftGame **)(v2 + 12)) + 72);
  __dmb();
  sub_DA78E4((int)&v12, v4);
  sub_DA77A4(v3, (int)&v13);
  v5 = off_26D3F84;
  v10 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v10) = off_26D3F80[0];
  v12 = v5;
  v13 = &off_27734E8;
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v15 - 4);
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
      j_j_j_j_j__ZdlPv_9(v6);
  }
  v13 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v14);
  v10 = (void **)off_26D3F68;
  *(void ***)((char *)&v10 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v11 = 0;
  return sub_DA76E4(&v16);
}


void __fastcall MainMenuScreenModel::navigateToCreateWorldScreen(MainMenuScreenModel *this, bool a2)
{
  MainMenuScreenModel::navigateToCreateWorldScreen(this, a2);
}


char *__fastcall MainMenuScreenModel::navigateToWorldTemplateScreen(MainMenuScreenModel *this, const WorldTemplateInfo *a2)
{
  MainMenuScreenModel *v2; // r6@1
  WorldTemplateInfo *v3; // r4@1
  Minecraft *v4; // r0@2
  int v5; // r0@2
  void *v6; // r0@2
  __int64 v7; // r1@2
  PackManifest *v8; // r0@4
  char v9; // r10@4
  PackManifest *v10; // r0@4
  char v11; // r8@4
  int v12; // r0@4
  void *v13; // r0@4
  PackManifest *v14; // r0@5
  __int64 v15; // kr00_8@5
  PackManifest *v16; // r0@5
  char *v17; // r9@5
  PackManifest *v18; // r0@5
  int v19; // r7@5
  unsigned int *v20; // r0@6
  unsigned int v21; // r1@8
  char *result; // r0@10
  void *v23; // r6@14
  unsigned int *v24; // r0@15
  unsigned int v25; // r1@17
  int v26; // r4@22
  unsigned int *v27; // r1@23
  unsigned int v28; // r0@25
  unsigned int *v29; // r5@29
  unsigned int v30; // r0@31
  void *v31; // r0@38
  void *v32; // r0@39
  char *v33; // r0@40
  unsigned int *v34; // r2@42
  unsigned int v35; // r1@44
  void *v36; // r0@49
  int v37; // r0@50
  unsigned int *v38; // r2@51
  unsigned int v39; // r1@53
  void *v40; // r0@58
  void *v41; // r0@59
  void *v42; // r0@60
  void *v43; // r0@61
  unsigned int *v44; // r2@64
  signed int v45; // r1@66
  unsigned int *v46; // r2@68
  signed int v47; // r1@70
  unsigned int *v48; // r2@72
  signed int v49; // r1@74
  unsigned int *v50; // r2@76
  signed int v51; // r1@78
  unsigned int *v52; // r2@80
  signed int v53; // r1@82
  unsigned int *v54; // r2@84
  signed int v55; // r1@86
  unsigned int *v56; // r2@88
  signed int v57; // r1@90
  unsigned int *v58; // r2@92
  signed int v59; // r1@94
  unsigned int *v60; // r2@96
  signed int v61; // r1@98
  int v62; // [sp+14h] [bp-4A4h]@5
  int v63; // [sp+18h] [bp-4A0h]@5
  char *v64; // [sp+1Ch] [bp-49Ch]@14
  int v65; // [sp+20h] [bp-498h]@14
  int v66; // [sp+24h] [bp-494h]@14
  __int16 v67; // [sp+28h] [bp-490h]@14
  void *v68; // [sp+2Ch] [bp-48Ch]@20
  void (*v69)(void); // [sp+34h] [bp-484h]@14
  char *(__fastcall *v70)(int, int); // [sp+38h] [bp-480h]@20
  int v71; // [sp+40h] [bp-478h]@5
  char v72; // [sp+44h] [bp-474h]@22
  int v73; // [sp+48h] [bp-470h]@22
  int v74; // [sp+4Ch] [bp-46Ch]@5
  int v75; // [sp+50h] [bp-468h]@5
  int v76; // [sp+54h] [bp-464h]@5
  int v77; // [sp+58h] [bp-460h]@4
  int v78; // [sp+5Ch] [bp-45Ch]@4
  void *v79; // [sp+60h] [bp-458h]@2
  __int64 v80; // [sp+68h] [bp-450h]@2
  int v81; // [sp+70h] [bp-448h]@2
  int v82; // [sp+74h] [bp-444h]@2
  int v83; // [sp+78h] [bp-440h]@2
  int v84; // [sp+7Ch] [bp-43Ch]@2
  char v85; // [sp+88h] [bp-430h]@2
  int v86; // [sp+8Ch] [bp-42Ch]@2
  RakNet *v87; // [sp+490h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v87 = _stack_chk_guard;
  if ( a2 )
  {
    v4 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)this + 4));
    v5 = Minecraft::getLevelSource(v4);
    (*(void (__fastcall **)(int *))(*(_DWORD *)v5 + 64))(&v84);
    v81 = v84;
    v82 = *(_DWORD *)(v84 - 12);
    v6 = operator new(1u);
    LODWORD(v7) = sub_CD5C76;
    v79 = v6;
    HIDWORD(v7) = sub_CD5C6C;
    v80 = v7;
    Core::FileSystem::createUniquePathFromSeed((int)&v85, (__int64 *)&v81, (int)&v79);
    sub_DA7364((void **)&v83, (const char *)&v86);
    if ( (_DWORD)v80 )
      ((void (*)(void))v80)();
    v8 = (PackManifest *)WorldTemplateInfo::getPackManifest(v3);
    v9 = PackManifest::isPremium(v8);
    v10 = (PackManifest *)WorldTemplateInfo::getPackManifest(v3);
    v11 = PackManifest::isPlatformLocked(v10);
    v12 = WorldTemplateInfo::getPackManifest(v3);
    PackManifest::getName((PackManifest *)&v77, v12);
    I18n::get(&v78, (int **)&v77);
    v13 = (void *)(v77 - 12);
    if ( (int *)(v77 - 12) != &dword_28898C0 )
    {
      v44 = (unsigned int *)(v77 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
      }
      else
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    }
    v14 = (PackManifest *)WorldTemplateInfo::getPackManifest(v3);
    PackManifest::getIdentity(v14);
    mce::UUID::asString((mce::UUID *)&v76);
    MainMenuScreenModel::_getWeakPtr((MainMenuScreenModel *)&v74, (int)v2);
    v15 = *(_QWORD *)((char *)v2 + 20);
    sub_DA7364((void **)&v71, "progressScreen.message.initiatingTemplate");
    v16 = (PackManifest *)WorldTemplateInfo::getPackManifest(v3);
    v17 = PackManifest::getLocation(v16);
    v18 = (PackManifest *)WorldTemplateInfo::getPackManifest(v3);
    v19 = PackManifest::getManifestOrigin(v18);
    v62 = v74;
    v63 = v75;
    if ( v75 )
      v20 = (unsigned int *)(v75 + 8);
          v21 = __ldrex(v20);
        while ( __strex(v21 + 1, v20) );
        ++*v20;
    sub_DA73B4((int *)&v64, &v83);
    sub_DA73B4(&v65, &v78);
    sub_DA73B4(&v66, &v76);
    LOBYTE(v67) = v9;
    HIBYTE(v67) = v11;
    v69 = 0;
    v23 = operator new(0x18u);
    *(_DWORD *)v23 = v62;
    *((_DWORD *)v23 + 1) = v63;
    if ( v63 )
      v24 = (unsigned int *)(v63 + 8);
          v25 = __ldrex(v24);
        while ( __strex(v25 + 1, v24) );
        ++*v24;
    *((_DWORD *)v23 + 2) = v64;
    v64 = (char *)&unk_28898CC;
    sub_DA73B4((int *)v23 + 3, &v65);
    sub_DA73B4((int *)v23 + 4, &v66);
    *((_WORD *)v23 + 10) = v67;
    v68 = v23;
    v69 = (void (*)(void))sub_CD5F2C;
    v70 = sub_CD5CA4;
    if ( v19 != 1 )
      v19 = 0;
    SceneFactory::createFileCopyProgressScreen(
      (unsigned __int64 *)&v72,
      SHIDWORD(v15),
      &v71,
      (int)v17,
      v19,
      &v83,
      0,
      (int)&v68);
    SceneStack::pushScreen(v15, (int)&v72, 0);
    v26 = v73;
    if ( v73 )
      v27 = (unsigned int *)(v73 + 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        v29 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        }
        else
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
    if ( v69 )
      v69();
    v31 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v66 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j_j__ZdlPv_9(v31);
    v32 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v65 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j_j__ZdlPv_9(v32);
    v33 = v64 - 12;
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v64 - 4);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j_j__ZdlPv_9(v33);
      v34 = (unsigned int *)(v63 + 8);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 == 1 )
        (*(void (**)(void))(*(_DWORD *)v63 + 12))();
    v36 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v71 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j_j__ZdlPv_9(v36);
    v37 = v75;
      v38 = (unsigned int *)(v75 + 8);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 == 1 )
        (*(void (**)(void))(*(_DWORD *)v37 + 12))();
    v40 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v76 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j_j__ZdlPv_9(v40);
    v41 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v78 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j_j__ZdlPv_9(v41);
    v42 = (void *)(v83 - 12);
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v83 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j_j__ZdlPv_9(v42);
    v43 = (void *)(v84 - 12);
    if ( (int *)(v84 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v84 - 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j_j__ZdlPv_9(v43);
    result = (char *)(_stack_chk_guard - v87);
    if ( _stack_chk_guard != v87 )
LABEL_63:
      _stack_chk_fail(result);
  }
  else
      goto LABEL_63;
    result = (char *)j_j_j__ZN20MinecraftScreenModel11leaveScreenEv(v2);
  return result;
}


int __fastcall MainMenuScreenModel::getDlcBatchModel(int a1, unsigned __int64 *a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r6@1
  int v4; // r7@1
  unsigned __int64 *v5; // r8@1
  int v6; // r5@1
  int v7; // r7@4
  int v8; // r0@4
  __int64 v9; // r0@4
  int v11; // [sp+0h] [bp-58h]@4

  v2 = a1;
  v3 = a2;
  v5 = (unsigned __int64 *)(a1 + 68);
  v4 = *(_DWORD *)(a1 + 68);
  v6 = *(_DWORD *)(a1 + 72);
  if ( v4 == v6 )
  {
LABEL_4:
    v7 = MinecraftGame::getDownloadMonitor(*(MinecraftGame **)(v2 + 12));
    v8 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v2 + 12));
    DlcBatchModel::DlcBatchModel((int)&v11, v7, v8, v3);
    v9 = *(_QWORD *)(v2 + 72);
    if ( (_DWORD)v9 == HIDWORD(v9) )
    {
      std::vector<DlcBatchModel,std::allocator<DlcBatchModel>>::_M_emplace_back_aux<DlcBatchModel>(v5, (int)&v11);
    }
    else
      DlcBatchModel::DlcBatchModel(v9, (int)&v11);
      *(_DWORD *)(v2 + 72) += 64;
    DlcBatchModel::~DlcBatchModel((DlcBatchModel *)&v11);
    v4 = *(_DWORD *)(v2 + 72) - 64;
  }
  else
    while ( !DlcBatchModel::compareToContent(v4, v3) )
      v4 += 64;
      if ( v6 == v4 )
        goto LABEL_4;
  return v4;
}


int __fastcall MainMenuScreenModel::getCatalogReady(MainMenuScreenModel *this)
{
  StoreCatalogRepository *v1; // r0@1

  v1 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK22StoreCatalogRepository23isCatalogSearchCompleteEv(v1);
}


int __fastcall MainMenuScreenModel::isRealmsTrialStoreOfferAvailable(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r0@1
  RealmsAPI *v9; // r0@2
  int result; // r0@2

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = MinecraftGame::getOfferRepository(*(MinecraftGame **)(a1 + 12));
  if ( OfferRepository::isRealmsTrialOfferAvailable(v8, v7, v6, v5) == 1 )
  {
    v9 = (RealmsAPI *)MinecraftGame::getRealms(*(MinecraftGame **)(v4 + 12));
    result = RealmsAPI::getCachedRealmsTrialAvailable(v9);
  }
  else
    result = 0;
  return result;
}


int *__fastcall MainMenuScreenModel::getRealmsOfferPrice(int *a1, int a2, int a3, int a4, int a5)
{
  int *v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r0@1
  Offer *v9; // r0@1
  const void **v10; // r1@2

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = MinecraftGame::getOfferRepository(*(MinecraftGame **)(a2 + 12));
  v9 = (Offer *)OfferRepository::getRealmsOffer(v8, v7, v6, a5);
  if ( v9 )
    v10 = Offer::getPrice(v9);
  else
    v10 = &Util::EMPTY_STRING;
  return sub_DA73B4(v5, (int *)v10);
}


char *__fastcall MainMenuScreenModel::collectDlcDependenciesForWorld(int a1, int a2, const char **a3, int a4)
{
  const char **v4; // r4@1
  int *v5; // r6@1
  const char *v6; // r1@2
  int v7; // r2@2
  int v8; // r3@2
  int *v9; // r0@2
  int v10; // r8@3
  int v11; // r4@3
  int *v12; // r5@3
  void ***v13; // r4@3
  int v14; // r1@3
  unsigned __int64 v15; // r2@3
  int v16; // r5@4
  int v17; // r8@4
  void *v18; // r0@4
  unsigned __int64 v19; // r2@5
  int v20; // r1@6
  unsigned __int64 v21; // r2@6
  RakNet *v22; // r1@7
  char *result; // r0@7
  unsigned int *v24; // r2@9
  signed int v25; // r1@11
  unsigned int *v26; // r2@17
  signed int v27; // r1@19
  int v28; // [sp+4h] [bp-3EDCh]@2
  int v29; // [sp+Ch] [bp-3ED4h]@2
  int v30; // [sp+10h] [bp-3ED0h]@2
  int v31; // [sp+18h] [bp-3EC8h]@4
  int *v32; // [sp+1Ch] [bp-3EC4h]@2
  int *v33; // [sp+20h] [bp-3EC0h]@2
  int v34; // [sp+24h] [bp-3EBCh]@2
  const char *v35; // [sp+28h] [bp-3EB8h]@2
  int v36; // [sp+2Ch] [bp-3EB4h]@2
  __int64 v37; // [sp+30h] [bp-3EB0h]@3
  __int64 v38; // [sp+38h] [bp-3EA8h]@3
  int v39[3]; // [sp+40h] [bp-3EA0h]@4
  void **v40; // [sp+50h] [bp-3E90h]@4
  int v41; // [sp+54h] [bp-3E8Ch]@5
  void **v42; // [sp+58h] [bp-3E88h]@4
  int v43; // [sp+5Ch] [bp-3E84h]@5
  void **v44; // [sp+108Ch] [bp-2E54h]@4
  int v45; // [sp+10FCh] [bp-2DE4h]@4
  __int16 v46; // [sp+1100h] [bp-2DE0h]@4
  int v47; // [sp+1104h] [bp-2DDCh]@4
  int v48; // [sp+1108h] [bp-2DD8h]@4
  int v49; // [sp+110Ch] [bp-2DD4h]@4
  int v50; // [sp+1110h] [bp-2DD0h]@4
  void **v51; // [sp+1114h] [bp-2DCCh]@3
  int v52; // [sp+1118h] [bp-2DC8h]@3
  void **v53; // [sp+111Ch] [bp-2DC4h]@3
  void **v54; // [sp+2150h] [bp-1D90h]@3
  int v55; // [sp+21C0h] [bp-1D20h]@3
  __int16 v56; // [sp+21C4h] [bp-1D1Ch]@3
  int v57; // [sp+21C8h] [bp-1D18h]@3
  int v58; // [sp+21CCh] [bp-1D14h]@3
  int v59; // [sp+21D0h] [bp-1D10h]@3
  int v60; // [sp+21D4h] [bp-1D0Ch]@3
  void **v61; // [sp+21D8h] [bp-1D08h]@3
  int v62; // [sp+21DCh] [bp-1D04h]@6
  void **v63; // [sp+21E0h] [bp-1D00h]@3
  int v64; // [sp+21E4h] [bp-1CFCh]@6
  void **v65; // [sp+3214h] [bp-CCCh]@3
  int v66; // [sp+3284h] [bp-C5Ch]@3
  __int16 v67; // [sp+3288h] [bp-C58h]@3
  int v68; // [sp+328Ch] [bp-C54h]@3
  int v69; // [sp+3290h] [bp-C50h]@3
  int v70; // [sp+3294h] [bp-C4Ch]@3
  int v71; // [sp+3298h] [bp-C48h]@3
  int v72; // [sp+329Ch] [bp-C44h]@3
  int v73; // [sp+32A0h] [bp-C40h]@3
  int v74; // [sp+36A0h] [bp-840h]@1
  int v75; // [sp+36A4h] [bp-83Ch]@3
  int v76; // [sp+36A8h] [bp-838h]@3
  int v77; // [sp+3AA8h] [bp-438h]@3
  int v78; // [sp+3AACh] [bp-434h]@2
  int v79; // [sp+3AB0h] [bp-430h]@3
  int v80; // [sp+3EB0h] [bp-30h]@3
  RakNet *v81; // [sp+3EB4h] [bp-2Ch]@1

  v4 = a3;
  v5 = &v74;
  v81 = _stack_chk_guard;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( *((_DWORD *)*a3 - 3) )
  {
    v29 = a4;
    v30 = a1;
    v28 = a2;
    MinecraftScreenModel::getLevelBasePath((MinecraftScreenModel *)&v32, a2);
    v6 = *v4;
    v7 = *(v32 - 3);
    v8 = *((_DWORD *)*v4 - 3);
    v33 = v32;
    v34 = v7;
    v35 = v6;
    v36 = v8;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v78, (int)&v33, 2);
    v9 = v32 - 3;
    if ( v32 - 3 != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v32 - 1);
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
        j_j_j_j_j__ZdlPv_9(v9);
    }
    v33 = &v79;
    v34 = v80;
    v35 = "world_resource_packs.json";
    v36 = -1;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v75, (int)&v33, 2);
    v35 = "world_behavior_packs.json";
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v72, (int)&v33, 2);
    v10 = v77;
    sub_DA8F44((int)&v65);
    v65 = &off_26D3AF0;
    v66 = 0;
    v67 = 0;
    v71 = 0;
    v70 = 0;
    v69 = 0;
    v68 = 0;
    LODWORD(v37) = &v76;
    HIDWORD(v37) = v10;
    Core::FileStream::FileStream((int)&v61, (int)off_26D7EA4, &v37, 8);
    v61 = &off_26D7E64;
    v65 = &off_26D7E8C;
    v63 = &off_26D7E78;
    v11 = v74;
    sub_DA8F44((int)&v54);
    v54 = &off_26D3AF0;
    v55 = 0;
    v56 = 0;
    v60 = 0;
    v59 = 0;
    v58 = 0;
    v57 = 0;
    LODWORD(v38) = &v73;
    HIDWORD(v38) = v11;
    Core::FileStream::FileStream((int)&v51, (int)off_26D7EA4, &v38, 8);
    v12 = &v52;
    v51 = &off_26D7E64;
    v54 = &off_26D7E8C;
    v53 = &off_26D7E78;
    sub_CD2444((char *)&v61, v30, 0);
    v13 = &v51;
    sub_CD2444((char *)&v51, v30, 1);
    if ( v29 == 1 )
      MinecraftScreenModel::getGlobalResourcePacksPath((MinecraftScreenModel *)&v31, v28);
      v16 = v31;
      v17 = *(_DWORD *)(v31 - 12);
      sub_DA8F44((int)&v44);
      v44 = &off_26D3AF0;
      v45 = 0;
      v46 = 0;
      v50 = 0;
      v49 = 0;
      v48 = 0;
      v47 = 0;
      v39[0] = v16;
      v39[1] = v17;
      Core::FileStream::FileStream((int)&v40, (int)off_26D7EA4, (__int64 *)v39, 8);
      v12 = &v52;
      v40 = &off_26D7E64;
      v44 = &off_26D7E8C;
      v42 = &off_26D7E78;
      v18 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v31 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
        }
        else
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j_j__ZdlPv_9(v18);
      sub_CD2444((char *)&v40, v30, 0);
      v40 = &off_26D7EEC;
      v44 = &off_26D7F14;
      v42 = &off_26D7F00;
      Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v43, (int)&off_26D7F14, v19);
      v40 = &off_26D7F6C;
      v44 = &off_26D7F80;
      v41 = 0;
      sub_DA76E4(&v44);
      v13 = &v51;
    *(v12 - 1) = (int)&off_26D7EEC;
    v54 = &off_26D7F14;
    v12[1] = (int)&off_26D7F00;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)(v13 + 3), v14, v15);
    *(v12 - 1) = (int)&off_26D7F6C;
    v54 = &off_26D7F80;
    *v12 = 0;
    sub_DA76E4(v13 + 1039);
    v61 = &off_26D7EEC;
    v65 = &off_26D7F14;
    v63 = &off_26D7F00;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v64, v20, v21);
    v61 = &off_26D7F6C;
    v65 = &off_26D7F80;
    v62 = 0;
    sub_DA76E4(&v65);
    v5 = &v74;
  }
  v22 = (RakNet *)v5[517];
  result = (char *)(_stack_chk_guard - v22);
  if ( _stack_chk_guard != v22 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall MainMenuScreenModel::fulfillPriorMinecoinPurchase(int a1, int a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  OfferRepository *v5; // r0@1
  int v6; // r1@1
  unsigned int *v7; // r1@2
  unsigned int v8; // r2@4
  int v9; // r1@7
  int v10; // r4@7
  int v11; // r0@7
  unsigned int *v12; // r2@8
  unsigned int v13; // r1@10
  int v15; // [sp+4h] [bp-1Ch]@7
  int v16; // [sp+8h] [bp-18h]@1
  int v17; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = (OfferRepository *)MinecraftGame::getOfferRepository(*(MinecraftGame **)(a1 + 12));
  v16 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(v4 + 4);
  v17 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 8);
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
  v9 = *v3;
  *v3 = 0;
  v15 = v9;
  v10 = OfferRepository::fulfillPriorPurchase(v5, (int)&v16, &v15);
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v15);
  v11 = v17;
  if ( v17 )
    v12 = (unsigned int *)(v17 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  return v10;
}


int __fastcall MainMenuScreenModel::isAppStoreReady(MainMenuScreenModel *this)
{
  OfferRepository *v1; // r0@1

  v1 = (OfferRepository *)MinecraftGame::getOfferRepository(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK15OfferRepository15isAppStoreReadyEv(v1);
}


void __fastcall MainMenuScreenModel::navigateToPurchaseOfferScreen(int a1, StoreCatalogItemModel *a2, int a3)
{
  j_j_j__ZN14ClientInstance29navigateToPurchaseOfferScreenER21StoreCatalogItemModel21StoreNavigationOrigin(
    *(_DWORD *)(a1 + 16),
    a2,
    a3);
}


signed int __fastcall MainMenuScreenModel::getStoreHasRealmsProducts(MainMenuScreenModel *this)
{
  OfferRepository *v1; // r0@1

  v1 = (OfferRepository *)MinecraftGame::getOfferRepository(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK15OfferRepository30hasRealmsOffersWithProductInfoEv(v1);
}


void __fastcall MainMenuScreenModel::repopulateWorldTemplates(MainMenuScreenModel *this)
{
  j_j_j__ZN20WorldTemplateManager22populateWorldTemplatesEv(*((WorldTemplateManager **)this + 27));
}


signed int __fastcall MainMenuScreenModel::isStoreCatalogUpdateRowIndex(MainMenuScreenModel *this, int a2)
{
  int v2; // r4@1
  StoreCatalogRepository *v3; // r0@1

  v2 = a2;
  v3 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK22StoreCatalogRepository21isStoreUpdateRowIndexEi(v3, v2);
}


void __fastcall MainMenuScreenModel::runRegionalOfferChecks(MainMenuScreenModel *this)
{
  j_j_j__ZN13MinecraftGame22runRegionalOfferChecksEv(*((MinecraftGame **)this + 3));
}


StoreSearchQuery *__fastcall MainMenuScreenModel::createItemListFromQuery(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int *v4; // r4@1
  StoreSearchQuery *v5; // r6@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  StoreSearchQuery *result; // r0@3
  int v8; // [sp+0h] [bp-20h]@2
  int (*v9)(void); // [sp+8h] [bp-18h]@1
  int v10; // [sp+Ch] [bp-14h]@2

  v3 = a3;
  v4 = a2;
  v5 = (StoreSearchQuery *)MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a1 + 12));
  v9 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v8, v3, 2);
    v10 = *(_DWORD *)(v3 + 12);
    v9 = *(int (**)(void))(v3 + 8);
  }
  result = StoreCatalogRepository::sendQueryAndCreateContentList(v5, v4, (int)&v8);
  if ( v9 )
    result = (StoreSearchQuery *)v9();
  return result;
}


void *__fastcall MainMenuScreenModel::getMinecoinCatalogModel(MainMenuScreenModel *this)
{
  MainMenuScreenModel *v1; // r4@1
  void *v2; // r5@1
  int v3; // r8@2
  int v4; // r7@2
  Social::UserManager *v5; // r6@2
  MinecoinCatalogModel *v6; // r0@2
  MinecoinCatalogModel *v7; // r0@3

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 20);
  if ( !v2 )
  {
    v3 = MinecraftGame::getTreatmentService(*((MinecraftGame **)this + 3));
    v4 = MinecraftScreenModel::getOfferRepository(v1);
    v5 = (Social::UserManager *)MinecraftGame::getUserManager(*((MinecraftGame **)v1 + 3));
    v2 = operator new(0x3Cu);
    MinecoinCatalogModel::MinecoinCatalogModel((int)v2, v3, v4, v5);
    v6 = (MinecoinCatalogModel *)*((_DWORD *)v1 + 20);
    *((_DWORD *)v1 + 20) = v2;
    if ( v6 )
    {
      v7 = MinecoinCatalogModel::~MinecoinCatalogModel(v6);
      operator delete((void *)v7);
      v2 = (void *)*((_DWORD *)v1 + 20);
    }
  }
  return v2;
}


int __fastcall MainMenuScreenModel::restorePurchases(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  __int64 v4; // r2@1
  int (__cdecl *v5)(__int64 *, __int64 *); // r1@1
  int result; // r0@1
  __int64 v7; // [sp+0h] [bp-18h]@1
  int (__cdecl *v8)(__int64 *, __int64 *); // [sp+8h] [bp-10h]@1
  int v9; // [sp+Ch] [bp-Ch]@1

  v2 = a2;
  v3 = MinecraftGame::getOfferRepository(*(MinecraftGame **)(a1 + 12));
  v7 = *(_QWORD *)v2;
  LODWORD(v4) = 0;
  v5 = *(int (__cdecl **)(__int64 *, __int64 *))(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v8 = v5;
  v9 = *(_DWORD *)(v2 + 12);
  result = OfferRepository::restorePurchases(v3, (int)&v7, v4);
  if ( v8 )
    result = v8(&v7, &v7);
  return result;
}


char *__fastcall MainMenuScreenModel::navigateToSkinPackUpsellScreen(int a1, int a2, int a3, int a4)
{
  int v4; // r10@1
  int v5; // r9@1
  int v6; // r8@1
  int v7; // r7@1
  SkinRepository *v8; // r0@1
  SkinPack *v9; // r0@1
  SkinPack *v10; // r4@1
  char *v11; // r0@2
  unsigned int v12; // r1@2
  unsigned int v13; // r2@2
  int v14; // r3@2
  StoreCatalogRepository *v15; // r0@2
  StoreCatalogItem *v16; // r6@2
  __int64 v17; // r4@2
  unsigned int *v18; // r1@3
  unsigned int v19; // r2@5
  unsigned int v20; // r1@8
  unsigned int v21; // r2@8
  unsigned int v22; // r3@8
  unsigned int v23; // r7@8
  ContentCatalogService *v24; // r4@10
  int *v25; // r0@10
  int v26; // r4@11
  int v27; // r12@11
  int v28; // r9@11
  unsigned int *v29; // r0@12
  unsigned int v30; // r1@14
  int v31; // r3@17
  unsigned int *v32; // r0@18
  unsigned int v33; // r1@20
  __int64 v34; // kr00_8@23
  unsigned int *v35; // r0@24
  unsigned int v36; // r1@26
  void *v37; // r4@29
  unsigned int *v38; // r0@30
  unsigned int v39; // r1@32
  unsigned int *v40; // r0@36
  unsigned int v41; // r1@38
  unsigned int *v42; // r0@42
  unsigned int v43; // r1@44
  _DWORD *v44; // r0@47
  unsigned int *v45; // r1@48
  unsigned int v46; // r2@50
  int v47; // r12@53
  int v48; // r2@53
  __int64 v49; // kr08_8@53
  unsigned int *v50; // r1@54
  unsigned int v51; // r2@56
  int v52; // r3@59
  int v53; // r4@59
  int v54; // r7@59
  __int64 v55; // kr10_8@59
  int v56; // r3@59
  int v57; // r7@59
  __int64 v58; // kr18_8@59
  __int64 v59; // kr20_8@59
  unsigned int *v60; // r1@64
  unsigned int v61; // r0@66
  unsigned int *v62; // r1@72
  unsigned int v63; // r0@74
  void *v64; // r0@79
  void **v65; // r0@80
  void *v66; // r0@80
  void *v67; // r0@83
  int v68; // r0@84
  unsigned int *v69; // r1@87
  unsigned int v70; // r0@89
  unsigned int *v71; // r6@93
  unsigned int v72; // r0@95
  unsigned int *v73; // r1@101
  unsigned int v74; // r0@103
  unsigned int *v75; // r1@109
  unsigned int v76; // r0@111
  int v77; // r4@116
  unsigned int *v78; // r1@117
  unsigned int v79; // r0@119
  unsigned int *v80; // r5@123
  unsigned int v81; // r0@125
  int v82; // r0@130
  unsigned int *v83; // r2@131
  unsigned int v84; // r1@133
  int v85; // r0@138
  unsigned int *v86; // r2@139
  unsigned int v87; // r1@141
  char *result; // r0@146
  unsigned int *v89; // r2@148
  signed int v90; // r1@150
  unsigned int *v91; // r2@152
  signed int v92; // r1@154
  unsigned int *v93; // r2@156
  signed int v94; // r1@158
  int v95; // [sp+8h] [bp-170h]@17
  int v96; // [sp+Ch] [bp-16Ch]@11
  int v97; // [sp+10h] [bp-168h]@35
  int v98; // [sp+18h] [bp-160h]@23
  char v99; // [sp+1Ch] [bp-15Ch]@84
  void (*v100)(void); // [sp+24h] [bp-154h]@84
  int v101; // [sp+30h] [bp-148h]@80
  int v102; // [sp+34h] [bp-144h]@80
  int v103; // [sp+3Ch] [bp-13Ch]@80
  unsigned __int64 v104; // [sp+40h] [bp-138h]@17
  __int64 v105; // [sp+48h] [bp-130h]@17
  int v106; // [sp+50h] [bp-128h]@11
  int v107; // [sp+54h] [bp-124h]@23
  int v108; // [sp+58h] [bp-120h]@2
  int v109; // [sp+5Ch] [bp-11Ch]@2
  unsigned __int64 v110; // [sp+60h] [bp-118h]@8
  __int64 v111; // [sp+68h] [bp-110h]@8
  unsigned __int64 v112; // [sp+70h] [bp-108h]@8
  unsigned __int64 v113; // [sp+78h] [bp-100h]@8
  unsigned __int64 v114; // [sp+80h] [bp-F8h]@8
  int v115; // [sp+88h] [bp-F0h]@8
  int v116; // [sp+90h] [bp-E8h]@2
  int v117; // [sp+94h] [bp-E4h]@2
  unsigned __int64 v118; // [sp+98h] [bp-E0h]@2
  __int64 v119; // [sp+A0h] [bp-D8h]@2
  char v120; // [sp+B0h] [bp-C8h]@59
  void (*v121)(void); // [sp+B8h] [bp-C0h]@59
  unsigned __int64 v122; // [sp+C0h] [bp-B8h]@35
  __int64 v123; // [sp+C8h] [bp-B0h]@35
  _DWORD *v124; // [sp+D4h] [bp-A4h]@59
  void (*v125)(void); // [sp+DCh] [bp-9Ch]@47
  int (__fastcall *v126)(int); // [sp+E0h] [bp-98h]@59
  int v127; // [sp+E8h] [bp-90h]@29
  _QWORD v128[6]; // [sp+F0h] [bp-88h]@11
  __int64 v129; // [sp+120h] [bp-58h]@41
  __int64 v130; // [sp+128h] [bp-50h]@41
  __int64 v131; // [sp+130h] [bp-48h]@41
  __int64 v132; // [sp+138h] [bp-40h]@41
  __int64 v133; // [sp+140h] [bp-38h]@41
  int v134; // [sp+148h] [bp-30h]@41
  RakNet *v135; // [sp+150h] [bp-28h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v135 = _stack_chk_guard;
  v8 = (SkinRepository *)MinecraftGame::getSkinRepository(*(MinecraftGame **)(a1 + 12));
  v9 = SkinRepository::getSkinPackById(v8, (const mce::UUID *)v7);
  v10 = v9;
  if ( v9 )
  {
    v11 = SkinPack::getId(v9);
    v12 = *(_DWORD *)v11;
    v13 = *((_DWORD *)v11 + 1);
    v14 = *((_DWORD *)v11 + 2);
    HIDWORD(v119) = *((_DWORD *)v11 + 3);
    v118 = __PAIR__(v13, v12);
    LODWORD(v119) = v14;
    v15 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v4 + 12));
    v16 = (StoreCatalogItem *)StoreCatalogRepository::getStoreCatalogItemByPackIdentity(v15, (const mce::UUID *)&v118);
    v17 = *(_QWORD *)SkinPack::getSkins(v10);
    MainMenuScreenModel::_getWeakPtr((MainMenuScreenModel *)&v116, v4);
    v108 = v116;
    v109 = v117;
    if ( v117 )
    {
      v18 = (unsigned int *)(v117 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 + 1, v18) );
      }
      else
        ++*v18;
    }
    v110 = v118;
    v111 = v119;
    v20 = *(_DWORD *)v7;
    v21 = *(_DWORD *)(v7 + 4);
    v22 = *(_DWORD *)(v7 + 8);
    v23 = *(_DWORD *)(v7 + 12);
    v112 = __PAIR__(v21, v20);
    v113 = __PAIR__(v23, v22);
    v114 = __PAIR__(v6, v5);
    v115 = -991146299 * ((HIDWORD(v17) - (signed int)v17) >> 2);
    if ( v16 && StoreCatalogItem::isValid(v16) )
      v24 = (ContentCatalogService *)MinecraftGame::getContentCatalogService(*(MinecraftGame **)(v4 + 12));
      v25 = (int *)StoreCatalogItem::getLastModifiedDate(v16);
      StoreCatalogItem::hydrateItem((int)v16, v24, v25);
      sub_CCE35C((int)&v108);
    else
      j__ZNSt12__shared_ptrI12AsyncTrackerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v106);
      v26 = v106;
      sub_DA7F0C(v128);
      v27 = v26 + 8;
      *(_QWORD *)v27 = v128[0];
      *(_DWORD *)(v27 + 8) = 5;
      *(_DWORD *)(v26 + 20) = 0;
      *(_BYTE *)(v26 + 24) = 0;
      *(_BYTE *)(v26 + 1) = 0;
      v28 = v117;
      v96 = v116;
      if ( v117 )
        v29 = (unsigned int *)(v117 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 + 1, v29) );
        }
        else
          ++*v29;
      v104 = v118;
      v105 = v119;
      v31 = v109;
      v95 = v108;
      if ( v109 )
        v32 = (unsigned int *)(v109 + 8);
            v33 = __ldrex(v32);
          while ( __strex(v33 + 1, v32) );
          ++*v32;
      v98 = v31;
      v128[0] = v110;
      v128[1] = v111;
      v128[2] = v112;
      v128[3] = v113;
      v128[4] = v114;
      LODWORD(v128[5]) = v115;
      v34 = *(_QWORD *)&v106;
      if ( v107 )
        v35 = (unsigned int *)(v107 + 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 + 1, v35) );
          ++*v35;
      v37 = operator new(0x30u);
      sub_DA7364((void **)&v127, "store.fetchingItem");
      if ( v28 )
        v38 = (unsigned int *)(v28 + 8);
            v39 = __ldrex(v38);
          while ( __strex(v39 + 1, v38) );
          ++*v38;
      v97 = (int)v37;
      v122 = v104;
      v123 = v105;
      if ( v98 )
        v40 = (unsigned int *)(v98 + 8);
            v41 = __ldrex(v40);
          while ( __strex(v41 + 1, v40) );
          ++*v40;
      v129 = v128[0];
      v130 = v128[1];
      v131 = v128[2];
      v132 = v128[3];
      v133 = v128[4];
      v134 = v128[5];
      if ( HIDWORD(v34) )
        v42 = (unsigned int *)(HIDWORD(v34) + 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 + 1, v42) );
          ++*v42;
      v125 = 0;
      v44 = operator new(0x58u);
      *v44 = v96;
      v44[1] = v28;
        v45 = (unsigned int *)(v28 + 8);
            v46 = __ldrex(v45);
          while ( __strex(v46 + 1, v45) );
          ++*v45;
      v47 = (int)(v44 + 2);
      v48 = HIDWORD(v122);
      v49 = v123;
      *(_DWORD *)v47 = v122;
      *(_DWORD *)(v47 + 4) = v48;
      *(_QWORD *)(v47 + 8) = v49;
      v44[6] = v95;
      v44[7] = v98;
        v50 = (unsigned int *)(v98 + 8);
            v51 = __ldrex(v50);
          while ( __strex(v51 + 1, v50) );
          ++*v50;
      v52 = (int)(v44 + 8);
      v53 = HIDWORD(v129);
      v55 = v130;
      v54 = v131;
      *(_DWORD *)v52 = v129;
      *(_DWORD *)(v52 + 4) = v53;
      *(_QWORD *)(v52 + 8) = v55;
      *(_DWORD *)(v52 + 16) = v54;
      v56 = (int)(v44 + 13);
      v58 = v132;
      v59 = v133;
      v57 = v134;
      *(_DWORD *)v56 = HIDWORD(v131);
      *(_QWORD *)(v56 + 4) = v58;
      *(_QWORD *)(v56 + 12) = v59;
      *(_DWORD *)(v56 + 20) = v57;
      *((_QWORD *)v44 + 10) = v34;
      v124 = v44;
      v125 = (void (*)(void))sub_CD6C08;
      v126 = sub_CD6988;
      v121 = 0;
      StoreProgressHandler::StoreProgressHandler(v97, &v127, (int)&v124, (int)&v120);
      if ( v121 )
        v121();
      if ( v125 )
        v125();
        v60 = (unsigned int *)(v98 + 8);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 12))(v98);
        v62 = (unsigned int *)(v28 + 8);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          v63 = (*v62)--;
        if ( v63 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
      v64 = (void *)(v127 - 12);
      if ( (int *)(v127 - 12) != &dword_28898C0 )
        v89 = (unsigned int *)(v127 - 4);
            v90 = __ldrex(v89);
          while ( __strex(v90 - 1, v89) );
          v90 = (*v89)--;
        if ( v90 <= 0 )
          j_j_j_j_j__ZdlPv_9(v64);
      sub_DA7364((void **)&v103, "hydrating_item_for_upsell");
      v102 = v97;
      v65 = sub_DA7364((void **)&v101, (const char *)&unk_257BC67);
      MainMenuScreenModel::navigateToModalProgressScreen(v4, (int)&v103, (int)&v102, 0, (int)v65);
      v66 = (void *)(v101 - 12);
      if ( (int *)(v101 - 12) != &dword_28898C0 )
        v91 = (unsigned int *)(v101 - 4);
            v92 = __ldrex(v91);
          while ( __strex(v92 - 1, v91) );
          v92 = (*v91)--;
        if ( v92 <= 0 )
          j_j_j_j_j__ZdlPv_9(v66);
      if ( v102 )
        (*(void (**)(void))(*(_DWORD *)v102 + 4))();
      v102 = 0;
      v67 = (void *)(v103 - 12);
      if ( (int *)(v103 - 12) != &dword_28898C0 )
        v93 = (unsigned int *)(v103 - 4);
            v94 = __ldrex(v93);
          while ( __strex(v94 - 1, v93) );
          v94 = (*v93)--;
        if ( v94 <= 0 )
          j_j_j_j_j__ZdlPv_9(v67);
      v68 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v4 + 12));
      v100 = 0;
      StoreCatalogRepository::fetchStoreItem(v68, (int)&v118, (int *)&CatalogContentType::DurableOffer, (int)&v99);
      if ( v100 )
        v100();
        v69 = (unsigned int *)(HIDWORD(v34) + 4);
            v70 = __ldrex(v69);
          while ( __strex(v70 - 1, v69) );
          v70 = (*v69)--;
        if ( v70 == 1 )
          v71 = (unsigned int *)(HIDWORD(v34) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v34) + 8))(HIDWORD(v34));
          if ( &pthread_create )
          {
            __dmb();
            do
              v72 = __ldrex(v71);
            while ( __strex(v72 - 1, v71) );
          }
          else
            v72 = (*v71)--;
          if ( v72 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v34) + 12))(HIDWORD(v34));
        v73 = (unsigned int *)(v98 + 8);
            v74 = __ldrex(v73);
          while ( __strex(v74 - 1, v73) );
          v74 = (*v73)--;
        if ( v74 == 1 )
        v75 = (unsigned int *)(v28 + 8);
            v76 = __ldrex(v75);
          while ( __strex(v76 - 1, v75) );
          v76 = (*v75)--;
        if ( v76 == 1 )
      v77 = v107;
        v78 = (unsigned int *)(v107 + 4);
            v79 = __ldrex(v78);
          while ( __strex(v79 - 1, v78) );
          v79 = (*v78)--;
        if ( v79 == 1 )
          v80 = (unsigned int *)(v77 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v77 + 8))(v77);
              v81 = __ldrex(v80);
            while ( __strex(v81 - 1, v80) );
            v81 = (*v80)--;
          if ( v81 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v77 + 12))(v77);
    v82 = v109;
    if ( v109 )
      v83 = (unsigned int *)(v109 + 8);
          v84 = __ldrex(v83);
        while ( __strex(v84 - 1, v83) );
        v84 = (*v83)--;
      if ( v84 == 1 )
        (*(void (**)(void))(*(_DWORD *)v82 + 12))();
    v85 = v117;
      v86 = (unsigned int *)(v117 + 8);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 == 1 )
        (*(void (**)(void))(*(_DWORD *)v85 + 12))();
  }
  result = (char *)(_stack_chk_guard - v135);
  if ( _stack_chk_guard != v135 )
    _stack_chk_fail(result);
  return result;
}


WorldTemplateInfo *__fastcall MainMenuScreenModel::findWorldTemplateByPackId(int a1, unsigned __int64 *a2)
{
  return j_j_j__ZNK20WorldTemplateManager34findInstalledWorldTemplateByPackIdERKSt6vectorI13PackIdVersionSaIS1_EE(
           *(_DWORD *)(a1 + 108),
           a2);
}


signed int __fastcall MainMenuScreenModel::isStoreCatalogItemNew(MainMenuScreenModel *this, const StoreCatalogItemModel *a2)
{
  StoreCatalogItemModel *v2; // r4@1
  int v3; // r5@1
  const char **v4; // r1@1

  v2 = a2;
  v3 = MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  v4 = (const char **)StoreCatalogItemModel::getProductId(v2);
  return j_j_j__ZNK22StoreCatalogRepository9isItemNewERKSs(v3, v4);
}


void __fastcall MainMenuScreenModel::navigateToMakeInfiniteScreen(int a1, int a2, int a3)
{
  MainMenuScreenModel::navigateToMakeInfiniteScreen(a1, a2, a3);
}


void __fastcall MainMenuScreenModel::navigateToFileDownloadFile(int a1, int *a2, int *a3)
{
  MainMenuScreenModel::navigateToFileDownloadFile(a1, a2, a3);
}


_DWORD *__fastcall MainMenuScreenModel::purchaseCatalogOffer(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r7@1
  int *v5; // r4@1
  TransactionContext *v6; // r6@1
  void (__fastcall *v7)(char *, int, signed int); // r3@1
  unsigned int *v8; // r0@4
  unsigned int v9; // r1@6
  int v10; // r0@9
  void *v11; // r0@9
  int v12; // r8@9
  char *v13; // r10@9
  unsigned int *v14; // r0@12
  unsigned int v15; // r1@14
  _QWORD *v16; // r0@17
  int v17; // r7@17
  void (*v18)(void); // r0@17
  int v19; // r0@17
  unsigned int *v20; // r0@18
  unsigned int v21; // r1@20
  __int64 v22; // r0@23
  void *v23; // r0@25
  int v24; // r0@26
  unsigned int *v25; // r2@27
  unsigned int v26; // r1@29
  void *v27; // r0@36
  int v28; // r0@37
  unsigned int *v29; // r2@38
  unsigned int v30; // r1@40
  int v31; // r0@47
  unsigned int *v32; // r2@48
  unsigned int v33; // r1@50
  unsigned int *v35; // r2@56
  signed int v36; // r1@58
  unsigned int *v37; // r2@60
  signed int v38; // r1@62
  int v39; // [sp+0h] [bp-80h]@10
  void (*v40)(void); // [sp+8h] [bp-78h]@9
  int v41; // [sp+Ch] [bp-74h]@10
  int v42; // [sp+10h] [bp-70h]@11
  int v43; // [sp+14h] [bp-6Ch]@11
  int v44; // [sp+18h] [bp-68h]@17
  int v45; // [sp+1Ch] [bp-64h]@23
  void (*v46)(void); // [sp+24h] [bp-5Ch]@17
  int v47; // [sp+2Ch] [bp-54h]@9
  char v48; // [sp+30h] [bp-50h]@2
  void (*v49)(void); // [sp+38h] [bp-48h]@1
  int v50; // [sp+3Ch] [bp-44h]@2
  int v51; // [sp+40h] [bp-40h]@3
  int v52; // [sp+44h] [bp-3Ch]@3
  int v53; // [sp+48h] [bp-38h]@9
  int v54; // [sp+4Ch] [bp-34h]@1
  int v55; // [sp+50h] [bp-30h]@3
  TransactionContext *v56; // [sp+54h] [bp-2Ch]@1
  int v57; // [sp+58h] [bp-28h]@9

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (TransactionContext *)operator new(0x18u);
  TransactionContext::TransactionContext(v6);
  v56 = v6;
  MainMenuScreenModel::_getWeakPtr((MainMenuScreenModel *)&v54, v3);
  v49 = 0;
  v7 = *(void (__fastcall **)(char *, int, signed int))(v4 + 8);
  if ( v7 )
  {
    v7(&v48, v4, 2);
    v50 = *(_DWORD *)(v4 + 12);
    v49 = *(void (**)(void))(v4 + 8);
  }
  v51 = v54;
  v52 = v55;
  if ( v55 )
    v8 = (unsigned int *)(v55 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  sub_DA73B4(&v53, v5);
  v10 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v3 + 12));
  v11 = (void *)StoreCatalogRepository::getStoreCatalogItemByProductId(v10, (const void **)v5);
  StoreCatalogItemModel::StoreCatalogItemModel(&v57, v11);
  v47 = v57;
  v12 = MinecraftGame::getEntitlementManager(*(MinecraftGame **)(v3 + 12));
  v13 = StoreCatalogItemModel::getPrice((StoreCatalogItemModel *)&v47);
  v40 = 0;
  if ( v49 )
    ((void (__fastcall *)(int *, char *, signed int))v49)(&v39, &v48, 2);
    v41 = v50;
    v40 = v49;
  v42 = v51;
  v43 = v52;
  if ( v52 )
    v14 = (unsigned int *)(v52 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  sub_DA73B4(&v44, &v53);
  v46 = 0;
  v16 = operator new(0x1Cu);
  v17 = (int)v16;
  *v16 = *(_QWORD *)&v39;
  v18 = v40;
  *(_DWORD *)(v17 + 8) = v18;
  *(_DWORD *)(v17 + 12) = v41;
  *(_DWORD *)(v17 + 16) = v42;
  v19 = v43;
  *(_DWORD *)(v17 + 20) = v43;
  if ( v19 )
    v20 = (unsigned int *)(v19 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      ++*v20;
  sub_DA73B4((int *)(v17 + 24), &v44);
  LODWORD(v22) = sub_CD77A4;
  v45 = v17;
  HIDWORD(v22) = sub_CD7390;
  *(_QWORD *)&v46 = v22;
  EntitlementManager::purchaseCatalogOffer(v12, (const char **)v5, (const char **)v13, (int)&v45);
  if ( v46 )
    v46();
  v23 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v44 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9(v23);
  v24 = v43;
  if ( v43 )
    v25 = (unsigned int *)(v43 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      (*(void (**)(void))(*(_DWORD *)v24 + 12))();
  if ( v40 )
    v40();
  v27 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v53 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  v28 = v52;
    v29 = (unsigned int *)(v52 + 8);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 == 1 )
      (*(void (**)(void))(*(_DWORD *)v28 + 12))();
    v49();
  v31 = v55;
    v32 = (unsigned int *)(v55 + 8);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 == 1 )
      (*(void (**)(void))(*(_DWORD *)v31 + 12))();
  return std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v56);
}


void __fastcall MainMenuScreenModel::navigateToRealmsPendingInvitesScreen(MainMenuScreenModel *this, bool a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createRealmsPendingInvitesScreen((SceneFactory *)&v8, SHIDWORD(v2), a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


signed int __fastcall MainMenuScreenModel::isSkinPackNew(MainMenuScreenModel *this, const SkinPackModel *a2)
{
  MainMenuScreenModel *v2; // r4@1
  SkinPackModel *v3; // r5@1
  StoreCatalogRepository *v4; // r6@1
  char *v5; // r0@1
  StoreCatalogItem *v6; // r5@1
  int v7; // r4@2
  const char **v8; // r0@2
  signed int result; // r0@2

  v2 = this;
  v3 = a2;
  v4 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  v5 = SkinPackModel::getPackId(v3);
  v6 = (StoreCatalogItem *)StoreCatalogRepository::getStoreCatalogItemByPackIdentity(v4, (const mce::UUID *)v5);
  if ( v6 )
  {
    v7 = MinecraftGame::getStoreCatalog(*((MinecraftGame **)v2 + 3));
    v8 = (const char **)StoreCatalogItem::getProductId(v6);
    result = StoreCatalogRepository::isItemNew(v7, v8);
  }
  else
    result = 0;
  return result;
}


void __fastcall MainMenuScreenModel::getRealmsEulaText(MainMenuScreenModel *this)
{
  MainMenuScreenModel::getRealmsEulaText(this);
}


void __fastcall MainMenuScreenModel::navigateToManifestValidationScreen(MainMenuScreenModel *this, const ResourceLocation *a2, const PackContentItem *a3)
{
  MainMenuScreenModel *v3; // r6@1
  const PackContentItem *v4; // r9@1
  int *v5; // r5@1
  __int64 v6; // kr00_8@1
  _DWORD *v7; // r4@1
  int v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  char v14; // [sp+14h] [bp-24h]@1
  int v15; // [sp+18h] [bp-20h]@1

  v3 = this;
  v4 = a3;
  v5 = (int *)a2;
  v6 = *(_QWORD *)((char *)this + 20);
  v7 = (_DWORD *)MinecraftGame::getPackManifestFactory(*((MinecraftGame **)this + 3));
  v8 = MinecraftGame::getKeyProvider(*((MinecraftGame **)v3 + 3));
  SceneFactory::createManifestValidationScreen((unsigned __int64 *)&v14, SHIDWORD(v6), v7, v8, (int)v5, v5, 1, (int)v4);
  SceneStack::pushScreen(v6, (int)&v14, 0);
  v9 = v15;
  if ( v15 )
  {
    v10 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
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
  }
}


void __fastcall MainMenuScreenModel::navigateToCreateNewWorldFromScratchScreen(MainMenuScreenModel *this)
{
  MainMenuScreenModel::navigateToCreateNewWorldFromScratchScreen(this);
}


void __fastcall MainMenuScreenModel::~MainMenuScreenModel(MainMenuScreenModel *this)
{
  MinecraftScreenModel *v1; // r0@1

  v1 = MainMenuScreenModel::~MainMenuScreenModel(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall MainMenuScreenModel::fulfillPriorRealmsPurchase(int a1, int a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  OfferRepository *v5; // r0@1
  int v6; // r1@1
  unsigned int *v7; // r1@2
  unsigned int v8; // r2@4
  int v9; // r1@7
  int v10; // r4@7
  int v11; // r0@7
  unsigned int *v12; // r2@8
  unsigned int v13; // r1@10
  int v15; // [sp+4h] [bp-1Ch]@7
  int v16; // [sp+8h] [bp-18h]@1
  int v17; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = (OfferRepository *)MinecraftGame::getOfferRepository(*(MinecraftGame **)(a1 + 12));
  v16 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(v4 + 4);
  v17 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 8);
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
  v9 = *v3;
  *v3 = 0;
  v15 = v9;
  v10 = OfferRepository::fulfillPriorPurchase(v5, (int)&v16, &v15);
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v15);
  v11 = v17;
  if ( v17 )
    v12 = (unsigned int *)(v17 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  return v10;
}


signed int __fastcall MainMenuScreenModel::hasEntitlementFor(MainMenuScreenModel *this, const PackIdVersion *a2)
{
  const PackIdVersion *v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  Entitlement *v7; // r0@1
  signed int v8; // r4@1
  void *v9; // r0@1
  void *v10; // r0@2
  void *v11; // r0@3
  unsigned int *v13; // r2@5
  signed int v14; // r1@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  int v19; // [sp+0h] [bp-48h]@1
  int v20; // [sp+4h] [bp-44h]@1
  int v21; // [sp+8h] [bp-40h]@1
  int v22; // [sp+Ch] [bp-3Ch]@1
  int v23; // [sp+10h] [bp-38h]@1
  int v24; // [sp+18h] [bp-30h]@3
  int v25; // [sp+1Ch] [bp-2Ch]@2
  int v26; // [sp+20h] [bp-28h]@1
  char v27; // [sp+28h] [bp-20h]@1

  v2 = a2;
  v3 = MinecraftGame::getEntitlementManager(*((MinecraftGame **)this + 3));
  v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  v6 = *((_DWORD *)v2 + 3);
  v19 = *(_DWORD *)v2;
  v20 = v4;
  v21 = v5;
  v22 = v6;
  SemVersion::SemVersion((int)&v23, (int)v2 + 16);
  v27 = *((_BYTE *)v2 + 40);
  v7 = (Entitlement *)EntitlementManager::getEntitlement(v3, (int)&v19);
  v8 = Entitlement::isOwned(v7);
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v25 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v24 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  return v8;
}


void __fastcall MainMenuScreenModel::tryNavigateToSafeZoneScreenOnFirstSignin(MainMenuScreenModel *this)
{
  MainMenuScreenModel *v1; // r4@1
  Options *v2; // r5@1
  int v3; // r0@1
  Option *v4; // r0@2
  void *v5; // r0@5
  BoolOption *v11; // r6@8

  v1 = this;
  v2 = (Options *)MinecraftScreenModel::getOptions(this);
  v3 = MinecraftGame::getUserManager(*((MinecraftGame **)v1 + 3));
  if ( (*(int (**)(void))(*(_DWORD *)v3 + 24))() == 1 )
  {
    v4 = (Option *)Options::get((int)v2, 162);
    if ( !Option::getBool(v4) )
    {
      v5 = *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) ? ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) : &ServiceLocator<AppPlatform>::mDefaultService;
      _R0 = (*(int (**)(void))(**(_DWORD **)v5 + 576))();
      __asm
      {
        VMOV.F32        S0, #1.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        v11 = (BoolOption *)Options::get((int)v2, 162);
        if ( !Option::hasOverrideSource(v11) )
          BoolOption::set(v11, 1);
        Options::save(v2, 0);
        j_j_j__ZN19MainMenuScreenModel24navigateToSafeZoneScreenEv(v1);
    }
  }
}


void __fastcall MainMenuScreenModel::navigateToCreateRealmUpsellScreen(int a1, char a2, int *a3)
{
  MainMenuScreenModel::navigateToCreateRealmUpsellScreen(a1, a2, a3);
}


void __fastcall MainMenuScreenModel::navigateToSafeZoneScreen(MainMenuScreenModel *this)
{
  MainMenuScreenModel::navigateToSafeZoneScreen(this);
}


int __fastcall MainMenuScreenModel::sendStoreCatalogContentTypeQuery(int a1, int **a2)
{
  int v2; // r5@1
  int **v3; // r4@1
  int v4; // r0@1
  int result; // r0@1
  __int64 v6; // kr00_8@1
  int v7; // r0@2
  int v8; // [sp+0h] [bp-20h]@2
  int (*v9)(void); // [sp+8h] [bp-18h]@2

  v2 = a1;
  v3 = a2;
  v4 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a1 + 12));
  v6 = *(_QWORD *)(StoreCatalogRepository::getStoreButtonContentTypeList(v4, v3) + 24);
  result = HIDWORD(v6);
  if ( HIDWORD(v6) == (_DWORD)v6 )
  {
    v7 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v2 + 12));
    v9 = 0;
    result = StoreCatalogRepository::sendContentTypeButtonQuery(v7, v3, (int)&v8);
    if ( v9 )
      result = v9();
  }
  return result;
}


void __fastcall MainMenuScreenModel::navigateToCreateRealmUpsellScreen(int a1, char a2, int *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  char v9; // [sp+10h] [bp-18h]@1
  int v10; // [sp+14h] [bp-14h]@1

  v3 = *(_QWORD *)(a1 + 20);
  SceneFactory::createCreateWorldUpsellScreen((unsigned __int64 *)&v9, SHIDWORD(v3), 1, 1, 0, a2, a3);
  SceneStack::pushScreen(v3, (int)&v9, 0);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


int __fastcall MainMenuScreenModel::getPatchNotesModel(MainMenuScreenModel *this)
{
  MainMenuScreenModel *v1; // r4@1
  int v2; // r5@1
  double v3; // r0@2
  PatchNotesModel *v4; // r0@2
  PatchNotesModel *v5; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 21);
  if ( !v2 )
  {
    LODWORD(v3) = operator new(0x38u);
    v2 = LODWORD(v3);
    PatchNotesModel::PatchNotesModel(v3);
    v4 = (PatchNotesModel *)*((_DWORD *)v1 + 21);
    *((_DWORD *)v1 + 21) = v2;
    if ( v4 )
    {
      v5 = PatchNotesModel::~PatchNotesModel(v4);
      operator delete((void *)v5);
      v2 = *((_DWORD *)v1 + 21);
    }
  }
  return v2;
}


void __fastcall MainMenuScreenModel::navigateToPlayScreen(int a1, int a2)
{
  MainMenuScreenModel::navigateToPlayScreen(a1, a2);
}


void __fastcall MainMenuScreenModel::navigateToFileDownloadFile(int a1, int *a2, int *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v3 = *(_QWORD *)(a1 + 20);
  SceneFactory::createFileDownloadProgressScreen((unsigned __int64 *)&v9, SHIDWORD(v3), a2, a3);
  SceneStack::pushScreen(v3, (int)&v9, 0);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


void __fastcall MainMenuScreenModel::refreshUserInventory(MainMenuScreenModel *this)
{
  MainMenuScreenModel::refreshUserInventory(this);
}


int __fastcall MainMenuScreenModel::getStoreCatalogFeaturedItems(MainMenuScreenModel *this)
{
  StoreCatalogRepository *v1; // r0@1

  v1 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  return StoreCatalogRepository::getFeaturedItems(v1);
}


signed int __fastcall MainMenuScreenModel::getFirstUnownedDlcDependencyFromList(int a1, unsigned __int64 *a2, int a3)
{
  int v3; // r8@1
  int v4; // r9@1
  int v5; // r5@1
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // r7@29
  int v13; // r1@29
  int v14; // r2@29
  int v15; // r3@29
  int v16; // r0@29
  void *v17; // r0@29
  void *v18; // r0@30
  void *v19; // r0@31
  int v20; // r1@33
  int v21; // r2@33
  int v22; // r3@33
  int v23; // r1@33
  __int16 v24; // r0@33
  signed int result; // r0@33
  int v26; // [sp+0h] [bp-90h]@2
  int v27; // [sp+8h] [bp-88h]@29
  int v28; // [sp+Ch] [bp-84h]@29
  int v29; // [sp+10h] [bp-80h]@29
  int v30; // [sp+14h] [bp-7Ch]@29
  int v31; // [sp+18h] [bp-78h]@29
  int v32; // [sp+20h] [bp-70h]@13
  int v33; // [sp+24h] [bp-6Ch]@9
  int v34; // [sp+28h] [bp-68h]@5
  char v35; // [sp+30h] [bp-60h]@29
  char v36; // [sp+38h] [bp-58h]@3

  v3 = *a2 >> 32;
  v4 = *a2;
  v5 = a1;
  if ( v4 == v3 )
  {
LABEL_34:
    result = 0;
  }
  else
    v26 = a3;
    while ( 1 )
    {
      v12 = MinecraftGame::getEntitlementManager(*(MinecraftGame **)(v5 + 12));
      v13 = *(_DWORD *)(v4 + 4);
      v14 = *(_DWORD *)(v4 + 8);
      v15 = *(_DWORD *)(v4 + 12);
      v27 = *(_DWORD *)v4;
      v28 = v13;
      v29 = v14;
      v30 = v15;
      SemVersion::SemVersion((int)&v31, v4 + 16);
      v35 = *(_BYTE *)(v4 + 40);
      v16 = EntitlementManager::getEntitlement(v12, (int)&v27);
      Entitlement::Entitlement((int)&v36, v16);
      v17 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v34 - 4);
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
          j_j_j_j_j__ZdlPv_9(v17);
      }
      v18 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v33 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j_j__ZdlPv_9(v18);
      v19 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v32 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9(v19);
      if ( !Entitlement::isOwned((Entitlement *)&v36) )
        break;
      Entitlement::~Entitlement((Entitlement *)&v36);
      v4 += 56;
      if ( v4 == v3 )
        goto LABEL_34;
    }
    v20 = *(_DWORD *)(v4 + 4);
    v21 = *(_DWORD *)(v4 + 8);
    v22 = *(_DWORD *)(v4 + 12);
    *(_DWORD *)v26 = *(_DWORD *)v4;
    *(_DWORD *)(v26 + 4) = v20;
    *(_DWORD *)(v26 + 8) = v21;
    *(_DWORD *)(v26 + 12) = v22;
    v23 = *(_DWORD *)(v4 + 16);
    *(_WORD *)(v26 + 20) = *(_WORD *)(v4 + 20);
    *(_DWORD *)(v26 + 16) = v23;
    EntityInteraction::setInteractText((int *)(v26 + 24), (int *)(v4 + 24));
    EntityInteraction::setInteractText((int *)(v26 + 28), (int *)(v4 + 28));
    EntityInteraction::setInteractText((int *)(v26 + 32), (int *)(v4 + 32));
    v24 = *(_WORD *)(v4 + 36);
    *(_BYTE *)(v26 + 38) = *(_BYTE *)(v4 + 38);
    *(_WORD *)(v26 + 36) = v24;
    *(_BYTE *)(v26 + 40) = *(_BYTE *)(v4 + 40);
    *(_DWORD *)(v26 + 48) = *(_DWORD *)(v4 + 48);
    Entitlement::~Entitlement((Entitlement *)&v36);
    result = 1;
  return result;
}


void __fastcall MainMenuScreenModel::getStoreCatelogCategoryRowName(MainMenuScreenModel *this, int a2, int a3)
{
  MainMenuScreenModel::getStoreCatelogCategoryRowName(this, a2, a3);
}


void *__fastcall MainMenuScreenModel::getSkinPackCollection(MainMenuScreenModel *this)
{
  MainMenuScreenModel *v1; // r4@1
  void *v2; // r5@1
  int v3; // r8@2
  int v4; // r9@2
  __int64 v5; // r6@2
  int v6; // r0@2

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 15);
  if ( !v2 )
  {
    v3 = MinecraftGame::getEntitlementManager(*((MinecraftGame **)this + 3));
    v4 = MinecraftGame::getSkinRepository(*((MinecraftGame **)v1 + 3));
    LODWORD(v5) = ClientInstance::getSkinRepositoryClientInterface(*((ClientInstance **)v1 + 4));
    HIDWORD(v5) = MinecraftGame::getContentCatalogService(*((MinecraftGame **)v1 + 3));
    v2 = operator new(0xB8u);
    SkinPackCollectionModel::SkinPackCollectionModel((unsigned int)v2, (int)v1, v3, v4, v5);
    v6 = *((_DWORD *)v1 + 15);
    *((_DWORD *)v1 + 15) = v2;
    if ( v6 )
    {
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      v2 = (void *)*((_DWORD *)v1 + 15);
    }
  }
  return v2;
}


void __fastcall MainMenuScreenModel::navigateToCreateNewWorldFromScratchScreen(MainMenuScreenModel *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createCreateWorldScreen((SceneFactory *)&v7, SHIDWORD(v1));
  SceneStack::pushScreen(v1, (int)&v7, 0);
  v2 = v8;
  if ( v8 )
  {
    v3 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
}


void __fastcall MainMenuScreenModel::navigateToCoinPurchaseScreen(MainMenuScreenModel *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createCoinPurchaseScreen((SceneFactory *)&v7, SHIDWORD(v1));
  SceneStack::pushScreen(v1, (int)&v7, 0);
  v2 = v8;
  if ( v8 )
  {
    v3 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
}


void __fastcall MainMenuScreenModel::navigateToCreateNewWorldFromTemplateScreen(MainMenuScreenModel *this, const LevelSummary *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createCreateWorldFromTemplateScreen((SceneFactory *)&v8, (const LevelSummary *)HIDWORD(v2), (int *)a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


signed int __fastcall MainMenuScreenModel::isWorldTemplateInstalled(MainMenuScreenModel *this, const PackIdVersion *a2)
{
  return j_j_j__ZNK20WorldTemplateManager24isWorldTemplateInstalledERK13PackIdVersion(
           *((WorldTemplateManager **)this + 27),
           a2);
}


void __fastcall MainMenuScreenModel::navigateToMakeInfiniteScreen(int a1, int a2, int a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v3 = *(_QWORD *)(a1 + 20);
  SceneFactory::createMakeInfiniteScreen((unsigned __int64 *)&v9, SHIDWORD(v3), a2, a3);
  SceneStack::pushScreen(v3, (int)&v9, 0);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


signed int __fastcall MainMenuScreenModel::getStoreCatalogQueryTypeSize(int a1, int **a2)
{
  int **v2; // r4@1
  int v3; // r0@1
  int v4; // r0@1

  v2 = a2;
  v3 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a1 + 12));
  v4 = StoreCatalogRepository::getStoreButtonContentTypeList(v3, v2);
  return (signed int)((*(_QWORD *)(v4 + 24) >> 32) - *(_QWORD *)(v4 + 24)) >> 2;
}


int __fastcall MainMenuScreenModel::checkStoreForAvailableUpdates(MainMenuScreenModel *this)
{
  StoreCatalogRepository *v1; // r0@1

  v1 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK22StoreCatalogRepository19hasUpdatesAvailableEv(v1);
}


void __fastcall MainMenuScreenModel::navigateToWorldConversionErrorReportScreen(MainMenuScreenModel *this, const LegacyWorldInfo *a2, bool a3)
{
  MainMenuScreenModel::navigateToWorldConversionErrorReportScreen(this, a2, a3);
}


void __fastcall MainMenuScreenModel::navigateToStoreHomeScreen(int a1, int *a2)
{
  MainMenuScreenModel::navigateToStoreHomeScreen(a1, a2);
}


    if ( MainMenuScreenModel::getStoreHasRealmsProducts(*(MainMenuScreenModel **)(v10 + 432))
{
    {
      if ( !MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v10 + 432), 1) )
      {
        MinecraftScreenController::_showNoWifiModal((MinecraftScreenController *)v10);
        goto LABEL_39;
      }
      if ( !MinecraftScreenModel::isLiveMultiplayerAllowed(*(MinecraftScreenModel **)(v10 + 432)) )
        MinecraftScreenController::_showLiveMultiplayerModal((MinecraftScreenController *)v10);
      v11 = MainMenuScreenModel::getStoreSupportsSubscriptions(*(MainMenuScreenModel **)(v10 + 432));
      v12 = v11;
      if ( v11 )
        v12 = 2;
      v13 = MainMenuScreenModel::isRealmsTrialStoreOfferAvailable(*(_DWORD *)(v10 + 432), v11, v12, 1);
      v14 = *(_DWORD *)(v10 + 432);
      sub_21E94B4((void **)&v36, (const char *)&unk_257BC67);
      sub_21E94B4((void **)&v35, (const char *)&unk_257BC67);
      v37 = 0;
      sub_21E8AF4(&v38, &v36);
      sub_21E8AF4(&v39, &v35);
      v40 = 1;
      v41 = 0;
      v42 = v13;
      MainMenuScreenModel::navigateToRealmsCreateScreen(v14, (int)&v37);
      v15 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v39 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        }
        else
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v16 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v38 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v35 - 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v36 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          goto LABEL_59;
        goto LABEL_58;
    }
    else
      sub_21E94B4((void **)&v46, "realmsCreateScreen.createFailed.title");
      sub_21E94B4((void **)&v45, "skins.buy.noConnection");
      v43 = operator new(1u);
      LODWORD(v21) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIFvbEEEd_UlbE_E10_M_managerERSt9_Any_dataRKSA_St18_Manager_operation;
      HIDWORD(v21) = ZNSt17_Function_handlerIFvbEZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIS0_EEd_UlbE_E9_M_invokeERKSt9_Any_datab;
      v44 = v21;
      MinecraftScreenController::_displayStandardModalPopup(v10, &v46, &v45, 2, (int)&v43);
      if ( (_DWORD)v44 )
        ((void (*)(void))v44)();
      v22 = (void *)(v45 - 12);
      if ( (int *)(v45 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v45 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v18 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v46 - 4);
LABEL_59:
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
          goto LABEL_39;
LABEL_58:
        v20 = (*v19)--;
        goto LABEL_59;
  }
LABEL_39:
  if ( v3 )
  {
    v23 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      v25 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      else
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
}


void __fastcall MainMenuScreenModel::navigateToRealmsWhitelistScreen(MainMenuScreenModel *this, const Realms::World *a2)
{
  MainMenuScreenModel::navigateToRealmsWhitelistScreen(this, a2);
}


void __fastcall MainMenuScreenModel::navigateToLocalWorldPickerScreen(int a1, int *a2)
{
  MainMenuScreenModel::navigateToLocalWorldPickerScreen(a1, a2);
}


int __fastcall MainMenuScreenModel::isStoreDisabled(MainMenuScreenModel *this)
{
  return MinecraftScreenModel::isPrimaryClient(this) ^ 1;
}


int __fastcall MainMenuScreenModel::navigateToModalProgressScreen(int a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // kr00_8@1
  int v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  int result; // r0@15
  int v13; // [sp+14h] [bp-1Ch]@1
  char v14; // [sp+18h] [bp-18h]@1
  int v15; // [sp+1Ch] [bp-14h]@1

  v5 = *(_QWORD *)(a1 + 20);
  v6 = *(_DWORD *)a3;
  *(_DWORD *)a3 = 0;
  v13 = v6;
  SceneFactory::createModalProgressScreen((int)&v14, SHIDWORD(v5), a2, COERCE_FLOAT(&v13), 0, a4, (int *)a5, 1061997773);
  SceneStack::pushScreen(v5, (int)&v14, 0);
  v7 = v15;
  if ( v15 )
  {
    v8 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  result = v13;
  if ( v13 )
    result = (*(int (**)(void))(*(_DWORD *)v13 + 4))();
  return result;
}


RakNet *__fastcall MainMenuScreenModel::setStoreCatalogItemViewed(MainMenuScreenModel *this, const StoreCatalogItemModel *a2)
{
  StoreCatalogItemModel *v2; // r4@1
  int v3; // r5@1
  const char **v4; // r1@1

  v2 = a2;
  v3 = MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  v4 = (const char **)StoreCatalogItemModel::getProductId(v2);
  return j_j_j__ZN22StoreCatalogRepository13setItemViewedERKSs(v3, v4);
}


void __fastcall MainMenuScreenModel::navigateToCreateWorldUpsellScreen(int a1, char a2, int *a3)
{
  MainMenuScreenModel::navigateToCreateWorldUpsellScreen(a1, a2, a3);
}


void __fastcall MainMenuScreenModel::navigateToRealmsPurchaseInfoScreen(MainMenuScreenModel *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createRealmsPurchaseInfoScreen((SceneFactory *)&v7, SHIDWORD(v1));
  SceneStack::pushScreen(v1, (int)&v7, 0);
  v2 = v8;
  if ( v8 )
  {
    v3 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
}


ResourcePack *__fastcall MainMenuScreenModel::getMissingOwnedPackIdsFromDlcDependencies(int a1, int a2, unsigned __int64 *a3)
{
  int v3; // r5@1
  ResourcePack *result; // r0@1
  int v5; // r10@1
  int i; // r6@1
  int v7; // r9@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  int v14; // r7@28
  int v15; // r1@28
  int v16; // r2@28
  int v17; // r3@28
  Entitlement *v18; // r7@28
  void *v19; // r0@28
  void *v20; // r0@29
  void *v21; // r0@30
  ResourcePackRepository *v22; // r0@32
  __int64 v23; // kr08_8@33
  int v24; // r1@34
  int v25; // r2@34
  int v26; // r3@34
  int v27; // [sp+8h] [bp-58h]@28
  int v28; // [sp+Ch] [bp-54h]@28
  int v29; // [sp+10h] [bp-50h]@28
  int v30; // [sp+14h] [bp-4Ch]@28
  int v31; // [sp+18h] [bp-48h]@28
  int v32; // [sp+20h] [bp-40h]@11
  int v33; // [sp+24h] [bp-3Ch]@7
  int v34; // [sp+28h] [bp-38h]@3
  char v35; // [sp+30h] [bp-30h]@28

  v3 = a1;
  result = 0;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  v5 = a2;
  *(_DWORD *)(v3 + 8) = 0;
  v7 = *a3 >> 32;
  for ( i = *a3; i != v7; i += 56 )
  {
    result = *(ResourcePack **)(i + 48);
    if ( !result )
    {
      v14 = MinecraftGame::getEntitlementManager(*(MinecraftGame **)(v5 + 12));
      v15 = *(_DWORD *)(i + 4);
      v16 = *(_DWORD *)(i + 8);
      v17 = *(_DWORD *)(i + 12);
      v27 = *(_DWORD *)i;
      v28 = v15;
      v29 = v16;
      v30 = v17;
      SemVersion::SemVersion((int)&v31, i + 16);
      v35 = *(_BYTE *)(i + 40);
      v18 = (Entitlement *)EntitlementManager::getEntitlement(v14, (int)&v27);
      v19 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v34 - 4);
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
          j_j_j_j_j__ZdlPv_9(v19);
      }
      v20 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v33 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9(v20);
      v21 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v32 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9(v21);
      result = (ResourcePack *)Entitlement::isOwned(v18);
      if ( result == (ResourcePack *)1 )
        v22 = (ResourcePackRepository *)MinecraftScreenModel::getResourcePackRepository((MinecraftScreenModel *)v5);
        result = ResourcePackRepository::getResourcePackSatisfiesPackId(v22, (const PackIdVersion *)i, 0);
        if ( !result )
          v23 = *(_QWORD *)(v3 + 4);
          if ( (_DWORD)v23 == HIDWORD(v23) )
          {
            result = (ResourcePack *)std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_emplace_back_aux<PackIdVersion const&>(
                                       (unsigned __int64 *)v3,
                                       i);
          }
          else
            v24 = *(_DWORD *)(i + 4);
            v25 = *(_DWORD *)(i + 8);
            v26 = *(_DWORD *)(i + 12);
            *(_DWORD *)v23 = *(_DWORD *)i;
            *(_DWORD *)(v23 + 4) = v24;
            *(_DWORD *)(v23 + 8) = v25;
            *(_DWORD *)(v23 + 12) = v26;
            SemVersion::SemVersion(v23 + 16, i + 16);
            *(_BYTE *)(v23 + 40) = *(_BYTE *)(i + 40);
            result = (ResourcePack *)(v23 + 48);
            *(_DWORD *)(v3 + 4) = v23 + 48;
    }
  }
  return result;
}


void __fastcall MainMenuScreenModel::navigateToStoreHomeScreen(int a1, int *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)(a1 + 20);
  SceneFactory::createStoreHomeScreen((unsigned __int64 *)&v8, SHIDWORD(v2), a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


void __fastcall MainMenuScreenModel::navigateToWorldConversionErrorReportScreen(MainMenuScreenModel *this, const LegacyWorldInfo *a2, bool a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v3 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createWorldErrorReportScreen((SceneFactory *)&v9, (const LegacyWorldInfo *)HIDWORD(v3), (int)a2, a3);
  SceneStack::pushScreen(v3, (int)&v9, 0);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


int __fastcall MainMenuScreenModel::getDefaultStoreQuery(int a1, int **a2)
{
  int **v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a1 + 12));
  return StoreCatalogRepository::getDefaultContentQuery(v3, v2);
}


    if ( MainMenuScreenModel::getStoreHasRealmsProducts(v3)
{
    {
      if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 1) )
      {
        if ( MinecraftScreenModel::isLiveMultiplayerAllowed(*(MinecraftScreenModel **)(v1 + 424)) )
        {
          MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(v1 + 424));
          v4 = *(_DWORD *)(v1 + 424);
          sub_119C884((void **)&v48, (const char *)&unk_257BC67);
          sub_119C884((void **)&v47, (const char *)&unk_257BC67);
          v5 = *(_DWORD *)(v1 + 424);
          v6 = v1 + 456;
          v7 = *(_DWORD *)v6;
          v8 = *(_DWORD *)(v6 + 4);
          v9 = *(_DWORD *)(v6 + 8);
          v10 = MainMenuScreenModel::isRealmsTrialStoreOfferAvailable(v5, v7, v8, v9);
          v49 = 0;
          sub_119C854(&v50, &v48);
          sub_119C854(&v51, &v47);
          v52 = v9;
          v53 = 0;
          v54 = v10;
          MainMenuScreenModel::navigateToRealmsCreateScreen(v4, (int)&v49);
          v11 = (void *)(v51 - 12);
          if ( (int *)(v51 - 12) != &dword_28898C0 )
          {
            v37 = (unsigned int *)(v51 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v38 = __ldrex(v37);
              while ( __strex(v38 - 1, v37) );
            }
            else
              v38 = (*v37)--;
            if ( v38 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v11);
          }
          v12 = (void *)(v50 - 12);
          if ( (int *)(v50 - 12) != &dword_28898C0 )
            v39 = (unsigned int *)(v50 - 4);
                v40 = __ldrex(v39);
              while ( __strex(v40 - 1, v39) );
              v40 = (*v39)--;
            if ( v40 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v12);
          v13 = (void *)(v47 - 12);
          if ( (int *)(v47 - 12) != &dword_28898C0 )
            v41 = (unsigned int *)(v47 - 4);
                v42 = __ldrex(v41);
              while ( __strex(v42 - 1, v41) );
              v42 = (*v41)--;
            if ( v42 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v13);
          v14 = (void *)(v48 - 12);
          if ( (int *)(v48 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)(v48 - 4);
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v14);
          return 8;
        }
        MinecraftScreenController::_showLiveMultiplayerModal((MinecraftScreenController *)v1);
      }
      else
        MinecraftScreenController::_showNoWifiModal((MinecraftScreenController *)v1);
    }
    else
      sub_119C884((void **)&v58, "realmsCreateScreen.createFailed.title");
      sub_119C884((void **)&v57, "skins.buy.noConnection");
      v55 = operator new(1u);
      LODWORD(v20) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIFvbEEEd_UlbE_E10_M_managerERSt9_Any_dataRKSA_St18_Manager_operation;
      HIDWORD(v20) = ZNSt17_Function_handlerIFvbEZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIS0_EEd_UlbE_E9_M_invokeERKSt9_Any_datab;
      v56 = v20;
      MinecraftScreenController::_displayStandardModalPopup(v1, &v58, &v57, 2, (int)&v55);
      if ( (_DWORD)v56 )
        ((void (*)(void))v56)();
      v21 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v57 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        else
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
      v22 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v58 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
    return 0;
  }
  if ( MinecraftScreenModel::tryNavigateToXblFirstLaunchScreen(v3) )
    return 8;
  MinecraftScreenController::_getWeakPtrToThis<CreateWorldUpsellScreenController>((int)&v45, v1);
  v17 = *(_QWORD *)&v45;
  if ( v46 )
  {
    v18 = (unsigned int *)(v46 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
      ++*v18;
  v44 = 0;
  v26 = operator new(8u);
  *v26 = v17;
  if ( HIDWORD(v17) )
    v27 = (unsigned int *)(HIDWORD(v17) + 8);
        v28 = __ldrex(v27);
      while ( __strex(v28 + 1, v27) );
      ++*v27;
  LODWORD(v29) = sub_117FA08;
  v43 = v26;
  HIDWORD(v29) = sub_117F378;
  *(_QWORD *)&v44 = v29;
  MinecraftScreenController::_attemptSignIn(v1, (int)&v43);
  if ( v44 )
    v44();
    v30 = (unsigned int *)(HIDWORD(v17) + 8);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v17) + 12))(HIDWORD(v17));
  v32 = v46;
    v33 = (unsigned int *)(v46 + 8);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 == 1 )
      (*(void (**)(void))(*(_DWORD *)v32 + 12))();
  return 1;
}


void __fastcall MainMenuScreenModel::navigateToRealmsWarningScreen(int a1, const Realms::World *a2, int *a3, int a4)
{
  MainMenuScreenModel::navigateToRealmsWarningScreen(a1, a2, a3, a4);
}


void __fastcall MainMenuScreenModel::navigateToRealmsPendingInvitesScreen(MainMenuScreenModel *this, bool a2)
{
  MainMenuScreenModel::navigateToRealmsPendingInvitesScreen(this, a2);
}


void __fastcall MainMenuScreenModel::navigateToLocalWorldPickerScreen(int a1, int *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)(a1 + 20);
  SceneFactory::createLocalWorldPickerScreen((unsigned __int64 *)&v8, SHIDWORD(v2), a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


signed int __fastcall MainMenuScreenModel::createRealmsWorld(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  MinecraftScreenModel *v6; // r7@1
  int v7; // r8@1
  int v8; // r5@1
  int v9; // r6@1
  int v10; // r4@1
  int v11; // r0@1
  int v12; // r2@1
  signed int v13; // r4@1
  int v15; // [sp+Ch] [bp-1Ch]@1

  v6 = (MinecraftScreenModel *)a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = MinecraftGame::getOfferRepository(*(MinecraftGame **)(a1 + 12));
  v11 = MinecraftScreenModel::getNumberOfOwnedRealms(v6);
  MinecraftScreenModel::setNumberOfOwnedRealms(v6, v11 + 1);
  v12 = *a6;
  *a6 = 0;
  v15 = v12;
  v13 = OfferRepository::purchaseRealmsOffer(v10, v9, v8, v7, a5, &v15);
  std::unique_ptr<TransactionContext,std::default_delete<TransactionContext>>::~unique_ptr(&v15);
  return v13;
}


signed int __fastcall MainMenuScreenModel::getNumStoreCatalogInCategoryRow(MainMenuScreenModel *this, int a2)
{
  int v2; // r4@1
  StoreCatalogRepository *v3; // r0@1
  int *v4; // r0@1

  v2 = a2;
  v3 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  v4 = StoreCatalogRepository::getStoreRow(v3, v2);
  return (signed int)((*((_QWORD *)v4 + 3) >> 32) - *((_QWORD *)v4 + 3)) >> 2;
}


void __fastcall MainMenuScreenModel::navigateToPurchaseOfferScreen(int a1, const void **a2, int a3, int *a4)
{
  MainMenuScreenModel::navigateToPurchaseOfferScreen(a1, a2, a3, a4);
}


signed int __fastcall MainMenuScreenModel::hasEntitlementFor(MainMenuScreenModel *this, const mce::UUID *a2)
{
  const mce::UUID *v2; // r4@1
  EntitlementManager *v3; // r0@1
  Entitlement *v4; // r0@1

  v2 = a2;
  v3 = (EntitlementManager *)MinecraftGame::getEntitlementManager(*((MinecraftGame **)this + 3));
  v4 = (Entitlement *)EntitlementManager::getEntitlement(v3, v2);
  return j_j_j__ZNK11Entitlement7isOwnedEv(v4);
}


int __fastcall MainMenuScreenModel::getStoreSupportsSubscriptions(MainMenuScreenModel *this)
{
  OfferRepository *v1; // r0@1

  v1 = (OfferRepository *)MinecraftGame::getOfferRepository(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK15OfferRepository19allowsSubscriptionsEv(v1);
}


void __fastcall MainMenuScreenModel::navigateToDlcProgressScreen(int a1, unsigned __int64 *a2, int a3, char a4)
{
  MainMenuScreenModel::navigateToDlcProgressScreen(a1, a2, a3, a4);
}


int __fastcall MainMenuScreenModel::navigateToPurchaseOfferScreen(int a1, int a2, int a3, int *a4)
{
  int v4; // r6@1
  int v5; // r11@1
  int *v6; // r5@1
  int v7; // r9@1
  StoreCatalogRepository *v8; // r0@1
  void *v9; // r1@1
  void *v10; // r0@3
  int v11; // r4@3
  int v12; // r4@5
  int v13; // r12@5
  __int64 v14; // kr00_8@5
  unsigned int *v15; // r0@6
  unsigned int v16; // r1@8
  int v17; // r1@11
  int v18; // r2@11
  int v19; // r3@11
  __int64 v20; // kr08_8@11
  unsigned int *v21; // r0@12
  unsigned int v22; // r1@14
  unsigned int *v23; // r0@18
  unsigned int v24; // r1@20
  unsigned int *v25; // r0@24
  unsigned int v26; // r1@26
  char *v27; // r0@29
  unsigned int *v28; // r1@30
  unsigned int v29; // r2@32
  int v30; // r12@35
  int v31; // r2@35
  int v32; // r3@35
  int v33; // r7@35
  __int64 v34; // r4@35
  unsigned int *v35; // r1@40
  unsigned int v36; // r0@42
  void *v37; // r0@47
  void **v38; // r0@48
  void *v39; // r0@48
  void *v40; // r0@51
  int v41; // r0@52
  unsigned int *v42; // r1@55
  unsigned int v43; // r0@57
  unsigned int *v44; // r5@61
  unsigned int v45; // r0@63
  unsigned int *v46; // r1@69
  unsigned int v47; // r0@71
  int v48; // r4@76
  unsigned int *v49; // r1@77
  unsigned int v50; // r0@79
  unsigned int *v51; // r5@83
  unsigned int v52; // r0@85
  int result; // r0@90
  unsigned int *v54; // r2@91
  unsigned int v55; // r1@93
  unsigned int *v56; // r2@99
  signed int v57; // r1@101
  unsigned int *v58; // r2@103
  signed int v59; // r1@105
  unsigned int *v60; // r2@107
  signed int v61; // r1@109
  unsigned int *v62; // r2@111
  signed int v63; // r1@113
  int *v64; // [sp+8h] [bp-C0h]@5
  void *v65; // [sp+Ch] [bp-BCh]@17
  char v66; // [sp+14h] [bp-B4h]@52
  void (*v67)(void); // [sp+1Ch] [bp-ACh]@52
  int v68; // [sp+28h] [bp-A0h]@48
  void *v69; // [sp+2Ch] [bp-9Ch]@48
  int v70; // [sp+34h] [bp-94h]@48
  int v71[5]; // [sp+38h] [bp-90h]@5
  int v72; // [sp+4Ch] [bp-7Ch]@5
  int v73; // [sp+50h] [bp-78h]@11
  int v74; // [sp+54h] [bp-74h]@3
  char v75; // [sp+58h] [bp-70h]@2
  char v76; // [sp+5Ch] [bp-6Ch]@1
  int v77; // [sp+60h] [bp-68h]@5
  char v78; // [sp+68h] [bp-60h]@35
  void (*v79)(void); // [sp+70h] [bp-58h]@35
  int v80; // [sp+78h] [bp-50h]@23
  int v81; // [sp+7Ch] [bp-4Ch]@23
  int v82; // [sp+80h] [bp-48h]@23
  int v83; // [sp+84h] [bp-44h]@23
  char *v84; // [sp+88h] [bp-40h]@35
  void (*v85)(void); // [sp+90h] [bp-38h]@29
  int v86; // [sp+9Ch] [bp-2Ch]@17

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  MainMenuScreenModel::_getWeakPtr((MainMenuScreenModel *)&v76, a1);
  v8 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v4 + 12));
  v9 = (void *)StoreCatalogRepository::getStoreCatalogItemByPackIdentity(v8, (const mce::UUID *)v5);
  if ( v9 )
  {
    StoreCatalogItemModel::StoreCatalogItemModel(&v75, v9);
    ClientInstance::navigateToPurchaseOfferScreen(*(_DWORD *)(v4 + 16), (StoreCatalogItemModel *)&v75, v7);
  }
  else
    mce::UUID::asString((mce::UUID *)&v74);
    v10 = (void *)(v74 - 12);
    v11 = *(_DWORD *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
    {
      v56 = (unsigned int *)(v74 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
      }
      else
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j_j__ZdlPv_9(v10);
    }
    if ( v11 )
      j__ZNSt12__shared_ptrI12AsyncTrackerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v72);
      v64 = v6;
      v12 = v72;
      sub_DA7F0C((_QWORD *)v71);
      v13 = v12 + 8;
      *(_QWORD *)v13 = *(_QWORD *)v71;
      *(_DWORD *)(v13 + 8) = 5;
      *(_DWORD *)(v12 + 20) = 0;
      *(_BYTE *)(v12 + 24) = 0;
      *(_BYTE *)(v12 + 1) = 0;
      v14 = *(_QWORD *)&v76;
      if ( v77 )
        v15 = (unsigned int *)(v77 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 + 1, v15) );
        }
        else
          ++*v15;
      v17 = *(_DWORD *)(v5 + 4);
      v18 = *(_DWORD *)(v5 + 8);
      v19 = *(_DWORD *)(v5 + 12);
      v71[0] = *(_DWORD *)v5;
      v71[1] = v17;
      v71[2] = v18;
      v71[3] = v19;
      v20 = *(_QWORD *)&v72;
      if ( v73 )
        v21 = (unsigned int *)(v73 + 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 + 1, v21) );
          ++*v21;
      v65 = operator new(0x30u);
      sub_DA7364((void **)&v86, "store.fetchingItem");
      if ( HIDWORD(v14) )
        v23 = (unsigned int *)(HIDWORD(v14) + 8);
            v24 = __ldrex(v23);
          while ( __strex(v24 + 1, v23) );
          ++*v23;
      v80 = v71[0];
      v81 = v71[1];
      v82 = v71[2];
      v83 = v71[3];
      if ( HIDWORD(v20) )
        v25 = (unsigned int *)(HIDWORD(v20) + 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 + 1, v25) );
          ++*v25;
      v85 = 0;
      v27 = (char *)operator new(0x28u);
      *(_QWORD *)v27 = v14;
        v28 = (unsigned int *)(HIDWORD(v14) + 8);
            v29 = __ldrex(v28);
          while ( __strex(v29 + 1, v28) );
          ++*v28;
      v30 = (int)(v27 + 8);
      v31 = v81;
      v32 = v82;
      v33 = v83;
      *(_DWORD *)v30 = v80;
      *(_DWORD *)(v30 + 4) = v31;
      *(_DWORD *)(v30 + 8) = v32;
      *(_DWORD *)(v30 + 12) = v33;
      *(_DWORD *)(v30 + 16) = v20;
      HIDWORD(v34) = sub_CD65A8;
      *((_DWORD *)v27 + 7) = HIDWORD(v20);
      *((_DWORD *)v27 + 8) = v7;
      v84 = v27;
      LODWORD(v34) = sub_CD6818;
      *(_QWORD *)&v85 = v34;
      v79 = 0;
      StoreProgressHandler::StoreProgressHandler((int)v65, &v86, (int)&v84, (int)&v78);
      if ( v79 )
        v79();
      if ( v85 )
        v85();
        v35 = (unsigned int *)(HIDWORD(v14) + 8);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v14) + 12))(HIDWORD(v14));
      v37 = (void *)(v86 - 12);
      if ( (int *)(v86 - 12) != &dword_28898C0 )
        v58 = (unsigned int *)(v86 - 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j_j__ZdlPv_9(v37);
      sub_DA7364((void **)&v70, "hydrating_item_for_upsell");
      v69 = v65;
      v38 = sub_DA7364((void **)&v68, (const char *)&unk_257BC67);
      MainMenuScreenModel::navigateToModalProgressScreen(v4, (int)&v70, (int)&v69, 0, (int)v38);
      v39 = (void *)(v68 - 12);
      if ( (int *)(v68 - 12) != &dword_28898C0 )
        v60 = (unsigned int *)(v68 - 4);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j_j__ZdlPv_9(v39);
      if ( v69 )
        (*(void (**)(void))(*(_DWORD *)v69 + 4))();
      v69 = 0;
      v40 = (void *)(v70 - 12);
      if ( (int *)(v70 - 12) != &dword_28898C0 )
        v62 = (unsigned int *)(v70 - 4);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          v63 = (*v62)--;
        if ( v63 <= 0 )
          j_j_j_j_j__ZdlPv_9(v40);
      v41 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v4 + 12));
      v67 = 0;
      StoreCatalogRepository::fetchStoreItem(v41, v5, v64, (int)&v66);
      if ( v67 )
        v67();
        v42 = (unsigned int *)(HIDWORD(v20) + 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 == 1 )
          v44 = (unsigned int *)(HIDWORD(v20) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v20) + 8))(HIDWORD(v20));
          if ( &pthread_create )
          {
            __dmb();
            do
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
          }
          else
            v45 = (*v44)--;
          if ( v45 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v20) + 12))(HIDWORD(v20));
        v46 = (unsigned int *)(HIDWORD(v14) + 8);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 == 1 )
      v48 = v73;
        v49 = (unsigned int *)(v73 + 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 == 1 )
          v51 = (unsigned int *)(v48 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 8))(v48);
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
            v52 = (*v51)--;
          if ( v52 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 12))(v48);
  result = v77;
  if ( v77 )
    v54 = (unsigned int *)(v77 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
    else
      v55 = (*v54)--;
    if ( v55 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall MainMenuScreenModel::getStoreCatalogItem(MainMenuScreenModel *this, int a2, int a3)
{
  MainMenuScreenModel *v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  StoreCatalogRepository *v6; // r0@1
  int *v7; // r0@1
  __int64 v8; // kr00_8@2
  int result; // r0@3

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  v7 = StoreCatalogRepository::getStoreRow(v6, v5);
  if ( v4 < 0 || (v8 = *((_QWORD *)v7 + 3), (HIDWORD(v8) - (signed int)v8) >> 2 <= v4) )
    result = *((_DWORD *)v3 + 16);
  else
    result = *(_DWORD *)(v8 + 4 * v4);
  return result;
}


void __fastcall MainMenuScreenModel::navigateToPurchaseOfferScreen(int a1, StoreCatalogItemModel *a2, int a3)
{
  MainMenuScreenModel::navigateToPurchaseOfferScreen(a1, a2, a3);
}


void __fastcall MainMenuScreenModel::navigateToCreateWorldUpsellScreen(int a1, char a2, int *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  char v9; // [sp+10h] [bp-18h]@1
  int v10; // [sp+14h] [bp-14h]@1

  v3 = *(_QWORD *)(a1 + 20);
  SceneFactory::createCreateWorldUpsellScreen((unsigned __int64 *)&v9, *(_QWORD *)(a1 + 20) >> 32, 0, 1, a2, 0, a3);
  SceneStack::pushScreen(v3, (int)&v9, 0);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


int __fastcall MainMenuScreenModel::getStoreCatalogFeaturedItem(MainMenuScreenModel *this, int a2)
{
  MainMenuScreenModel *v2; // r5@1
  int v3; // r4@1
  StoreCatalogRepository *v4; // r0@1
  __int64 *v5; // r0@1
  __int64 v6; // kr00_8@2
  int result; // r0@3

  v2 = this;
  v3 = a2;
  v4 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  v5 = (__int64 *)StoreCatalogRepository::getFeaturedItems(v4);
  if ( v3 < 0 || (v6 = *v5, (HIDWORD(v6) - (signed int)v6) >> 2 <= v3) )
    result = *((_DWORD *)v2 + 16);
  else
    result = *(_DWORD *)(v6 + 4 * v3);
  return result;
}


void __fastcall MainMenuScreenModel::navigateToUGCViewerScreen(int a1, int a2)
{
  __int64 v2; // r4@1
  int v3; // r6@1
  void (__fastcall *v4)(int *); // r3@1
  int v5; // r4@3
  unsigned int *v6; // r1@4
  unsigned int v7; // r0@6
  unsigned int *v8; // r5@10
  unsigned int v9; // r0@12
  int v10; // [sp+0h] [bp-28h]@2
  void (*v11)(void); // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@2
  char v13; // [sp+10h] [bp-18h]@3
  int v14; // [sp+14h] [bp-14h]@3

  v2 = *(_QWORD *)(a1 + 20);
  v3 = a2;
  v11 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v10);
    v12 = *(_DWORD *)(v3 + 12);
    v11 = *(void (**)(void))(v3 + 8);
  }
  SceneFactory::createWorldSeedCatalogScreen((unsigned __int64 *)&v13, SHIDWORD(v2), (int)&v10);
  SceneStack::pushScreen(v2, (int)&v13, 0);
  v5 = v14;
  if ( v14 )
    v6 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  if ( v11 )
    v11();
}


void __fastcall MainMenuScreenModel::repopulateWorldTemplates(MainMenuScreenModel *this)
{
  MainMenuScreenModel::repopulateWorldTemplates(this);
}


    if ( MainMenuScreenModel::getStoreHasRealmsProducts(*(MainMenuScreenModel **)(v10 + 424))
{
    {
      if ( !MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v10 + 424), 1) )
      {
        MinecraftScreenController::_showNoWifiModal((MinecraftScreenController *)v10);
        goto LABEL_37;
      }
      if ( !MinecraftScreenModel::isLiveMultiplayerAllowed(*(MinecraftScreenModel **)(v10 + 424)) )
        MinecraftScreenController::_showLiveMultiplayerModal((MinecraftScreenController *)v10);
      MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(v10 + 424));
      v11 = *(_DWORD *)(v10 + 424);
      sub_119C884((void **)&v39, (const char *)&unk_257BC67);
      sub_119C884((void **)&v38, (const char *)&unk_257BC67);
      v12 = *(_DWORD *)(v10 + 424);
      v13 = v10 + 456;
      v14 = *(_DWORD *)v13;
      v15 = *(_DWORD *)(v13 + 4);
      v16 = *(_DWORD *)(v13 + 8);
      v17 = MainMenuScreenModel::isRealmsTrialStoreOfferAvailable(v12, v14, v15, v16);
      v40 = 0;
      sub_119C854(&v41, &v39);
      sub_119C854(&v42, &v38);
      v43 = v16;
      v44 = 0;
      v45 = v17;
      MainMenuScreenModel::navigateToRealmsCreateScreen(v11, (int)&v40);
      v18 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v42 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        }
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v18);
      v19 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v34 = (unsigned int *)(v41 - 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v19);
      v20 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v38 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      v21 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v39 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          goto LABEL_57;
        goto LABEL_56;
    }
    else
      sub_119C884((void **)&v49, "realmsCreateScreen.createFailed.title");
      sub_119C884((void **)&v48, "skins.buy.noConnection");
      v46 = operator new(1u);
      LODWORD(v24) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIFvbEEEd_UlbE_E10_M_managerERSt9_Any_dataRKSA_St18_Manager_operation;
      HIDWORD(v24) = ZNSt17_Function_handlerIFvbEZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIS0_EEd_UlbE_E9_M_invokeERKSt9_Any_datab;
      v47 = v24;
      MinecraftScreenController::_displayStandardModalPopup(v10, &v49, &v48, 2, (int)&v46);
      if ( (_DWORD)v47 )
        ((void (*)(void))v47)();
      v25 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v48 - 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v25);
      v21 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v49 - 4);
LABEL_57:
          if ( v23 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v21);
          goto LABEL_37;
LABEL_56:
        v23 = (*v22)--;
        goto LABEL_57;
  }
LABEL_37:
  if ( v3 )
  {
    v26 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      else
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
}


void __fastcall MainMenuScreenModel::navigateToRealmsPurchaseInfoScreen(MainMenuScreenModel *this)
{
  MainMenuScreenModel::navigateToRealmsPurchaseInfoScreen(this);
}


void __fastcall MainMenuScreenModel::getStoreCatelogCategoryRowName(MainMenuScreenModel *this, int a2, int a3)
{
  int v3; // r6@1
  int *v4; // r4@1
  int v5; // r5@1
  StoreCatalogRepository *v6; // r0@1
  int *v7; // r0@1
  int v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+4h] [bp-1Ch]@1

  v3 = a2;
  v4 = (int *)this;
  v5 = a3;
  v6 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a2 + 12));
  v7 = StoreCatalogRepository::getStoreRow(v6, v5);
  sub_DA73B4(&v12, v7);
  v8 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v3 + 12));
  StoreCatalogRepository::getStoreDictionaryString(v4, v8, &v12);
  v9 = (void *)(v12 - 12);
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
      j_j_j_j_j__ZdlPv_9(v9);
  }
}


void __fastcall MainMenuScreenModel::setPatchNotesModel(int a1, int *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  PatchNotesModel *v4; // r0@1
  PatchNotesModel *v5; // r0@2

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  v4 = *(PatchNotesModel **)(a1 + 84);
  *(_DWORD *)(v2 + 84) = v3;
  if ( v4 )
  {
    v5 = PatchNotesModel::~PatchNotesModel(v4);
    j_j_j__ZdlPv_3((void *)v5);
  }
}


void __fastcall MainMenuScreenModel::navigateToManifestValidationScreen(MainMenuScreenModel *this, const ResourceLocation *a2, const PackContentItem *a3)
{
  MainMenuScreenModel::navigateToManifestValidationScreen(this, a2, a3);
}


int __fastcall MainMenuScreenModel::getStoreRequiresRestoreButton(MainMenuScreenModel *this)
{
  OfferRepository *v1; // r0@1

  v1 = (OfferRepository *)MinecraftGame::getOfferRepository(*((MinecraftGame **)this + 3));
  return j_j_j__ZN15OfferRepository29requiresRetorePurchasesButtonEv(v1);
}


StoreSearchQuery *__fastcall MainMenuScreenModel::getStoreQueries(MainMenuScreenModel *this)
{
  StoreCatalogRepository *v1; // r0@1

  v1 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  return j_j_j__ZN22StoreCatalogRepository21fetchStoreCompositionEv(v1);
}


void __fastcall MainMenuScreenModel::navigateToStoreItemListScreen(int a1, int *a2, int *a3, int *a4)
{
  __int64 v4; // kr00_8@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r0@4
  unsigned int *v8; // r5@8
  unsigned int v9; // r0@10
  char v10; // [sp+8h] [bp-18h]@1
  int v11; // [sp+Ch] [bp-14h]@1

  v4 = *(_QWORD *)(a1 + 20);
  SceneFactory::createStoreItemListScreen((unsigned __int64 *)&v10, SHIDWORD(v4), a2, a3, a4);
  SceneStack::pushScreen(v4, (int)&v10, 0);
  v5 = v11;
  if ( v11 )
  {
    v6 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
}


  if ( MainMenuScreenModel::checkStoreForAvailableUpdates(*(MainMenuScreenModel **)(v5 + 424))
{
  {
    v6 = "store.updating";
  }
  else
    v6 = "store.downloading";
  return sub_21E94B4(v3, v6);
}


int __fastcall MainMenuScreenModel::getStoreCatalogItemByContentQueryType(int a1, int **a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int **v5; // r6@1
  int v6; // r0@1
  int v7; // r0@1
  __int64 v8; // kr00_8@2
  int result; // r0@3

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a1 + 12));
  v7 = StoreCatalogRepository::getStoreButtonContentTypeList(v6, v5);
  if ( v4 < 0 || (v8 = *(_QWORD *)(v7 + 24), (HIDWORD(v8) - (signed int)v8) >> 2 <= v4) )
    result = *(_DWORD *)(v3 + 64);
  else
    result = *(_DWORD *)(v8 + 4 * v4);
  return result;
}


void __fastcall MainMenuScreenModel::navigateToSafeZoneScreen(MainMenuScreenModel *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createSafeZoneScreen((SceneFactory *)&v7, SHIDWORD(v1));
  SceneStack::pushScreen(v1, (int)&v7, 0);
  v2 = v8;
  if ( v8 )
  {
    v3 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
}


int __fastcall MainMenuScreenModel::navigateToPatchNotesScreen(int a1, PatchNotesModel **a2)
{
  int v2; // r5@1
  PatchNotesModel *v3; // r0@1
  __int64 v4; // kr00_8@2
  int v5; // r4@2
  unsigned int *v6; // r1@3
  unsigned int v7; // r0@5
  PatchNotesModel *v8; // r4@7
  double v9; // r0@8
  PatchNotesModel *v10; // r0@8
  PatchNotesModel *v11; // r0@9
  __int64 v12; // kr08_8@10
  unsigned int *v13; // r0@11
  unsigned int v14; // r1@13
  unsigned int *v15; // r5@17
  unsigned int v16; // r0@19
  void *v17; // r6@22
  unsigned int *v18; // r0@23
  unsigned int v19; // r1@25
  _QWORD *v20; // r0@28
  unsigned int *v21; // r1@29
  unsigned int v22; // r2@31
  __int64 v23; // r1@34
  unsigned int *v24; // r1@39
  unsigned int v25; // r0@41
  void *v26; // r0@46
  void **v27; // r0@47
  void *v28; // r0@47
  void *v29; // r0@50
  unsigned int *v30; // r1@52
  unsigned int v31; // r0@54
  int result; // r0@59
  unsigned int *v33; // r2@60
  unsigned int v34; // r1@62
  PatchNotesModel *v35; // r0@71
  unsigned int *v36; // r2@74
  signed int v37; // r1@76
  unsigned int *v38; // r2@78
  signed int v39; // r1@80
  unsigned int *v40; // r2@82
  signed int v41; // r1@84
  PatchNotesModel *v42; // [sp+8h] [bp-68h]@2
  char v43; // [sp+Ch] [bp-64h]@2
  int v44; // [sp+10h] [bp-60h]@2
  int v45; // [sp+18h] [bp-58h]@47
  void *v46; // [sp+1Ch] [bp-54h]@47
  int v47; // [sp+24h] [bp-4Ch]@47
  char v48; // [sp+28h] [bp-48h]@10
  int v49; // [sp+2Ch] [bp-44h]@10
  char v50; // [sp+30h] [bp-40h]@34
  void (*v51)(void); // [sp+38h] [bp-38h]@34
  _QWORD *v52; // [sp+40h] [bp-30h]@34
  void (*v53)(void); // [sp+48h] [bp-28h]@28
  int v54; // [sp+54h] [bp-1Ch]@22

  v2 = a1;
  v3 = *a2;
  if ( *a2 )
  {
    v4 = *(_QWORD *)(v2 + 20);
    *a2 = 0;
    v42 = v3;
    SceneFactory::createPatchNotesScreen((unsigned __int64 *)&v43, SHIDWORD(v4), &v42);
    SceneStack::pushScreen(v4, (int)&v43, 0);
    v5 = v44;
    if ( v44 )
    {
      v6 = (unsigned int *)(v44 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        v15 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    }
    if ( v42 )
      v35 = PatchNotesModel::~PatchNotesModel(v42);
      operator delete((void *)v35);
    result = 0;
    v42 = 0;
  }
  else
    v8 = *(PatchNotesModel **)(v2 + 84);
    if ( !v8 )
      LODWORD(v9) = operator new(0x38u);
      v8 = (PatchNotesModel *)LODWORD(v9);
      PatchNotesModel::PatchNotesModel(v9);
      v10 = *(PatchNotesModel **)(v2 + 84);
      *(_DWORD *)(v2 + 84) = v8;
      if ( v10 )
        v11 = PatchNotesModel::~PatchNotesModel(v10);
        operator delete((void *)v11);
        v8 = *(PatchNotesModel **)(v2 + 84);
    PatchNotesModel::fetch(v8, 0);
    MainMenuScreenModel::_getWeakPtr((MainMenuScreenModel *)&v48, v2);
    v12 = *(_QWORD *)&v48;
    if ( v49 )
      v13 = (unsigned int *)(v49 + 8);
          v14 = __ldrex(v13);
        while ( __strex(v14 + 1, v13) );
        ++*v13;
    v17 = operator new(0x30u);
    sub_DA7364((void **)&v54, "options.patchNotes");
    if ( HIDWORD(v12) )
      v18 = (unsigned int *)(HIDWORD(v12) + 8);
          v19 = __ldrex(v18);
        while ( __strex(v19 + 1, v18) );
        ++*v18;
    v53 = 0;
    v20 = operator new(8u);
    *v20 = v12;
      v21 = (unsigned int *)(HIDWORD(v12) + 8);
          v22 = __ldrex(v21);
        while ( __strex(v22 + 1, v21) );
        ++*v21;
    LODWORD(v23) = sub_CD6FD0;
    v52 = v20;
    HIDWORD(v23) = sub_CD6E14;
    *(_QWORD *)&v53 = v23;
    v51 = 0;
    StoreProgressHandler::StoreProgressHandler((int)v17, &v54, (int)&v52, (int)&v50);
    if ( v51 )
      v51();
    if ( v53 )
      v53();
      v24 = (unsigned int *)(HIDWORD(v12) + 8);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v12) + 12))(HIDWORD(v12));
    v26 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v54 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j_j__ZdlPv_9(v26);
    sub_DA7364((void **)&v47, "fetching_patch_notes");
    v46 = v17;
    v27 = sub_DA7364((void **)&v45, (const char *)&unk_257BC67);
    MainMenuScreenModel::navigateToModalProgressScreen(v2, (int)&v47, (int)&v46, 0, (int)v27);
    v28 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v45 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j_j__ZdlPv_9(v28);
    if ( v46 )
      (*(void (**)(void))(*(_DWORD *)v46 + 4))();
    v46 = 0;
    v29 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v47 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9(v29);
      v30 = (unsigned int *)(HIDWORD(v12) + 8);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
    result = v49;
      v33 = (unsigned int *)(v49 + 8);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall MainMenuScreenModel::getWorldSeedCatalogModel(MainMenuScreenModel *this)
{
  MainMenuScreenModel *v1; // r4@1
  int result; // r0@1
  WorldSeedCatalogModel *v3; // r5@2
  WorldSeedCatalogModel *v4; // r0@2
  WorldSeedCatalogModel *v5; // r0@3
  MinecraftEventing *v6; // r0@4

  v1 = this;
  result = *((_DWORD *)this + 22);
  if ( !result )
  {
    v3 = (WorldSeedCatalogModel *)operator new(0x3Cu);
    WorldSeedCatalogModel::WorldSeedCatalogModel((int)v3);
    v4 = (WorldSeedCatalogModel *)*((_DWORD *)v1 + 22);
    *((_DWORD *)v1 + 22) = v3;
    if ( v4 )
    {
      v5 = WorldSeedCatalogModel::~WorldSeedCatalogModel(v4);
      operator delete((void *)v5);
      v3 = (WorldSeedCatalogModel *)*((_DWORD *)v1 + 22);
    }
    v6 = (MinecraftEventing *)MinecraftGame::getEventing(*((MinecraftGame **)v1 + 3));
    WorldSeedCatalogModel::setup(v3, v6);
    result = *((_DWORD *)v1 + 22);
  }
  return result;
}


signed int __fastcall MainMenuScreenModel::_isCatalogItemVisibleToStore(MainMenuScreenModel *this, StoreCatalogItemModel *a2)
{
  StoreCatalogItemModel *v2; // r4@1
  signed int result; // r0@2

  v2 = a2;
  if ( StoreCatalogItemModel::isOwned(a2) )
    result = 1;
  else
    result = StoreCatalogItemModel::isAvailableForPurchase(v2);
  return result;
}


int __fastcall MainMenuScreenModel::getStoreCatalogItemByProductId(int a1, const void **a2)
{
  const void **v2; // r4@1
  int v3; // r0@1
  void *v4; // r0@1
  int v6; // [sp+4h] [bp-Ch]@1

  v2 = a2;
  v3 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a1 + 12));
  v4 = (void *)StoreCatalogRepository::getStoreCatalogItemByProductId(v3, v2);
  StoreCatalogItemModel::StoreCatalogItemModel(&v6, v4);
  return v6;
}


void __fastcall MainMenuScreenModel::getRealmsEulaText(MainMenuScreenModel *this)
{
  int *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@2
  unsigned int *v4; // r2@4
  signed int v5; // r1@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  int v8; // [sp+4h] [bp-2Ch]@1
  int v9; // [sp+Ch] [bp-24h]@1

  v1 = (int *)this;
  sub_DA7364((void **)&v9, "store/realms_eula_");
  sub_DA7364((void **)&v8, ".txt");
  I18n::getLocalizedAssetFileWithFallback(v1, &v9, (const void **)&v8);
  v2 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9(v2);
  }
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v9 - 4);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
}


void __fastcall MainMenuScreenModel::navigateToPurchaseOfferScreen(int a1, const void **a2, int a3, int *a4)
{
  int v4; // r7@1
  int *v5; // r9@1
  int v6; // r5@1
  const void **v7; // r10@1
  int v8; // r0@1
  void *v9; // r1@1
  int v10; // r4@3
  int v11; // r12@3
  unsigned int *v12; // r0@4
  unsigned int v13; // r1@6
  unsigned int *v14; // r0@10
  unsigned int v15; // r1@12
  void *v16; // r8@15
  unsigned int *v17; // r0@16
  unsigned int v18; // r1@18
  unsigned int *v19; // r0@22
  unsigned int v20; // r1@24
  _DWORD *v21; // r0@27
  int v22; // r5@27
  int v23; // r0@27
  unsigned int *v24; // r0@28
  unsigned int v25; // r1@30
  int v26; // r0@33
  int v27; // r4@37
  unsigned int *v28; // r1@38
  unsigned int v29; // r0@40
  unsigned int *v30; // r5@44
  unsigned int v31; // r0@46
  void *v32; // r0@51
  int v33; // r0@52
  unsigned int *v34; // r2@53
  unsigned int v35; // r1@55
  void *v36; // r0@60
  void **v37; // r0@61
  void *v38; // r0@61
  void *v39; // r0@64
  int v40; // r0@65
  int v41; // r4@67
  unsigned int *v42; // r1@68
  unsigned int v43; // r0@70
  unsigned int *v44; // r5@74
  unsigned int v45; // r0@76
  void *v46; // r0@81
  int v47; // r0@82
  unsigned int *v48; // r2@83
  unsigned int v49; // r1@85
  int v50; // r0@90
  unsigned int *v51; // r2@91
  unsigned int v52; // r1@93
  int v53; // r4@98
  unsigned int *v54; // r1@99
  unsigned int v55; // r0@101
  unsigned int *v56; // r5@105
  unsigned int v57; // r0@107
  unsigned int *v58; // r2@113
  signed int v59; // r1@115
  unsigned int *v60; // r2@117
  signed int v61; // r1@119
  unsigned int *v62; // r2@121
  signed int v63; // r1@123
  unsigned int *v64; // r2@125
  signed int v65; // r1@127
  unsigned int *v66; // r2@129
  signed int v67; // r1@131
  char v68; // [sp+4h] [bp-B4h]@65
  void (*v69)(void); // [sp+Ch] [bp-ACh]@65
  int v70; // [sp+18h] [bp-A0h]@61
  void *v71; // [sp+1Ch] [bp-9Ch]@61
  int v72; // [sp+24h] [bp-94h]@61
  int v73; // [sp+28h] [bp-90h]@3
  int v74; // [sp+2Ch] [bp-8Ch]@3
  int v75; // [sp+30h] [bp-88h]@9
  int v76; // [sp+34h] [bp-84h]@9
  int v77; // [sp+38h] [bp-80h]@9
  int v78; // [sp+3Ch] [bp-7Ch]@15
  int v79; // [sp+40h] [bp-78h]@3
  int v80; // [sp+44h] [bp-74h]@9
  int v81; // [sp+48h] [bp-70h]@2
  int v82; // [sp+4Ch] [bp-6Ch]@3
  char v83; // [sp+54h] [bp-64h]@33
  void (*v84)(void); // [sp+5Ch] [bp-5Ch]@33
  int v85; // [sp+64h] [bp-54h]@15
  int v86; // [sp+68h] [bp-50h]@15
  int v87; // [sp+6Ch] [bp-4Ch]@21
  int v88; // [sp+70h] [bp-48h]@21
  int v89; // [sp+74h] [bp-44h]@21
  int v90; // [sp+78h] [bp-40h]@27
  int v91; // [sp+7Ch] [bp-3Ch]@33
  void (*v92)(void); // [sp+84h] [bp-34h]@27
  int (__fastcall *v93)(int); // [sp+88h] [bp-30h]@33
  int v94; // [sp+90h] [bp-28h]@15

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a1 + 12));
  v9 = (void *)StoreCatalogRepository::getStoreCatalogItemByProductId(v8, v7);
  if ( v9 )
  {
    StoreCatalogItemModel::StoreCatalogItemModel(&v81, v9);
    ClientInstance::navigateToPurchaseOfferScreen(*(_DWORD *)(v4 + 16), (StoreCatalogItemModel *)&v81, v6);
  }
  else
    j__ZNSt12__shared_ptrI12AsyncTrackerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v79);
    v10 = v79;
    sub_DA7F0C(&v81);
    v11 = v10 + 8;
    *(_QWORD *)v11 = *(_QWORD *)&v81;
    *(_DWORD *)(v11 + 8) = 10;
    *(_DWORD *)(v10 + 20) = 0;
    *(_BYTE *)(v10 + 24) = 0;
    *(_BYTE *)(v10 + 1) = 0;
    MainMenuScreenModel::_getWeakPtr((MainMenuScreenModel *)&v81, v4);
    v73 = v81;
    v74 = v82;
    if ( v82 )
    {
      v12 = (unsigned int *)(v82 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 + 1, v12) );
      }
      else
        ++*v12;
    }
    sub_DA73B4(&v75, (int *)v7);
    v76 = v79;
    v77 = v80;
    if ( v80 )
      v14 = (unsigned int *)(v80 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
        ++*v14;
    v78 = v6;
    v16 = operator new(0x30u);
    sub_DA7364((void **)&v94, "store.fetchingItem");
    v85 = v73;
    v86 = v74;
    if ( v74 )
      v17 = (unsigned int *)(v74 + 8);
          v18 = __ldrex(v17);
        while ( __strex(v18 + 1, v17) );
        ++*v17;
    sub_DA73B4(&v87, &v75);
    v88 = v76;
    v89 = v77;
    if ( v77 )
      v19 = (unsigned int *)(v77 + 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 + 1, v19) );
        ++*v19;
    v90 = v78;
    v92 = 0;
    v21 = operator new(0x18u);
    v22 = (int)v21;
    *v21 = v85;
    v23 = v86;
    *(_DWORD *)(v22 + 4) = v86;
    if ( v23 )
      v24 = (unsigned int *)(v23 + 8);
          v25 = __ldrex(v24);
        while ( __strex(v25 + 1, v24) );
        ++*v24;
    sub_DA73B4((int *)(v22 + 8), &v87);
    *(_DWORD *)(v22 + 12) = v88;
    v26 = v89;
    v89 = 0;
    v88 = 0;
    *(_DWORD *)(v22 + 16) = v26;
    *(_DWORD *)(v22 + 20) = v90;
    v91 = v22;
    v92 = (void (*)(void))sub_CD63A4;
    v93 = sub_CD61E8;
    v84 = 0;
    StoreProgressHandler::StoreProgressHandler((int)v16, &v94, (int)&v91, (int)&v83);
    if ( v84 )
      v84();
    if ( v92 )
      v92();
    v27 = v89;
    if ( v89 )
      v28 = (unsigned int *)(v89 + 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        v30 = (unsigned int *)(v27 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
        if ( &pthread_create )
        {
          __dmb();
          do
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
        }
        else
          v31 = (*v30)--;
        if ( v31 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
    v32 = (void *)(v87 - 12);
    if ( (int *)(v87 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v87 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j_j__ZdlPv_9(v32);
    v33 = v86;
    if ( v86 )
      v34 = (unsigned int *)(v86 + 8);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 == 1 )
        (*(void (**)(void))(*(_DWORD *)v33 + 12))();
    v36 = (void *)(v94 - 12);
    if ( (int *)(v94 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v94 - 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j_j__ZdlPv_9(v36);
    sub_DA7364((void **)&v72, "hydrating_item_for_upsell");
    v71 = v16;
    v37 = sub_DA7364((void **)&v70, (const char *)&unk_257BC67);
    MainMenuScreenModel::navigateToModalProgressScreen(v4, (int)&v72, (int)&v71, 0, (int)v37);
    v38 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v70 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j_j__ZdlPv_9(v38);
    if ( v71 )
      (*(void (**)(void))(*(_DWORD *)v71 + 4))();
    v71 = 0;
    v39 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v72 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j_j__ZdlPv_9(v39);
    v40 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v4 + 12));
    v69 = 0;
    StoreCatalogRepository::fetchStoreItem(v40, (int **)v7, v5, (int)&v68);
    if ( v69 )
      v69();
    v41 = v77;
      v42 = (unsigned int *)(v77 + 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        v44 = (unsigned int *)(v41 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
    v46 = (void *)(v75 - 12);
    if ( (int *)(v75 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v75 - 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j_j__ZdlPv_9(v46);
    v47 = v74;
      v48 = (unsigned int *)(v74 + 8);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 == 1 )
        (*(void (**)(void))(*(_DWORD *)v47 + 12))();
    v50 = v82;
      v51 = (unsigned int *)(v82 + 8);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 == 1 )
        (*(void (**)(void))(*(_DWORD *)v50 + 12))();
    v53 = v80;
      v54 = (unsigned int *)(v80 + 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 == 1 )
        v56 = (unsigned int *)(v53 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 8))(v53);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 12))(v53);
}


int __fastcall MainMenuScreenModel::MainMenuScreenModel(int a1, int a2, ClientInstance *a3, int a4, int a5)
{
  int v5; // r9@1
  ClientInstance *v6; // r10@1
  MinecraftGame *v7; // r11@1
  StoreCatalogRepository *v8; // r0@1
  void *v9; // r0@1
  int v10; // r5@1
  RealmsAPI *v11; // r0@1
  int v12; // r6@1
  Minecraft *v13; // r0@1
  int v14; // r7@1
  int v15; // r0@1
  __int64 v16; // r0@1
  int v17; // r5@1
  unsigned int *v18; // r1@2
  unsigned int v19; // r0@4
  unsigned int *v20; // r4@8
  unsigned int v21; // r0@10
  int v22; // r5@15
  unsigned int *v23; // r1@16
  unsigned int v24; // r0@18
  unsigned int *v25; // r4@22
  unsigned int v26; // r0@24
  int v27; // r5@29
  unsigned int *v28; // r1@30
  unsigned int v29; // r0@32
  unsigned int *v30; // r4@36
  unsigned int v31; // r0@38
  int v32; // r5@43
  unsigned int *v33; // r1@44
  unsigned int v34; // r0@46
  unsigned int *v35; // r4@50
  unsigned int v36; // r0@52
  int v37; // r5@57
  RealmsAPI *v38; // r0@57
  int v39; // r6@57
  Minecraft *v40; // r0@57
  int v41; // r7@57
  int v42; // r0@57
  __int64 v43; // r0@57
  int v44; // r5@57
  unsigned int *v45; // r1@58
  unsigned int v46; // r0@60
  unsigned int *v47; // r4@64
  unsigned int v48; // r0@66
  int v49; // r5@71
  unsigned int *v50; // r1@72
  unsigned int v51; // r0@74
  unsigned int *v52; // r4@78
  unsigned int v53; // r0@80
  int v54; // r5@85
  unsigned int *v55; // r1@86
  unsigned int v56; // r0@88
  unsigned int *v57; // r4@92
  unsigned int v58; // r0@94
  int v59; // r5@99
  unsigned int *v60; // r1@100
  unsigned int v61; // r0@102
  unsigned int *v62; // r4@106
  unsigned int v63; // r0@108
  char v65; // [sp+14h] [bp-6Ch]@57
  int v66; // [sp+18h] [bp-68h]@85
  char v67; // [sp+1Ch] [bp-64h]@57
  int v68; // [sp+20h] [bp-60h]@99
  char v69; // [sp+24h] [bp-5Ch]@57
  int v70; // [sp+28h] [bp-58h]@57
  char v71; // [sp+2Ch] [bp-54h]@1
  int v72; // [sp+30h] [bp-50h]@29
  char v73; // [sp+34h] [bp-4Ch]@1
  int v74; // [sp+38h] [bp-48h]@43
  char v75; // [sp+3Ch] [bp-44h]@1
  int v76; // [sp+40h] [bp-40h]@1
  char v77; // [sp+48h] [bp-38h]@1
  char v78; // [sp+4Ch] [bp-34h]@1
  char v79; // [sp+54h] [bp-2Ch]@57
  char v80; // [sp+58h] [bp-28h]@57

  v5 = a1;
  v6 = a3;
  v7 = (MinecraftGame *)a2;
  MinecraftScreenModel::MinecraftScreenModel(a1, a2, a3, a4, a5);
  *(_DWORD *)v5 = &off_26D7E50;
  v8 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(v7);
  v9 = (void *)StoreCatalogRepository::getEmptyItem(v8);
  StoreCatalogItemModel::StoreCatalogItemModel((_DWORD *)(v5 + 64), v9);
  _aeabi_memclr4(v5 + 68, 40);
  *(_DWORD *)(v5 + 108) = MinecraftGame::getWorldTemplateManager(v7);
  v10 = MinecraftGame::getLevelArchiver(v7);
  j__ZNSt12__shared_ptrI16SystemFilePickerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v73);
  v11 = (RealmsAPI *)MinecraftGame::getRealms(v7);
  std::__shared_ptr<RealmsFileDownloader,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RealmsFileDownloader>,RealmsAPI &>(
    (int)&v71,
    (int)&v77,
    v11);
  v12 = ClientInstance::getUserAuthentication(v6);
  v13 = (Minecraft *)ClientInstance::getServerData(v6);
  v14 = Minecraft::getLevelSource(v13);
  v15 = MinecraftGame::getAccessibilityProvider(*(MinecraftGame **)(v5 + 12));
  std::__shared_ptr<WorldFileDownloadManager,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<WorldFileDownloadManager>,LevelArchiver &,std::shared_ptr<SystemFilePicker>,SystemFilePicker<RealmsFileDownloader>,UserAuthentication &,LevelStorageSource &,IContentAccessibilityProvider const&>(
    (int)&v75,
    (int)&v78,
    v10,
    (int)&v73,
    v12,
    v14,
    v15);
  v16 = *(_QWORD *)&v75;
  *(_DWORD *)&v75 = 0;
  v76 = 0;
  *(_DWORD *)(v5 + 92) = v16;
  v17 = *(_DWORD *)(v5 + 96);
  *(_DWORD *)(v5 + 96) = HIDWORD(v16);
  if ( v17 )
  {
    v18 = (unsigned int *)(v17 + 4);
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
      v20 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  }
  v22 = v76;
  if ( v76 )
    v23 = (unsigned int *)(v76 + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      v25 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  v27 = v72;
  if ( v72 )
    v28 = (unsigned int *)(v72 + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  v32 = v74;
  if ( v74 )
    v33 = (unsigned int *)(v74 + 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 == 1 )
      v35 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  v37 = MinecraftGame::getLevelArchiver(v7);
  j__ZNSt12__shared_ptrI16SystemFilePickerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v67);
  v38 = (RealmsAPI *)MinecraftGame::getRealms(v7);
  std::__shared_ptr<RealmsFileUploader,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RealmsFileUploader>,RealmsAPI &>(
    (int)&v65,
    (int)&v79,
    v38);
  v39 = ClientInstance::getUserAuthentication(v6);
  v40 = (Minecraft *)ClientInstance::getServerData(v6);
  v41 = Minecraft::getLevelSource(v40);
  v42 = MinecraftGame::getAccessibilityProvider(*(MinecraftGame **)(v5 + 12));
  std::__shared_ptr<WorldFileUploadManager,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<WorldFileUploadManager>,LevelArchiver &,std::shared_ptr<SystemFilePicker>,SystemFilePicker<RealmsFileUploader>,UserAuthentication &,LevelStorageSource &,IContentAccessibilityProvider const&>(
    (int)&v69,
    (int)&v80,
    v37,
    (int)&v67,
    v39,
    v41,
    v42);
  v43 = *(_QWORD *)&v69;
  *(_DWORD *)&v69 = 0;
  v70 = 0;
  *(_DWORD *)(v5 + 100) = v43;
  v44 = *(_DWORD *)(v5 + 104);
  *(_DWORD *)(v5 + 104) = HIDWORD(v43);
  if ( v44 )
    v45 = (unsigned int *)(v44 + 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 == 1 )
      v47 = (unsigned int *)(v44 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
  v49 = v70;
  if ( v70 )
    v50 = (unsigned int *)(v70 + 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 == 1 )
      v52 = (unsigned int *)(v49 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 8))(v49);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
  v54 = v66;
  if ( v66 )
    v55 = (unsigned int *)(v66 + 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 == 1 )
      v57 = (unsigned int *)(v54 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 8))(v54);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
  v59 = v68;
  if ( v68 )
    v60 = (unsigned int *)(v68 + 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 == 1 )
      v62 = (unsigned int *)(v59 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v59 + 8))(v59);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v59 + 12))(v59);
  return v5;
}


char *__fastcall MainMenuScreenModel::getInvalidItemModel(MainMenuScreenModel *this)
{
  return (char *)this + 64;
}


signed int __fastcall MainMenuScreenModel::checkNewStoreOffersAvailable(MainMenuScreenModel *this)
{
  MainMenuScreenModel *v1; // r4@1
  StoreCatalogRepository *v2; // r0@1
  signed int v3; // r5@1
  MinecraftEventing *v4; // r0@1

  v1 = this;
  v2 = (StoreCatalogRepository *)MinecraftGame::getStoreCatalog(*((MinecraftGame **)this + 3));
  v3 = StoreCatalogRepository::hasAnyNewItems(v2);
  v4 = (MinecraftEventing *)MinecraftGame::getEventing(*((MinecraftGame **)v1 + 3));
  MinecraftEventing::fireEventNewStoreContentCheckCompleted(v4, v3);
  return v3;
}


void __fastcall MainMenuScreenModel::refreshUserInventory(MainMenuScreenModel *this)
{
  EntitlementManager *v1; // r0@1

  v1 = (EntitlementManager *)MinecraftGame::getEntitlementManager(*((MinecraftGame **)this + 3));
  j_j_j__ZN18EntitlementManager16refreshInventoryEv(v1);
}


signed int __fastcall MainMenuScreenModel::getUnfulfilledMinecoinPurchase(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = MinecraftGame::getOfferRepository(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZN15OfferRepository30getUnfulfilledMinecoinPurchaseER23MinecoinPurchaseDetails(v3, v2);
}


void __fastcall MainMenuScreenModel::navigateToPatchNotesScreen(MainMenuScreenModel *this)
{
  MainMenuScreenModel::navigateToPatchNotesScreen(this);
}


void __fastcall MainMenuScreenModel::navigateToRealmsCreateScreen(int a1, int a2)
{
  MainMenuScreenModel::navigateToRealmsCreateScreen(a1, a2);
}


signed int __fastcall MainMenuScreenModel::hasUnownedDlcDependencies(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1
  int v3; // r11@1
  int v4; // r4@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // r7@27
  int v12; // r1@27
  int v13; // r2@27
  int v14; // r3@27
  int v15; // r0@27
  void *v16; // r0@27
  void *v17; // r0@28
  void *v18; // r0@29
  unsigned int v19; // r0@31
  ResourcePackRepository *v20; // r0@32
  ResourcePack *v21; // r0@32
  int v23; // [sp+8h] [bp-88h]@27
  int v24; // [sp+Ch] [bp-84h]@27
  int v25; // [sp+10h] [bp-80h]@27
  int v26; // [sp+14h] [bp-7Ch]@27
  int v27; // [sp+18h] [bp-78h]@27
  int v28; // [sp+20h] [bp-70h]@11
  int v29; // [sp+24h] [bp-6Ch]@7
  int v30; // [sp+28h] [bp-68h]@3
  char v31; // [sp+30h] [bp-60h]@27
  char v32; // [sp+38h] [bp-58h]@27

  v3 = *a2 >> 32;
  v2 = *a2;
  v4 = a1;
  if ( v2 == v3 )
    return 0;
  while ( 1 )
  {
    v11 = MinecraftGame::getEntitlementManager(*(MinecraftGame **)(v4 + 12));
    v12 = *(_DWORD *)(v2 + 4);
    v13 = *(_DWORD *)(v2 + 8);
    v14 = *(_DWORD *)(v2 + 12);
    v23 = *(_DWORD *)v2;
    v24 = v12;
    v25 = v13;
    v26 = v14;
    SemVersion::SemVersion((int)&v27, v2 + 16);
    v31 = *(_BYTE *)(v2 + 40);
    v15 = EntitlementManager::getEntitlement(v11, (int)&v23);
    Entitlement::Entitlement((int)&v32, v15);
    v16 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j_j__ZdlPv_9(v16);
    }
    v17 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v29 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v28 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    if ( Entitlement::isOwned((Entitlement *)&v32) )
      goto LABEL_36;
    v19 = *(_DWORD *)(v2 + 48);
    if ( v19 < 2 )
      break;
    if ( v19 == 2 )
      goto LABEL_38;
LABEL_36:
    Entitlement::~Entitlement((Entitlement *)&v32);
    v2 += 56;
    if ( v2 == v3 )
      return 0;
  }
  v20 = (ResourcePackRepository *)MinecraftScreenModel::getResourcePackRepository((MinecraftScreenModel *)v4);
  v21 = ResourcePackRepository::getResourcePackSatisfiesPackId(v20, (const PackIdVersion *)v2, 0);
  if ( !v21 || ResourcePack::getPackCategory(v21) != 2 )
    goto LABEL_36;
LABEL_38:
  Entitlement::~Entitlement((Entitlement *)&v32);
  return 1;
}


void __fastcall MainMenuScreenModel::~MainMenuScreenModel(MainMenuScreenModel *this)
{
  MainMenuScreenModel::~MainMenuScreenModel(this);
}


signed int __fastcall MainMenuScreenModel::hasOwnedMissingDlcDependencies(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1
  int v3; // r11@1
  int v4; // r8@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // r6@27
  int v12; // r1@27
  int v13; // r2@27
  int v14; // r3@27
  Entitlement *v15; // r6@27
  void *v16; // r0@27
  void *v17; // r0@28
  void *v18; // r0@29
  signed int v19; // r0@30
  bool v20; // zf@30
  ResourcePackRepository *v21; // r0@34
  signed int result; // r0@36
  int v23; // [sp+0h] [bp-58h]@27
  int v24; // [sp+4h] [bp-54h]@27
  int v25; // [sp+8h] [bp-50h]@27
  int v26; // [sp+Ch] [bp-4Ch]@27
  int v27; // [sp+10h] [bp-48h]@27
  int v28; // [sp+18h] [bp-40h]@11
  int v29; // [sp+1Ch] [bp-3Ch]@7
  int v30; // [sp+20h] [bp-38h]@3
  char v31; // [sp+28h] [bp-30h]@27

  v3 = *a2 >> 32;
  v2 = *a2;
  v4 = a1;
  if ( v2 == v3 )
  {
LABEL_36:
    result = 0;
  }
  else
    while ( 1 )
    {
      v11 = MinecraftGame::getEntitlementManager(*(MinecraftGame **)(v4 + 12));
      v12 = *(_DWORD *)(v2 + 4);
      v13 = *(_DWORD *)(v2 + 8);
      v14 = *(_DWORD *)(v2 + 12);
      v23 = *(_DWORD *)v2;
      v24 = v12;
      v25 = v13;
      v26 = v14;
      SemVersion::SemVersion((int)&v27, v2 + 16);
      v31 = *(_BYTE *)(v2 + 40);
      v15 = (Entitlement *)EntitlementManager::getEntitlement(v11, (int)&v23);
      v16 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v30 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j_j__ZdlPv_9(v16);
      }
      v17 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v29 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j_j__ZdlPv_9(v17);
      v18 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v28 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9(v18);
      v19 = Entitlement::isOwned(v15);
      v20 = v19 == 1;
      if ( v19 == 1 )
        v20 = *(_DWORD *)(v2 + 48) == 0;
      if ( v20 )
        v21 = (ResourcePackRepository *)MinecraftScreenModel::getResourcePackRepository((MinecraftScreenModel *)v4);
        if ( !ResourcePackRepository::getResourcePackSatisfiesPackId(v21, (const PackIdVersion *)v2, 0) )
          break;
      v2 += 56;
      if ( v2 == v3 )
        goto LABEL_36;
    }
    result = 1;
  return result;
}


void __fastcall MainMenuScreenModel::setPatchNotesModel(int a1, int *a2)
{
  MainMenuScreenModel::setPatchNotesModel(a1, a2);
}


void __fastcall MainMenuScreenModel::navigateToCreateWorldScreen(MainMenuScreenModel *this, bool a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createWorldTemplateScreen((SceneFactory *)&v8, SHIDWORD(v2), a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


void __fastcall MainMenuScreenModel::navigateToRealmsWarningScreen(int a1, const Realms::World *a2, int *a3, int a4)
{
  __int64 v4; // kr00_8@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r0@4
  unsigned int *v8; // r5@8
  unsigned int v9; // r0@10
  char v10; // [sp+8h] [bp-18h]@1
  int v11; // [sp+Ch] [bp-14h]@1

  v4 = *(_QWORD *)(a1 + 20);
  SceneFactory::createRealmsWarningScreen((unsigned __int64 *)&v10, SHIDWORD(v4), a2, a3, a4);
  SceneStack::pushScreen(v4, (int)&v10, 0);
  v5 = v11;
  if ( v11 )
  {
    v6 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
}


void __fastcall MainMenuScreenModel::navigateToMashupScreen(int a1, int a2, int a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v3 = *(_QWORD *)(a1 + 20);
  SceneFactory::createMashupScreen((unsigned __int64 *)&v9, SHIDWORD(v3), a2, a3);
  SceneStack::pushScreen(v3, (int)&v9, 0);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


            if ( MainMenuScreenModel::getUserCoinBalance(*(MainMenuScreenModel **)(v1 + 424)) > 5159 )
{
              MinecoinPurchaseScreenController::_dialogTooManyCoins((MinecoinPurchaseScreenController *)v1);
            }
            else
            {
              v8 = (Json::Value *)(*(_DWORD *)(v2 + 8) + 8);
              if ( !Json::Value::isNull(v8) && Json::Value::isObject(v8) == 1 )
              {
                v9 = (Json::Value *)Json::Value::operator[]((int)v8, "#collection_index");
                if ( Json::Value::isInt(v9) || Json::Value::isUInt(v9) == 1 )
                {
                  v10 = Json::Value::asInt(v9, 0);
                  if ( v10 != -1 )
                    MinecoinPurchaseScreenController::_purchaseCoinOffer((MinecoinPurchaseScreenController *)v1, v10);
                }
              }
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v4);
            while ( __strex(result - 1, v4) );
          else
            result = (*v4)--;
          if ( result == 1 )
            v11 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v11);
              while ( __strex(result - 1, v11) );
              result = (*v11)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
      {
        __clrex();
        result = v5;
    }
  }
  return result;
}
