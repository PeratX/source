

int __fastcall RealmsAPI::createInfiniteInviteLink(int a1, __int64 *a2, int a3)
{
  int v3; // r8@1
  int v4; // r10@1
  __int64 *v5; // r4@1
  int *v6; // r6@1
  int v7; // r1@1
  void *v8; // r0@3
  int *v9; // r4@4
  void *v10; // r0@6
  void *v11; // r0@7
  void (__fastcall *v12)(int *, int, signed int); // r3@8
  void *v13; // r0@10
  void *v14; // r0@14
  void *v15; // r0@15
  void *v16; // r0@16
  void *v17; // r0@17
  int result; // r0@18
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  unsigned int *v23; // r2@29
  signed int v24; // r1@31
  unsigned int *v25; // r2@33
  signed int v26; // r1@35
  unsigned int *v27; // r2@37
  signed int v28; // r1@39
  unsigned int *v29; // r2@41
  signed int v30; // r1@43
  unsigned int *v31; // r2@45
  signed int v32; // r1@47
  int v33; // [sp+18h] [bp-80h]@9
  void (__fastcall *v34)(int *, int *, signed int); // [sp+20h] [bp-78h]@8
  int v35; // [sp+24h] [bp-74h]@9
  int *v36; // [sp+28h] [bp-70h]@10
  void (*v37)(void); // [sp+30h] [bp-68h]@10
  Realms::InviteLink *(__fastcall *v38)(int **, int, int); // [sp+34h] [bp-64h]@10
  int v39; // [sp+38h] [bp-60h]@10
  int v40; // [sp+3Ch] [bp-5Ch]@8
  int v41; // [sp+44h] [bp-54h]@8
  int v42; // [sp+4Ch] [bp-4Ch]@8
  int v43; // [sp+50h] [bp-48h]@7
  int v44; // [sp+54h] [bp-44h]@7
  int v45; // [sp+58h] [bp-40h]@4
  int v46; // [sp+60h] [bp-38h]@4
  int v47; // [sp+64h] [bp-34h]@1
  int v48; // [sp+6Ch] [bp-2Ch]@1
  int v49; // [sp+70h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  web::json::value::value((web::json::value *)&v49);
  sub_21E94B4((void **)&v48, "worldId");
  v6 = (int *)web::json::value::operator[]((int)&v49);
  web::json::value::value((web::json::value *)&v47, v7, *v5);
  web::json::value::operator=(v6, &v47);
  if ( v47 )
    (*(void (**)(void))(*(_DWORD *)v47 + 96))();
  v47 = 0;
  v8 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v48 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  sub_21E94B4((void **)&v46, "type");
  v9 = (int *)web::json::value::operator[]((int)&v49);
  web::json::value::value((web::json::value *)&v45, "INFINITE");
  web::json::value::operator=(v9, &v45);
  if ( v45 )
    (*(void (**)(void))(*(_DWORD *)v45 + 96))();
  v45 = 0;
  v10 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v46 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  web::json::value::serialize((web::json::value *)&v43, (int)&v49);
  utility::conversions::to_utf8string(&v44, &v43);
  v11 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v43 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v42, "POST");
  sub_21E94B4((void **)&v41, "links/v1");
  sub_21E94B4((void **)&v40, "application/json");
  v34 = 0;
  v12 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v12 )
    v12(&v33, v4, 2);
    v35 = *(_DWORD *)(v4 + 12);
    v34 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  v37 = 0;
  v13 = operator new(0x14u);
  *(_DWORD *)v13 = v3;
  *(_QWORD *)((char *)v13 + 4) = *(_QWORD *)&v33;
  v39 = v35;
  v36 = (int *)&v36;
  v37 = (void (*)(void))sub_14DEDE4;
  v38 = sub_14DE79C;
  RealmsAPI::_internalCall(v3, 0, (int)&v42, (Social::XboxLiveUserManager *)&v41, &v40, &v44, (int)&v36, 0);
  if ( v37 )
    v37();
  if ( v34 )
    v34(&v33, &v33, 3);
  v14 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v40 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v41 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v42 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v44 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  result = v49;
  if ( v49 )
    result = (*(int (**)(void))(*(_DWORD *)v49 + 96))();
  return result;
}


void __fastcall RealmsAPI::getInviteCount(int a1, int a2)
{
  RealmsAPI::getInviteCount(a1, a2);
}


signed int __fastcall RealmsAPI::isValidRealmName(int a1, int *a2)
{
  int *v2; // r5@1
  signed int v3; // r4@2
  int v4; // r5@3
  int v5; // r6@3
  signed int v6; // r0@4
  bool v7; // nf@5
  unsigned __int8 v8; // vf@5
  bool v9; // zf@8
  int v11; // [sp+0h] [bp-18h]@4

  v2 = a2;
  if ( *(_DWORD *)(*a2 - 12) )
  {
    v3 = 0;
    if ( sub_21E7AD8(a2, " ", 0, 1u) != -1 )
    {
      v4 = *v2;
      v5 = *(_DWORD *)(v4 - 12);
      do
      {
        v6 = j_utf8proc_iterate(v4, v5, &v11);
        v3 = 1;
        if ( v6 < 1 )
          break;
        v8 = __OFSUB__(v11, 1);
        v7 = v11 - 1 < 0;
        if ( v11 >= 1 )
        {
          v3 = 0;
          v8 = __OFSUB__(v11, 32);
          v7 = v11 - 32 < 0;
        }
        if ( v7 ^ v8 )
        v9 = v11 == 167;
        if ( v11 != 167 )
          v4 += v6;
          v5 -= v6;
          v9 = v11 == 127;
      }
      while ( !v9 );
    }
  }
  else
  return v3;
}


void __fastcall RealmsAPI::listInvites(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r10@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  void *v5; // r0@3
  void *v6; // r0@7
  void *v7; // r0@8
  void *v8; // r0@9
  void *v9; // r0@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  int v18; // [sp+14h] [bp-64h]@2
  void (__fastcall *v19)(int *, int *, signed int); // [sp+1Ch] [bp-5Ch]@1
  int v20; // [sp+20h] [bp-58h]@2
  int *v21; // [sp+24h] [bp-54h]@3
  void (*v22)(void); // [sp+2Ch] [bp-4Ch]@3
  void (__fastcall *v23)(int **, int, int); // [sp+30h] [bp-48h]@3
  int v24; // [sp+34h] [bp-44h]@3
  int v25; // [sp+38h] [bp-40h]@1
  int v26; // [sp+40h] [bp-38h]@1
  int v27; // [sp+48h] [bp-30h]@1
  int v28; // [sp+50h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v28, "GET");
  sub_21E94B4((void **)&v27, "invites/pending");
  sub_21E94B4((void **)&v26, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v25, (const char *)&unk_257BC67);
  v19 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v18, v2, 2);
    v20 = *(_DWORD *)(v2 + 12);
    v19 = *(void (__fastcall **)(int *, int *, signed int))(v2 + 8);
  }
  v22 = 0;
  v5 = operator new(0x14u);
  *(_DWORD *)v5 = v3;
  *(_QWORD *)((char *)v5 + 4) = *(_QWORD *)&v18;
  v24 = v20;
  v21 = (int *)&v21;
  v22 = (void (*)(void))sub_14FF110;
  v23 = sub_14FEA40;
  RealmsAPI::_internalCall(v3, 0, (int)&v28, (Social::XboxLiveUserManager *)&v27, &v26, &v25, (int)&v21, 0);
  if ( v22 )
    v22();
  if ( v19 )
    v19(&v18, &v18, 3);
  v6 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v25 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v26 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v27 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v28 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall RealmsAPI::getOnlinePlayers(int a1, int a2)
{
  RealmsAPI::getOnlinePlayers(a1, a2);
}


RealmsAPI *__fastcall RealmsAPI::~RealmsAPI(RealmsAPI *this)
{
  RealmsAPI *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  int v7; // r2@3
  int v8; // r3@3
  int v9; // r7@3
  __int64 v10; // kr00_8@3
  int v11; // r12@3
  void *v12; // r0@3
  unsigned int v13; // r6@4
  unsigned int v14; // r1@4
  unsigned int v15; // r7@5
  void *v16; // t1@6
  web::http::client::http_client *v17; // r0@9
  web::http::client::http_client *v18; // r0@10
  web::http::client::http_client *v19; // r0@11
  web::http::client::http_client *v20; // r0@12
  int v21; // r1@13
  void *v22; // r0@13
  int *v23; // r0@14
  unsigned int *v25; // r2@16
  signed int v26; // r1@18
  unsigned int *v27; // r2@20
  signed int v28; // r1@22
  unsigned int *v29; // r2@24
  signed int v30; // r1@26
  unsigned int *v31; // r2@28
  signed int v32; // r1@30
  int v33; // [sp+4h] [bp-34h]@3
  __int64 v34; // [sp+8h] [bp-30h]@3
  int v35; // [sp+10h] [bp-28h]@3
  int v36; // [sp+14h] [bp-24h]@3
  int v37; // [sp+18h] [bp-20h]@3
  int v38; // [sp+1Ch] [bp-1Ch]@3
  int v39; // [sp+20h] [bp-18h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 22);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 21);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v4 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 13);
  v7 = *((_DWORD *)v1 + 14);
  v8 = *((_DWORD *)v1 + 15);
  v9 = *((_DWORD *)v1 + 16);
  v10 = *(_QWORD *)((char *)v1 + 68);
  v11 = *((_DWORD *)v1 + 19);
  v36 = *((_DWORD *)v1 + 12);
  v37 = v6;
  v38 = v7;
  v39 = v8;
  v33 = v9;
  v34 = v10;
  v35 = v11;
  std::deque<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_destroy_data_aux(
    (int)v1 + 40,
    (int)&v36,
    (int)&v33);
  v12 = (void *)*((_DWORD *)v1 + 10);
  if ( v12 )
    v13 = *((_DWORD *)v1 + 19);
    v14 = *((_DWORD *)v1 + 15);
    if ( v14 < v13 + 4 )
      v15 = v14 - 4;
      {
        v16 = *(void **)(v15 + 4);
        v15 += 4;
        operator delete(v16);
      }
      while ( v15 < v13 );
      v12 = (void *)*((_DWORD *)v1 + 10);
    operator delete(v12);
  v17 = (web::http::client::http_client *)*((_DWORD *)v1 + 4);
  if ( v17 )
    v18 = web::http::client::http_client::~http_client(v17);
    operator delete((void *)v18);
  *((_DWORD *)v1 + 4) = 0;
  v19 = (web::http::client::http_client *)*((_DWORD *)v1 + 3);
  if ( v19 )
    v20 = web::http::client::http_client::~http_client(v19);
    operator delete((void *)v20);
  *((_DWORD *)v1 + 3) = 0;
  v21 = *((_DWORD *)v1 + 1);
  v22 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v21 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (int *)(*(_DWORD *)v1 - 12);
  if ( v23 != &dword_28898C0 )
    v31 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  return v1;
}


void __fastcall RealmsAPI::getRealmsConfigDetails(int a1, __int64 *a2, int a3)
{
  RealmsAPI::getRealmsConfigDetails(a1, a2, a3);
}


void __fastcall RealmsAPI::addToBlocklist(int a1, __int64 *a2, const void **a3, int a4)
{
  __int64 *v4; // r7@1
  int v5; // r5@1
  const void **v6; // r6@1
  int v7; // r4@1
  int v8; // r1@1
  const void **v9; // r0@1
  const void **v10; // r0@1
  const void **v11; // r0@1
  void (__fastcall *v12)(char *, int, signed int); // r3@1
  void *v13; // r0@7
  void *v14; // r0@8
  char *v15; // r0@9
  char *v16; // r0@10
  char *v17; // r0@11
  void *v18; // r0@12
  void *v19; // r0@13
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
  unsigned int *v32; // r2@39
  signed int v33; // r1@41
  char v34; // [sp+10h] [bp-70h]@2
  void (*v35)(void); // [sp+18h] [bp-68h]@1
  int v36; // [sp+1Ch] [bp-64h]@2
  int v37; // [sp+20h] [bp-60h]@3
  int *v38; // [sp+28h] [bp-58h]@3
  void (*v39)(void); // [sp+30h] [bp-50h]@3
  int (__fastcall *v40)(int, __int16, int); // [sp+34h] [bp-4Ch]@3
  int v41; // [sp+38h] [bp-48h]@3
  int v42; // [sp+3Ch] [bp-44h]@1
  int v43; // [sp+44h] [bp-3Ch]@1
  int v44; // [sp+48h] [bp-38h]@1
  char *v45; // [sp+4Ch] [bp-34h]@1
  char *v46; // [sp+50h] [bp-30h]@1
  char *v47; // [sp+54h] [bp-2Ch]@1
  int v48; // [sp+5Ch] [bp-24h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v48, "POST");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v44, v8, *v4);
  v9 = sub_21E82D8((const void **)&v44, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v45 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_21E7408((const void **)&v45, "/blocklist/", 0xBu);
  v46 = (char *)*v10;
  *v10 = &unk_28898CC;
  v11 = sub_21E72F0((const void **)&v46, v6);
  v47 = (char *)*v11;
  *v11 = &unk_28898CC;
  sub_21E94B4((void **)&v43, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v42, (const char *)&unk_257BC67);
  v35 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
  if ( v12 )
  {
    v12(&v34, v5, 2);
    v36 = *(_DWORD *)(v5 + 12);
    v35 = *(void (**)(void))(v5 + 8);
  }
  v37 = v7;
  v39 = 0;
  *(_QWORD *)operator new(0x14u) = *(_QWORD *)&v34;
  v41 = v7;
  v38 = (int *)&v38;
  v39 = (void (*)(void))sub_14FBFA8;
  v40 = sub_14FBDA4;
  RealmsAPI::_internalCall(v7, 0, (int)&v48, (Social::XboxLiveUserManager *)&v47, &v43, &v42, (int)&v38, 0);
  if ( v39 )
    v39();
  if ( v35 )
    v35();
  v13 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v42 - 4);
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
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v43 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = v47 - 12;
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v47 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v46 - 12;
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v46 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = v45 - 12;
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v45 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v44 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v48 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
}


void __fastcall RealmsAPI::acceptInvite(int a1, int *a2, int a3)
{
  RealmsAPI::acceptInvite(a1, a2, a3);
}


void __fastcall RealmsAPI::getWorldMembers(int a1, __int64 *a2, int a3)
{
  __int64 *v3; // r5@1
  int v4; // r6@1
  int v5; // r10@1
  int v6; // r1@1
  const void **v7; // r0@1
  int v8; // r7@1
  void (__fastcall *v9)(int *, int, signed int); // r3@1
  void *v10; // r0@3
  void *v11; // r0@7
  void *v12; // r0@8
  char *v13; // r0@9
  void *v14; // r0@10
  void *v15; // r0@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  __int64 v26; // [sp+10h] [bp-78h]@1
  int v27; // [sp+1Ch] [bp-6Ch]@2
  void (__fastcall *v28)(int *, int *, signed int); // [sp+24h] [bp-64h]@1
  int v29; // [sp+28h] [bp-60h]@2
  int *v30; // [sp+34h] [bp-54h]@3
  void (*v31)(void); // [sp+3Ch] [bp-4Ch]@3
  void (__fastcall *v32)(int, int, int); // [sp+40h] [bp-48h]@3
  int v33; // [sp+48h] [bp-40h]@1
  int v34; // [sp+4Ch] [bp-3Ch]@3
  int v35; // [sp+50h] [bp-38h]@1
  int v36; // [sp+54h] [bp-34h]@1
  char *v37; // [sp+58h] [bp-30h]@1
  int v38; // [sp+60h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v38, "GET");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v36, v6, *v3);
  v7 = sub_21E82D8((const void **)&v36, 0, (unsigned int)"invites/", (_BYTE *)8);
  v37 = (char *)*v7;
  *v7 = &unk_28898CC;
  sub_21E94B4((void **)&v35, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v33, (const char *)&unk_257BC67);
  v8 = 0;
  v26 = *v3;
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v9 )
  {
    v9(&v27, v4, 2);
    v29 = *(_DWORD *)(v4 + 12);
    v8 = *(_DWORD *)(v4 + 8);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  }
  v31 = 0;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v26;
  *((_DWORD *)v10 + 2) = v5;
  *(_QWORD *)((char *)v10 + 12) = *(_QWORD *)&v27;
  v33 = v8;
  v34 = v29;
  v30 = (int *)&v30;
  v31 = (void (*)(void))sub_14E98F4;
  v32 = sub_14E9270;
  RealmsAPI::_internalCall(v5, 0, (int)&v38, (Social::XboxLiveUserManager *)&v37, &v35, &v33, (int)&v30, 0);
  if ( v31 )
    v31();
  if ( v28 )
    v28(&v27, &v27, 3);
  v11 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v33 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v35 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v37 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v36 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v38 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


int __fastcall RealmsAPI::getGlobalCertificate(int a1, int *a2, int a3, Social::XboxLiveUserManager *a4)
{
  int v4; // r9@1
  Social::XboxLiveUserManager *v5; // r8@1
  int v6; // r11@1
  int *v7; // r4@1
  int *v8; // r5@1
  void *v9; // r0@3
  void *v10; // r0@4
  void *v11; // r0@5
  void (__fastcall *v12)(int *, int, signed int); // r3@6
  int v13; // r6@6
  void *v14; // r0@8
  int v15; // r1@8
  void *v16; // r0@12
  void *v17; // r0@13
  void *v18; // r0@14
  void *v19; // r0@15
  int result; // r0@16
  unsigned int *v21; // r2@19
  signed int v22; // r1@21
  unsigned int *v23; // r2@23
  signed int v24; // r1@25
  unsigned int *v25; // r2@27
  signed int v26; // r1@29
  unsigned int *v27; // r2@31
  signed int v28; // r1@33
  unsigned int *v29; // r2@35
  signed int v30; // r1@37
  unsigned int *v31; // r2@39
  signed int v32; // r1@41
  unsigned int *v33; // r2@43
  signed int v34; // r1@45
  int v35; // [sp+14h] [bp-7Ch]@7
  void (__fastcall *v36)(int *, int *, signed int); // [sp+1Ch] [bp-74h]@6
  int v37; // [sp+20h] [bp-70h]@7
  void *v38; // [sp+24h] [bp-6Ch]@8
  void (*v39)(void); // [sp+2Ch] [bp-64h]@8
  unsigned int (__fastcall *v40)(void ***, int, int); // [sp+30h] [bp-60h]@8
  int v41; // [sp+38h] [bp-58h]@6
  int v42; // [sp+40h] [bp-50h]@6
  int v43; // [sp+48h] [bp-48h]@6
  int v44; // [sp+4Ch] [bp-44h]@5
  int v45; // [sp+50h] [bp-40h]@5
  int v46; // [sp+54h] [bp-3Ch]@1
  int v47; // [sp+58h] [bp-38h]@1
  int v48; // [sp+60h] [bp-30h]@1
  int v49; // [sp+64h] [bp-2Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  web::json::value::value((web::json::value *)&v49);
  sub_21E94B4((void **)&v48, "identityPublicKey");
  v8 = (int *)web::json::value::operator[]((int)&v49);
  utility::conversions::to_string_t(&v46, v7);
  web::json::value::value(&v47, &v46);
  web::json::value::operator=(v8, &v47);
  if ( v47 )
    (*(void (**)(void))(*(_DWORD *)v47 + 96))();
  v47 = 0;
  v9 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v46 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v48 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  web::json::value::serialize((web::json::value *)&v44, (int)&v49);
  utility::conversions::to_utf8string(&v45, &v44);
  v11 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v44 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v43, "POST");
  sub_21E94B4((void **)&v42, "authentication");
  sub_21E94B4((void **)&v41, "application/json");
  v36 = 0;
  v12 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  v13 = 0;
  if ( v12 )
    v12(&v35, v6, 2);
    v37 = *(_DWORD *)(v6 + 12);
    v13 = *(_DWORD *)(v6 + 8);
    v36 = *(void (__fastcall **)(int *, int *, signed int))(v6 + 8);
  v39 = 0;
  v14 = operator new(0x14u);
  *(_DWORD *)v14 = v4;
  *(_QWORD *)((char *)v14 + 4) = *(_QWORD *)&v35;
  v15 = v37;
  *((_DWORD *)v14 + 3) = v13;
  *((_DWORD *)v14 + 4) = v15;
  v38 = v14;
  v39 = (void (*)(void))sub_1504CD0;
  v40 = sub_15048E8;
  RealmsAPI::_internalCall(v4, 1, (int)&v43, (Social::XboxLiveUserManager *)&v42, &v41, &v45, (int)&v38, v5);
  if ( v39 )
    v39();
  if ( v36 )
    v36(&v35, &v35, 3);
  v16 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v41 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v42 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v43 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v45 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  result = v49;
  if ( v49 )
    result = (*(int (**)(void))(*(_DWORD *)v49 + 96))();
  return result;
}


void __fastcall RealmsAPI::getOnlinePlayers(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r10@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  void *v5; // r0@3
  void *v6; // r0@7
  void *v7; // r0@8
  void *v8; // r0@9
  void *v9; // r0@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  int v18; // [sp+14h] [bp-64h]@2
  void (__fastcall *v19)(int *, int *, signed int); // [sp+1Ch] [bp-5Ch]@1
  int v20; // [sp+20h] [bp-58h]@2
  int *v21; // [sp+24h] [bp-54h]@3
  void (*v22)(void); // [sp+2Ch] [bp-4Ch]@3
  void (__fastcall *v23)(int **, int, int); // [sp+30h] [bp-48h]@3
  int v24; // [sp+34h] [bp-44h]@3
  int v25; // [sp+38h] [bp-40h]@1
  int v26; // [sp+40h] [bp-38h]@1
  int v27; // [sp+48h] [bp-30h]@1
  int v28; // [sp+50h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v28, "GET");
  sub_21E94B4((void **)&v27, "activities/live/players");
  sub_21E94B4((void **)&v26, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v25, (const char *)&unk_257BC67);
  v19 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v18, v2, 2);
    v20 = *(_DWORD *)(v2 + 12);
    v19 = *(void (__fastcall **)(int *, int *, signed int))(v2 + 8);
  }
  v22 = 0;
  v5 = operator new(0x14u);
  *(_DWORD *)v5 = v3;
  *(_QWORD *)((char *)v5 + 4) = *(_QWORD *)&v18;
  v24 = v20;
  v21 = (int *)&v21;
  v22 = (void (*)(void))sub_1502770;
  v23 = sub_15020A0;
  RealmsAPI::_internalCall(v3, 0, (int)&v28, (Social::XboxLiveUserManager *)&v27, &v26, &v25, (int)&v21, 0);
  if ( v22 )
    v22();
  if ( v19 )
    v19(&v18, &v18, 3);
  v6 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v25 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v26 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v27 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v28 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall RealmsAPI::fetchWorlds(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r10@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  void *v5; // r0@3
  void *v6; // r0@7
  void *v7; // r0@8
  void *v8; // r0@9
  void *v9; // r0@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  int v18; // [sp+14h] [bp-64h]@2
  void (__fastcall *v19)(int *, int *, signed int); // [sp+1Ch] [bp-5Ch]@1
  int v20; // [sp+20h] [bp-58h]@2
  int *v21; // [sp+24h] [bp-54h]@3
  void (*v22)(void); // [sp+2Ch] [bp-4Ch]@3
  void (__fastcall *v23)(int **, int, int); // [sp+30h] [bp-48h]@3
  int v24; // [sp+34h] [bp-44h]@3
  int v25; // [sp+38h] [bp-40h]@1
  int v26; // [sp+40h] [bp-38h]@1
  int v27; // [sp+48h] [bp-30h]@1
  int v28; // [sp+50h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v28, "GET");
  sub_21E94B4((void **)&v27, "worlds");
  sub_21E94B4((void **)&v26, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v25, (const char *)&unk_257BC67);
  v19 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v18, v2, 2);
    v20 = *(_DWORD *)(v2 + 12);
    v19 = *(void (__fastcall **)(int *, int *, signed int))(v2 + 8);
  }
  v22 = 0;
  v5 = operator new(0x14u);
  *(_DWORD *)v5 = v3;
  *(_QWORD *)((char *)v5 + 4) = *(_QWORD *)&v18;
  v24 = v20;
  v21 = (int *)&v21;
  v22 = (void (*)(void))sub_14DA0EC;
  v23 = sub_14D9A1C;
  RealmsAPI::_internalCall(v3, 0, (int)&v28, (Social::XboxLiveUserManager *)&v27, &v26, &v25, (int)&v21, 0);
  if ( v22 )
    v22();
  if ( v19 )
    v19(&v18, &v18, 3);
  v6 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v25 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v26 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v27 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v28 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


signed int __fastcall RealmsAPI::_processExecutionQueue(RealmsAPI *this)
{
  char *v1; // r4@1
  signed int result; // r0@2
  int v3; // [sp+0h] [bp-20h]@2
  int (*v4)(void); // [sp+8h] [bp-18h]@1
  void (__fastcall *v5)(int *); // [sp+Ch] [bp-14h]@4

  v1 = (char *)this + 40;
  v4 = 0;
  while ( 1 )
  {
    result = MPMCQueue<std::function<void ()(void)>>::pop((int)v1, (int)&v3);
    if ( result != 1 )
      break;
    if ( !v4 )
      sub_21E5F48();
    v5(&v3);
  }
  if ( v4 )
    result = v4();
  return result;
}


void __fastcall RealmsAPI::initiateWorldUpload(int a1, const void **a2, signed int a3, int a4)
{
  RealmsAPI::initiateWorldUpload(a1, a2, a3, a4);
}


void __fastcall RealmsAPI::openWorld(int a1, __int64 *a2, int a3, int a4)
{
  __int64 *v4; // r5@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r10@1
  int v8; // r1@1
  const void **v9; // r0@1
  const void **v10; // r0@1
  int v11; // r4@1
  void (__fastcall *v12)(int *, int, signed int); // r3@1
  void (__fastcall *v13)(int *, int, signed int); // r3@3
  void *v14; // r0@5
  void (__fastcall *v15)(_DWORD, _DWORD, _DWORD); // r1@5
  int v16; // r1@5
  void *v17; // r0@11
  void *v18; // r0@12
  char *v19; // r0@13
  char *v20; // r0@14
  void *v21; // r0@15
  void *v22; // r0@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  unsigned int *v29; // r2@30
  signed int v30; // r1@32
  unsigned int *v31; // r2@34
  signed int v32; // r1@36
  unsigned int *v33; // r2@38
  signed int v34; // r1@40
  int v35; // [sp+10h] [bp-80h]@1
  int v36; // [sp+14h] [bp-7Ch]@2
  void (__fastcall *v37)(_DWORD, _DWORD, _DWORD); // [sp+1Ch] [bp-74h]@1
  int v38; // [sp+20h] [bp-70h]@2
  int v39; // [sp+24h] [bp-6Ch]@4
  void (__fastcall *v40)(int *, int *, signed int); // [sp+2Ch] [bp-64h]@3
  int v41; // [sp+30h] [bp-60h]@4
  void *v42; // [sp+34h] [bp-5Ch]@5
  void (*v43)(void); // [sp+3Ch] [bp-54h]@5
  int (__fastcall *v44)(int **, int, int *); // [sp+40h] [bp-50h]@5
  int v45; // [sp+48h] [bp-48h]@1
  int v46; // [sp+50h] [bp-40h]@1
  int v47; // [sp+54h] [bp-3Ch]@1
  char *v48; // [sp+58h] [bp-38h]@1
  char *v49; // [sp+5Ch] [bp-34h]@1
  int v50; // [sp+64h] [bp-2Ch]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v50, "PUT");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v47, v8, *v4);
  v9 = sub_21E82D8((const void **)&v47, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v48 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_21E7408((const void **)&v48, "/open", 5u);
  v49 = (char *)*v10;
  *v10 = &unk_28898CC;
  sub_21E94B4((void **)&v46, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v45, (const char *)&unk_257BC67);
  v11 = 0;
  v35 = v7;
  v37 = 0;
  v12 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v12 )
  {
    v12(&v36, v6, 2);
    v38 = *(_DWORD *)(v6 + 12);
    v37 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v6 + 8);
  }
  v40 = 0;
  v13 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v13 )
    v13(&v39, v5, 2);
    v41 = *(_DWORD *)(v5 + 12);
    v11 = *(_DWORD *)(v5 + 8);
    v40 = *(void (__fastcall **)(int *, int *, signed int))(v5 + 8);
  v43 = 0;
  v14 = operator new(0x24u);
  *(_DWORD *)v14 = v35;
  *(_QWORD *)((char *)v14 + 4) = *(_QWORD *)&v36;
  v15 = v37;
  *((_DWORD *)v14 + 3) = v15;
  *((_DWORD *)v14 + 4) = v38;
  *(_QWORD *)((char *)v14 + 20) = *(_QWORD *)&v39;
  v16 = v41;
  *((_DWORD *)v14 + 7) = v11;
  *((_DWORD *)v14 + 8) = v16;
  v42 = v14;
  v43 = (void (*)(void))sub_14F5502;
  v44 = sub_14F543E;
  RealmsAPI::_internalCall(v7, 0, (int)&v50, (Social::XboxLiveUserManager *)&v49, &v46, &v45, (int)&v42, 0);
  if ( v43 )
    v43();
  if ( v40 )
    v40(&v39, &v39, 3);
  if ( v37 )
    v37(&v36, &v36, 3);
  v17 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v45 - 4);
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
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v46 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v49 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v48 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v47 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v50 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


void __fastcall RealmsAPI::getInviteCount(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r10@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  void *v5; // r0@3
  void *v6; // r0@7
  void *v7; // r0@8
  void *v8; // r0@9
  void *v9; // r0@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  int v18; // [sp+14h] [bp-64h]@2
  void (__fastcall *v19)(int *, int *, signed int); // [sp+1Ch] [bp-5Ch]@1
  int v20; // [sp+20h] [bp-58h]@2
  int *v21; // [sp+24h] [bp-54h]@3
  void (*v22)(void); // [sp+2Ch] [bp-4Ch]@3
  int (__fastcall *v23)(int **, int, int); // [sp+30h] [bp-48h]@3
  int v24; // [sp+34h] [bp-44h]@3
  int v25; // [sp+38h] [bp-40h]@1
  int v26; // [sp+40h] [bp-38h]@1
  int v27; // [sp+48h] [bp-30h]@1
  int v28; // [sp+50h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v28, "GET");
  sub_21E94B4((void **)&v27, "invites/count/pending");
  sub_21E94B4((void **)&v26, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v25, (const char *)&unk_257BC67);
  v19 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v18, v2, 2);
    v20 = *(_DWORD *)(v2 + 12);
    v19 = *(void (__fastcall **)(int *, int *, signed int))(v2 + 8);
  }
  v22 = 0;
  v5 = operator new(0x14u);
  *(_DWORD *)v5 = v3;
  *(_QWORD *)((char *)v5 + 4) = *(_QWORD *)&v18;
  v24 = v20;
  v21 = (int *)&v21;
  v22 = (void (*)(void))sub_14FCE0C;
  v23 = sub_14FC8D4;
  RealmsAPI::_internalCall(v3, 0, (int)&v28, (Social::XboxLiveUserManager *)&v27, &v26, &v25, (int)&v21, 0);
  if ( v22 )
    v22();
  if ( v19 )
    v19(&v18, &v18, 3);
  v6 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v25 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v26 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v27 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v28 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall RealmsAPI::joinWorld(int a1, __int64 *a2, int a3, int a4)
{
  __int64 *v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  int v8; // r1@1
  const void **v9; // r0@1
  const void **v10; // r0@1
  int v11; // r7@1
  void (__fastcall *v12)(char *, int, signed int); // r3@1
  void (__fastcall *v13)(int *, int, signed int); // r3@3
  void *v14; // r0@5
  void (*v15)(void); // r1@5
  int v16; // r1@5
  void *v17; // r0@11
  void *v18; // r0@12
  char *v19; // r0@13
  char *v20; // r0@14
  void *v21; // r0@15
  void *v22; // r0@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  unsigned int *v29; // r2@30
  signed int v30; // r1@32
  unsigned int *v31; // r2@34
  signed int v32; // r1@36
  unsigned int *v33; // r2@38
  signed int v34; // r1@40
  char v35; // [sp+10h] [bp-78h]@2
  void (*v36)(void); // [sp+18h] [bp-70h]@1
  int v37; // [sp+1Ch] [bp-6Ch]@2
  int v38; // [sp+20h] [bp-68h]@3
  int v39; // [sp+24h] [bp-64h]@4
  void (__fastcall *v40)(int *, int *, signed int); // [sp+2Ch] [bp-5Ch]@3
  int v41; // [sp+30h] [bp-58h]@4
  void *v42; // [sp+34h] [bp-54h]@5
  void (*v43)(void); // [sp+3Ch] [bp-4Ch]@5
  int (__fastcall *v44)(int, int, _DWORD *); // [sp+40h] [bp-48h]@5
  int v45; // [sp+48h] [bp-40h]@1
  int v46; // [sp+50h] [bp-38h]@1
  int v47; // [sp+54h] [bp-34h]@1
  char *v48; // [sp+58h] [bp-30h]@1
  char *v49; // [sp+5Ch] [bp-2Ch]@1
  int v50; // [sp+64h] [bp-24h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v50, "GET");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v47, v8, *v4);
  v9 = sub_21E82D8((const void **)&v47, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v48 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_21E7408((const void **)&v48, "/join", 5u);
  v49 = (char *)*v10;
  *v10 = &unk_28898CC;
  sub_21E94B4((void **)&v46, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v45, (const char *)&unk_257BC67);
  v11 = 0;
  v36 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
  if ( v12 )
  {
    v12(&v35, v5, 2);
    v37 = *(_DWORD *)(v5 + 12);
    v36 = *(void (**)(void))(v5 + 8);
  }
  v38 = v7;
  v40 = 0;
  v13 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v13 )
    v13(&v39, v6, 2);
    v41 = *(_DWORD *)(v6 + 12);
    v11 = *(_DWORD *)(v6 + 8);
    v40 = *(void (__fastcall **)(int *, int *, signed int))(v6 + 8);
  v43 = 0;
  v14 = operator new(0x24u);
  *(_QWORD *)v14 = *(_QWORD *)&v35;
  v15 = v36;
  *((_DWORD *)v14 + 2) = v15;
  *((_DWORD *)v14 + 3) = v37;
  *((_DWORD *)v14 + 4) = v38;
  *(_QWORD *)((char *)v14 + 20) = *(_QWORD *)&v39;
  v16 = v41;
  *((_DWORD *)v14 + 7) = v11;
  *((_DWORD *)v14 + 8) = v16;
  v42 = v14;
  v43 = (void (*)(void))sub_14F3338;
  v44 = sub_14F2ED8;
  RealmsAPI::_internalCall(v7, 0, (int)&v50, (Social::XboxLiveUserManager *)&v49, &v46, &v45, (int)&v42, 0);
  if ( v43 )
    v43();
  if ( v40 )
    v40(&v39, &v39, 3);
  if ( v36 )
    v36();
  v17 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v45 - 4);
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
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v46 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v49 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v48 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v47 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v50 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


void __fastcall RealmsAPI::updateTrialAvailable(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r10@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  void *v5; // r0@3
  void *v6; // r0@7
  void *v7; // r0@8
  void *v8; // r0@9
  void *v9; // r0@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  int v18; // [sp+14h] [bp-64h]@2
  void (__fastcall *v19)(int *, int *, signed int); // [sp+1Ch] [bp-5Ch]@1
  int v20; // [sp+20h] [bp-58h]@2
  int *v21; // [sp+24h] [bp-54h]@3
  void (*v22)(void); // [sp+2Ch] [bp-4Ch]@3
  int (__fastcall *v23)(int **, signed int, int *); // [sp+30h] [bp-48h]@3
  int v24; // [sp+34h] [bp-44h]@3
  int v25; // [sp+38h] [bp-40h]@1
  int v26; // [sp+40h] [bp-38h]@1
  int v27; // [sp+48h] [bp-30h]@1
  int v28; // [sp+50h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v28, "GET");
  sub_21E94B4((void **)&v27, "trial/new");
  sub_21E94B4((void **)&v26, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v25, (const char *)&unk_257BC67);
  v19 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v18, v2, 2);
    v20 = *(_DWORD *)(v2 + 12);
    v19 = *(void (__fastcall **)(int *, int *, signed int))(v2 + 8);
  }
  v22 = 0;
  v5 = operator new(0x14u);
  *(_DWORD *)v5 = v3;
  *(_QWORD *)((char *)v5 + 4) = *(_QWORD *)&v18;
  v24 = v20;
  v21 = (int *)&v21;
  v22 = (void (*)(void))sub_150201A;
  v23 = sub_1501F64;
  RealmsAPI::_internalCall(v3, 0, (int)&v28, (Social::XboxLiveUserManager *)&v27, &v26, &v25, (int)&v21, 0);
  if ( v22 )
    v22();
  if ( v19 )
    v19(&v18, &v18, 3);
  v6 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v25 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v26 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v27 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v28 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


signed int __fastcall RealmsAPI::update(RealmsAPI *this)
{
  RealmsAPI *v1; // r4@1
  bool v2; // cf@2
  __int64 v3; // r0@2
  signed int v4; // r3@2
  _DWORD *v5; // r0@9
  __int64 v6; // r1@9
  int v7; // r4@11
  signed int result; // r0@12
  _DWORD *v9; // [sp+0h] [bp-40h]@9
  __int64 v10; // [sp+8h] [bp-38h]@9
  char v11; // [sp+10h] [bp-30h]@9
  int v12; // [sp+18h] [bp-28h]@2
  char v13; // [sp+20h] [bp-20h]@12
  int (*v14)(void); // [sp+28h] [bp-18h]@11
  void (__fastcall *v15)(char *); // [sp+2Ch] [bp-14h]@14

  v1 = this;
  if ( *((_DWORD *)this + 5) )
  {
    sub_21E034C(&v12);
    v3 = *(_QWORD *)&v12 - *((_QWORD *)v1 + 4);
    v2 = (unsigned int)v3 >= 0xF8475801;
    LODWORD(v3) = 0;
    v4 = 0;
    if ( !v2 )
      LODWORD(v3) = 1;
    if ( SHIDWORD(v3) < 13 )
      v4 = 1;
    if ( HIDWORD(v3) == 13 )
      v4 = v3;
    if ( !v4 )
    {
      sub_21E034C(&v11);
      *((_QWORD *)v1 + 4) = *(_QWORD *)&v11;
      v5 = operator new(4u);
      LODWORD(v6) = sub_14D99E4;
      *v5 = v1;
      HIDWORD(v6) = sub_14D99CE;
      v9 = v5;
      v10 = v6;
      RealmsAPI::checkCompatibility((int)v1, (int)&v9);
      if ( (_DWORD)v10 )
        ((void (*)(void))v10)();
    }
  }
  v7 = (int)v1 + 40;
  v14 = 0;
  while ( 1 )
    result = MPMCQueue<std::function<void ()(void)>>::pop(v7, (int)&v13);
    if ( result != 1 )
      break;
    if ( !v14 )
      sub_21E5F48();
    v15(&v13);
  if ( v14 )
    result = v14();
  return result;
}


void __fastcall RealmsAPI::closeWorld(int a1, __int64 *a2, int a3, int a4)
{
  RealmsAPI::closeWorld(a1, a2, a3, a4);
}


void __fastcall RealmsAPI::getBlocklist(int a1, __int64 *a2, int a3)
{
  RealmsAPI::getBlocklist(a1, a2, a3);
}


void __fastcall RealmsAPI::leaveWorld(int a1, __int64 *a2, int a3)
{
  __int64 *v3; // r5@1
  int v4; // r6@1
  int v5; // r10@1
  int v6; // r1@1
  const void **v7; // r0@1
  void (__fastcall *v8)(int *, int, signed int); // r3@1
  void *v9; // r0@3
  void *v10; // r0@7
  void *v11; // r0@8
  char *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  unsigned int *v23; // r2@29
  signed int v24; // r1@31
  int v25; // [sp+14h] [bp-64h]@2
  void (__fastcall *v26)(int *, int *, signed int); // [sp+1Ch] [bp-5Ch]@1
  int v27; // [sp+20h] [bp-58h]@2
  int *v28; // [sp+24h] [bp-54h]@3
  void (*v29)(void); // [sp+2Ch] [bp-4Ch]@3
  int (__fastcall *v30)(int **, int, int *); // [sp+30h] [bp-48h]@3
  int v31; // [sp+34h] [bp-44h]@3
  int v32; // [sp+38h] [bp-40h]@1
  int v33; // [sp+40h] [bp-38h]@1
  int v34; // [sp+44h] [bp-34h]@1
  char *v35; // [sp+48h] [bp-30h]@1
  int v36; // [sp+50h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v36, "DELETE");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v34, v6, *v3);
  v7 = sub_21E82D8((const void **)&v34, 0, (unsigned int)"invites/", (_BYTE *)8);
  v35 = (char *)*v7;
  *v7 = &unk_28898CC;
  sub_21E94B4((void **)&v33, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v32, (const char *)&unk_257BC67);
  v26 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v8 )
  {
    v8(&v25, v4, 2);
    v27 = *(_DWORD *)(v4 + 12);
    v26 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  }
  v29 = 0;
  v9 = operator new(0x14u);
  *(_DWORD *)v9 = v5;
  *(_QWORD *)((char *)v9 + 4) = *(_QWORD *)&v25;
  v31 = v27;
  v28 = (int *)&v28;
  v29 = (void (*)(void))sub_1501EE0;
  v30 = sub_1501E40;
  RealmsAPI::_internalCall(v5, 0, (int)&v36, (Social::XboxLiveUserManager *)&v35, &v33, &v32, (int)&v28, 0);
  if ( v29 )
    v29();
  if ( v26 )
    v26(&v25, &v25, 3);
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v32 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v33 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = v35 - 12;
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v35 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v34 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v36 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


void __fastcall RealmsAPI::removeFromBlocklist(int a1, __int64 *a2, const void **a3, int a4)
{
  __int64 *v4; // r7@1
  int v5; // r5@1
  const void **v6; // r6@1
  int v7; // r4@1
  int v8; // r1@1
  const void **v9; // r0@1
  const void **v10; // r0@1
  const void **v11; // r0@1
  void (__fastcall *v12)(char *, int, signed int); // r3@1
  void *v13; // r0@7
  void *v14; // r0@8
  char *v15; // r0@9
  char *v16; // r0@10
  char *v17; // r0@11
  void *v18; // r0@12
  void *v19; // r0@13
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
  unsigned int *v32; // r2@39
  signed int v33; // r1@41
  char v34; // [sp+10h] [bp-70h]@2
  void (*v35)(void); // [sp+18h] [bp-68h]@1
  int v36; // [sp+1Ch] [bp-64h]@2
  int v37; // [sp+20h] [bp-60h]@3
  int *v38; // [sp+28h] [bp-58h]@3
  void (*v39)(void); // [sp+30h] [bp-50h]@3
  int (__fastcall *v40)(int, __int16, int); // [sp+34h] [bp-4Ch]@3
  int v41; // [sp+38h] [bp-48h]@3
  int v42; // [sp+3Ch] [bp-44h]@1
  int v43; // [sp+44h] [bp-3Ch]@1
  int v44; // [sp+48h] [bp-38h]@1
  char *v45; // [sp+4Ch] [bp-34h]@1
  char *v46; // [sp+50h] [bp-30h]@1
  char *v47; // [sp+54h] [bp-2Ch]@1
  int v48; // [sp+5Ch] [bp-24h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v48, "DELETE");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v44, v8, *v4);
  v9 = sub_21E82D8((const void **)&v44, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v45 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_21E7408((const void **)&v45, "/blocklist/", 0xBu);
  v46 = (char *)*v10;
  *v10 = &unk_28898CC;
  v11 = sub_21E72F0((const void **)&v46, v6);
  v47 = (char *)*v11;
  *v11 = &unk_28898CC;
  sub_21E94B4((void **)&v43, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v42, (const char *)&unk_257BC67);
  v35 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
  if ( v12 )
  {
    v12(&v34, v5, 2);
    v36 = *(_DWORD *)(v5 + 12);
    v35 = *(void (**)(void))(v5 + 8);
  }
  v37 = v7;
  v39 = 0;
  *(_QWORD *)operator new(0x14u) = *(_QWORD *)&v34;
  v41 = v7;
  v38 = (int *)&v38;
  v39 = (void (*)(void))sub_14FC384;
  v40 = sub_14FC180;
  RealmsAPI::_internalCall(v7, 0, (int)&v48, (Social::XboxLiveUserManager *)&v47, &v43, &v42, (int)&v38, 0);
  if ( v39 )
    v39();
  if ( v35 )
    v35();
  v13 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v42 - 4);
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
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v43 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = v47 - 12;
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v47 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v46 - 12;
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v46 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = v45 - 12;
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v45 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v44 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v48 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
}


int __fastcall RealmsAPI::updateRealmsConfig(int a1, __int64 *a2, int *a3, int a4)
{
  int v4; // r9@1
  int v5; // r6@1
  int *v6; // r5@1
  __int64 *v7; // r7@1
  int *v8; // r4@1
  void *v9; // r0@3
  void *v10; // r0@4
  void *v11; // r0@5
  int v12; // r1@6
  const void **v13; // r0@6
  const void **v14; // r0@6
  void (__fastcall *v15)(int *, int, signed int); // r3@6
  void *v16; // r5@8
  void (__fastcall *v17)(_DWORD, _DWORD, _DWORD); // r0@8
  __int64 v18; // r0@8
  void *v19; // r0@10
  void *v20; // r0@13
  char *v21; // r0@14
  char *v22; // r0@15
  void *v23; // r0@16
  void *v24; // r0@17
  void *v25; // r0@18
  int result; // r0@19
  unsigned int *v27; // r2@22
  signed int v28; // r1@24
  unsigned int *v29; // r2@26
  signed int v30; // r1@28
  unsigned int *v31; // r2@30
  signed int v32; // r1@32
  unsigned int *v33; // r2@34
  signed int v34; // r1@36
  unsigned int *v35; // r2@38
  signed int v36; // r1@40
  unsigned int *v37; // r2@42
  signed int v38; // r1@44
  unsigned int *v39; // r2@46
  signed int v40; // r1@48
  unsigned int *v41; // r2@50
  signed int v42; // r1@52
  unsigned int *v43; // r2@54
  signed int v44; // r1@56
  unsigned int *v45; // r2@58
  signed int v46; // r1@60
  int v47; // [sp+18h] [bp-80h]@7
  void (__fastcall *v48)(_DWORD, _DWORD, _DWORD); // [sp+20h] [bp-78h]@6
  int v49; // [sp+24h] [bp-74h]@7
  int v50; // [sp+28h] [bp-70h]@8
  void *v51; // [sp+2Ch] [bp-6Ch]@8
  void (*v52)(void); // [sp+34h] [bp-64h]@8
  int v53; // [sp+40h] [bp-58h]@6
  int v54; // [sp+44h] [bp-54h]@6
  char *v55; // [sp+48h] [bp-50h]@6
  char *v56; // [sp+4Ch] [bp-4Ch]@6
  int v57; // [sp+54h] [bp-44h]@6
  int v58; // [sp+58h] [bp-40h]@5
  int v59; // [sp+5Ch] [bp-3Ch]@5
  int v60; // [sp+60h] [bp-38h]@1
  int v61; // [sp+64h] [bp-34h]@1
  int v62; // [sp+6Ch] [bp-2Ch]@1
  int v63; // [sp+70h] [bp-28h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  web::json::value::value((web::json::value *)&v63);
  sub_21E94B4((void **)&v62, "versionRef");
  v8 = (int *)web::json::value::operator[]((int)&v63);
  utility::conversions::to_string_t(&v60, v6);
  web::json::value::value(&v61, &v60);
  web::json::value::operator=(v8, &v61);
  if ( v61 )
    (*(void (**)(void))(*(_DWORD *)v61 + 96))();
  v61 = 0;
  v9 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v60 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v62 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  web::json::value::serialize((web::json::value *)&v58, (int)&v63);
  utility::conversions::to_utf8string(&v59, &v58);
  v11 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v58 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v57, "POST");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v54, v12, *v7);
  v13 = sub_21E82D8((const void **)&v54, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v55 = (char *)*v13;
  *v13 = &unk_28898CC;
  v14 = sub_21E7408((const void **)&v55, "/configuration/dev", 0x12u);
  v56 = (char *)*v14;
  *v14 = &unk_28898CC;
  sub_21E94B4((void **)&v53, "application/json");
  v48 = 0;
  v15 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v15 )
    v15(&v47, v5, 2);
    v49 = *(_DWORD *)(v5 + 12);
    v48 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v5 + 8);
  sub_21E8AF4(&v50, v6);
  v52 = 0;
  v16 = operator new(0x18u);
  *(_DWORD *)v16 = v4;
  *(_QWORD *)((char *)v16 + 4) = *(_QWORD *)&v47;
  v17 = v48;
  *((_DWORD *)v16 + 3) = v17;
  *((_DWORD *)v16 + 4) = v49;
  sub_21E8AF4((int *)v16 + 5, &v50);
  LODWORD(v18) = sub_14F2804;
  v51 = v16;
  HIDWORD(v18) = sub_14F2410;
  *(_QWORD *)&v52 = v18;
  RealmsAPI::_internalCall(v4, 0, (int)&v57, (Social::XboxLiveUserManager *)&v56, &v53, &v59, (int)&v51, 0);
  if ( v52 )
    v52();
  v19 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v50 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  if ( v48 )
    v48(&v47, &v47, 3);
  v20 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v53 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v56 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v55 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v54 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v57 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v59 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  result = v63;
  if ( v63 )
    result = (*(int (**)(void))(*(_DWORD *)v63 + 96))();
  return result;
}


void __fastcall RealmsAPI::joinWorld(int a1, __int64 *a2, int a3, int a4)
{
  RealmsAPI::joinWorld(a1, a2, a3, a4);
}


int __fastcall RealmsAPI::initializeWorld(int a1, __int64 *a2, int *a3, int *a4, int a5)
{
  int v5; // r9@1
  int *v6; // r6@1
  int *v7; // r7@1
  __int64 *v8; // r8@1
  int *v9; // r5@1
  void *v10; // r0@3
  void *v11; // r0@4
  int *v12; // r5@5
  void *v13; // r0@7
  void *v14; // r0@8
  void *v15; // r0@9
  int v16; // r1@10
  const void **v17; // r0@10
  const void **v18; // r0@10
  void (__fastcall *v19)(int *, int, signed int); // r3@10
  void *v20; // r0@12
  void *v21; // r0@16
  char *v22; // r0@17
  char *v23; // r0@18
  void *v24; // r0@19
  void *v25; // r0@20
  void *v26; // r0@21
  int result; // r0@22
  unsigned int *v28; // r2@25
  signed int v29; // r1@27
  unsigned int *v30; // r2@29
  signed int v31; // r1@31
  unsigned int *v32; // r2@33
  signed int v33; // r1@35
  unsigned int *v34; // r2@37
  signed int v35; // r1@39
  unsigned int *v36; // r2@41
  signed int v37; // r1@43
  unsigned int *v38; // r2@45
  signed int v39; // r1@47
  unsigned int *v40; // r2@49
  signed int v41; // r1@51
  unsigned int *v42; // r2@53
  signed int v43; // r1@55
  unsigned int *v44; // r2@57
  signed int v45; // r1@59
  unsigned int *v46; // r2@61
  signed int v47; // r1@63
  unsigned int *v48; // r2@65
  signed int v49; // r1@67
  int v50; // [sp+14h] [bp-8Ch]@11
  void (__fastcall *v51)(int *, int *, signed int); // [sp+1Ch] [bp-84h]@10
  int v52; // [sp+20h] [bp-80h]@11
  int *v53; // [sp+24h] [bp-7Ch]@12
  void (*v54)(void); // [sp+2Ch] [bp-74h]@12
  int (__fastcall *v55)(int **, int, int *); // [sp+30h] [bp-70h]@12
  int v56; // [sp+34h] [bp-6Ch]@12
  int v57; // [sp+38h] [bp-68h]@10
  int v58; // [sp+3Ch] [bp-64h]@10
  char *v59; // [sp+40h] [bp-60h]@10
  char *v60; // [sp+44h] [bp-5Ch]@10
  int v61; // [sp+4Ch] [bp-54h]@10
  int v62; // [sp+50h] [bp-50h]@9
  int v63; // [sp+54h] [bp-4Ch]@9
  int v64; // [sp+58h] [bp-48h]@5
  int v65; // [sp+5Ch] [bp-44h]@5
  int v66; // [sp+64h] [bp-3Ch]@5
  int v67; // [sp+68h] [bp-38h]@1
  int v68; // [sp+6Ch] [bp-34h]@1
  int v69; // [sp+74h] [bp-2Ch]@1
  int v70; // [sp+78h] [bp-28h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  web::json::value::value((web::json::value *)&v70);
  sub_21E94B4((void **)&v69, "name");
  v9 = (int *)web::json::value::operator[]((int)&v70);
  utility::conversions::to_string_t(&v67, v7);
  web::json::value::value(&v68, &v67);
  web::json::value::operator=(v9, &v68);
  if ( v68 )
    (*(void (**)(void))(*(_DWORD *)v68 + 96))();
  v68 = 0;
  v10 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v67 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v69 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v66, "description");
  v12 = (int *)web::json::value::operator[]((int)&v70);
  utility::conversions::to_string_t(&v64, v6);
  web::json::value::value(&v65, &v64);
  web::json::value::operator=(v12, &v65);
  if ( v65 )
    (*(void (**)(void))(*(_DWORD *)v65 + 96))();
  v65 = 0;
  v13 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v64 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v66 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  web::json::value::serialize((web::json::value *)&v62, (int)&v70);
  utility::conversions::to_utf8string(&v63, &v62);
  v15 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v62 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v61, "POST");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v58, v16, *v8);
  v17 = sub_21E82D8((const void **)&v58, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v59 = (char *)*v17;
  *v17 = &unk_28898CC;
  v18 = sub_21E7408((const void **)&v59, "/initialize", 0xBu);
  v60 = (char *)*v18;
  *v18 = &unk_28898CC;
  sub_21E94B4((void **)&v57, "application/json");
  v51 = 0;
  v19 = *(void (__fastcall **)(int *, int, signed int))(a5 + 8);
  if ( v19 )
    v19(&v50, a5, 2);
    v52 = *(_DWORD *)(a5 + 12);
    v51 = *(void (__fastcall **)(int *, int *, signed int))(a5 + 8);
  v54 = 0;
  v20 = operator new(0x14u);
  *(_DWORD *)v20 = v5;
  *(_QWORD *)((char *)v20 + 4) = *(_QWORD *)&v50;
  v56 = v52;
  v53 = (int *)&v53;
  v54 = (void (*)(void))sub_14F2D30;
  v55 = sub_14F2C90;
  RealmsAPI::_internalCall(v5, 0, (int)&v61, (Social::XboxLiveUserManager *)&v60, &v57, &v63, (int)&v53, 0);
  if ( v54 )
    v54();
  if ( v51 )
    v51(&v50, &v50, 3);
  v21 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v57 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = v60 - 12;
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v60 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = v59 - 12;
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v59 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v58 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v61 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v63 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  result = v70;
  if ( v70 )
    result = (*(int (**)(void))(*(_DWORD *)v70 + 96))();
  return result;
}


void __fastcall RealmsAPI::checkCompatibility(int a1, int a2)
{
  RealmsAPI::checkCompatibility(a1, a2);
}


void __fastcall RealmsAPI::resetWorld(int a1, __int64 *a2, int a3, int a4)
{
  RealmsAPI::resetWorld(a1, a2, a3, a4);
}


void __fastcall RealmsAPI::getSubscriptionDetails(int a1, __int64 *a2, int a3)
{
  __int64 *v3; // r5@1
  int v4; // r6@1
  int v5; // r10@1
  int v6; // r1@1
  const void **v7; // r0@1
  const void **v8; // r0@1
  void (__fastcall *v9)(int *, int, signed int); // r3@1
  void *v10; // r0@3
  void *v11; // r0@7
  void *v12; // r0@8
  char *v13; // r0@9
  char *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  int v29; // [sp+18h] [bp-68h]@2
  void (__fastcall *v30)(int *, int *, signed int); // [sp+20h] [bp-60h]@1
  int v31; // [sp+24h] [bp-5Ch]@2
  int *v32; // [sp+28h] [bp-58h]@3
  void (*v33)(void); // [sp+30h] [bp-50h]@3
  void (__fastcall *v34)(int **, int, int); // [sp+34h] [bp-4Ch]@3
  int v35; // [sp+38h] [bp-48h]@3
  int v36; // [sp+3Ch] [bp-44h]@1
  int v37; // [sp+44h] [bp-3Ch]@1
  int v38; // [sp+48h] [bp-38h]@1
  char *v39; // [sp+4Ch] [bp-34h]@1
  char *v40; // [sp+50h] [bp-30h]@1
  int v41; // [sp+58h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v41, "GET");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v38, v6, *v3);
  v7 = sub_21E82D8((const void **)&v38, 0, (unsigned int)"subscriptions/", (_BYTE *)0xE);
  v39 = (char *)*v7;
  *v7 = &unk_28898CC;
  v8 = sub_21E7408((const void **)&v39, "/details", 8u);
  v40 = (char *)*v8;
  *v8 = &unk_28898CC;
  sub_21E94B4((void **)&v37, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v36, (const char *)&unk_257BC67);
  v30 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v9 )
  {
    v9(&v29, v4, 2);
    v31 = *(_DWORD *)(v4 + 12);
    v30 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  }
  v33 = 0;
  v10 = operator new(0x14u);
  *(_DWORD *)v10 = v5;
  *(_QWORD *)((char *)v10 + 4) = *(_QWORD *)&v29;
  v35 = v31;
  v32 = (int *)&v32;
  v33 = (void (*)(void))sub_14EC0EC;
  v34 = sub_14EB754;
  RealmsAPI::_internalCall(v5, 0, (int)&v41, (Social::XboxLiveUserManager *)&v40, &v37, &v36, (int)&v32, 0);
  if ( v33 )
    v33();
  if ( v30 )
    v30(&v29, &v29, 3);
  v11 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v36 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v37 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v40 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v39 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v38 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v41 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


int __fastcall RealmsAPI::setCachedRealmsTrialPurchased(int result, bool a2)
{
  *(_BYTE *)(result + 92) = a2;
  return result;
}


void __fastcall RealmsAPI::acceptInvite(int a1, int *a2, int a3)
{
  int *v3; // r5@1
  int v4; // r6@1
  int v5; // r10@1
  const void **v6; // r0@1
  void (__fastcall *v7)(int *, int, signed int); // r3@1
  void *v8; // r0@3
  void *v9; // r0@7
  void *v10; // r0@8
  char *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  int v24; // [sp+14h] [bp-64h]@2
  void (__fastcall *v25)(int *, int *, signed int); // [sp+1Ch] [bp-5Ch]@1
  int v26; // [sp+20h] [bp-58h]@2
  int *v27; // [sp+24h] [bp-54h]@3
  void (*v28)(void); // [sp+2Ch] [bp-4Ch]@3
  int (__fastcall *v29)(int **, int, int *); // [sp+30h] [bp-48h]@3
  int v30; // [sp+34h] [bp-44h]@3
  int v31; // [sp+38h] [bp-40h]@1
  int v32; // [sp+40h] [bp-38h]@1
  int v33; // [sp+44h] [bp-34h]@1
  char *v34; // [sp+48h] [bp-30h]@1
  int v35; // [sp+50h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v35, "PUT");
  sub_21E8AF4(&v33, v3);
  v6 = sub_21E82D8((const void **)&v33, 0, (unsigned int)"invites/accept/", (_BYTE *)0xF);
  v34 = (char *)*v6;
  *v6 = &unk_28898CC;
  sub_21E94B4((void **)&v32, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v31, (const char *)&unk_257BC67);
  v25 = 0;
  v7 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v7 )
  {
    v7(&v24, v4, 2);
    v26 = *(_DWORD *)(v4 + 12);
    v25 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  }
  v28 = 0;
  v8 = operator new(0x14u);
  *(_DWORD *)v8 = v5;
  *(_QWORD *)((char *)v8 + 4) = *(_QWORD *)&v24;
  v30 = v26;
  v27 = (int *)&v27;
  v28 = (void (*)(void))sub_1501C98;
  v29 = sub_1501BF8;
  RealmsAPI::_internalCall(v5, 0, (int)&v35, (Social::XboxLiveUserManager *)&v34, &v32, &v31, (int)&v27, 0);
  if ( v28 )
    v28();
  if ( v25 )
    v25(&v24, &v24, 3);
  v9 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
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
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v32 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v34 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v33 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v35 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall RealmsAPI::getRealmsConfigDetails(int a1, __int64 *a2, int a3)
{
  __int64 *v3; // r5@1
  int v4; // r6@1
  int v5; // r10@1
  int v6; // r1@1
  const void **v7; // r0@1
  const void **v8; // r0@1
  void (__fastcall *v9)(int *, int, signed int); // r3@1
  void *v10; // r0@3
  void *v11; // r0@7
  void *v12; // r0@8
  char *v13; // r0@9
  char *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  int v29; // [sp+18h] [bp-68h]@2
  void (__fastcall *v30)(int *, int *, signed int); // [sp+20h] [bp-60h]@1
  int v31; // [sp+24h] [bp-5Ch]@2
  int *v32; // [sp+28h] [bp-58h]@3
  void (*v33)(void); // [sp+30h] [bp-50h]@3
  Realms::RealmsConfigInfo *(__fastcall *v34)(int, int, int, int, int, int, void *, int, int, char, int, int, int, int, void *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, char); // [sp+34h] [bp-4Ch]@3
  int v35; // [sp+38h] [bp-48h]@3
  int v36; // [sp+3Ch] [bp-44h]@1
  int v37; // [sp+44h] [bp-3Ch]@1
  int v38; // [sp+48h] [bp-38h]@1
  char *v39; // [sp+4Ch] [bp-34h]@1
  char *v40; // [sp+50h] [bp-30h]@1
  int v41; // [sp+58h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v41, "GET");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v38, v6, *v3);
  v7 = sub_21E82D8((const void **)&v38, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v39 = (char *)*v7;
  *v7 = &unk_28898CC;
  v8 = sub_21E7408((const void **)&v39, "/configuration/dev", 0x12u);
  v40 = (char *)*v8;
  *v8 = &unk_28898CC;
  sub_21E94B4((void **)&v37, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v36, (const char *)&unk_257BC67);
  v30 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v9 )
  {
    v9(&v29, v4, 2);
    v31 = *(_DWORD *)(v4 + 12);
    v30 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  }
  v33 = 0;
  v10 = operator new(0x14u);
  *(_DWORD *)v10 = v5;
  *(_QWORD *)((char *)v10 + 4) = *(_QWORD *)&v29;
  v35 = v31;
  v32 = (int *)&v32;
  v33 = (void (*)(void))sub_14EF71C;
  v34 = sub_14EEF78;
  RealmsAPI::_internalCall(v5, 0, (int)&v41, (Social::XboxLiveUserManager *)&v40, &v37, &v36, (int)&v32, 0);
  if ( v33 )
    v33();
  if ( v30 )
    v30(&v29, &v29, 3);
  v11 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v36 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v37 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v40 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v39 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v38 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v41 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


void __fastcall RealmsAPI::getWorld(int a1, __int64 *a2, int a3)
{
  RealmsAPI::getWorld(a1, a2, a3);
}


void __fastcall RealmsAPI::getWorld(int a1, __int64 *a2, int a3)
{
  __int64 *v3; // r5@1
  int v4; // r6@1
  int v5; // r10@1
  int v6; // r1@1
  const void **v7; // r0@1
  void (__fastcall *v8)(int *, int, signed int); // r3@1
  void *v9; // r0@3
  void *v10; // r0@7
  void *v11; // r0@8
  char *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  unsigned int *v23; // r2@29
  signed int v24; // r1@31
  int v25; // [sp+14h] [bp-64h]@2
  void (__fastcall *v26)(int *, int *, signed int); // [sp+1Ch] [bp-5Ch]@1
  int v27; // [sp+20h] [bp-58h]@2
  int *v28; // [sp+24h] [bp-54h]@3
  void (*v29)(void); // [sp+2Ch] [bp-4Ch]@3
  Realms::World *(__fastcall *v30)(int **, int, int); // [sp+30h] [bp-48h]@3
  int v31; // [sp+34h] [bp-44h]@3
  int v32; // [sp+38h] [bp-40h]@1
  int v33; // [sp+40h] [bp-38h]@1
  int v34; // [sp+44h] [bp-34h]@1
  char *v35; // [sp+48h] [bp-30h]@1
  int v36; // [sp+50h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v36, "GET");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v34, v6, *v3);
  v7 = sub_21E82D8((const void **)&v34, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v35 = (char *)*v7;
  *v7 = &unk_28898CC;
  sub_21E94B4((void **)&v33, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v32, (const char *)&unk_257BC67);
  v26 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v8 )
  {
    v8(&v25, v4, 2);
    v27 = *(_DWORD *)(v4 + 12);
    v26 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  }
  v29 = 0;
  v9 = operator new(0x14u);
  *(_DWORD *)v9 = v5;
  *(_QWORD *)((char *)v9 + 4) = *(_QWORD *)&v25;
  v31 = v27;
  v28 = (int *)&v28;
  v29 = (void (*)(void))sub_14E7364;
  v30 = sub_14E6CB4;
  RealmsAPI::_internalCall(v5, 0, (int)&v36, (Social::XboxLiveUserManager *)&v35, &v33, &v32, (int)&v28, 0);
  if ( v29 )
    v29();
  if ( v26 )
    v26(&v25, &v25, 3);
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v32 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v33 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = v35 - 12;
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v35 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v34 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v36 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


void __fastcall RealmsAPI::leaveWorld(int a1, __int64 *a2, int a3)
{
  RealmsAPI::leaveWorld(a1, a2, a3);
}


void __fastcall RealmsAPI::addToBlocklist(int a1, __int64 *a2, const void **a3, int a4)
{
  RealmsAPI::addToBlocklist(a1, a2, a3, a4);
}


void __fastcall RealmsAPI::listInvites(int a1, int a2)
{
  RealmsAPI::listInvites(a1, a2);
}


void __fastcall RealmsAPI::getWorldfromLink(int a1, const void **a2, int a3)
{
  RealmsAPI::getWorldfromLink(a1, a2, a3);
}


void __fastcall RealmsAPI::checkCompatibility(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r10@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  void *v5; // r0@3
  void *v6; // r0@7
  void *v7; // r0@8
  void *v8; // r0@9
  void *v9; // r0@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  int v18; // [sp+14h] [bp-64h]@2
  void (__fastcall *v19)(int *, int *, signed int); // [sp+1Ch] [bp-5Ch]@1
  int v20; // [sp+20h] [bp-58h]@2
  int *v21; // [sp+24h] [bp-54h]@3
  void (*v22)(void); // [sp+2Ch] [bp-4Ch]@3
  unsigned int (__fastcall *v23)(int **, signed int, int *); // [sp+30h] [bp-48h]@3
  int v24; // [sp+34h] [bp-44h]@3
  int v25; // [sp+38h] [bp-40h]@1
  int v26; // [sp+40h] [bp-38h]@1
  int v27; // [sp+48h] [bp-30h]@1
  int v28; // [sp+50h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v28, "GET");
  sub_21E94B4((void **)&v27, "mco/client/compatible");
  sub_21E94B4((void **)&v26, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v25, (const char *)&unk_257BC67);
  v19 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v18, v2, 2);
    v20 = *(_DWORD *)(v2 + 12);
    v19 = *(void (__fastcall **)(int *, int *, signed int))(v2 + 8);
  }
  v22 = 0;
  v5 = operator new(0x14u);
  *(_DWORD *)v5 = v3;
  *(_QWORD *)((char *)v5 + 4) = *(_QWORD *)&v18;
  v24 = v20;
  v21 = (int *)&v21;
  v22 = (void (*)(void))sub_14F5B50;
  v23 = sub_14F592C;
  RealmsAPI::_internalCall(v3, 0, (int)&v28, (Social::XboxLiveUserManager *)&v27, &v26, &v25, (int)&v21, 0);
  if ( v22 )
    v22();
  if ( v19 )
    v19(&v18, &v18, 3);
  v6 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v25 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v26 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v27 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v28 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


signed int __fastcall RealmsAPI::abortAllRequests(RealmsAPI *this)
{
  char *v1; // r4@1
  signed int result; // r0@2
  int v3; // [sp+0h] [bp-20h]@2
  int (*v4)(void); // [sp+8h] [bp-18h]@1

  v1 = (char *)this + 40;
  v4 = 0;
  do
    result = MPMCQueue<std::function<void ()(void)>>::pop((int)v1, (int)&v3);
  while ( result );
  if ( v4 )
    result = v4();
  return result;
}


void __fastcall RealmsAPI::getInfiniteInviteLink(int a1, __int64 *a2, int a3)
{
  RealmsAPI::getInfiniteInviteLink(a1, a2, a3);
}


void **__fastcall RealmsAPI::RealmsAPI(void **a1, void *a2, int *a3, int *a4)
{
  void *v4; // r7@1
  int *v5; // r5@1
  int *v6; // r6@1
  void **v7; // r4@1
  web::details::uri_components *v8; // r6@1
  web::details::uri_components *v9; // r5@1
  void *v10; // r0@1
  void *v11; // r0@2
  __int64 v12; // r1@2
  void (*v13)(void); // r3@2
  __int64 v14; // r1@2
  void (*v15)(void); // r6@2
  int v16; // r1@6
  web::http::client::http_client *v17; // r0@6
  web::http::client::http_client *v18; // r0@7
  void *v19; // r0@8
  int v20; // r1@9
  web::http::client::http_client *v21; // r0@9
  web::http::client::http_client *v22; // r0@10
  void *v23; // r0@11
  int v24; // r6@12
  _DWORD *v25; // r0@12
  __int64 v26; // r1@12
  int v27; // r6@14
  _DWORD *v28; // r0@14
  __int64 v29; // r1@14
  char *v30; // r0@16
  char *v31; // r0@17
  void *v32; // r0@18
  void *v33; // r0@19
  unsigned int *v35; // r2@21
  signed int v36; // r1@23
  unsigned int *v37; // r2@25
  signed int v38; // r1@27
  unsigned int *v39; // r2@29
  signed int v40; // r1@31
  unsigned int *v41; // r2@33
  signed int v42; // r1@35
  unsigned int *v43; // r2@37
  signed int v44; // r1@39
  unsigned int *v45; // r2@41
  signed int v46; // r1@43
  unsigned int *v47; // r2@45
  signed int v48; // r1@47
  _DWORD *v49; // [sp+8h] [bp-190h]@14
  __int64 v50; // [sp+10h] [bp-188h]@14
  _DWORD *v51; // [sp+18h] [bp-180h]@12
  __int64 v52; // [sp+20h] [bp-178h]@12
  int v53; // [sp+28h] [bp-170h]@9
  int v54; // [sp+2Ch] [bp-16Ch]@9
  int v55; // [sp+30h] [bp-168h]@6
  int v56; // [sp+34h] [bp-164h]@6
  void *v57; // [sp+38h] [bp-160h]@2
  __int64 v58; // [sp+40h] [bp-158h]@2
  char v59; // [sp+48h] [bp-150h]@2
  __int64 v60; // [sp+A0h] [bp-F8h]@2
  void (*v61)(void); // [sp+A8h] [bp-F0h]@2
  int v62; // [sp+ACh] [bp-ECh]@2
  int v63; // [sp+CCh] [bp-CCh]@1
  int v64; // [sp+ECh] [bp-ACh]@1
  int v65; // [sp+10Ch] [bp-8Ch]@1
  char *v66; // [sp+110h] [bp-88h]@1
  char *v67; // [sp+114h] [bp-84h]@1
  int v68; // [sp+118h] [bp-80h]@1
  int v69; // [sp+11Ch] [bp-7Ch]@1
  __int64 v70; // [sp+160h] [bp-38h]@2
  void (*v71)(void); // [sp+168h] [bp-30h]@2
  int v72; // [sp+16Ch] [bp-2Ch]@2

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4(a1, "https://multiplayer.minecraft.net/");
  sub_21E94B4(v7 + 1, "https://multiplayer.minecraft.net/");
  v7[2] = v4;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = (void *)1;
  v7[6] = (void *)4;
  *((_BYTE *)v7 + 28) = 0;
  v7[8] = 0;
  v7[9] = 0;
  MPMCQueue<std::function<void ()(void)>>::MPMCQueue((int)(v7 + 10));
  sub_21E8AF4((int *)v7 + 21, v6);
  sub_21E8AF4((int *)v7 + 22, v5);
  *((_BYTE *)v7 + 92) = 0;
  v7[24] = 0;
  web::uri::uri((web::uri *)&v68, "http://192.168.1.21:8888");
  v8 = (web::details::uri_components *)(sub_21E8AF4(&v63, &v68) + 1);
  web::details::uri_components::uri_components(v8, (const web::details::uri_components *)&v69);
  v9 = (web::details::uri_components *)(sub_21E8AF4(&v64, &v63) + 1);
  web::details::uri_components::uri_components(v9, v8);
  v65 = 3;
  v66 = (char *)&unk_28898CC;
  v67 = (char *)&unk_28898CC;
  web::details::uri_components::~uri_components(v8);
  v10 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v63 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    }
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  web::http::client::http_client_config::http_client_config((web::http::client::http_client_config *)&v59);
  v11 = operator new(1u);
  LODWORD(v12) = sub_14D97D8;
  v57 = v11;
  HIDWORD(v12) = nullsub_54;
  v58 = v12;
  v71 = 0;
  sub_14D97D8((void **)&v70, &v57, 2);
  v13 = (void (*)(void))v58;
  v14 = v70;
  v70 = v60;
  v60 = v14;
  v15 = v61;
  v61 = (void (*)(void))v58;
  v71 = v15;
  v72 = v62;
  v62 = HIDWORD(v58);
  if ( v15 )
    v15();
    v13 = (void (*)(void))v58;
  if ( v13 )
    v13();
  utility::conversions::to_string_t(&v55, (int *)v7 + 21);
  std::make_unique<web::http::client::http_client,std::string,web::http::client::http_client_config &>(
    (web::http::client::http_client **)&v56,
    &v55,
    (const web::http::client::http_client_config *)&v59);
  v16 = v56;
  v56 = 0;
  v17 = (web::http::client::http_client *)v7[3];
  v7[3] = (void *)v16;
  if ( v17 )
    v18 = web::http::client::http_client::~http_client(v17);
    operator delete((void *)v18);
  v19 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v55 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  utility::conversions::to_string_t(&v53, (int *)v7);
    (web::http::client::http_client **)&v54,
    &v53,
  v20 = v54;
  v54 = 0;
  v21 = (web::http::client::http_client *)v7[4];
  v7[4] = (void *)v20;
  if ( v21 )
    v22 = web::http::client::http_client::~http_client(v21);
    operator delete((void *)v22);
  v23 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v53 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (int)v7[2];
  v25 = operator new(4u);
  LODWORD(v26) = sub_14D9864;
  *v25 = v7;
  HIDWORD(v26) = sub_14D9808;
  v51 = v25;
  v52 = v26;
  Social::XboxLiveUserManager::registerSignInHandler(v24, (int)&v51);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  v27 = (int)v7[2];
  v28 = operator new(4u);
  LODWORD(v29) = sub_14D9998;
  *v28 = v7;
  HIDWORD(v29) = sub_14D994C;
  v49 = v28;
  v50 = v29;
  Social::XboxLiveUserManager::registerSignOutHandler(v27, (int)&v49);
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  web::http::client::http_client_config::~http_client_config((web::http::client::http_client_config *)&v59);
  v30 = v67 - 12;
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v67 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = v66 - 12;
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v66 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  web::details::uri_components::~uri_components(v9);
  v32 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v64 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v69);
  v33 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v68 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  return v7;
}


void __fastcall RealmsAPI::fetchWorlds(int a1, int a2)
{
  RealmsAPI::fetchWorlds(a1, a2);
}


int __fastcall RealmsAPI::setWorldInfo(int a1, __int64 *a2, int *a3, int *a4, int a5, int a6, bool a7, int a8)
{
  int v8; // r9@1
  int *v9; // r6@1
  int *v10; // r7@1
  __int64 *v11; // r8@1
  int *v12; // r5@1
  void *v13; // r0@3
  void *v14; // r0@4
  int *v15; // r5@5
  void *v16; // r0@7
  void *v17; // r0@8
  int *v18; // r0@9
  void *v19; // r0@9
  int *v20; // r4@10
  void *v21; // r0@12
  int *v22; // r4@13
  void *v23; // r0@15
  int *v24; // r4@16
  void *v25; // r0@18
  int *v26; // r0@19
  void *v27; // r0@19
  void *v28; // r0@20
  int v29; // r1@21
  const void **v30; // r0@21
  const void **v31; // r0@21
  void (__fastcall *v32)(int *, int, signed int); // r3@21
  void *v33; // r0@23
  void *v34; // r0@27
  char *v35; // r0@28
  char *v36; // r0@29
  void *v37; // r0@30
  void *v38; // r0@31
  void *v39; // r0@32
  int result; // r0@37
  unsigned int *v41; // r2@40
  signed int v42; // r1@42
  unsigned int *v43; // r2@44
  signed int v44; // r1@46
  unsigned int *v45; // r2@48
  signed int v46; // r1@50
  unsigned int *v47; // r2@52
  signed int v48; // r1@54
  unsigned int *v49; // r2@56
  signed int v50; // r1@58
  unsigned int *v51; // r2@60
  signed int v52; // r1@62
  unsigned int *v53; // r2@64
  signed int v54; // r1@66
  unsigned int *v55; // r2@68
  signed int v56; // r1@70
  unsigned int *v57; // r2@72
  signed int v58; // r1@74
  unsigned int *v59; // r2@76
  signed int v60; // r1@78
  unsigned int *v61; // r2@80
  signed int v62; // r1@82
  unsigned int *v63; // r2@84
  signed int v64; // r1@86
  unsigned int *v65; // r2@88
  signed int v66; // r1@90
  unsigned int *v67; // r2@92
  signed int v68; // r1@94
  unsigned int *v69; // r2@96
  signed int v70; // r1@98
  unsigned int *v71; // r2@100
  signed int v72; // r1@102
  int v73; // [sp+18h] [bp-C8h]@22
  void (__fastcall *v74)(int *, int *, signed int); // [sp+20h] [bp-C0h]@21
  int v75; // [sp+24h] [bp-BCh]@22
  int *v76; // [sp+28h] [bp-B8h]@23
  void (*v77)(void); // [sp+30h] [bp-B0h]@23
  int (__fastcall *v78)(int **, int, int *); // [sp+34h] [bp-ACh]@23
  int v79; // [sp+38h] [bp-A8h]@23
  int v80; // [sp+3Ch] [bp-A4h]@21
  int v81; // [sp+40h] [bp-A0h]@21
  char *v82; // [sp+44h] [bp-9Ch]@21
  char *v83; // [sp+48h] [bp-98h]@21
  int v84; // [sp+50h] [bp-90h]@21
  int v85; // [sp+54h] [bp-8Ch]@20
  int v86; // [sp+58h] [bp-88h]@20
  int v87; // [sp+60h] [bp-80h]@19
  int v88; // [sp+64h] [bp-7Ch]@16
  int v89; // [sp+6Ch] [bp-74h]@16
  int v90; // [sp+70h] [bp-70h]@13
  int v91; // [sp+78h] [bp-68h]@13
  int v92; // [sp+7Ch] [bp-64h]@10
  int v93; // [sp+84h] [bp-5Ch]@10
  int v94; // [sp+88h] [bp-58h]@10
  int v95; // [sp+90h] [bp-50h]@9
  int v96; // [sp+94h] [bp-4Ch]@5
  int v97; // [sp+98h] [bp-48h]@5
  int v98; // [sp+A0h] [bp-40h]@5
  int v99; // [sp+A4h] [bp-3Ch]@1
  int v100; // [sp+A8h] [bp-38h]@1
  int v101; // [sp+B0h] [bp-30h]@1
  int v102; // [sp+B4h] [bp-2Ch]@1
  int v103; // [sp+B8h] [bp-28h]@1

  v8 = a1;
  v9 = a4;
  v10 = a3;
  v11 = a2;
  web::json::value::value((web::json::value *)&v103);
  web::json::value::object((web::json::value *)&v102, 0);
  sub_21E94B4((void **)&v101, "name");
  v12 = (int *)web::json::value::operator[]((int)&v102);
  utility::conversions::to_string_t(&v99, v10);
  web::json::value::value(&v100, &v99);
  web::json::value::operator=(v12, &v100);
  if ( v100 )
    (*(void (**)(void))(*(_DWORD *)v100 + 96))();
  v100 = 0;
  v13 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
  {
    v41 = (unsigned int *)(v99 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
    }
    else
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  }
  v14 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v101 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v98, "description");
  v15 = (int *)web::json::value::operator[]((int)&v102);
  utility::conversions::to_string_t(&v96, v9);
  web::json::value::value(&v97, &v96);
  web::json::value::operator=(v15, &v97);
  if ( v97 )
    (*(void (**)(void))(*(_DWORD *)v97 + 96))();
  v97 = 0;
  v16 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v96 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v98 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v95, "description");
  v18 = (int *)web::json::value::operator[]((int)&v103);
  web::json::value::operator=(v18, &v102);
  v19 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v95 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  web::json::value::object((web::json::value *)&v94, 0);
  sub_21E94B4((void **)&v93, "gameMode");
  v20 = (int *)web::json::value::operator[]((int)&v94);
  web::json::value::value((web::json::value *)&v92, a6);
  web::json::value::operator=(v20, &v92);
  if ( v92 )
    (*(void (**)(void))(*(_DWORD *)v92 + 96))();
  v92 = 0;
  v21 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v93 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v91, "difficulty");
  v22 = (int *)web::json::value::operator[]((int)&v94);
  web::json::value::value((web::json::value *)&v90, a5);
  web::json::value::operator=(v22, &v90);
  if ( v90 )
    (*(void (**)(void))(*(_DWORD *)v90 + 96))();
  v90 = 0;
  v23 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v91 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v89, "cheatsAllowed");
  v24 = (int *)web::json::value::operator[]((int)&v94);
  web::json::value::value((web::json::value *)&v88, a7);
  web::json::value::operator=(v24, &v88);
  if ( v88 )
    (*(void (**)(void))(*(_DWORD *)v88 + 96))();
  v88 = 0;
  v25 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v89 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v87, "options");
  v26 = (int *)web::json::value::operator[]((int)&v103);
  web::json::value::operator=(v26, &v94);
  v27 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v87 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  web::json::value::serialize((web::json::value *)&v85, (int)&v103);
  utility::conversions::to_utf8string(&v86, &v85);
  v28 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v85 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v84, "POST");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v81, v29, *v11);
  v30 = sub_21E82D8((const void **)&v81, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v82 = (char *)*v30;
  *v30 = &unk_28898CC;
  v31 = sub_21E7408((const void **)&v82, "/configuration", 0xEu);
  v83 = (char *)*v31;
  *v31 = &unk_28898CC;
  sub_21E94B4((void **)&v80, "application/json");
  v74 = 0;
  v32 = *(void (__fastcall **)(int *, int, signed int))(a8 + 8);
  if ( v32 )
    v32(&v73, a8, 2);
    v75 = *(_DWORD *)(a8 + 12);
    v74 = *(void (__fastcall **)(int *, int *, signed int))(a8 + 8);
  v77 = 0;
  v33 = operator new(0x14u);
  *(_DWORD *)v33 = v8;
  *(_QWORD *)((char *)v33 + 4) = *(_QWORD *)&v73;
  v79 = v75;
  v76 = (int *)&v76;
  v77 = (void (*)(void))sub_14F2E54;
  v78 = sub_14F2DB4;
  RealmsAPI::_internalCall(v8, 0, (int)&v84, (Social::XboxLiveUserManager *)&v83, &v80, &v86, (int)&v76, 0);
  if ( v77 )
    v77();
  if ( v74 )
    v74(&v73, &v73, 3);
  v34 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v80 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = v83 - 12;
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v83 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = v82 - 12;
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v82 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v81 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v84 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v86 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  if ( v94 )
    (*(void (**)(void))(*(_DWORD *)v94 + 96))();
  if ( v102 )
    (*(void (**)(void))(*(_DWORD *)v102 + 96))();
  result = v103;
  if ( v103 )
    result = (*(int (**)(void))(*(_DWORD *)v103 + 96))();
  return result;
}


void __fastcall RealmsAPI::initiateWorldUpload(int a1, const void **a2, signed int a3, int a4)
{
  const void **v4; // r4@1
  int v5; // r5@1
  signed int v6; // r6@1
  int v7; // r8@1
  const void **v8; // r0@1
  __int64 v9; // kr00_8@1
  unsigned int v10; // r1@1
  const void **v11; // r0@3
  void (__fastcall *v12)(int *, int, signed int); // r3@5
  void *v13; // r0@7
  void *v14; // r0@11
  void *v15; // r0@12
  char *v16; // r0@13
  void *v17; // r0@14
  void *v18; // r0@15
  char *v19; // r0@16
  void *v20; // r0@17
  unsigned int *v21; // r2@19
  signed int v22; // r1@21
  unsigned int *v23; // r2@23
  signed int v24; // r1@25
  unsigned int *v25; // r2@27
  signed int v26; // r1@29
  unsigned int *v27; // r2@31
  signed int v28; // r1@33
  unsigned int *v29; // r2@35
  signed int v30; // r1@37
  unsigned int *v31; // r2@39
  signed int v32; // r1@41
  unsigned int *v33; // r2@43
  signed int v34; // r1@45
  int v35; // [sp+14h] [bp-6Ch]@6
  void (__fastcall *v36)(int *, int *, signed int); // [sp+1Ch] [bp-64h]@5
  int v37; // [sp+20h] [bp-60h]@6
  int *v38; // [sp+24h] [bp-5Ch]@7
  void (*v39)(void); // [sp+2Ch] [bp-54h]@7
  int (__fastcall *v40)(int **, signed int, int *); // [sp+30h] [bp-50h]@7
  int v41; // [sp+34h] [bp-4Ch]@7
  int v42; // [sp+38h] [bp-48h]@5
  int v43; // [sp+40h] [bp-40h]@5
  int v44; // [sp+44h] [bp-3Ch]@1
  char *v45; // [sp+48h] [bp-38h]@1
  unsigned int v46; // [sp+4Ch] [bp-34h]@1
  char *v47; // [sp+50h] [bp-30h]@5
  int v48; // [sp+58h] [bp-28h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v48, "GET");
  v45 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v45, *((_DWORD *)*v4 - 3) + 21);
  sub_21E7408((const void **)&v45, "archive/upload/world/", 0x15u);
  sub_21E72F0((const void **)&v45, v4);
  v8 = sub_21E7408((const void **)&v45, "/", 1u);
  v46 = (unsigned int)*v8;
  *v8 = &unk_28898CC;
  Util::toString<int,(void *)0,(void *)0>((void **)&v44, v6);
  v9 = *(_QWORD *)(v46 - 12);
  v10 = *(_DWORD *)(v44 - 12) + v9;
  if ( v10 > HIDWORD(v9) && v10 <= *(_DWORD *)(v44 - 8) )
    v11 = sub_21E82D8((const void **)&v44, 0, v46, (_BYTE *)v9);
  else
    v11 = sub_21E72F0((const void **)&v46, (const void **)&v44);
  v47 = (char *)*v11;
  *v11 = &unk_28898CC;
  sub_21E94B4((void **)&v43, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v42, (const char *)&unk_257BC67);
  v36 = 0;
  v12 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v12 )
  {
    v12(&v35, v5, 2);
    v37 = *(_DWORD *)(v5 + 12);
    v36 = *(void (__fastcall **)(int *, int *, signed int))(v5 + 8);
  }
  v39 = 0;
  v13 = operator new(0x14u);
  *(_DWORD *)v13 = v7;
  *(_QWORD *)((char *)v13 + 4) = *(_QWORD *)&v35;
  v41 = v37;
  v38 = (int *)&v38;
  v39 = (void (*)(void))sub_1507180;
  v40 = sub_1506EBC;
  RealmsAPI::_internalCall(v7, 0, (int)&v48, (Social::XboxLiveUserManager *)&v47, &v43, &v42, (int)&v38, 0);
  if ( v39 )
    v39();
  if ( v36 )
    v36(&v35, &v35, 3);
  v14 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v42 - 4);
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
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v43 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v47 - 12;
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v47 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v44 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v46 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = v45 - 12;
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v45 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v48 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
}


void __fastcall RealmsAPI::updateTrialAvailable(int a1, int a2)
{
  RealmsAPI::updateTrialAvailable(a1, a2);
}


void __fastcall RealmsAPI::rejectInvite(int a1, int *a2, int a3)
{
  RealmsAPI::rejectInvite(a1, a2, a3);
}


void __fastcall RealmsAPI::removeFromBlocklist(int a1, __int64 *a2, const void **a3, int a4)
{
  RealmsAPI::removeFromBlocklist(a1, a2, a3, a4);
}


void __fastcall RealmsAPI::initiateWorldDownload(int a1, const void **a2, signed int a3, const void **a4, int a5, int a6)
{
  RealmsAPI::initiateWorldDownload(a1, a2, a3, a4, a5, a6);
}


void __fastcall RealmsAPI::_internalCall(int a1, int a2, int a3, Social::XboxLiveUserManager *a4, int *a5, int *a6, int a7, Social::XboxLiveUserManager *a8)
{
  unsigned int v8; // r5@0
  int v9; // r6@1
  int *v10; // r8@1
  int *v11; // r4@1
  Social::XboxLiveUserManager *v12; // r9@5
  void (__fastcall *v13)(int *, int, signed int); // r3@8
  void *v14; // r6@10
  __int64 v15; // r0@10
  void *v16; // r0@14
  void *v17; // r0@15
  void *v18; // r0@16
  char *v19; // r0@17
  char *v20; // r0@18
  unsigned int *v21; // r2@20
  signed int v22; // r1@22
  unsigned int *v23; // r2@24
  signed int v24; // r1@26
  unsigned int *v25; // r2@28
  signed int v26; // r1@30
  unsigned int *v27; // r2@32
  signed int v28; // r1@34
  unsigned int *v29; // r2@36
  signed int v30; // r1@38
  unsigned __int64 v31; // [sp+0h] [bp-68h]@8
  char *v32; // [sp+8h] [bp-60h]@8
  int v33; // [sp+Ch] [bp-5Ch]@8
  int v34; // [sp+10h] [bp-58h]@8
  int v35; // [sp+14h] [bp-54h]@8
  int v36; // [sp+18h] [bp-50h]@9
  void (__fastcall *v37)(int *, int *, signed int); // [sp+20h] [bp-48h]@8
  int v38; // [sp+24h] [bp-44h]@9
  void *v39; // [sp+2Ch] [bp-3Ch]@10
  void (*v40)(void); // [sp+34h] [bp-34h]@10
  void (__fastcall *v41)(int *, int, int *); // [sp+38h] [bp-30h]@10
  char *v42; // [sp+3Ch] [bp-2Ch]@1

  v9 = a1;
  v10 = (int *)a4;
  v11 = (int *)a3;
  v42 = (char *)&unk_28898CC;
  if ( a2 == 1 )
  {
    EntityInteraction::setInteractText((int *)&v42, (int *)(a1 + 4));
    v8 = *(_DWORD *)(v9 + 16);
  }
  else if ( !a2 )
    EntityInteraction::setInteractText((int *)&v42, (int *)(a1 + 88));
    v8 = *(_DWORD *)(v9 + 12);
  v12 = *(Social::XboxLiveUserManager **)(v9 + 8);
  if ( a8 && Social::XboxLiveUserManager::isSignedIn(a8) )
    v12 = a8;
  v31 = __PAIR__(v8, v9);
  sub_21E8AF4((int *)&v32, v11);
  sub_21E8AF4(&v33, v10);
  sub_21E8AF4(&v34, a5);
  sub_21E8AF4(&v35, a6);
  v37 = 0;
  v13 = *(void (__fastcall **)(int *, int, signed int))(a7 + 8);
  if ( v13 )
    v13(&v36, a7, 2);
    v38 = *(_DWORD *)(a7 + 12);
    v37 = *(void (__fastcall **)(int *, int *, signed int))(a7 + 8);
  v40 = 0;
  v14 = operator new(0x28u);
  *(_QWORD *)v14 = v31;
  *((_DWORD *)v14 + 2) = v32;
  v32 = (char *)&unk_28898CC;
  sub_21E8AF4((int *)v14 + 3, &v33);
  sub_21E8AF4((int *)v14 + 4, &v34);
  sub_21E8AF4((int *)v14 + 5, &v35);
  v15 = *(_QWORD *)&v36;
  *(_QWORD *)&v36 = *((_QWORD *)v14 + 3);
  *((_QWORD *)v14 + 3) = v15;
  LODWORD(v15) = v37;
  *((_DWORD *)v14 + 8) = v15;
  HIDWORD(v15) = v38;
  v38 = *((_DWORD *)v14 + 9);
  *((_DWORD *)v14 + 9) = HIDWORD(v15);
  v39 = v14;
  v40 = (void (*)(void))sub_150CC40;
  v41 = sub_150BC08;
  Social::XboxLiveUserManager::getAuthorizationHeader((int)v12, (int *)&v42, (int)&v39);
  if ( v40 )
    v40();
  if ( v37 )
    v37(&v36, &v36, 3);
  v16 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v35 - 4);
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
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v34 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v33 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v32 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v42 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
}


void __fastcall RealmsAPI::getWorldfromLink(int a1, const void **a2, int a3)
{
  const void **v3; // r5@1
  int v4; // r6@1
  int v5; // r10@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  void *v7; // r0@3
  void *v8; // r0@7
  void *v9; // r0@8
  char *v10; // r0@9
  void *v11; // r0@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  int v20; // [sp+18h] [bp-60h]@2
  void (__fastcall *v21)(int *, int *, signed int); // [sp+20h] [bp-58h]@1
  int v22; // [sp+24h] [bp-54h]@2
  int *v23; // [sp+28h] [bp-50h]@3
  void (*v24)(void); // [sp+30h] [bp-48h]@3
  Realms::World *(__fastcall *v25)(int **, int, int); // [sp+34h] [bp-44h]@3
  int v26; // [sp+38h] [bp-40h]@3
  int v27; // [sp+3Ch] [bp-3Ch]@1
  int v28; // [sp+44h] [bp-34h]@1
  char *v29; // [sp+48h] [bp-30h]@1
  int v30; // [sp+50h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v30, "GET");
  v29 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v29, *((_DWORD *)*v3 - 3) + 15);
  sub_21E7408((const void **)&v29, "worlds/v1/link/", 0xFu);
  sub_21E72F0((const void **)&v29, v3);
  sub_21E94B4((void **)&v28, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v27, (const char *)&unk_257BC67);
  v21 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v6 )
  {
    v6(&v20, v4, 2);
    v22 = *(_DWORD *)(v4 + 12);
    v21 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  }
  v24 = 0;
  v7 = operator new(0x14u);
  *(_DWORD *)v7 = v5;
  *(_QWORD *)((char *)v7 + 4) = *(_QWORD *)&v20;
  v26 = v22;
  v23 = (int *)&v23;
  v24 = (void (*)(void))sub_14E1204;
  v25 = sub_14E0B54;
  RealmsAPI::_internalCall(v5, 0, (int)&v30, (Social::XboxLiveUserManager *)&v29, &v28, &v27, (int)&v23, 0);
  if ( v24 )
    v24();
  if ( v21 )
    v21(&v20, &v20, 3);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v27 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v28 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v29 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v30 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall RealmsAPI::getInfiniteInviteLink(int a1, __int64 *a2, int a3)
{
  __int64 *v3; // r5@1
  int v4; // r6@1
  int v5; // r10@1
  int v6; // r1@1
  const void **v7; // r0@1
  void (__fastcall *v8)(int *, int, signed int); // r3@1
  void *v9; // r0@3
  void *v10; // r0@7
  void *v11; // r0@8
  char *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  unsigned int *v23; // r2@29
  signed int v24; // r1@31
  int v25; // [sp+14h] [bp-64h]@2
  void (__fastcall *v26)(int *, int *, signed int); // [sp+1Ch] [bp-5Ch]@1
  int v27; // [sp+20h] [bp-58h]@2
  int *v28; // [sp+24h] [bp-54h]@3
  void (*v29)(void); // [sp+2Ch] [bp-4Ch]@3
  Realms::InviteLink *(__fastcall *v30)(int **, int, int); // [sp+30h] [bp-48h]@3
  int v31; // [sp+34h] [bp-44h]@3
  int v32; // [sp+38h] [bp-40h]@1
  int v33; // [sp+40h] [bp-38h]@1
  int v34; // [sp+44h] [bp-34h]@1
  char *v35; // [sp+48h] [bp-30h]@1
  int v36; // [sp+50h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v36, "GET");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v34, v6, *v3);
  v7 = sub_21E82D8((const void **)&v34, 0, (unsigned int)"links/v1?worldId=", (_BYTE *)0x11);
  v35 = (char *)*v7;
  *v7 = &unk_28898CC;
  sub_21E94B4((void **)&v33, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v32, (const char *)&unk_257BC67);
  v26 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v8 )
  {
    v8(&v25, v4, 2);
    v27 = *(_DWORD *)(v4 + 12);
    v26 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  }
  v29 = 0;
  v9 = operator new(0x14u);
  *(_DWORD *)v9 = v5;
  *(_QWORD *)((char *)v9 + 4) = *(_QWORD *)&v25;
  v31 = v27;
  v28 = (int *)&v28;
  v29 = (void (*)(void))sub_14DC95C;
  v30 = sub_14DC314;
  RealmsAPI::_internalCall(v5, 0, (int)&v36, (Social::XboxLiveUserManager *)&v35, &v33, &v32, (int)&v28, 0);
  if ( v29 )
    v29();
  if ( v26 )
    v26(&v25, &v25, 3);
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v32 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v33 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = v35 - 12;
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v35 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v34 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v36 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


void __fastcall RealmsAPI::getBlocklist(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  int v4; // r8@1
  const void **v5; // r0@1
  const void **v6; // r0@1
  char *v7; // r0@1
  void *v8; // r0@2
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r0@5
  void *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  char *v14; // r0@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  unsigned int *v25; // r2@34
  signed int v26; // r1@36
  int v27; // [sp+18h] [bp-68h]@4
  void (__fastcall *v28)(int *, int *, signed int); // [sp+20h] [bp-60h]@3
  int v29; // [sp+24h] [bp-5Ch]@4
  int *v30; // [sp+28h] [bp-58h]@5
  void (*v31)(void); // [sp+30h] [bp-50h]@5
  int (__fastcall *v32)(int **, int, int); // [sp+34h] [bp-4Ch]@5
  int v33; // [sp+38h] [bp-48h]@5
  int v34; // [sp+3Ch] [bp-44h]@3
  int v35; // [sp+44h] [bp-3Ch]@3
  int v36; // [sp+4Ch] [bp-34h]@3
  int v37; // [sp+50h] [bp-30h]@1
  char *v38; // [sp+54h] [bp-2Ch]@1
  char *v39; // [sp+58h] [bp-28h]@1

  v3 = a3;
  v4 = a1;
  Util::toString<long long,(void *)0,(void *)0>((void **)&v37, (int)a2, *a2);
  v5 = sub_21E82D8((const void **)&v37, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v38 = (char *)*v5;
  *v5 = &unk_28898CC;
  v6 = sub_21E7408((const void **)&v38, "/blocklist", 0xAu);
  v39 = (char *)*v6;
  *v6 = &unk_28898CC;
  v7 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v38 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v37 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v36, "GET");
  sub_21E94B4((void **)&v35, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v34, (const char *)&unk_257BC67);
  v28 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v9 )
    v9(&v27, v3, 2);
    v29 = *(_DWORD *)(v3 + 12);
    v28 = *(void (__fastcall **)(int *, int *, signed int))(v3 + 8);
  v31 = 0;
  v10 = operator new(0x14u);
  *(_DWORD *)v10 = v4;
  *(_QWORD *)((char *)v10 + 4) = *(_QWORD *)&v27;
  v33 = v29;
  v30 = (int *)&v30;
  v31 = (void (*)(void))sub_14F9A90;
  v32 = sub_14F955C;
  RealmsAPI::_internalCall(v4, 0, (int)&v36, (Social::XboxLiveUserManager *)&v39, &v35, &v34, (int)&v30, 0);
  if ( v31 )
    v31();
  if ( v28 )
    v28(&v27, &v27, 3);
  v11 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v34 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v35 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v36 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v39 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


void __fastcall RealmsAPI::resetWorld(int a1, __int64 *a2, int a3, int a4)
{
  __int64 *v4; // r5@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r10@1
  int v8; // r1@1
  const void **v9; // r0@1
  const void **v10; // r0@1
  int v11; // r4@1
  void (__fastcall *v12)(int *, int, signed int); // r3@1
  void (__fastcall *v13)(int *, int, signed int); // r3@3
  void *v14; // r0@5
  void (__fastcall *v15)(_DWORD, _DWORD, _DWORD); // r1@5
  int v16; // r1@5
  void *v17; // r0@11
  void *v18; // r0@12
  char *v19; // r0@13
  char *v20; // r0@14
  void *v21; // r0@15
  void *v22; // r0@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  unsigned int *v29; // r2@30
  signed int v30; // r1@32
  unsigned int *v31; // r2@34
  signed int v32; // r1@36
  unsigned int *v33; // r2@38
  signed int v34; // r1@40
  int v35; // [sp+10h] [bp-80h]@1
  int v36; // [sp+14h] [bp-7Ch]@2
  void (__fastcall *v37)(_DWORD, _DWORD, _DWORD); // [sp+1Ch] [bp-74h]@1
  int v38; // [sp+20h] [bp-70h]@2
  int v39; // [sp+24h] [bp-6Ch]@4
  void (__fastcall *v40)(int *, int *, signed int); // [sp+2Ch] [bp-64h]@3
  int v41; // [sp+30h] [bp-60h]@4
  void *v42; // [sp+34h] [bp-5Ch]@5
  void (*v43)(void); // [sp+3Ch] [bp-54h]@5
  int (__fastcall *v44)(int **, int, int *); // [sp+40h] [bp-50h]@5
  int v45; // [sp+48h] [bp-48h]@1
  int v46; // [sp+50h] [bp-40h]@1
  int v47; // [sp+54h] [bp-3Ch]@1
  char *v48; // [sp+58h] [bp-38h]@1
  char *v49; // [sp+5Ch] [bp-34h]@1
  int v50; // [sp+64h] [bp-2Ch]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v50, "PUT");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v47, v8, *v4);
  v9 = sub_21E82D8((const void **)&v47, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v48 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_21E7408((const void **)&v48, "/reset", 6u);
  v49 = (char *)*v10;
  *v10 = &unk_28898CC;
  sub_21E94B4((void **)&v46, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v45, (const char *)&unk_257BC67);
  v11 = 0;
  v35 = v7;
  v37 = 0;
  v12 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v12 )
  {
    v12(&v36, v6, 2);
    v38 = *(_DWORD *)(v6 + 12);
    v37 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v6 + 8);
  }
  v40 = 0;
  v13 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v13 )
    v13(&v39, v5, 2);
    v41 = *(_DWORD *)(v5 + 12);
    v11 = *(_DWORD *)(v5 + 8);
    v40 = *(void (__fastcall **)(int *, int *, signed int))(v5 + 8);
  v43 = 0;
  v14 = operator new(0x24u);
  *(_DWORD *)v14 = v35;
  *(_QWORD *)((char *)v14 + 4) = *(_QWORD *)&v36;
  v15 = v37;
  *((_DWORD *)v14 + 3) = v15;
  *((_DWORD *)v14 + 4) = v38;
  *(_QWORD *)((char *)v14 + 20) = *(_QWORD *)&v39;
  v16 = v41;
  *((_DWORD *)v14 + 7) = v11;
  *((_DWORD *)v14 + 8) = v16;
  v42 = v14;
  v43 = (void (*)(void))sub_14F584A;
  v44 = sub_14F5786;
  RealmsAPI::_internalCall(v7, 0, (int)&v50, (Social::XboxLiveUserManager *)&v49, &v46, &v45, (int)&v42, 0);
  if ( v43 )
    v43();
  if ( v40 )
    v40(&v39, &v39, 3);
  if ( v37 )
    v37(&v36, &v36, 3);
  v17 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v45 - 4);
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
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v46 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v49 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v48 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v47 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v50 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


void __fastcall RealmsAPI::acceptLink(int a1, const void **a2, int a3)
{
  RealmsAPI::acceptLink(a1, a2, a3);
}


void __fastcall RealmsAPI::rejectInvite(int a1, int *a2, int a3)
{
  int *v3; // r5@1
  int v4; // r6@1
  int v5; // r10@1
  const void **v6; // r0@1
  void (__fastcall *v7)(int *, int, signed int); // r3@1
  void *v8; // r0@3
  void *v9; // r0@7
  void *v10; // r0@8
  char *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  int v24; // [sp+14h] [bp-64h]@2
  void (__fastcall *v25)(int *, int *, signed int); // [sp+1Ch] [bp-5Ch]@1
  int v26; // [sp+20h] [bp-58h]@2
  int *v27; // [sp+24h] [bp-54h]@3
  void (*v28)(void); // [sp+2Ch] [bp-4Ch]@3
  int (__fastcall *v29)(int **, int, int *); // [sp+30h] [bp-48h]@3
  int v30; // [sp+34h] [bp-44h]@3
  int v31; // [sp+38h] [bp-40h]@1
  int v32; // [sp+40h] [bp-38h]@1
  int v33; // [sp+44h] [bp-34h]@1
  char *v34; // [sp+48h] [bp-30h]@1
  int v35; // [sp+50h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v35, "PUT");
  sub_21E8AF4(&v33, v3);
  v6 = sub_21E82D8((const void **)&v33, 0, (unsigned int)"invites/reject/", (_BYTE *)0xF);
  v34 = (char *)*v6;
  *v6 = &unk_28898CC;
  sub_21E94B4((void **)&v32, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v31, (const char *)&unk_257BC67);
  v25 = 0;
  v7 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v7 )
  {
    v7(&v24, v4, 2);
    v26 = *(_DWORD *)(v4 + 12);
    v25 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  }
  v28 = 0;
  v8 = operator new(0x14u);
  *(_DWORD *)v8 = v5;
  *(_QWORD *)((char *)v8 + 4) = *(_QWORD *)&v24;
  v30 = v26;
  v27 = (int *)&v27;
  v28 = (void (*)(void))sub_1501DBC;
  v29 = sub_1501D1C;
  RealmsAPI::_internalCall(v5, 0, (int)&v35, (Social::XboxLiveUserManager *)&v34, &v32, &v31, (int)&v27, 0);
  if ( v28 )
    v28();
  if ( v25 )
    v25(&v24, &v24, 3);
  v9 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
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
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v32 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v34 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v33 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v35 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall RealmsAPI::_internalCall(int a1, int a2, int a3, Social::XboxLiveUserManager *a4, int *a5, int *a6, int a7, Social::XboxLiveUserManager *a8)
{
  RealmsAPI::_internalCall(a1, a2, a3, a4, a5, a6, a7, a8);
}


void __fastcall RealmsAPI::closeWorld(int a1, __int64 *a2, int a3, int a4)
{
  __int64 *v4; // r5@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r10@1
  int v8; // r1@1
  const void **v9; // r0@1
  const void **v10; // r0@1
  int v11; // r4@1
  void (__fastcall *v12)(int *, int, signed int); // r3@1
  void (__fastcall *v13)(int *, int, signed int); // r3@3
  void *v14; // r0@5
  void (__fastcall *v15)(_DWORD, _DWORD, _DWORD); // r1@5
  int v16; // r1@5
  void *v17; // r0@11
  void *v18; // r0@12
  char *v19; // r0@13
  char *v20; // r0@14
  void *v21; // r0@15
  void *v22; // r0@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  unsigned int *v29; // r2@30
  signed int v30; // r1@32
  unsigned int *v31; // r2@34
  signed int v32; // r1@36
  unsigned int *v33; // r2@38
  signed int v34; // r1@40
  int v35; // [sp+10h] [bp-80h]@1
  int v36; // [sp+14h] [bp-7Ch]@2
  void (__fastcall *v37)(_DWORD, _DWORD, _DWORD); // [sp+1Ch] [bp-74h]@1
  int v38; // [sp+20h] [bp-70h]@2
  int v39; // [sp+24h] [bp-6Ch]@4
  void (__fastcall *v40)(int *, int *, signed int); // [sp+2Ch] [bp-64h]@3
  int v41; // [sp+30h] [bp-60h]@4
  void *v42; // [sp+34h] [bp-5Ch]@5
  void (*v43)(void); // [sp+3Ch] [bp-54h]@5
  int (__fastcall *v44)(int **, int, int *); // [sp+40h] [bp-50h]@5
  int v45; // [sp+48h] [bp-48h]@1
  int v46; // [sp+50h] [bp-40h]@1
  int v47; // [sp+54h] [bp-3Ch]@1
  char *v48; // [sp+58h] [bp-38h]@1
  char *v49; // [sp+5Ch] [bp-34h]@1
  int v50; // [sp+64h] [bp-2Ch]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v50, "PUT");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v47, v8, *v4);
  v9 = sub_21E82D8((const void **)&v47, 0, (unsigned int)"worlds/", (_BYTE *)7);
  v48 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_21E7408((const void **)&v48, "/close", 6u);
  v49 = (char *)*v10;
  *v10 = &unk_28898CC;
  sub_21E94B4((void **)&v46, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v45, (const char *)&unk_257BC67);
  v11 = 0;
  v35 = v7;
  v37 = 0;
  v12 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v12 )
  {
    v12(&v36, v6, 2);
    v38 = *(_DWORD *)(v6 + 12);
    v37 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v6 + 8);
  }
  v40 = 0;
  v13 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v13 )
    v13(&v39, v5, 2);
    v41 = *(_DWORD *)(v5 + 12);
    v11 = *(_DWORD *)(v5 + 8);
    v40 = *(void (__fastcall **)(int *, int *, signed int))(v5 + 8);
  v43 = 0;
  v14 = operator new(0x24u);
  *(_DWORD *)v14 = v35;
  *(_QWORD *)((char *)v14 + 4) = *(_QWORD *)&v36;
  v15 = v37;
  *((_DWORD *)v14 + 3) = v15;
  *((_DWORD *)v14 + 4) = v38;
  *(_QWORD *)((char *)v14 + 20) = *(_QWORD *)&v39;
  v16 = v41;
  *((_DWORD *)v14 + 7) = v11;
  *((_DWORD *)v14 + 8) = v16;
  v42 = v14;
  v43 = (void (*)(void))sub_14F56A6;
  v44 = sub_14F55E2;
  RealmsAPI::_internalCall(v7, 0, (int)&v50, (Social::XboxLiveUserManager *)&v49, &v46, &v45, (int)&v42, 0);
  if ( v43 )
    v43();
  if ( v40 )
    v40(&v39, &v39, 3);
  if ( v37 )
    v37(&v36, &v36, 3);
  v17 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v45 - 4);
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
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v46 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v49 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v48 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v47 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v50 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


int __fastcall RealmsAPI::updateWhitelist(int a1, __int64 *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r7@1
  unsigned int *v6; // r1@3
  signed int v7; // r0@5
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  char *v14; // r9@34
  _DWORD *v15; // r0@34
  char *v16; // r8@34
  size_t v17; // r2@34
  signed int v18; // r5@35
  unsigned int v19; // r0@41
  const char *v20; // r1@41
  void *v21; // r0@43
  void *v22; // r0@44
  int *v23; // r0@45
  void *v24; // r0@45
  int *v25; // r0@49
  void *v26; // r0@49
  void *v27; // r0@50
  int v28; // r1@51
  const void **v29; // r0@51
  const void **v30; // r0@51
  void (__fastcall *v31)(int *, int, signed int); // r3@51
  void *v32; // r0@53
  void *v33; // r0@57
  char *v34; // r0@58
  char *v35; // r0@59
  void *v36; // r0@60
  void *v37; // r0@61
  void *v38; // r0@62
  int result; // r0@65
  unsigned int *v40; // r2@68
  signed int v41; // r1@70
  unsigned int *v42; // r2@72
  signed int v43; // r1@74
  unsigned int *v44; // r2@76
  signed int v45; // r1@78
  unsigned int *v46; // r2@80
  signed int v47; // r1@82
  unsigned int *v48; // r2@84
  signed int v49; // r1@86
  unsigned int *v50; // r2@88
  signed int v51; // r1@90
  unsigned int *v52; // r2@92
  signed int v53; // r1@94
  unsigned int *v54; // r2@96
  signed int v55; // r1@98
  __int64 *v56; // [sp+14h] [bp-ACh]@1
  int v57; // [sp+18h] [bp-A8h]@1
  int i; // [sp+20h] [bp-A0h]@1
  int v59; // [sp+24h] [bp-9Ch]@1
  int v60; // [sp+2Ch] [bp-94h]@52
  void (__fastcall *v61)(int *, int *, signed int); // [sp+34h] [bp-8Ch]@51
  int v62; // [sp+38h] [bp-88h]@52
  int *v63; // [sp+3Ch] [bp-84h]@53
  void (*v64)(void); // [sp+44h] [bp-7Ch]@53
  int (__fastcall *v65)(int **, int, int); // [sp+48h] [bp-78h]@53
  int v66; // [sp+4Ch] [bp-74h]@53
  int v67; // [sp+50h] [bp-70h]@51
  int v68; // [sp+54h] [bp-6Ch]@51
  char *v69; // [sp+58h] [bp-68h]@51
  char *v70; // [sp+5Ch] [bp-64h]@51
  int v71; // [sp+64h] [bp-5Ch]@51
  int v72; // [sp+68h] [bp-58h]@50
  int v73; // [sp+6Ch] [bp-54h]@50
  int v74; // [sp+74h] [bp-4Ch]@49
  int v75; // [sp+78h] [bp-48h]@49
  int v76; // [sp+7Ch] [bp-44h]@18
  int v77; // [sp+84h] [bp-3Ch]@14
  int v78; // [sp+88h] [bp-38h]@10
  int v79; // [sp+8Ch] [bp-34h]@43
  void *s2; // [sp+90h] [bp-30h]@34
  int v81; // [sp+94h] [bp-2Ch]@1

  v59 = a1;
  v57 = a4;
  v4 = a3;
  v56 = a2;
  web::json::value::value((web::json::value *)&v81);
  v5 = *(_DWORD *)(v4 + 12);
  for ( i = v4 + 4; v5 != i; v5 = sub_21D47E8(v5) )
  {
    Social::XboxLiveUserManager::getCurrentXUID((Social::XboxLiveUserManager *)&s2, *(_DWORD *)(v59 + 8));
    v14 = (char *)s2;
    v15 = *(_DWORD **)(v5 + 16);
    v16 = (char *)s2 - 12;
    v17 = *(v15 - 3);
    if ( v17 == *((_DWORD *)s2 - 3) )
    {
      v18 = 0;
      if ( !memcmp(v15, s2, v17) )
        v18 = 1;
    }
    else
    if ( (int *)v16 != &dword_28898C0 )
      v6 = (unsigned int *)(v14 - 4);
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
        j_j_j_j__ZdlPv_9(v16);
    if ( !v18 )
      v19 = *(_DWORD *)(v5 + 20);
      v20 = "REMOVE";
      if ( v19 <= 3 )
        v20 = off_26EA268[v19];
      sub_21E94B4((void **)&v77, v20);
      utility::conversions::to_string_t(&v78, &v77);
      web::json::value::value(&v79, &v78);
      v21 = (void *)(v78 - 12);
      if ( (int *)(v78 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v78 - 4);
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
          j_j_j_j__ZdlPv_9(v21);
      v22 = (void *)(v77 - 12);
      if ( (int *)(v77 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v77 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      utility::conversions::to_string_t(&v76, (int *)(v5 + 16));
      v23 = (int *)web::json::value::operator[]((int)&v81);
      web::json::value::operator=(v23, &v79);
      v24 = (void *)(v76 - 12);
      if ( (int *)(v76 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v76 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      if ( v79 )
        (*(void (**)(void))(*(_DWORD *)v79 + 96))();
  }
  web::json::value::value((web::json::value *)&v75);
  sub_21E94B4((void **)&v74, "invites");
  v25 = (int *)web::json::value::operator[]((int)&v75);
  web::json::value::operator=(v25, &v81);
  v26 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v74 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  web::json::value::serialize((web::json::value *)&v72, (int)&v75);
  utility::conversions::to_utf8string(&v73, &v72);
  v27 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v72 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v71, "PUT");
  Util::toString<long long,(void *)0,(void *)0>((void **)&v68, v28, *v56);
  v29 = sub_21E82D8((const void **)&v68, 0, (unsigned int)"invites/", (_BYTE *)8);
  v69 = (char *)*v29;
  *v29 = &unk_28898CC;
  v30 = sub_21E7408((const void **)&v69, "/invite/update", 0xEu);
  v70 = (char *)*v30;
  *v30 = &unk_28898CC;
  sub_21E94B4((void **)&v67, "application/json");
  v61 = 0;
  v31 = *(void (__fastcall **)(int *, int, signed int))(v57 + 8);
  if ( v31 )
    v31(&v60, v57, 2);
    v62 = *(_DWORD *)(v57 + 12);
    v61 = *(void (__fastcall **)(int *, int *, signed int))(v57 + 8);
  v64 = 0;
  v32 = operator new(0x14u);
  *(_DWORD *)v32 = v59;
  *(_QWORD *)((char *)v32 + 4) = *(_QWORD *)&v60;
  v66 = v62;
  v63 = (int *)&v63;
  v64 = (void (*)(void))sub_14F7730;
  v65 = sub_14F71FC;
  RealmsAPI::_internalCall(v59, 0, (int)&v71, (Social::XboxLiveUserManager *)&v70, &v67, &v73, (int)&v63, 0);
  if ( v64 )
    v64();
  if ( v61 )
    v61(&v60, &v60, 3);
  v33 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v67 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = v70 - 12;
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v70 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = v69 - 12;
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v69 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v68 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v71 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v73 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  if ( v75 )
    (*(void (**)(void))(*(_DWORD *)v75 + 96))();
  result = v81;
  if ( v81 )
    result = (*(int (**)(void))(*(_DWORD *)v81 + 96))();
  return result;
}


void __fastcall RealmsAPI::initiateWorldDownload(int a1, const void **a2, signed int a3, const void **a4, int a5, int a6)
{
  const void **v6; // r6@1
  const void **v7; // r5@1
  signed int v8; // r4@1
  int v9; // r8@1
  const void **v10; // r0@1
  __int64 v11; // kr00_8@1
  unsigned int v12; // r1@1
  const void **v13; // r0@3
  const void **v14; // r0@5
  const void **v15; // r0@5
  int v16; // r4@5
  void (__fastcall *v17)(int *, int, signed int); // r3@5
  void (__fastcall *v18)(int *, int, signed int); // r3@7
  void *v19; // r0@9
  void (__fastcall *v20)(_DWORD, _DWORD, _DWORD); // r1@9
  int v21; // r1@9
  void *v22; // r0@15
  void *v23; // r0@16
  char *v24; // r0@17
  char *v25; // r0@18
  char *v26; // r0@19
  void *v27; // r0@20
  void *v28; // r0@21
  char *v29; // r0@22
  void *v30; // r0@23
  unsigned int *v31; // r2@25
  signed int v32; // r1@27
  unsigned int *v33; // r2@29
  signed int v34; // r1@31
  unsigned int *v35; // r2@33
  signed int v36; // r1@35
  unsigned int *v37; // r2@37
  signed int v38; // r1@39
  unsigned int *v39; // r2@41
  signed int v40; // r1@43
  unsigned int *v41; // r2@45
  signed int v42; // r1@47
  unsigned int *v43; // r2@49
  signed int v44; // r1@51
  unsigned int *v45; // r2@53
  signed int v46; // r1@55
  unsigned int *v47; // r2@57
  signed int v48; // r1@59
  int v49; // [sp+14h] [bp-8Ch]@5
  int v50; // [sp+18h] [bp-88h]@6
  void (__fastcall *v51)(_DWORD, _DWORD, _DWORD); // [sp+20h] [bp-80h]@5
  int v52; // [sp+24h] [bp-7Ch]@6
  int v53; // [sp+28h] [bp-78h]@8
  void (__fastcall *v54)(int *, int *, signed int); // [sp+30h] [bp-70h]@7
  int v55; // [sp+34h] [bp-6Ch]@8
  void *v56; // [sp+38h] [bp-68h]@9
  void (*v57)(void); // [sp+40h] [bp-60h]@9
  unsigned int (__fastcall *v58)(int **, signed int, int *); // [sp+44h] [bp-5Ch]@9
  int v59; // [sp+4Ch] [bp-54h]@5
  int v60; // [sp+54h] [bp-4Ch]@5
  int v61; // [sp+58h] [bp-48h]@1
  char *v62; // [sp+5Ch] [bp-44h]@1
  unsigned int v63; // [sp+60h] [bp-40h]@1
  char *v64; // [sp+64h] [bp-3Ch]@5
  char *v65; // [sp+68h] [bp-38h]@5
  char *v66; // [sp+6Ch] [bp-34h]@5
  int v67; // [sp+74h] [bp-2Ch]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  sub_21E94B4((void **)&v67, "GET");
  v62 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v62, *((_DWORD *)*v6 - 3) + 23);
  sub_21E7408((const void **)&v62, "archive/download/world/", 0x17u);
  sub_21E72F0((const void **)&v62, v6);
  v10 = sub_21E7408((const void **)&v62, "/", 1u);
  v63 = (unsigned int)*v10;
  *v10 = &unk_28898CC;
  Util::toString<int,(void *)0,(void *)0>((void **)&v61, v8);
  v11 = *(_QWORD *)(v63 - 12);
  v12 = *(_DWORD *)(v61 - 12) + v11;
  if ( v12 > HIDWORD(v11) && v12 <= *(_DWORD *)(v61 - 8) )
    v13 = sub_21E82D8((const void **)&v61, 0, v63, (_BYTE *)v11);
  else
    v13 = sub_21E72F0((const void **)&v63, (const void **)&v61);
  v64 = (char *)*v13;
  *v13 = &unk_28898CC;
  v14 = sub_21E7408((const void **)&v64, "/", 1u);
  v65 = (char *)*v14;
  *v14 = &unk_28898CC;
  v15 = sub_21E72F0((const void **)&v65, v7);
  v66 = (char *)*v15;
  *v15 = &unk_28898CC;
  sub_21E94B4((void **)&v60, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v59, (const char *)&unk_257BC67);
  v16 = 0;
  v49 = v9;
  v51 = 0;
  v17 = *(void (__fastcall **)(int *, int, signed int))(a5 + 8);
  if ( v17 )
  {
    v17(&v50, a5, 2);
    v52 = *(_DWORD *)(a5 + 12);
    v51 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a5 + 8);
  }
  v54 = 0;
  v18 = *(void (__fastcall **)(int *, int, signed int))(a6 + 8);
  if ( v18 )
    v18(&v53, a6, 2);
    v55 = *(_DWORD *)(a6 + 12);
    v16 = *(_DWORD *)(a6 + 8);
    v54 = *(void (__fastcall **)(int *, int *, signed int))(a6 + 8);
  v57 = 0;
  v19 = operator new(0x24u);
  *(_DWORD *)v19 = v49;
  *(_QWORD *)((char *)v19 + 4) = *(_QWORD *)&v50;
  v20 = v51;
  *((_DWORD *)v19 + 3) = v20;
  *((_DWORD *)v19 + 4) = v52;
  *(_QWORD *)((char *)v19 + 20) = *(_QWORD *)&v53;
  v21 = v55;
  *((_DWORD *)v19 + 7) = v16;
  *((_DWORD *)v19 + 8) = v21;
  v56 = v19;
  v57 = (void (*)(void))sub_1509838;
  v58 = sub_15093D4;
  RealmsAPI::_internalCall(v9, 0, (int)&v67, (Social::XboxLiveUserManager *)&v66, &v60, &v59, (int)&v56, 0);
  if ( v57 )
    v57();
  if ( v54 )
    v54(&v53, &v53, 3);
  if ( v51 )
    v51(&v50, &v50, 3);
  v22 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v59 - 4);
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
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v60 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = v66 - 12;
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v66 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = v65 - 12;
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v65 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = v64 - 12;
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v64 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v61 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v63 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = v62 - 12;
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v62 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v67 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
}


void __fastcall RealmsAPI::acceptLink(int a1, const void **a2, int a3)
{
  const void **v3; // r5@1
  int v4; // r6@1
  int v5; // r10@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  void *v7; // r0@3
  void *v8; // r0@7
  void *v9; // r0@8
  char *v10; // r0@9
  void *v11; // r0@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  int v20; // [sp+18h] [bp-60h]@2
  void (__fastcall *v21)(int *, int *, signed int); // [sp+20h] [bp-58h]@1
  int v22; // [sp+24h] [bp-54h]@2
  int *v23; // [sp+28h] [bp-50h]@3
  void (*v24)(void); // [sp+30h] [bp-48h]@3
  Realms::World *(__fastcall *v25)(int **, int, int); // [sp+34h] [bp-44h]@3
  int v26; // [sp+38h] [bp-40h]@3
  int v27; // [sp+3Ch] [bp-3Ch]@1
  int v28; // [sp+44h] [bp-34h]@1
  char *v29; // [sp+48h] [bp-30h]@1
  int v30; // [sp+50h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v30, "POST");
  v29 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v29, *((_DWORD *)*v3 - 3) + 23);
  sub_21E7408((const void **)&v29, "invites/v1/link/accept/", 0x17u);
  sub_21E72F0((const void **)&v29, v3);
  sub_21E94B4((void **)&v28, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v27, (const char *)&unk_257BC67);
  v21 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v6 )
  {
    v6(&v20, v4, 2);
    v22 = *(_DWORD *)(v4 + 12);
    v21 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  }
  v24 = 0;
  v7 = operator new(0x14u);
  *(_DWORD *)v7 = v5;
  *(_QWORD *)((char *)v7 + 4) = *(_QWORD *)&v20;
  v26 = v22;
  v23 = (int *)&v23;
  v24 = (void (*)(void))sub_14E4DA8;
  v25 = sub_14E46F8;
  RealmsAPI::_internalCall(v5, 0, (int)&v30, (Social::XboxLiveUserManager *)&v29, &v28, &v27, (int)&v23, 0);
  if ( v24 )
    v24();
  if ( v21 )
    v21(&v20, &v20, 3);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v27 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v28 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v29 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v30 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


int __fastcall RealmsAPI::_genericCallback(int a1, int a2, int *a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r4@1
  int *v7; // r6@1
  __int16 v8; // r7@1
  int result; // r0@1
  int v10; // r5@2
  void (__fastcall *v11)(int *, int, signed int); // r3@3
  int v12; // r6@4
  int (*v13)(void); // r4@4
  _DWORD *v14; // r0@4
  int v15; // r7@4
  void (__fastcall *v16)(int *, int, signed int); // r3@8
  int v17; // r0@9
  unsigned int *v18; // r0@10
  unsigned int v19; // r1@12
  _DWORD *v20; // r0@15
  int (*v21)(void); // r1@15
  int v22; // r1@15
  int v23; // r4@17
  unsigned int *v24; // r1@18
  unsigned int *v25; // r5@24
  int v26; // [sp+0h] [bp-70h]@9
  int (*v27)(void); // [sp+8h] [bp-68h]@9
  int v28; // [sp+Ch] [bp-64h]@9
  __int16 v29; // [sp+10h] [bp-60h]@9
  int v30; // [sp+14h] [bp-5Ch]@9
  int v31; // [sp+18h] [bp-58h]@9
  _DWORD *v32; // [sp+20h] [bp-50h]@15
  int (*v33)(void); // [sp+28h] [bp-48h]@15
  int (__fastcall *v34)(int); // [sp+2Ch] [bp-44h]@15
  int v35; // [sp+30h] [bp-40h]@4
  int v36; // [sp+34h] [bp-3Ch]@4
  int (*v37)(void); // [sp+38h] [bp-38h]@4
  int v38; // [sp+3Ch] [bp-34h]@4
  int v39; // [sp+40h] [bp-30h]@4
  _DWORD *v40; // [sp+48h] [bp-28h]@4
  int (*v41)(void); // [sp+50h] [bp-20h]@4
  int (*v42)(); // [sp+54h] [bp-1Ch]@4

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  result = 503;
  if ( a2 != 503 || (result = sub_14C9C30(503, a3), v10 = result, result < 1) )
  {
    v16 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
    if ( v16 )
    {
      v27 = 0;
      v16(&v26, v6, 2);
      v28 = *(_DWORD *)(v6 + 12);
      v27 = *(int (**)(void))(v6 + 8);
      v29 = v8;
      v30 = *v7;
      v17 = v7[1];
      v31 = v17;
      if ( v17 )
      {
        v18 = (unsigned int *)(v17 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 + 1, v18) );
        }
        else
          ++*v18;
      }
      v33 = 0;
      v20 = operator new(0x1Cu);
      *(_QWORD *)v20 = *(_QWORD *)&v26;
      v21 = v27;
      v20[2] = v21;
      v20[3] = v28;
      *((_WORD *)v20 + 8) = v29;
      v20[5] = v30;
      v22 = v31;
      v31 = 0;
      v20[6] = v22;
      v30 = 0;
      v32 = v20;
      v33 = (int (*)(void))sub_14D6B40;
      v34 = sub_14D6B1C;
      result = MPMCQueue<std::function<void ()(void)>>::push(v5 + 40, (int)&v32);
      if ( v33 )
        result = v33();
      v23 = v31;
      if ( v31 )
        v24 = (unsigned int *)(v31 + 4);
            result = __ldrex(v24);
          while ( __strex(result - 1, v24) );
          result = (*v24)--;
        if ( result == 1 )
          v25 = (unsigned int *)(v23 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v25);
            while ( __strex(result - 1, v25) );
          }
          else
            result = (*v25)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
      if ( v27 )
        result = v27();
    }
  }
  else
    v11 = *(void (__fastcall **)(int *, int, signed int))(a5 + 8);
    if ( v11 )
      v37 = 0;
      v11(&v35, a5, 2);
      v38 = *(_DWORD *)(a5 + 12);
      v12 = v38;
      v37 = *(int (**)(void))(a5 + 8);
      v13 = v37;
      v39 = v10;
      v41 = 0;
      v14 = operator new(0x14u);
      v15 = v36;
      *v14 = v35;
      v14[1] = v15;
      v14[2] = v13;
      v14[3] = v12;
      v14[4] = v10;
      v40 = v14;
      v41 = (int (*)(void))sub_14D6A9A;
      v42 = sub_14D6A88;
      result = MPMCQueue<std::function<void ()(void)>>::push(v5 + 40, (int)&v40);
      if ( v41 )
        result = v41();
      if ( v37 )
        result = v37();
  return result;
}


void __fastcall RealmsAPI::getWorldMembers(int a1, __int64 *a2, int a3)
{
  RealmsAPI::getWorldMembers(a1, a2, a3);
}


void __fastcall RealmsAPI::getInviteCountFriendsOnly(int a1, int a2, __int64 *a3)
{
  __int64 *v3; // r5@1
  int v4; // r6@1
  int v5; // r8@1
  __int64 v6; // r0@1
  char *v7; // r2@1
  unsigned int v8; // r7@1
  void (__fastcall *v9)(int *, int, signed int); // r3@4
  int v10; // r7@4
  _DWORD *v11; // r0@6
  int v12; // r1@6
  void *v13; // r4@10
  char *v18; // [sp+4h] [bp-54h]@4
  int v19; // [sp+8h] [bp-50h]@4
  int v20; // [sp+Ch] [bp-4Ch]@4
  int v21; // [sp+14h] [bp-44h]@5
  void (__fastcall *v22)(int *, int *, signed int); // [sp+1Ch] [bp-3Ch]@4
  int v23; // [sp+20h] [bp-38h]@5
  _DWORD *v24; // [sp+24h] [bp-34h]@6
  void (*v25)(void); // [sp+2Ch] [bp-2Ch]@6
  void (__fastcall *v26)(int *, unsigned int, int); // [sp+30h] [bp-28h]@6

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *a3;
  v7 = 0;
  v8 = (HIDWORD(v6) - (signed int)v6) >> 2;
  if ( v8 )
  {
    if ( v8 >= 0x40000000 )
      sub_21E57F4();
    v7 = (char *)operator new(HIDWORD(v6) - v6);
    v6 = *v3;
  }
  v18 = v7;
  v20 = (int)&v7[4 * v8];
  v19 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
          v6,
          SHIDWORD(v6),
          (int)v7);
  v22 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  v10 = 0;
  if ( v9 )
    v9(&v21, v4, 2);
    v23 = *(_DWORD *)(v4 + 12);
    v10 = *(_DWORD *)(v4 + 8);
    v22 = *(void (__fastcall **)(int *, int *, signed int))(v4 + 8);
  v25 = 0;
  v11 = operator new(0x20u);
  *v11 = v18;
  v11[1] = v19;
  v11[2] = v20;
  v11[3] = v5;
  *((_QWORD *)v11 + 2) = *(_QWORD *)&v21;
  v12 = v23;
  v11[6] = v10;
  v11[7] = v12;
  v24 = v11;
  v25 = (void (*)(void))sub_14FC6B4;
  v26 = sub_14FC55C;
  RealmsAPI::listInvites(v5, (int)&v24);
  if ( v25 )
    v25();
  if ( v22 )
    v22(&v21, &v21, 3);
  v13 = 0;
  if ( v13 )
    operator delete(v13);
}


void __fastcall RealmsAPI::getInviteCountFriendsOnly(int a1, int a2, __int64 *a3)
{
  RealmsAPI::getInviteCountFriendsOnly(a1, a2, a3);
}


void __fastcall RealmsAPI::openWorld(int a1, __int64 *a2, int a3, int a4)
{
  RealmsAPI::openWorld(a1, a2, a3, a4);
}


void __fastcall RealmsAPI::getSubscriptionDetails(int a1, __int64 *a2, int a3)
{
  RealmsAPI::getSubscriptionDetails(a1, a2, a3);
}
