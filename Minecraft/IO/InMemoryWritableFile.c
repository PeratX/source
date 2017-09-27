

int __fastcall InMemoryWritableFile::Flush(int result)
{
  *(_DWORD *)result = 0;
  return result;
}


int __fastcall InMemoryWritableFile::Sync(int result)
{
  *(_DWORD *)result = 0;
  return result;
}


int __fastcall InMemoryWritableFile::~InMemoryWritableFile(InMemoryWritableFile *this)
{
  leveldb::WritableFile *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_2725A18;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return j_j_j__ZN7leveldb12WritableFileD2Ev_0(v1);
}


int __fastcall InMemoryWritableFile::InMemoryWritableFile(int a1, pthread_mutex_t **a2)
{
  int v2; // r4@1
  pthread_mutex_t **v3; // r5@1
  pthread_mutex_t *v4; // r1@1
  pthread_mutex_t *v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  void *v8; // r0@7
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  void *ptr; // [sp+0h] [bp-20h]@8
  int v13; // [sp+4h] [bp-1Ch]@7

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_2725A18;
  v4 = *a2;
  *(_DWORD *)(a1 + 4) = v4;
  v5 = v3[1];
  *(_DWORD *)(v2 + 8) = v5;
  if ( v5 )
  {
    v6 = &v5->__count;
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      v4 = *(pthread_mutex_t **)(v2 + 4);
    }
    else
      ++*v6;
  }
  j_InMemoryFile::getFilename((InMemoryFile *)&v13, v4);
  v8 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  j_InMemoryFile::open(&ptr, *v3, 1);
  if ( ptr )
    j_operator delete[](ptr);
  return v2;
}


void __fastcall InMemoryWritableFile::~InMemoryWritableFile(InMemoryWritableFile *this)
{
  InMemoryWritableFile::~InMemoryWritableFile(this);
}


void __fastcall InMemoryWritableFile::~InMemoryWritableFile(InMemoryWritableFile *this)
{
  leveldb::WritableFile *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_2725A18;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  j_leveldb::WritableFile::~WritableFile(v1);
  j_j_j__ZdlPv_7((void *)v1);
}
