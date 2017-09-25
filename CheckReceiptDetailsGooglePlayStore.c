

CheckReceiptDetailsGooglePlayStore *__fastcall CheckReceiptDetailsGooglePlayStore::~CheckReceiptDetailsGooglePlayStore(CheckReceiptDetailsGooglePlayStore *this)
{
  CheckReceiptDetailsGooglePlayStore *v1; // r4@1
  void **v2; // r5@1
  ReceiptFulfillment::ReceiptData *v3; // r0@3
  ReceiptFulfillment::ReceiptData *v4; // r5@3

  v1 = this;
  *(_DWORD *)this = &off_26E71E4;
  v2 = (void **)((char *)this + 20);
  std::_Destroy<ReceiptData_Google *,ReceiptData_Google>(*((_DWORD *)this + 5), *((_DWORD *)this + 6));
  if ( *v2 )
    operator delete(*v2);
  *(_DWORD *)v1 = &off_26E721C;
  v4 = (ReceiptFulfillment::ReceiptData *)(*((_QWORD *)v1 + 1) >> 32);
  v3 = (ReceiptFulfillment::ReceiptData *)*((_QWORD *)v1 + 1);
  if ( v3 != v4 )
  {
    do
      v3 = (ReceiptFulfillment::ReceiptData *)((char *)ReceiptFulfillment::ReceiptData::~ReceiptData(v3) + 32);
    while ( v4 != v3 );
    v3 = (ReceiptFulfillment::ReceiptData *)*((_DWORD *)v1 + 2);
  }
  if ( v3 )
    operator delete((void *)v3);
  return v1;
}


void __fastcall CheckReceiptDetailsGooglePlayStore::toPostBody(CheckReceiptDetailsGooglePlayStore *this, int a2)
{
  CheckReceiptDetailsGooglePlayStore::toPostBody(this, a2);
}


int __fastcall CheckReceiptDetailsGooglePlayStore::fromJsonResponse(CheckReceiptDetailsGooglePlayStore *this, const web::json::value *a2)
{
  web::json::value *v2; // r5@1
  CheckReceiptDetailsGooglePlayStore *v3; // r4@1
  int result; // r0@1
  unsigned __int64 v5; // kr00_8@2
  web::json::value *v6; // r5@2
  unsigned __int64 v7; // kr08_8@2
  int v8; // ST24_4@2
  void **v9; // r8@3
  int *v10; // r4@3
  unsigned int *v11; // r2@4
  signed int v12; // r1@6
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  unsigned int *v19; // r2@20
  signed int v20; // r1@22
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  unsigned int *v23; // r2@28
  signed int v24; // r1@30
  unsigned int *v25; // r2@32
  signed int v26; // r1@34
  unsigned int *v27; // r2@36
  signed int v28; // r1@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  unsigned int *v31; // r2@44
  signed int v32; // r1@46
  void *v33; // r0@92
  const void **v34; // r9@93
  void *v35; // r0@93
  void *v36; // r0@94
  char *v37; // r0@95
  void *v38; // r0@96
  void *v39; // r0@97
  char *v40; // r0@98
  void *v41; // r0@99
  void *v42; // r0@100
  char *v43; // r0@101
  void *v44; // r0@102
  __int64 v45; // r0@103
  unsigned __int64 *v46; // [sp+14h] [bp-A4h]@3
  CheckReceiptDetailsGooglePlayStore *v47; // [sp+28h] [bp-90h]@1
  web::json::value *v48; // [sp+2Ch] [bp-8Ch]@93
  char *v49; // [sp+30h] [bp-88h]@40
  int v50; // [sp+38h] [bp-80h]@44
  int v51; // [sp+3Ch] [bp-7Ch]@36
  char *v52; // [sp+40h] [bp-78h]@28
  int v53; // [sp+48h] [bp-70h]@32
  int v54; // [sp+4Ch] [bp-6Ch]@24
  char *v55; // [sp+50h] [bp-68h]@16
  int v56; // [sp+58h] [bp-60h]@20
  int v57; // [sp+5Ch] [bp-5Ch]@3
  int v58; // [sp+64h] [bp-54h]@3
  int v59; // [sp+6Ch] [bp-4Ch]@4
  void *v60; // [sp+70h] [bp-48h]@92
  void *v61; // [sp+74h] [bp-44h]@92
  void *v62; // [sp+78h] [bp-40h]@92
  void *v63; // [sp+7Ch] [bp-3Ch]@92
  void *v64; // [sp+80h] [bp-38h]@92
  void *v65; // [sp+84h] [bp-34h]@92
  void *v66; // [sp+88h] [bp-30h]@92
  char v67; // [sp+8Ch] [bp-2Ch]@92

  v2 = a2;
  v3 = this;
  v47 = this;
  result = web::json::value::type(a2);
  if ( result == 4 )
  {
    v5 = *(_QWORD *)web::json::value::as_array(v2);
    result = HIDWORD(v5);
    v7 = v5;
    v8 = v7 >> 32;
    v6 = (web::json::value *)v7;
    if ( (_DWORD)v5 != HIDWORD(v5) )
    {
      v46 = (unsigned __int64 *)((char *)v3 + 8);
      v9 = (void **)&v58;
      v10 = &v57;
      do
      {
        v60 = &unk_28898CC;
        v61 = &unk_28898CC;
        v62 = &unk_28898CC;
        v63 = &unk_28898CC;
        v64 = &unk_28898CC;
        v65 = &unk_28898CC;
        v66 = &unk_28898CC;
        v67 = 0;
        sub_21E94B4((void **)&v59, "fulfilled");
        v67 = webjson::getFieldAsBool(v6, &v59, 0);
        v33 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) != &dword_28898C0 )
        {
          v11 = (unsigned int *)(v59 - 4);
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
            j_j_j_j__ZdlPv_9(v33);
        }
        sub_21E94B4(v9, "receipt");
        v48 = v6;
        v34 = webjson::getFieldAsObject(v6, (int *)v9);
        v35 = (void *)(v58 - 12);
        if ( (int *)(v58 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v58 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v35);
        sub_21E94B4((void **)&v56, "package_name");
        v55 = (char *)&unk_28898CC;
        webjson::getFieldAsString(v10, (web::json::value *)v34, &v56, (int *)&v55);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v60,
          v10);
        v36 = (void *)(v57 - 12);
        if ( (int *)(v57 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v57 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v36);
        v37 = v55 - 12;
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v55 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v37);
        v38 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v56 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v38);
        sub_21E94B4((void **)&v53, "purchase_token");
        v52 = (char *)&unk_28898CC;
        webjson::getFieldAsString(&v54, (web::json::value *)v34, &v53, (int *)&v52);
          (int *)&v61,
          &v54);
        v39 = (void *)(v54 - 12);
        if ( (int *)(v54 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v54 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v39);
        v40 = v52 - 12;
        if ( (int *)(v52 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v52 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v40);
        v41 = (void *)(v53 - 12);
        if ( (int *)(v53 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v53 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
        sub_21E94B4((void **)&v50, "product_id");
        v49 = (char *)&unk_28898CC;
        webjson::getFieldAsString(&v51, (web::json::value *)v34, &v50, (int *)&v49);
          (int *)&v62,
          &v51);
        v9 = (void **)&v58;
        v42 = (void *)(v51 - 12);
        if ( (int *)(v51 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v51 - 4);
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j__ZdlPv_9(v42);
        v43 = v49 - 12;
        if ( (int *)(v49 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v49 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v43);
        v44 = (void *)(v50 - 12);
        if ( (int *)(v50 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)(v50 - 4);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v44);
        v45 = *(_QWORD *)((char *)v47 + 12);
        if ( (_DWORD)v45 == HIDWORD(v45) )
          std::vector<ReceiptFulfillment::ReceiptData,std::allocator<ReceiptFulfillment::ReceiptData>>::_M_emplace_back_aux<ReceiptFulfillment::ReceiptData>(
            v46,
            (int)&v60);
          v10 = &v57;
        else
          *(_DWORD *)v45 = v60;
          v60 = &unk_28898CC;
          *(_DWORD *)(v45 + 4) = v61;
          v61 = &unk_28898CC;
          *(_DWORD *)(v45 + 8) = v62;
          v62 = &unk_28898CC;
          *(_DWORD *)(v45 + 12) = v63;
          v63 = &unk_28898CC;
          *(_DWORD *)(v45 + 16) = v64;
          v64 = &unk_28898CC;
          *(_DWORD *)(v45 + 20) = v65;
          v65 = &unk_28898CC;
          *(_DWORD *)(v45 + 24) = v66;
          v66 = &unk_28898CC;
          *(_BYTE *)(v45 + 28) = v67;
          *((_DWORD *)v47 + 3) = v45 + 32;
        ReceiptFulfillment::ReceiptData::~ReceiptData((ReceiptFulfillment::ReceiptData *)&v60);
        result = HIDWORD(v5);
        v6 = (web::json::value *)((char *)v6 + 4);
      }
      while ( (web::json::value *)((char *)v48 + 4) != (web::json::value *)HIDWORD(v5) );
    }
  }
  return result;
}


void __fastcall CheckReceiptDetailsGooglePlayStore::~CheckReceiptDetailsGooglePlayStore(CheckReceiptDetailsGooglePlayStore *this)
{
  CheckReceiptDetailsGooglePlayStore *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  int v10; // r1@27
  void *v11; // r0@27
  int v12; // r1@28
  void *v13; // r0@28
  int *v14; // r0@29
  ReceiptFulfillment::ReceiptData *v15; // r0@34
  ReceiptFulfillment::ReceiptData *v16; // r5@34

  v1 = this;
  *(_DWORD *)this = &off_26E71E4;
  v3 = *(_QWORD *)((char *)this + 20) >> 32;
  v2 = *(_QWORD *)((char *)this + 20);
  if ( v2 != v3 )
  {
    do
    {
      v10 = *(_DWORD *)(v2 + 8);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      }
      v12 = *(_DWORD *)(v2 + 4);
      v13 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v12 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v14 = (int *)(*(_DWORD *)v2 - 12);
      if ( v14 != &dword_28898C0 )
        v8 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v2 += 12;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 5);
  }
  if ( v2 )
    operator delete((void *)v2);
  *(_DWORD *)v1 = &off_26E721C;
  v16 = (ReceiptFulfillment::ReceiptData *)(*((_QWORD *)v1 + 1) >> 32);
  v15 = (ReceiptFulfillment::ReceiptData *)*((_QWORD *)v1 + 1);
  if ( v15 != v16 )
      v15 = (ReceiptFulfillment::ReceiptData *)((char *)ReceiptFulfillment::ReceiptData::~ReceiptData(v15) + 32);
    while ( v16 != v15 );
    v15 = (ReceiptFulfillment::ReceiptData *)*((_DWORD *)v1 + 2);
  if ( v15 )
    operator delete((void *)v15);
  operator delete((void *)v1);
}


void __fastcall CheckReceiptDetailsGooglePlayStore::toPostBody(CheckReceiptDetailsGooglePlayStore *this, int a2)
{
  int v2; // r11@1
  web::json::value *v3; // r9@2
  void **v4; // r5@2
  int *v5; // r4@2
  int *v6; // r10@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  unsigned int *v15; // r2@19
  signed int v16; // r1@21
  unsigned int *v17; // r2@23
  signed int v18; // r1@25
  unsigned int *v19; // r2@27
  signed int v20; // r1@29
  int *v21; // r7@59
  int *v22; // r4@59
  void *v23; // r0@61
  void *v24; // r0@62
  int *v25; // r9@63
  void *v26; // r0@65
  void *v27; // r0@66
  int *v28; // r4@67
  void *v29; // r0@69
  void *v30; // r0@70
  int *v31; // r0@71
  void *v32; // r0@71
  __int64 v33; // r4@80
  void *v34; // r0@87
  __int64 v35; // r4@90
  unsigned int *v36; // r2@98
  signed int v37; // r1@100
  CheckReceiptDetailsGooglePlayStore *v38; // [sp+8h] [bp-98h]@1
  int v39; // [sp+10h] [bp-90h]@1
  int v40; // [sp+14h] [bp-8Ch]@61
  int v41; // [sp+18h] [bp-88h]@87
  int v42; // [sp+1Ch] [bp-84h]@80
  int v43; // [sp+20h] [bp-80h]@80
  int v44; // [sp+28h] [bp-78h]@80
  int v45; // [sp+30h] [bp-70h]@27
  int v46; // [sp+34h] [bp-6Ch]@71
  int v47; // [sp+38h] [bp-68h]@19
  int v48; // [sp+3Ch] [bp-64h]@67
  int v49; // [sp+44h] [bp-5Ch]@23
  int v50; // [sp+48h] [bp-58h]@11
  int v51; // [sp+4Ch] [bp-54h]@63
  int v52; // [sp+54h] [bp-4Ch]@15
  int v53; // [sp+58h] [bp-48h]@3
  int v54; // [sp+5Ch] [bp-44h]@2
  int v55; // [sp+64h] [bp-3Ch]@2
  int v56; // [sp+68h] [bp-38h]@2
  _DWORD *v57; // [sp+6Ch] [bp-34h]@1
  _DWORD *v58; // [sp+70h] [bp-30h]@1
  _DWORD *v59; // [sp+74h] [bp-2Ch]@1

  v38 = this;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v2 = *(_QWORD *)(a2 + 20);
  v39 = *(_QWORD *)(a2 + 20) >> 32;
  if ( v2 != v39 )
  {
    v3 = (web::json::value *)&v56;
    v4 = (void **)&v55;
    v5 = &v54;
    v6 = &dword_28898C0;
    do
    {
      web::json::value::object(v3, 0);
      sub_21E94B4(v4, "package_name");
      v21 = v5;
      v22 = (int *)web::json::value::operator[]((int)v3);
      utility::conversions::to_string_t(&v53, (int *)v2);
      web::json::value::value(v21, &v53);
      web::json::value::operator=(v22, v21);
      if ( v54 )
        (*(void (**)(void))(*(_DWORD *)v54 + 96))();
      v54 = 0;
      v23 = (void *)(v53 - 12);
      v40 = v2;
      if ( (int *)(v53 - 12) != v6 )
      {
        v7 = (unsigned int *)(v53 - 4);
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
          j_j_j_j__ZdlPv_9(v23);
      }
      v24 = (void *)(v55 - 12);
      if ( (int *)(v55 - 12) != v6 )
        v9 = (unsigned int *)(v55 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      sub_21E94B4((void **)&v52, "purchase_token");
      v25 = (int *)web::json::value::operator[]((int)v3);
      utility::conversions::to_string_t(&v50, (int *)(v2 + 4));
      web::json::value::value(&v51, &v50);
      web::json::value::operator=(v25, &v51);
      if ( v51 )
        (*(void (**)(void))(*(_DWORD *)v51 + 96))();
      v6 = &dword_28898C0;
      v51 = 0;
      v26 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v50 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      v27 = (void *)(v52 - 12);
      if ( (int *)(v52 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v52 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      sub_21E94B4((void **)&v49, "product_id");
      v28 = (int *)web::json::value::operator[]((int)&v56);
      utility::conversions::to_string_t(&v47, (int *)(v2 + 8));
      web::json::value::value(&v48, &v47);
      web::json::value::operator=(v28, &v48);
      if ( v48 )
        (*(void (**)(void))(*(_DWORD *)v48 + 96))();
      v48 = 0;
      v5 = &v54;
      v29 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v47 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v5 = &v54;
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      v30 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v49 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      web::json::value::object((web::json::value *)&v46, 0);
      sub_21E94B4((void **)&v45, "receipt");
      v31 = (int *)web::json::value::operator[]((int)&v46);
      web::json::value::operator=(v31, &v56);
      v32 = (void *)(v45 - 12);
      if ( (int *)(v45 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v45 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      v3 = (web::json::value *)&v56;
      if ( v58 == v59 )
        std::vector<web::json::value,std::allocator<web::json::value>>::_M_emplace_back_aux<web::json::value>(
          (unsigned __int64 *)&v57,
          &v46);
      else
        v58 = web::json::value::value(v58, &v46) + 1;
      if ( v46 )
        (*(void (**)(void))(*(_DWORD *)v46 + 96))();
      v4 = (void **)&v55;
      if ( v56 )
        (*(void (**)(void))(*(_DWORD *)v56 + 96))();
      v2 += 12;
    }
    while ( v40 + 12 != v39 );
  }
  std::vector<web::json::value,std::allocator<web::json::value>>::vector((int)&v42, (__int64 *)&v57);
  web::json::value::array(&v44, (int)&v42);
  v33 = *(_QWORD *)&v42;
  if ( v42 != v43 )
      if ( *(_DWORD *)v33 )
        (*(void (**)(void))(**(_DWORD **)v33 + 96))();
      *(_DWORD *)v33 = 0;
      LODWORD(v33) = v33 + 4;
    while ( HIDWORD(v33) != (_DWORD)v33 );
    LODWORD(v33) = v42;
  if ( (_DWORD)v33 )
    operator delete((void *)v33);
  web::json::value::serialize((web::json::value *)&v41, (int)&v44);
  utility::conversions::to_utf8string(v38, &v41);
  v34 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v41 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
    else
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  if ( v44 )
    (*(void (**)(void))(*(_DWORD *)v44 + 96))();
  v35 = *(_QWORD *)&v57;
  if ( v57 != v58 )
      if ( *(_DWORD *)v35 )
        (*(void (**)(void))(**(_DWORD **)v35 + 96))();
      *(_DWORD *)v35 = 0;
      LODWORD(v35) = v35 + 4;
    while ( HIDWORD(v35) != (_DWORD)v35 );
    LODWORD(v35) = v57;
  if ( (_DWORD)v35 )
    operator delete((void *)v35);
}


void __fastcall CheckReceiptDetailsGooglePlayStore::~CheckReceiptDetailsGooglePlayStore(CheckReceiptDetailsGooglePlayStore *this)
{
  CheckReceiptDetailsGooglePlayStore::~CheckReceiptDetailsGooglePlayStore(this);
}


const char *__fastcall CheckReceiptDetailsGooglePlayStore::getPath(CheckReceiptDetailsGooglePlayStore *this)
{
  return "iap/playstore/1.0/check";
}
