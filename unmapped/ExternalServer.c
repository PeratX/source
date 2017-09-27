

char *__fastcall ExternalServer::getName(ExternalServer *this)
{
  return (char *)this + 28;
}


time_t __fastcall ExternalServer::updateTimestamp(ExternalServer *this)
{
  ExternalServer *v1; // r4@1
  time_t result; // r0@1

  v1 = this;
  result = time(0);
  *((_DWORD *)v1 + 11) = result;
  return result;
}


_DWORD *__fastcall ExternalServer::ExternalServer(_DWORD *a1, int a2)
{
  int v2; // r5@1
  _DWORD *v3; // r9@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r1@7
  int v8; // r3@7
  int v9; // r4@7
  int v10; // r6@7
  int v11; // r7@7

  v2 = a2;
  v3 = a1;
  *a1 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v3[1] = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v7 = (int)(v3 + 2);
  v8 = *(_DWORD *)(v2 + 12);
  v9 = *(_DWORD *)(v2 + 16);
  v10 = *(_DWORD *)(v2 + 20);
  v11 = *(_DWORD *)(v2 + 24);
  *(_DWORD *)v7 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v7 + 12) = v10;
  *(_DWORD *)(v7 + 16) = v11;
  sub_119C854(v3 + 7, (int *)(v2 + 28));
  sub_119C854(v3 + 8, (int *)(v2 + 32));
  sub_119C854(v3 + 9, (int *)(v2 + 36));
  sub_119C854(v3 + 10, (int *)(v2 + 40));
  v3[11] = *(_DWORD *)(v2 + 44);
  return v3;
}


void __fastcall ExternalServer::resolve(ExternalServer *this)
{
  ExternalServer *v1; // r8@1
  void *v2; // r7@1
  void *v3; // r4@1
  void *v4; // r0@1
  int v5; // r0@1
  _DWORD *v6; // r7@1
  _DWORD *v7; // r0@1
  int v8; // r6@1
  unsigned int *v9; // r1@2
  unsigned int v10; // r0@4
  unsigned int *v11; // r5@8
  unsigned int v12; // r0@10
  pthread_t v13; // r0@16
  void *v14; // r5@17
  unsigned int *v15; // r6@17
  unsigned int *v16; // r7@17
  unsigned int v17; // r1@20
  unsigned __int8 *v18; // r1@23
  unsigned int v19; // r2@24
  unsigned int v20; // r0@29
  unsigned int v21; // r0@35
  int v22; // r4@40
  unsigned int *v23; // r1@41
  unsigned int v24; // r0@43
  unsigned int *v25; // r5@47
  unsigned int v26; // r0@49
  char *v27; // r0@54
  void *v28; // r0@55
  unsigned int *v29; // r2@57
  signed int v30; // r1@59
  unsigned int *v31; // r2@61
  signed int v32; // r1@63
  void *v33; // [sp+0h] [bp-30h]@1
  int v34; // [sp+4h] [bp-2Ch]@1
  pthread_t newthread; // [sp+8h] [bp-28h]@1
  _DWORD *v36; // [sp+Ch] [bp-24h]@1
  int v37; // [sp+10h] [bp-20h]@1

  v1 = this;
  sub_119C854(&v34, (int *)this + 10);
  sub_119C854((int *)&v33, &v34);
  v2 = v33;
  v33 = &unk_28898CC;
  v3 = operator new(0x28u);
  *(_DWORD *)v3 = &off_26D78F8;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  sub_119E3F8((_DWORD *)v3 + 3);
  *((_BYTE *)v3 + 16) = 0;
  *((_DWORD *)v3 + 5) = 0;
  *(_DWORD *)v3 = &off_26DFAF0;
  *((_DWORD *)v3 + 6) = 0;
  *((_DWORD *)v3 + 7) = 0;
  *(_DWORD *)v3 = &off_26DFAD8;
  v4 = operator new(0x10u);
  v5 = sub_119ED8C((int)v4);
  *(_DWORD *)v5 = &off_26DFB08;
  *(_BYTE *)(v5 + 12) = 0;
  *((_DWORD *)v3 + 8) = v5;
  *((_DWORD *)v3 + 9) = v2;
  newthread = 0;
  v6 = operator new(0x10u);
  *v6 = &off_26DFB1C;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = v3;
  v7 = operator new(0x14u);
  v7[1] = 1;
  v7[2] = 1;
  *v7 = &off_26DFB38;
  v7[4] = v6;
  v36 = v6;
  v37 = (int)v7;
  sub_119E334(&newthread, (int)&v36);
  v8 = v37;
  if ( v37 )
  {
    v9 = (unsigned int *)(v37 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  if ( !pthread_equal(*((_DWORD *)v3 + 6), 0) )
    std::terminate();
  v13 = *((_DWORD *)v3 + 6);
  *((_DWORD *)v3 + 6) = newthread;
  newthread = v13;
  if ( !pthread_equal(v13, 0) )
  v14 = operator new(0x14u);
  *((_DWORD *)v14 + 1) = 1;
  v15 = (unsigned int *)((char *)v14 + 4);
  *((_DWORD *)v14 + 2) = 1;
  v16 = (unsigned int *)((char *)v14 + 8);
  *(_DWORD *)v14 = &off_26DFB54;
  *((_DWORD *)v14 + 4) = v3;
  if ( v14 )
        v17 = __ldrex(v15);
      while ( __strex(v17 + 1, v15) );
      *v15 = 2;
  v18 = (unsigned __int8 *)v3 + 16;
  __dmb();
  do
    v19 = __ldrex(v18);
  while ( __strex(1u, v18) );
  if ( v19 )
    sub_119ED9C(1);
        v20 = __ldrex(v15);
      while ( __strex(v20 - 1, v15) );
      v20 = (*v15)--;
    if ( v20 == 1 )
      (*(void (__fastcall **)(void *))(*(_DWORD *)v14 + 8))(v14);
          v21 = __ldrex(v16);
        while ( __strex(v21 - 1, v16) );
        v21 = (*v16)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(void *))(*(_DWORD *)v14 + 12))(v14);
  *(_DWORD *)v1 = v3;
  v22 = *((_DWORD *)v1 + 1);
  *((_DWORD *)v1 + 1) = v14;
  if ( v22 )
    v23 = (unsigned int *)(v22 + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      v25 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  v27 = (char *)v33 - 12;
  if ( (int *)((char *)v33 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)((char *)v33 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v34 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
}


void __fastcall ExternalServer::resolve(ExternalServer *this)
{
  ExternalServer::resolve(this);
}


char *__fastcall ExternalServer::getAddress(ExternalServer *this)
{
  return (char *)this + 40;
}


int __fastcall ExternalServer::setMaxPlayers(int result, int a2)
{
  *(_DWORD *)(result + 24) = a2;
  return result;
}


int __fastcall ExternalServer::ExternalServer(int a1)
{
  int v1; // r5@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  sub_119C884((void **)(a1 + 28), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 32), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 36), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 40), (const char *)&unk_257BC67);
  *(_DWORD *)(v1 + 44) = 0;
  return v1;
}


int __fastcall ExternalServer::setPlayers(int result, int a2)
{
  *(_DWORD *)(result + 20) = a2;
  return result;
}


char *__fastcall ExternalServer::getVersion(ExternalServer *this)
{
  return (char *)this + 36;
}


int __fastcall ExternalServer::setPort(int result, int a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


char *__fastcall ExternalServer::getTitle(ExternalServer *this)
{
  return (char *)this + 32;
}


int __fastcall ExternalServer::setProtocol(int result, int a2)
{
  *(_DWORD *)(result + 16) = a2;
  return result;
}


int __fastcall ExternalServer::ExternalServer(int a1, int a2, int *a3, int *a4, int a5, int a6)
{
  int v6; // r5@1
  int *v7; // r6@1

  v6 = a1;
  v7 = a4;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a5;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  sub_119C854((int *)(a1 + 28), a3);
  sub_119C884((void **)(v6 + 32), (const char *)&unk_257BC67);
  sub_119C884((void **)(v6 + 36), (const char *)&unk_257BC67);
  sub_119C854((int *)(v6 + 40), v7);
  *(_DWORD *)(v6 + 44) = a6;
  ExternalServer::resolve((ExternalServer *)v6);
  return v6;
}


ExternalServer *__fastcall ExternalServer::~ExternalServer(ExternalServer *this)
{
  ExternalServer *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r5@5
  unsigned int *v11; // r1@6
  unsigned int v12; // r0@8
  unsigned int *v13; // r6@12
  unsigned int v14; // r0@14
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34

  v1 = this;
  v2 = *((_DWORD *)this + 10);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 9);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v4 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 8);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v6 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 7);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v8 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 1);
  if ( v10 )
    v11 = (unsigned int *)(v10 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  return v1;
}


const void **__fastcall ExternalServer::getIP(ExternalServer *this)
{
  int *v1; // r4@1
  int v2; // r0@1
  const void **result; // r0@3

  v1 = (int *)this;
  v2 = *(_DWORD *)this;
  if ( !v2 )
    sub_119ED9C(3);
  if ( std::__future_base::_State_baseV2::wait_for<long long,std::ratio<1ll,1000ll>>(v2, &unk_262D170) == 1 )
    result = &Util::EMPTY_STRING;
  else
    result = (const void **)(std::__basic_future<std::string>::_M_get_result(v1) + 8);
  return result;
}
