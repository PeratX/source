

void __fastcall RemixTemporaryStorageRequest::send(RemixTemporaryStorageRequest *this)
{
  RemixTemporaryStorageRequest::send(this);
}


RemixTemporaryStorageRequest *__fastcall RemixTemporaryStorageRequest::~RemixTemporaryStorageRequest(RemixTemporaryStorageRequest *this)
{
  RemixTemporaryStorageRequest *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void (*v6)(void); // r3@3
  int v7; // r1@5
  void *v8; // r0@5
  unsigned int *v10; // r12@7
  signed int v11; // r1@9
  unsigned int *v12; // r12@11
  signed int v13; // r1@13
  unsigned int *v14; // r12@15
  signed int v15; // r1@17

  v1 = this;
  *(_DWORD *)this = &off_26DE354;
  v2 = *((_DWORD *)this + 23);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 22);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v4 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void (*)(void))*((_DWORD *)v1 + 20);
  if ( v6 )
    v6();
  *(_DWORD *)v1 = &off_26DE14C;
  v7 = *((_DWORD *)v1 + 16);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v7 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  RequestHandler::~RequestHandler(v1);
  return v1;
}


void __fastcall RemixTemporaryStorageRequest::_parseJsonResponse(RemixTemporaryStorageRequest *this, const web::json::value *a2)
{
  RemixTemporaryStorageRequest::_parseJsonResponse(this, a2);
}


RemixRequest *__fastcall RemixTemporaryStorageRequest::RemixTemporaryStorageRequest(RemixRequest *a1, const RemixService *a2, int a3)
{
  int v3; // r5@1
  RemixRequest *v4; // r4@1
  void (__fastcall *v5)(char *, int, signed int); // r3@1

  v3 = a3;
  v4 = a1;
  RemixRequest::RemixRequest(a1, a2);
  *(_DWORD *)v4 = &off_26DE354;
  *((_DWORD *)v4 + 20) = 0;
  v5 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
  if ( v5 )
  {
    v5((char *)v4 + 72, v3, 2);
    *((_DWORD *)v4 + 21) = *(_DWORD *)(v3 + 12);
    *((_DWORD *)v4 + 20) = *(_DWORD *)(v3 + 8);
  }
  *((_DWORD *)v4 + 22) = &unk_28898CC;
  *((_DWORD *)v4 + 23) = &unk_28898CC;
  return v4;
}


void __fastcall RemixTemporaryStorageRequest::onComplete(RemixTemporaryStorageRequest *this)
{
  RemixTemporaryStorageRequest *v1; // r4@1
  int v2; // r6@2
  int *v3; // r0@2
  void *v4; // r0@2
  void *v5; // r0@3
  void (__fastcall *v6)(char *, char *, signed int); // r3@4
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+4h] [bp-2Ch]@2
  int v12; // [sp+8h] [bp-28h]@2

  v1 = this;
  if ( *((_DWORD *)this + 20) )
  {
    v2 = *((_DWORD *)this + 17);
    v3 = sub_119C854(&v11, (int *)this + 22);
    sub_119C854(v3 + 1, (int *)v1 + 23);
    std::function<void ()(RemixRequest::Result,RemixTemporaryStorageRequest::Response)>::operator()(
      (int)v1 + 72,
      v2,
      (int)&v11);
    v4 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v12 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v4);
    }
    v5 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v11 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    v6 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 20);
    if ( v6 )
      v6((char *)v1 + 72, (char *)v1 + 72, 3);
      *((_DWORD *)v1 + 20) = 0;
      *((_DWORD *)v1 + 21) = 0;
  }
}


void __fastcall RemixTemporaryStorageRequest::send(RemixTemporaryStorageRequest *this)
{
  RemixTemporaryStorageRequest *v1; // r5@1
  int *v2; // r0@1
  void *v3; // r0@1
  __int64 v4; // r0@3
  int v5; // r6@3
  unsigned int *v6; // r1@4
  unsigned int v7; // r0@6
  unsigned int *v8; // r5@10
  unsigned int v9; // r0@12
  int v10; // r5@17
  unsigned int *v11; // r1@18
  unsigned int v12; // r0@20
  unsigned int *v13; // r6@24
  unsigned int v14; // r0@26
  int v15; // r5@31
  unsigned int *v16; // r1@32
  unsigned int v17; // r0@34
  unsigned int *v18; // r6@38
  unsigned int v19; // r0@40
  void *v20; // r0@45
  int v21; // r4@46
  unsigned int *v22; // r1@47
  unsigned int v23; // r0@49
  unsigned int *v24; // r5@53
  unsigned int v25; // r0@55
  void *v26; // r0@60
  unsigned int *v27; // r2@62
  signed int v28; // r1@64
  unsigned int *v29; // r2@66
  signed int v30; // r1@68
  unsigned int *v31; // r2@70
  signed int v32; // r1@72
  int v33; // [sp+0h] [bp-60h]@2
  int v34; // [sp+4h] [bp-5Ch]@2
  char v35; // [sp+8h] [bp-58h]@2
  int v36; // [sp+Ch] [bp-54h]@3
  int v37; // [sp+10h] [bp-50h]@1
  int v38; // [sp+14h] [bp-4Ch]@1
  int v39; // [sp+18h] [bp-48h]@45
  int v40; // [sp+34h] [bp-2Ch]@1
  int v41; // [sp+38h] [bp-28h]@2
  int v42; // [sp+40h] [bp-20h]@1
  char v43; // [sp+44h] [bp-1Ch]@1

  v1 = this;
  sub_119C884((void **)&v42, "uploads");
  v2 = (int *)RemixService::getAPIEndpoint(*((RemixService **)v1 + 15));
  j__ZNSt12__shared_ptrI11RequestDataLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v40,
    (int)&v43,
    v2,
    (int *)&web::http::methods::POST);
  utility::conversions::to_string_t(&v37, &v42);
  web::uri::uri((int)&v38, &v37);
  v3 = (void *)(v37 - 12);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  web::http::details::_http_request::set_request_uri(
    *(web::http::details::_http_request **)(v40 + 12),
    (const web::uri *)&v38);
  v33 = v40;
  v34 = v41;
  v40 = 0;
  v41 = 0;
  RemixRequest::_sendRequest((int)&v35, (int)v1, (int)&v33);
  if ( (char *)v1 + 44 != &v35 )
    v4 = *(_QWORD *)&v35;
    *(_DWORD *)&v35 = 0;
    v36 = 0;
    *((_DWORD *)v1 + 11) = v4;
    v5 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v4);
    if ( v5 )
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
  v10 = v36;
  if ( v36 )
    v11 = (unsigned int *)(v36 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v15 = v34;
  if ( v34 )
    v16 = (unsigned int *)(v34 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v39);
  v20 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v38 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = v41;
  if ( v41 )
    v22 = (unsigned int *)(v41 + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      v24 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  v26 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v42 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
}


void __fastcall RemixTemporaryStorageRequest::~RemixTemporaryStorageRequest(RemixTemporaryStorageRequest *this)
{
  RemixTemporaryStorageRequest::~RemixTemporaryStorageRequest(this);
}


void __fastcall RemixTemporaryStorageRequest::_parseJsonResponse(RemixTemporaryStorageRequest *this, const web::json::value *a2)
{
  web::json::value *v2; // r5@1
  RemixTemporaryStorageRequest *v3; // r6@1
  void *v4; // r0@1
  char *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  char *v8; // r0@5
  void *v9; // r0@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  char *v22; // [sp+4h] [bp-34h]@4
  int v23; // [sp+Ch] [bp-2Ch]@4
  int v24; // [sp+10h] [bp-28h]@4
  char *v25; // [sp+14h] [bp-24h]@1
  int v26; // [sp+1Ch] [bp-1Ch]@1
  int v27; // [sp+20h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_119C884((void **)&v26, "locationId");
  v25 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v27, v2, &v26, (int *)&v25);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 23,
    &v27);
  v4 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v27 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v25 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v26 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v23, "locationUri");
  v22 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v24, v2, &v23, (int *)&v22);
    (int *)v3 + 22,
    &v24);
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v23 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
}


void __fastcall RemixTemporaryStorageRequest::~RemixTemporaryStorageRequest(RemixTemporaryStorageRequest *this)
{
  RemixTemporaryStorageRequest *v1; // r0@1

  v1 = RemixTemporaryStorageRequest::~RemixTemporaryStorageRequest(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall RemixTemporaryStorageRequest::onComplete(RemixTemporaryStorageRequest *this)
{
  RemixTemporaryStorageRequest::onComplete(this);
}
