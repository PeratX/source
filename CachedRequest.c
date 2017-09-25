

web::json::value *__fastcall CachedRequest::_loadFromCache(CachedRequest *this)
{
  CachedRequest *v1; // r6@1
  web::json::value *v2; // r7@1
  __int64 v3; // r0@2 OVERLAPPED
  int v4; // r2@2
  int v5; // r3@2
  int v6; // r5@2
  int v7; // r7@2
  unsigned __int64 v8; // r2@2
  _DWORD *v9; // r5@3
  void *v10; // r0@9
  signed int v11; // r5@12
  char *v12; // r0@14
  char v13; // r1@16
  void *v14; // r0@21
  unsigned int *v16; // r2@25
  signed int v17; // r1@27
  int v18; // r2@33
  signed int v19; // r1@35
  signed int v20; // r1@39
  RakNet *v21; // [sp+8h] [bp-1520h]@1
  int v22; // [sp+Ch] [bp-151Ch]@7
  int v23; // [sp+10h] [bp-1518h]@7
  int v24; // [sp+14h] [bp-1514h]@3
  int v25; // [sp+18h] [bp-1510h]@3
  char *v26; // [sp+20h] [bp-1508h]@3
  int v27; // [sp+24h] [bp-1504h]@2
  int v28[3]; // [sp+28h] [bp-1500h]@2
  void **v29; // [sp+38h] [bp-14F0h]@2
  int v30; // [sp+3Ch] [bp-14ECh]@2
  __int64 v31; // [sp+40h] [bp-14E8h]@2
  void **v32; // [sp+1074h] [bp-4B4h]@2
  int v33; // [sp+1088h] [bp-4A0h]@2
  int v34; // [sp+10E4h] [bp-444h]@2
  __int16 v35; // [sp+10E8h] [bp-440h]@2
  int v36; // [sp+10ECh] [bp-43Ch]@2
  int v37; // [sp+10F0h] [bp-438h]@2
  int v38; // [sp+10F4h] [bp-434h]@2
  int v39; // [sp+10F8h] [bp-430h]@2
  int v40; // [sp+10FCh] [bp-42Ch]@2
  int v41; // [sp+1100h] [bp-428h]@2

  v1 = this;
  v21 = _stack_chk_guard;
  v2 = (web::json::value *)*((_DWORD *)this + 17);
  if ( !v2 )
  {
    v3 = *(_QWORD *)((char *)this + 60);
    v4 = *(_DWORD *)(HIDWORD(v3) - 12);
    v5 = *(_DWORD *)(v3 - 12);
    v29 = (void **)*(_QWORD *)((char *)v1 + 60);
    v30 = v5;
    v31 = *(__int64 *)((char *)&v3 + 4);
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v40, (int)&v29, 2);
    sub_21E94B4((void **)&v27, (const char *)&v41);
    v6 = v27;
    v7 = *(_DWORD *)(v27 - 12);
    sub_21B6308((int)&v32);
    v32 = &off_26D3AF0;
    v34 = 0;
    v35 = 0;
    v39 = 0;
    v38 = 0;
    v37 = 0;
    v36 = 0;
    v28[0] = v6;
    v28[1] = v7;
    Core::FileStream::FileStream((int)&v29, (int)off_26D7EA4, (__int64 *)v28, 8);
    v29 = &off_26D7E64;
    v32 = &off_26D7E8C;
    LODWORD(v31) = &off_26D7E78;
    if ( v33 )
      goto LABEL_51;
    v26 = std::string::_S_construct<std::istreambuf_iterator<char,std::char_traits<char>>>(v36, -1, 0, -1);
    v24 = 0;
    v25 = ((int (__cdecl *)(char *))byte_21E9640)(v26);
    v2 = (web::json::value *)operator new(4u);
    *(_DWORD *)v2 = 0;
    web::json::value::value(v2);
    v9 = (_DWORD *)*((_DWORD *)v1 + 17);
    *((_DWORD *)v1 + 17) = v2;
    if ( v9 )
    {
      if ( *v9 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*v9 + 96))(*v9);
      operator delete(v9);
      v2 = (web::json::value *)*((_DWORD *)v1 + 17);
    }
    utility::conversions::to_string_t(&v22, (int *)&v26);
    web::json::value::parse((web::json::value *)&v23, &v22, &v24);
    web::json::value::operator=((int *)v2, &v23);
    if ( v23 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v23 + 96))(v23);
    v23 = 0;
    v10 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v18 = v22 - 4;
      if ( &pthread_create )
      {
        __dmb();
        do
        {
          v19 = __ldrex((unsigned int *)v8);
          HIDWORD(v8) = v19 - 1;
          v2 = (web::json::value *)__strex(v19 - 1, (unsigned int *)v8);
        }
        while ( v2 );
      }
      else
        v19 = *(_DWORD *)v8;
        HIDWORD(v8) = *(_DWORD *)v8 - 1;
        *(_DWORD *)v8 = HIDWORD(v8);
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    if ( v24 || web::json::value::type(*((web::json::value **)v1 + 17)) != 3 )
      v11 = 1;
    else
      v11 = 0;
    LODWORD(v8) = &dword_28898C0;
    v12 = v26 - 12;
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      LODWORD(v8) = v26 - 4;
          v20 = __ldrex((unsigned int *)v8);
          HIDWORD(v8) = v20 - 1;
        while ( __strex(v20 - 1, (unsigned int *)v8) );
        v20 = *(_DWORD *)v8;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    if ( v11 )
LABEL_51:
      v13 = byte_27E5348;
      __dmb();
      if ( v13 & 1 )
        v2 = (web::json::value *)algn_27E5344;
      else if ( j___cxa_guard_acquire((unsigned int *)&byte_27E5348) )
        web::json::value::null((web::json::value *)algn_27E5344);
        _cxa_atexit(web::json::value::~value);
        j___cxa_guard_release((unsigned int *)&byte_27E5348);
    v29 = &off_26D7EEC;
    v32 = &off_26D7F14;
    LODWORD(v31) = &off_26D7F00;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)((char *)&v31 + 4), (int)&off_26D7F14, v8);
    v29 = &off_26D7F6C;
    v32 = &off_26D7F80;
    v30 = 0;
    sub_21B6560(&v32);
    v14 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v27 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
  }
  if ( _stack_chk_guard != v21 )
    _stack_chk_fail(_stack_chk_guard - v21);
  return v2;
}


unsigned int __fastcall CachedRequest::_sendRequest(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r7@1
  int v5; // r9@1
  int v6; // r8@1
  unsigned int v7; // r0@2
  unsigned int *v8; // r5@2
  unsigned int v9; // r1@5
  unsigned int v10; // r2@6
  int v11; // r11@7
  unsigned int v12; // r0@9
  unsigned int *v13; // r4@12
  unsigned int v14; // r0@14
  unsigned int v15; // r0@19
  unsigned int v16; // r0@25
  unsigned int v17; // r0@32
  unsigned int v18; // r0@38
  __int64 v19; // kr00_8@43
  unsigned int *v20; // r0@44
  unsigned int v21; // r1@46
  int v22; // r0@49
  unsigned int *v23; // r0@50
  unsigned int v24; // r1@52
  unsigned int v25; // r0@57
  unsigned int *v26; // r0@61
  unsigned int v27; // r1@63
  unsigned int v28; // r0@68
  unsigned int *v29; // r0@72
  unsigned int v30; // r1@74
  int v31; // r0@77
  unsigned int *v32; // r2@78
  unsigned int v33; // r1@80
  int v34; // r0@85
  unsigned int *v35; // r2@86
  unsigned int v36; // r1@88
  int v37; // r6@93
  unsigned int *v38; // r1@94
  unsigned int v39; // r0@96
  unsigned int *v40; // r5@100
  unsigned int v41; // r0@102
  int v42; // r0@107
  unsigned int *v43; // r2@108
  unsigned int v44; // r1@110
  int v45; // r0@115
  unsigned int *v46; // r2@116
  unsigned int v47; // r1@118
  int v48; // r6@123
  unsigned int *v49; // r1@124
  unsigned int v50; // r0@126
  unsigned int *v51; // r5@130
  unsigned int v52; // r0@132
  int v53; // r6@137
  unsigned int *v54; // r1@138
  unsigned int v55; // r0@140
  unsigned int *v56; // r5@144
  unsigned int v57; // r0@146
  int v58; // r6@151
  unsigned int *v59; // r1@152
  unsigned int v60; // r0@154
  unsigned int *v61; // r5@158
  unsigned int v62; // r0@160
  unsigned int *v63; // r1@166
  unsigned int v64; // r0@168
  unsigned int result; // r0@175
  int v66; // [sp+4h] [bp-64h]@66
  int v67; // [sp+8h] [bp-60h]@66
  __int64 v68; // [sp+Ch] [bp-5Ch]@71
  int v69; // [sp+14h] [bp-54h]@55
  int v70; // [sp+18h] [bp-50h]@55
  __int64 v71; // [sp+1Ch] [bp-4Ch]@60
  int *v72; // [sp+24h] [bp-44h]@49
  int v73; // [sp+28h] [bp-40h]@49
  char v74; // [sp+2Ch] [bp-3Ch]@49
  int v75; // [sp+30h] [bp-38h]@151
  char v76; // [sp+34h] [bp-34h]@55
  int v77; // [sp+38h] [bp-30h]@123
  char v78; // [sp+3Ch] [bp-2Ch]@66
  int v79; // [sp+40h] [bp-28h]@93

  v3 = a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = a1;
  if ( !v5 )
    std::__throw_bad_weak_ptr();
  v7 = *(_DWORD *)(v5 + 4);
  v8 = (unsigned int *)(v5 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v7 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v9 = __ldrex(v8);
      if ( v9 == v7 )
        break;
      __clrex();
      v7 = v9;
    }
    v10 = __strex(v7 + 1, v8);
    v7 = v9;
  }
  while ( v10 );
  __dmb();
  v11 = *(_DWORD *)(v3 + 4);
  if ( &pthread_create )
    __dmb();
    do
      v12 = __ldrex(v8);
    while ( __strex(v12 + 1, v8) );
  else
    ++*v8;
  v13 = (unsigned int *)(v5 + 8);
      v14 = __ldrex(v13);
    while ( __strex(v14 + 1, v13) );
    ++*v13;
      v15 = __ldrex(v8);
    while ( __strex(v15 - 1, v8) );
    v15 = (*v8)--;
  if ( v15 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( &pthread_create )
      do
        v16 = __ldrex(v13);
      while ( __strex(v16 - 1, v13) );
    else
      v16 = (*v13)--;
    if ( v16 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      v17 = __ldrex(v8);
    while ( __strex(v17 - 1, v8) );
    v17 = (*v8)--;
  if ( v17 == 1 )
        v18 = __ldrex(v13);
      while ( __strex(v18 - 1, v13) );
      v18 = (*v13)--;
    if ( v18 == 1 )
  v19 = *(_QWORD *)(v3 + 52);
  if ( HIDWORD(v19) )
    v20 = (unsigned int *)(HIDWORD(v19) + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      ++*v20;
  RequestHandler::_getAuthorizationHeader((int)&v74, v3, *(int **)v4);
  v72 = *(int **)v4;
  v22 = *(_DWORD *)(v4 + 4);
  v73 = v22;
  if ( v22 )
    v23 = (unsigned int *)(v22 + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 + 1, v23) );
      ++*v23;
  sub_1361A48((int)&v76, (int)&v74, (int)&v72);
  v69 = v11;
  v70 = v5;
      v25 = __ldrex(v13);
    while ( __strex(v25 + 1, v13) );
  v71 = v19;
    v26 = (unsigned int *)(HIDWORD(v19) + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 + 1, v26) );
      ++*v26;
  sub_13623AC((int)&v78, (int)&v76, (int)&v69);
  v66 = v11;
  v67 = v5;
      v28 = __ldrex(v13);
    while ( __strex(v28 + 1, v13) );
  v68 = v19;
    v29 = (unsigned int *)(HIDWORD(v19) + 8);
        v30 = __ldrex(v29);
      while ( __strex(v30 + 1, v29) );
      ++*v29;
  sub_1362D4C(v6, (int)&v78, (int)&v66);
  v31 = HIDWORD(v68);
  if ( HIDWORD(v68) )
    v32 = (unsigned int *)(HIDWORD(v68) + 8);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 == 1 )
      (*(void (**)(void))(*(_DWORD *)v31 + 12))();
  v34 = v67;
  if ( v67 )
    v35 = (unsigned int *)(v67 + 8);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 == 1 )
      (*(void (**)(void))(*(_DWORD *)v34 + 12))();
  v37 = v79;
  if ( v79 )
    v38 = (unsigned int *)(v79 + 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 == 1 )
      v40 = (unsigned int *)(v37 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
      if ( &pthread_create )
      {
        __dmb();
        do
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
      }
      else
        v41 = (*v40)--;
      if ( v41 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
  v42 = HIDWORD(v71);
  if ( HIDWORD(v71) )
    v43 = (unsigned int *)(HIDWORD(v71) + 8);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 == 1 )
      (*(void (**)(void))(*(_DWORD *)v42 + 12))();
  v45 = v70;
  if ( v70 )
    v46 = (unsigned int *)(v70 + 8);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 == 1 )
      (*(void (**)(void))(*(_DWORD *)v45 + 12))();
  v48 = v77;
  if ( v77 )
    v49 = (unsigned int *)(v77 + 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 == 1 )
      v51 = (unsigned int *)(v48 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 8))(v48);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 12))(v48);
  v53 = v73;
  if ( v73 )
    v54 = (unsigned int *)(v73 + 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 == 1 )
      v56 = (unsigned int *)(v53 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 8))(v53);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 12))(v53);
  v58 = v75;
  if ( v75 )
    v59 = (unsigned int *)(v75 + 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 == 1 )
      v61 = (unsigned int *)(v58 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v58 + 8))(v58);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v58 + 12))(v58);
    v63 = (unsigned int *)(HIDWORD(v19) + 8);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v19) + 12))(HIDWORD(v19));
      result = __ldrex(v13);
    while ( __strex(result - 1, v13) );
    result = (*v13)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


signed int __fastcall CachedRequest::_useCachedResponse(CachedRequest *this)
{
  CachedRequest *v1; // r4@1
  const void **v2; // r0@1
  web::json::value *v3; // r0@1
  signed int v4; // r4@2
  int v6; // [sp+4h] [bp-Ch]@1

  v1 = this;
  v2 = CachedRequest::_readResponseFromCache(this);
  v3 = web::json::value::value((web::json::value *)&v6, (const web::json::value *)v2);
  if ( web::json::value::type(v3) == 3 )
  {
    (*(void (__fastcall **)(CachedRequest *, int *))(*(_DWORD *)v1 + 28))(v1, &v6);
    v4 = 1;
  }
  else
    v4 = 0;
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 96))();
  return v4;
}


CachedRequest *__fastcall CachedRequest::~CachedRequest(CachedRequest *this)
{
  CachedRequest *v1; // r4@1
  void *v2; // r5@1
  int v3; // r1@5
  void *v4; // r0@5
  int v5; // r1@6
  void *v6; // r0@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14

  v1 = this;
  *(_DWORD *)this = &off_26E70E8;
  v2 = (void *)*((_DWORD *)this + 17);
  if ( v2 )
  {
    if ( *(_DWORD *)v2 )
      (*(void (**)(void))(**(_DWORD **)v2 + 96))();
    operator delete(v2);
  }
  *((_DWORD *)v1 + 17) = 0;
  v3 = *((_DWORD *)v1 + 16);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = *((_DWORD *)v1 + 15);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  RequestHandler::~RequestHandler(v1);
  return v1;
}


const void **__fastcall CachedRequest::_readMetadataFromCache(CachedRequest *this)
{
  web::json::value *v1; // r4@1
  const void **v2; // r5@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v1 = CachedRequest::_loadFromCache(this);
  sub_21E94B4((void **)&v7, "metadataJson");
  v2 = webjson::getFieldAsObject(v1, &v7);
  v3 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  return v2;
}


int __fastcall CachedRequest::CachedRequest(int a1, int a2, int *a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  int *v7; // r5@1

  v6 = a1;
  v7 = a3;
  RequestHandler::RequestHandler(a1, a2, a4, a5, a6);
  *(_DWORD *)v6 = &off_26E70E8;
  sub_21E8AF4((int *)(v6 + 60), v7);
  *(_QWORD *)(v6 + 64) = (unsigned int)&unk_28898CC;
  return v6;
}


signed int __fastcall CachedRequest::update(CachedRequest *this)
{
  CachedRequest *v1; // r4@1
  signed int v2; // r5@2
  int v3; // r8@3
  __int64 v4; // r2@3
  signed __int64 v5; // kr00_8@3
  int v6; // r9@3
  __int64 v7; // kr08_8@3
  signed int v8; // r1@3
  signed int v9; // r0@5
  bool v10; // zf@9
  int v11; // r0@13
  unsigned int *v12; // r0@14
  unsigned int v13; // r1@16
  int v14; // r0@19
  unsigned int *v15; // r2@20
  unsigned int v16; // r1@22
  void (__fastcall *v17)(CachedRequest *, const void **); // r6@27
  const void **v18; // r0@27
  signed int v19; // r0@28
  signed int v20; // r1@30
  int v22; // [sp+0h] [bp-38h]@13
  int v23; // [sp+4h] [bp-34h]@13
  __int64 v24; // [sp+8h] [bp-30h]@3

  v1 = this;
  if ( *((_BYTE *)this + 40) )
  {
    v2 = 1;
  }
  else
    v3 = (*(int (__fastcall **)(CachedRequest *))(*(_DWORD *)this + 16))(this);
    sub_21E034C(&v24);
    v4 = *((_QWORD *)v1 + 4);
    v5 = 1000000000LL * *((_DWORD *)v1 + 6);
    v6 = HIDWORD(v5) + 1000000000 * *((_DWORD *)v1 + 7);
    v7 = v24 - v4;
    v8 = 0;
    if ( (unsigned int)v5 >= (signed int)v24 - (signed int)v4 )
      v8 = 1;
    v9 = 0;
    v2 = 0;
    if ( v6 >= SHIDWORD(v7) )
      v9 = 1;
    if ( v6 == HIDWORD(v7) )
      v9 = v8;
    v10 = v3 == 0;
    if ( !v3 )
      v10 = v9 == 0;
    if ( v10 )
    {
      v22 = *((_DWORD *)v1 + 13);
      v11 = *((_DWORD *)v1 + 14);
      v23 = v11;
      if ( v11 )
      {
        v12 = (unsigned int *)(v11 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 + 1, v12) );
        }
        else
          ++*v12;
      }
      RequestHandler::_recordTelemetry((int)&v22, 0, 3);
      v14 = v23;
      if ( v23 )
        v15 = (unsigned int *)(v23 + 8);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__cdecl **)(int))(*(_DWORD *)v14 + 12))(v14);
      v17 = *(void (__fastcall **)(CachedRequest *, const void **))(*(_DWORD *)v1 + 28);
      v18 = CachedRequest::_readResponseFromCache(v1);
      v17(v1, v18);
    }
    v19 = 0;
    if ( (unsigned int)v5 < (unsigned int)v7 )
      v19 = 1;
    v20 = 0;
    if ( v6 < SHIDWORD(v7) )
      v20 = 1;
      v20 = v19;
    if ( v3 | v20 )
      v2 = 1;
      *((_BYTE *)v1 + 40) = 1;
      (*(void (__fastcall **)(CachedRequest *))(*(_DWORD *)v1 + 20))(v1);
  return v2;
}


char *__fastcall CachedRequest::_writeToCache(CachedRequest *this, const web::json::value *a2, const web::json::value *a3)
{
  CachedRequest *v3; // r4@1
  const web::json::value *v4; // r6@1
  const web::json::value *v5; // r5@1
  int *v6; // r7@1
  void *v7; // r0@3
  int *v8; // r6@4
  void *v9; // r0@6
  void *v10; // r0@7
  __int64 v11; // r0@10 OVERLAPPED
  int v12; // r2@10
  int v13; // r3@10
  int v14; // r7@10
  int v15; // r1@10
  unsigned __int64 v16; // r2@10
  unsigned __int64 v17; // r2@10
  void *v18; // r0@10
  char *result; // r0@13
  unsigned int *v20; // r2@15
  signed int v21; // r1@17
  unsigned int *v22; // r2@19
  signed int v23; // r1@21
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  unsigned int *v26; // r2@27
  signed int v27; // r1@29
  int v28; // [sp+8h] [bp-8h]@8
  int v29; // [sp+Ch] [bp-4h]@8
  char v30; // [sp+10h] [bp+0h]@8
  void (*v31)(void); // [sp+18h] [bp+8h]@8
  int v32; // [sp+24h] [bp+14h]@7
  int v33; // [sp+28h] [bp+18h]@7
  int v34; // [sp+2Ch] [bp+1Ch]@4
  int v35; // [sp+34h] [bp+24h]@4
  int v36; // [sp+38h] [bp+28h]@1
  int v37; // [sp+40h] [bp+30h]@1
  int v38; // [sp+44h] [bp+34h]@1
  int v39; // [sp+48h] [bp+38h]@10
  int v40; // [sp+4Ch] [bp+3Ch]@10
  __int64 v41; // [sp+50h] [bp+40h]@10
  __int64 v42; // [sp+60h] [bp+50h]@10
  void **v43; // [sp+68h] [bp+58h]@10
  int v44; // [sp+6Ch] [bp+5Ch]@10
  void **v45; // [sp+70h] [bp+60h]@10
  int v46; // [sp+74h] [bp+64h]@10
  void **v47; // [sp+10A4h] [bp+1094h]@10
  int v48; // [sp+1114h] [bp+1104h]@10
  __int16 v49; // [sp+1118h] [bp+1108h]@10
  int v50; // [sp+111Ch] [bp+110Ch]@10
  int v51; // [sp+1120h] [bp+1110h]@10
  int v52; // [sp+1124h] [bp+1114h]@10
  int v53; // [sp+1128h] [bp+1118h]@10
  int v54; // [sp+112Ch] [bp+111Ch]@10
  int v55; // [sp+1130h] [bp+1120h]@10
  int v56; // [sp+1530h] [bp+1520h]@10
  RakNet *v57; // [sp+1534h] [bp+1524h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v57 = _stack_chk_guard;
  web::json::value::object((web::json::value *)&v38, 0);
  sub_21E94B4((void **)&v37, "metadataJson");
  v6 = (int *)web::json::value::operator[]((int)&v38);
  web::json::value::value((web::json::value *)&v36, v4);
  web::json::value::operator=(v6, &v36);
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 96))();
  v36 = 0;
  v7 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v35, "responseJson");
  v8 = (int *)web::json::value::operator[]((int)&v38);
  web::json::value::value((web::json::value *)&v34, v5);
  web::json::value::operator=(v8, &v34);
  if ( v34 )
    (*(void (**)(void))(*(_DWORD *)v34 + 96))();
  v34 = 0;
  v9 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v35 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  web::json::value::serialize((web::json::value *)&v32, (int)&v38);
  utility::conversions::to_utf8string(&v33, &v32);
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v32 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v28 = *((_DWORD *)v3 + 15);
  v29 = *(_DWORD *)(v28 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v30, (__int64 *)&v28);
  if ( v31 )
    v31();
  v11 = *(_QWORD *)((char *)v3 + 60);
  v12 = *(_DWORD *)(HIDWORD(v11) - 12);
  v13 = *(_DWORD *)(v11 - 12);
  v39 = *(_QWORD *)((char *)v3 + 60);
  v40 = v13;
  v41 = *(__int64 *)((char *)&v11 + 4);
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v54, (int)&v39, 2);
  v14 = v56;
  sub_21B6308((int)&v47);
  v47 = &off_26D3AF0;
  v48 = 0;
  v49 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  v50 = 0;
  LODWORD(v42) = &v55;
  HIDWORD(v42) = v14;
  Core::FileStream::FileStream((int)&v43, (int)off_26D81A4, &v42, 16);
  v43 = &off_26D8170;
  v47 = &off_26D8198;
  v45 = &off_26D8184;
  sub_21CBD44((char *)&v45, v33, *(_DWORD *)(v33 - 12));
  Core::FileStdStreamBuf::close((Core::FileStdStreamBuf *)&v46, v15, v16);
  v43 = &off_26D679C;
  v47 = &off_26D67C4;
  v45 = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v46, (int)&off_26D67C4, v17);
  v43 = &off_26D67DC;
  v47 = &off_26D67F0;
  v44 = 0;
  sub_21B6560(&v47);
  v18 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v33 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  if ( v38 )
    (*(void (**)(void))(*(_DWORD *)v38 + 96))();
  result = (char *)(_stack_chk_guard - v57);
  if ( _stack_chk_guard != v57 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall CachedRequest::~CachedRequest(CachedRequest *this)
{
  CachedRequest *v1; // r0@1

  v1 = CachedRequest::~CachedRequest(this);
  j_j_j__ZdlPv_5((void *)v1);
}


const void **__fastcall CachedRequest::_readResponseFromCache(CachedRequest *this)
{
  web::json::value *v1; // r4@1
  const void **v2; // r5@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v1 = CachedRequest::_loadFromCache(this);
  sub_21E94B4((void **)&v7, "responseJson");
  v2 = webjson::getFieldAsObject(v1, &v7);
  v3 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  return v2;
}


void __fastcall CachedRequest::~CachedRequest(CachedRequest *this)
{
  CachedRequest::~CachedRequest(this);
}
