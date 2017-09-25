

void __fastcall RemixRequest::~RemixRequest(RemixRequest *this)
{
  RequestHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26DE14C;
  v2 = *((_DWORD *)this + 16);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  RequestHandler::~RequestHandler(v1);
  operator delete((void *)v1);
}


RequestHandler *__fastcall RemixRequest::~RemixRequest(RemixRequest *this)
{
  RequestHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26DE14C;
  v2 = *((_DWORD *)this + 16);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  RequestHandler::~RequestHandler(v1);
  return v1;
}


int __fastcall RemixRequest::_isFileRequest(RemixRequest *this)
{
  return 0;
}


void __fastcall RemixRequest::~RemixRequest(RemixRequest *this)
{
  RemixRequest::~RemixRequest(this);
}


int __fastcall RemixRequest::RemixRequest(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = RequestHandler::RequestHandler(a1, a2, -1, -1, 15);
  *(_DWORD *)result = &off_26DE14C;
  *(_DWORD *)(result + 60) = v2;
  *(_DWORD *)(result + 64) = &unk_28898CC;
  *(_DWORD *)(result + 68) = 6;
  return result;
}


char *__fastcall RemixRequest::_getEnvironmentString(RemixRequest *this)
{
  char v1; // r0@1

  v1 = byte_27D4308;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27D4308) )
  {
    sub_119C884((void **)algn_27D4304, "Publish");
    _cxa_atexit(sub_21E6EDC);
    j___cxa_guard_release((unsigned int *)&byte_27D4308);
  }
  return algn_27D4304;
}


unsigned int __fastcall RemixRequest::_sendRequest(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r10@1
  int v5; // r8@1
  int v6; // r9@1
  unsigned int v7; // r0@2
  unsigned int *v8; // r6@2
  unsigned int v9; // r1@5
  unsigned int v10; // r2@6
  int v11; // r5@7
  unsigned int v12; // r0@9
  unsigned int *v13; // r4@12
  unsigned int v14; // r0@14
  unsigned int v15; // r0@19
  unsigned int v16; // r0@25
  unsigned int v17; // r0@32
  unsigned int v18; // r0@38
  int v19; // r0@43
  unsigned int *v20; // r0@44
  unsigned int v21; // r1@46
  unsigned int v22; // r0@51
  unsigned int v23; // r0@56
  unsigned int v24; // r0@61
  int v25; // r0@64
  unsigned int *v26; // r2@65
  unsigned int v27; // r1@67
  int v28; // r5@72
  unsigned int *v29; // r1@73
  unsigned int v30; // r0@75
  unsigned int *v31; // r6@79
  unsigned int v32; // r0@81
  int v33; // r0@86
  unsigned int *v34; // r2@87
  unsigned int v35; // r1@89
  int v36; // r5@94
  unsigned int *v37; // r1@95
  unsigned int v38; // r0@97
  unsigned int *v39; // r6@101
  unsigned int v40; // r0@103
  int v41; // r0@108
  unsigned int *v42; // r2@109
  unsigned int v43; // r1@111
  int v44; // r5@116
  unsigned int *v45; // r1@117
  unsigned int v46; // r0@119
  unsigned int *v47; // r6@123
  unsigned int v48; // r0@125
  int v49; // r5@130
  unsigned int *v50; // r1@131
  unsigned int v51; // r0@133
  unsigned int *v52; // r6@137
  unsigned int v53; // r0@139
  void *v54; // r0@144
  unsigned int result; // r0@147
  unsigned int *v56; // r2@153
  signed int v57; // r1@155
  int v58; // [sp+4h] [bp-64h]@59
  int v59; // [sp+8h] [bp-60h]@59
  int v60; // [sp+Ch] [bp-5Ch]@54
  int v61; // [sp+10h] [bp-58h]@54
  int v62; // [sp+14h] [bp-54h]@43
  int v63; // [sp+18h] [bp-50h]@43
  int v64; // [sp+1Ch] [bp-4Ch]@49
  int v65; // [sp+20h] [bp-48h]@49
  int v66; // [sp+24h] [bp-44h]@43
  char v67; // [sp+28h] [bp-40h]@43
  int v68; // [sp+2Ch] [bp-3Ch]@130
  char v69; // [sp+30h] [bp-38h]@54
  int v70; // [sp+34h] [bp-34h]@94
  char v71; // [sp+38h] [bp-30h]@59
  int v72; // [sp+3Ch] [bp-2Ch]@72

  v3 = a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = a1;
  if ( !v5 )
    std::__throw_bad_weak_ptr();
  v7 = *(_DWORD *)(v5 + 4);
  v8 = (unsigned int *)(v5 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v7 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v9 = __ldrex(v8);
      if ( v9 == v7 )
        break;
      __clrex();
      v7 = v9;
    }
    v10 = __strex(v7 + 1, v8);
    v7 = v9;
  }
  while ( v10 );
  __dmb();
  v11 = *(_DWORD *)(v3 + 4);
  if ( &pthread_create )
    __dmb();
    do
      v12 = __ldrex(v8);
    while ( __strex(v12 + 1, v8) );
  else
    ++*v8;
  v13 = (unsigned int *)(v5 + 8);
      v14 = __ldrex(v13);
    while ( __strex(v14 + 1, v13) );
    ++*v13;
      v15 = __ldrex(v8);
    while ( __strex(v15 - 1, v8) );
    v15 = (*v8)--;
  if ( v15 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( &pthread_create )
      do
        v16 = __ldrex(v13);
      while ( __strex(v16 - 1, v13) );
    else
      v16 = (*v13)--;
    if ( v16 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      v17 = __ldrex(v8);
    while ( __strex(v17 - 1, v8) );
    v17 = (*v8)--;
  if ( v17 == 1 )
        v18 = __ldrex(v13);
      while ( __strex(v18 - 1, v13) );
      v18 = (*v13)--;
    if ( v18 == 1 )
  sub_119CCEC((void **)&v66, unk_27D3A84, RemixService::AUTH_ENDPOINT);
  RequestHandler::_getAuthorizationHeader((int)&v67, v3, &v66);
  v62 = *(_DWORD *)v4;
  v19 = *(_DWORD *)(v4 + 4);
  v63 = v19;
  if ( v19 )
    v20 = (unsigned int *)(v19 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      ++*v20;
  v64 = v11;
  v65 = v5;
      v22 = __ldrex(v13);
    while ( __strex(v22 + 1, v13) );
  sub_FD0E10((int)&v69, (int)&v67, (int)&v62);
  v60 = v11;
  v61 = v5;
      v23 = __ldrex(v13);
    while ( __strex(v23 + 1, v13) );
  sub_FD17B0((int)&v71, (int)&v69, (int)&v60);
  v58 = v11;
  v59 = v5;
      v24 = __ldrex(v13);
    while ( __strex(v24 + 1, v13) );
  sub_FD2114(v6, (int)&v71, (int)&v58);
  v25 = v59;
  if ( v59 )
    v26 = (unsigned int *)(v59 + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      (*(void (**)(void))(*(_DWORD *)v25 + 12))();
  v28 = v72;
  if ( v72 )
    v29 = (unsigned int *)(v72 + 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 == 1 )
      v31 = (unsigned int *)(v28 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
  v33 = v61;
  if ( v61 )
    v34 = (unsigned int *)(v61 + 8);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 == 1 )
      (*(void (**)(void))(*(_DWORD *)v33 + 12))();
  v36 = v70;
  if ( v70 )
    v37 = (unsigned int *)(v70 + 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 == 1 )
      v39 = (unsigned int *)(v36 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 8))(v36);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 12))(v36);
  v41 = v65;
  if ( v65 )
    v42 = (unsigned int *)(v65 + 8);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 == 1 )
      (*(void (**)(void))(*(_DWORD *)v41 + 12))();
  v44 = v63;
  if ( v63 )
    v45 = (unsigned int *)(v63 + 4);
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
  v49 = v68;
  if ( v68 )
    v50 = (unsigned int *)(v68 + 4);
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
  v54 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v66 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v54);
      result = __ldrex(v13);
    while ( __strex(result - 1, v13) );
    result = (*v13)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}
