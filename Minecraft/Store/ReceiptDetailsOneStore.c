

int __fastcall ReceiptDetailsOneStore::ReceiptDetailsOneStore(int a1, int *a2, int *a3, int *a4, char a5, int *a6, int *a7, int *a8, int *a9)
{
  int v9; // r4@1

  v9 = a1;
  SendReceiptDetails::SendReceiptDetails(a1, a2, a3, a4, a5);
  *(_DWORD *)v9 = &off_26E7410;
  sub_21E8AF4((int *)(v9 + 20), a8);
  sub_21E8AF4((int *)(v9 + 24), a9);
  sub_21E8AF4((int *)(v9 + 28), a6);
  sub_21E8AF4((int *)(v9 + 32), a7);
  return v9;
}


int __fastcall ReceiptDetailsOneStore::toPostBody(ReceiptDetailsOneStore *this, int a2)
{
  ReceiptDetailsOneStore *v2; // r4@1
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
  int *v13; // r6@13
  void *v14; // r0@15
  void *v15; // r0@16
  int *v16; // r6@17
  void *v17; // r0@19
  void *v18; // r0@20
  int *v19; // r0@21
  void *v20; // r0@21
  void *v21; // r0@22
  int result; // r0@25
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
  unsigned int *v33; // r2@48
  signed int v34; // r1@50
  unsigned int *v35; // r2@52
  signed int v36; // r1@54
  unsigned int *v37; // r2@56
  signed int v38; // r1@58
  unsigned int *v39; // r2@60
  signed int v40; // r1@62
  unsigned int *v41; // r2@64
  signed int v42; // r1@66
  unsigned int *v43; // r2@68
  signed int v44; // r1@70
  unsigned int *v45; // r2@72
  signed int v46; // r1@74
  int v47; // [sp+0h] [bp-78h]@22
  int v48; // [sp+8h] [bp-70h]@21
  int v49; // [sp+Ch] [bp-6Ch]@17
  int v50; // [sp+10h] [bp-68h]@17
  int v51; // [sp+18h] [bp-60h]@17
  int v52; // [sp+1Ch] [bp-5Ch]@13
  int v53; // [sp+20h] [bp-58h]@13
  int v54; // [sp+28h] [bp-50h]@13
  int v55; // [sp+2Ch] [bp-4Ch]@9
  int v56; // [sp+30h] [bp-48h]@9
  int v57; // [sp+38h] [bp-40h]@9
  int v58; // [sp+3Ch] [bp-3Ch]@5
  int v59; // [sp+40h] [bp-38h]@5
  int v60; // [sp+48h] [bp-30h]@5
  int v61; // [sp+4Ch] [bp-2Ch]@1
  int v62; // [sp+50h] [bp-28h]@1
  int v63; // [sp+58h] [bp-20h]@1
  int v64; // [sp+5Ch] [bp-1Ch]@1
  int v65; // [sp+60h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  web::json::value::value((web::json::value *)&v65);
  SendReceiptDetails::_addCommonProperties((SendReceiptDetails *)v3, (web::json::value *)&v65);
  web::json::value::object((web::json::value *)&v64, 0);
  sub_21E94B4((void **)&v63, "product_id");
  v4 = (int *)web::json::value::operator[]((int)&v64);
  utility::conversions::to_string_t(&v61, (int *)(v3 + 12));
  web::json::value::value(&v62, &v61);
  web::json::value::operator=(v4, &v62);
  if ( v62 )
    (*(void (**)(void))(*(_DWORD *)v62 + 96))();
  v62 = 0;
  v5 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v61 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v63 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v60, "actor");
  v7 = (int *)web::json::value::operator[]((int)&v64);
  utility::conversions::to_string_t(&v58, (int *)(v3 + 20));
  web::json::value::value(&v59, &v58);
  web::json::value::operator=(v7, &v59);
  if ( v59 )
    (*(void (**)(void))(*(_DWORD *)v59 + 96))();
  v59 = 0;
  v8 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v58 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v60 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v57, "inventory");
  v10 = (int *)web::json::value::operator[]((int)&v64);
  utility::conversions::to_string_t(&v55, (int *)(v3 + 24));
  web::json::value::value(&v56, &v55);
  web::json::value::operator=(v10, &v56);
  if ( v56 )
    (*(void (**)(void))(*(_DWORD *)v56 + 96))();
  v56 = 0;
  v11 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v55 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v57 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v54, "access_token");
  v13 = (int *)web::json::value::operator[]((int)&v64);
  utility::conversions::to_string_t(&v52, (int *)(v3 + 28));
  web::json::value::value(&v53, &v52);
  web::json::value::operator=(v13, &v53);
  if ( v53 )
    (*(void (**)(void))(*(_DWORD *)v53 + 96))();
  v53 = 0;
  v14 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v52 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v54 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v51, "wsid_Key");
  v16 = (int *)web::json::value::operator[]((int)&v64);
  utility::conversions::to_string_t(&v49, (int *)(v3 + 32));
  web::json::value::value(&v50, &v49);
  web::json::value::operator=(v16, &v50);
  if ( v50 )
    (*(void (**)(void))(*(_DWORD *)v50 + 96))();
  v50 = 0;
  v17 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v49 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v51 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v48, "receipt");
  v19 = (int *)web::json::value::operator[]((int)&v65);
  web::json::value::operator=(v19, &v64);
  v20 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v48 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  web::json::value::serialize((web::json::value *)&v47, (int)&v65);
  utility::conversions::to_utf8string(v2, &v47);
  v21 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v47 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  if ( v64 )
    (*(void (**)(void))(*(_DWORD *)v64 + 96))();
  result = v65;
  if ( v65 )
    result = (*(int (**)(void))(*(_DWORD *)v65 + 96))();
  return result;
}


void __fastcall ReceiptDetailsOneStore::~ReceiptDetailsOneStore(ReceiptDetailsOneStore *this)
{
  ReceiptDetailsOneStore *v1; // r0@1

  v1 = ReceiptDetailsOneStore::~ReceiptDetailsOneStore(this);
  j_j_j__ZdlPv_5((void *)v1);
}


ReceiptDetailsOneStore *__fastcall ReceiptDetailsOneStore::~ReceiptDetailsOneStore(ReceiptDetailsOneStore *this)
{
  ReceiptDetailsOneStore *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26E7410;
  v2 = *((_DWORD *)this + 8);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 7);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 6);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 5);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  SendReceiptDetails::~SendReceiptDetails(v1);
  return v1;
}


const char *__fastcall ReceiptDetailsOneStore::getPath(ReceiptDetailsOneStore *this)
{
  return "iap/onestore/1.0";
}


void __fastcall ReceiptDetailsOneStore::~ReceiptDetailsOneStore(ReceiptDetailsOneStore *this)
{
  ReceiptDetailsOneStore::~ReceiptDetailsOneStore(this);
}
