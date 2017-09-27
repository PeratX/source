

int __fastcall ReceiptDetailsOculusStore::toPostBody(ReceiptDetailsOculusStore *this, int a2)
{
  ReceiptDetailsOculusStore *v2; // r4@1
  int v3; // r5@1
  int *v4; // r6@1
  void *v5; // r0@3
  void *v6; // r0@4
  int *v7; // r6@5
  void *v8; // r0@7
  void *v9; // r0@8
  int *v10; // r6@9
  int v11; // r1@9
  void *v12; // r0@11
  int *v13; // r6@12
  void *v14; // r0@14
  void *v15; // r0@15
  int *v16; // r0@16
  void *v17; // r0@16
  void *v18; // r0@17
  int result; // r0@20
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  unsigned int *v28; // r2@39
  signed int v29; // r1@41
  unsigned int *v30; // r2@43
  signed int v31; // r1@45
  unsigned int *v32; // r2@47
  signed int v33; // r1@49
  unsigned int *v34; // r2@51
  signed int v35; // r1@53
  unsigned int *v36; // r2@55
  signed int v37; // r1@57
  int v38; // [sp+4h] [bp-64h]@17
  int v39; // [sp+Ch] [bp-5Ch]@16
  int v40; // [sp+10h] [bp-58h]@12
  int v41; // [sp+14h] [bp-54h]@12
  int v42; // [sp+1Ch] [bp-4Ch]@12
  int v43; // [sp+20h] [bp-48h]@9
  int v44; // [sp+28h] [bp-40h]@9
  int v45; // [sp+2Ch] [bp-3Ch]@5
  int v46; // [sp+30h] [bp-38h]@5
  int v47; // [sp+38h] [bp-30h]@5
  int v48; // [sp+3Ch] [bp-2Ch]@1
  int v49; // [sp+40h] [bp-28h]@1
  int v50; // [sp+48h] [bp-20h]@1
  int v51; // [sp+4Ch] [bp-1Ch]@1
  int v52; // [sp+50h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  web::json::value::value((web::json::value *)&v52);
  SendReceiptDetails::_addCommonProperties((SendReceiptDetails *)v3, (web::json::value *)&v52);
  web::json::value::object((web::json::value *)&v51, 0);
  sub_21E94B4((void **)&v50, "user_token");
  v4 = (int *)web::json::value::operator[]((int)&v51);
  utility::conversions::to_string_t(&v48, (int *)(v3 + 20));
  web::json::value::value(&v49, &v48);
  web::json::value::operator=(v4, &v49);
  if ( v49 )
    (*(void (**)(void))(*(_DWORD *)v49 + 96))();
  v49 = 0;
  v5 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v48 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v50 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v47, "product_id");
  v7 = (int *)web::json::value::operator[]((int)&v51);
  utility::conversions::to_string_t(&v45, (int *)(v3 + 12));
  web::json::value::value(&v46, &v45);
  web::json::value::operator=(v7, &v46);
  if ( v46 )
    (*(void (**)(void))(*(_DWORD *)v46 + 96))();
  v46 = 0;
  v8 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v45 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v47 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v44, "purchase_id");
  v10 = (int *)web::json::value::operator[]((int)&v51);
  web::json::value::value((web::json::value *)&v43, v11, *(_QWORD *)(v3 + 24));
  web::json::value::operator=(v10, &v43);
  if ( v43 )
    (*(void (**)(void))(*(_DWORD *)v43 + 96))();
  v43 = 0;
  v12 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v44 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v42, "platform");
  v13 = (int *)web::json::value::operator[]((int)&v51);
  utility::conversions::to_string_t(&v40, (int *)(v3 + 32));
  web::json::value::value(&v41, &v40);
  web::json::value::operator=(v13, &v41);
  if ( v41 )
    (*(void (**)(void))(*(_DWORD *)v41 + 96))();
  v41 = 0;
  v14 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v40 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v42 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v39, "receipt");
  v16 = (int *)web::json::value::operator[]((int)&v52);
  web::json::value::operator=(v16, &v51);
  v17 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v39 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  web::json::value::serialize((web::json::value *)&v38, (int)&v52);
  utility::conversions::to_utf8string(v2, &v38);
  v18 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v38 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  if ( v51 )
    (*(void (**)(void))(*(_DWORD *)v51 + 96))();
  result = v52;
  if ( v52 )
    result = (*(int (**)(void))(*(_DWORD *)v52 + 96))();
  return result;
}


const char *__fastcall ReceiptDetailsOculusStore::getPath(ReceiptDetailsOculusStore *this)
{
  return "iap/oculus/1.0";
}


void __fastcall ReceiptDetailsOculusStore::~ReceiptDetailsOculusStore(ReceiptDetailsOculusStore *this)
{
  ReceiptDetailsOculusStore *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E73E0;
  v2 = *((_DWORD *)this + 8);
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


void __fastcall ReceiptDetailsOculusStore::~ReceiptDetailsOculusStore(ReceiptDetailsOculusStore *this)
{
  ReceiptDetailsOculusStore::~ReceiptDetailsOculusStore(this);
}


ReceiptDetailsOculusStore *__fastcall ReceiptDetailsOculusStore::~ReceiptDetailsOculusStore(ReceiptDetailsOculusStore *this)
{
  ReceiptDetailsOculusStore *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E73E0;
  v2 = *((_DWORD *)this + 8);
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


int __fastcall ReceiptDetailsOculusStore::ReceiptDetailsOculusStore(int a1, int *a2, int *a3, int *a4, char a5, int *a6, __int64 a7, int *a8)
{
  int v8; // r4@1

  v8 = a1;
  SendReceiptDetails::SendReceiptDetails(a1, a2, a3, a4, a5);
  *(_DWORD *)v8 = &off_26E73E0;
  sub_21E8AF4((int *)(v8 + 20), a6);
  *(_QWORD *)(v8 + 24) = a7;
  sub_21E8AF4((int *)(v8 + 32), a8);
  return v8;
}
