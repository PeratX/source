

unsigned int __fastcall RemixProgressTracker::publish(RemixProgressTracker *this)
{
  RemixProgressTracker *v1; // r5@1
  int v2; // r0@2
  bool v3; // zf@2
  int v4; // r8@5
  unsigned int v5; // r1@6
  unsigned int *v6; // r0@6
  unsigned int v7; // r2@9
  unsigned int v8; // r3@10
  int v9; // r9@11
  unsigned int *v10; // r4@11
  unsigned int v11; // r1@13
  unsigned int result; // r0@15
  unsigned int v13; // r1@19
  unsigned int v14; // r0@25
  int v15; // r7@30
  const RemixService *v16; // r6@32
  unsigned int v17; // r0@34
  _DWORD *v18; // r0@37
  unsigned int v19; // r1@39
  __int64 v20; // r1@42
  unsigned int v21; // r0@46
  _DWORD *v22; // [sp+4h] [bp-5Ch]@42
  void (*v23)(void); // [sp+Ch] [bp-54h]@37
  void *v24; // [sp+14h] [bp-4Ch]@30
  void *v25; // [sp+18h] [bp-48h]@30
  void *v26; // [sp+1Ch] [bp-44h]@30
  void *v27; // [sp+20h] [bp-40h]@30
  int v28; // [sp+24h] [bp-3Ch]@30
  int v29; // [sp+28h] [bp-38h]@30
  int v30; // [sp+2Ch] [bp-34h]@30
  void *v31; // [sp+30h] [bp-30h]@30
  void *v32; // [sp+34h] [bp-2Ch]@30
  void *v33; // [sp+38h] [bp-28h]@30
  void *v34; // [sp+3Ch] [bp-24h]@30
  void *v35; // [sp+40h] [bp-20h]@30

  v1 = this;
  if ( *((_DWORD *)this + 4) != 7 )
    goto LABEL_63;
  v2 = *(_DWORD *)(*((_DWORD *)this + 20) - 12);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *(_DWORD *)(*((_DWORD *)v1 + 18) - 12) == 0;
  if ( v3 )
  {
LABEL_63:
    *((_DWORD *)v1 + 4) = 10;
    result = 1;
    *((_BYTE *)v1 + 93) = 1;
  }
  else
    *((_DWORD *)v1 + 4) = 8;
    v4 = *((_DWORD *)v1 + 2);
    if ( !v4 )
      std::__throw_bad_weak_ptr();
    v5 = *(_DWORD *)(v4 + 4);
    v6 = (unsigned int *)(v4 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v5 )
          std::__throw_bad_weak_ptr();
        __dmb();
        v7 = __ldrex(v6);
        if ( v7 == v5 )
          break;
        __clrex();
        v5 = v7;
      }
      v8 = __strex(v5 + 1, v6);
      v5 = v7;
    }
    while ( v8 );
    __dmb();
    v9 = *((_DWORD *)v1 + 1);
    v10 = (unsigned int *)(v4 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    else
      ++*v10;
        v13 = __ldrex(v6);
      while ( __strex(v13 - 1, v6) );
      v13 = (*v6)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        do
          v14 = __ldrex(v10);
        while ( __strex(v14 - 1, v10) );
      else
        v14 = (*v10)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    v24 = &unk_28898CC;
    v25 = &unk_28898CC;
    v26 = &unk_28898CC;
    v27 = &unk_28898CC;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = &unk_28898CC;
    v32 = &unk_28898CC;
    v33 = &unk_28898CC;
    v34 = &unk_28898CC;
    v35 = &unk_28898CC;
    EntityInteraction::setInteractText((int *)&v24, (int *)v1 + 20);
    EntityInteraction::setInteractText((int *)&v26, (int *)v1 + 12);
    EntityInteraction::setInteractText((int *)&v27, (int *)v1 + 13);
    std::vector<std::string,std::allocator<std::string>>::operator=((int)&v28, (unsigned __int64 *)v1 + 7);
    EntityInteraction::setInteractText((int *)&v25, (int *)v1 + 18);
    v15 = RemixProgressTracker::_getFilter(v1);
    if ( v15 )
      EntityInteraction::setInteractText((int *)&v31, (int *)v15);
      EntityInteraction::setInteractText((int *)&v32, (int *)(v15 + 4));
      EntityInteraction::setInteractText((int *)&v33, (int *)(v15 + 8));
      EntityInteraction::setInteractText((int *)&v34, (int *)(v15 + 12));
      EntityInteraction::setInteractText((int *)&v35, (int *)(v15 + 16));
    v16 = (const RemixService *)*((_DWORD *)v1 + 3);
        v17 = __ldrex(v10);
      while ( __strex(v17 + 1, v10) );
    v23 = 0;
    v18 = operator new(8u);
    *v18 = v9;
    v18[1] = v4;
        v19 = __ldrex(v10);
      while ( __strex(v19 + 1, v10) );
    LODWORD(v20) = sub_F6F5CC;
    v22 = v18;
    HIDWORD(v20) = sub_F6F13C;
    *(_QWORD *)&v23 = v20;
    RemixService::_requestFilePublish(v16, (int)v1 + 40, (const RemixFilePublishRequest::Params *)&v24, (int)&v22);
    if ( v23 )
      v23();
        v21 = __ldrex(v10);
      while ( __strex(v21 - 1, v10) );
      v21 = (*v10)--;
    if ( v21 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    RemixFilePublishRequest::Params::~Params((RemixFilePublishRequest::Params *)&v24);
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
      result = (*v10)--;
    if ( result == 1 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return result;
}


  if ( RemixProgressTracker::isSignedIn(*(RemixProgressTracker **)(v1 + 520))
{
        RemixService::hasLoadedFilters(v2)) )
  {
    result = 1;
  }
  else
    result = 0;
    if ( *(_DWORD *)(v1 + 516) == 2 )
      result = 1;
  return result;
}


unsigned int __fastcall RemixProgressTracker::_requestTranscodeStatus(RemixProgressTracker *this)
{
  RemixProgressTracker *v1; // r5@1
  int v2; // r8@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  int v7; // r4@7
  unsigned int *v8; // r7@7
  unsigned int v9; // r1@9
  unsigned int v10; // r1@14
  unsigned int v11; // r0@20
  const RemixService *v12; // r6@25
  unsigned int v13; // r0@27
  _DWORD *v14; // r0@30
  int v15; // r1@30
  unsigned int *v16; // r2@31
  unsigned int v17; // r3@33
  __int64 v18; // r4@36
  char *v19; // r0@38
  unsigned int *v20; // r2@40
  unsigned int v21; // r1@42
  char *v22; // r0@47
  unsigned int result; // r0@50
  unsigned int *v24; // r2@56
  signed int v25; // r1@58
  unsigned int *v26; // r2@60
  signed int v27; // r1@62
  char *v28; // [sp+Ch] [bp-34h]@30
  _DWORD *v29; // [sp+10h] [bp-30h]@36
  void (*v30)(void); // [sp+18h] [bp-28h]@30
  char *v31; // [sp+20h] [bp-20h]@25

  v1 = this;
  *((_DWORD *)this + 4) = 6;
  v2 = *((_DWORD *)this + 2);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *((_DWORD *)v1 + 1);
  v8 = (unsigned int *)(v2 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
  else
    ++*v8;
      v10 = __ldrex(v4);
    while ( __strex(v10 - 1, v4) );
    v10 = (*v4)--;
  if ( v10 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v11 = __ldrex(v8);
      while ( __strex(v11 - 1, v8) );
    else
      v11 = (*v8)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  v31 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v31, (int *)v1 + 20);
  v12 = (const RemixService *)*((_DWORD *)v1 + 3);
      v13 = __ldrex(v8);
    while ( __strex(v13 + 1, v8) );
  sub_119C854((int *)&v28, (int *)&v31);
  v30 = 0;
  v14 = operator new(0xCu);
  v15 = (int)v1 + 40;
  *v14 = v7;
  v14[1] = v2;
  if ( v2 )
    v16 = (unsigned int *)(v2 + 8);
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
      ++*v16;
  HIDWORD(v18) = sub_F6F670;
  LODWORD(v18) = sub_F6F8B0;
  v14[2] = v28;
  v28 = (char *)&unk_28898CC;
  v29 = v14;
  *(_QWORD *)&v30 = v18;
  RemixService::_requestTranscodeStatus(v12, v15, (int *)&v31, (int)&v29);
  if ( v30 )
    v30();
  v19 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v28 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
    v20 = (unsigned int *)(v2 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  v22 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v31 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
      result = __ldrex(v8);
    while ( __strex(result - 1, v8) );
    result = (*v8)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


    if ( RemixProgressTracker::getState(*(RemixProgressTracker **)(v2 + 424)) == 10 )
{
  }
  return v1;
}


char *__fastcall RemixProgressTracker::getUniqueModelID(RemixProgressTracker *this)
{
  return (char *)this + 24;
}


int __fastcall RemixProgressTracker::_onLogin(int result)
{
  *(_DWORD *)(result + 16) = 4;
  *(_BYTE *)(result + 92) = 1;
  return result;
}


unsigned int __fastcall RemixProgressTracker::login(RemixProgressTracker *this)
{
  RemixProgressTracker *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  int v7; // r7@7
  unsigned int *v8; // r6@7
  unsigned int v9; // r1@9
  unsigned int v10; // r1@14
  unsigned int v11; // r0@20
  const RemixService *v12; // r5@25
  unsigned int v13; // r0@27
  _DWORD *v14; // r0@30
  unsigned int v15; // r1@32
  __int64 v16; // r1@35
  unsigned int v17; // r0@39
  unsigned int result; // r0@46
  _DWORD *v19; // [sp+4h] [bp-24h]@35
  void (*v20)(void); // [sp+Ch] [bp-1Ch]@30

  v1 = this;
  *((_DWORD *)this + 4) = 1;
  v2 = *((_DWORD *)this + 2);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *((_DWORD *)v1 + 1);
  v8 = (unsigned int *)(v2 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
  else
    ++*v8;
      v10 = __ldrex(v4);
    while ( __strex(v10 - 1, v4) );
    v10 = (*v4)--;
  if ( v10 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v11 = __ldrex(v8);
      while ( __strex(v11 - 1, v8) );
    else
      v11 = (*v8)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  v12 = (const RemixService *)*((_DWORD *)v1 + 3);
      v13 = __ldrex(v8);
    while ( __strex(v13 + 1, v8) );
  v20 = 0;
  v14 = operator new(8u);
  *v14 = v7;
  v14[1] = v2;
      v15 = __ldrex(v8);
    while ( __strex(v15 + 1, v8) );
  LODWORD(v16) = sub_F6D990;
  v19 = v14;
  HIDWORD(v16) = sub_F6D5F8;
  *(_QWORD *)&v20 = v16;
  RemixService::_requestUserLogin(v12, (int)&v19);
  if ( v20 )
    v20();
      v17 = __ldrex(v8);
    while ( __strex(v17 - 1, v8) );
    v17 = (*v8)--;
  if ( v17 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v8);
    while ( __strex(result - 1, v8) );
    result = (*v8)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


void __fastcall RemixProgressTracker::~RemixProgressTracker(RemixProgressTracker *this)
{
  RemixProgressTracker::~RemixProgressTracker(this);
}


int __fastcall RemixProgressTracker::_onFailed(int result)
{
  *(_DWORD *)(result + 16) = 10;
  *(_BYTE *)(result + 93) = 1;
  return result;
}


int __fastcall RemixProgressTracker::setCatalogInfo(int a1, int *a2, int *a3, unsigned __int64 *a4, int a5)
{
  int v5; // r6@1
  unsigned __int64 *v6; // r4@1
  int *v7; // r5@1
  int result; // r0@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  EntityInteraction::setInteractText((int *)(a1 + 48), a2);
  EntityInteraction::setInteractText((int *)(v5 + 52), v7);
  std::vector<std::string,std::allocator<std::string>>::operator=(v5 + 56, v6);
  result = a5;
  *(_DWORD *)(v5 + 68) = a5;
  return result;
}


int __fastcall RemixProgressTracker::getUploadProgress(RemixProgressTracker *this)
{
  int v1; // r1@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 4);
  if ( v1 == 7 )
  {
    __asm
    {
      VMOVEQ.F32      S0, #1.0
      VMOVEQ          R0, S0
    }
  }
  else if ( v1 == 6 )
      VMOV.F32        S0, #0.5
      VLDR            S2, [R0,#0x54]
      VMUL.F32        S2, S2, S0
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
  else
    if ( v1 == 5 )
      __asm
      {
        VMOVEQ.F32      S0, #0.5
        VLDREQ          S2, [R0,#0x58]
        VMULEQ.F32      S0, S2, S0
      }
    else
      __asm { VLDRNE          S0, =0.0 }
    __asm { VMOV            R0, S0 }
  return result;
}


char *__fastcall RemixProgressTracker::getPublishUrl(RemixProgressTracker *this)
{
  return (char *)this + 76;
}


int __fastcall RemixProgressTracker::RemixProgressTracker(int a1, int a2, int *a3, int *a4, __int64 a5)
{
  int v5; // r4@1
  int *v6; // r5@1
  int result; // r0@1

  v5 = a1;
  v6 = a4;
  *(_DWORD *)a1 = &off_26DD12C;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 6;
  sub_119C854((int *)(a1 + 24), a3);
  sub_119C854((int *)(v5 + 28), v6);
  *(_QWORD *)(v5 + 32) = a5;
  *(_DWORD *)(v5 + 40) = &unk_28898CC;
  *(_BYTE *)(v5 + 44) = 0;
  *(_DWORD *)(v5 + 48) = &unk_28898CC;
  *(_DWORD *)(v5 + 52) = &unk_28898CC;
  *(_DWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 68) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 60) = 0;
  *(_DWORD *)(v5 + 72) = &unk_28898CC;
  *(_DWORD *)(v5 + 76) = &unk_28898CC;
  *(_DWORD *)(v5 + 80) = &unk_28898CC;
  result = v5;
  *(_WORD *)(v5 + 92) = 0;
  *(_DWORD *)(v5 + 84) = 0;
  *(_DWORD *)(v5 + 88) = 0;
  return result;
}


unsigned int __fastcall RemixProgressTracker::upload(RemixProgressTracker *this)
{
  RemixProgressTracker *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  int v7; // r8@7
  unsigned int *v8; // r7@7
  unsigned int v9; // r1@9
  unsigned int v10; // r1@14
  unsigned int v11; // r0@20
  const RemixService *v12; // r6@25
  unsigned int v13; // r0@27
  _DWORD *v14; // r0@30
  unsigned int v15; // r1@32
  __int64 v16; // r1@35
  unsigned int v17; // r0@39
  unsigned int result; // r0@46
  _DWORD *v19; // [sp+0h] [bp-28h]@35
  void (*v20)(void); // [sp+8h] [bp-20h]@30

  v1 = this;
  *((_DWORD *)this + 4) = 5;
  v2 = *((_DWORD *)this + 2);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *((_DWORD *)v1 + 1);
  v8 = (unsigned int *)(v2 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
  else
    ++*v8;
      v10 = __ldrex(v4);
    while ( __strex(v10 - 1, v4) );
    v10 = (*v4)--;
  if ( v10 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v11 = __ldrex(v8);
      while ( __strex(v11 - 1, v8) );
    else
      v11 = (*v8)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  v12 = (const RemixService *)*((_DWORD *)v1 + 3);
      v13 = __ldrex(v8);
    while ( __strex(v13 + 1, v8) );
  v20 = 0;
  v14 = operator new(8u);
  *v14 = v7;
  v14[1] = v2;
      v15 = __ldrex(v8);
    while ( __strex(v15 + 1, v8) );
  LODWORD(v16) = sub_F6E59C;
  v19 = v14;
  HIDWORD(v16) = sub_F6DCE0;
  *(_QWORD *)&v20 = v16;
  RemixService::_requestTemporaryStorage(v12, (int)v1 + 40, (int)&v19);
  if ( v20 )
    v20();
      v17 = __ldrex(v8);
    while ( __strex(v17 - 1, v8) );
    v17 = (*v8)--;
  if ( v17 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v8);
    while ( __strex(result - 1, v8) );
    result = (*v8)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


void __fastcall RemixProgressTracker::~RemixProgressTracker(RemixProgressTracker *this)
{
  RemixProgressTracker *v1; // r0@1

  v1 = RemixProgressTracker::~RemixProgressTracker(this);
  j_j_j__ZdlPv_4((void *)v1);
}


    if ( RemixProgressTracker::getState(*(RemixProgressTracker **)(v2 + 424)) == 10 )
{
  }
  return v1;
}


int __fastcall RemixProgressTracker::_validForPublish(RemixProgressTracker *this)
{
  int result; // r0@3

  if ( *((_DWORD *)this + 4) == 7 && *(_DWORD *)(*((_DWORD *)this + 20) - 12) )
    result = *(_DWORD *)(*((_DWORD *)this + 18) - 12) != 0;
  else
    result = 0;
  return result;
}


RemixProgressTracker *__fastcall RemixProgressTracker::~RemixProgressTracker(RemixProgressTracker *this)
{
  RemixProgressTracker *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  void *v8; // r5@4
  void *v9; // r7@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int *v12; // r0@14
  int v13; // r1@19
  void *v14; // r0@19
  int v15; // r1@20
  void *v16; // r0@20
  int v17; // r1@21
  void *v18; // r0@21
  int v19; // r1@22
  void *v20; // r0@22
  int v21; // r1@23
  void *v22; // r0@23
  int v23; // r0@24
  unsigned int *v24; // r2@25
  unsigned int v25; // r1@27
  unsigned int *v27; // r2@33
  signed int v28; // r1@35
  unsigned int *v29; // r2@37
  signed int v30; // r1@39
  unsigned int *v31; // r2@41
  signed int v32; // r1@43
  unsigned int *v33; // r2@45
  signed int v34; // r1@47
  unsigned int *v35; // r2@49
  signed int v36; // r1@51
  unsigned int *v37; // r2@53
  signed int v38; // r1@55
  unsigned int *v39; // r2@57
  signed int v40; // r1@59
  unsigned int *v41; // r2@61
  signed int v42; // r1@63

  v1 = this;
  *(_DWORD *)this = &off_26DD12C;
  v2 = *((_DWORD *)this + 20);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 19);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v4 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 18);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v6 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v9 = (void *)(*((_QWORD *)v1 + 7) >> 32);
  v8 = (void *)*((_QWORD *)v1 + 7);
  if ( v8 != v9 )
    do
      v12 = (int *)(*(_DWORD *)v8 - 12);
      if ( v12 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v12);
      }
      v8 = (char *)v8 + 4;
    while ( v8 != v9 );
    v8 = (void *)*((_DWORD *)v1 + 14);
  if ( v8 )
    operator delete(v8);
  v13 = *((_DWORD *)v1 + 13);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v13 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = *((_DWORD *)v1 + 12);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v15 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = *((_DWORD *)v1 + 10);
  v18 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v17 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = *((_DWORD *)v1 + 7);
  v20 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v19 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = *((_DWORD *)v1 + 6);
  v22 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v21 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = *((_DWORD *)v1 + 2);
  if ( v23 )
    v24 = (unsigned int *)(v23 + 8);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      (*(void (**)(void))(*(_DWORD *)v23 + 12))();
  return v1;
}


int __fastcall RemixProgressTracker::_getFilter(RemixProgressTracker *this)
{
  RemixProgressTracker *v1; // r4@1
  int v2; // r4@3
  int v3; // r8@9
  int v4; // r7@9
  _BYTE *v5; // r0@14
  unsigned int *v7; // r2@16
  signed int v8; // r1@18
  _BYTE *v9; // [sp+4h] [bp-24h]@1

  v1 = this;
  v9 = &unk_28898CC;
  switch ( *((_DWORD *)this + 17) )
  {
    case 0:
      sub_119CAD8((void **)&v9, "day", (_BYTE *)3);
      goto LABEL_9;
    case 1:
      sub_119CAD8((void **)&v9, "night", (_BYTE *)5);
    case 2:
      sub_119CAD8((void **)&v9, "water", (_BYTE *)5);
    case 3:
      sub_119CAD8((void **)&v9, "cave", (_BYTE *)4);
    case 4:
      sub_119CAD8((void **)&v9, "nether", (_BYTE *)6);
    case 5:
      sub_119CAD8((void **)&v9, "end", (_BYTE *)3);
LABEL_9:
      v3 = *((_DWORD *)v1 + 3);
      v4 = *(_QWORD *)(v3 + 64) >> 32;
      v2 = *(_QWORD *)(v3 + 64);
      if ( v2 == v4 )
        goto LABEL_14;
      break;
    default:
      v2 = 0;
      goto LABEL_14;
  }
  while ( sub_119CA58((int *)(v2 + 12), "minecraft", 0, 9u) == -1
       || sub_119CA58((int *)(v2 + 12), v9, 0, *((_DWORD *)v9 - 3)) == -1 )
    v2 += 20;
    if ( v4 == v2 )
    {
      v2 = *(_DWORD *)(v3 + 64);
    }
LABEL_14:
  v5 = v9 - 12;
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  return v2;
}


unsigned int __fastcall RemixProgressTracker::registerAccount(RemixProgressTracker *this)
{
  RemixProgressTracker *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  int v7; // r8@7
  unsigned int *v8; // r7@7
  unsigned int v9; // r1@9
  unsigned int v10; // r1@14
  unsigned int v11; // r0@20
  const RemixService *v12; // r6@25
  unsigned int v13; // r0@27
  _DWORD *v14; // r0@30
  unsigned int v15; // r1@32
  __int64 v16; // r1@35
  unsigned int v17; // r0@39
  unsigned int result; // r0@46
  _DWORD *v19; // [sp+0h] [bp-28h]@35
  void (*v20)(void); // [sp+8h] [bp-20h]@30

  v1 = this;
  *((_DWORD *)this + 4) = 3;
  v2 = *((_DWORD *)this + 2);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *((_DWORD *)v1 + 1);
  v8 = (unsigned int *)(v2 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
  else
    ++*v8;
      v10 = __ldrex(v4);
    while ( __strex(v10 - 1, v4) );
    v10 = (*v4)--;
  if ( v10 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v11 = __ldrex(v8);
      while ( __strex(v11 - 1, v8) );
    else
      v11 = (*v8)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  v12 = (const RemixService *)*((_DWORD *)v1 + 3);
      v13 = __ldrex(v8);
    while ( __strex(v13 + 1, v8) );
  v20 = 0;
  v14 = operator new(8u);
  *v14 = v7;
  v14[1] = v2;
      v15 = __ldrex(v8);
    while ( __strex(v15 + 1, v8) );
  LODWORD(v16) = sub_F6DC3C;
  v19 = v14;
  HIDWORD(v16) = sub_F6DA34;
  *(_QWORD *)&v20 = v16;
  RemixService::_requestUserSignup(v12, (int)v1 + 40, (int)&v19);
  if ( v20 )
    v20();
      v17 = __ldrex(v8);
    while ( __strex(v17 - 1, v8) );
    v17 = (*v8)--;
  if ( v17 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      result = __ldrex(v8);
    while ( __strex(result - 1, v8) );
    result = (*v8)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}
