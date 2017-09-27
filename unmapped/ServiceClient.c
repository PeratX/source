

int __fastcall ServiceClient::setEventing(int result, MinecraftEventing *a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


void __fastcall ServiceClient::getPrimaryUserXUID(ServiceClient *this, int a2)
{
  int v2; // r1@1
  Social::XboxLiveUserManager *v3; // r4@1
  int v4; // r0@2
  int v5; // r4@2
  unsigned int *v6; // r1@3
  unsigned int v7; // r0@5
  unsigned int *v8; // r5@10
  unsigned int v9; // r0@12
  Social::User *v10; // [sp+0h] [bp-18h]@2
  int v11; // [sp+4h] [bp-14h]@2

  v2 = *(_DWORD *)(a2 + 8);
  v3 = this;
  if ( v2 )
  {
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v10, v2);
    v4 = Social::User::getLiveUser(v10);
    Social::XboxLiveUserManager::getCurrentXUID(v3, v4);
    v5 = v11;
    if ( v11 )
    {
      v6 = (unsigned int *)(v11 + 4);
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
  }
  else
    sub_119C854((int *)this, (int *)&Util::EMPTY_STRING);
}


int __fastcall ServiceClient::setUserManager(int result, Social::UserManager *a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


int __fastcall ServiceClient::isSignedIntoXboxLive(ServiceClient *this)
{
  int v1; // r1@1
  Social::XboxLiveUserManager *v2; // r0@2
  int v3; // r4@2
  int v4; // r5@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@10
  unsigned int v8; // r0@12
  Social::User *v10; // [sp+0h] [bp-18h]@2
  int v11; // [sp+4h] [bp-14h]@2

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
  {
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v10, v1);
    v2 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v10);
    v3 = Social::XboxLiveUserManager::isSignedIn(v2);
    v4 = v11;
    if ( v11 )
    {
      v5 = (unsigned int *)(v11 + 4);
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
        v7 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    }
  }
  else
    v3 = 0;
  return v3;
}


void __fastcall ServiceClient::~ServiceClient(ServiceClient *this)
{
  ServiceClient *v1; // r0@1

  v1 = ServiceClient::~ServiceClient(this);
  j_j_j__ZdlPv_4((void *)v1);
}


unsigned int __fastcall ServiceClient::_sendRequest(int a1, RequestHandler **a2)
{
  RequestHandler **v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r0@1
  unsigned int result; // r0@2

  v2 = a2;
  v3 = a1;
  RequestHandler::startTimer(*a2);
  (*(void (**)(void))(*(_DWORD *)*v2 + 8))();
  v4 = *(_QWORD *)(v3 + 32);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    result = j_j_j__ZNSt6vectorISt10shared_ptrI14RequestHandlerESaIS2_EE19_M_emplace_back_auxIJS2_EEEvDpOT_(
               (_QWORD *)(v3 + 28),
               (int)v2);
  }
  else
    *(_QWORD *)v4 = (unsigned int)*v2;
    HIDWORD(v4) = v2[1];
    v2[1] = 0;
    *(_DWORD *)(v4 + 4) = HIDWORD(v4);
    result = v4 + 8;
    *v2 = 0;
    *(_DWORD *)(v3 + 32) = result;
  return result;
}


MinecraftEventing *__fastcall ServiceClient::_sendTelemetry(ServiceClient *this, RequestHandler *a2)
{
  ServiceClient *v2; // r4@1
  MinecraftEventing *result; // r0@1
  bool v4; // zf@1
  int v5; // r4@5
  unsigned int *v6; // r1@6
  unsigned int *v7; // r5@12
  RequestTelemetry *v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@5

  v2 = this;
  result = (MinecraftEventing *)RequestHandler::getTelemetry((RequestHandler *)&v8, (int)a2);
  v4 = v8 == 0;
  if ( v8 )
  {
    result = (MinecraftEventing *)*((_DWORD *)v2 + 3);
    v4 = result == 0;
  }
  if ( !v4 )
    result = (MinecraftEventing *)MinecraftEventing::fireEventUgcServiceRequestStatus(result, v8);
  v5 = v9;
  if ( v9 )
    v6 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = (MinecraftEventing *)__ldrex(v6);
      while ( __strex((unsigned int)result - 1, v6) );
    }
    else
      result = (MinecraftEventing *)(*v6)--;
    if ( result == (MinecraftEventing *)1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (MinecraftEventing *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
      }
      else
        result = (MinecraftEventing *)(*v7)--;
      if ( result == (MinecraftEventing *)1 )
        result = (MinecraftEventing *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


void __fastcall ServiceClient::getPrimaryUserXUID(ServiceClient *this, int a2)
{
  ServiceClient::getPrimaryUserXUID(this, a2);
}


void __fastcall ServiceClient::getAuthorizationHeader(int a1, int a2, int *a3)
{
  ServiceClient::getAuthorizationHeader(a1, a2, a3);
}


RequestHandler **__fastcall ServiceClient::update(ServiceClient *this)
{
  ServiceClient *v1; // r4@1
  RequestHandler **v2; // r5@1
  char *v3; // r8@1
  RequestHandler **result; // r0@1
  bool v5; // zf@1
  RequestHandler *v6; // r6@8
  RequestHandler **v7; // r7@10
  RequestHandler *v8; // r5@11 OVERLAPPED
  int v9; // r6@11 OVERLAPPED
  unsigned int *v10; // r0@12
  unsigned int v11; // r1@14
  unsigned int v12; // r9@17
  unsigned int v13; // r10@17
  double v14; // r0@17
  int v15; // r8@17
  int v16; // r0@17
  _DWORD *v17; // r5@18
  int v18; // r7@18
  _DWORD *v19; // r6@20
  bool v20; // zf@23
  _DWORD *v21; // r0@27
  __int64 v22; // r0@29
  int v23; // r6@31
  int v24; // r5@32
  unsigned int *v25; // r1@33
  unsigned int v26; // r0@35
  unsigned int *v27; // r6@39
  unsigned int v28; // r0@41
  void *v29; // r0@47
  void *v30; // r5@48
  unsigned int *v31; // r1@53
  unsigned int v32; // r0@55
  unsigned int *v33; // r5@59
  unsigned int v34; // r0@61
  char *v35; // [sp+Ch] [bp-5Ch]@1
  RequestHandler *v36; // [sp+14h] [bp-54h]@17
  int v37; // [sp+18h] [bp-50h]@17
  int v38; // [sp+1Ch] [bp-4Ch]@17
  RequestHandler *v39; // [sp+20h] [bp-48h]@29
  int v40; // [sp+24h] [bp-44h]@29
  void *v41; // [sp+28h] [bp-40h]@17
  unsigned int v42; // [sp+2Ch] [bp-3Ch]@17
  void *ptr; // [sp+30h] [bp-38h]@47
  int v44; // [sp+34h] [bp-34h]@49
  int v45; // [sp+40h] [bp-28h]@50

  v1 = this;
  v3 = (char *)this + 28;
  v2 = (RequestHandler **)*((_DWORD *)this + 7);
  v35 = (char *)this + 28;
  result = (RequestHandler **)*((_DWORD *)this + 8);
  v5 = v2 == result;
  if ( v2 == result )
    v5 = (unsigned int)*((_QWORD *)v1 + 2) == *((_QWORD *)v1 + 2) >> 32;
  if ( !v5 )
  {
    while ( v2 != result )
    {
      v6 = *v2;
      if ( (*(int (__fastcall **)(RequestHandler *))(*(_DWORD *)*v2 + 12))(*v2) == 1 )
      {
        ServiceClient::_sendTelemetry(v1, v6);
        v2 = (RequestHandler **)std::vector<std::shared_ptr<RequestHandler>,std::allocator<std::shared_ptr<RequestHandler>>>::_M_erase(
                                  (int)v3,
                                  (int)v2);
        result = (RequestHandler **)*((_DWORD *)v1 + 8);
      }
      else
        v2 += 2;
    }
    v7 = (RequestHandler **)*((_DWORD *)v1 + 4);
    for ( result = (RequestHandler **)*((_DWORD *)v1 + 5); v7 != result; result = (RequestHandler **)*((_DWORD *)v1 + 5) )
      *(_QWORD *)&v8 = *(_QWORD *)v7;
      if ( *(_QWORD *)v7 >> 32 )
        v10 = (unsigned int *)(v9 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 + 1, v10) );
        }
        else
          ++*v10;
      v12 = RequestHandler::getConcurrencyId(v8);
      v13 = RequestHandler::getMaxConcurrent(v8);
      LODWORD(v14) = &v41;
      _collectConcurrencyCountsById(v14);
      v36 = v8;
      v37 = (int)v7;
      v38 = v9;
      v15 = v12 % v42;
      v16 = *((_DWORD *)v41 + v12 % v42);
      if ( !v16 )
        goto LABEL_27;
      v17 = *(_DWORD **)v16;
      v18 = *(_DWORD *)(*(_DWORD *)v16 + 4);
      while ( v12 != v18 )
        v19 = (_DWORD *)*v17;
        if ( *v17 )
          v18 = v19[1];
          v16 = (int)v17;
          v17 = (_DWORD *)*v17;
          if ( v19[1] % v42 == v15 )
            continue;
      v20 = v16 == 0;
      if ( v16 )
        v16 = *(_DWORD *)v16;
        v20 = v16 == 0;
      if ( v20 )
LABEL_27:
        v21 = operator new(0xCu);
        *v21 = 0;
        v21[1] = v12;
        v21[2] = 0;
        v16 = std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                (int)&v41,
                v15,
                v12,
                (int)v21);
      if ( *(_DWORD *)(v16 + 8) >= v13 )
        v23 = v38;
        v7 = (RequestHandler **)(v37 + 8);
        v39 = v36;
        v40 = v38;
        RequestHandler::startTimer(v36);
        (*(void (__fastcall **)(RequestHandler *))(*(_DWORD *)v36 + 8))(v36);
        v22 = *((_QWORD *)v1 + 4);
        if ( (_DWORD)v22 == HIDWORD(v22) )
          std::vector<std::shared_ptr<RequestHandler>,std::allocator<std::shared_ptr<RequestHandler>>>::_M_emplace_back_aux<std::shared_ptr<RequestHandler>>(
            v35,
            (int)&v39);
          v24 = v40;
          if ( v40 )
          {
            v25 = (unsigned int *)(v40 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
            }
            else
              v26 = (*v25)--;
            if ( v26 == 1 )
              v27 = (unsigned int *)(v24 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v28 = __ldrex(v27);
                while ( __strex(v28 - 1, v27) );
              }
              else
                v28 = (*v27)--;
              if ( v28 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
          }
          *(_DWORD *)v22 = v36;
          v40 = 0;
          *(_DWORD *)(v22 + 4) = v38;
          v39 = 0;
          *((_DWORD *)v1 + 8) = v22 + 8;
        v7 = (RequestHandler **)std::vector<std::shared_ptr<RequestHandler>,std::allocator<std::shared_ptr<RequestHandler>>>::_M_erase(
                                  (int)v1 + 16,
                                  v37);
        v23 = 0;
      v29 = ptr;
      if ( ptr )
        do
          v30 = *(void **)v29;
          operator delete(v29);
          v29 = v30;
        while ( v30 );
      _aeabi_memclr4(v41, 4 * v42);
      ptr = 0;
      v44 = 0;
      if ( v41 && &v45 != v41 )
        operator delete(v41);
      if ( v23 )
        v31 = (unsigned int *)(v23 + 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 == 1 )
          v33 = (unsigned int *)(v23 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
          if ( &pthread_create )
            __dmb();
            do
              v34 = __ldrex(v33);
            while ( __strex(v34 - 1, v33) );
          else
            v34 = (*v33)--;
          if ( v34 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
  }
  return result;
}


void __fastcall ServiceClient::getAuthorizationHeader(int a1, int a2, int *a3)
{
  int v3; // r1@1
  int *v4; // r5@1
  int v5; // r4@1
  int v6; // r0@2
  int v7; // r4@2
  unsigned int *v8; // r1@3
  unsigned int v9; // r0@5
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r5@14
  unsigned int v14; // r0@16
  unsigned int *v15; // r4@20
  unsigned int v16; // r0@22
  char *v17; // r0@30
  unsigned int *v18; // r2@32
  signed int v19; // r1@34
  int v20; // [sp+0h] [bp-58h]@7
  int v21; // [sp+4h] [bp-54h]@7
  int v22; // [sp+8h] [bp-50h]@7
  int v23; // [sp+Ch] [bp-4Ch]@7
  char v24; // [sp+14h] [bp-44h]@7
  int v25; // [sp+18h] [bp-40h]@7
  int v26; // [sp+1Ch] [bp-3Ch]@7
  int v27; // [sp+20h] [bp-38h]@7
  int v28; // [sp+24h] [bp-34h]@7
  __int16 v29; // [sp+28h] [bp-30h]@7
  char *v30; // [sp+30h] [bp-28h]@7
  Social::User *v31; // [sp+34h] [bp-24h]@2
  int v32; // [sp+38h] [bp-20h]@2
  int v33; // [sp+3Ch] [bp-1Ch]@7
  int v34; // [sp+40h] [bp-18h]@7

  v3 = *(_DWORD *)(a2 + 8);
  v4 = a3;
  v5 = a1;
  if ( v3 )
  {
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v31, v3);
    v6 = Social::User::getLiveUser(v31);
    Social::XboxLiveUserManager::getAuthorizationHeader(v5, v6, v4);
    v7 = v32;
    if ( v32 )
    {
      v8 = (unsigned int *)(v32 + 4);
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
        v13 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
  }
  else
    v30 = (char *)&unk_28898CC;
    pplx::get_ambient_scheduler((pplx *)&v33);
    v10 = v34;
    v20 = v33;
    v21 = v34;
    v22 = v33;
    v23 = 0;
    v24 = 0;
    v29 = 0;
    v27 = 0;
    v28 = 0;
    v25 = 0;
    v26 = 0;
    pplx::task_from_result<std::string>(v5, (int *)&v30, (int)&v20);
    if ( v10 )
      v11 = (unsigned int *)(v10 + 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        v15 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    v17 = v30 - 12;
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v30 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
}


int __fastcall ServiceClient::setForceOfflineResponses(int result, bool a2)
{
  *(_BYTE *)(result + 4) = a2;
  return result;
}


int __fastcall ServiceClient::_submitRequest(int result, int a2)
{
  __int64 v2; // r2@1

  v2 = *(_QWORD *)(result + 20);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    result = j_j_j__ZNSt6vectorISt10shared_ptrI14RequestHandlerESaIS2_EE19_M_emplace_back_auxIJS2_EEEvDpOT_(
               (_QWORD *)(result + 16),
               a2);
  }
  else
    *(_DWORD *)v2 = *(_DWORD *)a2;
    *(_DWORD *)(v2 + 4) = 0;
    HIDWORD(v2) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(v2 + 4) = HIDWORD(v2);
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(result + 20) = v2 + 8;
  return result;
}


void __fastcall ServiceClient::~ServiceClient(ServiceClient *this)
{
  ServiceClient::~ServiceClient(this);
}


int __fastcall ServiceClient::ServiceClient(int result, int a2, int a3)
{
  int v3; // r12@1

  v3 = result + 8;
  *(_DWORD *)result = &off_26DE7A4;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)v3 = a2;
  *(_DWORD *)(v3 + 4) = a3;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}


ServiceClient *__fastcall ServiceClient::~ServiceClient(ServiceClient *this)
{
  ServiceClient *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11
  int v9; // r5@20
  int v10; // r7@20
  int v11; // r4@21
  unsigned int *v12; // r1@22
  unsigned int v13; // r0@24
  unsigned int *v14; // r6@28
  unsigned int v15; // r0@30

  v1 = this;
  *(_DWORD *)this = &off_26DE7A4;
  v3 = *(_QWORD *)((char *)this + 28) >> 32;
  v2 = *(_QWORD *)((char *)this + 28);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
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
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 7);
  }
  if ( v2 )
    operator delete((void *)v2);
  v10 = *((_QWORD *)v1 + 2) >> 32;
  v9 = *((_QWORD *)v1 + 2);
  if ( v9 != v10 )
      v11 = *(_DWORD *)(v9 + 4);
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          v14 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      v9 += 8;
    while ( v9 != v10 );
    v9 = *((_DWORD *)v1 + 4);
  if ( v9 )
    operator delete((void *)v9);
  return v1;
}
