

int (**__fastcall InMemoryFile::read(int a1, pthread_mutex_t *mutex, int a3, int a4, int a5, int a6, int a7, int *a8))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  _DWORD *v8; // r5@1
  int v9; // r6@1
  pthread_mutex_t *v10; // r4@1
  int v11; // r0@2
  int v12; // r2@3
  __int64 v13; // r0@3
  int v14; // r1@5
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@7

  v8 = (_DWORD *)a1;
  v9 = a3;
  v10 = mutex;
  if ( &pthread_create )
  {
    v11 = j_pthread_mutex_lock_0(mutex);
    if ( v11 )
      sub_21E5E14(v11);
  }
  v12 = a5;
  v13 = *(_QWORD *)&v10->__count;
  HIDWORD(v13) = HIDWORD(v13) - v13 - v9;
  if ( HIDWORD(v13) < a5 )
    v12 = HIDWORD(v13);
  v14 = 0;
  *a8 = v12;
  if ( v12 )
    j___aeabi_memcpy_0(a7, v13 + v9, v12);
    v14 = *a8;
  *(_DWORD *)a6 = a7;
  *(_DWORD *)(a6 + 4) = v14;
  *v8 = 0;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v10);
  return result;
}


int (**__fastcall InMemoryFile::getFilename(InMemoryFile *this, pthread_mutex_t *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int *v2; // r5@1
  pthread_mutex_t *v3; // r4@1
  int v4; // r0@2
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@3

  v2 = (int *)this;
  v3 = a2;
  if ( &pthread_create )
  {
    v4 = j_pthread_mutex_lock_0(a2);
    if ( v4 )
      sub_21E5E14(v4);
  }
  sub_21E8AF4(v2, (int *)&v3->__nusers);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v3);
  return result;
}


int (**__fastcall InMemoryFile::rename(pthread_mutex_t *mutex, int *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  pthread_mutex_t *v2; // r4@1
  int *v3; // r5@1
  int v4; // r0@2
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@3

  v2 = mutex;
  v3 = a2;
  if ( &pthread_create )
  {
    v4 = j_pthread_mutex_lock_0(mutex);
    if ( v4 )
      sub_21E5E14(v4);
  }
  EntityInteraction::setInteractText((int *)&v2->__nusers, v3);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v2);
  return result;
}


int (**__fastcall InMemoryFile::flushToDisk(InMemoryFile *this, leveldb::Env *a2, int a3))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  leveldb::Status **v3; // r6@1
  int v4; // r5@1
  leveldb::Env *v5; // r4@1
  int v6; // r0@2
  __int64 v7; // r0@5
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@6
  int v9; // [sp+0h] [bp-18h]@5
  int v10; // [sp+4h] [bp-14h]@5

  v3 = (leveldb::Status **)this;
  v4 = a3;
  v5 = a2;
  if ( &pthread_create )
  {
    v6 = j_pthread_mutex_lock_0((pthread_mutex_t *)a2);
    if ( v6 )
      sub_21E5E14(v6);
  }
  if ( *((_BYTE *)v5 + 28) )
    *v3 = 0;
  else
    v7 = *(_QWORD *)((char *)v5 + 4);
    v9 = v7;
    v10 = HIDWORD(v7) - v7;
    j_leveldb::WriteStringToFile(v3, v4, (int)&v9, (int)v5 + 16);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0((pthread_mutex_t *)v5);
  return result;
}


int (**__fastcall InMemoryFile::open(_DWORD *a1, pthread_mutex_t *a2, int a3))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  _DWORD *v3; // r5@1
  int v4; // r6@1
  pthread_mutex_t *v5; // r4@1
  int v6; // r0@2
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@8

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( &pthread_create )
  {
    v6 = j_pthread_mutex_lock_0(a2);
    if ( v6 )
      sub_21E5E14(v6);
  }
  if ( v4 == 1 )
    LOBYTE(v5->__spins) = 1;
  else if ( !v4 )
    ++v5[1].__lock;
  *v3 = 0;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v5);
  return result;
}


InMemoryFile *__fastcall InMemoryFile::~InMemoryFile(InMemoryFile *this)
{
  InMemoryFile *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int *v6; // r2@5
  signed int v7; // r1@7

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)*((_DWORD *)v1 + 1);
  if ( v4 )
    j_operator delete(v4);
  return v1;
}


int __fastcall InMemoryFile::InMemoryFile(int a1, int *a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  sub_21E8AF4((int *)(a1 + 16), a2);
  result = v2;
  *(_BYTE *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_BYTE *)(v2 + 28) = 0;
  return result;
}


int (**__fastcall InMemoryFile::append(_DWORD *a1, pthread_mutex_t *a2, unsigned __int64 *a3))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  _DWORD *v3; // r5@1
  unsigned __int64 *v4; // r6@1
  pthread_mutex_t *v5; // r4@1
  int v6; // r0@2
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@3

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( &pthread_create )
  {
    v6 = j_pthread_mutex_lock_0(a2);
    if ( v6 )
      sub_21E5E14(v6);
  }
  j_std::copy<char const*,std::back_insert_iterator<std::vector<char,std::allocator<char>>>>(
    (_BYTE *)*v4,
    (*v4 >> 32) + *v4,
    (int)&v5->__count);
  *v3 = 0;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v5);
  return result;
}


int (**__fastcall InMemoryFile::close(_DWORD *a1, pthread_mutex_t *a2, int a3))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  _DWORD *v3; // r5@1
  int v4; // r6@1
  pthread_mutex_t *v5; // r4@1
  int v6; // r0@2
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@8

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( &pthread_create )
  {
    v6 = j_pthread_mutex_lock_0(a2);
    if ( v6 )
      sub_21E5E14(v6);
  }
  if ( v4 == 1 )
    LOBYTE(v5->__spins) = 0;
  else if ( !v4 )
    --v5[1].__lock;
  *v3 = 0;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v5);
  return result;
}


signed int __fastcall InMemoryFile::isSafeToDelete(pthread_mutex_t *mutex)
{
  pthread_mutex_t *v1; // r4@1
  int v2; // r0@2
  signed int v3; // r5@4

  v1 = mutex;
  if ( &pthread_create )
  {
    v2 = j_pthread_mutex_lock_0(mutex);
    if ( v2 )
      sub_21E5E14(v2);
  }
  if ( v1[1].__size[4] )
    v3 = 1;
  else
    v3 = 0;
    if ( !LOBYTE(v1->__spins) && !v1[1].__lock )
      v3 = 1;
    j_pthread_mutex_unlock_0(v1);
  return v3;
}
