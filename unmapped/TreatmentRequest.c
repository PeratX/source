

void __fastcall TreatmentRequest::_parseJsonMetadata(TreatmentRequest *this, const web::json::value *a2)
{
  web::json::value *v2; // r5@1
  TreatmentRequest *v3; // r4@1
  void *v4; // r0@1
  char *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  char *v13; // [sp+4h] [bp-24h]@1
  int v14; // [sp+Ch] [bp-1Ch]@1
  int v15; // [sp+10h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v14, "entityTag");
  v13 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v15, v2, &v14, (int *)&v13);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 27,
    &v15);
  v4 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v13 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


void __fastcall TreatmentRequest::_responseHeaders(TreatmentRequest *this, const web::http::http_headers *a2)
{
  const web::http::http_headers *v2; // r5@1
  TreatmentRequest *v3; // r8@1
  char *v4; // r0@1
  char *v5; // r9@1
  char *v6; // r4@1
  char *v7; // r7@2
  void *v8; // r0@12
  void *v9; // r0@13
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  int v14; // [sp+4h] [bp-34h]@12
  int v15; // [sp+8h] [bp-30h]@12

  v2 = a2;
  v3 = this;
  v4 = (char *)*((_DWORD *)a2 + 2);
  v5 = (char *)a2 + 4;
  v6 = (char *)a2 + 4;
  if ( v4 )
  {
    v7 = (char *)a2 + 4;
    do
    {
      v6 = v4;
      while ( web::http::http_headers::_case_insensitive_cmp::operator()(
                (int)v2,
                (int *)v6 + 4,
                (int *)&web::http::header_names::etag) )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v7;
          goto LABEL_8;
        }
      }
      v4 = (char *)*((_DWORD *)v6 + 2);
      v7 = v6;
    }
    while ( v4 );
  }
LABEL_8:
  if ( v6 != v5 )
    if ( web::http::http_headers::_case_insensitive_cmp::operator()(
           (int)v2,
           (int *)&web::http::header_names::etag,
           (int *)v6 + 4) )
      v6 = v5;
    if ( v6 != v5 )
      sub_21E8AF4(&v14, (int *)v6 + 5);
      utility::conversions::to_utf8string(&v15, &v14);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v3 + 27,
        &v15);
      v8 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v15 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      v9 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v14 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
}


TreatmentRequest *__fastcall TreatmentRequest::~TreatmentRequest(TreatmentRequest *this)
{
  TreatmentRequest *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r5@2
  void *v5; // r7@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int *v8; // r0@12
  void (*v9)(void); // r3@17
  int v10; // r1@19
  void *v11; // r0@19
  int v12; // r1@20
  void *v13; // r0@20
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  unsigned int *v17; // r2@26
  signed int v18; // r1@28
  unsigned int *v19; // r2@30
  signed int v20; // r1@32

  v1 = this;
  *(_DWORD *)this = &off_26E74D4;
  v2 = *((_DWORD *)this + 27);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v5 = (void *)(*((_QWORD *)v1 + 12) >> 32);
  v4 = (void *)*((_QWORD *)v1 + 12);
  if ( v4 != v5 )
    do
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
      v4 = (char *)v4 + 4;
    while ( v4 != v5 );
    v4 = (void *)*((_DWORD *)v1 + 24);
  if ( v4 )
    operator delete(v4);
  v9 = (void (*)(void))*((_DWORD *)v1 + 22);
  if ( v9 )
    v9();
  v10 = *((_DWORD *)v1 + 19);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v10 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 18);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v12 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  CachedRequest::~CachedRequest(v1);
  return v1;
}


void __fastcall TreatmentRequest::_parseJsonResponse(TreatmentRequest *this, const web::json::value *a2)
{
  TreatmentRequest::_parseJsonResponse(this, a2);
}


void __fastcall TreatmentRequest::_parseJsonResponse(TreatmentRequest *this, const web::json::value *a2)
{
  web::json::value *v2; // r5@1
  TreatmentRequest *v3; // r8@1
  __int64 v4; // kr00_8@1
  _DWORD *v5; // r5@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int *v8; // r0@11
  int v9; // r4@15
  void *v10; // r5@15
  unsigned int *v11; // r2@17
  signed int v12; // r1@19
  int *v13; // r0@25
  void *v14; // r0@30
  int v15; // r7@31
  int *v16; // r10@31
  int v17; // r0@31
  int v18; // r4@32
  int *v19; // r6@33
  int v20; // r0@39
  int v21; // r4@52
  int *v22; // r7@56
  int *v23; // r5@58
  unsigned int *v24; // r2@59
  signed int v25; // r1@61
  int *v26; // r0@67
  unsigned int *v27; // r2@71
  signed int v28; // r1@73
  int v29; // [sp+8h] [bp-38h]@1
  void *v30; // [sp+Ch] [bp-34h]@1
  void *v31; // [sp+10h] [bp-30h]@1
  int v32; // [sp+14h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v29, "Features");
  webjson::getFieldAsStringArray((int)&v30, v2, &v29);
  v4 = *((_QWORD *)v3 + 12);
  *((_DWORD *)v3 + 24) = v30;
  v30 = 0;
  *((_DWORD *)v3 + 25) = v31;
  v31 = 0;
  *((_DWORD *)v3 + 26) = v32;
  v32 = 0;
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v5 = (_DWORD *)v4;
    do
    {
      v8 = (int *)(*v5 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*v5 - 4);
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
      ++v5;
    }
    while ( v5 != (_DWORD *)HIDWORD(v4) );
  }
  if ( (_DWORD)v4 )
    operator delete((void *)v4);
  v9 = (int)v31;
  v10 = v30;
  if ( v30 != v31 )
      v13 = (int *)(*(_DWORD *)v10 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*(_DWORD *)v10 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v10 = (char *)v10 + 4;
    while ( v10 != (void *)v9 );
    v10 = v30;
  if ( v10 )
    operator delete(v10);
  v14 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v16 = (int *)(*((_QWORD *)v3 + 12) >> 32);
  v15 = *((_QWORD *)v3 + 12);
  v17 = ((signed int)v16 - v15) >> 4;
  if ( v17 < 1 )
LABEL_38:
    if ( 1 == ((signed int)v16 - v15) >> 2 )
      v19 = (int *)v15;
      v20 = ((signed int)v16 - v15) >> 2;
      if ( v20 == 2 )
        v19 = (int *)v15;
      else
        if ( v20 != 3 )
          v19 = v16;
          goto LABEL_51;
        if ( sub_137DC80((int *)v15) )
        v19 = (int *)(v15 + 4);
      if ( sub_137DC80(v19) )
        goto LABEL_51;
      ++v19;
    if ( !sub_137DC80(v19) )
      v19 = v16;
  else
    v18 = v17 + 1;
    while ( 1 )
      if ( sub_137DC80((int *)v15) )
        break;
      v19 = (int *)(v15 + 4);
      if ( sub_137DC80((int *)(v15 + 4)) )
      v19 = (int *)(v15 + 8);
      if ( sub_137DC80((int *)(v15 + 8)) )
      v19 = (int *)(v15 + 12);
      if ( sub_137DC80((int *)(v15 + 12)) )
      --v18;
      v15 += 16;
      if ( v18 <= 1 )
        goto LABEL_38;
LABEL_51:
  if ( v19 != v16 )
    v21 = (int)(v16 - 1);
    v16 = v19;
    while ( (int *)v21 != v19 )
      if ( !sub_137DC80(v19) )
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v16, v19);
        ++v16;
  v22 = (int *)*((_DWORD *)v3 + 25);
  if ( v16 != v22 )
    if ( v22 != v16 )
      v23 = v16;
        v26 = (int *)(*v23 - 12);
        if ( v26 != &dword_28898C0 )
          v24 = (unsigned int *)(*v23 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
          }
          else
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        ++v23;
      while ( v23 != v22 );
    *((_DWORD *)v3 + 25) = v16;
}


void __fastcall TreatmentRequest::send(TreatmentRequest *this)
{
  TreatmentRequest::send(this);
}


int __fastcall TreatmentRequest::onComplete(TreatmentRequest *this)
{
  TreatmentRequest *v1; // r4@1
  int result; // r0@1
  void (__fastcall *v3)(char *, char *, signed int); // r3@2

  v1 = this;
  result = *((_DWORD *)this + 22);
  if ( result )
  {
    result = (*((int (__fastcall **)(_DWORD, _DWORD))v1 + 23))((char *)v1 + 80, (char *)v1 + 96);
    v3 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 22);
    if ( v3 )
    {
      v3((char *)v1 + 80, (char *)v1 + 80, 3);
      result = 0;
      *((_DWORD *)v1 + 22) = 0;
      *((_DWORD *)v1 + 23) = 0;
    }
  }
  return result;
}


void __fastcall TreatmentRequest::~TreatmentRequest(TreatmentRequest *this)
{
  TreatmentRequest *v1; // r0@1

  v1 = TreatmentRequest::~TreatmentRequest(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall TreatmentRequest::send(TreatmentRequest *this)
{
  TreatmentRequest *v1; // r4@1
  void *v2; // r0@1
  char *v3; // r0@2
  void (__fastcall *v4)(TreatmentRequest *, const void **); // r6@3
  const void **v5; // r0@3
  int v6; // r6@3
  void *v7; // r0@3
  void *v8; // r0@4
  int v9; // r5@5
  void *v10; // r0@5
  int v11; // r5@6
  void *v12; // r0@6
  __int64 v13; // r0@8
  int v14; // r5@8
  unsigned int *v15; // r1@9
  unsigned int v16; // r0@11
  unsigned int *v17; // r4@15
  unsigned int v18; // r0@17
  int v19; // r4@22
  unsigned int *v20; // r1@23
  unsigned int v21; // r0@25
  unsigned int *v22; // r5@29
  unsigned int v23; // r0@31
  int v24; // r4@36
  unsigned int *v25; // r1@37
  unsigned int v26; // r0@39
  unsigned int *v27; // r5@43
  unsigned int v28; // r0@45
  int v29; // r4@50
  unsigned int *v30; // r1@51
  unsigned int v31; // r0@53
  unsigned int *v32; // r5@57
  unsigned int v33; // r0@59
  void *v34; // r0@64
  unsigned int *v35; // r2@66
  signed int v36; // r1@68
  unsigned int *v37; // r2@70
  signed int v38; // r1@72
  unsigned int *v39; // r2@74
  signed int v40; // r1@76
  unsigned int *v41; // r2@78
  signed int v42; // r1@80
  unsigned int *v43; // r2@82
  signed int v44; // r1@84
  unsigned int *v45; // r2@86
  signed int v46; // r1@88
  unsigned int *v47; // r2@90
  signed int v48; // r1@92
  int v49; // [sp+0h] [bp-70h]@7
  int v50; // [sp+4h] [bp-6Ch]@7
  char v51; // [sp+8h] [bp-68h]@7
  int v52; // [sp+Ch] [bp-64h]@8
  int v53; // [sp+10h] [bp-60h]@6
  int v54; // [sp+14h] [bp-5Ch]@6
  int v55; // [sp+30h] [bp-40h]@5
  int v56; // [sp+34h] [bp-3Ch]@3
  int v57; // [sp+3Ch] [bp-34h]@3
  int v58; // [sp+40h] [bp-30h]@3
  int v59; // [sp+44h] [bp-2Ch]@7
  char *v60; // [sp+48h] [bp-28h]@1
  int v61; // [sp+4Ch] [bp-24h]@1
  int v62; // [sp+54h] [bp-1Ch]@1
  char v63; // [sp+58h] [bp-18h]@3

  v1 = this;
  sub_21E94B4((void **)&v62, "/ab?gameid=EAD78EDC569B4E008B41947E5F7BA6D9");
  v60 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v60, *(_DWORD *)(*((_DWORD *)v1 + 18) - 12) + 10);
  sub_21E7408((const void **)&v60, "treatment_", 0xAu);
  sub_21E72F0((const void **)&v60, (const void **)v1 + 18);
  Util::base64_encode((Util *)&v61, (const unsigned __int8 **)&v60, 1);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 16,
    &v61);
  v2 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v61 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  v3 = v60 - 12;
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v60 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  v4 = *(void (__fastcall **)(TreatmentRequest *, const void **))(*(_DWORD *)v1 + 32);
  v5 = CachedRequest::_readMetadataFromCache(v1);
  v4(v1, v5);
  j__ZNSt12__shared_ptrI11RequestDataLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v58,
    (int)&v63,
    (int *)v1 + 19,
    (int *)&web::http::methods::GET);
  v6 = *(_DWORD *)(v58 + 12);
  sub_21E94B4((void **)&v57, "X-MSEDGE-CLIENTID");
  utility::conversions::to_string_t(&v56, (int *)v1 + 18);
  web::http::http_headers::add<std::string>(v6 + 20, &v57, &v56);
  v7 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v56 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v57 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *(_DWORD *)(v58 + 12);
  utility::conversions::to_string_t(&v55, (int *)v1 + 27);
  web::http::http_headers::add<std::string>(v9 + 20, (int *)&web::http::header_names::if_none_match, &v55);
  v10 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v55 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = v58;
  web::uri::uri((int)&v53, &v62);
  web::http::details::_http_request::set_request_uri(
    *(web::http::details::_http_request **)(v11 + 12),
    (const web::uri *)&v53);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v54);
  v12 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v53 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v49 = v58;
  v50 = v59;
  v58 = 0;
  v59 = 0;
  CachedRequest::_sendRequest((int)&v51, (int)v1, (int)&v49);
  if ( (char *)v1 + 44 != &v51 )
    v13 = *(_QWORD *)&v51;
    *(_DWORD *)&v51 = 0;
    v52 = 0;
    *((_DWORD *)v1 + 11) = v13;
    v14 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v13);
    if ( v14 )
      v15 = (unsigned int *)(v14 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        v17 = (unsigned int *)(v14 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
        if ( &pthread_create )
        {
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        }
        else
          v18 = (*v17)--;
        if ( v18 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v19 = v52;
  if ( v52 )
    v20 = (unsigned int *)(v52 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v24 = v50;
  if ( v50 )
    v25 = (unsigned int *)(v50 + 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      v27 = (unsigned int *)(v24 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
  v29 = v59;
  if ( v59 )
    v30 = (unsigned int *)(v59 + 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
      v32 = (unsigned int *)(v29 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 12))(v29);
  v34 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v62 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
}


int __fastcall TreatmentRequest::TreatmentRequest(int a1, TreatmentService *a2, int *a3, int a4)
{
  TreatmentService *v4; // r7@1
  int v5; // r4@1
  int v6; // r5@1
  int *v7; // r6@1
  int *v8; // r0@1
  int *v9; // r0@1
  void (__fastcall *v10)(int, int, signed int); // r3@1

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = (int *)TreatmentService::getCacheLocation(a2);
  CachedRequest::CachedRequest(v5, (int)v4, v8, -1, -1, 3);
  *(_DWORD *)v5 = &off_26E74D4;
  sub_21E8AF4((int *)(v5 + 72), v7);
  v9 = (int *)TreatmentService::getHostUrl(v4);
  sub_21E8AF4((int *)(v5 + 76), v9);
  *(_DWORD *)(v5 + 88) = 0;
  v10 = *(void (__fastcall **)(int, int, signed int))(v6 + 8);
  if ( v10 )
  {
    v10(v5 + 80, v6, 2);
    *(_DWORD *)(v5 + 92) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v5 + 88) = *(_DWORD *)(v6 + 8);
  }
  *(_DWORD *)(v5 + 96) = 0;
  *(_DWORD *)(v5 + 100) = 0;
  *(_DWORD *)(v5 + 104) = 0;
  *(_DWORD *)(v5 + 108) = &unk_28898CC;
  return v5;
}


void __fastcall TreatmentRequest::_createMetadata(TreatmentRequest *this, int a2)
{
  TreatmentRequest::_createMetadata(this, a2);
}


void __fastcall TreatmentRequest::_responseHeaders(TreatmentRequest *this, const web::http::http_headers *a2)
{
  TreatmentRequest::_responseHeaders(this, a2);
}


void __fastcall TreatmentRequest::~TreatmentRequest(TreatmentRequest *this)
{
  TreatmentRequest::~TreatmentRequest(this);
}


void __fastcall TreatmentRequest::_createMetadata(TreatmentRequest *this, int a2)
{
  int v2; // r5@1
  TreatmentRequest *v3; // r4@1
  int *v4; // r6@1
  void *v5; // r0@3
  void *v6; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  int v11; // [sp+4h] [bp-24h]@1
  int v12; // [sp+8h] [bp-20h]@1
  int v13; // [sp+10h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  web::json::value::object(this, 0);
  sub_21E94B4((void **)&v13, "entityTag");
  v4 = (int *)web::json::value::operator[]((int)v3);
  utility::conversions::to_string_t(&v11, (int *)(v2 + 108));
  web::json::value::value(&v12, &v11);
  web::json::value::operator=(v4, &v12);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 96))();
  v12 = 0;
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v11 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v13 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


void __fastcall TreatmentRequest::_parseJsonMetadata(TreatmentRequest *this, const web::json::value *a2)
{
  TreatmentRequest::_parseJsonMetadata(this, a2);
}
