

void __fastcall StoreHomeScreenController::onOpen(StoreHomeScreenController *this)
{
  StoreHomeScreenController::onOpen(this);
}


int __fastcall StoreHomeScreenController::_changeMadeToOfferGridStates(StoreHomeScreenController *this)
{
  StoreHomeScreenController *v1; // r4@1
  int v2; // r1@1
  int v3; // r0@1
  int v4; // r2@1
  char v5; // r6@2
  unsigned int v6; // r5@3
  int v7; // r7@4
  signed int v8; // r0@4

  v1 = this;
  v2 = MainMenuScreenModel::getNumStoreCatalogCategoryRows(*((MainMenuScreenModel **)this + 106));
  v3 = *(_QWORD *)((char *)v1 + 444) >> 32;
  v4 = *(_QWORD *)((char *)v1 + 444);
  if ( v2 == (v3 - v4) >> 3 )
  {
    v5 = 0;
    if ( v3 != v4 )
    {
      v6 = 0;
      do
      {
        v7 = v4 + 8 * v6;
        v8 = MainMenuScreenModel::getNumStoreCatalogInCategoryRow(*((MainMenuScreenModel **)v1 + 106), v6++);
        if ( *(_DWORD *)(v7 + 4) != v8 )
        {
          *(_DWORD *)(v7 + 4) = v8;
          v5 = 1;
        }
        v4 = *(_QWORD *)((char *)v1 + 444);
      }
      while ( v6 < (signed int)((*(_QWORD *)((char *)v1 + 444) >> 32) - v4) >> 3 );
    }
  }
  else
    StoreHomeScreenController::_constructProductGrid(v1, v2);
    v5 = 1;
  return v5 & 1;
}


void __fastcall StoreHomeScreenController::~StoreHomeScreenController(StoreHomeScreenController *this)
{
  StoreHomeScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E3910;
  v2 = *((_DWORD *)this + 114);
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
  v4 = (void *)*((_DWORD *)v1 + 111);
  if ( v4 )
    operator delete(v4);
  StoreBaseScreenController::~StoreBaseScreenController(v1);
  operator delete((void *)v1);
}


int __fastcall StoreHomeScreenController::tick(StoreHomeScreenController *this)
{
  StoreHomeScreenController *v1; // r4@1
  signed int v2; // r6@6
  int v3; // r1@8
  int v4; // r0@8
  int v5; // r2@8
  unsigned int v6; // r5@10
  int v7; // r7@11
  signed int v8; // r0@11

  v1 = this;
  if ( *((_BYTE *)this + 467) && MainMenuScreenModel::getCatalogReady(*((MainMenuScreenModel **)this + 106)) == 1 )
  {
    MainMenuScreenModel::updateStoreCatalogUpdateRow(*((MainMenuScreenModel **)v1 + 106));
    *((_BYTE *)v1 + 467) = 0;
  }
  if ( *((_BYTE *)v1 + 464) )
    goto LABEL_8;
  if ( MainMenuScreenModel::getCatalogReady(*((MainMenuScreenModel **)v1 + 106)) != 1 )
    if ( !*((_BYTE *)v1 + 464) )
    {
      v2 = 0;
      goto LABEL_18;
    }
LABEL_8:
    v3 = MainMenuScreenModel::getNumStoreCatalogCategoryRows(*((MainMenuScreenModel **)v1 + 106));
    v4 = *(_QWORD *)((char *)v1 + 444) >> 32;
    v5 = *(_QWORD *)((char *)v1 + 444);
    if ( v3 == (v4 - v5) >> 3 )
      if ( v4 == v5 )
        goto LABEL_18;
      v6 = 0;
      do
      {
        v7 = v5 + 8 * v6;
        v8 = MainMenuScreenModel::getNumStoreCatalogInCategoryRow(*((MainMenuScreenModel **)v1 + 106), v6++);
        if ( *(_DWORD *)(v7 + 4) != v8 )
        {
          *(_DWORD *)(v7 + 4) = v8;
          LOBYTE(v2) = 1;
        }
        v5 = *(_QWORD *)((char *)v1 + 444);
      }
      while ( v6 < (signed int)((*(_QWORD *)((char *)v1 + 444) >> 32) - v5) >> 3 );
      if ( !(v2 & 1) )
        v2 = 0;
    else
      StoreHomeScreenController::_constructProductGrid(v1, v3);
    v2 = 1;
    goto LABEL_18;
  StoreHomeScreenController::_buildProductGrid(v1);
  v2 = 1;
  *((_BYTE *)v1 + 464) = 1;
LABEL_18:
  if ( *(_DWORD *)(*((_DWORD *)v1 + 114) - 12) && !*((_BYTE *)v1 + 466) )
    *((_BYTE *)v1 + 466) = 1;
    MainMenuScreenModel::navigateToPurchaseOfferScreen(
      *((_DWORD *)v1 + 106),
      (const void **)v1 + 114,
      2,
      (int *)&CatalogContentType::DurableOffer);
  return StoreBaseScreenController::tick(v1) | v2;
}


int __fastcall StoreHomeScreenController::addStaticScreenVars(StoreHomeScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  StoreHomeScreenController *v3; // r5@1
  int v4; // r0@1
  int v9; // r6@1
  int v11; // r1@1
  int v13; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$failure_timeout");
  __asm { VMOV.F64        D0, #10.0 }
  v9 = v4;
  __asm { VMOV            R2, R3, D0 }
  Json::Value::Value((Json::Value *)&v13, v11, _R2);
  Json::Value::operator=(v9, (const Json::Value *)&v13);
  Json::Value::~Value((Json::Value *)&v13);
  return StoreBaseScreenController::addStaticScreenVars(v3, v2);
}


void __fastcall StoreHomeScreenController::_registerBindings(StoreHomeScreenController *this)
{
  StoreHomeScreenController::_registerBindings(this);
}


void __fastcall StoreHomeScreenController::_registerEventHandlers(StoreHomeScreenController *this)
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
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  void *v21; // r0@15
  int v22; // r5@16
  _DWORD *v23; // r0@16
  __int64 v24; // r1@16
  void *v25; // r0@18
  int v26; // r5@19
  _DWORD *v27; // r0@19
  __int64 v28; // r1@19
  void *v29; // r0@21
  int v30; // r5@22
  _DWORD *v31; // r0@22
  __int64 v32; // r1@22
  void *v33; // r0@24
  int v34; // r5@25
  _DWORD *v35; // r0@25
  __int64 v36; // r1@25
  void *v37; // r0@27
  unsigned int *v38; // r2@29
  signed int v39; // r1@31
  unsigned int *v40; // r2@33
  signed int v41; // r1@35
  unsigned int *v42; // r2@37
  signed int v43; // r1@39
  unsigned int *v44; // r2@41
  signed int v45; // r1@43
  unsigned int *v46; // r2@45
  signed int v47; // r1@47
  unsigned int *v48; // r2@49
  signed int v49; // r1@51
  unsigned int *v50; // r2@53
  signed int v51; // r1@55
  unsigned int *v52; // r2@57
  signed int v53; // r1@59
  unsigned int *v54; // r2@61
  signed int v55; // r1@63
  _DWORD *v56; // [sp+4h] [bp-ECh]@25
  __int64 v57; // [sp+Ch] [bp-E4h]@25
  int v58; // [sp+18h] [bp-D8h]@25
  _DWORD *v59; // [sp+1Ch] [bp-D4h]@22
  __int64 v60; // [sp+24h] [bp-CCh]@22
  int v61; // [sp+30h] [bp-C0h]@22
  _DWORD *v62; // [sp+34h] [bp-BCh]@19
  __int64 v63; // [sp+3Ch] [bp-B4h]@19
  int v64; // [sp+48h] [bp-A8h]@19
  _DWORD *v65; // [sp+4Ch] [bp-A4h]@16
  __int64 v66; // [sp+54h] [bp-9Ch]@16
  int v67; // [sp+60h] [bp-90h]@16
  _DWORD *v68; // [sp+64h] [bp-8Ch]@13
  __int64 v69; // [sp+6Ch] [bp-84h]@13
  int v70; // [sp+78h] [bp-78h]@13
  _DWORD *v71; // [sp+7Ch] [bp-74h]@10
  __int64 v72; // [sp+84h] [bp-6Ch]@10
  int v73; // [sp+90h] [bp-60h]@10
  _DWORD *v74; // [sp+94h] [bp-5Ch]@7
  __int64 v75; // [sp+9Ch] [bp-54h]@7
  int v76; // [sp+A8h] [bp-48h]@7
  _DWORD *v77; // [sp+ACh] [bp-44h]@4
  __int64 v78; // [sp+B4h] [bp-3Ch]@4
  int v79; // [sp+C0h] [bp-30h]@4
  _DWORD *v80; // [sp+C4h] [bp-2Ch]@1
  __int64 v81; // [sp+CCh] [bp-24h]@1
  int v82; // [sp+D8h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v82, "button.select_featured");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v82);
  v3 = operator new(4u);
  LODWORD(v4) = sub_125C9A0;
  *v3 = v1;
  HIDWORD(v4) = sub_125C738;
  v80 = v3;
  v81 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  v5 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
  {
    v38 = (unsigned int *)(v82 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v79, "button.select_featured_screenshot");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v79);
  v7 = operator new(4u);
  LODWORD(v8) = sub_125CA44;
  *v7 = v1;
  HIDWORD(v8) = sub_125C9D8;
  v77 = v7;
  v78 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v9 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v79 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v76, "button.select_offer");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v76);
  v11 = operator new(4u);
  LODWORD(v12) = sub_125CF24;
  *v11 = v1;
  HIDWORD(v12) = sub_125CBC0;
  v74 = v11;
  v75 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  v13 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v76 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v73, "button.cycle_offer_left");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v73);
  v15 = operator new(4u);
  LODWORD(v16) = sub_125CFCC;
  *v15 = v1;
  HIDWORD(v16) = sub_125CF5C;
  v71 = v15;
  v72 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  v17 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v73 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v70, "button.cycle_offer_right");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v70);
  v19 = operator new(4u);
  LODWORD(v20) = sub_125D084;
  *v19 = v1;
  HIDWORD(v20) = sub_125D004;
  v68 = v19;
  v69 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v68);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  v21 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v70 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v67, "button.skinpacks");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v67);
  v23 = operator new(4u);
  LODWORD(v24) = sub_125D318;
  *v23 = v1;
  HIDWORD(v24) = sub_125D0BC;
  v65 = v23;
  v66 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  v25 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v67 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v64, "button.texturepacks");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v64);
  v27 = operator new(4u);
  LODWORD(v28) = sub_125D5AC;
  *v27 = v1;
  HIDWORD(v28) = sub_125D350;
  v62 = v27;
  v63 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  v29 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v64 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v61, "button.worlds");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v61);
  v31 = operator new(4u);
  LODWORD(v32) = sub_125D840;
  *v31 = v1;
  HIDWORD(v32) = sub_125D5E4;
  v59 = v31;
  v60 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v33 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v61 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v58, "button.mashups");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v58);
  v35 = operator new(4u);
  LODWORD(v36) = sub_125DAD4;
  *v35 = v1;
  HIDWORD(v36) = sub_125D878;
  v56 = v35;
  v57 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  v37 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v58 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
}


int __fastcall StoreHomeScreenController::StoreHomeScreenController(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  int v14; // [sp+0h] [bp-20h]@1
  int v15; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v14 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v15 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
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
  StoreBaseScreenController::StoreBaseScreenController(v3, (int)&v14);
  v8 = v15;
  if ( v15 )
    v9 = (unsigned int *)(v15 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  *(_DWORD *)v3 = &off_26E3910;
  *(_DWORD *)(v3 + 444) = 0;
  *(_DWORD *)(v3 + 448) = 0;
  *(_DWORD *)(v3 + 452) = 0;
  sub_21E8AF4((int *)(v3 + 456), v4);
  *(_DWORD *)(v3 + 460) = 0;
  *(_DWORD *)(v3 + 464) = 0;
  StoreHomeScreenController::_registerEventHandlers((StoreHomeScreenController *)v3);
  StoreHomeScreenController::_registerBindings((StoreHomeScreenController *)v3);
  MainMenuScreenModel::refreshUserInventory(*(MainMenuScreenModel **)(v3 + 424));
  MainMenuScreenModel::getStoreQueries(*(MainMenuScreenModel **)(v3 + 424));
  return v3;
}


char *__fastcall StoreHomeScreenController::_buildProductGrid(StoreHomeScreenController *this)
{
  StoreHomeScreenController *v1; // r4@1
  unsigned int v2; // r5@1
  int v3; // r6@2
  int v4; // r8@3
  char *v5; // r7@4
  signed int v6; // r8@6
  void *v7; // r0@8

  v1 = this;
  *((_BYTE *)this + 465) = 1;
  v2 = MainMenuScreenModel::getNumStoreCatalogCategoryRows(*((MainMenuScreenModel **)this + 106));
  if ( v2 >= 0x20000000 )
    sub_21E5A04("vector::reserve");
  v3 = *((_DWORD *)v1 + 111);
  if ( (*((_DWORD *)v1 + 113) - v3) >> 3 < v2 )
  {
    v4 = *((_DWORD *)v1 + 112);
    if ( v2 )
      v5 = (char *)operator new(8 * v2);
    else
      v5 = 0;
    v6 = v4 - v3;
    if ( v6 )
      _aeabi_memmove4(v5, v3);
    v7 = (void *)*((_DWORD *)v1 + 111);
    if ( v7 )
      operator delete(v7);
    *((_DWORD *)v1 + 111) = v5;
    *((_DWORD *)v1 + 112) = &v5[8 * (v6 >> 3)];
    *((_DWORD *)v1 + 113) = &v5[8 * v2];
  }
  return j_j_j__ZN25StoreHomeScreenController21_constructProductGridEi(v1, v2);
}


int __fastcall StoreHomeScreenController::handleGameEventNotification(int a1, int a2)
{
  if ( (unsigned int)(a2 - 3) <= 1 )
    *(_BYTE *)(a1 + 467) = 1;
  return j_j_j__ZN16ScreenController27handleGameEventNotificationEN2ui21GameEventNotificationE_0(a1);
}


void __fastcall StoreHomeScreenController::onOpen(StoreHomeScreenController *this)
{
  StoreHomeScreenController *v1; // r4@1

  v1 = this;
  if ( !byte_27DD994 )
  {
    MainMenuScreenModel::repopulateWorldTemplates(*((MainMenuScreenModel **)this + 106));
    byte_27DD994 = 1;
  }
  MainMenuScreenModel::checkNewStoreOffersAvailable(*((MainMenuScreenModel **)v1 + 106));
  j_j_j__ZN25StoreBaseScreenController6onOpenEv(v1);
}


void __fastcall StoreHomeScreenController::_registerBindings(StoreHomeScreenController *this)
{
  StoreHomeScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r0@13
  __int64 v4; // r1@13
  __int64 v5; // r1@13
  _DWORD *v6; // r0@17
  __int64 v7; // r1@17
  _DWORD *v8; // r0@19
  __int64 v9; // r1@19
  _DWORD *v10; // r0@21
  __int64 v11; // r1@21
  __int64 v12; // r1@21
  _DWORD *v13; // r0@25
  __int64 v14; // r1@25
  _DWORD *v15; // r0@27
  __int64 v16; // r1@27
  _DWORD *v17; // r0@29
  __int64 v18; // r1@29
  _DWORD *v19; // r0@33
  __int64 v20; // r1@33
  __int64 v21; // r1@33
  _DWORD *v22; // r0@37
  __int64 v23; // r1@37
  __int64 v24; // r1@37
  _DWORD *v25; // r0@41
  __int64 v26; // r1@41
  __int64 v27; // r1@41
  _DWORD *v28; // r0@45
  __int64 v29; // r1@45
  __int64 v30; // r1@45
  _DWORD *v31; // r0@49
  __int64 v32; // r1@49
  __int64 v33; // r1@49
  _DWORD *v34; // r0@53
  __int64 v35; // r1@53
  _DWORD *v36; // r0@55
  __int64 v37; // r1@55
  _DWORD *v38; // r0@57
  __int64 v39; // r1@57
  _DWORD *v40; // r0@63
  __int64 v41; // r1@63
  _DWORD *v42; // r0@65
  __int64 v43; // r1@65
  _DWORD *v44; // r0@67
  __int64 v45; // r1@67
  _DWORD *v46; // r0@71
  __int64 v47; // r1@71
  _DWORD *v48; // r0@73
  __int64 v49; // r1@73
  _DWORD *v50; // r0@75
  __int64 v51; // r1@75
  _DWORD *v52; // r0@77
  __int64 v53; // r1@77
  _DWORD *v54; // r0@85
  __int64 v55; // r1@85
  _DWORD *v56; // r0@87
  __int64 v57; // r1@87
  _DWORD *v58; // r0@89
  __int64 v59; // r1@89
  _DWORD *v60; // r0@91
  __int64 v61; // r1@91
  _DWORD *v62; // r0@93
  __int64 v63; // r1@93
  _DWORD *v64; // r0@95
  __int64 v65; // r1@95
  _DWORD *v66; // r0@97
  __int64 v67; // r1@97
  _DWORD *v68; // r0@99
  __int64 v69; // r1@99
  _DWORD *v70; // r0@101
  __int64 v71; // r1@101
  _DWORD *v72; // r0@103
  __int64 v73; // r1@103
  __int64 v74; // r1@103
  void *v75; // [sp+4h] [bp-47Ch]@103
  __int64 v76; // [sp+Ch] [bp-474h]@103
  _DWORD *v77; // [sp+14h] [bp-46Ch]@103
  __int64 v78; // [sp+1Ch] [bp-464h]@103
  int v79; // [sp+24h] [bp-45Ch]@103
  _DWORD *v80; // [sp+28h] [bp-458h]@101
  __int64 v81; // [sp+30h] [bp-450h]@101
  char v82; // [sp+38h] [bp-448h]@101
  int v83; // [sp+3Ch] [bp-444h]@101
  _DWORD *v84; // [sp+40h] [bp-440h]@99
  __int64 v85; // [sp+48h] [bp-438h]@99
  char v86; // [sp+50h] [bp-430h]@99
  int v87; // [sp+54h] [bp-42Ch]@99
  _DWORD *v88; // [sp+58h] [bp-428h]@97
  __int64 v89; // [sp+60h] [bp-420h]@97
  char v90; // [sp+68h] [bp-418h]@97
  int v91; // [sp+6Ch] [bp-414h]@97
  _DWORD *v92; // [sp+70h] [bp-410h]@95
  __int64 v93; // [sp+78h] [bp-408h]@95
  int v94; // [sp+80h] [bp-400h]@95
  int v95; // [sp+84h] [bp-3FCh]@95
  _DWORD *v96; // [sp+88h] [bp-3F8h]@93
  __int64 v97; // [sp+90h] [bp-3F0h]@93
  int v98; // [sp+98h] [bp-3E8h]@93
  int v99; // [sp+9Ch] [bp-3E4h]@93
  _DWORD *v100; // [sp+A0h] [bp-3E0h]@91
  __int64 v101; // [sp+A8h] [bp-3D8h]@91
  int v102; // [sp+B0h] [bp-3D0h]@91
  int v103; // [sp+B4h] [bp-3CCh]@91
  _DWORD *v104; // [sp+B8h] [bp-3C8h]@89
  __int64 v105; // [sp+C0h] [bp-3C0h]@89
  int v106; // [sp+C8h] [bp-3B8h]@89
  int v107; // [sp+CCh] [bp-3B4h]@89
  _DWORD *v108; // [sp+D0h] [bp-3B0h]@87
  __int64 v109; // [sp+D8h] [bp-3A8h]@87
  int v110; // [sp+E0h] [bp-3A0h]@87
  int v111; // [sp+E4h] [bp-39Ch]@87
  _DWORD *v112; // [sp+E8h] [bp-398h]@85
  __int64 v113; // [sp+F0h] [bp-390h]@85
  int v114; // [sp+F8h] [bp-388h]@85
  int v115; // [sp+FCh] [bp-384h]@85
  void *v116; // [sp+100h] [bp-380h]@83
  void (*v117)(void); // [sp+108h] [bp-378h]@83
  int (__fastcall *v118)(int, int, const char **, int); // [sp+10Ch] [bp-374h]@83
  char v119; // [sp+110h] [bp-370h]@83
  int v120; // [sp+114h] [bp-36Ch]@83
  void *v121; // [sp+118h] [bp-368h]@81
  void (*v122)(void); // [sp+120h] [bp-360h]@81
  void (__fastcall *v123)(int, int, const char **, int); // [sp+124h] [bp-35Ch]@81
  char v124; // [sp+128h] [bp-358h]@81
  int v125; // [sp+12Ch] [bp-354h]@81
  void *v126; // [sp+130h] [bp-350h]@79
  void (*v127)(void); // [sp+138h] [bp-348h]@79
  void (__fastcall *v128)(int, int, const char **, int); // [sp+13Ch] [bp-344h]@79
  int v129; // [sp+140h] [bp-340h]@79
  int v130; // [sp+144h] [bp-33Ch]@79
  _DWORD *v131; // [sp+148h] [bp-338h]@77
  __int64 v132; // [sp+150h] [bp-330h]@77
  int v133; // [sp+158h] [bp-328h]@77
  int v134; // [sp+15Ch] [bp-324h]@77
  _DWORD *v135; // [sp+160h] [bp-320h]@75
  __int64 v136; // [sp+168h] [bp-318h]@75
  char v137; // [sp+170h] [bp-310h]@75
  int v138; // [sp+174h] [bp-30Ch]@75
  _DWORD *v139; // [sp+178h] [bp-308h]@73
  __int64 v140; // [sp+180h] [bp-300h]@73
  int v141; // [sp+188h] [bp-2F8h]@73
  int v142; // [sp+18Ch] [bp-2F4h]@73
  _DWORD *v143; // [sp+190h] [bp-2F0h]@71
  __int64 v144; // [sp+198h] [bp-2E8h]@71
  int v145; // [sp+1A0h] [bp-2E0h]@71
  int v146; // [sp+1A4h] [bp-2DCh]@71
  void *v147; // [sp+1A8h] [bp-2D8h]@69
  void (*v148)(void); // [sp+1B0h] [bp-2D0h]@69
  void (__fastcall *v149)(int, int, const char **, int); // [sp+1B4h] [bp-2CCh]@69
  int v150; // [sp+1B8h] [bp-2C8h]@69
  int v151; // [sp+1BCh] [bp-2C4h]@69
  _DWORD *v152; // [sp+1C0h] [bp-2C0h]@67
  __int64 v153; // [sp+1C8h] [bp-2B8h]@67
  char v154; // [sp+1D0h] [bp-2B0h]@67
  int v155; // [sp+1D4h] [bp-2ACh]@67
  _DWORD *v156; // [sp+1D8h] [bp-2A8h]@65
  __int64 v157; // [sp+1E0h] [bp-2A0h]@65
  char v158; // [sp+1E8h] [bp-298h]@65
  int v159; // [sp+1ECh] [bp-294h]@65
  _DWORD *v160; // [sp+1F0h] [bp-290h]@63
  __int64 v161; // [sp+1F8h] [bp-288h]@63
  int v162; // [sp+200h] [bp-280h]@63
  int v163; // [sp+204h] [bp-27Ch]@63
  void *v164; // [sp+208h] [bp-278h]@61
  void (*v165)(void); // [sp+210h] [bp-270h]@61
  void (__fastcall *v166)(int, int, const char **, int); // [sp+214h] [bp-26Ch]@61
  char v167; // [sp+218h] [bp-268h]@61
  char v168; // [sp+21Ch] [bp-264h]@61
  void *v169; // [sp+220h] [bp-260h]@59
  void (*v170)(void); // [sp+228h] [bp-258h]@59
  void (__fastcall *v171)(int, int, const char **, int); // [sp+22Ch] [bp-254h]@59
  char v172; // [sp+230h] [bp-250h]@59
  char v173; // [sp+234h] [bp-24Ch]@59
  _DWORD *v174; // [sp+238h] [bp-248h]@57
  __int64 v175; // [sp+240h] [bp-240h]@57
  char v176; // [sp+248h] [bp-238h]@57
  char v177; // [sp+24Ch] [bp-234h]@57
  _DWORD *v178; // [sp+250h] [bp-230h]@55
  __int64 v179; // [sp+258h] [bp-228h]@55
  char v180; // [sp+260h] [bp-220h]@55
  char v181; // [sp+264h] [bp-21Ch]@55
  _DWORD *v182; // [sp+268h] [bp-218h]@53
  __int64 v183; // [sp+270h] [bp-210h]@53
  char v184; // [sp+278h] [bp-208h]@53
  char v185; // [sp+27Ch] [bp-204h]@53
  void *v186; // [sp+280h] [bp-200h]@49
  __int64 v187; // [sp+288h] [bp-1F8h]@49
  _DWORD *v188; // [sp+290h] [bp-1F0h]@49
  __int64 v189; // [sp+298h] [bp-1E8h]@49
  int v190; // [sp+2A0h] [bp-1E0h]@49
  void *v191; // [sp+2A4h] [bp-1DCh]@45
  __int64 v192; // [sp+2ACh] [bp-1D4h]@45
  _DWORD *v193; // [sp+2B4h] [bp-1CCh]@45
  __int64 v194; // [sp+2BCh] [bp-1C4h]@45
  int v195; // [sp+2C4h] [bp-1BCh]@45
  void *v196; // [sp+2C8h] [bp-1B8h]@41
  __int64 v197; // [sp+2D0h] [bp-1B0h]@41
  _DWORD *v198; // [sp+2D8h] [bp-1A8h]@41
  __int64 v199; // [sp+2E0h] [bp-1A0h]@41
  int v200; // [sp+2E8h] [bp-198h]@41
  void *v201; // [sp+2ECh] [bp-194h]@37
  __int64 v202; // [sp+2F4h] [bp-18Ch]@37
  _DWORD *v203; // [sp+2FCh] [bp-184h]@37
  __int64 v204; // [sp+304h] [bp-17Ch]@37
  int v205; // [sp+30Ch] [bp-174h]@37
  void *v206; // [sp+310h] [bp-170h]@33
  __int64 v207; // [sp+318h] [bp-168h]@33
  _DWORD *v208; // [sp+320h] [bp-160h]@33
  __int64 v209; // [sp+328h] [bp-158h]@33
  int v210; // [sp+330h] [bp-150h]@33
  void *v211; // [sp+334h] [bp-14Ch]@31
  void (*v212)(void); // [sp+33Ch] [bp-144h]@31
  void (__fastcall *v213)(int, const char **, int); // [sp+340h] [bp-140h]@31
  int v214; // [sp+344h] [bp-13Ch]@31
  _DWORD *v215; // [sp+348h] [bp-138h]@29
  __int64 v216; // [sp+350h] [bp-130h]@29
  int v217; // [sp+358h] [bp-128h]@29
  _DWORD *v218; // [sp+35Ch] [bp-124h]@27
  __int64 v219; // [sp+364h] [bp-11Ch]@27
  int v220; // [sp+36Ch] [bp-114h]@27
  _DWORD *v221; // [sp+370h] [bp-110h]@25
  __int64 v222; // [sp+378h] [bp-108h]@25
  int v223; // [sp+380h] [bp-100h]@25
  void *v224; // [sp+384h] [bp-FCh]@21
  __int64 v225; // [sp+38Ch] [bp-F4h]@21
  _DWORD *v226; // [sp+394h] [bp-ECh]@21
  __int64 v227; // [sp+39Ch] [bp-E4h]@21
  int v228; // [sp+3A4h] [bp-DCh]@21
  int v229; // [sp+3A8h] [bp-D8h]@21
  _DWORD *v230; // [sp+3ACh] [bp-D4h]@19
  __int64 v231; // [sp+3B4h] [bp-CCh]@19
  char v232; // [sp+3BCh] [bp-C4h]@19
  int v233; // [sp+3C0h] [bp-C0h]@19
  _DWORD *v234; // [sp+3C4h] [bp-BCh]@17
  __int64 v235; // [sp+3CCh] [bp-B4h]@17
  char v236; // [sp+3D4h] [bp-ACh]@17
  int v237; // [sp+3D8h] [bp-A8h]@17
  void *v238; // [sp+3DCh] [bp-A4h]@13
  __int64 v239; // [sp+3E4h] [bp-9Ch]@13
  _DWORD *v240; // [sp+3ECh] [bp-94h]@13
  __int64 v241; // [sp+3F4h] [bp-8Ch]@13
  int v242; // [sp+3FCh] [bp-84h]@13
  int v243; // [sp+400h] [bp-80h]@13
  void *v244; // [sp+404h] [bp-7Ch]@9
  void (*v245)(void); // [sp+40Ch] [bp-74h]@9
  signed int (*v246)(); // [sp+410h] [bp-70h]@9
  void *v247; // [sp+414h] [bp-6Ch]@9
  void (*v248)(void); // [sp+41Ch] [bp-64h]@9
  _QWORD *(__fastcall *v249)(_QWORD *); // [sp+420h] [bp-60h]@9
  int v250; // [sp+424h] [bp-5Ch]@9
  void *v251; // [sp+428h] [bp-58h]@5
  void (*v252)(void); // [sp+430h] [bp-50h]@5
  signed int (*v253)(); // [sp+434h] [bp-4Ch]@5
  void *v254; // [sp+438h] [bp-48h]@5
  void (*v255)(void); // [sp+440h] [bp-40h]@5
  _QWORD *(__fastcall *v256)(_QWORD *); // [sp+444h] [bp-3Ch]@5
  int v257; // [sp+448h] [bp-38h]@5
  void *v258; // [sp+44Ch] [bp-34h]@1
  void (*v259)(void); // [sp+454h] [bp-2Ch]@1
  signed int (*v260)(); // [sp+458h] [bp-28h]@1
  _DWORD *v261; // [sp+45Ch] [bp-24h]@1
  void (*v262)(void); // [sp+464h] [bp-1Ch]@1
  int (__fastcall *v263)(int, int); // [sp+468h] [bp-18h]@1
  char v264; // [sp+46Ch] [bp-14h]@1

  v1 = this;
  StringHash::StringHash<char [26]>(&v264, (int)"#category_grid_dimensions");
  v2 = operator new(4u);
  *v2 = v1;
  v261 = v2;
  v263 = sub_125DB0A;
  v262 = (void (*)(void))sub_125DB1E;
  v258 = operator new(1u);
  v260 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v259 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize((int)v1, (int *)&v264, (int)&v261, (int)&v258);
  if ( v259 )
    v259();
  if ( v262 )
    v262();
  StringHash::StringHash<char [23]>(&v257, (int)"#offer_grid_dimensions");
  v254 = operator new(1u);
  v256 = sub_125DB54;
  v255 = (void (*)(void))sub_125DB5E;
  v251 = operator new(1u);
  v253 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v252 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize((int)v1, &v257, (int)&v254, (int)&v251);
  if ( v252 )
    v252();
  if ( v255 )
    v255();
  StringHash::StringHash<char [30]>(&v250, (int)"#featured_item_grid_dimension");
  v247 = operator new(1u);
  v249 = sub_125DB8C;
  v248 = (void (*)(void))sub_125DB96;
  v244 = operator new(1u);
  v246 = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v245 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  ScreenController::bindGridSize((int)v1, &v250, (int)&v247, (int)&v244);
  if ( v245 )
    v245();
  if ( v248 )
    v248();
  v242 = 920915909;
  v243 = 1827038298;
  v3 = operator new(4u);
  LODWORD(v4) = sub_125DBD4;
  *v3 = v1;
  HIDWORD(v4) = sub_125DBC4;
  v240 = v3;
  v241 = v4;
  v238 = operator new(1u);
  LODWORD(v5) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v5) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v239 = v5;
  ScreenController::bindStringForCollection((int)v1, &v243, &v242, (int)&v240, (int)&v238);
  if ( (_DWORD)v239 )
    ((void (*)(void))v239)();
  if ( (_DWORD)v241 )
    ((void (*)(void))v241)();
  v237 = 1827038298;
  StringHash::StringHash<char [32]>(&v236, (int)"#cycle_pack_left_button_enabled");
  v6 = operator new(4u);
  LODWORD(v7) = sub_125DC4C;
  *v6 = v1;
  HIDWORD(v7) = sub_125DC0A;
  v234 = v6;
  v235 = v7;
  ScreenController::bindForCollection((int)v1, &v237, &v236, (int)&v234);
  if ( (_DWORD)v235 )
    ((void (*)(void))v235)();
  v233 = 1827038298;
  StringHash::StringHash<char [33]>(&v232, (int)"#cycle_pack_right_button_enabled");
  v8 = operator new(4u);
  LODWORD(v9) = sub_125DCD4;
  *v8 = v1;
  HIDWORD(v9) = sub_125DC82;
  v230 = v8;
  v231 = v9;
  ScreenController::bindForCollection((int)v1, &v233, &v232, (int)&v230);
  if ( (_DWORD)v231 )
    ((void (*)(void))v231)();
  v229 = 1827038298;
  StringHash::StringHash<char [31]>(&v228, (int)"#offer_download_progress_label");
  v10 = operator new(4u);
  LODWORD(v11) = sub_125DD50;
  *v10 = v1;
  HIDWORD(v11) = sub_125DD0C;
  v226 = v10;
  v227 = v11;
  v224 = operator new(1u);
  LODWORD(v12) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v12) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v225 = v12;
  ScreenController::bindStringForCollection((int)v1, &v229, &v228, (int)&v226, (int)&v224);
  if ( (_DWORD)v225 )
    ((void (*)(void))v225)();
  if ( (_DWORD)v227 )
    ((void (*)(void))v227)();
  StringHash::StringHash<char [23]>(&v223, (int)"#featured_texture_path");
  v13 = operator new(4u);
  LODWORD(v14) = sub_125DDBA;
  *v13 = v1;
  HIDWORD(v14) = sub_125DD86;
  v221 = v13;
  v222 = v14;
  ScreenController::bindForGlobal((int)v1, &v223, (int)&v221);
  if ( (_DWORD)v222 )
    ((void (*)(void))v222)();
  StringHash::StringHash<char [30]>(&v220, (int)"#featured_texture_file_system");
  v15 = operator new(4u);
  LODWORD(v16) = sub_125DEE0;
  *v15 = v1;
  HIDWORD(v16) = sub_125DDF0;
  v218 = v15;
  v219 = v16;
  ScreenController::bindForGlobal((int)v1, &v220, (int)&v218);
  if ( (_DWORD)v219 )
    ((void (*)(void))v219)();
  StringHash::StringHash<char [42]>(&v217, (int)"#featured_item_does_not_meet_requirements");
  v17 = operator new(4u);
  LODWORD(v18) = sub_125DF6A;
  *v17 = v1;
  HIDWORD(v18) = sub_125DF16;
  v215 = v17;
  v216 = v18;
  ScreenController::bindForGlobal((int)v1, &v217, (int)&v215);
  if ( (_DWORD)v216 )
    ((void (*)(void))v216)();
  StringHash::StringHash<char [25]>(&v214, (int)"#button_back_description");
  v211 = operator new(1u);
  v212 = (void (*)(void))sub_125DFB8;
  v213 = sub_125DFA0;
  ScreenController::bindForGlobal((int)v1, &v214, (int)&v211);
  if ( v212 )
    v212();
  v210 = -1031248831;
  v19 = operator new(4u);
  LODWORD(v20) = sub_125E010;
  *v19 = v1;
  HIDWORD(v20) = sub_125DFE6;
  v208 = v19;
  v209 = v20;
  v206 = operator new(1u);
  LODWORD(v21) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v21) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v207 = v21;
  ScreenController::bindString((int)v1, &v210, (int)&v208, (int)&v206);
  if ( (_DWORD)v207 )
    ((void (*)(void))v207)();
  if ( (_DWORD)v209 )
    ((void (*)(void))v209)();
  v205 = 1682186504;
  v22 = operator new(4u);
  LODWORD(v23) = sub_125E070;
  *v22 = v1;
  HIDWORD(v23) = sub_125E046;
  v203 = v22;
  v204 = v23;
  v201 = operator new(1u);
  LODWORD(v24) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v24) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v202 = v24;
  ScreenController::bindString((int)v1, &v205, (int)&v203, (int)&v201);
  if ( (_DWORD)v202 )
    ((void (*)(void))v202)();
  if ( (_DWORD)v204 )
    ((void (*)(void))v204)();
  v200 = 1478134627;
  v25 = operator new(4u);
  LODWORD(v26) = sub_125E0CC;
  *v25 = v1;
  HIDWORD(v26) = sub_125E0A6;
  v198 = v25;
  v199 = v26;
  v196 = operator new(1u);
  LODWORD(v27) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v27) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v197 = v27;
  ScreenController::bindString((int)v1, &v200, (int)&v198, (int)&v196);
  if ( (_DWORD)v197 )
    ((void (*)(void))v197)();
  if ( (_DWORD)v199 )
    ((void (*)(void))v199)();
  StringHash::StringHash<char [23]>(&v195, (int)"#featured_icon_visible");
  v28 = operator new(4u);
  LODWORD(v29) = sub_125E124;
  *v28 = v1;
  HIDWORD(v29) = sub_125E102;
  v193 = v28;
  v194 = v29;
  v191 = operator new(1u);
  LODWORD(v30) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v30) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v192 = v30;
  ScreenController::bindBool((int)v1, &v195, (int)&v193, (int)&v191);
  if ( (_DWORD)v192 )
    ((void (*)(void))v192)();
  if ( (_DWORD)v194 )
    ((void (*)(void))v194)();
  v190 = -505843338;
  v31 = operator new(4u);
  LODWORD(v32) = sub_125E17E;
  *v31 = v1;
  HIDWORD(v32) = sub_125E15A;
  v188 = v31;
  v189 = v32;
  v186 = operator new(1u);
  LODWORD(v33) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v33) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v187 = v33;
  ScreenController::bindBool((int)v1, &v190, (int)&v188, (int)&v186);
  if ( (_DWORD)v187 )
    ((void (*)(void))v187)();
  if ( (_DWORD)v189 )
    ((void (*)(void))v189)();
  StringHash::StringHash<char [25]>(&v185, (int)"featured_item_collection");
  StringHash::StringHash<char [28]>(&v184, (int)"#featured_item_texture_path");
  v34 = operator new(4u);
  LODWORD(v35) = sub_125E1E4;
  *v34 = v1;
  HIDWORD(v35) = sub_125E1B4;
  v182 = v34;
  v183 = v35;
  ScreenController::bindForCollection((int)v1, &v185, &v184, (int)&v182);
  if ( (_DWORD)v183 )
    ((void (*)(void))v183)();
  StringHash::StringHash<char [25]>(&v181, (int)"featured_item_collection");
  StringHash::StringHash<char [35]>(&v180, (int)"#featured_item_texture_file_system");
  v36 = operator new(4u);
  LODWORD(v37) = sub_125E308;
  *v36 = v1;
  HIDWORD(v37) = sub_125E21C;
  v178 = v36;
  v179 = v37;
  ScreenController::bindForCollection((int)v1, &v181, &v180, (int)&v178);
  if ( (_DWORD)v179 )
    ((void (*)(void))v179)();
  StringHash::StringHash<char [25]>(&v177, (int)"featured_item_collection");
  StringHash::StringHash<char [33]>(&v176, (int)"#item_does_not_meet_requirements");
  v38 = operator new(4u);
  LODWORD(v39) = sub_125E38E;
  *v38 = v1;
  HIDWORD(v39) = sub_125E33E;
  v174 = v38;
  v175 = v39;
  ScreenController::bindForCollection((int)v1, &v177, &v176, (int)&v174);
  if ( (_DWORD)v175 )
    ((void (*)(void))v175)();
  StringHash::StringHash<char [25]>(&v173, (int)"featured_item_collection");
  StringHash::StringHash<char [23]>(&v172, (int)"#featured_grid_item_id");
  v169 = operator new(1u);
  v170 = (void (*)(void))sub_125E4E4;
  v171 = sub_125E3C4;
  ScreenController::bindForCollection((int)v1, &v173, &v172, (int)&v169);
  if ( v170 )
    v170();
  StringHash::StringHash<char [25]>(&v168, (int)"featured_item_collection");
  StringHash::StringHash<char [34]>(&v167, (int)"#featured_grid_item_override_left");
  v164 = operator new(1u);
  v165 = (void (*)(void))sub_125E634;
  v166 = sub_125E514;
  ScreenController::bindForCollection((int)v1, &v168, &v167, (int)&v164);
  if ( v165 )
    v165();
  v162 = -556378146;
  v163 = 111054607;
  v40 = operator new(4u);
  LODWORD(v41) = sub_125E714;
  *v40 = v1;
  HIDWORD(v41) = sub_125E664;
  v160 = v40;
  v161 = v41;
  ScreenController::bindForCollection((int)v1, &v163, &v162, (int)&v160);
  if ( (_DWORD)v161 )
    ((void (*)(void))v161)();
  v159 = 111054607;
  StringHash::StringHash<char [27]>(&v158, (int)"#offer_texture_file_system");
  v42 = operator new(4u);
  LODWORD(v43) = sub_125E8B8;
  *v42 = v1;
  HIDWORD(v43) = sub_125E74C;
  v156 = v42;
  v157 = v43;
  ScreenController::bindForCollection((int)v1, &v159, &v158, (int)&v156);
  if ( (_DWORD)v157 )
    ((void (*)(void))v157)();
  v155 = 111054607;
  StringHash::StringHash<char [33]>(&v154, (int)"#item_does_not_meet_requirements");
  v44 = operator new(4u);
  LODWORD(v45) = sub_125E9C0;
  *v44 = v1;
  HIDWORD(v45) = sub_125E8F0;
  v152 = v44;
  v153 = v45;
  ScreenController::bindForCollection((int)v1, &v155, &v154, (int)&v152);
  if ( (_DWORD)v153 )
    ((void (*)(void))v153)();
  v151 = 111054607;
  v150 = -1391444202;
  v147 = operator new(1u);
  v148 = (void (*)(void))sub_125EA10;
  v149 = sub_125E9F8;
  ScreenController::bindForCollection((int)v1, &v151, &v150, (int)&v147);
  if ( v148 )
    v148();
  v146 = 111054607;
  v145 = 348026759;
  v46 = operator new(4u);
  LODWORD(v47) = sub_125ED88;
  *v46 = v1;
  HIDWORD(v47) = sub_125EC30;
  v143 = v46;
  v144 = v47;
  ScreenController::bindForCollection((int)v1, &v146, &v145, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  v142 = 111054607;
  v141 = -1542016824;
  v48 = operator new(4u);
  LODWORD(v49) = sub_125EE7C;
  *v48 = v1;
  HIDWORD(v49) = sub_125EDC0;
  v139 = v48;
  v140 = v49;
  ScreenController::bindForCollection((int)v1, &v142, &v141, (int)&v139);
  if ( (_DWORD)v140 )
    ((void (*)(void))v140)();
  v138 = 111054607;
  StringHash::StringHash<char [24]>(&v137, (int)"#new_offer_icon_visible");
  v50 = operator new(4u);
  LODWORD(v51) = sub_125EF70;
  *v50 = v1;
  HIDWORD(v51) = sub_125EEB4;
  v135 = v50;
  v136 = v51;
  ScreenController::bindForCollection((int)v1, &v138, &v137, (int)&v135);
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  v134 = 111054607;
  v133 = -720512063;
  v52 = operator new(4u);
  LODWORD(v53) = sub_125F064;
  *v52 = v1;
  HIDWORD(v53) = sub_125EFA8;
  v131 = v52;
  v132 = v53;
  ScreenController::bindForCollection((int)v1, &v134, &v133, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  v130 = 111054607;
  v129 = 1275627040;
  v126 = operator new(1u);
  v127 = (void (*)(void))sub_125F0B4;
  v128 = sub_125F09C;
  ScreenController::bindForCollection((int)v1, &v130, &v129, (int)&v126);
  if ( v127 )
    v127();
  v125 = 111054607;
  StringHash::StringHash<char [27]>(&v124, (int)"#offer_markdown_percentage");
  v121 = operator new(1u);
  v122 = (void (*)(void))sub_125F0FC;
  v123 = sub_125F0E4;
  ScreenController::bindForCollection((int)v1, &v125, &v124, (int)&v121);
  if ( v122 )
    v122();
  v120 = 111054607;
  StringHash::StringHash<char [24]>(&v119, (int)"#offer_markdown_visible");
  v116 = operator new(1u);
  v117 = (void (*)(void))sub_125F33C;
  v118 = sub_125F31C;
  ScreenController::bindForCollection((int)v1, &v120, &v119, (int)&v116);
  if ( v117 )
    v117();
  v115 = 111054607;
  v114 = -1465380146;
  v54 = operator new(4u);
  LODWORD(v55) = sub_125F424;
  *v54 = v1;
  HIDWORD(v55) = sub_125F36C;
  v112 = v54;
  v113 = v55;
  ScreenController::bindForCollection((int)v1, &v115, &v114, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  v111 = 111054607;
  v110 = 472467656;
  v56 = operator new(4u);
  LODWORD(v57) = sub_125F708;
  *v56 = v1;
  HIDWORD(v57) = sub_125F45C;
  v108 = v56;
  v109 = v57;
  ScreenController::bindForCollection((int)v1, &v111, &v110, (int)&v108);
  if ( (_DWORD)v109 )
    ((void (*)(void))v109)();
  v107 = 111054607;
  v106 = -562286346;
  v58 = operator new(4u);
  LODWORD(v59) = sub_125F9DC;
  *v58 = v1;
  HIDWORD(v59) = sub_125F740;
  v104 = v58;
  v105 = v59;
  ScreenController::bindForCollection((int)v1, &v107, &v106, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  v103 = 111054607;
  v102 = 154761561;
  v60 = operator new(4u);
  LODWORD(v61) = sub_125FAC8;
  *v60 = v1;
  HIDWORD(v61) = sub_125FA14;
  v100 = v60;
  v101 = v61;
  ScreenController::bindForCollection((int)v1, &v103, &v102, (int)&v100);
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  v99 = 111054607;
  v98 = 290079817;
  v62 = operator new(4u);
  LODWORD(v63) = sub_125FBB4;
  *v62 = v1;
  HIDWORD(v63) = sub_125FB00;
  v96 = v62;
  v97 = v63;
  ScreenController::bindForCollection((int)v1, &v99, &v98, (int)&v96);
  if ( (_DWORD)v97 )
    ((void (*)(void))v97)();
  v95 = 111054607;
  v94 = 1118127483;
  v64 = operator new(4u);
  LODWORD(v65) = sub_125FFBC;
  *v64 = v1;
  HIDWORD(v65) = sub_125FBEC;
  v92 = v64;
  v93 = v65;
  ScreenController::bindForCollection((int)v1, &v95, &v94, (int)&v92);
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  v91 = 111054607;
  StringHash::StringHash<char [41]>(&v90, (int)"#left_most_grid_item_focus_override_left");
  v66 = operator new(4u);
  LODWORD(v67) = sub_126022C;
  *v66 = v1;
  HIDWORD(v67) = sub_125FFF4;
  v88 = v66;
  v89 = v67;
  ScreenController::bindForCollection((int)v1, &v91, &v90, (int)&v88);
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  v87 = 111054607;
  StringHash::StringHash<char [43]>(&v86, (int)"#right_most_grid_item_focus_override_right");
  v68 = operator new(4u);
  LODWORD(v69) = sub_12604C4;
  *v68 = v1;
  HIDWORD(v69) = sub_1260264;
  v84 = v68;
  v85 = v69;
  ScreenController::bindForCollection((int)v1, &v87, &v86, (int)&v84);
  if ( (_DWORD)v85 )
    ((void (*)(void))v85)();
  v83 = 111054607;
  StringHash::StringHash<char [33]>(&v82, (int)"#offer_grid_item_button_focus_id");
  v70 = operator new(4u);
  LODWORD(v71) = sub_126068C;
  *v70 = v1;
  HIDWORD(v71) = sub_12604FC;
  v80 = v70;
  v81 = v71;
  ScreenController::bindForCollection((int)v1, &v83, &v82, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  v79 = -1792070993;
  v72 = operator new(4u);
  LODWORD(v73) = sub_12606D4;
  *v72 = v1;
  HIDWORD(v73) = sub_12606C2;
  v77 = v72;
  v78 = v73;
  v75 = operator new(1u);
  LODWORD(v74) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v74) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v76 = v74;
  ScreenController::bindBool((int)v1, &v79, (int)&v77, (int)&v75);
  if ( (_DWORD)v76 )
    ((void (*)(void))v76)();
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
}


int __fastcall StoreHomeScreenController::_getStoreCatalogItem(StoreHomeScreenController *this, int a2, int a3)
{
  __int64 v3; // kr00_8@2
  int v4; // r2@3
  int result; // r0@4

  if ( a2 < 0
    || (v3 = *(_QWORD *)((char *)this + 444), (HIDWORD(v3) - (signed int)v3) >> 3 <= a2)
    || (v4 = a3 + *(_DWORD *)(v3 + 8 * a2), v4 >= *(_DWORD *)(v3 + 8 * a2 + 4)) )
  {
    result = j_j_j__ZN19MainMenuScreenModel19getStoreCatalogItemEii(*((MainMenuScreenModel **)this + 106), -1, -1);
  }
  else
    result = j_j_j__ZN19MainMenuScreenModel19getStoreCatalogItemEii(*((MainMenuScreenModel **)this + 106), a2, v4);
  return result;
}


char *__fastcall StoreHomeScreenController::_constructProductGrid(StoreHomeScreenController *this, int a2)
{
  StoreHomeScreenController *v2; // r5@1
  int v3; // r4@1
  char *result; // r0@1
  __int64 v5; // r8@2
  int v6; // r6@2
  __int64 v7; // r0@3
  void *v8; // r11@5
  char *v9; // r7@5
  unsigned int v10; // r2@5
  unsigned int v11; // r1@7
  unsigned int v12; // r4@7
  char *v13; // r10@14
  int v14; // [sp+0h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  result = (char *)*((_DWORD *)this + 111);
  v14 = a2;
  *((_DWORD *)v2 + 112) = result;
  if ( a2 >= 1 )
  {
    LODWORD(v5) = 0;
    v6 = 0;
    do
    {
      HIDWORD(v5) = MainMenuScreenModel::getNumStoreCatalogInCategoryRow(*((MainMenuScreenModel **)v2 + 106), v6);
      v7 = *((_QWORD *)v2 + 56);
      if ( (_DWORD)v7 == HIDWORD(v7) )
      {
        v8 = (void *)*((_DWORD *)v2 + 111);
        v9 = 0;
        v10 = ((signed int)v7 - (signed int)v8) >> 3;
        if ( !v10 )
          v10 = 1;
        HIDWORD(v7) = v10 + (((signed int)v7 - (signed int)v8) >> 3);
        v12 = v10 + (((signed int)v7 - (signed int)v8) >> 3);
        if ( 0 != HIDWORD(v7) >> 29 )
          v12 = 0x1FFFFFFF;
        if ( v11 < v10 )
        if ( v12 )
        {
          if ( v12 >= 0x20000000 )
            sub_21E57F4();
          v9 = (char *)operator new(8 * v12);
          LODWORD(v7) = *(_QWORD *)((char *)v2 + 444) >> 32;
          v8 = (void *)*(_QWORD *)((char *)v2 + 444);
        }
        v13 = &v9[v7 - (_DWORD)v8];
        LODWORD(v5) = 0;
        *(_QWORD *)v13 = __PAIR__(HIDWORD(v5), 0);
        if ( ((signed int)v7 - (signed int)v8) >> 3 )
          _aeabi_memmove4(v9, v8);
        if ( v8 )
          operator delete(v8);
        *((_DWORD *)v2 + 111) = v9;
        *((_DWORD *)v2 + 112) = v13 + 8;
        result = &v9[8 * v12];
        v3 = v14;
        *((_DWORD *)v2 + 113) = result;
      }
      else
        *(_QWORD *)v7 = v5;
        result = (char *)(*((_DWORD *)v2 + 112) + 8);
        *((_DWORD *)v2 + 112) = result;
      ++v6;
    }
    while ( v6 < v3 );
  }
  return result;
}


StoreHomeScreenController *__fastcall StoreHomeScreenController::~StoreHomeScreenController(StoreHomeScreenController *this)
{
  StoreHomeScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E3910;
  v2 = *((_DWORD *)this + 114);
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
  v4 = (void *)*((_DWORD *)v1 + 111);
  if ( v4 )
    operator delete(v4);
  StoreBaseScreenController::~StoreBaseScreenController(v1);
  return v1;
}


void __fastcall StoreHomeScreenController::_registerEventHandlers(StoreHomeScreenController *this)
{
  StoreHomeScreenController::_registerEventHandlers(this);
}


void __fastcall StoreHomeScreenController::~StoreHomeScreenController(StoreHomeScreenController *this)
{
  StoreHomeScreenController::~StoreHomeScreenController(this);
}
