

RakNet *__fastcall EncryptedProxyEnv::NewSequentialFile(leveldb::Status **a1, int a2, int a3, _DWORD *a4)
{
  leveldb::Status **v4; // r4@1
  int v5; // r9@1
  _DWORD *v6; // r8@1
  leveldb::Status *v7; // r1@2
  leveldb::Status *v8; // r0@2
  void *v9; // r1@6
  signed int v10; // r5@14
  leveldb::Status *v11; // r1@21
  void *v12; // r0@21
  leveldb::Status *v13; // r1@25
  void *v14; // r7@33
  const char *v15; // r1@33
  leveldb::Status *v16; // r6@33
  leveldb::Status *v17; // r0@33
  leveldb::Status *v18; // r0@37
  RakNet *result; // r0@45
  leveldb::Status *v20; // [sp+8h] [bp-140h]@33
  leveldb::Status *v21; // [sp+Ch] [bp-13Ch]@21
  void *ptr; // [sp+10h] [bp-138h]@2
  void *v23; // [sp+14h] [bp-134h]@2
  int v24; // [sp+18h] [bp-130h]@2
  int v25; // [sp+1Ch] [bp-12Ch]@1
  char v26; // [sp+20h] [bp-128h]@2
  int v27; // [sp+24h] [bp-124h]@14
  RakNet *v28; // [sp+128h] [bp-20h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v28 = _stack_chk_guard;
  v25 = 0;
  (*(void (**)(void))(**(_DWORD **)(a2 + 8) + 8))();
  if ( !*v4 )
  {
    j___aeabi_memclr8_0((int)&v26, 256);
    v23 = &unk_257BC67;
    v24 = 0;
    (*(void (__fastcall **)(void **))(*(_DWORD *)v25 + 8))(&ptr);
    v7 = (leveldb::Status *)ptr;
    v8 = *v4;
    if ( (void *)*v4 == ptr )
    {
      v9 = (void *)*v4;
    }
    else
      if ( v8 )
      {
        j_operator delete[]((void *)v8);
        v7 = (leveldb::Status *)ptr;
      }
      if ( v7 )
        v8 = (leveldb::Status *)j_leveldb::Status::CopyState(v7, (const char *)v7);
        v9 = ptr;
      else
        v9 = 0;
        v8 = 0;
      *v4 = v8;
    if ( v9 )
      j_operator delete[](v9);
      v8 = *v4;
    if ( !v8 )
      if ( v24 == 256 )
        v10 = 0;
        if ( v27 == -1680885252 && !v26 )
          v10 = 1;
      if ( v25 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v25 + 4))(v25);
      v25 = 0;
      (*(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)(v5 + 8) + 8))(&v21);
      v11 = v21;
      v12 = (void *)*v4;
      if ( *v4 == v21 )
        v13 = *v4;
        if ( v12 )
        {
          j_operator delete[](v12);
          v11 = v21;
        }
        if ( v11 )
          v12 = j_leveldb::Status::CopyState(v11, (const char *)v11);
          v13 = v21;
        else
          v13 = 0;
          v12 = 0;
        *v4 = (leveldb::Status *)v12;
      if ( v13 )
        j_operator delete[]((void *)v13);
        v12 = (void *)*v4;
      if ( !v12 )
        if ( v10 == 1 )
          v14 = j_operator new(0x10u);
          j_leveldb::SequentialFileEncrypted::SequentialFileEncrypted((int)v14, v25, (int *)(v5 + 12));
          j_leveldb::SequentialFileEncrypted::init(&v20, (int)v14, (const void **)(v5 + 16));
          v16 = v20;
          v17 = *v4;
          if ( *v4 == v20 )
          {
            v16 = *v4;
          }
          else
            if ( v17 )
              j_operator delete[]((void *)v17);
            if ( v16 )
              v18 = (leveldb::Status *)j_leveldb::Status::CopyState(v16, v15);
            else
              v18 = 0;
            *v4 = v18;
          if ( v16 )
            j_operator delete[]((void *)v16);
          *v6 = v14;
          *v6 = v25;
  }
  result = (RakNet *)(_stack_chk_guard - v28);
  if ( _stack_chk_guard != v28 )
    j___stack_chk_fail_0((int)result);
  return result;
}


void __fastcall EncryptedProxyEnv::~EncryptedProxyEnv(EncryptedProxyEnv *this)
{
  EncryptedProxyEnv::~EncryptedProxyEnv(this);
}


void __fastcall EncryptedProxyEnv::~EncryptedProxyEnv(EncryptedProxyEnv *this)
{
  EncryptedProxyEnv *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_2724C44;
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
  v4 = *((_DWORD *)v1 + 3);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_leveldb::Env::~Env(v1);
  j_operator delete((void *)v1);
}


EncryptedProxyEnv *__fastcall EncryptedProxyEnv::~EncryptedProxyEnv(EncryptedProxyEnv *this)
{
  EncryptedProxyEnv *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_2724C44;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 3);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_leveldb::Env::~Env(v1);
  return v1;
}


int __fastcall EncryptedProxyEnv::NewWritableFile(int *a1, int a2, int *a3, _DWORD *a4)
{
  int *v4; // r4@1
  int v5; // r6@1
  _DWORD *v6; // r8@1
  int *v7; // r7@1
  int result; // r0@1
  void *v9; // r7@4
  int v10; // [sp+4h] [bp-1Ch]@1

  v4 = a1;
  v5 = a2;
  v10 = 0;
  v6 = a4;
  v7 = a3;
  (*(void (**)(void))(**(_DWORD **)(a2 + 8) + 16))();
  result = *v4;
  if ( !*v4 )
  {
    if ( sub_21E76A0(v7, ".log", 0, 4u) == -1 )
    {
      v9 = j_operator new(0x10u);
      result = j_leveldb::WritableFileEncrypted::WritableFileEncrypted((int)v9, v10, (int *)(v5 + 16), (int *)(v5 + 12));
      *v6 = v9;
    }
    else
      result = v10;
      *v6 = v10;
  }
  return result;
}


void __fastcall EncryptedProxyEnv::NewRandomAccessFile(leveldb::Status **a1, int a2, int a3, _DWORD *a4)
{
  EncryptedProxyEnv::NewRandomAccessFile(a1, a2, a3, a4);
}


int __fastcall EncryptedProxyEnv::EncryptedProxyEnv(__int64 a1, int *a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1

  v3 = a1;
  v4 = a2;
  LODWORD(a1) = &off_2724C44;
  *(_QWORD *)v3 = a1;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  sub_21E8AF4((int *)(v3 + 12), a3);
  sub_21E8AF4((int *)(v3 + 16), v4);
  return v3;
}


void __fastcall EncryptedProxyEnv::NewRandomAccessFile(leveldb::Status **a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r4@1
  int *v5; // r7@1
  void *v6; // r0@1
  void *v7; // r6@1
  char *v8; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  char *v11; // [sp+0h] [bp-28h]@1

  v4 = a4;
  v5 = (int *)a3;
  v11 = (char *)&unk_28898CC;
  j_leveldb::ReadFileToString(a1, a2, a3, (const void **)&v11);
  v6 = j_operator new(0xCu);
  v7 = v6;
  *(_DWORD *)v6 = &off_2724CD4;
  sub_21E8AF4((int *)v6 + 1, v5);
  sub_21E8AF4((int *)v7 + 2, (int *)&v11);
  *v4 = v7;
  v8 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
}
