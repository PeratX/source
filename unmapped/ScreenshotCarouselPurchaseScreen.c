

void __fastcall ScreenshotCarouselPurchaseScreen::_registerEventHandlers(ScreenshotCarouselPurchaseScreen *this)
{
  ScreenshotCarouselPurchaseScreen::_registerEventHandlers(this);
}


void __fastcall ScreenshotCarouselPurchaseScreen::~ScreenshotCarouselPurchaseScreen(ScreenshotCarouselPurchaseScreen *this)
{
  ScreenshotCarouselPurchaseScreen::~ScreenshotCarouselPurchaseScreen(this);
}


void __fastcall ScreenshotCarouselPurchaseScreen::~ScreenshotCarouselPurchaseScreen(ScreenshotCarouselPurchaseScreen *this)
{
  PurchaseEnabledScreenController *v1; // r0@1

  v1 = PurchaseEnabledScreenController::~PurchaseEnabledScreenController(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall ScreenshotCarouselPurchaseScreen::ScreenshotCarouselPurchaseScreen(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  int v7; // r10@1
  int v8; // r0@1
  _DWORD *v9; // r6@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@4
  int v12; // r5@7
  unsigned int *v13; // r1@8
  unsigned int v14; // r0@10
  unsigned int *v15; // r7@14
  unsigned int v16; // r0@16
  int *v17; // r0@21
  int v19; // [sp+0h] [bp-28h]@1
  int v20; // [sp+4h] [bp-24h]@1

  v6 = a1;
  v19 = *(_DWORD *)a2;
  v7 = a4;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = a3;
  v20 = v8;
  if ( v8 )
  {
    v10 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  }
  PurchaseEnabledScreenController::PurchaseEnabledScreenController(v6, (int)&v19, (int *)&Util::EMPTY_STRING);
  v12 = v20;
  if ( v20 )
    v13 = (unsigned int *)(v20 + 4);
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
  *(_DWORD *)v6 = &off_26D7C6C;
  *(_DWORD *)(v6 + 452) = *v9;
  *(_DWORD *)(v6 + 456) = v7;
  *(_DWORD *)(v6 + 460) = a5;
  *(_DWORD *)(v6 + 464) = a6;
  *(_DWORD *)(v6 + 468) = 0;
  *(_DWORD *)(v6 + 472) = 0;
  v17 = (int *)StoreCatalogItemModel::getProductId((StoreCatalogItemModel *)(v6 + 452));
  EntityInteraction::setInteractText((int *)(v6 + 444), v17);
  MainMenuScreenModel::setStoreCatalogItemViewed(
    *(MainMenuScreenModel **)(v6 + 424),
    (const StoreCatalogItemModel *)(v6 + 452));
  ScreenshotCarouselPurchaseScreen::_registerEventHandlers((ScreenshotCarouselPurchaseScreen *)v6);
  ScreenshotCarouselPurchaseScreen::_registerBindings((ScreenshotCarouselPurchaseScreen *)v6);
  return v6;
}


int __fastcall ScreenshotCarouselPurchaseScreen::handleGameEventNotification(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = ScreenController::handleGameEventNotification(a1);
  if ( v2 == 14 )
    result |= 1u;
  return result;
}


void __fastcall ScreenshotCarouselPurchaseScreen::_registerEventHandlers(ScreenshotCarouselPurchaseScreen *this)
{
  ScreenshotCarouselPurchaseScreen *v1; // r4@1
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
  int v22; // r0@16
  bool v23; // zf@16
  int v24; // r5@19
  _DWORD *v25; // r0@19
  __int64 v26; // r1@19
  void *v27; // r0@21
  unsigned int *v28; // r2@23
  signed int v29; // r1@25
  unsigned int *v30; // r2@27
  signed int v31; // r1@29
  unsigned int *v32; // r2@31
  signed int v33; // r1@33
  unsigned int *v34; // r2@35
  signed int v35; // r1@37
  unsigned int *v36; // r2@39
  signed int v37; // r1@41
  unsigned int *v38; // r2@63
  signed int v39; // r1@65
  _DWORD *v40; // [sp+4h] [bp-A4h]@19
  __int64 v41; // [sp+Ch] [bp-9Ch]@19
  int v42; // [sp+18h] [bp-90h]@19
  _DWORD *v43; // [sp+1Ch] [bp-8Ch]@13
  __int64 v44; // [sp+24h] [bp-84h]@13
  int v45; // [sp+30h] [bp-78h]@13
  _DWORD *v46; // [sp+34h] [bp-74h]@10
  __int64 v47; // [sp+3Ch] [bp-6Ch]@10
  int v48; // [sp+48h] [bp-60h]@10
  _DWORD *v49; // [sp+4Ch] [bp-5Ch]@7
  __int64 v50; // [sp+54h] [bp-54h]@7
  int v51; // [sp+60h] [bp-48h]@7
  _DWORD *v52; // [sp+64h] [bp-44h]@4
  __int64 v53; // [sp+6Ch] [bp-3Ch]@4
  int v54; // [sp+78h] [bp-30h]@4
  _DWORD *v55; // [sp+7Ch] [bp-2Ch]@1
  __int64 v56; // [sp+84h] [bp-24h]@1
  int v57; // [sp+90h] [bp-18h]@1

  v1 = this;
  sub_DA7364((void **)&v57, "button.polymorphic_button_press");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v57);
  v3 = operator new(4u);
  LODWORD(v4) = sub_CB85DC;
  *v3 = v1;
  HIDWORD(v4) = sub_CB85CA;
  v55 = v3;
  v56 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  v5 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v57 - 4);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  sub_DA7364((void **)&v54, "modal.escape");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v54);
  v7 = operator new(4u);
  LODWORD(v8) = sub_CB8620;
  *v7 = v1;
  HIDWORD(v8) = sub_CB8612;
  v52 = v7;
  v53 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v52);
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  v9 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v54 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  sub_DA7364((void **)&v51, "button.select_screenshot");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v51);
  v11 = operator new(4u);
  LODWORD(v12) = sub_CB86BC;
  *v11 = v1;
  HIDWORD(v12) = sub_CB8658;
  v49 = v11;
  v50 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v49);
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  v13 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v51 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  sub_DA7364((void **)&v48, "button.cycle_screenshots_left");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v48);
  v15 = operator new(4u);
  LODWORD(v16) = sub_CB870E;
  *v15 = v1;
  HIDWORD(v16) = sub_CB86F2;
  v46 = v15;
  v47 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v46);
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
  v17 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v48 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  sub_DA7364((void **)&v45, "button.cycle_screenshots_right");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v45);
  v19 = operator new(4u);
  LODWORD(v20) = sub_CB876A;
  *v19 = v1;
  HIDWORD(v20) = sub_CB8744;
  v43 = v19;
  v44 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v43);
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  v21 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v45 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  v22 = StoreCatalogItemModel::getStoreCategory((ScreenshotCarouselPurchaseScreen *)((char *)v1 + 452));
  v23 = v22 == 2;
  if ( v22 != 2 )
    v23 = v22 == 5;
  if ( !v23 )
    sub_DA7364((void **)&v42, "button.coin_wallet");
    v24 = MinecraftScreenController::_getNameId(v1, (int **)&v42);
    v25 = operator new(4u);
    LODWORD(v26) = sub_CB87B2;
    *v25 = v1;
    HIDWORD(v26) = sub_CB87A0;
    v40 = v25;
    v41 = v26;
    ScreenController::registerButtonClickHandler((int)v1, v24, (int)&v40);
    if ( (_DWORD)v41 )
      ((void (*)(void))v41)();
    v27 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v42 - 4);
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
        j_j_j_j_j__ZdlPv_9(v27);
}


const void **__fastcall ScreenshotCarouselPurchaseScreen::getAdditionalScreenInfo(ScreenshotCarouselPurchaseScreen *this, int a2)
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


int __fastcall ScreenshotCarouselPurchaseScreen::_registerBindings(ScreenshotCarouselPurchaseScreen *this)
{
  ScreenshotCarouselPurchaseScreen *v1; // r4@1
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
  _DWORD *v25; // r0@31
  __int64 v26; // r1@31
  _DWORD *v27; // r0@33
  __int64 v28; // r1@33
  _DWORD *v29; // r0@35
  __int64 v30; // r1@35
  __int64 v31; // r1@35
  _DWORD *v32; // r0@39
  __int64 v33; // r1@39
  __int64 v34; // r1@39
  _DWORD *v35; // r0@43
  __int64 v36; // r1@43
  _DWORD *v37; // r0@45
  __int64 v38; // r1@45
  _DWORD *v39; // r0@49
  __int64 v40; // r1@49
  int result; // r0@51
  void *v42; // [sp+0h] [bp-220h]@54
  int (__fastcall *v43)(void **, void **, int); // [sp+8h] [bp-218h]@54
  void (__fastcall *v44)(int, unsigned int, const char **, int); // [sp+Ch] [bp-214h]@54
  char v45; // [sp+10h] [bp-210h]@54
  int v46; // [sp+14h] [bp-20Ch]@54
  void *v47; // [sp+18h] [bp-208h]@52
  void (*v48)(void); // [sp+20h] [bp-200h]@52
  void (__fastcall *v49)(int, int, const char **, int); // [sp+24h] [bp-1FCh]@52
  char v50; // [sp+28h] [bp-1F8h]@52
  int v51; // [sp+2Ch] [bp-1F4h]@52
  _DWORD *v52; // [sp+30h] [bp-1F0h]@49
  __int64 v53; // [sp+38h] [bp-1E8h]@49
  char v54; // [sp+40h] [bp-1E0h]@49
  int v55; // [sp+44h] [bp-1DCh]@49
  void *v56; // [sp+48h] [bp-1D8h]@47
  void (*v57)(void); // [sp+50h] [bp-1D0h]@47
  void (__fastcall *v58)(int, unsigned int, const char **, int); // [sp+54h] [bp-1CCh]@47
  int v59; // [sp+58h] [bp-1C8h]@47
  int v60; // [sp+5Ch] [bp-1C4h]@47
  _DWORD *v61; // [sp+60h] [bp-1C0h]@45
  __int64 v62; // [sp+68h] [bp-1B8h]@45
  char v63; // [sp+70h] [bp-1B0h]@45
  int v64; // [sp+74h] [bp-1ACh]@45
  _DWORD *v65; // [sp+78h] [bp-1A8h]@43
  __int64 v66; // [sp+80h] [bp-1A0h]@43
  char v67; // [sp+88h] [bp-198h]@43
  int v68; // [sp+8Ch] [bp-194h]@43
  void *v69; // [sp+90h] [bp-190h]@39
  __int64 v70; // [sp+98h] [bp-188h]@39
  _DWORD *v71; // [sp+A0h] [bp-180h]@39
  __int64 v72; // [sp+A8h] [bp-178h]@39
  int v73; // [sp+B0h] [bp-170h]@39
  void *v74; // [sp+B4h] [bp-16Ch]@35
  __int64 v75; // [sp+BCh] [bp-164h]@35
  _DWORD *v76; // [sp+C4h] [bp-15Ch]@35
  __int64 v77; // [sp+CCh] [bp-154h]@35
  int v78; // [sp+D4h] [bp-14Ch]@35
  _DWORD *v79; // [sp+D8h] [bp-148h]@33
  __int64 v80; // [sp+E0h] [bp-140h]@33
  int v81; // [sp+E8h] [bp-138h]@33
  _DWORD *v82; // [sp+ECh] [bp-134h]@31
  __int64 v83; // [sp+F4h] [bp-12Ch]@31
  int v84; // [sp+FCh] [bp-124h]@31
  _DWORD *v85; // [sp+100h] [bp-120h]@29
  __int64 v86; // [sp+108h] [bp-118h]@29
  int v87; // [sp+110h] [bp-110h]@29
  void *v88; // [sp+114h] [bp-10Ch]@25
  __int64 v89; // [sp+11Ch] [bp-104h]@25
  _DWORD *v90; // [sp+124h] [bp-FCh]@25
  __int64 v91; // [sp+12Ch] [bp-F4h]@25
  int v92; // [sp+134h] [bp-ECh]@25
  void *v93; // [sp+138h] [bp-E8h]@21
  __int64 v94; // [sp+140h] [bp-E0h]@21
  _DWORD *v95; // [sp+148h] [bp-D8h]@21
  __int64 v96; // [sp+150h] [bp-D0h]@21
  int v97; // [sp+158h] [bp-C8h]@21
  void *v98; // [sp+15Ch] [bp-C4h]@17
  __int64 v99; // [sp+164h] [bp-BCh]@17
  _DWORD *v100; // [sp+16Ch] [bp-B4h]@17
  __int64 v101; // [sp+174h] [bp-ACh]@17
  int v102; // [sp+17Ch] [bp-A4h]@17
  void *v103; // [sp+180h] [bp-A0h]@13
  __int64 v104; // [sp+188h] [bp-98h]@13
  _DWORD *v105; // [sp+190h] [bp-90h]@13
  __int64 v106; // [sp+198h] [bp-88h]@13
  int v107; // [sp+1A0h] [bp-80h]@13
  void *v108; // [sp+1A4h] [bp-7Ch]@9
  __int64 v109; // [sp+1ACh] [bp-74h]@9
  _DWORD *v110; // [sp+1B4h] [bp-6Ch]@9
  __int64 v111; // [sp+1BCh] [bp-64h]@9
  int v112; // [sp+1C4h] [bp-5Ch]@9
  void *v113; // [sp+1C8h] [bp-58h]@5
  __int64 v114; // [sp+1D0h] [bp-50h]@5
  _DWORD *v115; // [sp+1D8h] [bp-48h]@5
  __int64 v116; // [sp+1E0h] [bp-40h]@5
  int v117; // [sp+1E8h] [bp-38h]@5
  void *v118; // [sp+1ECh] [bp-34h]@1
  __int64 v119; // [sp+1F4h] [bp-2Ch]@1
  _DWORD *v120; // [sp+1FCh] [bp-24h]@1
  __int64 v121; // [sp+204h] [bp-1Ch]@1
  char v122; // [sp+20Ch] [bp-14h]@1

  v1 = this;
  StringHash::StringHash<char [25]>(&v122, (int)"#polymorphic_button_text");
  v2 = operator new(4u);
  LODWORD(v3) = sub_CB87F8;
  *v2 = v1;
  HIDWORD(v3) = sub_CB87E8;
  v120 = v2;
  v121 = v3;
  v118 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v119 = v4;
  ScreenController::bindString((int)v1, (int *)&v122, (int)&v120, (int)&v118);
  if ( (_DWORD)v119 )
    ((void (*)(void))v119)();
  if ( (_DWORD)v121 )
    ((void (*)(void))v121)();
  StringHash::StringHash<char [28]>(&v117, (int)"#polymorphic_button_visible");
  v5 = operator new(4u);
  LODWORD(v6) = sub_CB883A;
  *v5 = v1;
  HIDWORD(v6) = sub_CB882E;
  v115 = v5;
  v116 = v6;
  v113 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v114 = v7;
  ScreenController::bindBool((int)v1, &v117, (int)&v115, (int)&v113);
  if ( (_DWORD)v114 )
    ((void (*)(void))v114)();
  if ( (_DWORD)v116 )
    ((void (*)(void))v116)();
  StringHash::StringHash<char [34]>(&v112, (int)"#polymorphic_button_coins_visible");
  v8 = operator new(4u);
  LODWORD(v9) = sub_CB887C;
  *v8 = v1;
  HIDWORD(v9) = sub_CB8870;
  v110 = v8;
  v111 = v9;
  v108 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v109 = v10;
  ScreenController::bindBool((int)v1, &v112, (int)&v110, (int)&v108);
  if ( (_DWORD)v109 )
    ((void (*)(void))v109)();
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  v107 = 1435202916;
  v11 = operator new(4u);
  LODWORD(v12) = sub_CB88CC;
  *v11 = v1;
  HIDWORD(v12) = sub_CB88B2;
  v105 = v11;
  v106 = v12;
  v103 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v104 = v13;
  ScreenController::bindString((int)v1, &v107, (int)&v105, (int)&v103);
  if ( (_DWORD)v104 )
    ((void (*)(void))v104)();
  if ( (_DWORD)v106 )
    ((void (*)(void))v106)();
  v102 = 596956518;
  v14 = operator new(4u);
  LODWORD(v15) = sub_CB891C;
  *v14 = v1;
  HIDWORD(v15) = sub_CB8902;
  v100 = v14;
  v101 = v15;
  v98 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v99 = v16;
  ScreenController::bindString((int)v1, &v102, (int)&v100, (int)&v98);
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  v97 = -989424446;
  v17 = operator new(4u);
  LODWORD(v18) = sub_CB897C;
  *v17 = v1;
  HIDWORD(v18) = sub_CB8952;
  v95 = v17;
  v96 = v18;
  v93 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v94 = v19;
  ScreenController::bindString((int)v1, &v97, (int)&v95, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  v92 = 1376875312;
  v20 = operator new(4u);
  LODWORD(v21) = sub_CB89C2;
  *v20 = v1;
  HIDWORD(v21) = sub_CB89B2;
  v90 = v20;
  v91 = v21;
  v88 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v89 = v22;
  ScreenController::bindString((int)v1, &v92, (int)&v90, (int)&v88);
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  StringHash::StringHash<char [28]>(&v87, (int)"#zoomed_texture_file_system");
  v23 = operator new(4u);
  LODWORD(v24) = sub_CB8AEC;
  *v23 = v1;
  HIDWORD(v24) = sub_CB89F8;
  v85 = v23;
  v86 = v24;
  ScreenController::bindForGlobal((int)v1, &v87, (int)&v85);
  if ( (_DWORD)v86 )
    ((void (*)(void))v86)();
  StringHash::StringHash<char [40]>(&v84, (int)"#texture_cycle_pack_left_button_enabled");
  v25 = operator new(4u);
  LODWORD(v26) = sub_CB8B52;
  *v25 = v1;
  HIDWORD(v26) = sub_CB8B22;
  v82 = v25;
  v83 = v26;
  ScreenController::bindForGlobal((int)v1, &v84, (int)&v82);
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  StringHash::StringHash<char [41]>(&v81, (int)"#texture_cycle_pack_right_button_enabled");
  v27 = operator new(4u);
  LODWORD(v28) = sub_CB8BCA;
  *v27 = v1;
  HIDWORD(v28) = sub_CB8B88;
  v79 = v27;
  v80 = v28;
  ScreenController::bindForGlobal((int)v1, &v81, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  StringHash::StringHash<char [29]>(&v78, (int)"#screenshots_grid_dimensions");
  v29 = operator new(4u);
  LODWORD(v30) = sub_CB8C10;
  *v29 = v1;
  HIDWORD(v30) = sub_CB8C00;
  v76 = v29;
  v77 = v30;
  v74 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v75 = v31;
  ScreenController::bindGridSize((int)v1, &v78, (int)&v76, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  StringHash::StringHash<char [25]>(&v73, (int)"#item_meets_requirements");
  v32 = operator new(4u);
  LODWORD(v33) = sub_CB8C6A;
  *v32 = v1;
  HIDWORD(v33) = sub_CB8C46;
  v71 = v32;
  v72 = v33;
  v69 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v70 = v34;
  ScreenController::bindBool((int)v1, &v73, (int)&v71, (int)&v69);
  if ( (_DWORD)v70 )
    ((void (*)(void))v70)();
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  v68 = 1827038298;
  StringHash::StringHash<char [25]>(&v67, (int)"#screenshot_texture_name");
  v35 = operator new(4u);
  LODWORD(v36) = sub_CB8CD6;
  *v35 = v1;
  HIDWORD(v36) = sub_CB8CA0;
  v65 = v35;
  v66 = v36;
  ScreenController::bindForCollection((int)v1, &v68, &v67, (int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  v64 = 1827038298;
  StringHash::StringHash<char [32]>(&v63, (int)"#screenshot_texture_file_system");
  v37 = operator new(4u);
  LODWORD(v38) = sub_CB8E00;
  *v37 = v1;
  HIDWORD(v38) = sub_CB8D0C;
  v61 = v37;
  v62 = v38;
  ScreenController::bindForCollection((int)v1, &v64, &v63, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  v60 = 1827038298;
  v59 = -47630688;
  v56 = operator new(1u);
  v57 = (void (*)(void))sub_CB8F0C;
  v58 = sub_CB8E38;
  ScreenController::bindForCollection((int)v1, &v60, &v59, (int)&v56);
  if ( v57 )
    v57();
  v55 = 1827038298;
  StringHash::StringHash<char [28]>(&v54, (int)"#grid_button_override_right");
  v39 = operator new(4u);
  LODWORD(v40) = sub_CB90D4;
  *v39 = v1;
  HIDWORD(v40) = sub_CB8F3C;
  v52 = v39;
  v53 = v40;
  ScreenController::bindForCollection((int)v1, &v55, &v54, (int)&v52);
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  result = StoreCatalogItemModel::getStoreCategory((ScreenshotCarouselPurchaseScreen *)((char *)v1 + 452));
  if ( result != 2 )
  {
    v51 = 1827038298;
    StringHash::StringHash<char [27]>(&v50, (int)"#grid_button_override_left");
    v47 = operator new(1u);
    v48 = (void (*)(void))sub_CB91EC;
    v49 = sub_CB910C;
    ScreenController::bindForCollection((int)v1, &v51, &v50, (int)&v47);
    if ( v48 )
      v48();
    v46 = 1827038298;
    StringHash::StringHash<char [25]>(&v45, (int)"#grid_button_override_up");
    v42 = operator new(1u);
    v43 = sub_CB92F0;
    v44 = sub_CB921C;
    result = ScreenController::bindForCollection((int)v1, &v46, &v45, (int)&v42);
    if ( v43 )
      result = ((int (__cdecl *)(void **))v43)(&v42);
  }
  return result;
}
