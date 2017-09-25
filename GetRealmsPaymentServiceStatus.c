

void __fastcall GetRealmsPaymentServiceStatus::send(GetRealmsPaymentServiceStatus *this)
{
  GetRealmsPaymentServiceStatus *v1; // r6@1
  void *v2; // r0@1
  int v3; // r5@2
  void *v4; // r0@2
  int v5; // r5@3
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  int v9; // r5@6
  void *v10; // r0@6
  void *v11; // r0@7
  void *v12; // r0@8
  __int64 v13; // kr00_8@9
  unsigned int *v14; // r0@10
  unsigned int v15; // r1@12
  unsigned int *v16; // r0@16
  unsigned int v17; // r1@18
  unsigned int *v18; // r0@22
  unsigned int v19; // r1@24
  __int64 v20; // r0@28
  int v21; // r7@28
  unsigned int *v22; // r1@29
  unsigned int v23; // r0@31
  unsigned int *v24; // r6@35
  unsigned int v25; // r0@37
  int v26; // r6@42
  unsigned int *v27; // r1@43
  unsigned int v28; // r0@45
  unsigned int *v29; // r7@49
  unsigned int v30; // r0@51
  int v31; // r6@56
  unsigned int *v32; // r1@57
  unsigned int v33; // r0@59
  unsigned int *v34; // r7@63
  unsigned int v35; // r0@65
  int v36; // r6@70
  unsigned int *v37; // r1@71
  unsigned int v38; // r0@73
  unsigned int *v39; // r7@77
  unsigned int v40; // r0@79
  int v41; // r6@84
  unsigned int *v42; // r1@85
  unsigned int v43; // r0@87
  unsigned int *v44; // r7@91
  unsigned int v45; // r0@93
  int v46; // r6@98
  unsigned int *v47; // r1@99
  unsigned int v48; // r0@101
  unsigned int *v49; // r7@105
  unsigned int v50; // r0@107
  int v51; // r6@112
  unsigned int *v52; // r1@113
  unsigned int v53; // r0@115
  unsigned int *v54; // r7@119
  unsigned int v55; // r0@121
  unsigned int *v56; // r1@127
  unsigned int v57; // r0@129
  unsigned int *v58; // r6@133
  unsigned int v59; // r0@135
  void *v60; // r0@140
  int v61; // r4@141
  unsigned int *v62; // r1@142
  unsigned int v63; // r0@144
  unsigned int *v64; // r5@148
  unsigned int v65; // r0@150
  void *v66; // r0@155
  unsigned int *v67; // r2@157
  signed int v68; // r1@159
  unsigned int *v69; // r2@161
  signed int v70; // r1@163
  unsigned int *v71; // r2@165
  signed int v72; // r1@167
  unsigned int *v73; // r2@169
  signed int v74; // r1@171
  unsigned int *v75; // r2@173
  signed int v76; // r1@175
  unsigned int *v77; // r2@177
  signed int v78; // r1@179
  unsigned int *v79; // r2@181
  signed int v80; // r1@183
  unsigned int *v81; // r2@185
  signed int v82; // r1@187
  unsigned int *v83; // r2@189
  signed int v84; // r1@191
  unsigned int *v85; // r2@193
  signed int v86; // r1@195
  __int64 v87; // [sp+4h] [bp-ACh]@21
  int v88; // [sp+Ch] [bp-A4h]@15
  int v89; // [sp+10h] [bp-A0h]@15
  char v90; // [sp+14h] [bp-9Ch]@15
  int v91; // [sp+18h] [bp-98h]@112
  char v92; // [sp+1Ch] [bp-94h]@21
  int v93; // [sp+20h] [bp-90h]@84
  char v94; // [sp+24h] [bp-8Ch]@21
  int v95; // [sp+28h] [bp-88h]@70
  char v96; // [sp+2Ch] [bp-84h]@27
  int v97; // [sp+30h] [bp-80h]@28
  int v98; // [sp+34h] [bp-7Ch]@6
  int v99; // [sp+38h] [bp-78h]@6
  int v100; // [sp+40h] [bp-70h]@6
  int v101; // [sp+44h] [bp-6Ch]@3
  int v102; // [sp+48h] [bp-68h]@3
  int v103; // [sp+50h] [bp-60h]@3
  int v104; // [sp+58h] [bp-58h]@2
  int v105; // [sp+5Ch] [bp-54h]@1
  int v106; // [sp+60h] [bp-50h]@1
  int v107; // [sp+64h] [bp-4Ch]@140
  int v108; // [sp+80h] [bp-30h]@1
  int v109; // [sp+84h] [bp-2Ch]@15
  int v110; // [sp+8Ch] [bp-24h]@1
  char v111; // [sp+90h] [bp-20h]@1

  v1 = this;
  sub_21E94B4((void **)&v110, "status/");
  j__ZNSt12__shared_ptrI11RequestDataLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v108,
    (int)&v111,
    (int *)v1 + 15,
    (int *)&web::http::methods::GET);
  utility::conversions::to_string_t(&v105, &v110);
  web::uri::uri((int)&v106, &v105);
  v2 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
  {
    v67 = (unsigned int *)(v105 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
    }
    else
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  web::http::details::_http_request::set_request_uri(
    *(web::http::details::_http_request **)(v108 + 12),
    (const web::uri *)&v106);
  v3 = *(_DWORD *)(v108 + 12);
  sub_21E94B4((void **)&v104, "Charset");
  web::http::http_headers::add<char [6]>(v3 + 20, &v104, "utf-8");
  v4 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v104 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = *(_DWORD *)(v108 + 12);
  sub_21E94B4((void **)&v103, "Client-Version");
  Common::getGameVersionStringNet((Common *)&v101);
  utility::conversions::to_string_t(&v102, &v101);
  web::http::http_headers::add<std::string>(v5 + 20, &v103, &v102);
  v6 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v102 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v101 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v103 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *(_DWORD *)(v108 + 12);
  sub_21E94B4((void **)&v100, "User-Agent");
  Realms::getUserAgent((Realms *)&v98);
  utility::conversions::to_string_t(&v99, &v98);
  web::http::http_headers::add<std::string>(v9 + 20, &v100, &v99);
  v10 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v99 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v98 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v100 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *(_QWORD *)((char *)v1 + 84);
  if ( HIDWORD(v13) )
    v14 = (unsigned int *)(HIDWORD(v13) + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  RequestHandler::_getAuthorizationHeader((int)&v90, (int)v1, (int *)v1 + 16);
  v88 = v108;
  v89 = v109;
  if ( v109 )
    v16 = (unsigned int *)(v109 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
      ++*v16;
  sub_136FFD0((int)&v92, (int)&v90, (int)&v88);
  sub_1370934((int)&v94, (int)&v92);
  v87 = v13;
    v18 = (unsigned int *)(HIDWORD(v13) + 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
      ++*v18;
  sub_1371254((int)&v96, (int)&v94, (int)&v87);
  if ( (char *)v1 + 44 != &v96 )
    v20 = *(_QWORD *)&v96;
    *(_DWORD *)&v96 = 0;
    v97 = 0;
    *((_DWORD *)v1 + 11) = v20;
    v21 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v20);
    if ( v21 )
      v22 = (unsigned int *)(v21 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 == 1 )
        v24 = (unsigned int *)(v21 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
        if ( &pthread_create )
        {
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        }
        else
          v25 = (*v24)--;
        if ( v25 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  v26 = v97;
  if ( v97 )
    v27 = (unsigned int *)(v97 + 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 == 1 )
      v29 = (unsigned int *)(v26 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
  v31 = HIDWORD(v87);
  if ( HIDWORD(v87) )
    v32 = (unsigned int *)(HIDWORD(v87) + 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 == 1 )
      v34 = (unsigned int *)(v31 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
  v36 = v95;
  if ( v95 )
    v37 = (unsigned int *)(v95 + 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 == 1 )
      v39 = (unsigned int *)(v36 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 8))(v36);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 12))(v36);
  v41 = v93;
  if ( v93 )
    v42 = (unsigned int *)(v93 + 4);
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
  v46 = v89;
  if ( v89 )
    v47 = (unsigned int *)(v89 + 4);
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
  v51 = v91;
  if ( v91 )
    v52 = (unsigned int *)(v91 + 4);
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
    v56 = (unsigned int *)(HIDWORD(v13) + 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 == 1 )
      v58 = (unsigned int *)(HIDWORD(v13) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v13) + 8))(HIDWORD(v13));
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v13) + 12))(HIDWORD(v13));
  web::details::uri_components::~uri_components((web::details::uri_components *)&v107);
  v60 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v106 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  v61 = v109;
    v62 = (unsigned int *)(v109 + 4);
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
  v66 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v110 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
}


int __fastcall GetRealmsPaymentServiceStatus::onComplete(GetRealmsPaymentServiceStatus *this)
{
  GetRealmsPaymentServiceStatus *v1; // r4@1
  int result; // r0@1
  void (__fastcall *v3)(char *, char *, signed int); // r3@2

  v1 = this;
  result = *((_DWORD *)this + 19);
  if ( result )
  {
    result = ((int (__fastcall *)(char *, _DWORD))*((_QWORD *)v1 + 10))(
               (char *)v1 + 68,
               *(_BYTE *)(*((_QWORD *)v1 + 10) >> 32));
    v3 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 19);
    if ( v3 )
    {
      v3((char *)v1 + 68, (char *)v1 + 68, 3);
      result = 0;
      *((_DWORD *)v1 + 19) = 0;
      *((_DWORD *)v1 + 20) = 0;
    }
  }
  return result;
}


void __fastcall GetRealmsPaymentServiceStatus::~GetRealmsPaymentServiceStatus(GetRealmsPaymentServiceStatus *this)
{
  GetRealmsPaymentServiceStatus::~GetRealmsPaymentServiceStatus(this);
}


int __fastcall GetRealmsPaymentServiceStatus::GetRealmsPaymentServiceStatus(int a1, int a2, int *a3, int *a4, int a5)
{
  int v5; // r4@1
  int *v6; // r6@1
  int *v7; // r7@1
  void (__fastcall *v8)(int, int, signed int); // r3@1
  char v10; // [sp+Bh] [bp-2Dh]@3
  char v11; // [sp+14h] [bp-24h]@3

  v5 = a1;
  v6 = a4;
  v7 = a3;
  RequestHandler::RequestHandler(a1, a2, -1, -1, 15);
  *(_DWORD *)v5 = &off_26E72C8;
  sub_21E8AF4((int *)(v5 + 60), v7);
  sub_21E8AF4((int *)(v5 + 64), v6);
  *(_DWORD *)(v5 + 76) = 0;
  v8 = *(void (__fastcall **)(int, int, signed int))(a5 + 8);
  if ( v8 )
  {
    v8(v5 + 68, a5, 2);
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(v5 + 76) = *(_DWORD *)(a5 + 8);
  }
  v10 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(v5 + 84, (int)&v11, &v10);
  return v5;
}


void __fastcall GetRealmsPaymentServiceStatus::send(GetRealmsPaymentServiceStatus *this)
{
  GetRealmsPaymentServiceStatus::send(this);
}


GetRealmsPaymentServiceStatus *__fastcall GetRealmsPaymentServiceStatus::~GetRealmsPaymentServiceStatus(GetRealmsPaymentServiceStatus *this)
{
  GetRealmsPaymentServiceStatus *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  void (*v7)(void); // r3@15
  int v8; // r1@17
  void *v9; // r0@17
  int v10; // r1@18
  void *v11; // r0@18
  unsigned int *v13; // r2@20
  signed int v14; // r1@22
  unsigned int *v15; // r2@24
  signed int v16; // r1@26

  v1 = this;
  *(_DWORD *)this = &off_26E72C8;
  v2 = *((_DWORD *)this + 22);
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
  v7 = (void (*)(void))*((_DWORD *)v1 + 19);
  if ( v7 )
    v7();
  v8 = *((_DWORD *)v1 + 16);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v8 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 15);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v10 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  RequestHandler::~RequestHandler(v1);
  return v1;
}


void __fastcall GetRealmsPaymentServiceStatus::~GetRealmsPaymentServiceStatus(GetRealmsPaymentServiceStatus *this)
{
  GetRealmsPaymentServiceStatus *v1; // r0@1

  v1 = GetRealmsPaymentServiceStatus::~GetRealmsPaymentServiceStatus(this);
  j_j_j__ZdlPv_5((void *)v1);
}
