

StreamFileDownloader::DownloadInfo *__fastcall StreamFileDownloader::DownloadInfo::~DownloadInfo(StreamFileDownloader::DownloadInfo *this)
{
  StreamFileDownloader::DownloadInfo *v1; // r4@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  void (*v4)(void); // r3@5
  void *v5; // r0@7
  void (*v6)(void); // r3@9
  void (*v7)(void); // r3@11
  int v8; // r5@13
  unsigned int *v9; // r1@14
  unsigned int v10; // r0@16
  unsigned int *v11; // r6@20
  unsigned int v12; // r0@22
  int v13; // r5@27
  unsigned int *v14; // r1@28
  unsigned int v15; // r0@30
  unsigned int *v16; // r6@34
  unsigned int v17; // r0@36
  int v18; // r1@41
  void *v19; // r0@41
  int v20; // r1@42
  void *v21; // r0@42
  int *v22; // r0@43
  unsigned int *v24; // r2@45
  signed int v25; // r1@47
  unsigned int *v26; // r2@49
  signed int v27; // r1@51
  unsigned int *v28; // r2@53
  signed int v29; // r1@55

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 35);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 31);
  if ( v3 )
    v3();
  v4 = (void (*)(void))*((_DWORD *)v1 + 27);
  if ( v4 )
    v4();
  v5 = (void *)*((_DWORD *)v1 + 24);
  if ( v5 )
    operator delete(v5);
  *((_DWORD *)v1 + 24) = 0;
  v6 = (void (*)(void))*((_DWORD *)v1 + 22);
  if ( v6 )
    v6();
  v7 = (void (*)(void))*((_DWORD *)v1 + 18);
  if ( v7 )
    v7();
  *((_DWORD *)v1 + 13) = &off_26DDAC4;
  v8 = *((_DWORD *)v1 + 15);
  if ( v8 )
  {
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
  }
  v13 = *((_DWORD *)v1 + 12);
  if ( v13 )
    v14 = (unsigned int *)(v13 + 4);
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
  v18 = *((_DWORD *)v1 + 2);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v18 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 1);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v20 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (int *)(*(_DWORD *)v1 - 12);
  if ( v22 != &dword_28898C0 )
    v28 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  return v1;
}


void __fastcall StreamFileDownloader::cancelDownload(StreamFileDownloader *this)
{
  StreamFileDownloader::cancelDownload(this);
}


void __fastcall StreamFileDownloader::initFileDownloader(int a1, int *a2, int *a3, int a4, __int64 a5, int a6)
{
  int v6; // r5@1
  int *v7; // r4@1
  int *v8; // r7@1
  void *v9; // r6@1
  StreamFileDownloader::DownloadInfo *v10; // r0@1
  StreamFileDownloader::DownloadInfo *v11; // r0@2
  int v12; // r6@5
  __int64 v13; // r0@5
  int v14; // r5@5
  unsigned int *v15; // r1@6
  unsigned int v16; // r0@8
  unsigned int *v17; // r6@14
  unsigned int v18; // r0@16
  int v19; // r5@21
  unsigned int *v20; // r1@22
  unsigned int v21; // r0@24
  unsigned int *v22; // r6@28
  unsigned int v23; // r0@30
  void *v24; // r0@37
  unsigned int *v25; // r2@39
  signed int v26; // r1@41
  int v27; // [sp+0h] [bp-48h]@5
  int v28; // [sp+4h] [bp-44h]@5
  char v29; // [sp+8h] [bp-40h]@3
  int v30; // [sp+Ch] [bp-3Ch]@4
  int v31; // [sp+24h] [bp-24h]@3
  char v32; // [sp+28h] [bp-20h]@5

  v6 = a1;
  v7 = a3;
  v8 = a2;
  v9 = operator new(0x98u);
  StreamFileDownloader::DownloadInfo::DownloadInfo((int *)v9, v8);
  v10 = *(StreamFileDownloader::DownloadInfo **)(v6 + 12);
  *(_DWORD *)(v6 + 12) = v9;
  if ( v10 )
  {
    v11 = StreamFileDownloader::DownloadInfo::~DownloadInfo(v10);
    operator delete((void *)v11);
    v9 = *(void **)(v6 + 12);
  }
  EntityInteraction::setInteractText((int *)v9 + 2, v7);
  *(_QWORD *)(*(_DWORD *)(v6 + 12) + 16) = a5;
  utility::conversions::to_string_t(&v31, v7);
  web::details::uri_components::uri_components((web::details::uri_components *)&v29);
  web::details::uri_parser::parse((web::details::uri_parser **)&v31, (int)&v29);
  if ( web::uri::validate() == 1 && *(_DWORD *)(v30 - 12) )
    v12 = *(_DWORD *)(v6 + 12);
    std::__shared_ptr<web::http::client::http_client,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<web::http::client::http_client>,std::string &>(
      (int)&v27,
      (int)&v32,
      &v31);
    v13 = *(_QWORD *)&v27;
    v27 = 0;
    v28 = 0;
    *(_DWORD *)(v12 + 44) = v13;
    v14 = *(_DWORD *)(v12 + 48);
    *(_DWORD *)(v12 + 48) = HIDWORD(v13);
    if ( v14 )
    {
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
    }
    v19 = v28;
    if ( v28 )
      v20 = (unsigned int *)(v28 + 4);
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
    if ( !*(_DWORD *)(a6 + 8) )
      sub_21E5F48();
    (*(void (__fastcall **)(int, signed int))(a6 + 12))(a6, 1);
  else
    (*(void (__fastcall **)(int, _DWORD))(a6 + 12))(a6, 0);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v29);
  v24 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
}


StreamFileDownloader::DownloadInfo *__fastcall StreamFileDownloader::DownloadInfo::DownloadInfo(StreamFileDownloader::DownloadInfo *this)
{
  StreamFileDownloader::DownloadInfo *v1; // r4@1
  char *v2; // r5@1
  int v3; // r2@1
  StreamFileDownloader::DownloadInfo *result; // r0@1
  char v5; // [sp+18h] [bp-28h]@1

  v1 = this;
  sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  sub_21E94B4((void **)v1 + 1, (const char *)&unk_257BC67);
  sub_21E94B4((void **)v1 + 2, (const char *)&unk_257BC67);
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  *((_WORD *)v1 + 20) = 0;
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  Concurrency::streams::producer_consumer_buffer<unsigned char>::producer_consumer_buffer((int)v1 + 52, 512);
  *((_DWORD *)v1 + 18) = 0;
  *((_DWORD *)v1 + 22) = 0;
  v2 = (char *)operator new(0x28u);
  _aeabi_memclr8(v2, 40);
  *((_DWORD *)v1 + 24) = v2;
  *((_DWORD *)v1 + 27) = 0;
  *((_DWORD *)v1 + 31) = 0;
  *((_DWORD *)v1 + 35) = 0;
  sub_21E034C(&v5);
  v3 = (int)(v2 + 8);
  *(_QWORD *)v3 = *(_QWORD *)&v5;
  *(_DWORD *)(v3 + 8) = 0;
  result = v1;
  *((_DWORD *)v2 + 5) = 0;
  v2[24] = 0;
  v2[1] = 0;
  return result;
}


signed int __fastcall StreamFileDownloader::canCancelDownload(StreamFileDownloader *this)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = *((_DWORD *)this + 3);
  if ( v1 )
  {
    result = 0;
    if ( *(_QWORD *)(v1 + 32) != *(_QWORD *)(v1 + 24) && !*(_BYTE *)(v1 + 41) )
      result = 1;
  }
  else
  return result;
}


int *__fastcall StreamFileDownloader::DownloadInfo::DownloadInfo(int *a1, int *a2)
{
  int *v2; // r4@1
  char *v3; // r5@1
  int v4; // r2@1
  int *result; // r0@1
  char v6; // [sp+18h] [bp-28h]@1

  v2 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E94B4((void **)v2 + 1, (const char *)&unk_257BC67);
  sub_21E94B4((void **)v2 + 2, (const char *)&unk_257BC67);
  v2[11] = 0;
  v2[12] = 0;
  *((_WORD *)v2 + 20) = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[4] = 0;
  v2[5] = 0;
  Concurrency::streams::producer_consumer_buffer<unsigned char>::producer_consumer_buffer((int)(v2 + 13), 512);
  v2[18] = 0;
  v2[22] = 0;
  v3 = (char *)operator new(0x28u);
  _aeabi_memclr8(v3, 40);
  v2[24] = (int)v3;
  v2[27] = 0;
  v2[31] = 0;
  v2[35] = 0;
  sub_21E034C(&v6);
  v4 = (int)(v3 + 8);
  *(_QWORD *)v4 = *(_QWORD *)&v6;
  *(_DWORD *)(v4 + 8) = 0;
  result = v2;
  *((_DWORD *)v3 + 5) = 0;
  v3[24] = 0;
  v3[1] = 0;
  return result;
}


int __fastcall StreamFileDownloader::~StreamFileDownloader(StreamFileDownloader *this)
{
  StreamFileDownloader *v1; // r4@1
  int v2; // r1@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r7@1
  __int64 v6; // kr00_8@1
  int v7; // r12@1
  void **v8; // r5@1
  void *v9; // r0@1
  unsigned int v10; // r6@2
  unsigned int v11; // r1@2
  unsigned int v12; // r7@3
  void *v13; // t1@4
  StreamFileDownloader::DownloadInfo *v14; // r0@7
  StreamFileDownloader::DownloadInfo *v15; // r0@8
  int v16; // r0@9
  unsigned int *v17; // r2@10
  unsigned int v18; // r1@12
  int v20; // [sp+4h] [bp-34h]@1
  __int64 v21; // [sp+8h] [bp-30h]@1
  int v22; // [sp+10h] [bp-28h]@1
  int v23; // [sp+14h] [bp-24h]@1
  int v24; // [sp+18h] [bp-20h]@1
  int v25; // [sp+1Ch] [bp-1Ch]@1
  int v26; // [sp+20h] [bp-18h]@1

  v1 = this;
  *(_DWORD *)this = &off_26EC1CC;
  v2 = *((_DWORD *)this + 7);
  v3 = *((_DWORD *)this + 8);
  v4 = *((_DWORD *)this + 9);
  v5 = *((_DWORD *)this + 10);
  v6 = *(_QWORD *)((char *)this + 44);
  v7 = *((_DWORD *)this + 13);
  v23 = *((_DWORD *)this + 6);
  v24 = v2;
  v25 = v3;
  v26 = v4;
  v20 = v5;
  v21 = v6;
  v22 = v7;
  v8 = (void **)((char *)this + 16);
  std::deque<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_destroy_data_aux(
    (int)this + 16,
    (int)&v23,
    (int)&v20);
  v9 = (void *)*((_DWORD *)v1 + 4);
  if ( v9 )
  {
    v10 = *((_DWORD *)v1 + 13);
    v11 = *((_DWORD *)v1 + 9);
    if ( v11 < v10 + 4 )
    {
      v12 = v11 - 4;
      do
      {
        v13 = *(void **)(v12 + 4);
        v12 += 4;
        operator delete(v13);
      }
      while ( v12 < v10 );
      v9 = *v8;
    }
    operator delete(v9);
  }
  v14 = (StreamFileDownloader::DownloadInfo *)*((_DWORD *)v1 + 3);
  if ( v14 )
    v15 = StreamFileDownloader::DownloadInfo::~DownloadInfo(v14);
    operator delete((void *)v15);
  *((_DWORD *)v1 + 3) = 0;
  v16 = *((_DWORD *)v1 + 2);
  if ( v16 )
    v17 = (unsigned int *)(v16 + 8);
    if ( &pthread_create )
      __dmb();
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 == 1 )
      (*(void (**)(void))(*(_DWORD *)v16 + 12))();
  return j_j_j__ZN20IFileChunkDownloaderD2Ev(v1);
}


void __fastcall StreamFileDownloader::~StreamFileDownloader(StreamFileDownloader *this)
{
  void *v1; // r0@1

  v1 = (void *)StreamFileDownloader::~StreamFileDownloader(this);
  j_j_j__ZdlPv_6(v1);
}


unsigned int __fastcall StreamFileDownloader::_internalCall(int a1, int **a2, int a3, int a4, int a5, int a6)
{
  int v6; // r10@1
  int **v7; // r8@1
  int v8; // r9@1
  int v9; // r7@1
  void *v10; // r0@1
  void *v11; // r0@2
  int v12; // r6@3
  void *v13; // r0@3
  char *v14; // r0@4
  __int64 v15; // r2@5
  int v16; // r4@6
  void *v17; // r0@6
  void *v18; // r0@7
  int v19; // r5@8
  int v20; // r4@8
  int v21; // r7@8
  unsigned int *v22; // r0@10
  unsigned int v23; // r1@12
  unsigned int *v24; // r1@16
  unsigned int v25; // r0@18
  unsigned int *v26; // r6@22
  unsigned int v27; // r0@24
  int v28; // r9@30
  unsigned int *v29; // r0@31
  unsigned int v30; // r1@31
  unsigned int v31; // r2@34
  unsigned int v32; // r3@35
  void *v33; // r6@38
  unsigned int *v34; // r7@38
  unsigned int *v35; // r2@40
  signed int v36; // r1@42
  unsigned int *v37; // r2@44
  signed int v38; // r1@46
  unsigned int *v39; // r2@48
  signed int v40; // r1@50
  unsigned int *v41; // r2@52
  signed int v42; // r1@54
  unsigned int *v43; // r2@56
  signed int v44; // r1@58
  unsigned int *v45; // r2@60
  signed int v46; // r1@62
  unsigned int v47; // r1@90
  unsigned int v48; // r1@94
  unsigned int v49; // r0@100
  unsigned int *v50; // r0@106
  unsigned int v51; // r1@108
  unsigned int v52; // r0@113
  void (__fastcall *v53)(int *, int, signed int); // r3@116
  int v54; // r4@118
  unsigned int *v55; // r1@119
  unsigned int v56; // r0@121
  unsigned int *v57; // r5@125
  unsigned int v58; // r0@127
  int v59; // r0@134
  unsigned int *v60; // r2@135
  unsigned int v61; // r1@137
  int v62; // r5@142
  unsigned int *v63; // r1@143
  unsigned int v64; // r0@145
  unsigned int *v65; // r4@149
  unsigned int v66; // r0@151
  int v67; // r0@156
  unsigned int *v68; // r1@157
  unsigned int v69; // r2@158
  void *v70; // r5@161
  unsigned int *v71; // r1@162
  unsigned int v72; // r0@164
  unsigned int *v73; // r4@168
  unsigned int v74; // r0@170
  unsigned int result; // r0@177
  void *v76; // r4@182
  unsigned int *v77; // r1@183
  unsigned int *v78; // r5@189
  void *v79; // [sp+0h] [bp-98h]@111
  int v80; // [sp+4h] [bp-94h]@111
  int v81; // [sp+8h] [bp-90h]@117
  int v82; // [sp+Ch] [bp-8Ch]@118
  int v83; // [sp+10h] [bp-88h]@116
  int v84; // [sp+14h] [bp-84h]@117
  int v85; // [sp+18h] [bp-80h]@111
  int v86; // [sp+1Ch] [bp-7Ch]@105
  void *v87; // [sp+20h] [bp-78h]@105
  char v88; // [sp+24h] [bp-74h]@111
  int v89; // [sp+28h] [bp-70h]@142
  char v90; // [sp+2Ch] [bp-6Ch]@118
  int v91; // [sp+30h] [bp-68h]@118
  int v92; // [sp+34h] [bp-64h]@6
  int v93; // [sp+38h] [bp-60h]@6
  char *v94; // [sp+3Ch] [bp-5Ch]@3
  int v95; // [sp+40h] [bp-58h]@3
  int v96; // [sp+44h] [bp-54h]@2
  int v97; // [sp+48h] [bp-50h]@2
  int v98; // [sp+64h] [bp-34h]@1
  int v99; // [sp+68h] [bp-30h]@1
  void *v100; // [sp+6Ch] [bp-2Ch]@105
  char v101; // [sp+70h] [bp-28h]@1

  v6 = a1;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  sub_21E8AF4(&v98, (int *)&web::http::methods::GET);
  std::__shared_ptr<web::http::details::_http_request,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<web::http::details::_http_request>,std::string>(
    (int)&v99,
    (int)&v101,
    &v98);
  v10 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v98 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  web::uri::uri((web::uri *)&v96, (const char *)&unk_257BC67);
  web::http::details::_http_request::set_request_uri((web::http::details::_http_request *)v99, (const web::uri *)&v96);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v97);
  v11 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v96 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = v99;
  v94 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v94, *(_DWORD *)(*(_DWORD *)(a5 + 4) - 12) + 7);
  sub_21E7408((const void **)&v94, "Bearer ", 7u);
  sub_21E72F0((const void **)&v94, (const void **)(a5 + 4));
  utility::conversions::to_string_t(&v95, &v94);
  web::http::http_headers::add<std::string>(v12 + 20, (int *)&web::http::header_names::authorization, &v95);
  v13 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v95 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v94 - 12;
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v94 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  web::http::http_headers::add<char [9]>(v99 + 20, (int *)&web::http::header_names::accept_encoding, "identity");
  v15 = *(_QWORD *)(a5 + 16);
  if ( v15 )
    v16 = v99;
    Util::format((Util *)&v92, "bytes=%ull-", v15);
    utility::conversions::to_string_t(&v93, &v92);
    web::http::http_headers::add<std::string>(v16 + 20, (int *)&web::http::header_names::range, &v93);
    v17 = (void *)(v93 - 12);
    if ( (int *)(v93 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v93 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
      }
      else
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v92 - 12);
    if ( (int *)(v92 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v92 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
  v19 = v99;
  *(_DWORD *)(v99 + 148) = *(_DWORD *)v9;
  v20 = *(_DWORD *)(v19 + 152);
  v21 = *(_DWORD *)(v9 + 4);
  if ( v21 != v20 )
    if ( v21 )
      v22 = (unsigned int *)(v21 + 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 + 1, v22) );
        v20 = *(_DWORD *)(v19 + 152);
        ++*v22;
    if ( v20 )
      v24 = (unsigned int *)(v20 + 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        v26 = (unsigned int *)(v20 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
    *(_DWORD *)(v19 + 152) = v21;
    v19 = v99;
  web::http::details::_http_request::set_progress_handler(v19, v8);
  v28 = *(_DWORD *)(v6 + 8);
  if ( !v28 )
    std::__throw_bad_weak_ptr();
  v29 = (unsigned int *)(v28 + 4);
  v30 = *(_DWORD *)(v28 + 4);
  do
    while ( 1 )
      if ( !v30 )
        std::__throw_bad_weak_ptr();
      v31 = __ldrex(v29);
      if ( v31 == v30 )
        break;
      __clrex();
      v30 = v31;
    v32 = __strex(v30 + 1, v29);
    v30 = v31;
  while ( v32 );
  __dmb();
  v33 = *(void **)(v6 + 4);
  v34 = (unsigned int *)(v28 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v47 = __ldrex(v34);
    while ( __strex(v47 + 1, v34) );
  else
    ++*v34;
      v48 = __ldrex(v29);
    while ( __strex(v48 - 1, v29) );
    v48 = (*v29)--;
  if ( v48 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
        v49 = __ldrex(v34);
      while ( __strex(v49 - 1, v34) );
      v49 = (*v34)--;
    if ( v49 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
  v86 = v99;
  v87 = v100;
  if ( v100 )
    v50 = (unsigned int *)((char *)v100 + 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 + 1, v50) );
      ++*v50;
  v85 = 0;
  web::http::client::http_client::request((pplx::details::platform *)&v88, v7, (int)&v86, &v85);
  v79 = v33;
  v80 = v28;
      v52 = __ldrex(v34);
    while ( __strex(v52 + 1, v34) );
  v83 = 0;
  v53 = *(void (__fastcall **)(int *, int, signed int))(a6 + 8);
  if ( v53 )
    v53(&v81, a6, 2);
    v84 = *(_DWORD *)(a6 + 12);
    v83 = *(_DWORD *)(a6 + 8);
  sub_1641C88((int)&v90, (int)&v88, (int)&v79, (int)v53, v79, v80, v81, v82, v83, v84, v85, v86, v87);
  v54 = v91;
  if ( v91 )
    v55 = (unsigned int *)(v91 + 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 == 1 )
      v57 = (unsigned int *)(v54 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 8))(v54);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
  if ( v83 )
    ((void (*)(void))v83)();
  v59 = v80;
  if ( v80 )
    v60 = (unsigned int *)(v80 + 8);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 == 1 )
      (*(void (**)(void))(*(_DWORD *)v59 + 12))();
  v62 = v89;
  if ( v89 )
    v63 = (unsigned int *)(v89 + 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 == 1 )
      v65 = (unsigned int *)(v62 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 8))(v62);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 12))(v62);
  v67 = v85;
  if ( v85 )
    v68 = (unsigned int *)(v85 + 4);
      v69 = __ldrex(v68);
    while ( __strex(v69 - 1, v68) );
    if ( v69 == 1 )
      (*(void (**)(void))(*(_DWORD *)v67 + 8))();
  v70 = v87;
  if ( v87 )
    v71 = (unsigned int *)((char *)v87 + 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 == 1 )
      v73 = (unsigned int *)((char *)v70 + 8);
      (*(void (__fastcall **)(void *))(*(_DWORD *)v70 + 8))(v70);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 == 1 )
        (*(void (__fastcall **)(void *))(*(_DWORD *)v70 + 12))(v70);
      result = __ldrex(v34);
    while ( __strex(result - 1, v34) );
    result = (*v34)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
  v76 = v100;
    v77 = (unsigned int *)((char *)v100 + 4);
        result = __ldrex(v77);
      while ( __strex(result - 1, v77) );
      result = (*v77)--;
    if ( result == 1 )
      v78 = (unsigned int *)((char *)v76 + 8);
      (*(void (__fastcall **)(void *))(*(_DWORD *)v76 + 8))(v76);
          result = __ldrex(v78);
        while ( __strex(result - 1, v78) );
        result = (*v78)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(void *))(*(_DWORD *)v76 + 12))(v76);
  return result;
}


unsigned int __fastcall StreamFileDownloader::downloadFile(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r7@1
  void (__fastcall *v7)(char *); // r3@2
  void (__fastcall *v8)(char *, int, signed int); // r3@4
  unsigned int result; // r0@6
  char v10; // [sp+8h] [bp-38h]@5
  int (*v11)(void); // [sp+10h] [bp-30h]@4
  int v12; // [sp+14h] [bp-2Ch]@5
  char v13; // [sp+18h] [bp-28h]@3
  int (*v14)(void); // [sp+20h] [bp-20h]@2
  int v15; // [sp+24h] [bp-1Ch]@3

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 12);
  v6 = a2;
  if ( v5 )
  {
    v14 = 0;
    v7 = *(void (__fastcall **)(char *))(a2 + 8);
    if ( v7 )
    {
      v7(&v13);
      v15 = *(_DWORD *)(v6 + 12);
      v14 = *(int (**)(void))(v6 + 8);
    }
    v11 = 0;
    v8 = *(void (__fastcall **)(char *, int, signed int))(v4 + 8);
    if ( v8 )
      v8(&v10, v4, 2);
      v12 = *(_DWORD *)(v4 + 12);
      v11 = *(int (**)(void))(v4 + 8);
    result = StreamFileDownloader::_downloadStream(v3, v5, 0x100000, (int)&v13, (int)&v10);
    if ( v11 )
      result = v11();
    if ( v14 )
      result = v14();
  }
  else
    if ( !*(_DWORD *)(a3 + 8) )
      sub_21E5F48();
    result = (*(int (__fastcall **)(int, _DWORD))(a3 + 12))(a3, 0);
  return result;
}


unsigned int __fastcall StreamFileDownloader::_downloadStream(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r10@1
  int v8; // r5@1
  unsigned int v9; // r1@2
  unsigned int *v10; // r0@2
  unsigned int v11; // r7@5
  unsigned int v12; // r3@6
  int v13; // r11@7
  unsigned int *v14; // r8@7
  unsigned int v15; // r1@9
  int v16; // r1@14
  unsigned int v17; // r0@20
  unsigned int v18; // r0@27
  unsigned int v19; // r0@32
  void (__fastcall *v20)(int *, int, signed int); // r3@35
  unsigned int v21; // r0@39
  unsigned int *v22; // r0@43
  unsigned int v23; // r1@45
  __int64 v24; // kr00_8@48
  void (__fastcall *v25)(__int64 *, __int64 *, signed int); // r2@48
  int v26; // r2@48
  unsigned int *v27; // r2@49
  unsigned int v28; // r3@51
  void *v29; // r0@54
  int v30; // r2@54
  _QWORD *v31; // r4@54
  unsigned int *v32; // r1@54
  unsigned int v33; // r2@57
  __int64 v34; // r2@60
  __int64 v35; // kr08_8@60
  int v36; // r1@60
  int v37; // r1@60
  unsigned int *v38; // r1@61
  unsigned int v39; // r2@63
  int v40; // r3@66
  void (*v41)(void); // r3@66
  int v42; // r0@68
  unsigned int *v43; // r2@69
  unsigned int v44; // r1@71
  int v45; // r0@78
  unsigned int *v46; // r2@79
  unsigned int v47; // r1@81
  void (__fastcall *v48)(char *, _QWORD *, signed int); // r3@86
  int v49; // r0@88
  unsigned int *v50; // r2@89
  unsigned int v51; // r1@91
  int v52; // r0@98
  unsigned int *v53; // r2@99
  unsigned int v54; // r1@101
  int v55; // r1@107
  unsigned int v56; // r0@108
  void (__fastcall *v57)(_DWORD, _DWORD, _DWORD); // r10@111
  void (__fastcall *v58)(int *); // r3@111
  int v59; // r4@112
  unsigned int *v60; // r0@113
  unsigned int v61; // r1@116
  __int64 v62; // kr10_8@120
  int v63; // r9@120
  void *v64; // r0@120
  int v65; // r4@120
  unsigned int *v66; // r1@120
  int v67; // r12@121
  unsigned int v68; // r2@123
  __int64 v69; // r2@127
  __int64 v70; // kr20_8@127
  int v71; // r5@127
  void (*v72)(void); // r3@127
  int v73; // r0@130
  unsigned int *v74; // r2@131
  unsigned int v75; // r1@133
  void (__fastcall *v76)(char *, int, signed int); // r3@138
  int v77; // r0@142
  unsigned int *v78; // r2@143
  unsigned int v79; // r1@145
  unsigned int v80; // r0@152
  _DWORD *v81; // r0@155
  unsigned int v82; // r1@157
  unsigned int v83; // r0@162
  int **v84; // r9@167
  unsigned int v85; // r0@169
  void (__fastcall *v86)(int *); // r3@172
  void (__fastcall *v87)(_DWORD, _DWORD, _DWORD); // r7@172
  void *v88; // r0@174
  int v89; // r12@174
  unsigned int *v90; // r1@175
  int v91; // r11@175
  unsigned int v92; // r2@177
  __int64 v93; // r2@181
  __int64 v94; // kr28_8@181
  unsigned int *v95; // r2@186
  unsigned int v96; // r1@188
  int v97; // r4@193
  unsigned int *v98; // r1@194
  unsigned int v99; // r0@196
  unsigned int *v100; // r6@200
  unsigned int v101; // r0@202
  unsigned int v102; // r0@215
  unsigned int result; // r0@222
  int v104; // [sp+10h] [bp-128h]@115
  int v105; // [sp+14h] [bp-124h]@17
  int v106; // [sp+18h] [bp-120h]@109
  int v107; // [sp+28h] [bp-110h]@173
  int v108; // [sp+2Ch] [bp-10Ch]@181
  void (__fastcall *v109)(_DWORD, _DWORD, _DWORD); // [sp+30h] [bp-108h]@172
  int v110; // [sp+34h] [bp-104h]@173
  void *v111; // [sp+38h] [bp-100h]@181
  void (*v112)(void); // [sp+40h] [bp-F8h]@174
  int (__fastcall *v113)(int *, int, int); // [sp+44h] [bp-F4h]@181
  char v114; // [sp+48h] [bp-F0h]@167
  int v115; // [sp+4Ch] [bp-ECh]@193
  _DWORD *v116; // [sp+50h] [bp-E8h]@160
  void (*v117)(void); // [sp+58h] [bp-E0h]@155
  int (__fastcall *v118)(int *, int, unsigned int, unsigned int); // [sp+5Ch] [bp-DCh]@160
  int v119; // [sp+60h] [bp-D8h]@106
  int v120; // [sp+64h] [bp-D4h]@106
  int v121; // [sp+68h] [bp-D0h]@112
  void (__fastcall *v122)(_DWORD, _DWORD, _DWORD); // [sp+70h] [bp-C8h]@111
  unsigned int *v123; // [sp+74h] [bp-C4h]@112
  char v124; // [sp+78h] [bp-C0h]@139
  void (*v125)(void); // [sp+80h] [bp-B8h]@138
  int v126; // [sp+84h] [bp-B4h]@139
  unsigned int *v127; // [sp+88h] [bp-B0h]@30
  int v128; // [sp+8Ch] [bp-ACh]@30
  int v129; // [sp+90h] [bp-A8h]@36
  void (__fastcall *v130)(__int64 *, __int64 *, signed int); // [sp+98h] [bp-A0h]@35
  int v131; // [sp+9Ch] [bp-9Ch]@36
  int v132; // [sp+A0h] [bp-98h]@37
  int v133; // [sp+A4h] [bp-94h]@37
  char v134; // [sp+A8h] [bp-90h]@87
  void (*v135)(void); // [sp+B0h] [bp-88h]@86
  int v136; // [sp+B4h] [bp-84h]@87
  unsigned int *v137; // [sp+B8h] [bp-80h]@42
  int v138; // [sp+BCh] [bp-7Ch]@42
  __int64 v139; // [sp+C0h] [bp-78h]@48
  void (__fastcall *v140)(__int64 *, __int64 *, signed int); // [sp+C8h] [bp-70h]@48
  unsigned int *v141; // [sp+CCh] [bp-6Ch]@46
  int v142; // [sp+D0h] [bp-68h]@48
  int v143; // [sp+D4h] [bp-64h]@48
  void *v144; // [sp+D8h] [bp-60h]@66
  int v145; // [sp+DCh] [bp-5Ch]@66
  void (*v146)(void); // [sp+E0h] [bp-58h]@54
  int v147; // [sp+E4h] [bp-54h]@66
  int v148; // [sp+E8h] [bp-50h]@113
  int v149; // [sp+ECh] [bp-4Ch]@113
  __int64 v150; // [sp+F0h] [bp-48h]@120
  void (__fastcall *v151)(_DWORD, _DWORD, _DWORD); // [sp+F8h] [bp-40h]@120
  unsigned int *v152; // [sp+FCh] [bp-3Ch]@117
  void *v153; // [sp+100h] [bp-38h]@127
  int v154; // [sp+104h] [bp-34h]@127
  void (*v155)(void); // [sp+108h] [bp-30h]@120
  int v156; // [sp+10Ch] [bp-2Ch]@127

  v5 = a1;
  v6 = a4;
  v7 = *(_DWORD *)(a1 + 8);
  v8 = a2;
  if ( !v7 )
    std::__throw_bad_weak_ptr();
  v9 = *(_DWORD *)(v7 + 4);
  v10 = (unsigned int *)(v7 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v9 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
        break;
      __clrex();
      v9 = v11;
    }
    v12 = __strex(v9 + 1, v10);
    v9 = v11;
  }
  while ( v12 );
  __dmb();
  v13 = *(_DWORD *)(v5 + 4);
  v14 = (unsigned int *)(v7 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v15 = __ldrex(v14);
    while ( __strex(v15 + 1, v14) );
  else
    ++*v14;
      v16 = __ldrex(v10);
    while ( __strex(v16 - 1, v10) );
    v16 = (*v10)--;
  v105 = a3;
  if ( v16 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
    if ( &pthread_create )
      do
      {
        v17 = __ldrex(v14);
        v16 = v17 - 1;
      }
      while ( __strex(v17 - 1, v14) );
    else
      v17 = *v14;
      v16 = *v14 - 1;
      *v14 = v16;
    if ( v17 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      v18 = __ldrex(v14);
      v16 = __strex(v18 + 1, v14);
    while ( v16 );
  v127 = (unsigned int *)v13;
  v128 = v7;
      v19 = __ldrex(v14);
      v16 = __strex(v19 + 1, v14);
  v130 = 0;
  v20 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v20 )
    v20(&v129, v6, 2);
    v131 = *(_DWORD *)(v6 + 12);
    v130 = *(void (__fastcall **)(__int64 *, __int64 *, signed int))(v6 + 8);
  v132 = v13;
  v133 = v7;
      v21 = __ldrex(v14);
      v16 = __strex(v21 + 1, v14);
  v137 = v127;
  v138 = v128;
  if ( v128 )
    v22 = (unsigned int *)(v128 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      v16 = (int)v141;
      v16 = *v22 + 1;
      *v22 = v16;
  v24 = *(_QWORD *)&v129;
  *(_QWORD *)&v129 = v139;
  v139 = v24;
  v25 = v130;
  v140 = v25;
  v26 = v131;
  v131 = v16;
  v141 = (unsigned int *)v26;
  v142 = v132;
  v143 = v133;
  if ( v133 )
    v27 = (unsigned int *)(v133 + 8);
        v28 = __ldrex(v27);
      while ( __strex(v28 + 1, v27) );
      ++*v27;
  v146 = 0;
  v29 = operator new(0x20u);
  v30 = v138;
  v31 = (_QWORD *)(v8 + 116);
  v32 = v137;
  *(_DWORD *)v29 = v137;
  *((_DWORD *)v29 + 1) = v30;
  if ( v30 )
    v32 = (unsigned int *)(v30 + 8);
        v33 = __ldrex(v32);
      while ( __strex(v33 + 1, v32) );
      v32 = (unsigned int *)*((_DWORD *)v29 + 5);
      ++*v32;
  v34 = v139;
  v35 = *((_QWORD *)v29 + 1);
  v139 = *((_QWORD *)v29 + 1);
  *((_QWORD *)v29 + 1) = v34;
  LODWORD(v34) = v140;
  v140 = 0;
  *((_DWORD *)v29 + 4) = v34;
  LODWORD(v34) = v141;
  v141 = v32;
  v36 = v142;
  *((_DWORD *)v29 + 5) = v34;
  *((_DWORD *)v29 + 6) = v36;
  v37 = v143;
  *((_DWORD *)v29 + 7) = v143;
  if ( v37 )
    v38 = (unsigned int *)(v37 + 8);
        v39 = __ldrex(v38);
      while ( __strex(v39 + 1, v38) );
      ++*v38;
  v144 = v29;
  v40 = v145;
  *(_QWORD *)&v144 = *v31;
  *(_DWORD *)v31 = v29;
  *(_DWORD *)(v8 + 120) = v40;
  v146 = *(void (**)(void))(v8 + 124);
  v41 = v146;
  *(_DWORD *)(v8 + 124) = sub_16446AC;
  v147 = *(_DWORD *)(v8 + 128);
  *(_DWORD *)(v8 + 128) = sub_1644394;
  if ( v41 )
    v41();
  v42 = v143;
  if ( v143 )
    v43 = (unsigned int *)(v143 + 8);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 == 1 )
      (*(void (**)(void))(*(_DWORD *)v42 + 12))();
  if ( v140 )
    v140(&v139, &v139, 3);
  v45 = v138;
  if ( v138 )
    v46 = (unsigned int *)(v138 + 8);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 == 1 )
      (*(void (**)(void))(*(_DWORD *)v45 + 12))();
  v135 = 0;
  v48 = *(void (__fastcall **)(char *, _QWORD *, signed int))(v8 + 124);
  if ( v48 )
    v48(&v134, v31, 2);
    v136 = *(_DWORD *)(v8 + 128);
    v135 = *(void (**)(void))(v8 + 124);
  v49 = v133;
    v50 = (unsigned int *)(v133 + 8);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 == 1 )
      (*(void (**)(void))(*(_DWORD *)v49 + 12))();
  if ( v130 )
    v130((__int64 *)&v129, (__int64 *)&v129, 3);
  v52 = v128;
    v53 = (unsigned int *)(v128 + 8);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 == 1 )
      (*(void (**)(void))(*(_DWORD *)v52 + 12))();
  v119 = v13;
  v120 = v7;
    v55 = a5;
      v56 = __ldrex(v14);
    while ( __strex(v56 + 1, v14) );
    v106 = v7;
  v57 = 0;
  v122 = 0;
  v58 = *(void (__fastcall **)(int *))(v55 + 8);
  if ( v58 )
    v59 = v55;
    v58(&v121);
    v123 = *(unsigned int **)(v59 + 12);
    v57 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v59 + 8);
    v122 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v59 + 8);
  v148 = v119;
  v60 = (unsigned int *)v120;
  v149 = v120;
  if ( v120 )
    v60 = (unsigned int *)(v120 + 8);
      v104 = v13;
        v61 = __ldrex(v60);
      while ( __strex(v61 + 1, v60) );
      v57 = v122;
      v60 = v152;
      ++*v60;
    v104 = v13;
  v62 = *(_QWORD *)&v121;
  *(_QWORD *)&v121 = v150;
  v150 = v62;
  v63 = (int)v123;
  v123 = v60;
  v151 = v57;
  v152 = (unsigned int *)v63;
  v155 = 0;
  v64 = operator new(0x18u);
  v65 = v8 + 132;
  *(_DWORD *)v64 = v148;
  v66 = (unsigned int *)v149;
  *((_DWORD *)v64 + 1) = v149;
  if ( v66 )
    v66 += 2;
    v67 = v8;
        v68 = __ldrex(v66);
      while ( __strex(v68 + 1, v66) );
      v63 = (int)v152;
      v57 = v151;
      v66 = (unsigned int *)*((_DWORD *)v64 + 5);
      ++*v66;
  v69 = v150;
  v70 = *((_QWORD *)v64 + 1);
  v150 = *((_QWORD *)v64 + 1);
  v71 = v67;
  *((_QWORD *)v64 + 1) = v69;
  v151 = 0;
  *((_DWORD *)v64 + 4) = v57;
  v152 = v66;
  *((_DWORD *)v64 + 5) = v63;
  v153 = v64;
  HIDWORD(v69) = v154;
  *(_QWORD *)&v153 = *(_QWORD *)v65;
  *(_DWORD *)v65 = v64;
  *(_DWORD *)(v65 + 4) = HIDWORD(v69);
  v155 = *(void (**)(void))(v67 + 140);
  v72 = v155;
  *(_DWORD *)(v67 + 140) = sub_1644BBC;
  v156 = *(_DWORD *)(v67 + 144);
  *(_DWORD *)(v67 + 144) = sub_1644A58;
  if ( v72 )
    v72();
    if ( v151 )
      v151(&v150, &v150, 3);
  v73 = v149;
  if ( v149 )
    v74 = (unsigned int *)(v149 + 8);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 == 1 )
      (*(void (**)(void))(*(_DWORD *)v73 + 12))();
  v125 = 0;
  v76 = *(void (__fastcall **)(char *, int, signed int))(v71 + 140);
  if ( v76 )
    v76(&v124, v65, 2);
    v126 = *(_DWORD *)(v71 + 144);
    v125 = *(void (**)(void))(v71 + 140);
  if ( v122 )
    v122(&v121, &v121, 3);
  v77 = v120;
    v78 = (unsigned int *)(v120 + 8);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 == 1 )
      (*(void (**)(void))(*(_DWORD *)v77 + 12))();
      v80 = __ldrex(v14);
    while ( __strex(v80 + 1, v14) );
  v117 = 0;
  v81 = operator new(8u);
  *v81 = v104;
  v81[1] = v106;
      v82 = __ldrex(v14);
    while ( __strex(v82 + 1, v14) );
  v116 = v81;
  v117 = (void (*)(void))sub_1644F78;
  v118 = sub_1644CF0;
      v83 = __ldrex(v14);
    while ( __strex(v83 - 1, v14) );
    v83 = (*v14)--;
  if ( v83 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v106 + 12))(v106);
  v84 = *(int ***)(v71 + 44);
  Concurrency::streams::streambuf<unsigned char>::create_ostream((int)&v114, v71 + 52);
      v85 = __ldrex(v14);
    while ( __strex(v85 + 1, v14) );
  v109 = 0;
  v86 = *(void (__fastcall **)(int *))(a5 + 8);
  v87 = 0;
  if ( v86 )
    v86(&v107);
    v110 = *(_DWORD *)(a5 + 12);
    v87 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a5 + 8);
    v109 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a5 + 8);
  v112 = 0;
  v88 = operator new(0x1Cu);
  *(_DWORD *)v88 = v104;
  *((_DWORD *)v88 + 1) = v106;
  if ( v106 )
    v90 = (unsigned int *)(v106 + 8);
    v91 = v71;
        v92 = __ldrex(v90);
      while ( __strex(v92 + 1, v90) );
      v89 = *((_DWORD *)v88 + 6);
      v87 = v109;
      ++*v90;
  *((_DWORD *)v88 + 2) = v105;
  v93 = *(_QWORD *)&v107;
  v94 = *(_QWORD *)((char *)v88 + 12);
  v107 = *(_QWORD *)((char *)v88 + 12);
  v108 = HIDWORD(v94);
  *(_QWORD *)((char *)v88 + 12) = v93;
  LODWORD(v93) = v110;
  *((_DWORD *)v88 + 5) = v87;
  v110 = v89;
  *((_DWORD *)v88 + 6) = v93;
  v111 = v88;
  v112 = (void (*)(void))sub_164532C;
  v113 = sub_1645198;
  StreamFileDownloader::_internalCall(v5, v84, (int)&v114, (int)&v116, v91, (int)&v111);
  if ( v112 )
    v112();
  if ( v109 )
    v109(&v107, &v107, 3);
    v95 = (unsigned int *)(v106 + 8);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 == 1 )
      (*(void (**)(void))(*(_DWORD *)v106 + 12))();
  v97 = v115;
  if ( v115 )
    v98 = (unsigned int *)(v115 + 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 == 1 )
      v100 = (unsigned int *)(v97 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v97 + 8))(v97);
      if ( &pthread_create )
        __dmb();
        do
          v101 = __ldrex(v100);
        while ( __strex(v101 - 1, v100) );
      else
        v101 = (*v100)--;
      if ( v101 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v97 + 12))(v97);
  *(_BYTE *)(v91 + 40) = 1;
  if ( v117 )
    v117();
  if ( v125 )
    v125();
  if ( v135 )
    v135();
      v102 = __ldrex(v14);
    while ( __strex(v102 - 1, v14) );
    v102 = (*v14)--;
  if ( v102 == 1 )
      result = __ldrex(v14);
    while ( __strex(result - 1, v14) );
    result = (*v14)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v106 + 12))(v106);
  return result;
}


int __fastcall StreamFileDownloader::getDownloadProgress(__int64 this)
{
  int v1; // r4@1
  int result; // r0@5

  v1 = *(_DWORD *)(this + 12);
  __asm { VLDR            S0, =0.0 }
  _ZF = v1 == 0;
  if ( v1 )
  {
    this = *(_QWORD *)(v1 + 32);
    _ZF = this == 0;
  }
  if ( !_ZF )
    _R0 = _aeabi_ul2f(this, HIDWORD(this));
    __asm { VMOV            S16, R0 }
    _R0 = _aeabi_ul2f(*(_QWORD *)(v1 + 24), *(_QWORD *)(v1 + 24) >> 32);
    __asm
    {
      VMOV            S0, R0
      VDIV.F32        S0, S0, S16
    }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall StreamFileDownloader::cancelDownload(StreamFileDownloader *this)
{
  StreamFileDownloader *v1; // r4@1
  StreamFileDownloader::DownloadInfo *v2; // r0@2
  StreamFileDownloader::DownloadInfo *v3; // r0@3

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 20))() == 1 )
  {
    v2 = (StreamFileDownloader::DownloadInfo *)*((_DWORD *)v1 + 3);
    *((_DWORD *)v1 + 3) = 0;
    if ( v2 )
    {
      v3 = StreamFileDownloader::DownloadInfo::~DownloadInfo(v2);
      j_j_j__ZdlPv_6((void *)v3);
    }
  }
}


__int64 __fastcall StreamFileDownloader::getDownloadReceivedSize(StreamFileDownloader *this)
{
  int v1; // r0@1
  __int64 result; // r0@2

  v1 = *((_DWORD *)this + 3);
  if ( v1 )
    result = *(_QWORD *)(v1 + 24);
  else
    result = 0LL;
  return result;
}


void __fastcall StreamFileDownloader::~StreamFileDownloader(StreamFileDownloader *this)
{
  StreamFileDownloader::~StreamFileDownloader(this);
}


void __fastcall StreamFileDownloader::initFileDownloader(int a1, int *a2, int *a3, int a4, __int64 a5, int a6)
{
  StreamFileDownloader::initFileDownloader(a1, a2, a3, a4, a5, a6);
}


void **__fastcall StreamFileDownloader::_tryReadStream(StreamFileDownloader *this, StreamFileDownloader::DownloadInfo *a2)
{
  StreamFileDownloader::DownloadInfo *v2; // r5@1
  StreamFileDownloader *v3; // r4@1
  void **result; // r0@1
  char *v5; // r7@6
  unsigned int v6; // r6@8
  void **v7; // r9@9
  int v8; // r8@10
  unsigned int v9; // r1@13
  unsigned int *v10; // r0@13
  unsigned int v11; // r2@16
  unsigned int v12; // r3@17
  int v13; // r10@23
  unsigned int *v14; // r6@23
  unsigned int v15; // r1@28
  unsigned int v16; // r1@32
  unsigned int v17; // r0@38
  __int64 v18; // kr00_8@43
  unsigned int *v19; // r0@44
  unsigned int v20; // r2@46
  unsigned int v21; // r1@52
  unsigned int v22; // r1@57
  unsigned int *v23; // r7@61
  unsigned int v24; // r0@63
  unsigned int v25; // r0@70
  unsigned int *v26; // r0@74
  unsigned int v27; // r1@76
  int v28; // r4@79
  unsigned int *v29; // r1@80
  unsigned int v30; // r0@82
  unsigned int *v31; // r7@86
  unsigned int v32; // r0@88
  int v33; // r4@93
  unsigned int *v34; // r1@94
  unsigned int v35; // r0@96
  unsigned int *v36; // r7@100
  unsigned int v37; // r0@102
  int v38; // r0@107
  unsigned int *v39; // r2@108
  unsigned int v40; // r1@110
  int v41; // r4@115
  unsigned int *v42; // r1@116
  unsigned int v43; // r0@118
  unsigned int *v44; // r7@122
  unsigned int v45; // r0@124
  int v46; // r4@129
  unsigned int *v47; // r1@130
  unsigned int v48; // r0@132
  unsigned int *v49; // r7@136
  unsigned int v50; // r0@138
  int v51; // r4@143
  unsigned int *v52; // r1@144
  unsigned int v53; // r0@146
  unsigned int *v54; // r7@150
  unsigned int v55; // r0@152
  unsigned int v56; // r0@159
  int v57; // r4@164
  unsigned int *v58; // r1@165
  unsigned int *v59; // r5@171
  int v60; // [sp+4h] [bp-6Ch]@68
  int v61; // [sp+8h] [bp-68h]@68
  void **v62; // [sp+Ch] [bp-64h]@73
  __int64 v63; // [sp+10h] [bp-60h]@73
  void **v64; // [sp+18h] [bp-58h]@43
  __int64 v65; // [sp+1Ch] [bp-54h]@48
  char v66; // [sp+24h] [bp-4Ch]@43
  int v67; // [sp+28h] [bp-48h]@143
  char v68; // [sp+2Ch] [bp-44h]@68
  int v69; // [sp+30h] [bp-40h]@115
  char v70; // [sp+34h] [bp-3Ch]@79
  int v71; // [sp+38h] [bp-38h]@79
  void **v72; // [sp+3Ch] [bp-34h]@10
  __int64 v73; // [sp+40h] [bp-30h]@43
  int v74; // [sp+48h] [bp-28h]@8
  char v75; // [sp+4Ch] [bp-24h]@8

  v2 = a2;
  v3 = this;
  result = (void **)*((_WORD *)a2 + 20);
  if ( (_BYTE)result )
  {
    if ( (unsigned int)result >= 0x100 && *((_QWORD *)a2 + 3) == *((_QWORD *)a2 + 4) )
    {
      if ( !*((_DWORD *)a2 + 35) )
        sub_21E5F48();
LABEL_21:
      (*((void (__fastcall **)(_DWORD))v2 + 36))((char *)v2 + 132);
      result = 0;
      *((_BYTE *)v2 + 40) = 0;
      return result;
    }
    v5 = (char *)a2 + 52;
    if ( (*(int (__fastcall **)(char *))(*((_DWORD *)a2 + 13) + 40))((char *)a2 + 52) != 1
      || (*(int (__fastcall **)(char *))(*(_DWORD *)v5 + 24))((char *)v2 + 52)
      || ((*(void (__fastcall **)(char *, char *))(*(_DWORD *)v5 + 132))(&v75, (char *)v2 + 52),
          v74 = 0,
          v6 = std::__exception_ptr::operator==(&v75, &v74),
          std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v74),
          std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v75),
          v6 != 1) )
      if ( !*((_DWORD *)v2 + 35) )
      goto LABEL_21;
    result = (void **)(*(int (__fastcall **)(char *))(*(_DWORD *)v5 + 36))((char *)v2 + 52);
    v7 = result;
    if ( (signed int)result >= 1 )
      Concurrency::streams::container_buffer<std::string>::container_buffer((int)&v72, 0x10u);
      v8 = *((_DWORD *)v3 + 2);
      if ( (signed int)v7 >= 0x100000 )
        v7 = (void **)0x100000;
      if ( !v8 )
        std::__throw_bad_weak_ptr();
      v9 = *(_DWORD *)(v8 + 4);
      v10 = (unsigned int *)(v8 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v9 )
            std::__throw_bad_weak_ptr();
          __dmb();
          v11 = __ldrex(v10);
          if ( v11 == v9 )
            break;
          __clrex();
          v9 = v11;
        }
        v12 = __strex(v9 + 1, v10);
        v9 = v11;
      }
      while ( v12 );
      __dmb();
      v13 = *((_DWORD *)v3 + 1);
      v14 = (unsigned int *)(v8 + 8);
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
      else
        ++*v14;
          v16 = __ldrex(v10);
        while ( __strex(v16 - 1, v10) );
        v16 = (*v10)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
        if ( &pthread_create )
          do
            v17 = __ldrex(v14);
          while ( __strex(v17 - 1, v14) );
        else
          v17 = (*v14)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
      Concurrency::streams::streambuf<unsigned char>::create_istream((int)&v66, (int)v2 + 52);
      v64 = &off_26DDAC4;
      v18 = v73;
      if ( HIDWORD(v73) )
        v19 = (unsigned int *)(HIDWORD(v73) + 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 + 1, v19) );
          ++*v19;
        v65 = v18;
            v21 = __ldrex(v19);
          while ( __strex(v21 + 1, v19) );
            v22 = __ldrex(v19);
          while ( __strex(v22 - 1, v19) );
          v22 = (*v19)--;
        if ( v22 == 1 )
          v23 = (unsigned int *)(HIDWORD(v18) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v18) + 8))(HIDWORD(v18));
          if ( &pthread_create )
          {
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          }
          else
            v24 = (*v23)--;
          if ( v24 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v18) + 12))(HIDWORD(v18));
        v65 = (unsigned int)v73;
      Concurrency::streams::basic_istream<unsigned char>::read((int)&v68, (int)&v66, (int)&v64, (unsigned int)v7);
      v60 = v13;
      v61 = v8;
          v25 = __ldrex(v14);
        while ( __strex(v25 + 1, v14) );
      v62 = &off_26DDA34;
      v63 = v73;
        v26 = (unsigned int *)(HIDWORD(v73) + 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 + 1, v26) );
          ++*v26;
      v62 = &off_26DD410;
      sub_164378C((int)&v70, (int)&v68, (int)&v60);
      v28 = v71;
      if ( v71 )
        v29 = (unsigned int *)(v71 + 4);
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
      v33 = HIDWORD(v63);
      if ( HIDWORD(v63) )
        v34 = (unsigned int *)(HIDWORD(v63) + 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 == 1 )
          v36 = (unsigned int *)(v33 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
      v38 = v61;
      if ( v61 )
        v39 = (unsigned int *)(v61 + 8);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 == 1 )
          (*(void (**)(void))(*(_DWORD *)v38 + 12))();
      v41 = v69;
      if ( v69 )
        v42 = (unsigned int *)(v69 + 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 == 1 )
          v44 = (unsigned int *)(v41 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
      v46 = HIDWORD(v65);
      if ( HIDWORD(v65) )
        v47 = (unsigned int *)(HIDWORD(v65) + 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 == 1 )
          v49 = (unsigned int *)(v46 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 8))(v46);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
      v51 = v67;
      if ( v67 )
        v52 = (unsigned int *)(v67 + 4);
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
          v53 = (*v52)--;
        if ( v53 == 1 )
          v54 = (unsigned int *)(v51 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v51 + 8))(v51);
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
            v55 = (*v54)--;
          if ( v55 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v51 + 12))(v51);
          v56 = __ldrex(v14);
        while ( __strex(v56 - 1, v14) );
        v56 = (*v14)--;
      if ( v56 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
      result = &off_26DDA34;
      v72 = &off_26DDA34;
      v57 = HIDWORD(v73);
        v58 = (unsigned int *)(HIDWORD(v73) + 4);
            result = (void **)__ldrex(v58);
          while ( __strex((unsigned int)result - 1, v58) );
          result = (void **)(*v58)--;
        if ( result == (void **)1 )
          v59 = (unsigned int *)(v57 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 8))(v57);
              result = (void **)__ldrex(v59);
            while ( __strex((unsigned int)result - 1, v59) );
            result = (void **)(*v59)--;
          if ( result == (void **)1 )
            result = (void **)(*(int (__fastcall **)(int))(*(_DWORD *)v57 + 12))(v57);
  }
  return result;
}


IFileChunkDownloader *__fastcall StreamFileDownloader::StreamFileDownloader(IFileChunkDownloader *a1)
{
  IFileChunkDownloader *v1; // r4@1

  v1 = a1;
  IFileChunkDownloader::IFileChunkDownloader(a1);
  *(_QWORD *)v1 = (unsigned int)&off_26EC1CC;
  *((_DWORD *)v1 + 2) = 0;
  _aeabi_memclr4((char *)v1 + 12, 48);
  MPMCQueue<std::function<void ()(void)>>::MPMCQueue((int)v1 + 16);
  return v1;
}


__int64 __fastcall StreamFileDownloader::getDownloadTotalSize(StreamFileDownloader *this)
{
  int v1; // r0@1
  __int64 result; // r0@2

  v1 = *((_DWORD *)this + 3);
  if ( v1 )
    result = *(_QWORD *)(v1 + 32);
  else
    result = 0LL;
  return result;
}


void **__fastcall StreamFileDownloader::update(StreamFileDownloader *this)
{
  StreamFileDownloader *v1; // r4@1
  unsigned __int8 *v2; // r5@1
  unsigned int v3; // r0@2
  int v4; // r0@4
  __int64 v5; // r1@5
  int (*v6)(void); // r7@5
  void (__fastcall *v7)(_DWORD); // r0@5
  int (*v8)(void); // r3@5
  int v9; // r0@7
  void (*v10)(void); // r3@7
  int v11; // r0@10
  int v12; // r0@13
  void **result; // r0@17
  _QWORD *v14; // r5@18
  signed int v15; // r7@20
  __int64 v16; // r2@20
  signed int v17; // r0@20
  int v18; // r5@27
  void (*v19)(void); // r3@28
  int v20; // r5@30
  int v21; // r3@30
  __int64 v22; // [sp+0h] [bp-48h]@5
  int (*v23)(void); // [sp+8h] [bp-40h]@1
  void (__fastcall *v24)(_DWORD); // [sp+Ch] [bp-3Ch]@5
  __int64 v25; // [sp+10h] [bp-38h]@5
  int (*v26)(void); // [sp+18h] [bp-30h]@5
  void (__fastcall *v27)(_DWORD); // [sp+1Ch] [bp-2Ch]@5

  v1 = this;
  v2 = (unsigned __int8 *)this + 56;
  v23 = 0;
  while ( 1 )
  {
    do
    {
      do
        v3 = __ldrex(v2);
      while ( __strex(1u, v2) );
      __dmb();
    }
    while ( v3 );
    v4 = *((_DWORD *)v1 + 6);
    if ( *((_DWORD *)v1 + 10) == v4 )
      break;
    LODWORD(v5) = *(_DWORD *)v4;
    HIDWORD(v5) = *(_DWORD *)(v4 + 4);
    v6 = *(int (**)(void))(v4 + 8);
    *(_DWORD *)(v4 + 8) = 0;
    v7 = *(void (__fastcall **)(_DWORD))(v4 + 12);
    v25 = v22;
    v22 = v5;
    v8 = v23;
    v23 = v6;
    v26 = v8;
    v27 = v24;
    v24 = v7;
    if ( v8 )
      ((void (__fastcall *)(__int64 *, __int64 *, signed int))v8)(&v25, &v25, 3);
    v9 = *((_DWORD *)v1 + 6);
    v10 = *(void (**)(void))(v9 + 8);
    if ( v9 == *((_DWORD *)v1 + 8) - 16 )
      if ( v10 )
        v10();
      operator delete(*((void **)v1 + 7));
      v12 = *((_DWORD *)v1 + 9);
      *((_DWORD *)v1 + 9) = v12 + 4;
      v11 = *(_DWORD *)(v12 + 4);
      *((_DWORD *)v1 + 7) = v11;
      *((_DWORD *)v1 + 8) = v11 + 512;
    else
      {
        v9 = *((_DWORD *)v1 + 6);
      }
      v11 = v9 + 16;
    *((_DWORD *)v1 + 6) = v11;
    __dmb();
    *v2 = 0;
    if ( !v23 )
      sub_21E5F48();
    v24(&v22);
  }
  __dmb();
  *((_BYTE *)v1 + 56) = 0;
  result = (void **)*((_DWORD *)v1 + 3);
  if ( result )
    v14 = result[24];
    sub_21E034C(&v25);
    if ( !*(_BYTE *)v14 && *((_BYTE *)v14 + 24) )
      v15 = 0;
      v16 = v14[4];
      v17 = 0;
      if ( (unsigned int)v25 <= (unsigned int)v16 )
        v17 = 1;
      if ( SHIDWORD(v25) <= SHIDWORD(v16) )
        v15 = 1;
      if ( HIDWORD(v25) == HIDWORD(v16) )
        v15 = v17;
      if ( !v15 )
        v18 = *((_DWORD *)v1 + 3);
        if ( *(_DWORD *)(v18 + 108) )
        {
          (*(void (__fastcall **)(int))(v18 + 112))(v18 + 100);
          v18 = *((_DWORD *)v1 + 3);
          v19 = *(void (**)(void))(v18 + 108);
          if ( v19 )
          {
            v19();
            *(_DWORD *)(v18 + 108) = 0;
            *(_DWORD *)(v18 + 112) = 0;
            v18 = *((_DWORD *)v1 + 3);
          }
        }
        v20 = *(_DWORD *)(v18 + 96);
        sub_21E034C(&v25);
        v21 = v20 + 8;
        *(_QWORD *)v21 = v25;
        *(_DWORD *)(v21 + 8) = 0;
        *(_DWORD *)(v20 + 20) = 0;
        *(_BYTE *)(v20 + 24) = 0;
        *(_BYTE *)(v20 + 1) = 0;
    result = StreamFileDownloader::_tryReadStream(v1, *((StreamFileDownloader::DownloadInfo **)v1 + 3));
  if ( v23 )
    result = (void **)v23();
  return result;
}
