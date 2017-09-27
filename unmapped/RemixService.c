

int __fastcall RemixService::_onFileUploadStarted(int a1, int a2, __int64 a3)
{
  int result; // r0@1
  double v4; // [sp+0h] [bp-20h]@0

  result = *(_DWORD *)(a1 + 12);
  if ( result )
  {
    LODWORD(v4) = a2;
    result = MinecraftEventing::fireEventFileTransmissionState(result, 1, 1, 3, v4, a3, 0LL);
  }
  return result;
}


signed int __fastcall RemixService::hasLoadedFilters(RemixService *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 8);
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


int __fastcall RemixService::_requestFilePublish(const RemixService *a1, int a2, const RemixFilePublishRequest::Params *a3, int a4)
{
  int v4; // r6@1
  const RemixService *v5; // r4@1
  int v6; // r5@1
  void *v7; // r0@1
  int result; // r0@2
  int v9; // r4@2
  unsigned int *v10; // r1@3
  unsigned int *v11; // r5@9
  int v12; // r4@16
  unsigned int *v13; // r1@17
  unsigned int *v14; // r5@23
  unsigned int *v15; // r2@31
  signed int v16; // r1@33
  int v17; // [sp+8h] [bp-28h]@2
  int v18; // [sp+Ch] [bp-24h]@2
  int v19; // [sp+10h] [bp-20h]@1
  int v20; // [sp+14h] [bp-1Ch]@1
  int v21; // [sp+18h] [bp-18h]@2
  char v22; // [sp+1Ch] [bp-14h]@1

  v4 = a2;
  v5 = a1;
  std::__shared_ptr<RemixFilePublishRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RemixFilePublishRequest>,RemixService &,RemixFilePublishRequest::Params const&,std::function<void ()(RemixRequest::Result,RemixFilePublishRequest::Response)> &>(
    (int)&v20,
    (int)&v22,
    a1,
    a3,
    a4);
  v6 = v20;
  RemixCorrelationVector::incrementAndGet((RemixCorrelationVector *)&v19, v4);
  RemixRequest::setCorrelationVector(v6, &v19);
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v17 = v20;
  v18 = v21;
  v20 = 0;
  v21 = 0;
  result = ServiceClient::_submitRequest((int)v5, (int)&v17);
  v9 = v18;
  if ( v18 )
    v10 = (unsigned int *)(v18 + 4);
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
      result = (*v10)--;
    if ( result == 1 )
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
      }
      else
        result = (*v11)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
        result = (*v14)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return result;
}


int __fastcall RemixService::getMinecraftFilter(int a1, _BYTE **a2)
{
  int v2; // r8@1
  _BYTE **v3; // r6@1
  int v4; // r4@1
  int v5; // r7@1

  v2 = a1;
  v3 = a2;
  v5 = *(_QWORD *)(a1 + 64) >> 32;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 != v5 )
  {
    while ( sub_119CA58((int *)(v4 + 12), "minecraft", 0, 9u) == -1
         || sub_119CA58((int *)(v4 + 12), *v3, 0, *((_DWORD *)*v3 - 3)) == -1 )
    {
      v4 += 20;
      if ( v5 == v4 )
        return *(_DWORD *)(v2 + 64);
    }
  }
  return v4;
}


int __fastcall RemixService::_onRemixAccountCreated(RemixService *this, int a2)
{
  int result; // r0@1

  result = *((_DWORD *)this + 3);
  if ( result )
    result = j_j_j__ZN17MinecraftEventing29fireRemixAccountCreationEventENS_21AuthenticationOutcomeE(result, a2 ^ 1);
  return result;
}


void __fastcall RemixService::~RemixService(RemixService *this)
{
  RemixService::~RemixService(this);
}


int __fastcall RemixService::_onFileUploadCompleted(int a1, int a2, double a3, int a4, int a5, int a6)
{
  int result; // r0@1
  signed int v11; // r12@2
  double v12; // [sp+0h] [bp-20h]@0
  __int64 v13; // [sp+10h] [bp-10h]@0

  result = *(_DWORD *)(a1 + 12);
  if ( result )
  {
    __asm { VMOV.F64        D0, #1.0 }
    v11 = a4;
    __asm { VLDR            D1, =0.0 }
    if ( !_ZF )
      __asm { VMOVNE.F64      D1, D0 }
    LODWORD(v12) = a2;
    __asm { VSTR            D1, [SP,#0x20+var_10] }
      v11 = 2;
    result = MinecraftEventing::fireEventFileTransmissionState(result, 1, v11, 3, v12, *(__int64 *)&a3, v13);
  }
  return result;
}


char *__fastcall RemixService::getAPIEndpoint(RemixService *this)
{
  return (char *)this + 56;
}


int __fastcall RemixService::_requestUserSignup(const RemixService *a1, int a2, int a3)
{
  int v3; // r6@1
  const RemixService *v4; // r4@1
  int v5; // r5@1
  void *v6; // r0@1
  int result; // r0@2
  int v8; // r4@2
  unsigned int *v9; // r1@3
  unsigned int *v10; // r5@9
  int v11; // r4@16
  unsigned int *v12; // r1@17
  unsigned int *v13; // r5@23
  unsigned int *v14; // r2@31
  signed int v15; // r1@33
  int v16; // [sp+0h] [bp-28h]@2
  int v17; // [sp+4h] [bp-24h]@2
  int v18; // [sp+8h] [bp-20h]@1
  int v19; // [sp+Ch] [bp-1Ch]@1
  int v20; // [sp+10h] [bp-18h]@2
  char v21; // [sp+14h] [bp-14h]@1

  v3 = a2;
  v4 = a1;
  std::__shared_ptr<RemixSignupRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RemixSignupRequest>,RemixService &,std::function<void ()(RemixRequest::Result,RemixSignupRequest::Response)> &>(
    (int)&v19,
    (int)&v21,
    a1,
    a3);
  v5 = v19;
  RemixCorrelationVector::incrementAndGet((RemixCorrelationVector *)&v18, v3);
  RemixRequest::setCorrelationVector(v5, &v18);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v18 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v16 = v19;
  v17 = v20;
  v19 = 0;
  v20 = 0;
  result = ServiceClient::_submitRequest((int)v4, (int)&v16);
  v8 = v17;
  if ( v17 )
    v9 = (unsigned int *)(v17 + 4);
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
        result = (*v13)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  return result;
}


int __fastcall RemixService::RemixService(int a1, int a2, int a3)
{
  int v3; // r4@1
  const void **v4; // r0@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-2Ch]@1

  v3 = a1;
  ServiceClient::ServiceClient(a1, a2, a3);
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)v3 = &off_26DD16C;
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  sub_119CCEC((void **)(v3 + 56), unk_27D3A7C, RemixService::API_ENDPOINT);
  sub_119CCEC((void **)&v9, unk_27D3A74, RemixService::REMIX_WEBSITE);
  v4 = sub_119C894((const void **)&v9, "/", 1u);
  *(_DWORD *)(v3 + 60) = *v4;
  *v4 = &unk_28898CC;
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  *(_BYTE *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  return v3;
}


int __fastcall RemixService::_requestTemporaryStorage(const RemixService *a1, int a2, int a3)
{
  int v3; // r6@1
  const RemixService *v4; // r4@1
  int v5; // r5@1
  void *v6; // r0@1
  int result; // r0@2
  int v8; // r4@2
  unsigned int *v9; // r1@3
  unsigned int *v10; // r5@9
  int v11; // r4@16
  unsigned int *v12; // r1@17
  unsigned int *v13; // r5@23
  unsigned int *v14; // r2@31
  signed int v15; // r1@33
  int v16; // [sp+0h] [bp-28h]@2
  int v17; // [sp+4h] [bp-24h]@2
  int v18; // [sp+8h] [bp-20h]@1
  int v19; // [sp+Ch] [bp-1Ch]@1
  int v20; // [sp+10h] [bp-18h]@2
  char v21; // [sp+14h] [bp-14h]@1

  v3 = a2;
  v4 = a1;
  std::__shared_ptr<RemixTemporaryStorageRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RemixTemporaryStorageRequest>,RemixService &,std::function<void ()(RemixRequest::Result,RemixTemporaryStorageRequest::Response)> &>(
    (int)&v19,
    (int)&v21,
    a1,
    a3);
  v5 = v19;
  RemixCorrelationVector::incrementAndGet((RemixCorrelationVector *)&v18, v3);
  RemixRequest::setCorrelationVector(v5, &v18);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v18 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v16 = v19;
  v17 = v20;
  v19 = 0;
  v20 = 0;
  result = ServiceClient::_submitRequest((int)v4, (int)&v16);
  v8 = v17;
  if ( v17 )
    v9 = (unsigned int *)(v17 + 4);
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
      result = (*v9)--;
    if ( result == 1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  v11 = v20;
  if ( v20 )
    v12 = (unsigned int *)(v20 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
        result = (*v13)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  return result;
}


int __fastcall RemixService::_requestUserLogin(const RemixService *a1, int a2)
{
  const RemixService *v2; // r4@1
  int result; // r0@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int *v6; // r5@8
  int v7; // r4@15
  unsigned int *v8; // r1@16
  unsigned int *v9; // r5@22
  int v10; // [sp+4h] [bp-24h]@1
  int v11; // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@1
  int v13; // [sp+10h] [bp-18h]@1
  char v14; // [sp+14h] [bp-14h]@1

  v2 = a1;
  std::__shared_ptr<RemixLoginRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RemixLoginRequest>,RemixService &,std::function<void ()(RemixRequest::Result,RemixLoginRequest::Response)> &>(
    (int)&v10,
    (int)&v14,
    a1,
    a2);
  v12 = v10;
  v13 = v11;
  v10 = 0;
  v11 = 0;
  result = ServiceClient::_submitRequest((int)v2, (int)&v12);
  v4 = v13;
  if ( v13 )
  {
    v5 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v5);
      while ( __strex(result - 1, v5) );
    }
    else
      result = (*v5)--;
    if ( result == 1 )
      v6 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
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
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  v7 = v11;
  if ( v11 )
    v8 = (unsigned int *)(v11 + 4);
        result = __ldrex(v8);
      while ( __strex(result - 1, v8) );
      result = (*v8)--;
      v9 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          result = __ldrex(v9);
        while ( __strex(result - 1, v9) );
        result = (*v9)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return result;
}


int __fastcall RemixService::_submitFileUploadCompleted(const RemixService *a1, int a2, int *a3, int a4)
{
  int v4; // r6@1
  const RemixService *v5; // r4@1
  int v6; // r5@1
  void *v7; // r0@1
  int result; // r0@2
  int v9; // r4@2
  unsigned int *v10; // r1@3
  unsigned int *v11; // r5@9
  int v12; // r4@16
  unsigned int *v13; // r1@17
  unsigned int *v14; // r5@23
  unsigned int *v15; // r2@31
  signed int v16; // r1@33
  int v17; // [sp+8h] [bp-28h]@2
  int v18; // [sp+Ch] [bp-24h]@2
  int v19; // [sp+10h] [bp-20h]@1
  int v20; // [sp+14h] [bp-1Ch]@1
  int v21; // [sp+18h] [bp-18h]@2
  char v22; // [sp+1Ch] [bp-14h]@1

  v4 = a2;
  v5 = a1;
  std::__shared_ptr<RemixFileUploadCompletionRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RemixFileUploadCompletionRequest>,RemixService &,RemixFileUploadCompletionRequest::Params const&,std::function<void ()(RemixRequest::Result,RemixFileUploadCompletionRequest::Response)> &>(
    (int)&v20,
    (int)&v22,
    a1,
    a3,
    a4);
  v6 = v20;
  RemixCorrelationVector::incrementAndGet((RemixCorrelationVector *)&v19, v4);
  RemixRequest::setCorrelationVector(v6, &v19);
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v17 = v20;
  v18 = v21;
  v20 = 0;
  v21 = 0;
  result = ServiceClient::_submitRequest((int)v5, (int)&v17);
  v9 = v18;
  if ( v18 )
    v10 = (unsigned int *)(v18 + 4);
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
      result = (*v10)--;
    if ( result == 1 )
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
      }
      else
        result = (*v11)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
        result = (*v14)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return result;
}


void __fastcall RemixService::~RemixService(RemixService *this)
{
  RemixService *v1; // r0@1

  v1 = RemixService::~RemixService(this);
  j_j_j__ZdlPv_4((void *)v1);
}


char *__fastcall RemixService::getWebsiteUrl(RemixService *this)
{
  return (char *)this + 60;
}


int __fastcall RemixService::hydrateFilters(RemixService *this)
{
  RemixService *v1; // r5@1
  __int64 v2; // r0@1
  bool v3; // zf@1
  int v4; // r8@5
  unsigned int v5; // r1@6
  unsigned int *v6; // r0@6
  unsigned int v7; // r2@9
  unsigned int v8; // r3@10
  int v9; // r7@11
  unsigned int *v10; // r4@11
  unsigned int v11; // r1@13
  unsigned int v12; // r1@18
  unsigned int v13; // r0@24
  unsigned int v14; // r0@31
  RemixRequest *v15; // r9@34
  unsigned int v16; // r0@36
  _DWORD *v17; // r0@39
  unsigned int v18; // r1@41
  __int64 v19; // r1@44
  unsigned int v20; // r0@48
  void *v21; // r0@53
  int v22; // r7@53
  unsigned int *v23; // r0@53
  unsigned int v24; // r1@56
  int v25; // r0@59
  unsigned int *v26; // r2@60
  unsigned int v27; // r1@62
  int v28; // r5@68
  unsigned int *v29; // r1@69
  unsigned int v30; // r0@71
  unsigned int *v31; // r6@75
  unsigned int v32; // r0@77
  unsigned int v33; // r0@84
  RemixRequest *v35; // [sp+0h] [bp-38h]@68
  int v36; // [sp+4h] [bp-34h]@68
  _DWORD *v37; // [sp+8h] [bp-30h]@44
  void (*v38)(void); // [sp+10h] [bp-28h]@39

  v1 = this;
  v2 = *((_QWORD *)this + 8);
  v3 = (_DWORD)v2 == HIDWORD(v2);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    LODWORD(v2) = *((_BYTE *)v1 + 76);
    v3 = (_DWORD)v2 == 0;
  }
  if ( v3 )
    *((_BYTE *)v1 + 76) = 1;
    v4 = *((_DWORD *)v1 + 11);
    if ( !v4 )
      std::__throw_bad_weak_ptr();
    v5 = *(_DWORD *)(v4 + 4);
    v6 = (unsigned int *)(v4 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v5 )
          std::__throw_bad_weak_ptr();
        __dmb();
        v7 = __ldrex(v6);
        if ( v7 == v5 )
          break;
        __clrex();
        v5 = v7;
      }
      v8 = __strex(v5 + 1, v6);
      v5 = v7;
    }
    while ( v8 );
    __dmb();
    v9 = *((_DWORD *)v1 + 10);
    v10 = (unsigned int *)(v4 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    else
      ++*v10;
        v12 = __ldrex(v6);
      while ( __strex(v12 - 1, v6) );
      v12 = (*v6)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        do
          v13 = __ldrex(v10);
        while ( __strex(v13 - 1, v10) );
      else
        v13 = (*v10)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
        v14 = __ldrex(v10);
      while ( __strex(v14 + 1, v10) );
    v15 = (RemixRequest *)operator new(0x68u);
        v16 = __ldrex(v10);
      while ( __strex(v16 + 1, v10) );
    v38 = 0;
    v17 = operator new(8u);
    *v17 = v9;
    v17[1] = v4;
        v18 = __ldrex(v10);
      while ( __strex(v18 + 1, v10) );
    LODWORD(v19) = sub_F711F8;
    v37 = v17;
    HIDWORD(v19) = sub_F71060;
    *(_QWORD *)&v38 = v19;
    RemixFiltersRequest::RemixFiltersRequest(v15, v1, (int)&v37);
    if ( v38 )
      v38();
        v20 = __ldrex(v10);
      while ( __strex(v20 - 1, v10) );
      v20 = (*v10)--;
    if ( v20 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    v21 = operator new(0x14u);
    v22 = (int)v21;
    *((_DWORD *)v21 + 1) = 1;
    *((_DWORD *)v21 + 2) = 1;
    v23 = (unsigned int *)((char *)v21 + 8);
    *(_DWORD *)v22 = &off_26DD2B0;
    *(_DWORD *)(v22 + 16) = v15;
    if ( v15 )
      *((_DWORD *)v15 + 1) = v15;
          v24 = __ldrex(v23);
        while ( __strex(v24 + 1, v23) );
        *v23 = 2;
      v25 = *((_DWORD *)v15 + 2);
      if ( v25 )
        v26 = (unsigned int *)(v25 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
        }
        else
          v27 = (*v26)--;
        if ( v27 == 1 )
          (*(void (**)(void))(*(_DWORD *)v25 + 12))();
      *((_DWORD *)v15 + 2) = v22;
    v35 = v15;
    v36 = v22;
    ServiceClient::_submitRequest((int)v1, (int)&v35);
    v28 = v36;
    if ( v36 )
      v29 = (unsigned int *)(v36 + 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        v31 = (unsigned int *)(v28 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
        v33 = __ldrex(v10);
      while ( __strex(v33 - 1, v10) );
      v33 = (*v10)--;
    if ( v33 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 12))(v4);
        LODWORD(v2) = __ldrex(v10);
      while ( __strex(v2 - 1, v10) );
      LODWORD(v2) = (*v10)--;
    if ( (_DWORD)v2 == 1 )
      LODWORD(v2) = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return v2;
}


int __fastcall RemixService::_requestTranscodeStatus(const RemixService *a1, int a2, int *a3, int a4)
{
  int v4; // r6@1
  const RemixService *v5; // r4@1
  int v6; // r5@1
  void *v7; // r0@1
  int result; // r0@2
  int v9; // r4@2
  unsigned int *v10; // r1@3
  unsigned int *v11; // r5@9
  int v12; // r4@16
  unsigned int *v13; // r1@17
  unsigned int *v14; // r5@23
  unsigned int *v15; // r2@31
  signed int v16; // r1@33
  int v17; // [sp+8h] [bp-28h]@2
  int v18; // [sp+Ch] [bp-24h]@2
  int v19; // [sp+10h] [bp-20h]@1
  int v20; // [sp+14h] [bp-1Ch]@1
  int v21; // [sp+18h] [bp-18h]@2
  char v22; // [sp+1Ch] [bp-14h]@1

  v4 = a2;
  v5 = a1;
  std::__shared_ptr<RemixTranscodeStatusRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RemixTranscodeStatusRequest>,RemixService &,RemixTranscodeStatusRequest::Params const&,std::function<void ()(RemixRequest::Result,RemixTranscodeStatusRequest::Response const&)> &>(
    (int)&v20,
    (int)&v22,
    a1,
    a3,
    a4);
  v6 = v20;
  RemixCorrelationVector::incrementAndGet((RemixCorrelationVector *)&v19, v4);
  RemixRequest::setCorrelationVector(v6, &v19);
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v17 = v20;
  v18 = v21;
  v20 = 0;
  v21 = 0;
  result = ServiceClient::_submitRequest((int)v5, (int)&v17);
  v9 = v18;
  if ( v18 )
    v10 = (unsigned int *)(v18 + 4);
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
      result = (*v10)--;
    if ( result == 1 )
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
      }
      else
        result = (*v11)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
        result = (*v14)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return result;
}


int __fastcall RemixService::_requestFileUpload(const RemixService *a1, int a2, const RemixFileUploadRequest::Params *a3, int a4)
{
  int v4; // r6@1
  const RemixService *v5; // r4@1
  int v6; // r5@1
  void *v7; // r0@1
  int result; // r0@2
  int v9; // r4@2
  unsigned int *v10; // r1@3
  unsigned int *v11; // r5@9
  int v12; // r4@16
  unsigned int *v13; // r1@17
  unsigned int *v14; // r5@23
  unsigned int *v15; // r2@31
  signed int v16; // r1@33
  int v17; // [sp+8h] [bp-28h]@2
  int v18; // [sp+Ch] [bp-24h]@2
  int v19; // [sp+10h] [bp-20h]@1
  int v20; // [sp+14h] [bp-1Ch]@1
  int v21; // [sp+18h] [bp-18h]@2
  char v22; // [sp+1Ch] [bp-14h]@1

  v4 = a2;
  v5 = a1;
  std::__shared_ptr<RemixFileUploadRequest,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RemixFileUploadRequest>,RemixService &,RemixFileUploadRequest::Params const&,std::function<void ()(RemixRequest::Result,RemixFileUploadRequest::Response const&)> &>(
    (int)&v20,
    (int)&v22,
    a1,
    a3,
    a4);
  v6 = v20;
  RemixCorrelationVector::incrementAndGet((RemixCorrelationVector *)&v19, v4);
  RemixRequest::setCorrelationVector(v6, &v19);
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v17 = v20;
  v18 = v21;
  v20 = 0;
  v21 = 0;
  result = ServiceClient::_submitRequest((int)v5, (int)&v17);
  v9 = v18;
  if ( v18 )
    v10 = (unsigned int *)(v18 + 4);
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
      result = (*v10)--;
    if ( result == 1 )
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
      }
      else
        result = (*v11)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
        result = (*v14)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return result;
}


int __fastcall RemixService::_onRemixLoginCompleted(RemixService *this, int a2, int a3)
{
  int result; // r0@1

  result = *((_DWORD *)this + 3);
  if ( result )
  {
    if ( a3 == 1 )
    {
      result = j_j_j__ZN17MinecraftEventing28fireRemixAuthenticationEventENS_21AuthenticationOutcomeE(result, 2);
    }
    else if ( a2 )
      result = j_j_j__ZN17MinecraftEventing28fireRemixAuthenticationEventENS_21AuthenticationOutcomeE(result, 0);
    else
      result = j_j_j__ZN17MinecraftEventing28fireRemixAuthenticationEventENS_21AuthenticationOutcomeE(result, 1);
  }
  return result;
}


RemixService *__fastcall RemixService::~RemixService(RemixService *this)
{
  RemixService *v1; // r4@1
  RemixFilter *v2; // r0@1
  RemixFilter *v3; // r5@1
  int v4; // r1@6
  void *v5; // r0@6
  int v6; // r1@7
  void *v7; // r0@7
  int v8; // r5@8
  unsigned int *v9; // r1@9
  unsigned int v10; // r0@11
  unsigned int *v11; // r6@15
  unsigned int v12; // r0@17
  int v13; // r0@22
  unsigned int *v14; // r2@23
  unsigned int v15; // r1@25
  unsigned int *v17; // r2@31
  signed int v18; // r1@33
  unsigned int *v19; // r2@35
  signed int v20; // r1@37

  v1 = this;
  *(_DWORD *)this = &off_26DD16C;
  v3 = (RemixFilter *)(*((_QWORD *)this + 8) >> 32);
  v2 = (RemixFilter *)*((_QWORD *)this + 8);
  if ( v2 != v3 )
  {
    do
      v2 = (RemixFilter *)((char *)RemixFilter::~RemixFilter(v2) + 20);
    while ( v3 != v2 );
    v2 = (RemixFilter *)*((_DWORD *)v1 + 16);
  }
  if ( v2 )
    operator delete((void *)v2);
  v4 = *((_DWORD *)v1 + 15);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 14);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v6 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *((_DWORD *)v1 + 13);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 4);
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
  v13 = *((_DWORD *)v1 + 11);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (**)(void))(*(_DWORD *)v13 + 12))();
  ServiceClient::~ServiceClient(v1);
  return v1;
}


int __fastcall RemixService::createRemixRequest(int a1, int a2, int *a3, int *a4, int a5, int a6)
{
  int v7[3]; // [sp+8h] [bp-18h]@1
  char v8; // [sp+14h] [bp-Ch]@1

  v7[0] = a5;
  v7[1] = a6;
  return j__ZNSt12__shared_ptrI20RemixProgressTrackerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR12RemixServiceRKSsS9_RyEEESt19_Sp_make_shared_tagRKT_DpOT0_(
           a1,
           (int)&v8,
           a2,
           a3,
           a4,
           (__int64 *)v7);
}
