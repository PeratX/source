

signed int __fastcall SearchCatalogRequest::_checkMinMaxClientVer(SearchCatalogRequest *this, const web::json::value *a2, const SemVersion *a3)
{
  web::json::value *v3; // r5@1
  const SemVersion *v4; // r7@1
  const void **v5; // r5@1
  void *v6; // r0@1
  char *v7; // r0@2
  void *v8; // r0@3
  int v9; // r6@5
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  signed int v13; // r4@9
  char *v14; // r0@10
  void *v15; // r0@11
  int v16; // r4@13
  void *v17; // r0@13
  void *v18; // r0@14
  void *v19; // r0@15
  void *v20; // r0@19
  void *v21; // r0@20
  unsigned int *v23; // r2@22
  signed int v24; // r1@24
  unsigned int *v25; // r2@26
  signed int v26; // r1@28
  unsigned int *v27; // r2@30
  signed int v28; // r1@32
  unsigned int *v29; // r2@34
  signed int v30; // r1@36
  unsigned int *v31; // r2@38
  signed int v32; // r1@40
  unsigned int *v33; // r2@42
  signed int v34; // r1@44
  unsigned int *v35; // r2@46
  signed int v36; // r1@48
  unsigned int *v37; // r2@50
  signed int v38; // r1@52
  unsigned int *v39; // r2@54
  signed int v40; // r1@56
  unsigned int *v41; // r2@58
  signed int v42; // r1@60
  unsigned int *v43; // r2@78
  signed int v44; // r1@80
  unsigned int *v45; // r2@82
  signed int v46; // r1@84
  unsigned int *v47; // r2@86
  signed int v48; // r1@88
  int v49; // [sp+0h] [bp-70h]@13
  int v50; // [sp+8h] [bp-68h]@15
  int v51; // [sp+Ch] [bp-64h]@14
  int v52; // [sp+10h] [bp-60h]@13
  char *v53; // [sp+18h] [bp-58h]@10
  int v54; // [sp+20h] [bp-50h]@10
  int v55; // [sp+24h] [bp-4Ch]@10
  char v56; // [sp+28h] [bp-48h]@5
  int v57; // [sp+30h] [bp-40h]@7
  int v58; // [sp+34h] [bp-3Ch]@6
  int v59; // [sp+38h] [bp-38h]@5
  char *v60; // [sp+40h] [bp-30h]@2
  int v61; // [sp+48h] [bp-28h]@2
  int v62; // [sp+4Ch] [bp-24h]@2
  int v63; // [sp+54h] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  sub_119C884((void **)&v63, "custom");
  v5 = webjson::getFieldAsObject(v3, &v63);
  v6 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v63 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v61, "minClientVersion");
  v60 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v62, (web::json::value *)v5, &v61, (int *)&v60);
  v7 = v60 - 12;
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v60 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v61 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( !*(_DWORD *)(v62 - 12) )
    goto LABEL_127;
  SemVersion::SemVersion((SemVersion *)&v56);
  SemVersion::fromString((const void **)&v62, (int)&v56);
  v9 = SemVersion::operator>((int)&v56, (int)v4);
  v10 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v59 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v58 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v57 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  if ( v9 )
    v13 = 0;
  else
LABEL_127:
    sub_119C884((void **)&v54, "maxClientVersion");
    v53 = (char *)&unk_28898CC;
    webjson::getFieldAsString(&v55, (web::json::value *)v5, &v54, (int *)&v53);
    v14 = v53 - 12;
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v53 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
      }
      else
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v54 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    if ( !*(_DWORD *)(v55 - 12) )
      goto LABEL_128;
    SemVersion::SemVersion((SemVersion *)&v49);
    SemVersion::fromString((const void **)&v55, (int)&v49);
    v16 = SemVersion::operator<((int)&v49, (int)v4);
    v17 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v52 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v18 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v51 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    v19 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v50 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    if ( v16 )
      v13 = 0;
LABEL_128:
      v13 = 1;
    v20 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v55 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v62 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  return v13;
}


int __fastcall SearchCatalogRequest::SearchCatalogRequest(int a1, ContentCatalogService *a2, int *a3, int a4)
{
  ContentCatalogService *v4; // r7@1
  int v5; // r4@1
  int v6; // r11@1
  int *v7; // r10@1
  int *v8; // r5@1
  const char **v9; // r0@1
  const char *v10; // r6@1
  size_t v11; // r0@1
  int i; // r3@1
  int v13; // t1@2
  int *v14; // r0@3
  int *v15; // r0@3
  int *v16; // r0@3
  void (__fastcall *v17)(int, int, signed int); // r3@3
  int v18; // r6@5

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
  *(_DWORD *)v5 = &off_26DD3E0;
  v14 = (int *)ContentCatalogService::getHostUrl(v4);
  sub_119C854((int *)(v5 + 72), v14);
  v15 = (int *)ContentCatalogService::getCreationDateLimitOverride(v4);
  sub_119C854((int *)(v5 + 76), v15);
  v16 = (int *)ContentCatalogService::getPlatformOverride(v4);
  sub_119C854((int *)(v5 + 80), v16);
  ServiceClient::getPrimaryUserXUID((ServiceClient *)(v5 + 84), (int)v4);
  SearchQuery::SearchQuery((int *)(v5 + 88), v7);
  *(_DWORD *)(v5 + 140) = 0;
  v17 = *(void (__fastcall **)(int, int, signed int))(v6 + 8);
  if ( v17 )
    v17(v5 + 132, v6, 2);
    *(_DWORD *)(v5 + 144) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v5 + 140) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v5 + 148) = 0;
  *(_DWORD *)(v5 + 152) = 0;
  *(_DWORD *)(v5 + 156) = 0;
  *(_DWORD *)(v5 + 160) = 0;
  *(_DWORD *)(v5 + 164) = &unk_28898CC;
  v18 = v5 + 164;
  *(_DWORD *)(v18 + 4) = &unk_28898CC;
  *(_DWORD *)(v18 + 8) = &unk_28898CC;
  *(_DWORD *)(v18 + 12) = &unk_28898CC;
  *(_DWORD *)(v5 + 180) = ContentCatalogService::getLocalCacheSearchMaxAgeSeconds(v4);
  return v5;
}


void __fastcall SearchCatalogRequest::_parseJsonMetadata(SearchCatalogRequest *this, const web::json::value *a2)
{
  web::json::value *v2; // r5@1
  SearchCatalogRequest *v3; // r6@1
  void *v4; // r0@1
  char *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  char *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  char *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  char *v14; // r0@11
  void *v15; // r0@12
  unsigned int *v16; // r2@14
  signed int v17; // r1@16
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  unsigned int *v36; // r2@54
  signed int v37; // r1@56
  unsigned int *v38; // r2@58
  signed int v39; // r1@60
  char *v40; // [sp+4h] [bp-54h]@10
  int v41; // [sp+Ch] [bp-4Ch]@10
  int v42; // [sp+10h] [bp-48h]@10
  char *v43; // [sp+14h] [bp-44h]@7
  int v44; // [sp+1Ch] [bp-3Ch]@7
  int v45; // [sp+20h] [bp-38h]@7
  char *v46; // [sp+24h] [bp-34h]@4
  int v47; // [sp+2Ch] [bp-2Ch]@4
  int v48; // [sp+30h] [bp-28h]@4
  char *v49; // [sp+34h] [bp-24h]@1
  int v50; // [sp+3Ch] [bp-1Ch]@1
  int v51; // [sp+40h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_119C884((void **)&v50, "cacheWriteDate");
  v49 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v51, v2, &v50, (int *)&v49);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 41,
    &v51);
  v4 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v51 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v49 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v50 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v47, "acceptLanguage");
  v46 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v48, v2, &v47, (int *)&v46);
    (int *)v3 + 42,
    &v48);
  v7 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v48 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = v46 - 12;
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v46 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v47 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v44, "requestedBy");
  v43 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v45, v2, &v44, (int *)&v43);
    (int *)v3 + 43,
    &v45);
  v10 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v45 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v43 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v44 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v41, "clientVersion");
  v40 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v42, v2, &v41, (int *)&v40);
    (int *)v3 + 44,
    &v42);
  v13 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v42 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v40 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v41 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
}


void __fastcall SearchCatalogRequest::_parseJsonResponse(SearchCatalogRequest *this, const web::json::value *a2)
{
  web::json::value *v2; // r5@1
  SearchCatalogRequest *v3; // r11@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  web::json::value *v7; // r4@4
  web::json::value *v8; // r10@4
  const char *v9; // r7@5
  void **v10; // r6@5
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  signed int v17; // r1@18
  void *v18; // r0@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  int *v21; // r6@25
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  int *v24; // r6@29
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  unsigned int *v29; // r2@38
  signed int v30; // r1@40
  int *v31; // r6@41
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  unsigned int *v34; // r2@46
  signed int v35; // r1@48
  unsigned int *v36; // r2@50
  signed int v37; // r1@52
  int *v38; // r6@53
  unsigned int *v39; // r2@54
  signed int v40; // r1@56
  unsigned int *v41; // r2@58
  signed int v42; // r1@60
  unsigned int *v43; // r2@62
  signed int v44; // r1@64
  unsigned int *v45; // r2@66
  signed int v46; // r1@68
  unsigned int *v47; // r2@70
  signed int v48; // r1@72
  unsigned int *v49; // r2@74
  signed int v50; // r1@76
  unsigned int *v51; // r2@78
  signed int v52; // r1@80
  unsigned int *v53; // r2@82
  signed int v54; // r1@84
  unsigned int *v55; // r2@86
  signed int v56; // r1@88
  unsigned int *v57; // r2@90
  signed int v58; // r1@92
  unsigned int *v59; // r2@94
  signed int v60; // r1@96
  unsigned int *v61; // r2@98
  signed int v62; // r1@100
  unsigned int *v63; // r2@106
  signed int v64; // r1@108
  unsigned int *v65; // r2@110
  signed int v66; // r1@112
  unsigned int *v67; // r2@114
  signed int v68; // r1@116
  unsigned int *v69; // r2@130
  signed int v70; // r1@132
  unsigned int *v71; // r2@134
  signed int v72; // r1@136
  unsigned int *v73; // r2@138
  signed int v74; // r1@140
  unsigned int *v75; // r2@154
  signed int v76; // r1@156
  unsigned int *v77; // r2@158
  signed int v78; // r1@160
  unsigned int *v79; // r2@162
  signed int v80; // r1@164
  unsigned int *v81; // r2@178
  signed int v82; // r1@180
  unsigned int *v83; // r2@182
  signed int v84; // r1@184
  unsigned int *v85; // r2@186
  signed int v86; // r1@188
  unsigned int *v87; // r2@202
  signed int v88; // r1@204
  unsigned int *v89; // r2@206
  signed int v90; // r1@208
  unsigned int *v91; // r2@214
  signed int v92; // r1@216
  unsigned int *v93; // r2@302
  signed int v94; // r1@304
  unsigned int *v95; // r2@306
  signed int v96; // r1@308
  unsigned int *v97; // r2@310
  signed int v98; // r1@312
  const void **v99; // r9@326
  void *v105; // r0@328
  void *v106; // r0@329
  char *v107; // r0@330
  void *v108; // r0@331
  void *v109; // r0@332
  char *v110; // r0@333
  void *v111; // r0@334
  void *v112; // r0@335
  char *v113; // r0@336
  void *v114; // r0@337
  void *v115; // r0@338
  char *v116; // r0@339
  void *v117; // r0@340
  __int64 v118; // kr08_8@341
  int v119; // r0@341
  _DWORD *v120; // r4@341
  int v121; // r0@341
  unsigned int *v122; // r2@345
  signed int v123; // r1@347
  int *v124; // r0@353
  int v125; // r4@357
  void *v126; // r6@357
  unsigned int *v127; // r2@359
  signed int v128; // r1@361
  int *v129; // r0@367
  void *v130; // r0@372
  void *v131; // r0@373
  char *v132; // r0@374
  void *v133; // r0@375
  void *v134; // r0@376
  char *v135; // r0@377
  void *v136; // r0@378
  void *v137; // r0@379
  char *v138; // r0@380
  void *v139; // r0@381
  void *v140; // r0@382
  char *v141; // r0@383
  void *v142; // r0@384
  void *v143; // r0@385
  char *v144; // r0@386
  void *v145; // r0@387
  void *v146; // r0@388
  char *v147; // r0@389
  void *v148; // r0@390
  void *v149; // r0@391
  void *v150; // r0@392
  const void **v151; // r0@393
  void *v152; // r0@393
  void *v154; // r0@395
  void *v156; // r0@396
  void *v157; // r0@397
  __int64 v158; // r0@399
  SearchCatalogRequest *v159; // r6@400
  unsigned int *v160; // r2@401
  void *v161; // r0@410
  void *v162; // r0@411
  void *v163; // r0@412
  __int64 v164; // r4@413
  unsigned int *v165; // r2@433
  signed int v166; // r1@435
  unsigned int *v167; // r2@437
  signed int v168; // r1@439
  unsigned int *v169; // r2@441
  signed int v170; // r1@443
  void **v171; // [sp+7Ch] [bp-2A4h]@5
  void **v172; // [sp+80h] [bp-2A0h]@5
  void **v173; // [sp+84h] [bp-29Ch]@5
  void **v174; // [sp+88h] [bp-298h]@5
  void **v175; // [sp+8Ch] [bp-294h]@5
  web::json::value *v176; // [sp+A4h] [bp-27Ch]@328
  unsigned __int64 *v177; // [sp+C4h] [bp-25Ch]@3
  int v178; // [sp+D8h] [bp-248h]@306
  void **v179; // [sp+DCh] [bp-244h]@396
  int v180; // [sp+E0h] [bp-240h]@398
  void **v181; // [sp+E4h] [bp-23Ch]@396
  void **v182; // [sp+E8h] [bp-238h]@396
  int v183; // [sp+104h] [bp-21Ch]@398
  int v184; // [sp+10Ch] [bp-214h]@310
  int v185; // [sp+110h] [bp-210h]@398
  int v186; // [sp+19Ch] [bp-184h]@302
  int v187; // [sp+1A4h] [bp-17Ch]@214
  int v188; // [sp+1A8h] [bp-178h]@393
  int v189; // [sp+1B0h] [bp-170h]@206
  int v190; // [sp+1B4h] [bp-16Ch]@202
  char *v191; // [sp+1B8h] [bp-168h]@182
  int v192; // [sp+1C0h] [bp-160h]@186
  int v193; // [sp+1C4h] [bp-15Ch]@178
  char *v194; // [sp+1C8h] [bp-158h]@158
  int v195; // [sp+1D0h] [bp-150h]@162
  int v196; // [sp+1D4h] [bp-14Ch]@154
  char *v197; // [sp+1D8h] [bp-148h]@134
  int v198; // [sp+1E0h] [bp-140h]@138
  int v199; // [sp+1E4h] [bp-13Ch]@130
  char *v200; // [sp+1E8h] [bp-138h]@110
  int v201; // [sp+1F0h] [bp-130h]@114
  int v202; // [sp+1F4h] [bp-12Ch]@106
  char *v203; // [sp+1F8h] [bp-128h]@94
  int v204; // [sp+200h] [bp-120h]@98
  int v205; // [sp+204h] [bp-11Ch]@90
  char *v206; // [sp+208h] [bp-118h]@82
  int v207; // [sp+210h] [bp-110h]@86
  int v208; // [sp+214h] [bp-10Ch]@78
  int v209; // [sp+21Ch] [bp-104h]@74
  void *v210; // [sp+220h] [bp-100h]@341
  void *v211; // [sp+224h] [bp-FCh]@341
  int v212; // [sp+228h] [bp-F8h]@341
  char *v213; // [sp+22Ch] [bp-F4h]@66
  int v214; // [sp+234h] [bp-ECh]@70
  int v215; // [sp+238h] [bp-E8h]@53
  char *v216; // [sp+23Ch] [bp-E4h]@54
  int v217; // [sp+244h] [bp-DCh]@58
  int v218; // [sp+248h] [bp-D8h]@41
  char *v219; // [sp+24Ch] [bp-D4h]@42
  int v220; // [sp+254h] [bp-CCh]@46
  int v221; // [sp+258h] [bp-C8h]@29
  char *v222; // [sp+25Ch] [bp-C4h]@30
  int v223; // [sp+264h] [bp-BCh]@34
  int v224; // [sp+268h] [bp-B8h]@25
  int v225; // [sp+270h] [bp-B0h]@22
  int v226; // [sp+274h] [bp-ACh]@328
  void *v227; // [sp+278h] [bp-A8h]@328
  void *v228; // [sp+27Ch] [bp-A4h]@328
  void *v229; // [sp+280h] [bp-A0h]@328
  void *v230; // [sp+284h] [bp-9Ch]@328
  void *v231; // [sp+288h] [bp-98h]@328
  void *v232; // [sp+28Ch] [bp-94h]@328
  int v233; // [sp+290h] [bp-90h]@328
  int v234; // [sp+294h] [bp-8Ch]@328
  int v235; // [sp+298h] [bp-88h]@328
  void *v236; // [sp+29Ch] [bp-84h]@328
  void *v237; // [sp+2A0h] [bp-80h]@328
  void *v238; // [sp+2A4h] [bp-7Ch]@328
  void *v239; // [sp+2A8h] [bp-78h]@328
  void *v240; // [sp+2ACh] [bp-74h]@328
  void *v241; // [sp+2B0h] [bp-70h]@328
  void *v242; // [sp+2B4h] [bp-6Ch]@328
  int v243; // [sp+2BCh] [bp-64h]@5
  int v244; // [sp+2C0h] [bp-60h]@3
  char v245; // [sp+2C4h] [bp-5Ch]@3
  int v246; // [sp+2CCh] [bp-54h]@412
  int v247; // [sp+2D0h] [bp-50h]@411
  int v248; // [sp+2D4h] [bp-4Ch]@410
  int v249; // [sp+2E0h] [bp-40h]@2
  web::json::value *v250; // [sp+2E4h] [bp-3Ch]@2
  web::json::value *v251; // [sp+2E8h] [bp-38h]@3
  int v252; // [sp+2F4h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  sub_119C884((void **)&v252, "count");
  *((_DWORD *)v3 + 37) = webjson::getFieldAsInt(v2, &v252, 0);
  v4 = (void *)(v252 - 12);
  if ( (int *)(v252 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v252 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  sub_119C884((void **)&v249, "results");
  webjson::getFieldAsObjectArray((int)&v250, v2, &v249);
  v5 = (void *)(v249 - 12);
  if ( (int *)(v249 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v249 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  std::vector<SearchResponseDocument,std::allocator<SearchResponseDocument>>::reserve((int)v3 + 152, (v251 - v250) >> 2);
  SemVersion::SemVersion((SemVersion *)&v245);
  Common::getGameSemVerString((Common *)&v244);
  SemVersion::fromString((const void **)&v244, (int)&v245);
  v177 = (unsigned __int64 *)((char *)v3 + 152);
  v6 = (void *)(v244 - 12);
  if ( (int *)(v244 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v244 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = v251;
  v8 = v250;
  if ( v250 != v251 )
    v9 = "document";
    v10 = (void **)&v243;
    v175 = off_26D3F60;
    v174 = (void **)off_26D3F6C;
    v173 = (void **)off_26D3F68;
    v171 = off_26D3F84;
    v172 = off_26D3F80[0];
    do
      sub_119C884(v10, v9);
      v99 = webjson::getFieldAsObject(v8, (int *)v10);
      v18 = (void *)(v243 - 12);
      if ( (int *)(v243 - 12) != &dword_28898C0 )
      {
        v160 = (unsigned int *)(v243 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v160);
          while ( __strex(v17 - 1, v160) );
        }
        else
          v17 = (*v160)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v18);
      }
      if ( SearchCatalogRequest::_checkMinMaxClientVer(
             (SearchCatalogRequest *)v18,
             (const web::json::value *)v99,
             (const SemVersion *)&v245) == 1 )
        v176 = v7;
        v226 = 0;
        v227 = &unk_28898CC;
        v228 = &unk_28898CC;
        v229 = &unk_28898CC;
        v230 = &unk_28898CC;
        v231 = &unk_28898CC;
        v232 = &unk_28898CC;
        v233 = 0;
        v234 = 0;
        v235 = 0;
        v236 = &unk_28898CC;
        v237 = &unk_28898CC;
        v238 = &unk_28898CC;
        v239 = &unk_28898CC;
        v240 = &unk_28898CC;
        v241 = &unk_28898CC;
        v242 = &unk_28898CC;
        sub_119C884((void **)&v225, "score");
        _R0 = webjson::getFieldAsFloat(v8, &v225, 1065353216);
        __asm { VMOV            S0, R0 }
        v21 = &v224;
        v105 = (void *)(v225 - 12);
        __asm { VSTR            S0, [SP,#0x320+var_AC] }
        if ( (int *)(v225 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v225 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v21 = &v224;
          }
          else
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v105);
        sub_119C884((void **)&v223, "documentId");
        v222 = (char *)&unk_28898CC;
        webjson::getFieldAsString(v21, (web::json::value *)v99, &v223, (int *)&v222);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v227,
          v21);
        v24 = &v221;
        v106 = (void *)(v224 - 12);
        if ( (int *)(v224 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v224 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v24 = &v221;
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v106);
        v107 = v222 - 12;
        if ( (int *)(v222 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v222 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v107);
        v108 = (void *)(v223 - 12);
        if ( (int *)(v223 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v223 - 4);
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v108);
        sub_119C884((void **)&v220, "productId");
        v219 = (char *)&unk_28898CC;
        webjson::getFieldAsString(v24, (web::json::value *)v99, &v220, (int *)&v219);
          (int *)&v228,
          v24);
        v31 = &v218;
        v109 = (void *)(v221 - 12);
        if ( (int *)(v221 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v221 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v31 = &v218;
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v109);
        v110 = v219 - 12;
        if ( (int *)(v219 - 12) != &dword_28898C0 )
          v32 = (unsigned int *)(v219 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v110);
        v111 = (void *)(v220 - 12);
        if ( (int *)(v220 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v220 - 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v111);
        sub_119C884((void **)&v217, "title");
        v216 = (char *)&unk_28898CC;
        webjson::getFieldAsString(v31, (web::json::value *)v99, &v217, (int *)&v216);
          (int *)&v229,
          v31);
        v38 = &v215;
        v112 = (void *)(v218 - 12);
        if ( (int *)(v218 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v218 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v38 = &v215;
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v112);
        v113 = v216 - 12;
        if ( (int *)(v216 - 12) != &dword_28898C0 )
          v39 = (unsigned int *)(v216 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v113);
        v114 = (void *)(v217 - 12);
        if ( (int *)(v217 - 12) != &dword_28898C0 )
          v41 = (unsigned int *)(v217 - 4);
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v114);
        sub_119C884((void **)&v214, "description");
        v213 = (char *)&unk_28898CC;
        webjson::getFieldAsString(v38, (web::json::value *)v99, &v214, (int *)&v213);
          (int *)&v230,
          v38);
        v115 = (void *)(v215 - 12);
        if ( (int *)(v215 - 12) != &dword_28898C0 )
          v43 = (unsigned int *)(v215 - 4);
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
            v44 = (*v43)--;
          if ( v44 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v115);
        v116 = v213 - 12;
        if ( (int *)(v213 - 12) != &dword_28898C0 )
          v45 = (unsigned int *)(v213 - 4);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v116);
        v117 = (void *)(v214 - 12);
        if ( (int *)(v214 - 12) != &dword_28898C0 )
          v47 = (unsigned int *)(v214 - 4);
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v117);
        sub_119C884((void **)&v209, "tags");
        webjson::getFieldAsStringArray((int)&v210, (web::json::value *)v99, &v209);
        v118 = *(_QWORD *)&v233;
        v119 = (int)v210;
        v210 = 0;
        _ZF = v233 == v234;
        v233 = v119;
        v120 = (_DWORD *)v118;
        v121 = (int)v211;
        v211 = 0;
        v234 = v121;
        v235 = v212;
        v212 = 0;
        if ( !_ZF )
            v124 = (int *)(*v120 - 12);
            if ( v124 != &dword_28898C0 )
            {
              v122 = (unsigned int *)(*v120 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v123 = __ldrex(v122);
                while ( __strex(v123 - 1, v122) );
              }
              else
                v123 = (*v122)--;
              if ( v123 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v124);
            }
            ++v120;
          while ( v120 != (_DWORD *)HIDWORD(v118) );
        if ( (_DWORD)v118 )
          operator delete((void *)v118);
        v125 = (int)v211;
        v126 = v210;
        if ( v210 != v211 )
            v129 = (int *)(*(_DWORD *)v126 - 12);
            if ( v129 != &dword_28898C0 )
              v127 = (unsigned int *)(*(_DWORD *)v126 - 4);
                  v128 = __ldrex(v127);
                while ( __strex(v128 - 1, v127) );
                v128 = (*v127)--;
              if ( v128 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v129);
            v126 = (char *)v126 + 4;
          while ( v126 != (void *)v125 );
          v126 = v210;
        if ( v126 )
          operator delete(v126);
        v130 = (void *)(v209 - 12);
        if ( (int *)(v209 - 12) != &dword_28898C0 )
          v49 = (unsigned int *)(v209 - 4);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v130);
        sub_119C884((void **)&v207, "version");
        v206 = (char *)&unk_28898CC;
        webjson::getFieldAsString(&v208, (web::json::value *)v99, &v207, (int *)&v206);
          (int *)&v236,
          &v208);
        v131 = (void *)(v208 - 12);
        if ( (int *)(v208 - 12) != &dword_28898C0 )
          v51 = (unsigned int *)(v208 - 4);
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
            v52 = (*v51)--;
          if ( v52 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v131);
        v132 = v206 - 12;
        if ( (int *)(v206 - 12) != &dword_28898C0 )
          v53 = (unsigned int *)(v206 - 4);
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
            v54 = (*v53)--;
          if ( v54 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v132);
        v133 = (void *)(v207 - 12);
        if ( (int *)(v207 - 12) != &dword_28898C0 )
          v55 = (unsigned int *)(v207 - 4);
              v56 = __ldrex(v55);
            while ( __strex(v56 - 1, v55) );
            v56 = (*v55)--;
          if ( v56 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v133);
        sub_119C884((void **)&v204, "creatorId");
        v203 = (char *)&unk_28898CC;
        webjson::getFieldAsString(&v205, (web::json::value *)v99, &v204, (int *)&v203);
          (int *)&v237,
          &v205);
        v134 = (void *)(v205 - 12);
        if ( (int *)(v205 - 12) != &dword_28898C0 )
          v57 = (unsigned int *)(v205 - 4);
              v58 = __ldrex(v57);
            while ( __strex(v58 - 1, v57) );
            v58 = (*v57)--;
          if ( v58 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v134);
        v135 = v203 - 12;
        if ( (int *)(v203 - 12) != &dword_28898C0 )
          v59 = (unsigned int *)(v203 - 4);
              v60 = __ldrex(v59);
            while ( __strex(v60 - 1, v59) );
            v60 = (*v59)--;
          if ( v60 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v135);
        v136 = (void *)(v204 - 12);
        if ( (int *)(v204 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v204 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v136);
        sub_119C884((void **)&v201, "creatorName");
        v200 = (char *)&unk_28898CC;
        webjson::getFieldAsString(&v202, (web::json::value *)v99, &v201, (int *)&v200);
          (int *)&v231,
          &v202);
        v137 = (void *)(v202 - 12);
        if ( (int *)(v202 - 12) != &dword_28898C0 )
          v63 = (unsigned int *)(v202 - 4);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v137);
        v138 = v200 - 12;
        if ( (int *)(v200 - 12) != &dword_28898C0 )
          v65 = (unsigned int *)(v200 - 4);
              v66 = __ldrex(v65);
            while ( __strex(v66 - 1, v65) );
            v66 = (*v65)--;
          if ( v66 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v138);
        v139 = (void *)(v201 - 12);
        if ( (int *)(v201 - 12) != &dword_28898C0 )
          v67 = (unsigned int *)(v201 - 4);
              v68 = __ldrex(v67);
            while ( __strex(v68 - 1, v67) );
            v68 = (*v67)--;
          if ( v68 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v139);
        sub_119C884((void **)&v198, "thumbnailUrl");
        v197 = (char *)&unk_28898CC;
        webjson::getFieldAsString(&v199, (web::json::value *)v99, &v198, (int *)&v197);
          (int *)&v238,
          &v199);
        v140 = (void *)(v199 - 12);
        if ( (int *)(v199 - 12) != &dword_28898C0 )
          v69 = (unsigned int *)(v199 - 4);
              v70 = __ldrex(v69);
            while ( __strex(v70 - 1, v69) );
            v70 = (*v69)--;
          if ( v70 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v140);
        v141 = v197 - 12;
        if ( (int *)(v197 - 12) != &dword_28898C0 )
          v71 = (unsigned int *)(v197 - 4);
              v72 = __ldrex(v71);
            while ( __strex(v72 - 1, v71) );
            v72 = (*v71)--;
          if ( v72 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v141);
        v142 = (void *)(v198 - 12);
        if ( (int *)(v198 - 12) != &dword_28898C0 )
          v73 = (unsigned int *)(v198 - 4);
              v74 = __ldrex(v73);
            while ( __strex(v74 - 1, v73) );
            v74 = (*v73)--;
          if ( v74 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v142);
        sub_119C884((void **)&v195, "creationDate");
        v194 = (char *)&unk_28898CC;
        webjson::getFieldAsString(&v196, (web::json::value *)v99, &v195, (int *)&v194);
          (int *)&v239,
          &v196);
        v143 = (void *)(v196 - 12);
        if ( (int *)(v196 - 12) != &dword_28898C0 )
          v75 = (unsigned int *)(v196 - 4);
              v76 = __ldrex(v75);
            while ( __strex(v76 - 1, v75) );
            v76 = (*v75)--;
          if ( v76 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v143);
        v144 = v194 - 12;
        if ( (int *)(v194 - 12) != &dword_28898C0 )
          v77 = (unsigned int *)(v194 - 4);
              v78 = __ldrex(v77);
            while ( __strex(v78 - 1, v77) );
            v78 = (*v77)--;
          if ( v78 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v144);
        v145 = (void *)(v195 - 12);
        if ( (int *)(v195 - 12) != &dword_28898C0 )
          v79 = (unsigned int *)(v195 - 4);
              v80 = __ldrex(v79);
            while ( __strex(v80 - 1, v79) );
            v80 = (*v79)--;
          if ( v80 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v145);
        sub_119C884((void **)&v192, "lastModifiedDate");
        v191 = (char *)&unk_28898CC;
        webjson::getFieldAsString(&v193, (web::json::value *)v99, &v192, (int *)&v191);
          (int *)&v240,
          &v193);
        v146 = (void *)(v193 - 12);
        if ( (int *)(v193 - 12) != &dword_28898C0 )
          v81 = (unsigned int *)(v193 - 4);
              v82 = __ldrex(v81);
            while ( __strex(v82 - 1, v81) );
            v82 = (*v81)--;
          if ( v82 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v146);
        v147 = v191 - 12;
        if ( (int *)(v191 - 12) != &dword_28898C0 )
          v83 = (unsigned int *)(v191 - 4);
              v84 = __ldrex(v83);
            while ( __strex(v84 - 1, v83) );
            v84 = (*v83)--;
          if ( v84 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v147);
        v148 = (void *)(v192 - 12);
        if ( (int *)(v192 - 12) != &dword_28898C0 )
          v85 = (unsigned int *)(v192 - 4);
              v86 = __ldrex(v85);
            while ( __strex(v86 - 1, v85) );
            v86 = (*v85)--;
          if ( v86 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v148);
        sub_119C884((void **)&v189, "custom");
        webjson::getFieldAsSerializedJson(&v190, (web::json::value *)v99, &v189);
          (int *)&v241,
          &v190);
        v149 = (void *)(v190 - 12);
        if ( (int *)(v190 - 12) != &dword_28898C0 )
          v87 = (unsigned int *)(v190 - 4);
              v88 = __ldrex(v87);
            while ( __strex(v88 - 1, v87) );
            v88 = (*v87)--;
          if ( v88 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v149);
        v150 = (void *)(v189 - 12);
        if ( (int *)(v189 - 12) != &dword_28898C0 )
          v89 = (unsigned int *)(v189 - 4);
              v90 = __ldrex(v89);
            while ( __strex(v90 - 1, v89) );
            v90 = (*v89)--;
          if ( v90 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v150);
        sub_119C884((void **)&v187, "custom");
        v151 = webjson::getFieldAsObject((web::json::value *)v99, &v187);
        web::json::value::value((web::json::value *)&v188, (const web::json::value *)v151);
        v152 = (void *)(v187 - 12);
        if ( (int *)(v187 - 12) != &dword_28898C0 )
          v91 = (unsigned int *)(v187 - 4);
              v92 = __ldrex(v91);
            while ( __strex(v92 - 1, v91) );
            v92 = (*v91)--;
          if ( v92 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v152);
        if ( web::json::value::type((web::json::value *)&v188) != 5 )
          sub_119C884((void **)&v186, "price");
          _R6 = webjson::getFieldAsFloat((web::json::value *)&v188, &v186, 0);
          v154 = (void *)(v186 - 12);
          if ( (int *)(v186 - 12) != &dword_28898C0 )
            v93 = (unsigned int *)(v186 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v94 = __ldrex(v93);
              while ( __strex(v94 - 1, v93) );
            else
              v94 = (*v93)--;
            if ( v94 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v154);
          sub_119CB58((int)&v179, 24);
          __asm
            VMOV            S0, R6
            VCVTR.S32.F32   S0, S0
            VMOV            R1, S0
          sub_119C914((int)&v181, _R1);
          sub_119D48C(&v178, (int)&v182);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)&v242,
            &v178);
          v156 = (void *)(v178 - 12);
          if ( (int *)(v178 - 12) != &dword_28898C0 )
            v95 = (unsigned int *)(v178 - 4);
                v96 = __ldrex(v95);
              while ( __strex(v96 - 1, v95) );
              v96 = (*v95)--;
            if ( v96 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v156);
          v179 = v175;
          *(_DWORD *)((char *)*(v175 - 3) + (_DWORD)&v179) = v172;
          v181 = v171;
          v182 = &off_27734E8;
          v157 = (void *)(v184 - 12);
          if ( (int *)(v184 - 12) != &dword_28898C0 )
            v97 = (unsigned int *)(v184 - 4);
                v98 = __ldrex(v97);
              while ( __strex(v98 - 1, v97) );
              v98 = (*v97)--;
            if ( v98 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v157);
          v182 = &off_26D40A8;
          sub_119C954((unsigned int **)&v183);
          v179 = v173;
          *(_DWORD *)((char *)*(v173 - 3) + (_DWORD)&v179) = v174;
          v180 = 0;
          sub_119C964(&v185);
        v158 = *(_QWORD *)((char *)v3 + 156);
        if ( (_DWORD)v158 == HIDWORD(v158) )
          v159 = v3;
          std::vector<SearchResponseDocument,std::allocator<SearchResponseDocument>>::_M_emplace_back_aux<SearchResponseDocument>(
            v177,
            (int)&v226);
          *(_DWORD *)v158 = v226;
          *(_DWORD *)(v158 + 4) = v227;
          v227 = &unk_28898CC;
          *(_DWORD *)(v158 + 8) = v228;
          v228 = &unk_28898CC;
          *(_DWORD *)(v158 + 12) = v229;
          v229 = &unk_28898CC;
          *(_DWORD *)(v158 + 16) = v230;
          v230 = &unk_28898CC;
          *(_DWORD *)(v158 + 20) = v231;
          v231 = &unk_28898CC;
          *(_DWORD *)(v158 + 24) = v232;
          v232 = &unk_28898CC;
          *(_DWORD *)(v158 + 28) = 0;
          *(_DWORD *)(v158 + 32) = 0;
          *(_DWORD *)(v158 + 36) = 0;
          *(_DWORD *)(v158 + 28) = v233;
          v233 = 0;
          HIDWORD(v158) = *(_DWORD *)(v158 + 32);
          *(_DWORD *)(v158 + 32) = v234;
          v234 = HIDWORD(v158);
          HIDWORD(v158) = *(_DWORD *)(v158 + 36);
          *(_DWORD *)(v158 + 36) = v235;
          v235 = HIDWORD(v158);
          *(_DWORD *)(v158 + 40) = v236;
          v236 = &unk_28898CC;
          *(_DWORD *)(v158 + 44) = v237;
          v237 = &unk_28898CC;
          *(_DWORD *)(v158 + 48) = v238;
          v238 = &unk_28898CC;
          *(_DWORD *)(v158 + 52) = v239;
          v239 = &unk_28898CC;
          *(_DWORD *)(v158 + 56) = v240;
          v240 = &unk_28898CC;
          *(_DWORD *)(v158 + 60) = v241;
          v241 = &unk_28898CC;
          *(_DWORD *)(v158 + 64) = v242;
          v242 = &unk_28898CC;
          *((_DWORD *)v3 + 39) += 68;
        if ( v188 )
          (*(void (**)(void))(*(_DWORD *)v188 + 96))();
        SearchResponseDocument::~SearchResponseDocument((SearchResponseDocument *)&v226);
        v3 = v159;
        v7 = v176;
        v10 = (void **)&v243;
        v9 = "document";
      else
        --*((_DWORD *)v3 + 37);
      v8 = (web::json::value *)((char *)v8 + 4);
    while ( v8 != v7 );
  v161 = (void *)(v248 - 12);
  if ( (int *)(v248 - 12) != &dword_28898C0 )
    v165 = (unsigned int *)(v248 - 4);
        v166 = __ldrex(v165);
      while ( __strex(v166 - 1, v165) );
      v166 = (*v165)--;
    if ( v166 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v161);
  v162 = (void *)(v247 - 12);
  if ( (int *)(v247 - 12) != &dword_28898C0 )
    v167 = (unsigned int *)(v247 - 4);
        v168 = __ldrex(v167);
      while ( __strex(v168 - 1, v167) );
      v168 = (*v167)--;
    if ( v168 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v162);
  v163 = (void *)(v246 - 12);
  if ( (int *)(v246 - 12) != &dword_28898C0 )
    v169 = (unsigned int *)(v246 - 4);
        v170 = __ldrex(v169);
      while ( __strex(v170 - 1, v169) );
      v170 = (*v169)--;
    if ( v170 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v163);
  v164 = *(_QWORD *)&v250;
      if ( *(_DWORD *)v164 )
        (*(void (**)(void))(**(_DWORD **)v164 + 96))();
      *(_DWORD *)v164 = 0;
      LODWORD(v164) = v164 + 4;
    while ( HIDWORD(v164) != (_DWORD)v164 );
    LODWORD(v164) = v250;
  if ( (_DWORD)v164 )
    operator delete((void *)v164);
}


signed int __fastcall SearchCatalogRequest::_tryUseCachedResponse(int a1, unsigned int a2, const void **a3, const void **a4, const void **a5)
{
  unsigned int v5; // r5@1
  const void **v6; // r6@1
  int v7; // r4@1
  _DWORD *v8; // r0@2
  _DWORD *v9; // r1@2
  size_t v10; // r2@2
  _DWORD *v11; // r0@4
  size_t v12; // r2@4
  _DWORD *v13; // r0@6
  size_t v14; // r2@6
  void *v15; // r0@9
  __int64 v16; // r6@10
  signed int v17; // r2@10
  signed __int64 v18; // r6@10
  signed int v19; // r0@10
  signed int result; // r0@17
  unsigned int *v21; // r2@19
  signed int v22; // r1@21
  unsigned int v23; // [sp+0h] [bp-30h]@10
  unsigned int v24; // [sp+4h] [bp-2Ch]@12
  int v25; // [sp+Ch] [bp-24h]@9
  char v26; // [sp+10h] [bp-20h]@9

  v5 = a2;
  v6 = a4;
  v7 = a1;
  if ( !a2 )
    goto LABEL_29;
  v8 = *(_DWORD **)(a1 + 168);
  v9 = *a3;
  v10 = *(v8 - 3);
  if ( v10 != *(v9 - 3) )
  if ( memcmp(v8, v9, v10) )
  v11 = *(_DWORD **)(v7 + 172);
  v12 = *(v11 - 3);
  if ( v12 != *((_DWORD *)*v6 - 3) )
  if ( memcmp(v11, *v6, v12) )
  v13 = *(_DWORD **)(v7 + 176);
  v14 = *(v13 - 3);
  if ( v14 != *((_DWORD *)*a5 - 3) || memcmp(v13, *a5, v14) || !*(_DWORD *)(*(_DWORD *)(v7 + 164) - 12) )
  utility::conversions::to_string_t(&v25, (int *)(v7 + 164));
  utility::datetime::from_string((int)&v26, &v25, 1);
  v15 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  }
  v16 = *(_QWORD *)&v26;
  utility::datetime::utc_now((utility::datetime *)&v23);
  v17 = 0;
  v18 = 10000000LL * v5 + v16;
  v19 = 0;
  if ( v23 <= (unsigned int)v18 )
    v19 = 1;
  if ( v24 <= HIDWORD(v18) )
    v17 = 1;
  if ( v24 == HIDWORD(v18) )
    v17 = v19;
  if ( v17 )
    result = CachedRequest::_useCachedResponse((CachedRequest *)v7);
  else
LABEL_29:
    result = 0;
  return result;
}


SearchCatalogRequest::CacheMetadata *__fastcall SearchCatalogRequest::CacheMetadata::~CacheMetadata(SearchCatalogRequest::CacheMetadata *this)
{
  SearchCatalogRequest::CacheMetadata *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int *v8; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20

  v1 = this;
  v2 = *((_DWORD *)this + 3);
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
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v4 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 1);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v6 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (int *)(*(_DWORD *)v1 - 12);
  if ( v8 != &dword_28898C0 )
    v16 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v1;
}


void __fastcall SearchCatalogRequest::_parseJsonResponse(SearchCatalogRequest *this, const web::json::value *a2)
{
  SearchCatalogRequest::_parseJsonResponse(this, a2);
}


SearchCatalogRequest *__fastcall SearchCatalogRequest::~SearchCatalogRequest(SearchCatalogRequest *this)
{
  SearchCatalogRequest *v1; // r4@1
  SearchResponseDocument *v2; // r0@1
  SearchResponseDocument *v3; // r5@1
  void (*v4)(void); // r3@6
  int v5; // r1@8
  void *v6; // r0@8
  int v7; // r1@9
  void *v8; // r0@9
  int v9; // r1@10
  void *v10; // r0@10
  int v11; // r1@11
  void *v12; // r0@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27

  v1 = this;
  *(_DWORD *)this = &off_26DD3E0;
  SearchCatalogRequest::CacheMetadata::~CacheMetadata((SearchCatalogRequest *)((char *)this + 164));
  v3 = (SearchResponseDocument *)(*((_QWORD *)v1 + 19) >> 32);
  v2 = (SearchResponseDocument *)*((_QWORD *)v1 + 19);
  if ( v2 != v3 )
  {
    do
      v2 = (SearchResponseDocument *)((char *)SearchResponseDocument::~SearchResponseDocument(v2) + 68);
    while ( v3 != v2 );
    v2 = (SearchResponseDocument *)*((_DWORD *)v1 + 38);
  }
  if ( v2 )
    operator delete((void *)v2);
  v4 = (void (*)(void))*((_DWORD *)v1 + 35);
  if ( v4 )
    v4();
  SearchQuery::~SearchQuery((SearchCatalogRequest *)((char *)v1 + 88));
  v5 = *((_DWORD *)v1 + 21);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v5 - 4);
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
  v7 = *((_DWORD *)v1 + 20);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v7 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = *((_DWORD *)v1 + 19);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v9 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = *((_DWORD *)v1 + 18);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v11 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  CachedRequest::~CachedRequest(v1);
  return v1;
}


void __fastcall SearchCatalogRequest::_createMetadata(SearchCatalogRequest *this, int a2)
{
  SearchCatalogRequest::_createMetadata(this, a2);
}


void __fastcall SearchCatalogRequest::_parseJsonMetadata(SearchCatalogRequest *this, const web::json::value *a2)
{
  SearchCatalogRequest::_parseJsonMetadata(this, a2);
}


void __fastcall SearchCatalogRequest::send(SearchCatalogRequest *this)
{
  SearchCatalogRequest *v1; // r9@1
  int *v2; // r10@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  void (__fastcall *v5)(SearchCatalogRequest *, const void **); // r4@2
  const void **v6; // r0@2
  unsigned int v7; // r4@2
  signed int v8; // r4@2
  void *v9; // r0@2
  __int64 v10; // r0@5
  int v11; // r4@5
  unsigned int *v12; // r1@6
  unsigned int v13; // r0@8
  int *v14; // r4@10
  void *v15; // r0@12
  void *v16; // r0@13
  int *v17; // r4@14
  int *v18; // r11@14
  void *v19; // r0@16
  void *v20; // r0@17
  void *v21; // r0@21
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r5@36
  unsigned int v25; // r0@38
  unsigned int *v26; // r2@40
  signed int v27; // r1@42
  unsigned int *v28; // r2@44
  signed int v29; // r1@46
  int v30; // r4@51
  unsigned int *v31; // r1@52
  unsigned int v32; // r0@54
  unsigned int *v33; // r5@58
  unsigned int v34; // r0@60
  int v35; // r0@67
  unsigned int *v36; // r1@68
  unsigned int v37; // r2@69
  int v38; // r4@72
  unsigned int *v39; // r1@73
  unsigned int v40; // r0@75
  unsigned int *v41; // r5@79
  unsigned int v42; // r0@81
  void (__fastcall *v43)(int); // r1@85
  int v44; // r0@85
  unsigned int *v45; // r2@94
  signed int v46; // r1@96
  unsigned int *v47; // r2@98
  signed int v48; // r1@100
  unsigned int *v49; // r2@102
  signed int v50; // r1@104
  unsigned int *v51; // r2@106
  signed int v52; // r1@108
  int *v53; // r4@130
  char *v54; // r4@132
  char *v55; // r6@132
  void *v56; // r0@139
  int *v57; // r7@140 OVERLAPPED
  int *v58; // r8@140 OVERLAPPED
  unsigned int *v59; // r2@142
  signed int v60; // r1@144
  void *v61; // r0@155
  int *v62; // r4@157
  char *v63; // r4@159
  char *v64; // r6@159
  void *v65; // r0@166
  __int64 v66; // r4@167
  void *v67; // r0@177
  int *v68; // r4@178
  char *v69; // r4@180
  char *v70; // r6@180
  void *v71; // r0@187
  unsigned __int64 v72; // r4@188
  int v73; // r5@196
  int *v74; // r5@196
  void *v75; // r0@198
  void *v76; // r0@199
  void *v77; // r0@200
  int v78; // r5@202
  int *v79; // r5@202
  void *v80; // r0@204
  void *v81; // r0@205
  void *v82; // r0@206
  unsigned int *v83; // r2@207
  signed int v84; // r1@209
  int v85; // r4@211
  int *v86; // r4@211
  void *v87; // r0@213
  void *v88; // r0@214
  int v89; // r4@217
  web::json::value *v90; // r0@217
  int v91; // r4@217
  void *v92; // r0@217
  void *v93; // r0@218
  int v94; // r4@220
  int *v95; // r4@220
  void *v96; // r0@222
  void *v97; // r0@223
  void *v98; // r0@224
  int v99; // r4@225
  int *v100; // r4@225
  void *v101; // r0@227
  void *v102; // r0@228
  void *v103; // r0@229
  int *v104; // r0@230
  void *v105; // r0@230
  int *v106; // r4@231
  void *v107; // r0@233
  int *v108; // r4@235
  void *v109; // r0@237
  int *v110; // r4@239
  void *v111; // r0@241
  int v112; // r4@242
  void *v113; // r0@242
  int v114; // r4@243
  void *v115; // r0@243
  int v116; // r4@244
  void *v117; // r0@244
  int v118; // r4@245
  void *v119; // r0@245
  void *v120; // r0@246
  int v121; // r4@247
  void *v122; // r0@247
  void *v123; // r0@248
  __int64 v124; // r0@249
  int v125; // r4@249
  unsigned int *v126; // r1@250
  unsigned int v127; // r0@252
  unsigned int *v128; // r5@256
  unsigned int v129; // r0@258
  int v130; // r4@263
  unsigned int *v131; // r1@264
  unsigned int v132; // r0@266
  unsigned int *v133; // r5@270
  unsigned int v134; // r0@272
  __int64 v135; // r0@278
  int v136; // r4@278
  unsigned int *v137; // r1@279
  unsigned int v138; // r0@281
  unsigned int *v139; // r5@285
  unsigned int v140; // r0@287
  int v141; // r4@292
  unsigned int *v142; // r1@293
  unsigned int v143; // r0@295
  unsigned int *v144; // r5@299
  unsigned int v145; // r0@301
  int v146; // r4@306
  unsigned int *v147; // r1@307
  unsigned int v148; // r0@309
  unsigned int *v149; // r5@313
  unsigned int v150; // r0@315
  int v151; // r4@320
  unsigned int *v152; // r1@321
  unsigned int v153; // r0@323
  unsigned int *v154; // r5@327
  unsigned int v155; // r0@329
  unsigned __int64 v156; // r4@336
  void *v157; // r0@346
  unsigned int *v158; // r2@348
  signed int v159; // r1@350
  unsigned int *v160; // r2@356
  signed int v161; // r1@358
  unsigned int *v162; // r2@360
  signed int v163; // r1@362
  unsigned int *v164; // r2@364
  signed int v165; // r1@366
  unsigned int *v166; // r2@368
  signed int v167; // r1@370
  unsigned int *v168; // r2@372
  signed int v169; // r1@374
  unsigned int *v170; // r2@376
  signed int v171; // r1@378
  unsigned int *v172; // r2@380
  signed int v173; // r1@382
  unsigned int *v174; // r2@384
  signed int v175; // r1@386
  unsigned int *v176; // r2@388
  signed int v177; // r1@390
  unsigned int *v178; // r2@392
  signed int v179; // r1@394
  unsigned int *v180; // r2@396
  signed int v181; // r1@398
  unsigned int *v182; // r2@400
  signed int v183; // r1@402
  unsigned int *v184; // r2@404
  signed int v185; // r1@406
  unsigned int *v186; // r2@408
  signed int v187; // r1@410
  unsigned int *v188; // r2@412
  signed int v189; // r1@414
  unsigned int *v190; // r2@416
  signed int v191; // r1@418
  unsigned int *v192; // r2@420
  signed int v193; // r1@422
  unsigned int *v194; // r2@424
  signed int v195; // r1@426
  unsigned int *v196; // r2@428
  signed int v197; // r1@430
  unsigned int *v198; // r2@432
  signed int v199; // r1@434
  unsigned int *v200; // r2@436
  signed int v201; // r1@438
  unsigned int *v202; // r2@440
  signed int v203; // r1@442
  unsigned int *v204; // r2@483
  signed int v205; // r1@485
  unsigned int *v206; // r2@487
  signed int v207; // r1@489
  unsigned int *v208; // r2@491
  signed int v209; // r1@493
  unsigned int *v210; // r2@523
  signed int v211; // r1@525
  unsigned int *v212; // r2@527
  signed int v213; // r1@529
  unsigned int *v214; // r2@531
  signed int v215; // r1@533
  unsigned int *v216; // r2@554
  signed int v217; // r1@556
  unsigned int *v218; // r2@558
  signed int v219; // r1@560
  int v220; // [sp+10h] [bp-268h]@277
  int v221; // [sp+14h] [bp-264h]@277
  char v222; // [sp+18h] [bp-260h]@277
  int v223; // [sp+1Ch] [bp-25Ch]@278
  int v224; // [sp+20h] [bp-258h]@249
  char v225; // [sp+24h] [bp-254h]@249
  int v226; // [sp+28h] [bp-250h]@249
  int v227; // [sp+2Ch] [bp-24Ch]@247
  int v228; // [sp+30h] [bp-248h]@247
  int v229; // [sp+34h] [bp-244h]@247
  int v230; // [sp+54h] [bp-224h]@245
  int v231; // [sp+58h] [bp-220h]@245
  int v232; // [sp+5Ch] [bp-21Ch]@244
  int v233; // [sp+64h] [bp-214h]@243
  int v234; // [sp+6Ch] [bp-20Ch]@242
  int v235; // [sp+70h] [bp-208h]@242
  int v236; // [sp+74h] [bp-204h]@277
  int v237; // [sp+78h] [bp-200h]@239
  int v238; // [sp+80h] [bp-1F8h]@239
  int v239; // [sp+84h] [bp-1F4h]@235
  int v240; // [sp+8Ch] [bp-1ECh]@235
  int v241; // [sp+90h] [bp-1E8h]@231
  int v242; // [sp+98h] [bp-1E0h]@231
  int v243; // [sp+A0h] [bp-1D8h]@230
  int v244; // [sp+A4h] [bp-1D4h]@230
  int v245; // [sp+A8h] [bp-1D0h]@225
  int v246; // [sp+ACh] [bp-1CCh]@225
  int v247; // [sp+B4h] [bp-1C4h]@225
  int v248; // [sp+BCh] [bp-1BCh]@225
  unsigned __int64 v249; // [sp+C0h] [bp-1B8h]@220
  int v250; // [sp+C8h] [bp-1B0h]@220
  int v251; // [sp+CCh] [bp-1ACh]@220
  int v252; // [sp+D4h] [bp-1A4h]@220
  int v253; // [sp+DCh] [bp-19Ch]@220
  int v254; // [sp+E4h] [bp-194h]@217
  int v255; // [sp+ECh] [bp-18Ch]@217
  unsigned __int64 v256; // [sp+F0h] [bp-188h]@211
  int v257; // [sp+FCh] [bp-17Ch]@211
  int v258; // [sp+100h] [bp-178h]@211
  int v259; // [sp+108h] [bp-170h]@211
  int v260; // [sp+110h] [bp-168h]@211
  int v261; // [sp+114h] [bp-164h]@202
  int v262; // [sp+118h] [bp-160h]@202
  int v263; // [sp+120h] [bp-158h]@202
  int v264; // [sp+128h] [bp-150h]@202
  int v265; // [sp+12Ch] [bp-14Ch]@196
  int v266; // [sp+130h] [bp-148h]@196
  int v267; // [sp+138h] [bp-140h]@196
  int v268; // [sp+140h] [bp-138h]@196
  char *v269; // [sp+144h] [bp-134h]@178
  char *v270; // [sp+148h] [bp-130h]@180
  int v271; // [sp+150h] [bp-128h]@178
  int v272; // [sp+158h] [bp-120h]@178
  int v273; // [sp+15Ch] [bp-11Ch]@175
  int v274; // [sp+160h] [bp-118h]@175
  unsigned __int64 v275; // [sp+164h] [bp-114h]@175
  int v276; // [sp+16Ch] [bp-10Ch]@175
  char *v277; // [sp+170h] [bp-108h]@157
  char *v278; // [sp+174h] [bp-104h]@159
  int v279; // [sp+17Ch] [bp-FCh]@157
  int v280; // [sp+184h] [bp-F4h]@157
  int v281; // [sp+188h] [bp-F0h]@142
  int v282; // [sp+18Ch] [bp-ECh]@150
  _DWORD *v283; // [sp+190h] [bp-E8h]@141
  _DWORD *v284; // [sp+194h] [bp-E4h]@141
  _DWORD *v285; // [sp+198h] [bp-E0h]@141
  char *v286; // [sp+19Ch] [bp-DCh]@130
  char *v287; // [sp+1A0h] [bp-D8h]@132
  int v288; // [sp+1A8h] [bp-D0h]@130
  int v289; // [sp+1B0h] [bp-C8h]@130
  int v290; // [sp+1B4h] [bp-C4h]@27
  int v291; // [sp+1B8h] [bp-C0h]@27
  int v292; // [sp+1BCh] [bp-BCh]@19
  int v293; // [sp+1C0h] [bp-B8h]@19
  unsigned __int64 v294; // [sp+1C4h] [bp-B4h]@18
  int v295; // [sp+1CCh] [bp-ACh]@18
  int v296; // [sp+1D0h] [bp-A8h]@14
  int v297; // [sp+1D4h] [bp-A4h]@14
  int v298; // [sp+1DCh] [bp-9Ch]@14
  int v299; // [sp+1E4h] [bp-94h]@10
  int v300; // [sp+1E8h] [bp-90h]@10
  int v301; // [sp+1F0h] [bp-88h]@10
  int v302; // [sp+1F4h] [bp-84h]@10
  int v303; // [sp+1F8h] [bp-80h]@4
  int v304; // [sp+1FCh] [bp-7Ch]@4
  int v305; // [sp+200h] [bp-78h]@4
  int v306; // [sp+204h] [bp-74h]@4
  char v307; // [sp+20Ch] [bp-6Ch]@4
  int v308; // [sp+210h] [bp-68h]@4
  void *ptr; // [sp+214h] [bp-64h]@4
  int v310; // [sp+218h] [bp-60h]@4
  int v311; // [sp+21Ch] [bp-5Ch]@4
  __int16 v312; // [sp+220h] [bp-58h]@4
  char v313; // [sp+228h] [bp-50h]@4
  int v314; // [sp+22Ch] [bp-4Ch]@5
  int v315; // [sp+230h] [bp-48h]@2
  int v316; // [sp+234h] [bp-44h]@1
  int v317; // [sp+23Ch] [bp-3Ch]@1
  int v318; // [sp+240h] [bp-38h]@4
  int v319; // [sp+244h] [bp-34h]@4
  char v320; // [sp+248h] [bp-30h]@249
  char v321; // [sp+24Ch] [bp-2Ch]@242

  v1 = this;
  sub_119C884((void **)&v317, "/v1/catalog/items/search/");
  v2 = (int *)((char *)v1 + 88);
  SearchQuery::generateCachedFileName((SearchQuery *)&v316, (int)v1 + 88, v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 16,
    &v316);
  v4 = (void *)(v316 - 12);
  if ( (int *)(v316 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v316 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = *(void (__fastcall **)(SearchCatalogRequest *, const void **))(*(_DWORD *)v1 + 32);
  v6 = CachedRequest::_readMetadataFromCache(v1);
  v5(v1, v6);
  v7 = *((_DWORD *)v1 + 45);
  Common::getGameSemVerString((Common *)&v315);
  v8 = SearchCatalogRequest::_tryUseCachedResponse(
         (int)v1,
         v7,
         (const void **)v1 + 22,
         (const void **)v1 + 21,
         (const void **)&v315);
  v9 = (void *)(v315 - 12);
  if ( (int *)(v315 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v315 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  if ( v8 == 1 )
    pplx::get_ambient_scheduler((pplx *)&v318);
    v303 = v318;
    v304 = v319;
    v305 = v318;
    v306 = 0;
    v307 = 0;
    v312 = 0;
    v310 = 0;
    v311 = 0;
    v308 = 0;
    ptr = 0;
    pplx::task_from_result((pplx *)&v313, (const pplx::task_options *)&v303);
    if ( (char *)v1 + 44 != &v313 )
      v10 = *(_QWORD *)&v313;
      *(_DWORD *)&v313 = 0;
      v314 = 0;
      *((_DWORD *)v1 + 11) = v10;
      v11 = *((_DWORD *)v1 + 12);
      *((_DWORD *)v1 + 12) = HIDWORD(v10);
      if ( v11 )
      {
        v12 = (unsigned int *)(v11 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 == 1 )
          v24 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      }
    v30 = v314;
    if ( v314 )
      v31 = (unsigned int *)(v314 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
      else
        v32 = (*v31)--;
      if ( v32 == 1 )
        v33 = (unsigned int *)(v30 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
    if ( ptr )
      operator delete(ptr);
    v35 = v306;
    if ( v306 )
      v36 = (unsigned int *)(v306 + 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      if ( v37 == 1 )
        (*(void (**)(void))(*(_DWORD *)v35 + 8))();
    v38 = v304;
    if ( v304 )
      v39 = (unsigned int *)(v304 + 4);
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
          v43 = *(void (__fastcall **)(int))(*(_DWORD *)v38 + 12);
          v44 = v38;
LABEL_345:
          v43(v44);
          goto LABEL_346;
    goto LABEL_346;
  web::json::value::value((web::json::value *)&v302);
  sub_119C884((void **)&v301, "titleId");
  v14 = (int *)web::json::value::operator[]((int)&v302);
  sub_119C884((void **)&v299, "896928775");
  web::json::value::string(&v300, &v299);
  web::json::value::operator=(v14, &v300);
  if ( v300 )
    (*(void (**)(void))(*(_DWORD *)v300 + 96))();
  v300 = 0;
  v15 = (void *)(v299 - 12);
  if ( (int *)(v299 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v299 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v301 - 12);
  if ( (int *)(v301 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v301 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  sub_119C884((void **)&v298, "contentType");
  v17 = (int *)web::json::value::operator[]((int)&v302);
  v18 = (int *)((char *)v1 + 92);
  utility::conversions::to_string_t(&v296, (int *)v1 + 23);
  web::json::value::string(&v297, &v296);
  web::json::value::operator=(v17, &v297);
  if ( v297 )
    (*(void (**)(void))(*(_DWORD *)v297 + 96))();
  v297 = 0;
  v19 = (void *)(v296 - 12);
  if ( (int *)(v296 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v296 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = (void *)(v298 - 12);
  if ( (int *)(v298 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v298 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v294 = 0LL;
  v295 = 0;
  if ( *(_DWORD *)(*((_DWORD *)v1 + 20) - 12) )
    utility::conversions::to_string_t(&v292, (int *)v1 + 20);
    web::json::value::string(&v293, &v292);
    std::vector<web::json::value,std::allocator<web::json::value>>::_M_emplace_back_aux<web::json::value>(&v294, &v293);
    if ( v293 )
      (*(void (**)(void))(*(_DWORD *)v293 + 96))();
    v293 = 0;
    v21 = (void *)(v292 - 12);
    if ( (int *)(v292 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v292 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        goto LABEL_127;
      goto LABEL_126;
  else if ( *(_DWORD *)(*((_DWORD *)v1 + 24) - 12) )
    utility::conversions::to_string_t(&v290, (int *)v1 + 24);
    web::json::value::string(&v291, &v290);
    std::vector<web::json::value,std::allocator<web::json::value>>::_M_emplace_back_aux<web::json::value>(&v294, &v291);
    if ( v291 )
      (*(void (**)(void))(*(_DWORD *)v291 + 96))();
    v291 = 0;
    v21 = (void *)(v290 - 12);
    if ( (int *)(v290 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v290 - 4);
LABEL_127:
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
        goto LABEL_129;
LABEL_126:
      v23 = (*v22)--;
      goto LABEL_127;
LABEL_129:
  if ( (_DWORD)v294 != HIDWORD(v294) )
    sub_119C884((void **)&v289, "platforms");
    v53 = (int *)web::json::value::operator[]((int)&v302);
    std::vector<web::json::value,std::allocator<web::json::value>>::vector((int)&v286, (__int64 *)&v294);
    web::json::value::array(&v288, (int)&v286);
    web::json::value::operator=(v53, &v288);
    if ( v288 )
      (*(void (**)(void))(*(_DWORD *)v288 + 96))();
    v288 = 0;
    v55 = v287;
    v54 = v286;
    if ( v286 != v287 )
        if ( *(_DWORD *)v54 )
          (*(void (**)(void))(**(_DWORD **)v54 + 96))();
        *(_DWORD *)v54 = 0;
        v54 += 4;
      while ( v55 != v54 );
      v54 = v286;
    if ( v54 )
      operator delete(v54);
    v56 = (void *)(v289 - 12);
    if ( (int *)(v289 - 12) != &dword_28898C0 )
      v160 = (unsigned int *)(v289 - 4);
          v161 = __ldrex(v160);
        while ( __strex(v161 - 1, v160) );
        v161 = (*v160)--;
      if ( v161 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v56);
  *(_QWORD *)&v57 = *(_QWORD *)((char *)v1 + 100);
  if ( v57 != v58 )
    v283 = 0;
    v284 = 0;
    v285 = 0;
    do
      utility::conversions::to_string_t(&v281, v57);
      web::json::value::string(&v282, &v281);
      if ( v284 == v285 )
        std::vector<web::json::value,std::allocator<web::json::value>>::_M_emplace_back_aux<web::json::value>(
          (unsigned __int64 *)&v283,
          &v282);
        v284 = web::json::value::value(v284, &v282) + 1;
      if ( v282 )
        (*(void (**)(void))(*(_DWORD *)v282 + 96))();
      v282 = 0;
      v61 = (void *)(v281 - 12);
      if ( (int *)(v281 - 12) != &dword_28898C0 )
        v59 = (unsigned int *)(v281 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v61);
      ++v57;
    while ( v57 != v58 );
    sub_119C884((void **)&v280, "tags");
    v2 = (int *)((char *)v1 + 88);
    v18 = (int *)((char *)v1 + 92);
    v62 = (int *)web::json::value::operator[]((int)&v302);
    std::vector<web::json::value,std::allocator<web::json::value>>::vector((int)&v277, (__int64 *)&v283);
    web::json::value::array(&v279, (int)&v277);
    web::json::value::operator=(v62, &v279);
    if ( v279 )
      (*(void (**)(void))(*(_DWORD *)v279 + 96))();
    v279 = 0;
    v64 = v278;
    v63 = v277;
    if ( v277 != v278 )
        if ( *(_DWORD *)v63 )
          (*(void (**)(void))(**(_DWORD **)v63 + 96))();
        *(_DWORD *)v63 = 0;
        v63 += 4;
      while ( v64 != v63 );
      v63 = v277;
    if ( v63 )
      operator delete(v63);
    v65 = (void *)(v280 - 12);
    if ( (int *)(v280 - 12) != &dword_28898C0 )
      v208 = (unsigned int *)(v280 - 4);
          v209 = __ldrex(v208);
        while ( __strex(v209 - 1, v208) );
        v209 = (*v208)--;
      if ( v209 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v65);
    v66 = *(_QWORD *)&v283;
    if ( v283 != v284 )
        if ( *(_DWORD *)v66 )
          (*(void (**)(void))(**(_DWORD **)v66 + 96))();
        *(_DWORD *)v66 = 0;
        LODWORD(v66) = v66 + 4;
      while ( HIDWORD(v66) != (_DWORD)v66 );
      LODWORD(v66) = v283;
    if ( (_DWORD)v66 )
      operator delete((void *)v66);
  if ( *(_DWORD *)(*((_DWORD *)v1 + 28) - 12) )
    v275 = 0LL;
    v276 = 0;
    utility::conversions::to_string_t(&v273, (int *)v1 + 28);
    web::json::value::string(&v274, &v273);
    std::vector<web::json::value,std::allocator<web::json::value>>::_M_emplace_back_aux<web::json::value>(&v275, &v274);
    if ( v274 )
      (*(void (**)(void))(*(_DWORD *)v274 + 96))();
    v274 = 0;
    v67 = (void *)(v273 - 12);
    if ( (int *)(v273 - 12) != &dword_28898C0 )
      v180 = (unsigned int *)(v273 - 4);
          v181 = __ldrex(v180);
        while ( __strex(v181 - 1, v180) );
        v181 = (*v180)--;
      if ( v181 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v67);
    sub_119C884((void **)&v272, "creatorIds");
    v68 = (int *)web::json::value::operator[]((int)&v302);
    std::vector<web::json::value,std::allocator<web::json::value>>::vector((int)&v269, (__int64 *)&v275);
    web::json::value::array(&v271, (int)&v269);
    web::json::value::operator=(v68, &v271);
    if ( v271 )
      (*(void (**)(void))(*(_DWORD *)v271 + 96))();
    v271 = 0;
    v70 = v270;
    v69 = v269;
    if ( v269 != v270 )
        if ( *(_DWORD *)v69 )
          (*(void (**)(void))(**(_DWORD **)v69 + 96))();
        *(_DWORD *)v69 = 0;
        v69 += 4;
      while ( v70 != v69 );
      v69 = v269;
    if ( v69 )
      operator delete(v69);
    v71 = (void *)(v272 - 12);
    if ( (int *)(v272 - 12) != &dword_28898C0 )
      v182 = (unsigned int *)(v272 - 4);
          v183 = __ldrex(v182);
        while ( __strex(v183 - 1, v182) );
        v183 = (*v182)--;
      if ( v183 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v71);
    v72 = v275;
    if ( (_DWORD)v275 != HIDWORD(v275) )
        if ( *(_DWORD *)v72 )
          (*(void (**)(void))(**(_DWORD **)v72 + 96))();
        *(_DWORD *)v72 = 0;
        LODWORD(v72) = v72 + 4;
      while ( HIDWORD(v72) != (_DWORD)v72 );
      LODWORD(v72) = v275;
    if ( (_DWORD)v72 )
      operator delete((void *)v72);
  if ( *(_DWORD *)(*((_DWORD *)v1 + 29) - 12) )
    sub_119C884((void **)&v268, "creationDate");
    v73 = web::json::value::operator[]((int)&v302);
    sub_119C884((void **)&v267, "Start");
    v74 = (int *)web::json::value::operator[](v73);
    utility::conversions::to_string_t(&v265, (int *)v1 + 29);
    web::json::value::string(&v266, &v265);
    web::json::value::operator=(v74, &v266);
    if ( v266 )
      (*(void (**)(void))(*(_DWORD *)v266 + 96))();
    v266 = 0;
    v75 = (void *)(v265 - 12);
    if ( (int *)(v265 - 12) != &dword_28898C0 )
      v184 = (unsigned int *)(v265 - 4);
          v185 = __ldrex(v184);
        while ( __strex(v185 - 1, v184) );
        v185 = (*v184)--;
      if ( v185 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v75);
    v76 = (void *)(v267 - 12);
    if ( (int *)(v267 - 12) != &dword_28898C0 )
      v186 = (unsigned int *)(v267 - 4);
          v187 = __ldrex(v186);
        while ( __strex(v187 - 1, v186) );
        v187 = (*v186)--;
      if ( v187 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v76);
    v77 = (void *)(v268 - 12);
    if ( (int *)(v268 - 12) != &dword_28898C0 )
      v188 = (unsigned int *)(v268 - 4);
          v189 = __ldrex(v188);
        while ( __strex(v189 - 1, v188) );
        v189 = (*v188)--;
      if ( v189 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v77);
    if ( *(_DWORD *)(*((_DWORD *)v1 + 30) - 12) )
      sub_119C884((void **)&v264, "creationDate");
      v78 = web::json::value::operator[]((int)&v302);
      sub_119C884((void **)&v263, "End");
      v79 = (int *)web::json::value::operator[](v78);
      utility::conversions::to_string_t(&v261, (int *)v1 + 30);
      web::json::value::string(&v262, &v261);
      web::json::value::operator=(v79, &v262);
      if ( v262 )
        (*(void (**)(void))(*(_DWORD *)v262 + 96))();
      v262 = 0;
      v80 = (void *)(v261 - 12);
      if ( (int *)(v261 - 12) != &dword_28898C0 )
        v204 = (unsigned int *)(v261 - 4);
            v205 = __ldrex(v204);
          while ( __strex(v205 - 1, v204) );
          v205 = (*v204)--;
        if ( v205 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v80);
      v81 = (void *)(v263 - 12);
      if ( (int *)(v263 - 12) != &dword_28898C0 )
        v206 = (unsigned int *)(v263 - 4);
            v207 = __ldrex(v206);
          while ( __strex(v207 - 1, v206) );
          v207 = (*v206)--;
        if ( v207 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v81);
      v82 = (void *)(v264 - 12);
      if ( (int *)(v264 - 12) != &dword_28898C0 )
        v83 = (unsigned int *)(v264 - 4);
            v84 = __ldrex(v83);
          while ( __strex(v84 - 1, v83) );
          goto LABEL_567;
        goto LABEL_566;
      sub_119C884((void **)&v260, "creationDate");
      v85 = web::json::value::operator[]((int)&v302);
      sub_119C884((void **)&v259, "End");
      v86 = (int *)web::json::value::operator[](v85);
      utility::datetime::utc_now((utility::datetime *)&v256);
      utility::datetime::to_string((void **)&v257, &v256, 1);
      web::json::value::string(&v258, &v257);
      web::json::value::operator=(v86, &v258);
      if ( v258 )
        (*(void (**)(void))(*(_DWORD *)v258 + 96))();
      v258 = 0;
      v87 = (void *)(v257 - 12);
      if ( (int *)(v257 - 12) != &dword_28898C0 )
        v216 = (unsigned int *)(v257 - 4);
            v217 = __ldrex(v216);
          while ( __strex(v217 - 1, v216) );
          v217 = (*v216)--;
        if ( v217 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v87);
      v88 = (void *)(v259 - 12);
      if ( (int *)(v259 - 12) != &dword_28898C0 )
        v218 = (unsigned int *)(v259 - 4);
            v219 = __ldrex(v218);
          while ( __strex(v219 - 1, v218) );
          v219 = (*v218)--;
        if ( v219 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v88);
      v82 = (void *)(v260 - 12);
      if ( (int *)(v260 - 12) != &dword_28898C0 )
        v83 = (unsigned int *)(v260 - 4);
LABEL_567:
          if ( v84 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v82);
          goto LABEL_216;
LABEL_566:
        v84 = (*v83)--;
        goto LABEL_567;
LABEL_216:
  if ( *(_DWORD *)(*((_DWORD *)v1 + 19) - 12) )
    sub_119C884((void **)&v255, "creationDate");
    v89 = web::json::value::operator[]((int)&v302);
    sub_119C884((void **)&v254, "Start");
    v90 = (web::json::value *)web::json::value::operator[](v89);
    v91 = web::json::value::type(v90);
    v92 = (void *)(v254 - 12);
    if ( (int *)(v254 - 12) != &dword_28898C0 )
      v190 = (unsigned int *)(v254 - 4);
          v191 = __ldrex(v190);
        while ( __strex(v191 - 1, v190) );
        v191 = (*v190)--;
      if ( v191 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v92);
    v93 = (void *)(v255 - 12);
    if ( (int *)(v255 - 12) != &dword_28898C0 )
      v192 = (unsigned int *)(v255 - 4);
          v193 = __ldrex(v192);
        while ( __strex(v193 - 1, v192) );
        v193 = (*v192)--;
      if ( v193 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v93);
    if ( v91 == 5 )
      sub_119C884((void **)&v253, "creationDate");
      v94 = web::json::value::operator[]((int)&v302);
      sub_119C884((void **)&v252, "Start");
      v95 = (int *)web::json::value::operator[](v94);
      v249 = 0LL;
      utility::datetime::to_string((void **)&v250, &v249, 1);
      web::json::value::string(&v251, &v250);
      web::json::value::operator=(v95, &v251);
      if ( v251 )
        (*(void (**)(void))(*(_DWORD *)v251 + 96))();
      v251 = 0;
      v96 = (void *)(v250 - 12);
      if ( (int *)(v250 - 12) != &dword_28898C0 )
        v210 = (unsigned int *)(v250 - 4);
            v211 = __ldrex(v210);
          while ( __strex(v211 - 1, v210) );
          v211 = (*v210)--;
        if ( v211 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v96);
      v97 = (void *)(v252 - 12);
      if ( (int *)(v252 - 12) != &dword_28898C0 )
        v212 = (unsigned int *)(v252 - 4);
            v213 = __ldrex(v212);
          while ( __strex(v213 - 1, v212) );
          v213 = (*v212)--;
        if ( v213 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v97);
      v98 = (void *)(v253 - 12);
      if ( (int *)(v253 - 12) != &dword_28898C0 )
        v214 = (unsigned int *)(v253 - 4);
            v215 = __ldrex(v214);
          while ( __strex(v215 - 1, v214) );
          v215 = (*v214)--;
        if ( v215 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v98);
    sub_119C884((void **)&v248, "creationDate");
    v99 = web::json::value::operator[]((int)&v302);
    sub_119C884((void **)&v247, "End");
    v100 = (int *)web::json::value::operator[](v99);
    utility::conversions::to_string_t(&v245, (int *)v1 + 19);
    web::json::value::string(&v246, &v245);
    web::json::value::operator=(v100, &v246);
    if ( v246 )
      (*(void (**)(void))(*(_DWORD *)v246 + 96))();
    v246 = 0;
    v101 = (void *)(v245 - 12);
    if ( (int *)(v245 - 12) != &dword_28898C0 )
      v194 = (unsigned int *)(v245 - 4);
          v195 = __ldrex(v194);
        while ( __strex(v195 - 1, v194) );
        v195 = (*v194)--;
      if ( v195 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v101);
    v102 = (void *)(v247 - 12);
    if ( (int *)(v247 - 12) != &dword_28898C0 )
      v196 = (unsigned int *)(v247 - 4);
          v197 = __ldrex(v196);
        while ( __strex(v197 - 1, v196) );
        v197 = (*v196)--;
      if ( v197 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v102);
    v103 = (void *)(v248 - 12);
    if ( (int *)(v248 - 12) != &dword_28898C0 )
      v198 = (unsigned int *)(v248 - 4);
          v199 = __ldrex(v198);
        while ( __strex(v199 - 1, v198) );
        v199 = (*v198)--;
      if ( v199 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v103);
  web::json::value::value((web::json::value *)&v244);
  sub_119C884((void **)&v243, "filter");
  v104 = (int *)web::json::value::operator[]((int)&v244);
  web::json::value::operator=(v104, &v302);
  v105 = (void *)(v243 - 12);
  if ( (int *)(v243 - 12) != &dword_28898C0 )
    v162 = (unsigned int *)(v243 - 4);
        v163 = __ldrex(v162);
      while ( __strex(v163 - 1, v162) );
      v163 = (*v162)--;
    if ( v163 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v105);
  sub_119C884((void **)&v242, "count");
  v106 = (int *)web::json::value::operator[]((int)&v244);
  web::json::value::boolean((web::json::value *)&v241, 1);
  web::json::value::operator=(v106, &v241);
  if ( v241 )
    (*(void (**)(void))(*(_DWORD *)v241 + 96))();
  v241 = 0;
  v107 = (void *)(v242 - 12);
  if ( (int *)(v242 - 12) != &dword_28898C0 )
    v164 = (unsigned int *)(v242 - 4);
        v165 = __ldrex(v164);
      while ( __strex(v165 - 1, v164) );
      v165 = (*v164)--;
    if ( v165 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v107);
  if ( *((_DWORD *)v1 + 31) != -1 )
    sub_119C884((void **)&v240, "skip");
    v108 = (int *)web::json::value::operator[]((int)&v244);
    web::json::value::number((web::json::value *)&v239, *((_DWORD *)v1 + 31));
    web::json::value::operator=(v108, &v239);
    if ( v239 )
      (*(void (**)(void))(*(_DWORD *)v239 + 96))();
    v239 = 0;
    v109 = (void *)(v240 - 12);
    if ( (int *)(v240 - 12) != &dword_28898C0 )
      v200 = (unsigned int *)(v240 - 4);
          v201 = __ldrex(v200);
        while ( __strex(v201 - 1, v200) );
        v201 = (*v200)--;
      if ( v201 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v109);
  if ( *((_DWORD *)v1 + 32) != -1 )
    sub_119C884((void **)&v238, "top");
    v110 = (int *)web::json::value::operator[]((int)&v244);
    web::json::value::number((web::json::value *)&v237, *((_DWORD *)v1 + 32));
    web::json::value::operator=(v110, &v237);
    if ( v237 )
      (*(void (**)(void))(*(_DWORD *)v237 + 96))();
    v237 = 0;
    v111 = (void *)(v238 - 12);
    if ( (int *)(v238 - 12) != &dword_28898C0 )
      v202 = (unsigned int *)(v238 - 4);
          v203 = __ldrex(v202);
        while ( __strex(v203 - 1, v202) );
        v203 = (*v202)--;
      if ( v203 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v111);
  j__ZNSt12__shared_ptrI11RequestDataLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v235,
    (int)&v321,
    (int *)v1 + 18,
    (int *)&web::http::methods::POST);
  v112 = *(_DWORD *)(v235 + 12);
  sub_119C884((void **)&v234, "public");
  web::http::http_headers::set_cache_control(v112 + 20, &v234);
  v113 = (void *)(v234 - 12);
  if ( (int *)(v234 - 12) != &dword_28898C0 )
    v166 = (unsigned int *)(v234 - 4);
        v167 = __ldrex(v166);
      while ( __strex(v167 - 1, v166) );
      v167 = (*v166)--;
    if ( v167 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v113);
  v114 = *(_DWORD *)(v235 + 12);
  sub_119C884((void **)&v233, "application/json");
  web::http::http_headers::set_content_type(v114 + 20, &v233);
  v115 = (void *)(v233 - 12);
  if ( (int *)(v233 - 12) != &dword_28898C0 )
    v168 = (unsigned int *)(v233 - 4);
        v169 = __ldrex(v168);
      while ( __strex(v169 - 1, v168) );
      v169 = (*v168)--;
    if ( v169 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v115);
  v116 = *(_DWORD *)(v235 + 12);
  utility::conversions::to_string_t(&v232, v2);
  web::http::http_headers::add<std::string>(v116 + 20, (int *)&web::http::header_names::accept_language, &v232);
  v117 = (void *)(v232 - 12);
  if ( (int *)(v232 - 12) != &dword_28898C0 )
    v170 = (unsigned int *)(v232 - 4);
        v171 = __ldrex(v170);
      while ( __strex(v171 - 1, v170) );
      v171 = (*v170)--;
    if ( v171 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v117);
  v118 = v235;
  web::json::value::serialize((web::json::value *)&v231, (int)&v244);
  sub_119C884((void **)&v230, "application/json");
  web::http::http_request::set_body((int *)(v118 + 12), &v231, &v230);
  v119 = (void *)(v230 - 12);
  if ( (int *)(v230 - 12) != &dword_28898C0 )
    v172 = (unsigned int *)(v230 - 4);
        v173 = __ldrex(v172);
      while ( __strex(v173 - 1, v172) );
      v173 = (*v172)--;
    if ( v173 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v119);
  v120 = (void *)(v231 - 12);
  if ( (int *)(v231 - 12) != &dword_28898C0 )
    v174 = (unsigned int *)(v231 - 4);
        v175 = __ldrex(v174);
      while ( __strex(v175 - 1, v174) );
      v175 = (*v174)--;
    if ( v175 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v120);
  v121 = v235;
  utility::conversions::to_string_t(&v227, &v317);
  web::uri::uri((int)&v228, &v227);
  web::http::details::_http_request::set_request_uri(
    *(web::http::details::_http_request **)(v121 + 12),
    (const web::uri *)&v228);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v229);
  v122 = (void *)(v228 - 12);
  if ( (int *)(v228 - 12) != &dword_28898C0 )
    v176 = (unsigned int *)(v228 - 4);
        v177 = __ldrex(v176);
      while ( __strex(v177 - 1, v176) );
      v177 = (*v176)--;
    if ( v177 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v122);
  v123 = (void *)(v227 - 12);
  if ( (int *)(v227 - 12) != &dword_28898C0 )
    v178 = (unsigned int *)(v227 - 4);
        v179 = __ldrex(v178);
      while ( __strex(v179 - 1, v178) );
      v179 = (*v178)--;
    if ( v179 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v123);
  v224 = 0;
  std::__shared_ptr<RequestTelemetry,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RequestTelemetry>,RequestType,std::string const&>(
    (int)&v225,
    (int)&v320,
    &v224,
    v18);
  v124 = *(_QWORD *)&v225;
  *(_DWORD *)&v225 = 0;
  v226 = 0;
  *((_DWORD *)v1 + 13) = v124;
  v125 = *((_DWORD *)v1 + 14);
  *((_DWORD *)v1 + 14) = HIDWORD(v124);
  if ( v125 )
    v126 = (unsigned int *)(v125 + 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 == 1 )
      v128 = (unsigned int *)(v125 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v125 + 8))(v125);
          v129 = __ldrex(v128);
        while ( __strex(v129 - 1, v128) );
        v129 = (*v128)--;
      if ( v129 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v125 + 12))(v125);
  v130 = v226;
  if ( v226 )
    v131 = (unsigned int *)(v226 + 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 == 1 )
      v133 = (unsigned int *)(v130 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v130 + 8))(v130);
          v134 = __ldrex(v133);
        while ( __strex(v134 - 1, v133) );
        v134 = (*v133)--;
      if ( v134 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v130 + 12))(v130);
  v220 = v235;
  v221 = v236;
  v235 = 0;
  v236 = 0;
  CachedRequest::_sendRequest((int)&v222, (int)v1, (int)&v220);
  if ( (char *)v1 + 44 != &v222 )
    v135 = *(_QWORD *)&v222;
    *(_DWORD *)&v222 = 0;
    v223 = 0;
    *((_DWORD *)v1 + 11) = v135;
    v136 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v135);
    if ( v136 )
      v137 = (unsigned int *)(v136 + 4);
          v138 = __ldrex(v137);
        while ( __strex(v138 - 1, v137) );
        v138 = (*v137)--;
      if ( v138 == 1 )
        v139 = (unsigned int *)(v136 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v136 + 8))(v136);
            v140 = __ldrex(v139);
          while ( __strex(v140 - 1, v139) );
          v140 = (*v139)--;
        if ( v140 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v136 + 12))(v136);
  v141 = v223;
  if ( v223 )
    v142 = (unsigned int *)(v223 + 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 == 1 )
      v144 = (unsigned int *)(v141 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v141 + 8))(v141);
          v145 = __ldrex(v144);
        while ( __strex(v145 - 1, v144) );
        v145 = (*v144)--;
      if ( v145 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v141 + 12))(v141);
  v146 = v221;
  if ( v221 )
    v147 = (unsigned int *)(v221 + 4);
        v148 = __ldrex(v147);
      while ( __strex(v148 - 1, v147) );
      v148 = (*v147)--;
    if ( v148 == 1 )
      v149 = (unsigned int *)(v146 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v146 + 8))(v146);
          v150 = __ldrex(v149);
        while ( __strex(v150 - 1, v149) );
        v150 = (*v149)--;
      if ( v150 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v146 + 12))(v146);
  v151 = v236;
  if ( v236 )
    v152 = (unsigned int *)(v236 + 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 == 1 )
      v154 = (unsigned int *)(v151 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v151 + 8))(v151);
          v155 = __ldrex(v154);
        while ( __strex(v155 - 1, v154) );
        v155 = (*v154)--;
      if ( v155 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v151 + 12))(v151);
  if ( v244 )
    (*(void (**)(void))(*(_DWORD *)v244 + 96))();
  v156 = v294;
      if ( *(_DWORD *)v156 )
        (*(void (**)(void))(**(_DWORD **)v156 + 96))();
      *(_DWORD *)v156 = 0;
      LODWORD(v156) = v156 + 4;
    while ( HIDWORD(v156) != (_DWORD)v156 );
    LODWORD(v156) = v294;
  if ( (_DWORD)v156 )
    operator delete((void *)v156);
  v44 = v302;
  if ( v302 )
    v43 = *(void (__fastcall **)(int))(*(_DWORD *)v302 + 96);
    goto LABEL_345;
LABEL_346:
  v157 = (void *)(v317 - 12);
  if ( (int *)(v317 - 12) != &dword_28898C0 )
    v158 = (unsigned int *)(v317 - 4);
        v159 = __ldrex(v158);
      while ( __strex(v159 - 1, v158) );
      v159 = (*v158)--;
    if ( v159 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v157);
}


void __fastcall SearchCatalogRequest::send(SearchCatalogRequest *this)
{
  SearchCatalogRequest::send(this);
}


void __fastcall SearchCatalogRequest::~SearchCatalogRequest(SearchCatalogRequest *this)
{
  SearchCatalogRequest::~SearchCatalogRequest(this);
}


int __fastcall SearchCatalogRequest::onComplete(SearchCatalogRequest *this)
{
  SearchCatalogRequest *v1; // r4@1
  int result; // r0@1
  void (__fastcall *v3)(char *, char *, signed int); // r3@2

  v1 = this;
  result = *((_DWORD *)this + 35);
  if ( result )
  {
    result = (*((int (__fastcall **)(_DWORD, _DWORD))v1 + 36))((char *)v1 + 132, (char *)v1 + 148);
    v3 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 35);
    if ( v3 )
    {
      v3((char *)v1 + 132, (char *)v1 + 132, 3);
      result = 0;
      *((_DWORD *)v1 + 35) = 0;
      *((_DWORD *)v1 + 36) = 0;
    }
  }
  return result;
}


void __fastcall SearchCatalogRequest::~SearchCatalogRequest(SearchCatalogRequest *this)
{
  SearchCatalogRequest *v1; // r0@1

  v1 = SearchCatalogRequest::~SearchCatalogRequest(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall SearchCatalogRequest::_createMetadata(SearchCatalogRequest *this, int a2)
{
  int v2; // r5@1
  SearchCatalogRequest *v3; // r4@1
  int *v4; // r6@1
  void *v5; // r0@3
  void *v6; // r0@4
  int *v7; // r6@5
  void *v8; // r0@7
  void *v9; // r0@8
  int *v10; // r6@9
  void *v11; // r0@11
  void *v12; // r0@12
  int *v13; // r5@13
  void *v14; // r0@15
  void *v15; // r0@16
  void *v16; // r0@17
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
  unsigned int *v31; // r2@47
  signed int v32; // r1@49
  unsigned int *v33; // r2@51
  signed int v34; // r1@53
  int v35; // [sp+4h] [bp-64h]@13
  int v36; // [sp+8h] [bp-60h]@13
  int v37; // [sp+Ch] [bp-5Ch]@13
  int v38; // [sp+14h] [bp-54h]@13
  int v39; // [sp+18h] [bp-50h]@9
  int v40; // [sp+1Ch] [bp-4Ch]@9
  int v41; // [sp+24h] [bp-44h]@9
  int v42; // [sp+28h] [bp-40h]@5
  int v43; // [sp+2Ch] [bp-3Ch]@5
  int v44; // [sp+34h] [bp-34h]@5
  unsigned __int64 v45; // [sp+38h] [bp-30h]@1
  int v46; // [sp+44h] [bp-24h]@1
  int v47; // [sp+48h] [bp-20h]@1
  int v48; // [sp+50h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  web::json::value::object(this, 0);
  sub_119C884((void **)&v48, "cacheWriteDate");
  v4 = (int *)web::json::value::operator[]((int)v3);
  utility::datetime::utc_now((utility::datetime *)&v45);
  utility::datetime::to_string((void **)&v46, &v45, 1);
  web::json::value::value(&v47, &v46);
  web::json::value::operator=(v4, &v47);
  if ( v47 )
    (*(void (**)(void))(*(_DWORD *)v47 + 96))();
  v47 = 0;
  v5 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v48 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v44, "acceptLanguage");
  v7 = (int *)web::json::value::operator[]((int)v3);
  utility::conversions::to_string_t(&v42, (int *)(v2 + 88));
  web::json::value::value(&v43, &v42);
  web::json::value::operator=(v7, &v43);
  if ( v43 )
    (*(void (**)(void))(*(_DWORD *)v43 + 96))();
  v43 = 0;
  v8 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v42 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v44 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v41, "requestedBy");
  v10 = (int *)web::json::value::operator[]((int)v3);
  utility::conversions::to_string_t(&v39, (int *)(v2 + 84));
  web::json::value::value(&v40, &v39);
  web::json::value::operator=(v10, &v40);
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 96))();
  v40 = 0;
  v11 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v39 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v41 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v38, "clientVersion");
  v13 = (int *)web::json::value::operator[]((int)v3);
  Common::getGameSemVerString((Common *)&v35);
  utility::conversions::to_string_t(&v36, &v35);
  web::json::value::value(&v37, &v36);
  web::json::value::operator=(v13, &v37);
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 96))();
  v37 = 0;
  v14 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v35 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v38 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
}
