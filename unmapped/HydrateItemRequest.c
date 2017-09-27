

signed int __fastcall HydrateItemRequest::_tryUseCachedResponse(CachedRequest *a1, int *a2, int *a3)
{
  int *v3; // r5@1
  CachedRequest *v4; // r4@1
  int v5; // r0@1
  bool v6; // zf@1
  void *v7; // r0@4
  void *v8; // r0@5
  signed int v9; // r6@6
  signed int v10; // r0@6
  signed int result; // r0@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  int v16; // [sp+4h] [bp-34h]@5
  unsigned int v17; // [sp+8h] [bp-30h]@5
  unsigned int v18; // [sp+Ch] [bp-2Ch]@8
  int v19; // [sp+14h] [bp-24h]@4
  unsigned int v20; // [sp+18h] [bp-20h]@4
  unsigned int v21; // [sp+1Ch] [bp-1Ch]@8

  v3 = a2;
  v4 = a1;
  v5 = *(_DWORD *)(*a2 - 12);
  v6 = v5 == 0;
  if ( v5 )
    v6 = *(_DWORD *)(*a3 - 12) == 0;
  if ( v6 )
    goto LABEL_33;
  utility::conversions::to_string_t(&v19, a3);
  utility::datetime::from_string((int)&v20, &v19, 1);
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  utility::conversions::to_string_t(&v16, v3);
  utility::datetime::from_string((int)&v17, &v16, 1);
  v8 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = 0;
  v10 = 0;
  if ( v17 <= v20 )
    v10 = 1;
  if ( v18 <= v21 )
    v9 = 1;
  if ( v18 == v21 )
    v9 = v10;
  if ( v9 )
    result = CachedRequest::_useCachedResponse(v4);
  else
LABEL_33:
    result = 0;
  return result;
}


void __fastcall HydrateItemRequest::_responseHeaders(HydrateItemRequest *this, const web::http::http_headers *a2)
{
  const web::http::http_headers *v2; // r5@1
  HydrateItemRequest *v3; // r8@1
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
      sub_119C854(&v14, (int *)v6 + 5);
      utility::conversions::to_utf8string(&v15, &v14);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v3 + 57,
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
          j_j_j_j_j__ZdlPv_9_1(v8);
      v9 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v14 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v9);
}


int __fastcall HydrateItemRequest::onComplete(HydrateItemRequest *this)
{
  HydrateItemRequest *v1; // r4@1
  int result; // r0@1
  void (__fastcall *v3)(char *, char *, signed int); // r3@2

  v1 = this;
  result = *((_DWORD *)this + 25);
  if ( result )
  {
    result = (*((int (__fastcall **)(_DWORD, _DWORD))v1 + 26))((char *)v1 + 92, (char *)v1 + 108);
    v3 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 25);
    if ( v3 )
    {
      v3((char *)v1 + 92, (char *)v1 + 92, 3);
      result = 0;
      *((_DWORD *)v1 + 25) = 0;
      *((_DWORD *)v1 + 26) = 0;
    }
  }
  return result;
}


void __fastcall HydrateItemRequest::_createMetadata(HydrateItemRequest *this, int a2)
{
  int v2; // r5@1
  HydrateItemRequest *v3; // r4@1
  int *v4; // r6@1
  int *v5; // r7@3
  void *v6; // r0@5
  void *v7; // r0@6
  int *v8; // r6@7
  void *v9; // r0@9
  void *v10; // r0@10
  int *v11; // r6@11
  void *v12; // r0@13
  void *v13; // r0@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34
  unsigned int *v24; // r2@36
  signed int v25; // r1@38
  int v26; // [sp+0h] [bp-50h]@11
  int v27; // [sp+4h] [bp-4Ch]@11
  int v28; // [sp+Ch] [bp-44h]@11
  unsigned __int64 v29; // [sp+10h] [bp-40h]@7
  int v30; // [sp+18h] [bp-38h]@7
  int v31; // [sp+1Ch] [bp-34h]@7
  int v32; // [sp+24h] [bp-2Ch]@7
  int v33; // [sp+28h] [bp-28h]@3
  int v34; // [sp+2Ch] [bp-24h]@3
  int v35; // [sp+34h] [bp-1Ch]@3

  v2 = a2;
  v3 = this;
  web::json::value::object(this, 0);
  v4 = (int *)(v2 + 80);
  if ( !*(_DWORD *)(*(_DWORD *)(v2 + 80) - 12) )
    v4 = (int *)(v2 + 220);
  sub_119C884((void **)&v35, "lastModifiedDate");
  v5 = (int *)web::json::value::operator[]((int)v3);
  utility::conversions::to_string_t(&v33, v4);
  web::json::value::value(&v34, &v33);
  web::json::value::operator=(v5, &v34);
  if ( v34 )
    (*(void (**)(void))(*(_DWORD *)v34 + 96))();
  v34 = 0;
  v6 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v35 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v32, "cacheWriteDate");
  v8 = (int *)web::json::value::operator[]((int)v3);
  utility::datetime::utc_now((utility::datetime *)&v29);
  utility::datetime::to_string((void **)&v30, &v29, 1);
  web::json::value::value(&v31, &v30);
  web::json::value::operator=(v8, &v31);
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 96))();
  v31 = 0;
  v9 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v30 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v32 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v28, "entityTag");
  v11 = (int *)web::json::value::operator[]((int)v3);
  utility::conversions::to_string_t(&v26, (int *)(v2 + 228));
  web::json::value::value(&v27, &v26);
  web::json::value::operator=(v11, &v27);
  if ( v27 )
    (*(void (**)(void))(*(_DWORD *)v27 + 96))();
  v27 = 0;
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v26 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v28 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
}


void __fastcall HydrateItemRequest::send(HydrateItemRequest *this)
{
  HydrateItemRequest *v1; // r4@1
  const void **v2; // r5@1
  __int64 v3; // kr00_8@6
  unsigned int v4; // r1@6
  const void **v5; // r0@8
  void *v6; // r0@10
  char *v7; // r0@11
  void *v8; // r0@12
  char *v9; // r0@13
  void (__fastcall *v10)(HydrateItemRequest *, const void **); // r7@14
  const void **v11; // r0@14
  __int64 v12; // r0@16
  int v13; // r5@16
  unsigned int *v14; // r1@17
  unsigned int v15; // r0@19
  int v16; // r7@21
  void *v17; // r0@21
  int v18; // r7@22
  void *v19; // r0@22
  int v20; // r7@23
  char *v21; // r0@26
  int v22; // r7@27
  void *v23; // r0@27
  int v24; // r6@28
  void *v25; // r0@28
  void *v26; // r0@29
  __int64 v27; // r0@30
  int v28; // r5@30
  unsigned int *v29; // r1@31
  unsigned int v30; // r0@33
  unsigned int *v31; // r6@37
  unsigned int v32; // r0@39
  unsigned int *v33; // r4@43
  unsigned int v34; // r0@45
  int v35; // r5@50
  unsigned int *v36; // r1@51
  unsigned int v37; // r0@53
  unsigned int *v38; // r6@57
  unsigned int v39; // r0@59
  __int64 v40; // r0@65
  int v41; // r5@65
  unsigned int *v42; // r1@66
  unsigned int v43; // r0@68
  unsigned int *v44; // r4@72
  unsigned int v45; // r0@74
  unsigned int *v46; // r2@76
  signed int v47; // r1@78
  unsigned int *v48; // r2@80
  signed int v49; // r1@82
  unsigned int *v50; // r2@84
  signed int v51; // r1@86
  unsigned int *v52; // r2@88
  signed int v53; // r1@90
  int v54; // r4@95
  unsigned int *v55; // r1@96
  unsigned int v56; // r0@98
  unsigned int *v57; // r5@102
  unsigned int v58; // r0@104
  int v59; // r0@111
  unsigned int *v60; // r1@112
  unsigned int v61; // r2@113
  int v62; // r4@116
  unsigned int *v63; // r1@117
  unsigned int v64; // r0@119
  unsigned int *v65; // r5@123
  unsigned int v66; // r0@125
  int v67; // r4@130
  unsigned int *v68; // r1@131
  unsigned int v69; // r0@133
  unsigned int *v70; // r5@137
  unsigned int v71; // r0@139
  int v72; // r4@144
  unsigned int *v73; // r1@145
  unsigned int v74; // r0@147
  unsigned int *v75; // r5@151
  unsigned int v76; // r0@153
  unsigned int *v77; // r1@159
  unsigned int v78; // r0@161
  char *v79; // r0@172
  unsigned int *v80; // r2@174
  signed int v81; // r1@176
  unsigned int *v82; // r2@194
  signed int v83; // r1@196
  unsigned int *v84; // r2@198
  signed int v85; // r1@200
  unsigned int *v86; // r2@202
  signed int v87; // r1@204
  unsigned int *v88; // r2@210
  signed int v89; // r1@212
  unsigned int *v90; // r2@214
  signed int v91; // r1@216
  unsigned int *v92; // r2@218
  signed int v93; // r1@220
  int v94; // [sp+0h] [bp-D8h]@64
  int v95; // [sp+4h] [bp-D4h]@64
  char v96; // [sp+8h] [bp-D0h]@64
  int v97; // [sp+Ch] [bp-CCh]@65
  int v98; // [sp+10h] [bp-C8h]@30
  char v99; // [sp+14h] [bp-C4h]@30
  int v100; // [sp+18h] [bp-C0h]@30
  int v101; // [sp+1Ch] [bp-BCh]@28
  int v102; // [sp+20h] [bp-B8h]@28
  int v103; // [sp+24h] [bp-B4h]@28
  int v104; // [sp+40h] [bp-98h]@27
  char *v105; // [sp+44h] [bp-94h]@24
  int v106; // [sp+4Ch] [bp-8Ch]@22
  int v107; // [sp+54h] [bp-84h]@21
  int v108; // [sp+58h] [bp-80h]@21
  int v109; // [sp+5Ch] [bp-7Ch]@64
  int v110; // [sp+60h] [bp-78h]@15
  int v111; // [sp+64h] [bp-74h]@15
  int v112; // [sp+68h] [bp-70h]@15
  int v113; // [sp+6Ch] [bp-6Ch]@15
  char v114; // [sp+74h] [bp-64h]@15
  int v115; // [sp+78h] [bp-60h]@15
  void *ptr; // [sp+7Ch] [bp-5Ch]@15
  int v117; // [sp+80h] [bp-58h]@15
  int v118; // [sp+84h] [bp-54h]@15
  __int16 v119; // [sp+88h] [bp-50h]@15
  char v120; // [sp+90h] [bp-48h]@15
  int v121; // [sp+94h] [bp-44h]@16
  int v122; // [sp+9Ch] [bp-3Ch]@4
  char *v123; // [sp+A0h] [bp-38h]@3
  char *v124; // [sp+A4h] [bp-34h]@10
  int v125; // [sp+A8h] [bp-30h]@10
  char *v126; // [sp+ACh] [bp-2Ch]@1
  int v127; // [sp+B0h] [bp-28h]@15
  int v128; // [sp+B4h] [bp-24h]@15
  char v129; // [sp+B8h] [bp-20h]@21
  char v130; // [sp+BCh] [bp-1Ch]@30

  v1 = this;
  v126 = (char *)&unk_28898CC;
  v2 = (const void **)((char *)this + 76);
  sub_119CAF8((const void **)&v126, *(_DWORD *)(*((_DWORD *)this + 19) - 12) + 18);
  sub_119C894((const void **)&v126, "/v1/catalog/items/", 0x12u);
  sub_119C8A4((const void **)&v126, v2);
  if ( !*(_DWORD *)(*((_DWORD *)v1 + 21) - 12) )
    sub_119C894((const void **)&v126, "?alllanguages=true", 0x12u);
  v123 = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&v123, *(_DWORD *)(*((_DWORD *)v1 + 19) - 12) + 8);
  sub_119C894((const void **)&v123, "hydrate_", 8u);
  sub_119C8A4((const void **)&v123, v2);
  if ( *(_DWORD *)(*((_DWORD *)v1 + 21) - 12) )
    sub_119C854(&v122, (int *)v1 + 21);
  else
    sub_119C884((void **)&v122, "all_langs");
  v3 = *(_QWORD *)(v123 - 12);
  v4 = *(_DWORD *)(v122 - 12) + v3;
  if ( v4 > HIDWORD(v3) && v4 <= *(_DWORD *)(v122 - 8) )
    v5 = sub_119C984((const void **)&v122, 0, (unsigned int)v123, (_BYTE *)v3);
    v5 = sub_119C8A4((const void **)&v123, (const void **)&v122);
  v124 = (char *)*v5;
  *v5 = &unk_28898CC;
  Util::base64_encode((Util *)&v125, (const unsigned __int8 **)&v124, 1);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 16,
    &v125);
  v6 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
  {
    v46 = (unsigned int *)(v125 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
    }
    else
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = v124 - 12;
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v124 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v122 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v123 - 12;
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v123 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = *(void (__fastcall **)(HydrateItemRequest *, const void **))(*(_DWORD *)v1 + 32);
  v11 = CachedRequest::_readMetadataFromCache(v1);
  v10(v1, v11);
  if ( HydrateItemRequest::_tryUseCachedResponse(v1, (int *)v1 + 20, (int *)v1 + 55) == 1 )
    pplx::get_ambient_scheduler((pplx *)&v127);
    v110 = v127;
    v111 = v128;
    v112 = v127;
    v113 = 0;
    v114 = 0;
    v119 = 0;
    v117 = 0;
    v118 = 0;
    v115 = 0;
    ptr = 0;
    pplx::task_from_result((pplx *)&v120, (const pplx::task_options *)&v110);
    if ( (char *)v1 + 44 != &v120 )
      v12 = *(_QWORD *)&v120;
      *(_DWORD *)&v120 = 0;
      v121 = 0;
      *((_DWORD *)v1 + 11) = v12;
      v13 = *((_DWORD *)v1 + 12);
      *((_DWORD *)v1 + 12) = HIDWORD(v12);
      if ( v13 )
      {
        v14 = (unsigned int *)(v13 + 4);
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
          v33 = (unsigned int *)(v13 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          if ( &pthread_create )
          {
            __dmb();
            do
              v34 = __ldrex(v33);
            while ( __strex(v34 - 1, v33) );
          }
          else
            v34 = (*v33)--;
          if ( v34 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
      }
    v54 = v121;
    if ( v121 )
      v55 = (unsigned int *)(v121 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
      else
        v56 = (*v55)--;
      if ( v56 == 1 )
        v57 = (unsigned int *)(v54 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 8))(v54);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
    if ( ptr )
      operator delete(ptr);
    v59 = v113;
    if ( v113 )
      v60 = (unsigned int *)(v113 + 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      if ( v61 == 1 )
        (*(void (**)(void))(*(_DWORD *)v59 + 8))();
    v62 = v111;
    if ( v111 )
      v63 = (unsigned int *)(v111 + 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 == 1 )
        v65 = (unsigned int *)(v62 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 8))(v62);
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
          goto LABEL_170;
        goto LABEL_169;
    j__ZNSt12__shared_ptrI11RequestDataLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
      (int)&v108,
      (int)&v129,
      (int *)v1 + 18,
      (int *)&web::http::methods::GET);
    v16 = *(_DWORD *)(v108 + 12);
    sub_119C884((void **)&v107, "public");
    web::http::http_headers::set_cache_control(v16 + 20, &v107);
    v17 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v82 = (unsigned int *)(v107 - 4);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v18 = *(_DWORD *)(v108 + 12);
    sub_119C884((void **)&v106, "application/json");
    web::http::http_headers::set_content_type(v18 + 20, &v106);
    v19 = (void *)(v106 - 12);
    if ( (int *)(v106 - 12) != &dword_28898C0 )
      v84 = (unsigned int *)(v106 - 4);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    v20 = *(_DWORD *)(v108 + 12);
    if ( *((_BYTE *)v1 + 88) )
      v105 = (char *)&unk_28898CC;
      utility::conversions::to_string_t((int *)&v105, (int *)v1 + 57);
    web::http::http_headers::add<std::string>(v20 + 20, (int *)&web::http::header_names::if_none_match, (int *)&v105);
    v21 = v105 - 12;
    if ( (int *)(v105 - 12) != &dword_28898C0 )
      v86 = (unsigned int *)(v105 - 4);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
    v22 = *(_DWORD *)(v108 + 12);
    utility::conversions::to_string_t(&v104, (int *)v1 + 21);
    web::http::http_headers::add<std::string>(v22 + 20, (int *)&web::http::header_names::accept_language, &v104);
    v23 = (void *)(v104 - 12);
    if ( (int *)(v104 - 12) != &dword_28898C0 )
      v88 = (unsigned int *)(v104 - 4);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
    v24 = v108;
    utility::conversions::to_string_t(&v101, (int *)&v126);
    web::uri::uri((int)&v102, &v101);
    web::http::details::_http_request::set_request_uri(
      *(web::http::details::_http_request **)(v24 + 12),
      (const web::uri *)&v102);
    web::details::uri_components::~uri_components((web::details::uri_components *)&v103);
    v25 = (void *)(v102 - 12);
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v90 = (unsigned int *)(v102 - 4);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v25);
    v26 = (void *)(v101 - 12);
    if ( (int *)(v101 - 12) != &dword_28898C0 )
      v92 = (unsigned int *)(v101 - 4);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v26);
    v98 = 1;
    std::__shared_ptr<RequestTelemetry,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RequestTelemetry>,RequestType,std::string &>(
      (int)&v99,
      (int)&v130,
      &v98,
      (int *)v2);
    v27 = *(_QWORD *)&v99;
    *(_DWORD *)&v99 = 0;
    v100 = 0;
    *((_DWORD *)v1 + 13) = v27;
    v28 = *((_DWORD *)v1 + 14);
    *((_DWORD *)v1 + 14) = HIDWORD(v27);
    if ( v28 )
      v29 = (unsigned int *)(v28 + 4);
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
    v35 = v100;
    if ( v100 )
      v36 = (unsigned int *)(v100 + 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 == 1 )
        v38 = (unsigned int *)(v35 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
    v94 = v108;
    v95 = v109;
    v108 = 0;
    v109 = 0;
    CachedRequest::_sendRequest((int)&v96, (int)v1, (int)&v94);
    if ( (char *)v1 + 44 != &v96 )
      v40 = *(_QWORD *)&v96;
      *(_DWORD *)&v96 = 0;
      v97 = 0;
      *((_DWORD *)v1 + 11) = v40;
      v41 = *((_DWORD *)v1 + 12);
      *((_DWORD *)v1 + 12) = HIDWORD(v40);
      if ( v41 )
        v42 = (unsigned int *)(v41 + 4);
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
    v67 = v97;
    if ( v97 )
      v68 = (unsigned int *)(v97 + 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 == 1 )
        v70 = (unsigned int *)(v67 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 8))(v67);
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
          v71 = (*v70)--;
        if ( v71 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 12))(v67);
    v72 = v95;
    if ( v95 )
      v73 = (unsigned int *)(v95 + 4);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 == 1 )
        v75 = (unsigned int *)(v72 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 8))(v72);
            v76 = __ldrex(v75);
          while ( __strex(v76 - 1, v75) );
          v76 = (*v75)--;
        if ( v76 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 12))(v72);
    v62 = v109;
    if ( v109 )
      v77 = (unsigned int *)(v109 + 4);
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 == 1 )
LABEL_170:
          if ( v66 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 12))(v62);
          goto LABEL_172;
LABEL_169:
        v66 = (*v65)--;
        goto LABEL_170;
LABEL_172:
  v79 = v126 - 12;
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v126 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v79);
}


void __fastcall HydrateItemRequest::_parseJsonMetadata(HydrateItemRequest *this, const web::json::value *a2)
{
  HydrateItemRequest::_parseJsonMetadata(this, a2);
}


void __fastcall HydrateItemRequest::_createMetadata(HydrateItemRequest *this, int a2)
{
  HydrateItemRequest::_createMetadata(this, a2);
}


void __fastcall HydrateItemRequest::~HydrateItemRequest(HydrateItemRequest *this)
{
  HydrateItemRequest *v1; // r0@1

  v1 = HydrateItemRequest::~HydrateItemRequest(this);
  j_j_j__ZdlPv_4((void *)v1);
}


HydrateItemRequest *__fastcall HydrateItemRequest::~HydrateItemRequest(HydrateItemRequest *this)
{
  HydrateItemRequest *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  void (*v8)(void); // r3@4
  int v9; // r1@6
  void *v10; // r0@6
  int v11; // r1@7
  void *v12; // r0@7
  int v13; // r1@8
  void *v14; // r0@8
  int v15; // r1@9
  void *v16; // r0@9
  unsigned int *v18; // r2@11
  signed int v19; // r1@13
  unsigned int *v20; // r2@15
  signed int v21; // r1@17
  unsigned int *v22; // r2@19
  signed int v23; // r1@21
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  unsigned int *v26; // r2@27
  signed int v27; // r1@29
  unsigned int *v28; // r2@31
  signed int v29; // r1@33
  unsigned int *v30; // r2@35
  signed int v31; // r1@37

  v1 = this;
  *(_DWORD *)this = &off_26DD35C;
  v2 = *((_DWORD *)this + 57);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 56);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v4 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 55);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v6 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  HydrateResponse::~HydrateResponse((HydrateItemRequest *)((char *)v1 + 108));
  v8 = (void (*)(void))*((_DWORD *)v1 + 25);
  if ( v8 )
    v8();
  v9 = *((_DWORD *)v1 + 21);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v9 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = *((_DWORD *)v1 + 20);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v11 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = *((_DWORD *)v1 + 19);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v13 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = *((_DWORD *)v1 + 18);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v15 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  CachedRequest::~CachedRequest(v1);
  return v1;
}


void __fastcall HydrateItemRequest::_parseJsonMetadata(HydrateItemRequest *this, const web::json::value *a2)
{
  web::json::value *v2; // r5@1
  HydrateItemRequest *v3; // r6@1
  void *v4; // r0@1
  char *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  char *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  char *v11; // r0@8
  void *v12; // r0@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  unsigned int *v25; // r2@35
  signed int v26; // r1@37
  unsigned int *v27; // r2@39
  signed int v28; // r1@41
  unsigned int *v29; // r2@43
  signed int v30; // r1@45
  char *v31; // [sp+4h] [bp-44h]@7
  int v32; // [sp+Ch] [bp-3Ch]@7
  int v33; // [sp+10h] [bp-38h]@7
  char *v34; // [sp+14h] [bp-34h]@4
  int v35; // [sp+1Ch] [bp-2Ch]@4
  int v36; // [sp+20h] [bp-28h]@4
  char *v37; // [sp+24h] [bp-24h]@1
  int v38; // [sp+2Ch] [bp-1Ch]@1
  int v39; // [sp+30h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_119C884((void **)&v38, "lastModifiedDate");
  v37 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v39, v2, &v38, (int *)&v37);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 55,
    &v39);
  v4 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v37 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v38 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v35, "cacheWriteDate");
  v34 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v36, v2, &v35, (int *)&v34);
    (int *)v3 + 56,
    &v36);
  v7 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v36 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v34 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v35 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v32, "entityTag");
  v31 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v33, v2, &v32, (int *)&v31);
    (int *)v3 + 57,
    &v33);
  v10 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v33 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v31 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v32 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
}


void __fastcall HydrateItemRequest::~HydrateItemRequest(HydrateItemRequest *this)
{
  HydrateItemRequest::~HydrateItemRequest(this);
}


int __fastcall HydrateItemRequest::HydrateItemRequest(int a1, ContentCatalogService *a2, int *a3, int a4)
{
  ContentCatalogService *v4; // r5@1
  int v5; // r4@1
  int v6; // r6@1
  int *v7; // r10@1
  int *v8; // r8@1
  const char **v9; // r0@1
  const char *v10; // r7@1
  size_t v11; // r0@1
  int i; // r3@1
  int v13; // t1@2
  int *v14; // r0@3
  __int64 v15; // r0@3
  void (__fastcall *v16)(int, int, signed int); // r3@3

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = (int *)ContentCatalogService::getCacheLocation(a2);
  v9 = (const char **)ContentCatalogService::getHostUrl(v4);
  v10 = *v9;
  v11 = strlen(*v9);
  for ( i = -2128831035; v11; i = 16777619 * (v13 ^ i) )
  {
    v13 = *v10++;
    --v11;
  }
  CachedRequest::CachedRequest(v5, (int)v4, v8, i, 4, 5);
  *(_DWORD *)v5 = &off_26DD35C;
  v14 = (int *)ContentCatalogService::getHostUrl(v4);
  sub_119C854((int *)(v5 + 72), v14);
  HydrateParams::HydrateParams((int *)(v5 + 76), v7);
  *(_DWORD *)(v5 + 100) = 0;
  v16 = *(void (__fastcall **)(int, int, signed int))(v6 + 8);
  if ( v16 )
    v16(v5 + 92, v6, 2);
    *(_DWORD *)(v5 + 104) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v5 + 100) = *(_DWORD *)(v6 + 8);
  LODWORD(v15) = v5 + 108;
  HydrateResponse::HydrateResponse(v15);
  *(_DWORD *)(v5 + 220) = &unk_28898CC;
  *(_DWORD *)(v5 + 224) = &unk_28898CC;
  *(_DWORD *)(v5 + 228) = &unk_28898CC;
  return v5;
}


void __fastcall HydrateItemRequest::send(HydrateItemRequest *this)
{
  HydrateItemRequest::send(this);
}


void __fastcall HydrateItemRequest::_parseJsonResponse(HydrateItemRequest *this, const web::json::value *a2)
{
  web::json::value *v2; // r8@1
  HydrateItemRequest *v3; // r9@1
  void *v4; // r0@1
  char *v5; // r0@2
  void *v6; // r0@3
  double v7; // r0@4
  int v8; // r6@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  int v13; // r7@22
  int v14; // r1@22
  void *v15; // r0@22
  int v16; // r1@23
  void *v17; // r0@23
  void *v18; // r0@28
  double v19; // r0@29
  int v20; // r6@29
  unsigned int *v21; // r2@31
  signed int v22; // r1@33
  unsigned int *v23; // r2@35
  signed int v24; // r1@37
  int v25; // r7@47
  int v26; // r1@47
  void *v27; // r0@47
  int v28; // r1@48
  void *v29; // r0@48
  void *v30; // r0@53
  void *v31; // r0@54
  char *v32; // r0@55
  void *v33; // r0@56
  void *v34; // r0@57
  char *v35; // r0@58
  void *v36; // r0@59
  void *v37; // r0@60
  char *v38; // r0@61
  void *v39; // r0@62
  HydrateItemRequest *v40; // r8@63
  _DWORD *v41; // r11@63
  _DWORD *v42; // r9@63
  char *v43; // r1@64
  _DWORD *v44; // r5@64
  unsigned int *v45; // r2@65
  signed int v46; // r4@67
  char *v47; // r4@71
  int *v48; // r0@72
  int v49; // r4@76
  void *v50; // r5@76
  unsigned int *v51; // r2@78
  signed int v52; // r1@80
  int *v53; // r0@86
  void *v54; // r0@91
  void *v55; // r0@92
  web::json::value *v56; // r6@93
  unsigned int *v57; // r2@95
  signed int v58; // r1@97
  unsigned int *v59; // r2@99
  signed int v60; // r1@101
  unsigned int *v61; // r2@103
  signed int v62; // r1@105
  unsigned int *v63; // r2@107
  signed int v64; // r1@109
  unsigned int *v65; // r2@111
  signed int v66; // r1@113
  unsigned int *v67; // r2@115
  signed int v68; // r1@117
  unsigned int *v69; // r2@119
  signed int v70; // r1@121
  unsigned int *v71; // r2@123
  signed int v72; // r1@125
  unsigned int *v73; // r2@127
  signed int v74; // r1@129
  __int64 v75; // r0@167
  int v76; // r1@168
  void *v77; // r0@170
  char *v78; // r0@171
  char *v79; // r0@172
  char *v80; // r0@173
  void *v81; // r0@174
  char *v82; // r0@175
  void *v83; // r0@176
  char *v84; // r0@177
  void *v85; // r0@178
  void *v86; // r0@180
  web::json::value *v87; // r4@181
  web::json::value *j; // r5@181
  unsigned int *v89; // r2@183
  signed int v90; // r1@185
  unsigned int *v91; // r2@187
  signed int v92; // r1@189
  unsigned int *v93; // r2@191
  signed int v94; // r1@193
  unsigned int *v95; // r2@195
  signed int v96; // r1@197
  unsigned int *v97; // r2@199
  signed int v98; // r1@201
  unsigned int *v99; // r2@203
  signed int v100; // r1@205
  __int64 v101; // r0@231
  int v102; // r1@232
  void *v103; // r0@234
  char *v104; // r0@235
  char *v105; // r0@236
  void *v106; // r0@237
  char *v107; // r0@238
  void *v108; // r0@239
  void *v109; // r0@241
  void *v110; // r0@242
  __int64 v111; // r4@243
  __int64 v112; // r4@250
  unsigned int *v113; // r2@258
  signed int v114; // r1@260
  unsigned int *v115; // r2@262
  signed int v116; // r1@264
  unsigned int *v117; // r2@266
  signed int v118; // r1@268
  unsigned int *v119; // r2@270
  signed int v120; // r1@272
  unsigned int *v121; // r2@274
  signed int v122; // r1@276
  unsigned int *v123; // r2@278
  signed int v124; // r1@280
  unsigned int *v125; // r2@282
  signed int v126; // r1@284
  unsigned int *v127; // r2@286
  signed int v128; // r1@288
  unsigned int *v129; // r2@290
  signed int v130; // r1@292
  unsigned int *v131; // r2@294
  signed int v132; // r1@296
  unsigned int *v133; // r2@298
  signed int v134; // r1@300
  unsigned int *v135; // r2@302
  signed int v136; // r1@304
  unsigned int *v137; // r2@306
  signed int v138; // r1@308
  unsigned int *v139; // r2@310
  signed int v140; // r1@312
  unsigned int *v141; // r2@314
  signed int v142; // r1@316
  unsigned int *v143; // r2@318
  signed int v144; // r1@320
  unsigned int *v145; // r2@386
  signed int v146; // r1@388
  unsigned int *v147; // r2@394
  signed int v148; // r1@396
  unsigned int *v149; // r2@398
  signed int v150; // r1@400
  web::json::value *v151; // [sp+8h] [bp-158h]@63
  web::json::value *i; // [sp+14h] [bp-14Ch]@93
  int v153; // [sp+1Ch] [bp-144h]@241
  int v154; // [sp+20h] [bp-140h]@241
  char *v155; // [sp+24h] [bp-13Ch]@191
  int v156; // [sp+2Ch] [bp-134h]@195
  char *v157; // [sp+30h] [bp-130h]@199
  int v158; // [sp+38h] [bp-128h]@203
  char *v159; // [sp+3Ch] [bp-124h]@187
  void *v160; // [sp+40h] [bp-120h]@231
  int v161; // [sp+48h] [bp-118h]@180
  web::json::value *v162; // [sp+4Ch] [bp-114h]@180
  web::json::value *v163; // [sp+50h] [bp-110h]@181
  char *v164; // [sp+58h] [bp-108h]@107
  int v165; // [sp+60h] [bp-100h]@111
  char *v166; // [sp+64h] [bp-FCh]@115
  int v167; // [sp+6Ch] [bp-F4h]@119
  char *v168; // [sp+70h] [bp-F0h]@123
  int v169; // [sp+78h] [bp-E8h]@127
  char *v170; // [sp+7Ch] [bp-E4h]@103
  char *v171; // [sp+80h] [bp-E0h]@99
  void *v172; // [sp+84h] [bp-DCh]@167
  int v173; // [sp+8Ch] [bp-D4h]@92
  web::json::value *v174; // [sp+90h] [bp-D0h]@92
  web::json::value *v175; // [sp+94h] [bp-CCh]@93
  int v176; // [sp+A0h] [bp-C0h]@63
  void *v177; // [sp+A4h] [bp-BCh]@63
  void *v178; // [sp+A8h] [bp-B8h]@63
  int v179; // [sp+ACh] [bp-B4h]@63
  char *v180; // [sp+B0h] [bp-B0h]@60
  int v181; // [sp+B8h] [bp-A8h]@60
  int v182; // [sp+BCh] [bp-A4h]@60
  char *v183; // [sp+C0h] [bp-A0h]@57
  int v184; // [sp+C8h] [bp-98h]@57
  int v185; // [sp+CCh] [bp-94h]@57
  char *v186; // [sp+D0h] [bp-90h]@54
  int v187; // [sp+D8h] [bp-88h]@54
  int v188; // [sp+DCh] [bp-84h]@54
  int v189; // [sp+E4h] [bp-7Ch]@29
  void *v190; // [sp+E8h] [bp-78h]@29
  int v191; // [sp+ECh] [bp-74h]@50
  int v192; // [sp+F0h] [bp-70h]@29
  int v193; // [sp+F4h] [bp-6Ch]@50
  int v194; // [sp+100h] [bp-60h]@51
  int v195; // [sp+108h] [bp-58h]@4
  void *ptr; // [sp+10Ch] [bp-54h]@4
  int v197; // [sp+110h] [bp-50h]@25
  int v198; // [sp+114h] [bp-4Ch]@4
  int v199; // [sp+118h] [bp-48h]@25
  int v200; // [sp+124h] [bp-3Ch]@26
  char *v201; // [sp+128h] [bp-38h]@1
  int v202; // [sp+130h] [bp-30h]@1
  int v203; // [sp+134h] [bp-2Ch]@1
  char v204; // [sp+138h] [bp-28h]@64

  v2 = a2;
  v3 = this;
  sub_119C884((void **)&v202, "id");
  v201 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v203, v2, &v202, (int *)&v201);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 27,
    &v203);
  v4 = (void *)(v203 - 12);
  if ( (int *)(v203 - 12) != &dword_28898C0 )
  {
    v113 = (unsigned int *)(v203 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
    }
    else
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v201 - 12;
  if ( (int *)(v201 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v201 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void *)(v202 - 12);
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v202 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v195, "title");
  LODWORD(v7) = &ptr;
  HIDWORD(v7) = v2;
  webjson::getFieldAsLocDictionary(v7, &v195);
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_move_assign(
    (int)v3 + 112,
    (int)&ptr);
  v8 = v198;
  while ( v8 )
    v13 = v8;
    v14 = *(_DWORD *)(v8 + 8);
    v8 = *(_DWORD *)v8;
    v15 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = *(_DWORD *)(v13 + 4);
    v17 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v16 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    operator delete((void *)v13);
  _aeabi_memclr4(ptr, 4 * v197);
  v198 = 0;
  v199 = 0;
  if ( ptr && &v200 != ptr )
    operator delete(ptr);
  v18 = (void *)(v195 - 12);
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v195 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  sub_119C884((void **)&v189, "description");
  LODWORD(v19) = &v190;
  HIDWORD(v19) = v2;
  webjson::getFieldAsLocDictionary(v19, &v189);
    (int)v3 + 140,
    (int)&v190);
  v20 = v192;
  while ( v20 )
    v25 = v20;
    v26 = *(_DWORD *)(v20 + 8);
    v20 = *(_DWORD *)v20;
    v27 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v26 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v27);
    v28 = *(_DWORD *)(v25 + 4);
    v29 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v28 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
    operator delete((void *)v25);
  _aeabi_memclr4(v190, 4 * v191);
  v192 = 0;
  v193 = 0;
  if ( v190 && &v194 != v190 )
    operator delete(v190);
  v30 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v189 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  sub_119C884((void **)&v187, "contentType");
  v186 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v188, v2, &v187, (int *)&v186);
    (int *)v3 + 42,
    &v188);
  v31 = (void *)(v188 - 12);
  if ( (int *)(v188 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v188 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  v32 = v186 - 12;
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v186 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  v33 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v187 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  sub_119C884((void **)&v184, "startDate");
  v183 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v185, v2, &v184, (int *)&v183);
    (int *)v3 + 43,
    &v185);
  v34 = (void *)(v185 - 12);
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v129 = (unsigned int *)(v185 - 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = v183 - 12;
  if ( (int *)(v183 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v183 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  v36 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v184 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  sub_119C884((void **)&v181, "creatorId");
  v180 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v182, v2, &v181, (int *)&v180);
    (int *)v3 + 44,
    &v182);
  v37 = (void *)(v182 - 12);
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v135 = (unsigned int *)(v182 - 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  v38 = v180 - 12;
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v180 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  v39 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v139 = (unsigned int *)(v181 - 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  sub_119C884((void **)&v176, "tags");
  v151 = v2;
  webjson::getFieldAsStringArray((int)&v177, v2, &v176);
  v40 = v3;
  v41 = (_DWORD *)*((_DWORD *)v3 + 46);
  v42 = (_DWORD *)*((_DWORD *)v3 + 47);
  *((_DWORD *)v40 + 46) = v177;
  v177 = 0;
  *((_DWORD *)v40 + 47) = v178;
  v178 = 0;
  *((_DWORD *)v40 + 48) = v179;
  v179 = 0;
  if ( v41 != v42 )
    v43 = &v204;
    v44 = v41;
    do
      v48 = (int *)(*v44 - 12);
      if ( v48 != &dword_28898C0 )
        v45 = (unsigned int *)(*v44 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
        }
        else
          v46 = (*v45)--;
        if ( v46 <= 0 )
          v47 = v43;
          j_j_j_j_j__ZdlPv_9_1(v48);
          v43 = v47;
      ++v44;
    while ( v44 != v42 );
  if ( v41 )
    operator delete(v41);
  v49 = (int)v178;
  v50 = v177;
  if ( v177 != v178 )
      v53 = (int *)(*(_DWORD *)v50 - 12);
      if ( v53 != &dword_28898C0 )
        v51 = (unsigned int *)(*(_DWORD *)v50 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v53);
      v50 = (char *)v50 + 4;
    while ( v50 != (void *)v49 );
    v50 = v177;
  if ( v50 )
    operator delete(v50);
  v54 = (void *)(v176 - 12);
  if ( (int *)(v176 - 12) != &dword_28898C0 )
    v141 = (unsigned int *)(v176 - 4);
        v142 = __ldrex(v141);
      while ( __strex(v142 - 1, v141) );
      v142 = (*v141)--;
    if ( v142 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v54);
  sub_119C884((void **)&v173, "contents");
  webjson::getFieldAsObjectArray((int)&v174, v151, &v173);
  v55 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v143 = (unsigned int *)(v173 - 4);
        v144 = __ldrex(v143);
      while ( __strex(v144 - 1, v143) );
      v144 = (*v143)--;
    if ( v144 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v55);
  v56 = v174;
  for ( i = v175; v56 != i; v56 = (web::json::value *)((char *)v56 + 4) )
    sub_119C884((void **)&v169, "contentId");
    v168 = (char *)&unk_28898CC;
    webjson::getFieldAsString((int *)&v170, v56, &v169, (int *)&v168);
    sub_119C884((void **)&v167, "contentType");
    v166 = (char *)&unk_28898CC;
    webjson::getFieldAsString((int *)&v171, v56, &v167, (int *)&v166);
    sub_119C884((void **)&v165, "contentUri");
    v164 = (char *)&unk_28898CC;
    webjson::getFieldAsString((int *)&v172, v56, &v165, (int *)&v164);
    v75 = *((_QWORD *)v40 + 25);
    if ( (_DWORD)v75 == HIDWORD(v75) )
      std::vector<HydrateResponse::Content,std::allocator<HydrateResponse::Content>>::_M_emplace_back_aux<HydrateResponse::Content>(
        (HydrateItemRequest *)((char *)v40 + 196),
        (int)&v170);
      v76 = (int)v172;
      *(_DWORD *)v75 = v170;
      v170 = (char *)&unk_28898CC;
      *(_DWORD *)(v75 + 4) = v171;
      v171 = (char *)&unk_28898CC;
      *(_DWORD *)(v75 + 8) = v172;
      v172 = &unk_28898CC;
      HIDWORD(v75) = &unk_28898CC;
      *((_DWORD *)v40 + 50) = v75 + 12;
    v77 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v76 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v77);
    v78 = v171 - 12;
    if ( (int *)(v171 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v171 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v78);
    v79 = v170 - 12;
    if ( (int *)(v170 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v170 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v79);
    v80 = v164 - 12;
    if ( (int *)(v164 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v164 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v80);
    v81 = (void *)(v165 - 12);
    if ( (int *)(v165 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v165 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v81);
    v82 = v166 - 12;
    if ( (int *)(v166 - 12) != &dword_28898C0 )
      v67 = (unsigned int *)(v166 - 4);
          v68 = __ldrex(v67);
        while ( __strex(v68 - 1, v67) );
        v68 = (*v67)--;
      if ( v68 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v82);
    v83 = (void *)(v167 - 12);
    if ( (int *)(v167 - 12) != &dword_28898C0 )
      v69 = (unsigned int *)(v167 - 4);
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
        v70 = (*v69)--;
      if ( v70 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v83);
    v84 = v168 - 12;
    if ( (int *)(v168 - 12) != &dword_28898C0 )
      v71 = (unsigned int *)(v168 - 4);
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v84);
    v85 = (void *)(v169 - 12);
    if ( (int *)(v169 - 12) != &dword_28898C0 )
      v73 = (unsigned int *)(v169 - 4);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v85);
  sub_119C884((void **)&v161, "images");
  webjson::getFieldAsObjectArray((int)&v162, v151, &v161);
  v86 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v145 = (unsigned int *)(v161 - 4);
        v146 = __ldrex(v145);
      while ( __strex(v146 - 1, v145) );
      v146 = (*v145)--;
    if ( v146 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v86);
  v87 = v163;
  for ( j = v162; j != v87; j = (web::json::value *)((char *)j + 4) )
    sub_119C884((void **)&v158, "uri");
    v157 = (char *)&unk_28898CC;
    webjson::getFieldAsString((int *)&v159, j, &v158, (int *)&v157);
    sub_119C884((void **)&v156, "imagePurpose");
    v155 = (char *)&unk_28898CC;
    webjson::getFieldAsString((int *)&v160, j, &v156, (int *)&v155);
    v101 = *(_QWORD *)((char *)v40 + 212);
    if ( (_DWORD)v101 == HIDWORD(v101) )
      std::vector<HydrateResponse::ImageMeta,std::allocator<HydrateResponse::ImageMeta>>::_M_emplace_back_aux<HydrateResponse::ImageMeta>(
        (unsigned __int64 *)v40 + 26,
        (int)&v159);
      v102 = (int)v160;
      *(_DWORD *)v101 = v159;
      v159 = (char *)&unk_28898CC;
      *(_DWORD *)(v101 + 4) = v160;
      v160 = &unk_28898CC;
      HIDWORD(v101) = &unk_28898CC;
      *((_DWORD *)v40 + 53) = v101 + 8;
    v103 = (void *)(v102 - 12);
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v89 = (unsigned int *)(v102 - 4);
          v90 = __ldrex(v89);
        while ( __strex(v90 - 1, v89) );
        v90 = (*v89)--;
      if ( v90 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v103);
    v104 = v159 - 12;
    if ( (int *)(v159 - 12) != &dword_28898C0 )
      v91 = (unsigned int *)(v159 - 4);
          v92 = __ldrex(v91);
        while ( __strex(v92 - 1, v91) );
        v92 = (*v91)--;
      if ( v92 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v104);
    v105 = v155 - 12;
    if ( (int *)(v155 - 12) != &dword_28898C0 )
      v93 = (unsigned int *)(v155 - 4);
          v94 = __ldrex(v93);
        while ( __strex(v94 - 1, v93) );
        v94 = (*v93)--;
      if ( v94 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v105);
    v106 = (void *)(v156 - 12);
    if ( (int *)(v156 - 12) != &dword_28898C0 )
      v95 = (unsigned int *)(v156 - 4);
          v96 = __ldrex(v95);
        while ( __strex(v96 - 1, v95) );
        v96 = (*v95)--;
      if ( v96 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v106);
    v107 = v157 - 12;
    if ( (int *)(v157 - 12) != &dword_28898C0 )
      v97 = (unsigned int *)(v157 - 4);
          v98 = __ldrex(v97);
        while ( __strex(v98 - 1, v97) );
        v98 = (*v97)--;
      if ( v98 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v107);
    v108 = (void *)(v158 - 12);
    if ( (int *)(v158 - 12) != &dword_28898C0 )
      v99 = (unsigned int *)(v158 - 4);
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
        v100 = (*v99)--;
      if ( v100 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v108);
  sub_119C884((void **)&v153, "custom");
  webjson::getFieldAsSerializedJson(&v154, v151, &v153);
    (int *)v40 + 45,
    &v154);
  v109 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v147 = (unsigned int *)(v154 - 4);
        v148 = __ldrex(v147);
      while ( __strex(v148 - 1, v147) );
      v148 = (*v147)--;
    if ( v148 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v109);
  v110 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v149 = (unsigned int *)(v153 - 4);
        v150 = __ldrex(v149);
      while ( __strex(v150 - 1, v149) );
      v150 = (*v149)--;
    if ( v150 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v110);
  v111 = *(_QWORD *)&v162;
  if ( v162 != v163 )
      if ( *(_DWORD *)v111 )
        (*(void (__cdecl **)(_DWORD))(**(_DWORD **)v111 + 96))(*(_DWORD *)v111);
      *(_DWORD *)v111 = 0;
      LODWORD(v111) = v111 + 4;
    while ( HIDWORD(v111) != (_DWORD)v111 );
    LODWORD(v111) = v162;
  if ( (_DWORD)v111 )
    operator delete((void *)v111);
  v112 = *(_QWORD *)&v174;
  if ( v174 != v175 )
      if ( *(_DWORD *)v112 )
        (*(void (__cdecl **)(_DWORD))(**(_DWORD **)v112 + 96))(*(_DWORD *)v112);
      *(_DWORD *)v112 = 0;
      LODWORD(v112) = v112 + 4;
    while ( HIDWORD(v112) != (_DWORD)v112 );
    LODWORD(v112) = v174;
  if ( (_DWORD)v112 )
    operator delete((void *)v112);
}


void __fastcall HydrateItemRequest::_responseHeaders(HydrateItemRequest *this, const web::http::http_headers *a2)
{
  HydrateItemRequest::_responseHeaders(this, a2);
}


void __fastcall HydrateItemRequest::_parseJsonResponse(HydrateItemRequest *this, const web::json::value *a2)
{
  HydrateItemRequest::_parseJsonResponse(this, a2);
}
