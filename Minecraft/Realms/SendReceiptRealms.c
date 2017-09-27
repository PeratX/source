

Realms::World *__fastcall SendReceiptRealms::onComplete(SendReceiptRealms *this)
{
  SendReceiptRealms *v1; // r9@1
  Realms::World *result; // r0@1
  int v3; // r1@2
  int v4; // r8@2
  Realms::World *v5; // r0@2
  void (__fastcall *v6)(char *, _DWORD); // r12@3
  int v7; // r2@3
  int v8; // r2@3
  int v9; // r2@3
  int v10; // r3@3
  int v11; // r4@3
  int v12; // r5@3
  int v13; // r6@3
  int v14; // r7@3
  __int16 v15; // r0@3
  int v16; // r1@3
  void (__fastcall *v17)(char *, char *, signed int); // r3@3
  __int64 v18; // [sp+0h] [bp-B0h]@2
  int v19; // [sp+8h] [bp-A8h]@3
  void *v20; // [sp+Ch] [bp-A4h]@3
  void *v21; // [sp+10h] [bp-A0h]@3
  void *v22; // [sp+14h] [bp-9Ch]@3
  void *v23; // [sp+18h] [bp-98h]@3
  int v24; // [sp+38h] [bp-78h]@3
  int v25; // [sp+3Ch] [bp-74h]@3
  int v26; // [sp+40h] [bp-70h]@3
  __int64 v27; // [sp+48h] [bp-68h]@3
  int v28; // [sp+50h] [bp-60h]@3
  int v29; // [sp+54h] [bp-5Ch]@3
  int v30; // [sp+58h] [bp-58h]@3
  int v31; // [sp+5Ch] [bp-54h]@3
  void *v32; // [sp+60h] [bp-50h]@3
  int v33; // [sp+64h] [bp-4Ch]@3
  int v34; // [sp+68h] [bp-48h]@3
  int v35; // [sp+6Ch] [bp-44h]@3
  int v36; // [sp+70h] [bp-40h]@3
  int v37; // [sp+74h] [bp-3Ch]@3
  int v38; // [sp+78h] [bp-38h]@3
  __int16 v39; // [sp+7Ch] [bp-34h]@3
  char v40; // [sp+7Eh] [bp-32h]@3
  int v41; // [sp+80h] [bp-30h]@3
  int v42; // [sp+84h] [bp-2Ch]@3
  int v43; // [sp+88h] [bp-28h]@3

  v1 = this;
  result = (Realms::World *)*((_DWORD *)this + 19);
  if ( result )
  {
    v3 = *((_DWORD *)v1 + 23);
    v4 = *(_BYTE *)v3;
    v5 = Realms::World::World((Realms::World *)&v18, (const Realms::World *)(v3 + 8));
    if ( !*((_DWORD *)v1 + 19) )
      sub_21E5F48();
    v6 = (void (__fastcall *)(char *, _DWORD))*((_DWORD *)v1 + 20);
    v27 = v18;
    v28 = v19;
    v7 = (int)v20;
    v20 = &unk_28898CC;
    v29 = v7;
    v8 = (int)v21;
    v21 = &unk_28898CC;
    v30 = v8;
    v9 = (int)v22;
    v22 = &unk_28898CC;
    v31 = v9;
    v32 = v23;
    v23 = &unk_28898CC;
    v10 = *((_DWORD *)v5 + 8);
    v11 = *((_DWORD *)v5 + 9);
    v12 = *((_DWORD *)v5 + 10);
    v13 = *((_DWORD *)v5 + 11);
    v14 = *((_DWORD *)v5 + 12);
    v33 = *((_DWORD *)v5 + 7);
    v34 = v10;
    v35 = v11;
    v36 = v12;
    v37 = v13;
    v38 = v14;
    LOBYTE(v10) = *((_BYTE *)v5 + 54);
    v15 = *((_WORD *)v5 + 26);
    v40 = v10;
    v39 = v15;
    v41 = v24;
    v24 = 0;
    v16 = v25;
    v25 = 0;
    v42 = v16;
    v43 = v26;
    v26 = 0;
    v6((char *)v1 + 68, v4 != 0);
    Realms::World::~World((Realms::World *)&v27);
    result = Realms::World::~World((Realms::World *)&v18);
    v17 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 19);
    if ( v17 )
    {
      v17((char *)v1 + 68, (char *)v1 + 68, 3);
      result = 0;
      *((_DWORD *)v1 + 19) = 0;
      *((_DWORD *)v1 + 20) = 0;
    }
  }
  return result;
}


void __fastcall SendReceiptRealms::~SendReceiptRealms(SendReceiptRealms *this)
{
  SendReceiptRealms *v1; // r0@1

  v1 = SendReceiptRealms::~SendReceiptRealms(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall SendReceiptRealms::send(SendReceiptRealms *this)
{
  SendReceiptRealms::send(this);
}


void __fastcall SendReceiptRealms::send(SendReceiptRealms *this)
{
  SendReceiptRealms *v1; // r5@1
  const char *v2; // r0@1
  void *v3; // r0@1
  int v4; // r6@2
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  int v8; // r6@5
  void *v9; // r0@5
  int v10; // r6@6
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  int v14; // r6@9
  void *v15; // r0@9
  void *v16; // r0@10
  void *v17; // r0@11
  __int64 v18; // kr00_8@12
  unsigned int *v19; // r0@13
  unsigned int v20; // r1@15
  unsigned int *v21; // r0@19
  unsigned int v22; // r1@21
  unsigned int *v23; // r0@25
  unsigned int v24; // r1@27
  __int64 v25; // r0@31
  int v26; // r7@31
  unsigned int *v27; // r1@32
  unsigned int v28; // r0@34
  unsigned int *v29; // r5@38
  unsigned int v30; // r0@40
  int v31; // r5@45
  unsigned int *v32; // r1@46
  unsigned int v33; // r0@48
  unsigned int *v34; // r7@52
  unsigned int v35; // r0@54
  int v36; // r5@59
  unsigned int *v37; // r1@60
  unsigned int v38; // r0@62
  unsigned int *v39; // r7@66
  unsigned int v40; // r0@68
  int v41; // r5@73
  unsigned int *v42; // r1@74
  unsigned int v43; // r0@76
  unsigned int *v44; // r7@80
  unsigned int v45; // r0@82
  int v46; // r5@87
  unsigned int *v47; // r1@88
  unsigned int v48; // r0@90
  unsigned int *v49; // r7@94
  unsigned int v50; // r0@96
  int v51; // r5@101
  unsigned int *v52; // r1@102
  unsigned int v53; // r0@104
  unsigned int *v54; // r7@108
  unsigned int v55; // r0@110
  int v56; // r5@115
  unsigned int *v57; // r1@116
  unsigned int v58; // r0@118
  unsigned int *v59; // r7@122
  unsigned int v60; // r0@124
  unsigned int *v61; // r1@130
  unsigned int v62; // r0@132
  unsigned int *v63; // r5@136
  unsigned int v64; // r0@138
  void *v65; // r0@143
  int v66; // r4@144
  unsigned int *v67; // r1@145
  unsigned int v68; // r0@147
  unsigned int *v69; // r5@151
  unsigned int v70; // r0@153
  void *v71; // r0@158
  unsigned int *v72; // r2@160
  signed int v73; // r1@162
  unsigned int *v74; // r2@164
  signed int v75; // r1@166
  unsigned int *v76; // r2@168
  signed int v77; // r1@170
  unsigned int *v78; // r2@172
  signed int v79; // r1@174
  unsigned int *v80; // r2@176
  signed int v81; // r1@178
  unsigned int *v82; // r2@180
  signed int v83; // r1@182
  unsigned int *v84; // r2@184
  signed int v85; // r1@186
  unsigned int *v86; // r2@188
  signed int v87; // r1@190
  unsigned int *v88; // r2@192
  signed int v89; // r1@194
  unsigned int *v90; // r2@196
  signed int v91; // r1@198
  unsigned int *v92; // r2@200
  signed int v93; // r1@202
  unsigned int *v94; // r2@204
  signed int v95; // r1@206
  unsigned int *v96; // r2@208
  signed int v97; // r1@210
  __int64 v98; // [sp+4h] [bp-BCh]@24
  int v99; // [sp+Ch] [bp-B4h]@18
  int v100; // [sp+10h] [bp-B0h]@18
  char v101; // [sp+14h] [bp-ACh]@18
  int v102; // [sp+18h] [bp-A8h]@115
  char v103; // [sp+1Ch] [bp-A4h]@24
  int v104; // [sp+20h] [bp-A0h]@87
  char v105; // [sp+24h] [bp-9Ch]@24
  int v106; // [sp+28h] [bp-98h]@73
  char v107; // [sp+2Ch] [bp-94h]@30
  int v108; // [sp+30h] [bp-90h]@31
  int v109; // [sp+34h] [bp-8Ch]@9
  int v110; // [sp+38h] [bp-88h]@9
  int v111; // [sp+40h] [bp-80h]@9
  int v112; // [sp+44h] [bp-7Ch]@6
  int v113; // [sp+48h] [bp-78h]@6
  int v114; // [sp+50h] [bp-70h]@6
  int v115; // [sp+58h] [bp-68h]@5
  int v116; // [sp+60h] [bp-60h]@2
  int v117; // [sp+64h] [bp-5Ch]@2
  int v118; // [sp+68h] [bp-58h]@2
  int v119; // [sp+6Ch] [bp-54h]@1
  int v120; // [sp+70h] [bp-50h]@1
  int v121; // [sp+74h] [bp-4Ch]@143
  int v122; // [sp+90h] [bp-30h]@1
  int v123; // [sp+94h] [bp-2Ch]@18
  int v124; // [sp+9Ch] [bp-24h]@1
  char v125; // [sp+A0h] [bp-20h]@1

  v1 = this;
  v2 = (const char *)(*(int (**)(void))(**((_DWORD **)this + 21) + 8))();
  sub_21E94B4((void **)&v124, v2);
  j__ZNSt12__shared_ptrI11RequestDataLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v122,
    (int)&v125,
    (int *)v1 + 15,
    (int *)&web::http::methods::POST);
  utility::conversions::to_string_t(&v119, &v124);
  web::uri::uri((int)&v120, &v119);
  v3 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
  {
    v72 = (unsigned int *)(v119 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
    }
    else
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  web::http::details::_http_request::set_request_uri(
    *(web::http::details::_http_request **)(v122 + 12),
    (const web::uri *)&v120);
  v4 = v122;
  (*(void (__fastcall **)(int *))(**((_DWORD **)v1 + 21) + 12))(&v117);
  utility::conversions::to_string_t(&v118, &v117);
  sub_21E94B4((void **)&v116, "application/json");
  web::http::http_request::set_body((int *)(v4 + 12), &v118, &v116);
  v5 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v116 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v118 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v117 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *(_DWORD *)(v122 + 12);
  sub_21E94B4((void **)&v115, "Charset");
  web::http::http_headers::add<char [6]>(v8 + 20, &v115, "utf-8");
  v9 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v115 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *(_DWORD *)(v122 + 12);
  sub_21E94B4((void **)&v114, "Client-Version");
  Common::getGameVersionStringNet((Common *)&v112);
  utility::conversions::to_string_t(&v113, &v112);
  web::http::http_headers::add<std::string>(v10 + 20, &v114, &v113);
  v11 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v113 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v112 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v114 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = *(_DWORD *)(v122 + 12);
  sub_21E94B4((void **)&v111, "User-Agent");
  Realms::getUserAgent((Realms *)&v109);
  utility::conversions::to_string_t(&v110, &v109);
  web::http::http_headers::add<std::string>(v14 + 20, &v111, &v110);
  v15 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v110 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v109 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v111 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = *(_QWORD *)((char *)v1 + 92);
  if ( HIDWORD(v18) )
    v19 = (unsigned int *)(HIDWORD(v18) + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      ++*v19;
  RequestHandler::_getAuthorizationHeader((int)&v101, (int)v1, (int *)v1 + 16);
  v99 = v122;
  v100 = v123;
  if ( v123 )
    v21 = (unsigned int *)(v123 + 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 + 1, v21) );
      ++*v21;
  sub_1377ECC((int)&v103, (int)&v101, (int)&v99);
  sub_1378830((int)&v105, (int)&v103);
  v98 = v18;
    v23 = (unsigned int *)(HIDWORD(v18) + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 + 1, v23) );
      ++*v23;
  sub_1379150((int)&v107, (int)&v105, (int)&v98);
  if ( (char *)v1 + 44 != &v107 )
    v25 = *(_QWORD *)&v107;
    *(_DWORD *)&v107 = 0;
    v108 = 0;
    *((_DWORD *)v1 + 11) = v25;
    v26 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v25);
    if ( v26 )
      v27 = (unsigned int *)(v26 + 4);
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
        v29 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        }
        else
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
  v31 = v108;
  if ( v108 )
    v32 = (unsigned int *)(v108 + 4);
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
  v36 = HIDWORD(v98);
  if ( HIDWORD(v98) )
    v37 = (unsigned int *)(HIDWORD(v98) + 4);
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
  v41 = v106;
  if ( v106 )
    v42 = (unsigned int *)(v106 + 4);
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
  v46 = v104;
  if ( v104 )
    v47 = (unsigned int *)(v104 + 4);
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
  v51 = v100;
  if ( v100 )
    v52 = (unsigned int *)(v100 + 4);
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
  v56 = v102;
  if ( v102 )
    v57 = (unsigned int *)(v102 + 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 == 1 )
      v59 = (unsigned int *)(v56 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 8))(v56);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 12))(v56);
    v61 = (unsigned int *)(HIDWORD(v18) + 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 == 1 )
      v63 = (unsigned int *)(HIDWORD(v18) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v18) + 8))(HIDWORD(v18));
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v18) + 12))(HIDWORD(v18));
  web::details::uri_components::~uri_components((web::details::uri_components *)&v121);
  v65 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v120 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  v66 = v123;
    v67 = (unsigned int *)(v123 + 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 == 1 )
      v69 = (unsigned int *)(v66 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v66 + 8))(v66);
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
        v70 = (*v69)--;
      if ( v70 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v66 + 12))(v66);
  v71 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v124 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v71);
}


void __fastcall SendReceiptRealms::~SendReceiptRealms(SendReceiptRealms *this)
{
  SendReceiptRealms::~SendReceiptRealms(this);
}


int __fastcall SendReceiptRealms::SendReceiptRealms(int a1, int a2, int *a3, int *a4, int a5, int a6)
{
  int v6; // r4@1
  int *v7; // r6@1
  int *v8; // r7@1
  void (__fastcall *v9)(int, int, signed int); // r3@1
  int v10; // r1@3

  v6 = a1;
  v7 = a4;
  v8 = a3;
  RequestHandler::RequestHandler(a1, a2, -1, -1, 15);
  *(_DWORD *)v6 = &off_26E7378;
  sub_21E8AF4((int *)(v6 + 60), v8);
  sub_21E8AF4((int *)(v6 + 64), v7);
  *(_DWORD *)(v6 + 76) = 0;
  v9 = *(void (__fastcall **)(int, int, signed int))(a5 + 8);
  if ( v9 )
  {
    v9(v6 + 68, a5, 2);
    *(_DWORD *)(v6 + 80) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(v6 + 76) = *(_DWORD *)(a5 + 8);
  }
  *(_DWORD *)(v6 + 84) = *(_DWORD *)a6;
  *(_DWORD *)(v6 + 88) = 0;
  v10 = *(_DWORD *)(a6 + 4);
  *(_DWORD *)(a6 + 4) = 0;
  *(_DWORD *)(v6 + 88) = v10;
  *(_DWORD *)a6 = 0;
  j__ZNSt12__shared_ptrIN17SendReceiptRealms12ResponseDataELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_(v6 + 92);
  return v6;
}


SendReceiptRealms *__fastcall SendReceiptRealms::~SendReceiptRealms(SendReceiptRealms *this)
{
  SendReceiptRealms *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r5@15
  unsigned int *v8; // r1@16
  unsigned int v9; // r0@18
  unsigned int *v10; // r6@22
  unsigned int v11; // r0@24
  void (*v12)(void); // r3@29
  int v13; // r1@31
  void *v14; // r0@31
  int v15; // r1@32
  void *v16; // r0@32
  unsigned int *v18; // r2@34
  signed int v19; // r1@36
  unsigned int *v20; // r2@38
  signed int v21; // r1@40

  v1 = this;
  *(_DWORD *)this = &off_26E7378;
  v2 = *((_DWORD *)this + 24);
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
  v7 = *((_DWORD *)v1 + 22);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  v12 = (void (*)(void))*((_DWORD *)v1 + 19);
  if ( v12 )
    v12();
  v13 = *((_DWORD *)v1 + 16);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v13 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = *((_DWORD *)v1 + 15);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v15 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  RequestHandler::~RequestHandler(v1);
  return v1;
}
