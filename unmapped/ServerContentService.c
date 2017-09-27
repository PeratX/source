

void __fastcall ServerContentService::~ServerContentService(ServerContentService *this)
{
  ServiceClient *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26DE790;
  v2 = *((_DWORD *)this + 10);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  ServiceClient::~ServiceClient(v1);
  operator delete((void *)v1);
}


int __fastcall ServerContentService::fetchImageData(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r6@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r0@4
  unsigned int *v8; // r7@8
  unsigned int v9; // r0@10
  void *v10; // r0@15
  unsigned int *v11; // r0@17
  unsigned int v12; // r1@19
  int result; // r0@22
  int v14; // r4@22
  unsigned int *v15; // r1@23
  unsigned int *v16; // r5@29
  int v17; // r4@36
  unsigned int *v18; // r1@37
  unsigned int *v19; // r5@43
  unsigned int *v20; // r2@51
  signed int v21; // r1@53
  int v22; // [sp+Ch] [bp-3Ch]@16
  int v23; // [sp+10h] [bp-38h]@16
  char v24; // [sp+14h] [bp-34h]@1
  int v25; // [sp+18h] [bp-30h]@16
  int v26; // [sp+1Ch] [bp-2Ch]@15
  int v27; // [sp+24h] [bp-24h]@1
  int v28; // [sp+28h] [bp-20h]@1
  int v29; // [sp+2Ch] [bp-1Ch]@16
  char v30; // [sp+30h] [bp-18h]@1

  v3 = a1;
  std::__shared_ptr<FileDataRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<FileDataRequest>,ServerContentService &,std::string const&,std::string &,std::function<void ()(std::string &)> &>(
    (int)&v28,
    (int)&v30,
    a1,
    a2,
    (int *)(a1 + 40),
    a3);
  v4 = v28;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex<char const*>((int)&v24, "image/.*", "", 16);
  FileDataRequest::addRequiredContentType(v4, &v24);
  v5 = v27;
  if ( v27 )
  {
    v6 = (unsigned int *)(v27 + 4);
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
  v10 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v26 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C954((unsigned int **)&v25);
  v22 = v28;
  v23 = v29;
  if ( v29 )
    v11 = (unsigned int *)(v29 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  result = ServiceClient::_submitRequest(v3, (int)&v22);
  v14 = v23;
  if ( v23 )
    v15 = (unsigned int *)(v23 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
    if ( result == 1 )
      v16 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
        result = (*v16)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v17 = v29;
    v18 = (unsigned int *)(v29 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
        result = (*v19)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return result;
}


int __fastcall ServerContentService::ServerContentService(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v5; // [sp+4h] [bp-44Ch]@2
  int v6; // [sp+8h] [bp-448h]@2
  char v7; // [sp+Ch] [bp-444h]@2
  void (*v8)(void); // [sp+14h] [bp-43Ch]@2
  int v9; // [sp+20h] [bp-430h]@1
  int v10; // [sp+24h] [bp-42Ch]@1
  char v11; // [sp+30h] [bp-420h]@1
  int v12; // [sp+34h] [bp-41Ch]@1
  RakNet *v13; // [sp+438h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v13 = _stack_chk_guard;
  ServiceClient::ServiceClient(a1, 0, 0);
  *(_DWORD *)v2 = &off_26DE790;
  v9 = *v3;
  v10 = *(_DWORD *)(v9 - 12);
  File::cleanPath((int)&v11, (__int64 *)&v9);
  sub_119C884((void **)(v2 + 40), (const char *)&v12);
  if ( *(_DWORD *)(*v3 - 12) )
  {
    v5 = *(_DWORD *)(v2 + 40);
    v6 = *(_DWORD *)(v5 - 12);
    Core::FileSystem::createDirectoryRecursively((int)&v7, (__int64 *)&v5);
    if ( v8 )
      v8();
  }
  if ( _stack_chk_guard != v13 )
    _stack_chk_fail(_stack_chk_guard - v13);
  return v2;
}


ServiceClient *__fastcall ServerContentService::~ServerContentService(ServerContentService *this)
{
  ServiceClient *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26DE790;
  v2 = *((_DWORD *)this + 10);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  ServiceClient::~ServiceClient(v1);
  return v1;
}


void __fastcall ServerContentService::~ServerContentService(ServerContentService *this)
{
  ServerContentService::~ServerContentService(this);
}
