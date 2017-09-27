

void __fastcall FileSizeRequest::send(FileSizeRequest *this)
{
  FileSizeRequest *v1; // r6@1
  void *v2; // r0@1
  __int64 v3; // r0@6
  int v4; // r5@6
  unsigned int *v5; // r1@7
  unsigned int v6; // r0@9
  unsigned int *v7; // r6@13
  unsigned int v8; // r0@15
  void *v9; // r0@17
  __int64 v10; // kr00_8@18
  unsigned int *v11; // r0@19
  unsigned int v12; // r1@21
  int v13; // r5@26
  unsigned int *v14; // r1@27
  unsigned int v15; // r0@29
  unsigned int *v16; // r6@33
  unsigned int v17; // r0@35
  int v18; // r0@42
  unsigned int *v19; // r1@43
  unsigned int v20; // r2@44
  int v21; // r5@47
  unsigned int *v22; // r1@48
  unsigned int v23; // r0@50
  unsigned int *v24; // r6@54
  unsigned int v25; // r0@56
  unsigned int *v26; // r2@61
  signed int v27; // r1@63
  unsigned int *v28; // r0@67
  unsigned int v29; // r1@69
  unsigned int *v30; // r0@73
  unsigned int v31; // r1@75
  __int64 v32; // r0@79
  int v33; // r7@79
  unsigned int *v34; // r1@80
  unsigned int v35; // r0@82
  unsigned int *v36; // r6@86
  unsigned int v37; // r0@88
  int v38; // r6@97
  unsigned int *v39; // r1@98
  unsigned int v40; // r0@100
  unsigned int *v41; // r7@104
  unsigned int v42; // r0@106
  int v43; // r6@111
  unsigned int *v44; // r1@112
  unsigned int v45; // r0@114
  unsigned int *v46; // r7@118
  unsigned int v47; // r0@120
  int v48; // r6@125
  unsigned int *v49; // r1@126
  unsigned int v50; // r0@128
  unsigned int *v51; // r7@132
  unsigned int v52; // r0@134
  int v53; // r6@139
  unsigned int *v54; // r1@140
  unsigned int v55; // r0@142
  unsigned int *v56; // r7@146
  unsigned int v57; // r0@148
  int v58; // r0@153
  unsigned int *v59; // r1@154
  unsigned int v60; // r2@155
  int v61; // r6@158
  unsigned int *v62; // r1@159
  unsigned int v63; // r0@161
  unsigned int *v64; // r7@165
  unsigned int v65; // r0@167
  unsigned int *v66; // r1@173
  unsigned int v67; // r0@175
  unsigned int *v68; // r6@179
  unsigned int v69; // r0@181
  int v70; // r5@186
  unsigned int *v71; // r1@187
  unsigned int v72; // r0@189
  unsigned int *v73; // r6@193
  unsigned int v74; // r0@195
  void *v75; // r0@201
  void *v76; // r0@202
  unsigned int *v77; // r2@204
  signed int v78; // r1@206
  unsigned int *v79; // r2@208
  signed int v80; // r1@210
  unsigned int *v81; // r2@220
  signed int v82; // r1@222
  __int64 v83; // [sp+0h] [bp-E8h]@72
  int v84; // [sp+8h] [bp-E0h]@72
  int v85; // [sp+Ch] [bp-DCh]@66
  int v86; // [sp+10h] [bp-D8h]@66
  char v87; // [sp+14h] [bp-D4h]@72
  int v88; // [sp+18h] [bp-D0h]@139
  char v89; // [sp+1Ch] [bp-CCh]@72
  int v90; // [sp+20h] [bp-C8h]@125
  char v91; // [sp+24h] [bp-C4h]@78
  int v92; // [sp+28h] [bp-C0h]@79
  int v93; // [sp+2Ch] [bp-BCh]@17
  int v94; // [sp+30h] [bp-B8h]@17
  int v95; // [sp+34h] [bp-B4h]@66
  int *v96[2]; // [sp+38h] [bp-B0h]@17
  int v97; // [sp+40h] [bp-A8h]@5
  int v98; // [sp+44h] [bp-A4h]@5
  int v99; // [sp+48h] [bp-A0h]@5
  int v100; // [sp+4Ch] [bp-9Ch]@5
  char v101; // [sp+54h] [bp-94h]@5
  int v102; // [sp+58h] [bp-90h]@5
  void *ptr; // [sp+5Ch] [bp-8Ch]@5
  int v104; // [sp+60h] [bp-88h]@5
  int v105; // [sp+64h] [bp-84h]@5
  __int16 v106; // [sp+68h] [bp-80h]@5
  char v107; // [sp+6Ch] [bp-7Ch]@5
  int v108; // [sp+70h] [bp-78h]@6
  char v109; // [sp+74h] [bp-74h]@2
  int v110; // [sp+78h] [bp-70h]@3
  int v111; // [sp+90h] [bp-58h]@2
  int v112; // [sp+94h] [bp-54h]@1
  int v113; // [sp+98h] [bp-50h]@1
  int v114; // [sp+9Ch] [bp-4Ch]@202
  int v115; // [sp+B8h] [bp-30h]@5
  int v116; // [sp+BCh] [bp-2Ch]@5
  char v117; // [sp+C0h] [bp-28h]@17

  v1 = this;
  utility::conversions::to_string_t(&v112, (int *)this + 15);
  web::uri::uri((int)&v113, &v112);
  v2 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v112 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  sub_119C854(&v111, &v113);
  web::details::uri_components::uri_components((web::details::uri_components *)&v109);
  web::details::uri_parser::parse((web::details::uri_parser **)&v111, (int)&v109);
  if ( web::uri::validate() == 1
    && *(_DWORD *)(v110 - 12)
    && ServiceClient::getForceOfflineResponses(*((ServiceClient **)v1 + 3)) != 1 )
    web::http::client::http_client::http_client((web::http::client::http_client *)v96, (const web::uri *)&v113);
    sub_119C854(&v93, (int *)&web::http::methods::HEAD);
    std::__shared_ptr<web::http::details::_http_request,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<web::http::details::_http_request>,std::string>(
      (int)&v94,
      (int)&v117,
      &v93);
    v9 = (void *)(v93 - 12);
    if ( (int *)(v93 - 12) != &dword_28898C0 )
      v81 = (unsigned int *)(v93 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v82 = __ldrex(v81);
        while ( __strex(v82 - 1, v81) );
      }
      else
        v82 = (*v81)--;
      if ( v82 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    web::http::http_headers::add<char [9]>(v94 + 20, (int *)&web::http::header_names::accept_encoding, "identity");
    v10 = *((_QWORD *)v1 + 10);
    if ( HIDWORD(v10) )
      v11 = (unsigned int *)(HIDWORD(v10) + 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
        ++*v11;
    v85 = v94;
    v86 = v95;
    if ( v95 )
      v28 = (unsigned int *)(v95 + 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 + 1, v28) );
        ++*v28;
    v84 = 0;
    web::http::client::http_client::request((pplx::details::platform *)&v87, v96, (int)&v85, &v84);
    sub_FC4178((int)&v89, (int)&v87);
    v83 = v10;
      v30 = (unsigned int *)(HIDWORD(v10) + 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 + 1, v30) );
        ++*v30;
    sub_FC4A98((int)&v91, (int)&v89, (int)&v83);
    if ( (char *)v1 + 44 != &v91 )
      v32 = *(_QWORD *)&v91;
      *(_DWORD *)&v91 = 0;
      v92 = 0;
      *((_DWORD *)v1 + 11) = v32;
      v33 = *((_DWORD *)v1 + 12);
      *((_DWORD *)v1 + 12) = HIDWORD(v32);
      if ( v33 )
        v34 = (unsigned int *)(v33 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
        }
        else
          v35 = (*v34)--;
        if ( v35 == 1 )
          v36 = (unsigned int *)(v33 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
          if ( &pthread_create )
          {
            __dmb();
            do
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
          }
          else
            v37 = (*v36)--;
          if ( v37 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
    v38 = v92;
    if ( v92 )
      v39 = (unsigned int *)(v92 + 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 == 1 )
        v41 = (unsigned int *)(v38 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
    v43 = HIDWORD(v83);
    if ( HIDWORD(v83) )
      v44 = (unsigned int *)(HIDWORD(v83) + 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 == 1 )
        v46 = (unsigned int *)(v43 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 8))(v43);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 12))(v43);
    v48 = v90;
    if ( v90 )
      v49 = (unsigned int *)(v90 + 4);
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
    v53 = v88;
    if ( v88 )
      v54 = (unsigned int *)(v88 + 4);
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
    v58 = v84;
    if ( v84 )
      v59 = (unsigned int *)(v84 + 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      if ( v60 == 1 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v58 + 8))(v58);
    v61 = v86;
    if ( v86 )
      v62 = (unsigned int *)(v86 + 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 == 1 )
        v64 = (unsigned int *)(v61 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          v65 = (*v64)--;
        if ( v65 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
      v66 = (unsigned int *)(HIDWORD(v10) + 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 == 1 )
        v68 = (unsigned int *)(HIDWORD(v10) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 8))(HIDWORD(v10));
            v69 = __ldrex(v68);
          while ( __strex(v69 - 1, v68) );
          v69 = (*v68)--;
        if ( v69 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
    v70 = v95;
      v71 = (unsigned int *)(v95 + 4);
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 == 1 )
        v73 = (unsigned int *)(v70 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v70 + 8))(v70);
            v74 = __ldrex(v73);
          while ( __strex(v74 - 1, v73) );
          v74 = (*v73)--;
        if ( v74 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v70 + 12))(v70);
    web::http::client::http_client::~http_client((web::http::client::http_client *)v96);
  else
    pplx::get_ambient_scheduler((pplx *)&v115);
    v97 = v115;
    v98 = v116;
    v99 = v115;
    v100 = 0;
    v101 = 0;
    v106 = 0;
    v104 = 0;
    v105 = 0;
    v102 = 0;
    ptr = 0;
    pplx::task_from_result((pplx *)&v107, (const pplx::task_options *)&v97);
    if ( (char *)v1 + 44 != &v107 )
      v3 = *(_QWORD *)&v107;
      *(_DWORD *)&v107 = 0;
      v108 = 0;
      *((_DWORD *)v1 + 11) = v3;
      v4 = *((_DWORD *)v1 + 12);
      *((_DWORD *)v1 + 12) = HIDWORD(v3);
      if ( v4 )
        v5 = (unsigned int *)(v4 + 4);
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    v13 = v108;
    if ( v108 )
      v14 = (unsigned int *)(v108 + 4);
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
    if ( ptr )
      operator delete(ptr);
    v18 = v100;
    if ( v100 )
      v19 = (unsigned int *)(v100 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      if ( v20 == 1 )
        (*(void (**)(void))(*(_DWORD *)v18 + 8))();
    v21 = v98;
    if ( v98 )
      v22 = (unsigned int *)(v98 + 4);
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
  web::details::uri_components::~uri_components((web::details::uri_components *)&v109);
  v75 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v111 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v75);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v114);
  v76 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v113 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v76);
}


void __fastcall FileSizeRequest::~FileSizeRequest(FileSizeRequest *this)
{
  FileSizeRequest::~FileSizeRequest(this);
}


void __fastcall FileSizeRequest::~FileSizeRequest(FileSizeRequest *this)
{
  FileSizeRequest *v1; // r0@1

  v1 = FileSizeRequest::~FileSizeRequest(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall FileSizeRequest::FileSizeRequest(int a1, int a2, int *a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int *v6; // r7@1
  void (__fastcall *v7)(int, int, signed int); // r3@1
  int v9; // [sp+4h] [bp-24h]@3
  char v10; // [sp+Ch] [bp-1Ch]@3

  v4 = a1;
  v5 = a4;
  v6 = a3;
  RequestHandler::RequestHandler(a1, a2, -1, -1, 15);
  *(_DWORD *)v4 = &off_26DDF60;
  sub_119C854((int *)(v4 + 60), v6);
  *(_DWORD *)(v4 + 72) = 0;
  v7 = *(void (__fastcall **)(int, int, signed int))(v5 + 8);
  if ( v7 )
  {
    v7(v4 + 64, v5, 2);
    *(_DWORD *)(v4 + 76) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v4 + 72) = *(_DWORD *)(v5 + 8);
  }
  v9 = 0;
  std::__shared_ptr<unsigned long long,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<unsigned long long>,int>(
    v4 + 80,
    (int)&v10,
    &v9);
  return v4;
}


int __fastcall FileSizeRequest::onComplete(FileSizeRequest *this)
{
  FileSizeRequest *v1; // r4@1
  int result; // r0@1
  __int64 v3; // r2@2
  void (__fastcall *v4)(char *, char *, signed int); // r3@2

  v1 = this;
  result = *((_DWORD *)this + 18);
  if ( result )
  {
    v3 = *(_QWORD *)(*(_QWORD *)((char *)v1 + 76) >> 32);
    result = ((int (__fastcall *)(char *))*(_QWORD *)((char *)v1 + 76))((char *)v1 + 64);
    v4 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 18);
    if ( v4 )
    {
      v4((char *)v1 + 64, (char *)v1 + 64, 3);
      result = 0;
      *((_DWORD *)v1 + 18) = 0;
      *((_DWORD *)v1 + 19) = 0;
    }
  }
  return result;
}


void __fastcall FileSizeRequest::send(FileSizeRequest *this)
{
  FileSizeRequest::send(this);
}


FileSizeRequest *__fastcall FileSizeRequest::~FileSizeRequest(FileSizeRequest *this)
{
  FileSizeRequest *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  void (*v7)(void); // r3@15
  int v8; // r1@17
  void *v9; // r0@17
  unsigned int *v11; // r2@19
  signed int v12; // r1@21

  v1 = this;
  *(_DWORD *)this = &off_26DDF60;
  v2 = *((_DWORD *)this + 21);
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
  v7 = (void (*)(void))*((_DWORD *)v1 + 18);
  if ( v7 )
    v7();
  v8 = *((_DWORD *)v1 + 15);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v8 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  RequestHandler::~RequestHandler(v1);
  return v1;
}
