

char *__fastcall ContentCatalogService::getCacheLocation(ContentCatalogService *this)
{
  return (char *)this + 40;
}


void __fastcall ContentCatalogService::~ContentCatalogService(ContentCatalogService *this)
{
  ContentCatalogService::~ContentCatalogService(this);
}


ContentCatalogService *__fastcall ContentCatalogService::~ContentCatalogService(ContentCatalogService *this)
{
  ContentCatalogService *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r1@15
  void *v8; // r0@15
  int v9; // r1@16
  void *v10; // r0@16
  int v11; // r1@17
  void *v12; // r0@17
  int v13; // r1@18
  void *v14; // r0@18
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34

  v1 = this;
  *(_DWORD *)this = &off_26DCF64;
  v2 = *((_DWORD *)this + 17);
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
  v7 = *((_DWORD *)v1 + 14);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v7 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = *((_DWORD *)v1 + 12);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v9 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = *((_DWORD *)v1 + 11);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v11 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = *((_DWORD *)v1 + 10);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v13 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  ServiceClient::~ServiceClient(v1);
  return v1;
}


int __fastcall ContentCatalogService::fetchFileData(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int *v7; // r5@8
  int v8; // r4@15
  unsigned int *v9; // r1@16
  unsigned int *v10; // r5@22
  int v11; // [sp+Ch] [bp-24h]@1
  int v12; // [sp+10h] [bp-20h]@1
  int v13; // [sp+14h] [bp-1Ch]@1
  int v14; // [sp+18h] [bp-18h]@1
  char v15; // [sp+1Ch] [bp-14h]@1

  v3 = a1;
  j__ZNSt12__shared_ptrI15FileDataRequestLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR21ContentCatalogServiceRKSsS9_RSt8functionIFvS9_EEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v11,
    (int)&v15,
    a1,
    a2,
    (int *)(a1 + 40),
    a3);
  v13 = v11;
  v14 = v12;
  v11 = 0;
  v12 = 0;
  result = ServiceClient::_submitRequest(v3, (int)&v13);
  v5 = v14;
  if ( v14 )
  {
    v6 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  v8 = v12;
  if ( v12 )
    v9 = (unsigned int *)(v12 + 4);
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
        result = (*v10)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


int __fastcall ContentCatalogService::fetchImageData(ContentCatalogService *a1, int *a2, int a3)
{
  ContentCatalogService *v3; // r4@1
  int result; // r0@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int *v7; // r5@8
  int v8; // r4@15
  unsigned int *v9; // r1@16
  unsigned int *v10; // r5@22
  int v11; // [sp+4h] [bp-24h]@1
  int v12; // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  int v14; // [sp+10h] [bp-18h]@1
  char v15; // [sp+14h] [bp-14h]@1

  v3 = a1;
  std::__shared_ptr<FileImageRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<FileImageRequest>,ContentCatalogService &,FetchImageParams const&,std::function<void ()(std::string const&)> &>(
    (int)&v11,
    (int)&v15,
    a1,
    a2,
    a3);
  v13 = v11;
  v14 = v12;
  v11 = 0;
  v12 = 0;
  result = ServiceClient::_submitRequest((int)v3, (int)&v13);
  v5 = v14;
  if ( v14 )
  {
    v6 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  v8 = v12;
  if ( v12 )
    v9 = (unsigned int *)(v12 + 4);
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
        result = (*v10)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


int __fastcall ContentCatalogService::searchCatalog(ContentCatalogService *a1, int *a2, int a3)
{
  ContentCatalogService *v3; // r4@1
  int result; // r0@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int *v7; // r5@8
  int v8; // r4@15
  unsigned int *v9; // r1@16
  unsigned int *v10; // r5@22
  int v11; // [sp+4h] [bp-24h]@1
  int v12; // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  int v14; // [sp+10h] [bp-18h]@1
  char v15; // [sp+14h] [bp-14h]@1

  v3 = a1;
  std::__shared_ptr<SearchCatalogRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<SearchCatalogRequest>,ContentCatalogService &,SearchQuery const&,std::function<void ()(SearchResponse const&)> &>(
    (int)&v11,
    (int)&v15,
    a1,
    a2,
    a3);
  v13 = v11;
  v14 = v12;
  v11 = 0;
  v12 = 0;
  result = ServiceClient::_submitRequest((int)v3, (int)&v13);
  v5 = v14;
  if ( v14 )
  {
    v6 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  v8 = v12;
  if ( v12 )
    v9 = (unsigned int *)(v12 + 4);
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
        result = (*v10)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


void __fastcall ContentCatalogService::deployPreCachePackage(int a1, int *a2)
{
  int *v2; // r7@1
  int v3; // r5@1
  __int64 v4; // kr00_8@2
  unsigned int *v5; // r0@3
  unsigned int v6; // r1@5
  int v7; // r6@8
  int *v8; // r0@8
  int *v9; // r7@8
  unsigned int *v10; // r0@9
  unsigned int v11; // r1@11
  void *v12; // r0@14
  unsigned int *v13; // r1@15
  unsigned int v14; // r2@17
  __int64 v15; // r1@20
  unsigned int *v16; // r1@23
  unsigned int v17; // r0@25
  char *v18; // r0@32
  void *v19; // r0@33
  void *v20; // r0@34
  unsigned int *v21; // r1@36
  unsigned int v22; // r0@38
  unsigned int *v23; // r2@44
  signed int v24; // r1@46
  unsigned int *v25; // r2@48
  signed int v26; // r1@50
  unsigned int *v27; // r2@52
  signed int v28; // r1@54
  void *v29; // [sp+8h] [bp-50h]@20
  void (*v30)(void); // [sp+10h] [bp-48h]@14
  int v31; // [sp+18h] [bp-40h]@8
  char *v32; // [sp+1Ch] [bp-3Ch]@8
  int *v33; // [sp+20h] [bp-38h]@8
  void (*v34)(void); // [sp+28h] [bp-30h]@8
  signed int (__fastcall *v35)(unsigned __int64 **); // [sp+2Ch] [bp-2Ch]@8
  int v36; // [sp+30h] [bp-28h]@8
  int v37; // [sp+34h] [bp-24h]@1
  int v38; // [sp+38h] [bp-20h]@1

  v2 = a2;
  v3 = a1;
  v37 = *a2;
  v38 = *(_DWORD *)(v37 - 12);
  if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v37) == 1 )
  {
    v4 = *(_QWORD *)(v3 + 64);
    if ( HIDWORD(v4) )
    {
      v5 = (unsigned int *)(HIDWORD(v4) + 8);
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
    *(_DWORD *)(v3 + 60) = 1;
    sub_119C854(&v36, (int *)(v3 + 40));
    v7 = TaskGroup::DISK;
    v8 = sub_119C854(&v31, v2);
    sub_119C854(v8 + 1, &v36);
    v34 = 0;
    v9 = (int *)operator new(8u);
    sub_119C854(v9, &v31);
    v9[1] = (int)v32;
    v32 = (char *)&unk_28898CC;
    v33 = v9;
    v34 = (void (*)(void))sub_F5A8E4;
    v35 = sub_F5A3EC;
      v10 = (unsigned int *)(HIDWORD(v4) + 8);
          v11 = __ldrex(v10);
        while ( __strex(v11 + 1, v10) );
        ++*v10;
    v30 = 0;
    v12 = operator new(0xCu);
    *(_DWORD *)v12 = v3;
    *(_QWORD *)((char *)v12 + 4) = v4;
      v13 = (unsigned int *)(HIDWORD(v4) + 8);
          v14 = __ldrex(v13);
        while ( __strex(v14 + 1, v13) );
        ++*v13;
    LODWORD(v15) = sub_F5AA3C;
    v29 = v12;
    HIDWORD(v15) = sub_F5AA24;
    *(_QWORD *)&v30 = v15;
    TaskGroup::queue(v7, (int)&v33, (int)&v29, 1u, 0xFFFFFFFF);
    if ( v30 )
      v30();
      v16 = (unsigned int *)(HIDWORD(v4) + 8);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
    if ( v34 )
      v34();
    v18 = v32 - 12;
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v32 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    v19 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v31 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    v20 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v36 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
      v21 = (unsigned int *)(HIDWORD(v4) + 8);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
  }
}


int __fastcall ContentCatalogService::update(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(result + 60);
  if ( v1 == 1 )
    JUMPOUT(0, ContentCatalogService::fetchFileSize);
  else
    result = (int)j_j_j__ZN13ServiceClient6updateEv((ServiceClient *)result);
  return result;
}


char *__fastcall ContentCatalogService::getPlatformOverride(ContentCatalogService *this)
{
  return (char *)this + 56;
}


int __fastcall ContentCatalogService::hydrateItem(ContentCatalogService *a1, int *a2, int a3)
{
  ContentCatalogService *v3; // r4@1
  int result; // r0@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int *v7; // r5@8
  int v8; // r4@15
  unsigned int *v9; // r1@16
  unsigned int *v10; // r5@22
  int v11; // [sp+4h] [bp-24h]@1
  int v12; // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  int v14; // [sp+10h] [bp-18h]@1
  char v15; // [sp+14h] [bp-14h]@1

  v3 = a1;
  std::__shared_ptr<HydrateItemRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<HydrateItemRequest>,ContentCatalogService &,HydrateParams const&,std::function<void ()(HydrateResponse const&)> &>(
    (int)&v11,
    (int)&v15,
    a1,
    a2,
    a3);
  v13 = v11;
  v14 = v12;
  v11 = 0;
  v12 = 0;
  result = ServiceClient::_submitRequest((int)v3, (int)&v13);
  v5 = v14;
  if ( v14 )
  {
    v6 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  v8 = v12;
  if ( v12 )
    v9 = (unsigned int *)(v12 + 4);
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
        result = (*v10)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


void __fastcall ContentCatalogService::~ContentCatalogService(ContentCatalogService *this)
{
  ContentCatalogService *v1; // r0@1

  v1 = ContentCatalogService::~ContentCatalogService(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall ContentCatalogService::fetchFileSize(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int *v7; // r5@8
  int v8; // r4@15
  unsigned int *v9; // r1@16
  unsigned int *v10; // r5@22
  int v11; // [sp+4h] [bp-24h]@1
  int v12; // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  int v14; // [sp+10h] [bp-18h]@1
  char v15; // [sp+14h] [bp-14h]@1

  v3 = a1;
  std::__shared_ptr<FileSizeRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<FileSizeRequest>,ContentCatalogService &,std::string const&,std::function<void ()(unsigned long long)> &>(
    (int)&v11,
    (int)&v15,
    a1,
    a2,
    a3);
  v13 = v11;
  v14 = v12;
  v11 = 0;
  v12 = 0;
  result = ServiceClient::_submitRequest(v3, (int)&v13);
  v5 = v14;
  if ( v14 )
  {
    v6 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  v8 = v12;
  if ( v12 )
    v9 = (unsigned int *)(v12 + 4);
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
        result = (*v10)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


char *__fastcall ContentCatalogService::getCreationDateLimitOverride(ContentCatalogService *this)
{
  return (char *)this + 48;
}


int __fastcall ContentCatalogService::ContentCatalogService(int a1, int *a2, int *a3)
{
  int *v3; // r7@1
  int *v4; // r6@1
  int v5; // r4@1
  int v6; // r7@1
  void *v7; // r0@1
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int v11; // [sp+0h] [bp-50h]@3
  int v12; // [sp+4h] [bp-4Ch]@3
  char v13; // [sp+8h] [bp-48h]@3
  void (*v14)(void); // [sp+10h] [bp-40h]@3
  int v15; // [sp+1Ch] [bp-34h]@1
  char v16; // [sp+23h] [bp-2Dh]@1
  char v17; // [sp+24h] [bp-2Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  ServiceClient::ServiceClient(a1, 0, 0);
  *(_DWORD *)v5 = &off_26DCF64;
  sub_119C854((int *)(v5 + 40), v4);
  sub_119C854((int *)(v5 + 44), v3);
  *(_DWORD *)(v5 + 48) = &unk_28898CC;
  v6 = v5 + 48;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = &unk_28898CC;
  *(_DWORD *)(v6 + 12) = 0;
  v16 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(v5 + 64, (int)&v17, &v16);
  *(_DWORD *)(v5 + 52) = 43200;
  sub_119C854(&v15, (int *)&Util::EMPTY_STRING);
  EntityInteraction::setInteractText((int *)(v5 + 48), &v15);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v15 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  if ( *(_DWORD *)(*v4 - 12) )
    v11 = *(_DWORD *)(v5 + 40);
    v12 = *(_DWORD *)(v11 - 12);
    Core::FileSystem::createDirectoryRecursively((int)&v13, (__int64 *)&v11);
    if ( v14 )
      v14();
  return v5;
}


int __fastcall ContentCatalogService::setLocalCacheSearchMaxAge(int result, int a2)
{
  *(_DWORD *)(result + 52) = 3600 * a2;
  return result;
}


char *__fastcall ContentCatalogService::getHostUrl(ContentCatalogService *this)
{
  return (char *)this + 44;
}
