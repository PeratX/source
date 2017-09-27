

void __fastcall PurchaseEnabledScreenController::_registerDownloadProgressBinds(int a1, int *a2)
{
  PurchaseEnabledScreenController::_registerDownloadProgressBinds(a1, a2);
}


int __fastcall PurchaseEnabledScreenController::tick(PurchaseEnabledScreenController *this)
{
  PurchaseEnabledScreenController *v1; // r8@1
  int v2; // r0@1
  int v3; // r6@1
  int v4; // r10@1
  signed int v5; // r5@1
  int v6; // r6@1
  char *v7; // r7@1
  char *v8; // r1@2
  unsigned int *v9; // r2@3
  signed int v10; // r4@5
  char *v11; // r4@9
  int *v12; // r0@10
  void *v13; // r0@15
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  int v17; // [sp+0h] [bp-38h]@1
  char *v18; // [sp+4h] [bp-34h]@1
  char *v19; // [sp+8h] [bp-30h]@1
  char *v20; // [sp+Ch] [bp-2Ch]@1
  char v21; // [sp+10h] [bp-28h]@2

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  v3 = *((_DWORD *)v1 + 106);
  v4 = v2;
  sub_21E8AF4(&v17, (int *)v1 + 111);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v18 = (char *)operator new(4u);
  v20 = v18 + 4;
  v19 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v17,
                  (int)&v18,
                  (int)v18);
  v5 = MinecraftScreenModel::isAnyDownloadActive(v3, &v18);
  v6 = (int)v19;
  v7 = v18;
  if ( v18 != v19 )
  {
    v8 = &v21;
    do
    {
      v12 = (int *)(*(_DWORD *)v7 - 12);
      if ( v12 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          v11 = v8;
          j_j_j_j__ZdlPv_9(v12);
          v8 = v11;
      }
      v7 += 4;
    }
    while ( v7 != (char *)v6 );
    v7 = v18;
  }
  if ( v7 )
    operator delete(v7);
  v13 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  if ( v5 == 1 )
    *((_BYTE *)v1 + 449) = 1;
    return v4 | 1;
  if ( *((_BYTE *)v1 + 449) )
    *((_BYTE *)v1 + 449) = 0;
    MainMenuScreenModel::repopulateWorldTemplates(*((MainMenuScreenModel **)v1 + 106));
  return v4;
}


ModalScreenData *__fastcall PurchaseEnabledScreenController::_purchaseOffer(int a1, int *a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  ModalScreenData *result; // r0@1
  __int64 v5; // kr00_8@5
  unsigned int *v6; // r0@6
  unsigned int v7; // r1@8
  int v8; // r7@13
  unsigned int *v9; // r0@14
  unsigned int v10; // r1@16
  void *v11; // r6@19
  unsigned int *v12; // r0@20
  unsigned int v13; // r1@22
  __int64 v14; // r0@25
  void *v15; // r0@27
  unsigned int *v16; // r2@29
  unsigned int v17; // r1@31
  unsigned int *v18; // r1@37
  unsigned int *v19; // r2@45
  signed int v20; // r1@47
  int v21; // [sp+Ch] [bp-34h]@19
  int v22; // [sp+10h] [bp-30h]@19
  void *v23; // [sp+14h] [bp-2Ch]@25
  void (*v24)(void); // [sp+1Ch] [bp-24h]@19

  v2 = a1;
  v3 = a2;
  result = (ModalScreenData *)*(_BYTE *)(a1 + 448);
  if ( !result )
  {
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v2 + 424), 0) )
    {
      if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v2 + 380))
        || MinecraftScreenModel::supportsDeviceAccounts(*(MinecraftScreenModel **)(v2 + 380)) )
      {
        *(_BYTE *)(v2 + 448) = 1;
        v5 = *(_QWORD *)(v2 + 436);
        if ( HIDWORD(v5) )
        {
          v6 = (unsigned int *)(HIDWORD(v5) + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v7 = __ldrex(v6);
            while ( __strex(v7 + 1, v6) );
          }
          else
            ++*v6;
        }
        PurchaseEnabledScreenController::_dialogPurchaseInProgress((PurchaseEnabledScreenController *)v2);
        v8 = *(_DWORD *)(v2 + 424);
          v9 = (unsigned int *)(HIDWORD(v5) + 8);
              v10 = __ldrex(v9);
            while ( __strex(v10 + 1, v9) );
            ++*v9;
        v21 = v2;
        sub_21E8AF4(&v22, v3);
        v24 = 0;
        v11 = operator new(0x10u);
        *(_QWORD *)v11 = v5;
          v12 = (unsigned int *)(HIDWORD(v5) + 8);
              v13 = __ldrex(v12);
            while ( __strex(v13 + 1, v12) );
            ++*v12;
        *((_DWORD *)v11 + 2) = v21;
        sub_21E8AF4((int *)v11 + 3, &v22);
        LODWORD(v14) = sub_11FDBB4;
        v23 = v11;
        HIDWORD(v14) = sub_11FDB50;
        *(_QWORD *)&v24 = v14;
        MainMenuScreenModel::purchaseCatalogOffer(v8, v3, (int)&v23);
        if ( v24 )
          v24();
        v15 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v22 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        result = (ModalScreenData *)HIDWORD(v5);
          v16 = (unsigned int *)(HIDWORD(v5) + 8);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 == 1 )
            result = (ModalScreenData *)(*(int (**)(void))(*(_DWORD *)HIDWORD(v5) + 12))();
          v18 = (unsigned int *)(HIDWORD(v5) + 8);
              result = (ModalScreenData *)__ldrex(v18);
            while ( __strex((unsigned int)result - 1, v18) );
            result = (ModalScreenData *)(*v18)--;
          if ( result == (ModalScreenData *)1 )
            result = (ModalScreenData *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
      }
      else
        result = j_j_j__ZN31PurchaseEnabledScreenController18_dialogNotSignedInEv((PurchaseEnabledScreenController *)v2);
    }
    else
      result = j_j_j__ZN31PurchaseEnabledScreenController17_dialogNoInternetEv((PurchaseEnabledScreenController *)v2);
  }
  return result;
}


ModalScreenData *__fastcall PurchaseEnabledScreenController::_dialogPurchaseFailedInsufficientFunds(PurchaseEnabledScreenController *this)
{
  PurchaseEnabledScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1 OVERLAPPED
  _DWORD *v5; // [sp+0h] [bp-58h]@1
  __int64 v6; // [sp+8h] [bp-50h]@1
  void *v7; // [sp+10h] [bp-48h]@1
  int v8; // [sp+14h] [bp-44h]@1
  int v9; // [sp+18h] [bp-40h]@1
  int v10; // [sp+1Ch] [bp-3Ch]@1
  void *v11; // [sp+20h] [bp-38h]@1
  int v12; // [sp+24h] [bp-34h]@1
  int v13; // [sp+28h] [bp-30h]@1
  int v14; // [sp+2Ch] [bp-2Ch]@1
  void *v15; // [sp+30h] [bp-28h]@1
  void *v16; // [sp+34h] [bp-24h]@1
  void *v17; // [sp+38h] [bp-20h]@1
  void *v18; // [sp+3Ch] [bp-1Ch]@1
  int v19; // [sp+40h] [bp-18h]@1
  char v20; // [sp+44h] [bp-14h]@1

  v1 = this;
  v7 = &unk_28898CC;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = &unk_28898CC;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = &unk_28898CC;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = &unk_28898CC;
  v19 = 1;
  v20 = 0;
  sub_21E8190(&v7, "store.popup.purchaseFailedInsufficientFunds.title", (_BYTE *)0x31);
  sub_21E8190(&v11, "store.popup.purchaseFailedInsufficientFunds.msg", (_BYTE *)0x2F);
  sub_21E8190(&v16, "store.popup.purchaseFailedInsufficientFunds.buyButton", (_BYTE *)0x35);
  sub_21E8190(&v18, "options.goBack", (_BYTE *)0xE);
  v2 = operator new(4u);
  LODWORD(v3) = sub_11FDF82;
  *v2 = v1;
  HIDWORD(v3) = sub_11FDF70;
  v5 = v2;
  v6 = v3;
  HIDWORD(v3) = &v5;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v7, *(__int64 *)((char *)&v3 + 4));
  if ( (_DWORD)v6 )
    ((void (*)(void))v6)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v7);
}


void __fastcall PurchaseEnabledScreenController::_onPurchaseSuccess(int a1, int *a2)
{
  int v2; // r11@1
  int *v3; // r9@1
  int v4; // r6@1
  int v5; // r4@1
  char *v6; // r7@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int *v9; // r0@11
  void *v10; // r0@16
  int v11; // r7@17
  int *v12; // r0@17
  char *v13; // r0@17
  int *v14; // r0@17
  void *v15; // r0@17
  void *v16; // r0@18
  void *v17; // r0@19
  int v18; // r4@20
  char *v19; // r7@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  int *v22; // r0@30
  void *v23; // r0@35
  void *v24; // r0@36
  int v25; // r5@38
  char *v26; // r4@40
  int v27; // r6@40
  unsigned int *v28; // r2@42
  signed int v29; // r1@44
  int *v30; // r0@50
  void *v31; // r0@55
  unsigned int *v32; // r2@57
  signed int v33; // r1@59
  unsigned int *v34; // r2@61
  signed int v35; // r1@63
  unsigned int *v36; // r2@65
  signed int v37; // r1@67
  unsigned int *v38; // r2@69
  signed int v39; // r1@71
  unsigned int *v40; // r2@73
  signed int v41; // r1@75
  unsigned int *v42; // r2@77
  signed int v43; // r1@79
  unsigned int *v44; // r2@105
  signed int v45; // r1@107
  DlcBatchModel *v46; // [sp+Ch] [bp-54h]@1
  char v47; // [sp+10h] [bp-50h]@38
  void (*v48)(void); // [sp+18h] [bp-48h]@38
  int v49; // [sp+20h] [bp-40h]@38
  char *v50; // [sp+24h] [bp-3Ch]@38
  char *v51; // [sp+28h] [bp-38h]@38
  char *v52; // [sp+2Ch] [bp-34h]@38
  int v53; // [sp+34h] [bp-2Ch]@17
  int v54; // [sp+3Ch] [bp-24h]@17
  int v55; // [sp+40h] [bp-20h]@17
  char *v56; // [sp+44h] [bp-1Ch]@17
  char *v57; // [sp+48h] [bp-18h]@17
  char *v58; // [sp+4Ch] [bp-14h]@17
  int v59; // [sp+54h] [bp-Ch]@17
  int v60; // [sp+58h] [bp-8h]@17
  int v61; // [sp+5Ch] [bp-4h]@17
  int v62; // [sp+60h] [bp+0h]@1
  char *v63; // [sp+64h] [bp+4h]@1
  char *v64; // [sp+68h] [bp+8h]@1
  char *v65; // [sp+6Ch] [bp+Ch]@1

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 424);
  sub_21E8AF4(&v62, a2);
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v63 = (char *)operator new(4u);
  v65 = v63 + 4;
  v64 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v62,
                  (int)&v63,
                  (int)v63);
  v46 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(v4, (unsigned __int64 *)&v63);
  v5 = (int)v64;
  v6 = v63;
  if ( v63 != v64 )
  {
    do
    {
      v9 = (int *)(*(_DWORD *)v6 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v6 += 4;
    }
    while ( v6 != (char *)v5 );
    v6 = v63;
  }
  if ( v6 )
    operator delete(v6);
  v10 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v62 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v61 = MainMenuScreenModel::getStoreCatalogItemByProductId(*(_DWORD *)(v2 + 424), (const void **)v3);
  v11 = *(_DWORD *)(v2 + 424);
  sub_21E94B4((void **)&v59, "store.purchase.success");
  v12 = (int *)StoreCatalogItemModel::getTitle((StoreCatalogItemModel *)&v61);
  sub_21E8AF4(&v55, v12);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v13 = (char *)operator new(4u);
  v56 = v13;
  v58 = v13 + 4;
  v57 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v55,
                  (int)&v56,
                  (int)v13);
  I18n::get(&v60, &v59, (unsigned __int64 *)&v56);
  sub_21E94B4((void **)&v54, (const char *)&unk_257BC67);
  v14 = (int *)sub_21E94B4((void **)&v53, (const char *)&unk_257BC67);
  MinecraftScreenModel::pushToast(v11, 6, &v60, &v54, v14);
  v15 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v53 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v54 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v60 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (int)v57;
  v19 = v56;
  if ( v56 != v57 )
      v22 = (int *)(*(_DWORD *)v19 - 12);
      if ( v22 != &dword_28898C0 )
        v20 = (unsigned int *)(*(_DWORD *)v19 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v19 += 4;
    while ( v19 != (char *)v18 );
    v19 = v56;
  if ( v19 )
    operator delete(v19);
  v23 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v55 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v59 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  if ( (DlcBatchModel::getDlcInstalledState(v46) | 2) == 2 )
    EntityInteraction::setInteractText((int *)(v2 + 444), v3);
    v25 = *(_DWORD *)(v2 + 432);
    sub_21E8AF4(&v49, v3);
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v50 = (char *)operator new(4u);
    v52 = v50 + 4;
    v51 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v49,
                    (int)&v50,
                    (int)v50);
    v48 = 0;
    DlcPreCheckScreenHandler::tryDownload(v25, (unsigned __int64 *)&v50, (int)&v47, 0, 0, 0, 0);
    if ( v48 )
      v48();
    v27 = (int)v51;
    v26 = v50;
    if ( v50 != v51 )
        v30 = (int *)(*(_DWORD *)v26 - 12);
        if ( v30 != &dword_28898C0 )
          v28 = (unsigned int *)(*(_DWORD *)v26 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          }
          else
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        v26 += 4;
      while ( v26 != (char *)v27 );
      v26 = v50;
    if ( v26 )
      operator delete(v26);
    v31 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v49 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
      else
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
}


PurchaseEnabledScreenController *__fastcall PurchaseEnabledScreenController::~PurchaseEnabledScreenController(PurchaseEnabledScreenController *this)
{
  PurchaseEnabledScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r5@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11
  int v9; // r0@16
  unsigned int *v11; // r2@19
  signed int v12; // r1@21

  v1 = this;
  *(_DWORD *)this = &off_26E2DEC;
  v2 = *((_DWORD *)this + 111);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 110);
  if ( v4 )
    v5 = (unsigned int *)(v4 + 4);
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
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
  v9 = *((_DWORD *)v1 + 108);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  *((_DWORD *)v1 + 108) = 0;
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


int __fastcall PurchaseEnabledScreenController::PurchaseEnabledScreenController(int a1, int a2, int *a3)
{
  int *v3; // r6@1
  int v4; // r4@1
  int *v5; // r8@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r5@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r7@14
  unsigned int v13; // r0@16
  int v14; // r7@21
  void *v15; // r6@21
  char v17; // [sp+3h] [bp-25h]@21
  int v18; // [sp+4h] [bp-24h]@1
  int v19; // [sp+8h] [bp-20h]@1
  char v20; // [sp+Ch] [bp-1Ch]@21

  v3 = (int *)a2;
  v4 = a1;
  v5 = a3;
  v18 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 4);
  v19 = v6;
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
  MainMenuScreenController::MainMenuScreenController(v4, (int)&v18);
  v9 = v19;
  if ( v19 )
    v10 = (unsigned int *)(v19 + 4);
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
  *(_DWORD *)v4 = &off_26E2DEC;
  v14 = *v3;
  v15 = operator new(0x1Cu);
  DlcPreCheckScreenHandler::DlcPreCheckScreenHandler((int)v15, v4, v14);
  *(_DWORD *)(v4 + 432) = v15;
  v17 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(v4 + 436, (int)&v20, &v17);
  sub_21E8AF4((int *)(v4 + 444), v5);
  *(_WORD *)(v4 + 448) = 0;
  return v4;
}


void __fastcall PurchaseEnabledScreenController::~PurchaseEnabledScreenController(PurchaseEnabledScreenController *this)
{
  PurchaseEnabledScreenController::~PurchaseEnabledScreenController(this);
}


void __fastcall PurchaseEnabledScreenController::~PurchaseEnabledScreenController(PurchaseEnabledScreenController *this)
{
  PurchaseEnabledScreenController *v1; // r0@1

  v1 = PurchaseEnabledScreenController::~PurchaseEnabledScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


ModalScreenData *__fastcall PurchaseEnabledScreenController::_dialogPurchaseFailed(PurchaseEnabledScreenController *this)
{
  PurchaseEnabledScreenController *v1; // r4@1
  __int64 v2; // r1@1 OVERLAPPED
  void *v4; // [sp+0h] [bp-58h]@1
  __int64 v5; // [sp+8h] [bp-50h]@1
  void *v6; // [sp+10h] [bp-48h]@1
  int v7; // [sp+14h] [bp-44h]@1
  int v8; // [sp+18h] [bp-40h]@1
  int v9; // [sp+1Ch] [bp-3Ch]@1
  void *v10; // [sp+20h] [bp-38h]@1
  int v11; // [sp+24h] [bp-34h]@1
  int v12; // [sp+28h] [bp-30h]@1
  int v13; // [sp+2Ch] [bp-2Ch]@1
  void *v14; // [sp+30h] [bp-28h]@1
  void *v15; // [sp+34h] [bp-24h]@1
  void *v16; // [sp+38h] [bp-20h]@1
  void *v17; // [sp+3Ch] [bp-1Ch]@1
  int v18; // [sp+40h] [bp-18h]@1
  char v19; // [sp+44h] [bp-14h]@1

  v1 = this;
  v6 = &unk_28898CC;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = &unk_28898CC;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = &unk_28898CC;
  v15 = &unk_28898CC;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = 1;
  v19 = 0;
  sub_21E8190(&v6, "store.popup.purchaseFailed.title", (_BYTE *)0x20);
  sub_21E8190(&v10, "store.popup.purchaseFailed.msg", (_BYTE *)0x1E);
  sub_21E8190(&v16, "gui.close", (_BYTE *)9);
  v18 = 2;
  v4 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIFv19ModalScreenButtonIdEEEd_UlS6_E_E10_M_managerERSt9_Any_dataRKSB_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFv19ModalScreenButtonIdEZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIS1_EEd_UlS0_E_E9_M_invokeERKSt9_Any_dataS0_;
  v5 = v2;
  HIDWORD(v2) = &v4;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v6, *(__int64 *)((char *)&v2 + 4));
  if ( (_DWORD)v5 )
    ((void (*)(void))v5)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v6);
}


ModalScreenData *__fastcall PurchaseEnabledScreenController::_dialogNotSignedIn(PurchaseEnabledScreenController *this)
{
  PurchaseEnabledScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  unsigned int v5; // r1@9
  _QWORD *v6; // r0@12
  __int64 v7; // r2@12 OVERLAPPED
  unsigned int *v8; // r1@13
  int (__fastcall *v9)(_DWORD *, void **, int); // r1@18
  unsigned int *v10; // r5@21
  unsigned int v11; // r0@23
  unsigned int v12; // r0@30
  int v13; // r0@35
  unsigned int *v14; // r2@36
  unsigned int v15; // r1@38
  _QWORD *v17; // [sp+0h] [bp-60h]@18
  void (*v18)(void); // [sp+8h] [bp-58h]@12
  char v19; // [sp+10h] [bp-50h]@1
  int v20; // [sp+14h] [bp-4Ch]@1
  void *v21; // [sp+18h] [bp-48h]@1
  int v22; // [sp+1Ch] [bp-44h]@1
  int v23; // [sp+20h] [bp-40h]@1
  int v24; // [sp+24h] [bp-3Ch]@1
  void *v25; // [sp+28h] [bp-38h]@1
  int v26; // [sp+2Ch] [bp-34h]@1
  int v27; // [sp+30h] [bp-30h]@1
  int v28; // [sp+34h] [bp-2Ch]@1
  void *v29; // [sp+38h] [bp-28h]@1
  void *v30; // [sp+3Ch] [bp-24h]@1
  void *v31; // [sp+40h] [bp-20h]@1
  void *v32; // [sp+44h] [bp-1Ch]@1
  int v33; // [sp+48h] [bp-18h]@1
  char v34; // [sp+4Ch] [bp-14h]@1

  v1 = this;
  v21 = &unk_28898CC;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = &unk_28898CC;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = &unk_28898CC;
  v30 = &unk_28898CC;
  v31 = &unk_28898CC;
  v32 = &unk_28898CC;
  v33 = 1;
  v34 = 0;
  sub_21E8190(&v21, "xbox.signinFirst", (_BYTE *)0x10);
  sub_21E8190(&v25, "store.popup.xblRequired.message", (_BYTE *)0x1F);
  sub_21E8190(&v30, "store.popup.xblRequired.title", (_BYTE *)0x1D);
  sub_21E8190(&v32, "store.popup.goBack", (_BYTE *)0x12);
  MinecraftScreenController::_getWeakPtrToThis<PurchaseEnabledScreenController>((int)&v19, (int)v1);
  v2 = *(_QWORD *)&v19;
  if ( v20 )
  {
    v3 = (unsigned int *)(v20 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
        v5 = __ldrex(v3);
      while ( __strex(v5 + 1, v3) );
  }
  v18 = 0;
  v6 = operator new(8u);
  *v6 = v2;
  if ( HIDWORD(v2) )
    v8 = (unsigned int *)(HIDWORD(v2) + 8);
      {
        LODWORD(v7) = __ldrex(v8);
        HIDWORD(v7) = __strex(v7 + 1, v8);
      }
      while ( HIDWORD(v7) );
      ++*v8;
  v9 = sub_11FDE9C;
  v17 = v6;
  LODWORD(v7) = sub_11FDD04;
  *(_QWORD *)&v18 = *(__int64 *)((char *)&v7 - 4);
  LODWORD(v7) = &v17;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v21, v7);
  if ( v18 )
    v18();
    v10 = (unsigned int *)(HIDWORD(v2) + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
        v12 = __ldrex(v10);
      while ( __strex(v12 - 1, v10) );
      v12 = (*v10)--;
    if ( v12 == 1 )
  v13 = v20;
    v14 = (unsigned int *)(v20 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (**)(void))(*(_DWORD *)v13 + 12))();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v21);
}


void __fastcall PurchaseEnabledScreenController::_dialogPurchaseInProgress(PurchaseEnabledScreenController *this)
{
  PurchaseEnabledScreenController *v1; // r4@1
  void *v2; // r5@1
  int v3; // r4@3
  void **v4; // r0@3
  void *v5; // r0@3
  void *v6; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  int v11; // [sp+Ch] [bp-34h]@3
  void *v12; // [sp+10h] [bp-30h]@3
  int v13; // [sp+18h] [bp-28h]@3
  char v14; // [sp+1Ch] [bp-24h]@1
  void (*v15)(void); // [sp+24h] [bp-1Ch]@1

  v1 = this;
  v2 = operator new(0x20u);
  v15 = 0;
  PurchaseProgressHandler::PurchaseProgressHandler((int)v2, (int)&v14, 1);
  if ( v15 )
    v15();
  v3 = *((_DWORD *)v1 + 106);
  sub_21E94B4((void **)&v13, "purchase_in_progress");
  v12 = v2;
  v4 = sub_21E94B4((void **)&v11, (const char *)&unk_257BC67);
  MainMenuScreenModel::navigateToModalProgressScreen(v3, (int)&v13, (int)&v12, 1, (int)v4);
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v11 - 4);
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
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  v12 = 0;
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v13 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


void __fastcall PurchaseEnabledScreenController::_registerDownloadProgressBinds(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  void *v4; // r7@1
  __int64 v5; // r0@1
  __int64 v6; // r1@1
  void *v7; // r0@5
  void *v8; // r7@6
  __int64 v9; // r0@6
  __int64 v10; // r1@6
  void *v11; // r0@10
  void *v12; // r7@11
  __int64 v13; // r0@11
  __int64 v14; // r1@11
  void *v15; // r0@15
  void *v16; // r5@16
  __int64 v17; // r0@16
  __int64 v18; // r1@16
  void *v19; // r0@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36
  void *v28; // [sp+0h] [bp-C8h]@16
  __int64 v29; // [sp+8h] [bp-C0h]@16
  int v30; // [sp+10h] [bp-B8h]@16
  int v31; // [sp+14h] [bp-B4h]@16
  void *v32; // [sp+18h] [bp-B0h]@16
  void (*v33)(void); // [sp+20h] [bp-A8h]@16
  int v34; // [sp+28h] [bp-A0h]@16
  void *v35; // [sp+2Ch] [bp-9Ch]@11
  __int64 v36; // [sp+34h] [bp-94h]@11
  int v37; // [sp+3Ch] [bp-8Ch]@11
  int v38; // [sp+40h] [bp-88h]@11
  void *v39; // [sp+44h] [bp-84h]@11
  void (*v40)(void); // [sp+4Ch] [bp-7Ch]@11
  int v41; // [sp+54h] [bp-74h]@11
  void *v42; // [sp+58h] [bp-70h]@6
  __int64 v43; // [sp+60h] [bp-68h]@6
  int v44; // [sp+68h] [bp-60h]@6
  int v45; // [sp+6Ch] [bp-5Ch]@6
  void *v46; // [sp+70h] [bp-58h]@6
  void (*v47)(void); // [sp+78h] [bp-50h]@6
  int v48; // [sp+80h] [bp-48h]@6
  void *v49; // [sp+84h] [bp-44h]@1
  __int64 v50; // [sp+8Ch] [bp-3Ch]@1
  int v51; // [sp+94h] [bp-34h]@1
  int v52; // [sp+98h] [bp-30h]@1
  void *v53; // [sp+9Ch] [bp-2Ch]@1
  void (*v54)(void); // [sp+A4h] [bp-24h]@1
  int v55; // [sp+ACh] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v55 = -342099389;
  v51 = a1;
  sub_21E8AF4(&v52, a2);
  v54 = 0;
  v4 = operator new(8u);
  *(_DWORD *)v4 = v51;
  sub_21E8AF4((int *)v4 + 1, &v52);
  HIDWORD(v5) = sub_11FCE7C;
  v53 = v4;
  LODWORD(v5) = sub_11FD2F8;
  *(_QWORD *)&v54 = v5;
  v49 = operator new(1u);
  LODWORD(v6) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v6) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v50 = v6;
  ScreenController::bindString(v2, &v55, (int)&v53, (int)&v49);
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  if ( v54 )
    v54();
  v7 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v52 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  StringHash::StringHash<char [23]>(&v48, (int)"#download_info_visible");
  v44 = v2;
  sub_21E8AF4(&v45, v3);
  v47 = 0;
  v8 = operator new(8u);
  *(_DWORD *)v8 = v2;
  sub_21E8AF4((int *)v8 + 1, &v45);
  HIDWORD(v9) = sub_11FD398;
  v46 = v8;
  LODWORD(v9) = sub_11FD580;
  *(_QWORD *)&v47 = v9;
  v42 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v43 = v10;
  ScreenController::bindBool(v2, &v48, (int)&v46, (int)&v42);
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  if ( v47 )
    v47();
  v11 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v45 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  StringHash::StringHash<char [31]>(&v41, (int)"#download_progress_bar_visible");
  v37 = v2;
  sub_21E8AF4(&v38, v3);
  v40 = 0;
  v12 = operator new(8u);
  *(_DWORD *)v12 = v2;
  sub_21E8AF4((int *)v12 + 1, &v38);
  HIDWORD(v13) = sub_11FD620;
  v39 = v12;
  LODWORD(v13) = sub_11FD818;
  *(_QWORD *)&v40 = v13;
  v35 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v36 = v14;
  ScreenController::bindBool(v2, &v41, (int)&v39, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  if ( v40 )
    v40();
  v15 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v38 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  StringHash::StringHash<char [34]>(&v34, (int)"#download_progress_bar_percentage");
  v30 = v2;
  sub_21E8AF4(&v31, v3);
  v33 = 0;
  v16 = operator new(8u);
  *(_DWORD *)v16 = v2;
  sub_21E8AF4((int *)v16 + 1, &v31);
  HIDWORD(v17) = sub_11FD8B8;
  v32 = v16;
  LODWORD(v17) = sub_11FDAB0;
  *(_QWORD *)&v33 = v17;
  v28 = operator new(1u);
  LODWORD(v18) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v18) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v29 = v18;
  ScreenController::bindFloat(v2, &v34, (int)&v32, (int)&v28);
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
  if ( v33 )
    v33();
  v19 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v31 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
}


ModalScreenData *__fastcall PurchaseEnabledScreenController::_dialogNoInternet(PurchaseEnabledScreenController *this)
{
  PurchaseEnabledScreenController *v1; // r4@1
  __int64 v2; // r1@1 OVERLAPPED
  void *v4; // [sp+0h] [bp-58h]@1
  __int64 v5; // [sp+8h] [bp-50h]@1
  void *v6; // [sp+10h] [bp-48h]@1
  int v7; // [sp+14h] [bp-44h]@1
  int v8; // [sp+18h] [bp-40h]@1
  int v9; // [sp+1Ch] [bp-3Ch]@1
  void *v10; // [sp+20h] [bp-38h]@1
  int v11; // [sp+24h] [bp-34h]@1
  int v12; // [sp+28h] [bp-30h]@1
  int v13; // [sp+2Ch] [bp-2Ch]@1
  void *v14; // [sp+30h] [bp-28h]@1
  void *v15; // [sp+34h] [bp-24h]@1
  void *v16; // [sp+38h] [bp-20h]@1
  void *v17; // [sp+3Ch] [bp-1Ch]@1
  int v18; // [sp+40h] [bp-18h]@1
  char v19; // [sp+44h] [bp-14h]@1

  v1 = this;
  v6 = &unk_28898CC;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = &unk_28898CC;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = &unk_28898CC;
  v15 = &unk_28898CC;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = 1;
  v19 = 0;
  sub_21E8190(&v6, "store.connection.failed.title", (_BYTE *)0x1D);
  sub_21E8190(&v10, "store.connection.failed.body", (_BYTE *)0x1C);
  sub_21E8190(&v16, "gui.close", (_BYTE *)9);
  v18 = 2;
  v4 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIFv19ModalScreenButtonIdEEEd_UlS6_E_E10_M_managerERSt9_Any_dataRKSB_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFv19ModalScreenButtonIdEZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIS1_EEd_UlS0_E_E9_M_invokeERKSt9_Any_dataS0_;
  v5 = v2;
  HIDWORD(v2) = &v4;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v6, *(__int64 *)((char *)&v2 + 4));
  if ( (_DWORD)v5 )
    ((void (*)(void))v5)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v6);
}


void __fastcall PurchaseEnabledScreenController::_onPurchaseSuccess(int a1, int *a2)
{
  PurchaseEnabledScreenController::_onPurchaseSuccess(a1, a2);
}


void __fastcall PurchaseEnabledScreenController::_dialogPurchaseInProgress(PurchaseEnabledScreenController *this)
{
  PurchaseEnabledScreenController::_dialogPurchaseInProgress(this);
}
