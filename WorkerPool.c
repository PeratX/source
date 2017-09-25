

WorkerPool *__fastcall WorkerPool::WorkerPool(int a1, Scheduler *a2, _DWORD *a3, int a4, char a5, _DWORD *a6)
{
  int v6; // r11@1
  int *v7; // r4@2
  unsigned int v8; // r8@2
  void *v9; // r9@2
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  __int64 v18; // kr00_8@35
  unsigned int v19; // r1@35
  const void **v20; // r0@37
  int v21; // r7@39
  const void **v22; // r0@39
  int *v23; // r5@39
  int v24; // r4@39
  void *v25; // r11@39
  BackgroundWorker *v26; // r9@39
  void *v27; // r0@39
  __int64 v28; // r0@40
  BackgroundWorker *v29; // r0@43
  char *v30; // r0@44
  void *v31; // r0@45
  void *v32; // r0@46
  int *v33; // r5@48
  int *v34; // r9@48
  char *v35; // r4@49
  int i; // r0@49
  int v37; // r11@51
  _BYTE *v38; // r10@53
  char *v39; // r6@53
  unsigned int v40; // r1@53
  unsigned int v41; // r0@55
  unsigned int v42; // r7@55
  signed int v43; // r2@62
  int v44; // r4@62
  __int64 j; // r4@70
  WorkerPool *v47; // [sp+4h] [bp-64h]@48
  Scheduler *v48; // [sp+Ch] [bp-5Ch]@1
  int v49; // [sp+10h] [bp-58h]@1
  int v50; // [sp+14h] [bp-54h]@2
  int v51; // [sp+18h] [bp-50h]@1
  int *v52; // [sp+1Ch] [bp-4Ch]@1
  void *ptr; // [sp+20h] [bp-48h]@48
  char *v54; // [sp+24h] [bp-44h]@48
  char *v55; // [sp+28h] [bp-40h]@48
  int v56; // [sp+2Ch] [bp-3Ch]@11
  unsigned int v57; // [sp+30h] [bp-38h]@2
  char *v58; // [sp+34h] [bp-34h]@7
  BackgroundWorker *v59; // [sp+38h] [bp-30h]@39
  int v60; // [sp+3Ch] [bp-2Ch]@3

  v6 = a1;
  v48 = a2;
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = a5;
  *(_DWORD *)(a1 + 8) = 0;
  v51 = a4;
  v49 = a1 + 8;
  *(_DWORD *)(v49 + 12) = 0;
  *(_DWORD *)(v49 + 4) = 0;
  *(_DWORD *)(v49 + 8) = 0;
  *(_DWORD *)(v49 + 16) = *a3;
  *a3 = &unk_28898CC;
  *(_DWORD *)(v49 + 28) = 1069128089;
  *(_DWORD *)(v49 + 24) = -1610612736;
  *(_DWORD *)(v49 + 32) = 0;
  *(_DWORD *)(v49 + 64) = 0;
  *(_DWORD *)(v49 + 68) = 0;
  *(_DWORD *)(v49 + 72) = 2;
  v52 = (int *)(a1 + 24);
  if ( a4 )
  {
    v50 = a1 + 48;
    v7 = (int *)&v57;
    v8 = 0;
    v9 = &unk_28898CC;
    do
    {
      sub_21E8AF4(v7, v52);
      sub_21E7408((const void **)v7, "(", 1u);
      Util::toString<unsigned int,(void *)0,(void *)0>((void **)&v56, v8);
      v18 = *(_QWORD *)(v57 - 12);
      v19 = *(_DWORD *)(v56 - 12) + v18;
      if ( v19 > HIDWORD(v18) && v19 <= *(_DWORD *)(v56 - 8) )
        v20 = sub_21E82D8((const void **)&v56, 0, v57, (_BYTE *)v18);
      else
        v20 = sub_21E72F0((const void **)v7, (const void **)&v56);
      v21 = v6;
      v58 = (char *)*v20;
      *v20 = v9;
      v22 = sub_21E7408((const void **)&v58, ")", 1u);
      v23 = v7;
      v24 = (int)*v22;
      v25 = v9;
      *v22 = v9;
      v26 = (BackgroundWorker *)operator new(0xA8u);
      v60 = v24;
      BackgroundWorker::BackgroundWorker((int)v26, &v60, a5, a6, v50);
      v7 = v23;
      v59 = v26;
      v27 = (void *)(v60 - 12);
      if ( (int *)(v60 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v60 - 4);
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
          j_j_j_j__ZdlPv_9(v27);
      }
      v9 = v25;
      v28 = *(_QWORD *)(v21 + 12);
      if ( (_DWORD)v28 == HIDWORD(v28) )
        std::vector<std::unique_ptr<BackgroundWorker,std::default_delete<BackgroundWorker>>,std::allocator<std::unique_ptr<BackgroundWorker,std::default_delete<BackgroundWorker>>>>::_M_emplace_back_aux<std::unique_ptr<BackgroundWorker,std::default_delete<BackgroundWorker>>>(
          (_QWORD *)v49,
          (int *)&v59);
        v6 = v21;
        if ( v59 )
          v29 = BackgroundWorker::~BackgroundWorker(v59);
          operator delete((void *)v29);
        HIDWORD(v28) = v59;
        v59 = 0;
        *(_DWORD *)v28 = HIDWORD(v28);
        *(_DWORD *)(v21 + 12) = v28 + 4;
      v59 = 0;
      v30 = v58 - 12;
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v58 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v31 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v56 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      v32 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v57 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      ++v8;
    }
    while ( v8 != v51 );
  }
  v47 = (WorkerPool *)v6;
  ptr = 0;
  v54 = 0;
  v55 = 0;
  v33 = *(int **)(v6 + 8);
  v34 = *(int **)(v6 + 12);
  if ( v33 != v34 )
    v35 = 0;
    for ( i = 0; ; i = (int)v55 )
      v37 = *v33;
      if ( v35 == (char *)i )
        v38 = ptr;
        v39 = 0;
        v40 = (v35 - (_BYTE *)ptr) >> 2;
        if ( !v40 )
          v40 = 1;
        v41 = v40 + ((v35 - (_BYTE *)ptr) >> 2);
        v42 = v40 + ((v35 - (_BYTE *)ptr) >> 2);
        if ( 0 != v41 >> 30 )
          v42 = 0x3FFFFFFF;
        if ( v41 < v40 )
        if ( v42 )
          if ( v42 >= 0x40000000 )
            sub_21E57F4();
          v39 = (char *)operator new(4 * v42);
          v35 = v54;
          v38 = ptr;
        v43 = v35 - v38;
        v44 = (int)&v39[v35 - v38];
        *(_DWORD *)&v39[v43] = v37;
        if ( 0 != v43 >> 2 )
          _aeabi_memmove4(v39, v38);
        v35 = (char *)(v44 + 4);
        if ( v38 )
          operator delete(v38);
        ptr = v39;
        v54 = v35;
        v55 = &v39[4 * v42];
        *(_DWORD *)v35 = v37;
        v35 = v54 + 4;
        v54 += 4;
      ++v33;
      if ( v34 == v33 )
        break;
    for ( j = *((_QWORD *)v47 + 1); HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 4 )
      BackgroundWorker::notifyCoworkers(*(_DWORD *)j, &ptr);
      BackgroundWorker::_start(*(BackgroundWorker **)j);
  if ( *(_DWORD *)v47 )
    Scheduler::unregisterPool(*(Scheduler **)v47, v47);
  *(_DWORD *)v47 = v48;
  Scheduler::registerPool(v48, v47);
  if ( ptr )
    operator delete(ptr);
  return v47;
}


WorkerPool::SuspendToken *__fastcall WorkerPool::SuspendToken::~SuspendToken(WorkerPool::SuspendToken *this)
{
  WorkerPool::SuspendToken *v1; // r4@1
  BackgroundWorker **v2; // r5@1 OVERLAPPED
  BackgroundWorker **v3; // r6@1 OVERLAPPED
  __int64 v4; // r0@3
  _BYTE *v5; // r3@5

  v1 = this;
  for ( *(_QWORD *)&v2 = *(_QWORD *)(*(_DWORD *)this + 8); v3 != v2; ++v2 )
    BackgroundWorker::unpause(*v2);
  v4 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    do
    {
      if ( *(_BYTE *)(v4 + 4) )
      {
        v5 = *(_BYTE **)v4;
        if ( *(_DWORD *)v4 )
        {
          __dmb();
          *v5 = 0;
          *(_BYTE *)(v4 + 4) = 0;
        }
      }
      LODWORD(v4) = v4 + 8;
    }
    while ( HIDWORD(v4) != (_DWORD)v4 );
    LODWORD(v4) = *((_DWORD *)v1 + 1);
  }
  if ( (_DWORD)v4 )
    operator delete((void *)v4);
  return v1;
}


Scheduler *__fastcall WorkerPool::_setScheduler(WorkerPool *this, Scheduler *a2)
{
  WorkerPool *v2; // r4@1
  Scheduler *v3; // r5@1
  Scheduler *result; // r0@1

  v2 = this;
  v3 = a2;
  result = *(Scheduler **)this;
  if ( result )
    result = (Scheduler *)Scheduler::unregisterPool(result, v2);
  *(_DWORD *)v2 = v3;
  if ( v3 )
    result = (Scheduler *)j_j_j__ZN9Scheduler12registerPoolER10WorkerPool(v3, v2);
  return result;
}


BackgroundTask *__fastcall WorkerPool::queue(int a1, _QWORD *a2)
{
  _QWORD *v3; // r8@1
  BackgroundWorker **v4; // r4@1
  BackgroundWorker **v5; // r6@1
  BackgroundWorker *v6; // r10@1
  BackgroundWorker *v8; // r7@2
  unsigned int v9; // r0@7
  int v15; // [sp+0h] [bp-50h]@13

  _R9 = a1;
  v3 = a2;
  v5 = (BackgroundWorker **)(*(_QWORD *)(a1 + 8) >> 32);
  v4 = (BackgroundWorker **)*(_QWORD *)(a1 + 8);
  v6 = 0;
  if ( v4 != v5 )
  {
    _R5 = -1;
    v8 = 0;
    do
    {
      if ( BackgroundWorker::isIdle(*v4) == 1 )
      {
        if ( !v8 )
          v8 = *v4;
      }
      else
        v9 = BackgroundWorker::getApproximateTaskCount(*v4);
        if ( v9 < _R5 )
        {
          v6 = *v4;
          _R5 = v9;
        }
      ++v4;
    }
    while ( v5 != v4 );
    if ( v8 )
      __asm
        VLDR            D0, =0.0500000007
        VLDR            D1, [R9,#0x20]
        VDIV.F64        D0, D0, D1
        VMOV            S2, R5
        VCVT.F64.U32    D1, S2
        VCMPE.F64       D1, D0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v6 = v8;
  }
  BackgroundTask::BackgroundTask((int)&v15, v3);
  BackgroundWorker::queue(v6, &v15);
  return BackgroundTask::~BackgroundTask((BackgroundTask *)&v15);
}


signed int __fastcall WorkerPool::size(WorkerPool *this)
{
  return (signed int)((*((_QWORD *)this + 1) >> 32) - *((_QWORD *)this + 1)) >> 2;
}


WorkerPool::SuspendToken *__fastcall WorkerPool::SuspendToken::SuspendToken(WorkerPool::SuspendToken *this, WorkerPool *a2)
{
  WorkerPool::SuspendToken *v2; // r11@1
  WorkerPool *v3; // r6@1
  char *v4; // r4@1
  BackgroundWorker **v5; // r5@1
  BackgroundWorker **v6; // r7@1
  BackgroundWorker **v7; // r5@3
  BackgroundWorker **v8; // r8@3
  signed int v9; // r10@4 OVERLAPPED
  int v10; // r9@4 OVERLAPPED
  int v11; // r0@5
  _DWORD *i; // r7@8
  _DWORD *v13; // r9@8
  unsigned __int8 *v14; // r0@9
  unsigned int v15; // r1@10
  __int64 v16; // r0@12
  _BYTE *v17; // r0@15
  _BYTE *v19; // [sp+4h] [bp-34h]@9
  char v20; // [sp+8h] [bp-30h]@9
  __int64 v21; // [sp+Ch] [bp-2Ch]@6

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 0;
  v4 = (char *)this + 4;
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 2) = 0;
  v6 = (BackgroundWorker **)(*((_QWORD *)a2 + 1) >> 32);
  v5 = (BackgroundWorker **)*((_QWORD *)a2 + 1);
  if ( v5 != v6 )
  {
    do
    {
      BackgroundWorker::requestPause(*v5);
      ++v5;
    }
    while ( v6 != v5 );
    v8 = (BackgroundWorker **)(*((_QWORD *)v3 + 1) >> 32);
    v7 = (BackgroundWorker **)*((_QWORD *)v3 + 1);
    if ( v7 != v8 )
      v9 = 100000000;
      v10 = 0;
      do
      {
        while ( 1 )
        {
          v11 = *((_DWORD *)*v7 + 18);
          __dmb();
          if ( v11 == 2 )
            break;
          BackgroundWorker::processNext(*v7);
          v21 = *(_QWORD *)&v10;
          nanosleep((const struct timespec *)&v21, 0);
        }
        ++v7;
      }
      while ( v7 != v8 );
      v13 = (_DWORD *)(*((_QWORD *)v3 + 1) >> 32);
      for ( i = (_DWORD *)*((_QWORD *)v3 + 1); i != v13; ++i )
        v14 = (unsigned __int8 *)(*i + 136);
        v19 = (_BYTE *)(*i + 136);
        v20 = 0;
        do
          do
            v15 = __ldrex(v14);
          while ( __strex(1u, v14) );
        while ( v15 );
        v20 = 1;
        v16 = *((_QWORD *)v2 + 1);
        if ( (_DWORD)v16 == HIDWORD(v16) )
          std::vector<std::unique_lock<SpinLock>,std::allocator<std::unique_lock<SpinLock>>>::_M_emplace_back_aux<std::unique_lock<SpinLock>>(
            (unsigned __int64 *)((char *)v2 + 4),
            (int)&v19);
          if ( v20 )
          {
            v17 = v19;
            if ( v19 )
            {
              __dmb();
              *v17 = 0;
              v20 = 0;
            }
          }
        else
          *(_DWORD *)v16 = v19;
          *(_BYTE *)(v16 + 4) = 1;
          v19 = 0;
          v20 = 0;
          *((_DWORD *)v2 + 2) = v16 + 8;
  }
  return v2;
}


int __fastcall WorkerPool::updatePerformanceStats(WorkerPool *this)
{
  __int64 v2; // r5@1
  unsigned __int64 *v4; // r6@1
  unsigned __int64 v9; // r0@1
  unsigned __int64 *v10; // r5@1
  unsigned __int64 v11; // r0@2
  unsigned __int64 v12; // r2@2
  unsigned __int64 v14; // kr00_8@4
  unsigned __int64 v15; // kr08_8@6
  int result; // r0@7
  __int64 v18; // [sp+0h] [bp-28h]@1

  _R4 = this;
  sub_21E034C(&v18);
  v2 = v18;
  _R0 = _aeabi_l2d(v18 - *((_DWORD *)_R4 + 18), (unsigned __int64)(v18 - *((_QWORD *)_R4 + 9)) >> 32);
  *((_QWORD *)_R4 + 9) = v2;
  v4 = (unsigned __int64 *)((char *)_R4 + 48);
  __asm { VMOV            D9, R0, R1 }
  v9 = __ldrexd((unsigned __int64 *)_R4 + 6);
  __asm { VLDR            D8, =1.0e-9 }
  v10 = (unsigned __int64 *)((char *)_R4 + 56);
  __clrex();
  __dmb();
  if ( v9 )
  {
    v11 = __ldrexd(v10);
    __clrex();
    __dmb();
    v12 = __ldrexd(v4);
    _R0 = _aeabi_ul2d(v11 / v12, v11 / v12 >> 32);
    __asm { VMOV            D0, R0, R1 }
    __asm
    {
      VMOV.F64        D2, #0.5
      VMUL.F64        D0, D0, D8
      VLDR            D1, [R4,#0x20]
      VSUB.F64        D1, D1, D0
      VMUL.F64        D1, D1, D2
      VADD.F64        D0, D1, D0
      VSTR            D0, [R4,#0x20]
    }
  }
  __asm { VMUL.F64        D0, D9, D8 }
  do
    v14 = __ldrexd(v4);
  while ( __strexd(0LL, v4) );
    v15 = __ldrexd(v10);
  while ( __strexd(0LL, v10) );
  _R0 = *((_DWORD *)_R4 + 16);
  __asm { VMOV            S2, R0 }
  result = 0;
  __asm { VCVT.F64.U32    D1, S2 }
  __asm
    VDIV.F64        D0, D1, D0
    VCVTR.U32.F64   S0, D0
    VSTR            S0, [R4,#0x28]
  *((_DWORD *)_R4 + 16) = 0;
  return result;
}


WorkerPool *__fastcall WorkerPool::~WorkerPool(WorkerPool *this)
{
  WorkerPool *v1; // r4@1
  BackgroundWorker **v2; // r5@1 OVERLAPPED
  BackgroundWorker **v3; // r6@1 OVERLAPPED
  int v4; // r1@5
  void *v5; // r0@5
  BackgroundWorker **v6; // r5@6 OVERLAPPED
  BackgroundWorker **v7; // r6@6 OVERLAPPED
  BackgroundWorker *v8; // r0@8
  unsigned int *v10; // r2@14
  signed int v11; // r1@16

  v1 = this;
  for ( *(_QWORD *)&v2 = *((_QWORD *)this + 1); v3 != v2; ++v2 )
    BackgroundWorker::stop(*v2);
  if ( *(_DWORD *)v1 )
    Scheduler::unregisterPool(*(Scheduler **)v1, v1);
  v4 = *((_DWORD *)v1 + 6);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v4 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  *(_QWORD *)&v6 = *((_QWORD *)v1 + 1);
  if ( v6 != v7 )
    do
      if ( *v6 )
      {
        v8 = BackgroundWorker::~BackgroundWorker(*v6);
        operator delete((void *)v8);
      }
      *v6 = 0;
      ++v6;
    while ( v7 != v6 );
    v6 = (BackgroundWorker **)*((_DWORD *)v1 + 2);
  if ( v6 )
    operator delete(v6);
  return v1;
}


signed int __fastcall WorkerPool::processNext(WorkerPool *this)
{
  WorkerPool *v1; // r4@1
  int v2; // r5@1
  signed int v3; // r1@1
  signed int result; // r0@1
  unsigned int v5; // r1@2
  unsigned int v6; // r6@2
  unsigned int v7; // r1@3

  v1 = this;
  v2 = *((_QWORD *)this + 1);
  v3 = (*((_QWORD *)this + 1) >> 32) - v2;
  result = 0;
  if ( v3 >> 2 )
  {
    v5 = v3 >> 2;
    v6 = 0;
    while ( 1 )
    {
      v7 = (*((_DWORD *)v1 + 5) + 1) % v5;
      *((_DWORD *)v1 + 5) = v7;
      if ( BackgroundWorker::processNext(*(BackgroundWorker **)(v2 + 4 * v7)) == 1 )
        break;
      v2 = *((_QWORD *)v1 + 1);
      ++v6;
      v5 = (signed int)((*((_QWORD *)v1 + 1) >> 32) - v2) >> 2;
      if ( v6 >= v5 )
        return 0;
    }
    result = 1;
  }
  return result;
}
