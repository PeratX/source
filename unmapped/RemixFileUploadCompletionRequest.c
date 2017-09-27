

void __fastcall RemixFileUploadCompletionRequest::send(RemixFileUploadCompletionRequest *this)
{
  RemixFileUploadCompletionRequest *v1; // r5@1
  const void **v2; // r4@1
  const void **v3; // r0@1
  char *v4; // r0@1
  int *v5; // r0@2
  void *v6; // r0@2
  int v7; // r6@3
  void *v8; // r0@3
  void *v9; // r0@4
  __int64 v10; // r0@6
  int v11; // r6@6
  unsigned int *v12; // r1@7
  unsigned int v13; // r0@9
  unsigned int *v14; // r5@13
  unsigned int v15; // r0@15
  int v16; // r5@20
  unsigned int *v17; // r1@21
  unsigned int v18; // r0@23
  unsigned int *v19; // r6@27
  unsigned int v20; // r0@29
  int v21; // r5@34
  unsigned int *v22; // r1@35
  unsigned int v23; // r0@37
  unsigned int *v24; // r6@41
  unsigned int v25; // r0@43
  void *v26; // r0@48
  int v27; // r4@49
  unsigned int *v28; // r1@50
  unsigned int v29; // r0@52
  unsigned int *v30; // r5@56
  unsigned int v31; // r0@58
  char *v32; // r0@63
  unsigned int *v33; // r2@65
  signed int v34; // r1@67
  unsigned int *v35; // r2@69
  signed int v36; // r1@71
  unsigned int *v37; // r2@73
  signed int v38; // r1@75
  unsigned int *v39; // r2@77
  signed int v40; // r1@79
  unsigned int *v41; // r2@81
  signed int v42; // r1@83
  unsigned int *v43; // r2@85
  signed int v44; // r1@87
  int v45; // [sp+0h] [bp-70h]@5
  int v46; // [sp+4h] [bp-6Ch]@5
  char v47; // [sp+8h] [bp-68h]@5
  int v48; // [sp+Ch] [bp-64h]@6
  int v49; // [sp+14h] [bp-5Ch]@3
  int v50; // [sp+1Ch] [bp-54h]@3
  int v51; // [sp+20h] [bp-50h]@2
  int v52; // [sp+24h] [bp-4Ch]@2
  int v53; // [sp+28h] [bp-48h]@48
  int v54; // [sp+44h] [bp-2Ch]@2
  int v55; // [sp+48h] [bp-28h]@5
  char *v56; // [sp+4Ch] [bp-24h]@1
  char *v57; // [sp+50h] [bp-20h]@1
  char v58; // [sp+54h] [bp-1Ch]@2

  v1 = this;
  v56 = (char *)&unk_28898CC;
  v2 = (const void **)((char *)this + 92);
  sub_119CAF8((const void **)&v56, *(_DWORD *)(*((_DWORD *)this + 23) - 12) + 8);
  sub_119C894((const void **)&v56, "uploads/", 8u);
  sub_119C8A4((const void **)&v56, v2);
  v3 = sub_119C894((const void **)&v56, "/status", 7u);
  v57 = (char *)*v3;
  *v3 = &unk_28898CC;
  v4 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
  {
    v33 = (unsigned int *)(v56 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    }
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = (int *)RemixService::getAPIEndpoint(*((RemixService **)v1 + 15));
  j__ZNSt12__shared_ptrI11RequestDataLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v54,
    (int)&v58,
    v5,
    (int *)&web::http::methods::PUT);
  utility::conversions::to_string_t(&v51, (int *)&v57);
  web::uri::uri((int)&v52, &v51);
  v6 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v51 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  web::http::details::_http_request::set_request_uri(
    *(web::http::details::_http_request **)(v54 + 12),
    (const web::uri *)&v52);
  v7 = v54;
  sub_119C884((void **)&v50, "application/json");
  sub_119C884((void **)&v49, "{\"status\":\"completed\"}");
  RequestData::setBody(v7, &v50, &v49);
  v8 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v49 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v50 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v45 = v54;
  v46 = v55;
  v54 = 0;
  v55 = 0;
  RemixRequest::_sendRequest((int)&v47, (int)v1, (int)&v45);
  if ( (char *)v1 + 44 != &v47 )
    v10 = *(_QWORD *)&v47;
    *(_DWORD *)&v47 = 0;
    v48 = 0;
    *((_DWORD *)v1 + 11) = v10;
    v11 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v10);
    if ( v11 )
      v12 = (unsigned int *)(v11 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
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
  v16 = v48;
  if ( v48 )
    v17 = (unsigned int *)(v48 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v21 = v46;
  if ( v46 )
    v22 = (unsigned int *)(v46 + 4);
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
  web::details::uri_components::~uri_components((web::details::uri_components *)&v53);
  v26 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v52 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = v55;
  if ( v55 )
    v28 = (unsigned int *)(v55 + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  v32 = v57 - 12;
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v57 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
}


void __fastcall RemixFileUploadCompletionRequest::onComplete(RemixFileUploadCompletionRequest *this)
{
  RemixFileUploadCompletionRequest *v1; // r4@1
  int v2; // r6@2
  void (__fastcall *v3)(char *, int, char **); // r3@3
  char *v4; // r0@3
  char *v5; // r0@4
  void (__fastcall *v6)(char *, char *, signed int); // r3@5
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  char *v11; // [sp+0h] [bp-28h]@2
  char *v12; // [sp+8h] [bp-20h]@3

  v1 = this;
  if ( *((_DWORD *)this + 20) )
  {
    v2 = *((_DWORD *)this + 17);
    sub_119C854((int *)&v11, (int *)this + 22);
    if ( !*((_DWORD *)v1 + 20) )
      sub_119C8E4();
    v3 = (void (__fastcall *)(char *, int, char **))*((_DWORD *)v1 + 21);
    v12 = v11;
    v11 = (char *)&unk_28898CC;
    v3((char *)v1 + 72, v2, &v12);
    v4 = v12 - 12;
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
    v5 = v11 - 12;
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


void __fastcall RemixFileUploadCompletionRequest::onComplete(RemixFileUploadCompletionRequest *this)
{
  RemixFileUploadCompletionRequest::onComplete(this);
}


void __fastcall RemixFileUploadCompletionRequest::_parseJsonResponse(RemixFileUploadCompletionRequest *this, const web::json::value *a2)
{
  web::json::value *v2; // r5@1
  RemixFileUploadCompletionRequest *v3; // r4@1
  int *v4; // r0@2
  void *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  int v11; // [sp+0h] [bp-28h]@2
  int v12; // [sp+4h] [bp-24h]@2

  v2 = a2;
  v3 = this;
  if ( web::json::value::type(a2) == 2 )
  {
    v4 = (int *)web::json::value::as_string(v2);
    sub_119C854(&v11, v4);
    utility::conversions::to_utf8string(&v12, &v11);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v3 + 22,
      &v12);
    v5 = (void *)(v12 - 12);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    v6 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v11 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
  }
}


void __fastcall RemixFileUploadCompletionRequest::~RemixFileUploadCompletionRequest(RemixFileUploadCompletionRequest *this)
{
  RemixFileUploadCompletionRequest *v1; // r0@1

  v1 = RemixFileUploadCompletionRequest::~RemixFileUploadCompletionRequest(this);
  j_j_j__ZdlPv_4((void *)v1);
}


RemixRequest *__fastcall RemixFileUploadCompletionRequest::RemixFileUploadCompletionRequest(RemixRequest *a1, const RemixService *a2, int *a3, int a4)
{
  int v4; // r7@1
  int *v5; // r5@1
  RemixRequest *v6; // r4@1
  void (__fastcall *v7)(char *, int, signed int); // r3@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  RemixRequest::RemixRequest(a1, a2);
  *(_DWORD *)v6 = &off_26DE090;
  *((_DWORD *)v6 + 20) = 0;
  v7 = *(void (__fastcall **)(char *, int, signed int))(v4 + 8);
  if ( v7 )
  {
    v7((char *)v6 + 72, v4, 2);
    *((_DWORD *)v6 + 21) = *(_DWORD *)(v4 + 12);
    *((_DWORD *)v6 + 20) = *(_DWORD *)(v4 + 8);
  }
  *((_DWORD *)v6 + 22) = &unk_28898CC;
  sub_119C854((int *)v6 + 23, v5);
  return v6;
}


RemixFileUploadCompletionRequest *__fastcall RemixFileUploadCompletionRequest::~RemixFileUploadCompletionRequest(RemixFileUploadCompletionRequest *this)
{
  RemixFileUploadCompletionRequest *v1; // r4@1
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
  *(_DWORD *)this = &off_26DE090;
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


void __fastcall RemixFileUploadCompletionRequest::_parseJsonResponse(RemixFileUploadCompletionRequest *this, const web::json::value *a2)
{
  RemixFileUploadCompletionRequest::_parseJsonResponse(this, a2);
}


void __fastcall RemixFileUploadCompletionRequest::send(RemixFileUploadCompletionRequest *this)
{
  RemixFileUploadCompletionRequest::send(this);
}


void __fastcall RemixFileUploadCompletionRequest::~RemixFileUploadCompletionRequest(RemixFileUploadCompletionRequest *this)
{
  RemixFileUploadCompletionRequest::~RemixFileUploadCompletionRequest(this);
}
