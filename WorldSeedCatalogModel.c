

signed int __fastcall WorldSeedCatalogModel::update(WorldSeedCatalogModel *this)
{
  WorldSeedCatalogModel *v1; // r4@1
  int v2; // r0@1
  signed int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 11);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 8))();
  result = 0;
  if ( *((_BYTE *)v1 + 56) )
  {
    *((_BYTE *)v1 + 56) = 0;
    result = 1;
  }
  return result;
}


int __fastcall WorldSeedCatalogModel::WorldSeedCatalogModel(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  char v4; // [sp+7h] [bp-31h]@1
  char v5; // [sp+10h] [bp-28h]@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  WorldSeedModel::WorldSeedModel((WorldSeedModel *)(a1 + 12));
  *(_DWORD *)(v1 + 28) = &unk_28898CC;
  *(_DWORD *)(v1 + 32) = 0;
  v2 = v1 + 32;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  v4 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(v1 + 48, (int)&v5, &v4);
  *(_BYTE *)(v1 + 56) = 0;
  return v1;
}


WorldSeedCatalogModel *__fastcall WorldSeedCatalogModel::~WorldSeedCatalogModel(WorldSeedCatalogModel *this)
{
  WorldSeedCatalogModel *v1; // r10@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r0@15
  int v8; // r5@17
  int v9; // r7@17
  unsigned int *v10; // r2@19
  signed int v11; // r1@21
  int v12; // r1@27
  void *v13; // r0@27
  int v14; // r1@32
  void *v15; // r0@32
  WorldSeedModel *v16; // r0@33
  WorldSeedModel *v17; // r5@33
  unsigned int *v19; // r2@39
  signed int v20; // r1@41

  v1 = this;
  v2 = *((_DWORD *)this + 13);
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
  v7 = *((_DWORD *)v1 + 11);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  *((_DWORD *)v1 + 11) = 0;
  v9 = *((_QWORD *)v1 + 4) >> 32;
  v8 = *((_QWORD *)v1 + 4);
  if ( v8 != v9 )
    do
      v12 = *(_DWORD *)(v8 + 8);
      v13 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
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
          j_j_j_j_j__ZdlPv_9(v13);
      v8 += 12;
    while ( v8 != v9 );
    v8 = *((_DWORD *)v1 + 8);
  if ( v8 )
    operator delete((void *)v8);
  v14 = *((_DWORD *)v1 + 7);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v14 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  WorldSeedModel::~WorldSeedModel((WorldSeedCatalogModel *)((char *)v1 + 12));
  v17 = (WorldSeedModel *)(*(_QWORD *)v1 >> 32);
  v16 = (WorldSeedModel *)*(_QWORD *)v1;
  if ( v16 != v17 )
      v16 = (WorldSeedModel *)((char *)WorldSeedModel::~WorldSeedModel(v16) + 16);
    while ( v17 != v16 );
    v16 = *(WorldSeedModel **)v1;
  if ( v16 )
    operator delete((void *)v16);
  return v1;
}


int __fastcall WorldSeedCatalogModel::setup(WorldSeedCatalogModel *this, MinecraftEventing *a2)
{
  WorldSeedCatalogModel *v2; // r5@1
  MinecraftEventing *v3; // r4@1
  AppPlatform **v4; // r0@2
  int *v5; // r0@4
  int *v6; // r0@4
  int v7; // r1@4
  int v8; // r0@4
  void *v9; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+4h] [bp-24h]@4
  int v14; // [sp+8h] [bp-20h]@4

  v2 = this;
  v3 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v5 = AppPlatform::getTempPath(*v4);
  v6 = sub_DA73B4(&v13, v5);
  sub_DA73D4((const void **)v6, "/ContentCache/WorldSeeds/", 0x19u);
  std::make_unique<ContentCatalogService,std::string>(&v14, &v13);
  v7 = v14;
  v14 = 0;
  v8 = *((_DWORD *)v2 + 11);
  *((_DWORD *)v2 + 11) = v7;
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  v9 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
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
      j_j_j_j_j__ZdlPv_9(v9);
  }
  return ServiceClient::setEventing(*((ServiceClient **)v2 + 11), v3);
}


void __fastcall WorldSeedCatalogModel::setWorldSeedsNameFilter(int a1, unsigned int *a2)
{
  WorldSeedCatalogModel::setWorldSeedsNameFilter(a1, a2);
}


void __fastcall WorldSeedCatalogModel::setWorldSeedsNameFilter(int a1, unsigned int *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r0@1
  char *v4; // r5@1
  size_t v5; // r2@1
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  void *s2; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  Util::toLower(&s2, *(_DWORD *)(*a2 - 12), *a2);
  v3 = *(_DWORD **)(v2 + 28);
  v4 = (char *)s2;
  v5 = *(v3 - 3);
  if ( v5 != *((_DWORD *)s2 - 3) || memcmp(v3, s2, v5) )
  {
    EntityInteraction::setInteractText((int *)(v2 + 28), (int *)&s2);
    WorldSeedCatalogModel::_filterWorldSeedModels((WorldSeedCatalogModel *)v2);
    v4 = (char *)s2;
  }
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v4 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4 - 12);
}


signed int __fastcall WorldSeedCatalogModel::_filterWorldSeedModels(WorldSeedCatalogModel *this)
{
  WorldSeedCatalogModel *v1; // r10@1
  unsigned __int64 *v2; // r4@1
  int v3; // r11@1
  int v4; // r7@1
  int v5; // r5@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // r1@11
  void *v9; // r0@11
  __int64 v10; // r0@13
  int v11; // r5@15
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r0@32
  unsigned int v17; // r0@32
  __int64 v18; // r0@33
  char *v19; // r1@34
  char *v20; // r0@36
  void *v21; // r0@37
  int v22; // r8@41
  unsigned int *v23; // r2@42
  signed int v24; // r1@44
  int *v25; // r0@50
  __int64 v26; // r0@50
  char *v27; // r1@51
  char *v28; // r0@53
  int v29; // r5@55 OVERLAPPED
  int v30; // r6@55 OVERLAPPED
  unsigned __int64 *v31; // r7@57
  int v32; // r8@58
  bool v33; // zf@59
  signed int result; // r0@63
  int v35; // [sp+0h] [bp-48h]@33
  unsigned int v36; // [sp+4h] [bp-44h]@33
  char *v37; // [sp+8h] [bp-40h]@33
  int v38; // [sp+Ch] [bp-3Ch]@16
  int v39; // [sp+10h] [bp-38h]@50
  int v40; // [sp+14h] [bp-34h]@50
  char *v41; // [sp+18h] [bp-30h]@50

  v1 = this;
  v2 = (unsigned __int64 *)((char *)this + 32);
  v3 = *((_DWORD *)this + 8);
  v4 = *((_DWORD *)this + 9);
  if ( v4 != v3 )
  {
    v5 = *((_DWORD *)this + 8);
    do
    {
      v8 = *(_DWORD *)(v5 + 8);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v8 - 4);
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
          j_j_j_j_j__ZdlPv_9(v9);
      }
      v5 += 12;
    }
    while ( v5 != v4 );
  }
  *((_DWORD *)v1 + 9) = v3;
  v10 = *(_QWORD *)v1;
  HIDWORD(v10) -= v10;
  if ( *(_DWORD *)(*((_DWORD *)v1 + 7) - 12) )
    if ( SHIDWORD(v10) >= 1 )
      v11 = 0;
      do
        v16 = (unsigned int *)WorldSeedModel::getTitle((WorldSeedModel *)(v10 + 16 * v11));
        Util::toLower((void **)&v38, *(_DWORD *)(*v16 - 12), *v16);
        v17 = sub_DA7BFC(&v38, *((_BYTE **)v1 + 7), 0, *(_DWORD *)(*((_DWORD *)v1 + 7) - 12));
        if ( v17 != -1 )
          v35 = v11;
          v36 = v17;
          sub_DA73B4((int *)&v37, &v38);
          v18 = *(_QWORD *)((char *)v1 + 36);
          if ( (_DWORD)v18 == HIDWORD(v18) )
          {
            std::vector<WorldSeedCatalogModel::WorldSeedFilteredLookup,std::allocator<WorldSeedCatalogModel::WorldSeedFilteredLookup>>::_M_emplace_back_aux<WorldSeedCatalogModel::WorldSeedFilteredLookup>(
              v2,
              (int)&v35);
            v19 = v37;
          }
          else
            *(_QWORD *)v18 = *(_QWORD *)&v35;
            *(_DWORD *)(v18 + 8) = v37;
            v19 = (char *)&unk_28898CC;
            v37 = (char *)&unk_28898CC;
            *((_DWORD *)v1 + 9) += 12;
          v20 = v19 - 12;
          if ( (int *)(v19 - 12) != &dword_28898C0 )
            v14 = (unsigned int *)(v19 - 4);
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
              j_j_j_j_j__ZdlPv_9(v20);
        v21 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v38 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j_j__ZdlPv_9(v21);
        v10 = *(_QWORD *)v1;
        ++v11;
      while ( v11 < (HIDWORD(v10) - (signed int)v10) >> 4 );
  else if ( SHIDWORD(v10) >= 1 )
    v22 = 0;
      v39 = v22;
      v40 = 0;
      v25 = (int *)WorldSeedModel::getTitle((WorldSeedModel *)(v10 + 16 * v22));
      sub_DA73B4((int *)&v41, v25);
      v26 = *(_QWORD *)((char *)v1 + 36);
      if ( (_DWORD)v26 == HIDWORD(v26) )
        std::vector<WorldSeedCatalogModel::WorldSeedFilteredLookup,std::allocator<WorldSeedCatalogModel::WorldSeedFilteredLookup>>::_M_emplace_back_aux<WorldSeedCatalogModel::WorldSeedFilteredLookup>(
          v2,
          (int)&v39);
        v27 = v41;
      else
        *(_QWORD *)v26 = *(_QWORD *)&v39;
        *(_DWORD *)(v26 + 8) = v41;
        v27 = (char *)&unk_28898CC;
        v41 = (char *)&unk_28898CC;
        *((_DWORD *)v1 + 9) += 12;
      v28 = v27 - 12;
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v27 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j_j__ZdlPv_9(v28);
      v10 = *(_QWORD *)v1;
      ++v22;
    while ( v22 < (HIDWORD(v10) - (signed int)v10) >> 4 );
  *(_QWORD *)&v29 = *((_QWORD *)v1 + 4);
  if ( v29 != v30 )
    sub_CFD7C0(v29, v30, 2 * (31 - __clz(-1431655765 * ((v30 - v29) >> 2))), 0);
    if ( v30 - v29 < 193 )
      sub_CFDFBC(v29, (unsigned __int64 *)v30);
    else
      v31 = (unsigned __int64 *)(v29 + 192);
      sub_CFDFBC(v29, (unsigned __int64 *)(v29 + 192));
      if ( v29 + 192 != v30 )
        v32 = v30 - 192;
        do
          v30 &= 0xFFFFFF00;
          sub_CFE15C(v31);
          v31 = (unsigned __int64 *)(v29 + 204);
          v33 = v32 == v29 + 12;
          v29 += 12;
        while ( !v33 );
  result = 1;
  *((_BYTE *)v1 + 56) = 1;
  return result;
}


SearchQuery *__fastcall WorldSeedCatalogModel::fetch(WorldSeedCatalogModel *this)
{
  WorldSeedCatalogModel *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  I18n *v5; // r0@7
  int v6; // r0@7
  void *v7; // r0@7
  ContentCatalogService *v8; // r6@8
  unsigned int *v9; // r0@9
  unsigned int v10; // r1@11
  void *v11; // r0@14
  unsigned int *v12; // r1@15
  unsigned int v13; // r2@17
  __int64 v14; // r1@20
  unsigned int *v15; // r5@23
  unsigned int v16; // r0@25
  SearchQuery *result; // r0@27
  unsigned int *v18; // r2@39
  signed int v19; // r1@41
  void *v20; // [sp+0h] [bp-58h]@20
  void (*v21)(void); // [sp+8h] [bp-50h]@14
  int v22; // [sp+10h] [bp-48h]@7
  int v23[11]; // [sp+14h] [bp-44h]@7

  v1 = this;
  v2 = *((_QWORD *)this + 6);
  if ( HIDWORD(v2) )
  {
    v3 = (unsigned int *)(HIDWORD(v2) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  v5 = (I18n *)SearchQuery::SearchQuery((int)v23, (int *)&CatalogContentType::WorldSeed);
  v6 = I18n::getCurrentLanguage(v5);
  Localization::getFullLanguageCode((Localization *)&v22, v6);
  SearchQuery::setAcceptLanguage((char *)v23, &v22);
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = (ContentCatalogService *)*((_DWORD *)v1 + 11);
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  v21 = 0;
  v11 = operator new(0xCu);
  *(_DWORD *)v11 = v1;
  *(_QWORD *)((char *)v11 + 4) = v2;
    v12 = (unsigned int *)(HIDWORD(v2) + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  LODWORD(v14) = sub_CFD1C8;
  v20 = v11;
  HIDWORD(v14) = sub_CFCD0C;
  *(_QWORD *)&v21 = v14;
  ContentCatalogService::searchCatalog(v8, v23, (int)&v20);
  if ( v21 )
    v21();
    v15 = (unsigned int *)(HIDWORD(v2) + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
    SearchQuery::~SearchQuery((SearchQuery *)v23);
        result = (SearchQuery *)__ldrex(v15);
      while ( __strex((unsigned int)result - 1, v15) );
      result = (SearchQuery *)(*v15)--;
    if ( result == (SearchQuery *)1 )
      result = (SearchQuery *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  else
    result = SearchQuery::~SearchQuery((SearchQuery *)v23);
  return result;
}


char *__fastcall WorldSeedCatalogModel::getWorldSeedModel(WorldSeedCatalogModel *this, int a2)
{
  __int64 v2; // kr00_8@2
  char *result; // r0@3

  if ( a2 < 0 || (v2 = *((_QWORD *)this + 4), -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2) <= a2) )
    result = (char *)this + 12;
  else
    result = (char *)(*(_DWORD *)this + 16 * *(_DWORD *)(v2 + 12 * a2));
  return result;
}


WorldSeedModel *__fastcall WorldSeedCatalogModel::_findWorldSeedModelByProductId(unsigned __int64 *a1, const void **a2)
{
  WorldSeedModel *v2; // r4@1
  WorldSeedModel *v3; // r6@1
  const void **v4; // r5@1
  _DWORD *v5; // r0@2
  size_t v6; // r2@2

  v3 = (WorldSeedModel *)(*a1 >> 32);
  v2 = (WorldSeedModel *)*a1;
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_5:
    v2 = 0;
  }
  else
    while ( 1 )
    {
      v5 = *(_DWORD **)WorldSeedModel::getProductId(v2);
      v6 = *(v5 - 3);
      if ( v6 == *((_DWORD *)*v4 - 3) && !memcmp(v5, *v4, v6) )
        break;
      v2 = (WorldSeedModel *)((char *)v2 + 16);
      if ( v3 == v2 )
        goto LABEL_5;
    }
  return v2;
}
