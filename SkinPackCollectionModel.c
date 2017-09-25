

void __fastcall SkinPackCollectionModel::equipPreviewSkin(SkinPackCollectionModel *this, int a2)
{
  SkinPackCollectionModel::equipPreviewSkin(this, a2);
}


int __fastcall SkinPackCollectionModel::shouldAllowCustomSkins(SkinPackCollectionModel *this)
{
  return MinecraftScreenModel::isEduMode(*((MinecraftScreenModel **)this + 1)) ^ 1;
}


void __fastcall SkinPackCollectionModel::~SkinPackCollectionModel(SkinPackCollectionModel *this)
{
  SkinPackCollectionModel *v1; // r0@1

  v1 = SkinPackCollectionModel::~SkinPackCollectionModel(this);
  j_j_j__ZdlPv_3((void *)v1);
}


char *__fastcall SkinPackCollectionModel::getSkinSerializableName(int a1, int a2)
{
  SkinPackModel **v2; // r5@1 OVERLAPPED
  SkinPackModel **v3; // r6@1 OVERLAPPED
  int v4; // r4@1
  _QWORD *v5; // r8@2
  char *v6; // r0@3
  char *result; // r0@6

  *(_QWORD *)&v2 = *(_QWORD *)(a1 + 36);
  v4 = a2;
  if ( v2 == v3 )
    goto LABEL_6;
  v5 = (_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v6 = SkinPackModel::getPackId(*v2);
    if ( *(_QWORD *)v4 == *(_QWORD *)v6 && *v5 == *((_QWORD *)v6 + 1) )
      break;
    v2 += 2;
    if ( v3 == v2 )
      goto LABEL_6;
  }
  if ( *v2 )
    result = SkinPackModel::getSkinSerializableName(*v2, *(_DWORD *)(v4 + 16));
  else
LABEL_6:
    result = (char *)&Util::EMPTY_STRING;
  return result;
}


SearchQuery *__fastcall SkinPackCollectionModel::collectionFromSearch(SkinPackCollectionModel *this)
{
  SkinPackCollectionModel *v1; // r10@1
  SearchQuery *result; // r0@1
  _DWORD *v3; // r2@2
  _QWORD *v4; // r1@2
  I18n *v5; // r0@4
  int v6; // r0@4
  void *v7; // r0@4
  char *v8; // r5@5
  int v9; // r7@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  int *v12; // r0@15
  void *v13; // r0@20
  void *v14; // r0@21
  void *v15; // r0@22
  __int64 v16; // kr08_8@23
  unsigned int *v17; // r0@24
  unsigned int v18; // r1@26
  ContentCatalogService *v19; // r7@29
  unsigned int *v20; // r0@30
  unsigned int v21; // r1@32
  unsigned int *v22; // r0@36
  unsigned int v23; // r1@38
  _DWORD *v24; // r0@41
  void *v25; // r2@41
  void *v26; // r2@41
  int v27; // r2@41
  int v28; // r2@41
  int v29; // r2@41
  void *v30; // r2@41
  void *v31; // r2@41
  int v32; // r1@41
  int v33; // r1@41
  unsigned int *v34; // r1@42
  unsigned int v35; // r2@44
  __int64 v36; // r1@47
  int v37; // r0@49
  unsigned int *v38; // r2@50
  unsigned int v39; // r1@52
  int v40; // r4@57
  unsigned int *v41; // r1@58
  unsigned int v42; // r0@60
  unsigned int *v43; // r6@64
  unsigned int v44; // r0@66
  unsigned int *v45; // r1@72
  unsigned int v46; // r0@74
  int v47; // r4@79
  unsigned int *v48; // r1@80
  unsigned int v49; // r0@82
  unsigned int *v50; // r5@86
  unsigned int v51; // r0@88
  unsigned int *v52; // r2@95
  signed int v53; // r1@97
  unsigned int *v54; // r2@99
  signed int v55; // r1@101
  unsigned int *v56; // r2@103
  signed int v57; // r1@105
  unsigned int *v58; // r2@107
  signed int v59; // r1@109
  void *v60; // [sp+4h] [bp-D4h]@29
  void *v61; // [sp+8h] [bp-D0h]@41
  void *v62; // [sp+Ch] [bp-CCh]@41
  int v63; // [sp+10h] [bp-C8h]@41
  int v64; // [sp+14h] [bp-C4h]@41
  int v65; // [sp+18h] [bp-C0h]@41
  void *v66; // [sp+1Ch] [bp-BCh]@41
  void *v67; // [sp+20h] [bp-B8h]@41
  void *v68; // [sp+24h] [bp-B4h]@41
  __int64 v69; // [sp+28h] [bp-B0h]@41
  int v70; // [sp+30h] [bp-A8h]@29
  int v71; // [sp+34h] [bp-A4h]@29
  __int64 v72; // [sp+38h] [bp-A0h]@35
  _DWORD *v73; // [sp+40h] [bp-98h]@47
  void (*v74)(void); // [sp+48h] [bp-90h]@41
  int v75; // [sp+50h] [bp-88h]@23
  int v76; // [sp+54h] [bp-84h]@23
  int v77; // [sp+58h] [bp-80h]@29
  int v78; // [sp+68h] [bp-70h]@5
  int v79; // [sp+6Ch] [bp-6Ch]@5
  int v80; // [sp+70h] [bp-68h]@5
  char *v81; // [sp+74h] [bp-64h]@5
  char *v82; // [sp+78h] [bp-60h]@5
  char *v83; // [sp+7Ch] [bp-5Ch]@5
  int v84; // [sp+80h] [bp-58h]@4
  int v85[11]; // [sp+84h] [bp-54h]@4
  char v86; // [sp+B0h] [bp-28h]@23

  v1 = this;
  result = (SearchQuery *)*((_DWORD *)this + 8);
  if ( !result )
  {
    *((_DWORD *)v1 + 8) = 1;
    v3 = operator new(0xCu);
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v4 = (_QWORD *)*((_DWORD *)v1 + 38);
    *((_DWORD *)v1 + 38) = v3;
    if ( v4 )
      std::default_delete<std::vector<SkinPackMeta,std::allocator<SkinPackMeta>>>::operator()((int)v1 + 152, v4);
    v5 = (I18n *)SearchQuery::SearchQuery((int)v85, (int *)&CatalogContentType::DurableOffer);
    v6 = I18n::getCurrentLanguage(v5);
    Localization::getFullLanguageCode((Localization *)&v84, v6);
    SearchQuery::setAcceptLanguage((char *)v85, &v84);
    v7 = (void *)(v84 - 12);
    if ( (int *)(v84 - 12) != &dword_28898C0 )
    {
      v52 = (unsigned int *)(v84 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
      }
      else
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j_j__ZdlPv_9(v7);
    }
    sub_DA7364((void **)&v78, "skinpack");
    sub_DA7364((void **)&v79, "mashup");
    sub_DA7364((void **)&v80, "has_skinpack");
    v81 = 0;
    v82 = 0;
    v83 = 0;
    v81 = (char *)operator new(0xCu);
    v83 = v81 + 12;
    v82 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v78,
                    (int)&v81,
                    (int)v81);
    SearchQuery::addTags((int)v85, (unsigned __int64 *)&v81);
    v9 = (int)v82;
    v8 = v81;
    if ( v81 != v82 )
      do
        v12 = (int *)(*(_DWORD *)v8 - 12);
        if ( v12 != &dword_28898C0 )
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
            j_j_j_j_j__ZdlPv_9(v12);
        }
        v8 += 4;
      while ( v8 != (char *)v9 );
      v8 = v81;
    if ( v8 )
      operator delete(v8);
    v13 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v80 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v79 - 12);
    if ( (int *)(v79 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v79 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v78 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j_j__ZdlPv_9(v15);
    v75 = 0;
    std::__shared_ptr<unsigned int,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<unsigned int>,int>(
      (int)&v76,
      (int)&v86,
      &v75);
    v16 = *((_QWORD *)v1 + 3);
    if ( HIDWORD(v16) )
      v17 = (unsigned int *)(HIDWORD(v16) + 8);
          v18 = __ldrex(v17);
        while ( __strex(v18 + 1, v17) );
        ++*v17;
    v19 = (ContentCatalogService *)*((_DWORD *)v1 + 5);
    SearchQuery::SearchQuery((int *)&v60, v85);
    v70 = v76;
    v71 = v77;
    if ( v77 )
      v20 = (unsigned int *)(v77 + 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 + 1, v20) );
        ++*v20;
    v72 = v16;
      v22 = (unsigned int *)(HIDWORD(v16) + 8);
          v23 = __ldrex(v22);
        while ( __strex(v23 + 1, v22) );
        ++*v22;
    v74 = 0;
    v24 = operator new(0x40u);
    *v24 = v1;
    v24[1] = v60;
    v60 = &unk_28898CC;
    v25 = v61;
    v61 = &unk_28898CC;
    v24[2] = v25;
    v26 = v62;
    v62 = &unk_28898CC;
    v24[3] = v26;
    v27 = v63;
    v63 = 0;
    v24[4] = v27;
    v28 = v64;
    v64 = 0;
    v24[5] = v28;
    v29 = v65;
    v65 = 0;
    v24[6] = v29;
    v30 = v66;
    v66 = &unk_28898CC;
    v24[7] = v30;
    v31 = v67;
    v67 = &unk_28898CC;
    v24[8] = v31;
    v24[9] = v68;
    v68 = &unk_28898CC;
    *((_QWORD *)v24 + 5) = v69;
    v24[12] = v70;
    v32 = v71;
    v71 = 0;
    v70 = 0;
    v24[13] = v32;
    v24[14] = v72;
    v33 = HIDWORD(v72);
    v24[15] = HIDWORD(v72);
    if ( v33 )
      v34 = (unsigned int *)(v33 + 8);
          v35 = __ldrex(v34);
        while ( __strex(v35 + 1, v34) );
        ++*v34;
    LODWORD(v36) = sub_CF9984;
    v73 = v24;
    HIDWORD(v36) = sub_CF9838;
    *(_QWORD *)&v74 = v36;
    ContentCatalogService::searchCatalog(v19, v85, (int)&v73);
    if ( v74 )
      v74();
    v37 = HIDWORD(v72);
    if ( HIDWORD(v72) )
      v38 = (unsigned int *)(HIDWORD(v72) + 8);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 == 1 )
        (*(void (**)(void))(*(_DWORD *)v37 + 12))();
    v40 = v71;
    if ( v71 )
      v41 = (unsigned int *)(v71 + 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 == 1 )
        v43 = (unsigned int *)(v40 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 8))(v40);
        if ( &pthread_create )
          __dmb();
          do
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
        else
          v44 = (*v43)--;
        if ( v44 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 12))(v40);
    SearchQuery::~SearchQuery((SearchQuery *)&v60);
      v45 = (unsigned int *)(HIDWORD(v16) + 8);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v16) + 12))(HIDWORD(v16));
    v47 = v77;
      v48 = (unsigned int *)(v77 + 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 == 1 )
        v50 = (unsigned int *)(v47 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
    result = SearchQuery::~SearchQuery((SearchQuery *)v85);
  }
  return result;
}


Json::Reader *__fastcall SkinPackCollectionModel::collectionFromStoreCatalogItem(SkinPackCollectionModel *this, const StoreCatalogItemModel *a2)
{
  SkinPackCollectionModel *v2; // r4@1
  StoreCatalogItemModel *v3; // r7@1
  Json::Reader *result; // r0@1
  _DWORD *v5; // r0@2
  _QWORD *v6; // r1@2
  int *v7; // r0@4
  int *v8; // r0@4
  int *v9; // r0@4
  char *v10; // r0@6
  char *v11; // r0@7
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  char *v16; // [sp+0h] [bp-A8h]@4
  char *v17; // [sp+4h] [bp-A4h]@4
  int v18; // [sp+8h] [bp-A0h]@4
  char v19; // [sp+1Ch] [bp-8Ch]@4

  v2 = this;
  v3 = a2;
  result = (Json::Reader *)*((_DWORD *)this + 8);
  if ( !result )
  {
    v5 = operator new(0xCu);
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0;
    v6 = (_QWORD *)*((_DWORD *)v2 + 38);
    *((_DWORD *)v2 + 38) = v5;
    if ( v6 )
      std::default_delete<std::vector<SkinPackMeta,std::allocator<SkinPackMeta>>>::operator()((int)v2 + 152, v6);
    Json::Reader::Reader((Json::Reader *)&v19);
    v16 = (char *)&unk_28898CC;
    v17 = (char *)&unk_28898CC;
    Json::Value::Value(&v18, 0);
    v7 = (int *)StoreCatalogItemModel::getProductId(v3);
    EntityInteraction::setInteractText((int *)&v16, v7);
    v8 = (int *)StoreCatalogItemModel::getTitle(v3);
    EntityInteraction::setInteractText((int *)((unsigned int)&v16 | 4), v8);
    v9 = (int *)StoreCatalogItemModel::getMetaDataRaw(v3);
    if ( Json::Reader::parse((int)&v19, v9, (int)&v18, 1) == 1 )
      std::vector<SkinPackMeta,std::allocator<SkinPackMeta>>::emplace_back<SkinPackMeta>(
        *((_DWORD *)v2 + 38),
        (int)&v16);
    *((_DWORD *)v2 + 8) = 2;
    SkinPackCollectionModel::_registerLoadListener(v2);
    SkinPackCollectionModel::_buildSkinPackCollection(v2);
    Json::Value::~Value((Json::Value *)&v18);
    v10 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v17 - 4);
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
        j_j_j_j_j__ZdlPv_9(v10);
    }
    v11 = v16 - 12;
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v16 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
    result = Json::Reader::~Reader((Json::Reader *)&v19);
  }
  return result;
}


int __fastcall SkinPackCollectionModel::isSkinLocked(int a1, int a2)
{
  SkinPackModel **v2; // r5@1 OVERLAPPED
  SkinPackModel **v3; // r6@1 OVERLAPPED
  int v4; // r4@1
  _QWORD *v5; // r8@2
  char *v6; // r0@3
  int result; // r0@6

  *(_QWORD *)&v2 = *(_QWORD *)(a1 + 36);
  v4 = a2;
  if ( v2 == v3 )
    goto LABEL_12;
  v5 = (_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v6 = SkinPackModel::getPackId(*v2);
    if ( *(_QWORD *)v4 == *(_QWORD *)v6 && *v5 == *((_QWORD *)v6 + 1) )
      break;
    v2 += 2;
    if ( v3 == v2 )
      return 0;
  }
  if ( *v2 )
    result = SkinPackModel::isSkinLocked(*v2, *(_DWORD *)(v4 + 16));
  else
LABEL_12:
    result = 0;
  return result;
}


SkinPackModel *__fastcall SkinPackCollectionModel::getSkinPackModelByUUID(int a1, unsigned __int64 *a2)
{
  SkinPackModel *v2; // r5@0
  _QWORD *v3; // r6@1
  _QWORD *v4; // r8@1
  int v5; // r9@1
  SkinPackModel *v6; // r4@4
  _QWORD *v7; // r10@5
  char *v8; // r0@6
  char *v9; // r0@11
  signed int v10; // r0@13

  v4 = (_QWORD *)(*a2 >> 32);
  v3 = (_QWORD *)*a2;
  v5 = a1;
  while ( v3 != v4 )
  {
    v6 = (SkinPackModel *)(*(_QWORD *)(v5 + 36) >> 32);
    v2 = (SkinPackModel *)*(_QWORD *)(v5 + 36);
    if ( v2 != v6 )
    {
      v7 = v3 + 1;
      while ( 1 )
      {
        v8 = SkinPackModel::getPackId(*(SkinPackModel **)v2);
        if ( *v3 == *(_QWORD *)v8 && *v7 == *((_QWORD *)v8 + 1) )
          break;
        v2 = (SkinPackModel *)((char *)v2 + 8);
        if ( v6 == v2 )
          goto LABEL_2;
      }
      v2 = *(SkinPackModel **)v2;
      if ( v2 )
        v9 = SkinPackModel::getPackId(v2);
        if ( *v3 == *(_QWORD *)v9 && *v7 == *((_QWORD *)v9 + 1) )
        {
          v10 = 0;
          goto LABEL_15;
        }
    }
LABEL_2:
    v3 += 6;
  }
  v10 = 1;
LABEL_15:
  if ( v10 )
    v2 = (SkinPackModel *)(v5 + 72);
  return v2;
}


void __fastcall SkinPackCollectionModel::_buildSkinPackCollection(SkinPackCollectionModel *this)
{
  SkinPackCollectionModel *v1; // r11@1
  int v2; // r8@2
  unsigned int v3; // r6@2
  int v4; // r4@3
  int v5; // r7@4
  unsigned int *v6; // r1@5
  unsigned int v7; // r0@7
  unsigned int *v8; // r5@11
  unsigned int v9; // r0@13
  SkinPack *v10; // r0@19
  char *v11; // r0@20
  unsigned int v12; // r3@20
  __int64 v13; // r0@20
  int v14; // r1@21
  char *v15; // r0@23
  int v16; // r7@23
  _BYTE *v17; // r5@25
  unsigned int v18; // r2@25
  unsigned int v19; // r1@27
  char *v20; // r4@33
  int v21; // r7@35
  int v22; // r7@37
  int v23; // r5@40
  unsigned int *v24; // r1@41
  unsigned int v25; // r0@43
  unsigned int *v26; // r4@47
  unsigned int v27; // r0@49
  double v28; // r0@54
  unsigned int v29; // r0@54
  int v30; // r5@56
  int *v31; // r4@56
  unsigned __int64 *v32; // r0@57
  bool v33; // zf@57
  const mce::UUID *v34; // r9@60
  Entitlement *v35; // r5@63
  signed int v36; // r4@63
  int v37; // r7@63
  Json::Value *v38; // r4@64
  Json::Value *v39; // r4@66
  int v40; // r3@68
  __int64 v41; // r0@68
  int v42; // r1@69
  char *v43; // r0@71
  int v44; // r8@71
  _BYTE *v45; // r6@73
  char *v46; // r5@73
  unsigned int v47; // r2@73
  unsigned int v48; // r1@75
  unsigned int v49; // r4@75
  int v50; // r8@82
  int v51; // r8@84
  unsigned int v52; // r5@87
  int v53; // r7@87
  int v54; // r0@87
  int v55; // r10@88
  int v56; // r4@88
  bool v57; // zf@89
  int v58; // r11@94
  bool v59; // zf@97
  _DWORD *v60; // r0@101
  int v61; // r12@101
  int v62; // r1@101
  __int64 v63; // kr28_8@101
  int v64; // r5@102
  unsigned int *v65; // r1@103
  unsigned int v66; // r0@105
  unsigned int *v67; // r4@109
  unsigned int v68; // r0@111
  mce::UUID *v69; // r1@120
  __int64 v70; // kr38_8@121
  unsigned int v71; // r7@121
  int v72; // r0@121
  int v73; // r9@122
  int v74; // r6@122
  bool v75; // zf@123
  int v76; // r8@128
  bool v77; // zf@131
  bool v78; // zf@135
  int v79; // r4@138
  __int64 v80; // r0@138
  int v81; // r1@139
  char *v82; // r0@141
  int v83; // r8@141
  _BYTE *v84; // r9@143
  char *v85; // r5@143
  unsigned int v86; // r2@143
  unsigned int v87; // r1@145
  unsigned int v88; // r4@145
  int v89; // r8@152
  int v90; // r8@154
  int v91; // r5@157
  unsigned int *v92; // r1@158
  unsigned int v93; // r0@160
  unsigned int *v94; // r4@164
  unsigned int v95; // r0@166
  __int64 v96; // kr50_8@174
  SkinPackModel **v97; // r9@176
  SkinPackModel *v98; // r4@180
  SkinPackModel **v99; // r7@180
  SkinPackModel *v100; // r10@180
  int v101; // r5@180
  int v102; // r0@180
  SkinPackModel **v103; // r1@180
  SkinPackModel *v104; // r5@181
  int v105; // r4@181
  int v106; // r0@181
  SkinPackModel **v107; // r1@183
  unsigned int *v108; // r2@186
  signed int v109; // r1@188
  unsigned int *v110; // r2@190
  signed int v111; // r1@192
  char *v112; // r0@201
  unsigned int v113; // r1@201
  unsigned int v114; // r3@201
  unsigned int v115; // r2@201
  __int64 v116; // kr60_8@201
  unsigned int v117; // r6@201
  unsigned int v118; // r4@201
  int v119; // r0@201
  int v120; // r8@202
  int v121; // r7@202
  bool v122; // zf@203
  int v123; // r11@208
  bool v124; // zf@211
  signed int v125; // r1@215
  SkinRepository *v126; // r0@215
  int *v127; // r0@218
  int v128; // r1@218
  int v129; // r4@219
  int v130; // r4@219
  DlcBatchModel *v131; // r5@219
  int v132; // r4@219
  char *v133; // r8@219
  unsigned int *v134; // r2@221
  signed int v135; // r1@223
  int *v136; // r0@229
  void *v137; // r0@234
  void *v138; // r0@238
  void *v139; // r0@242
  void *v140; // r4@243
  char *v141; // [sp+18h] [bp-118h]@2
  int v142; // [sp+1Ch] [bp-114h]@0
  unsigned __int64 *v143; // [sp+1Ch] [bp-114h]@184
  unsigned int v144; // [sp+20h] [bp-110h]@68
  mce::UUID *v145; // [sp+20h] [bp-110h]@120
  SkinPackModel **v146; // [sp+20h] [bp-110h]@183
  SkinPackCollectionModel *v147; // [sp+24h] [bp-10Ch]@87
  SkinPackCollectionModel *v148; // [sp+24h] [bp-10Ch]@120
  mce::UUID *v149; // [sp+2Ch] [bp-104h]@121
  SkinPackModel **v150; // [sp+2Ch] [bp-104h]@201
  unsigned int v151; // [sp+30h] [bp-100h]@121
  unsigned int v152; // [sp+34h] [bp-FCh]@121
  char v153; // [sp+38h] [bp-F8h]@235
  unsigned __int64 v154; // [sp+40h] [bp-F0h]@235
  unsigned int v155; // [sp+48h] [bp-E8h]@235
  unsigned int v156; // [sp+4Ch] [bp-E4h]@235
  DlcBatchModel *v157; // [sp+50h] [bp-E0h]@235
  int v158; // [sp+5Ch] [bp-D4h]@190
  char *v159; // [sp+60h] [bp-D0h]@219
  char *v160; // [sp+64h] [bp-CCh]@219
  char *v161; // [sp+68h] [bp-C8h]@219
  int v162; // [sp+6Ch] [bp-C4h]@218
  char v163; // [sp+70h] [bp-C0h]@216
  unsigned __int64 v164; // [sp+78h] [bp-B8h]@216
  unsigned int v165; // [sp+80h] [bp-B0h]@216
  unsigned int v166; // [sp+84h] [bp-ACh]@216
  int v167; // [sp+88h] [bp-A8h]@216
  unsigned __int64 v168; // [sp+90h] [bp-A0h]@201
  unsigned int v169; // [sp+98h] [bp-98h]@201
  unsigned int v170; // [sp+9Ch] [bp-94h]@201
  int v171; // [sp+A4h] [bp-8Ch]@138
  int v172; // [sp+A8h] [bp-88h]@138
  int v173; // [sp+ACh] [bp-84h]@139
  void *ptr; // [sp+B0h] [bp-80h]@120
  mce::UUID *v175; // [sp+B4h] [bp-7Ch]@120
  Entitlement *v176; // [sp+BCh] [bp-74h]@68
  int v177; // [sp+C0h] [bp-70h]@68
  int v178; // [sp+C4h] [bp-6Ch]@69
  __int64 v179; // [sp+C8h] [bp-68h]@60
  __int64 v180; // [sp+D0h] [bp-60h]@62
  void *v181; // [sp+D8h] [bp-58h]@57
  unsigned int v182; // [sp+DCh] [bp-54h]@54
  void *v183; // [sp+E0h] [bp-50h]@54
  int v184; // [sp+E4h] [bp-4Ch]@54
  signed int v185; // [sp+E8h] [bp-48h]@54
  int v186; // [sp+ECh] [bp-44h]@54
  int v187; // [sp+F0h] [bp-40h]@185
  int v188; // [sp+F4h] [bp-3Ch]@20
  int v189; // [sp+F8h] [bp-38h]@20
  int v190; // [sp+FCh] [bp-34h]@21
  char v191; // [sp+100h] [bp-30h]@68
  char v192; // [sp+104h] [bp-2Ch]@138
  char v193; // [sp+108h] [bp-28h]@20

  v1 = this;
  if ( *((_DWORD *)this + 8) != 1 )
  {
    v2 = *((_DWORD *)this + 9);
    v141 = (char *)this + 36;
    v3 = *((_DWORD *)this + 10);
    if ( v3 != v2 )
    {
      v4 = *((_DWORD *)this + 9);
      do
      {
        v5 = *(_DWORD *)(v4 + 4);
        if ( v5 )
        {
          v6 = (unsigned int *)(v5 + 4);
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
        v4 += 8;
      }
      while ( v4 != v3 );
    }
    *((_DWORD *)v1 + 10) = v2;
    *((_DWORD *)v1 + 13) = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 16) = *((_DWORD *)v1 + 15);
    v10 = SkinRepository::getSkinPackById(
            *((SkinRepository **)v1 + 3),
            (const mce::UUID *)&SkinRepository::VANILLA_SKIN_PACK_UUID);
    if ( v10 )
      v11 = SkinPack::getId(v10);
      v12 = *((_DWORD *)v1 + 4);
      v188 = 0;
      j__ZNSt12__shared_ptrI13SkinPackModelLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKN3mce4UUIDER29SkinRepositoryClientInterfaceDnEEESt19_Sp_make_shared_tagRKT_DpOT0_(
        (int)&v189,
        (int)&v193,
        (int)v11,
        v12);
      v13 = *((_QWORD *)v1 + 5);
      if ( (_DWORD)v13 == HIDWORD(v13) )
        std::vector<std::shared_ptr<SkinPackModel>,std::allocator<std::shared_ptr<SkinPackModel>>>::_M_emplace_back_aux<std::shared_ptr<SkinPackModel>>(
          v141,
          (int)&v189);
        v14 = *((_DWORD *)v1 + 10);
      else
        *(_DWORD *)v13 = v189;
        *(_DWORD *)(v13 + 4) = 0;
        HIDWORD(v13) = v190;
        v190 = 0;
        *(_DWORD *)(v13 + 4) = HIDWORD(v13);
        HIDWORD(v13) = v13 + 8;
        v189 = 0;
        *((_DWORD *)v1 + 10) = v13 + 8;
      v15 = (char *)*((_QWORD *)v1 + 8);
      v16 = *(_DWORD *)(v14 - 8);
      if ( v15 == (char *)(*((_QWORD *)v1 + 8) >> 32) )
        v17 = (_BYTE *)*((_DWORD *)v1 + 15);
        v2 = 0;
        v18 = (v15 - v17) >> 2;
        if ( !v18 )
          v18 = 1;
        v19 = v18 + ((v15 - v17) >> 2);
        v3 = v18 + ((v15 - v17) >> 2);
        if ( 0 != v19 >> 30 )
          v3 = 0x3FFFFFFF;
        if ( v19 < v18 )
        if ( v3 )
          if ( v3 >= 0x40000000 )
            sub_DA7414();
          v20 = (char *)operator new(4 * v3);
          v15 = (char *)(*(_QWORD *)((char *)v1 + 60) >> 32);
          v17 = (_BYTE *)*(_QWORD *)((char *)v1 + 60);
        else
          v20 = 0;
        *(_DWORD *)&v20[v15 - v17] = v16;
        v21 = (int)&v20[v15 - v17];
        if ( 0 != (v15 - v17) >> 2 )
          _aeabi_memmove4(v20, v17);
        v22 = v21 + 4;
        if ( v17 )
          operator delete(v17);
        *((_DWORD *)v1 + 15) = v20;
        *((_DWORD *)v1 + 16) = v22;
        *((_DWORD *)v1 + 17) = &v20[4 * v3];
        *(_DWORD *)v15 = v16;
        *((_DWORD *)v1 + 16) += 4;
      v23 = v190;
      if ( v190 )
        v24 = (unsigned int *)(v190 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
          v26 = (unsigned int *)(v23 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
    v183 = 0;
    v184 = 0;
    v185 = 1065353216;
    v186 = 0;
    HIDWORD(v28) = 10;
    LODWORD(v28) = &v185;
    v29 = sub_DA7744(v28);
    v182 = v29;
    if ( v29 == 1 )
      v31 = &v187;
      v187 = 0;
    else
      if ( v29 >= 0x40000000 )
        sub_DA7414();
      v30 = 4 * v29;
      v31 = (int *)operator new(4 * v29);
      _aeabi_memclr4(v31, v30);
    v181 = v31;
    v32 = (unsigned __int64 *)*((_DWORD *)v1 + 38);
    v33 = v32 == 0;
    if ( v32 )
      v2 = *v32 >> 32;
      v3 = *v32;
      v142 = v2;
      v33 = v3 == v2;
    if ( !v33 )
      v34 = (const mce::UUID *)&v179;
        sub_CF91FC((int)v34, v3 + 8);
        if ( v179 ^ *(_QWORD *)&mce::UUID::EMPTY || v180 ^ qword_287E930 )
          v35 = (Entitlement *)EntitlementManager::getEntitlement(*((EntitlementManager **)v1 + 2), v34);
          v36 = Entitlement::isOwned(v35);
          v37 = MainMenuScreenModel::getDevicePerfTier(*((MainMenuScreenModel **)v1 + 1));
          if ( v36
            || ((v38 = (Json::Value *)Json::Value::operator[](v3 + 8, "purchasable"), Json::Value::isBool(v38) != 1)
             || Json::Value::asBool(v38, 1) == 1)
            && ((v39 = (Json::Value *)Json::Value::operator[](v3 + 8, "minPerformanceTier"), Json::Value::isInt(v39) != 1)
             || Json::Value::asInt(v39, 0) <= v37) )
            v40 = *((_DWORD *)v1 + 4);
            v176 = v35;
            std::__shared_ptr<SkinPackModel,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<SkinPackModel>,mce::UUID &,SkinRepositoryClientInterface &,Entitlement *>(
              (int)&v177,
              (int)&v191,
              (int)v34,
              v40,
              &v176);
            v144 = v3;
            SkinPackModel::setMetaData(v177, (int *)v3);
            v41 = *((_QWORD *)v1 + 5);
            if ( (_DWORD)v41 == HIDWORD(v41) )
              std::vector<std::shared_ptr<SkinPackModel>,std::allocator<std::shared_ptr<SkinPackModel>>>::_M_emplace_back_aux<std::shared_ptr<SkinPackModel>>(
                v141,
                (int)&v177);
              v42 = *((_DWORD *)v1 + 10);
              *(_DWORD *)v41 = v177;
              *(_DWORD *)(v41 + 4) = 0;
              HIDWORD(v41) = v178;
              v178 = 0;
              *(_DWORD *)(v41 + 4) = HIDWORD(v41);
              HIDWORD(v41) = v41 + 8;
              v177 = 0;
              *((_DWORD *)v1 + 10) = v41 + 8;
            v43 = (char *)*(_QWORD *)((char *)v1 + 52);
            v44 = *(_DWORD *)(v42 - 8);
            if ( v43 == (char *)(*(_QWORD *)((char *)v1 + 52) >> 32) )
              v45 = (_BYTE *)*((_DWORD *)v1 + 12);
              v46 = 0;
              v47 = (v43 - v45) >> 2;
              if ( !v47 )
                v47 = 1;
              v48 = v47 + ((v43 - v45) >> 2);
              v49 = v47 + ((v43 - v45) >> 2);
              if ( 0 != v48 >> 30 )
                v49 = 0x3FFFFFFF;
              if ( v48 < v47 )
              if ( v49 )
              {
                if ( v49 >= 0x40000000 )
                  sub_DA7414();
                v46 = (char *)operator new(4 * v49);
                v43 = (char *)(*((_QWORD *)v1 + 6) >> 32);
                v45 = (_BYTE *)*((_QWORD *)v1 + 6);
              }
              *(_DWORD *)&v46[v43 - v45] = v44;
              v50 = (int)&v46[v43 - v45];
              if ( (v43 - v45) >> 2 )
                _aeabi_memmove4(v46, v45);
              v51 = v50 + 4;
              if ( v45 )
                operator delete(v45);
              *((_DWORD *)v1 + 12) = v46;
              *((_DWORD *)v1 + 13) = v51;
              *((_DWORD *)v1 + 14) = &v46[4 * v49];
              *(_DWORD *)v43 = v44;
              *((_DWORD *)v1 + 13) += 4;
            v147 = v1;
            v52 = 522133279 * v179 ^ HIDWORD(v179) ^ v180 ^ ((522133279 * (unsigned __int64)(unsigned int)v180 >> 32)
                                                           + 522133279 * HIDWORD(v180));
            v53 = v52 % v182;
            v54 = *((_DWORD *)v181 + v52 % v182);
            if ( !v54 )
              goto LABEL_101;
            v55 = *(_DWORD *)v54;
            v56 = *(_DWORD *)(*(_DWORD *)v54 + 24);
            while ( 1 )
              v57 = v56 == v52;
              if ( v56 == v52 )
                v57 = *(_QWORD *)(v55 + 8) == v179;
              if ( v57 && *(_QWORD *)(v55 + 16) == v180 )
                break;
              v58 = *(_DWORD *)v55;
              if ( *(_DWORD *)v55 )
                v56 = *(_DWORD *)(v58 + 24);
                v54 = v55;
                v55 = *(_DWORD *)v55;
                if ( *(_DWORD *)(v58 + 24) % v182 == v53 )
                  continue;
            v59 = v54 == 0;
            if ( v54 )
              v59 = *(_DWORD *)v54 == 0;
            if ( v59 )
LABEL_101:
              v60 = operator new(0x20u);
              *v60 = 0;
              v61 = (int)(v60 + 2);
              v62 = HIDWORD(v179);
              v63 = v180;
              *(_DWORD *)v61 = v179;
              *(_DWORD *)(v61 + 4) = v62;
              *(_QWORD *)(v61 + 8) = v63;
              std::_Hashtable<mce::UUID,mce::UUID,std::allocator<mce::UUID>,std::__detail::_Identity,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique_node(
                (int)&v181,
                v53,
                v52,
                (int)v60);
            v64 = v178;
            v2 = v142;
            if ( v178 )
              v65 = (unsigned int *)(v178 + 4);
              if ( &pthread_create )
                __dmb();
                do
                  v66 = __ldrex(v65);
                while ( __strex(v66 - 1, v65) );
              else
                v66 = (*v65)--;
              if ( v66 == 1 )
                v67 = (unsigned int *)(v64 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v64 + 8))(v64);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v68 = __ldrex(v67);
                  while ( __strex(v68 - 1, v67) );
                }
                else
                  v68 = (*v67)--;
                if ( v68 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v64 + 12))(v64);
            v1 = v147;
            v3 = v144;
            v34 = (const mce::UUID *)&v179;
        v3 += 24;
      while ( v3 != v2 );
    v148 = v1;
    SkinRepository::getKnownSkinPackIds((SkinRepository *)&ptr, *((_DWORD *)v1 + 3));
    v69 = (mce::UUID *)ptr;
    v145 = v175;
    if ( ptr != (void *)v175 )
        v149 = v69;
        v70 = *(_QWORD *)v69;
        v151 = *((_DWORD *)v69 + 3);
        v152 = *((_DWORD *)v69 + 2);
        v71 = 522133279 * v70 ^ HIDWORD(v70) ^ v152 ^ ((522133279 * (unsigned __int64)v152 >> 32) + 522133279 * v151);
        v72 = *((_DWORD *)v181 + v71 % v182);
        if ( !v72 )
          goto LABEL_135;
        v73 = *(_DWORD *)v72;
        v74 = *(_DWORD *)(*(_DWORD *)v72 + 24);
        while ( 1 )
          v75 = v74 == v71;
          if ( v74 == v71 )
            v75 = *(_QWORD *)(v73 + 8) == v70;
          if ( v75 && *(_QWORD *)(v73 + 16) == __PAIR__(v151, v152) )
            break;
          v76 = *(_DWORD *)v73;
          if ( *(_DWORD *)v73 )
            v74 = *(_DWORD *)(v76 + 24);
            v72 = v73;
            v73 = *(_DWORD *)v73;
            if ( *(_DWORD *)(v76 + 24) % v182 == v71 % v182 )
              continue;
        v77 = v72 == 0;
        if ( v72 )
          v77 = *(_DWORD *)v72 == 0;
        if ( v77 )
LABEL_135:
          v78 = *(_QWORD *)&SkinRepository::VANILLA_SKIN_PACK_UUID == v70;
          if ( *(_QWORD *)&SkinRepository::VANILLA_SKIN_PACK_UUID == v70 )
            v78 = *(_QWORD *)&dword_27CC6D0 == __PAIR__(v151, v152);
          if ( !v78 )
            v79 = *((_DWORD *)v1 + 4);
            v171 = EntitlementManager::getEntitlement(*((EntitlementManager **)v1 + 2), v69);
              (int)&v172,
              (int)&v192,
              (int)v149,
              v79,
              &v171);
            v80 = *((_QWORD *)v1 + 5);
            if ( (_DWORD)v80 == HIDWORD(v80) )
                (int)&v172);
              v81 = *((_DWORD *)v1 + 10);
              *(_DWORD *)v80 = v172;
              *(_DWORD *)(v80 + 4) = 0;
              HIDWORD(v80) = v173;
              v173 = 0;
              *(_DWORD *)(v80 + 4) = HIDWORD(v80);
              HIDWORD(v80) = v80 + 8;
              v172 = 0;
              *((_DWORD *)v1 + 10) = v80 + 8;
            v82 = (char *)*(_QWORD *)((char *)v1 + 52);
            v83 = *(_DWORD *)(v81 - 8);
            if ( v82 == (char *)(*(_QWORD *)((char *)v1 + 52) >> 32) )
              v84 = (_BYTE *)*((_DWORD *)v1 + 12);
              v85 = 0;
              v86 = (v82 - v84) >> 2;
              if ( !v86 )
                v86 = 1;
              v87 = v86 + ((v82 - v84) >> 2);
              v88 = v86 + ((v82 - v84) >> 2);
              if ( 0 != v87 >> 30 )
                v88 = 0x3FFFFFFF;
              if ( v87 < v86 )
              if ( v88 )
                if ( v88 >= 0x40000000 )
                v85 = (char *)operator new(4 * v88);
                v82 = (char *)(*((_QWORD *)v1 + 6) >> 32);
                v84 = (_BYTE *)*((_QWORD *)v1 + 6);
              *(_DWORD *)&v85[v82 - v84] = v83;
              v89 = (int)&v85[v82 - v84];
              if ( (v82 - v84) >> 2 )
                _aeabi_memmove4(v85, v84);
              v90 = v89 + 4;
              if ( v84 )
                operator delete(v84);
              *((_DWORD *)v1 + 12) = v85;
              *((_DWORD *)v1 + 13) = v90;
              *((_DWORD *)v1 + 14) = &v85[4 * v88];
              *(_DWORD *)v82 = v83;
            v91 = v173;
            if ( v173 )
              v92 = (unsigned int *)(v173 + 4);
                  v93 = __ldrex(v92);
                while ( __strex(v93 - 1, v92) );
                v93 = (*v92)--;
              if ( v93 == 1 )
                v94 = (unsigned int *)(v91 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v91 + 8))(v91);
                    v95 = __ldrex(v94);
                  while ( __strex(v95 - 1, v94) );
                  v95 = (*v94)--;
                if ( v95 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v91 + 12))(v91);
        v69 = (mce::UUID *)((char *)v149 + 16);
      while ( (mce::UUID *)((char *)v149 + 16) != v145 );
    v96 = *((_QWORD *)v1 + 6);
    if ( (_DWORD)v96 != HIDWORD(v96) )
      sub_CFAED6(v96, (SkinPackModel **)HIDWORD(v96), 2 * (31 - __clz((HIDWORD(v96) - (signed int)v96) >> 2)), 0);
      if ( HIDWORD(v96) - (signed int)v96 < 65 )
        sub_CFB15E((SkinPackModel **)v96, (SkinPackModel **)HIDWORD(v96));
        v97 = (SkinPackModel **)(v96 + 64);
        sub_CFB15E((SkinPackModel **)v96, (SkinPackModel **)(v96 + 64));
        while ( v97 != (SkinPackModel **)HIDWORD(v96) )
          v99 = v97 - 1;
          v98 = *(v97 - 1);
          v100 = *v97;
          v101 = SkinPackModel::getSkinPickerOrder(*v97);
          v102 = SkinPackModel::getSkinPickerOrder(v98);
          v103 = v97;
          if ( v101 > v102 )
              *v103 = *v99;
              v104 = *(v99 - 1);
              v105 = SkinPackModel::getSkinPickerOrder(v100);
              v106 = SkinPackModel::getSkinPickerOrder(v104);
              v103 = v99;
              --v99;
            while ( v105 > v106 );
          *v103 = v100;
          ++v97;
    v107 = (SkinPackModel **)*((_QWORD *)v1 + 6);
    v146 = (SkinPackModel **)(*((_QWORD *)v1 + 6) >> 32);
    if ( v107 != v146 )
      v143 = (unsigned __int64 *)((char *)v1 + 156);
        v150 = v107;
        v112 = SkinPackModel::getPackId(*v107);
        v113 = *(_DWORD *)v112;
        v115 = *((_DWORD *)v112 + 1);
        v114 = *((_DWORD *)v112 + 2);
        v170 = *((_DWORD *)v112 + 3);
        v168 = __PAIR__(v115, v113);
        v169 = v114;
        v116 = *(_QWORD *)((char *)v1 + 156);
        v117 = 522133279 * v113 ^ v115 ^ v169 ^ ((522133279 * (unsigned __int64)v169 >> 32) + 522133279 * v170);
        v118 = v117 % (unsigned int)(*(_QWORD *)((char *)v1 + 156) >> 32);
        v119 = *(_DWORD *)(v116 + 4 * v118);
        if ( !v119 )
          goto LABEL_215;
        v120 = *(_DWORD *)v119;
        v121 = *(_DWORD *)(*(_DWORD *)v119 + 32);
          v122 = v121 == v117;
          if ( v121 == v117 )
            v122 = *(_QWORD *)(v120 + 8) == v168;
          if ( v122 && *(_QWORD *)(v120 + 16) == __PAIR__(v170, v114) )
          v123 = *(_DWORD *)v120;
          if ( *(_DWORD *)v120 )
            v121 = *(_DWORD *)(v123 + 32);
            v119 = v120;
            v120 = *(_DWORD *)v120;
            if ( *(_DWORD *)(v123 + 32) % HIDWORD(v116) == v118 )
        v124 = v119 == 0;
        if ( v119 )
          v124 = *(_DWORD *)v119 == 0;
        if ( v124 )
LABEL_215:
          v125 = SkinRepository::isKnownSkinPackUnLoaded(*((SkinRepository **)v148 + 3), (const mce::UUID *)&v168);
          v126 = (SkinRepository *)*((_DWORD *)v148 + 3);
          if ( v125 == 1 )
            SkinRepository::loadSkinPack(v126, (const mce::UUID *)&v168, 1);
            v164 = v168;
            v165 = v169;
            v166 = v170;
            v167 = 0;
            j__ZNSt10_HashtableIN3mce4UUIDESt4pairIKS1_St10unique_ptrI13DlcBatchModelSt14default_deleteIS5_EEESaIS9_ENSt8__detail10_Select1stESt8equal_toIS1_ESt4hashIS1_ENSB_18_Mod_range_hashingENSB_20_Default_ranged_hashENSB_20_Prime_rehash_policyENSB_17_Hashtable_traitsILb1ELb0ELb1EEEE10_M_emplaceIJS2_IS1_DnEEEES2_INSB_14_Node_iteratorIS9_Lb0ELb1EEEbESt17integral_constantIbLb1EEDpOT_(
              &v163,
              v143,
              (int)&v164);
          else if ( !SkinRepository::isSkinPackKnown(v126, (const mce::UUID *)&v168) )
            v127 = (int *)SkinPackModel::getMetaData(*v150);
            resolveBinaryProductIdForPackId(&v162, v127, &v168, (int)(v127 + 2));
            v128 = v162;
            if ( *(_DWORD *)(v162 - 12) )
              v129 = *((_DWORD *)v148 + 1);
              sub_DA73B4(&v158, &v162);
              v159 = 0;
              v160 = 0;
              v161 = 0;
              v159 = (char *)operator new(4u);
              v161 = v159 + 4;
              v160 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                               (int)&v158,
                               (int)&v159,
                               (int)v159);
              v130 = MainMenuScreenModel::getDlcBatchModel(v129, (unsigned __int64 *)&v159);
              v131 = (DlcBatchModel *)operator new(0x40u);
              DlcBatchModel::DlcBatchModel((int)v131, v130);
              v132 = (int)v160;
              v133 = v159;
              if ( v159 != v160 )
                  v136 = (int *)(*(_DWORD *)v133 - 12);
                  if ( v136 != &dword_28898C0 )
                  {
                    v134 = (unsigned int *)(*(_DWORD *)v133 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v135 = __ldrex(v134);
                      while ( __strex(v135 - 1, v134) );
                    }
                    else
                      v135 = (*v134)--;
                    if ( v135 <= 0 )
                      j_j_j_j_j__ZdlPv_9(v136);
                  }
                  v133 += 4;
                while ( v133 != (char *)v132 );
                v133 = v159;
              if ( v133 )
                operator delete(v133);
              v137 = (void *)(v158 - 12);
              if ( (int *)(v158 - 12) != &dword_28898C0 )
                v110 = (unsigned int *)(v158 - 4);
                    v111 = __ldrex(v110);
                  while ( __strex(v111 - 1, v110) );
                  v111 = (*v110)--;
                if ( v111 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v137);
              DlcBatchModel::beginDownload(v131, 1);
              v154 = v168;
              v155 = v169;
              v156 = v170;
              v157 = v131;
              std::_Hashtable<mce::UUID,std::pair<mce::UUID const,std::unique_ptr<DlcBatchModel,std::default_delete<DlcBatchModel>>>,std::allocator<std::pair<mce::UUID const,std::unique_ptr<DlcBatchModel,std::default_delete<DlcBatchModel>>>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<mce::UUID,std::unique_ptr<DlcBatchModel,std::default_delete<DlcBatchModel>>>>(
                (int *)&v153,
                v143,
                (int)&v154);
              if ( v157 )
                (*(void (__cdecl **)(DlcBatchModel *))(*(_DWORD *)v157 + 4))(v157);
              v128 = v162;
              v157 = 0;
            v138 = (void *)(v128 - 12);
            if ( (int *)(v128 - 12) != &dword_28898C0 )
              v108 = (unsigned int *)(v128 - 4);
                  v109 = __ldrex(v108);
                while ( __strex(v109 - 1, v108) );
                v109 = (*v108)--;
              if ( v109 <= 0 )
                j_j_j_j_j__ZdlPv_9(v138);
        v1 = v148;
        v107 = v150 + 1;
      while ( v150 + 1 != v146 );
    *((_DWORD *)v1 + 8) = 4;
    if ( ptr )
      operator delete(ptr);
    v139 = v183;
    if ( v183 )
        v140 = *(void **)v139;
        operator delete(v139);
        v139 = v140;
      while ( v140 );
    _aeabi_memclr4(v181, 4 * v182);
    if ( v181 && &v187 != v181 )
      operator delete(v181);
  }
}


char *__fastcall SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(SkinPackCollectionModel *this, int a2)
{
  __int64 v2; // r2@2
  char *v3; // r1@3

  if ( a2 < 0 )
  {
    v3 = 0;
  }
  else
    v2 = *((_QWORD *)this + 6);
    if ( (HIDWORD(v2) - (signed int)v2) >> 2 <= a2 )
      v3 = 0;
    else
      v3 = *(char **)(v2 + 4 * a2);
  if ( !v3 )
    v3 = (char *)this + 72;
  return v3;
}


signed int __fastcall SkinPackCollectionModel::isDownloadActive(SkinPackCollectionModel *this, const mce::UUID *a2)
{
  SkinPackCollectionModel *v2; // r9@1
  __int64 v3; // r10@1
  unsigned int v4; // r7@1
  __int64 v5; // kr00_8@1
  unsigned int v6; // r7@1
  unsigned int v7; // r5@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r4@2
  bool v11; // zf@3
  int v12; // r9@8
  bool v14; // zf@11
  DlcBatchModel *v15; // r0@16
  SkinPackCollectionModel *v16; // [sp+4h] [bp-34h]@2
  unsigned int v17; // [sp+Ch] [bp-2Ch]@1
  unsigned int v18; // [sp+10h] [bp-28h]@1

  v2 = this;
  v3 = *(_QWORD *)a2;
  v4 = *((_DWORD *)a2 + 3);
  v17 = v4;
  v18 = *((_DWORD *)a2 + 2);
  v5 = *(_QWORD *)((char *)this + 156);
  v6 = 522133279 * v3 ^ HIDWORD(v3) ^ v18 ^ ((522133279 * (unsigned __int64)v18 >> 32) + 522133279 * v4);
  v7 = v6 % (unsigned int)(*(_QWORD *)((char *)this + 156) >> 32);
  v8 = *(_DWORD *)(v5 + 4 * v7);
  if ( !v8 )
    return 0;
  v16 = v2;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 32);
  while ( 1 )
  {
    v11 = v10 == v6;
    if ( v10 == v6 )
      v11 = *(_QWORD *)(v9 + 8) == v3;
    if ( v11 && *(_QWORD *)(v9 + 16) == __PAIR__(v17, v18) )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 32);
      v8 = v5;
      v9 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v12 + 32) % HIDWORD(v5) == v7 )
        continue;
    }
  }
  v14 = v8 == 0;
  if ( v8 )
    v10 = *(_DWORD *)v8;
    v14 = *(_DWORD *)v8 == 0;
  if ( v14 )
  if ( SkinRepository::isSkinPackLoading(*((SkinRepository **)v16 + 3), a2) )
    return 1;
  v15 = *(DlcBatchModel **)(v10 + 24);
  if ( !v15 )
  return DlcBatchModel::isDownloadActive(v15);
}


void __fastcall SkinPackCollectionModel::checkPendingSkinPack(SkinPackCollectionModel *this)
{
  SkinPackCollectionModel *v1; // r9@1
  int v2; // r0@5
  unsigned int v3; // r7@6
  int v4; // r4@6
  int v5; // r0@6
  int v6; // r10@7
  int v7; // r5@7
  int v8; // r8@11
  int v9; // r4@13
  int v10; // r4@13
  DlcBatchModel *v11; // r10@13
  int v12; // r4@13
  int v13; // r6@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  int v20; // r1@39
  void *v21; // r0@39
  int v22; // r1@40
  void *v23; // r0@40
  int v24; // r1@41
  void *v25; // r0@41
  void *v26; // r0@46
  void *v27; // r0@47
  void *v28; // r0@48
  void *v29; // r0@49
  void *v30; // r0@50
  void *v31; // r0@51
  void *v32; // r0@55
  unsigned int *v33; // r2@57
  signed int v34; // r1@59
  bool v35; // zf@65
  unsigned int *v36; // r2@69
  signed int v37; // r1@71
  unsigned int *v38; // r2@73
  signed int v39; // r1@75
  unsigned int *v40; // r2@77
  signed int v41; // r1@79
  unsigned int *v42; // r2@81
  signed int v43; // r1@83
  unsigned int *v44; // r2@85
  signed int v45; // r1@87
  unsigned int *v46; // r2@89
  signed int v47; // r1@91
  char v48; // [sp+10h] [bp-B8h]@52
  __int64 v49; // [sp+18h] [bp-B0h]@52
  __int64 v50; // [sp+20h] [bp-A8h]@52
  DlcBatchModel *v51; // [sp+28h] [bp-A0h]@52
  char v52; // [sp+30h] [bp-98h]@13
  int v53; // [sp+38h] [bp-90h]@51
  int v54; // [sp+3Ch] [bp-8Ch]@50
  int v55; // [sp+40h] [bp-88h]@49
  char v56; // [sp+48h] [bp-80h]@13
  int v57; // [sp+60h] [bp-68h]@48
  int v58; // [sp+64h] [bp-64h]@47
  int v59; // [sp+68h] [bp-60h]@46
  int v60; // [sp+78h] [bp-50h]@13
  __int64 v61; // [sp+7Ch] [bp-4Ch]@13
  int v62; // [sp+84h] [bp-44h]@13
  __int64 v63; // [sp+88h] [bp-40h]@1
  __int64 v64; // [sp+90h] [bp-38h]@2
  int v65; // [sp+98h] [bp-30h]@3
  int v66; // [sp+9Ch] [bp-2Ch]@4

  v1 = this;
  SkinRepositoryClientInterface::getPendingSelectedSkin((SkinRepositoryClientInterface *)&v63, *((_DWORD *)this + 4));
  if ( (*(_QWORD *)&mce::UUID::EMPTY != v63 || qword_287E930 != v64) && (v65 != -1 || *(_DWORD *)(v66 - 12)) )
  {
    v2 = *((_DWORD *)v1 + 3);
    if ( !SkinRepository::getSkin() )
    {
      v3 = 522133279 * v63 ^ HIDWORD(v63) ^ v64 ^ ((522133279 * (unsigned __int64)(unsigned int)v64 >> 32)
                                                 + 522133279 * HIDWORD(v64));
      v4 = v3 % *((_DWORD *)v1 + 40);
      v5 = *(_DWORD *)(*((_DWORD *)v1 + 39) + 4 * v4);
      if ( !v5 )
        goto LABEL_13;
      v6 = *(_DWORD *)v5;
      v7 = *(_DWORD *)(*(_DWORD *)v5 + 32);
      while ( v7 != v3 || *(_QWORD *)(v6 + 8) != v63 || *(_QWORD *)(v6 + 16) != v64 )
      {
        v8 = *(_DWORD *)v6;
        if ( *(_DWORD *)v6 )
        {
          v7 = *(_DWORD *)(v8 + 32);
          v5 = v6;
          v6 = *(_DWORD *)v6;
          if ( *(_DWORD *)(v8 + 32) % *((_DWORD *)v1 + 40) == v4 )
            continue;
        }
      }
      v35 = v5 == 0;
      if ( v5 )
        v35 = *(_DWORD *)v5 == 0;
      if ( v35 )
LABEL_13:
        v9 = *((_DWORD *)v1 + 1);
        SemVersion::SemVersion((SemVersion *)&v52);
        PackIdVersion::PackIdVersion((int)&v56, (int)&v63, (int)&v52, 0);
        v61 = 0LL;
        v62 = 0;
        std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_range_initialize<PackIdVersion const*>(
          (char **)&v61,
          (int)&v56,
          (int)&v60);
        v10 = MainMenuScreenModel::getDlcBatchModel(v9, (unsigned __int64 *)&v61);
        v11 = (DlcBatchModel *)operator new(0x40u);
        DlcBatchModel::DlcBatchModel((int)v11, v10);
        v12 = HIDWORD(v61);
        v13 = v61;
        if ( (_DWORD)v61 != HIDWORD(v61) )
          do
          {
            v20 = *(_DWORD *)(v13 + 32);
            v21 = (void *)(v20 - 12);
            if ( (int *)(v20 - 12) != &dword_28898C0 )
            {
              v14 = (unsigned int *)(v20 - 4);
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
                j_j_j_j_j__ZdlPv_9(v21);
            }
            v22 = *(_DWORD *)(v13 + 28);
            v23 = (void *)(v22 - 12);
            if ( (int *)(v22 - 12) != &dword_28898C0 )
              v16 = (unsigned int *)(v22 - 4);
                  v17 = __ldrex(v16);
                while ( __strex(v17 - 1, v16) );
                v17 = (*v16)--;
              if ( v17 <= 0 )
                j_j_j_j_j__ZdlPv_9(v23);
            v24 = *(_DWORD *)(v13 + 24);
            v25 = (void *)(v24 - 12);
            if ( (int *)(v24 - 12) != &dword_28898C0 )
              v18 = (unsigned int *)(v24 - 4);
                  v19 = __ldrex(v18);
                while ( __strex(v19 - 1, v18) );
                v19 = (*v18)--;
              if ( v19 <= 0 )
                j_j_j_j_j__ZdlPv_9(v25);
            v13 += 48;
          }
          while ( v13 != v12 );
          v13 = v61;
        if ( v13 )
          operator delete((void *)v13);
        v26 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v59 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
          else
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j_j__ZdlPv_9(v26);
        v27 = (void *)(v58 - 12);
        if ( (int *)(v58 - 12) != &dword_28898C0 )
          v38 = (unsigned int *)(v58 - 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j_j__ZdlPv_9(v27);
        v28 = (void *)(v57 - 12);
        if ( (int *)(v57 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v57 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j_j__ZdlPv_9(v28);
        v29 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v55 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j_j__ZdlPv_9(v29);
        v30 = (void *)(v54 - 12);
        if ( (int *)(v54 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v54 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j_j__ZdlPv_9(v30);
        v31 = (void *)(v53 - 12);
        if ( (int *)(v53 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v53 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j_j__ZdlPv_9(v31);
        DlcBatchModel::beginDownload(v11, 1);
        v49 = v63;
        v50 = v64;
        v51 = v11;
        std::_Hashtable<mce::UUID,std::pair<mce::UUID const,std::unique_ptr<DlcBatchModel,std::default_delete<DlcBatchModel>>>,std::allocator<std::pair<mce::UUID const,std::unique_ptr<DlcBatchModel,std::default_delete<DlcBatchModel>>>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<mce::UUID,std::unique_ptr<DlcBatchModel,std::default_delete<DlcBatchModel>>>>(
          (int *)&v48,
          (SkinPackCollectionModel *)((char *)v1 + 156),
          (int)&v49);
        if ( v51 )
          (*(void (**)(void))(*(_DWORD *)v51 + 4))();
        v51 = 0;
    }
  }
  v32 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v66 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9(v32);
}


SkinPackModel *__fastcall SkinPackCollectionModel::_getSkinPackModel(SkinPackCollectionModel *this, const mce::UUID *a2)
{
  SkinPackModel **v2; // r5@1 OVERLAPPED
  SkinPackModel **v3; // r6@1 OVERLAPPED
  const mce::UUID *v4; // r4@1
  char *v5; // r8@2
  char *v6; // r0@3
  SkinPackModel *result; // r0@6

  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 36);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_6:
    result = 0;
  }
  else
    v5 = (char *)a2 + 8;
    while ( 1 )
    {
      v6 = SkinPackModel::getPackId(*v2);
      if ( *(_QWORD *)v4 == *(_QWORD *)v6 && *(_QWORD *)v5 == *((_QWORD *)v6 + 1) )
        break;
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_6;
    }
    result = *v2;
  return result;
}


void __fastcall SkinPackCollectionModel::getRecentSkinHandleAtIndex(SkinPackCollectionModel *this, int a2, int a3)
{
  SkinPackCollectionModel::getRecentSkinHandleAtIndex(this, a2, a3);
}


char *__fastcall SkinPackCollectionModel::getSkinName(int a1, int a2)
{
  SkinPackModel **v2; // r5@1 OVERLAPPED
  SkinPackModel **v3; // r6@1 OVERLAPPED
  int v4; // r4@1
  _QWORD *v5; // r8@2
  char *v6; // r0@3
  char *result; // r0@6

  *(_QWORD *)&v2 = *(_QWORD *)(a1 + 36);
  v4 = a2;
  if ( v2 == v3 )
    goto LABEL_6;
  v5 = (_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v6 = SkinPackModel::getPackId(*v2);
    if ( *(_QWORD *)v4 == *(_QWORD *)v6 && *v5 == *((_QWORD *)v6 + 1) )
      break;
    v2 += 2;
    if ( v3 == v2 )
      goto LABEL_6;
  }
  if ( *v2 )
    result = SkinPackModel::getSkinName(*v2, *(_DWORD *)(v4 + 16));
  else
LABEL_6:
    result = (char *)&Util::EMPTY_STRING;
  return result;
}


SkinPackCollectionModel *__fastcall SkinPackCollectionModel::getSkinPackModelByUUID(SkinPackCollectionModel *this, const mce::UUID *a2)
{
  SkinPackCollectionModel *v2; // r8@1
  const mce::UUID *v3; // r5@1
  __int64 v4; // r6@1
  char *v5; // r9@2
  char *v6; // r0@3
  SkinPackCollectionModel *result; // r0@6

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 36);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
LABEL_6:
    result = 0;
  }
  else
    v5 = (char *)a2 + 8;
    while ( 1 )
    {
      v6 = SkinPackModel::getPackId(*(SkinPackModel **)v4);
      if ( *(_QWORD *)v3 == *(_QWORD *)v6 && *(_QWORD *)v5 == *((_QWORD *)v6 + 1) )
        break;
      LODWORD(v4) = v4 + 8;
      if ( HIDWORD(v4) == (_DWORD)v4 )
        goto LABEL_6;
    }
    result = *(SkinPackCollectionModel **)v4;
  if ( !result )
    result = (SkinPackCollectionModel *)((char *)v2 + 72);
  return result;
}


int __fastcall SkinPackCollectionModel::getNumSkinPacks(int a1, int a2)
{
  int v2; // r0@2
  int v3; // r1@2
  __int64 v4; // kr00_8@2
  __int64 v5; // kr08_8@3

  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v2 = *(_QWORD *)(a1 + 48) >> 32;
    v3 = v4;
  }
  else
    v5 = *(_QWORD *)(a1 + 60);
    v2 = *(_QWORD *)(a1 + 60) >> 32;
    v3 = v5;
  return (v2 - v3) >> 2;
}


Json::Reader *__fastcall SkinPackCollectionModel::_addResponseDocuments(int a1, int *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  int *v7; // r4@1
  int v8; // r9@1 OVERLAPPED
  int v9; // r10@1 OVERLAPPED
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  char *v14; // r0@23
  char *v15; // r0@24
  unsigned int v16; // r0@27
  __int64 v17; // kr00_8@28
  unsigned int *v18; // r0@29
  unsigned int v19; // r1@31
  ContentCatalogService *v20; // r6@35
  int v21; // r0@35
  unsigned int *v22; // r0@36
  unsigned int v23; // r1@38
  unsigned int *v24; // r0@42
  unsigned int v25; // r1@44
  _DWORD *v26; // r0@47
  void *v27; // r2@47
  void *v28; // r2@47
  int v29; // r2@47
  int v30; // r2@47
  int v31; // r2@47
  void *v32; // r2@47
  void *v33; // r2@47
  int v34; // r1@47
  int v35; // r1@47
  unsigned int *v36; // r1@48
  unsigned int v37; // r2@50
  __int64 v38; // r1@53
  int v39; // r0@55
  unsigned int *v40; // r2@56
  unsigned int v41; // r1@58
  int v42; // r6@63
  unsigned int *v43; // r1@64
  unsigned int v44; // r0@66
  unsigned int *v45; // r7@70
  unsigned int v46; // r0@72
  unsigned int *v47; // r1@78
  unsigned int v48; // r0@80
  void *v50; // [sp+20h] [bp-138h]@35
  void *v51; // [sp+24h] [bp-134h]@47
  void *v52; // [sp+28h] [bp-130h]@47
  int v53; // [sp+2Ch] [bp-12Ch]@47
  int v54; // [sp+30h] [bp-128h]@47
  int v55; // [sp+34h] [bp-124h]@47
  void *v56; // [sp+38h] [bp-120h]@47
  void *v57; // [sp+3Ch] [bp-11Ch]@47
  void *v58; // [sp+40h] [bp-118h]@47
  __int64 v59; // [sp+44h] [bp-114h]@47
  int *v60; // [sp+4Ch] [bp-10Ch]@35
  int v61; // [sp+50h] [bp-108h]@35
  __int64 v62; // [sp+54h] [bp-104h]@41
  _DWORD *v63; // [sp+5Ch] [bp-FCh]@53
  void (*v64)(void); // [sp+64h] [bp-F4h]@47
  int v65[11]; // [sp+6Ch] [bp-ECh]@28
  __int64 v66; // [sp+98h] [bp-C0h]@20
  __int64 v67; // [sp+A0h] [bp-B8h]@21
  char *v68; // [sp+A8h] [bp-B0h]@7
  char *v69; // [sp+ACh] [bp-ACh]@3
  int v70; // [sp+B0h] [bp-A8h]@19
  char v71; // [sp+C0h] [bp-98h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  Json::Reader::Reader((Json::Reader *)&v71);
  *(_QWORD *)&v8 = *(_QWORD *)(v6 + 4);
  if ( v8 != v9 )
  {
    do
    {
      v68 = (char *)&unk_28898CC;
      v69 = (char *)&unk_28898CC;
      Json::Value::Value(&v70, 0);
      EntityInteraction::setInteractText((int *)&v68, (int *)(v8 + 8));
      EntityInteraction::setInteractText((int *)((unsigned int)&v68 | 4), (int *)(v8 + 12));
      if ( Json::Reader::parse((int)&v71, (int *)(v8 + 60), (int)&v70, 1) == 1 )
      {
        sub_CF91FC((int)&v66, (int)&v70);
        if ( v66 ^ *(_QWORD *)&mce::UUID::EMPTY || v67 ^ qword_287E930 )
          std::vector<SkinPackMeta,std::allocator<SkinPackMeta>>::emplace_back<SkinPackMeta>(
            *(_DWORD *)(v4 + 152),
            (int)&v68);
      }
      Json::Value::~Value((Json::Value *)&v70);
      v14 = v69 - 12;
      if ( (int *)(v69 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v69 - 4);
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
          j_j_j_j_j__ZdlPv_9(v14);
      v15 = v68 - 12;
      if ( (int *)(v68 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v68 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9(v15);
      v8 += 68;
    }
    while ( v8 != v9 );
    *(_QWORD *)&v8 = *(_QWORD *)(v6 + 4);
  }
  v16 = **(_DWORD **)v5 + -252645135 * ((v9 - v8) >> 2);
  **(_DWORD **)v5 = v16;
  if ( v16 >= *(_DWORD *)v6 )
    *(_DWORD *)(v4 + 32) = 2;
    SkinPackCollectionModel::_registerLoadListener((SkinPackCollectionModel *)v4);
    SkinPackCollectionModel::_buildSkinPackCollection((SkinPackCollectionModel *)v4);
  else
    SearchQuery::SearchQuery(v65, v7);
    SearchQuery::setSkip((SearchQuery *)v65, **(_DWORD **)v5);
    v17 = *(_QWORD *)(v4 + 24);
    if ( HIDWORD(v17) )
      v18 = (unsigned int *)(HIDWORD(v17) + 8);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 + 1, v18) );
      else
        ++*v18;
    v20 = *(ContentCatalogService **)(v4 + 20);
    SearchQuery::SearchQuery((int *)&v50, v65);
    v60 = *(int **)v5;
    v21 = *(_DWORD *)(v5 + 4);
    v61 = v21;
    if ( v21 )
      v22 = (unsigned int *)(v21 + 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 + 1, v22) );
        ++*v22;
    v62 = v17;
      v24 = (unsigned int *)(HIDWORD(v17) + 8);
          v25 = __ldrex(v24);
        while ( __strex(v25 + 1, v24) );
        ++*v24;
    v64 = 0;
    v26 = operator new(0x40u);
    *v26 = v4;
    v26[1] = v50;
    v50 = &unk_28898CC;
    v27 = v51;
    v51 = &unk_28898CC;
    v26[2] = v27;
    v28 = v52;
    v52 = &unk_28898CC;
    v26[3] = v28;
    v29 = v53;
    v53 = 0;
    v26[4] = v29;
    v30 = v54;
    v54 = 0;
    v26[5] = v30;
    v31 = v55;
    v55 = 0;
    v26[6] = v31;
    v32 = v56;
    v56 = &unk_28898CC;
    v26[7] = v32;
    v33 = v57;
    v57 = &unk_28898CC;
    v26[8] = v33;
    v26[9] = v58;
    v58 = &unk_28898CC;
    *((_QWORD *)v26 + 5) = v59;
    v26[12] = v60;
    v34 = v61;
    v61 = 0;
    v60 = 0;
    v26[13] = v34;
    v26[14] = v62;
    v35 = HIDWORD(v62);
    v26[15] = HIDWORD(v62);
    if ( v35 )
      v36 = (unsigned int *)(v35 + 8);
          v37 = __ldrex(v36);
        while ( __strex(v37 + 1, v36) );
        ++*v36;
    LODWORD(v38) = sub_CFA670;
    v63 = v26;
    HIDWORD(v38) = sub_CFA524;
    *(_QWORD *)&v64 = v38;
    ContentCatalogService::searchCatalog(v20, v65, (int)&v63);
    if ( v64 )
      v64();
    v39 = HIDWORD(v62);
    if ( HIDWORD(v62) )
      v40 = (unsigned int *)(HIDWORD(v62) + 8);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 == 1 )
        (*(void (**)(void))(*(_DWORD *)v39 + 12))();
    v42 = v61;
    if ( v61 )
      v43 = (unsigned int *)(v61 + 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 == 1 )
        v45 = (unsigned int *)(v42 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
    SearchQuery::~SearchQuery((SearchQuery *)&v50);
      v47 = (unsigned int *)(HIDWORD(v17) + 8);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v17) + 12))(HIDWORD(v17));
    SearchQuery::~SearchQuery((SearchQuery *)v65);
  return Json::Reader::~Reader((Json::Reader *)&v71);
}


int __fastcall SkinPackCollectionModel::_registerLoadListener(SkinPackCollectionModel *this)
{
  SkinPackCollectionModel *v1; // r5@1
  int v2; // r4@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  _DWORD *v6; // r0@7
  __int64 v7; // r1@7
  int result; // r0@9
  unsigned int *v9; // r2@10
  unsigned int v10; // r1@12
  _DWORD *v11; // [sp+0h] [bp-28h]@7
  __int64 v12; // [sp+8h] [bp-20h]@7
  int v13; // [sp+10h] [bp-18h]@1
  int v14; // [sp+14h] [bp-14h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  v13 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)this + 7);
  v14 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
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
  v6 = operator new(4u);
  LODWORD(v7) = sub_CFB354;
  *v6 = v1;
  HIDWORD(v7) = sub_CFB2E8;
  v11 = v6;
  v12 = v7;
  SkinRepository::addLoadListener(v2, (int)&v13, (int)&v11);
  if ( (_DWORD)v12 )
    ((void (*)(void))v12)();
  result = v14;
  if ( v14 )
    v9 = (unsigned int *)(v14 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int *__fastcall SkinPackCollectionModel::setPreviewSkin(int a1, int a2)
{
  int v2; // r12@1
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // lr@1

  v2 = a1 + 128;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)v2 = *(_DWORD *)a2;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  *(_DWORD *)(v2 + 12) = v5;
  *(_DWORD *)(v2 + 16) = v6;
  return j_EntityInteraction::setInteractText((int *)(a1 + 148), (int *)(a2 + 20));
}


int __fastcall SkinPackCollectionModel::getNumRecentSkins(SkinPackCollectionModel *this)
{
  SkinPackCollectionModel *v1; // r4@1
  __int64 v2; // r6@1
  int v3; // r5@1
  Skin *v4; // r0@2

  v1 = this;
  v2 = *(_QWORD *)SkinRepositoryClientInterface::getRecentSkins(*((SkinRepositoryClientInterface **)this + 4));
  v3 = 0;
  while ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v4 = SkinRepositoryClientInterface::getSkinBySerializableName(*((_DWORD *)v1 + 4), (unsigned int *)v2);
    LODWORD(v2) = v2 + 4;
    if ( v4 )
      ++v3;
  }
  return v3;
}


void __fastcall SkinPackCollectionModel::_buildSkinPackCollection(SkinPackCollectionModel *this)
{
  SkinPackCollectionModel::_buildSkinPackCollection(this);
}


  if ( SkinPackCollectionModel::isSkinLocked(*(_DWORD *)(v1 + 432), v1 + 448) == 1 )
{
    v2 = MinecraftScreenModel::getUserManager(*(MinecraftScreenModel **)(v1 + 424));
    if ( (*(int (**)(void))(*(_DWORD *)v2 + 24))()
      || (v3 = MinecraftScreenModel::getUserManager(*(MinecraftScreenModel **)(v1 + 424)),
          (*(int (**)(void))(*(_DWORD *)v3 + 36))() != 1) )
    {
      v9 = *(_DWORD *)(v1 + 424);
      v10 = v1 + 448;
      v8 = 0;
      MainMenuScreenModel::navigateToSkinPackUpsellScreen(v9, v10, 0, 0);
    }
    else
      MinecraftScreenController::_getWeakPtrToThis<SkinPickerScreenController>((int)&v23, v1);
      v4 = *(_QWORD *)&v23;
      v5 = *(_DWORD *)(v1 + 424);
      if ( v24 )
      {
        v6 = (unsigned int *)(v24 + 8);
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
      v22 = 0;
      v11 = operator new(8u);
      *v11 = v4;
      if ( HIDWORD(v4) )
        v12 = (unsigned int *)(HIDWORD(v4) + 8);
            v13 = __ldrex(v12);
          while ( __strex(v13 + 1, v12) );
          ++*v12;
      LODWORD(v14) = sub_1253D80;
      v21 = v11;
      HIDWORD(v14) = sub_1253C0C;
      *(_QWORD *)&v22 = v14;
      MinecraftScreenModel::navigateToPlatformStoreConnectConfirmationScreen(v5, (int)&v21);
      if ( v22 )
        v22();
        v15 = (unsigned int *)(HIDWORD(v4) + 8);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
      v17 = v24;
        v18 = (unsigned int *)(v24 + 8);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (**)(void))(*(_DWORD *)v17 + 12))();
  }
  else
  {
    *(_BYTE *)(v1 + 437) = 1;
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 24))(v1);
  return v8;
}


void __fastcall SkinPackCollectionModel::equipPreviewSkin(SkinPackCollectionModel *this, int a2)
{
  SkinPackCollectionModel *v2; // r10@1
  SkinPackModel **v3; // r5@2 OVERLAPPED
  SkinPackModel **v4; // r6@2 OVERLAPPED
  char *v5; // r8@3
  char *v6; // r4@3
  char *v7; // r0@4
  SkinPackModel *v8; // r0@7
  char *v9; // r7@11
  int v10; // r5@11
  char *v11; // r0@11
  int *v12; // r0@11
  void *v13; // r0@11
  void *v14; // r0@12
  void *v15; // r0@13
  char *v16; // r5@14
  int v17; // r7@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  int *v20; // r0@24
  void *v21; // r0@29
  void *v22; // r0@30
  SkinPackModel **v23; // r5@31 OVERLAPPED
  SkinPackModel **v24; // r6@31 OVERLAPPED
  char *v25; // r0@32
  unsigned int *v26; // r2@39
  signed int v27; // r1@41
  unsigned int *v28; // r2@43
  signed int v29; // r1@45
  unsigned int *v30; // r2@47
  signed int v31; // r1@49
  unsigned int *v32; // r2@51
  signed int v33; // r1@53
  unsigned int *v34; // r2@55
  signed int v35; // r1@57
  int v36; // [sp+Ch] [bp-4Ch]@11
  int v37; // [sp+14h] [bp-44h]@11
  int v38; // [sp+18h] [bp-40h]@11
  char *v39; // [sp+1Ch] [bp-3Ch]@11
  char *v40; // [sp+20h] [bp-38h]@11
  char *v41; // [sp+24h] [bp-34h]@11
  int v42; // [sp+2Ch] [bp-2Ch]@11
  int v43; // [sp+30h] [bp-28h]@11

  v2 = this;
  if ( a2 )
  {
    *(_QWORD *)&v3 = *(_QWORD *)((char *)this + 36);
    if ( v3 == v4 )
    {
LABEL_7:
      v8 = 0;
    }
    else
      v5 = (char *)this + 136;
      v6 = (char *)this + 128;
      while ( 1 )
      {
        v7 = SkinPackModel::getPackId(*v3);
        if ( *(_QWORD *)v6 == *(_QWORD *)v7 && *(_QWORD *)v5 == *((_QWORD *)v7 + 1) )
          break;
        v3 += 2;
        if ( v4 == v3 )
          goto LABEL_7;
      }
      v8 = *v3;
    if ( !v8 )
      v8 = (SkinPackCollectionModel *)((char *)v2 + 72);
    v9 = SkinPackModel::getSkinName(v8, *((_DWORD *)v2 + 36));
    v10 = *((_DWORD *)v2 + 1);
    sub_DA7364((void **)&v42, "skins.store.equipped");
    I18n::get(&v38, (int **)v9);
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v11 = (char *)operator new(4u);
    v39 = v11;
    v41 = v11 + 4;
    v40 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v38,
                    (int)&v39,
                    (int)v11);
    I18n::get(&v43, &v42, (unsigned __int64 *)&v39);
    sub_DA7364((void **)&v37, (const char *)&unk_257BC67);
    v12 = (int *)sub_DA7364((void **)&v36, (const char *)&unk_257BC67);
    MinecraftScreenModel::pushToast(v10, 6, &v43, &v37, v12);
    v13 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v36 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v37 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v43 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9(v15);
    v17 = (int)v40;
    v16 = v39;
    if ( v39 != v40 )
      do
        v20 = (int *)(*(_DWORD *)v16 - 12);
        if ( v20 != &dword_28898C0 )
        {
          v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
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
            j_j_j_j_j__ZdlPv_9(v20);
        }
        v16 += 4;
      while ( v16 != (char *)v17 );
      v16 = v39;
    if ( v16 )
      operator delete(v16);
    v21 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v38 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9(v21);
    v22 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v42 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j_j__ZdlPv_9(v22);
  }
  *(_QWORD *)&v23 = *(_QWORD *)((char *)v2 + 36);
  if ( v23 != v24 )
    while ( 1 )
      v25 = SkinPackModel::getPackId(*v23);
      if ( *((_QWORD *)v2 + 16) == *(_QWORD *)v25 && *((_QWORD *)v2 + 17) == *((_QWORD *)v25 + 1) )
        break;
      v23 += 2;
      if ( v24 == v23 )
        return;
    if ( *v23 )
      SkinPackModel::setSelectedSkin(*v23, *((_DWORD *)v2 + 36));
}


signed int __fastcall SkinPackCollectionModel::_onSkinPackLoaded(SkinPackCollectionModel *this, const mce::UUID *a2)
{
  SkinPackCollectionModel *v2; // r8@1
  const mce::UUID *v3; // r5@1
  signed int result; // r0@1
  __int64 v5; // r6@2
  char *v6; // r9@3
  char *v7; // r0@4

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 8);
  if ( result )
  {
    v5 = *(_QWORD *)((char *)v2 + 36);
    if ( (_DWORD)v5 == HIDWORD(v5) )
      goto LABEL_9;
    v6 = (char *)a2 + 8;
    while ( 1 )
    {
      v7 = SkinPackModel::getPackId(*(SkinPackModel **)v5);
      if ( *(_QWORD *)v3 == *(_QWORD *)v7 && *(_QWORD *)v6 == *((_QWORD *)v7 + 1) )
        break;
      LODWORD(v5) = v5 + 8;
      if ( HIDWORD(v5) == (_DWORD)v5 )
        goto LABEL_9;
    }
    if ( !*(_DWORD *)v5 )
LABEL_9:
      SkinPackCollectionModel::_buildSkinPackCollection(v2);
    result = *((_DWORD *)v2 + 8);
    if ( result == 3 )
      result = 4;
      *((_DWORD *)v2 + 8) = 4;
  }
  return result;
}


void __fastcall SkinPackCollectionModel::getRecentSkinHandleAtIndex(SkinPackCollectionModel *this, int a2, int a3)
{
  int v3; // r7@1
  SkinPackCollectionModel *v4; // r11@1
  int v5; // r10@1
  unsigned int *v6; // r4@1
  __int64 v7; // kr00_8@1
  Skin *v8; // r0@2
  Skin *v9; // r6@2
  SkinPack *v10; // r0@3
  char *v11; // r5@3
  int v12; // r0@3
  _QWORD *v13; // r1@3
  __int64 v14; // r2@4
  int v15; // r6@4
  int v16; // r5@4
  char *v17; // r4@8
  int v18; // r5@8
  int v19; // r12@9
  int v20; // r1@9
  int v21; // r3@9
  int v22; // r6@9
  int v23; // r7@9
  __int64 v24; // kr18_8@11
  unsigned int *v25; // r2@14
  signed int v26; // r1@16
  int v27; // r1@22
  void *v28; // r0@22
  int v29; // [sp+0h] [bp-38h]@3
  char *v30; // [sp+4h] [bp-34h]@1
  _QWORD *v31; // [sp+8h] [bp-30h]@1
  _QWORD *v32; // [sp+Ch] [bp-2Ch]@1

  v3 = a2;
  v30 = 0;
  v31 = 0;
  v4 = this;
  v32 = 0;
  v5 = a3;
  v7 = *(_QWORD *)SkinRepositoryClientInterface::getRecentSkins(*(SkinRepositoryClientInterface **)(a2 + 16));
  v6 = (unsigned int *)v7;
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    do
    {
      v8 = SkinRepositoryClientInterface::getSkinBySerializableName(*(_DWORD *)(v3 + 16), v6);
      v9 = v8;
      if ( v8 )
      {
        v10 = (SkinPack *)Skin::getSkinPack(v8);
        v11 = SkinPack::getId(v10);
        v12 = Skin::getSkinIndex(v9);
        v29 = v12;
        v13 = v31;
        if ( v31 == v32 )
        {
          std::vector<SkinHandle,std::allocator<SkinHandle>>::_M_emplace_back_aux<mce::UUID const&,int>(
            (unsigned __int64 *)&v30,
            (int)v11,
            &v29);
        }
        else
          v14 = *(_QWORD *)v11;
          v15 = *((_DWORD *)v11 + 2);
          v16 = *((_DWORD *)v11 + 3);
          *v31 = v14;
          *((_DWORD *)v13 + 2) = v15;
          *((_DWORD *)v13 + 3) = v16;
          *((_DWORD *)v13 + 4) = v12;
          *((_DWORD *)v13 + 5) = &unk_28898CC;
          v31 = v13 + 3;
      }
      ++v6;
    }
    while ( (unsigned int *)HIDWORD(v7) != v6 );
  }
  if ( v5 <= -1 )
    v17 = (char *)v31;
    v18 = (int)v30;
  else
    if ( -1431655765 * (((char *)v31 - v30) >> 3) > v5 )
      v19 = (int)&v30[24 * v5];
      v20 = *(_DWORD *)(v19 + 4);
      v21 = *(_DWORD *)(v19 + 8);
      v22 = *(_DWORD *)(v19 + 12);
      v23 = *(_DWORD *)(v19 + 16);
      *(_DWORD *)v4 = *(_DWORD *)v19;
      *((_DWORD *)v4 + 1) = v20;
      *((_DWORD *)v4 + 2) = v21;
      *((_DWORD *)v4 + 3) = v22;
      *((_DWORD *)v4 + 4) = v23;
      sub_DA73B4((int *)v4 + 5, (int *)(v19 + 20));
      goto LABEL_12;
  v24 = qword_287E930;
  *(_QWORD *)v4 = *(_QWORD *)&mce::UUID::EMPTY;
  *((_QWORD *)v4 + 1) = v24;
  *((_DWORD *)v4 + 4) = -1;
  *((_DWORD *)v4 + 5) = &unk_28898CC;
LABEL_12:
  if ( (char *)v18 != v17 )
      v27 = *(_DWORD *)(v18 + 20);
      v28 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v27 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j_j__ZdlPv_9(v28);
      v18 += 24;
    while ( (char *)v18 != v17 );
    v17 = v30;
  if ( v17 )
    operator delete(v17);
}


SkinPackModel *__fastcall SkinPackCollectionModel::setLastCustomSkin(SkinPackModel *result, int a2)
{
  SkinPackModel **v2; // r5@1 OVERLAPPED
  SkinPackModel **v3; // r6@1 OVERLAPPED
  int v4; // r4@1
  unsigned __int64 *v5; // r8@2

  *(_QWORD *)&v2 = *(_QWORD *)((char *)result + 36);
  v4 = a2;
  if ( v2 != v3 )
  {
    v5 = (unsigned __int64 *)(a2 + 8);
    while ( 1 )
    {
      result = (SkinPackModel *)SkinPackModel::getPackId(*v2);
      if ( *(_QWORD *)v4 == *(_QWORD *)result )
      {
        result = (SkinPackModel *)(*((_QWORD *)result + 1) ^ *v5 | (*v5 >> 32) ^ (*((_QWORD *)result + 1) >> 32));
        if ( !result )
          break;
      }
      v2 += 2;
      if ( v3 == v2 )
        return result;
    }
    result = *v2;
    if ( *v2 )
      result = j_j_j__ZN13SkinPackModel17setLastCustomSkinEi(result, *(_DWORD *)(v4 + 16));
  }
  return result;
}


void __fastcall SkinPackCollectionModel::~SkinPackCollectionModel(SkinPackCollectionModel *this)
{
  SkinPackCollectionModel::~SkinPackCollectionModel(this);
}


SkinPackModel *__fastcall SkinPackCollectionModel::setSelectedSkin(SkinPackModel *result, int a2)
{
  SkinPackModel **v2; // r5@1 OVERLAPPED
  SkinPackModel **v3; // r6@1 OVERLAPPED
  int v4; // r4@1
  unsigned __int64 *v5; // r8@2

  *(_QWORD *)&v2 = *(_QWORD *)((char *)result + 36);
  v4 = a2;
  if ( v2 != v3 )
  {
    v5 = (unsigned __int64 *)(a2 + 8);
    while ( 1 )
    {
      result = (SkinPackModel *)SkinPackModel::getPackId(*v2);
      if ( *(_QWORD *)v4 == *(_QWORD *)result )
      {
        result = (SkinPackModel *)(*((_QWORD *)result + 1) ^ *v5 | (*v5 >> 32) ^ (*((_QWORD *)result + 1) >> 32));
        if ( !result )
          break;
      }
      v2 += 2;
      if ( v3 == v2 )
        return result;
    }
    result = *v2;
    if ( *v2 )
      result = j_j_j__ZN13SkinPackModel15setSelectedSkinEi(result, *(_DWORD *)(v4 + 16));
  }
  return result;
}


signed int __fastcall SkinPackCollectionModel::getCollectionChanged(SkinPackCollectionModel *this)
{
  signed int result; // r0@2

  if ( *((_DWORD *)this + 8) == 4 )
  {
    *((_DWORD *)this + 8) = 3;
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall SkinPackCollectionModel::isSearchComplete(SkinPackCollectionModel *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 8);
  result = 0;
  if ( v1 > 1 )
    result = 1;
  return result;
}


void __fastcall SkinPackCollectionModel::checkPendingSkinPack(SkinPackCollectionModel *this)
{
  SkinPackCollectionModel::checkPendingSkinPack(this);
}


int __fastcall SkinPackCollectionModel::_getPremiumSkinPackModelByCollectionIndex(SkinPackCollectionModel *this, int a2)
{
  __int64 v2; // kr00_8@2
  int result; // r0@3

  if ( a2 < 0 || (v2 = *((_QWORD *)this + 6), (HIDWORD(v2) - (signed int)v2) >> 2 <= a2) )
    result = 0;
  else
    result = *(_DWORD *)(v2 + 4 * a2);
  return result;
}


SkinPackCollectionModel *__fastcall SkinPackCollectionModel::~SkinPackCollectionModel(SkinPackCollectionModel *this)
{
  SkinPackCollectionModel *v1; // r10@1
  int v2; // r5@3
  int v3; // r0@4
  int v4; // r4@4
  char *v5; // r0@7
  _QWORD *v6; // r1@10
  int v7; // r1@12
  void *v8; // r0@12
  int v9; // r1@13
  void *v10; // r0@13
  int v11; // r1@14
  void *v12; // r0@14
  void *v13; // r0@15
  void *v14; // r0@17
  int v15; // r5@19
  int v16; // r7@19
  int v17; // r4@20
  unsigned int *v18; // r1@21
  unsigned int v19; // r0@23
  unsigned int *v20; // r6@27
  unsigned int v21; // r0@29
  int v22; // r5@38
  unsigned int *v23; // r1@39
  unsigned int v24; // r0@41
  unsigned int *v25; // r4@45
  unsigned int v26; // r0@47
  unsigned int *v28; // r2@53
  signed int v29; // r1@55
  unsigned int *v30; // r2@57
  signed int v31; // r1@59
  unsigned int *v32; // r2@61
  signed int v33; // r1@63

  v1 = this;
  *(_DWORD *)this = &off_26D82C8;
  EntitlementManager::removeEntitlementChangeListener(*((_DWORD *)this + 2), (unsigned int)this);
  if ( *((_DWORD *)v1 + 8) )
    SkinRepository::freeMemoryMappedData(*((SkinRepository **)v1 + 3));
  v2 = *((_DWORD *)v1 + 41);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 24);
      v4 = *(_DWORD *)v2;
      if ( v3 )
        (*(void (**)(void))(*(_DWORD *)v3 + 4))();
      operator delete((void *)v2);
      v2 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 156), 4 * (*(_QWORD *)((char *)v1 + 156) >> 32));
  *((_DWORD *)v1 + 41) = 0;
  *((_DWORD *)v1 + 42) = 0;
  v5 = (char *)*((_DWORD *)v1 + 39);
  if ( v5 && (char *)v1 + 180 != v5 )
    operator delete(v5);
  v6 = (_QWORD *)*((_DWORD *)v1 + 38);
  if ( v6 )
    std::default_delete<std::vector<SkinPackMeta,std::allocator<SkinPackMeta>>>::operator()((int)v1 + 152, v6);
  *((_DWORD *)v1 + 38) = 0;
  v7 = *((_DWORD *)v1 + 37);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  Json::Value::~Value((SkinPackCollectionModel *)((char *)v1 + 104));
  v9 = *((_DWORD *)v1 + 25);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v9 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 24);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v11 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)*((_DWORD *)v1 + 15);
  if ( v13 )
    operator delete(v13);
  v14 = (void *)*((_DWORD *)v1 + 12);
  if ( v14 )
    operator delete(v14);
  v16 = *(_QWORD *)((char *)v1 + 36) >> 32;
  v15 = *(_QWORD *)((char *)v1 + 36);
  if ( v15 != v16 )
      v17 = *(_DWORD *)(v15 + 4);
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
      v15 += 8;
    while ( v15 != v16 );
    v15 = *((_DWORD *)v1 + 9);
  if ( v15 )
    operator delete((void *)v15);
  v22 = *((_DWORD *)v1 + 7);
  if ( v22 )
    v23 = (unsigned int *)(v22 + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      v25 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
      if ( &pthread_create )
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      else
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  return v1;
}


unsigned int __fastcall SkinPackCollectionModel::SkinPackCollectionModel(unsigned int a1, int a2, int a3, int a4, __int64 a5)
{
  unsigned int v5; // r4@1
  __int64 v6; // r2@1
  int v7; // r7@1
  int v8; // r0@1
  double v9; // r0@1
  unsigned int v10; // r0@1
  int v11; // r7@3
  void *v12; // r5@3
  char v14; // [sp+7h] [bp-31h]@1
  char v15; // [sp+8h] [bp-30h]@1

  v5 = a1;
  *(_DWORD *)a1 = &off_26D82C8;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  *(_QWORD *)(a1 + 16) = a5;
  v14 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(a1 + 24, (int)&v15, &v14);
  _aeabi_memclr8(v5 + 32, 40);
  SkinPackModel::SkinPackModel(v5 + 72, (int)&mce::UUID::EMPTY, *(_DWORD *)(v5 + 16));
  v6 = *(_QWORD *)&mce::UUID::EMPTY;
  v7 = qword_287E930;
  *(_DWORD *)(v5 + 140) = HIDWORD(qword_287E930);
  v8 = v5 + 128;
  *(_QWORD *)v8 = v6;
  *(_DWORD *)(v8 + 8) = v7;
  *(_DWORD *)(v5 + 144) = -1;
  *(_DWORD *)(v5 + 148) = &unk_28898CC;
  *(_DWORD *)(v5 + 152) = 0;
  *(_DWORD *)(v5 + 164) = 0;
  *(_DWORD *)(v5 + 168) = 0;
  *(_DWORD *)(v5 + 172) = 1065353216;
  LODWORD(v9) = v5 + 172;
  *(_DWORD *)(LODWORD(v9) + 4) = 0;
  v10 = sub_DA7744(v9);
  *(_DWORD *)(v5 + 160) = v10;
  if ( v10 == 1 )
  {
    *(_DWORD *)(v5 + 180) = 0;
    v12 = (void *)(v5 + 180);
  }
  else
    if ( v10 >= 0x40000000 )
      sub_DA7414();
    v11 = 4 * v10;
    v12 = operator new(4 * v10);
    _aeabi_memclr4(v12, v11);
  *(_DWORD *)(v5 + 156) = v12;
  EntitlementManager::addEntitlementChangeListener(*(_DWORD *)(v5 + 8), v5);
  return v5;
}


int __fastcall SkinPackCollectionModel::onEntitlementChanged(int result)
{
  *(_DWORD *)(result + 32) = 4;
  return result;
}
