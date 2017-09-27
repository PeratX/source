

SendReceiptDetails *__fastcall SendReceiptDetails::~SendReceiptDetails(SendReceiptDetails *this)
{
  SendReceiptDetails *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_26E700C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 1);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v1;
}


int __fastcall SendReceiptDetails::SendReceiptDetails(int a1, int *a2, int *a3, int *a4, char a5)
{
  int v5; // r4@1
  int *v6; // r7@1
  int *v7; // r5@1
  int *v8; // r6@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  *(_DWORD *)a1 = &off_26E700C;
  v8 = (int *)(a1 + 8);
  sub_21E8AF4((int *)(a1 + 4), a2);
  sub_21E8AF4(v8, v7);
  sub_21E8AF4((int *)(v5 + 12), v6);
  *(_BYTE *)(v5 + 16) = a5;
  return v5;
}


void __fastcall SendReceiptDetails::~SendReceiptDetails(SendReceiptDetails *this)
{
  SendReceiptDetails *v1; // r0@1

  v1 = SendReceiptDetails::~SendReceiptDetails(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall SendReceiptDetails::_addCommonProperties(SendReceiptDetails *this, web::json::value *a2)
{
  SendReceiptDetails *v2; // r5@1
  web::json::value *v3; // r4@1
  int *v4; // r6@1
  int *v5; // r7@2
  void *v6; // r0@4
  void *v7; // r0@5
  int *v8; // r6@7
  void *v9; // r0@9
  void *v10; // r0@10
  int *v11; // r6@11
  void *v12; // r0@13
  void *v13; // r0@14
  int *v14; // r0@15
  void *v15; // r0@15
  int result; // r0@16
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
  int v31; // [sp+8h] [bp-50h]@15
  int v32; // [sp+Ch] [bp-4Ch]@11
  int v33; // [sp+10h] [bp-48h]@11
  int v34; // [sp+18h] [bp-40h]@11
  int v35; // [sp+1Ch] [bp-3Ch]@11
  int v36; // [sp+20h] [bp-38h]@7
  int v37; // [sp+24h] [bp-34h]@7
  int v38; // [sp+2Ch] [bp-2Ch]@7
  int v39; // [sp+30h] [bp-28h]@2
  int v40; // [sp+34h] [bp-24h]@2
  int v41; // [sp+3Ch] [bp-1Ch]@2

  v2 = this;
  v3 = a2;
  v4 = (int *)((char *)this + 8);
  if ( *(_DWORD *)(*((_DWORD *)this + 2) - 12) )
  {
    sub_21E94B4((void **)&v41, "subscription_id");
    v5 = (int *)web::json::value::operator[]((int)v3);
    utility::conversions::to_string_t(&v39, v4);
    web::json::value::value(&v40, &v39);
    web::json::value::operator=(v5, &v40);
    if ( v40 )
      (*(void (**)(void))(*(_DWORD *)v40 + 96))();
    v40 = 0;
    v6 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
    {
      v23 = (unsigned int *)(v39 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v41 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
  }
  if ( *((_BYTE *)v2 + 16) )
    sub_21E94B4((void **)&v38, "fake");
    v8 = (int *)web::json::value::operator[]((int)v3);
    utility::conversions::to_string_t(&v36, (int *)v2 + 3);
    web::json::value::value(&v37, &v36);
    web::json::value::operator=(v8, &v37);
    if ( v37 )
      (*(void (**)(void))(*(_DWORD *)v37 + 96))();
    v37 = 0;
    v9 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v36 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v38 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
  web::json::value::object((web::json::value *)&v35, 0);
  sub_21E94B4((void **)&v34, "name");
  v11 = (int *)web::json::value::operator[]((int)&v35);
  utility::conversions::to_string_t(&v32, (int *)v2 + 1);
  web::json::value::value(&v33, &v32);
  web::json::value::operator=(v11, &v33);
  if ( v33 )
    (*(void (**)(void))(*(_DWORD *)v33 + 96))();
  v33 = 0;
  v12 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v34 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v31, "world_description");
  v14 = (int *)web::json::value::operator[]((int)v3);
  web::json::value::operator=(v14, &v35);
  v15 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v31 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  result = v35;
  if ( v35 )
    result = (*(int (**)(void))(*(_DWORD *)v35 + 96))();
  return result;
}


void __fastcall SendReceiptDetails::~SendReceiptDetails(SendReceiptDetails *this)
{
  SendReceiptDetails::~SendReceiptDetails(this);
}
