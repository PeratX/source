

void __fastcall FileCopyProgressHandler::onStart(FileCopyProgressHandler *this, MinecraftScreenModel *a2)
{
  FileCopyProgressHandler::onStart(this, a2);
}


int __fastcall FileCopyProgressHandler::tick(int result, MinecraftScreenModel *a2)
{
  MinecraftScreenModel *v2; // r4@1

  v2 = a2;
  if ( *(_BYTE *)(result + 33) )
  {
    if ( *(_DWORD *)(result + 52) )
      (*(void (__fastcall **)(_DWORD, _DWORD))(result + 56))(result + 44, *(_BYTE *)(result + 34));
    result = j_j_j__ZN20MinecraftScreenModel11leaveScreenEv(v2);
  }
  return result;
}


void __fastcall FileCopyProgressHandler::onStart(FileCopyProgressHandler *this, MinecraftScreenModel *a2)
{
  FileCopyProgressHandler *v2; // r5@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r7@6
  int v7; // r6@6
  unsigned int v8; // r1@10
  _DWORD *v9; // r0@13
  unsigned int *v10; // r1@14
  unsigned int v11; // r2@16
  __int64 v12; // r1@19
  unsigned int *v13; // r5@26
  unsigned int v14; // r0@28
  unsigned int v15; // r0@35
  _DWORD *v16; // [sp+8h] [bp-28h]@19
  void (*v17)(void); // [sp+10h] [bp-20h]@13

  v2 = this;
  v3 = *(_QWORD *)((char *)this + 36);
  if ( HIDWORD(v3) )
  {
    v4 = (unsigned int *)(HIDWORD(v3) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
    v6 = *((_BYTE *)v2 + 24);
    v7 = *((_BYTE *)v2 + 32);
        v8 = __ldrex(v4);
      while ( __strex(v8 + 1, v4) );
  }
  else
    v6 = *((_BYTE *)this + 24);
    v7 = *((_BYTE *)this + 32);
  v17 = 0;
  v9 = operator new(0xCu);
  *(_QWORD *)v9 = v3;
    v10 = (unsigned int *)(HIDWORD(v3) + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  LODWORD(v12) = sub_C9C900;
  v9[2] = v2;
  HIDWORD(v12) = sub_C9C8E0;
  v16 = v9;
  *(_QWORD *)&v17 = v12;
  if ( v6 )
    LOBYTE(v6) = 1;
  if ( v7 )
    LOBYTE(v7) = 1;
  PackMover::copyPack((int)v2 + 16, v6, (int *)v2 + 7, v7, 0, (int)&v16);
  if ( v17 )
    v17();
    v13 = (unsigned int *)(HIDWORD(v3) + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
        v15 = __ldrex(v13);
      while ( __strex(v15 - 1, v13) );
      v15 = (*v13)--;
    if ( v15 == 1 )
}


FileCopyProgressHandler *__fastcall FileCopyProgressHandler::~FileCopyProgressHandler(FileCopyProgressHandler *this)
{
  FileCopyProgressHandler *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r5@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r0@6
  unsigned int *v6; // r6@10
  unsigned int v7; // r0@12
  int v8; // r1@17
  void *v9; // r0@17
  int v10; // r1@18
  void *v11; // r0@18
  int v12; // r1@19
  void *v13; // r0@19
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  unsigned int *v19; // r2@29
  signed int v20; // r1@31

  v1 = this;
  *(_DWORD *)this = &off_26D7708;
  v2 = (void (*)(void))*((_DWORD *)this + 13);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 10);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
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
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  v8 = *((_DWORD *)v1 + 7);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v8 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 4);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v10 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 3);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v12 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  return v1;
}


void __fastcall FileCopyProgressHandler::~FileCopyProgressHandler(FileCopyProgressHandler *this)
{
  FileCopyProgressHandler *v1; // r0@1

  v1 = FileCopyProgressHandler::~FileCopyProgressHandler(this);
  j_j_j__ZdlPv_3((void *)v1);
}


signed int __fastcall FileCopyProgressHandler::getLoadingState(FileCopyProgressHandler *this, MinecraftScreenModel *a2)
{
  return 256;
}


void __fastcall FileCopyProgressHandler::~FileCopyProgressHandler(FileCopyProgressHandler *this)
{
  FileCopyProgressHandler::~FileCopyProgressHandler(this);
}


int __fastcall FileCopyProgressHandler::FileCopyProgressHandler(int a1, int *a2, int a3, char a4, int *a5, char a6, int a7)
{
  int v7; // r5@1
  char v8; // r7@1
  int v9; // r4@1
  void (__fastcall *v10)(int, int, signed int); // r3@1
  char v12; // [sp+7h] [bp-31h]@1
  char v13; // [sp+Ch] [bp-2Ch]@1

  v7 = a1;
  v8 = a4;
  v9 = a3;
  *(_DWORD *)a1 = &off_26D7708;
  *(_DWORD *)(a1 + 4) = 4;
  *(_DWORD *)(a1 + 8) = 0;
  sub_DA73B4((int *)(a1 + 12), a2);
  sub_DA73B4((int *)(v7 + 16), (int *)v9);
  *(_DWORD *)(v7 + 20) = *(_DWORD *)(v9 + 4);
  *(_BYTE *)(v7 + 24) = v8;
  sub_DA73B4((int *)(v7 + 28), a5);
  *(_BYTE *)(v7 + 32) = a6;
  *(_BYTE *)(v7 + 33) = 0;
  *(_BYTE *)(v7 + 34) = 0;
  v12 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(v7 + 36, (int)&v13, &v12);
  *(_DWORD *)(v7 + 52) = 0;
  v10 = *(void (__fastcall **)(int, int, signed int))(a7 + 8);
  if ( v10 )
  {
    v10(v7 + 44, a7, 2);
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(a7 + 12);
    *(_DWORD *)(v7 + 52) = *(_DWORD *)(a7 + 8);
  }
  return v7;
}
