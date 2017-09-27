

void __fastcall ResourcePacksScreenController::_getCollectionName(ResourcePacksScreenController *this, UIPropertyBag *a2, int a3)
{
  int v3; // r5@1
  int *v4; // r4@1
  Json::Value *v5; // r5@1
  Json::Value *v6; // r5@3
  char *v7; // r1@4
  char *v8; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  char *v11; // [sp+8h] [bp-20h]@1
  char v12; // [sp+14h] [bp-14h]@4

  v3 = a3;
  v4 = (int *)this;
  sub_21E94B4((void **)&v11, (const char *)&unk_257BC67);
  v5 = (Json::Value *)(v3 + 8);
  if ( Json::Value::isNull(v5)
    || Json::Value::isObject(v5) != 1
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#collection_name"), Json::Value::isString(v6) != 1) )
  {
    *v4 = (int)v11;
    v7 = (char *)&unk_28898CC;
    v11 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as(v4, (int)&v12, (int)v6);
    v7 = v11;
  v8 = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
}


signed int __fastcall ResourcePacksScreenController::_handleSortPackClicked(ResourcePacksScreenController *this, UIPropertyBag *a2, int a3)
{
  Json::Value *v3; // r6@1
  ResourcePacksScreenController *v4; // r4@1
  int v5; // r5@1
  int v6; // r6@2
  Json::Value *v7; // r6@4
  int v8; // r7@9
  int v9; // r0@9
  __int64 v10; // r1@10

  v3 = (UIPropertyBag *)((char *)a2 + 8);
  v4 = this;
  v5 = a3;
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8)) )
  {
    v6 = -1;
  }
  else if ( Json::Value::isObject(v3) == 1 )
    v7 = (Json::Value *)Json::Value::operator[]((int)v3, "#collection_index");
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  v8 = ContentView::getItem(*((ContentView **)v4 + 130), v6);
  v9 = ContentView::getItem(*((ContentView **)v4 + 130), v6 + v5);
  if ( v9 )
    v10 = *(_QWORD *)(v8 + 296);
    *(_QWORD *)(v8 + 296) = *(_QWORD *)(v9 + 296);
    *(_QWORD *)(v9 + 296) = v10;
  ContentManager::reloadViews(*((ContentManager **)v4 + 129));
  return 1;
}


int *__fastcall ResourcePacksScreenController::_getCyclingIconZip(ResourcePacksScreenController *this, int a2)
{
  int v2; // r5@1
  ResourcePack *v3; // r4@1
  unsigned int v4; // r6@4
  ContentView *v5; // r0@2
  ContentView *v6; // r0@6
  int v7; // r0@8
  int *result; // r0@8
  int v9; // r0@9

  v2 = a2;
  v3 = this;
  if ( *(_BYTE *)(a2 + 564) )
    v5 = *(ContentView **)(a2 + 520);
  else
    v5 = *(ContentView **)(a2 + 524);
  v4 = *(_DWORD *)(a2 + 560);
  if ( v4 >= ContentView::getNumberOfItems(v5) )
  {
    v9 = MinecraftScreenModel::getResourcePackRepository(*(MinecraftScreenModel **)(v2 + 380));
    result = ResourcePack::getIconZipPath(v3, *(_DWORD *)(v9 + 40));
  }
    if ( *(_BYTE *)(v2 + 564) )
      v6 = *(ContentView **)(v2 + 520);
    else
      v6 = *(ContentView **)(v2 + 524);
    v7 = ContentView::getItem(v6, *(_DWORD *)(v2 + 560));
    result = sub_21E8AF4((int *)v3, (int *)(v7 + 68));
  return result;
}


void __fastcall ResourcePacksScreenController::_showStoreConnectFailedMessage(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController::_showStoreConnectFailedMessage(this);
}


void __fastcall ResourcePacksScreenController::_moveResource(int a1, int a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  int v6; // r7@1
  unsigned int v7; // r9@1
  unsigned int v8; // r5@1
  int v9; // r4@1
  signed int v10; // r11@2
  int v11; // r0@3
  int v12; // r5@7
  __int64 v13; // r0@7
  char i; // r8@7
  int v15; // t1@8
  int v16; // r2@8
  PackManifest *v17; // r6@11
  _BOOL4 v18; // r0@11
  signed int v19; // r1@11
  char *v20; // r0@14
  int v21; // r5@14
  unsigned int v22; // r5@15
  bool v23; // zf@18
  __int64 v24; // r0@18
  bool v25; // zf@25
  _DWORD *v26; // r8@31
  int v27; // r0@31
  int v28; // r6@32
  bool v29; // zf@33
  int v30; // r10@36
  char v31; // r6@36
  char *v32; // r0@37
  __int64 v33; // r0@37
  void *v34; // r0@44
  unsigned int *v35; // r2@46
  signed int v36; // r1@48
  bool v37; // zf@54
  signed int v38; // r6@60
  signed int v39; // r5@60
  signed int v40; // r10@60
  __int64 v41; // r1@62
  int v42; // r0@62
  __int64 *v43; // r5@64
  signed int v44; // r6@64
  int v45; // r7@65
  int v46; // r0@65
  void *v47; // r0@70
  unsigned int *v48; // r2@72
  signed int v49; // r1@74
  int v50; // [sp+4h] [bp-4Ch]@36
  unsigned int v51; // [sp+8h] [bp-48h]@7
  int v52; // [sp+Ch] [bp-44h]@63
  __int64 v53; // [sp+10h] [bp-40h]@18
  int v54; // [sp+18h] [bp-38h]@18
  int v55; // [sp+1Ch] [bp-34h]@44
  int v56; // [sp+20h] [bp-30h]@3
  int v57; // [sp+24h] [bp-2Ch]@7

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  if ( !a2 )
    return;
  v10 = 2;
  if ( a4 == 2 )
  {
    v10 = 1;
    v56 = MinecraftScreenModel::getContentTierInfo(*(MinecraftScreenModel **)(a1 + 380));
    v11 = SubpackInfoCollection::isCompatible((__int64 *)(v6 + 308), &v56);
    if ( v11 )
    {
      ResourcePacksScreenController::_showIncompatibleMessage(v9, v11);
      return;
    }
  }
  v56 = 9;
  v51 = v8;
  sub_21E8AF4(&v57, (int *)&Util::EMPTY_STRING);
  v56 = 0;
  v12 = MainMenuScreenModel::getEntitlementManager(*(MainMenuScreenModel **)(v9 + 424));
  v13 = *(_QWORD *)(v6 + 332);
  for ( i = 0; HIDWORD(v13) != (_DWORD)v13; i |= v16 )
    v15 = *(_DWORD *)v13;
    LODWORD(v13) = v13 + 4;
    v16 = *(_DWORD *)(v15 + 76);
    if ( v16 != 1 )
      LOBYTE(v16) = 0;
  v17 = *(PackManifest **)(v6 + 60);
  v18 = MinecraftScreenModel::_isPremiumLocked(*(MinecraftScreenModel **)(v9 + 424), *(const PackManifest **)(v6 + 60));
  v19 = 0;
  if ( v7 == 2 )
    v19 = 1;
  if ( (v18 & v19) == 1 )
    v20 = PackManifest::getIdentity(v17);
    v21 = EntitlementManager::getEntitlement((EntitlementManager *)v12, (const mce::UUID *)v20);
    if ( Entitlement::isOwned((Entitlement *)v21) )
      v22 = v51;
      v56 = 1;
    else
      sub_21E8AF4(&v55, (int *)(v21 + 20));
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v57, &v55);
      v34 = (void *)(v55 - 12);
      if ( (int *)(v55 - 12) != &dword_28898C0 )
      {
        v35 = (unsigned int *)(v55 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        }
        else
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      }
      v56 = 6;
    goto LABEL_70;
  if ( !(i & 1) )
    LODWORD(v24) = operator new(4u);
    v23 = v7 == 2;
    *(_DWORD *)v24 = v6;
    HIDWORD(v24) = v24 + 4;
    v53 = v24;
    v54 = v24 + 4;
    if ( v7 == 2 )
      v23 = a5 == 1;
    if ( v23 )
      v12 = 0;
      do
        v56 = ResourcePacksScreenController::_addDependencies(v9, *(_DWORD *)(v24 + 4 * v12), (int)&v53, a6);
        if ( v56 )
          break;
        LODWORD(v24) = v53;
        ++v12;
      while ( v12 < (HIDWORD(v53) - (signed int)v53) >> 2 );
    v25 = *(_BYTE *)(v9 + 660) == 0;
    if ( !*(_BYTE *)(v9 + 660) )
      v25 = v7 == 2;
    if ( v25 && *(_QWORD *)(v6 + 32) == 4LL )
      v56 = 3;
      *(_BYTE *)(v9 + 660) = 1;
    v26 = (_DWORD *)v53;
    v27 = v56;
    if ( !v56 )
      v28 = HIDWORD(v53);
      if ( (_DWORD)v53 != HIDWORD(v53) )
        v29 = v7 == 2;
        if ( v7 != 2 )
          v27 = *(_QWORD *)(v9 + 648) >> 32;
          v12 = *(_QWORD *)(v9 + 648);
          v29 = v12 == v27;
        if ( !v29 )
          v30 = v27 - 48;
          v50 = HIDWORD(v53);
          v31 = 0;
          {
            v32 = PackManifest::getIdentity(*(PackManifest **)(*v26 + 60));
            v33 = (unsigned int)PackIdVersion::operator==((int)v32, v12);
            v23 = v30 == v12;
            v31 |= v33;
            v12 += 48;
            if ( v23 )
              HIDWORD(v33) = 1;
          }
          while ( !v33 );
          v23 = (v31 & 1) == 0;
          v28 = v50;
          if ( !v23 )
            if ( PackManifest::hasModuleType(*(_DWORD *)(*v26 + 60), 3)
              || PackManifest::hasModuleType(*(_DWORD *)(*v26 + 60), 4) == 1 )
            {
              v56 = 7;
              goto LABEL_68;
            }
            v37 = *(_QWORD *)(*v26 + 32) == 4LL;
            if ( *(_QWORD *)(*v26 + 32) == 4LL )
              v37 = *(_BYTE *)(v9 + 644) == 0;
            if ( v37 )
              v56 = 2;
              *(_BYTE *)(v9 + 644) = 1;
      if ( !v56 )
        v38 = v28 - (_DWORD)v26;
        v39 = 0;
        v40 = v38 >> 2;
        while ( v39 < ContentView::getNumberOfItems(*(ContentView **)(v9 + 520)) )
          v42 = ContentView::getItem(*(ContentView **)(v9 + 520), v39);
          LODWORD(v41) = v40 + v39++;
          HIDWORD(v41) = (signed int)v41 >> 31;
          *(_QWORD *)(v42 + 296) = v41;
        v52 = MinecraftScreenModel::getContentTierInfo(*(MinecraftScreenModel **)(v9 + 380));
        if ( v38 >= 1 )
          v43 = (__int64 *)(v6 + 308);
          v44 = 0;
            v45 = v26[v44];
            *(_DWORD *)(v45 + 76) = v10;
            v46 = SubpackInfoCollection::getDefaultSubpackIndex(v43, &v52);
            *(_DWORD *)(v45 + 296) = v44;
            *(_DWORD *)(v45 + 300) = v44++ >> 31;
            *(_DWORD *)(v45 + 304) = v46;
          while ( v44 < v40 );
        ContentManager::reloadViews(*(ContentManager **)(v9 + 516));
    if ( !v26 )
      goto LABEL_69;
LABEL_68:
    operator delete(v26);
    goto LABEL_69;
  v56 = 5;
LABEL_69:
  v22 = v51;
LABEL_70:
  ResourcePacksScreenController::_handleMovePackResult((ResourcePacksScreenController *)v9, &v56, __PAIR__(v7, v22));
  ResourcePacksScreenController::_determineHasLockedContent((ResourcePacksScreenController *)v9);
  ContentManager::reloadViews(*(ContentManager **)(v9 + 516));
  v47 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v57 - 4);
    if ( &pthread_create )
      __dmb();
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
}


signed int __fastcall ResourcePacksScreenController::_getPackListType(ResourcePacksScreenController *this, UIPropertyBag *a2)
{
  ResourcePacksScreenController *v2; // r4@1
  void *v3; // r6@1
  size_t v4; // r7@1
  char *v5; // r5@3
  signed int v6; // r4@3
  char *v7; // r0@9
  void *v8; // r0@10
  char *v9; // r0@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  void *v19; // [sp+0h] [bp-28h]@1
  void *s2; // [sp+4h] [bp-24h]@1
  int v21; // [sp+8h] [bp-20h]@1
  void *s1; // [sp+Ch] [bp-1Ch]@1

  v2 = this;
  ResourcePacksScreenController::_getCollectionName((ResourcePacksScreenController *)&s1, a2, (int)a2);
  sub_13ED14C((void **)&v21, *((_BYTE *)v2 + 532));
  s2 = &unk_28898CC;
  sub_21E6FCC((const void **)&s2, *(_DWORD *)(v21 - 12) + 20);
  sub_21E7408((const void **)&s2, "#selected_pack_items", 0x14u);
  sub_21E72F0((const void **)&s2, (const void **)&v21);
  v19 = &unk_28898CC;
  sub_21E6FCC((const void **)&v19, *(_DWORD *)(v21 - 12) + 21);
  sub_21E7408((const void **)&v19, "#available_pack_items", 0x15u);
  sub_21E72F0((const void **)&v19, (const void **)&v21);
  v3 = s1;
  v4 = *((_DWORD *)s1 - 3);
  if ( v4 == *((_DWORD *)s2 - 3) && !memcmp(s1, s2, *((_DWORD *)s1 - 3)) )
  {
    v5 = (char *)v19;
    v6 = 1;
  }
  else
    v6 = 3;
    if ( v4 == *((_DWORD *)v19 - 3) && !memcmp(v3, v19, v4) )
      v6 = 2;
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v5 - 4);
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
      j_j_j_j__ZdlPv_9(v5 - 12);
  v7 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)((char *)s2 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)((char *)s1 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return v6;
}


void __fastcall ResourcePacksScreenController::_registerEventHandlers(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController::_registerEventHandlers(this);
}


void __fastcall ResourcePacksScreenController::~ResourcePacksScreenController(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController *v1; // r0@1

  v1 = ResourcePacksScreenController::~ResourcePacksScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall ResourcePacksScreenController::_determineHasLockedContent(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController *v1; // r4@1
  int v2; // r5@1
  __int64 v3; // kr00_8@3
  int result; // r0@4
  void *v5; // [sp+0h] [bp-20h]@1
  int (__fastcall *v6)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v7)(int, int); // [sp+Ch] [bp-14h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 130);
  v5 = operator new(1u);
  v6 = sub_13F0210;
  v7 = sub_13F020A;
  ContentView::countIf(v2, (int)&v5);
  if ( v6 )
    ((void (__cdecl *)(void **))v6)(&v5);
  v3 = *((_QWORD *)v1 + 69);
  if ( *((_QWORD *)v1 + 69) == 3LL )
  {
    result = (*(int (__cdecl **)(_DWORD))(**((_DWORD **)v1 + 149) + 16))(*((_DWORD *)v1 + 149));
  }
  else
    result = HIDWORD(v3) | v3 ^ 4;
    if ( v3 == 4 )
      result = (*(int (__cdecl **)(_DWORD))(**((_DWORD **)v1 + 149) + 12))(*((_DWORD *)v1 + 149));
  return result;
}


int __fastcall ResourcePacksScreenController::_getCollectionIndex(ResourcePacksScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r4@1
  Json::Value *v3; // r4@3
  int result; // r0@5

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8))
    || Json::Value::isObject(v2) != 1
    || (v3 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index"), !Json::Value::isInt(v3))
    && Json::Value::isUInt(v3) != 1 )
  {
    result = -1;
  }
  else
    result = j_j_j__ZNK4Json5Value5asIntEi_2(v3, 0);
  return result;
}


void __fastcall ResourcePacksScreenController::_registerEventHandlers(ResourcePacksScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  char *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  char *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  char *v13; // r0@9
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  char *v17; // r0@12
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  char *v21; // r0@15
  int v22; // r5@16
  _DWORD *v23; // r0@16
  __int64 v24; // r1@16
  char *v25; // r0@18
  int v26; // r5@19
  _DWORD *v27; // r0@19
  __int64 v28; // r1@19
  char *v29; // r0@21
  int v30; // r5@22
  _DWORD *v31; // r0@22
  __int64 v32; // r1@22
  char *v33; // r0@24
  int v34; // r5@25
  _DWORD *v35; // r0@25
  __int64 v36; // r1@25
  char *v37; // r0@27
  int v38; // r5@28
  _DWORD *v39; // r0@28
  __int64 v40; // r1@28
  char *v41; // r0@30
  int v42; // r5@31
  _DWORD *v43; // r0@31
  __int64 v44; // r1@31
  char *v45; // r0@33
  int v46; // r5@34
  _DWORD *v47; // r0@34
  __int64 v48; // r1@34
  char *v49; // r0@36
  void *v50; // r0@37
  unsigned int *v51; // r2@39
  signed int v52; // r1@41
  unsigned int *v53; // r2@43
  signed int v54; // r1@45
  unsigned int *v55; // r2@47
  signed int v56; // r1@49
  unsigned int *v57; // r2@51
  signed int v58; // r1@53
  unsigned int *v59; // r2@55
  signed int v60; // r1@57
  unsigned int *v61; // r2@59
  signed int v62; // r1@61
  unsigned int *v63; // r2@63
  signed int v64; // r1@65
  unsigned int *v65; // r2@67
  signed int v66; // r1@69
  unsigned int *v67; // r2@71
  signed int v68; // r1@73
  unsigned int *v69; // r2@75
  signed int v70; // r1@77
  unsigned int *v71; // r2@79
  signed int v72; // r1@81
  unsigned int *v73; // r2@83
  signed int v74; // r1@85
  unsigned int *v75; // r2@87
  signed int v76; // r1@89
  _DWORD *v77; // [sp+0h] [bp-108h]@34
  __int64 v78; // [sp+8h] [bp-100h]@34
  char *v79; // [sp+10h] [bp-F8h]@34
  _DWORD *v80; // [sp+14h] [bp-F4h]@31
  __int64 v81; // [sp+1Ch] [bp-ECh]@31
  char *v82; // [sp+24h] [bp-E4h]@31
  _DWORD *v83; // [sp+28h] [bp-E0h]@28
  __int64 v84; // [sp+30h] [bp-D8h]@28
  char *v85; // [sp+38h] [bp-D0h]@28
  _DWORD *v86; // [sp+3Ch] [bp-CCh]@25
  __int64 v87; // [sp+44h] [bp-C4h]@25
  char *v88; // [sp+4Ch] [bp-BCh]@25
  _DWORD *v89; // [sp+50h] [bp-B8h]@22
  __int64 v90; // [sp+58h] [bp-B0h]@22
  char *v91; // [sp+60h] [bp-A8h]@22
  _DWORD *v92; // [sp+64h] [bp-A4h]@19
  __int64 v93; // [sp+6Ch] [bp-9Ch]@19
  char *v94; // [sp+74h] [bp-94h]@19
  _DWORD *v95; // [sp+78h] [bp-90h]@16
  __int64 v96; // [sp+80h] [bp-88h]@16
  char *v97; // [sp+88h] [bp-80h]@16
  _DWORD *v98; // [sp+8Ch] [bp-7Ch]@13
  __int64 v99; // [sp+94h] [bp-74h]@13
  char *v100; // [sp+9Ch] [bp-6Ch]@13
  _DWORD *v101; // [sp+A0h] [bp-68h]@10
  __int64 v102; // [sp+A8h] [bp-60h]@10
  char *v103; // [sp+B0h] [bp-58h]@10
  _DWORD *v104; // [sp+B4h] [bp-54h]@7
  __int64 v105; // [sp+BCh] [bp-4Ch]@7
  char *v106; // [sp+C4h] [bp-44h]@7
  _DWORD *v107; // [sp+C8h] [bp-40h]@4
  __int64 v108; // [sp+D0h] [bp-38h]@4
  char *v109; // [sp+D8h] [bp-30h]@4
  _DWORD *v110; // [sp+DCh] [bp-2Ch]@1
  __int64 v111; // [sp+E4h] [bp-24h]@1
  char *v112; // [sp+ECh] [bp-1Ch]@1
  int v113; // [sp+F0h] [bp-18h]@1

  v1 = this;
  sub_13ED14C((void **)&v113, *((_BYTE *)this + 532));
  v112 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v112, *(_DWORD *)(v113 - 12) + 20);
  sub_21E7408((const void **)&v112, "button.selected_pack", 0x14u);
  sub_21E72F0((const void **)&v112, (const void **)&v113);
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v112);
  v3 = operator new(4u);
  LODWORD(v4) = sub_13F024C;
  *v3 = v1;
  HIDWORD(v4) = sub_13F023E;
  v110 = v3;
  v111 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v110);
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  v5 = v112 - 12;
  if ( (int *)(v112 - 12) != &dword_28898C0 )
  {
    v51 = (unsigned int *)(v112 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
    }
    else
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v109 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v109, *(_DWORD *)(v113 - 12) + 22);
  sub_21E7408((const void **)&v109, "button.deselected_pack", 0x16u);
  sub_21E72F0((const void **)&v109, (const void **)&v113);
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v109);
  v7 = operator new(4u);
  LODWORD(v8) = sub_13F0290;
  *v7 = v1;
  HIDWORD(v8) = sub_13F0282;
  v107 = v7;
  v108 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v107);
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  v9 = v109 - 12;
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v109 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v106 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v106, *(_DWORD *)(v113 - 12) + 21);
  sub_21E7408((const void **)&v106, "button.available_pack", 0x15u);
  sub_21E72F0((const void **)&v106, (const void **)&v113);
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v106);
  v11 = operator new(4u);
  LODWORD(v12) = sub_13F02D4;
  *v11 = v1;
  HIDWORD(v12) = sub_13F02C6;
  v104 = v11;
  v105 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  v13 = v106 - 12;
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v106 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v103 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v103, *(_DWORD *)(v113 - 12) + 19);
  sub_21E7408((const void **)&v103, "button.invalid_pack", 0x13u);
  sub_21E72F0((const void **)&v103, (const void **)&v113);
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v103);
  v15 = operator new(4u);
  LODWORD(v16) = sub_13F0318;
  *v15 = v1;
  HIDWORD(v16) = sub_13F030A;
  v101 = v15;
  v102 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v101);
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  v17 = v103 - 12;
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v103 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v100 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v100, *(_DWORD *)(v113 - 12) + 16);
  sub_21E7408((const void **)&v100, "button.move_left", 0x10u);
  sub_21E72F0((const void **)&v100, (const void **)&v113);
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v100);
  v19 = operator new(4u);
  LODWORD(v20) = sub_13F035C;
  *v19 = v1;
  HIDWORD(v20) = sub_13F034E;
  v98 = v19;
  v99 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v98);
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  v21 = v100 - 12;
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v100 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v97 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v97, *(_DWORD *)(v113 - 12) + 14);
  sub_21E7408((const void **)&v97, "button.sort_up", 0xEu);
  sub_21E72F0((const void **)&v97, (const void **)&v113);
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v97);
  v23 = operator new(4u);
  LODWORD(v24) = sub_13F03A4;
  *v23 = v1;
  HIDWORD(v24) = sub_13F0392;
  v95 = v23;
  v96 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v95);
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  v25 = v97 - 12;
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v97 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v94 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v94, *(_DWORD *)(v113 - 12) + 16);
  sub_21E7408((const void **)&v94, "button.sort_down", 0x10u);
  sub_21E72F0((const void **)&v94, (const void **)&v113);
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v94);
  v27 = operator new(4u);
  LODWORD(v28) = sub_13F03EA;
  *v27 = v1;
  HIDWORD(v28) = sub_13F03DA;
  v92 = v27;
  v93 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v92);
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  v29 = v94 - 12;
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v94 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v91 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v91, *(_DWORD *)(v113 - 12) + 20);
  sub_21E7408((const void **)&v91, "button.report_errors", 0x14u);
  sub_21E72F0((const void **)&v91, (const void **)&v113);
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v91);
  v31 = operator new(4u);
  LODWORD(v32) = sub_13F042E;
  *v31 = v1;
  HIDWORD(v32) = sub_13F0420;
  v89 = v31;
  v90 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v89);
  if ( (_DWORD)v90 )
    ((void (*)(void))v90)();
  v33 = v91 - 12;
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v91 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v88 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v88, *(_DWORD *)(v113 - 12) + 19);
  sub_21E7408((const void **)&v88, "pack_options_toggle", 0x13u);
  sub_21E72F0((const void **)&v88, (const void **)&v113);
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v88);
  v35 = operator new(4u);
  LODWORD(v36) = sub_13F04E8;
  *v35 = v1;
  HIDWORD(v36) = sub_13F0464;
  v86 = v35;
  v87 = v36;
  ScreenController::registerToggleChangeEventHandler((int)v1, v34, (int)&v86);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  v37 = v88 - 12;
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v88 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v85 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v85, *(_DWORD *)(v113 - 12) + 33);
  sub_21E7408((const void **)&v85, "button.resource_pack_options_exit", 0x21u);
  sub_21E72F0((const void **)&v85, (const void **)&v113);
  v38 = MinecraftScreenController::_getNameId(v1, (int **)&v85);
  v39 = operator new(4u);
  LODWORD(v40) = sub_13F05D0;
  *v39 = v1;
  HIDWORD(v40) = sub_13F0520;
  v83 = v39;
  v84 = v40;
  ScreenController::registerButtonClickHandler((int)v1, v38, (int)&v83);
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  v41 = v85 - 12;
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v85 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v82 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v82, *(_DWORD *)(v113 - 12) + 19);
  sub_21E7408((const void **)&v82, "content_tier_slider", 0x13u);
  sub_21E72F0((const void **)&v82, (const void **)&v113);
  v42 = MinecraftScreenController::_getNameId(v1, (int **)&v82);
  v43 = operator new(4u);
  LODWORD(v44) = sub_13F0626;
  *v43 = v1;
  HIDWORD(v44) = sub_13F0606;
  v80 = v43;
  v81 = v44;
  ScreenController::registerSliderChangedEventHandler((int)v1, v42, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  v45 = v82 - 12;
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v82 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v79 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v79, *(_DWORD *)(v113 - 12) + 19);
  sub_21E7408((const void **)&v79, "content_tier_slider", 0x13u);
  sub_21E72F0((const void **)&v79, (const void **)&v113);
  v46 = MinecraftScreenController::_getNameId(v1, (int **)&v79);
  v47 = operator new(4u);
  LODWORD(v48) = sub_13F067C;
  *v47 = v1;
  HIDWORD(v48) = sub_13F065C;
  v77 = v47;
  v78 = v48;
  ScreenController::registerSliderFinishedEventHandler((int)v1, v46, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v49 = v79 - 12;
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v79 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  v50 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v113 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
}


void __fastcall ResourcePacksScreenController::_registerBindings(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController *v1; // r4@1
  char *v2; // r5@1
  size_t v3; // r0@1
  int i; // r1@1
  int v5; // t1@2
  _DWORD *v6; // r0@3
  char *v7; // r0@7
  char *v8; // r5@8
  size_t v9; // r0@8
  int j; // r1@8
  int v11; // t1@9
  _DWORD *v12; // r0@10
  char *v13; // r0@14
  char *v14; // r5@15
  size_t v15; // r0@15
  int k; // r1@15
  int v17; // t1@16
  _DWORD *v18; // r0@17
  char *v19; // r0@21
  char *v20; // r5@22
  size_t v21; // r0@22
  int l; // r1@22
  int v23; // t1@23
  _DWORD *v24; // r0@24
  char *v25; // r0@28
  char *v26; // r5@29
  size_t v27; // r0@29
  int m; // r1@29
  int v29; // t1@30
  _DWORD *v30; // r0@31
  char *v31; // r0@35
  char *v32; // r5@36
  size_t v33; // r0@36
  int n; // r1@36
  int v35; // t1@37
  _DWORD *v36; // r0@38
  char *v37; // r0@42
  char *v38; // r5@43
  size_t v39; // r0@43
  int ii; // r1@43
  int v41; // t1@44
  _DWORD *v42; // r0@45
  char *v43; // r0@49
  char *v44; // r5@50
  size_t v45; // r0@50
  int jj; // r1@50
  int v47; // t1@51
  _DWORD *v48; // r0@52
  char *v49; // r0@56
  char *v50; // r5@57
  size_t v51; // r0@57
  int kk; // r1@57
  int v53; // t1@58
  _DWORD *v54; // r0@59
  char *v55; // r0@63
  char *v56; // r5@64
  size_t v57; // r0@64
  int ll; // r1@64
  int v59; // t1@65
  _DWORD *v60; // r0@66
  char *v61; // r5@70
  size_t v62; // r0@70
  int mm; // r1@70
  int v64; // t1@71
  _DWORD *v65; // r0@72
  char *v66; // r5@76
  size_t v67; // r0@76
  int nn; // r1@76
  int v69; // t1@77
  _DWORD *v70; // r0@78
  char *v71; // r5@82
  size_t v72; // r0@82
  int i1; // r1@82
  int v74; // t1@83
  _DWORD *v75; // r0@84
  char *v76; // r5@88
  size_t v77; // r0@88
  int i2; // r1@88
  int v79; // t1@89
  _DWORD *v80; // r0@90
  char *v81; // r5@94
  size_t v82; // r0@94
  int i3; // r1@94
  int v84; // t1@95
  _DWORD *v85; // r0@96
  char *v86; // r5@100
  size_t v87; // r0@100
  int i4; // r1@100
  int v89; // t1@101
  _DWORD *v90; // r0@102
  char *v91; // r5@106
  size_t v92; // r0@106
  int i5; // r1@106
  int v94; // t1@107
  _DWORD *v95; // r0@108
  char *v96; // r5@112
  size_t v97; // r0@112
  int i6; // r1@112
  int v99; // t1@113
  _DWORD *v100; // r0@114
  char *v101; // r5@118
  size_t v102; // r0@118
  int i7; // r1@118
  int v104; // t1@119
  _DWORD *v105; // r0@120
  char *v106; // r5@124
  size_t v107; // r0@124
  int i8; // r1@124
  int v109; // t1@125
  _DWORD *v110; // r0@126
  char *v111; // r5@130
  size_t v112; // r0@130
  int i9; // r1@130
  int v114; // t1@131
  _DWORD *v115; // r0@132
  char *v116; // r5@136
  size_t v117; // r0@136
  int i10; // r1@136
  int v119; // t1@137
  _DWORD *v120; // r0@138
  char *v121; // r5@142
  size_t v122; // r0@142
  int i11; // r1@142
  int v124; // t1@143
  _DWORD *v125; // r0@144
  char *v126; // r5@148
  size_t v127; // r0@148
  int i12; // r1@148
  int v129; // t1@149
  _DWORD *v130; // r0@150
  char *v131; // r5@154
  size_t v132; // r0@154
  int i13; // r2@154
  int v134; // t1@155
  _DWORD *v135; // r0@156
  char *v136; // r5@160
  size_t v137; // r0@160
  int i14; // r1@160
  int v139; // t1@161
  _DWORD *v140; // r0@162
  char *v141; // r5@166
  size_t v142; // r0@166
  int i15; // r1@166
  int v144; // t1@167
  _DWORD *v145; // r0@168
  char *v146; // r5@172
  size_t v147; // r0@172
  int i16; // r1@172
  int v149; // t1@173
  __int64 v150; // r1@174
  char *v151; // r5@178
  size_t v152; // r0@178
  int i17; // r1@178
  int v154; // t1@179
  void *v155; // r0@180
  __int64 v156; // r1@180
  __int64 v157; // r1@180
  char *v158; // r5@184
  size_t v159; // r0@184
  int i18; // r2@184
  int v161; // t1@185
  _DWORD *v162; // r0@186
  __int64 v163; // r1@186
  __int64 v164; // r1@186
  char *v165; // r5@190
  size_t v166; // r0@190
  int i19; // r1@190
  int v168; // t1@191
  _DWORD *v169; // r0@192
  __int64 v170; // r1@192
  __int64 v171; // r1@192
  char *v172; // r5@196
  size_t v173; // r0@196
  int i20; // r1@196
  int v175; // t1@197
  _DWORD *v176; // r0@198
  __int64 v177; // r1@198
  __int64 v178; // r1@198
  char *v179; // r5@202
  size_t v180; // r0@202
  int i21; // r1@202
  int v182; // t1@203
  _DWORD *v183; // r0@204
  __int64 v184; // r1@204
  __int64 v185; // r1@204
  char *v186; // r5@208
  size_t v187; // r0@208
  int i22; // r1@208
  int v189; // t1@209
  _DWORD *v190; // r0@210
  __int64 v191; // r1@210
  __int64 v192; // r1@210
  char *v193; // r5@214
  size_t v194; // r0@214
  int i23; // r1@214
  int v196; // t1@215
  _DWORD *v197; // r0@216
  __int64 v198; // r1@216
  __int64 v199; // r1@216
  char *v200; // r5@220
  size_t v201; // r0@220
  int i24; // r1@220
  int v203; // t1@221
  _DWORD *v204; // r0@222
  __int64 v205; // r1@222
  __int64 v206; // r1@222
  char *v207; // r5@226
  size_t v208; // r0@226
  int i25; // r2@226
  int v210; // t1@227
  _DWORD *v211; // r0@228
  __int64 v212; // r1@228
  __int64 v213; // r1@228
  char *v214; // r5@232
  size_t v215; // r0@232
  int i26; // r1@232
  int v217; // t1@233
  _DWORD *v218; // r0@234
  __int64 v219; // r1@234
  __int64 v220; // r1@234
  char *v221; // r5@238
  size_t v222; // r0@238
  int i27; // r1@238
  int v224; // t1@239
  _DWORD *v225; // r0@240
  __int64 v226; // r1@240
  __int64 v227; // r1@240
  char *v228; // r5@244
  size_t v229; // r0@244
  int i28; // r1@244
  int v231; // t1@245
  _DWORD *v232; // r0@246
  __int64 v233; // r1@246
  __int64 v234; // r1@246
  char *v235; // r5@250
  size_t v236; // r0@250
  int i29; // r2@250
  int v238; // t1@251
  _DWORD *v239; // r0@252
  __int64 v240; // r1@252
  __int64 v241; // r1@252
  char *v242; // r5@256
  size_t v243; // r0@256
  int i30; // r1@256
  int v245; // t1@257
  _DWORD *v246; // r0@258
  __int64 v247; // r1@258
  __int64 v248; // r1@258
  char *v249; // r5@262
  size_t v250; // r0@262
  int i31; // r1@262
  int v252; // t1@263
  _DWORD *v253; // r0@264
  __int64 v254; // r1@264
  __int64 v255; // r1@264
  char *v256; // r5@268
  size_t v257; // r0@268
  int i32; // r1@268
  int v259; // t1@269
  _DWORD *v260; // r0@270
  __int64 v261; // r1@270
  __int64 v262; // r1@270
  char *v263; // r0@274
  char *v264; // r5@275
  size_t v265; // r0@275
  int i33; // r1@275
  int v267; // t1@276
  void *v268; // r0@277
  __int64 v269; // r1@277
  __int64 v270; // r1@277
  char *v271; // r5@281
  size_t v272; // r0@281
  int i34; // r1@281
  int v274; // t1@282
  _DWORD *v275; // r0@283
  __int64 v276; // r1@283
  __int64 v277; // r1@283
  char *v278; // r5@287
  size_t v279; // r0@287
  int i35; // r1@287
  int v281; // t1@288
  _DWORD *v282; // r0@289
  __int64 v283; // r1@289
  __int64 v284; // r1@289
  char *v285; // r5@293
  size_t v286; // r0@293
  int i36; // r1@293
  int v288; // t1@294
  _DWORD *v289; // r0@295
  __int64 v290; // r1@295
  __int64 v291; // r1@295
  char *v292; // r5@299
  size_t v293; // r0@299
  int i37; // r1@299
  int v295; // t1@300
  _DWORD *v296; // r0@301
  __int64 v297; // r1@301
  __int64 v298; // r1@301
  char *v299; // r5@305
  size_t v300; // r0@305
  int i38; // r1@305
  int v302; // t1@306
  void *v303; // r0@307
  __int64 v304; // r1@307
  __int64 v305; // r1@307
  char *v306; // r5@311
  size_t v307; // r0@311
  int i39; // r1@311
  int v309; // t1@312
  void *v310; // r0@313
  __int64 v311; // r1@313
  __int64 v312; // r1@313
  char *v313; // r5@317
  size_t v314; // r0@317
  int i40; // r1@317
  int v316; // t1@318
  void *v317; // r0@319
  __int64 v318; // r1@319
  __int64 v319; // r1@319
  char *v320; // r5@323
  size_t v321; // r0@323
  int i41; // r1@323
  int v323; // t1@324
  void *v324; // r0@325
  __int64 v325; // r1@325
  __int64 v326; // r1@325
  char *v327; // r0@329
  char *v328; // r0@330
  char *v329; // r0@331
  void *v330; // r0@332
  unsigned int *v331; // r2@334
  signed int v332; // r1@336
  unsigned int *v333; // r2@338
  signed int v334; // r1@340
  unsigned int *v335; // r2@342
  signed int v336; // r1@344
  unsigned int *v337; // r2@346
  signed int v338; // r1@348
  unsigned int *v339; // r2@350
  signed int v340; // r1@352
  unsigned int *v341; // r2@354
  signed int v342; // r1@356
  unsigned int *v343; // r2@358
  signed int v344; // r1@360
  unsigned int *v345; // r2@362
  signed int v346; // r1@364
  unsigned int *v347; // r2@366
  signed int v348; // r1@368
  unsigned int *v349; // r2@370
  signed int v350; // r1@372
  unsigned int *v351; // r2@374
  signed int v352; // r1@376
  unsigned int *v353; // r2@378
  signed int v354; // r1@380
  unsigned int *v355; // r2@382
  signed int v356; // r1@384
  unsigned int *v357; // r2@386
  signed int v358; // r1@388
  void *v359; // [sp+8h] [bp-880h]@325
  __int64 v360; // [sp+10h] [bp-878h]@325
  void *v361; // [sp+18h] [bp-870h]@325
  __int64 v362; // [sp+20h] [bp-868h]@325
  int v363; // [sp+28h] [bp-860h]@325
  int v364; // [sp+2Ch] [bp-85Ch]@325
  void *v365; // [sp+30h] [bp-858h]@319
  __int64 v366; // [sp+38h] [bp-850h]@319
  void *v367; // [sp+40h] [bp-848h]@319
  __int64 v368; // [sp+48h] [bp-840h]@319
  int v369; // [sp+50h] [bp-838h]@319
  int v370; // [sp+54h] [bp-834h]@319
  void *v371; // [sp+58h] [bp-830h]@313
  __int64 v372; // [sp+60h] [bp-828h]@313
  void *v373; // [sp+68h] [bp-820h]@313
  __int64 v374; // [sp+70h] [bp-818h]@313
  int v375; // [sp+78h] [bp-810h]@313
  int v376; // [sp+7Ch] [bp-80Ch]@313
  void *v377; // [sp+80h] [bp-808h]@307
  __int64 v378; // [sp+88h] [bp-800h]@307
  void *v379; // [sp+90h] [bp-7F8h]@307
  __int64 v380; // [sp+98h] [bp-7F0h]@307
  int v381; // [sp+A0h] [bp-7E8h]@307
  int v382; // [sp+A4h] [bp-7E4h]@307
  void *v383; // [sp+A8h] [bp-7E0h]@301
  __int64 v384; // [sp+B0h] [bp-7D8h]@301
  _DWORD *v385; // [sp+B8h] [bp-7D0h]@301
  __int64 v386; // [sp+C0h] [bp-7C8h]@301
  int v387; // [sp+C8h] [bp-7C0h]@301
  int v388; // [sp+CCh] [bp-7BCh]@301
  void *v389; // [sp+D0h] [bp-7B8h]@295
  __int64 v390; // [sp+D8h] [bp-7B0h]@295
  _DWORD *v391; // [sp+E0h] [bp-7A8h]@295
  __int64 v392; // [sp+E8h] [bp-7A0h]@295
  int v393; // [sp+F0h] [bp-798h]@295
  int v394; // [sp+F4h] [bp-794h]@295
  void *v395; // [sp+F8h] [bp-790h]@289
  __int64 v396; // [sp+100h] [bp-788h]@289
  _DWORD *v397; // [sp+108h] [bp-780h]@289
  __int64 v398; // [sp+110h] [bp-778h]@289
  int v399; // [sp+118h] [bp-770h]@289
  int v400; // [sp+11Ch] [bp-76Ch]@289
  void *v401; // [sp+120h] [bp-768h]@283
  __int64 v402; // [sp+128h] [bp-760h]@283
  _DWORD *v403; // [sp+130h] [bp-758h]@283
  __int64 v404; // [sp+138h] [bp-750h]@283
  int v405; // [sp+140h] [bp-748h]@283
  int v406; // [sp+144h] [bp-744h]@283
  void *v407; // [sp+148h] [bp-740h]@277
  __int64 v408; // [sp+150h] [bp-738h]@277
  void *v409; // [sp+158h] [bp-730h]@277
  __int64 v410; // [sp+160h] [bp-728h]@277
  int v411; // [sp+168h] [bp-720h]@277
  int v412; // [sp+16Ch] [bp-71Ch]@277
  void *v413; // [sp+170h] [bp-718h]@270
  __int64 v414; // [sp+178h] [bp-710h]@270
  _DWORD *v415; // [sp+180h] [bp-708h]@270
  __int64 v416; // [sp+188h] [bp-700h]@270
  char *v417; // [sp+190h] [bp-6F8h]@268
  int v418; // [sp+194h] [bp-6F4h]@270
  char *v419; // [sp+198h] [bp-6F0h]@268
  void *v420; // [sp+19Ch] [bp-6ECh]@264
  __int64 v421; // [sp+1A4h] [bp-6E4h]@264
  _DWORD *v422; // [sp+1ACh] [bp-6DCh]@264
  __int64 v423; // [sp+1B4h] [bp-6D4h]@264
  int v424; // [sp+1BCh] [bp-6CCh]@264
  int v425; // [sp+1C0h] [bp-6C8h]@264
  void *v426; // [sp+1C4h] [bp-6C4h]@258
  __int64 v427; // [sp+1CCh] [bp-6BCh]@258
  _DWORD *v428; // [sp+1D4h] [bp-6B4h]@258
  __int64 v429; // [sp+1DCh] [bp-6ACh]@258
  int v430; // [sp+1E4h] [bp-6A4h]@258
  int v431; // [sp+1E8h] [bp-6A0h]@258
  void *v432; // [sp+1ECh] [bp-69Ch]@252
  __int64 v433; // [sp+1F4h] [bp-694h]@252
  _DWORD *v434; // [sp+1FCh] [bp-68Ch]@252
  __int64 v435; // [sp+204h] [bp-684h]@252
  int v436; // [sp+20Ch] [bp-67Ch]@252
  int v437; // [sp+210h] [bp-678h]@252
  void *v438; // [sp+214h] [bp-674h]@246
  __int64 v439; // [sp+21Ch] [bp-66Ch]@246
  _DWORD *v440; // [sp+224h] [bp-664h]@246
  __int64 v441; // [sp+22Ch] [bp-65Ch]@246
  int v442; // [sp+234h] [bp-654h]@246
  int v443; // [sp+238h] [bp-650h]@246
  void *v444; // [sp+23Ch] [bp-64Ch]@240
  __int64 v445; // [sp+244h] [bp-644h]@240
  _DWORD *v446; // [sp+24Ch] [bp-63Ch]@240
  __int64 v447; // [sp+254h] [bp-634h]@240
  int v448; // [sp+25Ch] [bp-62Ch]@240
  int v449; // [sp+260h] [bp-628h]@240
  void *v450; // [sp+264h] [bp-624h]@234
  __int64 v451; // [sp+26Ch] [bp-61Ch]@234
  _DWORD *v452; // [sp+274h] [bp-614h]@234
  __int64 v453; // [sp+27Ch] [bp-60Ch]@234
  int v454; // [sp+284h] [bp-604h]@234
  int v455; // [sp+288h] [bp-600h]@234
  void *v456; // [sp+28Ch] [bp-5FCh]@228
  __int64 v457; // [sp+294h] [bp-5F4h]@228
  _DWORD *v458; // [sp+29Ch] [bp-5ECh]@228
  __int64 v459; // [sp+2A4h] [bp-5E4h]@228
  int v460; // [sp+2ACh] [bp-5DCh]@228
  int v461; // [sp+2B0h] [bp-5D8h]@228
  void *v462; // [sp+2B4h] [bp-5D4h]@222
  __int64 v463; // [sp+2BCh] [bp-5CCh]@222
  _DWORD *v464; // [sp+2C4h] [bp-5C4h]@222
  __int64 v465; // [sp+2CCh] [bp-5BCh]@222
  int v466; // [sp+2D4h] [bp-5B4h]@222
  int v467; // [sp+2D8h] [bp-5B0h]@222
  void *v468; // [sp+2DCh] [bp-5ACh]@216
  __int64 v469; // [sp+2E4h] [bp-5A4h]@216
  _DWORD *v470; // [sp+2ECh] [bp-59Ch]@216
  __int64 v471; // [sp+2F4h] [bp-594h]@216
  int v472; // [sp+2FCh] [bp-58Ch]@216
  int v473; // [sp+300h] [bp-588h]@216
  void *v474; // [sp+304h] [bp-584h]@210
  __int64 v475; // [sp+30Ch] [bp-57Ch]@210
  _DWORD *v476; // [sp+314h] [bp-574h]@210
  __int64 v477; // [sp+31Ch] [bp-56Ch]@210
  int v478; // [sp+324h] [bp-564h]@210
  int v479; // [sp+328h] [bp-560h]@210
  void *v480; // [sp+32Ch] [bp-55Ch]@204
  __int64 v481; // [sp+334h] [bp-554h]@204
  _DWORD *v482; // [sp+33Ch] [bp-54Ch]@204
  __int64 v483; // [sp+344h] [bp-544h]@204
  int v484; // [sp+34Ch] [bp-53Ch]@204
  int v485; // [sp+350h] [bp-538h]@204
  void *v486; // [sp+354h] [bp-534h]@198
  __int64 v487; // [sp+35Ch] [bp-52Ch]@198
  _DWORD *v488; // [sp+364h] [bp-524h]@198
  __int64 v489; // [sp+36Ch] [bp-51Ch]@198
  int v490; // [sp+374h] [bp-514h]@198
  int v491; // [sp+378h] [bp-510h]@198
  void *v492; // [sp+37Ch] [bp-50Ch]@192
  __int64 v493; // [sp+384h] [bp-504h]@192
  _DWORD *v494; // [sp+38Ch] [bp-4FCh]@192
  __int64 v495; // [sp+394h] [bp-4F4h]@192
  int v496; // [sp+39Ch] [bp-4ECh]@192
  int v497; // [sp+3A0h] [bp-4E8h]@192
  void *v498; // [sp+3A4h] [bp-4E4h]@186
  __int64 v499; // [sp+3ACh] [bp-4DCh]@186
  _DWORD *v500; // [sp+3B4h] [bp-4D4h]@186
  __int64 v501; // [sp+3BCh] [bp-4CCh]@186
  int v502; // [sp+3C4h] [bp-4C4h]@186
  int v503; // [sp+3C8h] [bp-4C0h]@186
  void *v504; // [sp+3CCh] [bp-4BCh]@180
  __int64 v505; // [sp+3D4h] [bp-4B4h]@180
  void *v506; // [sp+3DCh] [bp-4ACh]@180
  __int64 v507; // [sp+3E4h] [bp-4A4h]@180
  int v508; // [sp+3ECh] [bp-49Ch]@180
  int v509; // [sp+3F0h] [bp-498h]@180
  void *v510; // [sp+3F4h] [bp-494h]@174
  __int64 v511; // [sp+3FCh] [bp-48Ch]@174
  void *v512; // [sp+404h] [bp-484h]@174
  void (*v513)(void); // [sp+40Ch] [bp-47Ch]@174
  int (*v514)(); // [sp+410h] [bp-478h]@174
  int v515; // [sp+414h] [bp-474h]@174
  int v516; // [sp+418h] [bp-470h]@174
  void *v517; // [sp+41Ch] [bp-46Ch]@168
  void (*v518)(void); // [sp+424h] [bp-464h]@168
  signed int (*v519)(); // [sp+428h] [bp-460h]@168
  _DWORD *v520; // [sp+42Ch] [bp-45Ch]@168
  void (*v521)(void); // [sp+434h] [bp-454h]@168
  signed int (__fastcall *v522)(int **, unsigned int); // [sp+438h] [bp-450h]@168
  int v523; // [sp+43Ch] [bp-44Ch]@168
  int v524; // [sp+440h] [bp-448h]@168
  void *v525; // [sp+444h] [bp-444h]@162
  void (*v526)(void); // [sp+44Ch] [bp-43Ch]@162
  signed int (*v527)(); // [sp+450h] [bp-438h]@162
  _DWORD *v528; // [sp+454h] [bp-434h]@162
  void (*v529)(void); // [sp+45Ch] [bp-42Ch]@162
  signed int (__fastcall *v530)(int, unsigned int); // [sp+460h] [bp-428h]@162
  int v531; // [sp+464h] [bp-424h]@162
  int v532; // [sp+468h] [bp-420h]@162
  void *v533; // [sp+46Ch] [bp-41Ch]@156
  void (*v534)(void); // [sp+474h] [bp-414h]@156
  signed int (*v535)(); // [sp+478h] [bp-410h]@156
  _DWORD *v536; // [sp+47Ch] [bp-40Ch]@156
  void (*v537)(void); // [sp+484h] [bp-404h]@156
  signed int (__fastcall *v538)(int **, unsigned int); // [sp+488h] [bp-400h]@156
  int v539; // [sp+48Ch] [bp-3FCh]@156
  int v540; // [sp+490h] [bp-3F8h]@156
  void *v541; // [sp+494h] [bp-3F4h]@150
  void (*v542)(void); // [sp+49Ch] [bp-3ECh]@150
  signed int (*v543)(); // [sp+4A0h] [bp-3E8h]@150
  _DWORD *v544; // [sp+4A4h] [bp-3E4h]@150
  void (*v545)(void); // [sp+4ACh] [bp-3DCh]@150
  signed int (__fastcall *v546)(int **, unsigned int); // [sp+4B0h] [bp-3D8h]@150
  int v547; // [sp+4B4h] [bp-3D4h]@150
  int v548; // [sp+4B8h] [bp-3D0h]@150
  void *v549; // [sp+4BCh] [bp-3CCh]@144
  void (*v550)(void); // [sp+4C4h] [bp-3C4h]@144
  signed int (*v551)(); // [sp+4C8h] [bp-3C0h]@144
  _DWORD *v552; // [sp+4CCh] [bp-3BCh]@144
  void (*v553)(void); // [sp+4D4h] [bp-3B4h]@144
  signed int (__fastcall *v554)(int **, unsigned int); // [sp+4D8h] [bp-3B0h]@144
  int v555; // [sp+4DCh] [bp-3ACh]@144
  int v556; // [sp+4E0h] [bp-3A8h]@144
  void *v557; // [sp+4E4h] [bp-3A4h]@138
  void (*v558)(void); // [sp+4ECh] [bp-39Ch]@138
  signed int (*v559)(); // [sp+4F0h] [bp-398h]@138
  _DWORD *v560; // [sp+4F4h] [bp-394h]@138
  void (*v561)(void); // [sp+4FCh] [bp-38Ch]@138
  signed int (__fastcall *v562)(int **, unsigned int); // [sp+500h] [bp-388h]@138
  int v563; // [sp+504h] [bp-384h]@138
  int v564; // [sp+508h] [bp-380h]@138
  void *v565; // [sp+50Ch] [bp-37Ch]@132
  void (*v566)(void); // [sp+514h] [bp-374h]@132
  signed int (*v567)(); // [sp+518h] [bp-370h]@132
  _DWORD *v568; // [sp+51Ch] [bp-36Ch]@132
  void (*v569)(void); // [sp+524h] [bp-364h]@132
  int *(__fastcall *v570)(int *, int **, unsigned int); // [sp+528h] [bp-360h]@132
  int v571; // [sp+52Ch] [bp-35Ch]@132
  int v572; // [sp+530h] [bp-358h]@132
  void *v573; // [sp+534h] [bp-354h]@126
  void (*v574)(void); // [sp+53Ch] [bp-34Ch]@126
  signed int (*v575)(); // [sp+540h] [bp-348h]@126
  _DWORD *v576; // [sp+544h] [bp-344h]@126
  void (*v577)(void); // [sp+54Ch] [bp-33Ch]@126
  _DWORD *(__fastcall *v578)(Util *, int, unsigned int); // [sp+550h] [bp-338h]@126
  int v579; // [sp+554h] [bp-334h]@126
  int v580; // [sp+558h] [bp-330h]@126
  void *v581; // [sp+55Ch] [bp-32Ch]@120
  void (*v582)(void); // [sp+564h] [bp-324h]@120
  signed int (*v583)(); // [sp+568h] [bp-320h]@120
  _DWORD *v584; // [sp+56Ch] [bp-31Ch]@120
  void (*v585)(void); // [sp+574h] [bp-314h]@120
  int *(__fastcall *v586)(int *, int, unsigned int); // [sp+578h] [bp-310h]@120
  int v587; // [sp+57Ch] [bp-30Ch]@120
  int v588; // [sp+580h] [bp-308h]@120
  void *v589; // [sp+584h] [bp-304h]@114
  void (*v590)(void); // [sp+58Ch] [bp-2FCh]@114
  signed int (*v591)(); // [sp+590h] [bp-2F8h]@114
  _DWORD *v592; // [sp+594h] [bp-2F4h]@114
  void (*v593)(void); // [sp+59Ch] [bp-2ECh]@114
  int *(__fastcall *v594)(int *, int, unsigned int); // [sp+5A0h] [bp-2E8h]@114
  int v595; // [sp+5A4h] [bp-2E4h]@114
  int v596; // [sp+5A8h] [bp-2E0h]@114
  void *v597; // [sp+5ACh] [bp-2DCh]@108
  void (*v598)(void); // [sp+5B4h] [bp-2D4h]@108
  signed int (*v599)(); // [sp+5B8h] [bp-2D0h]@108
  _DWORD *v600; // [sp+5BCh] [bp-2CCh]@108
  void (*v601)(void); // [sp+5C4h] [bp-2C4h]@108
  int *(__fastcall *v602)(int *, int, unsigned int); // [sp+5C8h] [bp-2C0h]@108
  int v603; // [sp+5CCh] [bp-2BCh]@108
  int v604; // [sp+5D0h] [bp-2B8h]@108
  void *v605; // [sp+5D4h] [bp-2B4h]@102
  void (*v606)(void); // [sp+5DCh] [bp-2ACh]@102
  signed int (*v607)(); // [sp+5E0h] [bp-2A8h]@102
  _DWORD *v608; // [sp+5E4h] [bp-2A4h]@102
  void (*v609)(void); // [sp+5ECh] [bp-29Ch]@102
  int *(__fastcall *v610)(int *, int, unsigned int); // [sp+5F0h] [bp-298h]@102
  int v611; // [sp+5F4h] [bp-294h]@102
  int v612; // [sp+5F8h] [bp-290h]@102
  void *v613; // [sp+5FCh] [bp-28Ch]@96
  void (*v614)(void); // [sp+604h] [bp-284h]@96
  signed int (*v615)(); // [sp+608h] [bp-280h]@96
  _DWORD *v616; // [sp+60Ch] [bp-27Ch]@96
  void (*v617)(void); // [sp+614h] [bp-274h]@96
  int *(__fastcall *v618)(int *, int, unsigned int); // [sp+618h] [bp-270h]@96
  int v619; // [sp+61Ch] [bp-26Ch]@96
  int v620; // [sp+620h] [bp-268h]@96
  void *v621; // [sp+624h] [bp-264h]@90
  void (*v622)(void); // [sp+62Ch] [bp-25Ch]@90
  signed int (*v623)(); // [sp+630h] [bp-258h]@90
  _DWORD *v624; // [sp+634h] [bp-254h]@90
  void (*v625)(void); // [sp+63Ch] [bp-24Ch]@90
  int *(__fastcall *v626)(int *, int, unsigned int); // [sp+640h] [bp-248h]@90
  int v627; // [sp+644h] [bp-244h]@90
  int v628; // [sp+648h] [bp-240h]@90
  void *v629; // [sp+64Ch] [bp-23Ch]@84
  void (*v630)(void); // [sp+654h] [bp-234h]@84
  signed int (*v631)(); // [sp+658h] [bp-230h]@84
  _DWORD *v632; // [sp+65Ch] [bp-22Ch]@84
  void (*v633)(void); // [sp+664h] [bp-224h]@84
  int *(__fastcall *v634)(int *, int, unsigned int); // [sp+668h] [bp-220h]@84
  int v635; // [sp+66Ch] [bp-21Ch]@84
  int v636; // [sp+670h] [bp-218h]@84
  void *v637; // [sp+674h] [bp-214h]@78
  void (*v638)(void); // [sp+67Ch] [bp-20Ch]@78
  signed int (*v639)(); // [sp+680h] [bp-208h]@78
  _DWORD *v640; // [sp+684h] [bp-204h]@78
  void (*v641)(void); // [sp+68Ch] [bp-1FCh]@78
  int *(__fastcall *v642)(int *, int, unsigned int); // [sp+690h] [bp-1F8h]@78
  int v643; // [sp+694h] [bp-1F4h]@78
  int v644; // [sp+698h] [bp-1F0h]@78
  void *v645; // [sp+69Ch] [bp-1ECh]@72
  void (*v646)(void); // [sp+6A4h] [bp-1E4h]@72
  signed int (*v647)(); // [sp+6A8h] [bp-1E0h]@72
  _DWORD *v648; // [sp+6ACh] [bp-1DCh]@72
  void (*v649)(void); // [sp+6B4h] [bp-1D4h]@72
  int *(__fastcall *v650)(int *, int, unsigned int); // [sp+6B8h] [bp-1D0h]@72
  int v651; // [sp+6BCh] [bp-1CCh]@72
  int v652; // [sp+6C0h] [bp-1C8h]@72
  void *v653; // [sp+6C4h] [bp-1C4h]@66
  void (*v654)(void); // [sp+6CCh] [bp-1BCh]@66
  signed int (*v655)(); // [sp+6D0h] [bp-1B8h]@66
  _DWORD *v656; // [sp+6D4h] [bp-1B4h]@66
  void (*v657)(void); // [sp+6DCh] [bp-1ACh]@66
  int *(__fastcall *v658)(int *, int, unsigned int); // [sp+6E0h] [bp-1A8h]@66
  int v659; // [sp+6E4h] [bp-1A4h]@66
  int v660; // [sp+6E8h] [bp-1A0h]@66
  void *v661; // [sp+6ECh] [bp-19Ch]@59
  void (*v662)(void); // [sp+6F4h] [bp-194h]@59
  signed int (*v663)(); // [sp+6F8h] [bp-190h]@59
  _DWORD *v664; // [sp+6FCh] [bp-18Ch]@59
  void (*v665)(void); // [sp+704h] [bp-184h]@59
  int *(__fastcall *v666)(ResourcePacksScreenController *, int **); // [sp+708h] [bp-180h]@59
  char *v667; // [sp+70Ch] [bp-17Ch]@57
  int v668; // [sp+710h] [bp-178h]@59
  void *v669; // [sp+714h] [bp-174h]@52
  void (*v670)(void); // [sp+71Ch] [bp-16Ch]@52
  signed int (*v671)(); // [sp+720h] [bp-168h]@52
  _DWORD *v672; // [sp+724h] [bp-164h]@52
  void (*v673)(void); // [sp+72Ch] [bp-15Ch]@52
  void *(__fastcall *v674)(ResourcePacksScreenController *, int **); // [sp+730h] [bp-158h]@52
  char *v675; // [sp+734h] [bp-154h]@50
  int v676; // [sp+738h] [bp-150h]@52
  void *v677; // [sp+73Ch] [bp-14Ch]@45
  void (*v678)(void); // [sp+744h] [bp-144h]@45
  signed int (*v679)(); // [sp+748h] [bp-140h]@45
  _DWORD *v680; // [sp+74Ch] [bp-13Ch]@45
  void (*v681)(void); // [sp+754h] [bp-134h]@45
  void *(__fastcall *v682)(ResourcePacksScreenController *, int **); // [sp+758h] [bp-130h]@45
  char *v683; // [sp+75Ch] [bp-12Ch]@43
  int v684; // [sp+760h] [bp-128h]@45
  void *v685; // [sp+764h] [bp-124h]@38
  void (*v686)(void); // [sp+76Ch] [bp-11Ch]@38
  signed int (*v687)(); // [sp+770h] [bp-118h]@38
  _DWORD *v688; // [sp+774h] [bp-114h]@38
  void (*v689)(void); // [sp+77Ch] [bp-10Ch]@38
  _DWORD *(__fastcall *v690)(Util *, int); // [sp+780h] [bp-108h]@38
  char *v691; // [sp+784h] [bp-104h]@36
  int v692; // [sp+788h] [bp-100h]@38
  void *v693; // [sp+78Ch] [bp-FCh]@31
  void (*v694)(void); // [sp+794h] [bp-F4h]@31
  signed int (*v695)(); // [sp+798h] [bp-F0h]@31
  _DWORD *v696; // [sp+79Ch] [bp-ECh]@31
  void (*v697)(void); // [sp+7A4h] [bp-E4h]@31
  int *(__fastcall *v698)(ResourcePack *, int); // [sp+7A8h] [bp-E0h]@31
  char *v699; // [sp+7ACh] [bp-DCh]@29
  int v700; // [sp+7B0h] [bp-D8h]@31
  void *v701; // [sp+7B4h] [bp-D4h]@24
  void (*v702)(void); // [sp+7BCh] [bp-CCh]@24
  signed int (*v703)(); // [sp+7C0h] [bp-C8h]@24
  _DWORD *v704; // [sp+7C4h] [bp-C4h]@24
  void (*v705)(void); // [sp+7CCh] [bp-BCh]@24
  void **(__fastcall *v706)(void **, int); // [sp+7D0h] [bp-B8h]@24
  char *v707; // [sp+7D4h] [bp-B4h]@22
  int v708; // [sp+7D8h] [bp-B0h]@24
  void *v709; // [sp+7DCh] [bp-ACh]@17
  void (*v710)(void); // [sp+7E4h] [bp-A4h]@17
  signed int (*v711)(); // [sp+7E8h] [bp-A0h]@17
  _DWORD *v712; // [sp+7ECh] [bp-9Ch]@17
  void (*v713)(void); // [sp+7F4h] [bp-94h]@17
  RakNet *(__fastcall *v714)(const void **, int); // [sp+7F8h] [bp-90h]@17
  char *v715; // [sp+7FCh] [bp-8Ch]@15
  int v716; // [sp+800h] [bp-88h]@17
  void *v717; // [sp+804h] [bp-84h]@10
  void (*v718)(void); // [sp+80Ch] [bp-7Ch]@10
  signed int (*v719)(); // [sp+810h] [bp-78h]@10
  _DWORD *v720; // [sp+814h] [bp-74h]@10
  void (*v721)(void); // [sp+81Ch] [bp-6Ch]@10
  signed int (__fastcall *v722)(int); // [sp+820h] [bp-68h]@10
  char *v723; // [sp+824h] [bp-64h]@8
  int v724; // [sp+828h] [bp-60h]@10
  void *v725; // [sp+82Ch] [bp-5Ch]@3
  void (*v726)(void); // [sp+834h] [bp-54h]@3
  signed int (*v727)(); // [sp+838h] [bp-50h]@3
  _DWORD *v728; // [sp+83Ch] [bp-4Ch]@3
  void (*v729)(void); // [sp+844h] [bp-44h]@3
  signed int (__fastcall *v730)(int); // [sp+848h] [bp-40h]@3
  char *s; // [sp+84Ch] [bp-3Ch]@1
  int v732; // [sp+850h] [bp-38h]@3
  char *v733; // [sp+854h] [bp-34h]@1
  char *v734; // [sp+858h] [bp-30h]@1
  int v735; // [sp+85Ch] [bp-2Ch]@1

  v1 = this;
  sub_13ED14C((void **)&v735, *((_BYTE *)this + 532));
  v734 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v734, *(_DWORD *)(v735 - 12) + 20);
  sub_21E7408((const void **)&v734, "#selected_pack_items", 0x14u);
  sub_21E72F0((const void **)&v734, (const void **)&v735);
  v733 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v733, *(_DWORD *)(v735 - 12) + 21);
  sub_21E7408((const void **)&v733, "#available_pack_items", 0x15u);
  sub_21E72F0((const void **)&v733, (const void **)&v735);
  s = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&s, *(_DWORD *)(v735 - 12) + 25);
  sub_21E7408((const void **)&s, "#selected_grid_dimensions", 0x19u);
  sub_21E72F0((const void **)&s, (const void **)&v735);
  v2 = s;
  v3 = strlen(s);
  for ( i = -2128831035; v3; i = 16777619 * (i ^ v5) )
  {
    v5 = (unsigned __int8)*v2++;
    --v3;
  }
  v732 = i;
  v6 = operator new(4u);
  *v6 = v1;
  v728 = v6;
  v730 = sub_13F06B2;
  v729 = (void (*)(void))sub_13F06BE;
  v725 = operator new(1u);
  v727 = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v726 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindInt((int)v1, &v732, (int)&v728, (int)&v725);
  if ( v726 )
    v726();
  if ( v729 )
    v729();
  v7 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v331 = (unsigned int *)(s - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v332 = __ldrex(v331);
      while ( __strex(v332 - 1, v331) );
    }
    else
      v332 = (*v331)--;
    if ( v332 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v723 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v723, *(_DWORD *)(v735 - 12) + 26);
  sub_21E7408((const void **)&v723, "#available_grid_dimensions", 0x1Au);
  sub_21E72F0((const void **)&v723, (const void **)&v735);
  v8 = v723;
  v9 = strlen(v723);
  for ( j = -2128831035; v9; j = 16777619 * (j ^ v11) )
    v11 = (unsigned __int8)*v8++;
    --v9;
  v724 = j;
  v12 = operator new(4u);
  *v12 = v1;
  v720 = v12;
  v722 = sub_13F06F4;
  v721 = (void (*)(void))sub_13F0700;
  v717 = operator new(1u);
  v719 = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v718 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindInt((int)v1, &v724, (int)&v720, (int)&v717);
  if ( v718 )
    v718();
  if ( v721 )
    v721();
  v13 = v723 - 12;
  if ( (int *)(v723 - 12) != &dword_28898C0 )
    v333 = (unsigned int *)(v723 - 4);
        v334 = __ldrex(v333);
      while ( __strex(v334 - 1, v333) );
      v334 = (*v333)--;
    if ( v334 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v715 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v715, *(_DWORD *)(v735 - 12) + 21);
  sub_21E7408((const void **)&v715, "#default_item_texture", 0x15u);
  sub_21E72F0((const void **)&v715, (const void **)&v735);
  v14 = v715;
  v15 = strlen(v715);
  for ( k = -2128831035; v15; k = 16777619 * (k ^ v17) )
    v17 = (unsigned __int8)*v14++;
    --v15;
  v716 = k;
  v18 = operator new(4u);
  *v18 = v1;
  v712 = v18;
  v714 = sub_13F0736;
  v713 = (void (*)(void))sub_13F0752;
  v709 = operator new(1u);
  v711 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v710 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v716, (int)&v712, (int)&v709);
  if ( v710 )
    v710();
  if ( v713 )
    v713();
  v19 = v715 - 12;
  if ( (int *)(v715 - 12) != &dword_28898C0 )
    v335 = (unsigned int *)(v715 - 4);
        v336 = __ldrex(v335);
      while ( __strex(v336 - 1, v335) );
      v336 = (*v335)--;
    if ( v336 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v707 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v707, *(_DWORD *)(v735 - 12) + 25);
  sub_21E7408((const void **)&v707, "#default_item_file_system", 0x19u);
  sub_21E72F0((const void **)&v707, (const void **)&v735);
  v20 = v707;
  v21 = strlen(v707);
  for ( l = -2128831035; v21; l = 16777619 * (l ^ v23) )
    v23 = (unsigned __int8)*v20++;
    --v21;
  v708 = l;
  v24 = operator new(4u);
  *v24 = v1;
  v704 = v24;
  v706 = sub_13F0788;
  v705 = (void (*)(void))sub_13F07B8;
  v701 = operator new(1u);
  v703 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v702 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v708, (int)&v704, (int)&v701);
  if ( v702 )
    v702();
  if ( v705 )
    v705();
  v25 = v707 - 12;
  if ( (int *)(v707 - 12) != &dword_28898C0 )
    v337 = (unsigned int *)(v707 - 4);
        v338 = __ldrex(v337);
      while ( __strex(v338 - 1, v337) );
      v338 = (*v337)--;
    if ( v338 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v699 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v699, *(_DWORD *)(v735 - 12) + 17);
  sub_21E7408((const void **)&v699, "#default_item_zip", 0x11u);
  sub_21E72F0((const void **)&v699, (const void **)&v735);
  v26 = v699;
  v27 = strlen(v699);
  for ( m = -2128831035; v27; m = 16777619 * (m ^ v29) )
    v29 = (unsigned __int8)*v26++;
    --v27;
  v700 = m;
  v30 = operator new(4u);
  *v30 = v1;
  v696 = v30;
  v698 = sub_13F07EE;
  v697 = (void (*)(void))sub_13F0808;
  v693 = operator new(1u);
  v695 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v694 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v700, (int)&v696, (int)&v693);
  if ( v694 )
    v694();
  if ( v697 )
    v697();
  v31 = v699 - 12;
  if ( (int *)(v699 - 12) != &dword_28898C0 )
    v339 = (unsigned int *)(v699 - 4);
        v340 = __ldrex(v339);
      while ( __strex(v340 - 1, v339) );
      v340 = (*v339)--;
    if ( v340 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v691 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v691, *(_DWORD *)(v735 - 12) + 19);
  sub_21E7408((const void **)&v691, "#total_size_binding", 0x13u);
  sub_21E72F0((const void **)&v691, (const void **)&v735);
  v32 = v691;
  v33 = strlen(v691);
  for ( n = -2128831035; v33; n = 16777619 * (n ^ v35) )
    v35 = (unsigned __int8)*v32++;
    --v33;
  v692 = n;
  v36 = operator new(4u);
  *v36 = v1;
  v688 = v36;
  v690 = sub_13F083E;
  v689 = (void (*)(void))sub_13F085A;
  v685 = operator new(1u);
  v687 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v686 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v692, (int)&v688, (int)&v685);
  if ( v686 )
    v686();
  if ( v689 )
    v689();
  v37 = v691 - 12;
  if ( (int *)(v691 - 12) != &dword_28898C0 )
    v341 = (unsigned int *)(v691 - 4);
        v342 = __ldrex(v341);
      while ( __strex(v342 - 1, v341) );
      v342 = (*v341)--;
    if ( v342 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v683 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v683, *(_DWORD *)(v735 - 12) + 18);
  sub_21E7408((const void **)&v683, "#cycling_icon_path", 0x12u);
  sub_21E72F0((const void **)&v683, (const void **)&v735);
  v38 = v683;
  v39 = strlen(v683);
  for ( ii = -2128831035; v39; ii = 16777619 * (ii ^ v41) )
    v41 = (unsigned __int8)*v38++;
    --v39;
  v684 = ii;
  v42 = operator new(4u);
  *v42 = v1;
  v680 = v42;
  v682 = sub_13F0890;
  v681 = (void (*)(void))sub_13F089C;
  v677 = operator new(1u);
  v679 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v678 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v684, (int)&v680, (int)&v677);
  if ( v678 )
    v678();
  if ( v681 )
    v681();
  v43 = v683 - 12;
  if ( (int *)(v683 - 12) != &dword_28898C0 )
    v343 = (unsigned int *)(v683 - 4);
        v344 = __ldrex(v343);
      while ( __strex(v344 - 1, v343) );
      v344 = (*v343)--;
    if ( v344 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v675 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v675, *(_DWORD *)(v735 - 12) + 25);
  sub_21E7408((const void **)&v675, "#cycling_icon_file_system", 0x19u);
  sub_21E72F0((const void **)&v675, (const void **)&v735);
  v44 = v675;
  v45 = strlen(v675);
  for ( jj = -2128831035; v45; jj = 16777619 * (jj ^ v47) )
    v47 = (unsigned __int8)*v44++;
    --v45;
  v676 = jj;
  v48 = operator new(4u);
  *v48 = v1;
  v672 = v48;
  v674 = sub_13F08D2;
  v673 = (void (*)(void))sub_13F08DE;
  v669 = operator new(1u);
  v671 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v670 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v676, (int)&v672, (int)&v669);
  if ( v670 )
    v670();
  if ( v673 )
    v673();
  v49 = v675 - 12;
  if ( (int *)(v675 - 12) != &dword_28898C0 )
    v345 = (unsigned int *)(v675 - 4);
        v346 = __ldrex(v345);
      while ( __strex(v346 - 1, v345) );
      v346 = (*v345)--;
    if ( v346 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  v667 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v667, *(_DWORD *)(v735 - 12) + 17);
  sub_21E7408((const void **)&v667, "#cycling_icon_zip", 0x11u);
  sub_21E72F0((const void **)&v667, (const void **)&v735);
  v50 = v667;
  v51 = strlen(v667);
  for ( kk = -2128831035; v51; kk = 16777619 * (kk ^ v53) )
    v53 = (unsigned __int8)*v50++;
    --v51;
  v668 = kk;
  v54 = operator new(4u);
  *v54 = v1;
  v664 = v54;
  v666 = sub_13F0914;
  v665 = (void (*)(void))sub_13F0920;
  v661 = operator new(1u);
  v663 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v662 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v668, (int)&v664, (int)&v661);
  if ( v662 )
    v662();
  if ( v665 )
    v665();
  v55 = v667 - 12;
  if ( (int *)(v667 - 12) != &dword_28898C0 )
    v347 = (unsigned int *)(v667 - 4);
        v348 = __ldrex(v347);
      while ( __strex(v348 - 1, v347) );
      v348 = (*v347)--;
    if ( v348 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = v734;
  v57 = strlen(v734);
  for ( ll = -2128831035; v57; ll = 16777619 * (ll ^ v59) )
    v59 = (unsigned __int8)*v56++;
    --v57;
  v660 = ll;
  v659 = 1473988676;
  v60 = operator new(4u);
  *v60 = v1;
  v656 = v60;
  v658 = sub_13F0956;
  v657 = (void (*)(void))sub_13F0974;
  v653 = operator new(1u);
  v655 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v654 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v660, &v659, (int)&v656, (int)&v653);
  if ( v654 )
    v654();
  if ( v657 )
    v657();
  v61 = v733;
  v62 = strlen(v733);
  for ( mm = -2128831035; v62; mm = 16777619 * (mm ^ v64) )
    v64 = (unsigned __int8)*v61++;
    --v62;
  v652 = mm;
  v651 = 1473988676;
  v65 = operator new(4u);
  *v65 = v1;
  v648 = v65;
  v650 = sub_13F09AA;
  v649 = (void (*)(void))sub_13F09C8;
  v645 = operator new(1u);
  v647 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v646 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v652, &v651, (int)&v648, (int)&v645);
  if ( v646 )
    v646();
  if ( v649 )
    v649();
  v66 = v734;
  v67 = strlen(v734);
  for ( nn = -2128831035; v67; nn = 16777619 * (nn ^ v69) )
    v69 = (unsigned __int8)*v66++;
    --v67;
  v644 = nn;
  v643 = 708925401;
  v70 = operator new(4u);
  *v70 = v1;
  v640 = v70;
  v642 = sub_13F09FE;
  v641 = (void (*)(void))sub_13F0A1C;
  v637 = operator new(1u);
  v639 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v638 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v644, &v643, (int)&v640, (int)&v637);
  if ( v638 )
    v638();
  if ( v641 )
    v641();
  v71 = v733;
  v72 = strlen(v733);
  for ( i1 = -2128831035; v72; i1 = 16777619 * (i1 ^ v74) )
    v74 = (unsigned __int8)*v71++;
    --v72;
  v636 = i1;
  v635 = 708925401;
  v75 = operator new(4u);
  *v75 = v1;
  v632 = v75;
  v634 = sub_13F0A52;
  v633 = (void (*)(void))sub_13F0A70;
  v629 = operator new(1u);
  v631 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v630 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v636, &v635, (int)&v632, (int)&v629);
  if ( v630 )
    v630();
  if ( v633 )
    v633();
  v76 = v734;
  v77 = strlen(v734);
  for ( i2 = -2128831035; v77; i2 = 16777619 * (i2 ^ v79) )
    v79 = (unsigned __int8)*v76++;
    --v77;
  v628 = i2;
  v627 = -983422617;
  v80 = operator new(4u);
  *v80 = v1;
  v624 = v80;
  v626 = sub_13F0AA6;
  v625 = (void (*)(void))sub_13F0AC4;
  v621 = operator new(1u);
  v623 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v622 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v628, &v627, (int)&v624, (int)&v621);
  if ( v622 )
    v622();
  if ( v625 )
    v625();
  v81 = v733;
  v82 = strlen(v733);
  for ( i3 = -2128831035; v82; i3 = 16777619 * (i3 ^ v84) )
    v84 = (unsigned __int8)*v81++;
    --v82;
  v620 = i3;
  v619 = -983422617;
  v85 = operator new(4u);
  *v85 = v1;
  v616 = v85;
  v618 = sub_13F0AFA;
  v617 = (void (*)(void))sub_13F0B18;
  v613 = operator new(1u);
  v615 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v614 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v620, &v619, (int)&v616, (int)&v613);
  if ( v614 )
    v614();
  if ( v617 )
    v617();
  v86 = v734;
  v87 = strlen(v734);
  for ( i4 = -2128831035; v87; i4 = 16777619 * (i4 ^ v89) )
    v89 = (unsigned __int8)*v86++;
    --v87;
  v612 = i4;
  v611 = -1417655854;
  v90 = operator new(4u);
  *v90 = v1;
  v608 = v90;
  v610 = sub_13F0B4E;
  v609 = (void (*)(void))sub_13F0B6C;
  v605 = operator new(1u);
  v607 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v606 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v612, &v611, (int)&v608, (int)&v605);
  if ( v606 )
    v606();
  if ( v609 )
    v609();
  v91 = v733;
  v92 = strlen(v733);
  for ( i5 = -2128831035; v92; i5 = 16777619 * (i5 ^ v94) )
    v94 = (unsigned __int8)*v91++;
    --v92;
  v604 = i5;
  v603 = -1417655854;
  v95 = operator new(4u);
  *v95 = v1;
  v600 = v95;
  v602 = sub_13F0BA2;
  v601 = (void (*)(void))sub_13F0BC0;
  v597 = operator new(1u);
  v599 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v598 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v604, &v603, (int)&v600, (int)&v597);
  if ( v598 )
    v598();
  if ( v601 )
    v601();
  v96 = v734;
  v97 = strlen(v734);
  for ( i6 = -2128831035; v97; i6 = 16777619 * (i6 ^ v99) )
    v99 = (unsigned __int8)*v96++;
    --v97;
  v596 = i6;
  v595 = 1659133967;
  v100 = operator new(4u);
  *v100 = v1;
  v592 = v100;
  v594 = sub_13F0BF6;
  v593 = (void (*)(void))sub_13F0C14;
  v589 = operator new(1u);
  v591 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v590 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v596, &v595, (int)&v592, (int)&v589);
  if ( v590 )
    v590();
  if ( v593 )
    v593();
  v101 = v733;
  v102 = strlen(v733);
  for ( i7 = -2128831035; v102; i7 = 16777619 * (i7 ^ v104) )
    v104 = (unsigned __int8)*v101++;
    --v102;
  v588 = i7;
  v587 = 1659133967;
  v105 = operator new(4u);
  *v105 = v1;
  v584 = v105;
  v586 = sub_13F0C4A;
  v585 = (void (*)(void))sub_13F0C68;
  v581 = operator new(1u);
  v583 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v582 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v588, &v587, (int)&v584, (int)&v581);
  if ( v582 )
    v582();
  if ( v585 )
    v585();
  v106 = v734;
  v107 = strlen(v734);
  for ( i8 = -2128831035; v107; i8 = 16777619 * (i8 ^ v109) )
    v109 = (unsigned __int8)*v106++;
    --v107;
  v580 = i8;
  v579 = 1103900699;
  v110 = operator new(4u);
  *v110 = v1;
  v576 = v110;
  v578 = sub_13F0CA0;
  v577 = (void (*)(void))sub_13F0CD8;
  v573 = operator new(1u);
  v575 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v574 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v580, &v579, (int)&v576, (int)&v573);
  if ( v574 )
    v574();
  if ( v577 )
    v577();
  v111 = v733;
  v112 = strlen(v733);
  for ( i9 = -2128831035; v112; i9 = 16777619 * (i9 ^ v114) )
    v114 = (unsigned __int8)*v111++;
    --v112;
  v572 = i9;
  v571 = 1103900699;
  v115 = operator new(4u);
  *v115 = v1;
  v568 = v115;
  v570 = sub_13F0D10;
  v569 = (void (*)(void))sub_13F0D60;
  v565 = operator new(1u);
  v567 = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v566 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindStringForCollection((int)v1, &v572, &v571, (int)&v568, (int)&v565);
  if ( v566 )
    v566();
  if ( v569 )
    v569();
  v116 = v734;
  v117 = strlen(v734);
  for ( i10 = -2128831035; v117; i10 = 16777619 * (i10 ^ v119) )
    v119 = (unsigned __int8)*v116++;
    --v117;
  v564 = i10;
  v563 = -478184492;
  v120 = operator new(4u);
  *v120 = v1;
  v560 = v120;
  v562 = sub_13F0D96;
  v561 = (void (*)(void))sub_13F0DBC;
  v557 = operator new(1u);
  v559 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v558 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v564, &v563, (int)&v560, (int)&v557);
  if ( v558 )
    v558();
  if ( v561 )
    v561();
  v121 = v734;
  v122 = strlen(v734);
  for ( i11 = -2128831035; v122; i11 = 16777619 * (i11 ^ v124) )
    v124 = (unsigned __int8)*v121++;
    --v122;
  v556 = i11;
  v555 = -28229017;
  v125 = operator new(4u);
  *v125 = v1;
  v552 = v125;
  v554 = sub_13F0DF2;
  v553 = (void (*)(void))sub_13F0E2C;
  v549 = operator new(1u);
  v551 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v550 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v556, &v555, (int)&v552, (int)&v549);
  if ( v550 )
    v550();
  if ( v553 )
    v553();
  v126 = v734;
  v127 = strlen(v734);
  for ( i12 = -2128831035; v127; i12 = 16777619 * (i12 ^ v129) )
    v129 = (unsigned __int8)*v126++;
    --v127;
  v548 = i12;
  v547 = 1544020130;
  v130 = operator new(4u);
  *v130 = v1;
  v544 = v130;
  v546 = sub_13F0E62;
  v545 = (void (*)(void))sub_13F0E9C;
  v541 = operator new(1u);
  v543 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v542 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v548, &v547, (int)&v544, (int)&v541);
  if ( v542 )
    v542();
  if ( v545 )
    v545();
  v131 = v734;
  v132 = strlen(v734);
  for ( i13 = -2128831035; v132; i13 = 16777619 * (i13 ^ v134) )
    v134 = (unsigned __int8)*v131++;
    --v132;
  v540 = i13;
  StringHash::StringHash<char [26]>(&v539, (int)"#direction_button_visible");
  v135 = operator new(4u);
  *v135 = v1;
  v536 = v135;
  v538 = sub_13F0ED2;
  v537 = (void (*)(void))sub_13F0EF8;
  v533 = operator new(1u);
  v535 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v534 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v540, &v539, (int)&v536, (int)&v533);
  if ( v534 )
    v534();
  if ( v537 )
    v537();
  v136 = v734;
  v137 = strlen(v734);
  for ( i14 = -2128831035; v137; i14 = 16777619 * (i14 ^ v139) )
    v139 = (unsigned __int8)*v136++;
    --v137;
  v532 = i14;
  v531 = 1107937636;
  v140 = operator new(4u);
  *v140 = v1;
  v528 = v140;
  v530 = sub_13F0F2E;
  v529 = (void (*)(void))sub_13F0F46;
  v525 = operator new(1u);
  v527 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v526 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v532, &v531, (int)&v528, (int)&v525);
  if ( v526 )
    v526();
  if ( v529 )
    v529();
  v141 = v733;
  v142 = strlen(v733);
  for ( i15 = -2128831035; v142; i15 = 16777619 * (i15 ^ v144) )
    v144 = (unsigned __int8)*v141++;
    --v142;
  v524 = i15;
  v523 = -478184492;
  v145 = operator new(4u);
  *v145 = v1;
  v520 = v145;
  v522 = sub_13F0F7C;
  v521 = (void (*)(void))sub_13F0FA2;
  v517 = operator new(1u);
  v519 = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v518 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBoolForCollection((int)v1, &v524, &v523, (int)&v520, (int)&v517);
  if ( v518 )
    v518();
  if ( v521 )
    v521();
  v146 = v733;
  v147 = strlen(v733);
  for ( i16 = -2128831035; v147; i16 = 16777619 * (i16 ^ v149) )
    v149 = (unsigned __int8)*v146++;
    --v147;
  v516 = i16;
  v515 = -28229017;
  v512 = operator new(1u);
  v514 = sub_13F0FD8;
  v513 = (void (*)(void))sub_13F0FDC;
  v510 = operator new(1u);
  LODWORD(v150) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v150) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v511 = v150;
  ScreenController::bindBoolForCollection((int)v1, &v516, &v515, (int)&v512, (int)&v510);
  if ( (_DWORD)v511 )
    ((void (*)(void))v511)();
  if ( v513 )
    v513();
  v151 = v733;
  v152 = strlen(v733);
  for ( i17 = -2128831035; v152; i17 = 16777619 * (i17 ^ v154) )
    v154 = (unsigned __int8)*v151++;
    --v152;
  v508 = 1544020130;
  v509 = i17;
  v155 = operator new(1u);
  LODWORD(v156) = sub_13F100E;
  v506 = v155;
  HIDWORD(v156) = sub_13F100A;
  v507 = v156;
  v504 = operator new(1u);
  LODWORD(v157) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v157) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v505 = v157;
  ScreenController::bindBoolForCollection((int)v1, &v509, &v508, (int)&v506, (int)&v504);
  if ( (_DWORD)v505 )
    ((void (*)(void))v505)();
  if ( (_DWORD)v507 )
    ((void (*)(void))v507)();
  v158 = v733;
  v159 = strlen(v733);
  for ( i18 = -2128831035; v159; i18 = 16777619 * (i18 ^ v161) )
    v161 = (unsigned __int8)*v158++;
    --v159;
  v503 = i18;
  StringHash::StringHash<char [26]>(&v502, (int)"#direction_button_visible");
  v162 = operator new(4u);
  LODWORD(v163) = sub_13F1062;
  *v162 = v1;
  HIDWORD(v163) = sub_13F103C;
  v500 = v162;
  v501 = v163;
  v498 = operator new(1u);
  LODWORD(v164) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v164) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v499 = v164;
  ScreenController::bindBoolForCollection((int)v1, &v503, &v502, (int)&v500, (int)&v498);
  if ( (_DWORD)v499 )
    ((void (*)(void))v499)();
  if ( (_DWORD)v501 )
    ((void (*)(void))v501)();
  v165 = v733;
  v166 = strlen(v733);
  for ( i19 = -2128831035; v166; i19 = 16777619 * (i19 ^ v168) )
    v168 = (unsigned __int8)*v165++;
    --v166;
  v496 = 1107937636;
  v497 = i19;
  v169 = operator new(4u);
  LODWORD(v170) = sub_13F10B0;
  *v169 = v1;
  HIDWORD(v170) = sub_13F1098;
  v494 = v169;
  v495 = v170;
  v492 = operator new(1u);
  LODWORD(v171) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v171) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v493 = v171;
  ScreenController::bindBoolForCollection((int)v1, &v497, &v496, (int)&v494, (int)&v492);
  if ( (_DWORD)v493 )
    ((void (*)(void))v493)();
  if ( (_DWORD)v495 )
    ((void (*)(void))v495)();
  v172 = v734;
  v173 = strlen(v734);
  for ( i20 = -2128831035; v173; i20 = 16777619 * (i20 ^ v175) )
    v175 = (unsigned __int8)*v172++;
    --v173;
  v491 = i20;
  v490 = -898681110;
  v176 = operator new(4u);
  LODWORD(v177) = sub_13F110C;
  *v176 = v1;
  HIDWORD(v177) = sub_13F10E6;
  v488 = v176;
  v489 = v177;
  v486 = operator new(1u);
  LODWORD(v178) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v178) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v487 = v178;
  ScreenController::bindBoolForCollection((int)v1, &v491, &v490, (int)&v488, (int)&v486);
  if ( (_DWORD)v487 )
    ((void (*)(void))v487)();
  if ( (_DWORD)v489 )
    ((void (*)(void))v489)();
  v179 = v733;
  v180 = strlen(v733);
  for ( i21 = -2128831035; v180; i21 = 16777619 * (i21 ^ v182) )
    v182 = (unsigned __int8)*v179++;
    --v180;
  v484 = -898681110;
  v485 = i21;
  v183 = operator new(4u);
  LODWORD(v184) = sub_13F1168;
  *v183 = v1;
  HIDWORD(v184) = sub_13F1142;
  v482 = v183;
  v483 = v184;
  v480 = operator new(1u);
  LODWORD(v185) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v185) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v481 = v185;
  ScreenController::bindBoolForCollection((int)v1, &v485, &v484, (int)&v482, (int)&v480);
  if ( (_DWORD)v481 )
    ((void (*)(void))v481)();
  if ( (_DWORD)v483 )
    ((void (*)(void))v483)();
  v186 = v733;
  v187 = strlen(v733);
  for ( i22 = -2128831035; v187; i22 = 16777619 * (i22 ^ v189) )
    v189 = (unsigned __int8)*v186++;
    --v187;
  v479 = i22;
  v478 = -1091652185;
  v190 = operator new(4u);
  LODWORD(v191) = sub_13F11BC;
  *v190 = v1;
  HIDWORD(v191) = sub_13F119E;
  v476 = v190;
  v477 = v191;
  v474 = operator new(1u);
  LODWORD(v192) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v192) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v475 = v192;
  ScreenController::bindBoolForCollection((int)v1, &v479, &v478, (int)&v476, (int)&v474);
  if ( (_DWORD)v475 )
    ((void (*)(void))v475)();
  if ( (_DWORD)v477 )
    ((void (*)(void))v477)();
  v193 = v734;
  v194 = strlen(v734);
  for ( i23 = -2128831035; v194; i23 = 16777619 * (i23 ^ v196) )
    v196 = (unsigned __int8)*v193++;
    --v194;
  v473 = i23;
  v472 = 146634656;
  v197 = operator new(4u);
  LODWORD(v198) = sub_13F1220;
  *v197 = v1;
  HIDWORD(v198) = sub_13F11F2;
  v470 = v197;
  v471 = v198;
  v468 = operator new(1u);
  LODWORD(v199) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v199) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v469 = v199;
  ScreenController::bindBoolForCollection((int)v1, &v473, &v472, (int)&v470, (int)&v468);
  if ( (_DWORD)v469 )
    ((void (*)(void))v469)();
  if ( (_DWORD)v471 )
    ((void (*)(void))v471)();
  v200 = v733;
  v201 = strlen(v733);
  for ( i24 = -2128831035; v201; i24 = 16777619 * (i24 ^ v203) )
    v203 = (unsigned __int8)*v200++;
    --v201;
  v466 = 146634656;
  v467 = i24;
  v204 = operator new(4u);
  LODWORD(v205) = sub_13F1284;
  *v204 = v1;
  HIDWORD(v205) = sub_13F1256;
  v464 = v204;
  v465 = v205;
  v462 = operator new(1u);
  LODWORD(v206) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v206) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v463 = v206;
  ScreenController::bindBoolForCollection((int)v1, &v467, &v466, (int)&v464, (int)&v462);
  if ( (_DWORD)v463 )
    ((void (*)(void))v463)();
  if ( (_DWORD)v465 )
    ((void (*)(void))v465)();
  v207 = v734;
  v208 = strlen(v734);
  for ( i25 = -2128831035; v208; i25 = 16777619 * (i25 ^ v210) )
    v210 = (unsigned __int8)*v207++;
    --v208;
  v461 = i25;
  StringHash::StringHash<char [30]>(&v460, (int)"#content_tier_options_visible");
  v211 = operator new(4u);
  LODWORD(v212) = sub_13F12DA;
  *v211 = v1;
  HIDWORD(v212) = sub_13F12BA;
  v458 = v211;
  v459 = v212;
  v456 = operator new(1u);
  LODWORD(v213) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v213) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v457 = v213;
  ScreenController::bindBoolForCollection((int)v1, &v461, &v460, (int)&v458, (int)&v456);
  if ( (_DWORD)v457 )
    ((void (*)(void))v457)();
  if ( (_DWORD)v459 )
    ((void (*)(void))v459)();
  v214 = v734;
  v215 = strlen(v734);
  for ( i26 = -2128831035; v215; i26 = 16777619 * (i26 ^ v217) )
    v217 = (unsigned __int8)*v214++;
    --v215;
  v455 = i26;
  v454 = -1070828788;
  v218 = operator new(4u);
  LODWORD(v219) = sub_13F133A;
  *v218 = v1;
  HIDWORD(v219) = sub_13F1310;
  v452 = v218;
  v453 = v219;
  v450 = operator new(1u);
  LODWORD(v220) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v220) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v451 = v220;
  ScreenController::bindIntForCollection((int)v1, &v455, &v454, (int)&v452, (int)&v450);
  if ( (_DWORD)v451 )
    ((void (*)(void))v451)();
  if ( (_DWORD)v453 )
    ((void (*)(void))v453)();
  v221 = v734;
  v222 = strlen(v734);
  for ( i27 = -2128831035; v222; i27 = 16777619 * (i27 ^ v224) )
    v224 = (unsigned __int8)*v221++;
    --v222;
  v449 = i27;
  v448 = 394259410;
  v225 = operator new(4u);
  LODWORD(v226) = sub_13F138A;
  *v225 = v1;
  HIDWORD(v226) = sub_13F1370;
  v446 = v225;
  v447 = v226;
  v444 = operator new(1u);
  LODWORD(v227) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v227) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v445 = v227;
  ScreenController::bindIntForCollection((int)v1, &v449, &v448, (int)&v446, (int)&v444);
  if ( (_DWORD)v445 )
    ((void (*)(void))v445)();
  if ( (_DWORD)v447 )
    ((void (*)(void))v447)();
  v228 = v734;
  v229 = strlen(v734);
  for ( i28 = -2128831035; v229; i28 = 16777619 * (i28 ^ v231) )
    v231 = (unsigned __int8)*v228++;
    --v229;
  v443 = i28;
  v442 = 122996181;
  v232 = operator new(4u);
  LODWORD(v233) = sub_13F1668;
  *v232 = v1;
  HIDWORD(v233) = sub_13F13C0;
  v440 = v232;
  v441 = v233;
  v438 = operator new(1u);
  LODWORD(v234) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v234) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v439 = v234;
  ScreenController::bindStringForCollection((int)v1, &v443, &v442, (int)&v440, (int)&v438);
  if ( (_DWORD)v439 )
    ((void (*)(void))v439)();
  if ( (_DWORD)v441 )
    ((void (*)(void))v441)();
  v235 = v734;
  v236 = strlen(v734);
  for ( i29 = -2128831035; v236; i29 = 16777619 * (i29 ^ v238) )
    v238 = (unsigned __int8)*v235++;
    --v236;
  v437 = i29;
  StringHash::StringHash<char [24]>(&v436, (int)"#content_tier_supported");
  v239 = operator new(4u);
  LODWORD(v240) = sub_13F16D6;
  *v239 = v1;
  HIDWORD(v240) = sub_13F169E;
  v434 = v239;
  v435 = v240;
  v432 = operator new(1u);
  LODWORD(v241) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v241) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v433 = v241;
  ScreenController::bindBoolForCollection((int)v1, &v437, &v436, (int)&v434, (int)&v432);
  if ( (_DWORD)v433 )
    ((void (*)(void))v433)();
  if ( (_DWORD)v435 )
    ((void (*)(void))v435)();
  v242 = v734;
  v243 = strlen(v734);
  for ( i30 = -2128831035; v243; i30 = 16777619 * (i30 ^ v245) )
    v245 = (unsigned __int8)*v242++;
    --v243;
  v431 = i30;
  v430 = 719589303;
  v246 = operator new(4u);
  LODWORD(v247) = sub_13F1726;
  *v246 = v1;
  HIDWORD(v247) = sub_13F170C;
  v428 = v246;
  v429 = v247;
  v426 = operator new(1u);
  LODWORD(v248) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v248) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v427 = v248;
  ScreenController::bindBoolForCollection((int)v1, &v431, &v430, (int)&v428, (int)&v426);
  if ( (_DWORD)v427 )
    ((void (*)(void))v427)();
  if ( (_DWORD)v429 )
    ((void (*)(void))v429)();
  v249 = v734;
  v250 = strlen(v734);
  for ( i31 = -2128831035; v250; i31 = 16777619 * (i31 ^ v252) )
    v252 = (unsigned __int8)*v249++;
    --v250;
  v425 = i31;
  v424 = 1122381072;
  v253 = operator new(4u);
  LODWORD(v254) = sub_13F17B8;
  *v253 = v1;
  HIDWORD(v254) = sub_13F175C;
  v422 = v253;
  v423 = v254;
  v420 = operator new(1u);
  LODWORD(v255) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v255) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v421 = v255;
  ScreenController::bindStringForCollection((int)v1, &v425, &v424, (int)&v422, (int)&v420);
  if ( (_DWORD)v421 )
    ((void (*)(void))v421)();
  if ( (_DWORD)v423 )
    ((void (*)(void))v423)();
  v419 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v419, *(_DWORD *)(v735 - 12) + 19);
  sub_21E7408((const void **)&v419, "#invalid_pack_items", 0x13u);
  sub_21E72F0((const void **)&v419, (const void **)&v735);
  v417 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v417, *(_DWORD *)(v735 - 12) + 24);
  sub_21E7408((const void **)&v417, "#invalid_grid_dimensions", 0x18u);
  sub_21E72F0((const void **)&v417, (const void **)&v735);
  v256 = v417;
  v257 = strlen(v417);
  for ( i32 = -2128831035; v257; i32 = 16777619 * (i32 ^ v259) )
    v259 = (unsigned __int8)*v256++;
    --v257;
  v418 = i32;
  v260 = operator new(4u);
  LODWORD(v261) = sub_13F17FA;
  *v260 = v1;
  HIDWORD(v261) = sub_13F17EE;
  v415 = v260;
  v416 = v261;
  v413 = operator new(1u);
  LODWORD(v262) = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v262) = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v414 = v262;
  ScreenController::bindInt((int)v1, &v418, (int)&v415, (int)&v413);
  if ( (_DWORD)v414 )
    ((void (*)(void))v414)();
  if ( (_DWORD)v416 )
    ((void (*)(void))v416)();
  v263 = v417 - 12;
  if ( (int *)(v417 - 12) != &dword_28898C0 )
    v349 = (unsigned int *)(v417 - 4);
        v350 = __ldrex(v349);
      while ( __strex(v350 - 1, v349) );
      v350 = (*v349)--;
    if ( v350 <= 0 )
      j_j_j_j__ZdlPv_9(v263);
  v264 = v419;
  v265 = strlen(v419);
  for ( i33 = -2128831035; v265; i33 = 16777619 * (i33 ^ v267) )
    v267 = (unsigned __int8)*v264++;
    --v265;
  v412 = i33;
  v411 = 1473988676;
  v268 = operator new(1u);
  LODWORD(v269) = sub_13F18FC;
  v409 = v268;
  HIDWORD(v269) = sub_13F1830;
  v410 = v269;
  v407 = operator new(1u);
  LODWORD(v270) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v270) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v408 = v270;
  ScreenController::bindStringForCollection((int)v1, &v412, &v411, (int)&v409, (int)&v407);
  if ( (_DWORD)v408 )
    ((void (*)(void))v408)();
  if ( (_DWORD)v410 )
    ((void (*)(void))v410)();
  v271 = v419;
  v272 = strlen(v419);
  for ( i34 = -2128831035; v272; i34 = 16777619 * (i34 ^ v274) )
    v274 = (unsigned __int8)*v271++;
    --v272;
  v406 = i34;
  v405 = 708925401;
  v275 = operator new(4u);
  LODWORD(v276) = sub_13F1A40;
  *v275 = v1;
  HIDWORD(v276) = sub_13F192C;
  v403 = v275;
  v404 = v276;
  v401 = operator new(1u);
  LODWORD(v277) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v277) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v402 = v277;
  ScreenController::bindStringForCollection((int)v1, &v406, &v405, (int)&v403, (int)&v401);
  if ( (_DWORD)v402 )
    ((void (*)(void))v402)();
  if ( (_DWORD)v404 )
    ((void (*)(void))v404)();
  v278 = v419;
  v279 = strlen(v419);
  for ( i35 = -2128831035; v279; i35 = 16777619 * (i35 ^ v281) )
    v281 = (unsigned __int8)*v278++;
    --v279;
  v400 = i35;
  v399 = -983422617;
  v282 = operator new(4u);
  LODWORD(v283) = sub_13F1A92;
  *v282 = v1;
  HIDWORD(v283) = sub_13F1A76;
  v397 = v282;
  v398 = v283;
  v395 = operator new(1u);
  LODWORD(v284) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v284) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v396 = v284;
  ScreenController::bindStringForCollection((int)v1, &v400, &v399, (int)&v397, (int)&v395);
  if ( (_DWORD)v396 )
    ((void (*)(void))v396)();
  if ( (_DWORD)v398 )
    ((void (*)(void))v398)();
  v285 = v419;
  v286 = strlen(v419);
  for ( i36 = -2128831035; v286; i36 = 16777619 * (i36 ^ v288) )
    v288 = (unsigned __int8)*v285++;
    --v286;
  v394 = i36;
  v393 = -1417655854;
  v289 = operator new(4u);
  LODWORD(v290) = sub_13F1AF8;
  *v289 = v1;
  HIDWORD(v290) = sub_13F1AC8;
  v391 = v289;
  v392 = v290;
  v389 = operator new(1u);
  LODWORD(v291) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v291) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v390 = v291;
  ScreenController::bindStringForCollection((int)v1, &v394, &v393, (int)&v391, (int)&v389);
  if ( (_DWORD)v390 )
    ((void (*)(void))v390)();
  if ( (_DWORD)v392 )
    ((void (*)(void))v392)();
  v292 = v419;
  v293 = strlen(v419);
  for ( i37 = -2128831035; v293; i37 = 16777619 * (i37 ^ v295) )
    v295 = (unsigned __int8)*v292++;
    --v293;
  v388 = i37;
  v387 = 1659133967;
  v296 = operator new(4u);
  LODWORD(v297) = sub_13F1B48;
  *v296 = v1;
  HIDWORD(v297) = sub_13F1B2E;
  v385 = v296;
  v386 = v297;
  v383 = operator new(1u);
  LODWORD(v298) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v298) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v384 = v298;
  ScreenController::bindStringForCollection((int)v1, &v388, &v387, (int)&v385, (int)&v383);
  if ( (_DWORD)v384 )
    ((void (*)(void))v384)();
  if ( (_DWORD)v386 )
    ((void (*)(void))v386)();
  v299 = v419;
  v300 = strlen(v419);
  for ( i38 = -2128831035; v300; i38 = 16777619 * (i38 ^ v302) )
    v302 = (unsigned __int8)*v299++;
    --v300;
  v381 = 1103900699;
  v382 = i38;
  v303 = operator new(1u);
  LODWORD(v304) = sub_13F1B94;
  v379 = v303;
  HIDWORD(v304) = sub_13F1B80;
  v380 = v304;
  v377 = operator new(1u);
  LODWORD(v305) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v305) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v378 = v305;
  ScreenController::bindStringForCollection((int)v1, &v382, &v381, (int)&v379, (int)&v377);
  if ( (_DWORD)v378 )
    ((void (*)(void))v378)();
  if ( (_DWORD)v380 )
    ((void (*)(void))v380)();
  v306 = v419;
  v307 = strlen(v419);
  for ( i39 = -2128831035; v307; i39 = 16777619 * (i39 ^ v309) )
    v309 = (unsigned __int8)*v306++;
    --v307;
  v375 = -478184492;
  v376 = i39;
  v310 = operator new(1u);
  LODWORD(v311) = sub_13F1BC6;
  v373 = v310;
  HIDWORD(v311) = sub_13F1BC2;
  v374 = v311;
  v371 = operator new(1u);
  LODWORD(v312) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v312) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v372 = v312;
  ScreenController::bindBoolForCollection((int)v1, &v376, &v375, (int)&v373, (int)&v371);
  if ( (_DWORD)v372 )
    ((void (*)(void))v372)();
  if ( (_DWORD)v374 )
    ((void (*)(void))v374)();
  v313 = v419;
  v314 = strlen(v419);
  for ( i40 = -2128831035; v314; i40 = 16777619 * (i40 ^ v316) )
    v316 = (unsigned __int8)*v313++;
    --v314;
  v369 = -898681110;
  v370 = i40;
  v317 = operator new(1u);
  LODWORD(v318) = sub_13F1BF8;
  v367 = v317;
  HIDWORD(v318) = sub_13F1BF4;
  v368 = v318;
  v365 = operator new(1u);
  LODWORD(v319) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v319) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v366 = v319;
  ScreenController::bindBoolForCollection((int)v1, &v370, &v369, (int)&v367, (int)&v365);
  if ( (_DWORD)v366 )
    ((void (*)(void))v366)();
  if ( (_DWORD)v368 )
    ((void (*)(void))v368)();
  v320 = v419;
  v321 = strlen(v419);
  for ( i41 = -2128831035; v321; i41 = 16777619 * (i41 ^ v323) )
    v323 = (unsigned __int8)*v320++;
    --v321;
  v363 = 146634656;
  v364 = i41;
  v324 = operator new(1u);
  LODWORD(v325) = sub_13F1C2A;
  v361 = v324;
  HIDWORD(v325) = sub_13F1C26;
  v362 = v325;
  v359 = operator new(1u);
  LODWORD(v326) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v326) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v360 = v326;
  ScreenController::bindBoolForCollection((int)v1, &v364, &v363, (int)&v361, (int)&v359);
  if ( (_DWORD)v360 )
    ((void (*)(void))v360)();
  if ( (_DWORD)v362 )
    ((void (*)(void))v362)();
  v327 = v419 - 12;
  if ( (int *)(v419 - 12) != &dword_28898C0 )
    v351 = (unsigned int *)(v419 - 4);
        v352 = __ldrex(v351);
      while ( __strex(v352 - 1, v351) );
      v352 = (*v351)--;
    if ( v352 <= 0 )
      j_j_j_j__ZdlPv_9(v327);
  v328 = v733 - 12;
  if ( (int *)(v733 - 12) != &dword_28898C0 )
    v353 = (unsigned int *)(v733 - 4);
        v354 = __ldrex(v353);
      while ( __strex(v354 - 1, v353) );
      v354 = (*v353)--;
    if ( v354 <= 0 )
      j_j_j_j__ZdlPv_9(v328);
  v329 = v734 - 12;
  if ( (int *)(v734 - 12) != &dword_28898C0 )
    v355 = (unsigned int *)(v734 - 4);
        v356 = __ldrex(v355);
      while ( __strex(v356 - 1, v355) );
      v356 = (*v355)--;
    if ( v356 <= 0 )
      j_j_j_j__ZdlPv_9(v329);
  v330 = (void *)(v735 - 12);
  if ( (int *)(v735 - 12) != &dword_28898C0 )
    v357 = (unsigned int *)(v735 - 4);
        v358 = __ldrex(v357);
      while ( __strex(v358 - 1, v357) );
      v358 = (*v357)--;
    if ( v358 <= 0 )
      j_j_j_j__ZdlPv_9(v330);
}


int __fastcall ResourcePacksScreenController::_getInvalidResource(ResourcePacksScreenController *this, int a2, unsigned int a3)
{
  ResourcePacksScreenController *v3; // r4@1
  int v4; // r5@1
  int result; // r0@1

  v3 = this;
  v4 = ContentView::getItem(*(ContentView **)(a2 + 528), a3);
  sub_21E8AF4((int *)v3, (int *)(v4 + 60));
  result = *(_DWORD *)(v4 + 64);
  *((_DWORD *)v3 + 1) = result;
  return result;
}


int __fastcall ResourcePacksScreenController::ResourcePacksScreenController(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int64 *a7, char a8, int a9)
{
  int *v9; // r6@1
  int v10; // r4@1
  int v11; // r10@1
  int v12; // r0@1
  unsigned int *v13; // r0@2
  unsigned int v14; // r1@4
  int v15; // r7@7
  unsigned int *v16; // r1@8
  unsigned int v17; // r0@10
  unsigned int *v18; // r5@14
  unsigned int v19; // r0@16
  int v20; // r6@21
  void *v21; // r5@21
  _DWORD *v22; // r0@21
  __int64 v23; // r1@21
  ContentView *v24; // r0@21
  unsigned int v25; // r0@23
  int v26; // r1@23
  int v27; // r2@23
  unsigned int v28; // r3@23
  signed int v29; // r0@24
  signed int v30; // kr00_4@24
  int v31; // r0@24
  int v32; // r1@24
  __int64 v33; // r1@27 OVERLAPPED
  unsigned int v34; // r3@27
  int v35; // r0@27
  int v36; // r5@28
  void *v37; // r0@28
  __int64 v38; // r1@28
  int v39; // r5@30
  _DWORD *v40; // r0@30
  __int64 v41; // r1@30
  _DWORD *v42; // r0@32
  __int64 v43; // r1@32
  int v44; // r5@32
  void *v45; // r0@34
  __int64 v46; // r1@34
  int v47; // r0@36
  int v48; // r1@36
  int v49; // r5@36
  __int64 v50; // r6@37
  int v51; // r1@37
  _DWORD *v52; // r0@41
  __int64 v53; // r2@41
  unsigned int v54; // r5@43
  signed int v55; // r0@46
  char v56; // r1@46
  int v57; // r6@55
  int v58; // r0@55
  unsigned int *v59; // r0@56
  unsigned int v60; // r1@58
  _DWORD *v61; // r0@61
  __int64 v62; // r1@61
  int v63; // r0@63
  unsigned int *v64; // r2@64
  unsigned int v65; // r1@66
  _DWORD *v67; // [sp+Ch] [bp-ACh]@61
  __int64 v68; // [sp+14h] [bp-A4h]@61
  int v69; // [sp+1Ch] [bp-9Ch]@55
  int v70; // [sp+20h] [bp-98h]@55
  _DWORD *v71; // [sp+24h] [bp-94h]@41
  __int64 v72; // [sp+2Ch] [bp-8Ch]@41
  void *v73; // [sp+34h] [bp-84h]@34
  __int64 v74; // [sp+3Ch] [bp-7Ch]@34
  _DWORD *v75; // [sp+44h] [bp-74h]@32
  __int64 v76; // [sp+4Ch] [bp-6Ch]@32
  _DWORD *v77; // [sp+54h] [bp-64h]@30
  __int64 v78; // [sp+5Ch] [bp-5Ch]@30
  void *v79; // [sp+64h] [bp-54h]@28
  __int64 v80; // [sp+6Ch] [bp-4Ch]@28
  _DWORD *v81; // [sp+74h] [bp-44h]@21
  __int64 v82; // [sp+7Ch] [bp-3Ch]@21
  int v83; // [sp+84h] [bp-34h]@1
  int v84; // [sp+88h] [bp-30h]@1

  v9 = (int *)a2;
  v10 = a1;
  v11 = a4;
  v83 = *(_DWORD *)a2;
  v12 = *(_DWORD *)(a2 + 4);
  v84 = v12;
  if ( v12 )
  {
    v13 = (unsigned int *)(v12 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
    }
    else
      ++*v13;
  }
  SettingsScreenControllerBase::SettingsScreenControllerBase(v10, (int)&v83);
  v15 = v84;
  if ( v84 )
    v16 = (unsigned int *)(v84 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
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
  *(_DWORD *)v10 = &off_26E7EAC;
  *(_DWORD *)(v10 + 516) = v11;
  *(_BYTE *)(v10 + 532) = a8;
  *(_DWORD *)(v10 + 536) = 0;
  *(_DWORD *)(v10 + 540) = 0;
  j__ZNSt12__shared_ptrIbLN9__gnu_cxx12_Lock_policyE2EEC2ISaIbEJEEESt19_Sp_make_shared_tagRKT_DpOT0_(v10 + 544);
  *(_DWORD *)(v10 + 552) = a5;
  *(_DWORD *)(v10 + 556) = a6;
  *(_DWORD *)(v10 + 560) = 0;
  *(_BYTE *)(v10 + 564) = 1;
  InvalidPacksFilterGroup::InvalidPacksFilterGroup((InvalidPacksFilterGroup *)(v10 + 568));
  *(_DWORD *)(v10 + 580) = 0;
  *(_DWORD *)(v10 + 584) = 0;
  *(_DWORD *)(v10 + 588) = 0;
  v20 = *v9;
  v21 = operator new(0x1Cu);
  DlcPreCheckScreenHandler::DlcPreCheckScreenHandler((int)v21, v10, v20);
  *(_DWORD *)(v10 + 592) = v21;
  *(_DWORD *)(v10 + 596) = a9;
  *(_DWORD *)(v10 + 600) = 2;
  *(_DWORD *)(v10 + 604) = 0;
  sub_21E034C((_QWORD *)(v10 + 608));
  *(_DWORD *)(v10 + 616) = 0;
  *(_BYTE *)(v10 + 620) = 1;
  *(_BYTE *)(v10 + 644) = 0;
  *(_DWORD *)(v10 + 640) = 0;
  *(_DWORD *)(v10 + 632) = 0;
  *(_DWORD *)(v10 + 636) = 0;
  *(_DWORD *)(v10 + 624) = 0;
  *(_DWORD *)(v10 + 628) = 0;
  *(_BYTE *)(v10 + 645) = 1;
  *(_BYTE *)(v10 + 660) = 0;
  *(_DWORD *)(v10 + 648) = 0;
  *(_DWORD *)(v10 + 652) = 0;
  *(_DWORD *)(v10 + 656) = 0;
  MinecraftScreenController::_setExitBehavior(v10, 3);
  v22 = operator new(8u);
  LODWORD(v23) = sub_13EFCA4;
  *v22 = a5;
  v22[1] = a6;
  HIDWORD(v23) = sub_13EFC78;
  v81 = v22;
  v82 = v23;
  v24 = (ContentView *)ContentManager::getContentView(v11, (int)&v81);
  *(_DWORD *)(v10 + 520) = v24;
  if ( (_DWORD)v82 )
    ((void (*)(void))v82)();
    v24 = *(ContentView **)(v10 + 520);
  v25 = ContentView::getNumberOfItems(v24);
  v26 = *(_DWORD *)(v10 + 624);
  v27 = *(_DWORD *)(v10 + 628);
  v28 = *(_DWORD *)(v10 + 636) - v27 + 8 * (*(_DWORD *)(v10 + 632) - v26);
  if ( v25 >= v28 )
    v33 = *(_QWORD *)(v10 + 632);
    v34 = v25 - v28;
    v35 = v10 + 624;
    std::vector<bool,std::allocator<bool>>::_M_fill_insert(
      *(__int64 *)((char *)&v33 - 4),
      *(_QWORD *)(v10 + 632) >> 32,
      v34,
      0);
  else
    v29 = v25 + v27;
    v30 = v29;
    v31 = v29 % 32;
    v32 = v26 + 4 * (v30 / 32);
    if ( v31 < 0 )
      v32 -= 4;
      v31 += 32;
    *(_DWORD *)(v10 + 632) = v32;
    *(_DWORD *)(v10 + 636) = v31;
  v36 = *(_DWORD *)(v10 + 520);
  v37 = operator new(1u);
  LODWORD(v38) = sub_13EFCFE;
  v79 = v37;
  HIDWORD(v38) = sub_13EFCDE;
  v80 = v38;
  ContentView::setSortFunc(v36, (int)&v79, (int)sub_13EFCDE);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  v39 = *(_DWORD *)(v10 + 520);
  v40 = operator new(4u);
  LODWORD(v41) = sub_13EFE4C;
  *v40 = v10;
  HIDWORD(v41) = sub_13EFD2C;
  v77 = v40;
  v78 = v41;
  ContentView::onReload(v39, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v42 = operator new(8u);
  LODWORD(v43) = sub_13EFEB2;
  *v42 = a5;
  v42[1] = a6;
  HIDWORD(v43) = sub_13EFE82;
  v75 = v42;
  v76 = v43;
  v44 = ContentManager::getContentView(v11, (int)&v75);
  *(_DWORD *)(v10 + 524) = v44;
  if ( (_DWORD)v76 )
    ((void (*)(void))v76)();
    v44 = *(_DWORD *)(v10 + 524);
  v45 = operator new(1u);
  LODWORD(v46) = sub_13EFF60;
  v73 = v45;
  HIDWORD(v46) = sub_13EFEEC;
  v74 = v46;
  ContentView::setSortFunc(v44, (int)&v73, (int)sub_13EFEEC);
  if ( (_DWORD)v74 )
    ((void (*)(void))v74)();
  v47 = *a7 >> 32;
  v48 = *a7;
  v49 = v47 - v48;
  if ( v47 == v48 )
    LODWORD(v50) = 0;
    v51 = *a7 >> 32;
    LODWORD(v50) = operator new(v47 - v48);
    v47 = *a7 >> 32;
    v51 = *a7;
  HIDWORD(v50) = v47 - v51;
  if ( v47 != v51 )
    _aeabi_memmove(v50, v51);
  v52 = operator new(0xCu);
  HIDWORD(v50) += v50;
  HIDWORD(v53) = sub_13EFF8E;
  *(_QWORD *)v52 = v50;
  LODWORD(v53) = sub_13EFFCC;
  v52[2] = v50 + v49;
  v71 = v52;
  v72 = v53;
  *(_DWORD *)(v10 + 528) = ContentManager::getContentView(v11, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  ResourcePacksScreenController::_registerEventHandlers((ResourcePacksScreenController *)v10);
  ResourcePacksScreenController::_registerBindings((ResourcePacksScreenController *)v10);
  v54 = *(_DWORD *)(v10 + 560) + 1;
  *(_DWORD *)(v10 + 560) = v54;
  if ( *(_BYTE *)(v10 + 564) )
    if ( v54 > ContentView::getNumberOfItems(*(ContentView **)(v10 + 520)) )
      *(_DWORD *)(v10 + 560) = 0;
      if ( *(_BYTE *)(v10 + 564) )
        v55 = ContentView::getNumberOfItems(*(ContentView **)(v10 + 524));
        v56 = 0;
        if ( !v55 )
          v56 = 1;
        *(_BYTE *)(v10 + 564) = v56;
        *(_BYTE *)(v10 + 564) = 1;
      goto LABEL_55;
    if ( *(_BYTE *)(v10 + 564) )
    v54 = *(_DWORD *)(v10 + 560);
  if ( v54 >= ContentView::getNumberOfItems(*(ContentView **)(v10 + 524)) )
    *(_DWORD *)(v10 + 560) = 0;
    *(_BYTE *)(v10 + 564) = 1;
LABEL_55:
  ResourcePacksScreenController::_determineHasLockedContent((ResourcePacksScreenController *)v10);
  v57 = *(_DWORD *)(v10 + 424);
  v69 = *(_DWORD *)(v10 + 544);
  v58 = *(_DWORD *)(v10 + 548);
  v70 = v58;
  if ( v58 )
    v59 = (unsigned int *)(v58 + 8);
        v60 = __ldrex(v59);
      while ( __strex(v60 + 1, v59) );
      ++*v59;
  v61 = operator new(4u);
  LODWORD(v62) = sub_13F01D4;
  *v61 = v10;
  HIDWORD(v62) = sub_13F005C;
  v67 = v61;
  v68 = v62;
  MinecraftScreenModel::addDownloadCallback(v57, (int)&v69, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  v63 = v70;
  if ( v70 )
    v64 = (unsigned int *)(v70 + 8);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 == 1 )
      (*(void (**)(void))(*(_DWORD *)v63 + 12))();
  return v10;
}


int *__fastcall ResourcePacksScreenController::_getAvailableSize(ResourcePacksScreenController *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  int *v4; // r4@1
  int v5; // r5@1
  int v6; // r0@2
  int v7; // r1@2
  unsigned __int64 v8; // r2@2
  bool v9; // zf@2
  int *result; // r0@5

  v3 = a2;
  v4 = (int *)this;
  v5 = ContentView::getItem(*(ContentView **)(a2 + 524), a3);
  if ( MinecraftScreenModel::_isPremiumLocked(*(MinecraftScreenModel **)(v3 + 424), *(const PackManifest **)(v5 + 60)) )
    goto LABEL_9;
  v6 = PackManifest::getPackCategory(*(PackManifest **)(v5 + 60));
  v9 = v6 == 1;
  if ( v6 != 1 )
  {
    v8 = *(_QWORD *)(v5 + 24);
    v9 = v8 == 0;
  }
  if ( v9 )
LABEL_9:
    result = sub_21E8AF4(v4, (int *)&Util::EMPTY_STRING);
  else
    result = Util::getFilesizeString((Util *)v4, v7, v8);
  return result;
}


void __fastcall ResourcePacksScreenController::_tryMoveResource(int a1, int a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  int v6; // r7@1
  unsigned int v7; // r5@1
  unsigned int v8; // r6@1
  int v9; // r4@1
  __int64 v10; // kr00_8@5
  unsigned int *v11; // r0@6
  unsigned int v12; // r1@8
  _DWORD *v13; // r0@13
  unsigned int *v14; // r1@14
  unsigned int v15; // r2@16
  unsigned int *v16; // r1@20
  unsigned int v17; // r0@22
  int v18; // r0@33
  unsigned int *v19; // r2@34
  unsigned int v20; // r1@36
  char v21; // [sp+Ch] [bp-44h]@28
  void (*v22)(void); // [sp+14h] [bp-3Ch]@27
  void (__fastcall *v23)(int, int); // [sp+18h] [bp-38h]@28
  _DWORD *v24; // [sp+1Ch] [bp-34h]@19
  void (*v25)(void); // [sp+24h] [bp-2Ch]@13
  void (__fastcall *v26)(int, int); // [sp+28h] [bp-28h]@19
  char v27; // [sp+2Ch] [bp-24h]@5
  int v28; // [sp+30h] [bp-20h]@5

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  if ( a2 )
  {
    if ( a4 == 2 && *(_BYTE *)(a1 + 532) && PackManifest::isPlatformLocked(*(PackManifest **)(a2 + 60)) == 1 )
    {
      MinecraftScreenController::_getWeakPtrToThis<ResourcePacksScreenController>((int)&v27, v9);
      v10 = *(_QWORD *)&v27;
      if ( v28 )
      {
        v11 = (unsigned int *)(v28 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 + 1, v11) );
        }
        else
          ++*v11;
      }
      v25 = 0;
      v13 = operator new(0x14u);
      *(_QWORD *)v13 = v10;
      if ( HIDWORD(v10) )
        v14 = (unsigned int *)(HIDWORD(v10) + 8);
            v15 = __ldrex(v14);
          while ( __strex(v15 + 1, v14) );
          ++*v14;
      v13[2] = v8;
      v13[3] = 2;
      *((_BYTE *)v13 + 16) = a5;
      *((_BYTE *)v13 + 17) = a6;
      v24 = v13;
      v25 = (void (*)(void))sub_13F1DD4;
      v26 = sub_13F1C58;
        v16 = (unsigned int *)(HIDWORD(v10) + 8);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
      v22 = 0;
      if ( v25 )
        ((void (__fastcall *)(char *, _DWORD **, signed int))v25)(&v21, &v24, 2);
        v23 = v26;
        v22 = v25;
      MainMenuScreenController::confirmationNoMultiplayerDialog(v9, (int)&v21);
      if ( v22 )
        v22();
        v25();
      v18 = v28;
        v19 = (unsigned int *)(v28 + 8);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 == 1 )
          (*(void (**)(void))(*(_DWORD *)v18 + 12))();
    }
    else
      ResourcePacksScreenController::_moveResource(v9, v6, v8, v7, a5, a6);
  }
}


signed int __fastcall ResourcePacksScreenController::_handleAvailablePackClicked(ResourcePacksScreenController *this, UIPropertyBag *a2)
{
  ResourcePacksScreenController *v2; // r4@1
  UIPropertyBag *v3; // r6@1
  Json::Value *v4; // r6@2
  ContentView *v5; // r5@2
  int v6; // r1@3
  Json::Value *v7; // r6@5

  v2 = this;
  v3 = a2;
  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) == 1 )
  {
    v4 = (UIPropertyBag *)((char *)v3 + 8);
    v5 = (ContentView *)*((_DWORD *)v2 + 131);
    if ( Json::Value::isNull(v4) )
    {
      v6 = -1;
    }
    else if ( Json::Value::isObject(v4) == 1 )
      v7 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
      if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
        v6 = Json::Value::asInt(v7, 0);
      else
        v6 = -1;
    else
    *((_QWORD *)v2 + 67) = *(_QWORD *)(ContentView::getItem(v5, v6) + 8);
  }
  return 1;
}


signed int __fastcall ResourcePacksScreenController::_handleInvalidPackClicked(ResourcePacksScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r5@1
  ResourcePacksScreenController *v3; // r4@1
  int v4; // r1@2
  Json::Value *v5; // r5@4
  MainMenuScreenModel *v6; // r5@9
  int v7; // r4@9
  void *v8; // r0@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  int v12; // [sp+0h] [bp-20h]@9
  int v13; // [sp+4h] [bp-1Ch]@9

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  v3 = this;
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8)) )
  {
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  v6 = (MainMenuScreenModel *)*((_DWORD *)v3 + 106);
  v7 = ContentView::getItem(*((ContentView **)v3 + 132), v4);
  sub_21E8AF4(&v12, (int *)(v7 + 60));
  v13 = *(_DWORD *)(v7 + 64);
  MainMenuScreenModel::navigateToManifestValidationScreen(v6, (const ResourceLocation *)&v12, 0);
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return 1;
}


signed int __fastcall ResourcePacksScreenController::_handleDeselectPack(ResourcePacksScreenController *this)
{
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 135) = 0;
  return 1;
}


ModalScreenData *__fastcall ResourcePacksScreenController::_showMissingDependencyMessage(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r7@1
  int v5; // r8@1
  __int64 v6; // kr00_8@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  unsigned int v9; // r1@9
  _DWORD *v10; // r0@12
  __int64 v11; // r2@12 OVERLAPPED
  unsigned int *v12; // r1@13
  int (__fastcall *v13)(_DWORD *, void **, int); // r1@18
  unsigned int *v14; // r5@21
  unsigned int v15; // r0@23
  unsigned int v16; // r0@30
  int v17; // r0@35
  unsigned int *v18; // r2@36
  unsigned int v19; // r1@38
  _DWORD *v21; // [sp+0h] [bp-68h]@18
  void (*v22)(void); // [sp+8h] [bp-60h]@12
  char v23; // [sp+10h] [bp-58h]@1
  int v24; // [sp+14h] [bp-54h]@1
  void *v25; // [sp+18h] [bp-50h]@1
  int v26; // [sp+1Ch] [bp-4Ch]@1
  int v27; // [sp+20h] [bp-48h]@1
  int v28; // [sp+24h] [bp-44h]@1
  void *v29; // [sp+28h] [bp-40h]@1
  int v30; // [sp+2Ch] [bp-3Ch]@1
  int v31; // [sp+30h] [bp-38h]@1
  int v32; // [sp+34h] [bp-34h]@1
  void *v33; // [sp+38h] [bp-30h]@1
  void *v34; // [sp+3Ch] [bp-2Ch]@1
  void *v35; // [sp+40h] [bp-28h]@1
  void *v36; // [sp+44h] [bp-24h]@1
  int v37; // [sp+48h] [bp-20h]@1
  char v38; // [sp+4Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v25 = &unk_28898CC;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = &unk_28898CC;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = &unk_28898CC;
  v34 = &unk_28898CC;
  v35 = &unk_28898CC;
  v36 = &unk_28898CC;
  v37 = 1;
  v38 = 0;
  sub_21E8190(&v29, "resourcePack.missingDependency.body", (_BYTE *)0x23);
  sub_21E8190(&v25, "resourcePack.missingDependency.title", (_BYTE *)0x24);
  sub_21E8190(&v34, "options.continue", (_BYTE *)0x10);
  sub_21E8190(&v36, "options.goBack", (_BYTE *)0xE);
  MinecraftScreenController::_getWeakPtrToThis<ResourcePacksScreenController>((int)&v23, v3);
  v6 = *(_QWORD *)&v23;
  if ( v24 )
  {
    v7 = (unsigned int *)(v24 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
        v9 = __ldrex(v7);
      while ( __strex(v9 + 1, v7) );
  }
  v22 = 0;
  v10 = operator new(0x10u);
  *(_QWORD *)v10 = v6;
  if ( HIDWORD(v6) )
    v12 = (unsigned int *)(HIDWORD(v6) + 8);
      {
        LODWORD(v11) = __ldrex(v12);
        HIDWORD(v11) = __strex(v11 + 1, v12);
      }
      while ( HIDWORD(v11) );
      ++*v12;
  v13 = sub_13F2268;
  v10[2] = v5;
  v10[3] = v4;
  LODWORD(v11) = sub_13F20E8;
  v21 = v10;
  *(_QWORD *)&v22 = *(__int64 *)((char *)&v11 - 4);
  LODWORD(v11) = &v21;
  MinecraftScreenController::_displayCustomModalPopup(v3, (int)&v25, v11);
  if ( v22 )
    v22();
    v14 = (unsigned int *)(HIDWORD(v6) + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 12))(HIDWORD(v6));
        v16 = __ldrex(v14);
      while ( __strex(v16 - 1, v14) );
      v16 = (*v14)--;
    if ( v16 == 1 )
  v17 = v24;
    v18 = (unsigned int *)(v24 + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      (*(void (**)(void))(*(_DWORD *)v17 + 12))();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v25);
}


signed int __fastcall ResourcePacksScreenController::_handleSelectedPackMoveClicked(ResourcePacksScreenController *this, UIPropertyBag *a2)
{
  ResourcePacksScreenController *v2; // r4@1
  Json::Value *v3; // r5@1
  signed int v4; // r6@1
  int v5; // r5@2
  Json::Value *v6; // r5@4
  CatalogPackManifest *v7; // r6@10
  MinecraftScreenModel *v8; // r7@11
  char *v9; // r0@11
  int v10; // r5@13
  __int64 v11; // r2@14
  int v12; // r1@17
  int v13; // r0@19
  int v15; // r4@21
  void *v16; // r0@21
  __int64 v17; // r1@21
  char *v18; // r4@23
  int v19; // r6@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27
  int *v22; // r0@33
  void *v23; // r0@38
  void *v24; // r0@39
  unsigned int *v25; // r2@40
  signed int v26; // r1@42
  unsigned int *v27; // r2@44
  signed int v28; // r1@46
  char v29; // [sp+10h] [bp-90h]@14
  void (*v30)(void); // [sp+18h] [bp-88h]@14
  void *v31; // [sp+20h] [bp-80h]@14
  int v32; // [sp+24h] [bp-7Ch]@14
  int v33; // [sp+28h] [bp-78h]@14
  int v34; // [sp+2Ch] [bp-74h]@14
  void *v35; // [sp+30h] [bp-70h]@14
  int v36; // [sp+34h] [bp-6Ch]@14
  int v37; // [sp+38h] [bp-68h]@14
  int v38; // [sp+3Ch] [bp-64h]@14
  void *v39; // [sp+40h] [bp-60h]@14
  void *v40; // [sp+44h] [bp-5Ch]@14
  void *v41; // [sp+48h] [bp-58h]@14
  void *v42; // [sp+4Ch] [bp-54h]@14
  int v43; // [sp+50h] [bp-50h]@14
  char v44; // [sp+54h] [bp-4Ch]@14
  void *v45; // [sp+58h] [bp-48h]@21
  __int64 v46; // [sp+60h] [bp-40h]@21
  int v47; // [sp+68h] [bp-38h]@21
  char *v48; // [sp+6Ch] [bp-34h]@21
  char *v49; // [sp+70h] [bp-30h]@21
  char *v50; // [sp+74h] [bp-2Ch]@21
  int v51; // [sp+78h] [bp-28h]@21

  v2 = this;
  v3 = (UIPropertyBag *)((char *)a2 + 8);
  v4 = ResourcePacksScreenController::_getPackListType(this, a2);
  if ( Json::Value::isNull(v3) )
  {
    v5 = -1;
  }
  else if ( Json::Value::isObject(v3) == 1 )
    v6 = (Json::Value *)Json::Value::operator[]((int)v3, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  if ( v4 == 2 )
    v7 = *(CatalogPackManifest **)(ContentView::getItem(*((ContentView **)v2 + 131), v5) + 60);
    if ( PackManifest::isPremium(v7) != 1
      || (v8 = (MinecraftScreenModel *)*((_DWORD *)v2 + 106),
          v9 = PackManifest::getIdentity(v7),
          MinecraftScreenModel::isPremiumOwnedMissing(v8, (const PackIdVersion *)v9) != 1) )
    {
      v13 = ContentView::getItem(*((ContentView **)v2 + 131), v5);
      ResourcePacksScreenController::_tryMoveResource((int)v2, v13, v5, 2u, 1, 0);
    }
      *((_DWORD *)v2 + 134) = 0;
      *((_DWORD *)v2 + 135) = 0;
      if ( PackManifest::getManifestType(v7) == 2 )
      {
        v10 = CatalogPackManifest::getMinimumPerformanceRequirements(v7);
        if ( v10 <= MainMenuScreenModel::getDevicePerfTier(*((MainMenuScreenModel **)v2 + 106)) )
        {
          CatalogPackManifest::getProductId((CatalogPackManifest *)&v51, (int)v7);
          v15 = *((_DWORD *)v2 + 148);
          sub_21E8AF4(&v47, &v51);
          v48 = 0;
          v49 = 0;
          v50 = 0;
          v48 = (char *)operator new(4u);
          v50 = v48 + 4;
          v49 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                          (int)&v47,
                          (int)&v48,
                          (int)v48);
          v16 = operator new(1u);
          LODWORD(v17) = sub_13F1E8A;
          v45 = v16;
          HIDWORD(v17) = nullsub_70;
          v46 = v17;
          DlcPreCheckScreenHandler::tryDownload(v15, (unsigned __int64 *)&v48, (int)&v45, 1, 1, 1, 0);
          if ( (_DWORD)v46 )
            ((void (*)(void))v46)();
          v19 = (int)v49;
          v18 = v48;
          if ( v48 != v49 )
          {
            do
            {
              v22 = (int *)(*(_DWORD *)v18 - 12);
              if ( v22 != &dword_28898C0 )
              {
                v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
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
                  j_j_j_j__ZdlPv_9(v22);
              }
              v18 += 4;
            }
            while ( v18 != (char *)v19 );
            v18 = v48;
          }
          if ( v18 )
            operator delete(v18);
          v23 = (void *)(v47 - 12);
          if ( (int *)(v47 - 12) != &dword_28898C0 )
            v27 = (unsigned int *)(v47 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
            else
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j__ZdlPv_9(v23);
          v24 = (void *)(v51 - 12);
          if ( (int *)(v51 - 12) != &dword_28898C0 )
            v25 = (unsigned int *)(v51 - 4);
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
              v26 = (*v25)--;
            if ( v26 <= 0 )
              j_j_j_j__ZdlPv_9(v24);
        }
        else
          v31 = &unk_28898CC;
          v32 = 0;
          v33 = 0;
          v34 = 0;
          v35 = &unk_28898CC;
          v36 = 0;
          v37 = 0;
          v38 = 0;
          v39 = &unk_28898CC;
          v40 = &unk_28898CC;
          v41 = &unk_28898CC;
          v42 = &unk_28898CC;
          v43 = 1;
          v44 = 0;
          sub_21E8190(&v31, "store.incompatible", (_BYTE *)0x12);
          sub_21E8190(&v35, "store.itemIsIncompatible", (_BYTE *)0x18);
          sub_21E8190(&v41, "gui.ok", (_BYTE *)6);
          v43 = 2;
          v30 = 0;
          LODWORD(v11) = &v29;
          MinecraftScreenController::_displayCustomModalPopup((int)v2, (int)&v31, v11);
          if ( v30 )
            v30();
          ModalScreenData::~ModalScreenData((ModalScreenData *)&v31);
      }
    v12 = ContentView::getItem(*((ContentView **)v2 + 130), v5);
    if ( v12 )
      ResourcePacksScreenController::_moveResource((int)v2, v12, v5, 1u, 1, 0);
  return 1;
}


void *__fastcall ResourcePacksScreenController::_getCyclingIconPath(ResourcePacksScreenController *this, int a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  unsigned int v4; // r6@4
  ContentView *v5; // r0@2
  ContentView *v6; // r0@6
  int v7; // r0@8
  void *result; // r0@8
  int v9; // r0@9

  v2 = a2;
  v3 = (const void **)this;
  if ( *(_BYTE *)(a2 + 564) )
    v5 = *(ContentView **)(a2 + 520);
  else
    v5 = *(ContentView **)(a2 + 524);
  v4 = *(_DWORD *)(a2 + 560);
  if ( v4 >= ContentView::getNumberOfItems(v5) )
  {
    v9 = MinecraftScreenModel::getResourcePackRepository(*(MinecraftScreenModel **)(v2 + 380));
    result = (void *)ResourcePack::getIconPath(v3, *(_DWORD *)(v9 + 40), 0);
  }
    if ( *(_BYTE *)(v2 + 564) )
      v6 = *(ContentView **)(v2 + 520);
    else
      v6 = *(ContentView **)(v2 + 524);
    v7 = ContentView::getItem(v6, *(_DWORD *)(v2 + 560));
    result = sub_21E8AF4((int *)v3, (int *)(v7 + 64));
  return result;
}


__int64 __fastcall ResourcePacksScreenController::_handleCycleIcon(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController *v1; // r4@1
  signed __int64 v2; // kr00_8@1
  __int64 result; // r0@1
  signed int v4; // r3@1
  signed int v5; // r2@1
  unsigned int v6; // r6@8
  char v7; // r6@10
  int v8; // [sp+0h] [bp-20h]@20
  __int64 v9; // [sp+8h] [bp-18h]@1

  v1 = this;
  sub_21E034C(&v9);
  v2 = 1000000000LL * *((_DWORD *)v1 + 150);
  HIDWORD(result) = HIDWORD(v2) + 1000000000 * *((_DWORD *)v1 + 151);
  LODWORD(result) = (unsigned __int64)(v9 - *((_QWORD *)v1 + 76)) >> 32;
  v4 = 0;
  v5 = 0;
  if ( (unsigned int)v2 >= (signed int)v9 - *((_DWORD *)v1 + 152) )
    v5 = 1;
  if ( SHIDWORD(result) >= (signed int)result )
    v4 = 1;
  if ( HIDWORD(result) == (_DWORD)result )
    v4 = v5;
  if ( !v4 )
  {
    v6 = *((_DWORD *)v1 + 140) + 1;
    *((_DWORD *)v1 + 140) = v6;
    if ( *((_BYTE *)v1 + 564) )
    {
      if ( v6 > ContentView::getNumberOfItems(*((ContentView **)v1 + 130)) )
      {
        v7 = 0;
        *((_DWORD *)v1 + 140) = 0;
        if ( *((_BYTE *)v1 + 564) )
        {
          if ( !ContentView::getNumberOfItems(*((ContentView **)v1 + 131)) )
            v7 = 1;
          *((_BYTE *)v1 + 564) = v7;
        }
        else
          *((_BYTE *)v1 + 564) = 1;
        goto LABEL_20;
      }
      if ( *((_BYTE *)v1 + 564) )
LABEL_20:
        sub_21E034C(&v8);
        result = *(_QWORD *)&v8;
        *((_QWORD *)v1 + 76) = *(_QWORD *)&v8;
        return result;
      v6 = *((_DWORD *)v1 + 140);
    }
    if ( v6 >= ContentView::getNumberOfItems(*((ContentView **)v1 + 131)) )
      *((_DWORD *)v1 + 140) = 0;
      *((_BYTE *)v1 + 564) = 1;
    goto LABEL_20;
  }
  return result;
}


void __fastcall ResourcePacksScreenController::_getCollectionName(ResourcePacksScreenController *this, UIPropertyBag *a2, int a3)
{
  ResourcePacksScreenController::_getCollectionName(this, a2, a3);
}


signed int __fastcall ResourcePacksScreenController::_handleSelectedPackClicked(ResourcePacksScreenController *this, UIPropertyBag *a2)
{
  ResourcePacksScreenController *v2; // r4@1
  UIPropertyBag *v3; // r6@1
  Json::Value *v4; // r6@2
  ContentView *v5; // r5@2
  int v6; // r1@3
  Json::Value *v7; // r6@5

  v2 = this;
  v3 = a2;
  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) == 1 )
  {
    v4 = (UIPropertyBag *)((char *)v3 + 8);
    v5 = (ContentView *)*((_DWORD *)v2 + 130);
    if ( Json::Value::isNull(v4) )
    {
      v6 = -1;
    }
    else if ( Json::Value::isObject(v4) == 1 )
      v7 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
      if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
        v6 = Json::Value::asInt(v7, 0);
      else
        v6 = -1;
    else
    *((_QWORD *)v2 + 67) = *(_QWORD *)(ContentView::getItem(v5, v6) + 8);
  }
  return 1;
}


void __fastcall ResourcePacksScreenController::~ResourcePacksScreenController(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController::~ResourcePacksScreenController(this);
}


void __fastcall ResourcePacksScreenController::_showStoreConnectFailedMessage(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController *v1; // r4@1
  __int64 v2; // r1@1
  void *v3; // r0@3
  void *v4; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  unsigned int *v7; // r2@10
  signed int v8; // r1@12
  void *v9; // [sp+4h] [bp-34h]@1
  __int64 v10; // [sp+Ch] [bp-2Ch]@1
  int v11; // [sp+18h] [bp-20h]@1
  int v12; // [sp+20h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v12, "store.connection.failed.title");
  sub_21E94B4((void **)&v11, "store.connection.failed.body");
  v9 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIFvbEEEd_UlbE_E10_M_managerERSt9_Any_dataRKSA_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFvbEZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIS0_EEd_UlbE_E9_M_invokeERKSt9_Any_datab;
  v10 = v2;
  MinecraftScreenController::_displayStandardModalPopup((int)v1, &v12, &v11, 2, (int)&v9);
  if ( (_DWORD)v10 )
    ((void (*)(void))v10)();
  v3 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v11 - 4);
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
  v4 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v12 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
}


void __fastcall ResourcePacksScreenController::_registerBindings(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController::_registerBindings(this);
}


void __fastcall ResourcePacksScreenController::_tryMoveResource(int a1, int a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  ResourcePacksScreenController::_tryMoveResource(a1, a2, a3, a4, a5, a6);
}


ModalScreenData *__fastcall ResourcePacksScreenController::_showDataPackWarningMessage(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController *v1; // r4@1
  __int64 v2; // r2@1
  int v4; // [sp+0h] [bp-58h]@1
  void (*v5)(void); // [sp+8h] [bp-50h]@1
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
  sub_21E8190(&v6, "resourcePack.warning.title", (_BYTE *)0x1A);
  sub_21E8190(&v10, "resourcePack.warning.body", (_BYTE *)0x19);
  sub_21E8190(&v16, "gui.ok", (_BYTE *)6);
  v18 = 2;
  v5 = 0;
  LODWORD(v2) = &v4;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v6, v2);
  if ( v5 )
    v5();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v6);
}


int __fastcall ResourcePacksScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r5@1

  v2 = a1;
  if ( a2 == 15 )
    ContentManager::reloadItems(*(ContentManager **)(a1 + 516));
  return j_j_j__ZN16ScreenController27handleGameEventNotificationEN2ui21GameEventNotificationE_0(v2);
}


signed int __fastcall ResourcePacksScreenController::_addDependencies(int a1, int a2, unsigned __int64 *a3, int a4)
{
  int v4; // r5@1
  unsigned __int64 *v5; // r8@1
  char *v6; // r0@1
  unsigned __int64 *v7; // r4@1
  void *v8; // r7@1
  signed int v9; // r0@1
  unsigned int v10; // r6@1
  int v11; // r10@4
  int **v12; // r4@4
  int **v13; // r5@6
  unsigned int *v14; // r1@7
  signed int v15; // r0@9
  char *v16; // r9@14
  size_t v17; // r2@14
  char *v18; // r6@14
  signed int v19; // r11@15
  int *v20; // r6@21
  int v21; // r4@22
  char *v22; // r0@23
  __int64 v23; // r0@23
  int **v24; // r1@28
  unsigned int *v25; // r1@30
  signed int v26; // r0@32
  char *v27; // r9@37
  size_t v28; // r2@37
  char *v29; // r6@37
  signed int v30; // r5@38
  int *v31; // r5@44
  int **v32; // r9@45
  int v33; // r4@45
  char v34; // r6@45
  char *v35; // r0@46
  __int64 v36; // r0@46
  signed int v37; // r7@53
  int *v38; // r11@53
  signed int v39; // r0@54
  PackManifest *v40; // r9@56
  PackManifest *v41; // r6@57
  signed int v42; // r1@58
  signed int v43; // r0@60
  int v44; // r0@61
  char v45; // r4@61
  void *v46; // r0@63
  void *v47; // r0@63
  __int64 v48; // r4@64
  int v49; // r0@66
  int v50; // r9@66
  int v51; // r5@66
  int v52; // r0@66
  int v53; // r8@67
  char *v54; // r4@68
  char *v55; // r0@68
  int v56; // r10@68
  char *v57; // r4@69
  char *v58; // r0@69
  char *v59; // r4@70
  char *v60; // r0@70
  char *v61; // r4@71
  char *v62; // r0@71
  int v63; // r0@74
  PackManifest **v64; // r5@76
  unsigned int *v65; // r2@77
  signed int v66; // r1@79
  int *v67; // r0@85
  void *v68; // r0@90
  void *v69; // r0@91
  void *v70; // r0@92
  __int64 v71; // r2@93
  char *v72; // r4@96
  PackManifest *v73; // t1@96
  char *v74; // r0@96
  char *v75; // r4@98
  char *v76; // r0@98
  char *v77; // r4@101
  char *v78; // r0@101
  int v79; // r0@105
  char *v80; // r4@108
  void *v81; // r8@108
  unsigned int v82; // r2@108
  unsigned int v83; // r1@110
  unsigned int v84; // r5@110
  int *v85; // r9@117
  int v86; // r9@119
  bool v87; // zf@126
  unsigned int *v88; // r2@132
  signed int v89; // r1@134
  unsigned int *v90; // r2@136
  signed int v91; // r1@138
  unsigned int *v92; // r2@140
  signed int v93; // r1@142
  unsigned int *v94; // r2@144
  signed int v95; // r1@146
  signed int v96; // r1@165
  int v98; // [sp+1Ch] [bp-CCh]@66
  int v99; // [sp+28h] [bp-C0h]@56
  unsigned __int64 *v100; // [sp+2Ch] [bp-BCh]@1
  signed int v101; // [sp+30h] [bp-B8h]@56
  int v102; // [sp+34h] [bp-B4h]@1
  int *v103; // [sp+38h] [bp-B0h]@53
  int **v104; // [sp+3Ch] [bp-ACh]@5
  signed int v105; // [sp+3Ch] [bp-ACh]@56
  int v106; // [sp+40h] [bp-A8h]@1
  char v107; // [sp+44h] [bp-A4h]@93
  void (*v108)(void); // [sp+4Ch] [bp-9Ch]@93
  int v109; // [sp+54h] [bp-94h]@56
  int v110; // [sp+58h] [bp-90h]@63
  void *ptr; // [sp+5Ch] [bp-8Ch]@63
  void *v112; // [sp+60h] [bp-88h]@63
  char *v113; // [sp+64h] [bp-84h]@63
  int v114; // [sp+6Ch] [bp-7Ch]@63
  int v115; // [sp+70h] [bp-78h]@63
  void *v116; // [sp+74h] [bp-74h]@62
  int v117; // [sp+78h] [bp-70h]@62
  int v118; // [sp+7Ch] [bp-6Ch]@62
  int v119; // [sp+80h] [bp-68h]@62
  void *v120; // [sp+84h] [bp-64h]@62
  int v121; // [sp+88h] [bp-60h]@62
  int v122; // [sp+8Ch] [bp-5Ch]@62
  int v123; // [sp+90h] [bp-58h]@62
  void *v124; // [sp+94h] [bp-54h]@62
  void *v125; // [sp+98h] [bp-50h]@62
  void *v126; // [sp+9Ch] [bp-4Ch]@62
  void *v127; // [sp+A0h] [bp-48h]@62
  int v128; // [sp+A4h] [bp-44h]@62
  char v129; // [sp+A8h] [bp-40h]@62
  int v130; // [sp+ACh] [bp-3Ch]@61
  void *s1; // [sp+B0h] [bp-38h]@14
  void *v132; // [sp+B4h] [bp-34h]@1
  int v133; // [sp+B8h] [bp-30h]@1
  char *v134; // [sp+BCh] [bp-2Ch]@1

  v4 = a2;
  v106 = a1;
  v5 = a3;
  v102 = a4;
  v100 = a3;
  v6 = PackManifest::getDependentPackIdentities(*(PackManifest **)(a2 + 60));
  v7 = (unsigned __int64 *)v6;
  v8 = 0;
  v9 = (*(_QWORD *)v6 >> 32) - *(_QWORD *)v6;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v10 = -1431655765 * (v9 >> 4);
  if ( v9 )
  {
    if ( v10 >= 0x5555556 )
      sub_21E57F4();
    v8 = operator new(v9);
  }
  v132 = v8;
  v133 = (int)v8;
  v134 = (char *)v8 + 48 * v10;
  v11 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<PackIdVersion const*,std::vector<PackIdVersion,std::allocator<PackIdVersion>>>,PackIdVersion*>(
          *v7,
          *v7 >> 32,
          (int)v8);
  v12 = (int **)(v4 + 324);
  v133 = v11;
  if ( v8 == (void *)v11 )
    v24 = (int **)(v4 + 320);
  else
    v104 = (int **)(v4 + 320);
    if ( v102 == 1 )
    {
      v13 = (int **)(v4 + 324);
      do
      {
        mce::UUID::asString((mce::UUID *)&s1);
        v16 = (char *)s1;
        v18 = (char *)s1 - 12;
        v17 = *((_DWORD *)s1 - 3);
        if ( v17 == *(_DWORD *)(dword_27E6B84 - 12) )
        {
          v19 = 0;
          if ( !memcmp(s1, (const void *)dword_27E6B84, v17) )
            v19 = 1;
        }
        else
        if ( (int *)v18 != &dword_28898C0 )
          v14 = (unsigned int *)(v16 - 4);
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
            j_j_j_j__ZdlPv_9(v18);
        if ( !v19 )
          v20 = *v104;
          if ( *v104 != *v13 )
            v21 = (int)(*v13 - 1);
            {
              v22 = PackManifest::getIdentity(*(PackManifest **)(*v20 + 60));
              v23 = (unsigned int)PackIdVersion::operator==((int)v22, (int)v8);
              v87 = v21 == (_DWORD)v20;
              ++v20;
              if ( v87 )
                HIDWORD(v23) = 1;
            }
            while ( !v23 );
        v8 = (char *)v8 + 48;
      }
      while ( v8 != (void *)v11 );
      v5 = v100;
      v12 = v13;
    }
    else
        v27 = (char *)s1;
        v29 = (char *)s1 - 12;
        v28 = *((_DWORD *)s1 - 3);
        if ( v28 == *(_DWORD *)(dword_27E6B84 - 12) )
          v30 = 0;
          if ( !memcmp(s1, (const void *)dword_27E6B84, v28) )
            v30 = 1;
        if ( (int *)v29 != &dword_28898C0 )
          v25 = (unsigned int *)(v27 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        if ( !v30 )
          v31 = *v104;
          if ( *v104 == *v12 )
            v37 = 4;
            goto LABEL_169;
          v32 = v12;
          v33 = (int)(*v12 - 1);
          v34 = 0;
          do
            v35 = PackManifest::getIdentity(*(PackManifest **)(*v31 + 60));
            v36 = (unsigned int)PackIdVersion::operator==((int)v35, (int)v8);
            v87 = v33 == (_DWORD)v31;
            v34 |= v36;
            ++v31;
            if ( v87 )
              HIDWORD(v36) = 1;
          while ( !v36 );
          v12 = v32;
          if ( !(v34 & 1) )
    v24 = v104;
  v37 = 0;
  v38 = *v24;
  v103 = *v12;
  if ( *v24 == *v12 )
    v43 = 6;
    v96 = 4;
    goto LABEL_167;
  v39 = 1;
  if ( v102 )
    v39 = 7;
  v40 = (PackManifest *)&v109;
  v101 = v39;
  v105 = 4;
  v99 = 0;
  do
    v41 = v40;
    if ( MinecraftScreenModel::_isPremiumLocked(
           *(MinecraftScreenModel **)(v106 + 424),
           *(const PackManifest **)(*v38 + 60)) == 1 )
      v42 = v105;
      if ( !v102 )
        v42 = 4;
      v43 = v101;
      v105 = v42;
LABEL_125:
      v40 = v41;
      goto LABEL_126;
    v130 = MinecraftScreenModel::getContentTierInfo(*(MinecraftScreenModel **)(v106 + 380));
    v44 = SubpackInfoCollection::isCompatible((__int64 *)(*v38 + 308), &v130);
    v45 = v44;
    if ( !v44 )
      v49 = *v5 >> 32;
      v50 = *v5;
      v51 = *v38;
      v98 = v49;
      v52 = (v49 - v50) >> 4;
      if ( v52 >= 1 )
        v53 = v52 + 1;
        do
          v54 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)v50 + 60));
          v55 = PackManifest::getIdentity(*(PackManifest **)(v51 + 60));
          v56 = v50;
          if ( PackIdVersion::operator==((int)v54, (int)v55) )
            goto LABEL_105;
          v56 = v50 + 4;
          v57 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)(v50 + 4) + 60));
          v58 = PackManifest::getIdentity(*(PackManifest **)(v51 + 60));
          if ( PackIdVersion::operator==((int)v57, (int)v58) )
          v56 = v50 + 8;
          v59 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)(v50 + 8) + 60));
          v60 = PackManifest::getIdentity(*(PackManifest **)(v51 + 60));
          if ( PackIdVersion::operator==((int)v59, (int)v60) )
          v56 = v50 + 12;
          v61 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)(v50 + 12) + 60));
          v62 = PackManifest::getIdentity(*(PackManifest **)(v51 + 60));
          if ( PackIdVersion::operator==((int)v61, (int)v62) )
          --v53;
          v50 += 16;
        while ( v53 > 1 );
      if ( 1 == (v98 - v50) >> 2 )
        v64 = (PackManifest **)(v51 + 60);
        v56 = v50;
LABEL_101:
        v77 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)v56 + 60));
        v78 = PackManifest::getIdentity(*v64);
        if ( !PackIdVersion::operator==((int)v77, (int)v78) )
          v56 = v98;
        goto LABEL_105;
      v63 = (v98 - v50) >> 2;
      if ( v63 == 3 )
        v72 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)v50 + 60));
        v73 = *(PackManifest **)(v51 + 60);
        v74 = PackManifest::getIdentity(v73);
        if ( PackIdVersion::operator==((int)v72, (int)v74) )
          goto LABEL_105;
        v56 = v50 + 4;
      else
        if ( v63 != 2 )
      v75 = PackManifest::getIdentity(*(PackManifest **)(*(_DWORD *)v56 + 60));
      v76 = PackManifest::getIdentity(*v64);
      if ( !PackIdVersion::operator==((int)v75, (int)v76) )
        v56 += 4;
        goto LABEL_101;
LABEL_105:
      v79 = *((_DWORD *)v100 + 1);
      if ( v56 == v79 )
        if ( v56 == *((_DWORD *)v100 + 2) )
          v80 = 0;
          v81 = *(void **)v100;
          v82 = (v79 - *(_DWORD *)v100) >> 2;
          if ( !v82 )
            v82 = 1;
          v83 = v82 + ((v79 - (signed int)v81) >> 2);
          v84 = v82 + ((v79 - (signed int)v81) >> 2);
          if ( 0 != v83 >> 30 )
            v84 = 0x3FFFFFFF;
          if ( v83 < v82 )
          if ( v84 )
            if ( v84 >= 0x40000000 )
              sub_21E57F4();
            v80 = (char *)operator new(4 * v84);
            v79 = *v100 >> 32;
            v81 = (void *)*v100;
          v85 = (int *)&v80[v79 - (_DWORD)v81];
          *v85 = *v38;
          if ( 0 != (v79 - (signed int)v81) >> 2 )
            _aeabi_memmove4(v80, v81);
          v86 = (int)(v85 + 1);
          if ( v81 )
            operator delete(v81);
          v5 = v100;
          *(_DWORD *)v100 = v80;
          *((_DWORD *)v100 + 1) = v86;
          *((_DWORD *)v100 + 2) = &v80[4 * v84];
          *(_DWORD *)v56 = *v38;
          *((_DWORD *)v100 + 1) += 4;
        v99 = ResourcePacksScreenController::_addDependencies(v106, *v38, (int)v5, v102);
      v43 = v99;
      if ( v99 )
        v43 = 6;
      goto LABEL_125;
    v116 = &unk_28898CC;
    v117 = 0;
    v118 = 0;
    v119 = 0;
    v120 = &unk_28898CC;
    v121 = 0;
    v122 = 0;
    v123 = 0;
    v124 = &unk_28898CC;
    v125 = &unk_28898CC;
    v126 = &unk_28898CC;
    v127 = &unk_28898CC;
    v128 = 1;
    v129 = 0;
    sub_21E8190(&v116, "store.incompatible", (_BYTE *)0x12);
    if ( v45 & 1 )
      sub_21E94B4((void **)&v114, "resourcePack.incompatibleDependency.memory");
      PackManifest::getName(v40, *(_DWORD *)(*v38 + 60));
      I18n::get(&v110, (int **)v40);
      ptr = 0;
      v112 = 0;
      v113 = 0;
      v46 = operator new(4u);
      ptr = v46;
      v113 = (char *)v46 + 4;
      v112 = (void *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v110,
                       (int)&ptr,
                       (int)v46);
      I18n::get(&v115, &v114, (unsigned __int64 *)&ptr);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v120,
        &v115);
      v47 = (void *)(v115 - 12);
      if ( (int *)(v115 - 12) != &dword_28898C0 )
        v88 = (unsigned int *)(v115 - 4);
        if ( &pthread_create )
          __dmb();
            v89 = __ldrex(v88);
          while ( __strex(v89 - 1, v88) );
          v89 = (*v88)--;
        if ( v89 <= 0 )
          j_j_j_j__ZdlPv_9(v47);
      v48 = *(_QWORD *)&ptr;
      if ( ptr != v112 )
          v67 = (int *)(*(_DWORD *)v48 - 12);
          if ( v67 != &dword_28898C0 )
            v65 = (unsigned int *)(*(_DWORD *)v48 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v66 = __ldrex(v65);
              while ( __strex(v66 - 1, v65) );
            else
              v66 = (*v65)--;
            if ( v66 <= 0 )
              j_j_j_j__ZdlPv_9(v67);
          LODWORD(v48) = v48 + 4;
        while ( (_DWORD)v48 != HIDWORD(v48) );
        LODWORD(v48) = ptr;
      if ( (_DWORD)v48 )
        operator delete((void *)v48);
      v68 = (void *)(v110 - 12);
      if ( (int *)(v110 - 12) != &dword_28898C0 )
        v90 = (unsigned int *)(v110 - 4);
            v91 = __ldrex(v90);
          while ( __strex(v91 - 1, v90) );
          v91 = (*v90)--;
        if ( v91 <= 0 )
          j_j_j_j__ZdlPv_9(v68);
      v69 = (void *)(v109 - 12);
      if ( (int *)(v109 - 12) != &dword_28898C0 )
        v92 = (unsigned int *)(v109 - 4);
            v93 = __ldrex(v92);
          while ( __strex(v93 - 1, v92) );
          v93 = (*v92)--;
        if ( v93 <= 0 )
          j_j_j_j__ZdlPv_9(v69);
      v70 = (void *)(v114 - 12);
      if ( (int *)(v114 - 12) != &dword_28898C0 )
        v94 = (unsigned int *)(v114 - 4);
            v95 = __ldrex(v94);
          while ( __strex(v95 - 1, v94) );
          v95 = (*v94)--;
        if ( v95 <= 0 )
          j_j_j_j__ZdlPv_9(v70);
    sub_21E8190(&v126, "gui.ok", (_BYTE *)6);
    v108 = 0;
    v128 = 2;
    LODWORD(v71) = &v107;
    MinecraftScreenController::_displayCustomModalPopup(v106, (int)&v116, v71);
    if ( v108 )
      v108();
    ModalScreenData::~ModalScreenData((ModalScreenData *)&v116);
    v105 = 8;
    v43 = 1;
LABEL_126:
    v87 = v43 == 7;
    if ( v43 != 7 )
      v87 = v43 == 0;
    if ( !v87 )
      goto LABEL_166;
    ++v38;
  while ( v38 != v103 );
  v43 = 6;
LABEL_166:
  v37 = v99;
  v96 = v105;
LABEL_167:
  if ( v43 != 6 )
    v37 = v96;
LABEL_169:
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&v132);
  return v37;
}


void __fastcall ResourcePacksScreenController::_moveResource(int a1, int a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  ResourcePacksScreenController::_moveResource(a1, a2, a3, a4, a5, a6);
}


void __fastcall ResourcePacksScreenController::_handleMovePackResult(ResourcePacksScreenController *this, _DWORD *a2, __int64 a3)
{
  ResourcePacksScreenController::_handleMovePackResult(this, a2, a3);
}


signed int __fastcall ResourcePacksScreenController::_handleReportErrorsClicked(ResourcePacksScreenController *this, UIPropertyBag *a2)
{
  UIPropertyBag *v2; // r5@1
  Json::Value *v3; // r6@1
  ResourcePacksScreenController *v4; // r4@1
  int v5; // r6@2
  Json::Value *v6; // r6@4
  ContentView *v7; // r0@10
  int v8; // r0@12
  const PackContentItem *v9; // r5@12
  MainMenuScreenModel *v10; // r4@12
  char *v11; // r0@12

  v2 = a2;
  v3 = (UIPropertyBag *)((char *)a2 + 8);
  v4 = this;
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8)) )
  {
    v5 = -1;
  }
  else if ( Json::Value::isObject(v3) == 1 )
    v6 = (Json::Value *)Json::Value::operator[]((int)v3, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  if ( ResourcePacksScreenController::_getPackListType(v4, v2) == 2 )
    v7 = (ContentView *)*((_DWORD *)v4 + 131);
    v7 = (ContentView *)*((_DWORD *)v4 + 130);
  v8 = ContentView::getItem(v7, v5);
  v9 = (const PackContentItem *)v8;
  v10 = (MainMenuScreenModel *)*((_DWORD *)v4 + 106);
  v11 = PackManifest::getLocation(*(PackManifest **)(v8 + 60));
  MainMenuScreenModel::navigateToManifestValidationScreen(v10, (const ResourceLocation *)v11, v9);
  return 1;
}


void *__fastcall ResourcePacksScreenController::_getCyclingIconFileSystem(ResourcePacksScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  unsigned int v4; // r6@4
  ContentView *v5; // r0@2
  ContentView *v6; // r0@6
  int v7; // r0@8
  void *result; // r0@8
  int v9; // r0@9
  int v10; // r0@9
  int v11; // [sp+4h] [bp-1Ch]@9
  unsigned int v12; // [sp+8h] [bp-18h]@9

  v2 = a2;
  v3 = (void **)this;
  if ( *(_BYTE *)(a2 + 564) )
    v5 = *(ContentView **)(a2 + 520);
  else
    v5 = *(ContentView **)(a2 + 524);
  v4 = *(_DWORD *)(a2 + 560);
  if ( v4 >= ContentView::getNumberOfItems(v5) )
  {
    v9 = MinecraftScreenModel::getResourcePackRepository(*(MinecraftScreenModel **)(v2 + 380));
    v10 = ResourcePack::getIconFileSytem(*(ResourcePack **)(v9 + 40));
    ResourceUtil::stringFromPath(&v11, v10);
    result = sub_21E91E0(v3, v12, v11);
  }
    if ( *(_BYTE *)(v2 + 564) )
      v6 = *(ContentView **)(v2 + 520);
    else
      v6 = *(ContentView **)(v2 + 524);
    v7 = ContentView::getItem(v6, *(_DWORD *)(v2 + 560));
    result = sub_21E8AF4((int *)v3, (int *)(v7 + 72));
  return result;
}


int __fastcall ResourcePacksScreenController::tick(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController *v1; // r4@1
  int v2; // r9@1
  InvalidResourceSource **v3; // r7@1
  __int64 v4; // kr00_8@1
  char v5; // r5@2
  signed int v6; // r0@4
  int v7; // r0@8
  int v8; // r5@8
  int v9; // r0@9
  PackManagerContentSource *v10; // r6@10
  UIDefRepository *v11; // r0@10

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  ResourcePacksScreenController::_handleCycleIcon(v1);
  v4 = *(_QWORD *)ContentManager::getSources(*((ContentManager **)v1 + 129));
  v3 = (InvalidResourceSource **)v4;
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v5 = 0;
    do
    {
      if ( *((_DWORD *)*v3 + 4) == 3 )
      {
        v6 = InvalidResourceSource::invalidPacksChanged(*v3);
        v5 |= v6;
        if ( v6 )
          break;
      }
      ++v3;
    }
    while ( (InvalidResourceSource **)HIDWORD(v4) != v3 );
    if ( v5 & 1 )
      ContentManager::reloadSources(*((ContentManager **)v1 + 129), 1);
      v2 |= 1u;
  }
  v7 = *((_DWORD *)v1 + 154);
  *((_DWORD *)v1 + 154) = 0;
  v8 = v7 | v2;
  if ( *((_BYTE *)v1 + 620) )
    *((_BYTE *)v1 + 620) = 0;
    v9 = ContentView::getItem(*((ContentView **)v1 + 130), 0);
    if ( v9 )
      v10 = *(PackManagerContentSource **)(v9 + 56);
      v11 = (UIDefRepository *)MinecraftScreenModel::getUIDefRepo(*((MinecraftScreenModel **)v1 + 106));
      PackManagerContentSource::repopulateReports(v10, v11);
  return v8;
}


unsigned int __fastcall ResourcePacksScreenController::_nextCycleIconIndex(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController *v1; // r4@1
  unsigned int v2; // r5@1
  char v3; // r5@3
  unsigned int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 140) + 1;
  *((_DWORD *)this + 140) = v2;
  if ( *((_BYTE *)this + 564) )
  {
    if ( v2 > ContentView::getNumberOfItems(*((ContentView **)this + 130)) )
    {
      v3 = 0;
      *((_DWORD *)v1 + 140) = 0;
      result = *((_BYTE *)v1 + 564);
      if ( *((_BYTE *)v1 + 564) )
      {
        result = ContentView::getNumberOfItems(*((ContentView **)v1 + 131));
        if ( !result )
          v3 = 1;
        *((_BYTE *)v1 + 564) = v3;
      }
      else
        *((_BYTE *)v1 + 564) = 1;
      return result;
    }
    result = *((_BYTE *)v1 + 564);
    if ( *((_BYTE *)v1 + 564) )
    v2 = *((_DWORD *)v1 + 140);
  }
  result = ContentView::getNumberOfItems(*((ContentView **)v1 + 131));
  if ( v2 >= result )
    *((_DWORD *)v1 + 140) = 0;
    result = 1;
    *((_BYTE *)v1 + 564) = 1;
  return result;
}


void __fastcall ResourcePacksScreenController::_handleMovePackResult(ResourcePacksScreenController *this, _DWORD *a2, __int64 a3)
{
  ResourcePacksScreenController *v3; // r4@1
  __int64 v4; // r6@1
  __int64 v5; // r1@3
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  __int64 v10; // kr00_8@11
  unsigned int *v11; // r0@12
  unsigned int v12; // r1@14
  int v13; // r0@18
  int v14; // r4@18
  char *v15; // r0@18
  __int64 v16; // r1@19
  void *v17; // r0@21
  _QWORD *v18; // r0@28
  unsigned int *v19; // r1@29
  unsigned int v20; // r2@31
  __int64 v21; // r1@33
  int *v22; // r6@33
  unsigned int v23; // r0@37
  int v24; // r0@48
  unsigned int *v25; // r2@49
  unsigned int v26; // r1@51
  unsigned int *v27; // r2@56
  signed int v28; // r1@58
  unsigned int *v29; // r2@63
  signed int v30; // r1@65
  void *v31; // [sp+4h] [bp-84h]@19
  __int64 v32; // [sp+Ch] [bp-7Ch]@19
  int v33; // [sp+18h] [bp-70h]@19
  int v34; // [sp+20h] [bp-68h]@19
  void *v35; // [sp+24h] [bp-64h]@3
  __int64 v36; // [sp+2Ch] [bp-5Ch]@3
  int v37; // [sp+38h] [bp-50h]@3
  int v38; // [sp+40h] [bp-48h]@3
  char v39; // [sp+44h] [bp-44h]@43
  void (*v40)(void); // [sp+4Ch] [bp-3Ch]@42
  int v41; // [sp+50h] [bp-38h]@43
  _QWORD *v42; // [sp+54h] [bp-34h]@33
  void (*v43)(void); // [sp+5Ch] [bp-2Ch]@28
  void (__fastcall *v44)(int, int); // [sp+60h] [bp-28h]@33
  char v45; // [sp+64h] [bp-24h]@11
  int v46; // [sp+68h] [bp-20h]@11

  v3 = this;
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 135) = 0;
  v4 = a3;
  switch ( *a2 )
  {
    case 1:
      j_j_j__ZN29ResourcePacksScreenController30_showStoreConnectFailedMessageEv(this);
      break;
    case 5:
      sub_21E94B4((void **)&v38, "resourcePack.requiredDependency.title");
      sub_21E94B4((void **)&v37, "resourcePack.requiredDependency.body");
      v35 = operator new(1u);
      LODWORD(v5) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIFvbEEEd_UlbE_E10_M_managerERSt9_Any_dataRKSA_St18_Manager_operation;
      HIDWORD(v5) = ZNSt17_Function_handlerIFvbEZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIS0_EEd_UlbE_E9_M_invokeERKSt9_Any_datab;
      v36 = v5;
      MinecraftScreenController::_displayStandardModalPopup((int)v3, &v38, &v37, 2, (int)&v35);
      if ( (_DWORD)v36 )
        ((void (*)(void))v36)();
      v6 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
      {
        v27 = (unsigned int *)(v37 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v7 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v38 - 4);
        if ( !&pthread_create )
          goto LABEL_60;
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        goto LABEL_61;
    case 3:
      MinecraftScreenController::_getWeakPtrToThis<ResourcePacksScreenController>((int)&v45, (int)this);
      v10 = *(_QWORD *)&v45;
      if ( v46 )
        v11 = (unsigned int *)(v46 + 8);
            v12 = __ldrex(v11);
          while ( __strex(v12 + 1, v11) );
          ++*v11;
      v43 = 0;
      v18 = operator new(0x10u);
      *v18 = v10;
      if ( HIDWORD(v10) )
        v19 = (unsigned int *)(HIDWORD(v10) + 8);
            v20 = __ldrex(v19);
          while ( __strex(v20 + 1, v19) );
          ++*v19;
        v18[1] = v4;
        v42 = v18;
        v44 = sub_13F1EB8;
        v22 = (int *)&v44;
        v43 = (void (*)(void))sub_13F2038;
            v23 = __ldrex(v19);
          while ( __strex(v23 - 1, v19) );
          v23 = (*v19)--;
        if ( v23 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
      else
        HIDWORD(v21) = sub_13F1EB8;
        LODWORD(v21) = sub_13F2038;
        *(_QWORD *)&v43 = v21;
      v40 = 0;
      if ( v43 )
        ((void (__fastcall *)(char *, _QWORD **, signed int))v43)(&v39, &v42, 2);
        v41 = *v22;
        v40 = v43;
      SettingsScreenControllerBase::confirmationNoAchievementsDialog((int)v3, (int)&v39);
      if ( v40 )
        v40();
        v43();
      v24 = v46;
        v25 = (unsigned int *)(v46 + 8);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 == 1 )
          (*(void (**)(void))(*(_DWORD *)v24 + 12))();
    case 4:
      j_j_j__ZN29ResourcePacksScreenController29_showMissingDependencyMessageEi12PackListType(
        (int)this,
        a3,
        SHIDWORD(a3));
    case 2:
      j_j_j__ZN29ResourcePacksScreenController27_showDataPackWarningMessageEv(this);
    case 6:
      v13 = ContentView::getItem(*((ContentView **)this + 131), a3);
      v14 = *((_DWORD *)v3 + 106);
      v15 = PackManifest::getIdentity(*(PackManifest **)(v13 + 60));
      j_j_j__ZN19MainMenuScreenModel29navigateToPurchaseOfferScreenERKN3mce4UUIDE21StoreNavigationOriginRKSs(
        v14,
        (int)v15,
        1,
        (int *)&CatalogContentType::DurableOffer);
    case 7:
      sub_21E94B4((void **)&v34, "resourcePack.error.plugin_removal.title");
      sub_21E94B4((void **)&v33, "resourcePack.error.plugin_removal.body");
      v31 = operator new(1u);
      LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIFvbEEEd_UlbE_E10_M_managerERSt9_Any_dataRKSA_St18_Manager_operation;
      HIDWORD(v16) = ZNSt17_Function_handlerIFvbEZN25MinecraftScreenController26_displayStandardModalPopupERKSsS3_21ModalScreenButtonModeSt8functionIS0_EEd_UlbE_E9_M_invokeERKSt9_Any_datab;
      v32 = v16;
      MinecraftScreenController::_displayStandardModalPopup((int)v3, &v34, &v33, 2, (int)&v31);
      if ( (_DWORD)v32 )
        ((void (*)(void))v32)();
      v17 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v33 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v7 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v34 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
LABEL_60:
          v9 = (*v8)--;
LABEL_61:
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
    default:
      return;
  }
}


ModalScreenData *__fastcall ResourcePacksScreenController::_showIncompatibleMessage(int a1, char a2)
{
  int v2; // r4@1
  char v3; // r5@1
  __int64 v4; // r2@3
  int v6; // [sp+0h] [bp-58h]@3
  void (*v7)(void); // [sp+8h] [bp-50h]@3
  void *v8; // [sp+10h] [bp-48h]@1
  int v9; // [sp+14h] [bp-44h]@1
  int v10; // [sp+18h] [bp-40h]@1
  int v11; // [sp+1Ch] [bp-3Ch]@1
  void *v12; // [sp+20h] [bp-38h]@1
  int v13; // [sp+24h] [bp-34h]@1
  int v14; // [sp+28h] [bp-30h]@1
  int v15; // [sp+2Ch] [bp-2Ch]@1
  void *v16; // [sp+30h] [bp-28h]@1
  void *v17; // [sp+34h] [bp-24h]@1
  void *v18; // [sp+38h] [bp-20h]@1
  void *v19; // [sp+3Ch] [bp-1Ch]@1
  int v20; // [sp+40h] [bp-18h]@1
  char v21; // [sp+44h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v8 = &unk_28898CC;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = &unk_28898CC;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = &unk_28898CC;
  v19 = &unk_28898CC;
  v20 = 1;
  v21 = 0;
  sub_21E8190(&v8, "store.incompatible", (_BYTE *)0x12);
  if ( v3 & 1 )
    sub_21E8190(&v12, "resourcePack.incompatibleMemory.pack", (_BYTE *)0x24);
  sub_21E8190(&v18, "gui.ok", (_BYTE *)6);
  v20 = 2;
  v7 = 0;
  LODWORD(v4) = &v6;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v8, v4);
  if ( v7 )
    v7();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v8);
}


ResourcePacksScreenController *__fastcall ResourcePacksScreenController::~ResourcePacksScreenController(ResourcePacksScreenController *this)
{
  ResourcePacksScreenController *v1; // r10@1
  void *v2; // r0@1
  int v3; // r0@3
  void *v4; // r5@5
  void *v5; // r7@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int *v8; // r0@15
  void *v9; // r0@20
  int v10; // r5@22
  unsigned int *v11; // r1@23
  unsigned int v12; // r0@25
  unsigned int *v13; // r6@29
  unsigned int v14; // r0@31

  v1 = this;
  *(_DWORD *)this = &off_26E7EAC;
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)this + 81);
  v2 = (void *)*((_DWORD *)v1 + 156);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 148);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 148) = 0;
  v5 = (void *)(*(_QWORD *)((char *)v1 + 580) >> 32);
  v4 = (void *)*(_QWORD *)((char *)v1 + 580);
  if ( v4 != v5 )
  {
    do
    {
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      v4 = (char *)v4 + 8;
    }
    while ( v4 != v5 );
    v4 = (void *)*((_DWORD *)v1 + 145);
  }
  if ( v4 )
    operator delete(v4);
  v9 = (void *)*((_DWORD *)v1 + 142);
  if ( v9 )
    operator delete(v9);
  v10 = *((_DWORD *)v1 + 137);
  if ( v10 )
    v11 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  SettingsScreenControllerBase::~SettingsScreenControllerBase(v1);
  return v1;
}
