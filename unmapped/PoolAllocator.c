

signed int __fastcall PoolAllocator::trim(PoolAllocator *this)
{
  PoolAllocator *v1; // r5@1
  pthread_mutex_t *v2; // r4@1
  int v3; // r0@2
  void **v4; // r1@3
  int v5; // r0@8
  signed int v6; // r5@10

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 52);
  if ( &pthread_create )
  {
    v3 = pthread_mutex_lock(v2);
    if ( v3 )
      sub_21E5E14(v3);
  }
  v4 = (void **)*((_DWORD *)v1 + 4);
  if ( *((void ***)v1 + 8) == v4 )
    v6 = 0;
  else
    do
    {
      if ( *v4 )
      {
        free(*v4);
        v4 = (void **)*((_DWORD *)v1 + 4);
      }
      if ( v4 == (void **)(*((_DWORD *)v1 + 6) - 4) )
        operator delete(*((void **)v1 + 5));
        v5 = *((_DWORD *)v1 + 7);
        *((_DWORD *)v1 + 7) = v5 + 4;
        v4 = *(void ***)(v5 + 4);
        *((_DWORD *)v1 + 5) = v4;
        *((_DWORD *)v1 + 6) = v4 + 128;
      else
        ++v4;
      *((_DWORD *)v1 + 4) = v4;
      --*((_DWORD *)v1 + 12);
    }
    while ( *((void ***)v1 + 8) != v4 );
    v6 = 1;
    pthread_mutex_unlock(v2);
  return v6;
}


void *__fastcall PoolAllocator::get(PoolAllocator *this)
{
  PoolAllocator *v1; // r5@1
  pthread_mutex_t *v2; // r4@1
  int v3; // r0@2
  void **v4; // r0@3
  void *v5; // r6@4
  int v6; // r0@5
  int v7; // r0@7

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 52);
  if ( &pthread_create )
  {
    v3 = pthread_mutex_lock(v2);
    if ( v3 )
      sub_21E5E14(v3);
  }
  v4 = (void **)*((_DWORD *)v1 + 4);
  if ( *((void ***)v1 + 8) == v4 )
    v5 = malloc(*(_DWORD *)v1);
    ++*((_DWORD *)v1 + 12);
  else
    v5 = *v4;
    if ( v4 == (void **)(*((_DWORD *)v1 + 6) - 4) )
    {
      operator delete(*((void **)v1 + 5));
      v7 = *((_DWORD *)v1 + 7);
      *((_DWORD *)v1 + 7) = v7 + 4;
      v6 = *(_DWORD *)(v7 + 4);
      *((_DWORD *)v1 + 5) = v6;
      *((_DWORD *)v1 + 6) = v6 + 512;
    }
    else
      v6 = (int)(v4 + 1);
    *((_DWORD *)v1 + 4) = v6;
    pthread_mutex_unlock(v2);
  return v5;
}


PoolAllocator *__fastcall PoolAllocator::~PoolAllocator(PoolAllocator *this)
{
  PoolAllocator *v1; // r4@1
  void **v2; // r1@1
  int v3; // r0@7
  void *v4; // r0@8
  unsigned int v5; // r5@9
  unsigned int v6; // r1@9
  unsigned int v7; // r6@10
  void *v8; // t1@11

  v1 = this;
  v2 = (void **)*((_DWORD *)this + 4);
  while ( *((void ***)v1 + 8) != v2 )
  {
    if ( *v2 )
    {
      free(*v2);
      v2 = (void **)*((_DWORD *)v1 + 4);
    }
    if ( v2 == (void **)(*((_DWORD *)v1 + 6) - 4) )
      operator delete(*((void **)v1 + 5));
      v3 = *((_DWORD *)v1 + 7);
      *((_DWORD *)v1 + 7) = v3 + 4;
      v2 = *(void ***)(v3 + 4);
      *((_DWORD *)v1 + 5) = v2;
      *((_DWORD *)v1 + 6) = v2 + 128;
      *((_DWORD *)v1 + 4) = v2;
    else
      ++v2;
  }
  v4 = (void *)*((_DWORD *)v1 + 2);
  if ( v4 )
    v5 = *((_DWORD *)v1 + 11);
    v6 = *((_DWORD *)v1 + 7);
    if ( v6 < v5 + 4 )
      v7 = v6 - 4;
      do
      {
        v8 = *(void **)(v7 + 4);
        v7 += 4;
        operator delete(v8);
      }
      while ( v7 < v5 );
      v4 = (void *)*((_DWORD *)v1 + 2);
    operator delete(v4);
  return v1;
}


int (**__fastcall PoolAllocator::release(PoolAllocator *this, void *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  PoolAllocator *v2; // r5@1
  pthread_mutex_t *v3; // r4@1
  void *v4; // r6@1
  int v5; // r0@2
  _DWORD *v6; // r0@3
  int v7; // r0@4
  int v8; // r0@7
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@8

  v2 = this;
  v3 = (pthread_mutex_t *)((char *)this + 52);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = (_DWORD *)*((_DWORD *)v2 + 8);
  if ( v6 == (_DWORD *)(*((_DWORD *)v2 + 10) - 4) )
    if ( (unsigned int)((*((_QWORD *)v2 + 1) >> 32) - ((signed int)(*((_DWORD *)v2 + 11) - *((_QWORD *)v2 + 1)) >> 2)) <= 1 )
      std::deque<void *,std::allocator<void *>>::_M_reallocate_map((int)v2 + 8, 1u, 0);
    *(_DWORD *)(*((_DWORD *)v2 + 11) + 4) = operator new(0x200u);
    **((_DWORD **)v2 + 8) = v4;
    v8 = *((_DWORD *)v2 + 11);
    *((_DWORD *)v2 + 11) = v8 + 4;
    v7 = *(_DWORD *)(v8 + 4);
    *((_DWORD *)v2 + 9) = v7;
    *((_DWORD *)v2 + 10) = v7 + 512;
  else
    *v6 = v4;
    v7 = *((_DWORD *)v2 + 8) + 4;
  *((_DWORD *)v2 + 8) = v7;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v3);
  return result;
}


int __fastcall PoolAllocator::PoolAllocator(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r1@1
  __int64 v4; // kr00_8@2
  __int64 v5; // kr08_8@2
  __int64 v6; // kr10_8@2
  __int64 v7; // kr18_8@2
  __int64 v8; // kr20_8@2
  __int64 v9; // kr28_8@2
  void *v10; // r5@2
  int v11; // r0@2
  unsigned int v12; // r7@4
  void *v13; // t1@5
  int v15; // [sp+0h] [bp-40h]@1
  int v16; // [sp+4h] [bp-3Ch]@2
  __int64 v17; // [sp+8h] [bp-38h]@2
  __int64 v18; // [sp+10h] [bp-30h]@2
  __int64 v19; // [sp+18h] [bp-28h]@2
  __int64 v20; // [sp+20h] [bp-20h]@2

  v2 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = pthread_self();
  _aeabi_memclr8(&v15, 40);
  std::_Deque_base<void *,std::allocator<void *>>::_M_initialize_map((int)&v15, 0);
  _aeabi_memclr4(v2 + 8, 40);
  std::_Deque_base<void *,std::allocator<void *>>::_M_initialize_map(v2 + 8, 0);
  v3 = v15;
  if ( v15 )
  {
    v4 = *(_QWORD *)(v2 + 16);
    v5 = *(_QWORD *)(v2 + 24);
    v6 = v17;
    *(_QWORD *)(v2 + 24) = v18;
    *(_QWORD *)(v2 + 16) = v6;
    v17 = v4;
    v18 = v5;
    v7 = *(_QWORD *)(v2 + 32);
    v8 = *(_QWORD *)(v2 + 40);
    v9 = v19;
    *(_QWORD *)(v2 + 40) = v20;
    *(_QWORD *)(v2 + 32) = v9;
    v19 = v7;
    v20 = v8;
    v10 = *(void **)(v2 + 8);
    *(_DWORD *)(v2 + 8) = v3;
    v15 = (int)v10;
    v11 = *(_DWORD *)(v2 + 12);
    *(_DWORD *)(v2 + 12) = v16;
    v16 = v11;
    if ( v10 )
    {
      if ( HIDWORD(v5) < HIDWORD(v8) + 4 )
      {
        v12 = HIDWORD(v5) - 4;
        do
        {
          v13 = *(void **)(v12 + 4);
          v12 += 4;
          operator delete(v13);
        }
        while ( v12 < HIDWORD(v8) );
      }
      operator delete(v10);
    }
  }
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 52) = 0;
  return v2;
}
