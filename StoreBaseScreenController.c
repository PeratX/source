

void __fastcall StoreBaseScreenController::_registerEventHandlers(StoreBaseScreenController *this)
{
  StoreBaseScreenController::_registerEventHandlers(this);
}


int __fastcall StoreBaseScreenController::_getStoreCatalogItemPromptIconVisible(StoreBaseScreenController *this, const StoreCatalogItemModel *a2)
{
  StoreCatalogItemModel *v2; // r4@1
  _DWORD *v3; // r1@4
  int *v4; // r0@5
  int v5; // r4@7
  int v6; // r4@7
  char *v7; // r0@9
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  _DWORD *v11; // [sp+4h] [bp-1Ch]@3

  v2 = a2;
  if ( StoreCatalogItemModel::isOwned(a2) == 1 && StoreCatalogItemModel::isConsumableItem(v2) != 1 )
  {
    v6 = 0;
  }
  else
    v11 = &unk_28898CC;
    if ( StoreCatalogItemModel::isCategoryRealm(v2) )
    {
      v3 = &unk_28898CC;
    }
    else
      v4 = (int *)StoreCatalogItemModel::getPrice(v2);
      EntityInteraction::setInteractText((int *)&v11, v4);
      v3 = v11;
    if ( *(v3 - 3) )
      v5 = sub_21E7D6C((const void **)&v11, "0");
      v6 = v5 != 0;
      v6 = 0;
    v7 = (char *)(v3 - 3);
    if ( v3 - 3 != &dword_28898C0 )
      v8 = v3 - 1;
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
        j_j_j_j__ZdlPv_9(v7);
  return v6;
}


int *__fastcall StoreBaseScreenController::_getStoreCatalogItemPromptText(StoreBaseScreenController *this, const StoreCatalogItemModel *a2, StoreCatalogItemModel *a3)
{
  StoreCatalogItemModel *v3; // r5@1
  void **v4; // r4@1
  const StoreCatalogItemModel *v5; // r6@1
  int v6; // r7@1
  int *result; // r0@2
  int *v8; // r1@7
  int *v9; // r0@7
  char *v10; // r5@8

  v3 = a3;
  v4 = (void **)this;
  v5 = a2;
  v6 = StoreCatalogItemModel::getItemPerformanceRequirements(a3);
  if ( v6 > MainMenuScreenModel::getDevicePerfTier(*((MainMenuScreenModel **)v5 + 106)) )
    return (int *)sub_21E94B4(v4, "store.incompatible");
  if ( StoreCatalogItemModel::isOwned(v3) != 1 || StoreCatalogItemModel::isConsumableItem(v3) )
  {
    if ( StoreCatalogItemModel::isCategoryRealm(v3) )
    {
      v8 = (int *)&Util::EMPTY_STRING;
      v9 = (int *)v4;
      return sub_21E8AF4(v9, v8);
    }
    v10 = StoreCatalogItemModel::getPrice(v3);
    if ( sub_21E7D6C((const void **)v10, "0") )
      v8 = (int *)v10;
    result = (int *)sub_21E94B4(v4, "store.free");
  }
  else if ( StoreCatalogItemModel::isInstalled(v3) )
    if ( StoreCatalogItemModel::isUpdateAvailable(v3) == 1 )
      result = (int *)sub_21E94B4(v4, "store.content.update");
    else
      result = (int *)sub_21E94B4(v4, "store.owned");
  else
    result = (int *)sub_21E94B4(v4, "store.content.download");
  return result;
}


void __fastcall StoreBaseScreenController::_registerBindings(StoreBaseScreenController *this)
{
  StoreBaseScreenController::_registerBindings(this);
}


void __fastcall StoreBaseScreenController::_registerEventHandlers(StoreBaseScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  _DWORD *v20; // [sp+4h] [bp-5Ch]@7
  __int64 v21; // [sp+Ch] [bp-54h]@7
  int v22; // [sp+18h] [bp-48h]@7
  _DWORD *v23; // [sp+1Ch] [bp-44h]@4
  __int64 v24; // [sp+24h] [bp-3Ch]@4
  int v25; // [sp+30h] [bp-30h]@4
  _DWORD *v26; // [sp+34h] [bp-2Ch]@1
  __int64 v27; // [sp+3Ch] [bp-24h]@1
  int v28; // [sp+48h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v28, "button.restore_store");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v3 = operator new(4u);
  LODWORD(v4) = sub_14030E8;
  *v3 = v1;
  HIDWORD(v4) = sub_1402E6C;
  v26 = v3;
  v27 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v5 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v25, "button.coin_wallet");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v25);
  v7 = operator new(4u);
  LODWORD(v8) = sub_14033A4;
  *v7 = v1;
  HIDWORD(v8) = sub_1403392;
  v23 = v7;
  v24 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v22, "button.signin");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v22);
  v11 = operator new(4u);
  LODWORD(v12) = sub_1403770;
  *v11 = v1;
  HIDWORD(v12) = sub_14033DC;
  v20 = v11;
  v21 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  v13 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall StoreBaseScreenController::onOpen(StoreBaseScreenController *this)
{
  StoreBaseScreenController::onOpen(this);
}


void __fastcall StoreBaseScreenController::~StoreBaseScreenController(StoreBaseScreenController *this)
{
  StoreBaseScreenController::~StoreBaseScreenController(this);
}


int __fastcall StoreBaseScreenController::_tryUpdate(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  unsigned int *v8; // r1@10
  unsigned int v9; // r2@12
  __int64 v10; // kr00_8@15
  unsigned int *v11; // r1@16
  unsigned int v12; // r2@18
  __int64 v13; // kr08_8@21
  _QWORD *v14; // r0@21
  unsigned int *v15; // r1@22
  unsigned int v16; // r2@24
  __int64 v17; // r1@27
  unsigned int *v18; // r1@30
  unsigned int v19; // r0@32
  int v20; // r0@37
  unsigned int *v21; // r2@38
  unsigned int v22; // r1@40
  int v23; // r0@45
  unsigned int *v24; // r2@46
  unsigned int v25; // r1@48
  int result; // r0@53
  unsigned int *v27; // r2@54
  unsigned int v28; // r1@56
  _QWORD *v29; // [sp+0h] [bp-48h]@27
  void (*v30)(void); // [sp+8h] [bp-40h]@21
  int v31; // [sp+10h] [bp-38h]@9
  int v32; // [sp+14h] [bp-34h]@9
  int v33; // [sp+18h] [bp-30h]@1
  int v34; // [sp+1Ch] [bp-2Ch]@1
  int v35; // [sp+20h] [bp-28h]@7
  int v36; // [sp+24h] [bp-24h]@7
  int v37; // [sp+28h] [bp-20h]@1
  int v38; // [sp+2Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  MinecraftScreenController::_getWeakPtrToThis<StoreBaseScreenController>((int)&v37, a1);
  v33 = v37;
  v34 = v38;
  if ( v38 )
  {
    v6 = (unsigned int *)(v38 + 8);
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
  v35 = v4;
  v36 = v5;
  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v3 + 424)) )
    sub_14025BC((int)&v33, 0);
  else
    v31 = v37;
    v32 = v38;
    if ( v38 )
      v8 = (unsigned int *)(v38 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
      }
      else
        ++*v8;
    v10 = *(_QWORD *)&v33;
    if ( v34 )
      v11 = (unsigned int *)(v34 + 8);
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
        ++*v11;
    v13 = *(_QWORD *)&v35;
    v30 = 0;
    v14 = operator new(0x10u);
    *v14 = v10;
    if ( HIDWORD(v10) )
      v15 = (unsigned int *)(HIDWORD(v10) + 8);
          v16 = __ldrex(v15);
        while ( __strex(v16 + 1, v15) );
        ++*v15;
    LODWORD(v17) = sub_14041C8;
    v14[1] = v13;
    HIDWORD(v17) = sub_14041C0;
    v29 = v14;
    *(_QWORD *)&v30 = v17;
    StoreBaseScreenController::_requireSignIn(v3, (int)&v31, (int)&v29);
    if ( v30 )
      v30();
      v18 = (unsigned int *)(HIDWORD(v10) + 8);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
    v20 = v32;
    if ( v32 )
      v21 = (unsigned int *)(v32 + 8);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (**)(void))(*(_DWORD *)v20 + 12))();
  v23 = v34;
  if ( v34 )
    v24 = (unsigned int *)(v34 + 8);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      (*(void (**)(void))(*(_DWORD *)v23 + 12))();
  result = v38;
    v27 = (unsigned int *)(v38 + 8);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall StoreBaseScreenController::_fetchGamerPic(StoreBaseScreenController *this)
{
  StoreBaseScreenController *v1; // r4@1
  int v2; // r5@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  _QWORD *v6; // r0@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r2@10
  __int64 v9; // r1@13
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  void *v12; // r0@23
  int result; // r0@24
  unsigned int *v14; // r2@25
  unsigned int v15; // r1@27
  unsigned int *v16; // r2@33
  signed int v17; // r1@35
  _QWORD *v18; // [sp+0h] [bp-30h]@13
  void (*v19)(void); // [sp+8h] [bp-28h]@7
  int v20; // [sp+10h] [bp-20h]@1
  char v21; // [sp+14h] [bp-1Ch]@1
  int v22; // [sp+18h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<StoreBaseScreenController>((int)&v21, (int)this);
  v2 = *((_DWORD *)v1 + 95);
  MinecraftScreenModel::getCurrentGamertag((MinecraftScreenModel *)&v20, *((_DWORD *)v1 + 95));
  v3 = *(_QWORD *)&v21;
  if ( v22 )
  {
    v4 = (unsigned int *)(v22 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  v19 = 0;
  v6 = operator new(8u);
  *v6 = v3;
  if ( HIDWORD(v3) )
    v7 = (unsigned int *)(HIDWORD(v3) + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      ++*v7;
  LODWORD(v9) = sub_1404414;
  v18 = v6;
  HIDWORD(v9) = sub_1404278;
  *(_QWORD *)&v19 = v9;
  MinecraftScreenModel::getProfile(v2, (_BYTE **)&v20, (int)&v18);
  if ( v19 )
    v19();
    v10 = (unsigned int *)(HIDWORD(v3) + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  v12 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v20 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  result = v22;
    v14 = (unsigned int *)(v22 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


StoreBaseScreenController *__fastcall StoreBaseScreenController::~StoreBaseScreenController(StoreBaseScreenController *this)
{
  StoreBaseScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E7FE0;
  v2 = *((_DWORD *)this + 110);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 108);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 108) = 0;
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


ModalScreenData *__fastcall StoreBaseScreenController::_openModalDialog(int a1, int *a2, int *a3, int *a4)
{
  int v4; // r4@1
  int *v5; // r6@1
  int *v6; // r5@1
  signed int v7; // r1@1
  __int64 v8; // r1@3 OVERLAPPED
  void *v10; // [sp+4h] [bp-10h]@3
  __int64 v11; // [sp+Ch] [bp-8h]@3
  void *v12; // [sp+14h] [bp+0h]@1
  int v13; // [sp+18h] [bp+4h]@1
  int v14; // [sp+1Ch] [bp+8h]@1
  int v15; // [sp+20h] [bp+Ch]@1
  void *v16; // [sp+24h] [bp+10h]@1
  int v17; // [sp+28h] [bp+14h]@1
  int v18; // [sp+2Ch] [bp+18h]@1
  int v19; // [sp+30h] [bp+1Ch]@1
  void *v20; // [sp+34h] [bp+20h]@1
  void *v21; // [sp+38h] [bp+24h]@1
  void *v22; // [sp+3Ch] [bp+28h]@1
  void *v23; // [sp+40h] [bp+2Ch]@1
  int v24; // [sp+44h] [bp+30h]@1
  char v25; // [sp+48h] [bp+34h]@1

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v12 = &unk_28898CC;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = &unk_28898CC;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = &unk_28898CC;
  v21 = &unk_28898CC;
  v22 = &unk_28898CC;
  v23 = &unk_28898CC;
  v24 = 1;
  v25 = 0;
  EntityInteraction::setInteractText((int *)&v12, a2);
  EntityInteraction::setInteractText((int *)&v16, v5);
  v7 = 2;
  if ( !*(_DWORD *)(*v6 - 12) )
    v7 = 3;
  v24 = v7;
  EntityInteraction::setInteractText((int *)&v22, v6);
  v10 = operator new(1u);
  LODWORD(v8) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIFv19ModalScreenButtonIdEEEd_UlS6_E_E10_M_managerERSt9_Any_dataRKSB_St18_Manager_operation;
  HIDWORD(v8) = ZNSt17_Function_handlerIFv19ModalScreenButtonIdEZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIS1_EEd_UlS0_E_E9_M_invokeERKSt9_Any_dataS0_;
  v11 = v8;
  HIDWORD(v8) = &v10;
  MinecraftScreenController::_displayCustomModalPopup(v4, (int)&v12, *(__int64 *)((char *)&v8 + 4));
  if ( (_DWORD)v11 )
    ((void (*)(void))v11)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v12);
}


signed int __fastcall StoreBaseScreenController::_getStoreCatalogItemUpdateIconVisible(StoreBaseScreenController *this, const StoreCatalogItemModel *a2)
{
  StoreCatalogItemModel *v2; // r4@1
  signed int result; // r0@2

  v2 = a2;
  if ( StoreCatalogItemModel::isOwned(a2) == 1 )
    result = StoreCatalogItemModel::isUpdateAvailable(v2);
  else
    result = 0;
  return result;
}


int __fastcall StoreBaseScreenController::StoreBaseScreenController(int a1, int a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r6@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r7@14
  unsigned int v11; // r0@16
  int v12; // r5@21
  void *v13; // r6@21
  int v15; // [sp+0h] [bp-20h]@1
  int v16; // [sp+4h] [bp-1Ch]@1

  v2 = (int *)a2;
  v3 = a1;
  v15 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v16 = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  MainMenuScreenController::MainMenuScreenController(v3, (int)&v15);
  v7 = v16;
  if ( v16 )
    v8 = (unsigned int *)(v16 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
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
  *(_DWORD *)v3 = &off_26E7FE0;
  v12 = *v2;
  v13 = operator new(0x1Cu);
  DlcPreCheckScreenHandler::DlcPreCheckScreenHandler((int)v13, v3, v12);
  *(_DWORD *)(v3 + 432) = v13;
  *(_DWORD *)(v3 + 440) = &unk_28898CC;
  StoreBaseScreenController::_registerEventHandlers((StoreBaseScreenController *)v3);
  StoreBaseScreenController::_registerBindings((StoreBaseScreenController *)v3);
  return v3;
}


int __fastcall StoreBaseScreenController::_tryAcquireDlc(StoreBaseScreenController *this, StoreCatalogItemModel *a2)
{
  StoreBaseScreenController *v2; // r5@1
  StoreCatalogItemModel *v3; // r4@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  unsigned int *v6; // r0@10
  unsigned int v7; // r1@12
  __int64 v8; // kr00_8@15
  unsigned int *v9; // r0@16
  unsigned int v10; // r1@18
  int v11; // r6@21
  _DWORD *v12; // r0@21
  unsigned int *v13; // r1@22
  unsigned int v14; // r2@24
  __int64 v15; // r1@27
  unsigned int *v16; // r1@30
  unsigned int v17; // r0@32
  int v18; // r0@37
  unsigned int *v19; // r2@38
  unsigned int v20; // r1@40
  int v21; // r0@45
  unsigned int *v22; // r2@46
  unsigned int v23; // r1@48
  int result; // r0@53
  unsigned int *v25; // r2@54
  unsigned int v26; // r1@56
  _DWORD *v27; // [sp+0h] [bp-40h]@27
  void (*v28)(void); // [sp+8h] [bp-38h]@21
  int v29; // [sp+10h] [bp-30h]@9
  int v30; // [sp+14h] [bp-2Ch]@9
  int v31; // [sp+18h] [bp-28h]@1
  int v32; // [sp+1Ch] [bp-24h]@1
  int v33; // [sp+20h] [bp-20h]@7
  int v34; // [sp+24h] [bp-1Ch]@1
  int v35; // [sp+28h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  MinecraftScreenController::_getWeakPtrToThis<StoreBaseScreenController>((int)&v34, (int)this);
  v31 = v34;
  v32 = v35;
  if ( v35 )
  {
    v4 = (unsigned int *)(v35 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  v33 = *(_DWORD *)v3;
  if ( MinecraftScreenModel::isSignedInToXBL(*((MinecraftScreenModel **)v2 + 106)) )
    sub_1401B40((int)&v31, 0);
  else
    v29 = v34;
    v30 = v35;
    if ( v35 )
      v6 = (unsigned int *)(v35 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
      }
      else
        ++*v6;
    v8 = *(_QWORD *)&v31;
    if ( v32 )
      v9 = (unsigned int *)(v32 + 8);
          v10 = __ldrex(v9);
        while ( __strex(v10 + 1, v9) );
        ++*v9;
    v11 = v33;
    v28 = 0;
    v12 = operator new(0xCu);
    *(_QWORD *)v12 = v8;
    if ( HIDWORD(v8) )
      v13 = (unsigned int *)(HIDWORD(v8) + 8);
          v14 = __ldrex(v13);
        while ( __strex(v14 + 1, v13) );
        ++*v13;
    LODWORD(v15) = sub_1404114;
    v12[2] = v11;
    HIDWORD(v15) = sub_140410C;
    v27 = v12;
    *(_QWORD *)&v28 = v15;
    StoreBaseScreenController::_requireSignIn((int)v2, (int)&v29, (int)&v27);
    if ( v28 )
      v28();
      v16 = (unsigned int *)(HIDWORD(v8) + 8);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 12))(HIDWORD(v8));
    v18 = v30;
    if ( v30 )
      v19 = (unsigned int *)(v30 + 8);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (**)(void))(*(_DWORD *)v18 + 12))();
  v21 = v32;
  if ( v32 )
    v22 = (unsigned int *)(v32 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      (*(void (**)(void))(*(_DWORD *)v21 + 12))();
  result = v35;
    v25 = (unsigned int *)(v35 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall StoreBaseScreenController::_registerBindings(StoreBaseScreenController *this)
{
  StoreBaseScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  __int64 v13; // r1@13
  _DWORD *v14; // r0@17
  __int64 v15; // r1@17
  __int64 v16; // r1@17
  _DWORD *v17; // r0@21
  __int64 v18; // r1@21
  __int64 v19; // r1@21
  _DWORD *v20; // r0@25
  __int64 v21; // r1@25
  __int64 v22; // r1@25
  _DWORD *v23; // r0@29
  __int64 v24; // r1@29
  __int64 v25; // r1@29
  void *v26; // [sp+0h] [bp-128h]@29
  __int64 v27; // [sp+8h] [bp-120h]@29
  _DWORD *v28; // [sp+10h] [bp-118h]@29
  __int64 v29; // [sp+18h] [bp-110h]@29
  int v30; // [sp+20h] [bp-108h]@29
  void *v31; // [sp+24h] [bp-104h]@25
  __int64 v32; // [sp+2Ch] [bp-FCh]@25
  _DWORD *v33; // [sp+34h] [bp-F4h]@25
  __int64 v34; // [sp+3Ch] [bp-ECh]@25
  int v35; // [sp+44h] [bp-E4h]@25
  void *v36; // [sp+48h] [bp-E0h]@21
  __int64 v37; // [sp+50h] [bp-D8h]@21
  _DWORD *v38; // [sp+58h] [bp-D0h]@21
  __int64 v39; // [sp+60h] [bp-C8h]@21
  int v40; // [sp+68h] [bp-C0h]@21
  void *v41; // [sp+6Ch] [bp-BCh]@17
  __int64 v42; // [sp+74h] [bp-B4h]@17
  _DWORD *v43; // [sp+7Ch] [bp-ACh]@17
  __int64 v44; // [sp+84h] [bp-A4h]@17
  int v45; // [sp+8Ch] [bp-9Ch]@17
  void *v46; // [sp+90h] [bp-98h]@13
  __int64 v47; // [sp+98h] [bp-90h]@13
  _DWORD *v48; // [sp+A0h] [bp-88h]@13
  __int64 v49; // [sp+A8h] [bp-80h]@13
  int v50; // [sp+B0h] [bp-78h]@13
  void *v51; // [sp+B4h] [bp-74h]@9
  __int64 v52; // [sp+BCh] [bp-6Ch]@9
  _DWORD *v53; // [sp+C4h] [bp-64h]@9
  __int64 v54; // [sp+CCh] [bp-5Ch]@9
  int v55; // [sp+D4h] [bp-54h]@9
  void *v56; // [sp+D8h] [bp-50h]@5
  __int64 v57; // [sp+E0h] [bp-48h]@5
  _DWORD *v58; // [sp+E8h] [bp-40h]@5
  __int64 v59; // [sp+F0h] [bp-38h]@5
  int v60; // [sp+F8h] [bp-30h]@5
  void *v61; // [sp+FCh] [bp-2Ch]@1
  __int64 v62; // [sp+104h] [bp-24h]@1
  _DWORD *v63; // [sp+10Ch] [bp-1Ch]@1
  __int64 v64; // [sp+114h] [bp-14h]@1
  int v65; // [sp+11Ch] [bp-Ch]@1

  v1 = this;
  v65 = 1376875312;
  v2 = operator new(4u);
  LODWORD(v3) = sub_1403BAC;
  *v2 = v1;
  HIDWORD(v3) = sub_1403B9C;
  v63 = v2;
  v64 = v3;
  v61 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v62 = v4;
  ScreenController::bindString((int)v1, &v65, (int)&v63, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  v60 = 486579846;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1403BF2;
  *v5 = v1;
  HIDWORD(v6) = sub_1403BE2;
  v58 = v5;
  v59 = v6;
  v56 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v57 = v7;
  ScreenController::bindString((int)v1, &v60, (int)&v58, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  if ( (_DWORD)v59 )
    ((void (*)(void))v59)();
  v55 = 969901581;
  v8 = operator new(4u);
  LODWORD(v9) = sub_1403C60;
  *v8 = v1;
  HIDWORD(v9) = sub_1403C28;
  v53 = v8;
  v54 = v9;
  v51 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v52 = v10;
  ScreenController::bindString((int)v1, &v55, (int)&v53, (int)&v51);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  StringHash::StringHash<char [23]>(&v50, (int)"#gamer_pic_file_source");
  v11 = operator new(4u);
  LODWORD(v12) = sub_1403CC4;
  *v11 = v1;
  HIDWORD(v12) = sub_1403C96;
  v48 = v11;
  v49 = v12;
  v46 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v47 = v13;
  ScreenController::bindString((int)v1, &v50, (int)&v48, (int)&v46);
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
  if ( (_DWORD)v49 )
    ((void (*)(void))v49)();
  v45 = 362704527;
  v14 = operator new(4u);
  LODWORD(v15) = sub_1403D1E;
  *v14 = v1;
  HIDWORD(v15) = sub_1403CFA;
  v43 = v14;
  v44 = v15;
  v41 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v42 = v16;
  ScreenController::bindBool((int)v1, &v45, (int)&v43, (int)&v41);
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  StringHash::StringHash<char [26]>(&v40, (int)"#show_disconnected_button");
  v17 = operator new(4u);
  LODWORD(v18) = sub_1403D74;
  *v17 = v1;
  HIDWORD(v18) = sub_1403D54;
  v38 = v17;
  v39 = v18;
  v36 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v37 = v19;
  ScreenController::bindBool((int)v1, &v40, (int)&v38, (int)&v36);
  if ( (_DWORD)v37 )
    ((void (*)(void))v37)();
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  StringHash::StringHash<char [23]>(&v35, (int)"#show_xbl_profile_info");
  v20 = operator new(4u);
  LODWORD(v21) = sub_1403DB6;
  *v20 = v1;
  HIDWORD(v21) = sub_1403DAA;
  v33 = v20;
  v34 = v21;
  v31 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v32 = v22;
  ScreenController::bindBool((int)v1, &v35, (int)&v33, (int)&v31);
  if ( (_DWORD)v32 )
    ((void (*)(void))v32)();
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  StringHash::StringHash<char [23]>(&v30, (int)"#sign_in_focus_enabled");
  v23 = operator new(4u);
  LODWORD(v24) = sub_1403E00;
  *v23 = v1;
  HIDWORD(v24) = sub_1403DEC;
  v28 = v23;
  v29 = v24;
  v26 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v27 = v25;
  ScreenController::bindBool((int)v1, &v30, (int)&v28, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
}


int __fastcall StoreBaseScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = ScreenController::handleGameEventNotification(a1);
  if ( v2 == 14 )
    result |= 1u;
  return result;
}


void __fastcall StoreBaseScreenController::onOpen(StoreBaseScreenController *this)
{
  StoreBaseScreenController *v1; // r4@1
  int v2; // r1@1
  __int64 v3; // r2@1
  void *v4; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  int v7; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  MinecraftScreenModel::getCurrentGamertag((MinecraftScreenModel *)&v7, *((_DWORD *)this + 95));
  if ( *(_DWORD *)(v7 - 12) && !*(_DWORD *)(*((_DWORD *)v1 + 110) - 12) )
    StoreBaseScreenController::_fetchGamerPic(v1);
  *((_BYTE *)v1 + 437) = 1;
  ScreenController::onOpen(v1, v2, v3);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


int __fastcall StoreBaseScreenController::addStaticScreenVars(StoreBaseScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  StoreBaseScreenController *v3; // r5@1
  int v4; // r6@1
  char v5; // r0@1
  int v7; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$requires_restore_button");
  v5 = MainMenuScreenModel::getStoreRequiresRestoreButton(*((MainMenuScreenModel **)v3 + 106));
  Json::Value::Value((Json::Value *)&v7, v5);
  Json::Value::operator=(v4, (const Json::Value *)&v7);
  Json::Value::~Value((Json::Value *)&v7);
  return ScreenController::addStaticScreenVars(v3, v2);
}


void **__fastcall StoreBaseScreenController::_getStoreCatalogItemOfferIconPath(StoreBaseScreenController *this, const StoreCatalogItemModel *a2, StoreCatalogItemModel *a3)
{
  StoreCatalogItemModel *v3; // r5@1
  void **v4; // r4@1
  void **result; // r0@3

  v3 = a3;
  v4 = (void **)this;
  if ( StoreCatalogItemModel::isOwned(a3) != 1 || StoreCatalogItemModel::isUpdateAvailable(v3) != 1 )
    result = sub_21E94B4(v4, "textures/ui/MCoin");
  else
    result = sub_21E94B4(v4, "textures/ui/update");
  return result;
}


void __fastcall StoreBaseScreenController::~StoreBaseScreenController(StoreBaseScreenController *this)
{
  StoreBaseScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E7FE0;
  v2 = *((_DWORD *)this + 110);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 108);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 108) = 0;
  MainMenuScreenController::~MainMenuScreenController(v1);
  operator delete((void *)v1);
}


int __fastcall StoreBaseScreenController::tick(StoreBaseScreenController *this)
{
  StoreBaseScreenController *v1; // r5@1
  int v2; // r4@1
  char v3; // r0@4

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  if ( *((_BYTE *)v1 + 437) )
  {
    *((_BYTE *)v1 + 437) = 0;
    v2 |= 1u;
  }
  if ( MinecraftScreenModel::areAnyDownloadsActive(*((MinecraftScreenModel **)v1 + 106)) == 1 )
    v3 = 1;
LABEL_7:
    *((_BYTE *)v1 + 436) = v3;
    return v2;
  if ( *((_BYTE *)v1 + 436) )
    v3 = 0;
    goto LABEL_7;
  return v2;
}


ModalScreenData *__fastcall StoreBaseScreenController::_requireSignIn(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  void (*v9)(void); // r3@7
  void (__fastcall *v10)(int *, int, signed int); // r7@7
  unsigned int *v11; // r0@10
  unsigned int v12; // r1@12
  void (*v13)(void); // r5@15
  void *v14; // r0@17
  unsigned int *v15; // r1@17
  unsigned int v16; // r2@20
  __int64 v17; // r2@23
  unsigned int *v18; // r2@28
  unsigned int v19; // r1@30
  int v20; // r0@37
  unsigned int *v21; // r2@38
  unsigned int v22; // r1@40
  int v24; // [sp+0h] [bp-40h]@9
  int v25; // [sp+4h] [bp-3Ch]@9
  __int64 v26; // [sp+8h] [bp-38h]@16
  void (*v27)(void); // [sp+10h] [bp-30h]@15
  unsigned int *v28; // [sp+14h] [bp-2Ch]@16
  void *v29; // [sp+18h] [bp-28h]@23
  void (*v30)(void); // [sp+20h] [bp-20h]@17
  int (__fastcall *v31)(int, int); // [sp+24h] [bp-1Ch]@23
  int v32; // [sp+28h] [bp-18h]@1
  int v33; // [sp+2Ch] [bp-14h]@1
  int v34; // [sp+30h] [bp-10h]@8
  void (*v35)(void); // [sp+38h] [bp-8h]@7
  unsigned int *v36; // [sp+3Ch] [bp-4h]@8
  void *v37; // [sp+40h] [bp+0h]@1
  int v38; // [sp+44h] [bp+4h]@1
  int v39; // [sp+48h] [bp+8h]@1
  int v40; // [sp+4Ch] [bp+Ch]@1
  void *v41; // [sp+50h] [bp+10h]@1
  int v42; // [sp+54h] [bp+14h]@1
  int v43; // [sp+58h] [bp+18h]@1
  int v44; // [sp+5Ch] [bp+1Ch]@1
  void *v45; // [sp+60h] [bp+20h]@1
  void *v46; // [sp+64h] [bp+24h]@1
  void *v47; // [sp+68h] [bp+28h]@1
  void *v48; // [sp+6Ch] [bp+2Ch]@1
  int v49; // [sp+70h] [bp+30h]@1
  char v50; // [sp+74h] [bp+34h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v37 = &unk_28898CC;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = &unk_28898CC;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = &unk_28898CC;
  v46 = &unk_28898CC;
  v47 = &unk_28898CC;
  v48 = &unk_28898CC;
  v49 = 1;
  v50 = 0;
  sub_21E8190(&v37, "xbox.signinFirst", (_BYTE *)0x10);
  sub_21E8190(&v41, "store.popup.xblRequired.message", (_BYTE *)0x1F);
  sub_21E8190(&v46, "store.popup.xblRequired.title", (_BYTE *)0x1D);
  sub_21E8190(&v48, "store.popup.goBack", (_BYTE *)0x12);
  v32 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(v4 + 4);
  v33 = v6;
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
  v9 = 0;
  v35 = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v10 )
    v10(&v34, v5, 2);
    v36 = *(unsigned int **)(v5 + 12);
    v9 = *(void (**)(void))(v5 + 8);
    v35 = *(void (**)(void))(v5 + 8);
  v24 = v32;
  v25 = v33;
  if ( v33 )
    v11 = (unsigned int *)(v33 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      v9 = v35;
      ++*v11;
  v13 = 0;
  v27 = 0;
  if ( v9 )
    ((void (__fastcall *)(__int64 *, int *, signed int))v9)(&v26, &v34, 2);
    v13 = v35;
    v28 = v36;
    v27 = v35;
  v30 = 0;
  v14 = operator new(0x18u);
  *(_DWORD *)v14 = v24;
  v15 = (unsigned int *)v25;
  *((_DWORD *)v14 + 1) = v25;
  if ( v25 )
    v15 = (unsigned int *)(v25 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
      v15 = (unsigned int *)*((_DWORD *)v14 + 5);
      v13 = v27;
      ++*v15;
  v17 = v26;
  v26 = *((_QWORD *)v14 + 1);
  *((_QWORD *)v14 + 1) = v17;
  LODWORD(v17) = v28;
  *((_DWORD *)v14 + 4) = v13;
  v28 = v15;
  *((_DWORD *)v14 + 5) = v17;
  v29 = v14;
  v30 = (void (*)(void))sub_1403FD8;
  v31 = sub_1403E38;
  LODWORD(v17) = &v29;
  MinecraftScreenController::_displayCustomModalPopup(v3, (int)&v37, v17);
  if ( v30 )
    v30();
  if ( v27 )
    v27();
    v18 = (unsigned int *)(v25 + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      (*(void (**)(void))(*(_DWORD *)v25 + 12))();
  if ( v35 )
    v35();
  v20 = v33;
    v21 = (unsigned int *)(v33 + 8);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      (*(void (**)(void))(*(_DWORD *)v20 + 12))();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v37);
}


signed int __fastcall StoreBaseScreenController::_getStoreCatalogItemNewOfferIconVisible(StoreBaseScreenController *this, const StoreCatalogItemModel *a2)
{
  const StoreCatalogItemModel *v2; // r4@1
  StoreBaseScreenController *v3; // r5@1
  signed int result; // r0@2

  v2 = a2;
  v3 = this;
  if ( StoreCatalogItemModel::isOwned(a2) )
    result = 0;
  else
    result = MainMenuScreenModel::isStoreCatalogItemNew(*((MainMenuScreenModel **)v3 + 106), v2);
  return result;
}
