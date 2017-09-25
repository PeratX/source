

void __fastcall OculusGetServiceTicket::send(OculusGetServiceTicket *this)
{
  OculusGetServiceTicket *v1; // r4@1
  const void **v2; // r5@1
  const void **v3; // r0@1
  char *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  int v7; // r6@4
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  int v11; // r6@7
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  void *v15; // r0@10
  __int64 v16; // kr00_8@11
  unsigned int *v17; // r0@12
  unsigned int v18; // r1@14
  unsigned int *v19; // r0@18
  unsigned int v20; // r1@20
  unsigned int *v21; // r0@24
  unsigned int v22; // r1@26
  __int64 v23; // r0@30
  int v24; // r7@30
  unsigned int *v25; // r1@31
  unsigned int v26; // r0@33
  unsigned int *v27; // r4@37
  unsigned int v28; // r0@39
  int v29; // r4@44
  unsigned int *v30; // r1@45
  unsigned int v31; // r0@47
  unsigned int *v32; // r7@51
  unsigned int v33; // r0@53
  int v34; // r4@58
  unsigned int *v35; // r1@59
  unsigned int v36; // r0@61
  unsigned int *v37; // r7@65
  unsigned int v38; // r0@67
  int v39; // r4@72
  unsigned int *v40; // r1@73
  unsigned int v41; // r0@75
  unsigned int *v42; // r7@79
  unsigned int v43; // r0@81
  int v44; // r4@86
  unsigned int *v45; // r1@87
  unsigned int v46; // r0@89
  unsigned int *v47; // r7@93
  unsigned int v48; // r0@95
  int v49; // r0@100
  unsigned int *v50; // r1@101
  unsigned int v51; // r2@102
  int v52; // r4@105
  unsigned int *v53; // r1@106
  unsigned int v54; // r0@108
  unsigned int *v55; // r7@112
  unsigned int v56; // r0@114
  unsigned int *v57; // r1@120
  unsigned int v58; // r0@122
  unsigned int *v59; // r4@126
  unsigned int v60; // r0@128
  void *v61; // r0@133
  int v62; // r4@134
  unsigned int *v63; // r1@135
  unsigned int v64; // r0@137
  unsigned int *v65; // r5@141
  unsigned int v66; // r0@143
  char *v67; // r0@148
  unsigned int *v68; // r2@150
  signed int v69; // r1@152
  unsigned int *v70; // r2@154
  signed int v71; // r1@156
  unsigned int *v72; // r2@158
  signed int v73; // r1@160
  unsigned int *v74; // r2@162
  signed int v75; // r1@164
  unsigned int *v76; // r2@166
  signed int v77; // r1@168
  unsigned int *v78; // r2@170
  signed int v79; // r1@172
  unsigned int *v80; // r2@174
  signed int v81; // r1@176
  unsigned int *v82; // r2@178
  signed int v83; // r1@180
  unsigned int *v84; // r2@182
  signed int v85; // r1@184
  unsigned int *v86; // r2@186
  signed int v87; // r1@188
  unsigned int *v88; // r2@190
  signed int v89; // r1@192
  unsigned int *v90; // r2@194
  signed int v91; // r1@196
  __int64 v92; // [sp+4h] [bp-CCh]@23
  int v93; // [sp+Ch] [bp-C4h]@23
  web::http::details::_http_request *v94; // [sp+10h] [bp-C0h]@17
  int v95; // [sp+14h] [bp-BCh]@17
  char v96; // [sp+18h] [bp-B8h]@23
  int v97; // [sp+1Ch] [bp-B4h]@86
  char v98; // [sp+20h] [bp-B0h]@23
  int v99; // [sp+24h] [bp-ACh]@72
  char v100; // [sp+28h] [bp-A8h]@29
  int v101; // [sp+2Ch] [bp-A4h]@30
  int v102; // [sp+30h] [bp-A0h]@10
  int v103; // [sp+34h] [bp-9Ch]@10
  int v104; // [sp+38h] [bp-98h]@133
  int v105; // [sp+54h] [bp-7Ch]@7
  int v106; // [sp+58h] [bp-78h]@7
  int v107; // [sp+60h] [bp-70h]@7
  int v108; // [sp+64h] [bp-6Ch]@4
  int v109; // [sp+68h] [bp-68h]@4
  int v110; // [sp+70h] [bp-60h]@4
  int v111; // [sp+74h] [bp-5Ch]@3
  web::http::details::_http_request *v112; // [sp+78h] [bp-58h]@3
  int v113; // [sp+7Ch] [bp-54h]@17
  int v114; // [sp+80h] [bp-50h]@2
  int v115; // [sp+84h] [bp-4Ch]@2
  int *v116[2]; // [sp+A0h] [bp-30h]@2
  char *v117; // [sp+A8h] [bp-28h]@1
  char *v118; // [sp+ACh] [bp-24h]@1
  char v119; // [sp+B0h] [bp-20h]@3

  v1 = this;
  v117 = (char *)&unk_28898CC;
  v2 = (const void **)((char *)this + 60);
  sub_21E6FCC((const void **)&v117, *(_DWORD *)(*((_DWORD *)this + 15) - 12) + 18);
  sub_21E7408((const void **)&v117, "/v7.0/sync/oculus/", 0x12u);
  sub_21E72F0((const void **)&v117, v2);
  v3 = sub_21E7408((const void **)&v117, "/ticket", 7u);
  v118 = (char *)*v3;
  *v3 = &unk_28898CC;
  v4 = v117 - 12;
  if ( (int *)(v117 - 12) != &dword_28898C0 )
  {
    v68 = (unsigned int *)(v117 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
    }
    else
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  web::uri::uri((web::uri *)&v114, "https://purchase.mp.microsoft.com/");
  web::http::client::http_client::http_client((web::http::client::http_client *)v116, (const web::uri *)&v114);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v115);
  v5 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v114 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E8AF4(&v111, (int *)&web::http::methods::GET);
  std::__shared_ptr<web::http::details::_http_request,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<web::http::details::_http_request>,std::string>(
    (int)&v112,
    (int)&v119,
    &v111);
  v6 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v111 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (int)v112;
  sub_21E94B4((void **)&v110, "MS-CorrelationId");
  mce::UUID::asString((mce::UUID *)&v108);
  utility::conversions::to_string_t(&v109, &v108);
  web::http::http_headers::add<std::string>(v7 + 20, &v110, &v109);
  v8 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v109 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v108 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v110 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (int)v112;
  sub_21E94B4((void **)&v107, "MS-RequestId");
  mce::UUID::asString((mce::UUID *)&v105);
  utility::conversions::to_string_t(&v106, &v105);
  web::http::http_headers::add<std::string>(v11 + 20, &v107, &v106);
  v12 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v106 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v105 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v107 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  utility::conversions::to_string_t(&v102, (int *)&v118);
  web::uri::uri((int)&v103, &v102);
  v15 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v102 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  web::http::details::_http_request::set_request_uri(v112, (const web::uri *)&v103);
  v16 = *((_QWORD *)v1 + 12);
  if ( HIDWORD(v16) )
    v17 = (unsigned int *)(HIDWORD(v16) + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  v94 = v112;
  v95 = v113;
  if ( v113 )
    v19 = (unsigned int *)(v113 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      ++*v19;
  v93 = 0;
  web::http::client::http_client::request((pplx::details::platform *)&v96, v116, (int)&v94, &v93);
  sub_140E834((int)&v98, (int)&v96);
  v92 = v16;
    v21 = (unsigned int *)(HIDWORD(v16) + 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 + 1, v21) );
      ++*v21;
  sub_140F154((int)&v100, (int)&v98, (int)&v92);
  if ( (char *)v1 + 44 != &v100 )
    v23 = *(_QWORD *)&v100;
    *(_DWORD *)&v100 = 0;
    v101 = 0;
    *((_DWORD *)v1 + 11) = v23;
    v24 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v23);
    if ( v24 )
      v25 = (unsigned int *)(v24 + 4);
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
  v29 = v101;
  if ( v101 )
    v30 = (unsigned int *)(v101 + 4);
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
  v34 = HIDWORD(v92);
  if ( HIDWORD(v92) )
    v35 = (unsigned int *)(HIDWORD(v92) + 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 == 1 )
      v37 = (unsigned int *)(v34 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
  v39 = v99;
  if ( v99 )
    v40 = (unsigned int *)(v99 + 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 == 1 )
      v42 = (unsigned int *)(v39 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
  v44 = v97;
  if ( v97 )
    v45 = (unsigned int *)(v97 + 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 == 1 )
      v47 = (unsigned int *)(v44 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
  v49 = v93;
  if ( v93 )
    v50 = (unsigned int *)(v93 + 4);
    __dmb();
    do
      v51 = __ldrex(v50);
    while ( __strex(v51 - 1, v50) );
    if ( v51 == 1 )
      (*(void (**)(void))(*(_DWORD *)v49 + 8))();
  v52 = v95;
  if ( v95 )
    v53 = (unsigned int *)(v95 + 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 == 1 )
      v55 = (unsigned int *)(v52 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 8))(v52);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 12))(v52);
    v57 = (unsigned int *)(HIDWORD(v16) + 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 == 1 )
      v59 = (unsigned int *)(HIDWORD(v16) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v16) + 8))(HIDWORD(v16));
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v16) + 12))(HIDWORD(v16));
  web::details::uri_components::~uri_components((web::details::uri_components *)&v104);
  v61 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v103 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  v62 = v113;
    v63 = (unsigned int *)(v113 + 4);
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
  web::http::client::http_client::~http_client((web::http::client::http_client *)v116);
  v67 = v118 - 12;
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v118 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
}


int __fastcall OculusGetServiceTicket::OculusGetServiceTicket(int a1, int a2, int *a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r6@1
  int *v7; // r7@1
  int v8; // r1@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r12@1
  void (__fastcall *v12)(int, int, signed int); // r3@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  RequestHandler::RequestHandler(a1, a2, -1, -1, 15);
  *(_DWORD *)v5 = &off_26E8484;
  sub_21E8AF4((int *)(v5 + 60), v7);
  v8 = *(_DWORD *)(v6 + 4);
  v9 = *(_DWORD *)(v6 + 8);
  v10 = *(_DWORD *)(v6 + 12);
  v11 = v5 + 64;
  *(_DWORD *)v11 = *(_DWORD *)v6;
  *(_DWORD *)(v11 + 4) = v8;
  *(_DWORD *)(v11 + 8) = v9;
  *(_DWORD *)(v11 + 12) = v10;
  *(_DWORD *)(v5 + 88) = 0;
  v12 = *(void (__fastcall **)(int, int, signed int))(a5 + 8);
  if ( v12 )
  {
    v12(v5 + 80, a5, 2);
    *(_DWORD *)(v5 + 92) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(v5 + 88) = *(_DWORD *)(a5 + 8);
  }
  j__ZNSt12__shared_ptrISsLN9__gnu_cxx12_Lock_policyE2EEC2ISaISsEJEEESt19_Sp_make_shared_tagRKT_DpOT0_(v5 + 96);
  return v5;
}


void __fastcall OculusGetServiceTicket::~OculusGetServiceTicket(OculusGetServiceTicket *this)
{
  OculusGetServiceTicket *v1; // r0@1

  v1 = OculusGetServiceTicket::~OculusGetServiceTicket(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall OculusGetServiceTicket::send(OculusGetServiceTicket *this)
{
  OculusGetServiceTicket::send(this);
}


int __fastcall OculusGetServiceTicket::onComplete(OculusGetServiceTicket *this)
{
  OculusGetServiceTicket *v1; // r4@1
  int result; // r0@1
  void (__fastcall *v3)(char *, char *, signed int); // r3@2

  v1 = this;
  result = *((_DWORD *)this + 22);
  if ( result )
  {
    result = ((int (__fastcall *)(char *, _DWORD))*(_QWORD *)((char *)v1 + 92))(
               (char *)v1 + 80,
               *(_QWORD *)((char *)v1 + 92) >> 32);
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


OculusGetServiceTicket *__fastcall OculusGetServiceTicket::~OculusGetServiceTicket(OculusGetServiceTicket *this)
{
  OculusGetServiceTicket *v1; // r4@1
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
  *(_DWORD *)this = &off_26E8484;
  v2 = *((_DWORD *)this + 25);
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
  v7 = (void (*)(void))*((_DWORD *)v1 + 22);
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
      j_j_j_j__ZdlPv_9(v9);
  RequestHandler::~RequestHandler(v1);
  return v1;
}


void __fastcall OculusGetServiceTicket::~OculusGetServiceTicket(OculusGetServiceTicket *this)
{
  OculusGetServiceTicket::~OculusGetServiceTicket(this);
}
