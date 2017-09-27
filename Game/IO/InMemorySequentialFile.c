

void __fastcall InMemorySequentialFile::~InMemorySequentialFile(InMemorySequentialFile *this)
{
  InMemorySequentialFile::~InMemorySequentialFile(this);
}


void __fastcall InMemorySequentialFile::~InMemorySequentialFile(InMemorySequentialFile *this)
{
  InMemorySequentialFile *v1; // r0@1

  v1 = j_InMemorySequentialFile::~InMemorySequentialFile(this);
  j_j_j__ZdlPv_7((void *)v1);
}


InMemorySequentialFile *__fastcall InMemorySequentialFile::~InMemorySequentialFile(InMemorySequentialFile *this)
{
  InMemorySequentialFile *v1; // r4@1
  int v2; // r5@3
  unsigned int *v3; // r1@4
  unsigned int v4; // r0@6
  unsigned int *v5; // r6@10
  unsigned int v6; // r0@12
  void *ptr; // [sp+0h] [bp-18h]@1

  v1 = this;
  *(_DWORD *)this = &off_2725A00;
  j_InMemoryFile::close(&ptr, *((pthread_mutex_t **)this + 1), 0);
  if ( ptr )
    j_operator delete[](ptr);
  v2 = *((_DWORD *)v1 + 2);
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
  j_leveldb::SequentialFile::~SequentialFile(v1);
  return v1;
}


int __fastcall InMemorySequentialFile::InMemorySequentialFile(int a1, pthread_mutex_t **a2)
{
  int v2; // r4@1
  pthread_mutex_t **v3; // r2@1
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
  *(_DWORD *)a1 = &off_2725A00;
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
  *(_DWORD *)(v2 + 12) = 0;
  j_InMemoryFile::getFilename((InMemoryFile *)&v13, v4);
  v8 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  j_InMemoryFile::open(&ptr, *(pthread_mutex_t **)(v2 + 4), 0);
  if ( ptr )
    j_operator delete[](ptr);
  return v2;
}


int __fastcall InMemorySequentialFile::Read(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r9@1
  int v7; // r6@1
  int v8; // r7@1
  void *v9; // r0@1
  int result; // r0@2
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  int v13; // [sp+10h] [bp-28h]@2
  int v14; // [sp+14h] [bp-24h]@1

  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = a3;
  j_InMemoryFile::getFilename((InMemoryFile *)&v14, *(pthread_mutex_t **)(a2 + 4));
  v9 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  v13 = 0;
  j_InMemoryFile::read(v6, *(pthread_mutex_t **)(v5 + 4), *(_DWORD *)(v5 + 12), 0, v8, v7, a5, &v13);
  result = *(_DWORD *)(v5 + 12) + v13;
  *(_DWORD *)(v5 + 12) = result;
  return result;
}


int __fastcall InMemorySequentialFile::Skip(int result, int a2, unsigned __int64 a3)
{
  *(_DWORD *)(a2 + 12) += a3;
  *(_DWORD *)result = 0;
  return result;
}
