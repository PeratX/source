

void __fastcall MashupScreenController::_registerEventHandlers(MashupScreenController *this)
{
  MashupScreenController::_registerEventHandlers(this);
}


void __fastcall MashupScreenController::_getButtonText(MashupScreenController *this, int a2)
{
  MashupScreenController::_getButtonText(this, a2);
}


int __fastcall MashupScreenController::MashupScreenController(int a1, int a2, int a3, int a4)
{
  int *v4; // r10@1
  int v5; // r4@1
  int v6; // r8@1
  int v7; // r6@1
  int v8; // r0@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r7@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r5@14
  unsigned int v15; // r0@16
  int v16; // r0@21
  int v17; // r3@21
  int v18; // r0@21
  int v19; // r0@21
  double v20; // r0@21
  unsigned int v21; // r0@21
  int v22; // r5@23
  void *v23; // r7@23
  int v25; // [sp+0h] [bp-38h]@1
  int v26; // [sp+4h] [bp-34h]@1

  v4 = (int *)a2;
  v5 = a1;
  v6 = a4;
  v25 = *(_DWORD *)a2;
  v7 = a3;
  v8 = *(_DWORD *)(a2 + 4);
  v26 = v8;
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
  PurchaseEnabledScreenController::PurchaseEnabledScreenController(v5, (int)&v25, (int *)&Util::EMPTY_STRING);
  v11 = v26;
  if ( v26 )
    v12 = (unsigned int *)(v26 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  *(_DWORD *)v5 = &off_26E26A4;
  v16 = MainMenuScreenModel::getStoreCatalogItemByProductId(*v4, (const void **)(v7 + 16));
  v17 = v5 + 452;
  *(_DWORD *)v17 = v16;
  *(_DWORD *)(v17 + 4) = -1;
  *(_DWORD *)(v17 + 8) = 0;
  *(_DWORD *)(v5 + 464) = 0;
  *(_DWORD *)(v5 + 468) = 0;
  *(_DWORD *)(v5 + 460) = *(_DWORD *)v7;
  *(_DWORD *)v7 = 0;
  v18 = *(_DWORD *)(v5 + 464);
  *(_DWORD *)(v5 + 464) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v7 + 4) = v18;
  v19 = *(_DWORD *)(v5 + 468);
  *(_DWORD *)(v5 + 468) = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = v19;
  *(_DWORD *)(v5 + 480) = 0;
  *(_DWORD *)(v5 + 484) = 0;
  *(_DWORD *)(v5 + 488) = 1065353216;
  *(_DWORD *)(v5 + 492) = 0;
  LODWORD(v20) = v5 + 488;
  v21 = sub_1590344(v20);
  *(_DWORD *)(v5 + 476) = v21;
  if ( v21 == 1 )
    v23 = (void *)(v5 + 496);
    *(_DWORD *)(v5 + 496) = 0;
  else
    if ( v21 >= 0x40000000 )
      sub_1590364();
    v22 = 4 * v21;
    v23 = operator new(4 * v21);
    _aeabi_memclr4(v23, v22);
  *(_DWORD *)(v5 + 472) = v23;
  sub_15901A4((int *)(v5 + 500), (int *)(v7 + 12));
  *(_DWORD *)(v5 + 504) = v6;
  j__ZNSt12__shared_ptrIbLN9__gnu_cxx12_Lock_policyE2EEC2ISaIbEJEEESt19_Sp_make_shared_tagRKT_DpOT0_(v5 + 508);
  EntityInteraction::setInteractText((int *)(v5 + 444), (int *)(v7 + 16));
  MainMenuScreenModel::repopulateWorldTemplates(*(MainMenuScreenModel **)(v5 + 424));
  MashupScreenController::_registerTabNames((MashupScreenController *)v5);
  MashupScreenController::_createTabs((MashupScreenController *)v5);
  MashupScreenController::_registerEventHandlers((MashupScreenController *)v5);
  MashupScreenController::_registerBindings((MashupScreenController *)v5);
  PurchaseEnabledScreenController::_registerDownloadProgressBinds(v5, (int *)(v5 + 444));
  return v5;
}


MashupScreenController *__fastcall MashupScreenController::~MashupScreenController(MashupScreenController *this)
{
  MashupScreenController *v1; // r10@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r1@15
  void *v8; // r0@15
  int v9; // r7@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20
  void *v12; // r6@26
  int v13; // r1@26
  void *v14; // r0@26
  char *v15; // r0@28
  char *v16; // r5@31 OVERLAPPED
  char *v17; // r6@31 OVERLAPPED
  unsigned int *v19; // r2@39
  signed int v20; // r1@41

  v1 = this;
  *(_DWORD *)this = &off_26E26A4;
  v2 = *((_DWORD *)this + 128);
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
  v7 = *((_DWORD *)v1 + 125);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v7 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v8);
  v9 = *((_DWORD *)v1 + 120);
  while ( v9 )
    v12 = (void *)v9;
    v13 = *(_DWORD *)(v9 + 8);
    v9 = *(_DWORD *)v9;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v13 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v14);
    operator delete(v12);
  _aeabi_memclr4(*((_QWORD *)v1 + 59), 4 * (*((_QWORD *)v1 + 59) >> 32));
  *((_DWORD *)v1 + 120) = 0;
  *((_DWORD *)v1 + 121) = 0;
  v15 = (char *)*((_DWORD *)v1 + 118);
  if ( v15 && (char *)v1 + 496 != v15 )
    operator delete(v15);
  *(_QWORD *)&v16 = *(_QWORD *)((char *)v1 + 460);
  if ( v16 != v17 )
    do
      if ( *(_DWORD *)v16 )
        (*(void (**)(void))(**(_DWORD **)v16 + 4))();
      *(_DWORD *)v16 = 0;
      v16 += 4;
    while ( v17 != v16 );
    v16 = (char *)*((_DWORD *)v1 + 115);
  if ( v16 )
    operator delete(v16);
  PurchaseEnabledScreenController::~PurchaseEnabledScreenController(v1);
  return v1;
}


void __fastcall MashupScreenController::_handleButtonPress(MashupScreenController *this)
{
  MashupScreenController::_handleButtonPress(this);
}


void __fastcall MashupScreenController::getAdditionalScreenInfo(MashupScreenController *this, int a2)
{
  MashupScreenController *v2; // r4@1
  int v3; // r5@1
  const void **v4; // r0@6
  const void **v5; // r0@6
  char *v6; // r0@6
  char *v7; // r0@7
  char *v8; // r0@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  char *v15; // [sp+0h] [bp-20h]@6
  char *v16; // [sp+4h] [bp-1Ch]@6
  _DWORD *v17; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v17 = &unk_28898CC;
  switch ( MashupTab::getTabType(*(MashupTab **)((*(_QWORD *)(a2 + 456) >> 32) + 4 * *(_QWORD *)(a2 + 456))) )
  {
    case 0:
      sub_15903F4((void **)&v17, "home", (_BYTE *)4);
      break;
    case 2:
      sub_15903F4((void **)&v17, "skin_pack", (_BYTE *)9);
    case 3:
      sub_15903F4((void **)&v17, "world_panorama", (_BYTE *)0xE);
    case 1:
      sub_15903F4((void **)&v17, "texture_pack", (_BYTE *)0xC);
    default:
  }
  v15 = (char *)&unk_28898CC;
  sub_1590424((const void **)&v15, *(v17 - 3) + 3);
  sub_1590224((const void **)&v15, " - ", 3u);
  sub_1590394((const void **)&v15, (const void **)&v17);
  v4 = sub_1590224((const void **)&v15, " - ", 3u);
  v16 = (char *)*v4;
  *v4 = &unk_28898CC;
  v5 = sub_1590394((const void **)&v16, (const void **)(v3 + 444));
  *(_DWORD *)v2 = *v5;
  *v5 = &unk_28898CC;
  v6 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v16 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v6);
  v7 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v7);
  v8 = (char *)(v17 - 3);
  if ( v17 - 3 != &dword_28898C0 )
    v13 = v17 - 1;
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v8);
}


void __fastcall MashupScreenController::_handleTabSelectionExitBehavior(MashupScreenController *this)
{
  MashupScreenController *v1; // r4@1
  int v2; // r0@1
  unsigned __int8 v3; // cf@1
  char v4; // zf@1
  int v5; // r5@3
  unsigned __int64 *v6; // r0@3
  WorldTemplateInfo *v7; // r1@3
  SkinPackCollectionModel *v8; // r0@6

  v1 = this;
  v2 = MashupTab::getTabType(*(MashupTab **)((*((_QWORD *)this + 57) >> 32) + 4 * *((_QWORD *)this + 57)));
  if ( !(!v4 & v3) )
  {
    switch ( v2 )
    {
      case 0:
      case 3:
        v5 = *((_DWORD *)v1 + 106);
        v6 = (unsigned __int64 *)StoreCatalogItemModel::getPackIdentities((MashupScreenController *)((char *)v1 + 452));
        v7 = MainMenuScreenModel::findWorldTemplateByPackId(v5, v6);
        if ( v7 )
          j_j_j__ZN19MainMenuScreenModel29navigateToWorldTemplateScreenEPK17WorldTemplateInfo(
            *((MainMenuScreenModel **)v1 + 106),
            v7);
        else
          j_j_j__ZN22MashupScreenController25_openMissingContentDialogEv(v1);
        break;
      case 1:
        j_j_j__ZN20MinecraftScreenModel23navigateToOptionsScreenE16SettingsTabIndexb_0(*((_DWORD *)v1 + 106), 15, 0);
      case 2:
        v8 = (SkinPackCollectionModel *)MainMenuScreenModel::getSkinPackCollection(*((MainMenuScreenModel **)v1 + 106));
        SkinPackCollectionModel::equipPreviewSkin(v8, 1);
        j_j_j__ZN20MinecraftScreenModel11leaveScreenEv_1(*((MinecraftScreenModel **)v1 + 106));
    }
  }
}


void __fastcall MashupScreenController::~MashupScreenController(MashupScreenController *this)
{
  MashupScreenController::~MashupScreenController(this);
}


void __fastcall MashupScreenController::_registerTabNames(MashupScreenController *this)
{
  MashupScreenController::_registerTabNames(this);
}


int __fastcall MashupScreenController::addStaticScreenVars(MashupScreenController *this, Json::Value *a2)
{
  ScreenController *v2; // r8@1
  StoreCatalogItemModel *v3; // r6@1
  Json::Value *v4; // r4@1
  char *v5; // r0@1
  int v6; // r5@1
  int v7; // r7@1
  char *v8; // r0@2
  char *v9; // r0@2
  int v10; // r5@4
  int v11; // r0@4
  bool v12; // r1@4
  int v14; // [sp+0h] [bp-48h]@6
  char v15; // [sp+10h] [bp-38h]@3
  char v16; // [sp+20h] [bp-28h]@2

  v2 = this;
  v3 = (MashupScreenController *)((char *)this + 452);
  v4 = a2;
  v5 = StoreCatalogItemModel::getPrice((MashupScreenController *)((char *)this + 452));
  v6 = sub_1590284((const void **)v5, "0");
  v7 = Json::Value::operator[](v4, "$unlock_price");
  if ( v6 )
  {
    v8 = StoreCatalogItemModel::getPrice(v3);
    Json::Value::Value((int)&v16, (const char **)v8);
    Json::Value::operator=(v7, (const Json::Value *)&v16);
    v9 = &v16;
  }
  else
    Json::Value::Value((Json::Value *)&v15, "store.free");
    Json::Value::operator=(v7, (const Json::Value *)&v15);
    v9 = &v15;
  Json::Value::~Value((Json::Value *)v9);
  v10 = Json::Value::operator[](v4, "$is_mashup");
  v11 = StoreCatalogItemModel::getStoreCategory(v3);
  v12 = 0;
  if ( v11 == 2 )
    v12 = 1;
  Json::Value::Value((Json::Value *)&v14, v12);
  Json::Value::operator=(v10, (const Json::Value *)&v14);
  Json::Value::~Value((Json::Value *)&v14);
  return ScreenController::addStaticScreenVars(v2, v4);
}


void __fastcall MashupScreenController::_registerBindings(MashupScreenController *this)
{
  MashupScreenController::_registerBindings(this);
}


void __fastcall MashupScreenController::_registerBindings(MashupScreenController *this)
{
  MashupScreenController *v1; // r4@1
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
  _DWORD *v26; // r0@33
  __int64 v27; // r1@33
  __int64 v28; // r1@33
  _DWORD *v29; // r0@37
  __int64 v30; // r1@37
  __int64 v31; // r1@37
  _DWORD *v32; // r0@41
  __int64 v33; // r1@41
  __int64 v34; // r1@41
  _DWORD *v35; // r0@45
  __int64 v36; // r1@45
  __int64 v37; // r1@45
  _DWORD *v38; // r0@49
  __int64 v39; // r1@49
  __int64 v40; // r1@49
  _DWORD *v41; // r0@53
  __int64 v42; // r1@53
  __int64 v43; // r1@53
  _DWORD *v44; // r0@57
  __int64 v45; // r1@57
  __int64 v46; // r1@57
  _DWORD *v47; // r0@61
  __int64 v48; // r1@61
  __int64 v49; // r1@61
  _DWORD *v50; // r0@67
  __int64 v51; // r1@67
  _DWORD *v52; // r0@69
  __int64 v53; // r1@69
  _DWORD *v54; // r0@73
  __int64 v55; // r1@73
  __int64 v56; // r1@73
  void *v57; // [sp+4h] [bp-2DCh]@73
  __int64 v58; // [sp+Ch] [bp-2D4h]@73
  _DWORD *v59; // [sp+14h] [bp-2CCh]@73
  __int64 v60; // [sp+1Ch] [bp-2C4h]@73
  int v61; // [sp+24h] [bp-2BCh]@73
  void *v62; // [sp+28h] [bp-2B8h]@71
  void (*v63)(void); // [sp+30h] [bp-2B0h]@71
  void (__fastcall *v64)(int, int, __int64); // [sp+34h] [bp-2ACh]@71
  char v65; // [sp+38h] [bp-2A8h]@71
  int v66; // [sp+3Ch] [bp-2A4h]@71
  _DWORD *v67; // [sp+40h] [bp-2A0h]@69
  __int64 v68; // [sp+48h] [bp-298h]@69
  char v69; // [sp+50h] [bp-290h]@69
  int v70; // [sp+54h] [bp-28Ch]@69
  _DWORD *v71; // [sp+58h] [bp-288h]@67
  __int64 v72; // [sp+60h] [bp-280h]@67
  char v73; // [sp+68h] [bp-278h]@67
  int v74; // [sp+6Ch] [bp-274h]@67
  void *v75; // [sp+70h] [bp-270h]@65
  void (*v76)(void); // [sp+78h] [bp-268h]@65
  void (__fastcall *v77)(int, int, __int64); // [sp+7Ch] [bp-264h]@65
  char v78; // [sp+80h] [bp-260h]@65
  int v79; // [sp+84h] [bp-25Ch]@65
  void *v80; // [sp+88h] [bp-258h]@61
  __int64 v81; // [sp+90h] [bp-250h]@61
  _DWORD *v82; // [sp+98h] [bp-248h]@61
  __int64 v83; // [sp+A0h] [bp-240h]@61
  int v84; // [sp+A8h] [bp-238h]@61
  void *v85; // [sp+ACh] [bp-234h]@57
  __int64 v86; // [sp+B4h] [bp-22Ch]@57
  _DWORD *v87; // [sp+BCh] [bp-224h]@57
  __int64 v88; // [sp+C4h] [bp-21Ch]@57
  int v89; // [sp+CCh] [bp-214h]@57
  int v90; // [sp+D0h] [bp-210h]@57
  void *v91; // [sp+D4h] [bp-20Ch]@53
  __int64 v92; // [sp+DCh] [bp-204h]@53
  _DWORD *v93; // [sp+E4h] [bp-1FCh]@53
  __int64 v94; // [sp+ECh] [bp-1F4h]@53
  int v95; // [sp+F4h] [bp-1ECh]@53
  int v96; // [sp+F8h] [bp-1E8h]@53
  void *v97; // [sp+FCh] [bp-1E4h]@49
  __int64 v98; // [sp+104h] [bp-1DCh]@49
  _DWORD *v99; // [sp+10Ch] [bp-1D4h]@49
  __int64 v100; // [sp+114h] [bp-1CCh]@49
  int v101; // [sp+11Ch] [bp-1C4h]@49
  void *v102; // [sp+120h] [bp-1C0h]@45
  __int64 v103; // [sp+128h] [bp-1B8h]@45
  _DWORD *v104; // [sp+130h] [bp-1B0h]@45
  __int64 v105; // [sp+138h] [bp-1A8h]@45
  int v106; // [sp+140h] [bp-1A0h]@45
  void *v107; // [sp+144h] [bp-19Ch]@41
  __int64 v108; // [sp+14Ch] [bp-194h]@41
  _DWORD *v109; // [sp+154h] [bp-18Ch]@41
  __int64 v110; // [sp+15Ch] [bp-184h]@41
  int v111; // [sp+164h] [bp-17Ch]@41
  void *v112; // [sp+168h] [bp-178h]@37
  __int64 v113; // [sp+170h] [bp-170h]@37
  _DWORD *v114; // [sp+178h] [bp-168h]@37
  __int64 v115; // [sp+180h] [bp-160h]@37
  int v116; // [sp+188h] [bp-158h]@37
  void *v117; // [sp+18Ch] [bp-154h]@33
  __int64 v118; // [sp+194h] [bp-14Ch]@33
  _DWORD *v119; // [sp+19Ch] [bp-144h]@33
  __int64 v120; // [sp+1A4h] [bp-13Ch]@33
  int v121; // [sp+1ACh] [bp-134h]@33
  void *v122; // [sp+1B0h] [bp-130h]@29
  __int64 v123; // [sp+1B8h] [bp-128h]@29
  _DWORD *v124; // [sp+1C0h] [bp-120h]@29
  __int64 v125; // [sp+1C8h] [bp-118h]@29
  int v126; // [sp+1D0h] [bp-110h]@29
  void *v127; // [sp+1D4h] [bp-10Ch]@25
  __int64 v128; // [sp+1DCh] [bp-104h]@25
  _DWORD *v129; // [sp+1E4h] [bp-FCh]@25
  __int64 v130; // [sp+1ECh] [bp-F4h]@25
  int v131; // [sp+1F4h] [bp-ECh]@25
  void *v132; // [sp+1F8h] [bp-E8h]@21
  __int64 v133; // [sp+200h] [bp-E0h]@21
  _DWORD *v134; // [sp+208h] [bp-D8h]@21
  __int64 v135; // [sp+210h] [bp-D0h]@21
  int v136; // [sp+218h] [bp-C8h]@21
  void *v137; // [sp+21Ch] [bp-C4h]@17
  __int64 v138; // [sp+224h] [bp-BCh]@17
  _DWORD *v139; // [sp+22Ch] [bp-B4h]@17
  __int64 v140; // [sp+234h] [bp-ACh]@17
  int v141; // [sp+23Ch] [bp-A4h]@17
  void *v142; // [sp+240h] [bp-A0h]@13
  __int64 v143; // [sp+248h] [bp-98h]@13
  _DWORD *v144; // [sp+250h] [bp-90h]@13
  __int64 v145; // [sp+258h] [bp-88h]@13
  int v146; // [sp+260h] [bp-80h]@13
  void *v147; // [sp+264h] [bp-7Ch]@9
  __int64 v148; // [sp+26Ch] [bp-74h]@9
  _DWORD *v149; // [sp+274h] [bp-6Ch]@9
  __int64 v150; // [sp+27Ch] [bp-64h]@9
  int v151; // [sp+284h] [bp-5Ch]@9
  void *v152; // [sp+288h] [bp-58h]@5
  __int64 v153; // [sp+290h] [bp-50h]@5
  _DWORD *v154; // [sp+298h] [bp-48h]@5
  __int64 v155; // [sp+2A0h] [bp-40h]@5
  int v156; // [sp+2A8h] [bp-38h]@5
  void *v157; // [sp+2ACh] [bp-34h]@1
  __int64 v158; // [sp+2B4h] [bp-2Ch]@1
  _DWORD *v159; // [sp+2BCh] [bp-24h]@1
  __int64 v160; // [sp+2C4h] [bp-1Ch]@1
  int v161; // [sp+2CCh] [bp-14h]@1

  v1 = this;
  v161 = -1686752127;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11C724A;
  *v2 = v1;
  HIDWORD(v3) = sub_11C7226;
  v159 = v2;
  v160 = v3;
  v157 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v158 = v4;
  ScreenController::bindBool((int)v1, &v161, (int)&v159, (int)&v157);
  if ( (_DWORD)v158 )
    ((void (*)(void))v158)();
  if ( (_DWORD)v160 )
    ((void (*)(void))v160)();
  StringHash::StringHash<char [23]>(&v156, (int)"#action_button_visible");
  v5 = operator new(4u);
  LODWORD(v6) = sub_11C746C;
  *v5 = v1;
  HIDWORD(v6) = sub_11C7280;
  v154 = v5;
  v155 = v6;
  v152 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v153 = v7;
  ScreenController::bindBool((int)v1, &v156, (int)&v154, (int)&v152);
  if ( (_DWORD)v153 )
    ((void (*)(void))v153)();
  if ( (_DWORD)v155 )
    ((void (*)(void))v155)();
  v151 = 1179966702;
  v8 = operator new(4u);
  LODWORD(v9) = sub_11C74F4;
  *v8 = v1;
  HIDWORD(v9) = sub_11C74A4;
  v149 = v8;
  v150 = v9;
  v147 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v148 = v10;
  ScreenController::bindBool((int)v1, &v151, (int)&v149, (int)&v147);
  if ( (_DWORD)v148 )
    ((void (*)(void))v148)();
  if ( (_DWORD)v150 )
    ((void (*)(void))v150)();
  v146 = 408388416;
  v11 = operator new(4u);
  LODWORD(v12) = sub_11C7548;
  *v11 = v1;
  HIDWORD(v12) = sub_11C752A;
  v144 = v11;
  v145 = v12;
  v142 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v143 = v13;
  ScreenController::bindBool((int)v1, &v146, (int)&v144, (int)&v142);
  if ( (_DWORD)v143 )
    ((void (*)(void))v143)();
  if ( (_DWORD)v145 )
    ((void (*)(void))v145)();
  StringHash::StringHash<char [26]>(&v141, (int)"#texture_pack_tab_visible");
  v14 = operator new(4u);
  LODWORD(v15) = sub_11C7598;
  *v14 = v1;
  HIDWORD(v15) = sub_11C757E;
  v139 = v14;
  v140 = v15;
  v137 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v138 = v16;
  ScreenController::bindBool((int)v1, &v141, (int)&v139, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  if ( (_DWORD)v140 )
    ((void (*)(void))v140)();
  StringHash::StringHash<char [23]>(&v136, (int)"#skin_pack_tab_visible");
  v17 = operator new(4u);
  LODWORD(v18) = sub_11C75EC;
  *v17 = v1;
  HIDWORD(v18) = sub_11C75CE;
  v134 = v17;
  v135 = v18;
  v132 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v133 = v19;
  ScreenController::bindBool((int)v1, &v136, (int)&v134, (int)&v132);
  if ( (_DWORD)v133 )
    ((void (*)(void))v133)();
  if ( (_DWORD)v135 )
    ((void (*)(void))v135)();
  v131 = 1051580803;
  v20 = operator new(4u);
  LODWORD(v21) = sub_11C7640;
  *v20 = v1;
  HIDWORD(v21) = sub_11C7622;
  v129 = v20;
  v130 = v21;
  v127 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v128 = v22;
  ScreenController::bindBool((int)v1, &v131, (int)&v129, (int)&v127);
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
  if ( (_DWORD)v130 )
    ((void (*)(void))v130)();
  StringHash::StringHash<char [35]>(&v126, (int)"#action_button_focus_override_left");
  v23 = operator new(4u);
  LODWORD(v24) = sub_11C7690;
  *v23 = v1;
  HIDWORD(v24) = sub_11C7678;
  v124 = v23;
  v125 = v24;
  v122 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v123 = v25;
  ScreenController::bindString((int)v1, &v126, (int)&v124, (int)&v122);
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  if ( (_DWORD)v125 )
    ((void (*)(void))v125)();
  StringHash::StringHash<char [33]>(&v121, (int)"#action_button_focus_override_up");
  v26 = operator new(4u);
  LODWORD(v27) = sub_11C7720;
  *v26 = v1;
  HIDWORD(v27) = sub_11C76C8;
  v119 = v26;
  v120 = v27;
  v117 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v118 = v28;
  ScreenController::bindString((int)v1, &v121, (int)&v119, (int)&v117);
  if ( (_DWORD)v118 )
    ((void (*)(void))v118)();
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  v116 = -900593982;
  v29 = operator new(4u);
  LODWORD(v30) = sub_11C79C4;
  *v29 = v1;
  HIDWORD(v30) = sub_11C7758;
  v114 = v29;
  v115 = v30;
  v112 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v113 = v31;
  ScreenController::bindString((int)v1, &v116, (int)&v114, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  v111 = -742427320;
  v32 = operator new(4u);
  LODWORD(v33) = sub_11C7A06;
  *v32 = v1;
  HIDWORD(v33) = sub_11C79FA;
  v109 = v32;
  v110 = v33;
  v107 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v108 = v34;
  ScreenController::bindString((int)v1, &v111, (int)&v109, (int)&v107);
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  if ( (_DWORD)v110 )
    ((void (*)(void))v110)();
  v106 = 1376875312;
  v35 = operator new(4u);
  LODWORD(v36) = sub_11C7A4C;
  *v35 = v1;
  HIDWORD(v36) = sub_11C7A3C;
  v104 = v35;
  v105 = v36;
  v102 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v103 = v37;
  ScreenController::bindString((int)v1, &v106, (int)&v104, (int)&v102);
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  StringHash::StringHash<char [26]>(&v101, (int)"#navigation_tab_grid_size");
  v38 = operator new(4u);
  LODWORD(v39) = sub_11C7A96;
  *v38 = v1;
  HIDWORD(v39) = sub_11C7A82;
  v99 = v38;
  v100 = v39;
  v97 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v98 = v40;
  ScreenController::bindGridSize((int)v1, &v101, (int)&v99, (int)&v97);
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  v95 = -886589628;
  v96 = 1493103248;
  v41 = operator new(4u);
  LODWORD(v42) = sub_11C7AEA;
  *v41 = v1;
  HIDWORD(v42) = sub_11C7ACC;
  v93 = v41;
  v94 = v42;
  v91 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v92 = v43;
  ScreenController::bindStringForCollection((int)v1, &v96, &v95, (int)&v93, (int)&v91);
  if ( (_DWORD)v92 )
    ((void (*)(void))v92)();
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  v90 = 1493103248;
  v89 = 552700812;
  v44 = operator new(4u);
  LODWORD(v45) = sub_11C7B30;
  *v44 = v1;
  HIDWORD(v45) = sub_11C7B20;
  v87 = v44;
  v88 = v45;
  v85 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v86 = v46;
  ScreenController::bindBoolForCollection((int)v1, &v90, &v89, (int)&v87, (int)&v85);
  if ( (_DWORD)v86 )
    ((void (*)(void))v86)();
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
  StringHash::StringHash<char [25]>(&v84, (int)"#item_meets_requirements");
  v47 = operator new(4u);
  LODWORD(v48) = sub_11C7B8A;
  *v47 = v1;
  HIDWORD(v48) = sub_11C7B66;
  v82 = v47;
  v83 = v48;
  v80 = operator new(1u);
  LODWORD(v49) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v49) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v81 = v49;
  ScreenController::bindBool((int)v1, &v84, (int)&v82, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  v79 = 1493103248;
  StringHash::StringHash<char [31]>(&v78, (int)"#navigation_grid_item_focus_id");
  v75 = operator new(1u);
  v76 = (void (*)(void))sub_11C7C90;
  v77 = sub_11C7BC0;
  ScreenController::bindForCollection((int)v1, &v79, &v78, (int)&v75);
  if ( v76 )
    v76();
  v74 = 1493103248;
  StringHash::StringHash<char [43]>(&v73, (int)"#navigation_grid_item_focus_override_right");
  v50 = operator new(4u);
  LODWORD(v51) = sub_11C7DCC;
  *v50 = v1;
  HIDWORD(v51) = sub_11C7CC0;
  v71 = v50;
  v72 = v51;
  ScreenController::bindForCollection((int)v1, &v74, &v73, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  v70 = 1493103248;
  StringHash::StringHash<char [42]>(&v69, (int)"#navigation_grid_item_focus_override_down");
  v52 = operator new(4u);
  LODWORD(v53) = sub_11C7EF8;
  *v52 = v1;
  HIDWORD(v53) = sub_11C7E04;
  v67 = v52;
  v68 = v53;
  ScreenController::bindForCollection((int)v1, &v70, &v69, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  v66 = 1827038298;
  StringHash::StringHash<char [43]>(&v65, (int)"#world_template_screenshot_button_focus_id");
  v62 = operator new(1u);
  v63 = (void (*)(void))sub_11C8000;
  v64 = sub_11C7F30;
  ScreenController::bindForCollection((int)v1, &v66, &v65, (int)&v62);
  if ( v63 )
    v63();
  StringHash::StringHash<char [27]>(&v61, (int)"#grid_button_override_left");
  v54 = operator new(4u);
  LODWORD(v55) = sub_11C8208;
  *v54 = v1;
  HIDWORD(v55) = sub_11C8030;
  v59 = v54;
  v60 = v55;
  v57 = operator new(1u);
  LODWORD(v56) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v56) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v58 = v56;
  ScreenController::bindStringForAnyCollection((int)v1, &v61, (int)&v59, (int)&v57);
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
}


void __fastcall MashupScreenController::~MashupScreenController(MashupScreenController *this)
{
  MashupScreenController *v1; // r0@1

  v1 = MashupScreenController::~MashupScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


ModalScreenData *__fastcall MashupScreenController::_openMissingContentDialog(MashupScreenController *this)
{
  MashupScreenController *v1; // r4@1
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
  sub_15903F4(&v6, "store.popup.purchaseFailed.title", (_BYTE *)0x20);
  sub_15903F4(&v10, "store.mashup.missingContent", (_BYTE *)0x1B);
  sub_15903F4(&v16, "gui.close", (_BYTE *)9);
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


void __fastcall MashupScreenController::_registerEventHandlers(MashupScreenController *this)
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
  sub_1590164((void **)&v28, "button.prompt_for_action");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11C716A;
  *v3 = v1;
  HIDWORD(v4) = sub_11C715C;
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
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  sub_1590164((void **)&v25, "navigation_tab");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v25);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11C71A8;
  *v7 = v1;
  HIDWORD(v8) = sub_11C71A0;
  v23 = v7;
  v24 = v8;
  ScreenController::registerToggleChangeEventHandler((int)v1, v6, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  sub_1590164((void **)&v22, "button.coin_wallet");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v22);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11C71F0;
  *v11 = v1;
  HIDWORD(v12) = sub_11C71DE;
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
      j_j_j_j_j__ZdlPv_9_2(v13);
}


int __fastcall MashupScreenController::_createTabs(MashupScreenController *this)
{
  MashupScreenController *v1; // r8@1
  char *v2; // r9@1
  __int64 v3; // r10@1
  int *v4; // r7@2
  char *v5; // r4@2
  signed int v6; // r5@2
  void (__fastcall *v7)(int *); // r3@3
  int v8; // r0@3
  unsigned int *v9; // r0@4
  unsigned int v10; // r2@6
  int v11; // r6@9
  unsigned int *v12; // r1@10
  unsigned int v13; // r0@12
  char *v14; // r11@16
  char *v15; // r9@16
  unsigned int *v16; // r4@16
  unsigned int v17; // r0@18
  int v18; // r6@25
  unsigned int *v19; // r1@26
  unsigned int v20; // r0@28
  char *v21; // r11@32
  char *v22; // r9@32
  unsigned int *v23; // r4@32
  unsigned int v24; // r0@34
  unsigned int v25; // r0@42
  __int64 v26; // kr00_8@42
  unsigned int v27; // r7@42
  unsigned int v28; // r4@42
  _DWORD *v29; // r0@42
  int v30; // r6@43
  _DWORD *v31; // r11@43
  int v32; // r8@43
  _DWORD *v33; // r9@45
  int v34; // r1@47
  int result; // r0@56
  char *v36; // [sp+0h] [bp-50h]@2
  MashupScreenController *v37; // [sp+4h] [bp-4Ch]@1
  int v38; // [sp+8h] [bp-48h]@1
  int v39; // [sp+Ch] [bp-44h]@42
  int v40; // [sp+18h] [bp-38h]@3
  int v41; // [sp+1Ch] [bp-34h]@3
  int v42; // [sp+20h] [bp-30h]@2
  char v43; // [sp+24h] [bp-2Ch]@2
  int v44; // [sp+28h] [bp-28h]@9

  v1 = this;
  v2 = (char *)this + 456;
  v37 = this;
  v3 = *(_QWORD *)((char *)this + 460);
  v38 = HIDWORD(v3);
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    v4 = &v42;
    v5 = &v43;
    v6 = -1;
    v36 = (char *)this + 456;
    do
    {
      v7 = *(void (__fastcall **)(int *))(**(_DWORD **)v3 + 8);
      v40 = *((_DWORD *)v1 + 106);
      v8 = *((_DWORD *)v1 + 107);
      v41 = v8;
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
      v7(v4);
      std::__shared_ptr<ScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<ScreenController,std::default_delete<ScreenController>>(
        (int)v5,
        v4);
      ScreenController::_registerSubController((int)v1, (int)v5);
      v11 = v44;
      if ( v44 )
        v12 = (unsigned int *)(v44 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          v14 = v2;
          v15 = v5;
          v16 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          if ( &pthread_create )
          {
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
          }
          else
            v17 = (*v16)--;
          v5 = v15;
          v2 = (char *)HIDWORD(v3);
          HIDWORD(v3) = v38;
          if ( v17 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      if ( v42 )
        (*(void (**)(void))(*(_DWORD *)v42 + 4))();
      v18 = v41;
      ++v6;
      v42 = 0;
      if ( v41 )
        v19 = (unsigned int *)(v41 + 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 == 1 )
          v21 = v2;
          v22 = v5;
          v23 = (unsigned int *)(v18 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          v5 = v22;
          if ( v24 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
      if ( MashupTab::getToggle(*(MashupTab **)v3) == 1 )
        if ( *(_DWORD *)v2 >= 0 )
          MashupTab::setToggle(*(MashupTab **)(*((_DWORD *)v1 + 115) + 4 * *(_DWORD *)v2), 0);
        v39 = *(_DWORD *)v3;
        v25 = MashupTab::getTabType(*(MashupTab **)v3);
        v26 = *((_QWORD *)v1 + 59);
        v27 = v25;
        v28 = v25 % (unsigned int)(*((_QWORD *)v1 + 59) >> 32);
        v29 = *(_DWORD **)(v26 + 4 * v28);
        if ( v29 )
          v30 = HIDWORD(v3);
          v31 = (_DWORD *)*v29;
          v32 = *(_DWORD *)(*v29 + 4);
          while ( v27 != v32 )
            v33 = (_DWORD *)*v31;
            if ( *v31 )
            {
              v32 = v33[1];
              v29 = v31;
              v31 = (_DWORD *)*v31;
              if ( v33[1] % HIDWORD(v26) == v28 )
                continue;
            }
            v34 = 0;
            v1 = v37;
            v2 = v36;
            HIDWORD(v3) = v30;
            goto LABEL_49;
          v4 = &v42;
          if ( v29 )
            v34 = *v29;
          v1 = v37;
          v2 = v36;
          v5 = &v43;
          HIDWORD(v3) = v30;
          v34 = 0;
LABEL_49:
        MashupTab::setTabName(v39, (int *)(v34 + 8));
        *(_DWORD *)v2 = v6;
      LODWORD(v3) = v3 + 4;
    }
    while ( (_DWORD)v3 != HIDWORD(v3) );
  }
  result = *(_DWORD *)v2;
  if ( *(_DWORD *)v2 == -1 )
    *((_DWORD *)v1 + 114) = 0;
    result = MashupTab::setToggle(**((MashupTab ***)v1 + 115), 1);
  return result;
}


void __fastcall MashupScreenController::_handleTabSelectionExitBehavior(MashupScreenController *this)
{
  MashupScreenController::_handleTabSelectionExitBehavior(this);
}


signed int __fastcall MashupScreenController::_handleNavigationClick(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  signed int result; // r0@2
  int v6; // r4@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // [sp+4h] [bp-1Ch]@3

  v2 = a1;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a1 + 456);
  if ( v3 == v4 )
  {
    result = 0;
  }
  else
    MashupTab::setToggle(*(MashupTab **)(*(_DWORD *)(v2 + 460) + 4 * v4), 0);
    MashupTab::setToggle(*(MashupTab **)(*(_DWORD *)(v2 + 460) + 4 * v3), 1);
    *(_DWORD *)(v2 + 456) = v3;
    v6 = *(_DWORD *)(v2 + 424);
    sub_1590164((void **)&v10, (const char *)&unk_257BC67);
    MinecraftScreenModel::fireEventScreenChanged(v6, &v10);
    v7 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v10 - 4);
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
        j_j_j_j_j__ZdlPv_9_2(v7);
    }
    result = 1;
  return result;
}


void __fastcall MashupScreenController::_registerTabNames(MashupScreenController *this)
{
  MashupScreenController *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  char *v3; // r0@1
  char *v4; // r0@2
  char *v5; // r0@3
  char *v6; // r0@4
  char *v7; // r0@5
  char *v8; // r0@6
  char *v9; // r0@7
  char *v10; // r0@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  unsigned int *v19; // r2@26
  signed int v20; // r1@28
  unsigned int *v21; // r2@30
  signed int v22; // r1@32
  unsigned int *v23; // r2@34
  signed int v24; // r1@36
  unsigned int *v25; // r2@38
  signed int v26; // r1@40
  char v27; // [sp+4h] [bp-74h]@7
  char *v28; // [sp+10h] [bp-68h]@7
  int v29; // [sp+14h] [bp-64h]@7
  char *v30; // [sp+18h] [bp-60h]@7
  char v31; // [sp+1Ch] [bp-5Ch]@5
  char *v32; // [sp+28h] [bp-50h]@5
  int v33; // [sp+2Ch] [bp-4Ch]@5
  char *v34; // [sp+30h] [bp-48h]@5
  char v35; // [sp+34h] [bp-44h]@3
  char *v36; // [sp+40h] [bp-38h]@3
  int v37; // [sp+44h] [bp-34h]@3
  char *v38; // [sp+48h] [bp-30h]@3
  char v39; // [sp+4Ch] [bp-2Ch]@1
  char *v40; // [sp+58h] [bp-20h]@1
  int v41; // [sp+5Ch] [bp-1Ch]@1
  char *v42; // [sp+60h] [bp-18h]@1

  v1 = this;
  sub_1590164((void **)&v40, "store.mashup.mashupPack");
  v41 = 0;
  v2 = (unsigned __int64 *)((char *)v1 + 472);
  v42 = v40;
  v40 = (char *)&unk_28898CC;
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<std::pair<int,std::string>>(
    &v39,
    (unsigned __int64 *)v1 + 59,
    (int)&v41);
  v3 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v42 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v3);
  }
  v4 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v40 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v4);
  sub_1590164((void **)&v36, "store.mashup.skinPack");
  v37 = 2;
  v38 = v36;
  v36 = (char *)&unk_28898CC;
    &v35,
    v2,
    (int)&v37);
  v5 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v38 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v5);
  v6 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v36 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v6);
  sub_1590164((void **)&v32, "store.mashup.world");
  v33 = 3;
  v34 = v32;
  v32 = (char *)&unk_28898CC;
    &v31,
    (int)&v33);
  v7 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v34 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v7);
  v8 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v32 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v8);
  sub_1590164((void **)&v28, "store.mashup.texturePack");
  v29 = 1;
  v30 = v28;
  v28 = (char *)&unk_28898CC;
    &v27,
    (int)&v29);
  v9 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v30 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  v10 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v28 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v10);
}


void __fastcall MashupScreenController::getAdditionalScreenInfo(MashupScreenController *this, int a2)
{
  MashupScreenController::getAdditionalScreenInfo(this, a2);
}


void __fastcall MashupScreenController::_getButtonText(MashupScreenController *this, int a2)
{
  int v2; // r8@1
  StoreCatalogItemModel *v3; // r6@1
  void **v4; // r10@1
  int v5; // r7@1
  int v6; // r6@5
  DlcBatchModel *v7; // r5@5
  int v8; // r6@5
  char *v9; // r7@5
  char *v10; // r1@6
  unsigned int *v11; // r2@7
  signed int v12; // r4@9
  char *v13; // r4@13
  int *v14; // r0@14
  void *v15; // r0@19
  signed int v16; // r0@20
  char *v17; // r7@25
  char *v18; // r4@26
  int v19; // r6@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  int *v22; // r0@36
  void *v23; // r0@41
  unsigned int *v24; // r2@42
  signed int v25; // r1@44
  unsigned int v26; // r0@47
  unsigned int *v27; // r2@56
  signed int v28; // r1@58
  int v29; // [sp+Ch] [bp-54h]@5
  char *v30; // [sp+10h] [bp-50h]@5
  char *v31; // [sp+14h] [bp-4Ch]@5
  char *v32; // [sp+18h] [bp-48h]@5
  int v33; // [sp+1Ch] [bp-44h]@26
  char *v34; // [sp+20h] [bp-40h]@26
  char *v35; // [sp+24h] [bp-3Ch]@26
  char *v36; // [sp+28h] [bp-38h]@26
  int v37; // [sp+30h] [bp-30h]@50
  char v38; // [sp+38h] [bp-28h]@6

  v2 = a2;
  v3 = (StoreCatalogItemModel *)(a2 + 452);
  v4 = (void **)this;
  v5 = StoreCatalogItemModel::getItemPerformanceRequirements((StoreCatalogItemModel *)(a2 + 452));
  if ( v5 > MainMenuScreenModel::getDevicePerfTier(*(MainMenuScreenModel **)(v2 + 424)) )
  {
    sub_1590164(v4, "store.itemIsIncompatible");
    return;
  }
  if ( StoreCatalogItemModel::isOwned(v3) )
    v6 = *(_DWORD *)(v2 + 424);
    sub_15901A4(&v29, (int *)(v2 + 444));
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v30 = (char *)operator new(4u);
    v32 = v30 + 4;
    v31 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v29,
                    (int)&v30,
                    (int)v30);
    v7 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(v6, (unsigned __int64 *)&v30);
    v8 = (int)v31;
    v9 = v30;
    if ( v30 != v31 )
    {
      v10 = &v38;
      do
      {
        v14 = (int *)(*(_DWORD *)v9 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
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
            v13 = v10;
            j_j_j_j_j__ZdlPv_9_2(v14);
            v10 = v13;
        }
        v9 += 4;
      }
      while ( v9 != (char *)v8 );
      v9 = v30;
    }
    if ( v9 )
      operator delete(v9);
    v15 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v15);
    v16 = DlcBatchModel::getDlcInstalledState(v7);
    if ( v16 == 2 )
      sub_1590164(v4, "store.content.update");
    else if ( v16 )
      v26 = *(_DWORD *)(v2 + 504);
      if ( v26 > 3 || v26 == 2 )
        MashupScreenController::_getButtonTextAction((MashupScreenController *)v4, v2);
        sub_1590164(v4, "store.mashup.continue");
    else
      sub_1590164(v4, "store.content.download");
  if ( StoreCatalogItemModel::getStoreCategory(v3) == 2 )
    sub_15901A4((int *)v4, (int *)(v2 + 500));
  v17 = StoreCatalogItemModel::getPrice(v3);
  if ( !sub_1590284((const void **)v17, "0") )
    sub_1590164((void **)&v37, "store.free");
    I18n::get((int *)v4, (int **)&v37);
    v23 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) == &dword_28898C0 )
      return;
    v24 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
      __dmb();
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
LABEL_65:
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v23);
LABEL_64:
    v25 = (*v24)--;
    goto LABEL_65;
  sub_15901A4(&v33, (int *)v17);
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v34 = (char *)operator new(4u);
  v36 = v34 + 4;
  v35 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v33,
                  (int)&v34,
                  (int)v34);
  I18n::get((int *)v4, (int *)(v2 + 500), (unsigned __int64 *)&v34);
  v19 = (int)v35;
  v18 = v34;
  if ( v34 != v35 )
    do
      v22 = (int *)(*(_DWORD *)v18 - 12);
      if ( v22 != &dword_28898C0 )
        v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        else
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v22);
      v18 += 4;
    while ( v18 != (char *)v19 );
    v18 = v34;
  if ( v18 )
    operator delete(v18);
  v23 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v33 - 4);
      goto LABEL_65;
    goto LABEL_64;
}


void *__fastcall MashupScreenController::_getButtonTextAction(MashupScreenController *this, int a2)
{
  void **v2; // r4@1
  void *result; // r0@2

  v2 = (void **)this;
  switch ( MashupTab::getTabType(*(MashupTab **)((*(_QWORD *)(a2 + 456) >> 32) + 4 * *(_QWORD *)(a2 + 456))) )
  {
    case 0:
      result = sub_1590164(v2, "store.mashup.createWorld");
      break;
    case 2:
      result = sub_1590164(v2, "store.mashup.equipSkin");
    case 3:
    case 1:
      result = sub_1590164(v2, "store.resourcePack.activateTexturePack");
    default:
      result = sub_15901A4((int *)v2, (int *)&Util::EMPTY_STRING);
  }
  return result;
}


void **__fastcall MashupScreenController::_getStartingFocusId(MashupScreenController *this, int a2, int a3)
{
  int v3; // r5@1
  void **v4; // r4@1
  int v5; // r6@1
  int v6; // r0@1
  __int64 v7; // r2@1
  void **result; // r0@5
  void **v9; // [sp+4h] [bp-1Ch]@7

  v3 = a2;
  v4 = (void **)this;
  v5 = a3;
  v6 = MashupTab::getTabType(*(MashupTab **)((*(_QWORD *)(a2 + 456) >> 32) + 4 * *(_QWORD *)(a2 + 456)));
  if ( (unsigned int)(v6 - 1) >= 2
    && (v6 || StoreCatalogItemModel::getStoreCategory((StoreCatalogItemModel *)(v3 + 452)) == 2) )
  {
    if ( v5 == 1 )
    {
      result = sub_1590164(v4, "content_action_button_id");
    }
    else
      LODWORD(v7) = *(_DWORD *)(v3 + 456);
      Util::format((Util *)&v9, "mashup_tab_id_%d", v7);
      result = v9;
      *v4 = v9;
  }
  else
    result = sub_1590164(v4, "grid_button_0");
  return result;
}


void __fastcall MashupScreenController::_handleButtonPress(MashupScreenController *this)
{
  MashupScreenController *v1; // r8@1
  StoreCatalogItemModel *v2; // r10@1
  int v3; // r6@2
  char *v4; // r0@2
  int v5; // r0@2
  DlcBatchModel *v6; // r4@2
  int v7; // r6@2
  char *v8; // r7@2
  char *v9; // r1@3
  unsigned int *v10; // r2@4
  signed int v11; // r5@6
  char *v12; // r4@10
  int *v13; // r0@11
  void *v14; // r0@16
  int v15; // r4@18
  int *v16; // r0@18
  char *v17; // r4@20
  int v18; // r6@20
  int *v19; // r0@22
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  int *v22; // r0@31
  void *v23; // r0@36
  unsigned int *v24; // r2@37
  signed int v25; // r1@39
  int v26; // r0@41
  int v27; // r6@45
  unsigned __int64 *v28; // r0@45
  WorldTemplateInfo *v29; // r1@45
  unsigned int *v30; // r2@49
  signed int v31; // r1@51
  DlcBatchModel *v32; // [sp+Ch] [bp-5Ch]@3
  char v33; // [sp+10h] [bp-58h]@18
  void (*v34)(void); // [sp+18h] [bp-50h]@18
  int v35; // [sp+20h] [bp-48h]@18
  char *v36; // [sp+24h] [bp-44h]@18
  char *v37; // [sp+28h] [bp-40h]@18
  char *v38; // [sp+2Ch] [bp-3Ch]@18
  int v39; // [sp+30h] [bp-38h]@2
  char *v40; // [sp+34h] [bp-34h]@2
  char *v41; // [sp+38h] [bp-30h]@2
  char *v42; // [sp+3Ch] [bp-2Ch]@2
  char v43; // [sp+40h] [bp-28h]@3

  v1 = this;
  v2 = (MashupScreenController *)((char *)this + 452);
  if ( !StoreCatalogItemModel::isOwned((MashupScreenController *)((char *)this + 452)) )
  {
    v19 = (int *)StoreCatalogItemModel::getProductId(v2);
    j_j_j__ZN31PurchaseEnabledScreenController14_purchaseOfferERKSs_0((int)v1, v19);
    return;
  }
  v3 = *((_DWORD *)v1 + 106);
  sub_15901A4(&v39, (int *)v1 + 111);
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v4 = (char *)operator new(4u);
  v40 = v4;
  v42 = v4 + 4;
  v41 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v39,
                  (int)&v40,
                  (int)v4);
  v5 = MainMenuScreenModel::getDlcBatchModel(v3, (unsigned __int64 *)&v40);
  v6 = (DlcBatchModel *)v5;
  v7 = (int)v41;
  v8 = v40;
  if ( v40 != v41 )
    v9 = &v43;
    v32 = (DlcBatchModel *)v5;
    do
    {
      v13 = (int *)(*(_DWORD *)v8 - 12);
      if ( v13 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
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
          v12 = v9;
          j_j_j_j_j__ZdlPv_9_2(v13);
          v9 = v12;
      }
      v8 += 4;
    }
    while ( v8 != (char *)v7 );
    v8 = v40;
    v6 = v32;
  if ( v8 )
    operator delete(v8);
  v14 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v14);
  if ( (DlcBatchModel::getDlcInstalledState(v6) | 2) != 2 )
    v26 = *((_DWORD *)v1 + 126);
    if ( v26 != 4 )
      if ( v26 == 3 )
        v27 = *((_DWORD *)v1 + 106);
        v28 = (unsigned __int64 *)StoreCatalogItemModel::getPackIdentities(v2);
        v29 = MainMenuScreenModel::findWorldTemplateByPackId(v27, v28);
        if ( v29 )
          MainMenuScreenModel::navigateToWorldTemplateScreen(*((MainMenuScreenModel **)v1 + 106), v29);
          MashupScreenController::_openMissingContentDialog(v1);
        return;
      if ( v26 != 2 )
        MinecraftScreenModel::leaveScreen(*((MinecraftScreenModel **)v1 + 106));
    MashupScreenController::_handleTabSelectionExitBehavior(v1);
  v15 = *((_DWORD *)v1 + 108);
  v16 = (int *)StoreCatalogItemModel::getProductId(v2);
  sub_15901A4(&v35, v16);
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v36 = (char *)operator new(4u);
  v38 = v36 + 4;
  v37 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v35,
                  (int)&v36,
                  (int)v36);
  v34 = 0;
  DlcPreCheckScreenHandler::tryDownload(v15, (unsigned __int64 *)&v36, (int)&v33, 0, 0, 0, 0);
  if ( v34 )
    v34();
  v18 = (int)v37;
  v17 = v36;
  if ( v36 != v37 )
      v22 = (int *)(*(_DWORD *)v17 - 12);
      if ( v22 != &dword_28898C0 )
        v20 = (unsigned int *)(*(_DWORD *)v17 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v22);
      v17 += 4;
    while ( v17 != (char *)v18 );
    v17 = v36;
  if ( v17 )
    operator delete(v17);
  v23 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v35 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v23);
}
