

void __fastcall RemixFiltersRequest::send(RemixFiltersRequest *this)
{
  RemixFiltersRequest *v1; // r5@1
  char v2; // r0@1
  int *v3; // r0@4
  void *v4; // r0@4
  __int64 v5; // r0@6
  int v6; // r6@6
  unsigned int *v7; // r1@7
  unsigned int v8; // r0@9
  unsigned int *v9; // r5@13
  unsigned int v10; // r0@15
  int v11; // r5@20
  unsigned int *v12; // r1@21
  unsigned int v13; // r0@23
  unsigned int *v14; // r6@27
  unsigned int v15; // r0@29
  int v16; // r5@34
  unsigned int *v17; // r1@35
  unsigned int v18; // r0@37
  unsigned int *v19; // r6@41
  unsigned int v20; // r0@43
  void *v21; // r0@48
  int v22; // r4@49
  unsigned int *v23; // r1@50
  unsigned int v24; // r0@52
  unsigned int *v25; // r5@56
  unsigned int v26; // r0@58
  unsigned int *v27; // r2@64
  signed int v28; // r1@66
  unsigned int *v29; // r2@68
  signed int v30; // r1@70
  int v31; // [sp+0h] [bp-58h]@5
  int v32; // [sp+4h] [bp-54h]@5
  char v33; // [sp+8h] [bp-50h]@5
  int v34; // [sp+Ch] [bp-4Ch]@6
  int v35; // [sp+10h] [bp-48h]@4
  int v36; // [sp+14h] [bp-44h]@4
  int v37; // [sp+18h] [bp-40h]@48
  int v38; // [sp+34h] [bp-24h]@4
  int v39; // [sp+38h] [bp-20h]@5

  v1 = this;
  v2 = byte_27D4188;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27D4188) )
  {
    sub_119C884((void **)algn_27D4184, "metadata/stagingDataPresets");
    _cxa_atexit(sub_21E6EDC);
    j___cxa_guard_release((unsigned int *)&byte_27D4188);
  }
  v3 = (int *)RemixService::getAPIEndpoint(*((RemixService **)v1 + 15));
  j__ZNSt12__shared_ptrI11RequestDataLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v38,
    (int)&v36,
    v3,
    (int *)&web::http::methods::GET);
  utility::conversions::to_string_t(&v35, (int *)algn_27D4184);
  web::uri::uri((int)&v36, &v35);
  v4 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v35 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  web::http::details::_http_request::set_request_uri(
    *(web::http::details::_http_request **)(v38 + 12),
    (const web::uri *)&v36);
  v31 = v38;
  v32 = v39;
  v38 = 0;
  v39 = 0;
  RemixRequest::_sendRequest((int)&v33, (int)v1, (int)&v31);
  if ( (char *)v1 + 44 != &v33 )
    v5 = *(_QWORD *)&v33;
    *(_DWORD *)&v33 = 0;
    v34 = 0;
    *((_DWORD *)v1 + 11) = v5;
    v6 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v5);
    if ( v6 )
      v7 = (unsigned int *)(v6 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  v11 = v34;
  if ( v34 )
    v12 = (unsigned int *)(v34 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v16 = v32;
  if ( v32 )
    v17 = (unsigned int *)(v32 + 4);
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
  web::details::uri_components::~uri_components((web::details::uri_components *)&v37);
  v21 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = v39;
  if ( v39 )
    v23 = (unsigned int *)(v39 + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      v25 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
}


RemixRequest *__fastcall RemixFiltersRequest::RemixFiltersRequest(RemixRequest *a1, const RemixService *a2, int a3)
{
  int v3; // r5@1
  RemixRequest *v4; // r4@1
  void (__fastcall *v5)(char *, int, signed int); // r3@1
  RemixRequest *result; // r0@3

  v3 = a3;
  v4 = a1;
  RemixRequest::RemixRequest(a1, a2);
  *(_DWORD *)v4 = &off_26DE0FC;
  *((_DWORD *)v4 + 20) = 0;
  v5 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
  if ( v5 )
  {
    v5((char *)v4 + 72, v3, 2);
    *((_DWORD *)v4 + 21) = *(_DWORD *)(v3 + 12);
    *((_DWORD *)v4 + 20) = *(_DWORD *)(v3 + 8);
  }
  *((_DWORD *)v4 + 22) = 0;
  *((_DWORD *)v4 + 23) = 0;
  result = v4;
  *((_DWORD *)v4 + 24) = 0;
  return result;
}


void __fastcall RemixFiltersRequest::_parseJsonResponse(RemixFiltersRequest *this, const web::json::value *a2)
{
  const web::json::value *v2; // r5@1
  RemixFiltersRequest *v3; // r8@1
  int v4; // r6@2
  void *v5; // r0@2
  const void **v6; // r0@4
  int v7; // r6@4
  void *v8; // r0@4
  int *v9; // r5@6
  void **v10; // r0@6
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  void **v15; // r6@14
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  void **v18; // r5@18
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  unsigned int *v23; // r2@27
  signed int v24; // r1@29
  unsigned int *v25; // r2@31
  signed int v26; // r1@33
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  unsigned int *v29; // r2@39
  signed int v30; // r1@41
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
  int *v33; // r5@46
  unsigned int *v34; // r2@47
  signed int v35; // r1@49
  unsigned int *v36; // r2@51
  signed int v37; // r1@53
  unsigned int *v38; // r2@55
  signed int v39; // r1@57
  int *v40; // r5@58
  unsigned int *v41; // r2@59
  signed int v42; // r1@61
  unsigned int *v43; // r2@63
  signed int v44; // r1@65
  unsigned int *v45; // r2@67
  signed int v46; // r1@69
  unsigned int *v47; // r2@71
  signed int v48; // r1@73
  int *v49; // r8@139
  void *v50; // r0@139
  void *v51; // r0@140
  char *v52; // r0@141
  void *v53; // r0@142
  void *v54; // r0@143
  void *v55; // r0@144
  char *v56; // r0@145
  void *v57; // r0@146
  void *v58; // r0@147
  char *v59; // r0@148
  void *v60; // r0@149
  void *v61; // r0@150
  char *v62; // r0@151
  void *v63; // r0@152
  void *v64; // r0@153
  void *v65; // r0@154
  __int64 v66; // r0@155
  RemixFilter *v67; // r0@156
  unsigned int *v68; // r2@164
  signed int v69; // r1@166
  unsigned __int64 *v70; // [sp+1Ch] [bp-C4h]@6
  web::json::value *v71; // [sp+34h] [bp-ACh]@5
  RemixFiltersRequest *v72; // [sp+38h] [bp-A8h]@139
  web::json::value *v73; // [sp+3Ch] [bp-A4h]@5
  int v74; // [sp+44h] [bp-9Ch]@71
  int v75; // [sp+48h] [bp-98h]@58
  char *v76; // [sp+4Ch] [bp-94h]@59
  int v77; // [sp+54h] [bp-8Ch]@63
  int v78; // [sp+58h] [bp-88h]@46
  char *v79; // [sp+5Ch] [bp-84h]@47
  int v80; // [sp+64h] [bp-7Ch]@18
  int v81; // [sp+68h] [bp-78h]@43
  char *v82; // [sp+6Ch] [bp-74h]@35
  int v83; // [sp+74h] [bp-6Ch]@39
  unsigned int v84; // [sp+78h] [bp-68h]@31
  int v85; // [sp+7Ch] [bp-64h]@6
  char *v86; // [sp+80h] [bp-60h]@19
  int v87; // [sp+88h] [bp-58h]@6
  unsigned int v88; // [sp+8Ch] [bp-54h]@15
  int v89; // [sp+90h] [bp-50h]@11
  void *v90; // [sp+94h] [bp-4Ch]@139
  void *v91; // [sp+98h] [bp-48h]@139
  void *v92; // [sp+9Ch] [bp-44h]@139
  void *v93; // [sp+A0h] [bp-40h]@139
  void *v94; // [sp+A4h] [bp-3Ch]@139
  int v95; // [sp+ACh] [bp-34h]@4
  int v96; // [sp+B4h] [bp-2Ch]@2

  v2 = a2;
  v3 = this;
  if ( web::json::value::type(a2) != 5 )
  {
    sub_119C884((void **)&v96, "results");
    v4 = (*(int (**)(void))(**(_DWORD **)v2 + 4))();
    v5 = (void *)(v96 - 12);
    if ( (int *)(v96 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v96 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( v4 == 1 )
      sub_119C884((void **)&v95, "results");
      v6 = web::json::value::at((int)v2, (const void **)&v95);
      v7 = web::json::value::as_array((web::json::value *)v6);
      v8 = (void *)(v95 - 12);
      if ( (int *)(v95 - 12) != &dword_28898C0 )
        v68 = (unsigned int *)(v95 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v8);
      v73 = *(web::json::value **)v7;
      v71 = *(web::json::value **)(v7 + 4);
      if ( *(web::json::value **)v7 != v71 )
        v70 = (unsigned __int64 *)((char *)v3 + 88);
        v9 = &v85;
        v10 = (void **)&v87;
          v72 = v3;
          v90 = &unk_28898CC;
          v91 = &unk_28898CC;
          v92 = &unk_28898CC;
          v93 = &unk_28898CC;
          v94 = &unk_28898CC;
          v49 = (int *)v10;
          sub_119C884(v10, "name");
          v86 = (char *)&unk_28898CC;
          webjson::getFieldAsString((int *)&v88, v73, v49, (int *)&v86);
          Util::toLower((void **)&v89, *(_DWORD *)(v88 - 12), v88);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)&v90,
            &v89);
          v15 = (void **)v9;
          v50 = (void *)(v89 - 12);
          if ( (int *)(v89 - 12) != &dword_28898C0 )
          {
            v13 = (unsigned int *)(v89 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
              v15 = (void **)v9;
            }
            else
              v14 = (*v13)--;
            if ( v14 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v50);
          }
          v18 = (void **)&v80;
          v51 = (void *)(v88 - 12);
          if ( (int *)(v88 - 12) != &dword_28898C0 )
            v16 = (unsigned int *)(v88 - 4);
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
              v18 = (void **)&v80;
              v17 = (*v16)--;
            if ( v17 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v51);
          v52 = v86 - 12;
          if ( (int *)(v86 - 12) != &dword_28898C0 )
            v19 = (unsigned int *)(v86 - 4);
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v52);
          v53 = (void *)(v87 - 12);
          if ( (int *)(v87 - 12) != &dword_28898C0 )
            v21 = (unsigned int *)(v87 - 4);
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
              v22 = (*v21)--;
            if ( v22 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v53);
          sub_119C884((void **)&v83, "id");
          v82 = (char *)&unk_28898CC;
          webjson::getFieldAsString((int *)&v84, v73, &v83, (int *)&v82);
          Util::toLower(v15, *(_DWORD *)(v84 - 12), v84);
            (int *)&v93,
            (int *)v15);
          v54 = (void *)(v85 - 12);
          if ( (int *)(v85 - 12) != &dword_28898C0 )
            v23 = (unsigned int *)(v85 - 4);
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
              v24 = (*v23)--;
            if ( v24 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v54);
          v55 = (void *)(v84 - 12);
          if ( (int *)(v84 - 12) != &dword_28898C0 )
            v25 = (unsigned int *)(v84 - 4);
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
              v26 = (*v25)--;
            if ( v26 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v55);
          v56 = v82 - 12;
          if ( (int *)(v82 - 12) != &dword_28898C0 )
            v27 = (unsigned int *)(v82 - 4);
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v56);
          v57 = (void *)(v83 - 12);
          if ( (int *)(v83 - 12) != &dword_28898C0 )
            v29 = (unsigned int *)(v83 - 4);
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
              v30 = (*v29)--;
            if ( v30 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v57);
          sub_119C884(v18, "color");
          v79 = (char *)&unk_28898CC;
          webjson::getFieldAsString(&v81, v73, (int *)v18, (int *)&v79);
            (int *)&v91,
            &v81);
          v33 = &v78;
          v58 = (void *)(v81 - 12);
          if ( (int *)(v81 - 12) != &dword_28898C0 )
            v31 = (unsigned int *)(v81 - 4);
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              v33 = &v78;
              v32 = (*v31)--;
            if ( v32 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v58);
          v59 = v79 - 12;
          if ( (int *)(v79 - 12) != &dword_28898C0 )
            v34 = (unsigned int *)(v79 - 4);
                v35 = __ldrex(v34);
              while ( __strex(v35 - 1, v34) );
              v35 = (*v34)--;
            if ( v35 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v59);
          v60 = (void *)(v80 - 12);
          if ( (int *)(v80 - 12) != &dword_28898C0 )
            v36 = (unsigned int *)(v80 - 4);
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
              v37 = (*v36)--;
            if ( v37 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v60);
          sub_119C884((void **)&v77, "uri");
          v76 = (char *)&unk_28898CC;
          webjson::getFieldAsString(v33, v73, &v77, (int *)&v76);
            (int *)&v92,
            v33);
          v40 = &v75;
          v61 = (void *)(v78 - 12);
          if ( (int *)(v78 - 12) != &dword_28898C0 )
            v38 = (unsigned int *)(v78 - 4);
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
              v40 = &v75;
              v39 = (*v38)--;
            if ( v39 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v61);
          v62 = v76 - 12;
          if ( (int *)(v76 - 12) != &dword_28898C0 )
            v41 = (unsigned int *)(v76 - 4);
                v42 = __ldrex(v41);
              while ( __strex(v42 - 1, v41) );
              v42 = (*v41)--;
            if ( v42 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v62);
          v63 = (void *)(v77 - 12);
          if ( (int *)(v77 - 12) != &dword_28898C0 )
            v43 = (unsigned int *)(v77 - 4);
                v44 = __ldrex(v43);
              while ( __strex(v44 - 1, v43) );
              v44 = (*v43)--;
            if ( v44 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v63);
          sub_119C884((void **)&v74, "viewerStagingData");
          webjson::getFieldAsSerializedJson(v40, v73, &v74);
            (int *)&v94,
            v40);
          v64 = (void *)(v75 - 12);
          if ( (int *)(v75 - 12) != &dword_28898C0 )
            v45 = (unsigned int *)(v75 - 4);
                v46 = __ldrex(v45);
              while ( __strex(v46 - 1, v45) );
              v46 = (*v45)--;
            if ( v46 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v64);
          v65 = (void *)(v74 - 12);
          if ( (int *)(v74 - 12) != &dword_28898C0 )
            v47 = (unsigned int *)(v74 - 4);
                v48 = __ldrex(v47);
              while ( __strex(v48 - 1, v47) );
              v48 = (*v47)--;
            if ( v48 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v65);
          v9 = (int *)v15;
          v66 = *(_QWORD *)((char *)v72 + 92);
          if ( (_DWORD)v66 == HIDWORD(v66) )
            std::vector<RemixFilter,std::allocator<RemixFilter>>::_M_emplace_back_aux<RemixFilter>(v70, (int)&v90);
            v67 = (RemixFilter *)&v90;
          else
            *(_DWORD *)v66 = v90;
            v90 = &unk_28898CC;
            *(_DWORD *)(v66 + 4) = v91;
            v91 = &unk_28898CC;
            *(_DWORD *)(v66 + 8) = v92;
            v92 = &unk_28898CC;
            *(_DWORD *)(v66 + 12) = v93;
            v93 = &unk_28898CC;
            *(_DWORD *)(v66 + 16) = v94;
            v94 = &unk_28898CC;
            *((_DWORD *)v72 + 23) = v66 + 20;
          RemixFilter::~RemixFilter(v67);
          v73 = (web::json::value *)((char *)v73 + 4);
          v10 = (void **)v49;
          v3 = v72;
        while ( v73 != v71 );
  }
}


RemixFiltersRequest *__fastcall RemixFiltersRequest::~RemixFiltersRequest(RemixFiltersRequest *this)
{
  RemixFiltersRequest *v1; // r4@1
  RemixFilter *v2; // r0@1
  RemixFilter *v3; // r5@1
  void (*v4)(void); // r3@6
  int v5; // r1@8
  void *v6; // r0@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26DE0FC;
  v3 = (RemixFilter *)(*((_QWORD *)this + 11) >> 32);
  v2 = (RemixFilter *)*((_QWORD *)this + 11);
  if ( v2 != v3 )
  {
    do
      v2 = (RemixFilter *)((char *)RemixFilter::~RemixFilter(v2) + 20);
    while ( v3 != v2 );
    v2 = (RemixFilter *)*((_DWORD *)v1 + 22);
  }
  if ( v2 )
    operator delete((void *)v2);
  v4 = (void (*)(void))*((_DWORD *)v1 + 20);
  if ( v4 )
    v4();
  *(_DWORD *)v1 = &off_26DE14C;
  v5 = *((_DWORD *)v1 + 16);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v5 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  RequestHandler::~RequestHandler(v1);
  return v1;
}


void __fastcall RemixFiltersRequest::~RemixFiltersRequest(RemixFiltersRequest *this)
{
  RemixFiltersRequest::~RemixFiltersRequest(this);
}


int __fastcall RemixFiltersRequest::onComplete(RemixFiltersRequest *this)
{
  RemixFiltersRequest *v1; // r4@1
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


void __fastcall RemixFiltersRequest::_parseJsonResponse(RemixFiltersRequest *this, const web::json::value *a2)
{
  RemixFiltersRequest::_parseJsonResponse(this, a2);
}


void __fastcall RemixFiltersRequest::~RemixFiltersRequest(RemixFiltersRequest *this)
{
  RemixFiltersRequest *v1; // r0@1

  v1 = RemixFiltersRequest::~RemixFiltersRequest(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall RemixFiltersRequest::send(RemixFiltersRequest *this)
{
  RemixFiltersRequest::send(this);
}
