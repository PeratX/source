

void __fastcall MockRemixProgressTracker::~MockRemixProgressTracker(MockRemixProgressTracker *this)
{
  RemixProgressTracker *v1; // r0@1

  v1 = RemixProgressTracker::~RemixProgressTracker(this);
  j_j_j__ZdlPv_4((void *)v1);
}


unsigned int __fastcall MockRemixProgressTracker::publish(MockRemixProgressTracker *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r5@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  int v6; // r6@7
  unsigned int v7; // r0@9
  unsigned int *v8; // r7@12
  unsigned int v9; // r0@14
  unsigned int v10; // r0@19
  unsigned int v11; // r0@25
  unsigned int v12; // r0@32
  unsigned int v13; // r0@38
  unsigned int v14; // r0@45
  unsigned int v15; // r0@50
  _DWORD *v16; // r5@53
  unsigned int v17; // r0@55
  _DWORD *v18; // r0@58
  int v19; // r5@58
  unsigned int *v20; // r1@59
  unsigned int v21; // r0@61
  unsigned int *v22; // r6@65
  unsigned int v23; // r0@67
  unsigned int v24; // r0@74
  unsigned int v25; // r0@81
  unsigned int result; // r0@89
  pthread_t thread1; // [sp+4h] [bp-24h]@48
  _DWORD *v28; // [sp+8h] [bp-20h]@58
  int v29; // [sp+Ch] [bp-1Ch]@58

  *((_DWORD *)this + 4) = 8;
  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
    std::__throw_bad_weak_ptr();
  v2 = *(_DWORD *)(v1 + 4);
  v3 = (unsigned int *)(v1 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v2 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
        break;
      __clrex();
      v2 = v4;
    }
    v5 = __strex(v2 + 1, v3);
    v2 = v4;
  }
  while ( v5 );
  __dmb();
  v6 = *((_DWORD *)this + 1);
  if ( &pthread_create )
    __dmb();
    do
      v7 = __ldrex(v3);
    while ( __strex(v7 + 1, v3) );
  else
    ++*v3;
  v8 = (unsigned int *)(v1 + 8);
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
    ++*v8;
      v10 = __ldrex(v3);
    while ( __strex(v10 - 1, v3) );
    v10 = (*v3)--;
  if ( v10 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
    if ( &pthread_create )
      do
        v11 = __ldrex(v8);
      while ( __strex(v11 - 1, v8) );
    else
      v11 = (*v8)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
      v12 = __ldrex(v3);
    while ( __strex(v12 - 1, v3) );
    v12 = (*v3)--;
  if ( v12 == 1 )
        v13 = __ldrex(v8);
      while ( __strex(v13 - 1, v8) );
      v13 = (*v8)--;
    if ( v13 == 1 )
      v14 = __ldrex(v8);
    while ( __strex(v14 + 1, v8) );
  thread1 = 0;
      v15 = __ldrex(v8);
    while ( __strex(v15 + 1, v8) );
  v16 = operator new(0x14u);
  v16[1] = 0;
  v16[2] = 0;
  *v16 = &off_26DD210;
  v16[3] = v6;
  v16[4] = v1;
      v17 = __ldrex(v8);
    while ( __strex(v17 + 1, v8) );
  v18 = operator new(0x14u);
  v18[1] = 1;
  v18[2] = 1;
  *v18 = &off_26DD224;
  v18[4] = v16;
  v28 = v16;
  v29 = (int)v18;
  sub_119E334(&thread1, (int)&v28);
  v19 = v29;
  if ( v29 )
    v20 = (unsigned int *)(v29 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
      v24 = __ldrex(v8);
    while ( __strex(v24 - 1, v8) );
    v24 = (*v8)--;
  if ( v24 == 1 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 12))(v1);
      v25 = __ldrex(v8);
    while ( __strex(v25 - 1, v8) );
    v25 = (*v8)--;
  if ( v25 == 1 )
  sub_119E344(&thread1);
  if ( !pthread_equal(thread1, 0) )
    std::terminate();
      result = __ldrex(v8);
    while ( __strex(result - 1, v8) );
    result = (*v8)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return result;
}


void __fastcall MockRemixProgressTracker::~MockRemixProgressTracker(MockRemixProgressTracker *this)
{
  MockRemixProgressTracker::~MockRemixProgressTracker(this);
}


unsigned int __fastcall MockRemixProgressTracker::login(MockRemixProgressTracker *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r5@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  int v6; // r6@7
  unsigned int v7; // r0@9
  unsigned int *v8; // r7@12
  unsigned int v9; // r0@14
  unsigned int v10; // r0@19
  unsigned int v11; // r0@25
  unsigned int v12; // r0@32
  unsigned int v13; // r0@38
  unsigned int v14; // r0@45
  unsigned int v15; // r0@50
  _DWORD *v16; // r5@53
  unsigned int v17; // r0@55
  _DWORD *v18; // r0@58
  int v19; // r5@58
  unsigned int *v20; // r1@59
  unsigned int v21; // r0@61
  unsigned int *v22; // r6@65
  unsigned int v23; // r0@67
  unsigned int v24; // r0@74
  unsigned int v25; // r0@81
  unsigned int result; // r0@89
  pthread_t thread1; // [sp+4h] [bp-24h]@48
  _DWORD *v28; // [sp+8h] [bp-20h]@58
  int v29; // [sp+Ch] [bp-1Ch]@58

  *((_DWORD *)this + 4) = 1;
  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
    std::__throw_bad_weak_ptr();
  v2 = *(_DWORD *)(v1 + 4);
  v3 = (unsigned int *)(v1 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v2 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
        break;
      __clrex();
      v2 = v4;
    }
    v5 = __strex(v2 + 1, v3);
    v2 = v4;
  }
  while ( v5 );
  __dmb();
  v6 = *((_DWORD *)this + 1);
  if ( &pthread_create )
    __dmb();
    do
      v7 = __ldrex(v3);
    while ( __strex(v7 + 1, v3) );
  else
    ++*v3;
  v8 = (unsigned int *)(v1 + 8);
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
    ++*v8;
      v10 = __ldrex(v3);
    while ( __strex(v10 - 1, v3) );
    v10 = (*v3)--;
  if ( v10 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
    if ( &pthread_create )
      do
        v11 = __ldrex(v8);
      while ( __strex(v11 - 1, v8) );
    else
      v11 = (*v8)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
      v12 = __ldrex(v3);
    while ( __strex(v12 - 1, v3) );
    v12 = (*v3)--;
  if ( v12 == 1 )
        v13 = __ldrex(v8);
      while ( __strex(v13 - 1, v8) );
      v13 = (*v8)--;
    if ( v13 == 1 )
      v14 = __ldrex(v8);
    while ( __strex(v14 + 1, v8) );
  thread1 = 0;
      v15 = __ldrex(v8);
    while ( __strex(v15 + 1, v8) );
  v16 = operator new(0x14u);
  v16[1] = 0;
  v16[2] = 0;
  *v16 = &off_26DD180;
  v16[3] = v6;
  v16[4] = v1;
      v17 = __ldrex(v8);
    while ( __strex(v17 + 1, v8) );
  v18 = operator new(0x14u);
  v18[1] = 1;
  v18[2] = 1;
  *v18 = &off_26DD194;
  v18[4] = v16;
  v28 = v16;
  v29 = (int)v18;
  sub_119E334(&thread1, (int)&v28);
  v19 = v29;
  if ( v29 )
    v20 = (unsigned int *)(v29 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
      v24 = __ldrex(v8);
    while ( __strex(v24 - 1, v8) );
    v24 = (*v8)--;
  if ( v24 == 1 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 12))(v1);
      v25 = __ldrex(v8);
    while ( __strex(v25 - 1, v8) );
    v25 = (*v8)--;
  if ( v25 == 1 )
  sub_119E344(&thread1);
  if ( !pthread_equal(thread1, 0) )
    std::terminate();
      result = __ldrex(v8);
    while ( __strex(result - 1, v8) );
    result = (*v8)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return result;
}


unsigned int __fastcall MockRemixProgressTracker::upload(MockRemixProgressTracker *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r5@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  int v6; // r6@7
  unsigned int v7; // r0@9
  unsigned int *v8; // r7@12
  unsigned int v9; // r0@14
  unsigned int v10; // r0@19
  unsigned int v11; // r0@25
  unsigned int v12; // r0@32
  unsigned int v13; // r0@38
  unsigned int v14; // r0@45
  unsigned int v15; // r0@50
  _DWORD *v16; // r5@53
  unsigned int v17; // r0@55
  _DWORD *v18; // r0@58
  int v19; // r5@58
  unsigned int *v20; // r1@59
  unsigned int v21; // r0@61
  unsigned int *v22; // r6@65
  unsigned int v23; // r0@67
  unsigned int v24; // r0@74
  unsigned int v25; // r0@81
  unsigned int result; // r0@89
  pthread_t thread1; // [sp+4h] [bp-24h]@48
  _DWORD *v28; // [sp+8h] [bp-20h]@58
  int v29; // [sp+Ch] [bp-1Ch]@58

  *((_DWORD *)this + 4) = 5;
  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
    std::__throw_bad_weak_ptr();
  v2 = *(_DWORD *)(v1 + 4);
  v3 = (unsigned int *)(v1 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v2 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
        break;
      __clrex();
      v2 = v4;
    }
    v5 = __strex(v2 + 1, v3);
    v2 = v4;
  }
  while ( v5 );
  __dmb();
  v6 = *((_DWORD *)this + 1);
  if ( &pthread_create )
    __dmb();
    do
      v7 = __ldrex(v3);
    while ( __strex(v7 + 1, v3) );
  else
    ++*v3;
  v8 = (unsigned int *)(v1 + 8);
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
    ++*v8;
      v10 = __ldrex(v3);
    while ( __strex(v10 - 1, v3) );
    v10 = (*v3)--;
  if ( v10 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
    if ( &pthread_create )
      do
        v11 = __ldrex(v8);
      while ( __strex(v11 - 1, v8) );
    else
      v11 = (*v8)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
      v12 = __ldrex(v3);
    while ( __strex(v12 - 1, v3) );
    v12 = (*v3)--;
  if ( v12 == 1 )
        v13 = __ldrex(v8);
      while ( __strex(v13 - 1, v8) );
      v13 = (*v8)--;
    if ( v13 == 1 )
      v14 = __ldrex(v8);
    while ( __strex(v14 + 1, v8) );
  thread1 = 0;
      v15 = __ldrex(v8);
    while ( __strex(v15 + 1, v8) );
  v16 = operator new(0x14u);
  v16[1] = 0;
  v16[2] = 0;
  *v16 = &off_26DD1E0;
  v16[3] = v6;
  v16[4] = v1;
      v17 = __ldrex(v8);
    while ( __strex(v17 + 1, v8) );
  v18 = operator new(0x14u);
  v18[1] = 1;
  v18[2] = 1;
  *v18 = &off_26DD1F4;
  v18[4] = v16;
  v28 = v16;
  v29 = (int)v18;
  sub_119E334(&thread1, (int)&v28);
  v19 = v29;
  if ( v29 )
    v20 = (unsigned int *)(v29 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
      v24 = __ldrex(v8);
    while ( __strex(v24 - 1, v8) );
    v24 = (*v8)--;
  if ( v24 == 1 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 12))(v1);
      v25 = __ldrex(v8);
    while ( __strex(v25 - 1, v8) );
    v25 = (*v8)--;
  if ( v25 == 1 )
  sub_119E344(&thread1);
  if ( !pthread_equal(thread1, 0) )
    std::terminate();
      result = __ldrex(v8);
    while ( __strex(result - 1, v8) );
    result = (*v8)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return result;
}


_DWORD *__fastcall MockRemixProgressTracker::MockRemixProgressTracker(int a1, int a2, int *a3, int *a4, __int64 a5)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)RemixProgressTracker::RemixProgressTracker(a1, a2, a3, a4, a5);
  *result = &off_26DD14C;
  return result;
}


unsigned int __fastcall MockRemixProgressTracker::registerAccount(MockRemixProgressTracker *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r5@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  int v6; // r6@7
  unsigned int v7; // r0@9
  unsigned int *v8; // r7@12
  unsigned int v9; // r0@14
  unsigned int v10; // r0@19
  unsigned int v11; // r0@25
  unsigned int v12; // r0@32
  unsigned int v13; // r0@38
  unsigned int v14; // r0@45
  unsigned int v15; // r0@50
  _DWORD *v16; // r5@53
  unsigned int v17; // r0@55
  _DWORD *v18; // r0@58
  int v19; // r5@58
  unsigned int *v20; // r1@59
  unsigned int v21; // r0@61
  unsigned int *v22; // r6@65
  unsigned int v23; // r0@67
  unsigned int v24; // r0@74
  unsigned int v25; // r0@81
  unsigned int result; // r0@89
  pthread_t thread1; // [sp+4h] [bp-24h]@48
  _DWORD *v28; // [sp+8h] [bp-20h]@58
  int v29; // [sp+Ch] [bp-1Ch]@58

  *((_DWORD *)this + 4) = 3;
  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
    std::__throw_bad_weak_ptr();
  v2 = *(_DWORD *)(v1 + 4);
  v3 = (unsigned int *)(v1 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v2 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
        break;
      __clrex();
      v2 = v4;
    }
    v5 = __strex(v2 + 1, v3);
    v2 = v4;
  }
  while ( v5 );
  __dmb();
  v6 = *((_DWORD *)this + 1);
  if ( &pthread_create )
    __dmb();
    do
      v7 = __ldrex(v3);
    while ( __strex(v7 + 1, v3) );
  else
    ++*v3;
  v8 = (unsigned int *)(v1 + 8);
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
    ++*v8;
      v10 = __ldrex(v3);
    while ( __strex(v10 - 1, v3) );
    v10 = (*v3)--;
  if ( v10 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
    if ( &pthread_create )
      do
        v11 = __ldrex(v8);
      while ( __strex(v11 - 1, v8) );
    else
      v11 = (*v8)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
      v12 = __ldrex(v3);
    while ( __strex(v12 - 1, v3) );
    v12 = (*v3)--;
  if ( v12 == 1 )
        v13 = __ldrex(v8);
      while ( __strex(v13 - 1, v8) );
      v13 = (*v8)--;
    if ( v13 == 1 )
      v14 = __ldrex(v8);
    while ( __strex(v14 + 1, v8) );
  thread1 = 0;
      v15 = __ldrex(v8);
    while ( __strex(v15 + 1, v8) );
  v16 = operator new(0x14u);
  v16[1] = 0;
  v16[2] = 0;
  *v16 = &off_26DD1B0;
  v16[3] = v6;
  v16[4] = v1;
      v17 = __ldrex(v8);
    while ( __strex(v17 + 1, v8) );
  v18 = operator new(0x14u);
  v18[1] = 1;
  v18[2] = 1;
  *v18 = &off_26DD1C4;
  v18[4] = v16;
  v28 = v16;
  v29 = (int)v18;
  sub_119E334(&thread1, (int)&v28);
  v19 = v29;
  if ( v29 )
    v20 = (unsigned int *)(v29 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
      v24 = __ldrex(v8);
    while ( __strex(v24 - 1, v8) );
    v24 = (*v8)--;
  if ( v24 == 1 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 12))(v1);
      v25 = __ldrex(v8);
    while ( __strex(v25 - 1, v8) );
    v25 = (*v8)--;
  if ( v25 == 1 )
  sub_119E344(&thread1);
  if ( !pthread_equal(thread1, 0) )
    std::terminate();
      result = __ldrex(v8);
    while ( __strex(result - 1, v8) );
    result = (*v8)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return result;
}
