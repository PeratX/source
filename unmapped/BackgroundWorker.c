

int __fastcall BackgroundWorker::getApproximateTaskCount(BackgroundWorker *this)
{
  int v1; // r1@1

  v1 = *((_DWORD *)this + 29);
  __dmb();
  return v1
       + -1431655765 * ((signed int)((*(_QWORD *)((char *)this + 124) >> 32) - *(_QWORD *)((char *)this + 124)) >> 4);
}


BackgroundTask *__fastcall BackgroundWorker::_onTaskGroupResumed(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  BackgroundTask *result; // r0@1
  _DWORD *v5; // [sp+0h] [bp-48h]@1
  __int64 v6; // [sp+8h] [bp-40h]@1
  char v7; // [sp+10h] [bp-38h]@1

  v1 = this;
  v2 = operator new(4u);
  LODWORD(v3) = sub_15600F4;
  *v2 = v1;
  HIDWORD(v3) = sub_155FF94;
  v5 = v2;
  v6 = v3;
  BackgroundTask::makeInternal((int)&v7, (int)&v5);
  BackgroundWorker::queue(v1, &v7);
  result = BackgroundTask::~BackgroundTask((BackgroundTask *)&v7);
  if ( (_DWORD)v6 )
    result = (BackgroundTask *)((int (*)(void))v6)();
  return result;
}


int __fastcall BackgroundWorker::notifyCoworkers(int result, _QWORD *a2)
{
  int v2; // r4@1
  int *v3; // r6@1 OVERLAPPED
  int *v4; // r7@1 OVERLAPPED
  int *v5; // r8@1 OVERLAPPED
  _BYTE *v6; // r10@5
  char *v7; // r5@5 OVERLAPPED
  unsigned int v8; // r2@5
  unsigned int v9; // r1@7
  unsigned int v10; // r11@7
  signed int v11; // r2@14
  int v12; // r6@14

  v2 = result;
  v3 = *(int **)(result + 140);
  *(_DWORD *)(result + 144) = v3;
  for ( *(_QWORD *)&v4 = *a2; v5 != v4; ++v4 )
  {
    result = *v4;
    if ( *v4 != v2 )
    {
      if ( v3 == *(int **)(v2 + 148) )
      {
        v6 = *(_BYTE **)(v2 + 140);
        v7 = 0;
        v8 = ((char *)v3 - v6) >> 2;
        if ( !v8 )
          v8 = 1;
        v9 = v8 + (((char *)v3 - v6) >> 2);
        v10 = v8 + (((char *)v3 - v6) >> 2);
        if ( 0 != v9 >> 30 )
          v10 = 0x3FFFFFFF;
        if ( v9 < v8 )
        if ( v10 )
        {
          if ( v10 >= 0x40000000 )
            sub_21E57F4();
          v7 = (char *)operator new(4 * v10);
          v3 = (int *)(*(_QWORD *)(v2 + 140) >> 32);
          v6 = (_BYTE *)*(_QWORD *)(v2 + 140);
          result = *v4;
        }
        v11 = (char *)v3 - v6;
        v12 = (int)&v7[(char *)v3 - v6];
        *(_DWORD *)&v7[v11] = result;
        if ( 0 != v11 >> 2 )
          _aeabi_memmove4(v7, v6);
        v3 = (int *)(v12 + 4);
        if ( v6 )
          operator delete(v6);
        result = (int)&v7[4 * v10];
        *(_QWORD *)(v2 + 140) = *(_QWORD *)(&v3 - 1);
        *(_DWORD *)(v2 + 148) = result;
      }
      else
        *v3 = result;
        result = *(_DWORD *)(v2 + 144);
        v3 = (int *)(result + 4);
        *(_DWORD *)(v2 + 144) = result + 4;
    }
  }
  return result;
}


int __fastcall BackgroundWorker::isIdle(BackgroundWorker *this)
{
  char v1; // r0@1

  v1 = *((_BYTE *)this + 80);
  __dmb();
  return v1 & 1;
}


BackgroundTask *__fastcall BackgroundWorker::_resortPriorityQueue(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  BackgroundTask *result; // r0@1
  _DWORD *v5; // [sp+0h] [bp-48h]@1
  __int64 v6; // [sp+8h] [bp-40h]@1
  char v7; // [sp+10h] [bp-38h]@1

  v1 = this;
  v2 = operator new(4u);
  LODWORD(v3) = sub_156023E;
  *v2 = v1;
  HIDWORD(v3) = sub_15601F8;
  v5 = v2;
  v6 = v3;
  BackgroundTask::makeInternal((int)&v7, (int)&v5);
  BackgroundWorker::queue(v1, &v7);
  result = BackgroundTask::~BackgroundTask((BackgroundTask *)&v7);
  if ( (_DWORD)v6 )
    result = (BackgroundTask *)((int (*)(void))v6)();
  return result;
}


BackgroundTask *__fastcall BackgroundWorker::_fetchAllAvailableTasks(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  BackgroundTask *result; // r0@1
  unsigned int *v3; // r7@2
  __int64 v4; // r0@5
  int v5; // r1@6
  unsigned int v6; // r0@9
  char v7; // [sp+4h] [bp-44h]@2

  v1 = this;
  result = (BackgroundTask *)*(_BYTE *)this;
  if ( result )
  {
    BackgroundTask::BackgroundTask((BackgroundTask *)&v7);
    v3 = (unsigned int *)((char *)v1 + 116);
    while ( SPSCQueue<BackgroundTask,512u>::try_dequeue<BackgroundTask>(*((int ***)v1 + 24), &v7) == 1
         && BackgroundTask::operator bool((int)&v7) == 1 )
    {
      v4 = *((_QWORD *)v1 + 16);
      if ( (_DWORD)v4 == HIDWORD(v4) )
      {
        std::vector<BackgroundTask,std::allocator<BackgroundTask>>::_M_emplace_back_aux<BackgroundTask>(
          (unsigned __int64 *)((char *)v1 + 124),
          &v7);
        v5 = *((_DWORD *)v1 + 32);
      }
      else
        BackgroundTask::BackgroundTask(v4, &v7);
        v5 = *((_DWORD *)v1 + 32) + 48;
        *((_DWORD *)v1 + 32) = v5;
      std::push_heap<__gnu_cxx::__normal_iterator<BackgroundTask *,std::vector<BackgroundTask,std::allocator<BackgroundTask>>>,std::less<BackgroundTask>>(
        *((_DWORD *)v1 + 31),
        v5);
      __dmb();
      do
        v6 = __ldrex(v3);
      while ( __strex(v6 - 1, v3) );
    }
    result = BackgroundTask::~BackgroundTask((BackgroundTask *)&v7);
  }
  return result;
}


signed int __fastcall BackgroundWorker::_workerThread(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  pthread_t v2; // r0@1
  signed int result; // r0@2
  pthread_t v4; // r4@5
  int *v5; // r0@5

  v1 = this;
  v2 = pthread_self();
  if ( pthread_equal(v2, *((_DWORD *)v1 + 5)) )
  {
    result = 1;
  }
  else if ( ON_SERVER_THREAD() == 1 )
    v4 = *((_DWORD *)v1 + 5);
    v5 = GET_MAIN_THREAD_ID();
    result = pthread_equal(v4, *v5) != 0;
  else
    result = 0;
  return result;
}


char *__fastcall BackgroundWorker::getName(BackgroundWorker *this)
{
  return (char *)this + 8;
}


int __fastcall BackgroundWorker::getWorkerForThread(pthread_t a1)
{
  int v1; // r0@2
  unsigned int v2; // r4@3
  int v3; // r6@3
  int v4; // r7@4
  unsigned int v5; // r6@7
  unsigned int v6; // r1@7
  int v7; // r4@8
  pthread_t thread1; // [sp+4h] [bp-1Ch]@1

  thread1 = a1;
  if ( &pthread_create )
  {
    v1 = pthread_mutex_lock((pthread_mutex_t *)&BackgroundWorker::gLocalWorkerMapMutex);
    if ( v1 )
      sub_21E5E14(v1);
  }
  v2 = sub_21B417C((int *)&thread1, 4u, -955291385) % dword_27EBFA8;
  v3 = *(_DWORD *)(BackgroundWorker::gLocalWorkerMap + 4 * dword_27EBFA8);
  if ( v3 )
    v4 = *(_DWORD *)(BackgroundWorker::gLocalWorkerMap + 4 * dword_27EBFA8);
    while ( 1 )
    {
      v4 = *(_DWORD *)v4;
      if ( pthread_equal(thread1, *(_DWORD *)(v4 + 4)) )
        break;
      if ( !*(_DWORD *)v4 )
      {
        v7 = 0;
        goto LABEL_17;
      }
      v5 = dword_27EBFA8;
      v6 = sub_21B417C((int *)(*(_DWORD *)v4 + 4), 4u, -955291385) % v5;
      v3 = v4;
      if ( v6 != v2 )
    }
    if ( v3 )
      if ( *(_DWORD *)v3 )
        v7 = *(_DWORD *)(*(_DWORD *)v3 + 8);
      else
    else
      v7 = 0;
  else
    v7 = 0;
LABEL_17:
    pthread_mutex_unlock((pthread_mutex_t *)&BackgroundWorker::gLocalWorkerMapMutex);
  return v7;
}


int (**__fastcall BackgroundWorker::queue(BackgroundWorker *this, _QWORD *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  BackgroundWorker *v2; // r5@1
  pthread_mutex_t *v3; // r8@1
  _QWORD *v4; // r6@1
  int v5; // r0@2
  unsigned __int8 *v6; // r4@4
  unsigned int v7; // r1@5
  __int64 v8; // r0@7
  int v9; // r1@8
  unsigned int *v10; // r0@9
  unsigned int v11; // r1@10
  pthread_mutex_t *v12; // r0@14
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@16

  v2 = this;
  v3 = (pthread_mutex_t *)((char *)this + 164);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  if ( BackgroundWorker::_workerThread(v2) == 1 )
    v6 = (unsigned __int8 *)v2 + 136;
    do
    {
      do
        v7 = __ldrex(v6);
      while ( __strex(1u, v6) );
      __dmb();
    }
    while ( v7 );
    v8 = *((_QWORD *)v2 + 16);
    if ( (_DWORD)v8 == HIDWORD(v8) )
      std::vector<BackgroundTask,std::allocator<BackgroundTask>>::_M_emplace_back_aux<BackgroundTask>(
        (unsigned __int64 *)((char *)v2 + 124),
        v4);
      v9 = *((_DWORD *)v2 + 32);
    else
      BackgroundTask::BackgroundTask(v8, v4);
      v9 = *((_DWORD *)v2 + 32) + 48;
      *((_DWORD *)v2 + 32) = v9;
    std::push_heap<__gnu_cxx::__normal_iterator<BackgroundTask *,std::vector<BackgroundTask,std::allocator<BackgroundTask>>>,std::less<BackgroundTask>>(
      *((_DWORD *)v2 + 31),
      v9);
    __dmb();
    *v6 = 0;
  else
    SPSCQueue<BackgroundTask,512u>::inner_enqueue<(SPSCQueue<BackgroundTask,512u>::AllocationMode)0,BackgroundTask>(
      *((_DWORD *)v2 + 24),
      v4);
    v10 = (unsigned int *)((char *)v2 + 116);
      v11 = __ldrex(v10);
    while ( __strex(v11 + 1, v10) );
  v12 = (pthread_mutex_t *)*((_DWORD *)v2 + 19);
  if ( v12 )
    Semaphore::notify(v12);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v3);
  return result;
}


signed int __fastcall BackgroundWorker::processNext(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r5@1
  int v2; // r0@1
  BackgroundWorker *v3; // r4@1
  int v4; // r2@1
  signed int v5; // r1@2
  _DWORD **v6; // r2@2
  int v7; // r1@2
  _DWORD *v8; // t1@4
  int v9; // r5@5
  int v10; // r0@5
  signed int result; // r0@6

  v1 = this;
  BackgroundWorker::_fetchAllAvailableCallbacks(this);
  v3 = (BackgroundWorker *)((char *)v1 + 152);
  v2 = *((_DWORD *)v1 + 38);
  v4 = *((_DWORD *)v1 + 39);
  if ( v2 != v4 )
  {
    v5 = v4 - v2;
    v6 = (_DWORD **)(v4 - 24);
    v7 = -1431655765 * (v5 >> 3);
    while ( v7 )
    {
      v8 = *v6;
      v6 -= 6;
      --v7;
      if ( *v8 != 1 )
      {
        v9 = 3 * v7;
        v10 = v2 + 24 * v7;
        if ( !*(_DWORD *)(v10 + 16) )
          sub_21E5F48();
        (*(void (__fastcall **)(int))(v10 + 20))(v10 + 8);
        std::vector<BackgroundTask::Callback,std::allocator<BackgroundTask::Callback>>::_M_erase(
          (int)v3,
          *(_DWORD *)v3 + 8 * v9);
        return 1;
      }
    }
  }
  if ( *(_BYTE *)v1 )
    result = 0;
  else
    result = BackgroundWorker::_processNextTask(v1);
  return result;
}


pthread_t *__fastcall BackgroundWorker::setOSPriority(int a1, _DWORD *a2)
{
  int v3; // [sp+4h] [bp-Ch]@1

  *(_DWORD *)(a1 + 4) = *a2;
  v3 = *(_DWORD *)(a1 + 12);
  return ThreadUtil::setThreadPriority((pthread_t *)&v3, (pthread_t **)(a1 + 4));
}


int __fastcall BackgroundWorker::_getApproximateCallbackSize(BackgroundWorker *this)
{
  int *v1; // r0@1
  int result; // r0@2
  int v3; // r12@3
  int v4; // r2@3
  int v5; // lr@4
  int v6; // r1@4

  v1 = (int *)*((_DWORD *)this + 25);
  if ( v1 )
  {
    v3 = *v1;
    result = 0;
    v4 = v3;
    do
    {
      __dmb();
      v5 = *(_DWORD *)(v4 + 136);
      v6 = *(_DWORD *)(v4 + 64) - *(_DWORD *)v4;
      v4 = *(_DWORD *)(v4 + 128);
      result += v6 & v5;
    }
    while ( v4 != v3 );
  }
  else
  return result;
}


_BOOL4 __fastcall BackgroundWorker::_tryPop(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  unsigned __int8 *v2; // r5@1
  unsigned int v3; // r1@2
  __int64 i; // r0@4
  BackgroundTask *v5; // r0@7
  int v6; // r0@7
  bool v7; // zf@8
  __int64 v8; // r0@13
  int v9; // r0@19
  unsigned int *v10; // r0@19
  unsigned int v11; // r1@20
  _BOOL4 result; // r0@12
  char v13; // [sp+4h] [bp-7Ch]@16
  char v14; // [sp+34h] [bp-4Ch]@7

  v1 = this;
  v2 = (unsigned __int8 *)this + 136;
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  BackgroundWorker::_fetchAllAvailableTasks(this);
  for ( i = *(_QWORD *)((char *)v1 + 124); (_DWORD)i != HIDWORD(i); i = *(_QWORD *)((char *)v1 + 124) )
    if ( HIDWORD(i) - (signed int)i >= 49 )
    {
      std::__pop_heap<__gnu_cxx::__normal_iterator<BackgroundTask *,std::vector<BackgroundTask,std::allocator<BackgroundTask>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::less<BackgroundTask>>>(
        (_QWORD *)i,
        HIDWORD(i) - 48,
        (_QWORD *)(HIDWORD(i) - 48));
      HIDWORD(i) = *((_DWORD *)v1 + 32);
    }
    BackgroundTask::BackgroundTask((int)&v14, (_QWORD *)(HIDWORD(i) - 48));
    v5 = (BackgroundTask *)(*((_DWORD *)v1 + 32) - 48);
    *((_DWORD *)v1 + 32) = v5;
    BackgroundTask::~BackgroundTask(v5);
    BackgroundTask::operator=((_QWORD *)v1 + 3, &v14);
    BackgroundTask::~BackgroundTask((BackgroundTask *)&v14);
    v6 = **((_DWORD **)v1 + 6);
    if ( v6 == 1 )
      v8 = *(_QWORD *)((char *)v1 + 108);
      if ( (_DWORD)v8 == HIDWORD(v8) )
      {
        std::vector<BackgroundTask,std::allocator<BackgroundTask>>::_M_emplace_back_aux<BackgroundTask>(
          (unsigned __int64 *)v1 + 13,
          (_QWORD *)v1 + 3);
      }
      else
        BackgroundTask::BackgroundTask(v8, (_QWORD *)v1 + 3);
        *((_DWORD *)v1 + 27) += 48;
    else
      v7 = v6 == 0;
      if ( v6 )
        v7 = v6 == 3;
      if ( v7 )
        result = 0;
        __dmb();
        *v2 = 0;
        return result;
    BackgroundTask::BackgroundTask((BackgroundTask *)&v13);
    BackgroundTask::operator=((_QWORD *)v1 + 3, &v13);
    BackgroundTask::~BackgroundTask((BackgroundTask *)&v13);
  __dmb();
  *((_BYTE *)v1 + 136) = 0;
  result = *(_BYTE *)v1;
  if ( *(_BYTE *)v1 )
    BackgroundWorker::_tryStealWork(v1, (BackgroundWorker *)((char *)v1 + 24));
    result = BackgroundTask::operator bool((int)v1 + 24);
    if ( !result )
      __dmb();
      *((_BYTE *)v1 + 80) = 1;
      Semaphore::wait(*((pthread_mutex_t **)v1 + 19));
      v9 = *((_DWORD *)v1 + 30);
      v10 = (unsigned int *)(v9 + 16);
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      result = 0;
      *((_BYTE *)v1 + 80) = 0;
  return result;
}


BackgroundWorker *__fastcall BackgroundWorker::~BackgroundWorker(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r10@1
  int v2; // r0@1
  int v3; // r5@6
  int v4; // r7@6
  void (*v5)(void); // r3@7
  int v6; // r4@9
  unsigned int *v7; // r1@10
  unsigned int v8; // r0@12
  unsigned int *v9; // r6@16
  unsigned int v10; // r0@18
  void *v11; // r0@27
  BackgroundTask *v12; // r0@29
  BackgroundTask *v13; // r4@29
  BackgroundTask *v14; // r0@34
  BackgroundTask *v15; // r4@34
  int *v16; // r0@39
  void *v17; // r0@40
  void *v18; // r9@41
  int v19; // r11@42
  int v20; // r7@42
  int v21; // r4@43
  int v22; // r6@43
  int v23; // r5@43
  int v24; // r5@48
  int v25; // r1@51
  void *v26; // r0@51
  unsigned int *v28; // r2@53
  signed int v29; // r1@55

  v1 = this;
  v2 = *((_DWORD *)this + 18);
  __dmb();
  if ( v2 )
  {
    if ( *(_BYTE *)v1 )
    {
      BackgroundWorker::_queueStateChange((int)v1, 1, 0);
      if ( !pthread_equal(*((_DWORD *)v1 + 3), 0) )
        sub_21E9834((pthread_t *)v1 + 3);
    }
    BackgroundWorker::_resetData(v1);
  }
  v4 = *((_QWORD *)v1 + 19) >> 32;
  v3 = *((_QWORD *)v1 + 19);
  if ( v3 != v4 )
    do
      v5 = *(void (**)(void))(v3 + 16);
      if ( v5 )
        v5();
      v6 = *(_DWORD *)(v3 + 4);
      if ( v6 )
      {
        v7 = (unsigned int *)(v6 + 4);
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
          v9 = (unsigned int *)(v6 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
      }
      v3 += 24;
    while ( v3 != v4 );
    v3 = *((_DWORD *)v1 + 38);
  if ( v3 )
    operator delete((void *)v3);
  v11 = (void *)*((_DWORD *)v1 + 35);
  if ( v11 )
    operator delete(v11);
  v13 = (BackgroundTask *)(*(_QWORD *)((char *)v1 + 124) >> 32);
  v12 = (BackgroundTask *)*(_QWORD *)((char *)v1 + 124);
  if ( v12 != v13 )
      v12 = (BackgroundTask *)((char *)BackgroundTask::~BackgroundTask(v12) + 48);
    while ( v13 != v12 );
    v12 = (BackgroundTask *)*((_DWORD *)v1 + 31);
  if ( v12 )
    operator delete((void *)v12);
  v15 = (BackgroundTask *)(*((_QWORD *)v1 + 13) >> 32);
  v14 = (BackgroundTask *)*((_QWORD *)v1 + 13);
  if ( v14 != v15 )
      v14 = (BackgroundTask *)((char *)BackgroundTask::~BackgroundTask(v14) + 48);
    while ( v15 != v14 );
    v14 = (BackgroundTask *)*((_DWORD *)v1 + 26);
  if ( v14 )
    operator delete((void *)v14);
  v16 = (int *)*((_DWORD *)v1 + 25);
  if ( v16 )
    SPSCQueue<BackgroundTask::Callback,512u>::~SPSCQueue(v16);
    operator delete(v17);
  *((_DWORD *)v1 + 25) = 0;
  v18 = (void *)*((_DWORD *)v1 + 24);
  if ( v18 )
    __dmb();
    v19 = *(_DWORD *)v18;
    v20 = *(_DWORD *)v18;
      v21 = *(_DWORD *)(v20 + 128);
      v22 = *(_DWORD *)v20;
      v23 = *(_DWORD *)(v20 + 64);
      while ( v22 != v23 )
        BackgroundTask::~BackgroundTask((BackgroundTask *)(*(_DWORD *)(v20 + 132) + 48 * v22));
        v22 = *(_DWORD *)(v20 + 136) & (v22 + 1);
      free(*(void **)(v20 + 140));
      v20 = v21;
    while ( v21 != v19 );
    operator delete(v18);
  *((_DWORD *)v1 + 24) = 0;
  v24 = *((_DWORD *)v1 + 19);
  if ( v24 )
    sub_21E03AC((pthread_cond_t *)(v24 + 4));
    operator delete((void *)v24);
  *((_DWORD *)v1 + 19) = 0;
  BackgroundTask::~BackgroundTask((BackgroundWorker *)((char *)v1 + 24));
  if ( !pthread_equal(*((_DWORD *)v1 + 3), 0) )
    std::terminate();
  v25 = *((_DWORD *)v1 + 2);
  v26 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  return v1;
}


signed int __fastcall BackgroundWorker::_sleepTimeoutElapsed(BackgroundWorker *this)
{
  return 1;
}


int __fastcall BackgroundWorker::_processCallbacks(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  char v2; // r0@1
  int v3; // r1@1 OVERLAPPED
  int v4; // r2@1 OVERLAPPED
  signed int v5; // r3@2
  _DWORD **v6; // r2@2
  int v7; // r3@2
  _DWORD *v8; // t1@4
  int v9; // r7@5
  int v10; // r0@5

  v1 = this;
  BackgroundWorker::_fetchAllAvailableCallbacks(this);
  v2 = 0;
  v3 = *((_DWORD *)v1 + 38);
  v4 = *((_DWORD *)v1 + 39);
  if ( v3 != v4 )
  {
LABEL_2:
    v5 = v4 - v3;
    v6 = (_DWORD **)(v4 - 24);
    v7 = -1431655765 * (v5 >> 3);
    while ( v7 )
    {
      v8 = *v6;
      v6 -= 6;
      --v7;
      if ( *v8 != 1 )
      {
        v9 = 3 * v7;
        v10 = v3 + 24 * v7;
        if ( !*(_DWORD *)(v10 + 16) )
          sub_21E5F48();
        (*(void (__fastcall **)(int))(v10 + 20))(v10 + 8);
        std::vector<BackgroundTask::Callback,std::allocator<BackgroundTask::Callback>>::_M_erase(
          (int)v1 + 152,
          *((_DWORD *)v1 + 38) + 8 * v9);
        BackgroundWorker::_fetchAllAvailableCallbacks(v1);
        *(_QWORD *)&v3 = *((_QWORD *)v1 + 19);
        v2 = 1;
        if ( v3 != v4 )
          goto LABEL_2;
        return v2 & 1;
      }
    }
  }
  return v2 & 1;
}


void __fastcall BackgroundWorker::_onTaskGroupFlushed(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r9@2
  int v4; // r6@2
  int v5; // r7@2
  int v6; // r5@2
  BackgroundTask *v7; // r0@5
  int v8; // r0@15
  BackgroundTask *v9; // r6@15
  int v10; // r1@15
  int v11; // r2@16
  bool v12; // zf@17
  int v13; // r1@17
  int v14; // r3@20
  bool v15; // zf@20
  int v16; // r1@24
  int v17; // r7@38
  BackgroundTask *v18; // r5@38
  _DWORD *v19; // r0@40
  _QWORD *v20; // r6@40
  BackgroundTask *v21; // r0@46
  int v22; // r0@49
  int v23; // r3@49
  int v24; // r6@49
  int v25; // r1@49
  int v26; // r1@50
  int v27; // r8@51
  int v28; // r2@51
  bool v29; // zf@51
  int v30; // r2@54
  bool v31; // zf@54
  int v32; // r1@58
  int v33; // r7@71
  __int64 *v34; // r10@72
  int v35; // r11@72
  int v36; // r3@74
  _DWORD *v37; // r1@76
  int v38; // r2@77
  int v39; // r9@77
  unsigned int *v40; // r1@78
  unsigned int v41; // r0@80
  unsigned int *v42; // r10@84
  unsigned int v43; // r0@86
  __int64 v44; // r0@91
  int v45; // r12@91
  int v46; // r5@91
  void (__fastcall *v47)(__int64 *, __int64 *, signed int); // r3@91
  BackgroundTask *v48; // r5@93
  BackgroundTask *v49; // r0@96
  int v50; // [sp+8h] [bp-78h]@77
  _DWORD *v51; // [sp+Ch] [bp-74h]@5
  BackgroundTask *v52; // [sp+3Ch] [bp-44h]@1
  int v53; // [sp+40h] [bp-40h]@1
  int v54; // [sp+44h] [bp-3Ch]@1
  __int64 v55; // [sp+48h] [bp-38h]@72
  void (__fastcall *v56)(__int64 *, __int64 *, signed int); // [sp+50h] [bp-30h]@91
  int v57; // [sp+54h] [bp-2Ch]@91

  v1 = this;
  BackgroundWorker::_fetchAllAvailableTasks(this);
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v2 = *(_QWORD *)((char *)v1 + 124);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    HIDWORD(v2) = 0;
    v4 = 0;
    v3 = 0;
  }
  else
    v5 = 0;
    v6 = 0;
    do
    {
      if ( HIDWORD(v2) - (signed int)v2 >= 49 )
      {
        std::__pop_heap<__gnu_cxx::__normal_iterator<BackgroundTask *,std::vector<BackgroundTask,std::allocator<BackgroundTask>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::less<BackgroundTask>>>(
          (_QWORD *)v2,
          HIDWORD(v2) - 48,
          (_QWORD *)(HIDWORD(v2) - 48));
        HIDWORD(v2) = *((_DWORD *)v1 + 32);
      }
      BackgroundTask::BackgroundTask((int)&v51, (_QWORD *)(HIDWORD(v2) - 48));
      v7 = (BackgroundTask *)(*((_DWORD *)v1 + 32) - 48);
      *((_DWORD *)v1 + 32) = v7;
      BackgroundTask::~BackgroundTask(v7);
      if ( *v51 != 2 )
        if ( v6 == v54 )
        {
          std::vector<BackgroundTask,std::allocator<BackgroundTask>>::_M_emplace_back_aux<BackgroundTask>(
            (unsigned __int64 *)&v52,
            &v51);
          v4 = v53;
          v3 = (int)v52;
        }
        else
          BackgroundTask::BackgroundTask(v6, &v51);
          v4 = v5 + 48;
          v53 = v5 + 48;
        std::push_heap<__gnu_cxx::__normal_iterator<BackgroundTask *,std::vector<BackgroundTask,std::allocator<BackgroundTask>>>,std::less<BackgroundTask>>(
          v3,
          v4);
        v5 = v4;
        v6 = v4;
      BackgroundTask::~BackgroundTask((BackgroundTask *)&v51);
      v2 = *(_QWORD *)((char *)v1 + 124);
    }
    while ( (_DWORD)v2 != HIDWORD(v2) );
    HIDWORD(v2) = v54;
  *((_DWORD *)v1 + 31) = v3;
  *((_DWORD *)v1 + 32) = v4;
  *((_DWORD *)v1 + 33) = HIDWORD(v2);
  if ( (_DWORD)v2 )
    operator delete((void *)v2);
  v9 = (BackgroundTask *)(*((_QWORD *)v1 + 13) >> 32);
  v8 = *((_QWORD *)v1 + 13);
  v10 = -1431655765 * (((signed int)v9 - v8) >> 4) >> 2;
  if ( v10 < 1 )
LABEL_24:
    v16 = -1431655765 * (((signed int)v9 - v8) >> 4);
    if ( v16 == 1 )
      v13 = v8;
    else
      if ( v16 == 2 )
        v13 = v8;
      else
        if ( v16 != 3 )
          v13 = *((_QWORD *)v1 + 13) >> 32;
          goto LABEL_37;
        if ( **(_DWORD **)v8 == 2 )
        v13 = v8 + 48;
      if ( **(_DWORD **)v13 == 2 )
        goto LABEL_37;
      v13 += 48;
    if ( **(_DWORD **)v13 != 2 )
      v13 = *((_QWORD *)v1 + 13) >> 32;
    v11 = v10 + 1;
    while ( 1 )
      v12 = **(_DWORD **)v8 == 2;
      if ( **(_DWORD **)v8 != 2 )
        v12 = **(_DWORD **)(v8 + 48) == 2;
      if ( v12 )
        break;
      v13 = v8 + 96;
      v14 = **(_DWORD **)(v8 + 96);
      v15 = v14 == 2;
      if ( v14 != 2 )
        v13 = v8 + 144;
        v15 = **(_DWORD **)(v8 + 144) == 2;
      if ( v15 )
      --v11;
      v8 += 192;
      if ( v11 <= 1 )
        goto LABEL_24;
LABEL_37:
  if ( (BackgroundTask *)v13 == v9 )
    v18 = (BackgroundTask *)(*((_QWORD *)v1 + 13) >> 32);
    v17 = (int)v9 - 48;
    v18 = (BackgroundTask *)v13;
    while ( v17 != v13 )
      v19 = *(_DWORD **)(v13 + 48);
      v20 = (_QWORD *)(v13 + 48);
      if ( *v19 != 2 )
        BackgroundTask::operator=(v18, v20);
        v18 = (BackgroundTask *)((char *)v18 + 48);
        v13 = (int)v20;
    v9 = (BackgroundTask *)*((_DWORD *)v1 + 27);
  if ( v18 != v9 )
    if ( v9 != v18 )
      v21 = v18;
      do
        v21 = (BackgroundTask *)((char *)BackgroundTask::~BackgroundTask(v21) + 48);
      while ( v9 != v21 );
    *((_DWORD *)v1 + 27) = v18;
  BackgroundWorker::_fetchAllAvailableCallbacks(v1);
  v22 = (int)v1 + 152;
  v23 = *((_DWORD *)v1 + 38);
  v24 = *((_DWORD *)v1 + 39);
  v25 = -1431655765 * ((v24 - v23) >> 3) >> 2;
  if ( v25 < 1 )
LABEL_58:
    v32 = -1431655765 * ((v24 - v23) >> 3);
    if ( v32 == 1 )
      v27 = v23;
      if ( v32 == 2 )
        v27 = v23;
        if ( v32 != 3 )
          v27 = *((_DWORD *)v1 + 39);
          goto LABEL_71;
        if ( **(_DWORD **)v23 == 2 )
        v27 = v23 + 24;
      if ( **(_DWORD **)v27 == 2 )
        goto LABEL_71;
      v27 += 24;
    if ( **(_DWORD **)v27 != 2 )
      v27 = *((_DWORD *)v1 + 39);
    v26 = v25 + 1;
      v28 = **(_DWORD **)v23;
      v29 = v28 == 2;
      if ( v28 != 2 )
        v29 = **(_DWORD **)(v23 + 24) == 2;
      if ( v29 )
      v27 = v23 + 48;
      v30 = **(_DWORD **)(v23 + 48);
      v31 = v30 == 2;
      if ( v30 != 2 )
        v27 = v23 + 72;
        v31 = **(_DWORD **)(v23 + 72) == 2;
      if ( v31 )
      --v26;
      v23 += 96;
      if ( v26 <= 1 )
        goto LABEL_58;
LABEL_71:
  v33 = 0;
  if ( v27 == v24 )
    v48 = 0;
    v35 = *((_DWORD *)v1 + 39);
    v34 = &v55;
    v35 = v27;
LABEL_74:
    v36 = v27 + 24;
      v27 = v36;
      if ( v24 == v36 )
      v36 += 24;
      v37 = *(_DWORD **)v27;
      if ( **(_DWORD **)v27 != 2 )
        v50 = v22;
        v38 = *(_DWORD *)(v27 + 4);
        *(_DWORD *)v27 = 0;
        *(_DWORD *)(v27 + 4) = 0;
        *(_DWORD *)v35 = v37;
        v39 = *(_DWORD *)(v35 + 4);
        *(_DWORD *)(v35 + 4) = v38;
        if ( v39 )
          v40 = (unsigned int *)(v39 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
          }
          else
            v41 = (*v40)--;
          if ( v41 == 1 )
            v42 = (unsigned int *)(v39 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
            if ( &pthread_create )
            {
              __dmb();
              do
                v43 = __ldrex(v42);
              while ( __strex(v43 - 1, v42) );
            }
            else
              v43 = (*v42)--;
            v34 = &v55;
            if ( v43 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
        v44 = *(_QWORD *)(v27 + 8);
        v45 = *(_DWORD *)(v27 + 16);
        *(_DWORD *)(v27 + 16) = 0;
        v46 = *(_DWORD *)(v27 + 20);
        v55 = *(_QWORD *)(v35 + 8);
        *(_QWORD *)(v35 + 8) = v44;
        v56 = *(void (__fastcall **)(__int64 *, __int64 *, signed int))(v35 + 16);
        v47 = v56;
        *(_DWORD *)(v35 + 16) = v45;
        v57 = *(_DWORD *)(v35 + 20);
        *(_DWORD *)(v35 + 20) = v46;
        if ( v47 )
          v47(v34, v34, 3);
        v35 += 24;
        v22 = v50;
        goto LABEL_74;
    v33 = v53;
    v48 = v52;
    v24 = *((_DWORD *)v1 + 39);
  std::vector<BackgroundTask::Callback,std::allocator<BackgroundTask::Callback>>::_M_erase(v22, v35, v24);
  if ( v48 != (BackgroundTask *)v33 )
    v49 = v48;
      v49 = (BackgroundTask *)((char *)BackgroundTask::~BackgroundTask(v49) + 48);
    while ( (BackgroundTask *)v33 != v49 );
  if ( v48 )
    operator delete((void *)v48);
}


void __fastcall BackgroundWorker::_onTaskGroupFlushed(BackgroundWorker *this)
{
  BackgroundWorker::_onTaskGroupFlushed(this);
}


unsigned int __fastcall BackgroundWorker::_fetchAllAvailableCallbacks(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r5@1
  unsigned int result; // r0@1
  __int64 v3; // r0@3 OVERLAPPED
  int v4; // r2@4
  int v5; // r2@4
  int (*v6)(void); // r3@6
  int v7; // r4@12
  unsigned int *v8; // r1@13
  unsigned int *v9; // r5@19
  unsigned int v10; // [sp+0h] [bp-38h]@1
  int v11; // [sp+4h] [bp-34h]@1
  __int64 v12; // [sp+8h] [bp-30h]@4
  int (*v13)(void); // [sp+10h] [bp-28h]@1
  int v14; // [sp+14h] [bp-24h]@4

  v1 = this;
  v10 = 0;
  v11 = 0;
  v13 = 0;
  result = SPSCQueue<BackgroundTask::Callback,512u>::try_dequeue<BackgroundTask::Callback>(
             *((int ***)this + 25),
             (int)&v10);
  if ( result )
  {
    result = (unsigned int)v13;
    if ( !v13 )
      goto LABEL_12;
    do
    {
      v3 = *(_QWORD *)((char *)v1 + 156);
      if ( (_DWORD)v3 == HIDWORD(v3) )
      {
        std::vector<BackgroundTask::Callback,std::allocator<BackgroundTask::Callback>>::_M_emplace_back_aux<BackgroundTask::Callback>(
          (unsigned __int64 *)v1 + 19,
          (int)&v10);
      }
      else
        *(_QWORD *)v3 = v10;
        HIDWORD(v3) = v11;
        v11 = 0;
        *(_DWORD *)(v3 + 4) = HIDWORD(v3);
        v10 = 0;
        *(_DWORD *)(v3 + 16) = 0;
        *(__int64 *)((char *)&v3 + 4) = v12;
        v12 = *(_QWORD *)(v3 + 8);
        *(_QWORD *)(v3 + 8) = *(__int64 *)((char *)&v3 + 4);
        v4 = (int)v13;
        v13 = *(int (**)(void))(v3 + 16);
        *(_DWORD *)(v3 + 16) = v4;
        v5 = v14;
        v14 = *(_DWORD *)(v3 + 20);
        *(_DWORD *)(v3 + 20) = v5;
        *((_DWORD *)v1 + 39) += 24;
      result = SPSCQueue<BackgroundTask::Callback,512u>::try_dequeue<BackgroundTask::Callback>(
                 *((int ***)v1 + 25),
                 (int)&v10);
      v6 = v13;
      if ( !v13 )
        break;
      result ^= 1u;
    }
    while ( !result );
  }
  else
    v6 = v13;
  if ( v6 )
    result = v6();
LABEL_12:
  v7 = v11;
  if ( v11 )
    v8 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v8);
      while ( __strex(result - 1, v8) );
    else
      result = (*v8)--;
    if ( result == 1 )
      v9 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v9);
        while ( __strex(result - 1, v9) );
        result = (*v9)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return result;
}


int *__fastcall BackgroundWorker::_assignWorkerToThisThread(int a1)
{
  int v1; // r4@1
  int v2; // r0@2
  int *result; // r0@3

  v1 = a1;
  SET_THREAD_NAME();
  *(_DWORD *)(v1 + 20) = pthread_self();
  if ( &pthread_create )
  {
    v2 = pthread_mutex_lock((pthread_mutex_t *)&BackgroundWorker::gLocalWorkerMapMutex);
    if ( v2 )
      sub_21E5E14(v2);
  }
  result = (int *)std::__detail::_Map_base<std::thread::id,std::pair<std::thread::id const,BackgroundWorker *>,std::allocator<std::pair<std::thread::id const,BackgroundWorker *>>,std::__detail::_Select1st,std::equal_to<std::thread::id>,std::hash<std::thread::id>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                    (int)&BackgroundWorker::gLocalWorkerMap,
                    (int *)(v1 + 20));
  *result = v1;
    result = (int *)pthread_mutex_unlock((pthread_mutex_t *)&BackgroundWorker::gLocalWorkerMapMutex);
  return result;
}


signed int __fastcall BackgroundWorker::_processNextTask(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  int v2; // r7@6
  int v3; // r6@8
  unsigned int *v4; // r1@9
  unsigned int v5; // r0@11
  signed int result; // r0@13
  unsigned __int8 *v7; // r7@14
  unsigned int v8; // r1@15
  __int64 v9; // r0@17
  int v10; // r1@18
  unsigned __int64 *v11; // r0@21
  unsigned __int64 v12; // kr00_8@22
  __int64 v13; // r0@23
  __int64 v14; // r2@23
  int v15; // r7@23
  __int64 v16; // r0@23
  unsigned __int64 *v17; // r2@23
  unsigned __int64 v18; // kr08_8@24
  unsigned int *v19; // r7@28
  unsigned int v20; // r0@30
  int v21; // [sp+0h] [bp-70h]@21
  char v22; // [sp+8h] [bp-68h]@21
  char v23; // [sp+38h] [bp-38h]@6
  int v24; // [sp+3Ch] [bp-34h]@8
  void (*v25)(void); // [sp+48h] [bp-28h]@6
  char v26; // [sp+50h] [bp-20h]@1

  v1 = this;
  sub_21E034C(&v26);
  if ( !BackgroundTask::operator bool((int)v1 + 24) )
    BackgroundWorker::_tryPop(v1);
  if ( BackgroundTask::operator bool((int)v1 + 24) == 1 )
  {
    if ( BackgroundTask::run((BackgroundWorker *)((char *)v1 + 24)) == 1 )
    {
      if ( *((_DWORD *)v1 + 14) )
      {
        v2 = *((_DWORD *)v1 + 25);
        BackgroundTask::acquireCallback((BackgroundTask *)&v23, (int)v1 + 24);
        SPSCQueue<BackgroundTask::Callback,512u>::inner_enqueue<(SPSCQueue<BackgroundTask::Callback,512u>::AllocationMode)0,BackgroundTask::Callback>(
          v2,
          (int)&v23);
        if ( v25 )
          v25();
        v3 = v24;
        if ( v24 )
        {
          v4 = (unsigned int *)(v24 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v5 = __ldrex(v4);
            while ( __strex(v5 - 1, v4) );
          }
          else
            v5 = (*v4)--;
          if ( v5 == 1 )
            v19 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
            {
              __dmb();
              do
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
            }
            else
              v20 = (*v19)--;
            if ( v20 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
        }
      }
    }
    else
      BackgroundTask::backDownPriority((BackgroundWorker *)((char *)v1 + 24));
      v7 = (unsigned __int8 *)v1 + 136;
      do
        do
          v8 = __ldrex(v7);
        while ( __strex(1u, v7) );
        __dmb();
      while ( v8 );
      v9 = *((_QWORD *)v1 + 16);
      if ( (_DWORD)v9 == HIDWORD(v9) )
        std::vector<BackgroundTask,std::allocator<BackgroundTask>>::_M_emplace_back_aux<BackgroundTask>(
          (unsigned __int64 *)((char *)v1 + 124),
          (_QWORD *)v1 + 3);
        v10 = *((_DWORD *)v1 + 32);
      else
        BackgroundTask::BackgroundTask(v9, (_QWORD *)v1 + 3);
        v10 = *((_DWORD *)v1 + 32) + 48;
        *((_DWORD *)v1 + 32) = v10;
      std::push_heap<__gnu_cxx::__normal_iterator<BackgroundTask *,std::vector<BackgroundTask,std::allocator<BackgroundTask>>>,std::less<BackgroundTask>>(
        *((_DWORD *)v1 + 31),
        v10);
      __dmb();
      *v7 = 0;
    BackgroundTask::BackgroundTask((BackgroundTask *)&v22);
    BackgroundTask::operator=((_QWORD *)v1 + 3, &v22);
    BackgroundTask::~BackgroundTask((BackgroundTask *)&v22);
    sub_21E034C(&v21);
    v11 = (unsigned __int64 *)*((_DWORD *)v1 + 30);
    __dmb();
    do
      v12 = __ldrexd(v11);
    while ( __strexd(v12 + 1, v11) );
    v13 = *(_QWORD *)&v26;
    v14 = *(_QWORD *)&v21;
    v15 = *((_DWORD *)v1 + 30);
    v16 = v14 - v13;
    v17 = (unsigned __int64 *)(v15 + 8);
      v18 = __ldrexd(v17);
    while ( __strexd(v18 + v16, v17) );
    *((_QWORD *)v1 + 11) = *(_QWORD *)&v21;
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall BackgroundWorker::_start(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  int v2; // r5@1
  pthread_t v3; // r0@1
  _DWORD *v4; // r5@4
  _DWORD *v5; // r0@4
  __int32 v6; // r5@4
  unsigned int *v7; // r1@5
  unsigned int v8; // r0@7
  signed int result; // r0@9
  unsigned int *v10; // r6@12
  unsigned int v11; // r0@14
  pthread_t v12; // r0@20
  pthread_t v13; // [sp+0h] [bp-20h]@4
  struct timespec requested_time; // [sp+4h] [bp-1Ch]@4

  v1 = this;
  v2 = pthread_equal(*((_QWORD *)this + 2), *((_QWORD *)this + 2) >> 32);
  v3 = pthread_self();
  *((_DWORD *)v1 + 4) = v3;
  if ( v2 )
    *((_DWORD *)v1 + 5) = v3;
  BackgroundWorker::_resetData(v1);
  if ( *(_BYTE *)v1 )
  {
    v13 = 0;
    v4 = operator new(0x10u);
    *v4 = &off_26EAA5C;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = v1;
    v5 = operator new(0x14u);
    v5[1] = 1;
    v5[2] = 1;
    *v5 = &off_26EAA70;
    v5[4] = v4;
    requested_time.tv_sec = (__time_t)v4;
    requested_time.tv_nsec = (__int32)v5;
    sub_21E99CC(&v13, (int)&requested_time);
    v6 = requested_time.tv_nsec;
    if ( requested_time.tv_nsec )
    {
      v7 = (unsigned int *)(requested_time.tv_nsec + 4);
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
        v10 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(__int32))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(__int32))(*(_DWORD *)v6 + 12))(v6);
    }
    if ( !pthread_equal(*((_DWORD *)v1 + 3), 0) )
      std::terminate();
    v12 = *((_DWORD *)v1 + 3);
    *((_DWORD *)v1 + 3) = v13;
    v13 = v12;
    if ( !pthread_equal(v12, 0) )
    requested_time.tv_sec = *((_DWORD *)v1 + 3);
    ThreadUtil::setThreadPriority((pthread_t *)&requested_time, (pthread_t **)v1 + 1);
    result = *((_DWORD *)v1 + 18);
    __dmb();
    while ( !result )
      requested_time = (struct timespec)429496729600000000LL;
      nanosleep(&requested_time, 0);
      result = *((_DWORD *)v1 + 18);
      __dmb();
  }
  else
    BackgroundWorker::_assignWorkerToThisThread((int)v1);
    result = 1;
    *((_DWORD *)v1 + 18) = 1;
  return result;
}


pthread_t __fastcall BackgroundWorker::_setOwnerThreadToThisThread(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  int v2; // r5@1
  pthread_t result; // r0@1

  v1 = this;
  v2 = pthread_equal(*((_QWORD *)this + 2), *((_QWORD *)this + 2) >> 32);
  result = pthread_self();
  *((_DWORD *)v1 + 4) = result;
  if ( v2 )
    *((_DWORD *)v1 + 5) = result;
  return result;
}


BackgroundTask *__fastcall BackgroundWorker::stop(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  BackgroundTask *result; // r0@1

  v1 = this;
  result = (BackgroundTask *)*((_DWORD *)this + 18);
  __dmb();
  if ( result )
  {
    if ( *(_BYTE *)v1 )
    {
      BackgroundWorker::_queueStateChange((int)v1, 1, 0);
      if ( !pthread_equal(*((_DWORD *)v1 + 3), 0) )
        sub_21E9834((pthread_t *)v1 + 3);
    }
    result = j_j_j__ZN16BackgroundWorker10_resetDataEv(v1);
  }
  return result;
}


pthread_mutex_t *__fastcall BackgroundWorker::_queueStateChange(int a1, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int8 *v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int v7; // r1@2
  _DWORD *v8; // r0@4
  __int64 v9; // r1@4
  __int64 v10; // r0@4
  int v11; // r1@5
  pthread_mutex_t *result; // r0@9
  _DWORD *v13; // [sp+4h] [bp-54h]@4
  __int64 v14; // [sp+Ch] [bp-4Ch]@4
  char v15; // [sp+14h] [bp-44h]@4

  v3 = a1;
  v4 = (unsigned __int8 *)(a1 + 136);
  v5 = a3;
  v6 = a2;
  do
  {
    do
      v7 = __ldrex(v4);
    while ( __strex(1u, v4) );
    __dmb();
  }
  while ( v7 );
  v8 = operator new(0xCu);
  LODWORD(v9) = sub_15604AE;
  *v8 = v3;
  v8[1] = v6;
  HIDWORD(v9) = sub_156049A;
  v8[2] = v5;
  v13 = v8;
  v14 = v9;
  BackgroundTask::makeInternal((int)&v15, (int)&v13);
  v10 = *(_QWORD *)(v3 + 128);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<BackgroundTask,std::allocator<BackgroundTask>>::_M_emplace_back_aux<BackgroundTask>(
      (unsigned __int64 *)(v3 + 124),
      &v15);
    v11 = *(_DWORD *)(v3 + 128);
  else
    BackgroundTask::BackgroundTask(v10, &v15);
    v11 = *(_DWORD *)(v3 + 128) + 48;
    *(_DWORD *)(v3 + 128) = v11;
  std::push_heap<__gnu_cxx::__normal_iterator<BackgroundTask *,std::vector<BackgroundTask,std::allocator<BackgroundTask>>>,std::less<BackgroundTask>>(
    *(_DWORD *)(v3 + 124),
    v11);
  BackgroundTask::~BackgroundTask((BackgroundTask *)&v15);
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
  __dmb();
  *(_BYTE *)(v3 + 136) = 0;
  result = *(pthread_mutex_t **)(v3 + 76);
  if ( result )
    result = (pthread_mutex_t *)Semaphore::notify(result);
  return result;
}


BackgroundTask *__fastcall BackgroundWorker::_resetData(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r9@1
  unsigned __int8 *v2; // r0@1
  unsigned int v3; // r2@2
  __int64 v4; // r4@4
  BackgroundTask *v5; // r0@5
  int *v6; // r0@7
  int *v7; // r5@7
  char *v8; // r0@7
  int v9; // r1@8
  int v10; // r1@8
  int *v11; // r0@10
  void *v12; // r0@11
  int *v13; // r0@13
  int *v14; // r6@13
  char *v15; // r0@13
  int v16; // r1@14
  int v17; // r1@14
  int v18; // r12@14
  void *v19; // r8@16
  int v20; // r10@17
  int v21; // r7@17
  int v22; // r5@18
  int v23; // r6@18
  int v24; // r4@18
  void *v25; // r5@23
  int v26; // r6@23
  __int64 v27; // r4@25
  BackgroundTask *v28; // r0@26
  int v30; // [sp+0h] [bp-50h]@29

  v1 = this;
  v2 = (unsigned __int8 *)this + 136;
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *(_QWORD *)((char *)v1 + 124);
  if ( HIDWORD(v4) != (_DWORD)v4 )
    v5 = (BackgroundTask *)*(_QWORD *)((char *)v1 + 124);
      v5 = (BackgroundTask *)((char *)BackgroundTask::~BackgroundTask(v5) + 48);
    while ( (BackgroundTask *)HIDWORD(v4) != v5 );
  *((_DWORD *)v1 + 32) = v4;
  __dmb();
  *((_BYTE *)v1 + 136) = 0;
  v6 = (int *)operator new(0x48u);
  v7 = v6;
  v6[17] = 16;
  v8 = (char *)malloc(0x216u);
  if ( v8 )
    v9 = -(signed int)v8 & 3;
    *(_DWORD *)&v8[v9] = 0;
    v10 = (int)&v8[v9];
    *(_DWORD *)(v10 + 4) = 0;
    *(_DWORD *)(v10 + 64) = 0;
    *(_DWORD *)(v10 + 68) = 0;
    *(_DWORD *)(v10 + 128) = 0;
    *(_DWORD *)(v10 + 132) = ((112 - (_BYTE)v10) & 3) + v10 + 144;
    *(_DWORD *)(v10 + 136) = 15;
    *(_DWORD *)(v10 + 140) = v8;
    if ( v10 )
    {
      *(_DWORD *)(v10 + 128) = v10;
      *v7 = v10;
      v7[16] = v10;
      __dmb();
    }
  v11 = (int *)*((_DWORD *)v1 + 25);
  *((_DWORD *)v1 + 25) = v7;
  if ( v11 )
    SPSCQueue<BackgroundTask::Callback,512u>::~SPSCQueue(v11);
    operator delete(v12);
  if ( *(_BYTE *)v1 )
    v13 = (int *)operator new(0x48u);
    v14 = v13;
    v13[17] = 16;
    v15 = (char *)malloc(0x396u);
    if ( v15 )
      v16 = -(signed int)v15 & 3;
      *(_DWORD *)&v15[v16] = 0;
      v17 = (int)&v15[v16];
      v18 = v17 + 128;
      *(_DWORD *)(v17 + 4) = 0;
      *(_DWORD *)(v17 + 64) = 0;
      *(_DWORD *)(v17 + 68) = 0;
      *(_DWORD *)v18 = 0;
      *(_DWORD *)(v18 + 4) = ((112 - (_BYTE)v17) & 3) + v17 + 144;
      *(_DWORD *)(v18 + 8) = 15;
      *(_DWORD *)(v17 + 140) = v15;
      if ( v17 )
      {
        *(_DWORD *)(v17 + 128) = v17;
        *v14 = v17;
        v14[16] = v17;
        __dmb();
      }
    v19 = (void *)*((_DWORD *)v1 + 24);
    *((_DWORD *)v1 + 24) = v14;
    if ( v19 )
      v20 = *(_DWORD *)v19;
      v21 = *(_DWORD *)v19;
      do
        v22 = *(_DWORD *)(v21 + 128);
        v23 = *(_DWORD *)v21;
        v24 = *(_DWORD *)(v21 + 64);
        while ( v23 != v24 )
        {
          BackgroundTask::~BackgroundTask((BackgroundTask *)(*(_DWORD *)(v21 + 132) + 48 * v23));
          v23 = *(_DWORD *)(v21 + 136) & (v23 + 1);
        }
        free(*(void **)(v21 + 140));
        v21 = v22;
      while ( v22 != v20 );
      operator delete(v19);
    v25 = operator new(0xCu);
    Semaphore::Semaphore((int)v25);
    v26 = *((_DWORD *)v1 + 19);
    *((_DWORD *)v1 + 19) = v25;
    if ( v26 )
      sub_21E03AC((pthread_cond_t *)(v26 + 4));
      operator delete((void *)v26);
    v27 = *((_QWORD *)v1 + 13);
    if ( HIDWORD(v27) != (_DWORD)v27 )
      v28 = (BackgroundTask *)*((_QWORD *)v1 + 13);
        v28 = (BackgroundTask *)((char *)BackgroundTask::~BackgroundTask(v28) + 48);
      while ( (BackgroundTask *)HIDWORD(v27) != v28 );
    *((_DWORD *)v1 + 27) = v27;
  BackgroundTask::BackgroundTask((BackgroundTask *)&v30);
  BackgroundTask::operator=((_QWORD *)v1 + 3, &v30);
  return BackgroundTask::~BackgroundTask((BackgroundTask *)&v30);
}


pthread_t *__fastcall BackgroundWorker::_setOSPriority(BackgroundWorker *this)
{
  int v2; // [sp+4h] [bp-Ch]@1

  v2 = *((_DWORD *)this + 3);
  return ThreadUtil::setThreadPriority((pthread_t *)&v2, (pthread_t **)this + 1);
}


signed int __fastcall BackgroundWorker::_processNextCallback(BackgroundWorker *this)
{
  BackgroundWorker *v1; // r4@1
  int v2; // r0@1
  int v3; // r4@1
  int v4; // t1@1
  int v5; // r2@1
  signed int v6; // r1@2
  _DWORD **v7; // r2@2
  int v8; // r1@2
  _DWORD *v9; // t1@4
  int v10; // r5@5
  int v11; // r0@5

  v1 = this;
  BackgroundWorker::_fetchAllAvailableCallbacks(this);
  v4 = *((_DWORD *)v1 + 38);
  v3 = (int)v1 + 152;
  v2 = v4;
  v5 = *(_DWORD *)(v3 + 4);
  if ( v4 != v5 )
  {
    v6 = v5 - v2;
    v7 = (_DWORD **)(v5 - 24);
    v8 = -1431655765 * (v6 >> 3);
    while ( v8 )
    {
      v9 = *v7;
      v7 -= 6;
      --v8;
      if ( *v9 != 1 )
      {
        v10 = 3 * v8;
        v11 = v2 + 24 * v8;
        if ( !*(_DWORD *)(v11 + 16) )
          sub_21E5F48();
        (*(void (__fastcall **)(int))(v11 + 20))(v11 + 8);
        std::vector<BackgroundTask::Callback,std::allocator<BackgroundTask::Callback>>::_M_erase(
          v3,
          *(_DWORD *)v3 + 8 * v10);
        return 1;
      }
    }
  }
  return 0;
}


int __fastcall BackgroundWorker::unpause(int result)
{
  __dmb();
  *(_DWORD *)(result + 72) = 1;
  return result;
}


int __fastcall BackgroundWorker::BackgroundWorker(int a1, _DWORD *a2, char a3, _DWORD *a4, int a5)
{
  int v5; // r4@1
  int result; // r0@1

  v5 = a1;
  *(_BYTE *)a1 = a3;
  *(_DWORD *)(a1 + 4) = *a4;
  *(_DWORD *)(a1 + 8) = *a2;
  *a2 = &unk_28898CC;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  BackgroundTask::BackgroundTask((BackgroundTask *)(a1 + 24));
  *(_DWORD *)(v5 + 72) = 0;
  *(_DWORD *)(v5 + 76) = 0;
  *(_DWORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 116) = 0;
  *(_DWORD *)(v5 + 104) = 0;
  *(_DWORD *)(v5 + 108) = 0;
  *(_DWORD *)(v5 + 96) = 0;
  *(_DWORD *)(v5 + 100) = 0;
  *(_DWORD *)(v5 + 88) = 0;
  *(_DWORD *)(v5 + 92) = 0;
  *(_DWORD *)(v5 + 120) = a5;
  *(_DWORD *)(v5 + 124) = 0;
  result = v5;
  *(_DWORD *)(v5 + 128) = 0;
  *(_DWORD *)(v5 + 132) = 0;
  __dmb();
  *(_BYTE *)(v5 + 136) = 0;
  *(_DWORD *)(v5 + 140) = 0;
  *(_DWORD *)(v5 + 144) = 0;
  *(_DWORD *)(v5 + 148) = 0;
  *(_DWORD *)(v5 + 152) = 0;
  *(_DWORD *)(v5 + 156) = 0;
  *(_DWORD *)(v5 + 160) = 0;
  *(_DWORD *)(v5 + 164) = 0;
  return result;
}


int __fastcall BackgroundWorker::_tryStealWork(int result, BackgroundTask *a2)
{
  __int64 v2; // r6@1
  BackgroundTask *i; // r11@1
  unsigned int v4; // r1@4
  int v5; // r4@6
  __int64 v6; // r0@6
  BackgroundTask *v7; // r0@10
  char v8; // [sp+4h] [bp-54h]@10

  v2 = *(_QWORD *)(result + 140);
  for ( i = a2; (_DWORD)v2 != HIDWORD(v2); LODWORD(v2) = v2 + 4 )
  {
    result = *(_BYTE *)(*(_DWORD *)v2 + 80);
    __dmb();
    if ( !(result & 1) )
    {
      result = *(_DWORD *)v2 + 136;
      do
        v4 = __ldrex((unsigned __int8 *)result);
      while ( __strex(1u, (unsigned __int8 *)result) );
      __dmb();
      if ( !v4 )
      {
        v5 = *(_DWORD *)v2;
        v6 = *(_QWORD *)(*(_DWORD *)v2 + 124);
        if ( HIDWORD(v6) != (_DWORD)v6 && *(_DWORD *)v6 != BackgroundTask::mInternalTaskState )
        {
          if ( HIDWORD(v6) - (signed int)v6 >= 49 )
          {
            std::__pop_heap<__gnu_cxx::__normal_iterator<BackgroundTask *,std::vector<BackgroundTask,std::allocator<BackgroundTask>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::less<BackgroundTask>>>(
              (_QWORD *)v6,
              HIDWORD(v6) - 48,
              (_QWORD *)(HIDWORD(v6) - 48));
            HIDWORD(v6) = *(_DWORD *)(v5 + 128);
          }
          BackgroundTask::BackgroundTask((int)&v8, (_QWORD *)(HIDWORD(v6) - 48));
          v7 = (BackgroundTask *)(*(_DWORD *)(v5 + 128) - 48);
          *(_DWORD *)(v5 + 128) = v7;
          BackgroundTask::~BackgroundTask(v7);
          BackgroundTask::operator=(i, &v8);
          BackgroundTask::~BackgroundTask((BackgroundTask *)&v8);
          v5 = *(_DWORD *)v2;
        }
        __dmb();
        *(_BYTE *)(v5 + 136) = 0;
        result = BackgroundTask::operator bool((int)i);
        if ( result )
          break;
      }
    }
  }
  return result;
}


int __fastcall BackgroundWorker::_getApproximateJobSize(BackgroundWorker *this)
{
  int *v1; // r0@1
  int result; // r0@2
  int v3; // r12@3
  int v4; // r2@3
  int v5; // lr@4
  int v6; // r1@4

  v1 = (int *)*((_DWORD *)this + 24);
  if ( v1 )
  {
    v3 = *v1;
    result = 0;
    v4 = v3;
    do
    {
      __dmb();
      v5 = *(_DWORD *)(v4 + 136);
      v6 = *(_DWORD *)(v4 + 64) - *(_DWORD *)v4;
      v4 = *(_DWORD *)(v4 + 128);
      result += v6 & v5;
    }
    while ( v4 != v3 );
  }
  else
  return result;
}
