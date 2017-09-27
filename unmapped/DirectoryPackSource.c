

DirectoryPackSource *__fastcall DirectoryPackSource::~DirectoryPackSource(DirectoryPackSource *this)
{
  DirectoryPackSource *v1; // r4@1
  Pack **v2; // r5@1 OVERLAPPED
  Pack **v3; // r6@1 OVERLAPPED
  Pack *v4; // r0@3
  int v5; // r1@8
  void *v6; // r0@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26EABD4;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 20);
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 )
      {
        v4 = Pack::~Pack(*v2);
        operator delete((void *)v4);
      }
      *v2 = 0;
      ++v2;
    }
    while ( v3 != v2 );
    v2 = (Pack **)*((_DWORD *)v1 + 5);
  }
  if ( v2 )
    operator delete(v2);
  v5 = *((_DWORD *)v1 + 1);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  return v1;
}


int __fastcall DirectoryPackSource::DirectoryPackSource(int a1, int *a2, char a3, int a4, int a5, char a6)
{
  int v6; // r6@1
  int v7; // r4@1
  char v8; // r5@1
  char v9; // r2@1
  int result; // r0@3

  v6 = a1;
  v7 = a4;
  v8 = a3;
  *(_DWORD *)a1 = &off_26EABD4;
  sub_21E8AF4((int *)(a1 + 4), a2);
  *(_BYTE *)(v6 + 8) = v8;
  *(_DWORD *)(v6 + 12) = v7;
  *(_BYTE *)(v6 + 16) = a6;
  v9 = a5;
  *(_BYTE *)(v6 + 17) = 0;
  if ( (v7 | 2) == 7 )
    v9 = 1;
  *(_BYTE *)(v6 + 18) = v9;
  *(_BYTE *)(v6 + 19) = a5;
  result = v6;
  *(_DWORD *)(v6 + 20) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 28) = 0;
  return result;
}


char *__fastcall DirectoryPackSource::getPath(DirectoryPackSource *this)
{
  return (char *)this + 4;
}


signed int __fastcall DirectoryPackSource::load(int a1, int a2, int a3, int a4)
{
  int v4; // r10@1
  int v5; // r11@1
  int v6; // r6@1
  int v7; // r8@1
  int v8; // r9@1
  unsigned int v9; // r0@1
  int v10; // r7@3
  void *v11; // r6@3
  signed int result; // r0@5
  __int64 v13; // kr00_8@6
  Pack **v14; // r6@7
  Pack *v15; // r0@9
  _DWORD *v16; // r0@11
  __int64 v17; // r1@11
  _DWORD *v18; // [sp+4h] [bp-54h]@11
  __int64 v19; // [sp+Ch] [bp-4Ch]@11
  int v20; // [sp+14h] [bp-44h]@11
  int v21; // [sp+18h] [bp-40h]@11
  char v22; // [sp+1Ch] [bp-3Ch]@11
  void (*v23)(void); // [sp+24h] [bp-34h]@11

  v4 = a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v5 = a2;
  *(_DWORD *)(a1 + 16) = 1065353216;
  v6 = a1 + 16;
  v7 = a4;
  v8 = a3;
  *(_DWORD *)(a1 + 20) = 0;
  v9 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 16)));
  *(_DWORD *)(v6 - 12) = v9;
  if ( v9 == 1 )
  {
    *(_DWORD *)(v4 + 24) = 0;
    v11 = (void *)(v4 + 24);
  }
  else
    if ( v9 >= 0x40000000 )
      sub_21E57F4();
    v10 = 4 * v9;
    v11 = operator new(4 * v9);
    _aeabi_memclr4(v11, v10);
  *(_DWORD *)v4 = v11;
  if ( !*(_BYTE *)(v5 + 17) || (result = *(_BYTE *)(v5 + 18)) != 0 )
    v13 = *(_QWORD *)(v5 + 20);
    if ( HIDWORD(v13) != (_DWORD)v13 )
    {
      v14 = (Pack **)v13;
      do
      {
        if ( *v14 )
        {
          v15 = Pack::~Pack(*v14);
          operator delete((void *)v15);
        }
        *v14 = 0;
        ++v14;
      }
      while ( (Pack **)HIDWORD(v13) != v14 );
    }
    *(_DWORD *)(v5 + 24) = v13;
    v20 = *(_DWORD *)(v5 + 4);
    v21 = *(_DWORD *)(v20 - 12);
    v16 = operator new(0x10u);
    LODWORD(v17) = sub_1581E2C;
    *v16 = v5;
    v16[1] = v8;
    HIDWORD(v17) = sub_1581C34;
    v16[2] = v7;
    v16[3] = v4;
    v18 = v16;
    v19 = v17;
    Core::FileSystem::iterateOverDirectory((int)&v22, (__int64 *)&v20, 386LL, (int)&v18);
    if ( v23 )
      v23();
    if ( (_DWORD)v19 )
      ((void (*)(void))v19)();
    result = 1;
    *(_BYTE *)(v5 + 17) = 1;
  return result;
}


void __fastcall DirectoryPackSource::~DirectoryPackSource(DirectoryPackSource *this)
{
  DirectoryPackSource *v1; // r4@1
  Pack **v2; // r5@1 OVERLAPPED
  Pack **v3; // r6@1 OVERLAPPED
  Pack *v4; // r0@3
  int v5; // r1@8
  void *v6; // r0@8
  unsigned int *v7; // r2@10
  signed int v8; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26EABD4;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 20);
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 )
      {
        v4 = Pack::~Pack(*v2);
        operator delete((void *)v4);
      }
      *v2 = 0;
      ++v2;
    }
    while ( v3 != v2 );
    v2 = (Pack **)*((_DWORD *)v1 + 5);
  }
  if ( v2 )
    operator delete(v2);
  v5 = *((_DWORD *)v1 + 1);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  operator delete((void *)v1);
}


int __fastcall DirectoryPackSource::forEachPackConst(int result, int a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1
  int v5; // t1@3

  *(_QWORD *)&v2 = *(_QWORD *)(result + 20);
  for ( i = a2; v3 != v2; result = (*(int (__fastcall **)(int, int))(i + 12))(i, v5) )
  {
    if ( !*(_DWORD *)(i + 8) )
      sub_21E5F48();
    v5 = *v2;
    ++v2;
  }
  return result;
}


void __fastcall DirectoryPackSource::~DirectoryPackSource(DirectoryPackSource *this)
{
  DirectoryPackSource::~DirectoryPackSource(this);
}


signed int __fastcall DirectoryPackSource::isCopyable(DirectoryPackSource *this)
{
  DirectoryPackSource *v1; // r4@1
  int v2; // r1@1
  signed int result; // r0@1

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 16))();
  result = 0;
  if ( v2 == 4 && !*((_BYTE *)v1 + 19) )
    result = 1;
  return result;
}


int __fastcall DirectoryPackSource::addPack(int result, int *a2)
{
  int v2; // r2@1
  __int64 v3; // kr00_8@2

  v2 = *a2;
  if ( *a2 )
  {
    v3 = *(_QWORD *)(result + 24);
    if ( (_DWORD)v3 == HIDWORD(v3) )
    {
      result = (int)j_j_j__ZNSt6vectorISt10unique_ptrI4PackSt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
                      (_QWORD *)(result + 20),
                      a2);
    }
    else
      *a2 = 0;
      *(_DWORD *)v3 = v2;
      *(_DWORD *)(result + 24) += 4;
  }
  return result;
}


int __fastcall DirectoryPackSource::forEachPack(int result, int a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1
  int v5; // t1@3

  *(_QWORD *)&v2 = *(_QWORD *)(result + 20);
  for ( i = a2; v3 != v2; result = (*(int (__fastcall **)(int, int))(i + 12))(i, v5) )
  {
    if ( !*(_DWORD *)(i + 8) )
      sub_21E5F48();
    v5 = *v2;
    ++v2;
  }
  return result;
}


signed int __fastcall DirectoryPackSource::removePack(int a1, const void **a2)
{
  int v2; // r10@1
  Pack **v3; // r6@1
  const void **v4; // r11@1
  int v5; // r0@2
  int v6; // r0@2
  char *v7; // r6@2
  size_t v8; // r2@2
  char *v9; // r7@2
  signed int v10; // r8@3
  unsigned int *v11; // r1@10
  signed int v12; // r0@12
  Pack **v13; // r4@17
  int v15; // r0@19
  int v16; // r5@21
  Pack *v17; // r1@22
  Pack *v18; // r0@22
  Pack *v19; // r0@23
  _DWORD *v20; // r4@27
  Pack *v21; // r0@27
  Pack *v22; // r0@28
  void *s1; // [sp+4h] [bp-2Ch]@2

  v2 = a1;
  v3 = *(Pack ***)(a1 + 20);
  v4 = a2;
  do
  {
    v13 = v3;
    if ( v3 == *(Pack ***)(v2 + 24) )
      return 0;
    v5 = Pack::getAccessStrategy(*v3);
    v6 = (*(int (**)(void))(*(_DWORD *)v5 + 16))();
    ResourceLocation::getFullPath((ResourceLocation *)&s1, v6);
    v7 = (char *)s1;
    v9 = (char *)s1 - 12;
    v8 = *((_DWORD *)s1 - 3);
    if ( v8 == *((_DWORD *)*v4 - 3) )
    {
      v10 = 0;
      if ( !memcmp(s1, *v4, v8) )
        v10 = 1;
    }
    else
    if ( (int *)v9 != &dword_28898C0 )
      v11 = (unsigned int *)(v7 - 4);
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
    v3 = v13 + 1;
  }
  while ( v10 != 1 );
  v15 = *(_DWORD *)(v2 + 24);
  if ( v3 == (Pack **)v15 )
    v15 = (int)(v13 + 1);
  else if ( v15 - (signed int)v3 >= 1 )
    v16 = ((v15 - (signed int)v3) >> 2) + 1;
    do
      v17 = *v3;
      *v3 = 0;
      v18 = *v13;
      *v13 = v17;
      if ( v18 )
        v19 = Pack::~Pack(v18);
        operator delete((void *)v19);
      --v16;
      ++v13;
      ++v3;
    while ( v16 > 1 );
    v15 = *(_DWORD *)(v2 + 24);
  v20 = (_DWORD *)(v15 - 4);
  *(_DWORD *)(v2 + 24) = v15 - 4;
  v21 = *(Pack **)(v15 - 4);
  if ( v21 )
    v22 = Pack::~Pack(v21);
    operator delete((void *)v22);
  *v20 = 0;
  return 1;
}
