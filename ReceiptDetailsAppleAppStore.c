

void __fastcall ReceiptDetailsAppleAppStore::~ReceiptDetailsAppleAppStore(ReceiptDetailsAppleAppStore *this)
{
  ReceiptDetailsAppleAppStore::~ReceiptDetailsAppleAppStore(this);
}


ReceiptDetailsAppleAppStore *__fastcall ReceiptDetailsAppleAppStore::~ReceiptDetailsAppleAppStore(ReceiptDetailsAppleAppStore *this)
{
  ReceiptDetailsAppleAppStore *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E73C8;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  SendReceiptDetails::~SendReceiptDetails(v1);
  return v1;
}


const char *__fastcall ReceiptDetailsAppleAppStore::getPath(ReceiptDetailsAppleAppStore *this)
{
  return "iap/appstore/1.0";
}


int __fastcall ReceiptDetailsAppleAppStore::toPostBody(ReceiptDetailsAppleAppStore *this, int a2)
{
  ReceiptDetailsAppleAppStore *v2; // r4@1
  int v3; // r5@1
  int *v4; // r6@1
  void *v5; // r0@3
  void *v6; // r0@4
  int *v7; // r6@5
  void *v8; // r0@7
  void *v9; // r0@8
  int *v10; // r0@9
  void *v11; // r0@9
  void *v12; // r0@10
  int result; // r0@13
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
  int v26; // [sp+0h] [bp-48h]@10
  int v27; // [sp+8h] [bp-40h]@9
  int v28; // [sp+Ch] [bp-3Ch]@5
  int v29; // [sp+10h] [bp-38h]@5
  int v30; // [sp+18h] [bp-30h]@5
  int v31; // [sp+1Ch] [bp-2Ch]@1
  int v32; // [sp+20h] [bp-28h]@1
  int v33; // [sp+28h] [bp-20h]@1
  int v34; // [sp+2Ch] [bp-1Ch]@1
  int v35; // [sp+30h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  web::json::value::value((web::json::value *)&v35);
  SendReceiptDetails::_addCommonProperties((SendReceiptDetails *)v3, (web::json::value *)&v35);
  web::json::value::object((web::json::value *)&v34, 0);
  sub_21E94B4((void **)&v33, "transaction_id");
  v4 = (int *)web::json::value::operator[]((int)&v34);
  utility::conversions::to_string_t(&v31, (int *)(v3 + 20));
  web::json::value::value(&v32, &v31);
  web::json::value::operator=(v4, &v32);
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 96))();
  v32 = 0;
  v5 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v31 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v33 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v30, "receipt_data");
  v7 = (int *)web::json::value::operator[]((int)&v34);
  utility::conversions::to_string_t(&v28, (int *)(v3 + 24));
  web::json::value::value(&v29, &v28);
  web::json::value::operator=(v7, &v29);
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 96))();
  v29 = 0;
  v8 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v28 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v30 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v27, "receipt");
  v10 = (int *)web::json::value::operator[]((int)&v35);
  web::json::value::operator=(v10, &v34);
  v11 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v27 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  web::json::value::serialize((web::json::value *)&v26, (int)&v35);
  utility::conversions::to_utf8string(v2, &v26);
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v26 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  if ( v34 )
    (*(void (**)(void))(*(_DWORD *)v34 + 96))();
  result = v35;
  if ( v35 )
    result = (*(int (**)(void))(*(_DWORD *)v35 + 96))();
  return result;
}


int __fastcall ReceiptDetailsAppleAppStore::ReceiptDetailsAppleAppStore(int a1, int *a2, int *a3, int *a4, char a5, int *a6, int *a7)
{
  int v7; // r4@1

  v7 = a1;
  SendReceiptDetails::SendReceiptDetails(a1, a2, a3, a4, a5);
  *(_DWORD *)v7 = &off_26E73C8;
  sub_21E8AF4((int *)(v7 + 20), a6);
  sub_21E8AF4((int *)(v7 + 24), a7);
  return v7;
}


void __fastcall ReceiptDetailsAppleAppStore::~ReceiptDetailsAppleAppStore(ReceiptDetailsAppleAppStore *this)
{
  ReceiptDetailsAppleAppStore *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E73C8;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  SendReceiptDetails::~SendReceiptDetails(v1);
  operator delete((void *)v1);
}
