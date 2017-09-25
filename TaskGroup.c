

_DWORD *__fastcall TaskGroup::pause(TaskGroup *this)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)*((_DWORD *)this + 1);
  *result = 1;
  return result;
}


TaskGroup *__fastcall TaskGroup::~TaskGroup(TaskGroup *this)
{
  TaskGroup *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r5@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11
  unsigned int *v10; // r2@17
  signed int v11; // r1@19

  v1 = this;
  TaskGroup::flush(this);
  v2 = *((_DWORD *)v1 + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  if ( v4 )
    v5 = (unsigned int *)(v4 + 4);
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return v1;
}


int __fastcall TaskGroup::TaskGroup(int a1, int a2, _DWORD *a3)
{
  int v3; // r4@1
  __int64 v4; // r0@1
  int v5; // r5@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r0@4
  unsigned int *v8; // r6@8
  unsigned int v9; // r0@10
  int v10; // r5@15
  unsigned int *v11; // r1@16
  unsigned int v12; // r0@18
  unsigned int *v13; // r6@22
  unsigned int v14; // r0@24
  int v16; // [sp+4h] [bp-24h]@1
  char v17; // [sp+8h] [bp-20h]@1
  int v18; // [sp+Ch] [bp-1Ch]@1
  char v19; // [sp+14h] [bp-14h]@1

  v3 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = *a3;
  *a3 = &unk_28898CC;
  *(_BYTE *)(a1 + 16) = 0;
  v16 = 0;
  std::__shared_ptr<TaskGroupState,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<TaskGroupState>,TaskGroupState>(
    (int)&v17,
    (int)&v19,
    &v16);
  v4 = *(_QWORD *)&v17;
  *(_DWORD *)&v17 = 0;
  v18 = 0;
  *(_DWORD *)(v3 + 4) = v4;
  v5 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = HIDWORD(v4);
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  v10 = v18;
  if ( v18 )
    v11 = (unsigned int *)(v18 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  return v3;
}


signed int __fastcall TaskGroup::_isOwner(TaskGroup *this)
{
  TaskGroup *v1; // r4@1
  signed int result; // r0@2
  pthread_t v3; // r0@3
  pthread_t v4; // r4@7
  int *v5; // r0@7

  v1 = this;
  if ( *((_BYTE *)this + 16) )
  {
    result = 1;
  }
  else
    v3 = pthread_self();
    if ( pthread_equal(v3, *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v1 + 8) + 16)) )
    {
      result = 1;
    }
    else if ( ON_SERVER_THREAD() == 1 )
      v4 = *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v1 + 8) + 16);
      v5 = GET_MAIN_THREAD_ID();
      result = pthread_equal(v4, *v5) != 0;
    else
      result = 0;
  return result;
}


WorkerPool::SuspendToken *__fastcall TaskGroup::flush(TaskGroup *this)
{
  TaskGroup *v1; // r5@1
  BackgroundWorker **i; // r4@1
  BackgroundWorker **v3; // r6@1
  __int64 v4; // r0@3
  int v5; // r4@3
  unsigned int *v6; // r1@4
  unsigned int v7; // r0@6
  unsigned int *v8; // r5@10
  unsigned int v9; // r0@12
  int v10; // r4@17
  unsigned int *v11; // r1@18
  unsigned int v12; // r0@20
  unsigned int *v13; // r5@24
  unsigned int v14; // r0@26
  int v16; // [sp+0h] [bp-30h]@3
  int v17; // [sp+4h] [bp-2Ch]@3
  char v18; // [sp+8h] [bp-28h]@1
  int v19; // [sp+18h] [bp-18h]@1
  char v20; // [sp+1Ch] [bp-14h]@3

  v1 = this;
  v19 = **((_DWORD **)this + 1);
  WorkerPool::suspendPool((WorkerPool *)&v18, *(WorkerPool **)this);
  **((_DWORD **)v1 + 1) = 2;
  v3 = (BackgroundWorker **)(*(_QWORD *)(*(_DWORD *)v1 + 8) >> 32);
  for ( i = (BackgroundWorker **)*(_QWORD *)(*(_DWORD *)v1 + 8); v3 != i; ++i )
    BackgroundWorker::_onTaskGroupFlushed(*i);
  std::__shared_ptr<TaskGroupState,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<TaskGroupState>,TaskGroupState&>(
    (int)&v16,
    (int)&v20,
    &v19);
  v4 = *(_QWORD *)&v16;
  v16 = 0;
  v17 = 0;
  *((_DWORD *)v1 + 1) = v4;
  v5 = *((_DWORD *)v1 + 2);
  *((_DWORD *)v1 + 2) = HIDWORD(v4);
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  v10 = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  return WorkerPool::SuspendToken::~SuspendToken((WorkerPool::SuspendToken *)&v18);
}


BackgroundTask *__fastcall TaskGroup::queue(int a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  int v5; // r7@1
  __int64 v6; // kr00_8@1
  unsigned int v7; // r5@1
  int v8; // r6@1
  int v9; // r0@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@4
  void (__fastcall *v12)(char *, int, signed int); // r3@7
  void (__fastcall *v13)(char *, int, signed int); // r3@9
  BackgroundTask *result; // r0@11
  int v15; // r4@15
  unsigned int *v16; // r1@16
  unsigned int *v17; // r5@22
  char v18; // [sp+8h] [bp-70h]@10
  int (*v19)(void); // [sp+10h] [bp-68h]@9
  int v20; // [sp+14h] [bp-64h]@10
  char v21; // [sp+18h] [bp-60h]@8
  int (*v22)(void); // [sp+20h] [bp-58h]@7
  int v23; // [sp+24h] [bp-54h]@8
  int v24; // [sp+28h] [bp-50h]@1
  int v25; // [sp+2Ch] [bp-4Ch]@1
  char v26; // [sp+30h] [bp-48h]@11

  v5 = a2;
  v6 = *(_QWORD *)a1;
  v7 = a4;
  v8 = a3;
  v24 = *(_QWORD *)a1 >> 32;
  v9 = *(_DWORD *)(a1 + 8);
  v25 = v9;
  if ( v9 )
  {
    v10 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  }
  v22 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
  if ( v12 )
    v12(&v21, v5, 2);
    v23 = *(_DWORD *)(v5 + 12);
    v22 = *(int (**)(void))(v5 + 8);
  v19 = 0;
  v13 = *(void (__fastcall **)(char *, int, signed int))(v8 + 8);
  if ( v13 )
    v13(&v18, v8, 2);
    v20 = *(_DWORD *)(v8 + 12);
    v19 = *(int (**)(void))(v8 + 8);
  BackgroundTask::BackgroundTask((int)&v26, (int)&v24, (int)&v21, (int)&v18, __PAIR__(a5, v7));
  WorkerPool::queue(v6, &v26);
  result = BackgroundTask::~BackgroundTask((BackgroundTask *)&v26);
  if ( v19 )
    result = (BackgroundTask *)v19();
  if ( v22 )
    result = (BackgroundTask *)v22();
  v15 = v25;
  if ( v25 )
    v16 = (unsigned int *)(v25 + 4);
        result = (BackgroundTask *)__ldrex(v16);
      while ( __strex((unsigned int)result - 1, v16) );
      result = (BackgroundTask *)(*v16)--;
    if ( result == (BackgroundTask *)1 )
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (BackgroundTask *)__ldrex(v17);
        while ( __strex((unsigned int)result - 1, v17) );
      }
      else
        result = (BackgroundTask *)(*v17)--;
      if ( result == (BackgroundTask *)1 )
        result = (BackgroundTask *)(*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  return result;
}


_DWORD *__fastcall TaskGroup::sync_DEPRECATED_ASK_TOMMO(TaskGroup *this)
{
  TaskGroup *v1; // r4@1
  BackgroundWorker **v2; // r5@1 OVERLAPPED
  BackgroundWorker **v3; // r6@1 OVERLAPPED
  BackgroundWorker *v4; // t1@2
  int v5; // r0@3
  _DWORD *result; // r0@6

  v1 = this;
  **((_DWORD **)this + 1) = 3;
  *(_QWORD *)&v2 = *(_QWORD *)(*(_DWORD *)this + 8);
  while ( v3 != v2 )
  {
    v4 = *v2;
    ++v2;
    BackgroundWorker::_resortPriorityQueue(v4);
  }
  while ( 1 )
    v5 = *((_DWORD *)v1 + 2);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 4) == 1 )
        break;
    }
    WorkerPool::processNext(*(WorkerPool **)v1);
    sched_yield();
  result = (_DWORD *)*((_DWORD *)v1 + 1);
  *result = 0;
  return result;
}


int __fastcall TaskGroup::isEmpty(TaskGroup *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
  {
    result = *(_DWORD *)(v1 + 4);
    if ( result != 1 )
      result = 0;
  }
  else
    result = 0;
  return result;
}


BackgroundTask *__fastcall TaskGroup::resume(TaskGroup *this)
{
  BackgroundTask *result; // r0@1
  __int64 i; // r4@1
  BackgroundWorker *v3; // t1@2

  **((_DWORD **)this + 1) = 0;
  result = *(BackgroundTask **)this;
  for ( i = *((_QWORD *)result + 1); HIDWORD(i) != (_DWORD)i; result = BackgroundWorker::_onTaskGroupResumed(v3) )
  {
    v3 = *(BackgroundWorker **)i;
    LODWORD(i) = i + 4;
  }
  return result;
}
