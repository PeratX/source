

void __fastcall RealmsFileUploader::UploadResult::_parse(int a1, int *a2, int *a3)
{
  int *v3; // r6@1
  int *v4; // r5@1
  int v5; // r4@1
  void *v6; // r0@1
  void *v7; // r0@2
  signed int v8; // r0@13
  void *v9; // r0@15
  void *v10; // r0@16
  void *v11; // r0@17
  void *v12; // r0@19
  void *v13; // r0@20
  void *v14; // r0@21
  unsigned int *v15; // r2@24
  signed int v16; // r1@26
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  unsigned int *v19; // r2@44
  signed int v20; // r1@46
  unsigned int *v21; // r2@48
  signed int v22; // r1@50
  unsigned int *v23; // r2@52
  signed int v24; // r1@54
  void *v25; // r0@58
  unsigned int *v26; // r2@60
  signed int v27; // r1@62
  unsigned int *v28; // r2@68
  signed int v29; // r1@70
  unsigned int *v30; // r2@72
  signed int v31; // r1@74
  unsigned int *v32; // r2@76
  signed int v33; // r1@78
  int v34; // [sp+4h] [bp-4Ch]@19
  int v35; // [sp+Ch] [bp-44h]@19
  int v36; // [sp+10h] [bp-40h]@19
  int v37; // [sp+18h] [bp-38h]@15
  int v38; // [sp+20h] [bp-30h]@15
  int v39; // [sp+24h] [bp-2Ch]@15
  int v40; // [sp+2Ch] [bp-24h]@1
  int v41; // [sp+34h] [bp-1Ch]@1
  int v42; // [sp+38h] [bp-18h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v41, "event:");
  sub_21E94B4((void **)&v40, "\n");
  RealmsFileUploader::UploadResult::getProperty(&v42, v3, (_BYTE **)&v41, (_BYTE **)&v40);
  v6 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v40 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v41 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  if ( sub_21E7D6C((const void **)&v42, "UPLOAD_FAILED") )
    if ( sub_21E7D6C((const void **)&v42, "VALIDATION_STARTED") )
      if ( sub_21E7D6C((const void **)&v42, "VALIDATION_PROGRESS") )
      {
        if ( sub_21E7D6C((const void **)&v42, "VALIDATION_FAILED") )
        {
          if ( sub_21E7D6C((const void **)&v42, "VALIDATION_CANCELLED") )
          {
            if ( sub_21E7D6C((const void **)&v42, "VALIDATION_SUCCEEDED") )
            {
              if ( sub_21E7D6C((const void **)&v42, "ARCHIVING_STARTED") )
              {
                if ( sub_21E7D6C((const void **)&v42, "ARCHIVING_FAILED") )
                {
                  if ( sub_21E7D6C((const void **)&v42, "ARCHIVING_SUCCEEDED") )
                  {
                    if ( sub_21E7D6C((const void **)&v42, "UNKNOWN_ERROR") )
                      goto LABEL_58;
                    v8 = 10;
                  }
                  else
                    v8 = 3;
                }
                else
                  v8 = 2;
              }
              else
                v8 = 1;
            }
            else
              sub_21E8190((void **)(v5 + 8), "1", (_BYTE *)1);
              v8 = 9;
          }
          else
            v8 = 8;
        }
        else
          v8 = 7;
      }
      else
        sub_21E94B4((void **)&v35, "\"progress\":");
        sub_21E94B4((void **)&v34, "}");
        RealmsFileUploader::UploadResult::getProperty(&v36, v4, (_BYTE **)&v35, (_BYTE **)&v34);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)(v5 + 8),
          &v36);
        v12 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v36 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        v13 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v34 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        v14 = (void *)(v35 - 12);
        if ( (int *)(v35 - 12) != &dword_28898C0 )
          v32 = (unsigned int *)(v35 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        v8 = 6;
      sub_21E94B4((void **)&v38, "\"cancelURL\":\"");
      sub_21E94B4((void **)&v37, "\"");
      RealmsFileUploader::UploadResult::getProperty(&v39, v4, (_BYTE **)&v38, (_BYTE **)&v37);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)(v5 + 4),
        &v39);
      v9 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v39 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v10 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v37 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v11 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v38 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v8 = 5;
  else
    v8 = 4;
  *(_DWORD *)v5 = v8;
LABEL_58:
  v25 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v42 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
}


signed int __fastcall RealmsFileUploader::UploadResultBuilder::addLine(int a1, int *a2)
{
  signed int result; // r0@2

  if ( *(_DWORD *)(*a2 - 12) )
  {
    if ( *(_DWORD *)(*(_DWORD *)a1 - 12) )
    {
      EntityInteraction::setInteractText((int *)(a1 + 4), a2);
      result = 1;
    }
    else
      EntityInteraction::setInteractText((int *)a1, a2);
      result = 0;
  }
  else
    result = 0;
  return result;
}


void __fastcall RealmsFileUploader::UploadResult::_parse(int a1, int *a2, int *a3)
{
  RealmsFileUploader::UploadResult::_parse(a1, a2, a3);
}


int *__fastcall RealmsFileUploader::RealmUploadInfo::RealmUploadInfo(int *a1, int *a2, int *a3, int *a4, int a5)
{
  int *v5; // r5@1
  int *v6; // r7@1
  int *v7; // r4@1

  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v7 + 1, v6);
  sub_21E8AF4(v7 + 2, v5);
  v7[3] = a5;
  v7[4] = (int)&unk_28898CC;
  v7[5] = (int)&unk_28898CC;
  v7[6] = 0;
  sub_21E94B4((void **)v7 + 7, (const char *)&unk_257BC67);
  v7[8] = 0;
  v7[9] = 0;
  v7[10] = 0;
  v7[11] = 0;
  v7[12] = 0;
  v7[13] = 0;
  v7[14] = 0;
  Concurrency::streams::producer_consumer_buffer<unsigned char>::producer_consumer_buffer((int)(v7 + 15), 512);
  Concurrency::streams::producer_consumer_buffer<unsigned char>::producer_consumer_buffer((int)(v7 + 18), 512);
  v7[23] = 0;
  v7[27] = 0;
  v7[31] = 0;
  return v7;
}


_DWORD *__fastcall RealmsFileUploader::RealmsFileUploader(_DWORD *a1, int a2)
{
  int v2; // r5@1
  _DWORD *v3; // r4@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r6@3
  void *v7; // r5@3

  v2 = a2;
  v3 = a1;
  IFileChunkUploader::IFileChunkUploader(a1);
  v3[1] = 0;
  v3[2] = 0;
  *v3 = &off_26EBD20;
  v3[3] = v2;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 1065353216;
  LODWORD(v4) = v3 + 8;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v5 = sub_21E6254(v4);
  v3[5] = v5;
  if ( v5 == 1 )
  {
    v3[10] = 0;
    v7 = v3 + 10;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  v3[4] = v7;
  MPMCQueue<std::function<void ()(void)>>::MPMCQueue((int)(v3 + 11));
  return v3;
}


unsigned int __fastcall RealmsFileUploader::_internalMultipartCall(int a1, int **a2, int a3, int a4, unsigned __int64 a5, int a6, const void **a7, _DWORD *a8, int a9)
{
  int v9; // r9@1
  int **v10; // r8@1
  int v11; // r4@1
  void *v12; // r0@1
  void *v13; // r0@2
  int v14; // r5@3
  void *v15; // r0@3
  char *v16; // r0@4
  void *v17; // r0@5
  __int64 v18; // r2@6
  void *v19; // r0@6
  int v20; // r5@7
  void *v21; // r0@7
  int v22; // r1@8
  void *v23; // r0@8
  int v24; // r5@9
  int v25; // r6@9
  int v26; // r7@9
  unsigned int *v27; // r0@11
  unsigned int v28; // r1@13
  unsigned int *v29; // r1@17
  unsigned int v30; // r0@19
  unsigned int *v31; // r4@23
  unsigned int v32; // r0@25
  int v33; // r10@31
  unsigned int *v34; // r0@32
  unsigned int v35; // r1@32
  unsigned int v36; // r2@35
  unsigned int v37; // r3@36
  void *v38; // r6@39
  unsigned int *v39; // r7@39
  unsigned int *v40; // r2@41
  signed int v41; // r1@43
  unsigned int *v42; // r2@45
  signed int v43; // r1@47
  unsigned int *v44; // r2@49
  signed int v45; // r1@51
  unsigned int *v46; // r2@53
  signed int v47; // r1@55
  unsigned int *v48; // r2@57
  signed int v49; // r1@59
  int v50; // r2@61
  signed int v51; // r1@63
  unsigned int *v52; // r2@65
  signed int v53; // r1@67
  unsigned int *v54; // r2@69
  unsigned int v55; // r1@107
  unsigned int v56; // r1@111
  unsigned int v57; // r0@117
  unsigned int *v58; // r0@123
  unsigned int v59; // r1@125
  unsigned int v60; // r0@130
  void (__fastcall *v61)(int *, int, signed int); // r3@133
  int v62; // r4@135
  unsigned int *v63; // r1@136
  unsigned int v64; // r0@138
  unsigned int *v65; // r5@142
  unsigned int v66; // r0@144
  int v67; // r0@151
  unsigned int *v68; // r2@152
  unsigned int v69; // r1@154
  int v70; // r5@159
  unsigned int *v71; // r1@160
  unsigned int v72; // r0@162
  unsigned int *v73; // r4@166
  unsigned int v74; // r0@168
  int v75; // r0@173
  unsigned int *v76; // r1@174
  unsigned int v77; // r2@175
  void *v78; // r5@178
  unsigned int *v79; // r1@179
  unsigned int v80; // r0@181
  unsigned int *v81; // r4@185
  unsigned int v82; // r0@187
  unsigned int result; // r0@194
  void *v84; // r4@199
  unsigned int *v85; // r1@200
  unsigned int *v86; // r5@206
  void *v87; // [sp+0h] [bp-74h]@128
  int v88; // [sp+4h] [bp-70h]@128
  int v89; // [sp+8h] [bp-6Ch]@134
  int v90; // [sp+Ch] [bp-68h]@135
  int v91; // [sp+10h] [bp-64h]@133
  int v92; // [sp+14h] [bp-60h]@134
  int v93; // [sp+18h] [bp-5Ch]@128
  int v94; // [sp+1Ch] [bp-58h]@122
  void *v95; // [sp+20h] [bp-54h]@122
  char v96; // [sp+24h] [bp-50h]@128
  int v97; // [sp+28h] [bp-4Ch]@159
  char v98; // [sp+2Ch] [bp-48h]@135
  int v99; // [sp+30h] [bp-44h]@135
  int v100; // [sp+34h] [bp-40h]@7
  int v101; // [sp+38h] [bp-3Ch]@7
  int v102; // [sp+40h] [bp-34h]@6
  char *v103; // [sp+44h] [bp-30h]@3
  int v104; // [sp+48h] [bp-2Ch]@3
  int v105; // [sp+50h] [bp-24h]@3
  int v106; // [sp+54h] [bp-20h]@2
  int v107; // [sp+58h] [bp-1Ch]@2
  int v108; // [sp+74h] [bp+0h]@1
  int v109; // [sp+78h] [bp+4h]@1
  void *v110; // [sp+7Ch] [bp+8h]@122
  char v111; // [sp+80h] [bp+Ch]@1

  v9 = a1;
  v10 = a2;
  v11 = a3;
  sub_21E8AF4(&v108, (int *)&web::http::methods::POST);
  std::__shared_ptr<web::http::details::_http_request,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<web::http::details::_http_request>,std::string>(
    (int)&v109,
    (int)&v111,
    &v108);
  v12 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
  {
    v40 = (unsigned int *)(v108 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
    }
    else
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  }
  web::uri::uri((web::uri *)&v106, (const char *)&unk_257BC67);
  web::http::details::_http_request::set_request_uri((web::http::details::_http_request *)v109, (const web::uri *)&v106);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v107);
  v13 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v106 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v109;
  sub_21E94B4((void **)&v105, "Authorization");
  v103 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v103, *((_DWORD *)*a7 - 3) + 7);
  sub_21E7408((const void **)&v103, "Bearer ", 7u);
  sub_21E72F0((const void **)&v103, a7);
  utility::conversions::to_string_t(&v104, &v103);
  web::http::http_headers::add<std::string>(v14 + 20, &v105, &v104);
  v15 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v104 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v103 - 12;
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v103 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v105 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v102, "application/octet-stream");
  web::http::details::_http_request::_record_body_data_for_retry(v109);
  web::http::details::http_msg_base::set_body(v109, v11, &v102);
  v19 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v50 = v102 - 4;
      {
        v51 = __ldrex((unsigned int *)v18);
        HIDWORD(v18) = v51 - 1;
      }
      while ( __strex(v51 - 1, (unsigned int *)v18) );
      v51 = *(_DWORD *)v18;
      HIDWORD(v18) = *(_DWORD *)v18 - 1;
      *(_DWORD *)v18 = HIDWORD(v18);
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = v109;
  LODWORD(v18) = *a8;
  Util::format((Util *)&v100, "multipart/form-data; boundary=%s", v18);
  utility::conversions::to_string_t(&v101, &v100);
  web::http::http_headers::set_content_type(v20 + 20, &v101);
  v21 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v101 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = v100;
  v23 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v100 - 4);
        v22 = __ldrex(v54);
      while ( __strex(v22 - 1, v54) );
      v22 = (*v54)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  web::http::http_headers::set_content_length((web::http::http_headers *)(v109 + 20), v22, a5);
  v24 = v109;
  *(_DWORD *)(v109 + 148) = *(_DWORD *)a6;
  v25 = *(_DWORD *)(v24 + 152);
  v26 = *(_DWORD *)(a6 + 4);
  if ( v26 != v25 )
    if ( v26 )
      v27 = (unsigned int *)(v26 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 + 1, v27) );
        v25 = *(_DWORD *)(v24 + 152);
      else
        ++*v27;
    if ( v25 )
      v29 = (unsigned int *)(v25 + 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        v31 = (unsigned int *)(v25 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
        if ( &pthread_create )
        {
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        }
        else
          v32 = (*v31)--;
        if ( v32 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
    *(_DWORD *)(v24 + 152) = v26;
  v33 = *(_DWORD *)(v9 + 8);
  if ( !v33 )
    std::__throw_bad_weak_ptr();
  v34 = (unsigned int *)(v33 + 4);
  v35 = *(_DWORD *)(v33 + 4);
  do
    while ( 1 )
      if ( !v35 )
        std::__throw_bad_weak_ptr();
      v36 = __ldrex(v34);
      if ( v36 == v35 )
        break;
      __clrex();
      v35 = v36;
    v37 = __strex(v35 + 1, v34);
    v35 = v36;
  while ( v37 );
  __dmb();
  v38 = *(void **)(v9 + 4);
  v39 = (unsigned int *)(v33 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v55 = __ldrex(v39);
    while ( __strex(v55 + 1, v39) );
  else
    ++*v39;
      v56 = __ldrex(v34);
    while ( __strex(v56 - 1, v34) );
    v56 = (*v34)--;
  if ( v56 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
        v57 = __ldrex(v39);
      while ( __strex(v57 - 1, v39) );
      v57 = (*v39)--;
    if ( v57 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
  v94 = v109;
  v95 = v110;
  if ( v110 )
    v58 = (unsigned int *)((char *)v110 + 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 + 1, v58) );
      ++*v58;
  v93 = 0;
  web::http::client::http_client::request((pplx::details::platform *)&v96, v10, (int)&v94, &v93);
  v87 = v38;
  v88 = v33;
      v60 = __ldrex(v39);
    while ( __strex(v60 + 1, v39) );
  v91 = 0;
  v61 = *(void (__fastcall **)(int *, int, signed int))(a9 + 8);
  if ( v61 )
    v61(&v89, a9, 2);
    v92 = *(_DWORD *)(a9 + 12);
    v91 = *(_DWORD *)(a9 + 8);
  sub_161E678((int)&v98, (int)&v96, (int)&v87, (int)v61, v87, v88, v89, v90, v91, v92, v93, v94, v95);
  v62 = v99;
  if ( v99 )
    v63 = (unsigned int *)(v99 + 4);
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
  if ( v91 )
    ((void (*)(void))v91)();
  v67 = v88;
  if ( v88 )
    v68 = (unsigned int *)(v88 + 8);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 == 1 )
      (*(void (**)(void))(*(_DWORD *)v67 + 12))();
  v70 = v97;
  if ( v97 )
    v71 = (unsigned int *)(v97 + 4);
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
  v75 = v93;
  if ( v93 )
    v76 = (unsigned int *)(v93 + 4);
      v77 = __ldrex(v76);
    while ( __strex(v77 - 1, v76) );
    if ( v77 == 1 )
      (*(void (**)(void))(*(_DWORD *)v75 + 8))();
  v78 = v95;
  if ( v95 )
    v79 = (unsigned int *)((char *)v95 + 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 == 1 )
      v81 = (unsigned int *)((char *)v78 + 8);
      (*(void (__fastcall **)(void *))(*(_DWORD *)v78 + 8))(v78);
          v82 = __ldrex(v81);
        while ( __strex(v82 - 1, v81) );
        v82 = (*v81)--;
      if ( v82 == 1 )
        (*(void (__fastcall **)(void *))(*(_DWORD *)v78 + 12))(v78);
      result = __ldrex(v39);
    while ( __strex(result - 1, v39) );
    result = (*v39)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
  v84 = v110;
    v85 = (unsigned int *)((char *)v110 + 4);
        result = __ldrex(v85);
      while ( __strex(result - 1, v85) );
      result = (*v85)--;
    if ( result == 1 )
      v86 = (unsigned int *)((char *)v84 + 8);
      (*(void (__fastcall **)(void *))(*(_DWORD *)v84 + 8))(v84);
          result = __ldrex(v86);
        while ( __strex(result - 1, v86) );
        result = (*v86)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(void *))(*(_DWORD *)v84 + 12))(v84);
  return result;
}


int __fastcall RealmsFileUploader::getUploadProgress(int a1, int a2)
{
  unsigned __int64 *v2; // r4@1
  int **v3; // r5@1
  int result; // r0@2

  v2 = (unsigned __int64 *)(a1 + 16);
  v3 = (int **)(a2 + 16);
  if ( std::_Hashtable<std::string,std::pair<std::string const,RealmsFileUploader::RealmUploadInfo>,std::allocator<std::pair<std::string const,RealmsFileUploader::RealmUploadInfo>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 16),
         (int **)(a2 + 16)) )
  {
    _R0 = std::__detail::_Map_base<std::string,std::pair<std::string const,RealmsFileUploader::RealmUploadInfo>,std::allocator<std::pair<std::string const,RealmsFileUploader::RealmUploadInfo>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
            v2,
            v3);
    __asm
    {
      VLDR            S0, [R0,#0x20]
      VMOV            R0, S0
    }
  }
  else
      VLDR            S0, =0.0
  return result;
}


void **__fastcall RealmsFileUploader::update(RealmsFileUploader *this)
{
  RealmsFileUploader *v1; // r4@1
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
  int i; // r7@17
  __int64 v15; // [sp+0h] [bp-48h]@5
  int (*v16)(void); // [sp+8h] [bp-40h]@1
  void (__fastcall *v17)(_DWORD); // [sp+Ch] [bp-3Ch]@5
  __int64 v18; // [sp+10h] [bp-38h]@5
  int (*v19)(void); // [sp+18h] [bp-30h]@5
  void (__fastcall *v20)(_DWORD); // [sp+1Ch] [bp-2Ch]@5

  v1 = this;
  v2 = (unsigned __int8 *)this + 84;
  v16 = 0;
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
    v4 = *((_DWORD *)v1 + 13);
    if ( *((_DWORD *)v1 + 17) == v4 )
      break;
    LODWORD(v5) = *(_DWORD *)v4;
    HIDWORD(v5) = *(_DWORD *)(v4 + 4);
    v6 = *(int (**)(void))(v4 + 8);
    *(_DWORD *)(v4 + 8) = 0;
    v7 = *(void (__fastcall **)(_DWORD))(v4 + 12);
    v18 = v15;
    v15 = v5;
    v8 = v16;
    v16 = v6;
    v19 = v8;
    v20 = v17;
    v17 = v7;
    if ( v8 )
      ((void (__fastcall *)(__int64 *, __int64 *, signed int))v8)(&v18, &v18, 3);
    v9 = *((_DWORD *)v1 + 13);
    v10 = *(void (**)(void))(v9 + 8);
    if ( v9 == *((_DWORD *)v1 + 15) - 16 )
      if ( v10 )
        v10();
      operator delete(*((void **)v1 + 14));
      v12 = *((_DWORD *)v1 + 16);
      *((_DWORD *)v1 + 16) = v12 + 4;
      v11 = *(_DWORD *)(v12 + 4);
      *((_DWORD *)v1 + 14) = v11;
      *((_DWORD *)v1 + 15) = v11 + 512;
    else
      {
        v9 = *((_DWORD *)v1 + 13);
      }
      v11 = v9 + 16;
    *((_DWORD *)v1 + 13) = v11;
    __dmb();
    *v2 = 0;
    if ( !v16 )
      sub_21E5F48();
    v17(&v15);
  }
  result = 0;
  __dmb();
  *((_BYTE *)v1 + 84) = 0;
  for ( i = *((_DWORD *)v1 + 6); i; i = *(_DWORD *)i )
    RealmsFileUploader::_tryWriteStream((int)v1, i + 8, (int *)(i + 4));
    result = RealmsFileUploader::_tryReadStream((int)v1, i + 8, (int *)(i + 4));
  if ( v16 )
    result = (void **)v16();
  return result;
}


void __fastcall RealmsFileUploader::uploadStream(int a1, int a2, unsigned __int64 a3, _DWORD *a4, int a5, int a6)
{
  RealmsFileUploader::uploadStream(a1, a2, a3, a4, a5, a6);
}


int __fastcall RealmsFileUploader::UploadResult::hasProperty(int *a1, _BYTE **a2, _BYTE **a3)
{
  _DWORD *v3; // r6@1
  _BYTE **v4; // r5@1
  int *v5; // r4@1
  unsigned int v6; // r0@1
  _BYTE *v7; // r1@2
  unsigned int v8; // r3@2
  unsigned int v9; // r5@2
  int result; // r0@3

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = sub_21E76A0(a1, *a2, 0, *((_DWORD *)*a2 - 3));
  result = 0;
  if ( v6 != -1 )
  {
    v7 = *v4;
    v8 = *((_DWORD *)*v4 - 3);
    v9 = *(_DWORD *)(*v3 - 12) + v6;
    if ( v9 < sub_21E76A0(v5, v7, v9, v8) )
      result = 1;
  }
  return result;
}


int __fastcall RealmsFileUploader::cancelUpload(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int result; // r0@1
  unsigned __int64 *v5; // r5@2
  int **v6; // r4@2

  v2 = a1;
  v3 = a2;
  result = (*(int (**)(void))(*(_DWORD *)a1 + 32))();
  if ( result == 1 )
  {
    v5 = (unsigned __int64 *)(v2 + 16);
    v6 = (int **)(v3 + 16);
    result = std::_Hashtable<std::string,std::pair<std::string const,RealmsFileUploader::RealmUploadInfo>,std::allocator<std::pair<std::string const,RealmsFileUploader::RealmUploadInfo>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
               v5,
               v6);
    if ( result )
      result = j_j_j__ZNSt10_HashtableISsSt4pairIKSsN18RealmsFileUploader15RealmUploadInfoEESaIS4_ENSt8__detail10_Select1stESt8equal_toISsESt4hashISsENS6_18_Mod_range_hashingENS6_20_Default_ranged_hashENS6_20_Prime_rehash_policyENS6_17_Hashtable_traitsILb1ELb0ELb1EEEE8_M_eraseESt17integral_constantIbLb1EERS1_(
                 v5,
                 v6);
  }
  return result;
}


void __fastcall RealmsFileUploader::~RealmsFileUploader(RealmsFileUploader *this)
{
  RealmsFileUploader *v1; // r0@1

  v1 = RealmsFileUploader::~RealmsFileUploader(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void *__fastcall RealmsFileUploader::UploadResult::getProperty(int *a1, int *a2, _BYTE **a3, _BYTE **a4)
{
  _DWORD *v4; // r7@1
  int *v5; // r5@1
  _BYTE **v6; // r6@1
  int *v7; // r4@1
  unsigned int v8; // r0@1
  _BYTE *v9; // r1@2
  unsigned int v10; // r3@2
  unsigned int v11; // r6@2
  unsigned int v12; // r0@2
  unsigned int v13; // r3@3
  void *result; // r0@4

  v4 = a3;
  v5 = a2;
  v6 = a4;
  v7 = a1;
  v8 = sub_21E76A0(a2, *a3, 0, *((_DWORD *)*a3 - 3));
  if ( v8 == -1
    || (v9 = *v6,
        v10 = *((_DWORD *)*v6 - 3),
        v11 = *(_DWORD *)(*v4 - 12) + v8,
        v12 = sub_21E76A0(v5, v9, v11, v10),
        v12 <= v11) )
  {
    result = sub_21E8AF4(v7, (int *)&Util::EMPTY_STRING);
  }
  else
    v13 = *(_DWORD *)(*v5 - 12);
    if ( v13 < v11 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v11, v13);
    result = sub_21E9040((void **)v7, v5, v11, v12 - v11);
  return result;
}


int __fastcall RealmsFileUploader::_tryWriteStream(int a1, int a2, int *a3)
{
  int v3; // r5@1
  int v4; // r11@1
  int result; // r0@1
  int *v6; // r10@1
  int v7; // r8@2
  unsigned int v8; // r6@2
  int v9; // r1@3
  _DWORD *v10; // r4@4
  int v11; // r9@5
  int v12; // r6@6
  unsigned int v13; // r1@7
  unsigned int *v14; // r0@7
  unsigned int v15; // r2@10
  unsigned int v16; // r3@11
  void *v17; // r5@12
  unsigned int *v18; // r7@12
  unsigned int v19; // r1@14
  unsigned int v20; // r1@22
  unsigned int v21; // r0@28
  unsigned int v22; // r0@35
  int v23; // r3@38
  int v24; // r4@38
  unsigned int *v25; // r1@39
  unsigned int v26; // r0@41
  unsigned int *v27; // r5@45
  unsigned int v28; // r0@47
  void *v29; // r0@52
  int v30; // r0@53
  unsigned int *v31; // r2@54
  unsigned int v32; // r1@56
  int v33; // r4@61
  unsigned int *v34; // r1@62
  unsigned int v35; // r0@64
  unsigned int *v36; // r5@68
  unsigned int v37; // r0@70
  unsigned int *v38; // r2@83
  signed int v39; // r1@85
  void *v40; // [sp+0h] [bp-60h]@33
  int v41; // [sp+4h] [bp-5Ch]@33
  int v42; // [sp+8h] [bp-58h]@38
  int v43; // [sp+Ch] [bp-54h]@38
  char v44; // [sp+18h] [bp-48h]@33
  int v45; // [sp+1Ch] [bp-44h]@38
  char v46; // [sp+20h] [bp-40h]@38
  int v47; // [sp+24h] [bp-3Ch]@38
  __int64 v48; // [sp+28h] [bp-38h]@4
  int v49; // [sp+30h] [bp-30h]@2
  char v50; // [sp+34h] [bp-2Ch]@2

  v3 = a2;
  v4 = a1;
  result = *(_BYTE *)(a2 + 37);
  v6 = a3;
  if ( *(_BYTE *)(a2 + 37) )
  {
    v7 = a2 + 60;
    (*(void (__fastcall **)(char *, int))(*(_DWORD *)(a2 + 60) + 132))(&v50, a2 + 60);
    v49 = 0;
    v8 = std::__exception_ptr::operator==(&v50, &v49);
    std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v49);
    result = (int)std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v50);
    if ( v8 == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)(v3 + 60) + 36))(v3 + 60);
      v9 = *(_DWORD *)(v3 + 12);
      if ( result < v9 )
      {
        v48 = v9;
        *(_BYTE *)(v3 + 37) = 0;
        v10 = (_DWORD *)(v3 + 40);
        *(_DWORD *)(v3 + 44) = *(_DWORD *)(v3 + 40);
        if ( !*(_DWORD *)(v3 + 92) )
          sub_21E5F48();
        v11 = (*(int (__fastcall **)(int, __int64 *, int))(v3 + 96))(v3 + 84, &v48, v3 + 40);
        result = v48 | HIDWORD(v48);
        if ( v48 )
        {
          v12 = *(_DWORD *)(v4 + 8);
          if ( !v12 )
            std::__throw_bad_weak_ptr();
          v13 = *(_DWORD *)(v12 + 4);
          v14 = (unsigned int *)(v12 + 4);
          do
          {
            while ( 1 )
            {
              if ( !v13 )
                std::__throw_bad_weak_ptr();
              __dmb();
              v15 = __ldrex(v14);
              if ( v15 == v13 )
                break;
              __clrex();
              v13 = v15;
            }
            v16 = __strex(v13 + 1, v14);
            v13 = v15;
          }
          while ( v16 );
          __dmb();
          v17 = *(void **)(v4 + 4);
          v18 = (unsigned int *)(v12 + 8);
          if ( &pthread_create )
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 + 1, v18) );
          else
            ++*v18;
              v20 = __ldrex(v14);
            while ( __strex(v20 - 1, v14) );
            v20 = (*v14)--;
          if ( v20 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            if ( &pthread_create )
              do
                v21 = __ldrex(v18);
              while ( __strex(v21 - 1, v18) );
            else
              v21 = (*v18)--;
            if ( v21 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
          (*(void (__fastcall **)(char *, int, _DWORD, _DWORD))(*(_DWORD *)v7 + 60))(&v44, v7, *v10, v48);
          v40 = v17;
          v41 = v12;
              v22 = __ldrex(v18);
            while ( __strex(v22 + 1, v18) );
          sub_21E8AF4(&v42, v6);
          LOBYTE(v43) = v11;
          sub_161FC40(
            (int)&v46,
            (int)&v44,
            (int)&v40,
            v23,
            v40,
            v41,
            v42,
            v43,
            v48,
            SHIDWORD(v48),
            *(int *)&v44,
            v45,
            *(void **)&v46);
          v24 = v47;
          if ( v47 )
            v25 = (unsigned int *)(v47 + 4);
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
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
          v29 = (void *)(v42 - 12);
          if ( (int *)(v42 - 12) != &dword_28898C0 )
            v38 = (unsigned int *)(v42 - 4);
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
              v39 = (*v38)--;
            if ( v39 <= 0 )
              j_j_j_j__ZdlPv_9(v29);
          v30 = v41;
          if ( v41 )
            v31 = (unsigned int *)(v41 + 8);
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              v32 = (*v31)--;
            if ( v32 == 1 )
              (*(void (**)(void))(*(_DWORD *)v30 + 12))();
          v33 = v45;
          if ( v45 )
            v34 = (unsigned int *)(v45 + 4);
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
              result = __ldrex(v18);
            while ( __strex(result - 1, v18) );
            result = (*v18)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
        }
        else if ( v11 == 1 )
          result = 1;
          *(_BYTE *)(v3 + 37) = 1;
      }
    }
  }
  return result;
}


int __fastcall RealmsFileUploader::_uploadStream(int a1, int a2, int *a3, int a4, unsigned __int64 a5, _DWORD *a6, int a7, int a8)
{
  int v8; // r7@1
  int *v9; // r10@1
  int v10; // r5@1
  int v11; // r4@1
  unsigned int *v12; // r0@2
  unsigned int v13; // r1@2
  unsigned int v14; // r2@5
  unsigned int v15; // r3@6
  int v16; // r11@7
  unsigned int *v17; // r8@7
  unsigned int v18; // r1@9
  unsigned int v19; // r1@14
  unsigned int v20; // r0@20
  int **v21; // r6@25
  unsigned int v22; // r0@27
  int *v23; // r11@28
  void (__fastcall *v24)(int *, int, signed int); // r3@30
  void (__fastcall *v25)(int *, int, signed int); // r3@32
  int v26; // r1@34
  void *v27; // r5@34
  int v28; // r12@34
  int v29; // r2@34
  unsigned int *v30; // r0@35
  unsigned int v31; // r1@37
  __int64 v32; // r2@40
  int v33; // r0@40
  void (__fastcall *v34)(_DWORD, _DWORD, _DWORD); // r0@40
  int v35; // r0@40
  int v36; // r11@40
  __int64 v37; // kr00_8@40
  int v38; // r7@40
  void (__fastcall *v39)(_DWORD, _DWORD, _DWORD); // r0@40
  int v40; // r0@40
  __int64 v41; // r1@40
  int v42; // r3@40
  void *v43; // r0@42
  int v44; // r0@47
  unsigned int *v45; // r2@48
  unsigned int v46; // r1@50
  int v47; // r4@55
  unsigned int *v48; // r1@56
  unsigned int v49; // r0@58
  unsigned int *v50; // r5@62
  unsigned int v51; // r0@64
  int v52; // r4@69
  unsigned int *v53; // r1@70
  unsigned int v54; // r0@72
  unsigned int *v55; // r5@76
  unsigned int v56; // r0@78
  int result; // r0@85
  unsigned int *v58; // r2@91
  signed int v59; // r1@93
  int **v60; // [sp+24h] [bp-84h]@26
  int v61; // [sp+28h] [bp-80h]@28
  int v62; // [sp+2Ch] [bp-7Ch]@28
  int v63; // [sp+30h] [bp-78h]@28
  int v64; // [sp+34h] [bp-74h]@25
  int v65; // [sp+38h] [bp-70h]@25
  int v66; // [sp+3Ch] [bp-6Ch]@31
  int v67; // [sp+40h] [bp-68h]@40
  void (__fastcall *v68)(_DWORD, _DWORD, _DWORD); // [sp+44h] [bp-64h]@30
  int v69; // [sp+48h] [bp-60h]@31
  int v70; // [sp+4Ch] [bp-5Ch]@33
  int v71; // [sp+50h] [bp-58h]@40
  void (__fastcall *v72)(_DWORD, _DWORD, _DWORD); // [sp+54h] [bp-54h]@32
  int v73; // [sp+58h] [bp-50h]@33
  int v74; // [sp+5Ch] [bp-4Ch]@34
  void *v75; // [sp+60h] [bp-48h]@40
  void (*v76)(void); // [sp+68h] [bp-40h]@34
  char v77; // [sp+70h] [bp-38h]@25
  int v78; // [sp+74h] [bp-34h]@55
  char v79; // [sp+78h] [bp-30h]@25
  int v80; // [sp+7Ch] [bp-2Ch]@69

  v8 = a1;
  v9 = a3;
  v10 = *(_DWORD *)(a1 + 8);
  v11 = a2;
  if ( !v10 )
    std::__throw_bad_weak_ptr();
  v12 = (unsigned int *)(v10 + 4);
  v13 = *(_DWORD *)(v10 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v13 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v14 = __ldrex(v12);
      if ( v14 == v13 )
        break;
      __clrex();
      v13 = v14;
    }
    v15 = __strex(v13 + 1, v12);
    v13 = v14;
  }
  while ( v15 );
  __dmb();
  v16 = *(_DWORD *)(v8 + 4);
  v17 = (unsigned int *)(v10 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v18 = __ldrex(v17);
    while ( __strex(v18 + 1, v17) );
  else
    ++*v17;
      v19 = __ldrex(v12);
    while ( __strex(v19 - 1, v12) );
    v19 = (*v12)--;
  if ( v19 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
    if ( &pthread_create )
      do
        v20 = __ldrex(v17);
      while ( __strex(v20 - 1, v17) );
    else
      v20 = (*v17)--;
    if ( v20 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v21 = *(int ***)(v11 + 52);
  Concurrency::streams::streambuf<unsigned char>::create_istream((int)&v79, v11 + 60);
  Concurrency::streams::streambuf<unsigned char>::create_ostream((int)&v77, v11 + 72);
  v64 = v16;
  v65 = v10;
    v60 = v21;
      v22 = __ldrex(v17);
    while ( __strex(v22 + 1, v17) );
    v63 = v11;
    v23 = v9;
    v61 = v8;
    v62 = v10;
  v68 = 0;
  v24 = *(void (__fastcall **)(int *, int, signed int))(a7 + 8);
  if ( v24 )
    v24(&v66, a7, 2);
    v69 = *(_DWORD *)(a7 + 12);
    v68 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a7 + 8);
  v72 = 0;
  v25 = *(void (__fastcall **)(int *, int, signed int))(a8 + 8);
  if ( v25 )
    v25(&v70, a8, 2);
    v73 = *(_DWORD *)(a8 + 12);
    v72 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a8 + 8);
  sub_21E8AF4(&v74, v23);
  v76 = 0;
  v27 = operator new(0x2Cu);
  v29 = v65;
  *(_DWORD *)v27 = v64;
  *((_DWORD *)v27 + 1) = v29;
  if ( v29 )
    v30 = (unsigned int *)(v29 + 8);
        v31 = __ldrex(v30);
      while ( __strex(v31 + 1, v30) );
      v26 = *((_DWORD *)v27 + 5);
      v28 = *((_DWORD *)v27 + 9);
      v26 = *v30 + 1;
      *v30 = v26;
  v32 = *(_QWORD *)&v66;
  v33 = *((_DWORD *)v27 + 3);
  v66 = *((_DWORD *)v27 + 2);
  v67 = v33;
  *((_QWORD *)v27 + 1) = v32;
  v34 = v68;
  *((_DWORD *)v27 + 4) = v34;
  v35 = v69;
  v69 = v26;
  *((_DWORD *)v27 + 5) = v35;
  v36 = (int)v27 + 24;
  v37 = *(_QWORD *)&v70;
  v38 = *((_DWORD *)v27 + 7);
  v70 = *((_DWORD *)v27 + 6);
  v71 = v38;
  *(_QWORD *)v36 = v37;
  v39 = v72;
  *(_DWORD *)(v36 + 8) = v39;
  v40 = v73;
  v73 = v28;
  *(_DWORD *)(v36 + 12) = v40;
  sub_21E8AF4((int *)v27 + 10, &v74);
  LODWORD(v41) = sub_1633198;
  v75 = v27;
  HIDWORD(v41) = sub_1632F50;
  *(_QWORD *)&v76 = v41;
  RealmsFileUploader::_internalMultipartCall(
    v61,
    v60,
    (int)&v79,
    v42,
    a5,
    (int)&v77,
    (const void **)(v63 + 4),
    a6,
    (int)&v75);
  if ( v76 )
    v76();
  v43 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v74 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  if ( v72 )
    v72(&v70, &v70, 3);
  if ( v68 )
    v68(&v66, &v66, 3);
  v44 = v65;
  if ( v65 )
    v45 = (unsigned int *)(v65 + 8);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 == 1 )
      (*(void (**)(void))(*(_DWORD *)v44 + 12))();
  v47 = v78;
  if ( v78 )
    v48 = (unsigned int *)(v78 + 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 == 1 )
      v50 = (unsigned int *)(v47 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
      if ( &pthread_create )
      {
        __dmb();
        do
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
      }
      else
        v51 = (*v50)--;
      if ( v51 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
  v52 = v80;
  if ( v80 )
    v53 = (unsigned int *)(v80 + 4);
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
  *(_WORD *)(v63 + 37) = 257;
      result = __ldrex(v17);
    while ( __strex(result - 1, v17) );
    result = (*v17)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v62 + 12))(v62);
  return result;
}


RealmsFileUploader::RealmUploadInfo *__fastcall RealmsFileUploader::RealmUploadInfo::RealmUploadInfo(RealmsFileUploader::RealmUploadInfo *this)
{
  RealmsFileUploader::RealmUploadInfo *v1; // r4@1

  v1 = this;
  sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  sub_21E94B4((void **)v1 + 1, (const char *)&unk_257BC67);
  sub_21E94B4((void **)v1 + 2, (const char *)&unk_257BC67);
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = &unk_28898CC;
  *((_DWORD *)v1 + 5) = &unk_28898CC;
  *((_DWORD *)v1 + 6) = 0;
  sub_21E94B4((void **)v1 + 7, (const char *)&unk_257BC67);
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  Concurrency::streams::producer_consumer_buffer<unsigned char>::producer_consumer_buffer((int)v1 + 60, 512);
  Concurrency::streams::producer_consumer_buffer<unsigned char>::producer_consumer_buffer((int)v1 + 72, 512);
  *((_DWORD *)v1 + 23) = 0;
  *((_DWORD *)v1 + 27) = 0;
  *((_DWORD *)v1 + 31) = 0;
  return v1;
}


void **__fastcall RealmsFileUploader::_tryReadStream(int a1, int a2, int *a3)
{
  int v3; // r6@1
  int v4; // r4@1
  void **result; // r0@1
  int *v6; // r9@1
  int v7; // r7@2
  unsigned int v8; // r5@4
  int v9; // r8@6
  unsigned int v10; // r1@7
  unsigned int *v11; // r0@7
  unsigned int v12; // r2@10
  unsigned int v13; // r3@11
  int v14; // r4@17
  unsigned int *v15; // r5@17
  unsigned int v16; // r1@22
  unsigned int v17; // r1@26
  unsigned int v18; // r0@32
  __int64 v19; // kr00_8@37
  unsigned int *v20; // r0@38
  unsigned int v21; // r2@40
  unsigned int v22; // r1@46
  unsigned int v23; // r1@51
  unsigned int *v24; // r7@55
  unsigned int v25; // r0@57
  unsigned int v26; // r0@64
  int v27; // r3@67
  unsigned int *v28; // r0@68
  unsigned int v29; // r1@70
  int v30; // r4@73
  unsigned int *v31; // r1@74
  unsigned int v32; // r0@76
  unsigned int *v33; // r6@80
  unsigned int v34; // r0@82
  int v35; // r4@87
  unsigned int *v36; // r1@88
  unsigned int v37; // r0@90
  unsigned int *v38; // r6@94
  unsigned int v39; // r0@96
  void *v40; // r0@101
  int v41; // r0@102
  unsigned int *v42; // r2@103
  unsigned int v43; // r1@105
  int v44; // r4@110
  unsigned int *v45; // r1@111
  unsigned int v46; // r0@113
  unsigned int *v47; // r6@117
  unsigned int v48; // r0@119
  int v49; // r4@124
  unsigned int *v50; // r1@125
  unsigned int v51; // r0@127
  unsigned int *v52; // r6@131
  unsigned int v53; // r0@133
  int v54; // r4@138
  unsigned int *v55; // r1@139
  unsigned int v56; // r0@141
  unsigned int *v57; // r6@145
  unsigned int v58; // r0@147
  unsigned int v59; // r0@154
  int v60; // r4@159
  unsigned int *v61; // r1@160
  unsigned int *v62; // r5@166
  unsigned int *v63; // r2@173
  signed int v64; // r1@175
  void *v65; // [sp+0h] [bp-78h]@0
  int v66; // [sp+4h] [bp-74h]@62
  int v67; // [sp+8h] [bp-70h]@62
  int v68; // [sp+Ch] [bp-6Ch]@67
  int v69; // [sp+10h] [bp-68h]@67
  __int64 v70; // [sp+14h] [bp-64h]@67
  int v71; // [sp+1Ch] [bp-5Ch]@37
  __int64 v72; // [sp+20h] [bp-58h]@42
  char v73; // [sp+28h] [bp-50h]@37
  int v74; // [sp+2Ch] [bp-4Ch]@138
  char v75; // [sp+30h] [bp-48h]@62
  int v76; // [sp+34h] [bp-44h]@110
  char v77; // [sp+38h] [bp-40h]@73
  int v78; // [sp+3Ch] [bp-3Ch]@73
  void **v79; // [sp+40h] [bp-38h]@6
  __int64 v80; // [sp+44h] [bp-34h]@37
  int v81; // [sp+4Ch] [bp-2Ch]@4
  char v82; // [sp+50h] [bp-28h]@4

  v3 = a2;
  v4 = a1;
  result = (void **)*(_BYTE *)(a2 + 38);
  v6 = a3;
  if ( *(_BYTE *)(a2 + 38) )
  {
    v7 = a2 + 72;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 72) + 40))(a2 + 72) != 1
      || (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 24))(v3 + 72)
      || ((*(void (__fastcall **)(char *, int))(*(_DWORD *)v7 + 132))(&v82, v3 + 72),
          v81 = 0,
          v8 = std::__exception_ptr::operator==(&v82, &v81),
          std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v81),
          std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v82),
          v8 != 1) )
    {
      if ( !*(_DWORD *)(v3 + 124) )
        sub_21E5F48();
      (*(void (__fastcall **)(int))(v3 + 128))(v3 + 116);
      result = 0;
      *(_BYTE *)(v3 + 38) = 0;
    }
    else
      result = (void **)(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 36))(v3 + 72);
      if ( (signed int)result >= 1 )
      {
        Concurrency::streams::container_buffer<std::string>::container_buffer((int)&v79, 0x10u);
        v9 = *(_DWORD *)(v4 + 8);
        if ( !v9 )
          std::__throw_bad_weak_ptr();
        v10 = *(_DWORD *)(v9 + 4);
        v11 = (unsigned int *)(v9 + 4);
        do
        {
          while ( 1 )
          {
            if ( !v10 )
              std::__throw_bad_weak_ptr();
            __dmb();
            v12 = __ldrex(v11);
            if ( v12 == v10 )
              break;
            __clrex();
            v10 = v12;
          }
          v13 = __strex(v10 + 1, v11);
          v10 = v12;
        }
        while ( v13 );
        __dmb();
        v14 = *(_DWORD *)(v4 + 4);
        v15 = (unsigned int *)(v9 + 8);
        if ( &pthread_create )
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 + 1, v15) );
        else
          ++*v15;
            v17 = __ldrex(v11);
          while ( __strex(v17 - 1, v11) );
          v17 = (*v11)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          if ( &pthread_create )
            do
              v18 = __ldrex(v15);
            while ( __strex(v18 - 1, v15) );
          else
            v18 = (*v15)--;
          if ( v18 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
        *(_BYTE *)(v3 + 38) = 0;
        Concurrency::streams::streambuf<unsigned char>::create_istream((int)&v73, v3 + 72);
        v71 = (int)&off_26DDAC4;
        v19 = v80;
        if ( HIDWORD(v80) )
          v20 = (unsigned int *)(HIDWORD(v80) + 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 + 1, v20) );
            ++*v20;
          v72 = v19;
              v22 = __ldrex(v20);
            while ( __strex(v22 + 1, v20) );
              v23 = __ldrex(v20);
            while ( __strex(v23 - 1, v20) );
            v23 = (*v20)--;
          if ( v23 == 1 )
            v24 = (unsigned int *)(HIDWORD(v19) + 8);
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v19) + 8))(HIDWORD(v19));
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
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v19) + 12))(HIDWORD(v19));
          v72 = (unsigned int)v80;
        Concurrency::streams::basic_istream<unsigned char>::read_line((int)&v75, (int)&v73, (int)&v71);
        v66 = v14;
        v67 = v9;
            v26 = __ldrex(v15);
          while ( __strex(v26 + 1, v15) );
        sub_21E8AF4(&v68, v6);
        v69 = (int)&off_26DDA34;
        v70 = v80;
          v28 = (unsigned int *)(HIDWORD(v80) + 4);
              v29 = __ldrex(v28);
            while ( __strex(v29 + 1, v28) );
            ++*v28;
        sub_161F14C(
          (int)&v77,
          (int)&v75,
          (int)&v66,
          v27,
          v65,
          v66,
          v67,
          v68,
          (int)&off_26DD410,
          v70,
          SHIDWORD(v70),
          v71,
          (void *)v72);
        v30 = v78;
        if ( v78 )
          v31 = (unsigned int *)(v78 + 4);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            v32 = (*v31)--;
          if ( v32 == 1 )
            v33 = (unsigned int *)(v30 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
              v34 = (*v33)--;
            if ( v34 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
        v35 = HIDWORD(v70);
        if ( HIDWORD(v70) )
          v36 = (unsigned int *)(HIDWORD(v70) + 4);
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
        v40 = (void *)(v68 - 12);
        if ( (int *)(v68 - 12) != &dword_28898C0 )
          v63 = (unsigned int *)(v68 - 4);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j__ZdlPv_9(v40);
        v41 = v67;
        if ( v67 )
          v42 = (unsigned int *)(v67 + 8);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 == 1 )
            (*(void (**)(void))(*(_DWORD *)v41 + 12))();
        v44 = v76;
        if ( v76 )
          v45 = (unsigned int *)(v76 + 4);
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
        v49 = HIDWORD(v72);
        if ( HIDWORD(v72) )
          v50 = (unsigned int *)(HIDWORD(v72) + 4);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 == 1 )
            v52 = (unsigned int *)(v49 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 8))(v49);
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
              v53 = (*v52)--;
            if ( v53 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
        v54 = v74;
        if ( v74 )
          v55 = (unsigned int *)(v74 + 4);
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
            v59 = __ldrex(v15);
          while ( __strex(v59 - 1, v15) );
          v59 = (*v15)--;
        if ( v59 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
        result = &off_26DDA34;
        v79 = &off_26DDA34;
        v60 = HIDWORD(v80);
          v61 = (unsigned int *)(HIDWORD(v80) + 4);
              result = (void **)__ldrex(v61);
            while ( __strex((unsigned int)result - 1, v61) );
            result = (void **)(*v61)--;
          if ( result == (void **)1 )
            v62 = (unsigned int *)(v60 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 8))(v60);
                result = (void **)__ldrex(v62);
              while ( __strex((unsigned int)result - 1, v62) );
              result = (void **)(*v62)--;
            if ( result == (void **)1 )
              result = (void **)(*(int (__fastcall **)(int))(*(_DWORD *)v60 + 12))(v60);
      }
  }
  return result;
}


int __fastcall RealmsFileUploader::UploadResultBuilder::UploadResultBuilder(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  return result;
}


int __fastcall RealmsFileUploader::UploadResult::UploadResult(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+0h] [bp-30h]@1
  int v12; // [sp+4h] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 4;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_DWORD *)(a1 + 8) = &unk_28898CC;
  sub_21E8AF4(&v12, a2);
  sub_21E8AF4(&v11, v3);
  RealmsFileUploader::UploadResult::_parse(v2, &v12, &v11);
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v2;
}


void __fastcall RealmsFileUploader::initFileUploader(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  unsigned int v6; // r11@1
  int v7; // r4@1
  unsigned int v8; // r5@1
  int v9; // r9@1
  int v10; // r8@2
  _DWORD *v11; // r10@2
  int v12; // r6@2
  _DWORD *v13; // r1@4
  size_t v14; // r2@4
  int v15; // r4@6
  int v16; // r10@8
  unsigned int v17; // r1@9
  unsigned int *v18; // r0@9
  unsigned int v19; // r2@12
  unsigned int v20; // r3@13
  int v21; // r4@16
  unsigned int *v22; // r11@16
  bool v23; // zf@18
  unsigned int v24; // r1@25
  unsigned int v25; // r1@29
  unsigned int v26; // r0@35
  int v27; // r8@40
  unsigned int v28; // r0@42
  void (__fastcall *v29)(int *); // r3@45
  _DWORD *v30; // r0@47
  int v31; // r5@47
  int v32; // r0@47
  unsigned int *v33; // r0@48
  unsigned int v34; // r1@50
  __int64 v35; // r0@53
  char *v36; // r0@57
  void *v37; // r0@58
  int v38; // r0@59
  unsigned int *v39; // r2@60
  unsigned int v40; // r1@62
  unsigned int v41; // r0@69
  char *v42; // r0@74
  unsigned int *v43; // r2@76
  signed int v44; // r1@78
  unsigned int *v45; // r2@80
  signed int v46; // r1@82
  unsigned int *v47; // r2@84
  signed int v48; // r1@86
  int v49; // [sp+4h] [bp-6Ch]@1
  int v50; // [sp+8h] [bp-68h]@1
  int *v51; // [sp+Ch] [bp-64h]@1
  int v52; // [sp+10h] [bp-60h]@40
  int v53; // [sp+14h] [bp-5Ch]@40
  int v54; // [sp+18h] [bp-58h]@45
  int v55; // [sp+1Ch] [bp-54h]@45
  char *v56; // [sp+20h] [bp-50h]@45
  int v57; // [sp+24h] [bp-4Ch]@46
  void (__fastcall *v58)(int *, int *, signed int); // [sp+2Ch] [bp-44h]@45
  int v59; // [sp+30h] [bp-40h]@46
  int v60; // [sp+34h] [bp-3Ch]@53
  void (*v61)(void); // [sp+3Ch] [bp-34h]@47
  void (__fastcall *v62)(int *, int, int *, int *); // [sp+40h] [bp-30h]@53
  void *s1; // [sp+44h] [bp-2Ch]@1

  v51 = a2;
  v5 = a1;
  v49 = a4;
  sub_21E8AF4((int *)&s1, (int *)(a3 + 16));
  v6 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v7 = *(_DWORD *)(v5 + 16);
  v50 = v5;
  v8 = *(_DWORD *)(v5 + 20);
  v9 = *(_DWORD *)(v7 + 4 * (v6 % v8));
  if ( !v9 )
    goto LABEL_8;
  v10 = *(_DWORD *)v9;
  v11 = s1;
  v12 = *(_DWORD *)(*(_DWORD *)v9 + 140);
  while ( 1 )
  {
    if ( v12 == v6 )
    {
      v13 = *(_DWORD **)(v10 + 4);
      v14 = *(v11 - 3);
      if ( v14 == *(v13 - 3) && !memcmp(v11, v13, v14) )
        break;
    }
    v15 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
      v12 = *(_DWORD *)(v15 + 140);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v15 + 140) % v8 == v6 % v8 )
        continue;
  }
  v23 = v9 == 0;
  if ( v9 )
    v23 = *(_DWORD *)v9 == 0;
  if ( v23 )
LABEL_8:
    v16 = *(_DWORD *)(v50 + 8);
    if ( !v16 )
      std::__throw_bad_weak_ptr();
    v17 = *(_DWORD *)(v16 + 4);
    v18 = (unsigned int *)(v16 + 4);
    do
      while ( 1 )
      {
        if ( !v17 )
          std::__throw_bad_weak_ptr();
        __dmb();
        v19 = __ldrex(v18);
        if ( v19 == v17 )
          break;
        __clrex();
        v17 = v19;
      }
      v20 = __strex(v17 + 1, v18);
      v17 = v19;
    while ( v20 );
    __dmb();
    v21 = *(_DWORD *)(v50 + 4);
    v22 = (unsigned int *)(v16 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v22);
      while ( __strex(v24 + 1, v22) );
    else
      ++*v22;
        v25 = __ldrex(v18);
      while ( __strex(v25 - 1, v18) );
      v25 = (*v18)--;
    if ( v25 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
        do
          v26 = __ldrex(v22);
        while ( __strex(v26 - 1, v22) );
      else
        v26 = (*v22)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
    v27 = *(_DWORD *)(v50 + 12);
    v52 = v21;
    v53 = v16;
        v28 = __ldrex(v22);
      while ( __strex(v28 + 1, v22) );
    sub_21E8AF4(&v54, v51);
    v55 = v49;
    sub_21E8AF4((int *)&v56, (int *)&s1);
    v58 = 0;
    v29 = *(void (__fastcall **)(int *))(a5 + 8);
    if ( v29 )
      v29(&v57);
      v59 = *(_DWORD *)(a5 + 12);
      v58 = *(void (__fastcall **)(int *, int *, signed int))(a5 + 8);
    v61 = 0;
    v30 = operator new(0x24u);
    v31 = (int)v30;
    *v30 = v52;
    v32 = v53;
    *(_DWORD *)(v31 + 4) = v53;
    if ( v32 )
      v33 = (unsigned int *)(v32 + 8);
          v34 = __ldrex(v33);
        while ( __strex(v34 + 1, v33) );
        ++*v33;
    sub_21E8AF4((int *)(v31 + 8), &v54);
    *(_DWORD *)(v31 + 12) = v55;
    *(_DWORD *)(v31 + 16) = v56;
    v56 = (char *)&unk_28898CC;
    v35 = *(_QWORD *)&v57;
    *(_QWORD *)&v57 = *(_QWORD *)(v31 + 20);
    *(_QWORD *)(v31 + 20) = v35;
    LODWORD(v35) = v58;
    *(_DWORD *)(v31 + 28) = v35;
    HIDWORD(v35) = v59;
    v59 = *(_DWORD *)(v31 + 32);
    *(_DWORD *)(v31 + 32) = HIDWORD(v35);
    v60 = v31;
    v61 = (void (*)(void))sub_1631424;
    v62 = sub_1630EB0;
    RealmsAPI::initiateWorldUpload(v27, (const void **)v51, 1, (int)&v60);
    if ( v61 )
      v61();
    if ( v58 )
      v58(&v57, &v57, 3);
    v36 = v56 - 12;
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v56 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    v37 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v54 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v37);
    v38 = v53;
    if ( v53 )
      v39 = (unsigned int *)(v53 + 8);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 == 1 )
        (*(void (**)(void))(*(_DWORD *)v38 + 12))();
        v41 = __ldrex(v22);
      while ( __strex(v41 - 1, v22) );
      v41 = (*v22)--;
    if ( v41 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  else
    if ( !*(_DWORD *)(a5 + 8) )
      sub_21E5F48();
    (*(void (**)(void))(a5 + 12))();
  v42 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)((char *)s1 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
}


void __fastcall RealmsFileUploader::uploadStream(int a1, int a2, unsigned __int64 a3, _DWORD *a4, int a5, int a6)
{
  int v6; // r7@1
  unsigned int v7; // r4@1
  unsigned int v8; // r6@1 OVERLAPPED
  unsigned int v9; // r7@1
  int v10; // r5@1
  int v11; // r11@1
  int v12; // r8@2
  _DWORD *v13; // r9@2
  int v14; // r5@2
  _DWORD *v15; // r1@4
  size_t v16; // r2@4
  int v17; // r10@6
  char *v18; // r0@10
  bool v19; // zf@12
  int v20; // r10@15
  int v21; // r11@15
  unsigned int v22; // r1@16
  unsigned int *v23; // r0@16
  unsigned int v24; // r2@19
  unsigned int v25; // r3@20
  unsigned int *v26; // r2@23
  signed int v27; // r1@25
  int v28; // r8@27
  unsigned int *v29; // r7@27
  unsigned int v30; // r1@36
  unsigned int v31; // r1@40
  unsigned int v32; // r0@46
  unsigned int v33; // r0@53
  __int64 v34; // kr00_8@56
  unsigned int *v35; // r0@57
  unsigned int v36; // r1@59
  void *v37; // r6@62
  _DWORD *v38; // r0@62
  _QWORD *v39; // r9@62
  unsigned int *v40; // r1@63
  unsigned int v41; // r2@65
  int v42; // r3@68
  void (*v43)(void); // r3@68
  unsigned int *v44; // r1@71
  unsigned int v45; // r0@73
  void (__fastcall *v46)(char *, int, signed int); // r3@78
  char *v47; // r0@80
  int v48; // r0@81
  unsigned int *v49; // r2@82
  unsigned int v50; // r1@84
  unsigned int v51; // r0@91
  void (__fastcall *v52)(int *, int, signed int); // r3@94
  unsigned int *v53; // r0@96
  unsigned int v54; // r1@99
  int v55; // r3@102
  unsigned int v56; // r6@102
  void (*v57)(void); // r6@102
  int v58; // r4@102
  void *v59; // r10@102
  void *v60; // r0@102
  int v61; // r12@102
  _QWORD *v62; // r8@102
  int v63; // r1@102
  unsigned int *v64; // r1@103
  unsigned int v65; // r2@105
  unsigned __int64 v66; // r2@108
  int v67; // r5@108
  char *v68; // r1@108
  int v69; // r6@108
  void (*v70)(void); // r3@108
  char *v71; // r0@110
  int v72; // r0@113
  unsigned int *v73; // r2@114
  unsigned int v74; // r1@116
  void (__fastcall *v75)(char *, _QWORD *, signed int); // r3@121
  char *v76; // r0@123
  int v77; // r0@126
  unsigned int *v78; // r2@127
  unsigned int v79; // r1@129
  int v80; // r0@134
  void (__fastcall *v81)(__int64 *, int, signed int); // r3@134
  int v82; // r1@135
  int v83; // r6@137
  void (*v84)(void); // r3@137
  int v85; // r4@139
  int v86; // r3@141
  unsigned int v87; // r0@153
  unsigned int *v88; // r2@158
  signed int v89; // r1@160
  unsigned int *v90; // r2@162
  signed int v91; // r1@164
  unsigned int *v92; // r2@166
  signed int v93; // r1@168
  int v94; // [sp+20h] [bp-F8h]@68
  unsigned __int64 *v95; // [sp+24h] [bp-F4h]@2
  unsigned __int64 v96; // [sp+28h] [bp-F0h]@1
  int v97; // [sp+30h] [bp-E8h]@1
  char v98; // [sp+34h] [bp-E4h]@142
  void (*v99)(void); // [sp+3Ch] [bp-DCh]@141
  int v100; // [sp+40h] [bp-D8h]@142
  char v101; // [sp+44h] [bp-D4h]@140
  void (*v102)(void); // [sp+4Ch] [bp-CCh]@139
  int v103; // [sp+50h] [bp-C8h]@140
  unsigned int *v104; // [sp+54h] [bp-C4h]@89
  int v105; // [sp+58h] [bp-C0h]@89
  int v106; // [sp+5Ch] [bp-BCh]@95
  unsigned int v107; // [sp+60h] [bp-B8h]@102
  void (*v108)(void); // [sp+64h] [bp-B4h]@94
  unsigned int *v109; // [sp+68h] [bp-B0h]@95
  void *v110; // [sp+6Ch] [bp-ACh]@96
  char v111; // [sp+70h] [bp-A8h]@122
  void (*v112)(void); // [sp+78h] [bp-A0h]@121
  int v113; // [sp+7Ch] [bp-9Ch]@122
  int v114; // [sp+80h] [bp-98h]@51
  int v115; // [sp+84h] [bp-94h]@51
  void *v116; // [sp+88h] [bp-90h]@56
  char v117; // [sp+8Ch] [bp-8Ch]@79
  void (*v118)(void); // [sp+94h] [bp-84h]@78
  int v119; // [sp+98h] [bp-80h]@79
  void *s1; // [sp+9Ch] [bp-7Ch]@1
  _DWORD *v121; // [sp+A0h] [bp-78h]@68
  int v122; // [sp+A4h] [bp-74h]@68
  void (*v123)(void); // [sp+A8h] [bp-70h]@62
  int v124; // [sp+ACh] [bp-6Ch]@68
  unsigned int *v125; // [sp+B4h] [bp-64h]@96
  int v126; // [sp+B8h] [bp-60h]@96
  unsigned __int64 v127; // [sp+BCh] [bp-5Ch]@102
  void (*v128)(void); // [sp+C4h] [bp-54h]@102
  unsigned int *v129; // [sp+C8h] [bp-50h]@100
  void *v130; // [sp+CCh] [bp-4Ch]@102
  void *v131; // [sp+D0h] [bp-48h]@108
  int v132; // [sp+D4h] [bp-44h]@108
  void (*v133)(void); // [sp+D8h] [bp-40h]@102
  int v134; // [sp+DCh] [bp-3Ch]@108
  __int64 v135; // [sp+E0h] [bp-38h]@135
  void (*v136)(void); // [sp+E8h] [bp-30h]@134
  int v137; // [sp+ECh] [bp-2Ch]@135

  v6 = a1;
  v96 = a3;
  sub_21E8AF4((int *)&s1, (int *)(a2 + 16));
  v7 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  *(_QWORD *)(&v8 - 1) = *(_QWORD *)(v6 + 16);
  v97 = v6;
  v9 = v7 % (unsigned int)(*(_QWORD *)(v6 + 16) >> 32);
  v11 = *(_DWORD *)(v10 + 4 * v9);
  if ( !v11 )
    goto LABEL_8;
  v12 = *(_DWORD *)v11;
  v13 = s1;
  v14 = *(_DWORD *)(*(_DWORD *)v11 + 140);
  v95 = (unsigned __int64 *)(v97 + 16);
  while ( 1 )
  {
    if ( v14 == v7 )
    {
      v15 = *(_DWORD **)(v12 + 4);
      v16 = *(v13 - 3);
      if ( v16 == *(v15 - 3) && !memcmp(v13, v15, v16) )
        break;
    }
    v17 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 )
      v14 = *(_DWORD *)(v17 + 140);
      v11 = v12;
      v12 = *(_DWORD *)v12;
      if ( *(_DWORD *)(v17 + 140) % v8 == v9 )
        continue;
  }
  v19 = v11 == 0;
  if ( v11 )
    v19 = *(_DWORD *)v11 == 0;
  if ( v19 )
LABEL_8:
    if ( !*(_DWORD *)(a6 + 8) )
      sub_21E5F48();
    (*(void (**)(void))(a6 + 12))();
  else
    v20 = std::__detail::_Map_base<std::string,std::pair<std::string const,RealmsFileUploader::RealmUploadInfo>,std::allocator<std::pair<std::string const,RealmsFileUploader::RealmUploadInfo>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
            v95,
            (int **)&s1);
    v21 = *(_DWORD *)(v97 + 8);
    if ( !v21 )
      std::__throw_bad_weak_ptr();
    v22 = *(_DWORD *)(v21 + 4);
    v23 = (unsigned int *)(v21 + 4);
    do
      while ( 1 )
      {
        if ( !v22 )
          std::__throw_bad_weak_ptr();
        __dmb();
        v24 = __ldrex(v23);
        if ( v24 == v22 )
          break;
        __clrex();
        v22 = v24;
      }
      v25 = __strex(v22 + 1, v23);
      v22 = v24;
    while ( v25 );
    __dmb();
    v28 = *(_DWORD *)(v97 + 4);
    v29 = (unsigned int *)(v21 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 + 1, v29) );
    else
      ++*v29;
        v31 = __ldrex(v23);
      while ( __strex(v31 - 1, v23) );
      v31 = (*v23)--;
    if ( v31 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
      if ( &pthread_create )
        do
          v32 = __ldrex(v29);
        while ( __strex(v32 - 1, v29) );
      else
        v32 = (*v29)--;
      if ( v32 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
    v114 = v28;
    v115 = v21;
        v33 = __ldrex(v29);
      while ( __strex(v33 + 1, v29) );
    sub_21E8AF4((int *)&v116, (int *)&s1);
    v34 = *(_QWORD *)&v114;
    if ( v115 )
      v35 = (unsigned int *)(v115 + 8);
          v36 = __ldrex(v35);
        while ( __strex(v36 + 1, v35) );
        ++*v35;
    v37 = v116;
    v116 = &unk_28898CC;
    v123 = 0;
    v38 = operator new(0xCu);
    v39 = (_QWORD *)(v20 + 100);
    *(_QWORD *)v38 = v34;
    if ( HIDWORD(v34) )
      v40 = (unsigned int *)(HIDWORD(v34) + 8);
          v41 = __ldrex(v40);
        while ( __strex(v41 + 1, v40) );
        ++*v40;
    v38[2] = v37;
    v121 = v38;
    v42 = v122;
    *(_QWORD *)&v121 = *v39;
    *(_DWORD *)v39 = v38;
    *(_DWORD *)(v20 + 104) = v42;
    v123 = *(void (**)(void))(v20 + 108);
    v43 = v123;
    *(_DWORD *)(v20 + 108) = sub_16320EC;
    v124 = *(_DWORD *)(v20 + 112);
    v94 = v20;
    *(_DWORD *)(v20 + 112) = sub_1631DBC;
    if ( v43 )
      v43();
      v44 = (unsigned int *)(HIDWORD(v34) + 8);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v34) + 12))(HIDWORD(v34));
    v118 = 0;
    v46 = *(void (__fastcall **)(char *, int, signed int))(v20 + 108);
    if ( v46 )
      v46(&v117, v20 + 100, 2);
      v119 = *(_DWORD *)(v20 + 112);
      v118 = *(void (**)(void))(v20 + 108);
    v47 = (char *)v116 - 12;
    if ( (int *)((char *)v116 - 12) != &dword_28898C0 )
      v88 = (unsigned int *)((char *)v116 - 4);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 <= 0 )
        j_j_j_j__ZdlPv_9(v47);
    v48 = v115;
      v49 = (unsigned int *)(v115 + 8);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 == 1 )
        (*(void (**)(void))(*(_DWORD *)v48 + 12))();
    v104 = (unsigned int *)v28;
    v105 = v21;
        v51 = __ldrex(v29);
      while ( __strex(v51 + 1, v29) );
    v108 = 0;
    v52 = *(void (__fastcall **)(int *, int, signed int))(a6 + 8);
    if ( v52 )
      v52(&v106, a6, 2);
      v109 = *(unsigned int **)(a6 + 12);
      v108 = *(void (**)(void))(a6 + 8);
    sub_21E8AF4((int *)&v110, (int *)&s1);
    v53 = v104;
    v125 = v104;
    v126 = v105;
    if ( v105 )
      v53 = (unsigned int *)(v105 + 8);
          v54 = __ldrex(v53);
        while ( __strex(v54 + 1, v53) );
        v53 = v129;
        ++*v53;
    v56 = v107;
    v55 = v106;
    *(_QWORD *)&v106 = v127;
    v127 = __PAIR__(v56, v55);
    v57 = v108;
    v58 = (int)v109;
    v109 = v53;
    v59 = v110;
    v110 = &unk_28898CC;
    v128 = v57;
    v129 = (unsigned int *)v58;
    v130 = v59;
    v133 = 0;
    v60 = operator new(0x1Cu);
    v62 = (_QWORD *)(v94 + 116);
    *(_DWORD *)v60 = v125;
    v63 = v126;
    *((_DWORD *)v60 + 1) = v126;
    if ( v63 )
      v64 = (unsigned int *)(v63 + 8);
          v65 = __ldrex(v64);
        while ( __strex(v65 + 1, v64) );
        v58 = (int)v129;
        v57 = v128;
        v59 = v130;
        v61 = *((_DWORD *)v60 + 5);
        ++*v64;
    v66 = v127;
    v67 = *((_QWORD *)v60 + 1) >> 32;
    v127 = *((_QWORD *)v60 + 1);
    *((_QWORD *)v60 + 1) = v66;
    v128 = 0;
    *((_DWORD *)v60 + 4) = v57;
    v129 = (unsigned int *)v61;
    v68 = (char *)&unk_28898CC;
    *((_DWORD *)v60 + 5) = v58;
    *((_DWORD *)v60 + 6) = v59;
    v130 = &unk_28898CC;
    v131 = v60;
    v69 = v132;
    *(_QWORD *)&v131 = *v62;
    *(_DWORD *)v62 = v60;
    *(_DWORD *)(v94 + 120) = v69;
    v133 = *(void (**)(void))(v94 + 124);
    v70 = v133;
    *(_DWORD *)(v94 + 124) = sub_16323C4;
    v134 = *(_DWORD *)(v94 + 128);
    *(_DWORD *)(v94 + 128) = sub_1632238;
    if ( v70 )
      v70();
      v68 = (char *)v130;
    v71 = v68 - 12;
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v90 = (unsigned int *)(v68 - 4);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 <= 0 )
        j_j_j_j__ZdlPv_9(v71);
    if ( v128 )
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, signed int))v128)(&v127, &v127, 3);
    v72 = v126;
    if ( v126 )
      v73 = (unsigned int *)(v126 + 8);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 == 1 )
        (*(void (**)(void))(*(_DWORD *)v72 + 12))();
    v112 = 0;
    v75 = *(void (__fastcall **)(char *, _QWORD *, signed int))(v94 + 124);
    if ( v75 )
      v75(&v111, v62, 2);
      v113 = *(_DWORD *)(v94 + 128);
      v112 = *(void (**)(void))(v94 + 124);
    v76 = (char *)v110 - 12;
    if ( (int *)((char *)v110 - 12) != &dword_28898C0 )
      v92 = (unsigned int *)((char *)v110 - 4);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 <= 0 )
        j_j_j_j__ZdlPv_9(v76);
    if ( v108 )
      v108();
    v77 = v105;
      v78 = (unsigned int *)(v105 + 8);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 == 1 )
        (*(void (**)(void))(*(_DWORD *)v77 + 12))();
    v80 = 0;
    v136 = 0;
    v81 = *(void (__fastcall **)(__int64 *, int, signed int))(a5 + 8);
    if ( v81 )
      v81(&v135, a5, 2);
      v80 = *(_DWORD *)(a5 + 12);
      v137 = *(_DWORD *)(a5 + 12);
      v82 = *(_DWORD *)(a5 + 8);
      v136 = *(void (**)(void))(a5 + 8);
      v81 = (void (__fastcall *)(__int64 *, int, signed int))HIDWORD(v135);
      v61 = v135;
      v82 = 0;
    v83 = v94 + 84;
    v135 = *(_QWORD *)(v94 + 84);
    *(_DWORD *)v83 = v61;
    *(_DWORD *)(v83 + 4) = v81;
    v136 = *(void (**)(void))(v94 + 92);
    v84 = v136;
    *(_DWORD *)(v94 + 92) = v82;
    v137 = *(_DWORD *)(v94 + 96);
    *(_DWORD *)(v94 + 96) = v80;
    if ( v84 )
      v84();
    v85 = std::__detail::_Map_base<std::string,std::pair<std::string const,RealmsFileUploader::RealmUploadInfo>,std::allocator<std::pair<std::string const,RealmsFileUploader::RealmUploadInfo>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
    v102 = 0;
    if ( v118 )
      ((void (__fastcall *)(char *, char *, signed int))v118)(&v101, &v117, 2);
      v103 = v119;
      v102 = v118;
    v86 = (int)v112;
    v99 = 0;
    if ( v112 )
      ((void (__fastcall *)(char *, char *, signed int))v112)(&v98, &v111, 2);
      v100 = v113;
      v99 = v112;
    RealmsFileUploader::_uploadStream(v97, v85, (int *)&s1, v86, v96, a4, (int)&v101, (int)&v98);
    if ( v99 )
      v99();
    if ( v102 )
      v102();
      v112();
      v118();
        v87 = __ldrex(v29);
      while ( __strex(v87 - 1, v29) );
      v87 = (*v29)--;
    if ( v87 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  v18 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)((char *)s1 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
}


RealmsFileUploader::RealmUploadInfo *__fastcall RealmsFileUploader::RealmUploadInfo::~RealmUploadInfo(RealmsFileUploader::RealmUploadInfo *this)
{
  RealmsFileUploader::RealmUploadInfo *v1; // r4@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  void (*v4)(void); // r3@5
  int v5; // r5@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r0@10
  unsigned int *v8; // r6@14
  unsigned int v9; // r0@16
  int v10; // r5@21
  unsigned int *v11; // r1@22
  unsigned int v12; // r0@24
  unsigned int *v13; // r6@28
  unsigned int v14; // r0@30
  int v15; // r5@35
  unsigned int *v16; // r1@36
  unsigned int v17; // r0@38
  unsigned int *v18; // r6@42
  unsigned int v19; // r0@44
  void *v20; // r0@49
  int v21; // r1@51
  void *v22; // r0@51
  int v23; // r1@52
  void *v24; // r0@52
  int v25; // r1@53
  void *v26; // r0@53
  int v27; // r1@54
  void *v28; // r0@54
  int v29; // r1@55
  void *v30; // r0@55
  int *v31; // r0@56
  unsigned int *v33; // r2@58
  signed int v34; // r1@60
  unsigned int *v35; // r2@62
  signed int v36; // r1@64
  unsigned int *v37; // r2@66
  signed int v38; // r1@68
  unsigned int *v39; // r2@70
  signed int v40; // r1@72
  unsigned int *v41; // r2@74
  signed int v42; // r1@76
  unsigned int *v43; // r2@78
  signed int v44; // r1@80

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 31);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 27);
  if ( v3 )
    v3();
  v4 = (void (*)(void))*((_DWORD *)v1 + 23);
  if ( v4 )
    v4();
  *((_DWORD *)v1 + 18) = &off_26DDAC4;
  v5 = *((_DWORD *)v1 + 20);
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  *((_DWORD *)v1 + 15) = &off_26DDAC4;
  v10 = *((_DWORD *)v1 + 17);
  if ( v10 )
    v11 = (unsigned int *)(v10 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v15 = *((_DWORD *)v1 + 14);
  if ( v15 )
    v16 = (unsigned int *)(v15 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v20 = (void *)*((_DWORD *)v1 + 10);
  if ( v20 )
    operator delete(v20);
  v21 = *((_DWORD *)v1 + 7);
  v22 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v21 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = *((_DWORD *)v1 + 5);
  v24 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v23 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = *((_DWORD *)v1 + 4);
  v26 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v25 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = *((_DWORD *)v1 + 2);
  v28 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v27 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = *((_DWORD *)v1 + 1);
  v30 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v29 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (int *)(*(_DWORD *)v1 - 12);
  if ( v31 != &dword_28898C0 )
    v43 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  return v1;
}


char *__fastcall RealmsFileUploader::UploadResultBuilder::buildUploadResult(RealmsFileUploader::UploadResultBuilder *this, int *a2)
{
  RealmsFileUploader::UploadResultBuilder *v2; // r7@1
  int *v3; // r6@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+4h] [bp-34h]@1
  int v12; // [sp+8h] [bp-30h]@1

  v2 = this;
  v3 = a2;
  sub_21E8AF4(&v12, a2);
  sub_21E8AF4(&v11, v3 + 1);
  RealmsFileUploader::UploadResult::UploadResult((int)v2, &v12, &v11);
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E7EE0((const void **)v3, 0, *(_BYTE **)(*v3 - 12), 0);
  return sub_21E7EE0((const void **)v3 + 1, 0, *(_BYTE **)(v3[1] - 12), 0);
}


int __fastcall RealmsFileUploader::UploadResult::UploadResult(int a1, int *a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  void *v5; // r0@1
  void *v6; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // [sp+0h] [bp-30h]@1
  int v13; // [sp+4h] [bp-2Ch]@1

  v3 = a1;
  v4 = a3;
  *(_DWORD *)a1 = 4;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_DWORD *)(a1 + 8) = &unk_28898CC;
  sub_21E8AF4(&v13, a2);
  sub_21E8AF4(&v12, v4);
  RealmsFileUploader::UploadResult::_parse(v3, &v13, &v12);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  return v3;
}


void __fastcall RealmsFileUploader::initFileUploader(int a1, int *a2, int a3, int a4, int a5)
{
  RealmsFileUploader::initFileUploader(a1, a2, a3, a4, a5);
}


void __fastcall RealmsFileUploader::~RealmsFileUploader(RealmsFileUploader *this)
{
  RealmsFileUploader::~RealmsFileUploader(this);
}


int __fastcall RealmsFileUploader::UploadResult::UploadResult(int result)
{
  *(_DWORD *)result = 4;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  return result;
}


RealmsFileUploader *__fastcall RealmsFileUploader::~RealmsFileUploader(RealmsFileUploader *this)
{
  RealmsFileUploader *v1; // r10@1
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
  _DWORD *v14; // r7@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  _DWORD *v17; // r6@17
  RealmsFileUploader::RealmUploadInfo *v18; // r0@17
  int v19; // r1@17
  void *v20; // r0@17
  char *v21; // r0@19
  int v22; // r0@22
  unsigned int *v23; // r2@23
  unsigned int v24; // r1@25
  int v26; // [sp+0h] [bp-40h]@1
  __int64 v27; // [sp+4h] [bp-3Ch]@1
  int v28; // [sp+Ch] [bp-34h]@1
  int v29; // [sp+10h] [bp-30h]@1
  int v30; // [sp+14h] [bp-2Ch]@1
  int v31; // [sp+18h] [bp-28h]@1
  int v32; // [sp+1Ch] [bp-24h]@1

  v1 = this;
  *(_DWORD *)this = &off_26EBD20;
  v2 = *((_DWORD *)this + 14);
  v3 = *((_DWORD *)this + 15);
  v4 = *((_DWORD *)this + 16);
  v5 = *((_DWORD *)this + 17);
  v6 = *((_QWORD *)this + 9);
  v7 = *((_DWORD *)this + 20);
  v29 = *((_DWORD *)this + 13);
  v30 = v2;
  v31 = v3;
  v32 = v4;
  v26 = v5;
  v27 = v6;
  v28 = v7;
  v8 = (void **)((char *)this + 44);
  std::deque<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_destroy_data_aux(
    (int)this + 44,
    (int)&v29,
    (int)&v26);
  v9 = (void *)*((_DWORD *)v1 + 11);
  if ( v9 )
  {
    v10 = *((_DWORD *)v1 + 20);
    v11 = *((_DWORD *)v1 + 16);
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
  v14 = (_DWORD *)*((_DWORD *)v1 + 6);
  while ( v14 )
    v17 = v14;
    v18 = (RealmsFileUploader::RealmUploadInfo *)(v14 + 2);
    v14 = (_DWORD *)*v14;
    RealmsFileUploader::RealmUploadInfo::~RealmUploadInfo(v18);
    v19 = v17[1];
    v20 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    operator delete(v17);
  _aeabi_memclr4(*((_QWORD *)v1 + 2), 4 * (*((_QWORD *)v1 + 2) >> 32));
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 7) = 0;
  v21 = (char *)*((_DWORD *)v1 + 4);
  if ( v21 && (char *)v1 + 40 != v21 )
    operator delete(v21);
  v22 = *((_DWORD *)v1 + 2);
  if ( v22 )
    v23 = (unsigned int *)(v22 + 8);
    if ( &pthread_create )
      __dmb();
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    else
      v24 = (*v23)--;
    if ( v24 == 1 )
      (*(void (**)(void))(*(_DWORD *)v22 + 12))();
  IFileChunkUploader::~IFileChunkUploader(v1);
  return v1;
}
