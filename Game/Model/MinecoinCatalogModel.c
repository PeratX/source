

MinecoinCatalogModel *__fastcall MinecoinCatalogModel::~MinecoinCatalogModel(MinecoinCatalogModel *this)
{
  MinecoinCatalogModel *v1; // r4@1
  int v2; // r0@1
  char *v3; // r0@3
  char *v4; // r5@3
  int v5; // r6@4
  int v6; // r5@8
  unsigned int *v7; // r1@9
  unsigned int v8; // r0@11
  unsigned int *v9; // r6@15
  unsigned int v10; // r0@17

  v1 = this;
  v2 = *((_DWORD *)this + 14);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 14) = 0;
  MinecoinModel::~MinecoinModel((MinecoinCatalogModel *)((char *)v1 + 32));
  v4 = (char *)(*(_QWORD *)((char *)v1 + 20) >> 32);
  v3 = (char *)*(_QWORD *)((char *)v1 + 20);
  if ( v3 != v4 )
  {
    do
    {
      v5 = (int)(v3 + 24);
      (**(void (***)(void))v3)();
      v3 = (char *)v5;
    }
    while ( v4 != (char *)v5 );
    v3 = (char *)*((_DWORD *)v1 + 5);
  }
  if ( v3 )
    operator delete(v3);
  v6 = *((_DWORD *)v1 + 3);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return v1;
}


char *__fastcall MinecoinCatalogModel::getMinecoinModel(MinecoinCatalogModel *this, int a2)
{
  __int64 v2; // kr00_8@2
  char *result; // r0@3

  if ( a2 < 0 || (v2 = *(_QWORD *)((char *)this + 20), -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 3) <= a2) )
    result = (char *)this + 32;
  else
    result = (char *)(v2 + 24 * a2);
  return result;
}


int __fastcall MinecoinCatalogModel::MinecoinCatalogModel(int a1, int a2, int a3, Social::UserManager *a4)
{
  int v4; // r4@1
  Social::UserManager *v5; // r6@1
  AppPlatform **v6; // r0@2
  int *v7; // r0@4
  int v8; // r1@4
  int v9; // r0@4
  void *v10; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int v14; // [sp+0h] [bp-30h]@4
  int v15; // [sp+4h] [bp-2Ch]@4
  char v16; // [sp+Bh] [bp-25h]@1
  char v17; // [sp+Ch] [bp-24h]@1

  v4 = a1;
  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = a2;
  v5 = a4;
  v16 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(a1 + 8, (int)&v17, &v16);
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  MinecoinModel::MinecoinModel(v4 + 32);
  *(_DWORD *)(v4 + 56) = 0;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v7 = AppPlatform::getTempPath(*v6);
  sub_DA73B4(&v14, v7);
  sub_DA73D4((const void **)&v14, "/ContentCache/Minecoin/", 0x17u);
  std::make_unique<ContentCatalogService,std::string>(&v15, &v14);
  v8 = v15;
  v15 = 0;
  v9 = *(_DWORD *)(v4 + 56);
  *(_DWORD *)(v4 + 56) = v8;
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  v10 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 4);
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
  ServiceClient::setUserManager(*(ServiceClient **)(v4 + 56), v5);
  return v4;
}


int __fastcall MinecoinCatalogModel::update(MinecoinCatalogModel *this)
{
  MinecoinCatalogModel *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = *((_DWORD *)this + 14);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 8))();
  return *((_DWORD *)v1 + 4);
}


int __fastcall MinecoinCatalogModel::findMinecoinModelBySku(int a1, const void **a2)
{
  int v2; // r4@1
  int v3; // r5@1
  const void **v4; // r10@1
  int result; // r0@1
  unsigned int *v6; // r1@5
  signed int v7; // r0@7
  char *v8; // r6@12
  size_t v9; // r2@12
  char *v10; // r7@12
  signed int v11; // r8@13
  void *s1; // [sp+4h] [bp-2Ch]@12

  v2 = *(_QWORD *)(a1 + 20) >> 32;
  v3 = *(_QWORD *)(a1 + 20);
  v4 = a2;
  result = 0;
  if ( v3 != v2 )
  {
    while ( 1 )
    {
      MinecoinModel::getSku((MinecoinModel *)&s1, v3);
      v8 = (char *)s1;
      v10 = (char *)s1 - 12;
      v9 = *((_DWORD *)s1 - 3);
      if ( v9 == *((_DWORD *)*v4 - 3) )
      {
        v11 = 0;
        if ( !memcmp(s1, *v4, v9) )
          v11 = 1;
      }
      else
      if ( (int *)v10 != &dword_28898C0 )
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
          j_j_j_j_j__ZdlPv_9(v10);
      if ( v11 == 1 )
        break;
      v3 += 24;
      if ( v3 == v2 )
        return 0;
    }
    result = v3;
  }
  return result;
}


SearchQuery *__fastcall MinecoinCatalogModel::fetch(MinecoinCatalogModel *this)
{
  int v1; // r4@1
  __int64 v2; // r6@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  ContentCatalogService *v5; // r5@7
  unsigned int *v6; // r0@8
  unsigned int v7; // r1@10
  _DWORD *v8; // r0@13
  unsigned int *v9; // r1@14
  unsigned int v10; // r2@16
  __int64 v11; // r1@19
  unsigned int *v12; // r5@22
  unsigned int v13; // r0@24
  SearchQuery *result; // r0@26
  _DWORD *v15; // [sp+0h] [bp-50h]@19
  void (*v16)(void); // [sp+8h] [bp-48h]@13
  char v17; // [sp+10h] [bp-40h]@7

  LODWORD(v2) = this;
  *((_DWORD *)this + 4) = 1;
  v1 = *((_QWORD *)this + 1) >> 32;
  HIDWORD(v2) = *((_QWORD *)this + 1);
  if ( v1 )
  {
    v3 = (unsigned int *)(v1 + 8);
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
  v5 = *(ContentCatalogService **)(v2 + 56);
  SearchQuery::SearchQuery((int)&v17, (int *)&CatalogContentType::MinecoinOffer);
    v6 = (unsigned int *)(v1 + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
  v16 = 0;
  v8 = operator new(0xCu);
  *(_QWORD *)v8 = v2;
  v8[2] = v1;
    v9 = (unsigned int *)(v1 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  LODWORD(v11) = sub_CD94E8;
  v15 = v8;
  HIDWORD(v11) = sub_CD84A8;
  *(_QWORD *)&v16 = v11;
  ContentCatalogService::searchCatalog(v5, (int *)&v17, (int)&v15);
  if ( v16 )
    v16();
    v12 = (unsigned int *)(v1 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
    SearchQuery::~SearchQuery((SearchQuery *)&v17);
        result = (SearchQuery *)__ldrex(v12);
      while ( __strex((unsigned int)result - 1, v12) );
      result = (SearchQuery *)(*v12)--;
    if ( result == (SearchQuery *)1 )
      result = (SearchQuery *)(*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  else
    result = SearchQuery::~SearchQuery((SearchQuery *)&v17);
  return result;
}


MinecoinModel *__fastcall MinecoinCatalogModel::_findMinecoinModelByProductId(int a1, const void **a2)
{
  MinecoinModel *v2; // r4@1
  MinecoinModel *v3; // r6@1
  const void **v4; // r5@1
  _DWORD *v5; // r0@2
  size_t v6; // r2@2

  v3 = (MinecoinModel *)(*(_QWORD *)(a1 + 20) >> 32);
  v2 = (MinecoinModel *)*(_QWORD *)(a1 + 20);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_5:
    v2 = 0;
  }
  else
    while ( 1 )
    {
      v5 = *(_DWORD **)MinecoinModel::getProductId(v2);
      v6 = *(v5 - 3);
      if ( v6 == *((_DWORD *)*v4 - 3) && !memcmp(v5, *v4, v6) )
        break;
      v2 = (MinecoinModel *)((char *)v2 + 24);
      if ( v3 == v2 )
        goto LABEL_5;
    }
  return v2;
}
