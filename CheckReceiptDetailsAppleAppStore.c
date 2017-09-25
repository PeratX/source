

const char *__fastcall CheckReceiptDetailsAppleAppStore::getPath(CheckReceiptDetailsAppleAppStore *this)
{
  return "iap/appstore/1.0/check";
}


void __fastcall CheckReceiptDetailsAppleAppStore::toPostBody(CheckReceiptDetailsAppleAppStore *this, int a2)
{
  int v2; // r6@1
  void **v3; // r9@2
  int *v4; // r8@2
  int *v5; // r4@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  int *v16; // r7@43
  int *v17; // r4@43
  int *v18; // r1@43
  int *v19; // r8@43
  int *v20; // r0@43
  int *v21; // r7@43
  void *v22; // r0@45
  void *v23; // r0@46
  int *v24; // r9@47
  void *v25; // r0@49
  void *v26; // r0@50
  int *v27; // r0@51
  void *v28; // r0@51
  __int64 v29; // r4@60
  void *v30; // r0@67
  __int64 v31; // r4@70
  unsigned int *v32; // r2@78
  signed int v33; // r1@80
  CheckReceiptDetailsAppleAppStore *v34; // [sp+8h] [bp-88h]@1
  int v35; // [sp+Ch] [bp-84h]@1
  int v36; // [sp+18h] [bp-78h]@67
  int v37; // [sp+1Ch] [bp-74h]@60
  int v38; // [sp+20h] [bp-70h]@60
  int v39; // [sp+28h] [bp-68h]@60
  int v40; // [sp+30h] [bp-60h]@19
  int v41; // [sp+34h] [bp-5Ch]@51
  int v42; // [sp+38h] [bp-58h]@11
  int v43; // [sp+3Ch] [bp-54h]@47
  int v44; // [sp+44h] [bp-4Ch]@15
  int v45; // [sp+48h] [bp-48h]@2
  int v46; // [sp+4Ch] [bp-44h]@2
  int v47; // [sp+54h] [bp-3Ch]@2
  int v48; // [sp+58h] [bp-38h]@43
  _DWORD *v49; // [sp+5Ch] [bp-34h]@1
  _DWORD *v50; // [sp+60h] [bp-30h]@1
  _DWORD *v51; // [sp+64h] [bp-2Ch]@1

  v34 = this;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v2 = *(_QWORD *)(a2 + 20);
  v35 = *(_QWORD *)(a2 + 20) >> 32;
  if ( v2 != v35 )
  {
    v3 = (void **)&v47;
    v4 = &v45;
    v5 = &v46;
    do
    {
      web::json::value::object((web::json::value *)&v48, 0);
      sub_21E94B4(v3, "transaction_id");
      v16 = v5;
      v17 = (int *)web::json::value::operator[]((int)&v48);
      utility::conversions::to_string_t(v4, (int *)v2);
      v18 = v4;
      v19 = v16;
      v20 = v16;
      v21 = v18;
      web::json::value::value(v20, v18);
      web::json::value::operator=(v17, v19);
      if ( v46 )
        (*(void (**)(void))(*(_DWORD *)v46 + 96))();
      v46 = 0;
      v22 = (void *)(v45 - 12);
      if ( (int *)(v45 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v45 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      }
      v23 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v47 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      sub_21E94B4((void **)&v44, "receipt_data");
      v24 = (int *)web::json::value::operator[]((int)&v48);
      utility::conversions::to_string_t(&v42, (int *)(v2 + 4));
      web::json::value::value(&v43, &v42);
      web::json::value::operator=(v24, &v43);
      if ( v43 )
        (*(void (**)(void))(*(_DWORD *)v43 + 96))();
      v43 = 0;
      v25 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v42 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      v5 = v19;
      v26 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v44 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v5 = v19;
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      web::json::value::object((web::json::value *)&v41, 0);
      v4 = v21;
      sub_21E94B4((void **)&v40, "receipt");
      v27 = (int *)web::json::value::operator[]((int)&v41);
      web::json::value::operator=(v27, &v48);
      v3 = (void **)&v47;
      v28 = (void *)(v40 - 12);
      if ( (int *)(v40 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v40 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      if ( v50 == v51 )
        std::vector<web::json::value,std::allocator<web::json::value>>::_M_emplace_back_aux<web::json::value>(
          (unsigned __int64 *)&v49,
          &v41);
      else
        v50 = web::json::value::value(v50, &v41) + 1;
      if ( v41 )
        (*(void (**)(void))(*(_DWORD *)v41 + 96))();
      if ( v48 )
        (*(void (**)(void))(*(_DWORD *)v48 + 96))();
      v2 += 8;
    }
    while ( v2 != v35 );
  }
  std::vector<web::json::value,std::allocator<web::json::value>>::vector((int)&v37, (__int64 *)&v49);
  web::json::value::array(&v39, (int)&v37);
  v29 = *(_QWORD *)&v37;
  if ( v37 != v38 )
      if ( *(_DWORD *)v29 )
        (*(void (**)(void))(**(_DWORD **)v29 + 96))();
      *(_DWORD *)v29 = 0;
      LODWORD(v29) = v29 + 4;
    while ( HIDWORD(v29) != (_DWORD)v29 );
    LODWORD(v29) = v37;
  if ( (_DWORD)v29 )
    operator delete((void *)v29);
  web::json::value::serialize((web::json::value *)&v36, (int)&v39);
  utility::conversions::to_utf8string(v34, &v36);
  v30 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  if ( v39 )
    (*(void (**)(void))(*(_DWORD *)v39 + 96))();
  v31 = *(_QWORD *)&v49;
  if ( v49 != v50 )
      if ( *(_DWORD *)v31 )
        (*(void (**)(void))(**(_DWORD **)v31 + 96))();
      *(_DWORD *)v31 = 0;
      LODWORD(v31) = v31 + 4;
    while ( HIDWORD(v31) != (_DWORD)v31 );
    LODWORD(v31) = v49;
  if ( (_DWORD)v31 )
    operator delete((void *)v31);
}


CheckReceiptDetailsAppleAppStore *__fastcall CheckReceiptDetailsAppleAppStore::~CheckReceiptDetailsAppleAppStore(CheckReceiptDetailsAppleAppStore *this)
{
  CheckReceiptDetailsAppleAppStore *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20
  ReceiptFulfillment::ReceiptData *v11; // r0@25
  ReceiptFulfillment::ReceiptData *v12; // r5@25

  v1 = this;
  *(_DWORD *)this = &off_26E7200;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 20);
  if ( v2 != v3 )
  {
    do
    {
      v8 = *(_DWORD *)(v2 + 4);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (int *)(*(_DWORD *)v2 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 5);
  }
  if ( v2 )
    operator delete((void *)v2);
  *(_DWORD *)v1 = &off_26E721C;
  v12 = (ReceiptFulfillment::ReceiptData *)(*((_QWORD *)v1 + 1) >> 32);
  v11 = (ReceiptFulfillment::ReceiptData *)*((_QWORD *)v1 + 1);
  if ( v11 != v12 )
      v11 = (ReceiptFulfillment::ReceiptData *)((char *)ReceiptFulfillment::ReceiptData::~ReceiptData(v11) + 32);
    while ( v12 != v11 );
    v11 = (ReceiptFulfillment::ReceiptData *)*((_DWORD *)v1 + 2);
  if ( v11 )
    operator delete((void *)v11);
  return v1;
}


void __fastcall CheckReceiptDetailsAppleAppStore::toPostBody(CheckReceiptDetailsAppleAppStore *this, int a2)
{
  CheckReceiptDetailsAppleAppStore::toPostBody(this, a2);
}


void __fastcall CheckReceiptDetailsAppleAppStore::~CheckReceiptDetailsAppleAppStore(CheckReceiptDetailsAppleAppStore *this)
{
  CheckReceiptDetailsAppleAppStore *v1; // r0@1

  v1 = CheckReceiptDetailsAppleAppStore::~CheckReceiptDetailsAppleAppStore(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall CheckReceiptDetailsAppleAppStore::fromJsonResponse(CheckReceiptDetailsAppleAppStore *this, const web::json::value *a2)
{
  web::json::value *v2; // r5@1
  CheckReceiptDetailsAppleAppStore *v3; // r4@1
  int result; // r0@1
  unsigned __int64 v5; // kr00_8@2
  web::json::value *v6; // r9@2
  unsigned __int64 v7; // kr08_8@2
  int v8; // ST20_4@2
  void **v9; // r8@3
  void **v10; // r11@3
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
  void *v27; // r0@68
  const void **v28; // r11@69
  void *v29; // r0@69
  void *v30; // r0@70
  char *v31; // r0@71
  void *v32; // r0@72
  void *v33; // r0@73
  char *v34; // r0@74
  void *v35; // r0@75
  __int64 v36; // r0@76
  CheckReceiptDetailsAppleAppStore *v37; // [sp+24h] [bp-7Ch]@1
  char *v38; // [sp+28h] [bp-78h]@28
  int v39; // [sp+30h] [bp-70h]@32
  int v40; // [sp+34h] [bp-6Ch]@24
  char *v41; // [sp+38h] [bp-68h]@16
  int v42; // [sp+40h] [bp-60h]@20
  int v43; // [sp+44h] [bp-5Ch]@12
  int v44; // [sp+4Ch] [bp-54h]@3
  int v45; // [sp+54h] [bp-4Ch]@3
  void *v46; // [sp+58h] [bp-48h]@68
  void *v47; // [sp+5Ch] [bp-44h]@68
  void *v48; // [sp+60h] [bp-40h]@68
  void *v49; // [sp+64h] [bp-3Ch]@68
  void *v50; // [sp+68h] [bp-38h]@68
  void *v51; // [sp+6Ch] [bp-34h]@68
  void *v52; // [sp+70h] [bp-30h]@68
  char v53; // [sp+74h] [bp-2Ch]@68

  v2 = a2;
  v3 = this;
  v37 = this;
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
      v9 = (void **)&v45;
      v10 = (void **)&v44;
      do
      {
        v46 = &unk_28898CC;
        v47 = &unk_28898CC;
        v48 = &unk_28898CC;
        v49 = &unk_28898CC;
        v50 = &unk_28898CC;
        v51 = &unk_28898CC;
        v52 = &unk_28898CC;
        v53 = 0;
        sub_21E94B4(v9, "fulfilled");
        v53 = webjson::getFieldAsBool(v6, (int *)v9, 0);
        v27 = (void *)(v45 - 12);
        if ( (int *)(v45 - 12) != &dword_28898C0 )
        {
          v11 = (unsigned int *)(v45 - 4);
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
            j_j_j_j__ZdlPv_9(v27);
        }
        sub_21E94B4(v10, "receipt");
        v28 = webjson::getFieldAsObject(v6, (int *)v10);
        v29 = (void *)(v44 - 12);
        if ( (int *)(v44 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v44 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        sub_21E94B4((void **)&v42, "transaction_id");
        v41 = (char *)&unk_28898CC;
        webjson::getFieldAsString(&v43, (web::json::value *)v28, &v42, (int *)&v41);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v51,
          &v43);
        v30 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v43 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        v31 = v41 - 12;
        if ( (int *)(v41 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v41 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        v32 = (void *)(v42 - 12);
        if ( (int *)(v42 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v42 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v32);
        sub_21E94B4((void **)&v39, "receipt_data");
        v38 = (char *)&unk_28898CC;
        webjson::getFieldAsString(&v40, (web::json::value *)v28, &v39, (int *)&v38);
          (int *)&v52,
          &v40);
        v9 = (void **)&v45;
        v10 = (void **)&v44;
        v33 = (void *)(v40 - 12);
        if ( (int *)(v40 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v40 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        v34 = v38 - 12;
        if ( (int *)(v38 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v38 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
        v35 = (void *)(v39 - 12);
        if ( (int *)(v39 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v39 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v35);
        v36 = *(_QWORD *)((char *)v37 + 12);
        if ( (_DWORD)v36 == HIDWORD(v36) )
          std::vector<ReceiptFulfillment::ReceiptData,std::allocator<ReceiptFulfillment::ReceiptData>>::_M_emplace_back_aux<ReceiptFulfillment::ReceiptData>(
            (unsigned __int64 *)v3 + 1,
            (int)&v46);
        else
          *(_DWORD *)v36 = v46;
          v46 = &unk_28898CC;
          *(_DWORD *)(v36 + 4) = v47;
          v47 = &unk_28898CC;
          *(_DWORD *)(v36 + 8) = v48;
          v48 = &unk_28898CC;
          *(_DWORD *)(v36 + 12) = v49;
          v49 = &unk_28898CC;
          *(_DWORD *)(v36 + 16) = v50;
          v50 = &unk_28898CC;
          *(_DWORD *)(v36 + 20) = v51;
          v51 = &unk_28898CC;
          *(_DWORD *)(v36 + 24) = v52;
          v52 = &unk_28898CC;
          *(_BYTE *)(v36 + 28) = v53;
          *((_DWORD *)v37 + 3) = v36 + 32;
        ReceiptFulfillment::ReceiptData::~ReceiptData((ReceiptFulfillment::ReceiptData *)&v46);
        v6 = (web::json::value *)((char *)v6 + 4);
        result = HIDWORD(v5);
      }
      while ( v6 != (web::json::value *)HIDWORD(v5) );
    }
  }
  return result;
}


void __fastcall CheckReceiptDetailsAppleAppStore::~CheckReceiptDetailsAppleAppStore(CheckReceiptDetailsAppleAppStore *this)
{
  CheckReceiptDetailsAppleAppStore::~CheckReceiptDetailsAppleAppStore(this);
}
