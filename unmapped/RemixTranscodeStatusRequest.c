

void __fastcall RemixTranscodeStatusRequest::send(RemixTranscodeStatusRequest *this)
{
  RemixTranscodeStatusRequest::send(this);
}


RemixTranscodeStatusRequest *__fastcall RemixTranscodeStatusRequest::~RemixTranscodeStatusRequest(RemixTranscodeStatusRequest *this)
{
  RemixTranscodeStatusRequest *v1; // r4@1
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
  *(_DWORD *)this = &off_26DE37C;
  v2 = *((_DWORD *)this + 25);
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
  v4 = *((_DWORD *)v1 + 24);
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


void __fastcall RemixTranscodeStatusRequest::send(RemixTranscodeStatusRequest *this)
{
  RemixTranscodeStatusRequest *v1; // r4@1
  const void **v2; // r5@1
  const void **v3; // r0@1
  char *v4; // r0@1
  int *v5; // r0@2
  void *v6; // r0@2
  __int64 v7; // r0@4
  int v8; // r6@4
  unsigned int *v9; // r1@5
  unsigned int v10; // r0@7
  unsigned int *v11; // r4@11
  unsigned int v12; // r0@13
  int v13; // r4@18
  unsigned int *v14; // r1@19
  unsigned int v15; // r0@21
  unsigned int *v16; // r6@25
  unsigned int v17; // r0@27
  int v18; // r4@32
  unsigned int *v19; // r1@33
  unsigned int v20; // r0@35
  unsigned int *v21; // r6@39
  unsigned int v22; // r0@41
  void *v23; // r0@46
  int v24; // r4@47
  unsigned int *v25; // r1@48
  unsigned int v26; // r0@50
  unsigned int *v27; // r5@54
  unsigned int v28; // r0@56
  char *v29; // r0@61
  unsigned int *v30; // r2@63
  signed int v31; // r1@65
  unsigned int *v32; // r2@67
  signed int v33; // r1@69
  unsigned int *v34; // r2@71
  signed int v35; // r1@73
  unsigned int *v36; // r2@75
  signed int v37; // r1@77
  int v38; // [sp+0h] [bp-60h]@3
  int v39; // [sp+4h] [bp-5Ch]@3
  char v40; // [sp+8h] [bp-58h]@3
  int v41; // [sp+Ch] [bp-54h]@4
  int v42; // [sp+10h] [bp-50h]@2
  int v43; // [sp+14h] [bp-4Ch]@2
  int v44; // [sp+18h] [bp-48h]@46
  int v45; // [sp+34h] [bp-2Ch]@2
  int v46; // [sp+38h] [bp-28h]@3
  char *v47; // [sp+3Ch] [bp-24h]@1
  char *v48; // [sp+40h] [bp-20h]@1
  char v49; // [sp+44h] [bp-1Ch]@2

  v1 = this;
  v47 = (char *)&unk_28898CC;
  v2 = (const void **)((char *)this + 100);
  sub_119CAF8((const void **)&v47, *(_DWORD *)(*((_DWORD *)this + 25) - 12) + 10);
  sub_119C894((const void **)&v47, "creations/", 0xAu);
  sub_119C8A4((const void **)&v47, v2);
  v3 = sub_119C894((const void **)&v47, "/status", 7u);
  v48 = (char *)*v3;
  *v3 = &unk_28898CC;
  v4 = v47 - 12;
  if ( (int *)(v47 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v47 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = (int *)RemixService::getAPIEndpoint(*((RemixService **)v1 + 15));
  j__ZNSt12__shared_ptrI11RequestDataLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v45,
    (int)&v49,
    v5,
    (int *)&web::http::methods::GET);
  utility::conversions::to_string_t(&v42, (int *)&v48);
  web::uri::uri((int)&v43, &v42);
  v6 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v42 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  web::http::details::_http_request::set_request_uri(
    *(web::http::details::_http_request **)(v45 + 12),
    (const web::uri *)&v43);
  v38 = v45;
  v39 = v46;
  v45 = 0;
  v46 = 0;
  RemixRequest::_sendRequest((int)&v40, (int)v1, (int)&v38);
  if ( (char *)v1 + 44 != &v40 )
    v7 = *(_QWORD *)&v40;
    *(_DWORD *)&v40 = 0;
    v41 = 0;
    *((_DWORD *)v1 + 11) = v7;
    v8 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v7);
    if ( v8 )
      v9 = (unsigned int *)(v8 + 4);
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
  v13 = v41;
  if ( v41 )
    v14 = (unsigned int *)(v41 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v18 = v39;
  if ( v39 )
    v19 = (unsigned int *)(v39 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v44);
  v23 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v43 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = v46;
  if ( v46 )
    v25 = (unsigned int *)(v46 + 4);
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
  v29 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v48 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
}


RemixRequest *__fastcall RemixTranscodeStatusRequest::RemixTranscodeStatusRequest(RemixRequest *a1, const RemixService *a2, int *a3, int a4)
{
  int v4; // r7@1
  int *v5; // r5@1
  RemixRequest *v6; // r4@1
  void (__fastcall *v7)(char *, int, signed int); // r3@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  RemixRequest::RemixRequest(a1, a2);
  *(_DWORD *)v6 = &off_26DE37C;
  *((_DWORD *)v6 + 20) = 0;
  v7 = *(void (__fastcall **)(char *, int, signed int))(v4 + 8);
  if ( v7 )
  {
    v7((char *)v6 + 72, v4, 2);
    *((_DWORD *)v6 + 21) = *(_DWORD *)(v4 + 12);
    *((_DWORD *)v6 + 20) = *(_DWORD *)(v4 + 8);
  }
  *((_DWORD *)v6 + 22) = 4;
  *((_DWORD *)v6 + 23) = 0;
  *((_DWORD *)v6 + 24) = &unk_28898CC;
  sub_119C854((int *)v6 + 25, v5);
  return v6;
}


void __fastcall RemixTranscodeStatusRequest::_parseJsonResponse(RemixTranscodeStatusRequest *this, const web::json::value *a2)
{
  web::json::value *v2; // r6@1
  RemixTranscodeStatusRequest *v3; // r4@1
  void *v4; // r0@1
  char *v5; // r0@2
  void *v6; // r0@3
  void *v12; // r0@4
  void *v13; // r0@6
  void *v14; // r0@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  unsigned int *v21; // r2@21
  signed int v22; // r1@23
  unsigned int *v23; // r2@41
  signed int v24; // r1@43
  unsigned int *v25; // r2@45
  signed int v26; // r1@47
  int v27; // [sp+4h] [bp-34h]@6
  int v28; // [sp+8h] [bp-30h]@6
  int v29; // [sp+10h] [bp-28h]@4
  char *v30; // [sp+14h] [bp-24h]@1
  int v31; // [sp+1Ch] [bp-1Ch]@1
  int v32; // [sp+20h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_119C884((void **)&v31, "encodingStatus");
  v30 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v32, v2, &v31, (int *)&v30);
  *((_DWORD *)v3 + 22) = RemixTranscodeStatusRequest::TranscodeStageFromString((unsigned int *)&v32);
  v4 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v32 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v30 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v31 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v29, "percentComplete");
  _R0 = webjson::getFieldAsFloat(v2, &v29, 0);
  __asm
    VMOV            S0, R0
    VSTR            S0, [R4,#0x5C]
  v12 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v29 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  if ( *((_DWORD *)v3 + 22) == 2 )
    sub_119C884((void **)&v27, "manifest");
    webjson::getFieldAsSerializedJson(&v28, v2, &v27);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v3 + 24,
      &v28);
    v13 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    v14 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v27 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
}


void __fastcall RemixTranscodeStatusRequest::~RemixTranscodeStatusRequest(RemixTranscodeStatusRequest *this)
{
  RemixTranscodeStatusRequest *v1; // r0@1

  v1 = RemixTranscodeStatusRequest::~RemixTranscodeStatusRequest(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall RemixTranscodeStatusRequest::_parseJsonResponse(RemixTranscodeStatusRequest *this, const web::json::value *a2)
{
  RemixTranscodeStatusRequest::_parseJsonResponse(this, a2);
}


int __fastcall RemixTranscodeStatusRequest::onComplete(RemixTranscodeStatusRequest *this)
{
  RemixTranscodeStatusRequest *v1; // r4@1
  int result; // r0@1
  void (__fastcall *v3)(char *, char *, signed int); // r3@2

  v1 = this;
  result = *((_DWORD *)this + 20);
  if ( result )
  {
    result = (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 21))(
               (char *)v1 + 72,
               *((_DWORD *)v1 + 17),
               (char *)v1 + 88);
    v3 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 20);
    if ( v3 )
    {
      v3((char *)v1 + 72, (char *)v1 + 72, 3);
      result = 0;
      *((_DWORD *)v1 + 20) = 0;
      *((_DWORD *)v1 + 21) = 0;
    }
  }
  return result;
}


signed int __fastcall RemixTranscodeStatusRequest::TranscodeStageFromString(unsigned int *a1)
{
  unsigned int *v1; // r8@1
  char v2; // r0@1
  double v3; // r0@3
  void *v4; // r0@3
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int v8; // r9@8
  unsigned int v9; // r10@8
  int v10; // r11@8
  int v11; // r6@8
  int v12; // r7@9
  _DWORD *v13; // r8@9
  int v14; // r4@9
  _DWORD *v15; // r1@11
  size_t v16; // r2@11
  int v17; // r5@13
  int v18; // r4@15
  signed int v19; // r2@23
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  unsigned int *v23; // r2@34
  signed int v24; // r1@36
  unsigned int *v25; // r2@38
  signed int v26; // r1@40
  unsigned int *v27; // r2@42
  signed int v28; // r1@44
  unsigned int *v29; // r2@46
  signed int v30; // r1@48
  void *s1; // [sp+1Ch] [bp-74h]@8
  int v32; // [sp+2Ch] [bp-64h]@3
  int v33; // [sp+30h] [bp-60h]@3
  int v34; // [sp+34h] [bp-5Ch]@3
  int v35; // [sp+38h] [bp-58h]@3
  int v36; // [sp+3Ch] [bp-54h]@3
  int v37; // [sp+40h] [bp-50h]@3
  int v38; // [sp+44h] [bp-4Ch]@3
  int v39; // [sp+48h] [bp-48h]@3
  char v40; // [sp+4Ch] [bp-44h]@3

  v1 = a1;
  v2 = byte_27D4544;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire(&byte_27D4544) )
  {
    sub_119C884((void **)&v32, "notstarted");
    v33 = 0;
    sub_119C884((void **)&v34, "running");
    v35 = 1;
    sub_119C884((void **)&v36, "completed");
    v37 = 2;
    sub_119C884((void **)&v38, "failed");
    v39 = 3;
    LODWORD(v3) = &dword_27D4548;
    std::_Hashtable<std::string,std::pair<std::string const,RemixTranscodeStatusRequest::TranscodeStage>,std::allocator<std::pair<std::string const,RemixTranscodeStatusRequest::TranscodeStage>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,RemixTranscodeStatusRequest::TranscodeStage> const*>(
      v3,
      (int **)&v40,
      0);
    v4 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
    {
      v23 = (unsigned int *)(v38 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v4);
    }
    v5 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v36 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    v6 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v34 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    v7 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v32 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    _cxa_atexit(std::unordered_map<std::string,RemixTranscodeStatusRequest::TranscodeStage,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,RemixTranscodeStatusRequest::TranscodeStage>>>::~unordered_map);
    j___cxa_guard_release(&byte_27D4544);
  }
  Util::toLower(&s1, *(_DWORD *)(*v1 - 12), *v1);
  v8 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v9 = unk_27D454C;
  v10 = v8 % unk_27D454C;
  v11 = *(_DWORD *)(dword_27D4548 + 4 * (v8 % unk_27D454C));
  if ( v11 )
    v12 = *(_DWORD *)v11;
    v13 = s1;
    v14 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    while ( 1 )
      if ( v14 == v8 )
        v15 = *(_DWORD **)(v12 + 4);
        v16 = *(v13 - 3);
        if ( v16 == *(v15 - 3) && !memcmp(v13, v15, v16) )
          break;
      v17 = *(_DWORD *)v12;
      if ( !*(_DWORD *)v12 )
        v18 = 0;
        goto LABEL_21;
      v14 = *(_DWORD *)(v17 + 12);
      v11 = v12;
      v12 = *(_DWORD *)v12;
      if ( *(_DWORD *)(v17 + 12) % v9 != v10 )
    if ( v11 )
      v18 = *(_DWORD *)v11;
    else
      v18 = 0;
  else
    v18 = 0;
LABEL_21:
  if ( v13 - 3 != &dword_28898C0 )
    v21 = v13 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13 - 3);
  if ( v18 )
    v19 = *(_DWORD *)(v18 + 8);
    v19 = 4;
  return v19;
}


void __fastcall RemixTranscodeStatusRequest::~RemixTranscodeStatusRequest(RemixTranscodeStatusRequest *this)
{
  RemixTranscodeStatusRequest::~RemixTranscodeStatusRequest(this);
}
