

int __fastcall ReceiptDetailsGooglePlayStore::toPostBody(ReceiptDetailsGooglePlayStore *this, int a2)
{
  ReceiptDetailsGooglePlayStore *v2; // r4@1
  int v3; // r5@1
  int *v4; // r6@1
  void *v5; // r0@3
  void *v6; // r0@4
  int *v7; // r6@5
  void *v8; // r0@7
  void *v9; // r0@8
  int *v10; // r6@9
  void *v11; // r0@11
  void *v12; // r0@12
  int *v13; // r0@13
  void *v14; // r0@13
  void *v15; // r0@14
  int result; // r0@17
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  unsigned int *v23; // r2@32
  signed int v24; // r1@34
  unsigned int *v25; // r2@36
  signed int v26; // r1@38
  unsigned int *v27; // r2@40
  signed int v28; // r1@42
  unsigned int *v29; // r2@44
  signed int v30; // r1@46
  unsigned int *v31; // r2@48
  signed int v32; // r1@50
  int v33; // [sp+0h] [bp-58h]@14
  int v34; // [sp+8h] [bp-50h]@13
  int v35; // [sp+Ch] [bp-4Ch]@9
  int v36; // [sp+10h] [bp-48h]@9
  int v37; // [sp+18h] [bp-40h]@9
  int v38; // [sp+1Ch] [bp-3Ch]@5
  int v39; // [sp+20h] [bp-38h]@5
  int v40; // [sp+28h] [bp-30h]@5
  int v41; // [sp+2Ch] [bp-2Ch]@1
  int v42; // [sp+30h] [bp-28h]@1
  int v43; // [sp+38h] [bp-20h]@1
  int v44; // [sp+3Ch] [bp-1Ch]@1
  int v45; // [sp+40h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  web::json::value::value((web::json::value *)&v45);
  SendReceiptDetails::_addCommonProperties((SendReceiptDetails *)v3, (web::json::value *)&v45);
  web::json::value::object((web::json::value *)&v44, 0);
  sub_21E94B4((void **)&v43, "package_name");
  v4 = (int *)web::json::value::operator[]((int)&v44);
  utility::conversions::to_string_t(&v41, (int *)(v3 + 20));
  web::json::value::value(&v42, &v41);
  web::json::value::operator=(v4, &v42);
  if ( v42 )
    (*(void (**)(void))(*(_DWORD *)v42 + 96))();
  v42 = 0;
  v5 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v41 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v43 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v40, "purchase_token");
  v7 = (int *)web::json::value::operator[]((int)&v44);
  utility::conversions::to_string_t(&v38, (int *)(v3 + 24));
  web::json::value::value(&v39, &v38);
  web::json::value::operator=(v7, &v39);
  if ( v39 )
    (*(void (**)(void))(*(_DWORD *)v39 + 96))();
  v39 = 0;
  v8 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v38 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v40 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v37, "product_id");
  v10 = (int *)web::json::value::operator[]((int)&v44);
  utility::conversions::to_string_t(&v35, (int *)(v3 + 12));
  web::json::value::value(&v36, &v35);
  web::json::value::operator=(v10, &v36);
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 96))();
  v36 = 0;
  v11 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v35 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v37 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v34, "receipt");
  v13 = (int *)web::json::value::operator[]((int)&v45);
  web::json::value::operator=(v13, &v44);
  v14 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  web::json::value::serialize((web::json::value *)&v33, (int)&v45);
  utility::conversions::to_utf8string(v2, &v33);
  v15 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v33 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( v44 )
    (*(void (**)(void))(*(_DWORD *)v44 + 96))();
  result = v45;
  if ( v45 )
    result = (*(int (**)(void))(*(_DWORD *)v45 + 96))();
  return result;
}


int __fastcall ReceiptDetailsGooglePlayStore::ReceiptDetailsGooglePlayStore(int a1, int *a2, int *a3, int *a4, char a5, int *a6, int *a7)
{
  int v7; // r4@1

  v7 = a1;
  SendReceiptDetails::SendReceiptDetails(a1, a2, a3, a4, a5);
  *(_DWORD *)v7 = &off_26E73B0;
  sub_21E8AF4((int *)(v7 + 20), a6);
  sub_21E8AF4((int *)(v7 + 24), a7);
  return v7;
}


void __fastcall ReceiptDetailsGooglePlayStore::~ReceiptDetailsGooglePlayStore(ReceiptDetailsGooglePlayStore *this)
{
  ReceiptDetailsGooglePlayStore::~ReceiptDetailsGooglePlayStore(this);
}


ReceiptDetailsGooglePlayStore *__fastcall ReceiptDetailsGooglePlayStore::~ReceiptDetailsGooglePlayStore(ReceiptDetailsGooglePlayStore *this)
{
  ReceiptDetailsGooglePlayStore *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E73B0;
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


void __fastcall ReceiptDetailsGooglePlayStore::~ReceiptDetailsGooglePlayStore(ReceiptDetailsGooglePlayStore *this)
{
  ReceiptDetailsGooglePlayStore *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E73B0;
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


const char *__fastcall ReceiptDetailsGooglePlayStore::getPath(ReceiptDetailsGooglePlayStore *this)
{
  return "iap/playstore/1.0";
}
