

BackgroundTask *__fastcall ResourceLoadManager::loadResource(int a1, int a2, unsigned __int64 *a3, int a4, int a5)
{
  int *v5; // r12@1
  int *v6; // lr@1
  int i; // r2@1
  int v8; // t1@2

  v6 = (int *)(*a3 >> 32);
  v5 = (int *)*a3;
  for ( i = 0; v6 != v5; i |= v8 )
  {
    v8 = *v5;
    ++v5;
  }
  return j_j_j__ZN19ResourceLoadManager12loadResourceE16ResourceLoadTypeS0_RKSt8functionIFvvEES5_(a1, a2, i, a4, a5);
}


ResourceLoadManager *__fastcall ResourceLoadManager::~ResourceLoadManager(ResourceLoadManager *this)
{
  ResourceLoadManager *v1; // r9@1
  char *v2; // r4@1
  int i; // r5@1
  TaskGroup *v4; // r0@4
  __int64 v5; // kr00_8@6
  int v6; // r4@7
  int v7; // r6@8
  unsigned int *v8; // r1@9
  unsigned int v9; // r0@11
  unsigned int *v10; // r5@15
  unsigned int v11; // r0@17
  int v12; // r5@23
  int v13; // r7@23
  int v14; // r4@24
  unsigned int *v15; // r1@25
  unsigned int v16; // r0@27
  unsigned int *v17; // r6@31
  unsigned int v18; // r0@33

  v1 = this;
  v2 = (char *)this + 16;
  for ( i = *((_DWORD *)this + 6); (char *)i != v2; i = sub_21D47E8(i) )
  {
    v4 = *(TaskGroup **)(i + 20);
    if ( v4 )
      TaskGroup::flush(v4);
  }
  v5 = *(_QWORD *)v1;
  if ( HIDWORD(v5) != (_DWORD)v5 )
    v6 = v5;
    do
    {
      v7 = *(_DWORD *)(v6 + 4);
      if ( v7 )
      {
        v8 = (unsigned int *)(v7 + 4);
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
          v10 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      }
      v6 += 8;
    }
    while ( v6 != HIDWORD(v5) );
  *((_DWORD *)v1 + 1) = v5;
  ResourceLoadManager::sync((int)v1, -1);
  std::_Rb_tree<ResourceLoadType,std::pair<ResourceLoadType const,std::unique_ptr<TaskGroup,std::default_delete<TaskGroup>>>,std::_Select1st<std::pair<ResourceLoadType const,std::unique_ptr<TaskGroup,std::default_delete<TaskGroup>>>>,std::less<ResourceLoadType>,std::allocator<std::pair<ResourceLoadType const,std::unique_ptr<TaskGroup,std::default_delete<TaskGroup>>>>>::_M_erase(
    (int)v1 + 12,
    *((_DWORD *)v1 + 5));
  v13 = *(_QWORD *)v1 >> 32;
  v12 = *(_QWORD *)v1;
  if ( v12 != v13 )
      v14 = *(_DWORD *)(v12 + 4);
      if ( v14 )
        v15 = (unsigned int *)(v14 + 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          v17 = (unsigned int *)(v14 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
      v12 += 8;
    while ( v12 != v13 );
    v12 = *(_DWORD *)v1;
  if ( v12 )
    operator delete((void *)v12);
  return v1;
}


int __fastcall ResourceLoadManager::update(ResourceLoadManager *this)
{
  ResourceLoadManager *v1; // r5@1
  int v2; // r4@1
  ResourceLoadManager::ResourceLoadTask **v3; // r0@1
  ResourceLoadManager::ResourceLoadTask **v4; // r6@1
  __int64 v5; // kr00_8@1
  ResourceLoadManager::ResourceLoadTask *v6; // r7@4

  v1 = this;
  v2 = 0;
  v5 = *(_QWORD *)this;
  v3 = (ResourceLoadManager::ResourceLoadTask **)(*(_QWORD *)this >> 32);
  v4 = (ResourceLoadManager::ResourceLoadTask **)v5;
  while ( v4 != v3 )
  {
    while ( 1 )
    {
      v6 = *v4;
      if ( !*((_BYTE *)*v4 + 41) && !(*((_DWORD *)v6 + 11) & v2) )
        ResourceLoadManager::ResourceLoadTask::start(*v4);
      if ( *((_BYTE *)v6 + 40) )
        break;
      v4 += 2;
      v2 |= *((_DWORD *)v6 + 1);
      if ( v4 == *((ResourceLoadManager::ResourceLoadTask ***)v1 + 1) )
        return v2;
    }
    v4 = (ResourceLoadManager::ResourceLoadTask **)std::vector<std::shared_ptr<ResourceLoadManager::ResourceLoadTask>,std::allocator<std::shared_ptr<ResourceLoadManager::ResourceLoadTask>>>::_M_erase(
                                                     (int)v1,
                                                     (int)v4);
    v3 = (ResourceLoadManager::ResourceLoadTask **)*((_DWORD *)v1 + 1);
  }
  return v2;
}


TaskGroup *__fastcall ResourceLoadManager::_getTaskGroupFor(int a1, unsigned int a2)
{
  int v2; // r2@1
  int v3; // r5@1
  int v4; // r6@2
  int v5; // r3@3
  TaskGroup *result; // r0@14
  TaskGroup **v7; // r4@15
  TaskGroup *v8; // r5@15
  TaskGroup *v9; // [sp+0h] [bp-18h]@15
  unsigned int v10; // [sp+4h] [bp-14h]@1

  v10 = a2;
  v2 = a1 + 16;
  v3 = *(_DWORD *)(a1 + 20);
  if ( v3 )
  {
    v4 = a1 + 16;
    do
    {
      v5 = v3;
      while ( *(_DWORD *)(v5 + 16) < a2 )
      {
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v3 = *(_DWORD *)(v5 + 8);
      v4 = v5;
    }
    while ( v3 );
  }
  else
    v5 = a1 + 16;
LABEL_10:
  if ( v5 == v2 )
    goto LABEL_19;
  if ( *(_DWORD *)(v5 + 16) > a2 )
LABEL_19:
    v7 = (TaskGroup **)std::map<ResourceLoadType,std::unique_ptr<TaskGroup,std::default_delete<TaskGroup>>,std::less<ResourceLoadType>,std::allocator<std::pair<ResourceLoadType const,std::unique_ptr<TaskGroup,std::default_delete<TaskGroup>>>>>::operator[](
                         a1 + 12,
                         (int *)&v10);
    std::make_unique<TaskGroup,WorkerPool &,char const(&)[23]>(&v9, WorkerPool::ASYNC, "Resource loading group");
    result = v9;
    v9 = 0;
    v8 = *v7;
    *v7 = result;
    if ( v8 )
      TaskGroup::~TaskGroup(v8);
      operator delete((void *)v8);
      result = *v7;
    result = *(TaskGroup **)(v5 + 20);
  return result;
}


int __fastcall ResourceLoadManager::cancel(int result)
{
  int v1; // r9@1
  int v2; // r4@1
  int i; // r5@1
  TaskGroup *v4; // r0@2
  __int64 v5; // kr00_8@6
  int v6; // r4@7
  int v7; // r6@8
  unsigned int *v8; // r1@9
  unsigned int *v9; // r5@15

  v1 = result;
  v2 = result + 16;
  for ( i = *(_DWORD *)(result + 24); i != v2; i = result )
  {
    v4 = *(TaskGroup **)(i + 20);
    if ( v4 )
      TaskGroup::flush(v4);
    result = sub_21D47E8(i);
  }
  v5 = *(_QWORD *)v1;
  if ( HIDWORD(v5) != (_DWORD)v5 )
    v6 = v5;
    result = (int)&pthread_create_ptr;
    do
    {
      v7 = *(_DWORD *)(v6 + 4);
      if ( v7 )
      {
        v8 = (unsigned int *)(v7 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v8);
          while ( __strex(result - 1, v8) );
        }
        else
          result = (*v8)--;
        if ( result == 1 )
          v9 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v9);
            while ( __strex(result - 1, v9) );
          }
          else
            result = (*v9)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      }
      v6 += 8;
    }
    while ( v6 != HIDWORD(v5) );
  *(_DWORD *)(v1 + 4) = v5;
  return result;
}


signed int __fastcall ResourceLoadManager::allComplete(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r1@1 OVERLAPPED
  int v4; // r2@1 OVERLAPPED
  int v5; // r5@5
  int v6; // r6@5
  signed int result; // r0@10

  v2 = a2;
  *(_QWORD *)&v3 = *(_QWORD *)a1;
  if ( v3 == v4 )
  {
LABEL_5:
    v5 = *(_DWORD *)(a1 + 24);
    v6 = a1 + 16;
    while ( v5 != v6 )
    {
      if ( *(_DWORD *)(v5 + 16) & v2 && TaskGroup::isEmpty(*(TaskGroup **)(v5 + 20)) != 1 )
        goto LABEL_10;
      v5 = sub_21D4820(v5);
    }
    result = 1;
  }
  else
    while ( *(_BYTE *)(*(_DWORD *)v3 + 40) || !(*(_DWORD *)(*(_DWORD *)v3 + 4) & v2) )
      v3 += 8;
      if ( v4 == v3 )
        goto LABEL_5;
LABEL_10:
    result = 0;
  return result;
}


int __fastcall ResourceLoadManager::sync(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@1
  int i; // r6@2
  __int64 v6; // r0@7
  int j; // r6@11

  v2 = a1;
  v3 = a1 + 16;
  v4 = a2;
LABEL_2:
  while ( 1 )
  {
    for ( i = *(_DWORD *)(v2 + 24); i != v3; i = sub_21D47E8(i) )
    {
      if ( *(_DWORD *)(i + 16) & v4 )
        TaskGroup::sync_DEPRECATED_ASK_TOMMO(*(TaskGroup **)(i + 20));
    }
    v6 = *(_QWORD *)v2;
    if ( (_DWORD)v6 == HIDWORD(v6) )
      break;
    while ( *(_BYTE *)(*(_DWORD *)v6 + 40) || !(*(_DWORD *)(*(_DWORD *)v6 + 4) & v4) )
      LODWORD(v6) = v6 + 8;
      if ( HIDWORD(v6) == (_DWORD)v6 )
        goto LABEL_11;
  }
LABEL_11:
  for ( j = *(_DWORD *)(v2 + 24); j != v3; j = v6 )
    if ( *(_DWORD *)(j + 16) & v4 && TaskGroup::isEmpty(*(TaskGroup **)(j + 20)) != 1 )
      goto LABEL_2;
    LODWORD(v6) = sub_21D4820(j);
  return v6;
}


int __fastcall ResourceLoadManager::ResourceLoadTask::ResourceLoadTask(int a1, __int64 a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r9@1
  void (__fastcall *v7)(int, int, signed int); // r3@1
  void (__fastcall *v8)(int, int, signed int); // r3@3
  int result; // r0@5

  v5 = a1;
  v6 = a3;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a2;
  v7 = *(void (__fastcall **)(int, int, signed int))(a4 + 8);
  if ( v7 )
  {
    v7(a1 + 8, a4, 2);
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(a4 + 12);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(a4 + 8);
  }
  *(_DWORD *)(v5 + 32) = 0;
  v8 = *(void (__fastcall **)(int, int, signed int))(a5 + 8);
  if ( v8 )
    v8(v5 + 24, a5, 2);
    *(_DWORD *)(v5 + 36) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(a5 + 8);
  *(_BYTE *)(v5 + 40) = 0;
  *(_BYTE *)(v5 + 41) = 0;
  result = v5;
  *(_DWORD *)(v5 + 44) = v6;
  return result;
}


BackgroundTask *__fastcall ResourceLoadManager::ResourceLoadTask::start(ResourceLoadManager::ResourceLoadTask *this)
{
  ResourceLoadManager::ResourceLoadTask *v1; // r5@1
  TaskGroup *v2; // r4@1
  _DWORD *v3; // r0@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1
  BackgroundTask *result; // r0@1
  _DWORD *v7; // [sp+8h] [bp-30h]@1
  __int64 v8; // [sp+10h] [bp-28h]@1
  _DWORD *v9; // [sp+18h] [bp-20h]@1
  int (*v10)(void); // [sp+20h] [bp-18h]@1
  signed int (__fastcall *v11)(int **); // [sp+24h] [bp-14h]@1

  v1 = this;
  *((_BYTE *)this + 41) = 1;
  v2 = ResourceLoadManager::_getTaskGroupFor(*(_QWORD *)this, *(_QWORD *)this >> 32);
  v3 = operator new(4u);
  *v3 = v1;
  v9 = v3;
  v10 = (int (*)(void))sub_1584E24;
  v11 = sub_1584E0C;
  v4 = operator new(4u);
  LODWORD(v5) = sub_1584EBE;
  *v4 = v1;
  HIDWORD(v5) = sub_1584E5A;
  v7 = v4;
  v8 = v5;
  result = TaskGroup::queue((int)v2, (int)&v9, (int)&v7, 1u, 0xFFFFFFFF);
  if ( (_DWORD)v8 )
    result = (BackgroundTask *)((int (*)(void))v8)();
  if ( v10 )
    result = (BackgroundTask *)v10();
  return result;
}


BackgroundTask *__fastcall ResourceLoadManager::loadResource(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  __int64 v6; // r0@1
  int v7; // r5@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r0@7
  unsigned int *v10; // r6@11
  unsigned int v11; // r0@13
  BackgroundTask *result; // r0@18
  unsigned int v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+10h] [bp-20h]@2
  BackgroundTask *v15; // [sp+14h] [bp-1Ch]@1
  int v16; // [sp+18h] [bp-18h]@1
  char v17; // [sp+1Ch] [bp-14h]@1

  v5 = a1;
  v15 = (BackgroundTask *)a3;
  v16 = a2;
  j__ZNSt12__shared_ptrIN19ResourceLoadManager16ResourceLoadTaskELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJRS0_R16ResourceLoadTypeS9_RKSt8functionIFvvEESE_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v13,
    (int)&v17,
    a1,
    &v16,
    &v15,
    a4,
    a5);
  v6 = *(_QWORD *)(v5 + 4);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    std::vector<std::shared_ptr<ResourceLoadManager::ResourceLoadTask>,std::allocator<std::shared_ptr<ResourceLoadManager::ResourceLoadTask>>>::_M_emplace_back_aux<std::shared_ptr<ResourceLoadManager::ResourceLoadTask>>(
      (_QWORD *)v5,
      (int)&v13);
  }
  else
    *(_QWORD *)v6 = v13;
    HIDWORD(v6) = v14;
    v14 = 0;
    *(_DWORD *)(v6 + 4) = HIDWORD(v6);
    v13 = 0;
    *(_DWORD *)(v5 + 4) = v6 + 8;
  v7 = v14;
  if ( v14 )
    v8 = (unsigned int *)(v14 + 4);
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
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  result = v15;
  if ( !v15 )
    result = ResourceLoadManager::ResourceLoadTask::start(*(ResourceLoadManager::ResourceLoadTask **)(*(_DWORD *)(v5 + 4) - 8));
  return result;
}
