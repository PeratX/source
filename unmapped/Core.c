

unsigned __int64 *__fastcall Core::FileStorageArea::_addReadWriteOperation(Core::FileStorageArea *this, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  Core::FileStorageArea *v4; // r8@1
  Core::FileStorageArea *v5; // r0@1
  unsigned int v6; // r7@1
  unsigned int v7; // r4@1
  int v8; // r9@1
  unsigned __int64 *v9; // r0@4
  unsigned __int64 v10; // kr00_8@5
  unsigned __int64 *v11; // r0@6
  unsigned __int64 v12; // kr08_8@7
  unsigned __int64 *v13; // r0@8
  unsigned __int64 v14; // kr10_8@9
  unsigned __int64 *v15; // r0@10
  unsigned __int64 v16; // kr18_8@11
  unsigned __int64 *v17; // r0@12
  unsigned __int64 v18; // kr20_8@13
  unsigned __int64 *v19; // r0@14
  unsigned __int64 v20; // kr28_8@15
  unsigned __int64 *v21; // r0@16
  unsigned __int64 v22; // kr30_8@17
  unsigned __int64 *result; // r0@18
  unsigned __int64 v24; // kr38_8@19
  unsigned __int64 *v25; // r0@21
  unsigned __int64 v26; // kr40_8@22
  unsigned __int64 *v27; // r0@23
  unsigned __int64 v28; // kr48_8@24
  unsigned __int64 *v29; // r0@25
  unsigned __int64 v30; // kr50_8@26
  unsigned __int64 v31; // kr58_8@28

  v4 = this;
  v5 = (Core::FileStorageArea *)*((_DWORD *)this + 41);
  v6 = HIDWORD(a3);
  v7 = a3;
  v8 = a2;
  if ( v5 )
    j_Core::FileStorageArea::_addWriteOperation(v5, a2, a4);
  if ( v8 == 1 )
  {
    v9 = (unsigned __int64 *)((char *)v4 + 48);
    __dmb();
    do
      v10 = __ldrexd(v9);
    while ( __strexd(v10 + 1, v9) );
    v11 = (unsigned __int64 *)((char *)v4 + 56);
      v12 = __ldrexd(v11);
    while ( __strexd(v12 + __PAIR__(v6, v7), v11) );
    v13 = (unsigned __int64 *)((char *)v4 + 24);
      v14 = __ldrexd(v13);
    while ( __strexd(v14 + 1, v13) );
    v15 = (unsigned __int64 *)((char *)v4 + 32);
      v16 = __ldrexd(v15);
    while ( __strexd(v16 + a4, v15) );
    v17 = (unsigned __int64 *)((char *)v4 + 96);
      v18 = __ldrexd(v17);
    while ( __strexd(v18 + 1, v17) );
    v19 = (unsigned __int64 *)((char *)v4 + 104);
      v20 = __ldrexd(v19);
    while ( __strexd(v20 + __PAIR__(v6, v7), v19) );
    v21 = (unsigned __int64 *)((char *)v4 + 72);
      v22 = __ldrexd(v21);
    while ( __strexd(v22 + 1, v21) );
    result = (unsigned __int64 *)((char *)v4 + 80);
      v24 = __ldrexd(result);
    while ( __strexd(v24 + a4, result) );
  }
  else
    v25 = (unsigned __int64 *)((char *)v4 + 64);
      v26 = __ldrexd(v25);
    while ( __strexd(v26 + 1, v25) );
    v27 = (unsigned __int64 *)((char *)v4 + 40);
      v28 = __ldrexd(v27);
    while ( __strexd(v28 + 1, v27) );
    v29 = (unsigned __int64 *)((char *)v4 + 112);
      v30 = __ldrexd(v29);
    while ( __strexd(v30 + 1, v29) );
    result = (unsigned __int64 *)((char *)v4 + 88);
      v31 = __ldrexd(result);
    while ( __strexd(v31 + 1, result) );
  __dmb();
  return result;
}


            if ( Core::FileSystem::fileExists((__int64 *)&v58) == 1 )
{
              v21 = MinecraftScreenModel::getUserManager(v2);
              Social::UserManager::getPrimaryUser((Social::UserManager *)&v55, v21);
              v22 = v55;
              v23 = *(void (__fastcall **)(char *, int, int, char *))(*(_DWORD *)v55 + 20);
              v53 = 0;
              v24 = *(void (__fastcall **)(char *, int, signed int))(v5 + 20);
              if ( v24 )
              {
                v24(&v52, v5 + 12, 2);
                v54 = *(_DWORD *)(v5 + 24);
                v53 = *(void (**)(void))(v5 + 20);
              }
              v23(&v57, v22, v5 + 8, &v52);
              CallbackToken::release((CallbackToken *)&v57);
              CallbackToken::~CallbackToken((CallbackToken *)&v57);
              if ( v53 )
                v53();
              v25 = v56;
              if ( v56 )
                v26 = (unsigned int *)(v56 + 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v27 = __ldrex(v26);
                  while ( __strex(v27 - 1, v26) );
                }
                else
                  v27 = (*v26)--;
                if ( v27 == 1 )
                  v37 = (unsigned int *)(v25 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v38 = __ldrex(v37);
                    while ( __strex(v38 - 1, v37) );
                  }
                  else
                    v38 = (*v37)--;
                  if ( v38 == 1 )
                    (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
              v36 = 1;
            }
            else
            {
              v36 = 0;
            v39 = (void *)(v61 - 12);
            if ( (int *)(v61 - 12) != &dword_28898C0 )
              v42 = (unsigned int *)(v61 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v43 = __ldrex(v42);
                while ( __strex(v43 - 1, v42) );
              else
                v43 = (*v42)--;
              if ( v43 <= 0 )
                j_j_j_j__ZdlPv_9(v39);
            if ( v36 )
              v28 = 1;
              goto LABEL_26;
          }
          goto LABEL_25;
        }
      }
      else
      {
        __clrex();
        v10 = v12;
    }
  }
  v9 = 0;
LABEL_25:
  v28 = 0;
LABEL_26:
  if ( v9 )
  {
    v29 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    else
      v30 = (*v29)--;
    if ( v30 == 1 )
      v31 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  if ( !v28 )
    v4 = v44;
    a1 = __PAIR__(v51, (unsigned int)v45) & 0xFFFFFFFCFFFFFFFFLL;
    v6 = v46;
    v1 = HIDWORD(v48);
    v7 = v48;
    v3 = v50;
    LOBYTE(v8) = v47;
    goto LABEL_42;
LABEL_47:
  if ( v45 )
    v45();
  result = (char *)(_stack_chk_guard - v74);
  if ( _stack_chk_guard != v74 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall Core::TransactionFrame::TransactionFrame(int a1, int a2, __int64 *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  char *v5; // r6@1
  char v6; // r0@3
  __int64 v7; // r1@3
  void (*v8)(void); // r12@3
  int v9; // r7@3
  void (*v10)(void); // r3@3
  int v11; // r1@9
  int v12; // r4@9
  unsigned int *v13; // r1@10
  unsigned int v14; // r0@12
  unsigned int *v15; // r6@16
  unsigned int v16; // r0@18
  int v17; // r4@26
  unsigned int *v18; // r1@27
  unsigned int v19; // r0@29
  unsigned int *v20; // r6@33
  unsigned int v21; // r0@35
  int v23; // [sp+4h] [bp-5Ch]@9
  __int64 v24; // [sp+8h] [bp-58h]@2
  char v25; // [sp+10h] [bp-50h]@2
  int v26; // [sp+14h] [bp-4Ch]@3
  void (*v27)(void); // [sp+18h] [bp-48h]@3
  int v28; // [sp+1Ch] [bp-44h]@3
  char v29; // [sp+20h] [bp-40h]@3
  int v30; // [sp+28h] [bp-38h]@2
  int v31; // [sp+2Ch] [bp-34h]@2
  __int64 v32; // [sp+30h] [bp-30h]@1
  __int64 v33; // [sp+38h] [bp-28h]@3
  void (*v34)(void); // [sp+40h] [bp-20h]@3
  int v35; // [sp+44h] [bp-1Ch]@3

  v3 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 1023;
  *(_DWORD *)(a1 + 1036) = 0;
  *(_BYTE *)(a1 + 12) = 0;
  v4 = a1 + 12;
  v5 = (char *)(a1 + 1040);
  v32 = *a3;
  j_Core::FileSystem::cleanPath_deprecated(a1 + 1040, a1 + 8, &v32);
  if ( *(_BYTE *)(v4 + 1044) & 1 )
  {
    *(_BYTE *)(v3 + 1056) = *(_BYTE *)(v4 + 1044) | 2;
    v30 = 0;
    v31 = 0;
    v24 = __PAIR__(*(_DWORD *)(v3 + 1036), v4);
    j_Core::FileStorageArea::getStorageAreaForPath((int)&v25, (int)&v30, &v24);
    if ( v5 != &v25 )
    {
      v6 = v29;
      *(_BYTE *)(v3 + 1056) = *(_BYTE *)(v3 + 1056) & 0xFC | v29 & 3;
      LODWORD(v7) = *(_DWORD *)&v25;
      HIDWORD(v7) = v26;
      v8 = v27;
      v27 = 0;
      v9 = v28;
      v33 = *(_QWORD *)v5;
      *(_QWORD *)v5 = v7;
      v34 = *(void (**)(void))(v3 + 1048);
      v10 = v34;
      *(_DWORD *)(v3 + 1048) = v8;
      v35 = *(_DWORD *)(v3 + 1052);
      *(_DWORD *)(v3 + 1052) = v9;
      if ( v10 )
      {
        v10();
        v6 = v29;
      }
      v29 = v6 | 3;
    }
    if ( v27 )
      v27();
    if ( *(_BYTE *)(v3 + 1056) & 1 )
      (*(void (__fastcall **)(int *))(*(_DWORD *)v30 + 8))(&v23);
      j_std::__shared_ptr<Core::FileSystemImpl,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<Core::FileSystemImpl,std::default_delete<Core::FileSystemImpl>>(
        (int)&v33,
        &v23);
      v11 = v33;
      LODWORD(v33) = *(_DWORD *)v3;
      *(_DWORD *)v3 = v11;
      v12 = *(_DWORD *)(v3 + 4);
      *(_DWORD *)(v3 + 4) = HIDWORD(v33);
      HIDWORD(v33) = v12;
      if ( v12 )
        v13 = (unsigned int *)(v12 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 == 1 )
          v15 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
      if ( v23 )
        (*(void (**)(void))(*(_DWORD *)v23 + 4))();
      v23 = 0;
    v17 = v31;
    if ( v31 )
      v18 = (unsigned int *)(v31 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      else
        v19 = (*v18)--;
      if ( v19 == 1 )
        v20 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  }
  return v3;
}


int __fastcall Core::File_c::_getPosition(Core::File_c *this, unsigned __int64 *a2, int a3)
{
  _QWORD *v3; // r6@1
  Core::File_c *v4; // r4@1
  __int32 v5; // r0@1
  __int32 v6; // r5@1
  int result; // r0@2
  _DWORD *v8; // r0@3
  __int64 v9; // r1@3

  v3 = (_QWORD *)a3;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  v4 = this;
  v5 = j_ftell(*((FILE **)a2 + 4));
  v6 = v5;
  if ( v5 <= -1 )
  {
    v8 = j_operator new(8u);
    HIDWORD(v9) = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<long>(char const*,long const&)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v9) = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<long>(char const*,long const&)::{lambda(std::string *)#1}>::_M_manager;
    *v8 = "ftell failed.";
    v8[1] = v6;
    *(_DWORD *)v4 = v8;
    *((_QWORD *)v4 + 1) = v9;
    result = *((_BYTE *)v4 + 16) & 0xFC;
  }
  else
    *v3 = v5;
    *((_DWORD *)v4 + 2) = 0;
    result = (unsigned __int8)(*((_BYTE *)v4 + 16) & 0xFC) | 1;
  *((_BYTE *)v4 + 16) = result;
  return result;
}


RakNet *__fastcall Core::FileSystem::createOneDirectory(int a1, __int64 *a2)
{
  int v2; // r4@1
  RakNet *result; // r0@1
  void *v4; // [sp+0h] [bp-20h]@1
  int (__fastcall *v5)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-14h]@1
  __int64 v7; // [sp+10h] [bp-10h]@1

  v2 = a1;
  v7 = *a2;
  v4 = j_operator new(1u);
  v5 = sub_1B9DE0E;
  v6 = sub_1B9DDF4;
  result = j_Core::TransactionFrame::exec(v2, 1, &v7, (int)&v4);
  if ( v5 )
    result = (RakNet *)((int (__cdecl *)(void **))v5)(&v4);
  return result;
}


RakNet *__fastcall Core::FileSystem::syncDirectory(int a1, __int64 *a2)
{
  int v2; // r4@1
  RakNet *result; // r0@1
  void *v4; // [sp+0h] [bp-20h]@1
  int (__fastcall *v5)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-14h]@1
  __int64 v7; // [sp+10h] [bp-10h]@1

  v2 = a1;
  v7 = *a2;
  v4 = j_operator new(1u);
  v5 = sub_1B9DFCE;
  v6 = sub_1B9DFB4;
  result = j_Core::TransactionFrame::exec(v2, 1, &v7, (int)&v4);
  if ( v5 )
    result = (RakNet *)((int (__cdecl *)(void **))v5)(&v4);
  return result;
}


int __fastcall Core::FileSystemImpl::fileExists(int a1, __int64 *a2)
{
  int v2; // r4@1
  int (*v3)(void); // r3@1
  int v4; // r12@1
  unsigned __int64 *v5; // r0@2
  unsigned __int64 v6; // r2@3
  unsigned __int64 *v7; // r0@4
  unsigned __int64 v8; // kr08_8@5
  unsigned __int64 v9; // kr10_8@7
  unsigned __int64 v10; // kr18_8@9
  unsigned __int64 *v11; // r0@11
  unsigned __int64 v12; // kr20_8@12
  unsigned __int64 v13; // kr28_8@14
  char v14; // r0@15
  int v15; // r4@15
  void (*v17)(void); // [sp+Ch] [bp-1Ch]@1
  char v18; // [sp+14h] [bp-14h]@1
  __int64 v19; // [sp+18h] [bp-10h]@1

  v2 = a1;
  v3 = *(int (**)(void))(*(_DWORD *)a1 + 28);
  v19 = *a2;
  v4 = v3();
  v17 = 0;
  v18 = v4;
  if ( v4 == 1 )
  {
    v5 = (unsigned __int64 *)(v2 + 40);
    __dmb();
    do
      v6 = __ldrexd(v5);
    while ( __strexd(v6 + 1, v5) );
    v7 = (unsigned __int64 *)(v2 + 48);
      v8 = __ldrexd(v7);
    while ( __strexd(v8, v7) );
      v9 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v9 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v10 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v10, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v11 = (unsigned __int64 *)(v2 + 56);
      v12 = __ldrexd(v11);
    while ( __strexd(v12 + 1, v11) );
      v13 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v13 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v2 + 12), v4, 0LL);
  v14 = v18;
  v18 |= 2u;
  v15 = v14 & 1;
  if ( v17 )
    v17();
  return v15;
}


              if ( Core::FileSystem::fileExists(&v47) == 1 )
{
                v44 = 0;
                v29 = v46;
                v46 = v46 & 0xFC | 1;
                if ( !*(_DWORD *)(v3 + 16) )
                  sub_21E5F48();
                v30 = *(void (__fastcall **)(int, __int64 *))(v3 + 20);
                v69 = v43;
                v70 = 0;
                v71 = v45;
                v72 = 1;
                v46 = v29 | 3;
                v30(v20, &v69);
                if ( v70 )
                  v70(&v69, &v69);
                if ( v44 )
                  v44(&v43, &v43);
              }
              v31 = (void *)(v49 - 12);
              if ( (int *)(v49 - 12) != &dword_28898C0 )
              {
                v38 = (unsigned int *)(v49 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v39 = __ldrex(v38);
                  while ( __strex(v39 - 1, v38) );
                }
                else
                  v39 = (*v38)--;
                if ( v39 <= 0 )
                  j_j_j_j__ZdlPv_9(v31);
            }
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              v32 = __ldrex(v7);
            while ( __strex(v32 - 1, v7) );
          else
            v32 = (*v7)--;
          if ( v32 == 1 )
            v33 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
            {
              __dmb();
              do
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
            else
              v34 = (*v33)--;
            if ( v34 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          break;
        }
      }
      else
      {
        __clrex();
        v6 = v8;
    }
  }
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  result = (char *)(_stack_chk_guard - v78);
  if ( _stack_chk_guard != v78 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall Core::FileSystem::countDirectoryFiles(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  _DWORD *v5; // r0@1
  __int64 v6; // r1@1
  RakNet *result; // r0@1
  _DWORD *v8; // [sp+0h] [bp-28h]@1
  __int64 v9; // [sp+8h] [bp-20h]@1
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a1;
  v10 = *a2;
  v4 = a3;
  v5 = j_operator new(4u);
  HIDWORD(v6) = sub_1B9E4B4;
  *v5 = v4;
  v8 = v5;
  LODWORD(v6) = sub_1B9E4D2;
  v9 = v6;
  result = j_Core::TransactionFrame::exec(v3, 0, &v10, (int)&v8);
  if ( (_DWORD)v9 )
    result = (RakNet *)((int (__cdecl *)(_DWORD **))v9)(&v8);
  return result;
}


void *__fastcall std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke(char ***a1, void **a2)
{
  void **v2; // r4@1
  _DWORD *v3; // r5@1
  char *v4; // r6@1
  _BYTE *v5; // r0@1
  void *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+0h] [bp-18h]@1

  v2 = a2;
  v3 = *a1 + 1;
  v4 = **a1;
  v5 = (_BYTE *)j_strlen_0(**a1);
  sub_21E8190(v2, v4, v5);
  sub_21E7408((const void **)v2, ":", 1u);
  j_std::to_string<int>(&v10, v3);
  sub_21E72F0((const void **)v2, (const void **)&v10);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  return *v2;
}


int __fastcall Core::FileStdStreamBuf::close(int result, int a2, unsigned __int64 a3)
{
  int v3; // r1@1
  int *v4; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@2
  int (*v6)(void); // [sp+Ch] [bp-14h]@2
  unsigned __int8 v7; // [sp+14h] [bp-Ch]@2

  v4 = (int *)(result + 32);
  v3 = *(_DWORD *)(result + 32);
  if ( v3 )
  {
    j_Core::FileStdStreamBuf::_flushoutput((Core::FileStdStreamBuf *)result, v3, a3);
    j_Core::File::close((Core::File *)&v5, v4);
    result = v7 | 2;
    v7 |= 2u;
    if ( v6 )
      result = v6();
  }
  return result;
}


int __fastcall Core::FileSystemImpl::_writeOperation(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // r4@1
  int v6; // r6@1
  int v7; // r7@1
  unsigned __int64 *v8; // r0@3
  unsigned __int64 v9; // r2@4
  unsigned __int64 *v10; // r0@5
  unsigned __int64 v11; // r2@6
  unsigned __int64 v12; // r2@8
  unsigned __int64 v13; // r2@10
  unsigned __int64 *v14; // r0@12
  unsigned __int64 v15; // r2@13
  unsigned __int64 v16; // r2@15

  v5 = a2;
  v6 = a1;
  v7 = a3;
  if ( *(_BYTE *)(a2 + 16) & 1 )
  {
    if ( a5 )
    {
      v8 = (unsigned __int64 *)(a1 + 16);
      __dmb();
      do
        v9 = __ldrexd(v8);
      while ( __strexd(v9 + 1, v8) );
      v10 = (unsigned __int64 *)(v6 + 24);
        v11 = __ldrexd(v10);
      while ( __strexd(v11, v10) );
        v12 = __ldrexd((unsigned __int64 *)&Core::FileSystemImpl::sStats);
      while ( __strexd(v12 + 1, (unsigned __int64 *)&Core::FileSystemImpl::sStats) );
        v13 = __ldrexd((unsigned __int64 *)&unk_283E5D0);
      while ( __strexd(v13, (unsigned __int64 *)&unk_283E5D0) );
    }
    else
      v14 = (unsigned __int64 *)(a1 + 32);
        v15 = __ldrexd(v14);
      while ( __strexd(v15 + 1, v14) );
        v16 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
      while ( __strexd(v16 + 1, (unsigned __int64 *)&unk_283E5D8) );
    __dmb();
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v6 + 12), a5 != 0, 0LL);
    if ( *(_DWORD *)(v7 + 8) )
      (*(void (__fastcall **)(int, _DWORD))(v7 + 12))(v7, *(_DWORD *)(v6 + 12));
  }
  return v5;
}


int __fastcall Core::File_c::_flush(Core::File_c *this, int a2)
{
  Core::File_c *v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r0@2
  __int64 v5; // r1@2
  int result; // r0@2

  v2 = this;
  v3 = j_fflush(*(FILE **)(a2 + 16));
  if ( v3 )
  {
    v4 = j_operator new(8u);
    HIDWORD(v5) = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v5) = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
    *v4 = "fflush failed.";
    v4[1] = v3;
    *(_DWORD *)v2 = v4;
    *((_QWORD *)v2 + 1) = v5;
    result = *((_BYTE *)v2 + 16) & 0xFC;
    *((_BYTE *)v2 + 16) = result;
  }
  else
    *((_DWORD *)v2 + 2) = 0;
    result = (unsigned __int8)(*((_BYTE *)v2 + 16) & 0xFC) | 1;
  return result;
}


int __fastcall Core::File_c::_getPath(int result, int a2)
{
  __int64 v2; // r1@1

  LODWORD(v2) = *(_DWORD *)(a2 + 20);
  HIDWORD(v2) = *(_DWORD *)(v2 - 12);
  *(_QWORD *)result = v2;
  return result;
}


signed int __fastcall Core::Path::isDotOrDotDot(int *a1)
{
  int v1; // r0@1
  signed int result; // r0@2
  int v3; // r1@6

  v1 = *a1;
  if ( *(_BYTE *)v1 == 46 )
  {
    if ( *(_BYTE *)(v1 + 1) )
    {
      if ( *(_BYTE *)(v1 + 1) == 46 )
      {
        v3 = *(_BYTE *)(v1 + 2);
        result = 0;
        if ( !v3 )
          result = 1;
      }
      else
    }
    else
      result = 1;
  }
  else
    result = 0;
  return result;
}


char *__fastcall Core::FileSystem_generic::_renameDirectory(int a1, int a2, __int64 *a3, const char **a4)
{
  int v4; // r4@1
  const char **v5; // r5@1
  int v6; // r7@1
  const char **v7; // r6@1
  char v8; // r0@1
  __int64 v9; // r1@2
  __int64 v10; // kr00_8@2
  char v11; // r0@4
  int v12; // r0@5
  _DWORD *v13; // r0@7
  __int64 v14; // r1@7
  _DWORD *v15; // r0@8
  void **v16; // r1@8
  void **v17; // r2@8
  const char *v18; // r3@8
  int v19; // r0@10
  int (__fastcall *v20)(void **, _QWORD **, int); // r1@15
  void *v21; // r2@16
  char v22; // r0@16
  char *result; // r0@21
  int v24; // r5@23
  __int64 v25; // [sp+0h] [bp-E78h]@4
  char v26; // [sp+8h] [bp-E70h]@4
  void (*v27)(void); // [sp+10h] [bp-E68h]@17
  char v28; // [sp+18h] [bp-E60h]@4
  int v29; // [sp+1Ch] [bp-E5Ch]@4
  __int64 v30; // [sp+20h] [bp-E58h]@1
  __int64 v31; // [sp+28h] [bp-E50h]@1
  void (*v32)(void); // [sp+30h] [bp-E48h]@2
  int v33; // [sp+34h] [bp-E44h]@2
  char v34; // [sp+38h] [bp-E40h]@1
  int v35; // [sp+3Ch] [bp-E3Ch]@1
  __int64 v36; // [sp+40h] [bp-E38h]@10
  __int64 v37; // [sp+48h] [bp-E30h]@5
  int v38; // [sp+44Ch] [bp-A2Ch]@12
  int v39; // [sp+450h] [bp-A28h]@6
  char v40; // [sp+454h] [bp-A24h]@9
  int v41; // [sp+854h] [bp-624h]@9
  char v42; // [sp+85Ch] [bp-61Ch]@5
  int v43; // [sp+E5Ch] [bp-1Ch]@5
  RakNet *v44; // [sp+E60h] [bp-18h]@1

  v4 = a1;
  v5 = (const char **)a3;
  v6 = a2;
  v7 = a4;
  v44 = _stack_chk_guard;
  v35 = 2;
  v30 = *a3;
  j_Core::FileSystemImpl::getEntryType((int)&v31, a2, &v30);
  v8 = v34;
  if ( !(v34 & 1) )
  {
    v9 = v31;
    v10 = *(_QWORD *)v4;
    v31 = *(_QWORD *)v4;
    *(_QWORD *)v4 = v9;
    LODWORD(v9) = v32;
    v32 = 0;
    *(_DWORD *)(v4 + 8) = v9;
    LODWORD(v9) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v4 + 12) = v33;
    v33 = v9;
    LOBYTE(v9) = *(_BYTE *)(v4 + 16);
    v34 = v8 | 3;
    *(_BYTE *)(v4 + 16) = v9 & 0xFC | v8 & 3;
    goto LABEL_19;
  }
  v34 |= 2u;
  if ( v35 != 1 )
    v13 = j_operator new(4u);
    *(_DWORD *)v4 = v13;
    HIDWORD(v14) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v14) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    *v13 = "Not a directory.";
    *(_QWORD *)(v4 + 8) = v14;
    *(_BYTE *)(v4 + 16) &= 0xFCu;
  v29 = 2;
  v25 = *(_QWORD *)v7;
  j_Core::FileSystemImpl::getEntryType((int)&v26, v6, &v25);
  v11 = v28;
  v28 |= 2u;
  if ( v11 & 1 )
    v15 = j_operator new(4u);
    v16 = &std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    v17 = &std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    v18 = "Target entry exists.";
LABEL_15:
    v20 = (int (__fastcall *)(void **, _QWORD **, int))*v16;
    *v15 = v18;
LABEL_16:
    v21 = *v17;
    *(_DWORD *)v4 = v15;
    *(_DWORD *)(v4 + 8) = v20;
    *(_DWORD *)(v4 + 12) = v21;
    v22 = *(_BYTE *)(v4 + 16) & 0xFC;
    goto LABEL_17;
  v37 = *(_QWORD *)v5;
  v12 = j_Core::SplitPathT<1024u,64u>::SplitPathT((int)&v42, (const char **)&v37);
  if ( v43 )
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::Path>((unsigned int *)&v39, v12 + 1024, v43 - 1);
  else
    j___aeabi_memclr8_0((int)&v39, 1028);
    v39 = 1023;
    v41 = 0;
    v40 = 0;
  v36 = *(_QWORD *)v7;
  v19 = j_Core::SplitPathT<1024u,64u>::SplitPathT((int)&v42, (const char **)&v36);
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::Path>((unsigned int *)&v37, v19 + 1024, v43 - 1);
    j___aeabi_memclr8_0((int)&v37, 1028);
    LODWORD(v37) = 1023;
    v38 = 0;
    BYTE4(v37) = 0;
  if ( j_strcmp_0((const char *)((unsigned int)&v39 | 4), (const char *)((unsigned int)&v37 | 4)) )
    v18 = "Target directory must have same root path";
    goto LABEL_15;
  v24 = j_rename(*v5, *v7);
  if ( v24 )
    v15 = j_operator new(8u);
    v17 = &std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
    v20 = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
    *v15 = "std::rename() failed";
    v15[1] = v24;
    goto LABEL_16;
  *(_DWORD *)(v4 + 8) = 0;
  v22 = *(_BYTE *)(v4 + 16) & 0xFC | 1;
LABEL_17:
  *(_BYTE *)(v4 + 16) = v22;
  if ( v27 )
    v27();
LABEL_19:
  if ( v32 )
    v32();
  result = (char *)(_stack_chk_guard - v44);
  if ( _stack_chk_guard != v44 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall Core::FileStdStreamBuf::seekoff(int a1, int a2, unsigned __int64 a3, int a4, int a5)
{
  int v5; // r10@1
  int v6; // r7@1
  signed int v7; // r6@1
  unsigned int v8; // r8@1
  unsigned int v9; // r9@1
  __int64 v10; // r1@4
  void (*v11)(void); // r7@4
  void (*v12)(void); // r3@4
  __int64 v13; // r1@7
  void (*v14)(void); // r5@7
  void (*v15)(void); // r3@7
  __int64 v16; // r1@10
  void (*v17)(void); // r5@10
  void (*v18)(void); // r3@10
  signed int v19; // r5@13
  unsigned int v20; // kr00_4@17
  signed int v21; // r9@17
  __int64 v22; // r1@17
  int v23; // r4@17
  void (*v24)(void); // r3@17
  void (*v25)(void); // r3@18
  unsigned int v26; // kr08_4@25
  __int64 v27; // r1@25
  int v28; // r4@25
  void (*v29)(void); // r3@25
  bool v30; // zf@31
  int result; // r0@33
  int (*v32)(void); // r3@33
  int v33; // [sp+0h] [bp-C8h]@25
  int v34; // [sp+4h] [bp-C4h]@25
  void (*v35)(void); // [sp+8h] [bp-C0h]@25
  int v36; // [sp+Ch] [bp-BCh]@25
  char v37; // [sp+10h] [bp-B8h]@25
  char v38; // [sp+18h] [bp-B0h]@7
  int v39; // [sp+1Ch] [bp-ACh]@7
  void (*v40)(void); // [sp+20h] [bp-A8h]@7
  int v41; // [sp+24h] [bp-A4h]@7
  char v42; // [sp+28h] [bp-A0h]@7
  char v43; // [sp+30h] [bp-98h]@17
  int v44; // [sp+34h] [bp-94h]@17
  void (*v45)(void); // [sp+38h] [bp-90h]@17
  int v46; // [sp+3Ch] [bp-8Ch]@17
  char v47; // [sp+40h] [bp-88h]@17
  char v48; // [sp+48h] [bp-80h]@10
  int v49; // [sp+4Ch] [bp-7Ch]@10
  void (*v50)(void); // [sp+50h] [bp-78h]@10
  int v51; // [sp+54h] [bp-74h]@10
  char v52; // [sp+58h] [bp-70h]@10
  __int64 v53; // [sp+60h] [bp-68h]@7
  char v54; // [sp+68h] [bp-60h]@4
  int v55; // [sp+6Ch] [bp-5Ch]@4
  void (*v56)(void); // [sp+70h] [bp-58h]@4
  int v57; // [sp+74h] [bp-54h]@4
  char v58; // [sp+78h] [bp-50h]@4
  __int64 v59; // [sp+80h] [bp-48h]@4
  void (*v60)(void); // [sp+88h] [bp-40h]@1
  int v61; // [sp+8Ch] [bp-3Ch]@4
  char v62; // [sp+90h] [bp-38h]@1
  __int64 v63; // [sp+98h] [bp-30h]@4
  void (*v64)(void); // [sp+A0h] [bp-28h]@4
  int v65; // [sp+A4h] [bp-24h]@4

  v5 = a1;
  v6 = a2;
  v7 = 0;
  v8 = HIDWORD(a3);
  v9 = a3;
  v60 = 0;
  v62 = 1;
  if ( a4 == 2 )
  {
    v53 = 0LL;
    j_Core::FileImpl::getSize((Core::FileImpl *)&v38, *(unsigned __int64 **)(a2 + 32));
    v62 = v62 & 0xFC | v42 & 3;
    LODWORD(v13) = *(_DWORD *)&v38;
    HIDWORD(v13) = v39;
    v14 = v40;
    v40 = 0;
    v63 = v59;
    v59 = v13;
    v15 = v60;
    v60 = v14;
    v64 = v15;
    v65 = v61;
    v61 = v41;
    if ( v15 )
    {
      v15();
      v42 |= 3u;
      if ( v40 )
        v40();
    }
    else
    v7 = 0;
    if ( !(v62 & 1) )
      v19 = 0;
      goto LABEL_31;
    v26 = v9;
    v19 = (__PAIR__(v8, v9) + v53) >> 32;
    v21 = v9 + v53;
    j_Core::FileImpl::setPosition((Core::FileImpl *)&v33, *(_DWORD *)(v6 + 32), __PAIR__(v8, v26) + v53);
    v62 = v62 & 0xFC | v37 & 3;
    LODWORD(v27) = v33;
    HIDWORD(v27) = v34;
    v28 = (int)v35;
    v35 = 0;
    v59 = v27;
    v29 = v60;
    v60 = (void (*)(void))v28;
    v64 = v29;
    v61 = v36;
    if ( !v29 )
      v37 |= 3u;
      goto LABEL_30;
    v29();
    v25 = v35;
    v37 |= 3u;
    if ( v35 )
LABEL_27:
      v25();
LABEL_30:
    v7 = v21;
    goto LABEL_31;
  }
  if ( a4 == 1 )
    j_Core::FileImpl::getPosition((Core::FileImpl *)&v48, *(unsigned __int64 **)(a2 + 32));
    v62 = v62 & 0xFC | v52 & 3;
    LODWORD(v16) = *(_DWORD *)&v48;
    HIDWORD(v16) = v49;
    v17 = v50;
    v50 = 0;
    v59 = v16;
    v18 = v60;
    v60 = v17;
    v64 = v18;
    v61 = v51;
    if ( v18 )
      v18();
      v52 |= 3u;
      if ( v50 )
        v50();
    v20 = v9;
    j_Core::FileImpl::setPosition((Core::FileImpl *)&v43, *(_DWORD *)(v6 + 32), __PAIR__(v8, v20) + v53);
    v62 = v62 & 0xFC | v47 & 3;
    LODWORD(v22) = *(_DWORD *)&v43;
    HIDWORD(v22) = v44;
    v23 = (int)v45;
    v45 = 0;
    v59 = v22;
    v24 = v60;
    v60 = (void (*)(void))v23;
    v64 = v24;
    v61 = v46;
    if ( !v24 )
      v47 |= 3u;
    v24();
    v25 = v45;
    v47 |= 3u;
    if ( v45 )
      goto LABEL_27;
    goto LABEL_30;
  if ( a4 )
    v19 = 0;
  else
    j_Core::FileImpl::setPosition((Core::FileImpl *)&v54, *(_DWORD *)(a2 + 32), a3);
    v62 = v62 & 0xFC | v58 & 3;
    LODWORD(v10) = *(_DWORD *)&v54;
    HIDWORD(v10) = v55;
    v11 = v56;
    v56 = 0;
    v59 = v10;
    v12 = v60;
    v60 = v11;
    v64 = v12;
    v61 = v57;
    if ( v12 )
      v12();
      v58 |= 3u;
      if ( v56 )
        v56();
LABEL_31:
  v30 = (v62 & 1) == 0;
  v62 |= 2u;
  if ( v30 )
    v19 = -1;
    v7 = -1;
  result = 0;
  *(_DWORD *)v5 = v7;
  *(_DWORD *)(v5 + 4) = v19;
  v32 = (int (*)(void))v60;
  *(_DWORD *)(v5 + 8) = 0;
  if ( v32 )
    result = v32();
  return result;
}


signed int __fastcall Core::FileSystem_generic::_directoryExists(int a1, const char **a2)
{
  const char **v2; // r4@1
  const char *v3; // r1@3
  int v4; // r4@4
  signed int v5; // r4@4
  int v7; // [sp+0h] [bp-78h]@1
  int v8; // [sp+10h] [bp-68h]@5

  v2 = a2;
  if ( j_stat(*a2, (struct stat *)&v7) )
  {
    if ( j_getAssetManager_android() )
    {
      v3 = *v2;
      if ( j_AAssetManager_openDir() )
      {
        v4 = j_AAssetDir_getNextFileName();
        j_AAssetDir_close();
        v5 = v4 != 0;
      }
      else
        v5 = 0;
    }
    else
      v5 = 0;
  }
  else
    v5 = 0;
    if ( (v8 & 0xF000) == 0x4000 )
      v5 = 1;
  return v5;
}


RakNet *__fastcall Core::FileSystem::iterateOverDirectory(int a1, __int64 *a2, __int64 a3, int a4)
{
  int v4; // r4@1
  _DWORD *v5; // r0@1
  RakNet *result; // r0@1
  _DWORD *v7; // [sp+0h] [bp-28h]@1
  int (__cdecl *v8)(_DWORD); // [sp+8h] [bp-20h]@1
  int (__fastcall *v9)(int, __int64 **, int); // [sp+Ch] [bp-1Ch]@1
  __int64 v10; // [sp+10h] [bp-18h]@1
  __int64 v11; // [sp+18h] [bp-10h]@1

  v11 = a3;
  v4 = a1;
  v10 = *a2;
  v5 = j_operator new(8u);
  *v5 = &v11;
  v5[1] = a4;
  v7 = v5;
  v8 = (int (__cdecl *)(_DWORD))sub_1B9E1B2;
  v9 = sub_1B9E156;
  result = j_Core::TransactionFrame::exec(v4, 0, &v10, (int)&v7);
  if ( v8 )
    result = (RakNet *)v8(&v7);
  return result;
}


int (**__fastcall Core::FileSystemImpl::_removeFile(Core::FileSystemImpl *this, Core::FileImpl *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  Core::FileSystemImpl *v2; // r5@1
  pthread_mutex_t *v3; // r8@1
  Core::FileImpl *v4; // r6@1
  int v5; // r0@2
  int v6; // r0@3
  int v7; // r2@3
  Core::FileImpl *v8; // r1@4
  int v9; // r3@5
  int v10; // r4@6
  bool v11; // zf@7
  Core::FileImpl **v12; // r3@7
  Core::FileImpl *v13; // r7@10
  bool v14; // zf@10
  int v15; // r3@15
  Core::FileImpl *v16; // r2@28
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@29

  v2 = this;
  v3 = (pthread_mutex_t *)((char *)this + 64);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = j_pthread_mutex_lock_0(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = *(_QWORD *)((char *)v2 + 68) >> 32;
  v7 = *(_QWORD *)((char *)v2 + 68);
  if ( v7 != v6 )
    v8 = *(Core::FileImpl **)(v6 - 4);
    if ( v8 == v4 )
    {
      *((_DWORD *)v2 + 18) = v6 - 4;
      goto LABEL_29;
    }
    v9 = (v6 - v7) >> 4;
    if ( v9 >= 1 )
      v10 = v9 + 1;
      do
      {
        v11 = *(_DWORD *)v7 == (_DWORD)v4;
        v12 = (Core::FileImpl **)v7;
        if ( *(Core::FileImpl **)v7 != v4 )
        {
          v12 = (Core::FileImpl **)(v7 + 4);
          v11 = *(_DWORD *)(v7 + 4) == (_DWORD)v4;
        }
        if ( v11 )
          goto LABEL_28;
        v12 = (Core::FileImpl **)(v7 + 8);
        v13 = *(Core::FileImpl **)(v7 + 8);
        v14 = v13 == v4;
        if ( v13 != v4 )
          v12 = (Core::FileImpl **)(v7 + 12);
          v14 = *(_DWORD *)(v7 + 12) == (_DWORD)v4;
        if ( v14 )
        --v10;
        v7 += 16;
      }
      while ( v10 > 1 );
    if ( 1 == (v6 - v7) >> 2 )
      v12 = (Core::FileImpl **)v7;
      goto LABEL_24;
    v15 = (v6 - v7) >> 2;
    if ( v15 == 2 )
    else
      if ( v15 != 3 )
        v12 = (Core::FileImpl **)(*(_QWORD *)((char *)v2 + 68) >> 32);
        goto LABEL_28;
      if ( *(Core::FileImpl **)v7 == v4 )
LABEL_28:
        v16 = *v12;
        *v12 = v8;
        *(_DWORD *)(v6 - 4) = v16;
        *((_DWORD *)v2 + 18) -= 4;
        goto LABEL_29;
      v12 = (Core::FileImpl **)(v7 + 4);
    if ( *v12 != v4 )
      ++v12;
LABEL_24:
      if ( *v12 != v4 )
      goto LABEL_28;
    goto LABEL_28;
LABEL_29:
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v3);
  return result;
}


void __fastcall Core::OutputFileStream::~OutputFileStream(Core::OutputFileStream *this, int a2, unsigned __int64 a3)
{
  Core::OutputFileStream *v3; // r4@1

  v3 = this;
  *(_DWORD *)this = &off_26D679C;
  *((_DWORD *)this + 1039) = &off_26D67C4;
  *((_DWORD *)this + 2) = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::OutputFileStream *)((char *)this + 12), (int)&off_26D67C4, a3);
  *(_DWORD *)v3 = &off_26D67DC;
  *((_DWORD *)v3 + 1039) = &off_26D67F0;
  *((_DWORD *)v3 + 1) = 0;
  sub_DA76E4((_DWORD *)v3 + 1039);
  j_j_j__ZdlPv_3((void *)v3);
}


int __fastcall Core::File_c::_close(Core::File_c *this, int a2)
{
  int v2; // r6@1
  Core::File_c *v3; // r4@1
  int v4; // r5@1
  _DWORD *v5; // r0@2
  __int64 v6; // r1@2
  int result; // r0@2

  v2 = a2;
  v3 = this;
  v4 = j_fclose(*(FILE **)(a2 + 16));
  *(_DWORD *)(v2 + 16) = 0;
  if ( v4 )
  {
    v5 = j_operator new(8u);
    HIDWORD(v6) = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v6) = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
    *v5 = "fclose failed.";
    v5[1] = v4;
    *(_DWORD *)v3 = v5;
    *((_QWORD *)v3 + 1) = v6;
    result = *((_BYTE *)v3 + 16) & 0xFC;
    *((_BYTE *)v3 + 16) = result;
  }
  else
    *((_DWORD *)v3 + 2) = 0;
    result = (unsigned __int8)(*((_BYTE *)v3 + 16) & 0xFC) | 1;
  return result;
}


int (**__fastcall Core::FileSystemImpl::_addFile(Core::FileSystemImpl *this, Core::FileImpl *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  Core::FileSystemImpl *v2; // r5@1
  pthread_mutex_t *v3; // r8@1
  Core::FileImpl *v4; // r9@1
  int v5; // r0@2
  __int64 v6; // r0@3
  void *v7; // r7@5
  unsigned int v8; // r2@5
  unsigned int v9; // r1@7
  unsigned int v10; // r6@7
  char *v11; // r4@13
  char *v12; // r9@15
  int v13; // r9@17
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@20

  v2 = this;
  v3 = (pthread_mutex_t *)((char *)this + 64);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = j_pthread_mutex_lock_0(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = *((_QWORD *)v2 + 9);
  if ( (_DWORD)v6 == HIDWORD(v6) )
    v7 = (void *)*((_DWORD *)v2 + 17);
    v8 = ((signed int)v6 - (signed int)v7) >> 2;
    if ( !v8 )
      v8 = 1;
    HIDWORD(v6) = v8 + (((signed int)v6 - (signed int)v7) >> 2);
    v10 = v8 + (((signed int)v6 - (signed int)v7) >> 2);
    if ( 0 != HIDWORD(v6) >> 30 )
      v10 = 0x3FFFFFFF;
    if ( v9 < v8 )
    if ( v10 )
    {
      if ( v10 >= 0x40000000 )
        sub_21E57F4();
      v11 = (char *)j_operator new(4 * v10);
      LODWORD(v6) = *(_QWORD *)((char *)v2 + 68) >> 32;
      v7 = (void *)*(_QWORD *)((char *)v2 + 68);
    }
    else
      v11 = 0;
    *(_DWORD *)&v11[v6 - (_DWORD)v7] = v4;
    v12 = &v11[v6 - (_DWORD)v7];
    if ( 0 != ((signed int)v6 - (signed int)v7) >> 2 )
      j___aeabi_memmove4_0((int)v11, (int)v7);
    v13 = (int)(v12 + 4);
    if ( v7 )
      j_operator delete(v7);
    *((_DWORD *)v2 + 17) = v11;
    *((_DWORD *)v2 + 18) = v13;
    *((_DWORD *)v2 + 19) = &v11[4 * v10];
  else
    *(_DWORD *)v6 = v4;
    *((_DWORD *)v2 + 18) += 4;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v3);
  return result;
}


int __fastcall Core::FileImpl::getNumFiles(Core::FileImpl *this)
{
  return (dword_283E5B8 - Core::FileImpl::sAllFiles) >> 2;
}


int (**__fastcall Core::FileStorageArea::_endTransaction(Core::FileStorageArea *this, Core::FileSystemImpl *a2, int a3))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  Core::FileStorageArea *v3; // r9@1
  Core::FileSystemImpl *v4; // r10@1
  pthread_mutex_t *v5; // r8@1
  Core::FileSystemImpl *v6; // r7@1
  int v7; // r0@2
  Core::FileSystemImpl *v8; // r1@3
  int v9; // r0@6
  int v10; // r2@6
  Core::FileSystemImpl *v11; // r1@7
  int v12; // r3@8
  int v13; // r6@9
  bool v14; // zf@10
  Core::FileSystemImpl **v15; // r3@10
  Core::FileSystemImpl *v16; // r5@13
  bool v17; // zf@13
  int v18; // r3@18
  Core::FileSystemImpl *v19; // r2@31
  int v20; // r0@33
  int v21; // r1@33
  Core::FileSystemImpl *v22; // r2@34
  int v23; // r3@34
  int v24; // r3@35
  int v25; // r6@36
  bool v26; // zf@37
  Core::FileSystemImpl **v27; // r3@37
  Core::FileSystemImpl *v28; // r5@40
  bool v29; // zf@40
  int v30; // r3@45
  Core::FileSystemImpl *v31; // r1@59
  unsigned __int64 *v32; // r5@60
  unsigned __int64 v33; // kr10_8@60
  unsigned __int64 v34; // r0@62
  void (*v35)(void); // r3@63
  int *v36; // r4@63
  int *v37; // r6@63
  int v38; // t1@65
  unsigned __int64 v39; // kr20_8@70
  unsigned __int64 *v40; // r0@71
  unsigned __int64 v41; // r2@72
  unsigned __int64 *v42; // r0@73
  unsigned __int64 v43; // r2@74
  unsigned __int64 *v44; // r0@75
  unsigned __int64 v45; // r2@76
  unsigned __int64 *v46; // r0@77
  unsigned __int64 v47; // r2@78
  unsigned __int64 *v48; // r0@79
  unsigned __int64 v49; // r2@80
  int *i; // r6@83
  int *v51; // r11@83
  int v52; // r4@84
  _DWORD *v53; // r0@84
  unsigned __int64 v54; // r0@87
  unsigned __int64 v55; // r0@87
  void *v56; // r4@87
  void *v57; // r6@87
  unsigned int *v58; // r2@89
  signed int v59; // r1@91
  int *v60; // r0@97
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@103
  _DWORD *v62; // [sp+Ch] [bp-5Ch]@84
  int (__fastcall *v63)(void **, _DWORD **, int); // [sp+14h] [bp-54h]@84
  int (__fastcall *v64)(int **, Core::FileImpl *); // [sp+18h] [bp-50h]@84
  char v65; // [sp+1Ch] [bp-4Ch]@4
  void (*v66)(void); // [sp+24h] [bp-44h]@4
  void *v67; // [sp+34h] [bp-34h]@63
  void *v68; // [sp+38h] [bp-30h]@83
  int (__fastcall *v69)(void **, void **, int); // [sp+3Ch] [bp-2Ch]@63
  int (__fastcall *v70)(int, int); // [sp+40h] [bp-28h]@63

  v3 = this;
  v4 = a2;
  v5 = (pthread_mutex_t *)((char *)a2 + 120);
  v6 = (Core::FileSystemImpl *)a3;
  if ( &pthread_create )
  {
    v7 = j_pthread_mutex_lock_0((pthread_mutex_t *)a2 + 5);
    if ( v7 )
      sub_21E5E14(v7);
  }
  v8 = (Core::FileSystemImpl *)*((_DWORD *)v4 + 41);
  if ( v8 )
    j_Core::FileStorageArea::_endTransaction((Core::FileStorageArea *)&v65, v8, (int)v6);
    if ( v66 )
      v66();
  v9 = *(_QWORD *)((char *)v4 + 124) >> 32;
  v10 = *(_QWORD *)((char *)v4 + 124);
  if ( v10 != v9 )
    v11 = *(Core::FileSystemImpl **)(v9 - 4);
    if ( v11 == v6 )
    {
      *((_DWORD *)v4 + 32) = v9 - 4;
      goto LABEL_32;
    }
    v12 = (v9 - v10) >> 4;
    if ( v12 >= 1 )
      v13 = v12 + 1;
      do
      {
        v14 = *(_DWORD *)v10 == (_DWORD)v6;
        v15 = (Core::FileSystemImpl **)v10;
        if ( *(Core::FileSystemImpl **)v10 != v6 )
        {
          v15 = (Core::FileSystemImpl **)(v10 + 4);
          v14 = *(_DWORD *)(v10 + 4) == (_DWORD)v6;
        }
        if ( v14 )
          goto LABEL_31;
        v15 = (Core::FileSystemImpl **)(v10 + 8);
        v16 = *(Core::FileSystemImpl **)(v10 + 8);
        v17 = v16 == v6;
        if ( v16 != v6 )
          v15 = (Core::FileSystemImpl **)(v10 + 12);
          v17 = *(_DWORD *)(v10 + 12) == (_DWORD)v6;
        if ( v17 )
        --v13;
        v10 += 16;
      }
      while ( v13 > 1 );
    if ( 1 == (v9 - v10) >> 2 )
      v15 = (Core::FileSystemImpl **)v10;
      goto LABEL_27;
    v18 = (v9 - v10) >> 2;
    if ( v18 == 2 )
    else
      if ( v18 != 3 )
        v15 = (Core::FileSystemImpl **)(*(_QWORD *)((char *)v4 + 124) >> 32);
        goto LABEL_31;
      if ( *(Core::FileSystemImpl **)v10 == v6 )
LABEL_31:
        v19 = *v15;
        *v15 = v11;
        *(_DWORD *)(v9 - 4) = v19;
        *((_DWORD *)v4 + 32) -= 4;
        goto LABEL_32;
      v15 = (Core::FileSystemImpl **)(v10 + 4);
    if ( *v15 != v6 )
      ++v15;
LABEL_27:
      if ( *v15 != v6 )
      goto LABEL_31;
    goto LABEL_31;
LABEL_32:
  if ( !j_Core::FileSystemImpl::getAccessType(v6) )
LABEL_102:
    *((_DWORD *)v3 + 2) = 0;
    *((_BYTE *)v3 + 16) = *((_BYTE *)v3 + 16) & 0xFC | 1;
    goto LABEL_103;
  v20 = *((_QWORD *)v4 + 17) >> 32;
  v21 = *((_QWORD *)v4 + 17);
  if ( v21 == v20 )
    v23 = *((_QWORD *)v4 + 17) >> 32;
    goto LABEL_60;
  v23 = v20 - 4;
  v22 = *(Core::FileSystemImpl **)(v20 - 4);
  if ( v22 == v6 )
    *((_DWORD *)v4 + 35) = v23;
  v24 = (v20 - v21) >> 4;
  if ( v24 >= 1 )
    v25 = v24 + 1;
    do
      v26 = *(_DWORD *)v21 == (_DWORD)v6;
      v27 = (Core::FileSystemImpl **)v21;
      if ( *(Core::FileSystemImpl **)v21 != v6 )
        v27 = (Core::FileSystemImpl **)(v21 + 4);
        v26 = *(_DWORD *)(v21 + 4) == (_DWORD)v6;
      if ( v26 )
        goto LABEL_59;
      v27 = (Core::FileSystemImpl **)(v21 + 8);
      v28 = *(Core::FileSystemImpl **)(v21 + 8);
      v29 = v28 == v6;
      if ( v28 != v6 )
        v27 = (Core::FileSystemImpl **)(v21 + 12);
        v29 = *(_DWORD *)(v21 + 12) == (_DWORD)v6;
      if ( v29 )
      --v25;
      v21 += 16;
    while ( v25 > 1 );
  if ( 1 == (v20 - v21) >> 2 )
    v27 = (Core::FileSystemImpl **)v21;
    goto LABEL_55;
  v30 = (v20 - v21) >> 2;
  if ( v30 == 2 )
LABEL_53:
    if ( *v27 != v6 )
      ++v27;
LABEL_55:
      if ( *v27 != v6 )
        v27 = (Core::FileSystemImpl **)(*((_QWORD *)v4 + 17) >> 32);
      goto LABEL_59;
    goto LABEL_59;
  if ( v30 != 3 )
    v27 = (Core::FileSystemImpl **)(*((_QWORD *)v4 + 17) >> 32);
  v27 = (Core::FileSystemImpl **)v21;
  if ( *(Core::FileSystemImpl **)v21 != v6 )
    v27 = (Core::FileSystemImpl **)(v21 + 4);
    goto LABEL_53;
LABEL_59:
  v31 = *v27;
  *v27 = v22;
  *(_DWORD *)(v20 - 4) = v31;
  v23 = *((_DWORD *)v4 + 35) - 4;
  *((_DWORD *)v4 + 35) = v23;
  v21 = *((_DWORD *)v4 + 34);
LABEL_60:
  v32 = (unsigned __int64 *)((char *)v4 + 24);
  v33 = __ldrexd((unsigned __int64 *)v4 + 3);
  __clrex();
  __dmb();
  if ( v23 != v21 )
    if ( *((_BYTE *)v4 + 172) )
      v67 = 0;
      v68 = 0;
      v69 = 0;
      v51 = (int *)(*((_QWORD *)v4 + 17) >> 32);
      for ( i = (int *)*((_QWORD *)v4 + 17); v51 != i; ++i )
        v52 = *i;
        v53 = j_operator new(4u);
        *v53 = &v67;
        v62 = v53;
        v63 = sub_1B998BE;
        v64 = sub_1B99864;
        j_Core::FileSystemImpl::enumerateFiles(v52, (int)&v62);
        if ( v63 )
          v63((void **)&v62, &v62, 3);
      v54 = __ldrexd(v32);
      __clrex();
      __dmb();
      v55 = __ldrexd((unsigned __int64 *)v4 + 4);
      v56 = v68;
      v57 = v67;
      if ( v67 != v68 )
        do
          v60 = (int *)(*(_DWORD *)v57 - 12);
          if ( v60 != &dword_28898C0 )
          {
            v58 = (unsigned int *)(*(_DWORD *)v57 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v59 = __ldrex(v58);
              while ( __strex(v59 - 1, v58) );
            }
            else
              v59 = (*v58)--;
            if ( v59 <= 0 )
              j_j_j_j__ZdlPv_9(v60);
          }
          v57 = (char *)v57 + 4;
        while ( v57 != v56 );
        v57 = v67;
      if ( v57 )
        j_operator delete(v57);
    goto LABEL_102;
  if ( *((_BYTE *)v4 + 172) )
    v34 = __ldrexd((unsigned __int64 *)v4 + 4);
    __clrex();
    __dmb();
  (*(void (__fastcall **)(Core::FileStorageArea *, Core::FileSystemImpl *))(*(_DWORD *)v4 + 12))(v3, v4);
  v67 = j_operator new(1u);
  v35 = (void (*)(void))sub_1B99786;
  v69 = sub_1B99786;
  v70 = sub_1B9977E;
  v37 = (int *)(*((_QWORD *)v4 + 19) >> 32);
  v36 = (int *)*((_QWORD *)v4 + 19);
  if ( v36 == v37 )
    goto LABEL_110;
  do
    if ( !v35 )
      sub_21E5F48();
    v38 = *v36;
    ++v36;
    v70((int)&v67, v38);
    v35 = (void (*)(void))v69;
  while ( v37 != v36 );
  if ( v69 )
LABEL_110:
    v35();
  if ( *((_BYTE *)v3 + 16) & 1 )
      v39 = __ldrexd(v32);
    while ( __strexd(0LL, v32) );
    v40 = (unsigned __int64 *)((char *)v4 + 40);
      v41 = __ldrexd(v40);
    while ( __strexd(0LL, v40) );
    v42 = (unsigned __int64 *)((char *)v4 + 32);
      v43 = __ldrexd(v42);
    while ( __strexd(0LL, v42) );
    v44 = (unsigned __int64 *)((char *)v4 + 48);
      v45 = __ldrexd(v44);
    while ( __strexd(0LL, v44) );
    v46 = (unsigned __int64 *)((char *)v4 + 64);
      v47 = __ldrexd(v46);
    while ( __strexd(0LL, v46) );
    v48 = (unsigned __int64 *)((char *)v4 + 56);
      v49 = __ldrexd(v48);
    while ( __strexd(0LL, v48) );
LABEL_103:
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v5);
  return result;
}


int __fastcall Core::FileSystemImpl::createDirectoryRecursively(int a1, int a2, __int64 *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  void (__fastcall *v5)(char *); // r3@1
  int (*v6)(void); // r7@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // kr00_8@3
  unsigned __int64 v9; // kr08_8@5
  __int64 v10; // r0@8
  int result; // r0@8
  int v12; // [sp+0h] [bp-48h]@7
  int (*v13)(void); // [sp+8h] [bp-40h]@1
  void (__fastcall *v14)(int *, _DWORD); // [sp+Ch] [bp-3Ch]@7
  char v15; // [sp+10h] [bp-38h]@1
  int (*v16)(void); // [sp+18h] [bp-30h]@8
  int v17; // [sp+1Ch] [bp-2Ch]@8
  unsigned __int8 v18; // [sp+20h] [bp-28h]@1
  __int64 v19; // [sp+28h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(void (__fastcall **)(char *))(*(_DWORD *)a2 + 64);
  v19 = *a3;
  v5(&v15);
  v6 = 0;
  v13 = 0;
  if ( v18 & 1 )
  {
    v7 = (unsigned __int64 *)(v3 + 32);
    __dmb();
    do
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
      v9 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v9 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v6 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v3 + 12), 0, 0LL);
    if ( v13 )
    {
      v14(&v12, *(_DWORD *)(v3 + 12));
      v6 = v13;
    }
  }
  v10 = *(_QWORD *)&v15;
  *(_QWORD *)&v15 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v10;
  *(_DWORD *)(v4 + 8) = v16;
  v16 = 0;
  HIDWORD(v10) = v17;
  v17 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = HIDWORD(v10);
  HIDWORD(v10) = v18;
  *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 16) & 0xFC | v18 & 3;
  result = HIDWORD(v10) | 3;
  v18 = BYTE4(v10) | 3;
  if ( v6 )
    result = v6();
    if ( v16 )
      result = v16();
  return result;
}


Core::OutputFileStream *__fastcall Core::OutputFileStream::~OutputFileStream(Core::OutputFileStream *this, int a2, unsigned __int64 a3)
{
  Core::OutputFileStream *v3; // r4@1

  v3 = this;
  *(_DWORD *)this = &off_26D679C;
  *((_DWORD *)this + 1039) = &off_26D67C4;
  *((_DWORD *)this + 2) = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::OutputFileStream *)((char *)this + 12), (int)&off_26D67C4, a3);
  *(_DWORD *)v3 = &off_26D67DC;
  *((_DWORD *)v3 + 1039) = &off_26D67F0;
  *((_DWORD *)v3 + 1) = 0;
  sub_DA76E4((_DWORD *)v3 + 1039);
  return v3;
}


int __fastcall Core::StringSpan::find_last_of(Core::StringSpan *this, const char *a2)
{
  signed int v2; // r2@1
  signed int v3; // r3@1
  int v4; // lr@3
  char v5; // r9@3
  int v6; // r6@4
  const char *v7; // r4@4
  char v8; // r5@4
  int v9; // t1@6
  const char *v10; // r4@8
  char v11; // r5@8
  int v12; // t1@10
  const char *v13; // r4@11
  char v14; // r5@11
  int v15; // t1@13
  const char *v16; // r4@14
  char v17; // r5@14
  int v18; // t1@16
  unsigned __int8 v19; // vf@19
  int v20; // r6@26
  int v21; // r0@26
  const char *v22; // r7@28
  char v23; // r2@28
  int v24; // t1@30
  const char *v25; // r7@34
  unsigned __int8 v26; // r2@34
  int v27; // t1@36
  int v28; // r0@38
  const char *v29; // r1@38
  int v30; // t1@40
  int result; // r0@41

  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)this >> 2;
  if ( v3 >= 1 )
  {
    if ( *a2 )
    {
      v4 = *((_DWORD *)this + 1);
      v5 = *a2;
LABEL_4:
      v6 = v2 - 1;
      v7 = a2 + 1;
      v8 = *a2;
      while ( (unsigned __int8)v8 != *(_BYTE *)(v4 + v2 - 1) )
      {
        v9 = *v7++;
        v8 = v9;
        if ( !v9 )
        {
          if ( v5 )
          {
            v10 = a2 + 1;
            v11 = v5;
            while ( (unsigned __int8)v11 != *(_BYTE *)(v4 + v2 - 2) )
            {
              v12 = *v10++;
              v11 = v12;
              if ( !v12 )
              {
                v6 = v2 - 3;
                v13 = a2 + 1;
                v14 = v5;
                do
                {
                  if ( (unsigned __int8)v14 == *(_BYTE *)(v4 + v2 - 3) )
                    return v2 - 3;
                  v15 = *v13++;
                  v14 = v15;
                }
                while ( v15 );
                v2 -= 4;
                v16 = a2 + 1;
                v17 = v5;
                while ( (unsigned __int8)v17 != *(_BYTE *)(v4 + v2) )
                  v18 = *v16++;
                  v17 = v18;
                  if ( !v18 )
                    goto LABEL_19;
                return v6 - 1;
              }
            }
            return v6 - 1;
          }
          v2 -= 4;
          v5 = 0;
LABEL_19:
          v19 = __OFSUB__(v3--, 1);
          if ( (unsigned __int8)((v3 < 0) ^ v19) | (v3 == 0) )
            goto LABEL_23;
          goto LABEL_4;
        }
      }
      return v2 - 1;
    }
    v2 -= 4 * v3;
  }
LABEL_23:
  if ( v2 == 3 )
    v20 = *a2;
    if ( !*a2 )
      return -1;
    v21 = *((_DWORD *)this + 1);
    v22 = a2 + 1;
    v23 = *a2;
    while ( (unsigned __int8)v23 != *(_BYTE *)(v21 + 2) )
      v24 = *v22++;
      v23 = v24;
      if ( !v24 )
        goto LABEL_33;
    result = 2;
  else
    if ( v2 != 2 )
      if ( v2 == 1 )
        v20 = *a2;
        v21 = *((_DWORD *)this + 1);
LABEL_37:
        if ( v20 )
          v28 = *(_BYTE *)v21;
          v29 = a2 + 1;
          while ( (unsigned __int8)v20 != v28 )
            v30 = *v29++;
            LOBYTE(v20) = v30;
            if ( !v30 )
              return -1;
          v2 = 1;
          return v2 - 1;
LABEL_33:
    if ( !v20 )
    v25 = a2 + 1;
    v26 = v20;
    while ( v26 != *(_BYTE *)(v21 + 1) )
      v27 = *v25++;
      v26 = v27;
      if ( !v27 )
        goto LABEL_37;
    result = 1;
  return result;
}


int __fastcall Core::FileSystemImpl::iterateOverDirectory(int a1, int a2, __int64 *a3, int a4, int a5, int a6, int a7)
{
  int v7; // r5@1
  int v8; // r4@1
  void (__fastcall *v9)(char *, int, __int64 *); // r7@1
  void (__fastcall *v10)(char *, int, signed int); // r3@1
  int v11; // r1@5
  unsigned __int64 *v12; // r0@6
  unsigned __int64 v13; // r2@7
  unsigned __int64 *v14; // r0@8
  unsigned __int64 v15; // r2@9
  unsigned __int64 v16; // r2@11
  unsigned __int64 v17; // r2@13
  unsigned __int64 *v18; // r0@15
  unsigned __int64 v19; // r2@16
  unsigned __int64 v20; // r2@18
  __int64 v21; // r2@19
  int v22; // r1@19
  int result; // r0@19
  char v24; // [sp+10h] [bp-50h]@3
  int v25; // [sp+18h] [bp-48h]@19
  int v26; // [sp+1Ch] [bp-44h]@19
  char v27; // [sp+20h] [bp-40h]@5
  char v28; // [sp+28h] [bp-38h]@2
  void (__cdecl *v29)(char *, char *, signed int); // [sp+30h] [bp-30h]@1
  int v30; // [sp+34h] [bp-2Ch]@2
  __int64 v31; // [sp+38h] [bp-28h]@1

  v7 = a2;
  v8 = a1;
  v9 = *(void (__fastcall **)(char *, int, __int64 *))(*(_DWORD *)a2 + 88);
  v31 = *a3;
  v29 = 0;
  v10 = *(void (__fastcall **)(char *, int, signed int))(a7 + 8);
  if ( v10 )
  {
    v10(&v28, a7, 2);
    v30 = *(_DWORD *)(a7 + 12);
    v29 = *(void (__cdecl **)(char *, char *, signed int))(a7 + 8);
  }
  v9(&v24, v7, &v31);
  if ( v29 )
    v29(&v28, &v28, 3);
  v11 = v27 & 1;
  if ( v27 & 1 )
    v12 = (unsigned __int64 *)(v7 + 40);
    __dmb();
    do
      v13 = __ldrexd(v12);
    while ( __strexd(v13 + 1, v12) );
    v14 = (unsigned __int64 *)(v7 + 48);
      v15 = __ldrexd(v14);
    while ( __strexd(v15, v14) );
      v16 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v16 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v17 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v17, (unsigned __int64 *)&unk_283E5E8) );
  else
    v18 = (unsigned __int64 *)(v7 + 56);
      v19 = __ldrexd(v18);
    while ( __strexd(v19 + 1, v18) );
      v20 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v20 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v7 + 12), v11, 0LL);
  v21 = *(_QWORD *)&v24;
  *(_QWORD *)&v24 = *(_QWORD *)v8;
  *(_QWORD *)v8 = v21;
  *(_DWORD *)(v8 + 8) = v25;
  v25 = 0;
  v22 = v26;
  v26 = *(_DWORD *)(v8 + 12);
  *(_DWORD *)(v8 + 12) = v22;
  result = (unsigned __int8)(*(_BYTE *)(v8 + 16) & 0xFC) | v27 & 3;
  *(_BYTE *)(v8 + 16) = result;
  return result;
}


RakNet *__fastcall Core::FileSystem::splitPathIntoFullPathSegments(int a1, __int64 *a2)
{
  int v2; // r6@1
  char v3; // r0@1
  char *v4; // r0@2
  int v5; // r5@3
  int v6; // r11@3
  signed int v7; // r1@3
  unsigned int v8; // r0@4
  bool v9; // zf@4
  _DWORD *v10; // r4@7
  signed int v11; // r7@13
  const void **v12; // r4@14
  int *v13; // r8@14
  _DWORD *v14; // r0@15
  int v15; // r1@15 OVERLAPPED
  char v16; // r10@15
  int v17; // r6@15
  unsigned int v18; // r2@15
  _DWORD *v19; // r0@18
  void *v20; // r0@22
  RakNet *result; // r0@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  int v26; // [sp+8h] [bp-468h]@1
  unsigned int v27; // [sp+10h] [bp-460h]@3
  char *v28; // [sp+14h] [bp-45Ch]@2
  int v29; // [sp+1Ch] [bp-454h]@2
  __int64 v30; // [sp+20h] [bp-450h]@1
  char v31; // [sp+28h] [bp-448h]@1
  void (*v32)(void); // [sp+30h] [bp-440h]@23
  char v33; // [sp+38h] [bp-438h]@1
  int v34; // [sp+3Ch] [bp-434h]@13
  int v35; // [sp+40h] [bp-430h]@1
  char v36; // [sp+44h] [bp-42Ch]@1
  int v37; // [sp+444h] [bp-2Ch]@1
  RakNet *v38; // [sp+448h] [bp-28h]@1

  v2 = a1;
  v26 = a1;
  v38 = _stack_chk_guard;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v35 = 1023;
  v37 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v36 = 0;
  v30 = *a2;
  j_Core::FileSystem::cleanPath_deprecated((int)&v31, (int)&v35, &v30);
  v3 = v33;
  v33 |= 2u;
  if ( v3 & 1 )
  {
    sub_21E94B4((void **)&v29, &v36);
    *(_DWORD *)(v2 + 4) = 0;
    v28 = (char *)&unk_28898CC;
    j_std::vector<Core::PathBuffer<std::string>,std::allocator<Core::PathBuffer<std::string>>>::_M_emplace_back_aux<Core::PathBuffer<std::string>>(
      (unsigned __int64 *)v2,
      &v28);
    v4 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
    {
      v22 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    v5 = v29;
    v6 = *(_DWORD *)(v29 - 12);
    v7 = j_j_utf8proc_iterate(v29, *(_DWORD *)(v29 - 12), (int *)&v27);
    if ( v7 >= 1 )
      do
        v8 = v27;
        v6 -= v7;
        v5 += v7;
        v9 = v27 == 47;
        if ( v27 != 47 )
          v9 = v27 == 92;
        if ( v9 )
        {
          v10 = *(_DWORD **)(v2 + 4);
          if ( *(_DWORD *)(*(v10 - 1) - 12) )
          {
            if ( v10 == *(_DWORD **)(v2 + 8) )
            {
              j_j__ZNSt6vectorIN4Core10PathBufferISsEESaIS2_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)v2);
              v10 = *(_DWORD **)(v2 + 4);
            }
            else
              *v10 = &unk_28898CC;
              ++v10;
              *(_DWORD *)(v2 + 4) = v10;
            EntityInteraction::setInteractText(v10 - 1, v10 - 2);
            v8 = v27;
          }
        }
        else
        v34 = 0;
        v11 = j_j_utf8proc_encode_char(v8, (int)&v34);
        if ( v11 >= 1 )
          v12 = (const void **)(v10 - 1);
          v13 = &v34;
          do
            v14 = *v12;
            *(_QWORD *)&v15 = *(_QWORD *)((char *)*v12 - 12);
            v16 = *(_BYTE *)v13;
            v17 = v15 + 1;
            if ( v15 + 1 > v18 || *(v14 - 1) >= 1 )
              sub_21E6FCC(v12, v15 + 1);
              v14 = *v12;
              v15 = *((_DWORD *)*v12 - 3);
            *((_BYTE *)v14 + v15) = v16;
            v19 = *v12;
            if ( (int *)((char *)*v12 - 12) != &dword_28898C0 )
              *(v19 - 1) = 0;
              *(v19 - 3) = v17;
              *((_BYTE *)v19 + v17) = byte_26C67B8[0];
            v13 = (int *)((char *)v13 + 1);
            --v11;
          while ( v11 );
        v2 = v26;
        v7 = j_j_utf8proc_iterate(v5, v6, (int *)&v27);
      while ( v7 > 0 );
    v20 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v29 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
  }
  if ( v32 )
    v32();
  result = (RakNet *)(_stack_chk_guard - v38);
  if ( _stack_chk_guard != v38 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall Core::FileSystemImpl::_copyDirectoryAndContentsRecursively(int a1, int a2, __int64 *a3, __int64 *a4)
{
  int v4; // r4@1
  int v5; // r5@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  int result; // r0@1
  _DWORD *v9; // [sp+8h] [bp-30h]@1
  __int64 v10; // [sp+10h] [bp-28h]@1
  __int64 v11; // [sp+18h] [bp-20h]@1
  __int64 v12; // [sp+20h] [bp-18h]@1

  v4 = a2;
  v5 = a1;
  v12 = *a3;
  v11 = *a4;
  v6 = j_operator new(4u);
  HIDWORD(v7) = sub_1BA3CB0;
  *v6 = v4;
  v9 = v6;
  LODWORD(v7) = sub_1BA3CD4;
  v10 = v7;
  result = j_Core::transferDirectory(v5, v4, &v12, v4, &v11, (int)&v9);
  if ( (_DWORD)v10 )
    result = ((int (*)(void))v10)();
  return result;
}


void __fastcall Core::OutputFileStream::~OutputFileStream(Core::OutputFileStream *this, int a2, unsigned __int64 a3)
{
  Core::OutputFileStream::~OutputFileStream(this, a2, a3);
}


RakNet *__fastcall Core::FileSystem::copyFile(int a1, __int64 *a2, __int64 *a3)
{
  int v3; // r4@1
  RakNet *result; // r0@1
  void *v5; // [sp+8h] [bp-38h]@1
  int (*v6)(void); // [sp+10h] [bp-30h]@1
  char *(__fastcall *v7)(int, int, int); // [sp+14h] [bp-2Ch]@1
  void *v8; // [sp+18h] [bp-28h]@1
  int (*v9)(void); // [sp+20h] [bp-20h]@1
  int (__fastcall *v10)(int, int, int); // [sp+24h] [bp-1Ch]@1
  __int64 v11; // [sp+28h] [bp-18h]@1
  __int64 v12; // [sp+30h] [bp-10h]@1

  v3 = a1;
  v12 = *a2;
  v11 = *a3;
  v8 = j_operator new(1u);
  v9 = (int (*)(void))sub_1B9D908;
  v10 = sub_1B9D8DE;
  v5 = j_operator new(1u);
  v6 = (int (*)(void))sub_1B9D966;
  v7 = sub_1B9D936;
  result = j_Core::TransactionFrameSourceTarget::exec(v3, &v12, &v11, (int)&v8, (int)&v5);
  if ( v6 )
    result = (RakNet *)v6();
  if ( v9 )
    result = (RakNet *)v9();
  return result;
}


Core::FileStream *__fastcall Core::FileStream::FileStream(Core::FileStream *this, int a2)
{
  int v2; // r5@1
  Core::FileStream *v3; // r4@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r2@1

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)a2;
  *(_DWORD *)v3 = *(_DWORD *)a2;
  *(_DWORD *)((char *)v3 + *(_DWORD *)(v4 - 12)) = *(_DWORD *)(a2 + 32);
  *((_DWORD *)v3 + 2) = *(_DWORD *)(a2 + 36);
  v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)v3 = v5;
  *(_DWORD *)((char *)v3 + *(_DWORD *)(v5 - 12)) = *(_DWORD *)(a2 + 12);
  *((_DWORD *)v3 + 1) = 0;
  sub_21B5AD4((int)v3 + *(_DWORD *)(*(_DWORD *)v3 - 12), (unsigned int)v3 + 12);
  v6 = *(_DWORD *)(v2 + 16);
  *((_DWORD *)v3 + 2) = v6;
  *(_DWORD *)((char *)v3 + *(_DWORD *)(v6 - 12) + 8) = *(_DWORD *)(v2 + 20);
  sub_21B5AD4((int)v3 + *(_DWORD *)(*((_DWORD *)v3 + 2) - 12) + 8, (unsigned int)v3 + 12);
  v7 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)v3 = v7;
  *(_DWORD *)((char *)v3 + *(_DWORD *)(v7 - 12)) = *(_DWORD *)(v2 + 24);
  *((_DWORD *)v3 + 2) = *(_DWORD *)(v2 + 28);
  v8 = *(_DWORD *)v2;
  *(_DWORD *)v3 = *(_DWORD *)v2;
  *(_DWORD *)((char *)v3 + *(_DWORD *)(v8 - 12)) = *(_DWORD *)(v2 + 32);
  v9 = (int)v3 + 8;
  *(_DWORD *)v9 = *(_DWORD *)(v2 + 36);
  *(_DWORD *)(v9 + 4) = &off_26D40A8;
  *(_DWORD *)(v9 + 8) = 0;
  *((_DWORD *)v3 + 5) = 0;
  *((_DWORD *)v3 + 6) = 0;
  *((_DWORD *)v3 + 7) = 0;
  *((_DWORD *)v3 + 8) = 0;
  *((_DWORD *)v3 + 9) = 0;
  sub_21C9520((unsigned int **)v3 + 10);
  *((_DWORD *)v3 + 3) = &off_272676C;
  *((_DWORD *)v3 + 11) = 0;
  *((_DWORD *)v3 + 12) = 0;
  *((_BYTE *)v3 + 52) &= 0xC0u;
  *((_DWORD *)v3 + 4) = (char *)v3 + 57;
  *((_DWORD *)v3 + 5) = (char *)v3 + 57;
  *((_DWORD *)v3 + 6) = (char *)v3 + 57;
  *((_DWORD *)v3 + 7) = (char *)v3 + 53;
  *((_DWORD *)v3 + 8) = (char *)v3 + 53;
  *((_DWORD *)v3 + 9) = (char *)v3 + 4148;
  return v3;
}


void __fastcall Core::FileStorageArea::addObserver(int a1, int a2)
{
  Core::FileStorageArea::addObserver(a1, a2);
}


int __fastcall Core::Result::makeFailure(int a1, int a2)
{
  int v2; // r4@1
  int (__cdecl *v3)(__int64 *, __int64 *); // r3@1
  int (__cdecl *v4)(__int64 *, __int64 *); // r3@2
  int result; // r0@2
  __int64 v6; // [sp+0h] [bp-20h]@1
  int (__cdecl *v7)(__int64 *, __int64 *); // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@1

  v2 = a1;
  v6 = *(_QWORD *)a2;
  v3 = *(int (__cdecl **)(__int64 *, __int64 *))(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  v7 = v3;
  v8 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 8) = 0;
  if ( v3 )
  {
    ((void (__fastcall *)(int, __int64 *, signed int))v3)(a1, &v6, 2);
    v4 = v7;
    *(_DWORD *)(v2 + 12) = v8;
    *(_DWORD *)(v2 + 8) = v4;
    result = *(_BYTE *)(v2 + 16) & 0xFC;
    *(_BYTE *)(v2 + 16) = result;
    if ( v4 )
      result = v4(&v6, &v6);
  }
  else
    result = *(_BYTE *)(a1 + 16) & 0xFC;
  return result;
}


void __fastcall Core::FileImpl::~FileImpl(Core::FileImpl *this)
{
  Core::FileImpl *v1; // r0@1

  v1 = j_Core::FileImpl::~FileImpl(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall Core::FileStdStreamBuf::overflow(Core::FileStdStreamBuf *this, int a2, unsigned __int64 a3)
{
  int v3; // r4@1
  int v4; // r1@1
  bool v5; // zf@1
  signed int result; // r0@5

  v3 = a2;
  v4 = *((_DWORD *)this + 8);
  v5 = v4 == 0;
  if ( v4 )
  {
    v4 = *((_BYTE *)this + 40);
    v5 = (v4 & 2) == 0;
  }
  if ( v5 )
    result = -1;
  else
    if ( v3 != -1 )
    {
      **((_BYTE **)this + 5) = v3;
      v4 = *((_DWORD *)this + 5) + 1;
      *((_DWORD *)this + 5) = v4;
    }
    if ( j_Core::FileStdStreamBuf::_flushoutput(this, v4, a3) == -1 )
      v3 = -1;
    result = v3;
  return result;
}


int (**__fastcall Core::FileSystemImpl::commit(Core::FileSystemImpl *this, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r4@1
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@1

  v2 = a2;
  result = j_Core::FileStorageArea::_endTransaction(this, *(Core::FileSystemImpl **)(a2 + 12), a2);
  *(_DWORD *)(v2 + 12) = 0;
  return result;
}


void __fastcall Core::FileImpl::~FileImpl(Core::FileImpl *this)
{
  Core::FileImpl::~FileImpl(this);
}


void __fastcall Core::Result::makeFailure(int a1, int *a2)
{
  int v2; // r5@1
  _DWORD *v3; // r0@1
  char *v4; // r0@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  char *v7; // [sp+0h] [bp-28h]@1
  _DWORD *v8; // [sp+4h] [bp-24h]@1
  void (*v9)(void); // [sp+Ch] [bp-1Ch]@1
  int (__fastcall *v10)(int); // [sp+10h] [bp-18h]@1

  v2 = a1;
  sub_DA73B4((int *)&v7, a2);
  v9 = 0;
  v3 = operator new(4u);
  *v3 = v7;
  v7 = (char *)&unk_28898CC;
  v8 = v3;
  v9 = (void (*)(void))std::_Function_base::_Base_manager<Core::Result::makeFailure(std::string &&)::{lambda(std::string *)#1}>::_M_manager;
  v10 = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailure(std::string &&)::{lambda(std::string *)#1}>::_M_invoke;
  Core::Result::makeFailure(v2, (int)&v8);
  if ( v9 )
    v9();
  v4 = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9(v4);
  }
}


void __fastcall Core::FileStorageArea::getStorageAreaForPath(int a1, int a2, __int64 *a3)
{
  __int64 *v3; // r6@1
  int v4; // r0@2
  __int64 v5; // ST00_8@3
  __int64 v6; // ST00_8@5

  v3 = a3;
  if ( &pthread_create )
  {
    v4 = j_pthread_mutex_lock_0((pthread_mutex_t *)&Core::FileStorageArea::sStorageAreaLock);
    if ( v4 )
      sub_21E5E14(v4);
    v5 = *v3;
    j_Core::FileStorageArea::_getStorageAreaForPathImpl();
    if ( &pthread_create )
      j_pthread_mutex_unlock_0((pthread_mutex_t *)&Core::FileStorageArea::sStorageAreaLock);
  }
  else
    v6 = *a3;
}


void __fastcall Core::InputFileStream::~InputFileStream(Core::InputFileStream *this, int a2, unsigned __int64 a3)
{
  Core::InputFileStream *v3; // r4@1

  v3 = this;
  *(_DWORD *)this = &off_26D7EEC;
  *((_DWORD *)this + 1039) = &off_26D7F14;
  *((_DWORD *)this + 2) = &off_26D7F00;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::InputFileStream *)((char *)this + 12), (int)&off_26D7F14, a3);
  *(_DWORD *)v3 = &off_26D7F6C;
  *((_DWORD *)v3 + 1039) = &off_26D7F80;
  *((_DWORD *)v3 + 1) = 0;
  sub_DA76E4((_DWORD *)v3 + 1039);
  j_j_j__ZdlPv_3((void *)v3);
}


Core::FileStorageArea *__fastcall Core::FileStorageArea::~FileStorageArea(Core::FileStorageArea *this)
{
  Core::FileStorageArea *v1; // r4@1
  int v2; // r0@2
  int v3; // r0@3
  int v4; // r2@3
  Core::FileStorageArea *v5; // r1@4
  int v6; // r3@5
  int v7; // r5@6
  bool v8; // zf@7
  Core::FileStorageArea **v9; // r3@7
  Core::FileStorageArea *v10; // r7@10
  bool v11; // zf@10
  int v12; // r3@15
  Core::FileStorageArea *v13; // r7@28
  int v14; // r5@31
  unsigned int *v15; // r1@32
  unsigned int v16; // r0@34
  unsigned int *v17; // r6@38
  unsigned int v18; // r0@40
  char *v19; // r5@45 OVERLAPPED
  char *v20; // r6@45 OVERLAPPED
  int v21; // t1@46
  void *v22; // r0@50
  void *v23; // r0@52
  int v24; // r1@54
  void *v25; // r0@54
  int v26; // r0@55
  unsigned int *v27; // r2@56
  unsigned int v28; // r1@58
  unsigned int *v30; // r2@64
  signed int v31; // r1@66

  v1 = this;
  *(_DWORD *)this = &off_2726720;
  if ( &pthread_create )
  {
    v2 = j_pthread_mutex_lock_0((pthread_mutex_t *)&Core::FileStorageArea::sStorageAreaLock);
    if ( v2 )
      sub_21E5E14(v2);
  }
  v3 = dword_283E588;
  v4 = Core::FileStorageArea::sStorageAreas;
  if ( Core::FileStorageArea::sStorageAreas != dword_283E588 )
    v5 = *(Core::FileStorageArea **)(dword_283E588 - 4);
    if ( v5 == v1 )
    {
      dword_283E588 -= 4;
      goto LABEL_29;
    }
    v6 = (dword_283E588 - Core::FileStorageArea::sStorageAreas) >> 4;
    if ( v6 >= 1 )
      v7 = v6 + 1;
      do
      {
        v8 = *(_DWORD *)v4 == (_DWORD)v1;
        v9 = (Core::FileStorageArea **)v4;
        if ( *(Core::FileStorageArea **)v4 != v1 )
        {
          v9 = (Core::FileStorageArea **)(v4 + 4);
          v8 = *(_DWORD *)(v4 + 4) == (_DWORD)v1;
        }
        if ( v8 )
          goto LABEL_28;
        v9 = (Core::FileStorageArea **)(v4 + 8);
        v10 = *(Core::FileStorageArea **)(v4 + 8);
        v11 = v10 == v1;
        if ( v10 != v1 )
          v9 = (Core::FileStorageArea **)(v4 + 12);
          v11 = *(_DWORD *)(v4 + 12) == (_DWORD)v1;
        if ( v11 )
        --v7;
        v4 += 16;
      }
      while ( v7 > 1 );
    if ( 1 == (dword_283E588 - v4) >> 2 )
      v9 = (Core::FileStorageArea **)v4;
      goto LABEL_24;
    v12 = (dword_283E588 - v4) >> 2;
    if ( v12 == 2 )
    else
      if ( v12 != 3 )
        v9 = (Core::FileStorageArea **)dword_283E588;
        goto LABEL_28;
      if ( *(Core::FileStorageArea **)v4 == v1 )
LABEL_28:
        v13 = *v9;
        *v9 = v5;
        *(_DWORD *)(v3 - 4) = v13;
        dword_283E588 -= 4;
        goto LABEL_29;
      v9 = (Core::FileStorageArea **)(v4 + 4);
    if ( *v9 != v1 )
      ++v9;
LABEL_24:
      if ( *v9 != v1 )
      goto LABEL_28;
    goto LABEL_28;
LABEL_29:
    j_pthread_mutex_unlock_0((pthread_mutex_t *)&Core::FileStorageArea::sStorageAreaLock);
  v14 = *((_DWORD *)v1 + 42);
  if ( v14 )
    v15 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
      __dmb();
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  *(_QWORD *)&v19 = *((_QWORD *)v1 + 19);
  if ( v19 != v20 )
    do
      *(_DWORD *)(*(_DWORD *)v19 + 4) = 0;
      v21 = *(_DWORD *)v19;
      v19 += 4;
      (*(void (**)(void))(*(_DWORD *)v21 + 8))();
    while ( v20 != v19 );
    v19 = (char *)*((_DWORD *)v1 + 38);
  if ( v19 )
    j_operator delete(v19);
  v22 = (void *)*((_DWORD *)v1 + 34);
  if ( v22 )
    j_operator delete(v22);
  v23 = (void *)*((_DWORD *)v1 + 31);
  if ( v23 )
    j_operator delete(v23);
  v24 = *((_DWORD *)v1 + 4);
  v25 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v24 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = *((_DWORD *)v1 + 2);
  if ( v26 )
    v27 = (unsigned int *)(v26 + 8);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 == 1 )
      (*(void (**)(void))(*(_DWORD *)v26 + 12))();
  return v1;
}


RakNet *__fastcall Core::FileSystem::getUniqueFilePathForFile(int a1, __int64 *a2)
{
  int v2; // r4@1
  __int64 *v3; // r6@1
  char *v4; // r8@1
  int v5; // r0@1
  int v6; // r11@2
  const char *v7; // r10@4
  int v8; // r7@4
  int v9; // r5@4
  _BYTE *v10; // r6@4
  unsigned int v11; // r0@4
  unsigned int v12; // r4@4
  _BYTE *v13; // r2@5
  int v14; // r6@9
  unsigned int **v15; // r11@9
  int v16; // r5@9
  void **v17; // r4@9
  char v18; // r7@11
  int v19; // r7@13
  int v20; // r0@16
  char *v21; // r7@16
  int v22; // r0@16
  int v23; // r7@16
  __int64 v24; // r0@16
  int v25; // r7@16
  int v26; // r7@17
  void *v27; // r0@18
  char *v28; // r0@19
  unsigned int *v29; // r2@20
  signed int v30; // r1@22
  unsigned int *v31; // r2@24
  signed int v32; // r1@26
  RakNet *result; // r0@36
  void **v34; // [sp+24h] [bp-16DCh]@9
  void **v35; // [sp+28h] [bp-16D8h]@9
  void **v36; // [sp+2Ch] [bp-16D4h]@9
  void *v37; // [sp+30h] [bp-16D0h]@9
  void *v38; // [sp+34h] [bp-16CCh]@9
  void **v39; // [sp+38h] [bp-16C8h]@9
  void **v40; // [sp+3Ch] [bp-16C4h]@9
  void **v41; // [sp+40h] [bp-16C0h]@9
  char *v42; // [sp+4Ch] [bp-16B4h]@9
  int v43; // [sp+50h] [bp-16B0h]@9
  unsigned int **v44; // [sp+54h] [bp-16ACh]@9
  char *s; // [sp+58h] [bp-16A8h]@9
  int v46; // [sp+68h] [bp-1698h]@9
  int v47; // [sp+6Ch] [bp-1694h]@9
  void *v48; // [sp+78h] [bp-1688h]@9
  int v49; // [sp+7Ch] [bp-1684h]@11
  int v50; // [sp+84h] [bp-167Ch]@16
  __int64 v51; // [sp+88h] [bp-1678h]@1
  __int64 v52; // [sp+90h] [bp-1670h]@1
  __int64 v53; // [sp+98h] [bp-1668h]@11
  __int64 v54; // [sp+A0h] [bp-1660h]@1
  void (*v55)(void); // [sp+A8h] [bp-1658h]@11
  int (__fastcall *v56)(int, int, int); // [sp+ACh] [bp-1654h]@11
  char v57; // [sp+B0h] [bp-1650h]@16
  char v58; // [sp+B4h] [bp-164Ch]@17
  int v59; // [sp+4B4h] [bp-124Ch]@17
  int v60; // [sp+4B8h] [bp-1248h]@2
  char v61; // [sp+4BCh] [bp-1244h]@3
  int v62; // [sp+8BCh] [bp-E44h]@3
  char v63; // [sp+8C0h] [bp-E40h]@1
  int v64; // [sp+8C4h] [bp-E3Ch]@16
  char v65; // [sp+CC8h] [bp-A38h]@1
  void **v66; // [sp+10D0h] [bp-630h]@1
  int v67; // [sp+10D4h] [bp-62Ch]@10
  void **v68; // [sp+10D8h] [bp-628h]@11
  void **v69; // [sp+10DCh] [bp-624h]@10
  char v70; // [sp+10E0h] [bp-620h]@11
  signed int v71; // [sp+10FCh] [bp-604h]@16
  char *v72; // [sp+1100h] [bp-600h]@16
  void **v73; // [sp+1104h] [bp-5FCh]@16
  int v74; // [sp+1174h] [bp-58Ch]@16
  __int16 v75; // [sp+1178h] [bp-588h]@16
  int v76; // [sp+16D0h] [bp-30h]@1
  RakNet *v77; // [sp+16D4h] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  v4 = &v65;
  v77 = _stack_chk_guard;
  v52 = *a2;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v65, &v52);
  v51 = *v3;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::getEntryExtensionWithoutDot((int)&v63, &v51);
  v54 = *v3;
  v5 = j_Core::SplitPathT<1024u,64u>::SplitPathT((int)&v66, (const char **)&v54);
  if ( v76 )
  {
    v6 = v5;
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::Path>((unsigned int *)&v60, v5 + 1024, v76 - 1);
  }
  else
    j___aeabi_memclr8_0((int)&v60, 1028);
    v60 = 1023;
    v62 = 0;
    v61 = 0;
  v7 = *(const char **)v3;
  v8 = 0;
  *(_DWORD *)v2 = 1023;
  v9 = v2;
  *(_BYTE *)(v2 + 4) = 0;
  v10 = (_BYTE *)(v2 + 4);
  *(_DWORD *)(v2 + 1028) = 0;
  v11 = j_strlen_0(v7);
  v12 = v11;
  if ( v11 < 0x400 )
    if ( v11 )
      j___aeabi_memcpy_0((int)v10, (int)v7, v11);
    v13 = v10;
    v4 = &v65;
    *(_BYTE *)(v9 + v12 + 4) = 0;
    v8 = *(_DWORD *)(v9 + 1028) + v12;
    *v10 = 0;
  v14 = v6;
  v15 = (unsigned int **)(v6 + 40);
  v46 = v9;
  *(_DWORD *)(v9 + 1028) = v8;
  s = v4 + 4;
  v43 = v14 + 12;
  v42 = (char *)(v14 + 8);
  v16 = v14 + 52;
  v44 = v15;
  v41 = (void **)off_26D3F64;
  v48 = off_26D3F6C;
  v39 = (void **)off_26D3F70;
  v38 = off_26D3F74;
  v37 = off_26D3F78;
  v17 = (void **)off_26D3F68;
  v36 = off_26D3F60;
  v34 = off_26D3F84;
  v35 = off_26D3F80[0];
  v40 = (void **)off_26D3F68;
  v47 = 0;
  while ( 1 )
    v49 = (int)v13;
    v53 = __PAIR__(v8, (unsigned int)v13);
    LODWORD(v54) = j_operator new(1u);
    v56 = sub_1B9D648;
    v55 = (void (*)(void))sub_1B9D672;
    j_Core::TransactionFrame::exec(v14, 0, &v53, (int)&v54);
    v18 = v70;
    v70 |= 2u;
    if ( v68 )
      ((void (__fastcall *)(int, int, signed int))v68)(v14, v14, 3);
    v19 = v18 & 1;
    if ( v55 )
      v55();
    if ( !v19 )
      break;
    sub_21B6308(v16);
    v73 = &off_26D3AF0;
    v74 = 0;
    v75 = 0;
    *(_DWORD *)(v14 + 172) = 0;
    *(_DWORD *)(v14 + 176) = 0;
    *(_DWORD *)(v14 + 180) = 0;
    *(_DWORD *)(v14 + 184) = 0;
    v66 = v17;
    *(_DWORD *)((char *)*(v17 - 3) + v14) = v48;
    v67 = 0;
    sub_21B5AD4((int)*(v66 - 3) + v14, 0);
    v68 = v39;
    *(_DWORD *)((char *)*(v39 - 3) + (_DWORD)v42) = v38;
    sub_21B5AD4((int)&v42[(_DWORD)*(v68 - 3)], 0);
    v66 = v41;
    *(_DWORD *)((char *)*(v41 - 3) + v14) = v37;
    v66 = &off_26D3F94;
    v73 = &off_26D3FBC;
    v68 = &off_26D3FA8;
    v69 = &off_26D40A8;
    *(_DWORD *)(v14 + 16) = 0;
    *(_DWORD *)(v14 + 20) = 0;
    *(_DWORD *)(v14 + 24) = 0;
    *(_DWORD *)(v14 + 28) = 0;
    *(_DWORD *)(v14 + 32) = 0;
    *(_DWORD *)(v14 + 36) = 0;
    sub_21C9520(v15);
    v69 = &off_27734E8;
    v71 = 24;
    v72 = (char *)&unk_28898CC;
    sub_21B5AD4((int)*(v66 - 3) + v14, v43);
    v20 = j_strlen_0(s);
    sub_21CBF38(v42, (int)s, v20);
    sub_21CBF38(v42, (int)"(", 1);
    v21 = (char *)sub_21CC43C(v42, ++v47);
    sub_21CBF38(v21, (int)").", 2);
    v22 = j_strlen_0((const char *)&v64);
    sub_21CBF38(v21, (int)&v64, v22);
    v23 = v62;
    sub_21CFED8(&v50, v43);
    LODWORD(v24) = v50;
    HIDWORD(v24) = *(_DWORD *)(v50 - 12);
    LODWORD(v54) = (unsigned int)&v60 | 4;
    HIDWORD(v54) = v23;
    *(_QWORD *)&v55 = v24;
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v57, (int)&v54, 2);
    v25 = v46;
    if ( &v57 != (char *)v46 )
    {
      v26 = v59;
      j___aeabi_memcpy4_0(v49, (int)&v58, v59 + 1);
      *(_DWORD *)(v46 + 1028) = v26;
      v25 = v46;
      v58 = 0;
      v59 = 0;
    }
    v27 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v50 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
      }
      else
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v66 = v36;
    v15 = v44;
    v16 = v14 + 52;
    *(_DWORD *)((char *)*(v36 - 3) + v14) = v35;
    *(_QWORD *)&v68 = __PAIR__(&off_27734E8, (unsigned int)v34);
    v28 = v72 - 12;
    v17 = v40;
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v72 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    sub_21C802C(v44);
    v66 = v40;
    *(_DWORD *)((char *)*(v40 - 3) + v14) = v48;
    sub_21B6560((_DWORD *)(v14 + 52));
    v8 = *(_DWORD *)(v25 + 1028);
    v13 = (_BYTE *)v49;
  result = (RakNet *)(_stack_chk_guard - v77);
  if ( _stack_chk_guard != v77 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall Core::FileSystem_generic::_deleteFile(int a1, int a2, const char **a3)
{
  int v3; // r4@1
  int v4; // r5@1
  _DWORD *v5; // r0@2
  __int64 v6; // r1@2
  int result; // r0@2

  v3 = a1;
  v4 = j_remove(*a3);
  if ( v4 )
  {
    v5 = j_operator new(8u);
    HIDWORD(v6) = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v6) = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
    *v5 = "std::remove() failed";
    v5[1] = v4;
    *(_DWORD *)v3 = v5;
    *(_QWORD *)(v3 + 8) = v6;
    result = *(_BYTE *)(v3 + 16) & 0xFC;
    *(_BYTE *)(v3 + 16) = result;
  }
  else
    *(_DWORD *)(v3 + 8) = 0;
    result = (unsigned __int8)(*(_BYTE *)(v3 + 16) & 0xFC) | 1;
  return result;
}


int __fastcall std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<long>(char const*,long const&)::{lambda(std::string *)#1}>::_M_manager(void **a1, _QWORD **a2, int a3)
{
  _QWORD **v3; // r5@1
  void **v4; // r4@1
  _QWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      j_operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = j_operator new(8u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


int __fastcall Core::FileImpl::read(Core::FileImpl *this, void *a2, unsigned __int64 a3, unsigned __int64 *a4, int a5, unsigned __int64 *a6)
{
  void *v6; // r5@1
  Core::FileImpl *v7; // r4@1
  int result; // r0@1
  __int64 v9; // r1@1
  char v10; // [sp+10h] [bp-28h]@1
  int (__cdecl *v11)(char *, char *, signed int); // [sp+18h] [bp-20h]@1

  v6 = a2;
  v7 = this;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a2 + 20))(&v10);
  result = j_Core::FileSystemImpl::_readOperation(*((_DWORD *)v6 + 2), (int)&v10, *a6);
  v9 = *(_QWORD *)result;
  *(_QWORD *)result = *(_QWORD *)v7;
  *(_QWORD *)v7 = v9;
  LODWORD(v9) = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = 0;
  *((_DWORD *)v7 + 2) = v9;
  LODWORD(v9) = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = *((_DWORD *)v7 + 3);
  *((_DWORD *)v7 + 3) = v9;
  LOBYTE(v9) = *(_BYTE *)(result + 16);
  *((_BYTE *)v7 + 16) = *((_BYTE *)v7 + 16) & 0xFC | v9 & 3;
  *(_BYTE *)(result + 16) = v9 | 3;
  if ( v11 )
    result = v11(&v10, &v10, 3);
  return result;
}


int __fastcall Core::FileSystemImpl::setLoggingEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 8) = a2;
  return result;
}


int __fastcall Core::FileImpl::flush(Core::FileImpl *this, int a2)
{
  int v2; // r5@1
  Core::FileImpl *v3; // r4@1
  int v4; // r7@1
  _DWORD *v5; // r0@1
  int v6; // r3@1
  int result; // r0@1
  __int64 v8; // r1@1
  char v9; // [sp+8h] [bp-38h]@1
  int (*v10)(void); // [sp+10h] [bp-30h]@3
  _DWORD *v11; // [sp+1Ch] [bp-24h]@1
  int (*v12)(void); // [sp+24h] [bp-1Ch]@1
  int (__fastcall *v13)(int, int); // [sp+28h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a2 + 48))(&v9);
  v4 = *(_DWORD *)(v2 + 8);
  v5 = j_operator new(4u);
  *v5 = v2;
  v11 = v5;
  v12 = (int (*)(void))sub_1B9F180;
  v13 = sub_1B9F160;
  result = j_Core::FileSystemImpl::_writeOperation(v4, (int)&v9, (int)&v11, v6, 0LL);
  v8 = *(_QWORD *)result;
  *(_QWORD *)result = *(_QWORD *)v3;
  *(_QWORD *)v3 = v8;
  LODWORD(v8) = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = 0;
  *((_DWORD *)v3 + 2) = v8;
  LODWORD(v8) = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = *((_DWORD *)v3 + 3);
  *((_DWORD *)v3 + 3) = v8;
  LOBYTE(v8) = *(_BYTE *)(result + 16);
  *((_BYTE *)v3 + 16) = *((_BYTE *)v3 + 16) & 0xFC | v8 & 3;
  *(_BYTE *)(result + 16) = v8 | 3;
  if ( v12 )
    result = v12();
  if ( v10 )
    result = v10();
  return result;
}


int __fastcall Core::FileSystem::isValidPath(int a1, __int64 *a2)
{
  __int64 *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  __int64 v5; // r1@2
  __int64 v6; // kr00_8@2
  int result; // r0@2
  void (__fastcall *v8)(char *); // r6@3
  int v9; // r4@11
  unsigned int *v10; // r1@12
  unsigned int *v11; // r5@18
  char v12; // [sp+4h] [bp-6Ch]@3
  void (*v13)(void); // [sp+Ch] [bp-64h]@3
  __int64 v14; // [sp+18h] [bp-58h]@3
  char v15; // [sp+20h] [bp-50h]@3
  void (*v16)(void); // [sp+28h] [bp-48h]@5
  int v17; // [sp+34h] [bp-3Ch]@3
  __int64 v18; // [sp+38h] [bp-38h]@1
  __int64 v19; // [sp+40h] [bp-30h]@1
  int (*v20)(void); // [sp+48h] [bp-28h]@2
  int v21; // [sp+4Ch] [bp-24h]@2
  unsigned __int8 v22; // [sp+50h] [bp-20h]@1
  int v23; // [sp+58h] [bp-18h]@1
  int v24; // [sp+5Ch] [bp-14h]@1

  v2 = a2;
  v23 = 0;
  v24 = 0;
  v3 = a1;
  v18 = *a2;
  j_Core::FileStorageArea::getStorageAreaForPath((int)&v19, (int)&v23, &v18);
  v4 = v22;
  if ( v22 & 1 )
  {
    v22 |= 2u;
    (*(void (__fastcall **)(int *))(*(_DWORD *)v23 + 8))(&v17);
    v8 = *(void (__fastcall **)(char *))(*(_DWORD *)v17 + 8);
    v14 = *v2;
    v8(&v15);
    j_Core::FileSystemImpl::commit((Core::FileSystemImpl *)&v12, v17);
    j_Core::Result::merge(v3, (int)&v15, (int)&v12);
    if ( v13 )
      v13();
    if ( v16 )
      v16();
    result = v17;
    if ( v17 )
      result = (*(int (**)(void))(*(_DWORD *)v17 + 4))();
    if ( v20 )
      result = v20();
  }
  else
    v5 = v19;
    v6 = *(_QWORD *)v3;
    v19 = *(_QWORD *)v3;
    *(_QWORD *)v3 = v5;
    LODWORD(v5) = v20;
    v20 = 0;
    *(_DWORD *)(v3 + 8) = v5;
    LODWORD(v5) = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v3 + 12) = v21;
    BYTE4(v5) = v4 & 3;
    v21 = v5;
    result = v4 | 3;
    LOBYTE(v5) = *(_BYTE *)(v3 + 16);
    v22 = result;
    *(_BYTE *)(v3 + 16) = v5 & 0xFC | BYTE4(v5);
  v9 = v24;
  if ( v24 )
    v10 = (unsigned int *)(v24 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
    }
    else
      result = (*v10)--;
    if ( result == 1 )
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
      }
      else
        result = (*v11)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return result;
}


RakNet *__fastcall Core::FileSystem::deleteDirectoryAndContentsRecursively(int a1, __int64 *a2)
{
  int v2; // r4@1
  RakNet *result; // r0@1
  void *v4; // [sp+0h] [bp-20h]@1
  int (__fastcall *v5)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-14h]@1
  __int64 v7; // [sp+10h] [bp-10h]@1

  v2 = a1;
  v7 = *a2;
  v4 = j_operator new(1u);
  v5 = sub_1B9DF86;
  v6 = sub_1B9DF6C;
  result = j_Core::TransactionFrame::exec(v2, 1, &v7, (int)&v4);
  if ( v5 )
    result = (RakNet *)((int (__cdecl *)(void **))v5)(&v4);
  return result;
}


signed int __fastcall Core::FileSystem_generic::_getEntryType(int a1, const char **a2)
{
  int v2; // r1@1
  signed int result; // r0@1
  int v4; // r1@2
  int v5; // [sp+0h] [bp-70h]@1
  int v6; // [sp+10h] [bp-60h]@2

  v2 = j_stat(*a2, (struct stat *)&v5);
  result = 2;
  if ( !v2 )
  {
    v4 = v6 & 0xF000;
    if ( v4 == 0x4000 )
      result = 1;
    if ( v4 == 0x8000 )
      result = 0;
  }
  return result;
}


int __fastcall Core::FileSystem_generic::_getLastModificationTime(int a1, int a2, const char **a3, _DWORD *a4)
{
  int v4; // r4@1
  _DWORD *v5; // r5@1
  int v6; // r6@1
  _DWORD *v7; // r0@2
  __int64 v8; // r1@2
  int result; // r0@2
  int v10; // [sp+0h] [bp-78h]@1
  int v11; // [sp+50h] [bp-28h]@3

  v4 = a1;
  v5 = a4;
  v6 = j_stat(*a3, (struct stat *)&v10);
  if ( v6 )
  {
    *v5 = 0;
    v7 = j_operator new(8u);
    HIDWORD(v8) = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v8) = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
    *v7 = "stat() failed";
    v7[1] = v6;
    *(_DWORD *)v4 = v7;
    *(_QWORD *)(v4 + 8) = v8;
    result = *(_BYTE *)(v4 + 16) & 0xFC;
  }
  else
    *v5 = v11;
    *(_DWORD *)(v4 + 8) = 0;
    result = (unsigned __int8)(*(_BYTE *)(v4 + 16) & 0xFC) | 1;
  *(_BYTE *)(v4 + 16) = result;
  return result;
}


int (**__fastcall Core::FileStorageArea::_beginTransaction(Core::FileStorageArea *this, Core::FileSystemImpl *a2, bool a3))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  Core::FileStorageArea *v3; // r6@1
  pthread_mutex_t *v4; // r8@1
  Core::FileSystemImpl *v5; // r9@1
  int v6; // r0@2
  __int64 v7; // r0@3
  void *v8; // r7@5
  unsigned int v9; // r2@5
  unsigned int v10; // r1@7
  unsigned int v11; // r5@7
  char *v12; // r4@13
  char *v13; // r11@15
  Core::FileSystemImpl **v14; // r0@21
  void (*v15)(void); // r3@22
  int *v16; // r5@22
  int *v17; // r7@22
  int v18; // t1@24
  _BYTE *v19; // r7@30
  char *v20; // r4@30
  unsigned int v21; // r2@30
  unsigned int v22; // r1@32
  unsigned int v23; // r5@32
  int v24; // r11@39
  Core::FileStorageArea *v25; // r0@44
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@46
  void *v27; // [sp+4h] [bp-34h]@22
  int (__fastcall *v28)(void **, void **, int); // [sp+Ch] [bp-2Ch]@22
  int (__fastcall *v29)(int, int); // [sp+10h] [bp-28h]@22

  v3 = this;
  v4 = (pthread_mutex_t *)((char *)this + 120);
  v5 = a2;
  if ( &pthread_create )
  {
    v6 = j_pthread_mutex_lock_0(v4);
    if ( v6 )
      sub_21E5E14(v6);
  }
  v7 = *((_QWORD *)v3 + 16);
  if ( (_DWORD)v7 == HIDWORD(v7) )
    v8 = (void *)*((_DWORD *)v3 + 31);
    v9 = ((signed int)v7 - (signed int)v8) >> 2;
    if ( !v9 )
      v9 = 1;
    HIDWORD(v7) = v9 + (((signed int)v7 - (signed int)v8) >> 2);
    v11 = v9 + (((signed int)v7 - (signed int)v8) >> 2);
    if ( 0 != HIDWORD(v7) >> 30 )
      v11 = 0x3FFFFFFF;
    if ( v10 < v9 )
    if ( v11 )
    {
      if ( v11 >= 0x40000000 )
        sub_21E57F4();
      v12 = (char *)j_operator new(4 * v11);
      LODWORD(v7) = *(_QWORD *)((char *)v3 + 124) >> 32;
      v8 = (void *)*(_QWORD *)((char *)v3 + 124);
    }
    else
      v12 = 0;
    v13 = &v12[v7 - (_DWORD)v8];
    *(_DWORD *)&v12[v7 - (_DWORD)v8] = v5;
    if ( 0 != ((signed int)v7 - (signed int)v8) >> 2 )
      j___aeabi_memmove4_0((int)v12, (int)v8);
    if ( v8 )
      j_operator delete(v8);
    *((_DWORD *)v3 + 31) = v12;
    *((_DWORD *)v3 + 32) = v13 + 4;
    *((_DWORD *)v3 + 33) = &v12[4 * v11];
  else
    *(_DWORD *)v7 = v5;
    *((_DWORD *)v3 + 32) += 4;
  if ( j_Core::FileSystemImpl::getAccessType(v5) == 1 )
    v14 = (Core::FileSystemImpl **)(*((_QWORD *)v3 + 17) >> 32);
    if ( v14 == (Core::FileSystemImpl **)*((_QWORD *)v3 + 17) )
      v27 = j_operator new(1u);
      v15 = (void (*)(void))sub_1B99750;
      v28 = sub_1B99750;
      v29 = sub_1B99748;
      v17 = (int *)(*((_QWORD *)v3 + 19) >> 32);
      v16 = (int *)*((_QWORD *)v3 + 19);
      if ( v16 == v17 )
        goto LABEL_55;
      do
      {
        if ( !v15 )
          sub_21E5F48();
        v18 = *v16;
        ++v16;
        v29((int)&v27, v18);
        v15 = (void (*)(void))v28;
      }
      while ( v17 != v16 );
      if ( v28 )
LABEL_55:
        v15();
      v14 = (Core::FileSystemImpl **)*((_DWORD *)v3 + 35);
    if ( v14 == *((Core::FileSystemImpl ***)v3 + 36) )
      v19 = (_BYTE *)*((_DWORD *)v3 + 34);
      v20 = 0;
      v21 = ((char *)v14 - v19) >> 2;
      if ( !v21 )
        v21 = 1;
      v22 = v21 + (((char *)v14 - v19) >> 2);
      v23 = v21 + (((char *)v14 - v19) >> 2);
      if ( 0 != v22 >> 30 )
        v23 = 0x3FFFFFFF;
      if ( v22 < v21 )
      if ( v23 )
        if ( v23 >= 0x40000000 )
          sub_21E57F4();
        v20 = (char *)j_operator new(4 * v23);
        v14 = (Core::FileSystemImpl **)(*((_QWORD *)v3 + 17) >> 32);
        v19 = (_BYTE *)*((_QWORD *)v3 + 17);
      v24 = (int)&v20[(char *)v14 - v19];
      *(_DWORD *)&v20[(char *)v14 - v19] = v5;
      if ( 0 != ((char *)v14 - v19) >> 2 )
        j___aeabi_memmove4_0((int)v20, (int)v19);
      if ( v19 )
        j_operator delete(v19);
      *((_DWORD *)v3 + 34) = v20;
      *((_DWORD *)v3 + 35) = v24 + 4;
      *((_DWORD *)v3 + 36) = &v20[4 * v23];
      *v14 = v5;
      *((_DWORD *)v3 + 35) += 4;
  v25 = (Core::FileStorageArea *)*((_DWORD *)v3 + 41);
  if ( v25 )
    j_Core::FileStorageArea::_beginTransaction(v25, v5, 0);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v4);
  return result;
}


signed int __fastcall Core::find(unsigned int a1, int a2, unsigned int a3, int a4)
{
  signed int v4; // r12@2
  int v5; // lr@4
  unsigned int v6; // r8@4
  int v7; // r5@5

  if ( a3 )
  {
    v4 = -1;
    if ( a1 && a1 >= a3 )
    {
      v5 = 0;
      v6 = a1;
      v4 = -1;
      do
      {
        v7 = 0;
        while ( *(_BYTE *)(a2 + v5 + v7) == *(_BYTE *)(a4 + v7) )
        {
          if ( ++v7 >= a3 )
            return v5;
        }
        if ( ++v5 >= a1 )
          break;
        --v6;
      }
      while ( v6 >= a3 );
    }
  }
  else
    v4 = 0;
  return v4;
}


signed int __fastcall Core::FileSystem_generic::_fileExists(int a1, const char **a2)
{
  int v2; // r1@1
  signed int result; // r0@1
  int v4; // [sp+0h] [bp-70h]@1
  int v5; // [sp+10h] [bp-60h]@2

  v2 = j_stat(*a2, (struct stat *)&v4);
  result = 0;
  if ( !v2 && (v5 & 0xF000) == 0x8000 )
    result = 1;
  return result;
}


int __fastcall Core::FileSystemImpl::isValidPath(int a1, int a2, __int64 *a3)
{
  int (__fastcall *v3)(int); // r3@1
  __int64 v5; // [sp+0h] [bp-10h]@1

  v3 = *(int (__fastcall **)(int))(*(_DWORD *)a2 + 124);
  v5 = *a3;
  return v3(a1);
}


int __fastcall Core::FileStream::open(int a1, __int64 *a2, int a3)
{
  int v3; // r4@1
  __int64 *v4; // r5@1
  char v5; // r0@1
  int v6; // r1@4
  int v7; // r0@4
  int result; // r0@12
  __int64 v9; // [sp+8h] [bp-38h]@1
  char v10; // [sp+10h] [bp-30h]@1
  int v11; // [sp+14h] [bp-2Ch]@1
  int v12; // [sp+18h] [bp-28h]@1
  char v13; // [sp+1Ch] [bp-24h]@1
  void (__cdecl *v14)(char *); // [sp+24h] [bp-1Ch]@5
  char v15; // [sp+2Ch] [bp-14h]@1

  v3 = a1;
  v11 = 0;
  v12 = 0;
  v4 = a2;
  j_Core::FileOpenMode::FileOpenMode(&v10, a3);
  v9 = *v4;
  j_Core::File::open((int)&v13, (int)&v11, &v9, v10);
  v5 = v15;
  v15 |= 2u;
  if ( v5 & 1 )
  {
    j_Core::File::setLoggingEnabled((Core::FileImpl **)&v11, *(_BYTE *)(v3 + 4152));
    *(_BYTE *)(v3 + 52) = v10;
    if ( (int *)(v3 + 44) != &v11 )
    {
      v6 = *(_DWORD *)(v3 + 44);
      *(_DWORD *)(v3 + 44) = v11;
      v11 = v6;
      v7 = *(_DWORD *)(v3 + 48);
      *(_DWORD *)(v3 + 48) = v12;
      v12 = v7;
    }
  }
  else
    sub_21B583C(*(_DWORD *)(*(_DWORD *)v3 - 12) + v3, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 - 12) + v3 + 20) | 4);
  if ( v14 )
    v14(&v13);
  if ( v11 )
    j_Core::File::close((Core::File *)&v13, &v11);
    v15 |= 2u;
    if ( v14 )
      v14(&v13);
  if ( v12 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v12 + 4))(v12);
  result = v11;
    result = (*(int (__cdecl **)(int))(*(_DWORD *)v11 + 4))(v11);
  return result;
}


int __fastcall Core::BufferedFileOperations::moveDirectory(int a1, int a2, __int64 *a3, int a4, __int64 *a5)
{
  __int64 *v5; // r6@1
  int v6; // r7@1
  int v7; // r4@1
  int v8; // r5@1
  _DWORD *v9; // r0@1
  __int64 v10; // r1@1
  int v11; // r0@3
  __int64 v12; // r1@4
  __int64 v13; // kr00_8@4
  int result; // r0@4
  __int64 v15; // r2@5
  int v16; // r0@5
  int v17; // r1@5
  int (*v18)(void); // r3@5
  __int64 v19; // [sp+8h] [bp-68h]@5
  char v20; // [sp+10h] [bp-60h]@5
  int v21; // [sp+18h] [bp-58h]@5
  int v22; // [sp+1Ch] [bp-54h]@5
  char v23; // [sp+20h] [bp-50h]@5
  _DWORD *v24; // [sp+28h] [bp-48h]@1
  __int64 v25; // [sp+30h] [bp-40h]@1
  __int64 v26; // [sp+38h] [bp-38h]@1
  __int64 v27; // [sp+40h] [bp-30h]@1
  __int64 v28; // [sp+48h] [bp-28h]@1
  int (*v29)(void); // [sp+50h] [bp-20h]@4
  int v30; // [sp+54h] [bp-1Ch]@4
  unsigned __int8 v31; // [sp+58h] [bp-18h]@3

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = a4;
  v27 = *a3;
  v26 = *a5;
  v9 = j_operator new(8u);
  *v9 = v6;
  v9[1] = v8;
  HIDWORD(v10) = sub_1B9EAD8;
  v24 = v9;
  LODWORD(v10) = sub_1B9EB02;
  v25 = v10;
  j_Core::transferDirectory((int)&v28, v6, &v27, v8, &v26, (int)&v24);
  if ( (_DWORD)v25 )
    ((void (*)(void))v25)();
  v11 = v31;
  if ( v31 & 1 )
  {
    v31 |= 2u;
    v19 = *v5;
    j_Core::FileSystemImpl::deleteDirectoryAndContentsRecursively((int)&v20, v8, &v19);
    v15 = *(_QWORD *)&v20;
    *(_QWORD *)&v20 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v15;
    v16 = v21;
    v21 = 0;
    *(_DWORD *)(v7 + 8) = v16;
    v17 = v22;
    v22 = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v17;
    v18 = v29;
    result = (unsigned __int8)(*(_BYTE *)(v7 + 16) & 0xFC) | v23 & 3;
    *(_BYTE *)(v7 + 16) = result;
    if ( v18 )
      result = v18();
  }
  else
    v12 = v28;
    v13 = *(_QWORD *)v7;
    v28 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v12;
    LODWORD(v12) = v29;
    v29 = 0;
    *(_DWORD *)(v7 + 8) = v12;
    LODWORD(v12) = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v30;
    BYTE4(v12) = v11 & 3;
    v30 = v12;
    result = v11 | 3;
    LOBYTE(v12) = *(_BYTE *)(v7 + 16);
    v31 = result;
    *(_BYTE *)(v7 + 16) = v12 & 0xFC | BYTE4(v12);
  return result;
}


signed int __fastcall Core::ends_with(unsigned int a1, int a2, unsigned int a3, int a4)
{
  signed int v4; // r12@2
  int v5; // lr@4
  unsigned int v6; // r8@4
  int v7; // r5@5
  signed int result; // r0@12

  if ( a3 )
  {
    v4 = 0;
    if ( a1 && a1 >= a3 )
    {
      v5 = 0;
      v6 = a1;
      v4 = 0;
      while ( 2 )
      {
        v7 = 0;
        while ( *(_BYTE *)(a2 + v5 + v7) == *(_BYTE *)(a4 + v7) )
        {
          if ( ++v7 >= a3 )
          {
            v4 = 0;
            if ( v5 != -1 && a3 == a1 - v5 )
              v4 = 1;
            goto LABEL_16;
          }
        }
        if ( ++v5 < a1 && --v6 >= a3 )
          continue;
        break;
      }
    }
LABEL_16:
    result = v4;
  }
  else
    result = 1;
  return result;
}


int __fastcall Core::FileSystem_generic::_syncDirectory(int result)
{
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 16) &= 0xFCu;
  return result;
}


int __fastcall Core::FileSystemImpl::getEntryType(int a1, int a2, __int64 *a3)
{
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int *); // r5@1
  int v6; // r1@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // r2@3
  unsigned __int64 *v9; // r0@4
  unsigned __int64 v10; // r2@5
  unsigned __int64 v11; // r2@7
  unsigned __int64 v12; // r2@9
  unsigned __int64 *v13; // r0@11
  unsigned __int64 v14; // r2@12
  unsigned __int64 v15; // r2@14
  __int64 v16; // r2@15
  int v17; // r1@15
  int result; // r0@15
  int v19; // [sp+0h] [bp-30h]@1
  int v20; // [sp+8h] [bp-28h]@15
  int v21; // [sp+Ch] [bp-24h]@15
  char v22; // [sp+10h] [bp-20h]@1
  __int64 v23; // [sp+18h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(void (__fastcall **)(int *))(*(_DWORD *)a2 + 120);
  v23 = *a3;
  v5(&v19);
  v6 = v22 & 1;
  if ( v22 & 1 )
  {
    v7 = (unsigned __int64 *)(v3 + 40);
    __dmb();
    do
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
    v9 = (unsigned __int64 *)(v3 + 48);
      v10 = __ldrexd(v9);
    while ( __strexd(v10, v9) );
      v11 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v11 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v12 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v12, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v13 = (unsigned __int64 *)(v3 + 56);
      v14 = __ldrexd(v13);
    while ( __strexd(v14 + 1, v13) );
      v15 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v15 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v3 + 12), v6, 0LL);
  v16 = *(_QWORD *)&v19;
  *(_QWORD *)&v19 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v16;
  *(_DWORD *)(v4 + 8) = v20;
  v20 = 0;
  v17 = v21;
  v21 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = v17;
  result = (unsigned __int8)(*(_BYTE *)(v4 + 16) & 0xFC) | v22 & 3;
  *(_BYTE *)(v4 + 16) = result;
  return result;
}


void __fastcall Core::FileSystemImpl::_getDirectoryFiles(int a1, int a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v4; // r11@1
  __int64 v5; // kr00_8@1
  int v6; // r7@1
  char *v7; // r1@2
  _DWORD *v8; // r6@2
  unsigned int *v9; // r2@3
  signed int v10; // r5@5
  char *v11; // r5@9
  __int64 *v12; // ST10_4@9
  int *v13; // r0@10
  _DWORD *v14; // r0@12
  int v15; // r3@12
  __int64 v16; // kr08_8@15
  _DWORD *v17; // r6@16
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  int *v20; // r0@25
  int v21; // [sp+14h] [bp-44h]@1
  _DWORD *v22; // [sp+18h] [bp-40h]@12
  void (*v23)(void); // [sp+20h] [bp-38h]@12
  int (__fastcall *v24)(int, int **, const char **); // [sp+24h] [bp-34h]@12
  __int64 v25; // [sp+28h] [bp-30h]@12
  char v26; // [sp+30h] [bp-28h]@2

  v4 = a3;
  v21 = a2;
  v5 = *a3;
  v6 = a1;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = &v26;
    v8 = (_DWORD *)*a3;
    do
    {
      v13 = (int *)(*v8 - 12);
      if ( v13 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(*v8 - 4);
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
          v11 = v7;
          v12 = a4;
          j_j_j_j__ZdlPv_9(v13);
          a4 = v12;
          v7 = v11;
      }
      ++v8;
    }
    while ( v8 != (_DWORD *)HIDWORD(v5) );
  }
  *((_DWORD *)v4 + 1) = v5;
  v25 = *a4;
  v14 = j_operator new(4u);
  *v14 = v4;
  v22 = v14;
  v23 = (void (*)(void))sub_1BA3EF0;
  v24 = sub_1BA3DF4;
  j_Core::FileSystemImpl::iterateOverDirectory(v6, v21, &v25, v15, 130, 0, (int)&v22);
  if ( v23 )
    v23();
  if ( !(*(_BYTE *)(v6 + 16) & 1) )
    v16 = *v4;
    if ( HIDWORD(v16) != (_DWORD)v16 )
      v17 = (_DWORD *)*v4;
      do
        v20 = (int *)(*v17 - 12);
        if ( v20 != &dword_28898C0 )
          v18 = (unsigned int *)(*v17 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        ++v17;
      while ( v17 != (_DWORD *)HIDWORD(v16) );
    *((_DWORD *)v4 + 1) = v16;
}


void __fastcall Core::FileStorageArea::getStorageAreaForPath(int a1, int a2, __int64 *a3)
{
  Core::FileStorageArea::getStorageAreaForPath(a1, a2, a3);
}


unsigned __int64 *__fastcall Core::FileStorageArea::_addReadOperation(Core::FileStorageArea *this, int a2, unsigned __int64 a3)
{
  Core::FileStorageArea *v3; // r4@1
  unsigned int v4; // r5@1
  Core::FileStorageArea *v5; // r0@1
  unsigned int v6; // r6@1
  int v7; // r7@1
  unsigned __int64 *v8; // r0@4
  unsigned __int64 v9; // kr00_8@5
  unsigned __int64 *v10; // r0@6
  unsigned __int64 v11; // kr08_8@7
  unsigned __int64 *v12; // r0@8
  unsigned __int64 v13; // kr10_8@9
  unsigned __int64 *result; // r0@10
  unsigned __int64 v15; // kr18_8@11
  unsigned __int64 *v16; // r0@13
  unsigned __int64 v17; // kr20_8@14
  unsigned __int64 v18; // kr28_8@16

  v3 = this;
  v4 = HIDWORD(a3);
  v5 = (Core::FileStorageArea *)*((_DWORD *)this + 41);
  v6 = a3;
  v7 = a2;
  if ( v5 )
    j_Core::FileStorageArea::_addWriteOperation(v5, a2, a3);
  if ( v7 == 1 )
  {
    v8 = (unsigned __int64 *)((char *)v3 + 48);
    __dmb();
    do
      v9 = __ldrexd(v8);
    while ( __strexd(v9 + 1, v8) );
    v10 = (unsigned __int64 *)((char *)v3 + 56);
      v11 = __ldrexd(v10);
    while ( __strexd(v11 + __PAIR__(v4, v6), v10) );
    v12 = (unsigned __int64 *)((char *)v3 + 96);
      v13 = __ldrexd(v12);
    while ( __strexd(v13 + 1, v12) );
    result = (unsigned __int64 *)((char *)v3 + 104);
      v15 = __ldrexd(result);
    while ( __strexd(v15 + __PAIR__(v4, v6), result) );
  }
  else
    v16 = (unsigned __int64 *)((char *)v3 + 64);
      v17 = __ldrexd(v16);
    while ( __strexd(v17 + 1, v16) );
    result = (unsigned __int64 *)((char *)v3 + 112);
      v18 = __ldrexd(result);
    while ( __strexd(v18 + 1, result) );
  __dmb();
  return result;
}


int __fastcall Core::BufferedFileOperations::copyFile<8192ull>(Core::FileSystemImpl *,Core::Path,Core::FileSystemImpl *,Core::Path)::{lambda(Core::FileImpl *,Core::FileImpl *,void *,unsigned long long)#1}::operator() const(int a1, int a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  int v5; // r4@1
  void *v6; // r1@1
  const void *v7; // r5@1
  unsigned __int64 v8; // r2@1
  int v9; // r0@1
  char v10; // r1@1
  __int64 v11; // r2@2
  __int64 v12; // r1@3
  void (*v13)(void); // r7@3
  void (*v14)(void); // r3@3
  __int64 v15; // kr08_8@8
  __int64 v16; // kr10_8@8
  int v17; // r3@8
  int v18; // r3@9
  int result; // r0@9
  int (*v20)(void); // r3@10
  char v21; // [sp+8h] [bp-58h]@3
  int v22; // [sp+Ch] [bp-54h]@3
  void (*v23)(void); // [sp+10h] [bp-50h]@3
  int v24; // [sp+14h] [bp-4Ch]@3
  char v25; // [sp+18h] [bp-48h]@3
  __int64 v26; // [sp+20h] [bp-40h]@1
  void (*v27)(void); // [sp+28h] [bp-38h]@2
  int v28; // [sp+2Ch] [bp-34h]@3
  unsigned __int8 v29; // [sp+30h] [bp-30h]@1
  __int64 v30; // [sp+38h] [bp-28h]@3
  void (*v31)(void); // [sp+40h] [bp-20h]@3
  int v32; // [sp+44h] [bp-1Ch]@3

  v5 = a1;
  v7 = (const void *)HIDWORD(a3);
  v6 = (void *)a3;
  LODWORD(a3) = a4;
  j_Core::FileImpl::readExactly((Core::FileImpl *)&v26, v6, a3, a5);
  v9 = v29;
  v10 = v29 | 2;
  v29 |= 2u;
  if ( !(v9 & 1) )
  {
    v11 = v26;
    v26 = *(_QWORD *)v5;
    *(_QWORD *)v5 = v11;
    LODWORD(v11) = v27;
    v27 = 0;
    *(_DWORD *)(v5 + 8) = v11;
LABEL_9:
    v18 = v28;
    result = v9 | 3;
    v28 = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v5 + 12) = v18;
    *(_BYTE *)(v5 + 16) = v10 & 3 | *(_BYTE *)(v5 + 16) & 0xFC;
    v29 = result;
    return result;
  }
  LODWORD(v8) = a4;
  j_Core::FileImpl::write((Core::FileImpl *)&v21, v7, v8, a5);
  v29 = v29 & 0xFC | v25 & 3;
  LODWORD(v12) = *(_DWORD *)&v21;
  HIDWORD(v12) = v22;
  v13 = v23;
  v23 = 0;
  v30 = v26;
  v26 = v12;
  v14 = v27;
  v27 = v13;
  v31 = v14;
  v32 = v28;
  v28 = v24;
  if ( v14 )
    v14();
    v25 |= 3u;
    if ( v23 )
      v23();
  else
  *(_DWORD *)(v5 + 8) = 0;
  v10 = v9 | 2;
  v29 = v9 | 2;
    v15 = v26;
    v16 = *(_QWORD *)v5;
    *(_QWORD *)v5 = v15;
    v17 = (int)v27;
    *(_DWORD *)(v5 + 8) = v17;
    goto LABEL_9;
  v20 = (int (*)(void))v27;
  result = (unsigned __int8)(*(_BYTE *)(v5 + 16) & 0xFC) | 1;
  *(_BYTE *)(v5 + 16) = result;
  if ( v20 )
    result = v20();
  return result;
}


Core::FileStdStreamBuf *__fastcall Core::FileStdStreamBuf::~FileStdStreamBuf(Core::FileStdStreamBuf *this, int a2, unsigned __int64 a3)
{
  Core::FileStdStreamBuf *v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@7
  int v6; // r0@9
  char v8; // [sp+4h] [bp-24h]@2
  void (*v9)(void); // [sp+Ch] [bp-1Ch]@2
  char v10; // [sp+14h] [bp-14h]@2

  v3 = this;
  *(_DWORD *)this = &off_272676C;
  v4 = (int *)((char *)this + 32);
  if ( *((_DWORD *)this + 8) )
  {
    j_Core::FileStdStreamBuf::_flushoutput(this, a2, a3);
    j_Core::File::close((Core::File *)&v8, v4);
    v10 |= 2u;
    if ( v9 )
      v9();
  }
  if ( *v4 )
  v5 = *((_DWORD *)v3 + 9);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *((_DWORD *)v3 + 9) = 0;
  v6 = *((_DWORD *)v3 + 8);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *((_DWORD *)v3 + 8) = 0;
  *(_DWORD *)v3 = &off_26D40A8;
  sub_21C802C((unsigned int **)v3 + 7);
  return v3;
}


int __fastcall Core::File_c::_write(Core::File_c *this, const void *a2, void *ptr, int a4, __int64 n)
{
  const void *v5; // r5@1
  Core::File_c *v6; // r4@1
  int result; // r0@3
  _DWORD *v8; // r0@4
  __int64 v9; // r1@4

  v5 = a2;
  v6 = this;
  if ( n == j_fwrite(ptr, 1u, n, *((FILE **)a2 + 4)) || j_feof(*((FILE **)v5 + 4)) )
  {
    *((_DWORD *)v6 + 2) = 0;
    result = (unsigned __int8)(*((_BYTE *)v6 + 16) & 0xFC) | 1;
    *((_BYTE *)v6 + 16) = result;
  }
  else
    v8 = j_operator new(4u);
    *(_DWORD *)v6 = v8;
    HIDWORD(v9) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v9) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    *v8 = "write failed.";
    *((_QWORD *)v6 + 1) = v9;
    result = *((_BYTE *)v6 + 16) & 0xFC;
  return result;
}


RakNet *__fastcall Core::File::open(int a1, int a2, __int64 *a3, char a4)
{
  __int64 v5; // [sp+8h] [bp-10h]@1

  v5 = *a3;
  return j_Core::FileSystem::openFile(a1, &v5, a2, a4);
}


Core::InputFileStream *__fastcall Core::InputFileStream::~InputFileStream(Core::InputFileStream *this, int a2, unsigned __int64 a3)
{
  Core::InputFileStream *v3; // r4@1

  v3 = this;
  *(_DWORD *)this = &off_26D7EEC;
  *((_DWORD *)this + 1039) = &off_26D7F14;
  *((_DWORD *)this + 2) = &off_26D7F00;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::InputFileStream *)((char *)this + 12), (int)&off_26D7F14, a3);
  *(_DWORD *)v3 = &off_26D7F6C;
  *((_DWORD *)v3 + 1039) = &off_26D7F80;
  *((_DWORD *)v3 + 1) = 0;
  sub_DA76E4((_DWORD *)v3 + 1039);
  return v3;
}


Core::FileImpl *__fastcall Core::FileImpl::~FileImpl(Core::FileImpl *this)
{
  Core::FileImpl *v1; // r4@1
  int v2; // r0@2
  int v3; // r2@3
  int v4; // lr@3
  int v5; // r1@4
  Core::FileImpl *v6; // r12@4
  int v7; // r1@5
  int v8; // r1@6
  bool v9; // zf@7
  Core::FileImpl **v10; // r3@7
  Core::FileImpl *v11; // r0@10
  bool v12; // zf@10
  int v13; // r1@15
  _DWORD *v14; // r0@19
  Core::FileImpl *v15; // r1@28

  v1 = this;
  *(_DWORD *)this = &off_27267FC;
  j_Core::FileSystemImpl::_removeFile(*((Core::FileSystemImpl **)this + 2), this);
  if ( &pthread_create )
  {
    v2 = j_pthread_mutex_lock_0((pthread_mutex_t *)&Core::FileImpl::sAllFilesLock);
    if ( v2 )
      sub_21E5E14(v2);
  }
  v4 = dword_283E5B8;
  v3 = Core::FileImpl::sAllFiles;
  if ( Core::FileImpl::sAllFiles != dword_283E5B8 )
    v5 = dword_283E5B8 - 4;
    v6 = *(Core::FileImpl **)(dword_283E5B8 - 4);
    if ( v6 == v1 )
    {
      v14 = &Core::FileImpl::sAllFilesLock;
LABEL_29:
      v14[2] = v5;
      goto LABEL_30;
    }
    v7 = (dword_283E5B8 - Core::FileImpl::sAllFiles) >> 4;
    if ( v7 >= 1 )
      v8 = v7 + 1;
      do
      {
        v9 = *(_DWORD *)v3 == (_DWORD)v1;
        v10 = (Core::FileImpl **)v3;
        if ( *(Core::FileImpl **)v3 != v1 )
        {
          v10 = (Core::FileImpl **)(v3 + 4);
          v9 = *(_DWORD *)(v3 + 4) == (_DWORD)v1;
        }
        if ( v9 )
          goto LABEL_28;
        v10 = (Core::FileImpl **)(v3 + 8);
        v11 = *(Core::FileImpl **)(v3 + 8);
        v12 = v11 == v1;
        if ( v11 != v1 )
          v10 = (Core::FileImpl **)(v3 + 12);
          v12 = *(_DWORD *)(v3 + 12) == (_DWORD)v1;
        if ( v12 )
        --v8;
        v3 += 16;
      }
      while ( v8 > 1 );
    if ( 1 == (dword_283E5B8 - v3) >> 2 )
      v10 = (Core::FileImpl **)v3;
      goto LABEL_24;
    v13 = (dword_283E5B8 - v3) >> 2;
    if ( v13 == 2 )
    else
      if ( v13 != 3 )
        v10 = (Core::FileImpl **)dword_283E5B8;
        goto LABEL_28;
      if ( *(Core::FileImpl **)v3 == v1 )
LABEL_28:
        v15 = *v10;
        v14 = &Core::FileImpl::sAllFilesLock;
        *v10 = v6;
        *(_DWORD *)(v4 - 4) = v15;
        v5 = dword_283E5B8 - 4;
        goto LABEL_29;
      v10 = (Core::FileImpl **)(v3 + 4);
    if ( *v10 != v1 )
      ++v10;
LABEL_24:
      if ( *v10 != v1 )
      goto LABEL_28;
    goto LABEL_28;
LABEL_30:
    j_pthread_mutex_unlock_0((pthread_mutex_t *)&Core::FileImpl::sAllFilesLock);
  return v1;
}


Core::FileStream *__fastcall Core::FileStream::~FileStream(Core::FileStream *this, int a2, unsigned __int64 a3)
{
  Core::FileStream *v3; // r4@1

  v3 = this;
  *(_DWORD *)this = &off_26D66C4;
  *((_DWORD *)this + 1039) = &off_26D66EC;
  *((_DWORD *)this + 2) = &off_26D66D8;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStream *)((char *)this + 12), (int)&off_26D66EC, a3);
  *(_DWORD *)v3 = &off_26D670C;
  *((_DWORD *)v3 + 1039) = &off_26D6720;
  *((_DWORD *)v3 + 1) = 0;
  sub_DA76E4((_DWORD *)v3 + 1039);
  return v3;
}


signed int __fastcall Core::FileSystem_generic::_fileOrDirectoryExists(int a1, const char **a2)
{
  const char **v2; // r4@1
  const char *v3; // r1@3
  int v4; // r0@3

  v2 = a2;
  if ( !j_access(*a2, 0) )
    return 1;
  if ( j_getAssetManager_android() )
  {
    v3 = *v2;
    v4 = j_AAssetManager_open();
    if ( v4 )
    {
      j_AAsset_close(v4);
      return 1;
    }
  }
  return 0;
}


int __fastcall Core::FileImpl::readExactly(Core::FileImpl *this, void *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  void *v4; // r5@1
  Core::FileImpl *v5; // r4@1
  int result; // r0@1
  __int64 v7; // r1@1
  char v8; // [sp+Ch] [bp-2Ch]@1
  int (__cdecl *v9)(char *, char *); // [sp+14h] [bp-24h]@1

  v4 = a2;
  v5 = this;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a2 + 24))(&v8);
  result = j_Core::FileSystemImpl::_readOperation(*((_DWORD *)v4 + 2), (int)&v8, a4);
  v7 = *(_QWORD *)result;
  *(_QWORD *)result = *(_QWORD *)v5;
  *(_QWORD *)v5 = v7;
  LODWORD(v7) = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = 0;
  *((_DWORD *)v5 + 2) = v7;
  LODWORD(v7) = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = *((_DWORD *)v5 + 3);
  *((_DWORD *)v5 + 3) = v7;
  LOBYTE(v7) = *(_BYTE *)(result + 16);
  *((_BYTE *)v5 + 16) = *((_BYTE *)v5 + 16) & 0xFC | v7 & 3;
  *(_BYTE *)(result + 16) = v7 | 3;
  if ( v9 )
    result = v9(&v8, &v8);
  return result;
}


int __fastcall Core::FileSystemImpl::countDirectoryFiles(int a1, int a2, __int64 *a3)
{
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int *); // r5@1
  int v6; // r1@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // r2@3
  unsigned __int64 *v9; // r0@4
  unsigned __int64 v10; // r2@5
  unsigned __int64 v11; // r2@7
  unsigned __int64 v12; // r2@9
  unsigned __int64 *v13; // r0@11
  unsigned __int64 v14; // r2@12
  unsigned __int64 v15; // r2@14
  __int64 v16; // r2@15
  int v17; // r1@15
  int result; // r0@15
  int v19; // [sp+0h] [bp-30h]@1
  int v20; // [sp+8h] [bp-28h]@15
  int v21; // [sp+Ch] [bp-24h]@15
  char v22; // [sp+10h] [bp-20h]@1
  __int64 v23; // [sp+18h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(void (__fastcall **)(int *))(*(_DWORD *)a2 + 116);
  v23 = *a3;
  v5(&v19);
  v6 = v22 & 1;
  if ( v22 & 1 )
  {
    v7 = (unsigned __int64 *)(v3 + 40);
    __dmb();
    do
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
    v9 = (unsigned __int64 *)(v3 + 48);
      v10 = __ldrexd(v9);
    while ( __strexd(v10, v9) );
      v11 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v11 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v12 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v12, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v13 = (unsigned __int64 *)(v3 + 56);
      v14 = __ldrexd(v13);
    while ( __strexd(v14 + 1, v13) );
      v15 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v15 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v3 + 12), v6, 0LL);
  v16 = *(_QWORD *)&v19;
  *(_QWORD *)&v19 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v16;
  *(_DWORD *)(v4 + 8) = v20;
  v20 = 0;
  v17 = v21;
  v21 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = v17;
  result = (unsigned __int8)(*(_BYTE *)(v4 + 16) & 0xFC) | v22 & 3;
  *(_BYTE *)(v4 + 16) = result;
  return result;
}


int __fastcall Core::File_c::_getRemainingSize(Core::File_c *this, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v3; // r5@1
  Core::File_c *v4; // r4@1
  unsigned __int64 *v5; // r6@1
  int v6; // r0@1
  __int64 v7; // r1@2
  int result; // r0@2
  int v9; // r0@3
  __int64 v10; // r1@4
  __int64 v11; // kr00_8@4
  int (*v12)(void); // r3@5
  int v13; // [sp+0h] [bp-58h]@3
  int v14; // [sp+4h] [bp-54h]@4
  int (*v15)(void); // [sp+8h] [bp-50h]@4
  int v16; // [sp+Ch] [bp-4Ch]@4
  unsigned __int8 v17; // [sp+10h] [bp-48h]@3
  int v18; // [sp+18h] [bp-40h]@3
  int v19; // [sp+1Ch] [bp-3Ch]@3
  __int64 v20; // [sp+20h] [bp-38h]@1
  int (__cdecl *v21)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+28h] [bp-30h]@2
  int v22; // [sp+2Ch] [bp-2Ch]@2
  unsigned __int8 v23; // [sp+30h] [bp-28h]@1
  int v24; // [sp+38h] [bp-20h]@1
  int v25; // [sp+3Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = this;
  v5 = a2;
  v24 = 0;
  v25 = 0;
  j_Core::FileImpl::getPosition((Core::FileImpl *)&v20, a2);
  v6 = v23;
  if ( v23 & 1 )
  {
    v23 |= 2u;
    v18 = 0;
    v19 = 0;
    j_Core::FileImpl::getSize((Core::FileImpl *)&v13, v5);
    v9 = v17;
    if ( v17 & 1 )
    {
      v17 |= 2u;
      *v3 = *(_QWORD *)&v18 - *(_QWORD *)&v24;
      *((_DWORD *)v4 + 2) = 0;
      v12 = v15;
      result = (unsigned __int8)(*((_BYTE *)v4 + 16) & 0xFC) | 1;
      *((_BYTE *)v4 + 16) = result;
      if ( v12 )
        result = v12();
    }
    else
      v10 = *(_QWORD *)&v13;
      v11 = *(_QWORD *)v4;
      v13 = *(_QWORD *)v4;
      v14 = HIDWORD(v11);
      *(_QWORD *)v4 = v10;
      LODWORD(v10) = v15;
      v15 = 0;
      *((_DWORD *)v4 + 2) = v10;
      LODWORD(v10) = *((_DWORD *)v4 + 3);
      *((_DWORD *)v4 + 3) = v16;
      BYTE4(v10) = v9 & 3;
      v16 = v10;
      result = v9 | 3;
      LOBYTE(v10) = *((_BYTE *)v4 + 16);
      v17 = result;
      *((_BYTE *)v4 + 16) = v10 & 0xFC | BYTE4(v10);
    if ( v21 )
      result = v21(&v20, &v20, 3, v21, v13);
  }
  else
    v7 = v20;
    v20 = *(_QWORD *)v4;
    *(_QWORD *)v4 = v7;
    LODWORD(v7) = v21;
    v21 = 0;
    *((_DWORD *)v4 + 2) = v7;
    LODWORD(v7) = *((_DWORD *)v4 + 3);
    *((_DWORD *)v4 + 3) = v22;
    BYTE4(v7) = v6 & 3;
    v22 = v7;
    result = v6 | 3;
    LOBYTE(v7) = *((_BYTE *)v4 + 16);
    v23 = result;
    *((_BYTE *)v4 + 16) = v7 & 0xFC | BYTE4(v7);
  return result;
}


int __fastcall Core::BufferedFileOperations::copyDirectory(int a1, int a2, __int64 *a3, int a4, __int64 *a5)
{
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  _DWORD *v8; // r0@1
  __int64 v9; // r1@1
  int result; // r0@1
  _DWORD *v11; // [sp+8h] [bp-30h]@1
  __int64 v12; // [sp+10h] [bp-28h]@1
  __int64 v13; // [sp+18h] [bp-20h]@1
  __int64 v14; // [sp+20h] [bp-18h]@1

  v5 = a2;
  v6 = a1;
  v14 = *a3;
  v7 = a4;
  v13 = *a5;
  v8 = j_operator new(8u);
  HIDWORD(v9) = sub_1B9EA74;
  *v8 = v5;
  v8[1] = v7;
  v11 = v8;
  LODWORD(v9) = sub_1B9EA9E;
  v12 = v9;
  result = j_Core::transferDirectory(v6, v5, &v14, v7, &v13, (int)&v11);
  if ( (_DWORD)v12 )
    result = ((int (*)(void))v12)();
  return result;
}


int __fastcall Core::FileImpl::_writeOperation(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r7@1
  _DWORD *v9; // r0@1
  int result; // r0@1
  __int64 v11; // r1@1
  _DWORD *v12; // [sp+Ch] [bp-24h]@1
  int (*v13)(void); // [sp+14h] [bp-1Ch]@1
  int (__fastcall *v14)(int, int); // [sp+18h] [bp-18h]@1

  v5 = a2;
  v6 = a1;
  v7 = a3;
  v8 = *(_DWORD *)(a2 + 8);
  v9 = j_operator new(4u);
  *v9 = v5;
  v12 = v9;
  v13 = (int (*)(void))sub_1B9F180;
  v14 = sub_1B9F160;
  result = j_Core::FileSystemImpl::_writeOperation(v8, v7, (int)&v12, a5, a5);
  v11 = *(_QWORD *)result;
  *(_QWORD *)result = *(_QWORD *)v6;
  *(_QWORD *)v6 = v11;
  LODWORD(v11) = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(v6 + 8) = v11;
  LODWORD(v11) = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = v11;
  LOBYTE(v11) = *(_BYTE *)(result + 16);
  *(_BYTE *)(v6 + 16) = *(_BYTE *)(v6 + 16) & 0xFC | v11 & 3;
  *(_BYTE *)(result + 16) = v11 | 3;
  if ( v13 )
    result = v13();
  return result;
}


int __fastcall Core::FileSystemImpl::renameFileOrDirectory(int a1, int a2, __int64 *a3, _QWORD *a4)
{
  int (*v4)(void); // r11@1
  int v5; // r9@1
  int v6; // r10@1
  _QWORD *v7; // r5@1
  __int64 v8; // r6@2
  _QWORD *v9; // r8@2
  __int64 v10; // kr00_8@2
  _QWORD *v11; // r0@2
  int (__fastcall *v12)(int, __int64 *); // r2@2
  int v13; // r1@2
  unsigned __int64 *v14; // r0@3
  unsigned __int64 v15; // r2@4
  unsigned __int64 *v16; // r0@5
  unsigned __int64 v17; // r2@6
  unsigned __int64 v18; // r2@8
  unsigned __int64 v19; // r2@10
  unsigned __int64 *v20; // r0@12
  unsigned __int64 v21; // r2@13
  unsigned __int64 v22; // r2@15
  char v23; // r0@16
  int v24; // r6@16
  _DWORD *v25; // r0@19
  __int64 *v26; // r1@23 OVERLAPPED
  __int64 *v27; // r2@23 OVERLAPPED
  _QWORD *v28; // r7@23
  unsigned int v29; // r8@23
  _QWORD *v30; // r0@25
  unsigned int v31; // r6@26
  int v32; // r0@27
  _QWORD *v33; // r6@27
  __int64 v34; // kr08_8@28
  int v35; // ST10_4@30
  int v36; // r5@30
  __int64 v37; // kr10_8@30
  void *v38; // r0@30
  int v39; // r3@30
  void (*v40)(void); // r3@30
  void (__fastcall *v41)(char *, int, _QWORD **, __int64 *); // r7@35
  unsigned __int64 *v42; // r0@38
  unsigned __int64 v43; // kr20_8@39
  unsigned __int64 v44; // kr28_8@41
  __int64 v45; // r0@44
  int result; // r0@44
  _QWORD *v47; // [sp+18h] [bp-B8h]@30
  __int64 *v48; // [sp+1Ch] [bp-B4h]@2
  __int64 *v49[2]; // [sp+20h] [bp-B0h]@36
  int (*v50)(void); // [sp+28h] [bp-A8h]@35
  void (__fastcall *v51)(__int64 **, _DWORD); // [sp+2Ch] [bp-A4h]@36
  char v52; // [sp+30h] [bp-A0h]@35
  int (*v53)(void); // [sp+38h] [bp-98h]@44
  int v54; // [sp+3Ch] [bp-94h]@44
  unsigned __int8 v55; // [sp+40h] [bp-90h]@37
  _DWORD *v56; // [sp+48h] [bp-88h]@19
  void (*v57)(void); // [sp+50h] [bp-80h]@19
  int (__fastcall *v58)(int, int *, int); // [sp+54h] [bp-7Ch]@19
  __int64 v59; // [sp+58h] [bp-78h]@19
  char v60; // [sp+64h] [bp-6Ch]@19
  void (*v61)(void); // [sp+6Ch] [bp-64h]@19
  __int64 ptr; // [sp+78h] [bp-58h]@2
  int v63; // [sp+80h] [bp-50h]@19
  _QWORD *v64; // [sp+88h] [bp-48h]@2
  int v65; // [sp+8Ch] [bp-44h]@2
  void (*v66)(void); // [sp+90h] [bp-40h]@1
  void *v67; // [sp+94h] [bp-3Ch]@2
  _QWORD *v68; // [sp+98h] [bp-38h]@2
  int v69; // [sp+9Ch] [bp-34h]@2
  void (*v70)(void); // [sp+A0h] [bp-30h]@2
  void *v71; // [sp+A4h] [bp-2Ch]@30
  char v72; // [sp+A8h] [bp-28h]@2

  v4 = 0;
  v5 = a2;
  v66 = 0;
  v6 = a1;
  v7 = a4;
  if ( (unsigned int)*(_QWORD *)(*(_DWORD *)(a2 + 12) + 152) != *(_QWORD *)(*(_DWORD *)(a2 + 12) + 152) >> 32 )
  {
    v8 = *a4;
    v9 = a4;
    v10 = *a3;
    v48 = a3;
    v11 = j_operator new(0x10u);
    *v11 = v10;
    v11[1] = v8;
    v68 = v11;
    v64 = v11;
    v65 = v69;
    v66 = (void (*)(void))sub_1BA392E;
    v67 = sub_1BA3902;
    v12 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v5 + 68);
    ptr = v10;
    v13 = v12(v5, &ptr);
    v70 = 0;
    v72 = v13;
    if ( v13 == 1 )
    {
      v14 = (unsigned __int64 *)(v5 + 40);
      __dmb();
      do
        v15 = __ldrexd(v14);
      while ( __strexd(v15 + 1, v14) );
      v16 = (unsigned __int64 *)(v5 + 48);
      v7 = v9;
        v17 = __ldrexd(v16);
      while ( __strexd(v17, v16) );
        v18 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
      while ( __strexd(v18 + 1, (unsigned __int64 *)&unk_283E5E0) );
        v19 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
      while ( __strexd(v19, (unsigned __int64 *)&unk_283E5E8) );
    }
    else
      v20 = (unsigned __int64 *)(v5 + 56);
        v21 = __ldrexd(v20);
      while ( __strexd(v21 + 1, v20) );
        v22 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
      while ( __strexd(v22 + 1, (unsigned __int64 *)&unk_283E5F0) );
    __dmb();
    j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v5 + 12), v13, 0LL);
    v23 = v72;
    v72 |= 2u;
    v24 = v23 & 1;
    if ( v70 )
      v70();
    a3 = v48;
    if ( v24 )
      ptr = 0LL;
      v63 = 0;
      v59 = *v48;
      v25 = j_operator new(4u);
      *v25 = &ptr;
      v56 = v25;
      v57 = (void (*)(void))sub_1BA39AA;
      v58 = sub_1BA3970;
      j_Core::FileSystemImpl::iterateOverDirectory((int)&v60, v5, &v59, (int)&ptr, 640, 0, (int)&v56);
      if ( v61 )
        v61();
      if ( v57 )
        v57();
      *(_QWORD *)&v26 = ptr;
      v28 = 0;
      v29 = (HIDWORD(ptr) - (signed int)ptr) >> 3;
      if ( v29 )
      {
        if ( v29 >= 0x20000000 )
          sub_21E57F4();
        v30 = j_operator new(HIDWORD(ptr) - ptr);
        *(_QWORD *)&v26 = ptr;
        v28 = v30;
      }
      v31 = (unsigned int)v28;
      if ( v26 != v27 )
        v32 = -(signed int)v26;
        v33 = v28;
        do
        {
          v34 = *v26;
          ++v26;
          *v33 = v34;
          ++v33;
        }
        while ( v27 != v26 );
        v31 = (unsigned int)v28 + (((unsigned int)v27 + v32 - 8) & 0xFFFFFFF8) + 8;
      v35 = *(_DWORD *)v7;
      v47 = v7;
      v36 = *((_DWORD *)v7 + 1);
      v37 = *v48;
      v38 = j_operator new(0x1Cu);
      *(_DWORD *)v38 = v28;
      *((_DWORD *)v38 + 1) = v31;
      *((_DWORD *)v38 + 2) = &v28[v29];
      *(_QWORD *)((char *)v38 + 12) = v37;
      *((_DWORD *)v38 + 5) = v35;
      *((_DWORD *)v38 + 6) = v36;
      v39 = v69;
      *(_QWORD *)&v68 = *(_QWORD *)&v64;
      v64 = v38;
      v65 = v39;
      v40 = v66;
      v66 = (void (*)(void))sub_1BA3AFC;
      v70 = v40;
      v71 = v67;
      v67 = sub_1BA39E0;
      if ( v40 )
        v40();
      if ( (_DWORD)ptr )
        j_operator delete((void *)ptr);
      a3 = v48;
      v7 = v47;
  }
  v41 = *(void (__fastcall **)(char *, int, _QWORD **, __int64 *))(*(_DWORD *)v5 + 108);
  *(_QWORD *)&v68 = *a3;
  ptr = *v7;
  v41(&v52, v5, &v68, &ptr);
  v50 = 0;
  if ( v66 )
    ((void (__fastcall *)(__int64 **, _QWORD **, signed int))v66)(v49, &v64, 2);
    v4 = (int (*)(void))v66;
    v51 = (void (__fastcall *)(__int64 **, _DWORD))v67;
    v50 = (int (*)(void))v66;
  if ( v55 & 1 )
    v42 = (unsigned __int64 *)(v5 + 32);
    do
      v43 = __ldrexd(v42);
    while ( __strexd(v43 + 1, v42) );
      v44 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v44 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v4 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v5 + 12), 0, 0LL);
    if ( v50 )
      v51(v49, *(_DWORD *)(v5 + 12));
      v4 = v50;
  v45 = *(_QWORD *)&v52;
  *(_QWORD *)&v52 = *(_QWORD *)v6;
  *(_QWORD *)v6 = v45;
  LODWORD(v45) = v53;
  v53 = 0;
  *(_DWORD *)(v6 + 8) = v45;
  HIDWORD(v45) = v54;
  v54 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = HIDWORD(v45);
  HIDWORD(v45) = v55;
  *(_BYTE *)(v6 + 16) = *(_BYTE *)(v6 + 16) & 0xFC | v55 & 3;
  result = HIDWORD(v45) | 3;
  v55 = BYTE4(v45) | 3;
  if ( v4 )
    result = v4();
    if ( v53 )
      result = v53();
    result = ((int (*)(void))v66)();
  return result;
}


int __fastcall Core::StringSpan::substr(int result, unsigned int a2, int a3)
{
  __int64 v3; // kr00_8@1

  v3 = *(_QWORD *)a2;
  *(_DWORD *)result = *(_QWORD *)a2 - a3;
  *(_DWORD *)(result + 4) = HIDWORD(v3) + a3;
  return result;
}


int __fastcall Core::FileSystemImpl::getLastModificationTime(int a1, int a2, __int64 *a3)
{
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int *); // r5@1
  int v6; // r1@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // r2@3
  unsigned __int64 *v9; // r0@4
  unsigned __int64 v10; // r2@5
  unsigned __int64 v11; // r2@7
  unsigned __int64 v12; // r2@9
  unsigned __int64 *v13; // r0@11
  unsigned __int64 v14; // r2@12
  unsigned __int64 v15; // r2@14
  __int64 v16; // r2@15
  int v17; // r1@15
  int result; // r0@15
  int v19; // [sp+0h] [bp-30h]@1
  int v20; // [sp+8h] [bp-28h]@15
  int v21; // [sp+Ch] [bp-24h]@15
  char v22; // [sp+10h] [bp-20h]@1
  __int64 v23; // [sp+18h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(void (__fastcall **)(int *))(*(_DWORD *)a2 + 132);
  v23 = *a3;
  v5(&v19);
  v6 = v22 & 1;
  if ( v22 & 1 )
  {
    v7 = (unsigned __int64 *)(v3 + 40);
    __dmb();
    do
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
    v9 = (unsigned __int64 *)(v3 + 48);
      v10 = __ldrexd(v9);
    while ( __strexd(v10, v9) );
      v11 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v11 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v12 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v12, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v13 = (unsigned __int64 *)(v3 + 56);
      v14 = __ldrexd(v13);
    while ( __strexd(v14 + 1, v13) );
      v15 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v15 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v3 + 12), v6, 0LL);
  v16 = *(_QWORD *)&v19;
  *(_QWORD *)&v19 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v16;
  *(_DWORD *)(v4 + 8) = v20;
  v20 = 0;
  v17 = v21;
  v21 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = v17;
  result = (unsigned __int8)(*(_BYTE *)(v4 + 16) & 0xFC) | v22 & 3;
  *(_BYTE *)(v4 + 16) = result;
  return result;
}


int __fastcall Core::FileSystem_generic::_deleteEmptyDirectory(int a1, int a2, const char **a3)
{
  int v3; // r4@1
  int v4; // r5@1
  _DWORD *v5; // r0@2
  __int64 v6; // r1@2
  int result; // r0@2

  v3 = a1;
  v4 = j_rmdir(*a3);
  if ( v4 )
  {
    v5 = j_operator new(8u);
    HIDWORD(v6) = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v6) = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
    *v5 = "rmdir failed";
    v5[1] = v4;
    *(_DWORD *)v3 = v5;
    *(_QWORD *)(v3 + 8) = v6;
    result = *(_BYTE *)(v3 + 16) & 0xFC;
    *(_BYTE *)(v3 + 16) = result;
  }
  else
    *(_DWORD *)(v3 + 8) = 0;
    result = (unsigned __int8)(*(_BYTE *)(v3 + 16) & 0xFC) | 1;
  return result;
}


RakNet *__fastcall Core::FileSystem::getLastModificationTime(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  _DWORD *v5; // r0@1
  __int64 v6; // r1@1
  RakNet *result; // r0@1
  _DWORD *v8; // [sp+0h] [bp-28h]@1
  __int64 v9; // [sp+8h] [bp-20h]@1
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a1;
  v10 = *a2;
  v4 = a3;
  v5 = j_operator new(4u);
  HIDWORD(v6) = sub_1B9E552;
  *v5 = v4;
  v8 = v5;
  LODWORD(v6) = sub_1B9E576;
  v9 = v6;
  result = j_Core::TransactionFrame::exec(v3, 0, &v10, (int)&v8);
  if ( (_DWORD)v9 )
    result = (RakNet *)((int (__cdecl *)(_DWORD **))v9)(&v8);
  return result;
}


void __fastcall Core::FileSystemImpl::_createDirectoryRecursively(int a1, int a2, __int64 *a3)
{
  int v3; // r11@1
  unsigned __int64 *v4; // r6@1
  int v5; // r0@1
  _DWORD *v6; // r10@1
  unsigned __int64 *v7; // r4@1
  unsigned __int64 *v8; // r5@1
  __int64 v9; // r0@3
  int (__fastcall *v10)(int, __int64 *); // r2@3
  int v11; // r1@3
  unsigned __int64 v12; // kr08_8@4
  unsigned __int64 v13; // kr10_8@6
  int v14; // r12@7
  unsigned __int64 v15; // kr18_8@8
  unsigned __int64 v16; // r2@10
  unsigned __int64 v17; // kr20_8@12
  unsigned __int64 v18; // r2@14
  int v19; // r7@15
  char v20; // r0@15
  int v21; // r11@15
  bool v22; // zf@17
  __int64 v23; // r0@21
  char v24; // r0@21
  void (__fastcall *v25)(int, int, signed int); // r3@22
  void *v26; // r4@26
  int v27; // r6@26
  unsigned int *v28; // r2@28
  signed int v29; // r1@30
  int *v30; // r0@36
  int v31; // [sp+8h] [bp-68h]@1
  int v32; // [sp+Ch] [bp-64h]@9
  __int64 v33; // [sp+10h] [bp-60h]@21
  __int64 v34; // [sp+18h] [bp-58h]@1
  _DWORD *v35; // [sp+20h] [bp-50h]@1
  _DWORD *v36; // [sp+24h] [bp-4Ch]@1
  void (*v37)(void); // [sp+34h] [bp-3Ch]@3
  char v38; // [sp+3Ch] [bp-34h]@3
  __int64 v39; // [sp+40h] [bp-30h]@3

  v3 = a2;
  v31 = a1;
  v34 = *a3;
  j_Core::FileSystem::splitPathIntoFullPathSegments((int)&v35, &v34);
  v4 = (unsigned __int64 *)(v3 + 56);
  v6 = v36;
  v5 = (int)v35;
  v7 = (unsigned __int64 *)(v3 + 48);
  v8 = (unsigned __int64 *)(v3 + 40);
  do
  {
    if ( v6 == (_DWORD *)v5 )
      goto LABEL_25;
    LODWORD(v9) = *(v6 - 1);
    HIDWORD(v9) = *(_DWORD *)(v9 - 12);
    v10 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v3 + 68);
    v39 = v9;
    v11 = v10(v3, &v39);
    v37 = 0;
    v38 = v11;
    __dmb();
    if ( v11 == 1 )
    {
      do
        v12 = __ldrexd(v8);
      while ( __strexd(v12 + 1, v8) );
      __dmb();
        v13 = __ldrexd(v7);
      while ( __strexd(v13, v7) );
      v14 = v3;
        v15 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
      while ( __strexd(v15 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v32 = (int)(v6 - 1);
        v16 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
      while ( __strexd(v16, (unsigned __int64 *)&unk_283E5E8) );
    }
    else
        v17 = __ldrexd(v4);
      while ( __strexd(v17 + 1, v4) );
        v18 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
      while ( __strexd(v18 + 1, (unsigned __int64 *)&unk_283E5F0) );
    v19 = v14;
    j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v14 + 12), v11, 0LL);
    v20 = v38;
    v38 |= 2u;
    v21 = v20 & 1;
    if ( v37 )
      v37();
    v22 = v21 == 0;
    v3 = v19;
    if ( !v22 )
      break;
    v5 = (int)v35;
    v6 = (_DWORD *)v32;
  }
  while ( (_DWORD *)v32 != v35 );
  if ( v6 == v36 )
LABEL_25:
    *(_DWORD *)(v31 + 8) = 0;
    *(_BYTE *)(v31 + 16) = *(_BYTE *)(v31 + 16) & 0xFC | 1;
    goto LABEL_26;
  while ( 1 )
    LODWORD(v23) = *v6;
    HIDWORD(v23) = *(_DWORD *)(*v6 - 12);
    v33 = v23;
    j_Core::FileSystemImpl::createOneDirectory(v31, v19, &v33);
    v24 = *(_BYTE *)(v31 + 16);
    *(_BYTE *)(v31 + 16) = v24 | 2;
    if ( !(v24 & 1) )
    v25 = *(void (__fastcall **)(int, int, signed int))(v31 + 8);
    ++v6;
    if ( v25 )
      v25(v31, v31, 3);
    if ( v6 == v36 )
LABEL_26:
  v27 = (int)v36;
  v26 = v35;
  if ( v35 != v36 )
    do
      v30 = (int *)(*(_DWORD *)v26 - 12);
      if ( v30 != &dword_28898C0 )
      {
        v28 = (unsigned int *)(*(_DWORD *)v26 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
        }
        else
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      }
      v26 = (char *)v26 + 4;
    while ( v26 != (void *)v27 );
    v26 = v35;
  if ( v26 )
    j_operator delete(v26);
}


void __fastcall Core::FileSystemImpl::_getDirectoryFiles(int a1, int a2, _QWORD *a3, __int64 *a4)
{
  Core::FileSystemImpl::_getDirectoryFiles(a1, a2, a3, a4);
}


void __fastcall Core::FileSystemImpl::~FileSystemImpl(Core::FileSystemImpl *this)
{
  Core::FileSystemImpl::~FileSystemImpl(this);
}


int __fastcall Core::FileStdStreamBuf::seekpos(int a1, int a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  char v7; // r0@1
  int result; // r0@2
  char v9; // [sp+4h] [bp-24h]@1
  int (*v10)(void); // [sp+Ch] [bp-1Ch]@4
  char v11; // [sp+14h] [bp-14h]@1

  v4 = a1;
  v5 = HIDWORD(a3);
  v6 = a3;
  j_Core::FileImpl::setPosition((Core::FileImpl *)&v9, *(_DWORD *)(a2 + 32), a3);
  v7 = v11;
  v11 |= 2u;
  if ( v7 & 1 )
  {
    result = HIDWORD(a4);
    *(_DWORD *)v4 = v6;
    *(_DWORD *)(v4 + 4) = v5;
    *(_QWORD *)(v4 + 8) = a4;
  }
  else
    result = -1;
    *(_DWORD *)v4 = -1;
    *(_DWORD *)(v4 + 4) = -1;
    *(_DWORD *)(v4 + 8) = 0;
  if ( v10 )
    result = v10();
  return result;
}


int __fastcall Core::FileSystemImpl::deleteEmptyDirectory(int a1, int a2, __int64 *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  void (__fastcall *v5)(char *); // r3@1
  int (*v6)(void); // r7@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // kr00_8@3
  unsigned __int64 v9; // kr08_8@5
  __int64 v10; // r0@8
  int result; // r0@8
  int v12; // [sp+0h] [bp-48h]@7
  int (*v13)(void); // [sp+8h] [bp-40h]@1
  void (__fastcall *v14)(int *, _DWORD); // [sp+Ch] [bp-3Ch]@7
  char v15; // [sp+10h] [bp-38h]@1
  int (*v16)(void); // [sp+18h] [bp-30h]@8
  int v17; // [sp+1Ch] [bp-2Ch]@8
  unsigned __int8 v18; // [sp+20h] [bp-28h]@1
  __int64 v19; // [sp+28h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(void (__fastcall **)(char *))(*(_DWORD *)a2 + 72);
  v19 = *a3;
  v5(&v15);
  v6 = 0;
  v13 = 0;
  if ( v18 & 1 )
  {
    v7 = (unsigned __int64 *)(v3 + 32);
    __dmb();
    do
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
      v9 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v9 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v6 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v3 + 12), 0, 0LL);
    if ( v13 )
    {
      v14(&v12, *(_DWORD *)(v3 + 12));
      v6 = v13;
    }
  }
  v10 = *(_QWORD *)&v15;
  *(_QWORD *)&v15 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v10;
  *(_DWORD *)(v4 + 8) = v16;
  v16 = 0;
  HIDWORD(v10) = v17;
  v17 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = HIDWORD(v10);
  HIDWORD(v10) = v18;
  *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 16) & 0xFC | v18 & 3;
  result = HIDWORD(v10) | 3;
  v18 = BYTE4(v10) | 3;
  if ( v6 )
    result = v6();
    if ( v16 )
      result = v16();
  return result;
}


signed int __fastcall Core::FileStdStreamBuf::underflow(Core::FileStdStreamBuf *this)
{
  Core::FileStdStreamBuf *v1; // r4@1
  signed int v2; // r5@3
  __int64 v3; // r0@5
  int v4; // r6@7
  unsigned __int64 v5; // r2@9
  int v6; // r7@9
  char v7; // r0@9
  int v8; // r0@11
  char v10; // [sp+Ch] [bp-34h]@9
  void (*v11)(void); // [sp+14h] [bp-2Ch]@12
  char v12; // [sp+1Ch] [bp-24h]@9
  __int64 v13; // [sp+20h] [bp-20h]@9

  v1 = this;
  if ( *((_DWORD *)this + 8) )
  {
    if ( *((_BYTE *)this + 40) & 1 )
    {
      v3 = *((_QWORD *)this + 1);
      if ( (unsigned int)v3 >= HIDWORD(v3) )
      {
        v4 = v3 - *((_DWORD *)v1 + 1);
        if ( v4 > 4 )
          v4 = 4;
        j___aeabi_memcpy_0((int)v1 + 4 - v4 + 41, v3 - v4, v4);
        HIDWORD(v5) = 4092;
        v13 = 0LL;
        v6 = (int)v1 + 45;
        LODWORD(v5) = (char *)v1 + 45;
        j_Core::FileImpl::read(
          (Core::FileImpl *)&v10,
          *((void **)v1 + 8),
          v5,
          (unsigned __int64 *)0xFFC,
          0,
          (unsigned __int64 *)&v13);
        v7 = v12;
        v2 = -1;
        v12 |= 2u;
        if ( v7 & 1 && v13 )
        {
          v8 = v13 + v6;
          *((_DWORD *)v1 + 1) = v6 - v4;
          *((_DWORD *)v1 + 2) = v6;
          *((_DWORD *)v1 + 3) = v8;
          v2 = *((_BYTE *)v1 + 45);
        }
        if ( v11 )
          v11();
      }
      else
        v2 = *(_BYTE *)v3;
    }
    else
      v2 = -1;
  }
  else
    v2 = -1;
  return v2;
}


signed int __fastcall Core::starts_with(unsigned int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // r12@1
  signed int result; // r0@2
  signed int v6; // r5@3
  unsigned int v7; // lr@5
  unsigned int v8; // r8@5
  int v9; // r6@6

  v4 = a1;
  if ( a3 )
  {
    result = 0;
    v6 = -1;
    if ( v4 && v4 >= a3 )
    {
      v7 = 0;
      v8 = v4;
      do
      {
        v9 = 0;
        while ( *(_BYTE *)(a2 + v7 + v9) == *(_BYTE *)(a4 + v9) )
        {
          if ( ++v9 >= a3 )
          {
            v6 = v7;
            goto LABEL_12;
          }
        }
        ++v7;
        v6 = -1;
        if ( v7 >= v4 )
          break;
        --v8;
      }
      while ( v8 >= a3 );
    }
LABEL_12:
    if ( !v6 )
      result = 1;
  }
  else
    result = 1;
  return result;
}


void *__fastcall Core::FileSystemImpl::getGlobalStats(Core::FileSystemImpl *this)
{
  return &Core::FileSystemImpl::sStats;
}


int __fastcall Core::FileSystem_generic::_copyTimeAndAccessRights(int a1, int a2, const char **a3, const char **a4)
{
  int v4; // r4@1
  const char **v5; // r5@1
  _DWORD *v6; // r0@3
  void **v7; // r1@3
  void **v8; // r2@3
  const char *v9; // r3@3
  void *v10; // r1@7
  void *v11; // r2@7
  int result; // r0@7
  int v13; // [sp+0h] [bp-80h]@5
  int v14; // [sp+4h] [bp-7Ch]@5
  char v15; // [sp+8h] [bp-78h]@1
  __mode_t mode; // [sp+18h] [bp-68h]@2
  int v17; // [sp+58h] [bp-28h]@5

  v4 = a1;
  v5 = a4;
  if ( j_stat(*a3, (struct stat *)&v15) )
  {
    if ( j_chmod(*v5, (unsigned __int16)mode) )
    {
      v6 = j_operator new(4u);
      v7 = &std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
      v8 = &std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
      v9 = "_wchmod() failed on target file.";
    }
    else
      v13 = v17;
      v14 = v17;
      if ( !j_utime(*v5, (const struct utimbuf *)&v13) )
      {
        *(_DWORD *)(v4 + 8) = 0;
        result = (unsigned __int8)(*(_BYTE *)(v4 + 16) & 0xFC) | 1;
        goto LABEL_8;
      }
      v9 = "_wutime() files on target file.";
  }
  else
    v6 = j_operator new(4u);
    v7 = &std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    v8 = &std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    v9 = "stat() failed on source file.";
  v10 = *v7;
  v11 = *v8;
  *v6 = v9;
  *(_DWORD *)v4 = v6;
  *(_DWORD *)(v4 + 8) = v10;
  *(_DWORD *)(v4 + 12) = v11;
  result = *(_BYTE *)(v4 + 16) & 0xFC;
LABEL_8:
  *(_BYTE *)(v4 + 16) = result;
  return result;
}


int __fastcall Core::FileStorageArea::_onWriteFile(int a1, _QWORD *a2)
{
  int v2; // r4@1
  _QWORD *v3; // r0@1
  int (__cdecl *v4)(_DWORD); // r3@1
  int *v5; // r5@1 OVERLAPPED
  int *v6; // r6@1 OVERLAPPED
  int v7; // t1@4
  int result; // r0@4
  _QWORD *v9; // [sp+0h] [bp-20h]@1
  int (__fastcall *v10)(void **, _QWORD **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v11)(__int64 **, int); // [sp+Ch] [bp-14h]@1

  v2 = a1;
  *(_QWORD *)(&v6 - 1) = *a2;
  v3 = j_operator new(8u);
  *v3 = *(_QWORD *)(&v6 - 1);
  v4 = (int (__cdecl *)(_DWORD))sub_1B997D2;
  v9 = v3;
  v10 = sub_1B997D2;
  v11 = sub_1B997B4;
  *(_QWORD *)&v5 = *(_QWORD *)(v2 + 152);
  if ( v5 == v6 )
    goto LABEL_11;
  do
  {
    if ( !v4 )
      sub_21E5F48();
    v7 = *v5;
    ++v5;
    result = v11(&v9, v7);
    v4 = (int (__cdecl *)(_DWORD))v10;
  }
  while ( v6 != v5 );
  if ( v10 )
LABEL_11:
    result = v4(&v9);
  return result;
}


void __fastcall Core::FileSystem_generic::~FileSystem_generic(Core::FileSystem_generic *this)
{
  Core::FileSystemImpl *v1; // r0@1

  v1 = j_Core::FileSystemImpl::~FileSystemImpl(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall Core::FileSystem_generic::_renameFileOrDirectory(int a1, _DWORD *a2, const char **a3, __int64 *a4)
{
  const char **v4; // r6@1
  int v5; // r4@1
  _DWORD *v6; // r7@1
  __int64 *v7; // r5@1
  int v8; // r0@2
  signed int v9; // r12@3
  int (__fastcall *v10)(int, _DWORD *, __int64 *, __int64 *); // r12@7
  int result; // r0@8
  _DWORD *v12; // r0@11
  __int64 v13; // kr00_8@11
  int v14; // r7@11
  int v15; // r0@11
  __int64 v16; // [sp+0h] [bp-A8h]@8
  __int64 v17; // [sp+8h] [bp-A0h]@8
  _DWORD *v18; // [sp+10h] [bp-98h]@9
  int v19; // [sp+14h] [bp-94h]@11
  int (__cdecl *v20)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+18h] [bp-90h]@6
  int v21; // [sp+1Ch] [bp-8Ch]@11
  char v22; // [sp+20h] [bp-88h]@6
  char v23; // [sp+28h] [bp-80h]@1
  int v24; // [sp+38h] [bp-70h]@2

  v4 = a3;
  v5 = a1;
  v6 = a2;
  v7 = a4;
  if ( j_stat(*a3, (struct stat *)&v23) )
    goto LABEL_14;
  v8 = v24 & 0xF000;
  if ( v8 == 0x8000 )
  {
    v9 = 40;
    goto LABEL_6;
  }
  if ( v8 != 0x4000 )
LABEL_14:
    v12 = j_operator new(4u);
    *v12 = "Entry not found.";
    v18 = v12;
    v13 = *(_QWORD *)v5;
    v14 = v19;
    v18 = (_DWORD *)*(_QWORD *)v5;
    v19 = HIDWORD(v13);
    *(_DWORD *)v5 = v12;
    *(_DWORD *)(v5 + 4) = v14;
    *(_DWORD *)(v5 + 8) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    v20 = 0;
    v15 = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v5 + 12) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    v21 = v15;
    *(_BYTE *)(v5 + 16) &= 0xFCu;
    return 3;
  v9 = 84;
LABEL_6:
  v20 = 0;
  v22 = 3;
  v10 = *(int (__fastcall **)(int, _DWORD *, __int64 *, __int64 *))(*v6 + v9);
  v17 = *(_QWORD *)v4;
  v16 = *v7;
  result = v10(v5, v6, &v17, &v16);
  if ( v20 )
    result = v20(&v18, &v18, 3, v20);
  return result;
}


int __fastcall Core::Result::merge(Core::Result&&,Core::Result&)::{lambda(std::string *)#1}::operator() const(int a1, int *a2)
{
  int v2; // r8@1
  int *v3; // r10@1
  void **v4; // r4@1
  void **v5; // r7@1
  char v6; // r0@1
  const char *v7; // r5@3
  int v8; // r0@7
  char v9; // r0@8
  int *v10; // r5@10
  const char *v11; // r4@10
  int v12; // r0@15
  void *v13; // r0@16
  void **v14; // r0@17
  int v15; // r4@17
  char *v16; // r0@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  int v22; // [sp+4h] [bp-4h]@16
  void **v23; // [sp+8h] [bp+0h]@1
  int v24; // [sp+Ch] [bp+4h]@1
  void **v25; // [sp+10h] [bp+8h]@1
  void **v26; // [sp+14h] [bp+Ch]@1
  int v27; // [sp+18h] [bp+10h]@1
  int v28; // [sp+1Ch] [bp+14h]@1
  int v29; // [sp+20h] [bp+18h]@1
  int v30; // [sp+24h] [bp+1Ch]@1
  int v31; // [sp+28h] [bp+20h]@1
  int v32; // [sp+2Ch] [bp+24h]@1
  int v33; // [sp+30h] [bp+28h]@1
  int v34; // [sp+34h] [bp+2Ch]@1
  char *v35; // [sp+38h] [bp+30h]@1
  void **v36; // [sp+3Ch] [bp+34h]@1
  int v37; // [sp+ACh] [bp+A4h]@1
  __int16 v38; // [sp+B0h] [bp+A8h]@1
  int v39; // [sp+B4h] [bp+ACh]@1
  int v40; // [sp+B8h] [bp+B0h]@1
  int v41; // [sp+BCh] [bp+B4h]@1
  int v42; // [sp+C0h] [bp+B8h]@1

  v2 = a1;
  v3 = a2;
  sub_21B6308((int)&v36);
  v36 = &off_26D3AF0;
  v4 = (void **)off_26D3F64;
  v5 = (void **)off_26D3F70;
  v37 = 0;
  v38 = 0;
  v41 = 0;
  v42 = 0;
  v39 = 0;
  v40 = 0;
  v23 = (void **)off_26D3F68;
  *(void ***)((char *)&v23 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v24 = 0;
  sub_21B5AD4((int)*(v23 - 3) + (_DWORD)&v23, 0);
  v25 = v5;
  *(_DWORD *)((char *)*(v5 - 3) + (_DWORD)&v25) = off_26D3F74;
  sub_21B5AD4((int)*(v25 - 3) + (_DWORD)&v25, 0);
  v23 = v4;
  *(_DWORD *)((char *)*(v4 - 3) + (_DWORD)&v23) = off_26D3F78;
  v23 = &off_26D3F94;
  v36 = &off_26D3FBC;
  v25 = &off_26D3FA8;
  v32 = 0;
  v30 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  v26 = &off_26D40A8;
  v27 = 0;
  sub_21C9520((unsigned int **)&v33);
  v26 = &off_27734E8;
  v34 = 24;
  v35 = (char *)&unk_28898CC;
  sub_21B5AD4((int)*(v23 - 3) + (_DWORD)&v23, (unsigned int)&v26);
  sub_21CBF38((char *)&v25, (int)"Error 1: ", 9);
  v6 = *(_BYTE *)(v2 + 16);
  *(_BYTE *)(v2 + 16) = v6 | 2;
  if ( v6 & 1 )
  {
    v7 = "Success.";
  }
  else if ( *(_DWORD *)(v2 + 8) )
    v7 = (const char *)(*(int (__fastcall **)(int, int *))(v2 + 12))(v2, v3);
    if ( !v7 )
    {
      sub_21B583C((int)*(v25 - 3) + (_DWORD)&v25, *(_DWORD *)((char *)*(v25 - 3) + (_DWORD)&v25 + 20) | 1);
      goto LABEL_8;
    }
  else
    v7 = "Generic failure, no message resolver.";
  v8 = j_strlen_0(v7);
  sub_21CBF38((char *)&v25, (int)v7, v8);
LABEL_8:
  sub_21CBF38((char *)&v25, (int)"\nError 2: ", 10);
  v9 = *(_BYTE *)(v2 + 36);
  *(_BYTE *)(v2 + 36) = v9 | 2;
  if ( v9 & 1 )
    v11 = "Success.";
LABEL_14:
    v10 = (int *)&v36;
    goto LABEL_15;
  if ( !*(_DWORD *)(v2 + 28) )
    v11 = "Generic failure, no message resolver.";
    goto LABEL_14;
  v10 = (int *)&v36;
  v11 = (const char *)(*(int (__fastcall **)(int, int *))(v2 + 32))(v2 + 20, v3);
  if ( v11 )
LABEL_15:
    v12 = j_strlen_0(v11);
    sub_21CBF38((char *)&v25, (int)v11, v12);
    goto LABEL_16;
  sub_21B583C((int)*(v25 - 3) + (_DWORD)&v25, *(_DWORD *)((char *)*(v25 - 3) + (_DWORD)&v25 + 20) | 1);
LABEL_16:
  sub_21CBF38((char *)&v25, (int)"\n", 1);
  sub_21CFED8(&v22, (int)&v26);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v22);
  v13 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = off_26D3F84;
  v15 = *v3;
  v23 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v23) = off_26D3F80[0];
  v25 = v14;
  v16 = v35 - 12;
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v35 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21C802C((unsigned int **)&v33);
  sub_21B6560(v10);
  return v15;
}


unsigned __int64 *__fastcall Core::FileStorageArea::_addWriteOperation(Core::FileStorageArea *this, int a2, unsigned __int64 a3)
{
  Core::FileStorageArea *v3; // r4@1
  unsigned int v4; // r5@1
  Core::FileStorageArea *v5; // r0@1
  unsigned int v6; // r6@1
  int v7; // r7@1
  unsigned __int64 *v8; // r0@4
  unsigned __int64 v9; // kr00_8@5
  unsigned __int64 *v10; // r0@6
  unsigned __int64 v11; // kr08_8@7
  unsigned __int64 *v12; // r0@8
  unsigned __int64 v13; // kr10_8@9
  unsigned __int64 *result; // r0@10
  unsigned __int64 v15; // kr18_8@11
  unsigned __int64 *v16; // r0@13
  unsigned __int64 v17; // kr20_8@14
  unsigned __int64 v18; // kr28_8@16

  v3 = this;
  v4 = HIDWORD(a3);
  v5 = (Core::FileStorageArea *)*((_DWORD *)this + 41);
  v6 = a3;
  v7 = a2;
  if ( v5 )
    j_Core::FileStorageArea::_addWriteOperation(v5, a2, a3);
  if ( v7 == 1 )
  {
    v8 = (unsigned __int64 *)((char *)v3 + 24);
    __dmb();
    do
      v9 = __ldrexd(v8);
    while ( __strexd(v9 + 1, v8) );
    v10 = (unsigned __int64 *)((char *)v3 + 32);
      v11 = __ldrexd(v10);
    while ( __strexd(v11 + __PAIR__(v4, v6), v10) );
    v12 = (unsigned __int64 *)((char *)v3 + 72);
      v13 = __ldrexd(v12);
    while ( __strexd(v13 + 1, v12) );
    result = (unsigned __int64 *)((char *)v3 + 80);
      v15 = __ldrexd(result);
    while ( __strexd(v15 + __PAIR__(v4, v6), result) );
  }
  else
    v16 = (unsigned __int64 *)((char *)v3 + 40);
      v17 = __ldrexd(v16);
    while ( __strexd(v17 + 1, v16) );
    result = (unsigned __int64 *)((char *)v3 + 88);
      v18 = __ldrexd(result);
    while ( __strexd(v18 + 1, result) );
  __dmb();
  return result;
}


int __fastcall Core::FileSystem::directoryExists(__int64 *a1)
{
  char v1; // r0@1
  int v2; // r4@1
  void *v4; // [sp+0h] [bp-38h]@1
  void (*v5)(void); // [sp+8h] [bp-30h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-2Ch]@1
  __int64 v7; // [sp+10h] [bp-28h]@1
  char v8; // [sp+1Ch] [bp-1Ch]@1
  void (*v9)(void); // [sp+24h] [bp-14h]@1
  char v10; // [sp+2Ch] [bp-Ch]@1

  v7 = *a1;
  v4 = j_operator new(1u);
  v5 = (void (*)(void))sub_1B9DEF6;
  v6 = sub_1B9DECC;
  j_Core::TransactionFrame::exec((int)&v8, 0, &v7, (int)&v4);
  v1 = v10;
  v10 |= 2u;
  v2 = v1 & 1;
  if ( v9 )
    v9();
  if ( v5 )
    v5();
  return v2;
}


int __fastcall Core::FileSystemImpl::getDirectoryFiles(int a1, int a2, int a3, __int64 *a4)
{
  int v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int); // r5@1
  int v7; // r1@1
  unsigned __int64 *v8; // r0@2
  unsigned __int64 v9; // r2@3
  unsigned __int64 *v10; // r0@4
  unsigned __int64 v11; // r2@5
  unsigned __int64 v12; // r2@7
  unsigned __int64 v13; // r2@9
  unsigned __int64 *v14; // r0@11
  unsigned __int64 v15; // r2@12
  unsigned __int64 v16; // r2@14
  __int64 v17; // r2@15
  int v18; // r1@15
  int result; // r0@15
  int v20; // [sp+0h] [bp-30h]@1
  int v21; // [sp+8h] [bp-28h]@15
  int v22; // [sp+Ch] [bp-24h]@15
  char v23; // [sp+10h] [bp-20h]@1
  __int64 v24; // [sp+18h] [bp-18h]@1

  v4 = a2;
  v5 = a1;
  v6 = *(void (__fastcall **)(int *, int))(*(_DWORD *)a2 + 92);
  v24 = *a4;
  v6(&v20, a2);
  v7 = v23 & 1;
  if ( v23 & 1 )
  {
    v8 = (unsigned __int64 *)(v4 + 40);
    __dmb();
    do
      v9 = __ldrexd(v8);
    while ( __strexd(v9 + 1, v8) );
    v10 = (unsigned __int64 *)(v4 + 48);
      v11 = __ldrexd(v10);
    while ( __strexd(v11, v10) );
      v12 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v12 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v13 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v13, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v14 = (unsigned __int64 *)(v4 + 56);
      v15 = __ldrexd(v14);
    while ( __strexd(v15 + 1, v14) );
      v16 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v16 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v4 + 12), v7, 0LL);
  v17 = *(_QWORD *)&v20;
  *(_QWORD *)&v20 = *(_QWORD *)v5;
  *(_QWORD *)v5 = v17;
  *(_DWORD *)(v5 + 8) = v21;
  v21 = 0;
  v18 = v22;
  v22 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = v18;
  result = (unsigned __int8)(*(_BYTE *)(v5 + 16) & 0xFC) | v23 & 3;
  *(_BYTE *)(v5 + 16) = result;
  return result;
}


void __fastcall Core::FileStdStreamBuf::~FileStdStreamBuf(Core::FileStdStreamBuf *this, int a2, unsigned __int64 a3)
{
  Core::FileStdStreamBuf *v3; // r0@1

  v3 = j_Core::FileStdStreamBuf::~FileStdStreamBuf(this, a2, a3);
  j_j_j__ZdlPv_7((void *)v3);
}


void __fastcall Core::FileStorageArea::~FileStorageArea(Core::FileStorageArea *this)
{
  Core::FileStorageArea::~FileStorageArea(this);
}


RakNet *__fastcall Core::FileSystem::renameFileOrDirectory(int a1, __int64 *a2, __int64 *a3)
{
  int v3; // r4@1
  RakNet *result; // r0@1
  void *v5; // [sp+8h] [bp-38h]@1
  int (*v6)(void); // [sp+10h] [bp-30h]@1
  int (__fastcall *v7)(int, int, int); // [sp+14h] [bp-2Ch]@1
  void *v8; // [sp+18h] [bp-28h]@1
  int (*v9)(void); // [sp+20h] [bp-20h]@1
  int (__fastcall *v10)(int, int, int); // [sp+24h] [bp-1Ch]@1
  __int64 v11; // [sp+28h] [bp-18h]@1
  __int64 v12; // [sp+30h] [bp-10h]@1

  v3 = a1;
  v12 = *a2;
  v11 = *a3;
  v8 = j_operator new(1u);
  v9 = (int (*)(void))sub_1B9E3D4;
  v10 = sub_1B9E3AA;
  v5 = j_operator new(1u);
  v6 = (int (*)(void))sub_1B9E432;
  v7 = sub_1B9E402;
  result = j_Core::TransactionFrameSourceTarget::exec(v3, &v12, &v11, (int)&v8, (int)&v5);
  if ( v6 )
    result = (RakNet *)v6();
  if ( v9 )
    result = (RakNet *)v9();
  return result;
}


int __fastcall Core::FileSystemImpl::createOneDirectory(int a1, int a2, __int64 *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  void (__fastcall *v5)(char *); // r3@1
  int (*v6)(void); // r7@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // kr00_8@3
  unsigned __int64 v9; // kr08_8@5
  __int64 v10; // r0@8
  int result; // r0@8
  int v12; // [sp+0h] [bp-48h]@7
  int (*v13)(void); // [sp+8h] [bp-40h]@1
  void (__fastcall *v14)(int *, _DWORD); // [sp+Ch] [bp-3Ch]@7
  char v15; // [sp+10h] [bp-38h]@1
  int (*v16)(void); // [sp+18h] [bp-30h]@8
  int v17; // [sp+1Ch] [bp-2Ch]@8
  unsigned __int8 v18; // [sp+20h] [bp-28h]@1
  __int64 v19; // [sp+28h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(void (__fastcall **)(char *))(*(_DWORD *)a2 + 56);
  v19 = *a3;
  v5(&v15);
  v6 = 0;
  v13 = 0;
  if ( v18 & 1 )
  {
    v7 = (unsigned __int64 *)(v3 + 32);
    __dmb();
    do
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
      v9 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v9 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v6 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v3 + 12), 0, 0LL);
    if ( v13 )
    {
      v14(&v12, *(_DWORD *)(v3 + 12));
      v6 = v13;
    }
  }
  v10 = *(_QWORD *)&v15;
  *(_QWORD *)&v15 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v10;
  *(_DWORD *)(v4 + 8) = v16;
  v16 = 0;
  HIDWORD(v10) = v17;
  v17 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = HIDWORD(v10);
  HIDWORD(v10) = v18;
  *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 16) & 0xFC | v18 & 3;
  result = HIDWORD(v10) | 3;
  v18 = BYTE4(v10) | 3;
  if ( v6 )
    result = v6();
    if ( v16 )
      result = v16();
  return result;
}


int __fastcall Core::FileSystemImpl::createEmptyFile(int a1, int a2, __int64 *a3)
{
  int v3; // r8@1
  int v4; // r4@1
  __int64 *v5; // r6@1
  void (__fastcall *v6)(char *); // r3@1
  __int64 v7; // kr00_8@1
  _QWORD *v8; // r0@1
  int (__cdecl *v9)(_DWORD); // r6@1
  unsigned __int64 *v10; // r0@2
  unsigned __int64 v11; // kr08_8@3
  unsigned __int64 v12; // kr10_8@5
  __int64 v13; // r0@8
  int result; // r0@8
  _QWORD *v15; // [sp+0h] [bp-48h]@1
  int (__fastcall *v16)(void **, _QWORD **, int); // [sp+8h] [bp-40h]@1
  int (__fastcall *v17)(__int64 **, int); // [sp+Ch] [bp-3Ch]@1
  char v18; // [sp+10h] [bp-38h]@1
  int (__cdecl *v19)(char *); // [sp+18h] [bp-30h]@8
  int v20; // [sp+1Ch] [bp-2Ch]@8
  unsigned __int8 v21; // [sp+20h] [bp-28h]@1
  __int64 v22; // [sp+28h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = *(void (__fastcall **)(char *))(*(_DWORD *)a2 + 44);
  v22 = *a3;
  v6(&v18);
  v7 = *v5;
  v8 = j_operator new(8u);
  *v8 = v7;
  v9 = (int (__cdecl *)(_DWORD))sub_1BA35E2;
  v15 = v8;
  v16 = sub_1BA35E2;
  v17 = sub_1BA35C6;
  if ( v21 & 1 )
  {
    v10 = (unsigned __int64 *)(v3 + 32);
    __dmb();
    do
      v11 = __ldrexd(v10);
    while ( __strexd(v11 + 1, v10) );
      v12 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v12 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v9 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v3 + 12), 0, 0LL);
    if ( v16 )
    {
      v17(&v15, *(_DWORD *)(v3 + 12));
      v9 = (int (__cdecl *)(_DWORD))v16;
    }
  }
  v13 = *(_QWORD *)&v18;
  *(_QWORD *)&v18 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v13;
  LODWORD(v13) = v19;
  v19 = 0;
  *(_DWORD *)(v4 + 8) = v13;
  HIDWORD(v13) = v20;
  v20 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = HIDWORD(v13);
  HIDWORD(v13) = v21;
  *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 16) & 0xFC | v21 & 3;
  result = HIDWORD(v13) | 3;
  v21 = BYTE4(v13) | 3;
  if ( v9 )
    result = v9(&v15);
    if ( v19 )
      result = v19(&v18);
  return result;
}


void __fastcall Core::FileSystem::cleanPath_deprecated(int a1, int a2, __int64 *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  char v5; // r0@1
  __int64 v6; // r1@2
  void (**v7)(void); // r6@2
  __int64 v8; // kr00_8@2
  int v9; // r0@3
  __int64 v10; // r1@3
  void (*v11)(void); // r7@3
  void (*v12)(void); // r3@3
  char v13; // r0@7
  const char *v14; // r1@9
  void **v15; // ST08_4@12
  _DWORD *v16; // r6@12
  char *v17; // r0@12
  __int64 v18; // r2@12
  void **v19; // r1@12
  char *v20; // r0@12
  void *v21; // r0@13
  char *v22; // r0@14
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  int *v29; // [sp+4h] [bp-13Ch]@9
  __int64 v30; // [sp+10h] [bp-130h]@3
  void **v31; // [sp+18h] [bp-128h]@3
  void **v32; // [sp+1Ch] [bp-124h]@3
  int v33; // [sp+20h] [bp-120h]@12
  int v34; // [sp+24h] [bp-11Ch]@12
  int v35; // [sp+28h] [bp-118h]@12
  int v36; // [sp+2Ch] [bp-114h]@12
  int v37; // [sp+30h] [bp-110h]@12
  int v38; // [sp+34h] [bp-10Ch]@12
  int v39; // [sp+38h] [bp-108h]@12
  int v40; // [sp+3Ch] [bp-104h]@12
  char *v41; // [sp+40h] [bp-100h]@12
  void **v42; // [sp+44h] [bp-FCh]@12
  int v43; // [sp+B4h] [bp-8Ch]@12
  __int16 v44; // [sp+B8h] [bp-88h]@12
  int v45; // [sp+BCh] [bp-84h]@12
  int v46; // [sp+C0h] [bp-80h]@12
  int v47; // [sp+C4h] [bp-7Ch]@12
  int v48; // [sp+C8h] [bp-78h]@12
  int v49; // [sp+D0h] [bp-70h]@12
  char *v50; // [sp+D4h] [bp-6Ch]@8
  __int64 v51; // [sp+D8h] [bp-68h]@3
  char v52; // [sp+E0h] [bp-60h]@3
  int v53; // [sp+E4h] [bp-5Ch]@3
  void (*v54)(void); // [sp+E8h] [bp-58h]@3
  void **v55; // [sp+ECh] [bp-54h]@3
  char v56; // [sp+F0h] [bp-50h]@3
  __int64 v57; // [sp+F8h] [bp-48h]@1
  __int64 v58; // [sp+100h] [bp-40h]@1
  void (*v59)(void); // [sp+108h] [bp-38h]@2
  void **v60; // [sp+10Ch] [bp-34h]@2
  char v61; // [sp+110h] [bp-30h]@1

  v3 = a2;
  v4 = a1;
  v57 = *a3;
  j_Core::FileSystem::cleanPathSeparators_deprecated((int)&v58, a2, (int)&v57);
  v5 = v61;
  if ( v61 & 1 )
  {
    v61 |= 2u;
    v9 = *(_DWORD *)(v3 + 1028);
    LODWORD(v51) = v3 + 4;
    HIDWORD(v51) = v9;
    j_Core::FileSystem::isValidPath((int)&v52, &v51);
    v61 = v61 & 0xFC | v56 & 3;
    LODWORD(v10) = *(_DWORD *)&v52;
    HIDWORD(v10) = v53;
    v11 = v54;
    v54 = 0;
    v30 = v58;
    v7 = &v59;
    v58 = v10;
    v12 = v59;
    v59 = v11;
    v31 = (void **)v12;
    v32 = v60;
    v60 = v55;
    if ( v12 )
    {
      v12();
      v56 |= 3u;
      if ( v54 )
        v54();
    }
    else
    v13 = v61;
    if ( v61 & 1 )
      v61 |= 2u;
      *(_DWORD *)(v4 + 8) = 0;
      *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 16) & 0xFC | 1;
      *(_BYTE *)(v3 + 4) = 0;
      *(_DWORD *)(v3 + 1028) = 0;
      v61 = v13 | 2;
      v50 = (char *)&unk_28898CC;
      if ( v59 )
      {
        v29 = (int *)&v59;
        v14 = (const char *)((int (__fastcall *)(__int64 *, char **))v60)(&v58, &v50);
      }
      else
        v14 = "Generic failure, no message resolver.";
      sub_21E94B4((void **)&v49, v14);
      sub_21B6308((int)&v42);
      v42 = &off_26D3AF0;
      v15 = off_26D3F60;
      v16 = off_26D3F64;
      v43 = 0;
      v44 = 0;
      v47 = 0;
      v48 = 0;
      v45 = 0;
      v46 = 0;
      LODWORD(v30) = off_26D3F68;
      *(_DWORD *)((char *)&v30 + *((_DWORD *)off_26D3F68 - 3)) = off_26D3F6C;
      HIDWORD(v30) = 0;
      sub_21B5AD4((int)&v30 + *(_DWORD *)(v30 - 12), 0);
      v31 = (void **)off_26D3F70;
      *(void ***)((char *)&v31 + *((_DWORD *)off_26D3F70 - 3)) = (void **)off_26D3F74;
      sub_21B5AD4((int)*(v31 - 3) + (_DWORD)&v31, 0);
      LODWORD(v30) = v16;
      *(_DWORD *)((char *)&v30 + *(v16 - 3)) = off_26D3F78;
      LODWORD(v30) = &off_26D3F94;
      v42 = &off_26D3FBC;
      v31 = &off_26D3FA8;
      v38 = 0;
      v36 = 0;
      v37 = 0;
      v34 = 0;
      v35 = 0;
      v32 = &off_26D40A8;
      v33 = 0;
      sub_21C9520((unsigned int **)&v39);
      v32 = &off_27734E8;
      v40 = 24;
      v41 = (char *)&unk_28898CC;
      sub_21B5AD4((int)&v30 + *(_DWORD *)(v30 - 12), (unsigned int)&v32);
      sub_21CBF38((char *)&v31, (int)"Bad path passed to File System: ", 32);
      v17 = sub_21CBF38((char *)&v31, v49, *(_DWORD *)(v49 - 12));
      sub_21CBF38(v17, (int)"\n", 1);
      v18 = v58;
      v58 = *(_QWORD *)v4;
      *(_QWORD *)v4 = v18;
      *(_DWORD *)(v4 + 8) = v59;
      v59 = 0;
      v19 = v60;
      v60 = *(void ***)(v4 + 12);
      *(_DWORD *)(v4 + 12) = v19;
      LOBYTE(v19) = v61;
      *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 16) & 0xFC | v61 & 3;
      v61 = (unsigned __int8)v19 | 3;
      LODWORD(v30) = v15;
      LODWORD(v18) = off_26D3F84;
      *(_DWORD *)((char *)*(v15 - 3) + (_DWORD)&v30) = off_26D3F80[0];
      v31 = (void **)v18;
      v20 = v41 - 12;
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v41 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
        }
        else
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      sub_21C802C((unsigned int **)&v39);
      sub_21B6560(&v42);
      v21 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v49 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v7 = (void (**)(void))v29;
      v22 = v50 - 12;
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v50 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
  }
  else
    v6 = v58;
    v8 = *(_QWORD *)v4;
    v58 = *(_QWORD *)v4;
    *(_QWORD *)v4 = v6;
    LODWORD(v6) = v59;
    v59 = 0;
    *(_DWORD *)(v4 + 8) = v6;
    LODWORD(v6) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v4 + 12) = v60;
    v60 = (void **)v6;
    LOBYTE(v6) = *(_BYTE *)(v4 + 16);
    v61 = v5 | 3;
    *(_BYTE *)(v4 + 16) = v6 & 0xFC | v5 & 3;
  if ( *v7 )
    (*v7)();
}


Core::FileOpenMode *__fastcall Core::FileOpenMode::FileOpenMode(Core::FileOpenMode *this, const char *a2)
{
  Core::FileOpenMode *v2; // r8@1
  const char *v3; // r5@1
  unsigned int v4; // r7@1
  __int64 *v5; // r4@1
  __int64 v6; // kr00_8@2

  v2 = this;
  v3 = a2;
  v4 = 0;
  v5 = (__int64 *)&unk_283E464;
  *(_BYTE *)v2 &= 0xC0u;
  while ( 1 )
  {
    v6 = *v5;
    if ( (unsigned int)*v5 )
    {
      if ( !j_strcmp_0(v3, (const char *)v6) )
        break;
    }
    if ( HIDWORD(v6) && !j_strcmp_0(v3, (const char *)HIDWORD(v6)) )
      break;
    ++v4;
    v5 += 3;
    if ( v4 >= 0xC )
      return v2;
  }
  *(_BYTE *)v2 = *((_BYTE *)&unk_283E460 + 24 * v4 + 12);
  return v2;
}


int __fastcall Core::FileSystem_generic::_renameFile(int a1, int a2, const char **a3, const char **a4)
{
  const char **v4; // r5@1
  int v5; // r4@1
  const char **v6; // r6@1
  int v7; // r0@2
  int v8; // r0@5
  int v9; // r7@7
  _DWORD *v10; // r0@8
  int v11; // r3@8
  void *v12; // r1@8
  void *v13; // r2@8
  _DWORD *v14; // r0@9
  __int64 v15; // kr00_8@9
  int v16; // r7@9
  int v17; // r0@9
  int result; // r0@9
  _DWORD *v19; // r0@10
  int v20; // r5@12
  _DWORD *v21; // r0@13
  __int64 v22; // r1@13
  _DWORD *v23; // r0@15
  _DWORD *v24; // [sp+4h] [bp-ACh]@11
  int (*v25)(void); // [sp+Ch] [bp-A4h]@7
  int (__fastcall *v26)(int); // [sp+10h] [bp-A0h]@11
  char v27; // [sp+14h] [bp-9Ch]@7
  _DWORD *v28; // [sp+18h] [bp-98h]@9
  int v29; // [sp+1Ch] [bp-94h]@9
  int (*v30)(void); // [sp+20h] [bp-90h]@4
  int v31; // [sp+24h] [bp-8Ch]@9
  char v32; // [sp+28h] [bp-88h]@4
  _DWORD *v33; // [sp+30h] [bp-80h]@1
  int v34; // [sp+34h] [bp-7Ch]@8
  int v35; // [sp+40h] [bp-70h]@2

  v4 = a3;
  v5 = a1;
  v6 = a4;
  if ( j_stat(*a3, (struct stat *)&v33) )
    goto LABEL_24;
  v7 = v35 & 0xF000;
  if ( v7 == 0x4000 )
  {
    v30 = 0;
    v32 = 3;
    v19 = j_operator new(4u);
    *(_DWORD *)v5 = v19;
    *v19 = "Not a file.";
    *(_DWORD *)(v5 + 8) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    *(_DWORD *)(v5 + 12) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    result = *(_BYTE *)(v5 + 16) & 0xFC;
    *(_BYTE *)(v5 + 16) = result;
    return result;
  }
  if ( v7 != 0x8000 )
LABEL_24:
    v14 = j_operator new(4u);
    *v14 = "Entry not found.";
    v28 = v14;
    v15 = *(_QWORD *)v5;
    v16 = v29;
    v28 = (_DWORD *)*(_QWORD *)v5;
    v29 = HIDWORD(v15);
    *(_DWORD *)v5 = v14;
    *(_DWORD *)(v5 + 4) = v16;
    v17 = *(_DWORD *)(v5 + 12);
    v31 = v17;
    *(_BYTE *)(v5 + 16) &= 0xFCu;
    result = 3;
  v30 = 0;
  v32 = 3;
  if ( j_stat(*v6, (struct stat *)&v33) )
    goto LABEL_25;
  v8 = v35 & 0xF000;
  if ( v8 == 0x4000 )
    v25 = 0;
    v27 = 3;
    v23 = j_operator new(4u);
    *(_DWORD *)v5 = v23;
    v12 = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    v13 = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    *v23 = "Can't rename file to same name as an existing directory.";
    goto LABEL_16;
  if ( v8 != 0x8000 )
LABEL_25:
    v24 = j_operator new(4u);
    *v24 = "Entry not found.";
    v25 = (int (*)(void))std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    v26 = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    v27 = 2;
  else
    v9 = j_remove(*v6);
    if ( v9 )
    {
      v10 = j_operator new(8u);
      *v10 = "std::remove() failed";
      v10[1] = v9;
      v33 = v10;
      v11 = v34;
      v12 = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
      v13 = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
      *(_DWORD *)v5 = v10;
      *(_DWORD *)(v5 + 4) = v11;
LABEL_16:
      *(_DWORD *)(v5 + 8) = v13;
      *(_DWORD *)(v5 + 12) = v12;
      goto LABEL_17;
    }
  v20 = j_rename(*v4, *v6);
  if ( v20 )
    v21 = j_operator new(8u);
    HIDWORD(v22) = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v22) = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
    *v21 = "rename() failed";
    v21[1] = v20;
    *(_DWORD *)v5 = v21;
    *(_QWORD *)(v5 + 8) = v22;
LABEL_17:
    goto LABEL_18;
  *(_DWORD *)(v5 + 8) = 0;
  result = (unsigned __int8)(*(_BYTE *)(v5 + 16) & 0xFC) | 1;
LABEL_18:
  *(_BYTE *)(v5 + 16) = result;
  if ( v25 )
    result = v25();
  if ( v30 )
    result = v30();
  return result;
}


int __fastcall Core::FileSystemImpl::copyDirectoryAndContentsRecursively(int a1, int a2, __int64 *a3, __int64 *a4)
{
  int v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(char *, int, __int64 *, __int64 *); // r5@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // kr00_8@3
  unsigned __int64 *v9; // r0@4
  unsigned __int64 v10; // kr08_8@5
  unsigned __int64 v11; // kr10_8@7
  unsigned __int64 v12; // kr18_8@9
  unsigned __int64 *v13; // r0@11
  unsigned __int64 v14; // kr20_8@12
  unsigned __int64 *v15; // r0@13
  unsigned __int64 v16; // kr28_8@14
  unsigned __int64 *v17; // r0@15
  unsigned __int64 v18; // kr30_8@16
  unsigned __int64 *v19; // r0@17
  unsigned __int64 v20; // kr38_8@18
  unsigned __int64 v21; // kr40_8@20
  unsigned __int64 v22; // kr48_8@22
  unsigned __int64 v23; // kr50_8@24
  unsigned __int64 v24; // kr58_8@26
  __int64 v25; // r0@29
  int (*v26)(void); // r3@29
  int result; // r0@29
  char v28; // [sp+8h] [bp-48h]@28
  int (*v29)(void); // [sp+10h] [bp-40h]@1
  void (__fastcall *v30)(char *, _DWORD); // [sp+14h] [bp-3Ch]@28
  char v31; // [sp+18h] [bp-38h]@1
  int (*v32)(void); // [sp+20h] [bp-30h]@29
  int v33; // [sp+24h] [bp-2Ch]@29
  unsigned __int8 v34; // [sp+28h] [bp-28h]@1
  __int64 v35; // [sp+30h] [bp-20h]@1
  __int64 v36; // [sp+38h] [bp-18h]@1

  v4 = a2;
  v5 = a1;
  v6 = *(void (__fastcall **)(char *, int, __int64 *, __int64 *))(*(_DWORD *)a2 + 100);
  v36 = *a3;
  v35 = *a4;
  v6(&v31, a2, &v36, &v35);
  v29 = 0;
  if ( v34 & 1 )
  {
    v13 = (unsigned __int64 *)(v4 + 40);
    __dmb();
    do
      v14 = __ldrexd(v13);
    while ( __strexd(v14 + 1, v13) );
    v15 = (unsigned __int64 *)(v4 + 48);
      v16 = __ldrexd(v15);
    while ( __strexd(v16, v15) );
    v17 = (unsigned __int64 *)(v4 + 16);
      v18 = __ldrexd(v17);
    while ( __strexd(v18 + 1, v17) );
    v19 = (unsigned __int64 *)(v4 + 24);
      v20 = __ldrexd(v19);
    while ( __strexd(v20, v19) );
      v21 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v21 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v22 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v22, (unsigned __int64 *)&unk_283E5E8) );
      v23 = __ldrexd((unsigned __int64 *)&Core::FileSystemImpl::sStats);
    while ( __strexd(v23 + 1, (unsigned __int64 *)&Core::FileSystemImpl::sStats) );
      v24 = __ldrexd((unsigned __int64 *)&unk_283E5D0);
    while ( __strexd(v24, (unsigned __int64 *)&unk_283E5D0) );
    j_Core::FileStorageArea::_addReadWriteOperation(*(Core::FileStorageArea **)(v4 + 12), 1, 0LL, 0LL);
    if ( v29 )
      v30(&v28, *(_DWORD *)(v4 + 12));
  }
  else
    v7 = (unsigned __int64 *)(v4 + 56);
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
    v9 = (unsigned __int64 *)(v4 + 32);
      v10 = __ldrexd(v9);
    while ( __strexd(v10 + 1, v9) );
      v11 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v11 + 1, (unsigned __int64 *)&unk_283E5F0) );
      v12 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v12 + 1, (unsigned __int64 *)&unk_283E5D8) );
    j_Core::FileStorageArea::_addReadWriteOperation(*(Core::FileStorageArea **)(v4 + 12), 0, 0LL, 0LL);
  v25 = *(_QWORD *)&v31;
  *(_QWORD *)&v31 = *(_QWORD *)v5;
  *(_QWORD *)v5 = v25;
  LODWORD(v25) = v32;
  v32 = 0;
  *(_DWORD *)(v5 + 8) = v25;
  HIDWORD(v25) = v33;
  v33 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = HIDWORD(v25);
  HIDWORD(v25) = v34;
  v26 = v29;
  *(_BYTE *)(v5 + 16) = *(_BYTE *)(v5 + 16) & 0xFC | v34 & 3;
  result = HIDWORD(v25) | 3;
  v34 = BYTE4(v25) | 3;
  if ( v26 )
    result = v26();
    if ( v32 )
      result = v32();
  return result;
}


int __fastcall Core::FileStorageArea::getRootPath(int result, int a2)
{
  __int64 v2; // r1@1

  LODWORD(v2) = *(_DWORD *)(a2 + 16);
  HIDWORD(v2) = *(_DWORD *)(v2 - 12);
  *(_QWORD *)result = v2;
  return result;
}


int __fastcall Core::FileSystemImpl::getDirectoryFilesRecursively(int a1, int a2, int a3, __int64 *a4)
{
  int v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int); // r5@1
  int v7; // r1@1
  unsigned __int64 *v8; // r0@2
  unsigned __int64 v9; // r2@3
  unsigned __int64 *v10; // r0@4
  unsigned __int64 v11; // r2@5
  unsigned __int64 v12; // r2@7
  unsigned __int64 v13; // r2@9
  unsigned __int64 *v14; // r0@11
  unsigned __int64 v15; // r2@12
  unsigned __int64 v16; // r2@14
  __int64 v17; // r2@15
  int v18; // r1@15
  int result; // r0@15
  int v20; // [sp+0h] [bp-30h]@1
  int v21; // [sp+8h] [bp-28h]@15
  int v22; // [sp+Ch] [bp-24h]@15
  char v23; // [sp+10h] [bp-20h]@1
  __int64 v24; // [sp+18h] [bp-18h]@1

  v4 = a2;
  v5 = a1;
  v6 = *(void (__fastcall **)(int *, int))(*(_DWORD *)a2 + 96);
  v24 = *a4;
  v6(&v20, a2);
  v7 = v23 & 1;
  if ( v23 & 1 )
  {
    v8 = (unsigned __int64 *)(v4 + 40);
    __dmb();
    do
      v9 = __ldrexd(v8);
    while ( __strexd(v9 + 1, v8) );
    v10 = (unsigned __int64 *)(v4 + 48);
      v11 = __ldrexd(v10);
    while ( __strexd(v11, v10) );
      v12 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v12 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v13 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v13, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v14 = (unsigned __int64 *)(v4 + 56);
      v15 = __ldrexd(v14);
    while ( __strexd(v15 + 1, v14) );
      v16 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v16 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v4 + 12), v7, 0LL);
  v17 = *(_QWORD *)&v20;
  *(_QWORD *)&v20 = *(_QWORD *)v5;
  *(_QWORD *)v5 = v17;
  *(_DWORD *)(v5 + 8) = v21;
  v21 = 0;
  v18 = v22;
  v22 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = v18;
  result = (unsigned __int8)(*(_BYTE *)(v5 + 16) & 0xFC) | v23 & 3;
  *(_BYTE *)(v5 + 16) = result;
  return result;
}


RakNet *__fastcall Core::FileSystem::copyTimeAndAccessRights(int a1, __int64 *a2, __int64 *a3)
{
  int v3; // r4@1
  RakNet *result; // r0@1
  void *v5; // [sp+8h] [bp-38h]@1
  int (*v6)(void); // [sp+10h] [bp-30h]@1
  int (__fastcall *v7)(int); // [sp+14h] [bp-2Ch]@1
  void *v8; // [sp+18h] [bp-28h]@1
  int (*v9)(void); // [sp+20h] [bp-20h]@1
  int (__fastcall *v10)(int, int, int); // [sp+24h] [bp-1Ch]@1
  __int64 v11; // [sp+28h] [bp-18h]@1
  __int64 v12; // [sp+30h] [bp-10h]@1

  v3 = a1;
  v12 = *a2;
  v11 = *a3;
  v8 = j_operator new(1u);
  v9 = (int (*)(void))sub_1B9E5DA;
  v10 = sub_1B9E5AC;
  v5 = j_operator new(1u);
  v6 = (int (*)(void))sub_1B9E640;
  v7 = sub_1B9E608;
  result = j_Core::TransactionFrameSourceTarget::exec(v3, &v12, &v11, (int)&v8, (int)&v5);
  if ( v6 )
    result = (RakNet *)v6();
  if ( v9 )
    result = (RakNet *)v9();
  return result;
}


signed int __fastcall Core::FileStdStreamBuf::sync(Core::FileStdStreamBuf *this, int a2, unsigned __int64 a3)
{
  signed int result; // r0@1

  result = j_Core::FileStdStreamBuf::_flushoutput(this, a2, a3);
  if ( result != -1 )
    result = 0;
  return result;
}


RakNet *__fastcall Core::FileSystem::createDirectoryForFile(int a1, __int64 *a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int *v4; // r5@2
  int v5; // r0@2
  RakNet *result; // r0@6
  __int64 v7; // [sp+0h] [bp-A28h]@1
  int v8; // [sp+8h] [bp-A20h]@2
  char v9; // [sp+Ch] [bp-A1Ch]@3
  int v10; // [sp+40Ch] [bp-61Ch]@2
  void *v11; // [sp+410h] [bp-618h]@1
  int (__fastcall *v12)(void **, void **, int); // [sp+418h] [bp-610h]@4
  int (__fastcall *v13)(int, int, int); // [sp+41Ch] [bp-60Ch]@4
  int v14; // [sp+A10h] [bp-18h]@1
  RakNet *v15; // [sp+A14h] [bp-14h]@1

  v2 = a1;
  v15 = _stack_chk_guard;
  v7 = *a2;
  v3 = j_Core::SplitPathT<1024u,64u>::SplitPathT((int)&v11, (const char **)&v7);
  if ( v14 )
  {
    v4 = &v8;
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::Path>((unsigned int *)&v8, v3 + 1024, v14 - 1);
    v5 = v10;
  }
  else
    j___aeabi_memclr8_0((int)&v8, 1028);
    v8 = 1023;
    v5 = 0;
    v10 = 0;
    v9 = 0;
  LODWORD(v7) = (unsigned int)v4 | 4;
  HIDWORD(v7) = v5;
  v11 = j_operator new(1u);
  v13 = sub_1B9DE84;
  v12 = sub_1B9DE9E;
  j_Core::TransactionFrame::exec(v2, 1, &v7, (int)&v11);
  if ( v12 )
    ((void (__cdecl *)(void **, void **, signed int, int (__fastcall *)(void **, void **, int)))v12)(&v11, &v11, 3, v12);
  result = (RakNet *)(_stack_chk_guard - v15);
  if ( _stack_chk_guard != v15 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall Core::FileImpl::setLoggingEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 12) = a2;
  return result;
}


int __fastcall Core::FileSystemImpl::_createEmptyFile(int a1, int a2, __int64 *a3)
{
  int result; // r0@1
  __int64 v4; // [sp+8h] [bp-18h]@1
  int v5; // [sp+14h] [bp-Ch]@1

  v5 = 0;
  v4 = *a3;
  j_Core::FileSystemImpl::openFile(a1, a2, (int)&v5, &v4, 46);
  result = v5;
  if ( v5 )
    result = (*(int (**)(void))(*(_DWORD *)v5 + 4))();
  return result;
}


RakNet *__fastcall Core::TransactionFrame::exec(int a1, int a2, __int64 *a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  char v6; // r0@1
  __int64 v7; // r1@2
  __int64 v8; // kr00_8@2
  int v9; // r6@4
  unsigned int *v10; // r1@5
  unsigned int v11; // r0@7
  unsigned int *v12; // r7@11
  unsigned int v13; // r0@13
  int v14; // r4@24
  unsigned int *v15; // r1@25
  unsigned int v16; // r0@27
  unsigned int *v17; // r5@31
  unsigned int v18; // r0@33
  RakNet *result; // r0@38
  int v20; // [sp+0h] [bp-470h]@4
  void (*v21)(void); // [sp+8h] [bp-468h]@18
  char v22; // [sp+14h] [bp-45Ch]@4
  void (*v23)(void); // [sp+1Ch] [bp-454h]@20
  __int64 v24; // [sp+28h] [bp-448h]@1
  int v25; // [sp+34h] [bp-43Ch]@1
  int v26; // [sp+38h] [bp-438h]@4
  int v27; // [sp+444h] [bp-2Ch]@2
  int v28; // [sp+448h] [bp-28h]@2
  void (*v29)(void); // [sp+44Ch] [bp-24h]@2
  int v30; // [sp+450h] [bp-20h]@2
  char v31; // [sp+454h] [bp-1Ch]@1
  RakNet *v32; // [sp+458h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v32 = _stack_chk_guard;
  v24 = *a3;
  j_Core::TransactionFrame::TransactionFrame((int)&v25, a2, &v24);
  v6 = v31;
  if ( v31 & 1 )
  {
    v31 |= 2u;
    if ( !*(_DWORD *)(v5 + 8) )
      sub_21E5F48();
    (*(void (__fastcall **)(char *, int, int *))(v5 + 12))(&v22, v5, &v25);
    j_Core::FileSystemImpl::commit((Core::FileSystemImpl *)&v20, v25);
    v25 = 0;
    v9 = v26;
    v26 = 0;
    if ( v9 )
    {
      v10 = (unsigned int *)(v9 + 4);
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
        v12 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
    }
    j_Core::Result::merge(v4, (int)&v22, (int)&v20);
    if ( v21 )
      v21();
    if ( v23 )
      v23();
    if ( v29 )
      v29();
  }
  else
    HIDWORD(v7) = v28;
    LODWORD(v7) = v27;
    v8 = *(_QWORD *)v4;
    v28 = *(_QWORD *)v4 >> 32;
    v27 = v8;
    *(_QWORD *)v4 = v7;
    LODWORD(v7) = v29;
    v29 = 0;
    *(_DWORD *)(v4 + 8) = v7;
    LODWORD(v7) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v4 + 12) = v30;
    v30 = v7;
    LOBYTE(v7) = *(_BYTE *)(v4 + 16);
    v31 = v6 | 3;
    *(_BYTE *)(v4 + 16) = v7 & 0xFC | v6 & 3;
  v14 = v26;
  if ( v26 )
    v15 = (unsigned int *)(v26 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  result = (RakNet *)(_stack_chk_guard - v32);
  if ( _stack_chk_guard != v32 )
    j___stack_chk_fail_0((int)result);
  return result;
}


Core::FileImpl *__fastcall Core::FileImpl::FileImpl(Core::FileImpl *a1, Core::FileSystemImpl *this, char a3)
{
  Core::FileImpl *v3; // r4@1
  int v4; // r0@2
  int v5; // r0@3
  void *v6; // r5@5
  unsigned int v7; // r2@5
  unsigned int v8; // r1@7
  unsigned int v9; // r7@7
  char *v10; // r6@13
  int v11; // r9@15

  v3 = a1;
  *(_DWORD *)a1 = &off_27267FC;
  *((_BYTE *)a1 + 4) = a3;
  *((_DWORD *)a1 + 2) = this;
  *((_BYTE *)a1 + 12) = 0;
  j_Core::FileSystemImpl::_addFile(this, a1);
  if ( &pthread_create )
  {
    v4 = j_pthread_mutex_lock_0((pthread_mutex_t *)&Core::FileImpl::sAllFilesLock);
    if ( v4 )
      sub_21E5E14(v4);
  }
  v5 = dword_283E5B8;
  if ( dword_283E5B8 == dword_283E5BC )
    v6 = (void *)Core::FileImpl::sAllFiles;
    v7 = (dword_283E5B8 - Core::FileImpl::sAllFiles) >> 2;
    if ( !v7 )
      v7 = 1;
    v8 = v7 + ((dword_283E5B8 - Core::FileImpl::sAllFiles) >> 2);
    v9 = v7 + ((dword_283E5B8 - Core::FileImpl::sAllFiles) >> 2);
    if ( 0 != v8 >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)j_operator new(4 * v9);
      v5 = dword_283E5B8;
      v6 = (void *)Core::FileImpl::sAllFiles;
    }
    else
      v10 = 0;
    v11 = (int)&v10[v5 - (_DWORD)v6];
    *(_DWORD *)&v10[v5 - (_DWORD)v6] = v3;
    if ( 0 != (v5 - (signed int)v6) >> 2 )
      j___aeabi_memmove4_0((int)v10, (int)v6);
    if ( v6 )
      j_operator delete(v6);
    Core::FileImpl::sAllFiles = v10;
    dword_283E5B8 = v11 + 4;
    dword_283E5BC = (int)&v10[4 * v9];
  else
    *(_DWORD *)dword_283E5B8 = v3;
    dword_283E5B8 += 4;
    j_pthread_mutex_unlock_0((pthread_mutex_t *)&Core::FileImpl::sAllFilesLock);
  return v3;
}


int __fastcall Core::FileSystemImpl::getFileSize(int a1, int a2, __int64 *a3)
{
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int *); // r5@1
  int v6; // r1@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // r2@3
  unsigned __int64 *v9; // r0@4
  unsigned __int64 v10; // r2@5
  unsigned __int64 v11; // r2@7
  unsigned __int64 v12; // r2@9
  unsigned __int64 *v13; // r0@11
  unsigned __int64 v14; // r2@12
  unsigned __int64 v15; // r2@14
  __int64 v16; // r2@15
  int v17; // r1@15
  int result; // r0@15
  int v19; // [sp+0h] [bp-30h]@1
  int v20; // [sp+8h] [bp-28h]@15
  int v21; // [sp+Ch] [bp-24h]@15
  char v22; // [sp+10h] [bp-20h]@1
  __int64 v23; // [sp+18h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(void (__fastcall **)(int *))(*(_DWORD *)a2 + 36);
  v23 = *a3;
  v5(&v19);
  v6 = v22 & 1;
  if ( v22 & 1 )
  {
    v7 = (unsigned __int64 *)(v3 + 40);
    __dmb();
    do
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
    v9 = (unsigned __int64 *)(v3 + 48);
      v10 = __ldrexd(v9);
    while ( __strexd(v10, v9) );
      v11 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v11 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v12 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v12, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v13 = (unsigned __int64 *)(v3 + 56);
      v14 = __ldrexd(v13);
    while ( __strexd(v14 + 1, v13) );
      v15 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v15 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v3 + 12), v6, 0LL);
  v16 = *(_QWORD *)&v19;
  *(_QWORD *)&v19 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v16;
  *(_DWORD *)(v4 + 8) = v20;
  v20 = 0;
  v17 = v21;
  v21 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = v17;
  result = (unsigned __int8)(*(_BYTE *)(v4 + 16) & 0xFC) | v22 & 3;
  *(_BYTE *)(v4 + 16) = result;
  return result;
}


signed int __fastcall Core::FileStdStreamBuf::_flushoutput(Core::FileStdStreamBuf *this, int a2, unsigned __int64 a3)
{
  Core::FileStdStreamBuf *v3; // r5@1
  const void *v4; // r1@1
  signed int v5; // r4@3
  char v6; // r0@6
  char v7; // r0@13
  char v9; // [sp+Ch] [bp-24h]@6
  void (*v10)(void); // [sp+14h] [bp-1Ch]@7
  char v11; // [sp+1Ch] [bp-14h]@6

  v3 = this;
  v4 = (const void *)*((_DWORD *)this + 8);
  if ( !v4 )
    return -1;
  if ( !(*((_BYTE *)this + 40) & 2) )
  LODWORD(a3) = *((_QWORD *)this + 2);
  v5 = (*((_QWORD *)this + 2) >> 32) - a3;
  if ( v5 >= 1 )
  {
    j_Core::FileImpl::write((Core::FileImpl *)&v9, v4, a3, v5);
    v6 = v11;
    v11 |= 2u;
    if ( !(v6 & 1) )
    {
      if ( v10 )
        v10();
      return -1;
    }
    if ( v10 )
      v10();
    v4 = (const void *)*((_DWORD *)v3 + 8);
  }
  j_Core::FileImpl::flush((Core::FileImpl *)&v9, (int)v4);
  v7 = v11;
  v11 |= 2u;
  if ( v7 & 1 )
    *((_DWORD *)v3 + 5) -= v5;
  else
    v5 = -1;
  if ( v10 )
    v10();
  return v5;
}


int __fastcall Core::FileOpenMode::cMode(Core::FileOpenMode *this)
{
  unsigned __int8 v1; // r0@1
  signed int v3; // r0@14

  v1 = *(_BYTE *)this;
  if ( ((unsigned __int8)byte_283E46C ^ v1) & 0x3F )
  {
    if ( ((unsigned __int8)byte_283E484 ^ v1) & 0x3F )
    {
      if ( ((unsigned __int8)byte_283E49C ^ v1) & 0x3F )
      {
        if ( ((unsigned __int8)byte_283E4B4 ^ v1) & 0x3F )
        {
          if ( ((unsigned __int8)byte_283E4CC ^ v1) & 0x3F )
          {
            if ( ((unsigned __int8)byte_283E4E4 ^ v1) & 0x3F )
            {
              if ( ((unsigned __int8)byte_283E4FC ^ v1) & 0x3F )
              {
                if ( ((unsigned __int8)byte_283E514 ^ v1) & 0x3F )
                {
                  if ( ((unsigned __int8)byte_283E52C ^ v1) & 0x3F )
                  {
                    if ( ((unsigned __int8)byte_283E544 ^ v1) & 0x3F )
                    {
                      if ( ((unsigned __int8)byte_283E55C ^ v1) & 0x3F )
                      {
                        if ( (v1 ^ (unsigned __int8)byte_283E574) & 0x3F )
                          return 0;
                        v3 = 11;
                      }
                      else
                        v3 = 10;
                    }
                    else
                      v3 = 9;
                  }
                  else
                    v3 = 8;
                }
                else
                  v3 = 7;
              }
              else
                v3 = 6;
            }
            else
              v3 = 5;
          }
          else
            v3 = 4;
        }
        else
          v3 = 3;
      }
      else
        v3 = 2;
    }
    else
      v3 = 1;
  }
  else
    v3 = 0;
  return *((_DWORD *)&unk_283E460 + 6 * v3 + 1);
}


_BOOL4 __fastcall Core::File_c::_isOpen(Core::File_c *this)
{
  return *((_DWORD *)this + 4) != 0;
}


int __fastcall Core::BufferedFileOperations::copyFile<8192ull>(Core::FileSystemImpl *,Core::Path,Core::FileSystemImpl *,Core::Path)::{lambda(Core::FileImpl *,Core::FileImpl *,void *,unsigned long long)#1}::operator() const(int a1, int a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  return Core::BufferedFileOperations::copyFile<8192ull>(Core::FileSystemImpl *,Core::Path,Core::FileSystemImpl *,Core::Path)::{lambda(Core::FileImpl *,Core::FileImpl *,void *,unsigned long long)#1}::operator() const(
           a1,
           a2,
           a3,
           a4,
           a5);
}


  if ( Core::FileSystem::directoryExists(&v29) )
{
    result = 0;
  }
  else
  {
    v28 = *v2;
    if ( Core::FileSystem::fileExists(&v28) == 1 )
    {
      v26 = *v2;
      Core::PathBuffer<Core::StackString<char,1024u>>::getEntryExtensionWithoutDot((int)&v34, &v26);
      Util::toUpper((void **)&v27, v36, (unsigned int)&v35);
      v5 = sub_21E7D6C((const void **)&v27, "ZIPE");
      v6 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v18 = (unsigned int *)(v27 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        }
        else
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      }
      if ( v5 )
        result = 0;
      else
        if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
          v7 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
          v7 = &ServiceLocator<AppPlatform>::mDefaultService;
        v8 = (*(int (**)(void))(**(_DWORD **)v7 + 316))();
        v9 = v8;
        v10 = *(int (__fastcall **)(int, __int64 *, int *))(*(_DWORD *)v8 + 8);
        sub_21E94B4((void **)&v25, "rb");
        v11 = v10(v9, v2, &v25);
        v12 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v25 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        if ( v11 )
          _aeabi_memclr8(&v30, 256);
          v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 24))(v9);
          v14 = (*(int (__cdecl **)(int))(*(_DWORD *)v13 + 8))(v13);
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v9 + 12))(v9, v11);
          if ( v14 == 256 )
            v15 = 0;
            if ( v31 == -1680885252 && !v30 )
              v15 = 1;
          sub_21E94B4((void **)&v24, v33);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            v3,
            &v24);
          v16 = (void *)(v24 - 12);
          if ( (int *)(v24 - 12) != &dword_28898C0 )
            v22 = (unsigned int *)(v24 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
            }
            else
              v23 = (*v22)--;
            if ( v23 <= 0 )
              j_j_j_j__ZdlPv_9(v16);
          v17 = 0;
          if ( *(_DWORD *)(*v3 - 12) == v32 )
            v17 = 1;
          result = v15 & v17;
          result = 0;
    }
    else
      result = 0;
  if ( _stack_chk_guard != v37 )
    _stack_chk_fail(result);
  return result;
}


_DWORD *__fastcall Core::PathBuffer<std::string>::_join<Core::Path>(const void **a1, unsigned int a2, unsigned int a3)
{
  const void **v3; // r4@1
  unsigned int v4; // r9@1
  unsigned int v5; // r11@1
  _DWORD *result; // r0@1
  int v7; // r7@2
  unsigned int v8; // r10@2
  _BYTE *v9; // r5@3
  _DWORD *v10; // r0@7
  int v11; // r1@7 OVERLAPPED
  int v12; // r6@7
  unsigned int v13; // r2@7
  _DWORD *v14; // r0@10
  char v15; // r0@12
  int v16; // r6@14
  _DWORD *v17; // r1@17
  bool v18; // zf@18
  _DWORD *v19; // r1@24
  int v20; // r8@25
  bool v21; // zf@25
  _DWORD *v22; // r0@30
  int v23; // r1@30 OVERLAPPED
  int v24; // r7@30
  unsigned int v25; // r2@30
  _DWORD *v26; // r1@33
  signed int v27; // r7@35
  int *v28; // r11@36
  _DWORD *v29; // r0@37
  int v30; // r1@37 OVERLAPPED
  char v31; // r9@37
  int v32; // r8@37
  unsigned int v33; // r2@37
  _DWORD *v34; // r0@40
  unsigned __int64 v35; // [sp+4h] [bp-44h]@35
  int v36; // [sp+10h] [bp-38h]@14
  _DWORD *v37; // [sp+18h] [bp-30h]@17
  int v38; // [sp+1Ch] [bp-2Ch]@35

  v3 = a1;
  v4 = a3;
  v5 = a2;
  result = &unk_28898CC;
  *v3 = &unk_28898CC;
  if ( a3 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      result = (_DWORD *)(v5 + 8 * v8);
      v9 = (_BYTE *)result[1];
      if ( v9 == (_BYTE *)-1 )
      {
        result = (_DWORD *)strlen(*(const char **)(v5 + 8 * v8));
        v9 = result;
      }
      if ( v9 )
        if ( v7 )
        {
          v10 = *v3;
          *(_QWORD *)&v11 = *(_QWORD *)((char *)*v3 - 12);
          v12 = v11 + 1;
          if ( v11 + 1 > v13 || *(v10 - 1) >= 1 )
          {
            sub_DA7404(v3, v11 + 1);
            v10 = *v3;
            v11 = *((_DWORD *)*v3 - 3);
          }
          *((_BYTE *)v10 + v11) = 47;
          v14 = *v3;
          if ( (int *)((char *)*v3 - 12) != &dword_28898C0 )
            *(v14 - 1) = 0;
            *(v14 - 3) = v12;
            *((_BYTE *)v14 + v12) = byte_26C67B8[0];
          v15 = 1;
        }
        else
          v15 = 0;
        v16 = *(_DWORD *)(v5 + 8 * v8);
        v36 = v7 + 1;
        while ( !(v15 & 1) )
          result = (_DWORD *)j_utf8proc_iterate(v16, (int)v9, (int *)&v37);
          v19 = result;
          if ( (signed int)result < 1 )
            goto LABEL_44;
          result = v37;
          v20 = v9 - (_BYTE *)v19;
          v16 += (int)v19;
          v21 = v37 == (_DWORD *)92;
          if ( v37 != (_DWORD *)92 )
            v21 = v37 == (_DWORD *)47;
          if ( v21 )
            if ( (_DWORD *)v9 == v19 )
              goto LABEL_44;
            v22 = *v3;
            *(_QWORD *)&v23 = *(_QWORD *)((char *)*v3 - 12);
            v24 = v23 + 1;
            if ( v23 + 1 > v25 || *(v22 - 1) >= 1 )
            {
              sub_DA7404(v3, v23 + 1);
              v22 = *v3;
              v23 = *((_DWORD *)*v3 - 3);
            }
            *((_BYTE *)v22 + v23) = 47;
            v15 = 1;
            v9 = (_BYTE *)v20;
            v26 = *v3;
            if ( (int *)((char *)*v3 - 12) != &dword_28898C0 )
              v9 = (_BYTE *)v20;
              *(v26 - 1) = 0;
              *(v26 - 3) = v24;
              *((_BYTE *)v26 + v24) = byte_26C67B8[0];
              v15 = 1;
          else
            v9 -= (signed int)v19;
LABEL_35:
            v38 = 0;
            v27 = j_utf8proc_encode_char((unsigned int)result, (int)&v38);
            v35 = __PAIR__(v4, v5);
            if ( v27 >= 1 )
              v28 = &v38;
              do
              {
                v29 = *v3;
                *(_QWORD *)&v30 = *(_QWORD *)((char *)*v3 - 12);
                v31 = *(_BYTE *)v28;
                v32 = v30 + 1;
                if ( v30 + 1 > v33 || *(v29 - 1) >= 1 )
                {
                  sub_DA7404(v3, v30 + 1);
                  v29 = *v3;
                  v30 = *((_DWORD *)*v3 - 3);
                }
                *((_BYTE *)v29 + v30) = v31;
                v34 = *v3;
                if ( (int *)((char *)*v3 - 12) != &dword_28898C0 )
                  *(v34 - 1) = 0;
                  *(v34 - 3) = v32;
                  *((_BYTE *)v34 + v32) = byte_26C67B8[0];
                v28 = (int *)((char *)v28 + 1);
                --v27;
              }
              while ( v27 );
            v15 = 0;
            v4 = HIDWORD(v35);
            v5 = v35;
        do
          v17 = result;
            break;
          v16 += (int)v17;
          v18 = v37 == (_DWORD *)92;
            v18 = v37 == (_DWORD *)47;
          if ( !v18 )
            v9 -= (signed int)v17;
            goto LABEL_35;
          v9 -= (signed int)v17;
        while ( v9 );
LABEL_44:
        v7 = v36;
      ++v8;
    }
    while ( v8 < v4 );
  }
  return result;
}


int __fastcall Core::Result::merge(int a1, int a2, int a3)
{
  int v3; // r12@0
  int v4; // r6@1
  int v5; // r5@1
  char v6; // r1@1
  int v7; // r4@1
  char v8; // r0@1
  void (__fastcall *v9)(char *, int, signed int); // r3@3
  int (*v10)(void); // r2@4
  char v11; // r0@4
  __int64 v12; // r0@6
  int v13; // r2@6
  int result; // r0@6
  __int64 v15; // r0@7
  char v16; // r2@7
  char v17; // r1@10
  char v18; // r11@10
  void (__fastcall *v19)(int *, int, signed int); // r3@10
  int v20; // r9@11
  __int64 v21; // kr00_8@13
  char v22; // ST08_1@13
  int v23; // r0@13
  char v24; // ST04_1@13
  __int64 v25; // kr08_8@13
  int v26; // r7@13
  char v27; // ST00_1@13
  _DWORD *v28; // r0@13
  _DWORD *v29; // r6@13
  _DWORD *v30; // r7@13
  void (*v31)(void); // r3@13
  char v32; // r0@14
  char v33; // r0@16
  void (__fastcall *v34)(_DWORD *, _DWORD *, signed int); // r3@16
  int (*v35)(void); // r3@18
  char v36; // r0@18
  char v37; // r1@18
  int (*v38)(void); // [sp+10h] [bp-A0h]@11
  int (__fastcall *v39)(_DWORD, _DWORD, _DWORD); // [sp+14h] [bp-9Ch]@11
  __int64 v40; // [sp+18h] [bp-98h]@13
  int (*v41)(void); // [sp+20h] [bp-90h]@13
  int v42; // [sp+24h] [bp-8Ch]@13
  char v43; // [sp+28h] [bp-88h]@13
  __int64 v44; // [sp+2Ch] [bp-84h]@13
  int (*v45)(void); // [sp+34h] [bp-7Ch]@13
  int v46; // [sp+38h] [bp-78h]@13
  char v47; // [sp+3Ch] [bp-74h]@13
  __int64 v48; // [sp+40h] [bp-70h]@13
  int (*v49)(void); // [sp+48h] [bp-68h]@13
  int (__fastcall *v50)(int *, int *); // [sp+4Ch] [bp-64h]@13
  char v51; // [sp+50h] [bp-60h]@4
  int (*v52)(void); // [sp+58h] [bp-58h]@3
  int v53; // [sp+5Ch] [bp-54h]@4
  char v54; // [sp+60h] [bp-50h]@4
  int v55; // [sp+64h] [bp-4Ch]@11
  int (__fastcall *v56)(_DWORD, _DWORD, _DWORD); // [sp+6Ch] [bp-44h]@10
  int v57; // [sp+70h] [bp-40h]@11
  char v58; // [sp+74h] [bp-3Ch]@13
  __int64 v59; // [sp+78h] [bp-38h]@13
  int (__fastcall *v60)(int *, int *, int); // [sp+80h] [bp-30h]@13
  int (__fastcall *v61)(int *, int *); // [sp+84h] [bp-2Ch]@13

  v4 = a3;
  v5 = a2;
  v6 = *(_BYTE *)(a3 + 16);
  v7 = a1;
  v8 = *(_BYTE *)(v5 + 16);
  if ( *(_BYTE *)(v5 + 16) & 1 )
  {
    *(_BYTE *)(v5 + 16) = v8 | 2;
    if ( v6 & 1 )
    {
      *(_BYTE *)(a3 + 16) |= 2u;
      *(_DWORD *)(v7 + 8) = 0;
      result = (unsigned __int8)(*(_BYTE *)(v7 + 16) & 0xFC) | 1;
      *(_BYTE *)(v7 + 16) = result;
    }
    else
      v12 = *(_QWORD *)a3;
      *(_QWORD *)a3 = *(_QWORD *)v7;
      *(_QWORD *)v7 = v12;
      LODWORD(v12) = *(_DWORD *)(a3 + 8);
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(v7 + 8) = v12;
      LODWORD(v12) = *(_DWORD *)(a3 + 12);
      *(_DWORD *)(a3 + 12) = *(_DWORD *)(v7 + 12);
      *(_DWORD *)(v7 + 12) = v12;
      LODWORD(v12) = *(_BYTE *)(a3 + 16);
      v13 = v12 & 3;
      result = v12 | 3;
      *(_BYTE *)(v7 + 16) = *(_BYTE *)(v7 + 16) & 0xFC | v13;
      *(_BYTE *)(v4 + 16) = result;
  }
  else if ( v6 & 1 )
    *(_BYTE *)(a3 + 16) = v6 | 2;
    v15 = *(_QWORD *)v5;
    *(_QWORD *)v5 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v15;
    LODWORD(v15) = *(_DWORD *)(v5 + 8);
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v7 + 8) = v15;
    LODWORD(v15) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v15;
    LODWORD(v15) = *(_BYTE *)(v5 + 16);
    v16 = v15 & 3;
    result = v15 | 3;
    *(_BYTE *)(v7 + 16) = *(_BYTE *)(v7 + 16) & 0xFC | v16;
    *(_BYTE *)(v5 + 16) = result;
  else
    *(_BYTE *)(a3 + 16) |= 2u;
    v52 = 0;
    v9 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
    if ( v9 )
      v9(&v51, v5, 2);
      v3 = *(_DWORD *)(v5 + 12);
      v53 = *(_DWORD *)(v5 + 12);
      v10 = *(int (**)(void))(v5 + 8);
      v52 = *(int (**)(void))(v5 + 8);
      v11 = v54 & 0xFC;
      v10 = 0;
      v11 = 0;
    v17 = *(_BYTE *)(v5 + 16) & 3;
    v18 = v17 | v11;
    v54 = v17 | v11;
    v56 = 0;
    v19 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
    if ( v19 )
      v19(&v55, v4, 2);
      v20 = *(_DWORD *)(v4 + 12);
      v57 = *(_DWORD *)(v4 + 12);
      v56 = *(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(v4 + 8);
      v3 = v53;
      v18 = v54;
      v39 = v56;
      v38 = v52;
      v20 = v57;
      v38 = v10;
      v39 = 0;
    v21 = *(_QWORD *)&v51;
    v22 = *(_BYTE *)(v4 + 16);
    *(_QWORD *)&v51 = v40;
    v40 = v21;
    v23 = v42;
    v42 = v3;
    v53 = v23;
    v24 = v43;
    v54 = v18 | 3;
    v25 = *(_QWORD *)&v55;
    *(_QWORD *)&v55 = v44;
    v26 = v3;
    v44 = v25;
    v57 = v46;
    v46 = v20;
    v58 |= 3u;
    v27 = v47;
    v28 = j_operator new(0x28u);
    *(_QWORD *)v28 = v21;
    v41 = 0;
    v28[2] = v38;
    v28[3] = v26;
    *((_BYTE *)v28 + 16) = v18 & 3;
    v28[6] = HIDWORD(v25);
    v43 = v24 | 3;
    v45 = 0;
    v28[5] = v25;
    v28[7] = v39;
    v28[8] = v20;
    *((_BYTE *)v28 + 36) = v22 & 3;
    LODWORD(v48) = v28;
    v47 = v27 | 3;
    v50 = std::_Function_handler<char const* ()(std::string *),Core::Result::merge(Core::Result&&,Core::Result&)::{lambda(std::string *)#1}>::_M_invoke;
    v29 = v28;
    v59 = v48;
    v49 = 0;
    v60 = std::_Function_base::_Base_manager<Core::Result::merge(Core::Result&&,Core::Result&)::{lambda(std::string *)#1}>::_M_manager;
    v61 = std::_Function_handler<char const* ()(std::string *),Core::Result::merge(Core::Result&&,Core::Result&)::{lambda(std::string *)#1}>::_M_invoke;
    *(_DWORD *)(v7 + 8) = 0;
    v30 = j_operator new(0x28u);
    v30[2] = 0;
    v31 = (void (*)(void))v29[2];
    if ( v31 )
      v31();
      v30[3] = v29[3];
      v30[2] = v29[2];
      v32 = *((_BYTE *)v30 + 16) & 0xFE;
      v32 = 0;
    v33 = v32 | *((_BYTE *)v29 + 16) & 1;
    *((_BYTE *)v30 + 16) = v33;
    *((_BYTE *)v30 + 16) = v33 & 0xFD | *((_BYTE *)v29 + 16) & 2;
    v30[7] = 0;
    v34 = (void (__fastcall *)(_DWORD *, _DWORD *, signed int))v29[7];
    if ( v34 )
      v34(v30 + 5, v29 + 5, 2);
      v30[8] = v29[8];
      v30[7] = v29[7];
    v35 = (int (*)(void))v60;
    v36 = *((_BYTE *)v30 + 36) & 0xFE | *((_BYTE *)v29 + 36) & 1;
    *((_BYTE *)v30 + 36) = v36;
    v37 = *((_BYTE *)v29 + 36);
    *(_DWORD *)v7 = v30;
    *((_BYTE *)v30 + 36) = v36 & 0xFD | v37 & 2;
    *(_DWORD *)(v7 + 12) = v61;
    *(_DWORD *)(v7 + 8) = v35;
    result = *(_BYTE *)(v7 + 16) & 0xFC;
    *(_BYTE *)(v7 + 16) = result;
    if ( v35 )
      result = v35();
    if ( v49 )
      result = v49();
    if ( v45 )
      result = v45();
    if ( v41 )
      result = v41();
    if ( v56 )
      result = v56(&v55, &v55, 3);
    if ( v52 )
      result = v52();
  return result;
}


int __fastcall Core::FileImpl::_readOperation(int a1, int a2, int a3, int a4, unsigned __int64 a5)
{
  int v5; // r4@1
  int result; // r0@1
  __int64 v7; // kr00_8@1
  int v8; // r1@1
  int v9; // r1@1

  v5 = a1;
  result = j_Core::FileSystemImpl::_readOperation(*(_DWORD *)(a2 + 8), a3, a5);
  v7 = *(_QWORD *)result;
  *(_QWORD *)result = *(_QWORD *)v5;
  *(_QWORD *)v5 = v7;
  v8 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(v5 + 8) = v8;
  v9 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = v9;
  LOBYTE(v9) = *(_BYTE *)(result + 16);
  *(_BYTE *)(v5 + 16) = *(_BYTE *)(v5 + 16) & 0xFC | v9 & 3;
  *(_BYTE *)(result + 16) = v9 | 3;
  return result;
}


void __fastcall Core::FileStorageArea::~FileStorageArea(Core::FileStorageArea *this)
{
  Core::FileStorageArea *v1; // r0@1

  v1 = j_Core::FileStorageArea::~FileStorageArea(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager(void **a1, _QWORD **a2, int a3)
{
  _QWORD **v3; // r5@1
  void **v4; // r4@1
  _QWORD *v5; // r0@4
  void *v6; // r0@5

  v3 = a2;
  v4 = a1;
  if ( a3 == 3 )
  {
    v6 = *a1;
    if ( *v4 )
      j_operator delete(v6);
    return 0;
  }
  if ( a3 == 2 )
    v5 = j_operator new(8u);
    *v5 = **v3;
    goto LABEL_9;
  if ( a3 != 1 )
  v5 = *a2;
LABEL_9:
  *v4 = v5;
  return 0;
}


RakNet *__fastcall Core::FileSystem::createEmptyFile(int a1, __int64 *a2)
{
  int v2; // r4@1
  RakNet *result; // r0@1
  void *v4; // [sp+0h] [bp-20h]@1
  int (__fastcall *v5)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-14h]@1
  __int64 v7; // [sp+10h] [bp-10h]@1

  v2 = a1;
  v7 = *a2;
  v4 = j_operator new(1u);
  v5 = sub_1B9D8B0;
  v6 = sub_1B9D896;
  result = j_Core::TransactionFrame::exec(v2, 1, &v7, (int)&v4);
  if ( v5 )
    result = (RakNet *)((int (__cdecl *)(void **))v5)(&v4);
  return result;
}


Core::FileSystemImpl *__fastcall Core::FileSystemImpl::~FileSystemImpl(Core::FileSystemImpl *this)
{
  Core::FileSystemImpl *v1; // r4@1
  Core::FileSystemImpl *v2; // r1@1
  void *v3; // r0@4
  char v5; // [sp+4h] [bp-1Ch]@2
  void (*v6)(void); // [sp+Ch] [bp-14h]@2

  v1 = this;
  *(_DWORD *)this = &off_2726840;
  v2 = (Core::FileSystemImpl *)*((_DWORD *)this + 3);
  if ( v2 )
  {
    j_Core::FileStorageArea::_endTransaction((Core::FileStorageArea *)&v5, v2, (int)this);
    if ( v6 )
      v6();
  }
  v3 = (void *)*((_DWORD *)v1 + 17);
  if ( v3 )
    j_operator delete(v3);
  return v1;
}


void __fastcall Core::BasicDirectoryStorageArea<Core::FileSystem_generic>::~BasicDirectoryStorageArea(Core::FileStorageArea *a1)
{
  Core::FileStorageArea *v1; // r0@1

  v1 = j_Core::FileStorageArea::~FileStorageArea(a1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall Core::FileStorageArea::setLoggingEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 172) = a2;
  return result;
}


int __fastcall Core::BufferedFileOperations::moveFileOrDirectory(int a1, int a2, __int64 *a3, int a4, unsigned __int64 *a5)
{
  __int64 *v5; // r7@1
  int v6; // r6@1
  int v7; // r4@1
  int v8; // r8@1
  int v9; // r0@1
  __int64 v10; // r1@2
  __int64 v11; // kr00_8@2
  int result; // r0@2
  __int64 v13; // kr08_8@3
  unsigned __int64 v14; // r0@3
  int (__fastcall *v15)(int, int, __int64 *, int, __int64 *); // r5@3
  int v16; // [sp+8h] [bp-48h]@3
  int v17; // [sp+Ch] [bp-44h]@3
  __int64 v18; // [sp+10h] [bp-40h]@3
  int v19; // [sp+14h] [bp-3Ch]@3
  __int64 v20; // [sp+18h] [bp-38h]@1
  char v21; // [sp+20h] [bp-30h]@1
  int v22; // [sp+24h] [bp-2Ch]@2
  int (*v23)(void); // [sp+28h] [bp-28h]@2
  int v24; // [sp+2Ch] [bp-24h]@2
  unsigned __int8 v25; // [sp+30h] [bp-20h]@1
  int v26; // [sp+34h] [bp-1Ch]@3

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v20 = *a3;
  v8 = a4;
  j_Core::FileSystemImpl::getEntryType((int)&v21, a2, &v20);
  v9 = v25;
  if ( v25 & 1 )
  {
    v25 |= 2u;
    v13 = *v5;
    LODWORD(v18) = *v5;
    v19 = HIDWORD(v13);
    v14 = *a5;
    v15 = Core::BufferedFileOperations::moveDirectory;
    v17 = *a5 >> 32;
    v16 = v14;
    if ( !v26 )
      v15 = Core::BufferedFileOperations::moveFile;
    result = v15(v7, v6, &v18, v8, (__int64 *)&v16);
    if ( v23 )
      result = v23();
  }
  else
    v10 = *(_QWORD *)&v21;
    v11 = *(_QWORD *)v7;
    *(_DWORD *)&v21 = *(_QWORD *)v7;
    v22 = HIDWORD(v11);
    *(_QWORD *)v7 = v10;
    LODWORD(v10) = v23;
    v23 = 0;
    *(_DWORD *)(v7 + 8) = v10;
    LODWORD(v10) = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v24;
    BYTE4(v10) = v9 & 3;
    v24 = v10;
    result = v9 | 3;
    LOBYTE(v10) = *(_BYTE *)(v7 + 16);
    v25 = result;
    *(_BYTE *)(v7 + 16) = v10 & 0xFC | BYTE4(v10);
  return result;
}


int __fastcall Core::FileSystemImpl::copyTimeAndAccessRights(int a1, int a2, __int64 *a3, __int64 *a4)
{
  int v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(char *, int, __int64 *, __int64 *); // r5@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // kr00_8@3
  unsigned __int64 *v9; // r0@4
  unsigned __int64 v10; // kr08_8@5
  unsigned __int64 v11; // kr10_8@7
  unsigned __int64 v12; // kr18_8@9
  unsigned __int64 *v13; // r0@11
  unsigned __int64 v14; // kr20_8@12
  unsigned __int64 *v15; // r0@13
  unsigned __int64 v16; // kr28_8@14
  unsigned __int64 *v17; // r0@15
  unsigned __int64 v18; // kr30_8@16
  unsigned __int64 *v19; // r0@17
  unsigned __int64 v20; // kr38_8@18
  unsigned __int64 v21; // kr40_8@20
  unsigned __int64 v22; // kr48_8@22
  unsigned __int64 v23; // kr50_8@24
  unsigned __int64 v24; // kr58_8@26
  __int64 v25; // r0@29
  int (*v26)(void); // r3@29
  int result; // r0@29
  char v28; // [sp+8h] [bp-48h]@28
  int (*v29)(void); // [sp+10h] [bp-40h]@1
  void (__fastcall *v30)(char *, _DWORD); // [sp+14h] [bp-3Ch]@28
  char v31; // [sp+18h] [bp-38h]@1
  int (*v32)(void); // [sp+20h] [bp-30h]@29
  int v33; // [sp+24h] [bp-2Ch]@29
  unsigned __int8 v34; // [sp+28h] [bp-28h]@1
  __int64 v35; // [sp+30h] [bp-20h]@1
  __int64 v36; // [sp+38h] [bp-18h]@1

  v4 = a2;
  v5 = a1;
  v6 = *(void (__fastcall **)(char *, int, __int64 *, __int64 *))(*(_DWORD *)a2 + 136);
  v36 = *a3;
  v35 = *a4;
  v6(&v31, a2, &v36, &v35);
  v29 = 0;
  if ( v34 & 1 )
  {
    v13 = (unsigned __int64 *)(v4 + 40);
    __dmb();
    do
      v14 = __ldrexd(v13);
    while ( __strexd(v14 + 1, v13) );
    v15 = (unsigned __int64 *)(v4 + 48);
      v16 = __ldrexd(v15);
    while ( __strexd(v16, v15) );
    v17 = (unsigned __int64 *)(v4 + 16);
      v18 = __ldrexd(v17);
    while ( __strexd(v18 + 1, v17) );
    v19 = (unsigned __int64 *)(v4 + 24);
      v20 = __ldrexd(v19);
    while ( __strexd(v20, v19) );
      v21 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v21 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v22 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v22, (unsigned __int64 *)&unk_283E5E8) );
      v23 = __ldrexd((unsigned __int64 *)&Core::FileSystemImpl::sStats);
    while ( __strexd(v23 + 1, (unsigned __int64 *)&Core::FileSystemImpl::sStats) );
      v24 = __ldrexd((unsigned __int64 *)&unk_283E5D0);
    while ( __strexd(v24, (unsigned __int64 *)&unk_283E5D0) );
    j_Core::FileStorageArea::_addReadWriteOperation(*(Core::FileStorageArea **)(v4 + 12), 1, 0LL, 0LL);
    if ( v29 )
      v30(&v28, *(_DWORD *)(v4 + 12));
  }
  else
    v7 = (unsigned __int64 *)(v4 + 56);
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
    v9 = (unsigned __int64 *)(v4 + 32);
      v10 = __ldrexd(v9);
    while ( __strexd(v10 + 1, v9) );
      v11 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v11 + 1, (unsigned __int64 *)&unk_283E5F0) );
      v12 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v12 + 1, (unsigned __int64 *)&unk_283E5D8) );
    j_Core::FileStorageArea::_addReadWriteOperation(*(Core::FileStorageArea **)(v4 + 12), 0, 0LL, 0LL);
  v25 = *(_QWORD *)&v31;
  *(_QWORD *)&v31 = *(_QWORD *)v5;
  *(_QWORD *)v5 = v25;
  LODWORD(v25) = v32;
  v32 = 0;
  *(_DWORD *)(v5 + 8) = v25;
  HIDWORD(v25) = v33;
  v33 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = HIDWORD(v25);
  HIDWORD(v25) = v34;
  v26 = v29;
  *(_BYTE *)(v5 + 16) = *(_BYTE *)(v5 + 16) & 0xFC | v34 & 3;
  result = HIDWORD(v25) | 3;
  v34 = BYTE4(v25) | 3;
  if ( v26 )
    result = v26();
    if ( v32 )
      result = v32();
  return result;
}


int (**__fastcall Core::FileSystemImpl::enumerateFiles(int a1, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r6@1
  pthread_mutex_t *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@2
  int *v6; // r6@3
  int *v7; // r7@3
  __int64 v8; // kr00_8@3
  int v9; // t1@5
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@6

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 64);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = j_pthread_mutex_lock_0(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v8 = *(_QWORD *)(v2 + 68);
  v6 = (int *)(*(_QWORD *)(v2 + 68) >> 32);
  v7 = (int *)v8;
  while ( v6 != v7 )
    if ( !*(_DWORD *)(v4 + 8) )
      sub_21E5F48();
    v9 = *v7;
    ++v7;
    (*(void (__fastcall **)(int, int))(v4 + 12))(v4, v9);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v3);
  return result;
}


int __fastcall Core::FileSystemImpl::getFileOrDirectorySize(int a1, int a2, __int64 *a3)
{
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int *); // r5@1
  int v6; // r1@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // r2@3
  unsigned __int64 *v9; // r0@4
  unsigned __int64 v10; // r2@5
  unsigned __int64 v11; // r2@7
  unsigned __int64 v12; // r2@9
  unsigned __int64 *v13; // r0@11
  unsigned __int64 v14; // r2@12
  unsigned __int64 v15; // r2@14
  __int64 v16; // r2@15
  int v17; // r1@15
  int result; // r0@15
  int v19; // [sp+0h] [bp-30h]@1
  int v20; // [sp+8h] [bp-28h]@15
  int v21; // [sp+Ch] [bp-24h]@15
  char v22; // [sp+10h] [bp-20h]@1
  __int64 v23; // [sp+18h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(void (__fastcall **)(int *))(*(_DWORD *)a2 + 112);
  v23 = *a3;
  v5(&v19);
  v6 = v22 & 1;
  if ( v22 & 1 )
  {
    v7 = (unsigned __int64 *)(v3 + 40);
    __dmb();
    do
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
    v9 = (unsigned __int64 *)(v3 + 48);
      v10 = __ldrexd(v9);
    while ( __strexd(v10, v9) );
      v11 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v11 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v12 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v12, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v13 = (unsigned __int64 *)(v3 + 56);
      v14 = __ldrexd(v13);
    while ( __strexd(v14 + 1, v13) );
      v15 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v15 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v3 + 12), v6, 0LL);
  v16 = *(_QWORD *)&v19;
  *(_QWORD *)&v19 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v16;
  *(_DWORD *)(v4 + 8) = v20;
  v20 = 0;
  v17 = v21;
  v21 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = v17;
  result = (unsigned __int8)(*(_BYTE *)(v4 + 16) & 0xFC) | v22 & 3;
  *(_BYTE *)(v4 + 16) = result;
  return result;
}


char *__fastcall Core::BufferedFileOperations::copyFile<8192ull>(int a1, int a2, __int64 *a3, int a4, __int64 *a5)
{
  int v5; // r4@1
  char *v6; // r8@1
  int v7; // r5@1
  char v8; // r0@1
  __int64 v9; // r1@2
  __int64 v10; // kr00_8@2
  __int64 v11; // r1@3
  void (*v12)(void); // r7@3
  void (*v13)(void); // r3@3
  char v14; // r0@7
  __int64 v15; // r1@8
  void (*v16)(void); // r7@8
  void (*v17)(void); // r3@8
  __int64 v18; // kr08_8@13
  void (*v19)(void); // r1@13
  int v20; // r2@13
  unsigned int v21; // r6@15
  __int64 v22; // r2@15
  unsigned int v23; // r7@16
  signed int v24; // r5@16
  void (__fastcall *v25)(int, int, signed int); // r3@18
  signed int v26; // r0@20
  signed int v27; // r1@22
  bool v28; // zf@24
  char *result; // r0@36
  unsigned __int64 v30; // [sp+0h] [bp-20B8h]@3
  __int16 v31; // [sp+18h] [bp-20A0h]@15
  char v32; // [sp+1Ch] [bp-209Ch]@1
  char v33; // [sp+20h] [bp-2098h]@8
  int v34; // [sp+24h] [bp-2094h]@8
  void (*v35)(void); // [sp+28h] [bp-2090h]@8
  int v36; // [sp+2Ch] [bp-208Ch]@8
  char v37; // [sp+30h] [bp-2088h]@8
  __int64 v38; // [sp+38h] [bp-2080h]@8
  __int64 v39; // [sp+40h] [bp-2078h]@3
  char v40; // [sp+48h] [bp-2070h]@3
  int v41; // [sp+4Ch] [bp-206Ch]@3
  void (*v42)(void); // [sp+50h] [bp-2068h]@3
  int v43; // [sp+54h] [bp-2064h]@3
  char v44; // [sp+58h] [bp-2060h]@3
  int v45; // [sp+5Ch] [bp-205Ch]@3
  __int64 v46; // [sp+60h] [bp-2058h]@1
  __int64 v47; // [sp+68h] [bp-2050h]@1
  void (*v48)(void); // [sp+70h] [bp-2048h]@2
  int v49; // [sp+74h] [bp-2044h]@2
  char v50; // [sp+78h] [bp-2040h]@1
  unsigned __int64 *v51; // [sp+80h] [bp-2038h]@1
  char v52; // [sp+84h] [bp-2034h]@17
  __int64 v53; // [sp+88h] [bp-2030h]@3
  void (*v54)(void); // [sp+90h] [bp-2028h]@3
  int v55; // [sp+94h] [bp-2024h]@3

  v5 = a1;
  v6 = &v32;
  v7 = a4;
  *(_DWORD *)&v32 = _stack_chk_guard;
  v51 = 0;
  v46 = *a3;
  j_Core::FileSystemImpl::openFile((int)&v47, a2, (int)&v51, &v46, 33);
  v8 = v50;
  if ( v50 & 1 )
  {
    v50 |= 2u;
    v45 = 0;
    v39 = *a5;
    HIDWORD(v30) = 0;
    j_Core::FileSystemImpl::openFile((int)&v40, v7, (int)&v45, &v39, 46);
    v50 = v50 & 0xFC | v44 & 3;
    LODWORD(v11) = *(_DWORD *)&v40;
    HIDWORD(v11) = v41;
    v12 = v42;
    v42 = 0;
    v53 = v47;
    v47 = v11;
    v13 = v48;
    v48 = v12;
    v54 = v13;
    v55 = v49;
    v49 = v43;
    if ( v13 )
    {
      v13();
      v44 |= 3u;
      if ( v42 )
        v42();
    }
    else
    v14 = v50;
    if ( !(v50 & 1) )
      goto LABEL_40;
    v38 = 0LL;
    j_Core::FileImpl::getSize((Core::FileImpl *)&v33, v51);
    v50 = v50 & 0xFC | v37 & 3;
    LODWORD(v15) = *(_DWORD *)&v33;
    HIDWORD(v15) = v34;
    v16 = v35;
    v35 = 0;
    v47 = v15;
    v17 = v48;
    v48 = v16;
    v54 = v17;
    v49 = v36;
    if ( v17 )
      v17();
      v37 |= 3u;
      if ( v35 )
        v35();
    if ( v50 & 1 )
      v50 |= 2u;
      if ( v38 )
      {
        v31 = v38;
        v21 = v38 >> 13;
        v22 = __PAIR__(v45, (unsigned int)v51);
        if ( v38 >> 13 )
        {
          v23 = HIDWORD(v38) >> 13;
          v24 = 1;
          while ( 1 )
          {
            LODWORD(v30) = &v53;
            j_Core::BufferedFileOperations::copyFile<8192ull>(Core::FileSystemImpl *,Core::Path,Core::FileSystemImpl *,Core::Path)::{lambda(Core::FileImpl *,Core::FileImpl *,void *,unsigned long long)#1}::operator() const(
              v5,
              (int)&v52,
              v22,
              v30,
              0x2000uLL);
            if ( !(*(_BYTE *)(v5 + 16) & 1) )
              break;
            *(_BYTE *)(v5 + 16) |= 2u;
            v25 = *(void (__fastcall **)(int, int, signed int))(v5 + 8);
            if ( v25 )
              v25(v5, v5, 3);
            v26 = 0;
            v22 = __PAIR__(v45, (unsigned int)v51);
            if ( v24 < v21 )
              v26 = 1;
            v27 = 0;
            if ( v24 >> 31 < v23 )
              v27 = 1;
            v28 = v23 == v24++ >> 31;
            if ( v28 )
              v27 = v26;
            if ( !v27 )
              goto LABEL_27;
          }
        }
        else
LABEL_27:
          LODWORD(v30) = &v53;
          j_Core::BufferedFileOperations::copyFile<8192ull>(Core::FileSystemImpl *,Core::Path,Core::FileSystemImpl *,Core::Path)::{lambda(Core::FileImpl *,Core::FileImpl *,void *,unsigned long long)#1}::operator() const(
            v5,
            (int)&v52,
            v22,
            v30,
            v31 & 0x1FFF);
        v6 = &v32;
      }
      else
        *(_DWORD *)(v5 + 8) = 0;
        *(_BYTE *)(v5 + 16) = *(_BYTE *)(v5 + 16) & 0xFC | 1;
LABEL_40:
      v18 = v47;
      v47 = *(_QWORD *)v5;
      *(_QWORD *)v5 = v18;
      v19 = v48;
      v48 = 0;
      *(_DWORD *)(v5 + 8) = v19;
      v20 = v49;
      v49 = *(_DWORD *)(v5 + 12);
      *(_DWORD *)(v5 + 12) = v20;
      *(_BYTE *)(v5 + 16) = *(_BYTE *)(v5 + 16) & 0xFC | v14 & 3;
      v50 = v14 | 3;
    if ( v45 )
      (*(void (**)(void))(*(_DWORD *)v45 + 4))();
    if ( v48 )
      v48();
  }
  else
    v9 = v47;
    v10 = *(_QWORD *)v5;
    v47 = *(_QWORD *)v5;
    *(_QWORD *)v5 = v9;
    LODWORD(v9) = v48;
    v48 = 0;
    *(_DWORD *)(v5 + 8) = v9;
    LODWORD(v9) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v5 + 12) = v49;
    v49 = v9;
    LOBYTE(v9) = *(_BYTE *)(v5 + 16);
    v50 = v8 | 3;
    *(_BYTE *)(v5 + 16) = v9 & 0xFC | v8 & 3;
  if ( v51 )
    (*(void (**)(void))(*(_DWORD *)v51 + 4))();
  result = (char *)_stack_chk_guard - *(_DWORD *)v6;
  if ( _stack_chk_guard != *(RakNet **)v6 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall Core::FileSystem::fileOrDirectoryExists(__int64 *a1)
{
  char v1; // r0@1
  int v2; // r4@1
  void *v4; // [sp+0h] [bp-38h]@1
  void (*v5)(void); // [sp+8h] [bp-30h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-2Ch]@1
  __int64 v7; // [sp+10h] [bp-28h]@1
  char v8; // [sp+1Ch] [bp-1Ch]@1
  void (*v9)(void); // [sp+24h] [bp-14h]@1
  char v10; // [sp+2Ch] [bp-Ch]@1

  v7 = *a1;
  v4 = j_operator new(1u);
  v5 = (void (*)(void))sub_1B9E37C;
  v6 = sub_1B9E352;
  j_Core::TransactionFrame::exec((int)&v8, 0, &v7, (int)&v4);
  v1 = v10;
  v10 |= 2u;
  v2 = v1 & 1;
  if ( v9 )
    v9();
  if ( v5 )
    v5();
  return v2;
}


char *__fastcall Core::PathBuffer<std::string>::getEntryExtensionWithoutDot(void **a1, __int64 *a2)
{
  void **v2; // r4@1
  int v3; // r0@1
  int v4; // r0@2
  __int64 v5; // kr00_8@2
  signed int v6; // r0@4
  void **v7; // r0@6
  char *result; // r0@9
  int v9; // [sp+0h] [bp-638h]@5
  unsigned int v10; // [sp+4h] [bp-634h]@5
  int v11; // [sp+8h] [bp-630h]@4
  int v12; // [sp+Ch] [bp-62Ch]@4
  const char *v13[3]; // [sp+10h] [bp-628h]@1
  char v14; // [sp+20h] [bp-618h]@1
  int v15; // [sp+620h] [bp-18h]@1
  RakNet *v16; // [sp+624h] [bp-14h]@1

  v2 = a1;
  v16 = _stack_chk_guard;
  *(_QWORD *)v13 = *a2;
  v3 = Core::SplitPathT<1024u,64u>::SplitPathT((int)&v14, v13);
  if ( v15 )
  {
    v5 = *(_QWORD *)(v3 + 8 * v15 + 1016);
    v4 = *(_QWORD *)(v3 + 8 * v15 + 1016) >> 32;
    if ( v4 == -1 )
      v4 = strlen((const char *)v5);
    v11 = v4;
    v12 = v5;
    v6 = Core::StringSpan::rfind((Core::StringSpan *)&v11, 46);
    if ( v6 != -1 )
    {
      Core::StringSpan::substr((Core::StringSpan *)&v9, (unsigned int)&v11, v6 + 1, v11 - (v6 + 1));
      sub_DA73F4(v2, v10, v9);
      goto LABEL_9;
    }
    v7 = &off_27775D4;
  }
  else
  *v2 = (char *)*v7 + 12;
LABEL_9:
  result = (char *)(_stack_chk_guard - v16);
  if ( _stack_chk_guard != v16 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall Core::FileStorageArea::_onDeleteFile(int a1, _QWORD *a2)
{
  int v2; // r4@1
  _QWORD *v3; // r0@1
  int (__cdecl *v4)(_DWORD); // r3@1
  int *v5; // r5@1 OVERLAPPED
  int *v6; // r6@1 OVERLAPPED
  int v7; // t1@4
  int result; // r0@4
  _QWORD *v9; // [sp+0h] [bp-20h]@1
  int (__fastcall *v10)(void **, _QWORD **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v11)(__int64 **, int); // [sp+Ch] [bp-14h]@1

  v2 = a1;
  *(_QWORD *)(&v6 - 1) = *a2;
  v3 = j_operator new(8u);
  *v3 = *(_QWORD *)(&v6 - 1);
  v4 = (int (__cdecl *)(_DWORD))sub_1B9982A;
  v9 = v3;
  v10 = sub_1B9982A;
  v11 = sub_1B9980C;
  *(_QWORD *)&v5 = *(_QWORD *)(v2 + 152);
  if ( v5 == v6 )
    goto LABEL_11;
  do
  {
    if ( !v4 )
      sub_21E5F48();
    v7 = *v5;
    ++v5;
    result = v11(&v9, v7);
    v4 = (int (__cdecl *)(_DWORD))v10;
  }
  while ( v6 != v5 );
  if ( v10 )
LABEL_11:
    result = v4(&v9);
  return result;
}


unsigned int __fastcall Core::StringSpan::find(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int *v3; // r3@1
  unsigned int v4; // r12@2
  unsigned int result; // r0@2
  unsigned int v6; // lr@4
  unsigned int v7; // r3@4
  unsigned int v8; // r4@4
  int v9; // r5@5

  v3 = a1;
  if ( a2 )
  {
    v4 = *a1;
    result = -1;
    if ( *v3 >= a2 && v4 )
    {
      v6 = v3[1];
      v7 = 0;
      v8 = v4;
      do
      {
        v9 = 0;
        while ( *(_BYTE *)(v6 + v7 + v9) == *(_BYTE *)(a3 + v9) )
        {
          if ( ++v9 >= a2 )
            return v7;
        }
        ++v7;
        result = -1;
        if ( v7 >= v4 )
          break;
        --v8;
      }
      while ( v8 >= a2 );
    }
  }
  else
    result = 0;
  return result;
}


void __fastcall Core::BasicDirectoryStorageArea<Core::FileSystem_generic>::~BasicDirectoryStorageArea(Core::FileStorageArea *a1)
{
  Core::BasicDirectoryStorageArea<Core::FileSystem_generic>::~BasicDirectoryStorageArea(a1);
}


int __fastcall Core::FileSystemImpl::_getFileOrDirectorySize(int a1, int a2, __int64 *a3, _QWORD *a4)
{
  __int64 *v4; // r7@1
  int v5; // r5@1
  int v6; // r4@1
  __int64 v7; // r0@1
  _QWORD *v8; // r8@1
  int (__fastcall *v9)(int, __int64 *); // r2@1
  int v10; // r1@1
  unsigned __int64 *v11; // r0@2
  unsigned __int64 v12; // r2@3
  unsigned __int64 *v13; // r0@4
  unsigned __int64 v14; // r2@5
  unsigned __int64 v15; // r2@7
  unsigned __int64 v16; // r2@9
  unsigned __int64 *v17; // r0@11
  unsigned __int64 v18; // r2@12
  unsigned __int64 v19; // r2@14
  unsigned __int8 v20; // r0@15
  int v21; // r6@15
  __int64 v22; // r0@18
  void (__fastcall *v23)(__int64 *, int, __int64 *, _QWORD *); // r7@18
  int v24; // r1@18
  unsigned __int64 *v25; // r0@19
  unsigned __int64 v26; // r2@20
  unsigned __int64 *v27; // r0@21
  unsigned __int64 v28; // r2@22
  unsigned __int64 v29; // r2@24
  unsigned __int64 v30; // r2@26
  _DWORD *v31; // r0@28
  int v32; // r0@30
  __int64 v33; // r1@31
  __int64 v34; // kr00_8@31
  int result; // r0@31
  unsigned __int64 *v36; // r0@32
  unsigned __int64 v37; // r2@33
  unsigned __int64 v38; // r2@35
  __int64 v39; // r2@36
  int v40; // r1@36
  int (*v41)(void); // r3@37
  _DWORD *v42; // [sp+10h] [bp-58h]@28
  void (*v43)(void); // [sp+18h] [bp-50h]@28
  int (__fastcall *v44)(int, _QWORD ***, int); // [sp+1Ch] [bp-4Ch]@28
  __int64 v45; // [sp+20h] [bp-48h]@28
  int v46; // [sp+28h] [bp-40h]@1
  int v47; // [sp+2Ch] [bp-3Ch]@1
  __int64 v48; // [sp+30h] [bp-38h]@18
  void (*v49)(void); // [sp+38h] [bp-30h]@1
  int v50; // [sp+3Ch] [bp-2Ch]@31
  unsigned __int8 v51; // [sp+40h] [bp-28h]@1
  __int64 v52; // [sp+48h] [bp-20h]@1

  v4 = a3;
  v5 = a2;
  v46 = 0;
  v47 = 0;
  v6 = a1;
  v7 = *a3;
  v8 = a4;
  v9 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v5 + 68);
  v52 = v7;
  v10 = v9(v5, &v52);
  v49 = 0;
  v51 = v10;
  if ( v10 == 1 )
  {
    v11 = (unsigned __int64 *)(v5 + 40);
    __dmb();
    do
      v12 = __ldrexd(v11);
    while ( __strexd(v12 + 1, v11) );
    v13 = (unsigned __int64 *)(v5 + 48);
      v14 = __ldrexd(v13);
    while ( __strexd(v14, v13) );
      v15 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v15 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v16 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v16, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v17 = (unsigned __int64 *)(v5 + 56);
      v18 = __ldrexd(v17);
    while ( __strexd(v18 + 1, v17) );
      v19 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v19 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v5 + 12), v10, 0LL);
  v20 = v51;
  v51 |= 2u;
  v21 = v20 & 1;
  if ( v49 )
    v49();
  if ( v21 )
    v45 = *v4;
    v31 = j_operator new(4u);
    *v31 = &v46;
    v42 = v31;
    v43 = (void (*)(void))sub_1BA3C7A;
    v44 = sub_1BA3C50;
    j_Core::FileSystemImpl::iterateOverDirectory((int)&v48, v5, &v45, (int)&v46, 648, 0, (int)&v42);
    if ( v43 )
      v43();
    v32 = v51;
    if ( v51 & 1 )
    {
      v51 |= 2u;
      *v8 = *(_QWORD *)&v46;
      *(_DWORD *)(v6 + 8) = 0;
      v41 = (int (*)(void))v49;
      result = (unsigned __int8)(*(_BYTE *)(v6 + 16) & 0xFC) | 1;
      *(_BYTE *)(v6 + 16) = result;
      if ( v41 )
        result = v41();
    }
    else
      v33 = v48;
      v34 = *(_QWORD *)v6;
      v48 = *(_QWORD *)v6;
      *(_QWORD *)v6 = v33;
      LODWORD(v33) = v49;
      v49 = 0;
      *(_DWORD *)(v6 + 8) = v33;
      LODWORD(v33) = *(_DWORD *)(v6 + 12);
      *(_DWORD *)(v6 + 12) = v50;
      BYTE4(v33) = v32 & 3;
      v50 = v33;
      result = v32 | 3;
      LOBYTE(v33) = *(_BYTE *)(v6 + 16);
      v51 = result;
      *(_BYTE *)(v6 + 16) = v33 & 0xFC | BYTE4(v33);
    v22 = *v4;
    v23 = *(void (__fastcall **)(__int64 *, int, __int64 *, _QWORD *))(*(_DWORD *)v5 + 36);
    v52 = v22;
    v23(&v48, v5, &v52, v8);
    v24 = v51 & 1;
      v25 = (unsigned __int64 *)(v5 + 40);
      __dmb();
      do
        v26 = __ldrexd(v25);
      while ( __strexd(v26 + 1, v25) );
      v27 = (unsigned __int64 *)(v5 + 48);
        v28 = __ldrexd(v27);
      while ( __strexd(v28, v27) );
        v29 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
      while ( __strexd(v29 + 1, (unsigned __int64 *)&unk_283E5E0) );
        v30 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
      while ( __strexd(v30, (unsigned __int64 *)&unk_283E5E8) );
      v36 = (unsigned __int64 *)(v5 + 56);
        v37 = __ldrexd(v36);
      while ( __strexd(v37 + 1, v36) );
        v38 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
      while ( __strexd(v38 + 1, (unsigned __int64 *)&unk_283E5F0) );
    j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v5 + 12), v24, 0LL);
    v39 = v48;
    v48 = *(_QWORD *)v6;
    *(_QWORD *)v6 = v39;
    *(_DWORD *)(v6 + 8) = v49;
    v49 = 0;
    v40 = v50;
    v50 = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v6 + 12) = v40;
    result = (unsigned __int8)(*(_BYTE *)(v6 + 16) & 0xFC) | v51 & 3;
    *(_BYTE *)(v6 + 16) = result;
  return result;
}


int __fastcall Core::FileSystem_generic::_getEntryType(int a1, int a2, const char **a3, signed int *a4)
{
  int v4; // r4@1
  signed int *v5; // r5@1
  _DWORD *v6; // r0@3
  __int64 v7; // r1@3
  int result; // r0@3
  int v9; // r0@4
  signed int v10; // r1@6
  int v11; // [sp+0h] [bp-78h]@1
  int v12; // [sp+10h] [bp-68h]@4

  v4 = a1;
  v5 = a4;
  if ( !j_stat(*a3, (struct stat *)&v11) )
  {
    v9 = v12 & 0xF000;
    if ( v9 == 0x8000 )
    {
      *v5 = 0;
    }
    else
      v10 = 2;
      if ( v9 == 0x4000 )
        v10 = 1;
      *v5 = v10;
      if ( v9 != 0x4000 )
        goto LABEL_3;
    *(_DWORD *)(v4 + 8) = 0;
    result = (unsigned __int8)(*(_BYTE *)(v4 + 16) & 0xFC) | 1;
    goto LABEL_10;
  }
  *v5 = 2;
LABEL_3:
  v6 = j_operator new(4u);
  *(_DWORD *)v4 = v6;
  HIDWORD(v7) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
  LODWORD(v7) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
  *v6 = "Entry not found.";
  *(_QWORD *)(v4 + 8) = v7;
  result = *(_BYTE *)(v4 + 16) & 0xFC;
LABEL_10:
  *(_BYTE *)(v4 + 16) = result;
  return result;
}


void __fastcall Core::Result::makeFailure(int a1, int *a2)
{
  Core::Result::makeFailure(a1, a2);
}


void __fastcall Core::File_c::~File_c(Core::File_c *this)
{
  Core::File_c *v1; // r4@1
  int v2; // r1@4
  void *v3; // r0@4
  unsigned int *v4; // r12@6
  signed int v5; // r1@8
  int v6; // [sp+0h] [bp-20h]@2
  void (*v7)(void); // [sp+8h] [bp-18h]@2
  char v8; // [sp+10h] [bp-10h]@2

  v1 = this;
  *(_DWORD *)this = &off_2762F8C;
  if ( j_Core::FileImpl::isOpen(this) == 1 )
  {
    j_Core::FileImpl::close((Core::FileImpl *)&v6, (int)v1);
    v8 |= 2u;
    if ( v7 )
      v7();
  }
  v2 = *((_DWORD *)v1 + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  j_Core::FileImpl::~FileImpl(v1);
  j_operator delete((void *)v1);
}


  if ( Core::FileSystem::fileExists(&v19) == 1 )
{
    v4 = *(int (__fastcall **)(int, __int64 *, int *))(*(_DWORD *)v3 + 8);
    sub_21E94B4((void **)&v18, "rb");
    v5 = v4(v3, v1, &v18);
    v6 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = 0;
    if ( v5 )
      v17 = 0;
      v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 24))(v3);
      v9 = 1;
      (*(void (__cdecl **)(int))(*(_DWORD *)v8 + 8))(v8);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v3 + 12))(v3, v5);
      if ( v17 != 67324752 )
        v7 = 1;
      if ( v7 )
        v16 = (char *)&unk_28898CC;
        v9 = 3;
        if ( isEncryptedZip(v1, (int *)&v16) )
          v9 = 2;
        v10 = v16 - 12;
        if ( (int *)(v16 - 12) != &dword_28898C0 )
        {
          v14 = (unsigned int *)(v16 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
          }
          else
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        }
      v7 = v9;
  }
  else
  {
  return v7;
}


void __fastcall Core::FileSystemImpl::_isValidPath(int a1, int a2, int a3)
{
  Core::FileSystemImpl::_isValidPath(a1, a2, a3);
}


int __fastcall Core::FileSystemImpl::FileSystemImpl(__int64 a1, int a2)
{
  int v2; // r4@1

  v2 = a1;
  LODWORD(a1) = &off_2726840;
  *(_QWORD *)v2 = a1;
  *(_BYTE *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = a2;
  j___aeabi_memclr8_0(v2 + 16, 48);
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 68) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 76) = 0;
  j_Core::FileStorageArea::_beginTransaction(*(Core::FileStorageArea **)(v2 + 12), (Core::FileSystemImpl *)v2, 0);
  return v2;
}


int __fastcall Core::FileSystem_generic::_getFileSize(int a1, int a2, const char **a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  _DWORD *v7; // r0@2
  __int64 v8; // r1@2
  int result; // r0@2
  int v10; // [sp+0h] [bp-78h]@1
  __int64 v11; // [sp+30h] [bp-48h]@3

  v4 = a1;
  v5 = a4;
  v6 = j_stat(*a3, (struct stat *)&v10);
  if ( v6 )
  {
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0;
    v7 = j_operator new(8u);
    HIDWORD(v8) = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v8) = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
    *v7 = "stat() failed";
    v7[1] = v6;
    *(_DWORD *)v4 = v7;
    *(_QWORD *)(v4 + 8) = v8;
    result = *(_BYTE *)(v4 + 16) & 0xFC;
  }
  else
    *(_QWORD *)v5 = v11;
    *(_DWORD *)(v4 + 8) = 0;
    result = (unsigned __int8)(*(_BYTE *)(v4 + 16) & 0xFC) | 1;
  *(_BYTE *)(v4 + 16) = result;
  return result;
}


RakNet *__fastcall Core::FileSystem::getFileSize(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  _DWORD *v5; // r0@1
  __int64 v6; // r1@1
  RakNet *result; // r0@1
  _DWORD *v8; // [sp+0h] [bp-28h]@1
  __int64 v9; // [sp+8h] [bp-20h]@1
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a1;
  v10 = *a2;
  v4 = a3;
  v5 = j_operator new(4u);
  HIDWORD(v6) = sub_1B9D6E8;
  *v5 = v4;
  v8 = v5;
  LODWORD(v6) = sub_1B9D706;
  v9 = v6;
  result = j_Core::TransactionFrame::exec(v3, 0, &v10, (int)&v8);
  if ( (_DWORD)v9 )
    result = (RakNet *)((int (__cdecl *)(_DWORD **))v9)(&v8);
  return result;
}


char *__fastcall Core::PathBuffer<std::string>::getEntryNameWithoutExtension(void **a1, __int64 *a2)
{
  void **v2; // r4@1
  int v3; // r0@1
  int v4; // r0@2
  __int64 v5; // kr00_8@2
  signed int v6; // r0@4
  char *result; // r0@6
  int v8; // [sp+0h] [bp-638h]@4
  unsigned int v9; // [sp+4h] [bp-634h]@4
  int v10; // [sp+8h] [bp-630h]@4
  int v11; // [sp+Ch] [bp-62Ch]@4
  const char *v12[3]; // [sp+10h] [bp-628h]@1
  char v13; // [sp+20h] [bp-618h]@1
  int v14; // [sp+620h] [bp-18h]@1
  RakNet *v15; // [sp+624h] [bp-14h]@1

  v2 = a1;
  v15 = _stack_chk_guard;
  *(_QWORD *)v12 = *a2;
  v3 = Core::SplitPathT<1024u,64u>::SplitPathT((int)&v13, v12);
  if ( v14 )
  {
    v5 = *(_QWORD *)(v3 + 8 * v14 + 1016);
    v4 = *(_QWORD *)(v3 + 8 * v14 + 1016) >> 32;
    if ( v4 == -1 )
      v4 = strlen((const char *)v5);
    v10 = v4;
    v11 = v5;
    v6 = Core::StringSpan::rfind((Core::StringSpan *)&v10, 46);
    Core::StringSpan::substr((Core::StringSpan *)&v8, (unsigned int)&v10, 0, v6);
    sub_DA73F4(v2, v9, v8);
  }
  else
    *v2 = &unk_28898CC;
  result = (char *)(_stack_chk_guard - v15);
  if ( _stack_chk_guard != v15 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall Core::FileSystemImpl::directoryExists(int a1, __int64 *a2)
{
  int v2; // r4@1
  int (*v3)(void); // r3@1
  int v4; // r12@1
  unsigned __int64 *v5; // r0@2
  unsigned __int64 v6; // r2@3
  unsigned __int64 *v7; // r0@4
  unsigned __int64 v8; // kr08_8@5
  unsigned __int64 v9; // kr10_8@7
  unsigned __int64 v10; // kr18_8@9
  unsigned __int64 *v11; // r0@11
  unsigned __int64 v12; // kr20_8@12
  unsigned __int64 v13; // kr28_8@14
  char v14; // r0@15
  int v15; // r4@15
  void (*v17)(void); // [sp+Ch] [bp-1Ch]@1
  char v18; // [sp+14h] [bp-14h]@1
  __int64 v19; // [sp+18h] [bp-10h]@1

  v2 = a1;
  v3 = *(int (**)(void))(*(_DWORD *)a1 + 68);
  v19 = *a2;
  v4 = v3();
  v17 = 0;
  v18 = v4;
  if ( v4 == 1 )
  {
    v5 = (unsigned __int64 *)(v2 + 40);
    __dmb();
    do
      v6 = __ldrexd(v5);
    while ( __strexd(v6 + 1, v5) );
    v7 = (unsigned __int64 *)(v2 + 48);
      v8 = __ldrexd(v7);
    while ( __strexd(v8, v7) );
      v9 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v9 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v10 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v10, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v11 = (unsigned __int64 *)(v2 + 56);
      v12 = __ldrexd(v11);
    while ( __strexd(v12 + 1, v11) );
      v13 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v13 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v2 + 12), v4, 0LL);
  v14 = v18;
  v18 |= 2u;
  v15 = v14 & 1;
  if ( v17 )
    v17();
  return v15;
}


int __fastcall Core::FileSystem_generic::_openFile(int a1, Core::FileSystemImpl *a2, int *a3, __int64 *a4, char a5, int a6)
{
  int *v6; // r5@1
  int v7; // r4@1
  char v8; // r0@1
  __int64 v9; // r1@2
  int v10; // r1@3
  int v11; // r0@3
  void (*v12)(void); // r3@5
  int result; // r0@7
  __int64 v14; // [sp+8h] [bp-38h]@1
  __int64 v15; // [sp+10h] [bp-30h]@1
  void (*v16)(void); // [sp+18h] [bp-28h]@2
  int v17; // [sp+1Ch] [bp-24h]@2
  char v18; // [sp+20h] [bp-20h]@1
  int v19; // [sp+28h] [bp-18h]@1

  v6 = a3;
  v7 = a1;
  v19 = 0;
  v14 = *a4;
  j_Core::File_c::_open((int)&v15, (Core::FileImpl **)&v19, a2, (const char **)&v14, a5, a6);
  v8 = v18;
  if ( v18 & 1 )
  {
    v10 = v19;
    v18 |= 2u;
    v19 = 0;
    v11 = *v6;
    *v6 = v10;
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v12 = v16;
    *(_DWORD *)(v7 + 8) = 0;
    *(_BYTE *)(v7 + 16) = *(_BYTE *)(v7 + 16) & 0xFC | 1;
    if ( v12 )
      v12();
  }
  else
    v9 = v15;
    v15 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v9;
    LODWORD(v9) = v16;
    v16 = 0;
    *(_DWORD *)(v7 + 8) = v9;
    LODWORD(v9) = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v17;
    v17 = v9;
    LOBYTE(v9) = *(_BYTE *)(v7 + 16);
    v18 = v8 | 3;
    *(_BYTE *)(v7 + 16) = v9 & 0xFC | v8 & 3;
  result = v19;
  if ( v19 )
    result = (*(int (**)(void))(*(_DWORD *)v19 + 4))();
  return result;
}


int __fastcall Core::FileSystemImpl::_createOneDirectoryIfNotExisting(int a1, int a2, __int64 *a3)
{
  __int64 *v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  __int64 v6; // r0@1
  int (__fastcall *v7)(int, __int64 *); // r2@1
  int v8; // r1@1
  unsigned __int64 *v9; // r0@2
  unsigned __int64 v10; // r2@3
  unsigned __int64 *v11; // r0@4
  unsigned __int64 v12; // r2@5
  unsigned __int64 v13; // r2@7
  unsigned __int64 v14; // r2@9
  unsigned __int64 *v15; // r0@11
  unsigned __int64 v16; // r2@12
  unsigned __int64 v17; // r2@14
  char v18; // r0@15
  int v19; // r7@15
  int result; // r0@18
  _DWORD *v21; // r0@19
  __int64 v22; // r1@19
  __int64 v23; // [sp+0h] [bp-40h]@18
  void (*v24)(void); // [sp+14h] [bp-2Ch]@1
  char v25; // [sp+1Ch] [bp-24h]@1
  __int64 v26; // [sp+20h] [bp-20h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *a3;
  v7 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v4 + 68);
  v26 = v6;
  v8 = v7(v4, &v26);
  v24 = 0;
  v25 = v8;
  if ( v8 == 1 )
  {
    v9 = (unsigned __int64 *)(v4 + 40);
    __dmb();
    do
      v10 = __ldrexd(v9);
    while ( __strexd(v10 + 1, v9) );
    v11 = (unsigned __int64 *)(v4 + 48);
      v12 = __ldrexd(v11);
    while ( __strexd(v12, v11) );
      v13 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v13 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v14 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v14, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v15 = (unsigned __int64 *)(v4 + 56);
      v16 = __ldrexd(v15);
    while ( __strexd(v16 + 1, v15) );
      v17 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v17 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v4 + 12), v8, 0LL);
  v18 = v25;
  v25 |= 2u;
  v19 = v18 & 1;
  if ( v24 )
    v24();
  if ( v19 )
    v21 = j_operator new(4u);
    *(_DWORD *)v5 = v21;
    HIDWORD(v22) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v22) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    *v21 = "Directory already exists.";
    *(_QWORD *)(v5 + 8) = v22;
    result = *(_BYTE *)(v5 + 16) & 0xFC;
    *(_BYTE *)(v5 + 16) = result;
    v23 = *v3;
    result = j_Core::FileSystemImpl::createOneDirectory(v5, v4, &v23);
  return result;
}


char *__fastcall Core::PathBuffer<std::string>::_join<Core::PathPart>(const void **a1, unsigned int a2, unsigned int a3)
{
  const void **v3; // r4@1
  unsigned int v4; // r9@1
  unsigned int v5; // r11@1
  char *result; // r0@1
  int v7; // r7@2
  unsigned int v8; // r10@2
  char *v9; // r5@3
  _DWORD *v10; // r0@7
  int v11; // r1@7 OVERLAPPED
  int v12; // r6@7
  unsigned int v13; // r2@7
  _DWORD *v14; // r0@10
  char v15; // r0@12
  int v16; // r6@14
  char *v17; // r1@17
  bool v18; // zf@18
  char *v19; // r1@24
  int v20; // r8@25
  bool v21; // zf@25
  _DWORD *v22; // r0@30
  int v23; // r1@30 OVERLAPPED
  int v24; // r7@30
  unsigned int v25; // r2@30
  _DWORD *v26; // r1@33
  signed int v27; // r7@35
  int *v28; // r11@36
  _DWORD *v29; // r0@37
  int v30; // r1@37 OVERLAPPED
  char v31; // r9@37
  int v32; // r8@37
  unsigned int v33; // r2@37
  _DWORD *v34; // r0@40
  unsigned __int64 v35; // [sp+4h] [bp-44h]@35
  int v36; // [sp+10h] [bp-38h]@14
  char *v37; // [sp+18h] [bp-30h]@17
  int v38; // [sp+1Ch] [bp-2Ch]@35

  v3 = a1;
  v4 = a3;
  v5 = a2;
  result = (char *)&unk_28898CC;
  *v3 = &unk_28898CC;
  if ( a3 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      result = (char *)(v5 + 8 * v8);
      v9 = (char *)*((_DWORD *)result + 1);
      if ( v9 == (char *)-1 )
      {
        result = (char *)strlen(*(const char **)(v5 + 8 * v8));
        v9 = result;
      }
      if ( v9 )
        if ( v7 )
        {
          v10 = *v3;
          *(_QWORD *)&v11 = *(_QWORD *)((char *)*v3 - 12);
          v12 = v11 + 1;
          if ( v11 + 1 > v13 || *(v10 - 1) >= 1 )
          {
            sub_DA7404(v3, v11 + 1);
            v10 = *v3;
            v11 = *((_DWORD *)*v3 - 3);
          }
          *((_BYTE *)v10 + v11) = 47;
          v14 = *v3;
          if ( (int *)((char *)*v3 - 12) != &dword_28898C0 )
            *(v14 - 1) = 0;
            *(v14 - 3) = v12;
            *((_BYTE *)v14 + v12) = byte_26C67B8[0];
          v15 = 1;
        }
        else
          v15 = 0;
        v16 = *(_DWORD *)(v5 + 8 * v8);
        v36 = v7 + 1;
        while ( !(v15 & 1) )
          result = (char *)j_utf8proc_iterate(v16, (int)v9, (int *)&v37);
          v19 = result;
          if ( (signed int)result < 1 )
            goto LABEL_44;
          result = v37;
          v20 = v9 - v19;
          v16 += (int)v19;
          v21 = v37 == (char *)92;
          if ( v37 != (char *)92 )
            v21 = v37 == (char *)47;
          if ( v21 )
            if ( v9 == v19 )
              goto LABEL_44;
            v22 = *v3;
            *(_QWORD *)&v23 = *(_QWORD *)((char *)*v3 - 12);
            v24 = v23 + 1;
            if ( v23 + 1 > v25 || *(v22 - 1) >= 1 )
            {
              sub_DA7404(v3, v23 + 1);
              v22 = *v3;
              v23 = *((_DWORD *)*v3 - 3);
            }
            *((_BYTE *)v22 + v23) = 47;
            v15 = 1;
            v9 = (char *)v20;
            v26 = *v3;
            if ( (int *)((char *)*v3 - 12) != &dword_28898C0 )
              v9 = (char *)v20;
              *(v26 - 1) = 0;
              *(v26 - 3) = v24;
              *((_BYTE *)v26 + v24) = byte_26C67B8[0];
              v15 = 1;
          else
            v9 -= (signed int)v19;
LABEL_35:
            v38 = 0;
            v27 = j_utf8proc_encode_char((unsigned int)result, (int)&v38);
            v35 = __PAIR__(v4, v5);
            if ( v27 >= 1 )
              v28 = &v38;
              do
              {
                v29 = *v3;
                *(_QWORD *)&v30 = *(_QWORD *)((char *)*v3 - 12);
                v31 = *(_BYTE *)v28;
                v32 = v30 + 1;
                if ( v30 + 1 > v33 || *(v29 - 1) >= 1 )
                {
                  sub_DA7404(v3, v30 + 1);
                  v29 = *v3;
                  v30 = *((_DWORD *)*v3 - 3);
                }
                *((_BYTE *)v29 + v30) = v31;
                v34 = *v3;
                if ( (int *)((char *)*v3 - 12) != &dword_28898C0 )
                  *(v34 - 1) = 0;
                  *(v34 - 3) = v32;
                  *((_BYTE *)v34 + v32) = byte_26C67B8[0];
                v28 = (int *)((char *)v28 + 1);
                --v27;
              }
              while ( v27 );
            v15 = 0;
            v4 = HIDWORD(v35);
            v5 = v35;
        do
          v17 = result;
            break;
          v16 += (int)v17;
          v18 = v37 == (char *)92;
            v18 = v37 == (char *)47;
          if ( !v18 )
            v9 -= (signed int)v17;
            goto LABEL_35;
          v9 -= (signed int)v17;
        while ( v9 );
LABEL_44:
        v7 = v36;
      ++v8;
    }
    while ( v8 < v4 );
  }
  return result;
}


int __fastcall Core::FileSystemImpl::openFile(int a1, int a2, int a3, __int64 *a4, char a5)
{
  int v5; // r9@1
  int v6; // r10@1
  __int64 *v7; // r7@1
  void (__fastcall *v8)(char *, int, int, __int64 *); // r6@1
  int v9; // r1@2
  unsigned __int64 *v10; // r0@3
  unsigned __int64 v11; // r2@4
  unsigned __int64 *v12; // r0@5
  unsigned __int64 v13; // r2@6
  unsigned __int64 v14; // r2@8
  unsigned __int64 v15; // r2@10
  __int64 v16; // kr00_8@12
  _QWORD *v17; // r0@13
  int (__fastcall *v18)(void **, _QWORD **, int); // r7@13
  unsigned __int64 *v19; // r0@14
  unsigned __int64 v20; // kr08_8@15
  unsigned __int64 v21; // kr10_8@17
  __int64 v22; // r0@20
  int *v23; // r4@20
  int result; // r0@20
  unsigned __int64 *v25; // r0@22
  unsigned __int64 v26; // r2@23
  unsigned __int64 v27; // r2@25
  __int64 v28; // r2@26
  int v29; // r0@26
  int v30; // r1@26
  int v31; // r1@26
  _QWORD *v32; // r0@27
  __int64 v33; // r1@27
  unsigned __int64 *v34; // r0@28
  unsigned __int64 v35; // kr18_8@29
  unsigned __int64 *v36; // r0@30
  unsigned __int64 v37; // kr20_8@31
  unsigned __int64 v38; // kr28_8@33
  unsigned __int64 v39; // kr30_8@35
  unsigned __int64 *v40; // r0@37
  unsigned __int64 v41; // kr38_8@38
  unsigned __int64 *v42; // r0@39
  unsigned __int64 v43; // kr40_8@40
  unsigned __int64 *v44; // r0@41
  unsigned __int64 v45; // kr48_8@42
  unsigned __int64 *v46; // r0@43
  unsigned __int64 v47; // kr50_8@44
  unsigned __int64 v48; // kr58_8@46
  unsigned __int64 v49; // kr60_8@48
  unsigned __int64 v50; // kr68_8@50
  unsigned __int64 v51; // kr70_8@52
  __int64 v52; // r0@55
  int (*v53)(void); // r3@55
  _QWORD *v54; // [sp+8h] [bp-60h]@13
  int (__fastcall *v55)(void **, _QWORD **, int); // [sp+10h] [bp-58h]@13
  int (__fastcall *v56)(__int64 **, int); // [sp+14h] [bp-54h]@13
  _QWORD *v57; // [sp+18h] [bp-50h]@27
  __int64 v58; // [sp+20h] [bp-48h]@27
  char v59; // [sp+28h] [bp-40h]@1
  int v60; // [sp+30h] [bp-38h]@20
  int v61; // [sp+34h] [bp-34h]@20
  unsigned __int8 v62; // [sp+38h] [bp-30h]@2
  __int64 v63; // [sp+40h] [bp-28h]@1

  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = *(void (__fastcall **)(char *, int, int, __int64 *))(*(_DWORD *)a2 + 24);
  v63 = *a4;
  v8(&v59, a2, a3, &v63);
  if ( a5 & 2 )
  {
    v16 = *v7;
    if ( a5 & 1 )
    {
      v32 = j_operator new(8u);
      HIDWORD(v33) = sub_1BA34AC;
      *v32 = v16;
      LODWORD(v33) = sub_1BA34C8;
      v57 = v32;
      v58 = v33;
      if ( v62 & 1 )
      {
        v40 = (unsigned __int64 *)(v5 + 40);
        __dmb();
        do
          v41 = __ldrexd(v40);
        while ( __strexd(v41 + 1, v40) );
        v42 = (unsigned __int64 *)(v5 + 48);
          v43 = __ldrexd(v42);
        while ( __strexd(v43, v42) );
        v44 = (unsigned __int64 *)(v5 + 16);
          v45 = __ldrexd(v44);
        while ( __strexd(v45 + 1, v44) );
        v46 = (unsigned __int64 *)(v5 + 24);
          v47 = __ldrexd(v46);
        while ( __strexd(v47, v46) );
          v48 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
        while ( __strexd(v48 + 1, (unsigned __int64 *)&unk_283E5E0) );
          v49 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
        while ( __strexd(v49, (unsigned __int64 *)&unk_283E5E8) );
          v50 = __ldrexd((unsigned __int64 *)&Core::FileSystemImpl::sStats);
        while ( __strexd(v50 + 1, (unsigned __int64 *)&Core::FileSystemImpl::sStats) );
          v51 = __ldrexd((unsigned __int64 *)&unk_283E5D0);
        while ( __strexd(v51, (unsigned __int64 *)&unk_283E5D0) );
        j_Core::FileStorageArea::_addReadWriteOperation(*(Core::FileStorageArea **)(v5 + 12), 1, 0LL, 0LL);
        if ( (_DWORD)v58 )
          ((void (__fastcall *)(_DWORD, _DWORD))HIDWORD(v58))(&v57, *(_DWORD *)(v5 + 12));
      }
      else
        v34 = (unsigned __int64 *)(v5 + 56);
          v35 = __ldrexd(v34);
        while ( __strexd(v35 + 1, v34) );
        v36 = (unsigned __int64 *)(v5 + 32);
          v37 = __ldrexd(v36);
        while ( __strexd(v37 + 1, v36) );
          v38 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
        while ( __strexd(v38 + 1, (unsigned __int64 *)&unk_283E5F0) );
          v39 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
        while ( __strexd(v39 + 1, (unsigned __int64 *)&unk_283E5D8) );
        j_Core::FileStorageArea::_addReadWriteOperation(*(Core::FileStorageArea **)(v5 + 12), 0, 0LL, 0LL);
      v52 = *(_QWORD *)&v59;
      v23 = &v60;
      *(_QWORD *)&v59 = *(_QWORD *)v6;
      *(_QWORD *)v6 = v52;
      LODWORD(v52) = v60;
      v60 = 0;
      *(_DWORD *)(v6 + 8) = v52;
      HIDWORD(v52) = v61;
      v61 = *(_DWORD *)(v6 + 12);
      *(_DWORD *)(v6 + 12) = HIDWORD(v52);
      HIDWORD(v52) = v62;
      v53 = (int (*)(void))v58;
      *(_BYTE *)(v6 + 16) = *(_BYTE *)(v6 + 16) & 0xFC | v62 & 3;
      result = HIDWORD(v52) | 3;
      v62 = BYTE4(v52) | 3;
      if ( v53 )
        result = v53();
    }
    else
      v17 = j_operator new(8u);
      *v17 = v16;
      v18 = sub_1BA34C8;
      v54 = v17;
      v55 = sub_1BA34C8;
      v56 = sub_1BA34AC;
        v19 = (unsigned __int64 *)(v5 + 32);
          v20 = __ldrexd(v19);
        while ( __strexd(v20 + 1, v19) );
          v21 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
        while ( __strexd(v21 + 1, (unsigned __int64 *)&unk_283E5D8) );
        v18 = 0;
        j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v5 + 12), 0, 0LL);
        if ( v55 )
        {
          v56(&v54, *(_DWORD *)(v5 + 12));
          v18 = v55;
        }
      v22 = *(_QWORD *)&v59;
      *(_QWORD *)v6 = v22;
      LODWORD(v22) = v60;
      *(_DWORD *)(v6 + 8) = v22;
      HIDWORD(v22) = v61;
      *(_DWORD *)(v6 + 12) = HIDWORD(v22);
      HIDWORD(v22) = v62;
      result = HIDWORD(v22) | 3;
      v62 = BYTE4(v22) | 3;
      if ( v18 )
        result = ((int (__cdecl *)(_QWORD **, _QWORD **, signed int))v18)(&v54, &v54, 3);
  }
  else
    v9 = v62 & 1;
    if ( v62 & 1 )
      v10 = (unsigned __int64 *)(v5 + 40);
      __dmb();
      do
        v11 = __ldrexd(v10);
      while ( __strexd(v11 + 1, v10) );
      v12 = (unsigned __int64 *)(v5 + 48);
        v13 = __ldrexd(v12);
      while ( __strexd(v13, v12) );
        v14 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
      while ( __strexd(v14 + 1, (unsigned __int64 *)&unk_283E5E0) );
        v15 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
      while ( __strexd(v15, (unsigned __int64 *)&unk_283E5E8) );
      v25 = (unsigned __int64 *)(v5 + 56);
        v26 = __ldrexd(v25);
      while ( __strexd(v26 + 1, v25) );
        v27 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
      while ( __strexd(v27 + 1, (unsigned __int64 *)&unk_283E5F0) );
    __dmb();
    j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v5 + 12), v9, 0LL);
    v28 = *(_QWORD *)&v59;
    *(_QWORD *)&v59 = *(_QWORD *)v6;
    *(_QWORD *)v6 = v28;
    v29 = v60;
    v60 = 0;
    v23 = &v60;
    *(_DWORD *)(v6 + 8) = v29;
    v30 = v61;
    v61 = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v6 + 12) = v30;
    v31 = v62;
    *(_BYTE *)(v6 + 16) = *(_BYTE *)(v6 + 16) & 0xFC | v62 & 3;
    result = v31 | 3;
    v62 = v31 | 3;
  if ( *v23 )
    result = ((int (__cdecl *)(char *, char *, signed int))*v23)(&v59, &v59, 3);
  return result;
}


int __fastcall Core::FileSystemImpl::fileOrDirectoryExists(int a1, __int64 *a2)
{
  int v2; // r4@1
  int (*v3)(void); // r3@1
  int v4; // r12@1
  unsigned __int64 *v5; // r0@2
  unsigned __int64 v6; // r2@3
  unsigned __int64 *v7; // r0@4
  unsigned __int64 v8; // kr08_8@5
  unsigned __int64 v9; // kr10_8@7
  unsigned __int64 v10; // kr18_8@9
  unsigned __int64 *v11; // r0@11
  unsigned __int64 v12; // kr20_8@12
  unsigned __int64 v13; // kr28_8@14
  char v14; // r0@15
  int v15; // r4@15
  void (*v17)(void); // [sp+Ch] [bp-1Ch]@1
  char v18; // [sp+14h] [bp-14h]@1
  __int64 v19; // [sp+18h] [bp-10h]@1

  v2 = a1;
  v3 = *(int (**)(void))(*(_DWORD *)a1 + 104);
  v19 = *a2;
  v4 = v3();
  v17 = 0;
  v18 = v4;
  if ( v4 == 1 )
  {
    v5 = (unsigned __int64 *)(v2 + 40);
    __dmb();
    do
      v6 = __ldrexd(v5);
    while ( __strexd(v6 + 1, v5) );
    v7 = (unsigned __int64 *)(v2 + 48);
      v8 = __ldrexd(v7);
    while ( __strexd(v8, v7) );
      v9 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v9 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v10 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v10, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v11 = (unsigned __int64 *)(v2 + 56);
      v12 = __ldrexd(v11);
    while ( __strexd(v12 + 1, v11) );
      v13 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v13 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v2 + 12), v4, 0LL);
  v14 = v18;
  v18 |= 2u;
  v15 = v14 & 1;
  if ( v17 )
    v17();
  return v15;
}


unsigned int __fastcall Core::StringSpan::find(Core::StringSpan *this, const char *a2, unsigned int a3)
{
  Core::StringSpan *v3; // r3@1
  unsigned int v4; // r12@2
  unsigned int result; // r0@2
  int v6; // lr@4
  unsigned int v7; // r3@4
  unsigned int v8; // r4@4
  int v9; // r5@5

  v3 = this;
  if ( a3 )
  {
    v4 = *(_DWORD *)this;
    result = -1;
    if ( *(_DWORD *)v3 >= a3 && v4 )
    {
      v6 = *((_DWORD *)v3 + 1);
      v7 = 0;
      v8 = v4;
      do
      {
        v9 = 0;
        while ( *(_BYTE *)(v6 + v7 + v9) == a2[v9] )
        {
          if ( ++v9 >= a3 )
            return v7;
        }
        --v8;
        result = -1;
        if ( v8 < a3 )
          break;
        ++v7;
      }
      while ( v7 < v4 );
    }
  }
  else
    result = 0;
  return result;
}


int __fastcall Core::FileImpl::readAtPosition(Core::FileImpl *this, int a2, unsigned __int64 a3, void *a4, int a5, unsigned __int64 a6, unsigned __int64 *a7)
{
  int v7; // r5@1
  Core::FileImpl *v8; // r4@1
  int result; // r0@1
  __int64 v10; // r1@1
  char v11; // [sp+14h] [bp+0h]@1
  int (__cdecl *v12)(char *); // [sp+1Ch] [bp+8h]@1

  v7 = a2;
  v8 = this;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a2 + 32))(&v11);
  result = j_Core::FileSystemImpl::_readOperation(*(_DWORD *)(v7 + 8), (int)&v11, *a7);
  v10 = *(_QWORD *)result;
  *(_QWORD *)result = *(_QWORD *)v8;
  *(_QWORD *)v8 = v10;
  LODWORD(v10) = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = 0;
  *((_DWORD *)v8 + 2) = v10;
  LODWORD(v10) = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = *((_DWORD *)v8 + 3);
  *((_DWORD *)v8 + 3) = v10;
  LOBYTE(v10) = *(_BYTE *)(result + 16);
  *((_BYTE *)v8 + 16) = *((_BYTE *)v8 + 16) & 0xFC | v10 & 3;
  *(_BYTE *)(result + 16) = v10 | 3;
  if ( v12 )
    result = v12(&v11);
  return result;
}


int (**__fastcall Core::FileStorageArea::addObserver(int a1, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r6@1
  pthread_mutex_t *v3; // r8@1
  int v4; // r5@1
  int v5; // r0@2
  __int64 v6; // r0@3
  void *v7; // r9@5
  unsigned int v8; // r2@5
  unsigned int v9; // r1@7
  unsigned int v10; // r7@7
  char *v11; // r4@13
  char *v12; // r11@15
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@22

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 120);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = j_pthread_mutex_lock_0(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  *(_DWORD *)(v4 + 4) = v2 + 148;
  v6 = *(_QWORD *)(v2 + 156);
  if ( (_DWORD)v6 == HIDWORD(v6) )
    v7 = *(void **)(v2 + 152);
    v8 = ((signed int)v6 - (signed int)v7) >> 2;
    if ( !v8 )
      v8 = 1;
    HIDWORD(v6) = v8 + (((signed int)v6 - (signed int)v7) >> 2);
    v10 = v8 + (((signed int)v6 - (signed int)v7) >> 2);
    if ( 0 != HIDWORD(v6) >> 30 )
      v10 = 0x3FFFFFFF;
    if ( v9 < v8 )
    if ( v10 )
    {
      if ( v10 >= 0x40000000 )
        sub_21E57F4();
      v11 = (char *)j_operator new(4 * v10);
      LODWORD(v6) = *(_QWORD *)(v2 + 152) >> 32;
      v7 = (void *)*(_QWORD *)(v2 + 152);
    }
    else
      v11 = 0;
    v12 = &v11[v6 - (_DWORD)v7];
    *(_DWORD *)&v11[v6 - (_DWORD)v7] = v4;
    if ( 0 != ((signed int)v6 - (signed int)v7) >> 2 )
      j___aeabi_memmove4_0((int)v11, (int)v7);
    if ( v7 )
      j_operator delete(v7);
    *(_DWORD *)(v2 + 152) = v11;
    *(_DWORD *)(v2 + 156) = v12 + 4;
    *(_DWORD *)(v2 + 160) = &v11[4 * v10];
  else
    *(_DWORD *)v6 = v4;
    *(_DWORD *)(v2 + 156) += 4;
  if ( *(_QWORD *)(v2 + 136) >> 32 != (unsigned int)*(_QWORD *)(v2 + 136) )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v3);
  return result;
}


int __fastcall Core::FileSystemImpl::isRelativePath(int a1, int a2, __int64 *a3)
{
  int (__fastcall *v3)(int); // r3@1
  __int64 v5; // [sp+0h] [bp-10h]@1

  v3 = *(int (__fastcall **)(int))(*(_DWORD *)a2 + 128);
  v5 = *a3;
  return v3(a1);
}


int __fastcall Core::FileSystemImpl::_countDirectoryFiles(int a1, int a2, __int64 *a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r5@1
  _DWORD *v7; // r0@1
  int v8; // r3@1
  int result; // r0@3
  _DWORD *v10; // [sp+10h] [bp-30h]@1
  void (*v11)(void); // [sp+18h] [bp-28h]@1
  int (__fastcall *v12)(int, _QWORD ***); // [sp+1Ch] [bp-24h]@1
  __int64 v13; // [sp+20h] [bp-20h]@1

  v4 = a4;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  v5 = a2;
  v6 = a1;
  v13 = *a3;
  v7 = j_operator new(4u);
  *v7 = v4;
  v10 = v7;
  v11 = (void (*)(void))sub_1BA3F4A;
  v12 = sub_1BA3F26;
  j_Core::FileSystemImpl::iterateOverDirectory(v6, v5, &v13, v8, 128, 0, (int)&v10);
  if ( v11 )
    v11();
  result = *(_BYTE *)(v6 + 16);
  *(_BYTE *)(v6 + 16) = result | 2;
  if ( !(result & 1) )
  {
    result = 0;
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
  }
  return result;
}


RakNet *__fastcall Core::FileSystem::deleteEmptyDirectory(int a1, __int64 *a2)
{
  int v2; // r4@1
  RakNet *result; // r0@1
  void *v4; // [sp+0h] [bp-20h]@1
  int (__fastcall *v5)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-14h]@1
  __int64 v7; // [sp+10h] [bp-10h]@1

  v2 = a1;
  v7 = *a2;
  v4 = j_operator new(1u);
  v5 = sub_1B9DF3E;
  v6 = sub_1B9DF24;
  result = j_Core::TransactionFrame::exec(v2, 1, &v7, (int)&v4);
  if ( v5 )
    result = (RakNet *)((int (__cdecl *)(void **))v5)(&v4);
  return result;
}


int __fastcall Core::FileSystemImpl::_deleteDirectoryAndContentsRecursively(int a1, int a2, __int64 *a3)
{
  __int64 *v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  int v8; // r3@1
  int result; // r0@1
  char v10; // r7@3
  int v11; // r0@5
  __int64 v12; // r1@5
  int (*v13)(void); // r7@5
  int v14; // r5@5
  void (*v15)(void); // r3@5
  __int64 v16; // [sp+10h] [bp-60h]@4
  char v17; // [sp+18h] [bp-58h]@4
  int v18; // [sp+1Ch] [bp-54h]@5
  int (*v19)(void); // [sp+20h] [bp-50h]@5
  int v20; // [sp+24h] [bp-4Ch]@5
  unsigned __int8 v21; // [sp+28h] [bp-48h]@5
  _DWORD *v22; // [sp+30h] [bp-40h]@1
  __int64 v23; // [sp+38h] [bp-38h]@1
  __int64 v24; // [sp+40h] [bp-30h]@1
  __int64 v25; // [sp+48h] [bp-28h]@5
  void (*v26)(void); // [sp+50h] [bp-20h]@5
  int v27; // [sp+54h] [bp-1Ch]@5

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v24 = *a3;
  v6 = j_operator new(4u);
  HIDWORD(v7) = sub_1BA3BB6;
  *v6 = v4;
  LODWORD(v7) = sub_1BA3C1A;
  v22 = v6;
  v23 = v7;
  result = j_Core::FileSystemImpl::iterateOverDirectory(v5, v4, &v24, v8, 402, 0, (int)&v22);
  if ( (_DWORD)v23 )
    result = ((int (*)(void))v23)();
  v10 = *(_BYTE *)(v5 + 16);
  if ( *(_BYTE *)(v5 + 16) & 1 )
  {
    *(_BYTE *)(v5 + 16) = v10 | 2;
    v16 = *v3;
    result = j_Core::FileSystemImpl::deleteEmptyDirectory((int)&v17, v4, &v16);
    if ( &v17 != (char *)v5 )
    {
      v11 = v21;
      *(_BYTE *)(v5 + 16) = v10 & 0xFC | v21 & 3;
      LODWORD(v12) = *(_DWORD *)&v17;
      HIDWORD(v12) = v18;
      v13 = v19;
      v19 = 0;
      v14 = v20;
      v25 = *(_QWORD *)v5;
      *(_QWORD *)v5 = v12;
      v15 = *(void (**)(void))(v5 + 8);
      *(_DWORD *)(v5 + 8) = v13;
      LODWORD(v12) = *(_DWORD *)(v5 + 12);
      v26 = v15;
      v27 = v12;
      *(_DWORD *)(v5 + 12) = v14;
      if ( v15 )
      {
        v15();
        v11 = v21;
      }
      result = v11 | 3;
      v21 = result;
    }
    if ( v19 )
      result = v19();
  }
  return result;
}


void __fastcall Core::FileStdStreamBuf::~FileStdStreamBuf(Core::FileStdStreamBuf *this, int a2, unsigned __int64 a3)
{
  Core::FileStdStreamBuf::~FileStdStreamBuf(this, a2, a3);
}


RakNet *__fastcall Core::TransactionFrameSourceTarget::exec(int a1, __int64 *a2, __int64 *a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r6@1
  char v7; // r0@1
  __int64 v8; // r1@2
  void (__fastcall *v9)(char *, int, char *); // r3@5
  char *v10; // r0@5
  char *v11; // r2@5
  int v12; // r1@5
  __int64 v13; // r1@9
  void (*v14)(void); // r6@9
  void (*v15)(void); // r3@9
  int v16; // r4@21
  unsigned int *v17; // r1@22
  unsigned int v18; // r0@24
  unsigned int *v19; // r5@28
  unsigned int v20; // r0@30
  int v21; // r4@35
  unsigned int *v22; // r1@36
  unsigned int v23; // r0@38
  unsigned int *v24; // r5@42
  unsigned int v25; // r0@44
  RakNet *result; // r0@49
  int v27; // [sp+0h] [bp-8C8h]@9
  int v28; // [sp+4h] [bp-8C4h]@9
  void (*v29)(void); // [sp+8h] [bp-8C0h]@9
  int v30; // [sp+Ch] [bp-8BCh]@9
  char v31; // [sp+10h] [bp-8B8h]@9
  char v32; // [sp+14h] [bp-8B4h]@9
  void (*v33)(void); // [sp+1Ch] [bp-8ACh]@13
  char v34; // [sp+28h] [bp-8A0h]@8
  void (*v35)(void); // [sp+30h] [bp-898h]@9
  int v36; // [sp+34h] [bp-894h]@9
  char v37; // [sp+38h] [bp-890h]@9
  char v38; // [sp+3Ch] [bp-88Ch]@5
  void (*v39)(void); // [sp+44h] [bp-884h]@17
  __int64 v40; // [sp+50h] [bp-878h]@1
  __int64 v41; // [sp+58h] [bp-870h]@1
  __int64 v42; // [sp+60h] [bp-868h]@9
  void (*v43)(void); // [sp+68h] [bp-860h]@9
  int v44; // [sp+6Ch] [bp-85Ch]@9
  char v45; // [sp+74h] [bp-854h]@1
  char v46; // [sp+884h] [bp-44h]@3
  int v47; // [sp+888h] [bp-40h]@8
  int v48; // [sp+88Ch] [bp-3Ch]@35
  int v49; // [sp+890h] [bp-38h]@9
  int v50; // [sp+894h] [bp-34h]@21
  __int64 v51; // [sp+898h] [bp-30h]@2
  void (*v52)(void); // [sp+8A0h] [bp-28h]@2
  int v53; // [sp+8A4h] [bp-24h]@2
  char v54; // [sp+8A8h] [bp-20h]@1
  RakNet *v55; // [sp+8ACh] [bp-1Ch]@1

  v5 = a1;
  v6 = a4;
  v55 = _stack_chk_guard;
  v41 = *a2;
  v40 = *a3;
  j_Core::TransactionFrameSourceTarget::TransactionFrameSourceTarget((int)&v45, &v41, &v40);
  v7 = v54;
  if ( !(v54 & 1) )
  {
    HIDWORD(v8) = HIDWORD(v51);
    LODWORD(v8) = v51;
    v51 = *(_QWORD *)v5;
    *(_QWORD *)v5 = v8;
    LODWORD(v8) = v52;
    v52 = 0;
    *(_DWORD *)(v5 + 8) = v8;
    LODWORD(v8) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v5 + 12) = v53;
    v53 = v8;
    LOBYTE(v8) = *(_BYTE *)(v5 + 16);
    v54 = v7 | 3;
    *(_BYTE *)(v5 + 16) = v8 & 0xFC | v7 & 3;
    goto LABEL_21;
  }
  v54 |= 2u;
  if ( !v46 )
    v12 = a5;
    if ( *(_DWORD *)(a5 + 8) )
    {
      v9 = *(void (__fastcall **)(char *, int, char *))(a5 + 12);
      v10 = &v38;
      v11 = &v45;
      goto LABEL_8;
    }
LABEL_51:
    sub_21E5F48();
  if ( !*(_DWORD *)(v6 + 8) )
    goto LABEL_51;
  v9 = *(void (__fastcall **)(char *, int, char *))(v6 + 12);
  v10 = &v38;
  v11 = &v45;
  v12 = v6;
LABEL_8:
  v9(v10, v12, v11);
  j_Core::FileSystemImpl::commit((Core::FileSystemImpl *)&v34, v47);
    j_Core::FileSystemImpl::commit((Core::FileSystemImpl *)&v32, v49);
    j_Core::Result::merge((int)&v27, (int)&v34, (int)&v32);
    v37 = v37 & 0xFC | v31 & 1 | v31 & 2;
    LODWORD(v13) = v27;
    HIDWORD(v13) = v28;
    v14 = v29;
    v29 = 0;
    v42 = *(_QWORD *)&v34;
    *(_QWORD *)&v34 = v13;
    v15 = v35;
    v35 = v14;
    v43 = v15;
    v44 = v36;
    v36 = v30;
    if ( v15 )
      v15();
      v31 |= 3u;
      if ( v29 )
        v29();
    else
    if ( v33 )
      v33();
  j_Core::Result::merge(v5, (int)&v38, (int)&v34);
  if ( v35 )
    v35();
  if ( v39 )
    v39();
  if ( v52 )
    v52();
LABEL_21:
  v16 = v50;
  if ( v50 )
    v17 = (unsigned int *)(v50 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v21 = v48;
  if ( v48 )
    v22 = (unsigned int *)(v48 + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      v24 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  result = (RakNet *)(_stack_chk_guard - v55);
  if ( _stack_chk_guard != v55 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall Core::File_c::_getSize(Core::File_c *this, unsigned __int64 *a2, int a3)
{
  _QWORD *v3; // r5@1
  unsigned __int64 *v4; // r6@1
  Core::File_c *v5; // r9@1
  signed int v6; // r7@1
  int v7; // r4@2
  _DWORD *v8; // r0@3
  void **v9; // r1@3
  void **v10; // r2@3
  const char *v11; // r3@3
  __int32 v12; // r8@5
  int (__fastcall *v13)(void **, _QWORD **, int); // r1@8
  void *v14; // r2@9
  int result; // r0@10

  v3 = (_QWORD *)a3;
  v4 = a2;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  v5 = this;
  v6 = j_ftell(*((FILE **)a2 + 4));
  if ( v6 > -1 )
  {
    v7 = j_fseek(*((FILE **)v4 + 4), 0, 2);
    if ( v7 )
    {
      v8 = j_operator new(8u);
      v9 = &std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
      v10 = &std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
      v11 = "fseek failed.";
    }
    else
      v12 = j_ftell(*((FILE **)v4 + 4));
      if ( v12 <= -1 )
      {
        v8 = j_operator new(8u);
        v10 = &std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<long>(char const*,long const&)::{lambda(std::string *)#1}>::_M_invoke;
        v13 = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<long>(char const*,long const&)::{lambda(std::string *)#1}>::_M_manager;
        *v8 = "ftell failed.";
        v8[1] = v12;
        goto LABEL_9;
      }
      v7 = j_fseek(*((FILE **)v4 + 4), v6, 0);
      if ( !v7 )
        *v3 = v12;
        *((_DWORD *)v5 + 2) = 0;
        result = (unsigned __int8)(*((_BYTE *)v5 + 16) & 0xFC) | 1;
        goto LABEL_11;
    v13 = (int (__fastcall *)(void **, _QWORD **, int))*v9;
    *v8 = v11;
    v8[1] = v7;
LABEL_9:
    v14 = *v10;
    *(_DWORD *)v5 = v8;
    *((_DWORD *)v5 + 2) = v13;
    *((_DWORD *)v5 + 3) = v14;
    goto LABEL_10;
  }
  *((_DWORD *)v5 + 2) = 0;
LABEL_10:
  result = *((_BYTE *)v5 + 16) & 0xFC;
LABEL_11:
  *((_BYTE *)v5 + 16) = result;
  return result;
}


unsigned __int64 *__fastcall Core::FileSystem::readFileData(int a1, __int64 *a2, unsigned int a3, unsigned int a4, unsigned __int64 a5, int a6, unsigned __int64 *a7)
{
  int v7; // r4@1
  unsigned int v8; // r11@1
  unsigned int v9; // r10@1
  char v10; // r0@1
  __int64 v11; // r1@2
  void (*v12)(void); // r1@2
  __int64 v13; // r1@3
  void (*v14)(void); // r5@3
  void (*v15)(void); // r3@3
  char v16; // r6@7
  __int64 v17; // r1@8
  __int64 v18; // kr00_8@8
  signed int v19; // r5@9
  unsigned int v20; // r7@9
  signed int v21; // r2@9
  __int64 v22; // kr10_8@13
  unsigned __int64 v23; // r8@15
  int v24; // r1@21
  unsigned __int64 v25; // r2@21 OVERLAPPED
  void (*v26)(void); // r7@21
  __int64 v27; // r1@26
  void (*v28)(void); // r7@26
  void (*v29)(void); // r3@26
  unsigned int v30; // r1@31
  unsigned int v31; // r2@31
  int v32; // r2@32
  unsigned __int64 *result; // r0@38
  void (*v34)(void); // r3@41
  char v35; // [sp+10h] [bp-B0h]@26
  int v36; // [sp+14h] [bp-ACh]@26
  void (*v37)(void); // [sp+18h] [bp-A8h]@26
  int v38; // [sp+1Ch] [bp-A4h]@26
  char v39; // [sp+20h] [bp-A0h]@26
  char v40; // [sp+28h] [bp-98h]@21
  unsigned int v41; // [sp+2Ch] [bp-94h]@21
  void (*v42)(void); // [sp+30h] [bp-90h]@21
  int v43; // [sp+34h] [bp-8Ch]@21
  char v44; // [sp+38h] [bp-88h]@21
  char v45; // [sp+40h] [bp-80h]@3
  int v46; // [sp+44h] [bp-7Ch]@3
  void (*v47)(void); // [sp+48h] [bp-78h]@3
  int v48; // [sp+4Ch] [bp-74h]@3
  char v49; // [sp+50h] [bp-70h]@3
  __int64 v50; // [sp+58h] [bp-68h]@3
  __int64 v51; // [sp+60h] [bp-60h]@1
  unsigned __int64 *v52; // [sp+68h] [bp-58h]@1
  int v53; // [sp+6Ch] [bp-54h]@1
  __int64 v54; // [sp+70h] [bp-50h]@1
  void (*v55)(void); // [sp+78h] [bp-48h]@2
  int v56; // [sp+7Ch] [bp-44h]@3
  char v57; // [sp+80h] [bp-40h]@1
  __int64 v58; // [sp+88h] [bp-38h]@3
  void (*v59)(void); // [sp+90h] [bp-30h]@3
  int v60; // [sp+94h] [bp-2Ch]@3

  v7 = a1;
  v52 = 0;
  v53 = 0;
  v8 = a3;
  v51 = *a2;
  v9 = a4;
  j_Core::File::open((int)&v54, (int)&v52, &v51, 33);
  v10 = v57;
  if ( !(v57 & 1) )
  {
    v11 = v54;
    v54 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v11;
    v12 = v55;
    v55 = 0;
LABEL_32:
    *(_DWORD *)(v7 + 8) = v12;
    v32 = v56;
    v56 = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v32;
    *(_BYTE *)(v7 + 16) = *(_BYTE *)(v7 + 16) & 0xFC | v10 & 3;
    v57 = v10 | 3;
    goto LABEL_33;
  }
  v57 |= 2u;
  v50 = 0LL;
  j_Core::FileImpl::getSize((Core::FileImpl *)&v45, v52);
  v57 = v57 & 0xFC | v49 & 3;
  LODWORD(v13) = *(_DWORD *)&v45;
  HIDWORD(v13) = v46;
  v14 = v47;
  v47 = 0;
  v58 = v54;
  v54 = v13;
  v15 = v55;
  v55 = v14;
  v59 = v15;
  v60 = v56;
  v56 = v48;
  if ( v15 )
    ((void (__cdecl *)(__int64 *))v15)(&v58);
    v49 |= 3u;
    if ( v47 )
      ((void (__cdecl *)(char *))v47)(&v45);
  else
  v16 = v57;
  if ( v57 & 1 )
    v57 |= 2u;
    v19 = 0;
    v20 = (a5 + __PAIR__(v9, v8)) >> 32;
    v21 = 0;
    if ( (unsigned int)a5 + v8 > (unsigned int)v50 )
      v21 = 1;
    if ( v20 > HIDWORD(v50) )
      v19 = 1;
    v22 = *(_QWORD *)a6;
    if ( v20 == HIDWORD(v50) )
      v19 = v21;
    v23 = v50 - __PAIR__(v9, v8);
    if ( !v19 )
      v23 = a5;
    if ( (unsigned int)v23 <= HIDWORD(v22) - (signed int)v22 )
    {
      if ( (unsigned int)v23 < HIDWORD(v22) - (signed int)v22 )
        *(_DWORD *)(a6 + 4) = v22 + v23;
    }
    else
      j_std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append(a6, v23 - (HIDWORD(v22) - v22));
    j_Core::FileImpl::setPosition((Core::FileImpl *)&v40, (int)v52, __PAIR__(v9, v8));
    v57 = v57 & 0xFC | v44 & 3;
    v24 = *(_DWORD *)&v40;
    v25 = __PAIR__((unsigned int)v55, v41);
    v26 = v42;
    v42 = 0;
    v58 = v54;
    v54 = *(unsigned __int64 *)((char *)&v25 - 4);
    v55 = v26;
    v59 = (void (*)(void))HIDWORD(v25);
    v60 = v56;
    v56 = v43;
    if ( HIDWORD(v25) )
      ((void (__cdecl *)(_DWORD))HIDWORD(v25))(&v58);
      HIDWORD(v25) = v42;
      v44 |= 3u;
      if ( v42 )
        ((void (__cdecl *)(char *))v42)(&v40);
    v10 = v57;
    if ( !(v57 & 1) )
      goto LABEL_45;
    LODWORD(v25) = *(_DWORD *)a6;
    j_Core::FileImpl::readExactly((Core::FileImpl *)&v35, v52, v25, v23);
    v57 = v57 & 0xFC | v39 & 3;
    LODWORD(v27) = *(_DWORD *)&v35;
    HIDWORD(v27) = v36;
    v28 = v37;
    v37 = 0;
    v54 = v27;
    v29 = v55;
    v55 = v28;
    v59 = v29;
    v56 = v38;
    if ( v29 )
      v29();
      v39 |= 3u;
      if ( v37 )
        v37();
LABEL_45:
      v31 = HIDWORD(v54);
      v30 = v54;
      v54 = *(_QWORD *)v7;
      *(_QWORD *)v7 = __PAIR__(v31, v30);
      v12 = v55;
      v55 = 0;
      goto LABEL_32;
    *a7 = v23;
    *(_DWORD *)(v7 + 8) = 0;
    v34 = v55;
    *(_BYTE *)(v7 + 16) = *(_BYTE *)(v7 + 16) & 0xFC | 1;
    if ( v34 )
      v34();
    v17 = v54;
    v18 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v17;
    LODWORD(v17) = v55;
    *(_DWORD *)(v7 + 8) = v17;
    LODWORD(v17) = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v56;
    v56 = v17;
    LOBYTE(v17) = *(_BYTE *)(v7 + 16);
    v57 = v16 | 3;
    *(_BYTE *)(v7 + 16) = v17 & 0xFC | v16 & 3;
LABEL_33:
  if ( v52 )
    j_Core::File::close((Core::File *)&v54, (int *)&v52);
    if ( v55 )
      ((void (__cdecl *)(__int64 *))v55)(&v54);
  if ( v53 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v53 + 4))(v53);
  result = v52;
    result = (unsigned __int64 *)(*(int (__cdecl **)(unsigned __int64 *))(*(_DWORD *)v52 + 4))(v52);
  return result;
}


int __fastcall Core::FileSystemImpl::syncDirectory(int a1, int a2, __int64 *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  void (__fastcall *v5)(char *); // r3@1
  int (*v6)(void); // r7@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // kr00_8@3
  unsigned __int64 v9; // kr08_8@5
  __int64 v10; // r0@8
  int result; // r0@8
  int v12; // [sp+0h] [bp-48h]@7
  int (*v13)(void); // [sp+8h] [bp-40h]@1
  void (__fastcall *v14)(int *, _DWORD); // [sp+Ch] [bp-3Ch]@7
  char v15; // [sp+10h] [bp-38h]@1
  int (*v16)(void); // [sp+18h] [bp-30h]@8
  int v17; // [sp+1Ch] [bp-2Ch]@8
  unsigned __int8 v18; // [sp+20h] [bp-28h]@1
  __int64 v19; // [sp+28h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(void (__fastcall **)(char *))(*(_DWORD *)a2 + 80);
  v19 = *a3;
  v5(&v15);
  v6 = 0;
  v13 = 0;
  if ( v18 & 1 )
  {
    v7 = (unsigned __int64 *)(v3 + 32);
    __dmb();
    do
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
      v9 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v9 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v6 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v3 + 12), 0, 0LL);
    if ( v13 )
    {
      v14(&v12, *(_DWORD *)(v3 + 12));
      v6 = v13;
    }
  }
  v10 = *(_QWORD *)&v15;
  *(_QWORD *)&v15 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v10;
  *(_DWORD *)(v4 + 8) = v16;
  v16 = 0;
  HIDWORD(v10) = v17;
  v17 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = HIDWORD(v10);
  HIDWORD(v10) = v18;
  *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 16) & 0xFC | v18 & 3;
  result = HIDWORD(v10) | 3;
  v18 = BYTE4(v10) | 3;
  if ( v6 )
    result = v6();
    if ( v16 )
      result = v16();
  return result;
}


void __fastcall Core::InputFileStream::~InputFileStream(Core::InputFileStream *this, int a2, unsigned __int64 a3)
{
  Core::InputFileStream::~InputFileStream(this, a2, a3);
}


void __fastcall Core::FileStream::~FileStream(Core::FileStream *this, int a2, unsigned __int64 a3)
{
  Core::FileStream *v3; // r4@1

  v3 = this;
  *(_DWORD *)this = &off_26D66C4;
  *((_DWORD *)this + 1039) = &off_26D66EC;
  *((_DWORD *)this + 2) = &off_26D66D8;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStream *)((char *)this + 12), (int)&off_26D66EC, a3);
  *(_DWORD *)v3 = &off_26D670C;
  *((_DWORD *)v3 + 1039) = &off_26D6720;
  *((_DWORD *)v3 + 1) = 0;
  sub_DA76E4((_DWORD *)v3 + 1039);
  j_j_j__ZdlPv_3((void *)v3);
}


void __fastcall Core::File_c::~File_c(Core::File_c *this)
{
  Core::File_c::~File_c(this);
}


RakNet *__fastcall Core::FileSystem::getDirectoryFilesRecursively(int a1, int a2, __int64 *a3)
{
  int v3; // r4@1
  int v4; // r5@1
  _DWORD *v5; // r0@1
  __int64 v6; // r1@1
  RakNet *result; // r0@1
  _DWORD *v8; // [sp+0h] [bp-28h]@1
  __int64 v9; // [sp+8h] [bp-20h]@1
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  v10 = *a3;
  v5 = j_operator new(4u);
  HIDWORD(v6) = sub_1B9E244;
  *v5 = v3;
  v8 = v5;
  LODWORD(v6) = sub_1B9E266;
  v9 = v6;
  result = j_Core::TransactionFrame::exec(v4, 0, &v10, (int)&v8);
  if ( (_DWORD)v9 )
    result = (RakNet *)((int (__cdecl *)(_DWORD **))v9)(&v8);
  return result;
}


RakNet *__fastcall Core::FileSystem::copyDirectoryAndContentsRecursively(int a1, __int64 *a2, __int64 *a3)
{
  int v3; // r4@1
  RakNet *result; // r0@1
  void *v5; // [sp+8h] [bp-38h]@1
  int (*v6)(void); // [sp+10h] [bp-30h]@1
  int (__fastcall *v7)(int, int, int); // [sp+14h] [bp-2Ch]@1
  void *v8; // [sp+18h] [bp-28h]@1
  int (*v9)(void); // [sp+20h] [bp-20h]@1
  int (__fastcall *v10)(int, int, int); // [sp+24h] [bp-1Ch]@1
  __int64 v11; // [sp+28h] [bp-18h]@1
  __int64 v12; // [sp+30h] [bp-10h]@1

  v3 = a1;
  v12 = *a2;
  v11 = *a3;
  v8 = j_operator new(1u);
  v9 = (int (*)(void))sub_1B9E2C6;
  v10 = sub_1B9E29C;
  v5 = j_operator new(1u);
  v6 = (int (*)(void))sub_1B9E324;
  v7 = sub_1B9E2F4;
  result = j_Core::TransactionFrameSourceTarget::exec(v3, &v12, &v11, (int)&v8, (int)&v5);
  if ( v6 )
    result = (RakNet *)v6();
  if ( v9 )
    result = (RakNet *)v9();
  return result;
}


int __fastcall Core::FileSystemImpl::_readWriteOperation(int a1, int a2, int a3, int a4, unsigned __int64 a5, unsigned __int64 a6)
{
  int v6; // r10@1
  int v7; // r8@1
  int v8; // r9@1
  unsigned __int64 *v9; // r0@2
  unsigned __int64 v10; // r6@3
  unsigned __int64 *v11; // r0@4
  unsigned __int64 v12; // kr00_8@5
  unsigned __int64 v13; // kr08_8@7
  unsigned __int64 v14; // kr10_8@9
  unsigned __int64 *v15; // r0@11
  unsigned __int64 v16; // kr18_8@12
  unsigned __int64 *v17; // r0@13
  unsigned __int64 v18; // kr20_8@14
  unsigned __int64 *v19; // r0@15
  unsigned __int64 v20; // kr28_8@16
  unsigned __int64 *v21; // r0@17
  unsigned __int64 v22; // kr30_8@18
  unsigned __int64 v23; // kr38_8@20
  unsigned __int64 v24; // kr40_8@22
  unsigned __int64 v25; // kr48_8@24
  unsigned __int64 v26; // kr50_8@26

  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( *(_BYTE *)(a2 + 16) & 1 )
  {
    v15 = (unsigned __int64 *)(a1 + 40);
    __dmb();
    do
      v16 = __ldrexd(v15);
    while ( __strexd(v16 + 1, v15) );
    v17 = (unsigned __int64 *)(v8 + 48);
      v18 = __ldrexd(v17);
    while ( __strexd(v18 + a5, v17) );
    v19 = (unsigned __int64 *)(v8 + 16);
      v20 = __ldrexd(v19);
    while ( __strexd(v20 + 1, v19) );
    v21 = (unsigned __int64 *)(v8 + 24);
      v22 = __ldrexd(v21);
    while ( __strexd(v22 + a6, v21) );
      v23 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v23 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v24 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v24 + a5, (unsigned __int64 *)&unk_283E5E8) );
      v25 = __ldrexd((unsigned __int64 *)&Core::FileSystemImpl::sStats);
    while ( __strexd(v25 + 1, (unsigned __int64 *)&Core::FileSystemImpl::sStats) );
      v26 = __ldrexd((unsigned __int64 *)&unk_283E5D0);
    while ( __strexd(v26 + a6, (unsigned __int64 *)&unk_283E5D0) );
    j_Core::FileStorageArea::_addReadWriteOperation(*(Core::FileStorageArea **)(v8 + 12), 1, a5, a6);
    if ( *(_DWORD *)(v6 + 8) )
      (*(void (__fastcall **)(int, _DWORD))(v6 + 12))(v6, *(_DWORD *)(v8 + 12));
  }
  else
    v9 = (unsigned __int64 *)(a1 + 56);
      v10 = __ldrexd(v9);
    while ( __strexd(v10 + 1, v9) );
    v11 = (unsigned __int64 *)(v8 + 32);
      v12 = __ldrexd(v11);
    while ( __strexd(v12 + 1, v11) );
      v13 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v13 + 1, (unsigned __int64 *)&unk_283E5F0) );
      v14 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v14 + 1, (unsigned __int64 *)&unk_283E5D8) );
    j_Core::FileStorageArea::_addReadWriteOperation(*(Core::FileStorageArea **)(v8 + 12), 0, a5, a6);
  return v7;
}


Core::FileImpl *__fastcall Core::File_c::File_c(int a1, int a2, Core::FileSystemImpl *this, int a4, char a5)
{
  _DWORD *v5; // r4@1
  int v6; // r5@1
  Core::FileImpl *result; // r0@1

  v5 = (_DWORD *)a4;
  v6 = a2;
  result = j_Core::FileImpl::FileImpl((Core::FileImpl *)a1, this, a5);
  *(_DWORD *)result = &off_2762F8C;
  *((_DWORD *)result + 4) = v6;
  *((_DWORD *)result + 5) = *v5;
  *v5 = &unk_28898CC;
  return result;
}


int __fastcall Core::StringSpan::find_first_of(Core::StringSpan *this, const char *a2)
{
  int v2; // r12@1
  signed int v3; // r3@1
  int v4; // r9@3
  int v5; // lr@3
  char v6; // r8@3
  char v7; // r4@3
  char v8; // r7@3
  const char *v9; // r6@4
  char v10; // r5@4
  int v11; // t1@6
  int v12; // r2@8
  const char *v13; // r5@8
  int v14; // t1@10
  const char *v15; // r5@12
  int v16; // t1@14
  const char *v17; // r5@16
  char v18; // r6@16
  int v19; // t1@18
  unsigned __int8 v20; // vf@23
  int v21; // r2@28
  bool v22; // zf@30
  int v23; // r3@32
  int v24; // r0@32
  const char *v25; // r4@34
  char v26; // r5@34
  int v27; // t1@36
  const char *v28; // r4@40
  unsigned __int8 v29; // r5@40
  int v30; // t1@42
  int v31; // r0@45
  const char *v32; // r1@45
  int v33; // t1@47

  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)this >> 2;
  if ( v3 < 1 )
  {
    v5 = 0;
  }
  else
    if ( *a2 )
    {
      v4 = *((_DWORD *)this + 1);
      v5 = 0;
      v6 = *a2;
      v7 = *a2;
      v8 = *a2;
LABEL_4:
      v9 = a2 + 1;
      v10 = *a2;
      while ( (unsigned __int8)v10 != *(_BYTE *)(v4 + v5) )
      {
        v11 = *v9++;
        v10 = v11;
        if ( !v11 )
        {
          if ( v8 )
          {
            v12 = v5 | 1;
            v13 = a2 + 1;
            while ( (unsigned __int8)v8 != *(_BYTE *)(v4 + (v5 | 1)) )
            {
              v14 = *v13++;
              v8 = v14;
              if ( !v14 )
              {
                if ( !v7 )
                {
LABEL_21:
                  v7 = 0;
                  goto LABEL_22;
                }
                v12 = v5 | 2;
                v15 = a2 + 1;
                while ( (unsigned __int8)v7 != *(_BYTE *)(v4 + (v5 | 2)) )
                  v16 = *v15++;
                  v7 = v16;
                  if ( !v16 )
                  {
                    if ( !v6 )
                    {
                      v6 = 0;
                      goto LABEL_21;
                    }
                    v12 = v5 | 3;
                    v17 = a2 + 1;
                    v18 = v6;
                    while ( (unsigned __int8)v18 != *(_BYTE *)(v4 + (v5 | 3)) )
                      v19 = *v17++;
                      v18 = v19;
                      if ( !v19 )
                      {
                        v7 = v6;
                        v8 = v6;
                        goto LABEL_23;
                      }
                    goto LABEL_50;
                  }
                goto LABEL_50;
              }
            }
            goto LABEL_50;
          }
LABEL_22:
          v8 = 0;
LABEL_23:
          v20 = __OFSUB__(v3--, 1);
          v5 += 4;
          if ( (unsigned __int8)((v3 < 0) ^ v20) | (v3 == 0) )
            goto LABEL_28;
          goto LABEL_4;
        }
      }
      goto LABEL_49;
    }
    v5 = 4 * v3;
LABEL_28:
  v21 = v2 - v5;
  if ( v2 - v5 == 3 )
    v23 = *a2;
    v24 = *((_DWORD *)this + 1);
      v25 = a2 + 1;
      v26 = *a2;
      while ( (unsigned __int8)v26 != *(_BYTE *)(v24 + v5) )
        v27 = *v25++;
        v26 = v27;
        if ( !v27 )
          goto LABEL_37;
LABEL_37:
    ++v5;
LABEL_39:
    if ( !v23 )
LABEL_43:
      ++v5;
      goto LABEL_44;
    v28 = a2 + 1;
    v29 = v23;
    while ( v29 != *(_BYTE *)(v24 + v5) )
      v30 = *v28++;
      v29 = v30;
      if ( !v30 )
        goto LABEL_43;
LABEL_49:
    v12 = v5;
    goto LABEL_50;
  if ( v21 == 2 )
    goto LABEL_39;
  v22 = v21 == 1;
  v12 = *(_DWORD *)this;
  if ( v22 )
LABEL_44:
    v12 = v2;
      goto LABEL_50;
    v31 = *(_BYTE *)(v24 + v5);
    v32 = a2 + 1;
    while ( (unsigned __int8)v23 != v31 )
      v33 = *v32++;
      LOBYTE(v23) = v33;
      if ( !v33 )
        v12 = v2;
        goto LABEL_50;
    goto LABEL_49;
LABEL_50:
  if ( v12 == v2 )
    v12 = -1;
  return v12;
}


int __fastcall Core::File_c::_read(Core::File_c *this, void *a2, void *ptr, size_t n, size_t na, int a6, int a7)
{
  void *v7; // r5@1
  Core::File_c *v8; // r4@1
  size_t v9; // r6@1
  int result; // r0@5
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7

  v7 = a2;
  v8 = this;
  v9 = j_fread(ptr, 1u, na, *((FILE **)a2 + 4));
  if ( v9 == -1 )
    v9 = 0;
  if ( v9 || j_feof(*((FILE **)v7 + 4)) )
  {
    *(_DWORD *)a7 = v9;
    *(_DWORD *)(a7 + 4) = 0;
    *((_DWORD *)v8 + 2) = 0;
    result = (unsigned __int8)(*((_BYTE *)v8 + 16) & 0xFC) | 1;
  }
  else
    *(_DWORD *)a7 = 0;
    v11 = j_operator new(4u);
    *(_DWORD *)v8 = v11;
    HIDWORD(v12) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v12) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    *v11 = "fread failed.";
    *((_QWORD *)v8 + 1) = v12;
    result = *((_BYTE *)v8 + 16) & 0xFC;
  *((_BYTE *)v8 + 16) = result;
  return result;
}


RakNet *__fastcall Core::FileSystem::isRelativePath(int a1, __int64 *a2)
{
  int v2; // r4@1
  RakNet *result; // r0@1
  void *v4; // [sp+0h] [bp-20h]@1
  int (__fastcall *v5)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-14h]@1
  __int64 v7; // [sp+10h] [bp-10h]@1

  v2 = a1;
  v7 = *a2;
  v4 = j_operator new(1u);
  v5 = sub_1B9E524;
  v6 = sub_1B9E508;
  result = j_Core::TransactionFrame::exec(v2, 0, &v7, (int)&v4);
  if ( v5 )
    result = (RakNet *)((int (__cdecl *)(void **))v5)(&v4);
  return result;
}


int __fastcall Core::FileSystemImpl::renameFile(int a1, int a2, __int64 *a3, __int64 *a4)
{
  int v4; // r8@1
  int v5; // r4@1
  __int64 *v6; // r7@1
  __int64 *v7; // r6@1
  void (__fastcall *v8)(char *); // r5@1
  __int64 v9; // kr00_8@1
  __int64 v10; // kr08_8@1
  _DWORD *v11; // r0@1
  int (__fastcall *v12)(void **, void **, int); // r10@1
  unsigned __int64 *v13; // r0@2
  unsigned __int64 v14; // kr10_8@3
  unsigned __int64 v15; // kr18_8@5
  __int64 v16; // r0@8
  int result; // r0@8
  _DWORD *v18; // [sp+0h] [bp-58h]@1
  int (__fastcall *v19)(void **, void **, int); // [sp+8h] [bp-50h]@1
  int (__fastcall *v20)(__int64 **, int); // [sp+Ch] [bp-4Ch]@1
  char v21; // [sp+10h] [bp-48h]@1
  int (__cdecl *v22)(char *); // [sp+18h] [bp-40h]@8
  int v23; // [sp+1Ch] [bp-3Ch]@8
  unsigned __int8 v24; // [sp+20h] [bp-38h]@1
  __int64 v25; // [sp+28h] [bp-30h]@1
  __int64 v26; // [sp+30h] [bp-28h]@1

  v4 = a2;
  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = *(void (__fastcall **)(char *))(*(_DWORD *)a2 + 40);
  v26 = *a3;
  v25 = *a4;
  v8(&v21);
  v9 = *v7;
  v10 = *v6;
  v11 = j_operator new(0x10u);
  *(_QWORD *)v11 = v10;
  v11[2] = v9;
  v12 = sub_1BA3584;
  v11[3] = HIDWORD(v9);
  v18 = v11;
  v19 = sub_1BA3584;
  v20 = sub_1BA3558;
  if ( v24 & 1 )
  {
    v13 = (unsigned __int64 *)(v4 + 32);
    __dmb();
    do
      v14 = __ldrexd(v13);
    while ( __strexd(v14 + 1, v13) );
      v15 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v15 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v12 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v4 + 12), 0, 0LL);
    if ( v19 )
    {
      v20((__int64 **)&v18, *(_DWORD *)(v4 + 12));
      v12 = v19;
    }
  }
  v16 = *(_QWORD *)&v21;
  *(_QWORD *)&v21 = *(_QWORD *)v5;
  *(_QWORD *)v5 = v16;
  LODWORD(v16) = v22;
  v22 = 0;
  *(_DWORD *)(v5 + 8) = v16;
  HIDWORD(v16) = v23;
  v23 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = HIDWORD(v16);
  HIDWORD(v16) = v24;
  *(_BYTE *)(v5 + 16) = *(_BYTE *)(v5 + 16) & 0xFC | v24 & 3;
  result = HIDWORD(v16) | 3;
  v24 = BYTE4(v16) | 3;
  if ( v12 )
    result = ((int (__cdecl *)(_DWORD **))v12)(&v18);
    if ( v22 )
      result = v22(&v21);
  return result;
}


void __fastcall Core::FileSystemImpl::_createDirectoryRecursively(int a1, int a2, __int64 *a3)
{
  Core::FileSystemImpl::_createDirectoryRecursively(a1, a2, a3);
}


int __fastcall Core::FileSystemImpl::copyFile(int a1, int a2, __int64 *a3, __int64 *a4)
{
  int v4; // r5@1
  int v5; // r4@1
  void (__fastcall *v6)(char *, int, __int64 *, __int64 *); // r7@1
  int (*v7)(void); // r7@1
  unsigned __int64 *v8; // r0@2
  unsigned __int64 v9; // kr00_8@3
  unsigned __int64 v10; // kr08_8@5
  __int64 v11; // r0@8
  int result; // r0@8
  int v13; // [sp+0h] [bp-50h]@7
  int (*v14)(void); // [sp+8h] [bp-48h]@1
  void (__fastcall *v15)(int *, _DWORD); // [sp+Ch] [bp-44h]@7
  char v16; // [sp+10h] [bp-40h]@1
  int (*v17)(void); // [sp+18h] [bp-38h]@8
  int v18; // [sp+1Ch] [bp-34h]@8
  unsigned __int8 v19; // [sp+20h] [bp-30h]@1
  __int64 v20; // [sp+28h] [bp-28h]@1
  __int64 v21; // [sp+30h] [bp-20h]@1

  v4 = a2;
  v5 = a1;
  v6 = *(void (__fastcall **)(char *, int, __int64 *, __int64 *))(*(_DWORD *)a2 + 48);
  v21 = *a3;
  v20 = *a4;
  v6(&v16, a2, &v21, &v20);
  v7 = 0;
  v14 = 0;
  if ( v19 & 1 )
  {
    v8 = (unsigned __int64 *)(v4 + 32);
    __dmb();
    do
      v9 = __ldrexd(v8);
    while ( __strexd(v9 + 1, v8) );
      v10 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v10 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v7 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v4 + 12), 0, 0LL);
    if ( v14 )
    {
      v15(&v13, *(_DWORD *)(v4 + 12));
      v7 = v14;
    }
  }
  v11 = *(_QWORD *)&v16;
  *(_QWORD *)&v16 = *(_QWORD *)v5;
  *(_QWORD *)v5 = v11;
  *(_DWORD *)(v5 + 8) = v17;
  v17 = 0;
  HIDWORD(v11) = v18;
  v18 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = HIDWORD(v11);
  HIDWORD(v11) = v19;
  *(_BYTE *)(v5 + 16) = *(_BYTE *)(v5 + 16) & 0xFC | v19 & 3;
  result = HIDWORD(v11) | 3;
  v19 = BYTE4(v11) | 3;
  if ( v7 )
    result = v7();
    if ( v17 )
      result = v17();
  return result;
}


int __fastcall Core::FileStream::setLoggingEnabled(int result, bool a2)
{
  *(_BYTE *)(result + 4152) = a2;
  return result;
}


int __fastcall Core::FileStorageArea::_commit(int result)
{
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 16) = *(_BYTE *)(result + 16) & 0xFC | 1;
  return result;
}


void *__fastcall std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<long>(char const*,long const&)::{lambda(std::string *)#1}>::_M_invoke(char ***a1, void **a2)
{
  void **v2; // r4@1
  int *v3; // r5@1
  char *v4; // r6@1
  _BYTE *v5; // r0@1
  void *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+0h] [bp-18h]@1

  v2 = a2;
  v3 = (int *)(*a1 + 1);
  v4 = **a1;
  v5 = (_BYTE *)j_strlen_0(**a1);
  sub_21E8190(v2, v4, v5);
  sub_21E7408((const void **)v2, ":", 1u);
  j_std::to_string<long>(&v10, v3);
  sub_21E72F0((const void **)v2, (const void **)&v10);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  return *v2;
}


int __fastcall Core::FileStream::FileStream(int a1, __int64 *a2, int a3)
{
  int v3; // r4@1
  int v4; // r11@1
  int v5; // ST04_4@1
  __int64 *v6; // r9@1
  __int64 v8; // [sp+8h] [bp-30h]@1

  v3 = a1;
  v4 = a1 + 4156;
  v5 = a3;
  v6 = a2;
  sub_21B6308(a1 + 4156);
  *(_DWORD *)(v3 + 4268) = 0;
  *(_WORD *)(v3 + 4272) = 0;
  *(_DWORD *)(v3 + 4288) = 0;
  *(_DWORD *)(v3 + 4284) = 0;
  *(_DWORD *)(v3 + 4280) = 0;
  *(_DWORD *)(v3 + 4276) = 0;
  *(_DWORD *)(v3 + 8) = &off_26D66D8;
  *(_DWORD *)v3 = &off_26D670C;
  *(_DWORD *)(v3 + 4156) = &off_26D6720;
  *(_DWORD *)(v3 + 4) = 0;
  sub_21B5AD4(v4, v3 + 12);
  *(_DWORD *)(v3 + 8) = &off_27267BC;
  *(_DWORD *)(v3 + 4156) = &off_27267D0;
  *(_DWORD *)v3 = &off_26D66C4;
  *(_DWORD *)(v3 + 4156) = &off_26D66EC;
  *(_DWORD *)(v3 + 12) = &off_26D40A8;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  sub_21C9520((unsigned int **)(v3 + 40));
  *(_DWORD *)(v3 + 12) = &off_272676C;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  *(_BYTE *)(v3 + 52) &= 0xC0u;
  *(_DWORD *)(v3 + 16) = v3 + 57;
  *(_DWORD *)(v3 + 20) = v3 + 57;
  *(_DWORD *)(v3 + 24) = v3 + 57;
  *(_DWORD *)(v3 + 28) = v3 + 53;
  *(_DWORD *)(v3 + 32) = v3 + 53;
  *(_DWORD *)(v3 + 36) = v3 + 4148;
  v8 = *v6;
  j_Core::FileStream::open(v3, &v8, v5);
  return v3;
}


int __fastcall Core::transferDirectory(int a1, int a2, __int64 *a3, int a4, __int64 *a5, int a6)
{
  int v6; // r8@1
  int v7; // r4@1
  __int64 *v8; // r7@1
  int v9; // r6@1
  int v10; // r0@1
  __int64 v11; // r1@2
  __int64 v12; // kr00_8@2
  int result; // r0@2
  __int64 v14; // r10@3
  _QWORD *v15; // r0@3
  int v16; // r3@3
  __int64 v17; // r0@5
  int (*v18)(void); // r3@5
  _QWORD *v19; // [sp+10h] [bp-70h]@3
  void (*v20)(void); // [sp+18h] [bp-68h]@3
  char *(__fastcall *v21)(int, int *, __int64 *); // [sp+1Ch] [bp-64h]@3
  __int64 v22; // [sp+20h] [bp-60h]@3
  char v23; // [sp+28h] [bp-58h]@3
  int v24; // [sp+30h] [bp-50h]@5
  int v25; // [sp+34h] [bp-4Ch]@5
  char v26; // [sp+38h] [bp-48h]@5
  __int64 v27; // [sp+40h] [bp-40h]@1
  __int64 v28; // [sp+48h] [bp-38h]@1
  int (*v29)(void); // [sp+50h] [bp-30h]@2
  int v30; // [sp+54h] [bp-2Ch]@2
  unsigned __int8 v31; // [sp+58h] [bp-28h]@1

  v6 = a2;
  v7 = a1;
  v8 = a3;
  v9 = a4;
  v27 = *a5;
  j_Core::FileSystemImpl::createDirectoryRecursively((int)&v28, a4, &v27);
  v10 = v31;
  if ( v31 & 1 )
  {
    v31 |= 2u;
    v14 = *a5;
    v22 = *v8;
    v15 = j_operator new(0x18u);
    *v15 = v22;
    v15[1] = v14;
    *((_DWORD *)v15 + 4) = v9;
    *((_DWORD *)v15 + 5) = a6;
    v19 = v15;
    v20 = (void (*)(void))sub_1BA41E4;
    v21 = sub_1BA408C;
    j_Core::FileSystemImpl::iterateOverDirectory((int)&v23, v6, &v22, v16, 914, 0, (int)&v19);
    if ( v20 )
      v20();
    v17 = *(_QWORD *)&v23;
    *(_QWORD *)&v23 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v17;
    *(_DWORD *)(v7 + 8) = v24;
    v24 = 0;
    HIDWORD(v17) = v25;
    v25 = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = HIDWORD(v17);
    v18 = v29;
    result = (unsigned __int8)(*(_BYTE *)(v7 + 16) & 0xFC) | v26 & 3;
    *(_BYTE *)(v7 + 16) = result;
    if ( v18 )
      result = v18();
  }
  else
    v11 = v28;
    v12 = *(_QWORD *)v7;
    v28 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v11;
    LODWORD(v11) = v29;
    v29 = 0;
    *(_DWORD *)(v7 + 8) = v11;
    LODWORD(v11) = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v30;
    BYTE4(v11) = v10 & 3;
    v30 = v11;
    result = v10 | 3;
    LOBYTE(v11) = *(_BYTE *)(v7 + 16);
    v31 = result;
    *(_BYTE *)(v7 + 16) = v11 & 0xFC | BYTE4(v11);
  return result;
}


void __fastcall Core::FileStream::~FileStream(Core::FileStream *this, int a2, unsigned __int64 a3)
{
  Core::FileStream::~FileStream(this, a2, a3);
}


_DWORD *__fastcall Core::PathBuffer<std::string>::~PathBuffer(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  int v2; // r1@1
  int *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5

  v1 = a1;
  v2 = *a1;
  v3 = (int *)(*a1 - 12);
  if ( v3 != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  return v1;
}


int __fastcall Core::TransactionFrameSourceTarget::TransactionFrameSourceTarget(int a1, __int64 *a2, __int64 *a3)
{
  int v3; // r4@1
  __int64 *v4; // r9@1
  int v5; // r8@1
  char *v6; // r10@1
  char v7; // r0@2
  __int64 v8; // r1@2
  void (*v9)(void); // r6@2
  __int64 v10; // kr00_8@2
  int v11; // r7@2
  void (*v12)(void); // r3@2
  char v13; // r0@9
  __int64 v14; // r1@9
  void (*v15)(void); // r7@9
  int v16; // r5@9
  void (*v17)(void); // r3@9
  char v18; // r0@16
  __int64 v19; // r1@16
  void (*v20)(void); // r7@16
  int v21; // r5@16
  void (*v22)(void); // r3@16
  int v23; // r0@22
  char v24; // r0@23
  __int64 v25; // r1@23
  void (*v26)(void); // r7@23
  int v27; // r5@23
  void (*v28)(void); // r3@23
  char v29; // r2@29
  int v30; // r1@29
  int v31; // r1@31
  int v32; // r5@31
  unsigned int *v33; // r1@32
  unsigned int v34; // r0@34
  unsigned int *v35; // r6@38
  unsigned int v36; // r0@40
  int v37; // r1@48
  int v38; // r5@48
  unsigned int *v39; // r1@49
  unsigned int v40; // r0@51
  unsigned int *v41; // r6@55
  unsigned int v42; // r0@57
  int v43; // r5@65
  unsigned int *v44; // r1@66
  unsigned int v45; // r0@68
  unsigned int *v46; // r6@72
  unsigned int v47; // r0@74
  int v48; // r5@79
  unsigned int *v49; // r1@80
  unsigned int v50; // r0@82
  unsigned int *v51; // r6@86
  unsigned int v52; // r0@88
  int v54; // [sp+0h] [bp-C8h]@48
  int v55; // [sp+4h] [bp-C4h]@31
  __int64 v56; // [sp+8h] [bp-C0h]@22
  char v57; // [sp+10h] [bp-B8h]@22
  int v58; // [sp+14h] [bp-B4h]@23
  void (*v59)(void); // [sp+18h] [bp-B0h]@23
  int v60; // [sp+1Ch] [bp-ACh]@23
  char v61; // [sp+20h] [bp-A8h]@23
  int v62; // [sp+28h] [bp-A0h]@22
  int v63; // [sp+2Ch] [bp-9Ch]@22
  __int64 v64; // [sp+30h] [bp-98h]@15
  char v65; // [sp+38h] [bp-90h]@15
  int v66; // [sp+3Ch] [bp-8Ch]@16
  void (*v67)(void); // [sp+40h] [bp-88h]@16
  int v68; // [sp+44h] [bp-84h]@16
  char v69; // [sp+48h] [bp-80h]@16
  int v70; // [sp+50h] [bp-78h]@15
  int v71; // [sp+54h] [bp-74h]@15
  __int64 v72; // [sp+58h] [bp-70h]@8
  char v73; // [sp+60h] [bp-68h]@8
  int v74; // [sp+64h] [bp-64h]@9
  void (*v75)(void); // [sp+68h] [bp-60h]@9
  int v76; // [sp+6Ch] [bp-5Ch]@9
  char v77; // [sp+70h] [bp-58h]@9
  __int64 v78; // [sp+78h] [bp-50h]@1
  char v79; // [sp+80h] [bp-48h]@1
  int v80; // [sp+84h] [bp-44h]@2
  void (*v81)(void); // [sp+88h] [bp-40h]@2
  int v82; // [sp+8Ch] [bp-3Ch]@2
  char v83; // [sp+90h] [bp-38h]@2
  __int64 v84; // [sp+98h] [bp-30h]@2
  void (*v85)(void); // [sp+A0h] [bp-28h]@2
  int v86; // [sp+A4h] [bp-24h]@2

  v3 = a1;
  *(_DWORD *)a1 = 1023;
  *(_DWORD *)(a1 + 1028) = 0;
  v4 = a3;
  *(_BYTE *)(a1 + 4) = 0;
  v5 = a1 + 4;
  *(_DWORD *)(a1 + 1032) = 1023;
  *(_DWORD *)(a1 + 2060) = 0;
  *(_BYTE *)(a1 + 1036) = 0;
  *(_DWORD *)(a1 + 2080) = 0;
  *(_DWORD *)(a1 + 2076) = 0;
  *(_DWORD *)(a1 + 2072) = 0;
  *(_DWORD *)(a1 + 2068) = 0;
  *(_DWORD *)(a1 + 2092) = 0;
  *(_BYTE *)(a1 + 2100) = *(_BYTE *)(a1 + 2100) & 0xFC | 1;
  v78 = *a2;
  j_Core::FileSystem::cleanPath_deprecated((int)&v79, a1, &v78);
  v6 = (char *)(v3 + 2084);
  if ( (char *)(v3 + 2084) != &v79 )
  {
    v7 = v83;
    *(_BYTE *)(v3 + 2100) = *(_BYTE *)(v3 + 2100) & 0xFC | v83 & 3;
    LODWORD(v8) = *(_DWORD *)&v79;
    HIDWORD(v8) = v80;
    v9 = v81;
    v81 = 0;
    v10 = *(_QWORD *)v6;
    v11 = v82;
    v84 = *(_QWORD *)v6;
    *(_QWORD *)v6 = v8;
    v85 = *(void (**)(void))(v3 + 2092);
    v12 = v85;
    *(_DWORD *)(v3 + 2092) = v9;
    v86 = *(_DWORD *)(v3 + 2096);
    *(_DWORD *)(v3 + 2096) = v11;
    if ( v12 )
    {
      v12();
      v7 = v83;
    }
    v83 = v7 | 3;
  }
  if ( v81 )
    v81();
  if ( *(_BYTE *)(v3 + 2100) & 1 )
    *(_BYTE *)(v3 + 2100) |= 2u;
    v72 = *v4;
    j_Core::FileSystem::cleanPath_deprecated((int)&v73, v3 + 1032, &v72);
    if ( v6 != &v73 )
      v13 = v77;
      *(_BYTE *)(v3 + 2100) = *(_BYTE *)(v3 + 2100) & 0xFC | v77 & 3;
      LODWORD(v14) = *(_DWORD *)&v73;
      HIDWORD(v14) = v74;
      v15 = v75;
      v75 = 0;
      v16 = v76;
      v84 = *(_QWORD *)v6;
      *(_QWORD *)v6 = v14;
      v85 = *(void (**)(void))(v3 + 2092);
      v17 = v85;
      *(_DWORD *)(v3 + 2092) = v15;
      v86 = *(_DWORD *)(v3 + 2096);
      *(_DWORD *)(v3 + 2096) = v16;
      if ( v17 )
      {
        v17();
        v13 = v77;
      }
      v77 = v13 | 3;
    if ( v75 )
      v75();
    if ( *(_BYTE *)(v3 + 2100) & 1 )
      *(_BYTE *)(v3 + 2100) |= 2u;
      v70 = 0;
      v71 = 0;
      v64 = __PAIR__(*(_DWORD *)(v3 + 1028), v5);
      j_Core::FileStorageArea::getStorageAreaForPath((int)&v65, (int)&v70, &v64);
      if ( v6 != &v65 )
        v18 = v69;
        *(_BYTE *)(v3 + 2100) = *(_BYTE *)(v3 + 2100) & 0xFC | v69 & 3;
        LODWORD(v19) = *(_DWORD *)&v65;
        HIDWORD(v19) = v66;
        v20 = v67;
        v67 = 0;
        v21 = v68;
        v84 = *(_QWORD *)v6;
        *(_QWORD *)v6 = v19;
        v85 = *(void (**)(void))(v3 + 2092);
        v22 = v85;
        *(_DWORD *)(v3 + 2092) = v20;
        v86 = *(_DWORD *)(v3 + 2096);
        *(_DWORD *)(v3 + 2096) = v21;
        if ( v22 )
        {
          v22();
          v18 = v69;
        }
        v69 = v18 | 3;
      if ( v67 )
        v67();
      if ( *(_BYTE *)(v3 + 2100) & 1 )
        *(_BYTE *)(v3 + 2100) |= 2u;
        v62 = 0;
        v63 = 0;
        v23 = *(_DWORD *)(v3 + 2060);
        LODWORD(v56) = v3 + 1036;
        HIDWORD(v56) = v23;
        j_Core::FileStorageArea::getStorageAreaForPath((int)&v57, (int)&v62, &v56);
        if ( v6 != &v57 )
          v24 = v61;
          *(_BYTE *)(v3 + 2100) = *(_BYTE *)(v3 + 2100) & 0xFC | v61 & 3;
          LODWORD(v25) = *(_DWORD *)&v57;
          HIDWORD(v25) = v58;
          v26 = v59;
          v59 = 0;
          v27 = v60;
          v84 = *(_QWORD *)v6;
          *(_QWORD *)v6 = v25;
          v85 = *(void (**)(void))(v3 + 2092);
          v28 = v85;
          *(_DWORD *)(v3 + 2092) = v26;
          v86 = *(_DWORD *)(v3 + 2096);
          *(_DWORD *)(v3 + 2096) = v27;
          if ( v28 )
          {
            v28();
            v24 = v61;
          }
          v61 = v24 | 3;
        if ( v59 )
          v59();
        if ( *(_BYTE *)(v3 + 2100) & 1 )
          v29 = 0;
          v30 = v70;
          if ( v70 == v62 )
            v29 = 1;
          *(_BYTE *)(v3 + 2064) = v29;
          (*(void (__fastcall **)(int *))(*(_DWORD *)v30 + 8))(&v55);
          j_std::__shared_ptr<Core::FileSystemImpl,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<Core::FileSystemImpl,std::default_delete<Core::FileSystemImpl>>(
            (int)&v84,
            &v55);
          v31 = v84;
          LODWORD(v84) = *(_DWORD *)(v3 + 2068);
          *(_DWORD *)(v3 + 2068) = v31;
          v32 = *(_DWORD *)(v3 + 2072);
          *(_DWORD *)(v3 + 2072) = HIDWORD(v84);
          HIDWORD(v84) = v32;
          if ( v32 )
            v33 = (unsigned int *)(v32 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
            }
            else
              v34 = (*v33)--;
            if ( v34 == 1 )
              v35 = (unsigned int *)(v32 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
              }
              else
                v36 = (*v35)--;
              if ( v36 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
          if ( v55 )
            (*(void (**)(void))(*(_DWORD *)v55 + 4))();
          v55 = 0;
          if ( !*(_BYTE *)(v3 + 2064) )
            (*(void (__fastcall **)(int *))(*(_DWORD *)v62 + 8))(&v54);
            j_std::__shared_ptr<Core::FileSystemImpl,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<Core::FileSystemImpl,std::default_delete<Core::FileSystemImpl>>(
              (int)&v84,
              &v54);
            v37 = v84;
            LODWORD(v84) = *(_DWORD *)(v3 + 2076);
            *(_DWORD *)(v3 + 2076) = v37;
            v38 = *(_DWORD *)(v3 + 2080);
            *(_DWORD *)(v3 + 2080) = HIDWORD(v84);
            HIDWORD(v84) = v38;
            if ( v38 )
              v39 = (unsigned int *)(v38 + 4);
                  v40 = __ldrex(v39);
                while ( __strex(v40 - 1, v39) );
                v40 = (*v39)--;
              if ( v40 == 1 )
                v41 = (unsigned int *)(v38 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v42 = __ldrex(v41);
                  while ( __strex(v42 - 1, v41) );
                }
                else
                  v42 = (*v41)--;
                if ( v42 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
            if ( v54 )
              (*(void (**)(void))(*(_DWORD *)v54 + 4))();
            v54 = 0;
        v43 = v63;
        if ( v63 )
          v44 = (unsigned int *)(v63 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
          else
            v45 = (*v44)--;
          if ( v45 == 1 )
            v46 = (unsigned int *)(v43 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 8))(v43);
                v47 = __ldrex(v46);
              while ( __strex(v47 - 1, v46) );
              v47 = (*v46)--;
            if ( v47 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 12))(v43);
      v48 = v71;
      if ( v71 )
        v49 = (unsigned int *)(v71 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
        else
          v50 = (*v49)--;
        if ( v50 == 1 )
          v51 = (unsigned int *)(v48 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 8))(v48);
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
            v52 = (*v51)--;
          if ( v52 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 12))(v48);
  return v3;
}


int __fastcall Core::File_c::_readExactly(Core::File_c *this, void *a2, unsigned __int64 a3, __int64 a4)
{
  Core::File_c *v4; // r4@1
  char v5; // r0@1
  int result; // r0@3
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  char v9; // [sp+Ch] [bp-2Ch]@1
  int (*v10)(void); // [sp+14h] [bp-24h]@5
  char v11; // [sp+1Ch] [bp-1Ch]@1
  __int64 v12; // [sp+20h] [bp-18h]@1

  v4 = this;
  v12 = 0LL;
  j_Core::FileImpl::read((Core::FileImpl *)&v9, a2, a3, (unsigned __int64 *)a4, SHIDWORD(a4), (unsigned __int64 *)&v12);
  v5 = v11;
  v11 |= 2u;
  if ( v5 & 1 && v12 == a4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    result = (unsigned __int8)(*((_BYTE *)v4 + 16) & 0xFC) | 1;
  }
  else
    v7 = j_operator new(4u);
    *(_DWORD *)v4 = v7;
    HIDWORD(v8) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v8) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    *v7 = "read failed.";
    *((_QWORD *)v4 + 1) = v8;
    result = *((_BYTE *)v4 + 16) & 0xFC;
  *((_BYTE *)v4 + 16) = result;
  if ( v10 )
    result = v10();
  return result;
}


void __fastcall Core::FileSystem_generic::~FileSystem_generic(Core::FileSystem_generic *this)
{
  Core::FileSystem_generic::~FileSystem_generic(this);
}


int __fastcall Core::File_c::_open(int a1, Core::FileImpl **a2, Core::FileSystemImpl *a3, const char **a4, char a5, int a6)
{
  int v6; // r4@1
  const char **v7; // r6@1
  Core::FileSystemImpl *v8; // r8@1
  Core::FileImpl **v9; // r9@1
  const char *v10; // r5@1
  const char *v11; // r0@1
  FILE *v12; // r7@1
  Core::FileImpl *v13; // r0@4
  int v14; // r2@4
  const char *v15; // r10@4
  Core::FileImpl *v16; // r5@4
  int v17; // r0@6
  Core::FileImpl *v18; // r0@6
  int result; // r0@8
  _DWORD *v20; // r0@9
  __int64 v21; // r1@9
  char v22; // [sp+4h] [bp-2Ch]@1
  int v23; // [sp+8h] [bp-28h]@6

  v6 = a1;
  v22 = a5;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = *a4;
  v11 = (const char *)j_Core::FileOpenMode::cMode((Core::FileOpenMode *)&v22);
  v12 = j_fopen(v10, v11);
  if ( v12 )
  {
    if ( a6 == 1 )
      j_setvbuf(v12, 0, 2, 0);
    v13 = (Core::FileImpl *)j_operator new(0x18u);
    v14 = *(_QWORD *)v7 >> 32;
    v15 = (const char *)*(_QWORD *)v7;
    v16 = v13;
    if ( v14 == -1 )
      v14 = j_strlen_0(v15);
    sub_21E91E0((void **)&v23, (unsigned int)v15, v14);
    j_Core::FileImpl::FileImpl(v16, v8, v22);
    *(_DWORD *)v16 = &off_2762F8C;
    v17 = v23;
    *((_DWORD *)v16 + 4) = v12;
    *((_DWORD *)v16 + 5) = v17;
    v18 = *v9;
    *v9 = v16;
    if ( v18 )
      (*(void (**)(void))(*(_DWORD *)v18 + 4))();
    *(_DWORD *)(v6 + 8) = 0;
    result = (unsigned __int8)(*(_BYTE *)(v6 + 16) & 0xFC) | 1;
  }
  else
    v20 = j_operator new(4u);
    *(_DWORD *)v6 = v20;
    HIDWORD(v21) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v21) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    *v20 = "fopen failed.";
    *(_QWORD *)(v6 + 8) = v21;
    result = *(_BYTE *)(v6 + 16) & 0xFC;
  *(_BYTE *)(v6 + 16) = result;
  return result;
}


void __fastcall Core::FileSystem::cleanPath_deprecated(int a1, int a2, __int64 *a3)
{
  Core::FileSystem::cleanPath_deprecated(a1, a2, a3);
}


_BOOL4 __fastcall Core::FileStdStreamBuf::isOpen(Core::FileStdStreamBuf *this)
{
  return *((_DWORD *)this + 8) != 0;
}


int __fastcall Core::FileSystemImpl::_getDirectoryFilesRecursively(int a1, int a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v4; // r11@1
  __int64 *v5; // r8@1
  __int64 v6; // kr00_8@1
  int v7; // r7@1
  int v8; // r10@1
  _DWORD *v9; // r6@2
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int *v12; // r0@10
  _DWORD *v13; // r0@12
  int v14; // r3@12
  int v15; // r0@14
  __int64 v16; // r8@15
  char *v17; // r1@16
  _DWORD *v18; // r7@16
  int (**v19)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@16
  unsigned int *v20; // r2@17
  signed int v21; // r6@19
  char *v22; // r5@23
  int (**v23)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@23
  int *v24; // r0@24
  __int64 v25; // kr08_8@27
  int v26; // r1@27
  int v27; // r1@27
  char v28; // r2@27
  int result; // r0@27
  int (*v30)(void); // r3@28
  _DWORD *v31; // [sp+10h] [bp-58h]@12
  void (*v32)(void); // [sp+18h] [bp-50h]@12
  int (__fastcall *v33)(int, int **, unsigned __int64 *); // [sp+1Ch] [bp-4Ch]@12
  __int64 v34; // [sp+20h] [bp-48h]@12
  char v35; // [sp+28h] [bp-40h]@12
  int (*v36)(void); // [sp+30h] [bp-38h]@27
  int v37; // [sp+34h] [bp-34h]@27
  unsigned __int8 v38; // [sp+38h] [bp-30h]@14
  char v39; // [sp+40h] [bp-28h]@16

  v4 = a3;
  v5 = a4;
  v6 = *a3;
  v7 = a2;
  v8 = a1;
  if ( HIDWORD(v6) != (_DWORD)v6 )
  {
    v9 = (_DWORD *)*a3;
    do
    {
      v12 = (int *)(*v9 - 12);
      if ( v12 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*v9 - 4);
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
          j_j_j_j__ZdlPv_9(v12);
      }
      ++v9;
    }
    while ( v9 != (_DWORD *)HIDWORD(v6) );
  }
  *((_DWORD *)v4 + 1) = v6;
  v34 = *v5;
  v13 = j_operator new(4u);
  *v13 = v4;
  v31 = v13;
  v32 = (void (*)(void))sub_1BA3DBC;
  v33 = sub_1BA3D0C;
  j_Core::FileSystemImpl::iterateOverDirectory((int)&v35, v7, &v34, v14, 642, 0, (int)&v31);
  if ( v32 )
    v32();
  v15 = v38;
  if ( v38 & 1 )
    v38 |= 2u;
    v30 = v36;
    *(_DWORD *)(v8 + 8) = 0;
    result = (unsigned __int8)(*(_BYTE *)(v8 + 16) & 0xFC) | 1;
    *(_BYTE *)(v8 + 16) = result;
    if ( v30 )
      result = v30();
  else
    v16 = *v4;
    if ( HIDWORD(v16) != (_DWORD)v16 )
      v17 = &v39;
      v18 = (_DWORD *)*v4;
      v19 = &pthread_create;
      do
        v24 = (int *)(*v18 - 12);
        if ( v24 != &dword_28898C0 )
          v20 = (unsigned int *)(*v18 - 4);
          if ( v19 )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 <= 0 )
            v22 = v17;
            v23 = v19;
            j_j_j_j__ZdlPv_9(v24);
            v19 = v23;
            v17 = v22;
        ++v18;
      while ( v18 != (_DWORD *)HIDWORD(v16) );
      v15 = v38;
    *((_DWORD *)v4 + 1) = v16;
    v25 = *(_QWORD *)&v35;
    *(_QWORD *)&v35 = *(_QWORD *)v8;
    *(_QWORD *)v8 = v25;
    v26 = (int)v36;
    v36 = 0;
    *(_DWORD *)(v8 + 8) = v26;
    v27 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)(v8 + 12) = v37;
    v28 = v15 & 3;
    v37 = v27;
    result = v15 | 3;
    LOBYTE(v27) = *(_BYTE *)(v8 + 16);
    v38 = result;
    *(_BYTE *)(v8 + 16) = v27 & 0xFC | v28;
  return result;
}


int __fastcall Core::FileStorageArea::createBasicDirectoryStorageArea(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int result; // r0@1
  int v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+8h] [bp-10h]@1
  char v8; // [sp+Ch] [bp-Ch]@1

  v7 = a2;
  v3 = a1;
  j_std::__shared_ptr<Core::BasicDirectoryStorageArea<Core::FileSystem_generic>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<Core::BasicDirectoryStorageArea<Core::FileSystem_generic>>,Core::FileAccessType &,Core::PathBuffer<std::string>>(
    (int)&v5,
    (int)&v8,
    &v7,
    a3);
  *(_DWORD *)v3 = v5;
  result = v6;
  *(_DWORD *)(v3 + 4) = v6;
  return result;
}


int __fastcall Core::FileSystemImpl::deleteDirectoryAndContentsRecursively(int a1, int a2, __int64 *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  void (__fastcall *v5)(char *); // r3@1
  int (*v6)(void); // r7@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // kr00_8@3
  unsigned __int64 v9; // kr08_8@5
  __int64 v10; // r0@8
  int result; // r0@8
  int v12; // [sp+0h] [bp-48h]@7
  int (*v13)(void); // [sp+8h] [bp-40h]@1
  void (__fastcall *v14)(int *, _DWORD); // [sp+Ch] [bp-3Ch]@7
  char v15; // [sp+10h] [bp-38h]@1
  int (*v16)(void); // [sp+18h] [bp-30h]@8
  int v17; // [sp+1Ch] [bp-2Ch]@8
  unsigned __int8 v18; // [sp+20h] [bp-28h]@1
  __int64 v19; // [sp+28h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(void (__fastcall **)(char *))(*(_DWORD *)a2 + 76);
  v19 = *a3;
  v5(&v15);
  v6 = 0;
  v13 = 0;
  if ( v18 & 1 )
  {
    v7 = (unsigned __int64 *)(v3 + 32);
    __dmb();
    do
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
      v9 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v9 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v6 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v3 + 12), 0, 0LL);
    if ( v13 )
    {
      v14(&v12, *(_DWORD *)(v3 + 12));
      v6 = v13;
    }
  }
  v10 = *(_QWORD *)&v15;
  *(_QWORD *)&v15 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v10;
  *(_DWORD *)(v4 + 8) = v16;
  v16 = 0;
  HIDWORD(v10) = v17;
  v17 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = HIDWORD(v10);
  HIDWORD(v10) = v18;
  *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 16) & 0xFC | v18 & 3;
  result = HIDWORD(v10) | 3;
  v18 = BYTE4(v10) | 3;
  if ( v6 )
    result = v6();
    if ( v16 )
      result = v16();
  return result;
}


int __fastcall Core::FileImpl::write(Core::FileImpl *this, const void *a2, unsigned __int64 a3, __int64 a4)
{
  const void *v4; // r5@1
  Core::FileImpl *v5; // r4@1
  int v6; // r7@1
  _DWORD *v7; // r0@1
  int v8; // r3@1
  int result; // r0@1
  __int64 v10; // r1@1
  char v11; // [sp+8h] [bp-40h]@1
  int (*v12)(void); // [sp+10h] [bp-38h]@3
  _DWORD *v13; // [sp+1Ch] [bp-2Ch]@1
  int (*v14)(void); // [sp+24h] [bp-24h]@1
  int (__fastcall *v15)(int, int); // [sp+28h] [bp-20h]@1

  v4 = a2;
  v5 = this;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a2 + 44))(&v11);
  v6 = *((_DWORD *)v4 + 2);
  v7 = j_operator new(4u);
  *v7 = v4;
  v13 = v7;
  v14 = (int (*)(void))sub_1B9F180;
  v15 = sub_1B9F160;
  result = j_Core::FileSystemImpl::_writeOperation(v6, (int)&v11, (int)&v13, v8, a4);
  v10 = *(_QWORD *)result;
  *(_QWORD *)result = *(_QWORD *)v5;
  *(_QWORD *)v5 = v10;
  LODWORD(v10) = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = 0;
  *((_DWORD *)v5 + 2) = v10;
  LODWORD(v10) = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = *((_DWORD *)v5 + 3);
  *((_DWORD *)v5 + 3) = v10;
  LOBYTE(v10) = *(_BYTE *)(result + 16);
  *((_BYTE *)v5 + 16) = *((_BYTE *)v5 + 16) & 0xFC | v10 & 3;
  *(_BYTE *)(result + 16) = v10 | 3;
  if ( v14 )
    result = v14();
  if ( v12 )
    result = v12();
  return result;
}


char *__fastcall Core::FileSystemImpl::_copyFile(int a1, int a2, __int64 *a3, __int64 *a4)
{
  __int64 v5; // [sp+8h] [bp-18h]@1
  __int64 v6; // [sp+10h] [bp-10h]@1

  v6 = *a3;
  v5 = *a4;
  return j_Core::BufferedFileOperations::copyFile<8192ull>(a1, a2, &v6, a2, &v5);
}


void __fastcall Core::FileSystemImpl::_isValidPath(int a1, int a2, int a3)
{
  const char **v3; // r9@1
  int v4; // r8@1
  const char *v5; // r6@1
  bool v6; // zf@1
  _DWORD *v7; // r0@5
  __int64 v8; // r1@5
  char v9; // r0@5
  int v10; // r7@6
  signed int v11; // r0@8
  int v12; // r11@8
  int v13; // r5@9
  int v14; // r4@9
  signed int v15; // r1@10
  signed int v16; // r0@10
  int v17; // r2@10
  signed int v18; // r1@12
  bool v19; // zf@21
  char *v20; // r6@24
  unsigned int v21; // r0@24
  const void **v22; // r0@25
  const void **v23; // r0@25
  char *v24; // r0@25
  char *v25; // r0@26
  char *v26; // r0@27
  const void **v27; // r0@30
  const void **v28; // r0@30
  char *v29; // r0@30
  char *v30; // r0@31
  void *v31; // r0@32
  const void **v32; // r0@34
  const void **v33; // r0@34
  char *v34; // r0@34
  char *v35; // r0@35
  void *v36; // r0@36
  void *v37; // r0@37
  unsigned int *v38; // r2@38
  signed int v39; // r1@40
  unsigned int *v40; // r2@45
  signed int v41; // r1@47
  unsigned int *v42; // r2@49
  signed int v43; // r1@51
  unsigned int *v44; // r2@53
  signed int v45; // r1@55
  unsigned int *v46; // r2@57
  signed int v47; // r1@59
  unsigned int *v48; // r2@61
  signed int v49; // r1@63
  unsigned int *v50; // r2@65
  signed int v51; // r1@67
  unsigned int *v52; // r2@69
  signed int v53; // r1@71
  unsigned int *v54; // r2@73
  signed int v55; // r1@75
  unsigned int *v56; // r2@77
  signed int v57; // r1@79
  int v58; // [sp+0h] [bp-60h]@34
  char *v59; // [sp+4h] [bp-5Ch]@34
  char *v60; // [sp+8h] [bp-58h]@34
  int v61; // [sp+Ch] [bp-54h]@30
  char *v62; // [sp+10h] [bp-50h]@30
  char *v63; // [sp+14h] [bp-4Ch]@30
  char *v64; // [sp+18h] [bp-48h]@25
  char *v65; // [sp+1Ch] [bp-44h]@25
  char *v66; // [sp+20h] [bp-40h]@25
  int v67; // [sp+28h] [bp-38h]@24
  int v68; // [sp+2Ch] [bp-34h]@8
  int v69; // [sp+30h] [bp-30h]@6
  int v70; // [sp+34h] [bp-2Ch]@6

  v3 = (const char **)a3;
  v4 = a1;
  v5 = *(const char **)a3;
  v6 = *(_DWORD *)a3 == 0;
  if ( *(_DWORD *)a3 )
    v6 = *v5 == 0;
  if ( v6 )
  {
    v7 = j_operator new(4u);
    *(_DWORD *)v4 = v7;
    HIDWORD(v8) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v8) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    *v7 = "path is empty";
    *(_QWORD *)(v4 + 8) = v8;
    v9 = *(_BYTE *)(v4 + 16) & 0xFC;
LABEL_43:
    *(_BYTE *)(v4 + 16) = v9;
    return;
  }
  v69 = 0;
  v70 = 0;
  v10 = *(_DWORD *)(a3 + 4);
  if ( v10 == -1 )
    v10 = j_strlen_0(v5);
  v11 = j_j_utf8proc_iterate((int)v5, v10, &v68);
  v12 = 0;
  if ( v11 < 1 )
    v13 = 0;
    v14 = 0;
  else
    do
    {
      v15 = v68;
      v10 -= v11;
      v5 += v11;
      v16 = 0;
      v17 = v14 ^ 1;
      if ( v68 == 92 )
      {
        v69 = ++v13;
        v15 = 47;
        v68 = 47;
      }
      v6 = v15 == 47;
      v18 = 0;
      if ( v6 )
        v18 = 1;
      else
        v16 = 1;
      v14 = v18 & v17;
      if ( !(v17 & 1) && !v16 )
        v70 = ++v12;
        v14 = 1;
      v11 = j_j_utf8proc_iterate((int)v5, v10, &v68);
    }
    while ( v11 > 0 );
  v19 = v14 == 0;
  if ( !v14 )
    v19 = (v13 | v12) == 0;
  if ( v19 )
    *(_DWORD *)(v4 + 8) = 0;
    v9 = *(_BYTE *)(v4 + 16) & 0xFC | 1;
    goto LABEL_43;
  sub_21E94B4((void **)&v67, "Invalid path: ");
  v20 = (char *)*v3;
  v21 = j_strlen_0(*v3);
  sub_21E7408((const void **)&v67, v20, v21);
  if ( v14 == 1 )
    v64 = (char *)&unk_28898CC;
    v22 = sub_21E7408((const void **)&v64, " : ", 3u);
    v65 = (char *)*v22;
    *v22 = &unk_28898CC;
    v23 = sub_21E7408((const void **)&v65, "/ is a separator not part of a directory name!", 0x2Eu);
    v66 = (char *)*v23;
    *v23 = &unk_28898CC;
    sub_21E72F0((const void **)&v67, (const void **)&v66);
    v24 = v66 - 12;
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v66 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = v65 - 12;
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v65 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = v64 - 12;
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v64 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v12 = v70;
  if ( v12 )
    j_std::to_string<unsigned int>(&v61, &v70);
    v27 = sub_21E82D8((const void **)&v61, 0, (unsigned int)" : ", (_BYTE *)3);
    v62 = (char *)*v27;
    *v27 = &unk_28898CC;
    v28 = sub_21E7408((const void **)&v62, " extra slashes.", 0xFu);
    v63 = (char *)*v28;
    *v28 = &unk_28898CC;
    sub_21E72F0((const void **)&v67, (const void **)&v63);
    v29 = v63 - 12;
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v63 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    v30 = v62 - 12;
    if ( (int *)(v62 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v62 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    v31 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v61 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
  if ( v69 )
    j_std::to_string<unsigned int>(&v58, &v69);
    v32 = sub_21E82D8((const void **)&v58, 0, (unsigned int)" : ", (_BYTE *)3);
    v59 = (char *)*v32;
    *v32 = &unk_28898CC;
    v33 = sub_21E7408((const void **)&v59, " bad slashes.", 0xDu);
    v60 = (char *)*v33;
    *v33 = &unk_28898CC;
    sub_21E72F0((const void **)&v67, (const void **)&v60);
    v34 = v60 - 12;
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v60 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    v35 = v59 - 12;
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v59 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    v36 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v58 - 4);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
  j_Core::Result::makeFailure(v4, &v67);
  v37 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v67 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
    else
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
}


int __fastcall Core::File_c::_setPosition(Core::File_c *this, int a2, unsigned __int64 a3)
{
  Core::File_c *v3; // r4@1
  int v4; // r5@1
  _DWORD *v5; // r0@2
  __int64 v6; // r1@2
  int result; // r0@2

  v3 = this;
  v4 = j_fseek(*(FILE **)(a2 + 16), a3, 0);
  if ( v4 )
  {
    v5 = j_operator new(8u);
    HIDWORD(v6) = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v6) = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
    *v5 = "fseek failed.";
    v5[1] = v4;
    *(_DWORD *)v3 = v5;
    *((_QWORD *)v3 + 1) = v6;
    result = *((_BYTE *)v3 + 16) & 0xFC;
    *((_BYTE *)v3 + 16) = result;
  }
  else
    *((_DWORD *)v3 + 2) = 0;
    result = (unsigned __int8)(*((_BYTE *)v3 + 16) & 0xFC) | 1;
  return result;
}


RakNet *__fastcall Core::FileSystem::renameFile(int a1, __int64 *a2, __int64 *a3)
{
  int v3; // r4@1
  RakNet *result; // r0@1
  void *v5; // [sp+8h] [bp-38h]@1
  int (*v6)(void); // [sp+10h] [bp-30h]@1
  int (__fastcall *v7)(int, int, int); // [sp+14h] [bp-2Ch]@1
  void *v8; // [sp+18h] [bp-28h]@1
  int (*v9)(void); // [sp+20h] [bp-20h]@1
  int (__fastcall *v10)(int, int, int); // [sp+24h] [bp-1Ch]@1
  __int64 v11; // [sp+28h] [bp-18h]@1
  __int64 v12; // [sp+30h] [bp-10h]@1

  v3 = a1;
  v12 = *a2;
  v11 = *a3;
  v8 = j_operator new(1u);
  v9 = (int (*)(void))sub_1B9D766;
  v10 = sub_1B9D73C;
  v5 = j_operator new(1u);
  v6 = (int (*)(void))sub_1B9D868;
  v7 = sub_1B9D794;
  result = j_Core::TransactionFrameSourceTarget::exec(v3, &v12, &v11, (int)&v8, (int)&v5);
  if ( v6 )
    result = (RakNet *)v6();
  if ( v9 )
    result = (RakNet *)v9();
  return result;
}


int __fastcall Core::StringSpan::substr(int result, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r1@3

  if ( a4 == -1 )
    a4 = *(_DWORD *)a2 - a3;
  v4 = *(_DWORD *)(a2 + 4) + a3;
  *(_DWORD *)result = a4;
  *(_DWORD *)(result + 4) = v4;
  return result;
}


int __fastcall Core::FileSystem::cleanPathSeparators_deprecated(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r5@1
  const char *v5; // r6@1
  bool v6; // zf@1
  _DWORD *v7; // r0@5
  __int64 v8; // r1@5
  int result; // r0@5
  int v10; // r7@6
  signed int v11; // r0@8
  char v12; // r4@9
  unsigned int v13; // r1@11
  bool v14; // zf@11
  bool v15; // zf@16
  int *v16; // r4@19
  signed int v17; // r0@19
  unsigned int v18; // r1@20
  int v19; // r2@21
  int v20; // r1@21
  unsigned int v21; // r0@25
  int v22; // r2@26
  int v23; // r0@26
  int *v24; // r4@27
  signed int v25; // r0@27
  unsigned int v26; // r1@28
  int v27; // r2@29
  int v28; // r1@29
  unsigned int v29; // [sp+0h] [bp-30h]@8
  int v30; // [sp+4h] [bp-2Ch]@19
  int v31; // [sp+8h] [bp-28h]@27

  v3 = a1;
  v4 = a2;
  *(_BYTE *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 1028) = 0;
  v5 = *(const char **)a3;
  v6 = *(_DWORD *)a3 == 0;
  if ( *(_DWORD *)a3 )
    v6 = *v5 == 0;
  if ( v6 )
  {
    v7 = j_operator new(4u);
    *(_DWORD *)v3 = v7;
    HIDWORD(v8) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v8) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    *v7 = "Empty path";
    *(_QWORD *)(v3 + 8) = v8;
    result = *(_BYTE *)(v3 + 16) & 0xFC;
  }
  else
    v10 = *(_DWORD *)(a3 + 4);
    if ( v10 == -1 )
      v10 = j_strlen_0(*(const char **)a3);
    v11 = j_j_utf8proc_iterate((int)v5, v10, (int *)&v29);
    if ( v11 >= 1 )
    {
      v12 = 0;
      while ( v12 & 1 )
      {
        v13 = v29;
        v10 -= v11;
        v5 += v11;
        v14 = v29 == 47;
        if ( v29 != 47 )
          v14 = v29 == 92;
        if ( !v14 )
        {
          v21 = *(_DWORD *)(v4 + 1028);
          if ( v21 < *(_DWORD *)v4 )
          {
            v22 = v4 + 4;
            *(_BYTE *)(v22 + v21) = 47;
            v23 = *(_DWORD *)(v4 + 1028) + 1;
            *(_DWORD *)(v4 + 1028) = v23;
            *(_BYTE *)(v22 + v23) = 0;
          }
          v24 = &v31;
          v31 = 0;
          v25 = j_j_utf8proc_encode_char(v13, (int)&v31);
          if ( v25 >= 1 )
            do
            {
              v26 = *(_DWORD *)(v4 + 1028);
              if ( v26 < *(_DWORD *)v4 )
              {
                v27 = v4 + 4;
                *(_BYTE *)(v27 + v26) = *(_BYTE *)v24;
                v28 = *(_DWORD *)(v4 + 1028) + 1;
                *(_DWORD *)(v4 + 1028) = v28;
                *(_BYTE *)(v27 + v28) = 0;
              }
              --v25;
              v24 = (int *)((char *)v24 + 1);
            }
            while ( v25 );
          v12 = 0;
LABEL_32:
          v11 = j_j_utf8proc_iterate((int)v5, v10, (int *)&v29);
          goto LABEL_33;
        }
        v11 = j_j_utf8proc_iterate((int)v5, v10, (int *)&v29);
        v12 = 1;
LABEL_33:
        if ( v11 <= 0 )
          goto LABEL_34;
      }
      do
        v15 = v29 == 47;
          v15 = v29 == 92;
        if ( v15 )
          goto LABEL_32;
        v16 = &v30;
        v30 = 0;
        v17 = j_j_utf8proc_encode_char(v29, (int)&v30);
        if ( v17 >= 1 )
          do
            v18 = *(_DWORD *)(v4 + 1028);
            if ( v18 < *(_DWORD *)v4 )
              v19 = v4 + 4;
              *(_BYTE *)(v19 + v18) = *(_BYTE *)v16;
              v20 = *(_DWORD *)(v4 + 1028) + 1;
              *(_DWORD *)(v4 + 1028) = v20;
              *(_BYTE *)(v19 + v20) = 0;
            --v17;
            v16 = (int *)((char *)v16 + 1);
          while ( v17 );
      while ( v11 > 0 );
    }
LABEL_34:
    *(_DWORD *)(v3 + 8) = 0;
    result = (unsigned __int8)(*(_BYTE *)(v3 + 16) & 0xFC) | 1;
  *(_BYTE *)(v3 + 16) = result;
  return result;
}


RakNet *__fastcall Core::FileSystem::openFile(int a1, __int64 *a2, int a3, char a4)
{
  int v4; // r4@1
  int v5; // r8@1
  char v6; // r9@1
  char v7; // r0@1
  __int64 v8; // r1@2
  __int64 v9; // kr00_8@2
  __int64 v10; // r1@3
  void (*v11)(void); // r6@3
  void (*v12)(void); // r3@3
  char v13; // r0@7
  __int64 v14; // r1@8
  __int64 v15; // kr08_8@8
  int v16; // r0@12
  int v17; // r1@12
  int v18; // r2@13
  int v19; // r0@13
  char v20; // r0@22
  int v21; // r4@29
  unsigned int *v22; // r1@30
  unsigned int v23; // r0@32
  unsigned int *v24; // r5@36
  unsigned int v25; // r0@38
  RakNet *result; // r0@45
  int v27; // [sp+8h] [bp-9Ch]@12
  int v28; // [sp+Ch] [bp-98h]@12
  char v29; // [sp+10h] [bp-94h]@10
  void (*v30)(void); // [sp+18h] [bp-8Ch]@10
  char *v31; // [sp+24h] [bp-80h]@9
  int v32; // [sp+28h] [bp-7Ch]@9
  char v33; // [sp+2Ch] [bp-78h]@9
  void (*v34)(void); // [sp+34h] [bp-70h]@23
  char v35; // [sp+3Ch] [bp-68h]@9
  int v36; // [sp+40h] [bp-64h]@9
  int v37; // [sp+44h] [bp-60h]@9
  char *v38; // [sp+48h] [bp-5Ch]@3
  int v39; // [sp+4Ch] [bp-58h]@3
  char v40; // [sp+50h] [bp-54h]@3
  int v41; // [sp+54h] [bp-50h]@3
  void (*v42)(void); // [sp+58h] [bp-4Ch]@3
  int v43; // [sp+5Ch] [bp-48h]@3
  char v44; // [sp+60h] [bp-44h]@3
  int v45; // [sp+68h] [bp-3Ch]@3
  int v46; // [sp+6Ch] [bp-38h]@3
  __int64 v47; // [sp+70h] [bp-34h]@1
  int v48; // [sp+78h] [bp-2Ch]@1
  int v49; // [sp+7Ch] [bp-28h]@2
  void (*v50)(void); // [sp+80h] [bp-24h]@2
  int v51; // [sp+84h] [bp-20h]@2
  char v52; // [sp+88h] [bp-1Ch]@1
  int v53; // [sp+90h] [bp-14h]@3
  int v54; // [sp+94h] [bp-10h]@3
  void (*v55)(void); // [sp+98h] [bp-Ch]@3
  int v56; // [sp+9Ch] [bp-8h]@3
  char v57; // [sp+A0h] [bp-4h]@16
  int v58; // [sp+A4h] [bp+0h]@1
  char v59; // [sp+A8h] [bp+4h]@1
  int v60; // [sp+4A8h] [bp+404h]@1
  RakNet *v61; // [sp+4ACh] [bp+408h]@1

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v61 = _stack_chk_guard;
  v58 = 1023;
  v60 = 0;
  v59 = 0;
  v47 = *a2;
  j_Core::FileSystem::cleanPath_deprecated((int)&v48, (int)&v58, &v47);
  v7 = v52;
  if ( v52 & 1 )
  {
    v52 |= 2u;
    v45 = 0;
    v46 = 0;
    v38 = &v59;
    v39 = v60;
    j_Core::FileStorageArea::getStorageAreaForPath((int)&v40, (int)&v45, (__int64 *)&v38);
    v52 = v52 & 0xFC | v44 & 3;
    LODWORD(v10) = *(_DWORD *)&v40;
    HIDWORD(v10) = v41;
    v11 = v42;
    v42 = 0;
    v53 = v48;
    v54 = v49;
    *(_QWORD *)&v48 = v10;
    v12 = v50;
    v50 = v11;
    v55 = v12;
    v56 = v51;
    v51 = v43;
    if ( v12 )
    {
      v12();
      v44 |= 3u;
      if ( v42 )
        v42();
    }
    else
    v13 = v52;
    if ( v52 & 1 )
      v52 |= 2u;
      (*(void (__fastcall **)(int *))(*(_DWORD *)v45 + 8))(&v37);
      v36 = 0;
      v31 = &v59;
      v32 = v60;
      j_Core::FileSystemImpl::openFile((int)&v33, v37, (int)&v36, (__int64 *)&v31, v6);
      if ( v35 & 1 )
      {
        v35 |= 2u;
        v16 = v36;
        v17 = v37;
        v27 = v36;
        v36 = 0;
        v37 = 0;
        v28 = v17;
        if ( &v27 == (int *)v5 )
        {
          v18 = v16;
        }
        else
          v18 = *(_DWORD *)v5;
          *(_DWORD *)v5 = v16;
          v27 = v18;
          v19 = *(_DWORD *)(v5 + 4);
          *(_DWORD *)(v5 + 4) = v17;
          v28 = v19;
        if ( v18 )
          j_Core::File::close((Core::File *)&v53, &v27);
          v57 |= 2u;
          if ( v55 )
            v55();
        if ( v28 )
          (*(void (**)(void))(*(_DWORD *)v28 + 4))();
        v28 = 0;
        if ( v27 )
          (*(void (**)(void))(*(_DWORD *)v27 + 4))();
        *(_DWORD *)(v4 + 8) = 0;
        v20 = *(_BYTE *)(v4 + 16);
        v27 = 0;
        *(_BYTE *)(v4 + 16) = v20 & 0xFC | 1;
      }
      else
        j_Core::FileSystemImpl::commit((Core::FileSystemImpl *)&v29, v37);
        j_Core::Result::merge(v4, (int)&v33, (int)&v29);
        if ( v30 )
          v30();
      if ( v34 )
        v34();
      if ( v36 )
        (*(void (**)(void))(*(_DWORD *)v36 + 4))();
      if ( v37 )
        (*(void (**)(void))(*(_DWORD *)v37 + 4))();
      v14 = *(_QWORD *)&v48;
      v15 = *(_QWORD *)v4;
      v48 = *(_QWORD *)v4;
      v49 = HIDWORD(v15);
      *(_QWORD *)v4 = v14;
      LODWORD(v14) = v50;
      v50 = 0;
      *(_DWORD *)(v4 + 8) = v14;
      LODWORD(v14) = *(_DWORD *)(v4 + 12);
      *(_DWORD *)(v4 + 12) = v51;
      v51 = v14;
      LOBYTE(v14) = *(_BYTE *)(v4 + 16);
      v52 = v13 | 3;
      *(_BYTE *)(v4 + 16) = v14 & 0xFC | v13 & 3;
    v21 = v46;
    if ( v46 )
      v22 = (unsigned int *)(v46 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        v24 = (unsigned int *)(v21 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
        if ( &pthread_create )
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
    if ( v50 )
      v50();
  }
  else
    v8 = *(_QWORD *)&v48;
    v9 = *(_QWORD *)v4;
    v48 = *(_QWORD *)v4;
    v49 = HIDWORD(v9);
    *(_QWORD *)v4 = v8;
    LODWORD(v8) = v50;
    v50 = 0;
    *(_DWORD *)(v4 + 8) = v8;
    LODWORD(v8) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v4 + 12) = v51;
    v51 = v8;
    LOBYTE(v8) = *(_BYTE *)(v4 + 16);
    v52 = v7 | 3;
    *(_BYTE *)(v4 + 16) = v8 & 0xFC | v7 & 3;
  result = (RakNet *)(_stack_chk_guard - v61);
  if ( _stack_chk_guard != v61 )
    j___stack_chk_fail_0((int)result);
  return result;
}


    if ( Core::FileSystem::fileExists((__int64 *)&v10) == 1 )
{
      v6 = *(_DWORD *)(v3 + 164);
      v7 = *(_DWORD *)(v6 - 12);
      Core::FileSystem::deleteFile((int)&v8, (__int64 *)&v6);
      if ( v9 )
        v9();
    }
  }
  v4 = 5;
  if ( v2 )
    v4 = 4;
  *(_DWORD *)(v3 + 40) = v4;
  if ( !*(_DWORD *)(v3 + 156) )
    sub_119C8E4();
  return (*(int (__fastcall **)(int))(v3 + 160))(v3 + 148);
}


int *__fastcall Core::File::~File(int *a1)
{
  int *v1; // r4@1
  int v2; // r0@4
  char v4; // [sp+4h] [bp-24h]@2
  void (*v5)(void); // [sp+Ch] [bp-1Ch]@2
  char v6; // [sp+14h] [bp-14h]@2

  v1 = a1;
  if ( *a1 )
  {
    Core::File::close((Core::File *)&v4, a1);
    v6 |= 2u;
    if ( v5 )
      v5();
  }
  v2 = v1[1];
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  v1[1] = 0;
  if ( *v1 )
    (*(void (**)(void))(*(_DWORD *)*v1 + 4))();
  *v1 = 0;
  return v1;
}


int __fastcall Core::FileSystemImpl::createOneDirectoryIfNotExisting(int a1, int a2, __int64 *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  void (__fastcall *v5)(char *); // r3@1
  int (*v6)(void); // r7@1
  unsigned __int64 *v7; // r0@2
  unsigned __int64 v8; // kr00_8@3
  unsigned __int64 v9; // kr08_8@5
  __int64 v10; // r0@8
  int result; // r0@8
  int v12; // [sp+0h] [bp-48h]@7
  int (*v13)(void); // [sp+8h] [bp-40h]@1
  void (__fastcall *v14)(int *, _DWORD); // [sp+Ch] [bp-3Ch]@7
  char v15; // [sp+10h] [bp-38h]@1
  int (*v16)(void); // [sp+18h] [bp-30h]@8
  int v17; // [sp+1Ch] [bp-2Ch]@8
  unsigned __int8 v18; // [sp+20h] [bp-28h]@1
  __int64 v19; // [sp+28h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(void (__fastcall **)(char *))(*(_DWORD *)a2 + 60);
  v19 = *a3;
  v5(&v15);
  v6 = 0;
  v13 = 0;
  if ( v18 & 1 )
  {
    v7 = (unsigned __int64 *)(v3 + 32);
    __dmb();
    do
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + 1, v7) );
      v9 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v9 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v6 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v3 + 12), 0, 0LL);
    if ( v13 )
    {
      v14(&v12, *(_DWORD *)(v3 + 12));
      v6 = v13;
    }
  }
  v10 = *(_QWORD *)&v15;
  *(_QWORD *)&v15 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v10;
  *(_DWORD *)(v4 + 8) = v16;
  v16 = 0;
  HIDWORD(v10) = v17;
  v17 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = HIDWORD(v10);
  HIDWORD(v10) = v18;
  *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 16) & 0xFC | v18 & 3;
  result = HIDWORD(v10) | 3;
  v18 = BYTE4(v10) | 3;
  if ( v6 )
    result = v6();
    if ( v16 )
      result = v16();
  return result;
}


  return Core::BufferedFileOperations::copyFile<8192ull>(Core::FileSystemImpl *,Core::Path,Core::FileSystemImpl *,Core::Path)::{lambda(Core::FileImpl *,Core::FileImpl *,void *,unsigned long long)#1}::operator()
{
           a2,
           a3,
           a4,
           a5);
}


int __fastcall Core::FileSystem_generic::_createOneDirectory(int a1, int a2, const char **a3)
{
  int v3; // r4@1
  int v4; // r5@1
  _DWORD *v5; // r0@2
  __int64 v6; // r1@2
  int result; // r0@2

  v3 = a1;
  v4 = j_mkdir(*a3, 0x1EDu);
  if ( v4 )
  {
    v5 = j_operator new(8u);
    HIDWORD(v6) = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v6) = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
    *v5 = "mkdir() failed";
    v5[1] = v4;
    *(_DWORD *)v3 = v5;
    *(_QWORD *)(v3 + 8) = v6;
    result = *(_BYTE *)(v3 + 16) & 0xFC;
    *(_BYTE *)(v3 + 16) = result;
  }
  else
    *(_DWORD *)(v3 + 8) = 0;
    result = (unsigned __int8)(*(_BYTE *)(v3 + 16) & 0xFC) | 1;
  return result;
}


int __fastcall Core::FileOpenMode::cModeWide(Core::FileOpenMode *this)
{
  unsigned __int8 v1; // r0@1
  signed int v3; // r0@14

  v1 = *(_BYTE *)this;
  if ( ((unsigned __int8)byte_283E46C ^ v1) & 0x3F )
  {
    if ( ((unsigned __int8)byte_283E484 ^ v1) & 0x3F )
    {
      if ( ((unsigned __int8)byte_283E49C ^ v1) & 0x3F )
      {
        if ( ((unsigned __int8)byte_283E4B4 ^ v1) & 0x3F )
        {
          if ( ((unsigned __int8)byte_283E4CC ^ v1) & 0x3F )
          {
            if ( ((unsigned __int8)byte_283E4E4 ^ v1) & 0x3F )
            {
              if ( ((unsigned __int8)byte_283E4FC ^ v1) & 0x3F )
              {
                if ( ((unsigned __int8)byte_283E514 ^ v1) & 0x3F )
                {
                  if ( ((unsigned __int8)byte_283E52C ^ v1) & 0x3F )
                  {
                    if ( ((unsigned __int8)byte_283E544 ^ v1) & 0x3F )
                    {
                      if ( ((unsigned __int8)byte_283E55C ^ v1) & 0x3F )
                      {
                        if ( (v1 ^ (unsigned __int8)byte_283E574) & 0x3F )
                          return 0;
                        v3 = 11;
                      }
                      else
                        v3 = 10;
                    }
                    else
                      v3 = 9;
                  }
                  else
                    v3 = 8;
                }
                else
                  v3 = 7;
              }
              else
                v3 = 6;
            }
            else
              v3 = 5;
          }
          else
            v3 = 4;
        }
        else
          v3 = 3;
      }
      else
        v3 = 2;
    }
    else
      v3 = 1;
  }
  else
    v3 = 0;
  return *((_DWORD *)&unk_283E460 + 6 * v3);
}


char *__fastcall Core::FileImpl::getOpenMode(Core::FileImpl *this)
{
  return (char *)this + 4;
}


_BYTE *__fastcall Core::FileOpenMode::FileOpenMode(_BYTE *result, int a2)
{
  signed int v2; // r12@1
  unsigned int v3; // r2@1
  bool v4; // zf@1
  bool v5; // zf@4
  bool v6; // zf@7
  bool v7; // zf@10
  bool v8; // zf@13
  bool v9; // zf@16
  bool v10; // zf@19
  bool v11; // zf@22
  bool v12; // zf@25
  bool v13; // zf@28
  bool v14; // zf@31

  v2 = 0;
  *result &= 0xC0u;
  v3 = a2 & 0xFFFFFFFD;
  v4 = (a2 & 0xFFFFFFFD) == dword_283E470;
  if ( (a2 & 0xFFFFFFFD) != dword_283E470 )
    v4 = v3 == dword_283E474;
  if ( v4 )
    goto LABEL_39;
  v2 = 1;
  v5 = v3 == dword_283E488;
  if ( v3 != dword_283E488 )
    v5 = v3 == dword_283E48C;
  if ( v5 )
  v2 = 2;
  v6 = v3 == dword_283E4A0;
  if ( v3 != dword_283E4A0 )
    v6 = v3 == dword_283E4A4;
  if ( v6 )
  v2 = 3;
  v7 = v3 == dword_283E4B8;
  if ( v3 != dword_283E4B8 )
    v7 = v3 == dword_283E4BC;
  if ( v7 )
  v2 = 4;
  v8 = v3 == dword_283E4D0;
  if ( v3 != dword_283E4D0 )
    v8 = v3 == dword_283E4D4;
  if ( v8 )
  v2 = 5;
  v9 = v3 == dword_283E4E8;
  if ( v3 != dword_283E4E8 )
    v9 = v3 == dword_283E4EC;
  if ( v9 )
  v2 = 6;
  v10 = v3 == dword_283E500;
  if ( v3 != dword_283E500 )
    v10 = v3 == dword_283E504;
  if ( v10 )
  v2 = 7;
  v11 = v3 == dword_283E518;
  if ( v3 != dword_283E518 )
    v11 = v3 == dword_283E51C;
  if ( v11 )
  v2 = 8;
  v12 = v3 == dword_283E530;
  if ( v3 != dword_283E530 )
    v12 = v3 == dword_283E534;
  if ( v12 )
  v2 = 9;
  v13 = v3 == dword_283E548;
  if ( v3 != dword_283E548 )
    v13 = v3 == dword_283E54C;
  if ( v13 )
  v2 = 10;
  v14 = v3 == dword_283E560;
  if ( v3 != dword_283E560 )
    v14 = v3 == dword_283E564;
  if ( v14 || (v2 = 11, v3 == dword_283E578) || v3 == dword_283E57C )
LABEL_39:
    *result = *((_BYTE *)&unk_283E460 + 24 * v2 + 12);
  return result;
}


signed int __fastcall Core::StringSpan::rfind(Core::StringSpan *this, int a2)
{
  signed int v2; // lr@1
  signed int v3; // r2@1
  int v4; // r3@2
  int v5; // r12@2
  int v6; // r2@3
  int v8; // r0@12

  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)this >> 2;
  if ( v3 < 1 )
  {
LABEL_8:
    if ( v2 == 3 )
    {
      v8 = *((_DWORD *)this + 1);
      if ( *(_BYTE *)(v8 + 2) == a2 )
        return 2;
    }
    else
      if ( v2 != 2 )
      {
        if ( v2 != 1 )
          return -1;
        v8 = *((_DWORD *)this + 1);
LABEL_21:
        if ( *(_BYTE *)v8 != a2 )
        v2 = 1;
        return v2 - 1;
      }
    if ( *(_BYTE *)(v8 + 1) == a2 )
      return 1;
    goto LABEL_21;
  }
  v4 = v3 + 1;
  v5 = *((_DWORD *)this + 1) - 2;
  while ( 1 )
    v6 = v5 + v2;
    if ( *(_BYTE *)(v5 + v2 + 1) == a2 )
      break;
    if ( *(_BYTE *)(v5 + v2) == a2 )
      --v2;
    if ( *(_BYTE *)(v6 - 1) == a2 )
      v2 -= 2;
    if ( *(_BYTE *)(v6 - 2) == a2 )
      v2 -= 3;
    --v4;
    v2 -= 4;
    if ( v4 <= 1 )
      goto LABEL_8;
  if ( !v2 )
    return -1;
  return v2 - 1;
}


char *__fastcall Core::FileSystem_generic::_iterateOverDirectory(int a1, int a2, const char **a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  DIR *v8; // r10@1
  struct dirent *v9; // r4@2
  __int64 v10; // r6@3
  unsigned int v11; // r0@5
  int v12; // r9@5
  int v13; // r0@6
  int v14; // r1@8
  bool v15; // zf@10
  int v16; // r4@14
  int v17; // r4@17
  __int64 v18; // r1@22
  void (*v19)(void); // r6@22
  void (*v20)(void); // r3@22
  __int64 v21; // r1@27
  void (*v22)(void); // r6@27
  void (*v23)(void); // r3@27
  char v24; // r0@31
  void (__fastcall *v25)(char *); // r3@37
  __int64 v26; // r1@39
  void (*v27)(void); // r6@39
  void (*v28)(void); // r3@39
  __int64 v29; // r2@48
  void (*v30)(void); // r0@48
  void *(__fastcall *v31)(char ***, void **); // r1@48
  const char *v32; // r1@50
  int v33; // r0@50
  int v34; // r9@52
  _DWORD *v35; // r0@57
  __int64 v36; // r1@57
  _DWORD *v37; // r0@59
  char v38; // r0@59
  void (*v39)(void); // r3@59
  char *result; // r0@67
  int v41; // [sp+2Ch] [bp-DACh]@2
  int v42; // [sp+30h] [bp-DA8h]@1
  const char **v43; // [sp+4Ch] [bp-D8Ch]@1
  char v44; // [sp+50h] [bp-D88h]@38
  void (*v45)(void); // [sp+58h] [bp-D80h]@37
  int v46; // [sp+5Ch] [bp-D7Ch]@38
  char *v47; // [sp+60h] [bp-D78h]@37
  int v48; // [sp+64h] [bp-D74h]@37
  char v49; // [sp+68h] [bp-D70h]@39
  int v50; // [sp+6Ch] [bp-D6Ch]@39
  void (*v51)(void); // [sp+70h] [bp-D68h]@39
  void *(__fastcall *v52)(char ***, void **); // [sp+74h] [bp-D64h]@39
  char v53; // [sp+78h] [bp-D60h]@39
  char v54; // [sp+80h] [bp-D58h]@27
  int v55; // [sp+84h] [bp-D54h]@27
  void (*v56)(void); // [sp+88h] [bp-D50h]@27
  void *(__fastcall *v57)(char ***, void **); // [sp+8Ch] [bp-D4Ch]@27
  char v58; // [sp+90h] [bp-D48h]@27
  char v59; // [sp+98h] [bp-D40h]@22
  int v60; // [sp+9Ch] [bp-D3Ch]@22
  void (*v61)(void); // [sp+A0h] [bp-D38h]@22
  void *(__fastcall *v62)(char ***, void **); // [sp+A4h] [bp-D34h]@22
  char v63; // [sp+A8h] [bp-D30h]@22
  _DWORD *v64; // [sp+B0h] [bp-D28h]@59
  void (*v65)(void); // [sp+B8h] [bp-D20h]@59
  void *(__fastcall *v66)(char ***, void **); // [sp+BCh] [bp-D1Ch]@59
  char v67; // [sp+C0h] [bp-D18h]@59
  __int64 v68; // [sp+C8h] [bp-D10h]@17
  void (*v69)(void); // [sp+D0h] [bp-D08h]@22
  void *(__fastcall *v70)(char ***, void **); // [sp+D4h] [bp-D04h]@22
  int v71; // [sp+D8h] [bp-D00h]@52
  int v72; // [sp+DCh] [bp-CFCh]@52
  int v73; // [sp+E0h] [bp-CF8h]@52
  int v74; // [sp+E4h] [bp-CF4h]@52
  int v75; // [sp+E8h] [bp-CF0h]@52
  __int64 v76; // [sp+F8h] [bp-CE0h]@18
  int v77; // [sp+118h] [bp-CC0h]@18
  int v78; // [sp+120h] [bp-CB8h]@18
  char *v79; // [sp+130h] [bp-CA8h]@5
  int v80; // [sp+134h] [bp-CA4h]@5
  void *v81; // [sp+138h] [bp-CA0h]@5
  int v82; // [sp+13Ch] [bp-C9Ch]@5
  int v83; // [sp+140h] [bp-C98h]@5
  int v84; // [sp+144h] [bp-C94h]@5
  __int64 v85; // [sp+148h] [bp-C90h]@5
  int v86; // [sp+150h] [bp-C88h]@5
  __int64 v87; // [sp+158h] [bp-C80h]@4
  __int64 v88; // [sp+160h] [bp-C78h]@22
  void (*v89)(void); // [sp+168h] [bp-C70h]@2
  void *(__fastcall *v90)(char ***, void **); // [sp+16Ch] [bp-C6Ch]@22
  char v91; // [sp+170h] [bp-C68h]@2
  char v92; // [sp+174h] [bp-C64h]@53
  void (__fastcall *v93)(char *, char *, signed int); // [sp+17Ch] [bp-C5Ch]@53
  __int64 v94; // [sp+188h] [bp-C50h]@15
  void (*v95)(void); // [sp+190h] [bp-C48h]@15
  void *(__fastcall *v96)(char ***, void **); // [sp+194h] [bp-C44h]@15
  char v97; // [sp+198h] [bp-C40h]@15
  char v98; // [sp+19Ch] [bp-C3Ch]@15
  int v99; // [sp+59Ch] [bp-83Ch]@15
  char v100; // [sp+5A0h] [bp-838h]@52
  char v101; // [sp+5A4h] [bp-834h]@52
  int v102; // [sp+9A4h] [bp-434h]@52
  int v103; // [sp+9A8h] [bp-430h]@5
  char v104; // [sp+9ACh] [bp-42Ch]@5
  int v105; // [sp+DACh] [bp-2Ch]@5
  RakNet *v106; // [sp+DB0h] [bp-28h]@1

  v7 = a1;
  v43 = a3;
  v42 = a2;
  v106 = _stack_chk_guard;
  v8 = j_opendir(*a3);
  if ( !v8 )
  {
    if ( !j_getAssetManager_android() )
    {
      v35 = j_operator new(4u);
      *(_DWORD *)v7 = v35;
      HIDWORD(v36) = std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
      LODWORD(v36) = std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
      *v35 = "Not a directory.";
      *(_QWORD *)(v7 + 8) = v36;
      *(_BYTE *)(v7 + 16) &= 0xFCu;
      goto LABEL_67;
    }
    v32 = *v43;
    j_AAssetManager_openDir();
    v33 = j_AAssetDir_getNextFileName();
    if ( !v33 )
      j_AAssetDir_close();
      *(_DWORD *)(v7 + 8) = 0;
      *(_BYTE *)(v7 + 16) = *(_BYTE *)(v7 + 16) & 0xFC | 1;
    if ( a5 & 2 )
      while ( 1 )
      {
        LODWORD(v68) = &unk_257BC67;
        HIDWORD(v68) = 0;
        v71 = 0;
        v72 = 0;
        v73 = 2;
        v74 = 0;
        v75 = 0;
        v69 = (void (*)(void))v33;
        v70 = (void *(__fastcall *)(char ***, void **))-1;
        v103 = 1023;
        v105 = 0;
        v104 = 0;
        LODWORD(v94) = *v43;
        HIDWORD(v94) = -1;
        v95 = (void (*)(void))v33;
        v96 = (void *(__fastcall *)(char ***, void **))-1;
        j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v100, (int)&v94, 2);
        v34 = v102;
        j___aeabi_memcpy4_0((int)&v104, (int)&v101, v102 + 1);
        v101 = 0;
        v105 = v34;
        v102 = 0;
        LODWORD(v68) = &v104;
        HIDWORD(v68) = v34;
        v73 = 0;
        if ( !*(_DWORD *)(a7 + 8) )
          break;
        (*(void (__fastcall **)(char *))(a7 + 12))(&v92);
        if ( v93 )
          v93(&v92, &v92, 3);
        v33 = j_AAssetDir_getNextFileName();
        if ( !v33 )
          goto LABEL_66;
      }
    else
        {
LABEL_66:
          j_AAssetDir_close();
          *(_DWORD *)(v7 + 8) = 0;
          *(_BYTE *)(v7 + 16) &= 0xFCu;
          goto LABEL_67;
        }
LABEL_70:
    sub_21E5F48();
  }
  v41 = v7;
  v89 = 0;
  v91 = 1;
  v9 = j_readdir(v8);
  if ( !v9 )
    goto LABEL_48;
  HIDWORD(v10) = -1;
  while ( 1 )
    LODWORD(v10) = (char *)v9 + 19;
    v87 = v10;
    if ( j_Core::Path::isDotOrDotDot((int *)&v87) == 1 )
      goto LABEL_47;
    v79 = (char *)&unk_257BC67;
    v80 = 0;
    v81 = &unk_257BC67;
    v82 = 0;
    v83 = 0;
    v84 = 0;
    v85 = 2LL;
    v86 = 0;
    v11 = v9->d_name[7];
    v103 = 1023;
    v105 = 0;
    v104 = 0;
    v12 = (v11 >> 2) & 1;
      goto LABEL_73;
    v13 = (v11 >> 2) & 1;
    if ( v12 )
      v13 = 1;
    v14 = a5 & 0x200;
    if ( a5 & 0x200 )
      v14 = 1;
    v15 = (a5 & 0x68) == 0;
    if ( !(a5 & 0x68) )
      v15 = (v13 & v14) == 0;
    if ( v15 )
      v16 = 0;
      HIDWORD(v10) = -1;
LABEL_73:
      v94 = *(_QWORD *)v43;
      v95 = (void (*)(void))&v9->d_name[8];
      v96 = (void *(__fastcall *)(char ***, void **))-1;
      j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v97, (int)&v94, 2);
      v16 = v99;
      j___aeabi_memcpy4_0((int)&v104, (int)&v98, v99 + 1);
      v105 = v16;
      v98 = 0;
      v99 = 0;
    v79 = &v104;
    v80 = v16;
    *(_QWORD *)&v81 = v10;
    LODWORD(v85) = v12;
    if ( a5 & 0x68 )
      break;
LABEL_19:
      if ( a5 & 0x100 )
          goto LABEL_70;
        (*(void (__fastcall **)(char *))(a7 + 12))(&v54);
        v91 = v91 & 0xFC | v58 & 3;
        LODWORD(v21) = *(_DWORD *)&v54;
        HIDWORD(v21) = v55;
        v22 = v56;
        v56 = 0;
        v68 = v88;
        v88 = v21;
        v23 = v89;
        v89 = v22;
        v69 = v23;
        v70 = v90;
        v90 = v57;
        if ( v23 )
          v23();
          v58 |= 3u;
          if ( v56 )
            v56();
        else
        HIDWORD(v10) = -1;
        if ( !(v91 & 1) )
          goto LABEL_48;
        v91 |= 2u;
      if ( a5 & 0x200 )
        v47 = &v104;
        v48 = v105;
        v45 = 0;
        v25 = *(void (__fastcall **)(char *))(a7 + 8);
        if ( v25 )
          v25(&v44);
          v46 = *(_DWORD *)(a7 + 12);
          v45 = *(void (**)(void))(a7 + 8);
        j_Core::FileSystemImpl::iterateOverDirectory((int)&v49, v42, (__int64 *)&v47, (int)v25, a5, a6, (int)&v44);
        v91 = v91 & 0xFC | v53 & 3;
        LODWORD(v26) = *(_DWORD *)&v49;
        HIDWORD(v26) = v50;
        v27 = v51;
        v51 = 0;
        v88 = v26;
        v28 = v89;
        v89 = v27;
        v69 = v28;
        v90 = v52;
        if ( v28 )
          v28();
          v53 |= 3u;
          if ( v51 )
            v51();
        if ( v45 )
          v45();
        v24 = v91;
LABEL_46:
        v91 = v24 | 2;
        goto LABEL_47;
      if ( a5 & 0x80 )
        (*(void (__fastcall **)(char *))(a7 + 12))(&v59);
        v91 = v91 & 0xFC | v63 & 3;
        LODWORD(v18) = *(_DWORD *)&v59;
        HIDWORD(v18) = v60;
        v19 = v61;
        v61 = 0;
        v88 = v18;
        v20 = v89;
        v89 = v19;
        v69 = v20;
        v90 = v62;
        if ( v20 )
          v20();
          v63 |= 3u;
          if ( v61 )
            v61();
        goto LABEL_46;
LABEL_47:
    v9 = j_readdir(v8);
    if ( !v9 )
      goto LABEL_48;
  v17 = j_stat(&v104, (struct stat *)&v68);
  if ( !v17 )
    HIDWORD(v85) = v78;
    v86 = v77;
    *(_QWORD *)&v83 = v76;
    goto LABEL_19;
  v37 = j_operator new(8u);
  *v37 = "Stat failed";
  v37[1] = v17;
  v64 = v37;
  v66 = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
  v38 = v67;
  v67 &= 0xFCu;
  v91 &= 0xFCu;
  v65 = 0;
  v94 = v88;
  v88 = *(_QWORD *)&v64;
  v39 = v89;
  v89 = (void (*)(void))std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
  v95 = v39;
  v96 = v90;
  v90 = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
  if ( v39 )
    v39();
    v67 |= 3u;
    if ( v65 )
      v65();
  else
    v67 = v38 | 3;
LABEL_48:
  j_closedir(v8);
  v29 = v88;
  v88 = *(_QWORD *)v41;
  *(_QWORD *)v41 = v29;
  v30 = v89;
  *(_DWORD *)(v41 + 8) = v30;
  v31 = v90;
  v90 = *(void *(__fastcall **)(char ***, void **))(v41 + 12);
  *(_DWORD *)(v41 + 12) = v31;
  *(_BYTE *)(v41 + 16) = *(_BYTE *)(v41 + 16) & 0xFC | v91 & 3;
LABEL_67:
  result = (char *)(_stack_chk_guard - v106);
  if ( _stack_chk_guard != v106 )
    j___stack_chk_fail_0((int)result);
  return result;
}


void __fastcall Core::FileSystemImpl::~FileSystemImpl(Core::FileSystemImpl *this)
{
  Core::FileSystemImpl *v1; // r4@1
  Core::FileSystemImpl *v2; // r1@1
  void *v3; // r0@4
  char v4; // [sp+4h] [bp-1Ch]@2
  void (*v5)(void); // [sp+Ch] [bp-14h]@2

  v1 = this;
  *(_DWORD *)this = &off_2726840;
  v2 = (Core::FileSystemImpl *)*((_DWORD *)this + 3);
  if ( v2 )
  {
    j_Core::FileStorageArea::_endTransaction((Core::FileStorageArea *)&v4, v2, (int)this);
    if ( v5 )
      v5();
  }
  v3 = (void *)*((_DWORD *)v1 + 17);
  if ( v3 )
    j_operator delete(v3);
  j_operator delete((void *)v1);
}


Core::FileStdStreamBuf *__fastcall Core::FileStdStreamBuf::FileStdStreamBuf(Core::FileStdStreamBuf *this)
{
  Core::FileStdStreamBuf *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26D40A8;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  sub_21C9520((unsigned int **)this + 7);
  *(_DWORD *)v1 = &off_272676C;
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  *((_BYTE *)v1 + 40) &= 0xC0u;
  *((_DWORD *)v1 + 1) = (char *)v1 + 45;
  *((_DWORD *)v1 + 2) = (char *)v1 + 45;
  *((_DWORD *)v1 + 3) = (char *)v1 + 45;
  *((_DWORD *)v1 + 4) = (char *)v1 + 41;
  *((_DWORD *)v1 + 5) = (char *)v1 + 41;
  *((_DWORD *)v1 + 6) = (char *)v1 + 4136;
  return v1;
}


      if ( Core::FileSystem::fileExists(&v110) == 1 )
{
        LODWORD(v106) = &v141;
        HIDWORD(v106) = v142;
        v104 = v121;
        v105 = *(v121 - 3);
        Core::FileSystem::copyFile((int)&v107, &v106, (__int64 *)&v104);
        v109 |= 2u;
        if ( v108 )
          v108();
      }
    }
    v26 = v121 - 3;
    if ( v121 - 3 != &dword_28898C0 )
    {
      v91 = v121 - 1;
      if ( &pthread_create )
      {
        __dmb();
        do
          v92 = __ldrex(v91);
        while ( __strex(v92 - 1, v91) );
      else
        v92 = (*v91)--;
      if ( v92 <= 0 )
        j_j_j_j_j__ZdlPv_9(v26);
    v27 = 1;
  }
  else
  {
    v27 = 2;
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v2 + 216))(v2, v27);
  if ( (*(int (__fastcall **)(int, const char *))(*(_DWORD *)v4 + 24))(v4, "android/content/ContextWrapper") )
    v28 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 132))(v4);
    v28 = 0;
  if ( (*(int (__fastcall **)(int, const char *))(*(_DWORD *)v4 + 24))(v4, "java/io/File") )
    v30 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 132))(v4);
    v30 = 0;
  v31 = _JNIEnv::CallObjectMethod(v4, *(_DWORD *)(v2 + 440), v28, v29);
  v33 = _JNIEnv::CallObjectMethod(v4, v31, v30, v32);
  JStringToString::JStringToString(&v103, v4, v33);
  EntityInteraction::setInteractText((int *)(v2 + 408), &v103);
  v34 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v103 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
    else
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9(v34);
  sub_DA73B4(&v102, (int *)(v2 + 408));
  sub_DA73D4((const void **)&v102, "/", 1u);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v2 + 412),
    &v102);
  v35 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v102 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9(v35);
    v37 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 132))(v4);
    v37 = 0;
  v38 = _JNIEnv::CallObjectMethod(v4, *(_DWORD *)(v2 + 440), v37, v36);
  v40 = _JNIEnv::CallObjectMethod(v4, v38, v30, v39);
  JStringToString::JStringToString(&v101, v4, v40);
  EntityInteraction::setInteractText((int *)(v2 + 404), &v101);
  v42 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v101 - 4);
        v76 = __ldrex(v75);
        v41 = v76 - 1;
      while ( __strex(v76 - 1, v75) );
      v76 = *v75;
      v41 = *v75 - 1;
      *v75 = v41;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9(v42);
  v43 = _JNIEnv::CallBooleanMethod(v4, *(_DWORD *)(v2 + 440), v95, v41);
  if ( v43 )
    LOBYTE(v43) = 1;
  *(_BYTE *)(v2 + 449) = v43;
  v45 = _JNIEnv::CallBooleanMethod(v4, *(_DWORD *)(v2 + 440), v94, v44);
  if ( v45 )
    LOBYTE(v45) = 1;
  *(_BYTE *)(v2 + 450) = v45;
  v47 = _JNIEnv::CallBooleanMethod(v4, *(_DWORD *)(v2 + 440), v93, v46);
  if ( v47 )
    LOBYTE(v47) = 1;
  *(_BYTE *)(v2 + 436) = v47;
  v49 = _JNIEnv::CallStaticObjectMethod(v4, gHardwareInformationClass, gMethodGetDeviceModelName, v48);
  JStringToString::JStringToString(&v100, v4, v49);
  EntityInteraction::setInteractText((int *)(v2 + 16), &v100);
  v51 = _JNIEnv::CallStaticObjectMethod(v4, gHardwareInformationClass, gMethodGetAndroidVersion, v50);
  JStringToString::JStringToString(&v99, v4, v51);
  EntityInteraction::setInteractText((int *)(v2 + 20), &v99);
  v53 = _JNIEnv::CallStaticObjectMethod(v4, gHardwareInformationClass, gMethodGetCPUType, v52);
  JStringToString::JStringToString(&v98, v4, v53);
  EntityInteraction::setInteractText((int *)(v2 + 24), &v98);
  v55 = _JNIEnv::CallStaticObjectMethod(v4, gHardwareInformationClass, gMethodGetCPUName, v54);
  JStringToString::JStringToString(&v97, v4, v55);
  EntityInteraction::setInteractText((int *)(v2 + 28), &v97);
  v57 = _JNIEnv::CallStaticObjectMethod(v4, gHardwareInformationClass, gMethodGetCPUFeatures, v56);
  JStringToString::JStringToString(&v96, v4, v57);
  EntityInteraction::setInteractText((int *)(v2 + 32), &v96);
  *(_DWORD *)(v2 + 36) = _JNIEnv::CallStaticIntMethod(v4, gHardwareInformationClass, gMethodGetNumCores, v58);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 668))(v2);
  *(_QWORD *)(v2 + 40) = AppPlatform::getTotalPhysicalMemory((AppPlatform *)v2);
  *(_DWORD *)(v2 + 52) = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 324))(v2);
  *(_DWORD *)(v2 + 56) = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 328))(v2);
  if ( mMethodHasWriteExternalStoragePermission
    && _JNIEnv::CallBooleanMethod(v4, *(_DWORD *)(v2 + 440), mMethodHasWriteExternalStoragePermission, v59) )
    AppPlatform_android::_createMediaExclusion((AppPlatform_android *)v2);
  v60 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v96 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9(v60);
  v61 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v97 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9(v61);
  v62 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v98 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9(v62);
  v63 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v99 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9(v63);
  v64 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v100 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9(v64);
  v65 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v124 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j_j__ZdlPv_9(v65);
  JVMAttacher::~JVMAttacher((JVMAttacher *)&v125);
  if ( _stack_chk_guard != v143 )
    _stack_chk_fail(_stack_chk_guard - v143);
  return 0;
}


int __fastcall Core::FileSystemImpl::readFileData(int a1, int a2, __int64 *a3, unsigned __int64 *a4)
{
  int v4; // r7@1
  int v5; // r4@1
  unsigned __int64 *v6; // r6@1
  void (__fastcall *v7)(int *); // r5@1
  unsigned int v8; // r2@1
  int v9; // r1@1
  unsigned __int64 *v10; // r0@2
  unsigned __int64 v11; // kr00_8@3
  unsigned __int64 *v12; // r0@4
  unsigned __int64 v13; // kr08_8@5
  unsigned __int64 v14; // kr10_8@7
  unsigned __int64 v15; // kr18_8@9
  unsigned __int64 *v16; // r0@11
  unsigned __int64 v17; // kr20_8@12
  unsigned __int64 v18; // kr28_8@14
  __int64 v19; // r2@15
  int v20; // r1@15
  int result; // r0@15
  int v22; // [sp+0h] [bp-38h]@1
  int v23; // [sp+8h] [bp-30h]@15
  int v24; // [sp+Ch] [bp-2Ch]@15
  char v25; // [sp+10h] [bp-28h]@1
  __int64 v26; // [sp+18h] [bp-20h]@1

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = *(void (__fastcall **)(int *))(*(_DWORD *)a2 + 52);
  v26 = *a3;
  v7(&v22);
  v8 = (*v6 >> 32) - *v6;
  v9 = v25 & 1;
  if ( v25 & 1 )
  {
    v10 = (unsigned __int64 *)(v4 + 40);
    __dmb();
    do
      v11 = __ldrexd(v10);
    while ( __strexd(v11 + 1, v10) );
    v12 = (unsigned __int64 *)(v4 + 48);
      v13 = __ldrexd(v12);
    while ( __strexd(v13 + v8, v12) );
      v14 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v14 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v15 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v15 + v8, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v16 = (unsigned __int64 *)(v4 + 56);
      v17 = __ldrexd(v16);
    while ( __strexd(v17 + 1, v16) );
      v18 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v18 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(v4 + 12), v9, v8);
  v19 = *(_QWORD *)&v22;
  *(_QWORD *)&v22 = *(_QWORD *)v5;
  *(_QWORD *)v5 = v19;
  *(_DWORD *)(v5 + 8) = v23;
  v23 = 0;
  v20 = v24;
  v24 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = v20;
  result = (unsigned __int8)(*(_BYTE *)(v5 + 16) & 0xFC) | v25 & 3;
  *(_BYTE *)(v5 + 16) = result;
  return result;
}


int __fastcall Core::BufferedFileOperations::moveFile(int a1, int a2, __int64 *a3, int a4, __int64 *a5)
{
  __int64 *v5; // r6@1
  int v6; // r5@1
  int v7; // r4@1
  int v8; // r0@1
  __int64 v9; // r1@2
  int result; // r0@2
  __int64 v11; // r2@3
  int v12; // r0@3
  int v13; // r1@3
  int (*v14)(void); // r3@3
  __int64 v15; // [sp+8h] [bp-58h]@3
  char v16; // [sp+10h] [bp-50h]@3
  int v17; // [sp+18h] [bp-48h]@3
  int v18; // [sp+1Ch] [bp-44h]@3
  char v19; // [sp+20h] [bp-40h]@3
  __int64 v20; // [sp+28h] [bp-38h]@1
  __int64 v21; // [sp+30h] [bp-30h]@1
  __int64 v22; // [sp+38h] [bp-28h]@1
  int (*v23)(void); // [sp+40h] [bp-20h]@2
  int v24; // [sp+44h] [bp-1Ch]@2
  unsigned __int8 v25; // [sp+48h] [bp-18h]@1

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v21 = *a3;
  v20 = *a5;
  j_Core::BufferedFileOperations::copyFile<8192ull>((int)&v22, a2, &v21, a4, &v20);
  v8 = v25;
  if ( v25 & 1 )
  {
    v25 |= 2u;
    v15 = *v5;
    j_Core::FileSystemImpl::deleteFile((int)&v16, v6, &v15);
    v11 = *(_QWORD *)&v16;
    *(_QWORD *)&v16 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v11;
    v12 = v17;
    v17 = 0;
    *(_DWORD *)(v7 + 8) = v12;
    v13 = v18;
    v18 = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v13;
    v14 = v23;
    result = (unsigned __int8)(*(_BYTE *)(v7 + 16) & 0xFC) | v19 & 3;
    *(_BYTE *)(v7 + 16) = result;
    if ( v14 )
      result = v14();
  }
  else
    v9 = v22;
    v22 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v9;
    LODWORD(v9) = v23;
    v23 = 0;
    *(_DWORD *)(v7 + 8) = v9;
    LODWORD(v9) = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v24;
    BYTE4(v9) = v8 & 3;
    v24 = v9;
    result = v8 | 3;
    LOBYTE(v9) = *(_BYTE *)(v7 + 16);
    v25 = result;
    *(_BYTE *)(v7 + 16) = v9 & 0xFC | BYTE4(v9);
  return result;
}


RakNet *__fastcall Core::FileSystem::getDirectoryFiles(int a1, int a2, __int64 *a3)
{
  int v3; // r4@1
  int v4; // r5@1
  _DWORD *v5; // r0@1
  __int64 v6; // r1@1
  RakNet *result; // r0@1
  _DWORD *v8; // [sp+0h] [bp-28h]@1
  __int64 v9; // [sp+8h] [bp-20h]@1
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  v10 = *a3;
  v5 = j_operator new(4u);
  HIDWORD(v6) = sub_1B9E1EC;
  *v5 = v3;
  v8 = v5;
  LODWORD(v6) = sub_1B9E20E;
  v9 = v6;
  result = j_Core::TransactionFrame::exec(v4, 0, &v10, (int)&v8);
  if ( (_DWORD)v9 )
    result = (RakNet *)((int (__cdecl *)(_DWORD **))v9)(&v8);
  return result;
}


int __fastcall Core::FileStdStreamBuf::open(int result, int a2, char a3)
{
  int v3; // r2@2
  int v4; // r2@2

  *(_BYTE *)(result + 40) = a3;
  if ( result + 32 != a2 )
  {
    v3 = *(_DWORD *)(result + 32);
    *(_DWORD *)(result + 32) = *(_DWORD *)a2;
    *(_DWORD *)a2 = v3;
    v4 = *(_DWORD *)(result + 36);
    *(_DWORD *)(result + 36) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 4) = v4;
  }
  return result;
}


RakNet *__fastcall Core::FileSystem::readFileData(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  _DWORD *v5; // r0@1
  __int64 v6; // r1@1
  RakNet *result; // r0@1
  _DWORD *v8; // [sp+0h] [bp-28h]@1
  __int64 v9; // [sp+8h] [bp-20h]@1
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a1;
  v10 = *a2;
  v4 = a3;
  v5 = j_operator new(4u);
  HIDWORD(v6) = sub_1B9DDA0;
  *v5 = v4;
  v8 = v5;
  LODWORD(v6) = sub_1B9DDBE;
  v9 = v6;
  result = j_Core::TransactionFrame::exec(v3, 0, &v10, (int)&v8);
  if ( (_DWORD)v9 )
    result = (RakNet *)((int (__cdecl *)(_DWORD **))v9)(&v8);
  return result;
}


int __fastcall Core::FileSystemImpl::renameDirectory(int a1, int a2, __int64 *a3, _QWORD *a4)
{
  int v4; // r4@1
  int v5; // r11@1
  _QWORD *v6; // r8@1
  __int64 *v7; // r10@1
  _DWORD *v8; // r0@2
  __int64 *v9; // r1@6 OVERLAPPED
  __int64 *v10; // r2@6 OVERLAPPED
  _QWORD *v11; // r7@6
  unsigned int v12; // r5@6
  _QWORD *v13; // r0@8
  int v14; // r0@9
  unsigned int v15; // r5@9
  int v16; // r12@10
  _QWORD *v17; // r6@10
  __int64 v18; // kr00_8@11
  __int64 v19; // kr08_8@13
  int v20; // r8@13
  int v21; // r10@13
  void *v22; // r0@13
  int v23; // r2@13
  unsigned int v24; // r3@13
  void (*v25)(void); // r3@13
  int (*v26)(void); // r5@17
  void (__fastcall *v27)(char *, int, unsigned __int64 *, void **); // r7@19
  int (*v28)(void); // r6@19
  unsigned __int64 *v29; // r0@22
  unsigned __int64 v30; // kr18_8@23
  unsigned __int64 v31; // kr20_8@25
  __int64 v32; // r0@28
  int result; // r0@28
  int v34; // [sp+Ch] [bp-BCh]@9
  __int64 *v35; // [sp+10h] [bp-B8h]@13
  _QWORD *v36; // [sp+14h] [bp-B4h]@13
  char v37; // [sp+18h] [bp-B0h]@20
  int (*v38)(void); // [sp+20h] [bp-A8h]@19
  void (__fastcall *v39)(char *, _DWORD); // [sp+24h] [bp-A4h]@20
  char v40; // [sp+28h] [bp-A0h]@19
  int (*v41)(void); // [sp+30h] [bp-98h]@28
  int v42; // [sp+34h] [bp-94h]@28
  unsigned __int8 v43; // [sp+38h] [bp-90h]@21
  _DWORD *v44; // [sp+40h] [bp-88h]@2
  void (*v45)(void); // [sp+48h] [bp-80h]@2
  int (__fastcall *v46)(int, int *, int); // [sp+4Ch] [bp-7Ch]@2
  __int64 v47; // [sp+50h] [bp-78h]@2
  char v48; // [sp+5Ch] [bp-6Ch]@2
  void (*v49)(void); // [sp+64h] [bp-64h]@2
  void *ptr; // [sp+70h] [bp-58h]@2
  int v51; // [sp+74h] [bp-54h]@2
  int v52; // [sp+78h] [bp-50h]@2
  unsigned __int64 v53; // [sp+80h] [bp-48h]@13
  int (*v54)(void); // [sp+88h] [bp-40h]@1
  void (__fastcall *v55)(_QWORD **, int); // [sp+8Ch] [bp-3Ch]@13
  unsigned __int64 v56; // [sp+90h] [bp-38h]@13
  void (*v57)(void); // [sp+98h] [bp-30h]@13
  void (__fastcall *v58)(_QWORD **, int); // [sp+9Ch] [bp-2Ch]@13

  v4 = a2;
  v54 = 0;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( (unsigned int)*(_QWORD *)(*(_DWORD *)(a2 + 12) + 152) == *(_QWORD *)(*(_DWORD *)(a2 + 12) + 152) >> 32 )
  {
    v26 = 0;
  }
  else
    ptr = 0;
    v51 = 0;
    v52 = 0;
    v47 = *a3;
    v8 = j_operator new(4u);
    *v8 = &ptr;
    v44 = v8;
    v45 = (void (*)(void))sub_1BA3656;
    v46 = sub_1BA361C;
    j_Core::FileSystemImpl::iterateOverDirectory((int)&v48, v4, &v47, (int)&ptr, 640, 0, (int)&v44);
    if ( v49 )
      v49();
    if ( v45 )
      v45();
    *(_QWORD *)&v9 = *(_QWORD *)&ptr;
    v11 = 0;
    v12 = (v51 - (signed int)ptr) >> 3;
    if ( v12 )
    {
      if ( v12 >= 0x20000000 )
        sub_21E57F4();
      v13 = j_operator new(v51 - (_DWORD)ptr);
      *(_QWORD *)&v9 = *(_QWORD *)&ptr;
      v11 = v13;
    }
    v14 = (int)&v11[v12];
    v15 = (unsigned int)v11;
    v34 = v14;
    if ( v9 != v10 )
      v16 = -(signed int)v9;
      v17 = v11;
      do
      {
        v18 = *v9;
        ++v9;
        *v17 = v18;
        ++v17;
      }
      while ( v10 != v9 );
      v15 = (unsigned int)v11 + (((unsigned int)v10 + v16 - 8) & 0xFFFFFFF8) + 8;
    v19 = *v6;
    v36 = v6;
    v20 = *(_DWORD *)v7;
    v35 = v7;
    v21 = *((_DWORD *)v7 + 1);
    v22 = j_operator new(0x1Cu);
    *(_DWORD *)v22 = v11;
    *((_DWORD *)v22 + 1) = v15;
    v23 = (int)v22 + 8;
    *(_DWORD *)v23 = v34;
    *(_DWORD *)(v23 + 4) = v20;
    *(_DWORD *)(v23 + 8) = v21;
    *(_QWORD *)((char *)v22 + 20) = v19;
    v24 = HIDWORD(v56);
    v56 = v53;
    v53 = __PAIR__(v24, (unsigned int)v22);
    v25 = (void (*)(void))v54;
    v54 = (int (*)(void))sub_1BA3848;
    v57 = v25;
    v58 = v55;
    v55 = sub_1BA372C;
    if ( v25 )
      v25();
    if ( ptr )
      j_operator delete(ptr);
    v26 = v54;
    v6 = v36;
    v7 = v35;
  v27 = *(void (__fastcall **)(char *, int, unsigned __int64 *, void **))(*(_DWORD *)v4 + 84);
  v56 = *v7;
  *(_QWORD *)&ptr = *v6;
  v27(&v40, v4, &v56, &ptr);
  v28 = 0;
  v38 = 0;
  if ( v26 )
    ((void (__fastcall *)(char *, unsigned __int64 *, signed int))v26)(&v37, &v53, 2);
    v28 = v54;
    v39 = (void (__fastcall *)(char *, _DWORD))v55;
    v38 = v54;
  if ( v43 & 1 )
    v29 = (unsigned __int64 *)(v4 + 32);
    __dmb();
    do
      v30 = __ldrexd(v29);
    while ( __strexd(v30 + 1, v29) );
      v31 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v31 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v28 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v4 + 12), 0, 0LL);
    if ( v38 )
      v39(&v37, *(_DWORD *)(v4 + 12));
      v28 = v38;
  v32 = *(_QWORD *)&v40;
  *(_QWORD *)&v40 = *(_QWORD *)v5;
  *(_QWORD *)v5 = v32;
  LODWORD(v32) = v41;
  v41 = 0;
  *(_DWORD *)(v5 + 8) = v32;
  HIDWORD(v32) = v42;
  v42 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 12) = HIDWORD(v32);
  HIDWORD(v32) = v43;
  *(_BYTE *)(v5 + 16) = *(_BYTE *)(v5 + 16) & 0xFC | v43 & 3;
  result = HIDWORD(v32) | 3;
  v43 = BYTE4(v32) | 3;
  if ( v28 )
    result = v28();
    if ( v41 )
      result = v41();
  if ( v54 )
    result = v54();
  return result;
}


char *__fastcall Core::FileSystem::createUniquePathFromSeed(int a1, __int64 *a2, int a3)
{
  int v3; // r8@1
  int v4; // r11@1
  int v5; // r6@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  __int64 v8; // kr00_8@11
  unsigned int v9; // r2@12
  __int64 v10; // r0@14
  int v11; // r7@14
  int v12; // r1@14
  int *v13; // r0@14
  char v14; // r7@15
  int v15; // r7@17
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  __int64 v18; // kr08_8@30
  unsigned int v19; // r2@31
  __int64 v20; // r0@33
  void *v21; // r0@33
  char v22; // r5@34
  int v23; // r5@36
  char *result; // r0@39
  __int64 *v25; // [sp+18h] [bp-468h]@1
  int v26; // [sp+1Ch] [bp-464h]@14
  void *v27; // [sp+20h] [bp-460h]@15
  void (*v28)(void); // [sp+28h] [bp-458h]@15
  int (__fastcall *v29)(int, int, int); // [sp+2Ch] [bp-454h]@15
  __int64 v30; // [sp+30h] [bp-450h]@15
  __int64 v31; // [sp+38h] [bp-448h]@14
  __int64 v32; // [sp+40h] [bp-440h]@14
  char v33; // [sp+48h] [bp-438h]@15
  char v34; // [sp+50h] [bp-430h]@1
  char v35; // [sp+54h] [bp-42Ch]@14
  int v36; // [sp+454h] [bp-2Ch]@14
  RakNet *v37; // [sp+458h] [bp-28h]@1

  v3 = a1;
  v25 = a2;
  v4 = a3;
  v37 = _stack_chk_guard;
  *(_DWORD *)a1 = 1023;
  *(_DWORD *)(a1 + 1028) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  v5 = a1 + 4;
  if ( &v34 != (char *)a1 )
  {
    while ( 1 )
    {
      v8 = *v25;
      __dmb();
      do
        v9 = __ldrex((unsigned int *)&unk_283E5A4);
      while ( __strex(v9 + 1, (unsigned int *)&unk_283E5A4) );
      if ( !*(_DWORD *)(v4 + 8) )
        break;
      (*(void (__fastcall **)(int *, int))(v4 + 12))(&v26, v4);
      LODWORD(v10) = v26;
      HIDWORD(v10) = *(_DWORD *)(v26 - 12);
      v31 = v8;
      v32 = v10;
      j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v34, (int)&v31, 2);
      v11 = v36;
      j___aeabi_memcpy4_0(v5, (int)&v35, v36 + 1);
      v12 = v26;
      v35 = 0;
      v36 = 0;
      v13 = (int *)(v26 - 12);
      *(_DWORD *)(v3 + 1028) = v11;
      if ( v13 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v12 - 4);
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
          j_j_j_j__ZdlPv_9(v13);
      }
      v30 = __PAIR__(*(_DWORD *)(v3 + 1028), v5);
      v27 = j_operator new(1u);
      v29 = sub_1B9DECC;
      v28 = (void (*)(void))sub_1B9DEF6;
      j_Core::TransactionFrame::exec((int)&v31, 0, &v30, (int)&v27);
      v14 = v33;
      v33 |= 2u;
      if ( (_DWORD)v32 )
        ((void (__fastcall *)(__int64 *, __int64 *, signed int))v32)(&v31, &v31, 3);
      v15 = v14 & 1;
      if ( v28 )
        v28();
      if ( !v15 )
        goto LABEL_39;
    }
LABEL_41:
    sub_21E5F48();
  }
  do
    v18 = *v25;
    __dmb();
    do
      v19 = __ldrex((unsigned int *)&unk_283E5A4);
    while ( __strex(v19 + 1, (unsigned int *)&unk_283E5A4) );
    if ( !*(_DWORD *)(v4 + 8) )
      goto LABEL_41;
    (*(void (__fastcall **)(int *, int))(v4 + 12))(&v26, v4);
    LODWORD(v20) = v26;
    HIDWORD(v20) = *(_DWORD *)(v26 - 12);
    v31 = v18;
    v32 = v20;
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)v3, (int)&v31, 2);
    v21 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v30 = __PAIR__(*(_DWORD *)(v3 + 1028), v5);
    v27 = j_operator new(1u);
    v29 = sub_1B9DECC;
    v28 = (void (*)(void))sub_1B9DEF6;
    j_Core::TransactionFrame::exec((int)&v31, 0, &v30, (int)&v27);
    v22 = v33;
    v33 |= 2u;
    if ( (_DWORD)v32 )
      ((void (__fastcall *)(__int64 *, __int64 *, signed int))v32)(&v31, &v31, 3);
    v23 = v22 & 1;
    if ( v28 )
      v28();
  while ( v23 );
LABEL_39:
  result = (char *)(_stack_chk_guard - v37);
  if ( _stack_chk_guard != v37 )
    j___stack_chk_fail_0((int)result);
  return result;
}


RakNet *__fastcall Core::FileSystem::renameDirectory(int a1, __int64 *a2, __int64 *a3)
{
  int v3; // r4@1
  RakNet *result; // r0@1
  void *v5; // [sp+8h] [bp-38h]@1
  int (*v6)(void); // [sp+10h] [bp-30h]@1
  int (__fastcall *v7)(int, int, int); // [sp+14h] [bp-2Ch]@1
  void *v8; // [sp+18h] [bp-28h]@1
  int (*v9)(void); // [sp+20h] [bp-20h]@1
  int (__fastcall *v10)(int, int, int); // [sp+24h] [bp-1Ch]@1
  __int64 v11; // [sp+28h] [bp-18h]@1
  __int64 v12; // [sp+30h] [bp-10h]@1

  v3 = a1;
  v12 = *a2;
  v11 = *a3;
  v8 = j_operator new(1u);
  v9 = (int (*)(void))sub_1B9E026;
  v10 = sub_1B9DFFC;
  v5 = j_operator new(1u);
  v6 = (int (*)(void))sub_1B9E128;
  v7 = sub_1B9E054;
  result = j_Core::TransactionFrameSourceTarget::exec(v3, &v12, &v11, (int)&v8, (int)&v5);
  if ( v6 )
    result = (RakNet *)v6();
  if ( v9 )
    result = (RakNet *)v9();
  return result;
}


int __fastcall Core::FileSystemImpl::_isRelativePath(int a1, int a2, int a3)
{
  const char *v3; // r5@1
  int v4; // r4@1
  int v5; // r0@2
  bool v6; // zf@2
  _DWORD *v7; // r0@6
  void **v8; // r1@6
  void **v9; // r2@6
  const char *v10; // r3@6
  int v11; // r6@8
  signed int v12; // r0@10
  void *v13; // r1@13
  void *v14; // r2@13
  int result; // r0@13
  int v16; // [sp+0h] [bp-18h]@10

  v3 = *(const char **)a3;
  v4 = a1;
  if ( !*(_DWORD *)a3 )
    goto LABEL_18;
  v5 = *v3;
  v6 = v5 == 92;
  if ( v5 != 92 )
    v6 = v5 == 47;
  if ( v6 )
  {
    v7 = j_operator new(4u);
    v8 = &std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
    v9 = &std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
    v10 = "Path starts with a slash";
    goto LABEL_13;
  }
  if ( !*v3 )
LABEL_18:
    v10 = "path is empty";
LABEL_13:
    v13 = *v8;
    v14 = *v9;
    *v7 = v10;
    *(_DWORD *)v4 = v7;
    *(_DWORD *)(v4 + 8) = v13;
    *(_DWORD *)(v4 + 12) = v14;
    result = *(_BYTE *)(v4 + 16) & 0xFC;
    goto LABEL_14;
  v11 = *(_DWORD *)(a3 + 4);
  if ( v11 == -1 )
    v11 = j_strlen_0(*(const char **)a3);
  while ( 1 )
    v12 = j_j_utf8proc_iterate((int)v3, v11, &v16);
    if ( v12 < 1 )
      break;
    v11 -= v12;
    v3 += v12;
    if ( v16 == 58 )
    {
      v7 = j_operator new(4u);
      v8 = &std::_Function_base::_Base_manager<Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_manager;
      v9 = &std::_Function_handler<char const* ()(std::string *),Core::Result::makeFailureWithStringLiteral(char const*)::{lambda(std::string *)#1}>::_M_invoke;
      v10 = "Path contains ':'";
      goto LABEL_13;
    }
  *(_DWORD *)(v4 + 8) = 0;
  result = (unsigned __int8)(*(_BYTE *)(v4 + 16) & 0xFC) | 1;
LABEL_14:
  *(_BYTE *)(v4 + 16) = result;
  return result;
}


int __fastcall Core::File_c::_skip(Core::File_c *this, int a2, unsigned __int64 a3)
{
  Core::File_c *v3; // r4@1
  int v4; // r5@1
  _DWORD *v5; // r0@2
  __int64 v6; // r1@2
  int result; // r0@2

  v3 = this;
  v4 = j_fseek(*(FILE **)(a2 + 16), a3, 1);
  if ( v4 )
  {
    v5 = j_operator new(8u);
    HIDWORD(v6) = std::_Function_handler<char const* ()(std::string *),Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_invoke;
    LODWORD(v6) = std::_Function_base::_Base_manager<Core::Result Core::Result::makeFailureWithStringLiteralAndErrorCode<int>(char const*,int const&)::{lambda(std::string *)#1}>::_M_manager;
    *v5 = "fseek failed.";
    v5[1] = v4;
    *(_DWORD *)v3 = v5;
    *((_QWORD *)v3 + 1) = v6;
    result = *((_BYTE *)v3 + 16) & 0xFC;
    *((_BYTE *)v3 + 16) = result;
  }
  else
    *((_DWORD *)v3 + 2) = 0;
    result = (unsigned __int8)(*((_BYTE *)v3 + 16) & 0xFC) | 1;
  return result;
}


_DWORD *__fastcall Core::FileSystem_generic::FileSystem_generic(__int64 a1, int a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_Core::FileSystemImpl::FileSystemImpl(a1, a2);
  *result = &off_27268D4;
  return result;
}


RakNet *__fastcall Core::FileSystem::getFileOrDirectorySize(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  _DWORD *v5; // r0@1
  __int64 v6; // r1@1
  RakNet *result; // r0@1
  _DWORD *v8; // [sp+0h] [bp-28h]@1
  __int64 v9; // [sp+8h] [bp-20h]@1
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a1;
  v10 = *a2;
  v4 = a3;
  v5 = j_operator new(4u);
  HIDWORD(v6) = sub_1B9E460;
  *v5 = v4;
  v8 = v5;
  LODWORD(v6) = sub_1B9E47E;
  v9 = v6;
  result = j_Core::TransactionFrame::exec(v3, 0, &v10, (int)&v8);
  if ( (_DWORD)v9 )
    result = (RakNet *)((int (__cdecl *)(_DWORD **))v9)(&v8);
  return result;
}


int __fastcall Core::File::close(int a1, int *a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r0@3
  int result; // r0@5
  int v7; // [sp+0h] [bp-38h]@3
  int (*v8)(void); // [sp+8h] [bp-30h]@5
  char v9; // [sp+14h] [bp-24h]@1
  int (*v10)(void); // [sp+1Ch] [bp-1Ch]@7

  v2 = a2;
  v3 = a1;
  j_Core::FileImpl::close((Core::FileImpl *)&v9, *a2);
  v4 = *v2;
  *v2 = 0;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  j_Core::FileSystemImpl::commit((Core::FileSystemImpl *)&v7, v2[1]);
  v5 = v2[1];
  v2[1] = 0;
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  result = j_Core::Result::merge(v3, (int)&v9, (int)&v7);
  if ( v8 )
    result = v8();
  if ( v10 )
    result = v10();
  return result;
}


int __fastcall Core::FileSystemImpl::deleteFile(int a1, int a2, __int64 *a3)
{
  int v3; // r8@1
  int v4; // r4@1
  __int64 *v5; // r6@1
  void (__fastcall *v6)(char *); // r3@1
  __int64 v7; // kr00_8@1
  _QWORD *v8; // r0@1
  int (__cdecl *v9)(_DWORD); // r6@1
  unsigned __int64 *v10; // r0@2
  unsigned __int64 v11; // kr08_8@3
  unsigned __int64 v12; // kr10_8@5
  __int64 v13; // r0@8
  int result; // r0@8
  _QWORD *v15; // [sp+0h] [bp-48h]@1
  int (__fastcall *v16)(void **, _QWORD **, int); // [sp+8h] [bp-40h]@1
  int (__fastcall *v17)(__int64 **, int); // [sp+Ch] [bp-3Ch]@1
  char v18; // [sp+10h] [bp-38h]@1
  int (__cdecl *v19)(char *); // [sp+18h] [bp-30h]@8
  int v20; // [sp+1Ch] [bp-2Ch]@8
  unsigned __int8 v21; // [sp+20h] [bp-28h]@1
  __int64 v22; // [sp+28h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = *(void (__fastcall **)(char *))(*(_DWORD *)a2 + 32);
  v22 = *a3;
  v6(&v18);
  v7 = *v5;
  v8 = j_operator new(8u);
  *v8 = v7;
  v9 = (int (__cdecl *)(_DWORD))sub_1BA351E;
  v15 = v8;
  v16 = sub_1BA351E;
  v17 = sub_1BA3502;
  if ( v21 & 1 )
  {
    v10 = (unsigned __int64 *)(v3 + 32);
    __dmb();
    do
      v11 = __ldrexd(v10);
    while ( __strexd(v11 + 1, v10) );
      v12 = __ldrexd((unsigned __int64 *)&unk_283E5D8);
    while ( __strexd(v12 + 1, (unsigned __int64 *)&unk_283E5D8) );
    v9 = 0;
    j_Core::FileStorageArea::_addWriteOperation(*(Core::FileStorageArea **)(v3 + 12), 0, 0LL);
    if ( v16 )
    {
      v17(&v15, *(_DWORD *)(v3 + 12));
      v9 = (int (__cdecl *)(_DWORD))v16;
    }
  }
  v13 = *(_QWORD *)&v18;
  *(_QWORD *)&v18 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v13;
  LODWORD(v13) = v19;
  v19 = 0;
  *(_DWORD *)(v4 + 8) = v13;
  HIDWORD(v13) = v20;
  v20 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = HIDWORD(v13);
  HIDWORD(v13) = v21;
  *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 16) & 0xFC | v21 & 3;
  result = HIDWORD(v13) | 3;
  v21 = BYTE4(v13) | 3;
  if ( v9 )
    result = v9(&v15);
    if ( v19 )
      result = v19(&v18);
  return result;
}


RakNet *__fastcall Core::FileSystem::getUniqueFilePathForDirectory(int a1, __int64 *a2)
{
  __int64 *v2; // r4@1
  int *v3; // r7@2
  int v4; // r5@4
  const char *v5; // r10@4
  void **v6; // r4@4
  void **v7; // r7@4
  char v8; // r5@6
  int v9; // r5@8
  void **v10; // r10@11
  int v11; // r0@11
  char *v12; // r0@11
  int v13; // r5@11
  __int64 v14; // r0@11
  void *v15; // r0@11
  char *v16; // r0@12
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  unsigned int *v19; // r2@17
  int v20; // r7@18
  signed int v21; // r1@19
  int v22; // r6@29
  _BYTE *v23; // r5@29
  unsigned int v24; // r0@29
  unsigned int v25; // r4@29
  RakNet *result; // r0@34
  int v27; // [sp+8h] [bp-12D0h]@1
  void **v28; // [sp+10h] [bp-12C8h]@4
  void **v29; // [sp+20h] [bp-12B8h]@4
  void **v30; // [sp+24h] [bp-12B4h]@4
  void **v31; // [sp+28h] [bp-12B0h]@4
  void *v32; // [sp+2Ch] [bp-12ACh]@4
  void **v33; // [sp+30h] [bp-12A8h]@4
  void **v34; // [sp+34h] [bp-12A4h]@4
  void **v35; // [sp+3Ch] [bp-129Ch]@4
  int v36; // [sp+50h] [bp-1288h]@4
  int v37; // [sp+54h] [bp-1284h]@4
  void *v38; // [sp+5Ch] [bp-127Ch]@4
  int v39; // [sp+6Ch] [bp-126Ch]@11
  __int64 v40; // [sp+70h] [bp-1268h]@1
  const char *v41; // [sp+78h] [bp-1260h]@6
  int v42; // [sp+7Ch] [bp-125Ch]@6
  unsigned __int64 v43; // [sp+80h] [bp-1258h]@1
  void (*v44)(void); // [sp+88h] [bp-1250h]@6
  int (__fastcall *v45)(int, int, int); // [sp+8Ch] [bp-124Ch]@6
  char v46; // [sp+90h] [bp-1248h]@11
  int v47; // [sp+94h] [bp-1244h]@5
  int v48; // [sp+494h] [bp-E44h]@11
  int v49; // [sp+498h] [bp-E40h]@2
  char v50; // [sp+49Ch] [bp-E3Ch]@3
  int v51; // [sp+89Ch] [bp-A3Ch]@3
  char v52; // [sp+8A0h] [bp-A38h]@1
  int v53; // [sp+8A4h] [bp-A34h]@11
  void **v54; // [sp+CA8h] [bp-630h]@1
  int v55; // [sp+CACh] [bp-62Ch]@5
  void **v56; // [sp+CB0h] [bp-628h]@6
  void **v57; // [sp+CB4h] [bp-624h]@5
  char v58; // [sp+CB8h] [bp-620h]@6
  int v59; // [sp+CBCh] [bp-61Ch]@11
  int v60; // [sp+CC0h] [bp-618h]@11
  int v61; // [sp+CC4h] [bp-614h]@11
  int v62; // [sp+CC8h] [bp-610h]@11
  int v63; // [sp+CCCh] [bp-60Ch]@11
  int v64; // [sp+CD0h] [bp-608h]@5
  int v65; // [sp+CD4h] [bp-604h]@11
  char *v66; // [sp+CD8h] [bp-600h]@11
  void **v67; // [sp+CDCh] [bp-5FCh]@5
  int v68; // [sp+D4Ch] [bp-58Ch]@11
  __int16 v69; // [sp+D50h] [bp-588h]@11
  int v70; // [sp+D54h] [bp-584h]@11
  int v71; // [sp+D58h] [bp-580h]@11
  int v72; // [sp+D5Ch] [bp-57Ch]@11
  int v73; // [sp+D60h] [bp-578h]@11
  int v74; // [sp+10A8h] [bp-230h]@2
  int v75; // [sp+12A8h] [bp-30h]@1
  RakNet *v76; // [sp+12ACh] [bp-2Ch]@1

  v27 = a1;
  v2 = a2;
  v76 = _stack_chk_guard;
  v40 = *a2;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v52, &v40);
  v43 = *v2;
  j_Core::SplitPathT<1024u,64u>::SplitPathT((int)&v54, (const char **)&v43);
  if ( v75 )
  {
    v3 = &v49;
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::Path>((unsigned int *)&v49, (int)&v74, v75 - 1);
  }
  else
    j___aeabi_memclr8_0((int)&v49, 1028);
    v49 = 1023;
    v51 = 0;
    v50 = 0;
  v36 = (unsigned int)v3 | 4;
  v4 = (unsigned __int64)*v2 >> 32;
  v5 = (const char *)*v2;
  v35 = (void **)off_26D3F64;
  v38 = off_26D3F6C;
  v34 = (void **)off_26D3F70;
  v33 = (void **)off_26D3F74;
  v32 = off_26D3F78;
  v6 = (void **)off_26D3F68;
  v31 = off_26D3F60;
  v29 = off_26D3F84;
  v30 = off_26D3F80[0];
  v28 = (void **)off_26D3F68;
  v7 = &off_27734E8;
  v37 = 0;
  while ( 1 )
    v41 = v5;
    v42 = v4;
    LODWORD(v43) = j_operator new(1u);
    v45 = sub_1B9DECC;
    v44 = (void (*)(void))sub_1B9DEF6;
    j_Core::TransactionFrame::exec((int)&v54, 0, (__int64 *)&v41, (int)&v43);
    v8 = v58;
    v58 |= 2u;
    if ( v56 )
      ((void (__fastcall *)(void ***, void ***, signed int))v56)(&v54, &v54, 3);
    v9 = v8 & 1;
    if ( v44 )
      v44();
    if ( !v9 )
      break;
    sub_21B6308((int)&v67);
    v67 = &off_26D3AF0;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v73 = 0;
    v54 = v6;
    *(_DWORD *)((char *)*(v6 - 3) + (_DWORD)&v54) = v38;
    v55 = 0;
    sub_21B5AD4((int)*(v54 - 3) + (_DWORD)&v54, 0);
    v56 = v34;
    *(_DWORD *)((char *)*(v34 - 3) + (_DWORD)&v56) = v33;
    sub_21B5AD4((int)*(v56 - 3) + (_DWORD)&v56, 0);
    v54 = v35;
    *(_DWORD *)((char *)*(v35 - 3) + (_DWORD)&v54) = v32;
    v54 = &off_26D3F94;
    v67 = &off_26D3FBC;
    v56 = &off_26D3FA8;
    v57 = &off_26D40A8;
    *(_DWORD *)&v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    sub_21C9520((unsigned int **)&v64);
    v57 = v7;
    v10 = v7;
    v65 = 24;
    v66 = (char *)&unk_28898CC;
    sub_21B5AD4((int)*(v54 - 3) + (_DWORD)&v54, (unsigned int)&v57);
    v11 = j_strlen_0((const char *)&v53);
    sub_21CBF38((char *)&v56, (int)&v53, v11);
    sub_21CBF38((char *)&v56, (int)"(", 1);
    v12 = (char *)sub_21CC43C(&v56, ++v37);
    sub_21CBF38(v12, (int)")", 1);
    v13 = v51;
    sub_21CFED8(&v39, (int)&v57);
    LODWORD(v14) = v39;
    HIDWORD(v14) = *(_DWORD *)(v39 - 12);
    v43 = __PAIR__(v13, v36);
    *(_QWORD *)&v44 = v14;
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v46, (int)&v43, 2);
    v4 = v48;
    v15 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
      {
        v20 = v48;
        __dmb();
        do
          v21 = __ldrex(v19);
        while ( __strex(v21 - 1, v19) );
        v4 = v20;
      }
      else
        v21 = (*v19)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    }
    v7 = v10;
    v54 = v31;
    *(_DWORD *)((char *)*(v31 - 3) + (_DWORD)&v54) = v30;
    v56 = v29;
    v57 = v10;
    v16 = v66 - 12;
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v66 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    sub_21C802C((unsigned int **)&v64);
    v6 = v28;
    v54 = v28;
    *(_DWORD *)((char *)*(v28 - 3) + (_DWORD)&v54) = v38;
    sub_21B6560(&v67);
    v5 = (const char *)&v47;
  v22 = 0;
  *(_DWORD *)v27 = 1023;
  *(_BYTE *)(v27 + 4) = 0;
  v23 = (_BYTE *)(v27 + 4);
  *(_DWORD *)(v27 + 1028) = 0;
  v24 = j_strlen_0(v5);
  v25 = v24;
  if ( v24 < 0x400 )
    if ( v24 )
      j___aeabi_memcpy_0((int)v23, (int)v5, v24);
    *(_BYTE *)(v27 + v25 + 4) = 0;
    v22 = *(_DWORD *)(v27 + 1028) + v25;
    *v23 = 0;
  *(_DWORD *)(v27 + 1028) = v22;
  result = (RakNet *)(_stack_chk_guard - v76);
  if ( _stack_chk_guard != v76 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall Core::FileSystem::fileExists(__int64 *a1)
{
  char v1; // r0@1
  int v2; // r4@1
  void *v4; // [sp+0h] [bp-38h]@1
  void (*v5)(void); // [sp+8h] [bp-30h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-2Ch]@1
  __int64 v7; // [sp+10h] [bp-28h]@1
  char v8; // [sp+1Ch] [bp-1Ch]@1
  void (*v9)(void); // [sp+24h] [bp-14h]@1
  char v10; // [sp+2Ch] [bp-Ch]@1

  v7 = *a1;
  v4 = j_operator new(1u);
  v5 = (void (*)(void))sub_1B9D672;
  v6 = sub_1B9D648;
  j_Core::TransactionFrame::exec((int)&v8, 0, &v7, (int)&v4);
  v1 = v10;
  v10 |= 2u;
  v2 = v1 & 1;
  if ( v9 )
    v9();
  if ( v5 )
    v5();
  return v2;
}


RakNet *__fastcall Core::FileSystem::createDirectoryRecursively(int a1, __int64 *a2)
{
  int v2; // r4@1
  RakNet *result; // r0@1
  void *v4; // [sp+0h] [bp-20h]@1
  int (__fastcall *v5)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-14h]@1
  __int64 v7; // [sp+10h] [bp-10h]@1

  v2 = a1;
  v7 = *a2;
  v4 = j_operator new(1u);
  v5 = sub_1B9DE9E;
  v6 = sub_1B9DE84;
  result = j_Core::TransactionFrame::exec(v2, 1, &v7, (int)&v4);
  if ( v5 )
    result = (RakNet *)((int (__cdecl *)(void **))v5)(&v4);
  return result;
}


RakNet *__fastcall Core::FileSystem::deleteFile(int a1, __int64 *a2)
{
  int v2; // r4@1
  RakNet *result; // r0@1
  void *v4; // [sp+0h] [bp-20h]@1
  int (__fastcall *v5)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-14h]@1
  __int64 v7; // [sp+10h] [bp-10h]@1

  v2 = a1;
  v7 = *a2;
  v4 = j_operator new(1u);
  v5 = sub_1B9D6BA;
  v6 = sub_1B9D6A0;
  result = j_Core::TransactionFrame::exec(v2, 1, &v7, (int)&v4);
  if ( v5 )
    result = (RakNet *)((int (__cdecl *)(void **))v5)(&v4);
  return result;
}


int __fastcall Core::FileStorageArea::FileStorageArea(int a1, int a2, _DWORD *a3)
{
  int v3; // r4@1
  _DWORD *v4; // r6@1
  int v5; // r5@1
  __int64 v6; // r0@1
  void *v7; // r0@3
  int v8; // r0@5
  int v9; // r1@6
  char v10; // r0@6
  int v11; // r5@7
  int v12; // r6@7
  unsigned int *v13; // r0@9
  unsigned int v14; // r1@11
  unsigned int *v15; // r1@15
  unsigned int v16; // r0@17
  unsigned int *v17; // r7@21
  unsigned int v18; // r0@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  int v21; // r0@33
  void *v22; // r5@35
  unsigned int v23; // r2@35
  unsigned int v24; // r1@37
  unsigned int v25; // r7@37
  char *v26; // r6@43
  int v27; // r9@45
  int v28; // r5@52
  unsigned int *v29; // r1@53
  unsigned int v30; // r0@55
  unsigned int *v31; // r6@59
  unsigned int v32; // r0@61
  int v34; // [sp+8h] [bp-460h]@3
  void (__cdecl *v35)(int *, int *); // [sp+10h] [bp-458h]@50
  char v36; // [sp+18h] [bp-450h]@6
  int v37; // [sp+1Ch] [bp-44Ch]@6
  int v38; // [sp+20h] [bp-448h]@6
  __int64 v39; // [sp+24h] [bp-444h]@1
  char v40; // [sp+2Ch] [bp-43Ch]@1
  void (*v41)(void); // [sp+34h] [bp-434h]@1
  int v42; // [sp+40h] [bp-428h]@1
  char v43; // [sp+44h] [bp-424h]@1
  int v44; // [sp+444h] [bp-24h]@1
  RakNet *v45; // [sp+448h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v45 = _stack_chk_guard;
  *(_DWORD *)a1 = &off_2726720;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 16) = &unk_28898CC;
  v5 = a1 + 16;
  j___aeabi_memclr8_0(a1 + 24, 96);
  *(_DWORD *)(v5 + 104) = 0x4000;
  *(_DWORD *)(v5 + 124) = 0;
  *(_DWORD *)(v5 + 128) = 0;
  *(_DWORD *)(v5 + 116) = 0;
  *(_DWORD *)(v5 + 120) = 0;
  *(_DWORD *)(v5 + 108) = 0;
  *(_DWORD *)(v5 + 112) = 0;
  *(_BYTE *)(v5 + 156) = 0;
  *(_DWORD *)(v5 + 136) = 0;
  *(_DWORD *)(v5 + 140) = 0;
  *(_DWORD *)(v5 + 144) = 0;
  *(_DWORD *)(v5 + 148) = 0;
  *(_DWORD *)(v5 + 152) = 0;
  v42 = 1023;
  v44 = 0;
  v43 = 0;
  LODWORD(v6) = *v4;
  HIDWORD(v6) = *(_DWORD *)(*v4 - 12);
  v39 = v6;
  j_Core::FileSystem::cleanPath_deprecated((int)&v40, (int)&v42, &v39);
  if ( v41 )
    v41();
  sub_21E91E0((void **)&v34, (unsigned int)&v43, v44);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)v5, &v34);
  v7 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  if ( &pthread_create )
    v8 = j_pthread_mutex_lock_0((pthread_mutex_t *)&Core::FileStorageArea::sStorageAreaLock);
    if ( v8 )
      sub_21E5E14(v8);
  v37 = 0;
  v38 = 0;
  v9 = *(_DWORD *)(*(_DWORD *)(v3 + 16) - 12);
  j_Core::FileStorageArea::_getStorageAreaForPathImpl();
  v10 = v36;
  v36 |= 2u;
  if ( v10 & 1 )
    *(_DWORD *)(v3 + 164) = v37;
    v11 = *(_DWORD *)(v3 + 168);
    v12 = v38;
    if ( v38 != v11 )
      if ( v38 )
      {
        v13 = (unsigned int *)(v38 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 + 1, v13) );
          v11 = *(_DWORD *)(v3 + 168);
        }
        else
          ++*v13;
      }
      if ( v11 )
        v15 = (unsigned int *)(v11 + 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          v17 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      *(_DWORD *)(v3 + 168) = v12;
  v21 = dword_283E588;
  if ( dword_283E588 == dword_283E58C )
    v22 = (void *)Core::FileStorageArea::sStorageAreas;
    v23 = (dword_283E588 - Core::FileStorageArea::sStorageAreas) >> 2;
    if ( !v23 )
      v23 = 1;
    v24 = v23 + ((dword_283E588 - Core::FileStorageArea::sStorageAreas) >> 2);
    v25 = v23 + ((dword_283E588 - Core::FileStorageArea::sStorageAreas) >> 2);
    if ( 0 != v24 >> 30 )
      v25 = 0x3FFFFFFF;
    if ( v24 < v23 )
    if ( v25 )
      if ( v25 >= 0x40000000 )
        sub_21E57F4();
      v26 = (char *)j_operator new(4 * v25);
      v21 = dword_283E588;
      v22 = (void *)Core::FileStorageArea::sStorageAreas;
      v26 = 0;
    v27 = (int)&v26[v21 - (_DWORD)v22];
    *(_DWORD *)&v26[v21 - (_DWORD)v22] = v3;
    if ( 0 != (v21 - (signed int)v22) >> 2 )
      j___aeabi_memmove4_0((int)v26, (int)v22);
    if ( v22 )
      j_operator delete(v22);
    Core::FileStorageArea::sStorageAreas = v26;
    dword_283E588 = v27 + 4;
    dword_283E58C = (int)&v26[4 * v25];
  else
    *(_DWORD *)dword_283E588 = v3;
    dword_283E588 += 4;
  if ( v35 )
    v35(&v34, &v34);
  v28 = v38;
  if ( v38 )
    v29 = (unsigned int *)(v38 + 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 == 1 )
      v31 = (unsigned int *)(v28 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
      else
        v32 = (*v31)--;
      if ( v32 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
    j_pthread_mutex_unlock_0((pthread_mutex_t *)&Core::FileStorageArea::sStorageAreaLock);
  if ( _stack_chk_guard != v45 )
    j___stack_chk_fail_0(_stack_chk_guard - v45);
  return v3;
}


int __fastcall Core::File_c::_readAtPosition(Core::File_c *this, int a2, unsigned __int64 a3, void *a4, int a5, unsigned __int64 a6, unsigned __int64 *a7)
{
  Core::File_c *v7; // r4@1
  void *v8; // r5@1
  int v9; // r0@1
  __int64 v10; // r1@2
  __int64 v11; // kr00_8@2
  int result; // r0@2
  char v13; // [sp+10h] [bp-28h]@1
  int v14; // [sp+14h] [bp-24h]@2
  int (*v15)(void); // [sp+18h] [bp-20h]@2
  int v16; // [sp+1Ch] [bp-1Ch]@2
  unsigned __int8 v17; // [sp+20h] [bp-18h]@1

  v7 = this;
  v8 = (void *)a2;
  j_Core::FileImpl::setPosition((Core::FileImpl *)&v13, a2, a3);
  v9 = v17;
  if ( v17 & 1 )
  {
    v17 |= 2u;
    result = j_Core::FileImpl::read(v7, v8, __PAIR__(a6, (unsigned int)a4), (unsigned __int64 *)a6, SHIDWORD(a6), a7);
    if ( v15 )
      result = v15();
  }
  else
    v10 = *(_QWORD *)&v13;
    v11 = *(_QWORD *)v7;
    *(_DWORD *)&v13 = *(_QWORD *)v7;
    v14 = HIDWORD(v11);
    *(_QWORD *)v7 = v10;
    LODWORD(v10) = v15;
    v15 = 0;
    *((_DWORD *)v7 + 2) = v10;
    LODWORD(v10) = *((_DWORD *)v7 + 3);
    *((_DWORD *)v7 + 3) = v16;
    BYTE4(v10) = v9 & 3;
    v16 = v10;
    result = v9 | 3;
    LOBYTE(v10) = *((_BYTE *)v7 + 16);
    v17 = result;
    *((_BYTE *)v7 + 16) = v10 & 0xFC | BYTE4(v10);
  return result;
}


Core::File_c *__fastcall Core::File_c::~File_c(Core::File_c *this)
{
  Core::File_c *v1; // r4@1
  int v2; // r1@4
  void *v3; // r0@4
  unsigned int *v5; // r12@6
  signed int v6; // r1@8
  int v7; // [sp+0h] [bp-20h]@2
  void (*v8)(void); // [sp+8h] [bp-18h]@2
  char v9; // [sp+10h] [bp-10h]@2

  v1 = this;
  *(_DWORD *)this = &off_2762F8C;
  if ( j_Core::FileImpl::isOpen(this) == 1 )
  {
    j_Core::FileImpl::close((Core::FileImpl *)&v7, (int)v1);
    v9 |= 2u;
    if ( v8 )
      v8();
  }
  v2 = *((_DWORD *)v1 + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  j_Core::FileImpl::~FileImpl(v1);
  return v1;
}


Core::FileStream *__fastcall Core::FileStream::FileStream(Core::FileStream *this)
{
  Core::FileStream *v1; // r4@1
  char *v2; // r9@1

  v1 = this;
  v2 = (char *)this + 4156;
  sub_21B6308((int)this + 4156);
  *((_DWORD *)v1 + 1067) = 0;
  *((_WORD *)v1 + 2136) = 0;
  *((_DWORD *)v1 + 1072) = 0;
  *((_DWORD *)v1 + 1071) = 0;
  *((_DWORD *)v1 + 1070) = 0;
  *((_DWORD *)v1 + 1069) = 0;
  *((_DWORD *)v1 + 2) = &off_26D66D8;
  *(_DWORD *)v1 = &off_26D670C;
  *((_DWORD *)v1 + 1039) = &off_26D6720;
  *((_DWORD *)v1 + 1) = 0;
  sub_21B5AD4((int)v2, (unsigned int)v1 + 12);
  *((_DWORD *)v1 + 2) = &off_27267BC;
  *((_DWORD *)v1 + 1039) = &off_27267D0;
  *(_DWORD *)v1 = &off_26D66C4;
  *((_DWORD *)v1 + 1039) = &off_26D66EC;
  *((_DWORD *)v1 + 3) = &off_26D40A8;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  sub_21C9520((unsigned int **)v1 + 10);
  *((_DWORD *)v1 + 3) = &off_272676C;
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  *((_BYTE *)v1 + 52) &= 0xC0u;
  *((_DWORD *)v1 + 4) = (char *)v1 + 57;
  *((_DWORD *)v1 + 5) = (char *)v1 + 57;
  *((_DWORD *)v1 + 6) = (char *)v1 + 57;
  *((_DWORD *)v1 + 7) = (char *)v1 + 53;
  *((_DWORD *)v1 + 8) = (char *)v1 + 53;
  *((_DWORD *)v1 + 9) = (char *)v1 + 4148;
  return v1;
}


            if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v69) )
{
            ZipUtils::ZipSettings::ZipSettings((ZipUtils::ZipSettings *)&v62);
            v67 = 1;
            ZipUtils::ZipProgress::ZipProgress((ZipUtils::ZipProgress *)&v61);
            ResourceLocation::getFullPath((ResourceLocation *)&v60, v2 + 12);
            v51 = 0;
            v47 = 0;
            v48 = 0;
            v49 = &v47;
            v50 = &v47;
            if ( v63 )
            {
              v9 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
                     (int)&v46,
                     v63,
                     (int)&v47);
              v10 = v9;
              v48 = v9;
              do
              {
                v11 = v10;
                v10 = (int *)v10[2];
              }
              while ( v10 );
              v49 = v11;
                v12 = v9;
                v9 = (int *)v9[3];
              while ( v9 );
              v50 = v12;
              v51 = v64;
            }
            v57 = 0;
            v53 = 0;
            v54 = 0;
            v55 = &v53;
            v56 = &v53;
            if ( v65 )
              v13 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
                      (int)&v52,
                      v65,
                      (int)&v53);
              v14 = v13;
              v54 = v13;
                v15 = v14;
                v14 = (int *)v14[2];
              while ( v14 );
              v55 = v15;
                v16 = v13;
                v13 = (int *)v13[3];
              while ( v13 );
              v56 = v16;
              v57 = v66;
            v58 = *(_QWORD *)&v67;
            sub_21E8AF4(&v59, &v68);
            v17 = ZipUtils::zip(&v60, (int *)(v2 + 20), (int)&v61, (int)&v46);
            ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v46);
            v18 = (void *)(v60 - 12);
            if ( (int *)(v60 - 12) != &dword_28898C0 )
              v38 = (unsigned int *)(v60 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v39 = __ldrex(v38);
                while ( __strex(v39 - 1, v38) );
              else
                v39 = (*v38)--;
              if ( v39 <= 0 )
                j_j_j_j__ZdlPv_9(v18);
            ZipUtils::ZipProgress::~ZipProgress((ZipUtils::ZipProgress *)&v61);
            ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v62);
            if ( v17 > -1 )
LABEL_89:
              v40 = *(_DWORD *)v2;
              v19 = *(_DWORD *)(v2 + 4);
              v41 = v19;
              if ( v19 )
                v20 = (unsigned int *)(v19 + 8);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v21 = __ldrex(v20);
                  while ( __strex(v21 + 1, v20) );
                }
                else
                  ++*v20;
              sub_21E8AF4(&v42, (int *)(v2 + 8));
              sub_21E8AF4(&v43, (int *)(v2 + 20));
              v45 = 0;
              v22 = operator new(0x10u);
              *(_DWORD *)v22 = v40;
              *((_DWORD *)v22 + 1) = v41;
              if ( v41 )
                v23 = (unsigned int *)(v41 + 8);
                    v24 = __ldrex(v23);
                  while ( __strex(v24 + 1, v23) );
                  ++*v23;
              sub_21E8AF4((int *)v22 + 2, &v42);
              sub_21E8AF4((int *)v22 + 3, &v43);
              LODWORD(v25) = sub_163B1BC;
              v44 = v22;
              HIDWORD(v25) = sub_163B074;
              *(_QWORD *)&v45 = v25;
              FileUploadManager::addCallbackQueue(v1, (int)&v44);
              if ( v45 )
                v45();
              v26 = (void *)(v43 - 12);
              if ( (int *)(v43 - 12) != &dword_28898C0 )
                v34 = (unsigned int *)(v43 - 4);
                    v35 = __ldrex(v34);
                  while ( __strex(v35 - 1, v34) );
                  v35 = (*v34)--;
                if ( v35 <= 0 )
                  j_j_j_j__ZdlPv_9(v26);
              v27 = (void *)(v42 - 12);
              if ( (int *)(v42 - 12) != &dword_28898C0 )
                v36 = (unsigned int *)(v42 - 4);
                    v37 = __ldrex(v36);
                  while ( __strex(v37 - 1, v36) );
                  v37 = (*v36)--;
                if ( v37 <= 0 )
                  j_j_j_j__ZdlPv_9(v27);
                v28 = (unsigned int *)(v41 + 8);
                    v29 = __ldrex(v28);
                  while ( __strex(v29 - 1, v28) );
                  v29 = (*v28)--;
                if ( v29 == 1 )
                  (*(void (**)(void))(*(_DWORD *)v41 + 12))();
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              v30 = __ldrex(v5);
            while ( __strex(v30 - 1, v5) );
          else
            v30 = (*v5)--;
          if ( v30 == 1 )
            v31 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
            else
              v32 = (*v31)--;
            if ( v32 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return 1;
        }
      }
      else
      {
        __clrex();
        v4 = v6;
    }
  }
  return 1;
}


unsigned __int64 __fastcall Core::BasicDirectoryStorageArea<Core::FileSystem_generic>::createTransaction(_DWORD *a1, int a2, unsigned int a3)
{
  _DWORD *v3; // r6@1
  unsigned int v4; // r4@1
  int v5; // r5@1
  __int64 v6; // r0@1
  unsigned __int64 result; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  LODWORD(v6) = j_operator new(0x50u);
  result = __PAIR__(v4, (unsigned int)j_Core::FileSystem_generic::FileSystem_generic(v6, v5));
  *v3 = result;
  return result;
}


int __fastcall Core::FileStream::FileStream(int a1, int a2, __int64 *a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r8@1
  __int64 *v8; // r9@1
  int v9; // r0@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r0@1
  int v13; // r2@1
  __int64 v15; // [sp+0h] [bp-28h]@1

  v4 = a2;
  v5 = a1;
  v6 = *(_DWORD *)a2;
  *(_DWORD *)v5 = *(_DWORD *)a2;
  v7 = a4;
  v8 = a3;
  *(_DWORD *)(v5 + *(_DWORD *)(v6 - 12)) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(a2 + 36);
  v9 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)v5 = v9;
  *(_DWORD *)(v5 + *(_DWORD *)(v9 - 12)) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v5 + 4) = 0;
  sub_21B5AD4(*(_DWORD *)(*(_DWORD *)v5 - 12) + v5, v5 + 12);
  v10 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v5 + 8) = v10;
  *(_DWORD *)(v5 + 8 + *(_DWORD *)(v10 - 12)) = *(_DWORD *)(v4 + 20);
  sub_21B5AD4(*(_DWORD *)(*(_DWORD *)(v5 + 8) - 12) + v5 + 8, v5 + 12);
  v11 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)v5 = v11;
  *(_DWORD *)(v5 + *(_DWORD *)(v11 - 12)) = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v4 + 28);
  v12 = *(_DWORD *)v4;
  *(_DWORD *)v5 = *(_DWORD *)v4;
  *(_DWORD *)(v5 + *(_DWORD *)(v12 - 12)) = *(_DWORD *)(v4 + 32);
  v13 = v5 + 8;
  *(_DWORD *)v13 = *(_DWORD *)(v4 + 36);
  *(_DWORD *)(v13 + 4) = &off_26D40A8;
  *(_DWORD *)(v13 + 8) = 0;
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 28) = 0;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = 0;
  sub_21C9520((unsigned int **)(v5 + 40));
  *(_DWORD *)(v5 + 12) = &off_272676C;
  *(_DWORD *)(v5 + 44) = 0;
  *(_DWORD *)(v5 + 48) = 0;
  *(_BYTE *)(v5 + 52) &= 0xC0u;
  *(_DWORD *)(v5 + 16) = v5 + 57;
  *(_DWORD *)(v5 + 20) = v5 + 57;
  *(_DWORD *)(v5 + 24) = v5 + 57;
  *(_DWORD *)(v5 + 28) = v5 + 53;
  *(_DWORD *)(v5 + 32) = v5 + 53;
  *(_DWORD *)(v5 + 36) = v5 + 4148;
  v15 = *v8;
  j_Core::FileStream::open(v5, &v15, v7);
  return v5;
}


unsigned __int64 *__fastcall Core::FileSystemImpl::_readFileData(int a1, int a2, __int64 *a3, int a4)
{
  int v4; // r8@1
  int v5; // r4@1
  char v6; // r0@1
  __int64 v7; // r1@2
  __int64 v8; // kr00_8@2
  void (*v9)(void); // r1@2
  __int64 v10; // r1@3
  void (*v11)(void); // r5@3
  void (*v12)(void); // r3@3
  char v13; // r1@8
  unsigned __int64 v14; // r2@8
  unsigned int v15; // r6@8
  unsigned int v16; // r0@9
  __int64 v17; // r2@11
  char v18; // r1@11
  __int64 v19; // r1@14
  void (*v20)(void); // r7@14
  void (*v21)(void); // r3@14
  unsigned int v22; // r1@19
  unsigned int v23; // r2@19
  int v24; // r2@20
  unsigned __int64 *result; // r0@27
  void (*v26)(void); // r3@30
  char v27; // [sp+8h] [bp-88h]@14
  int v28; // [sp+Ch] [bp-84h]@14
  void (*v29)(void); // [sp+10h] [bp-80h]@14
  int v30; // [sp+14h] [bp-7Ch]@14
  char v31; // [sp+18h] [bp-78h]@14
  char v32; // [sp+20h] [bp-70h]@3
  int v33; // [sp+24h] [bp-6Ch]@3
  void (*v34)(void); // [sp+28h] [bp-68h]@3
  int v35; // [sp+2Ch] [bp-64h]@3
  char v36; // [sp+30h] [bp-60h]@3
  __int64 v37; // [sp+38h] [bp-58h]@3
  __int64 v38; // [sp+40h] [bp-50h]@1
  unsigned __int64 *v39; // [sp+48h] [bp-48h]@1
  int v40; // [sp+4Ch] [bp-44h]@1
  __int64 v41; // [sp+50h] [bp-40h]@1
  void (*v42)(void); // [sp+58h] [bp-38h]@2
  int v43; // [sp+5Ch] [bp-34h]@3
  char v44; // [sp+60h] [bp-30h]@1
  __int64 v45; // [sp+68h] [bp-28h]@3
  void (*v46)(void); // [sp+70h] [bp-20h]@3
  int v47; // [sp+74h] [bp-1Ch]@3

  v4 = a4;
  v5 = a1;
  *(_DWORD *)(a4 + 4) = *(_DWORD *)a4;
  v39 = 0;
  v40 = 0;
  v38 = *a3;
  j_Core::File::open((int)&v41, (int)&v39, &v38, 33);
  v6 = v44;
  if ( !(v44 & 1) )
  {
    v7 = v41;
    v8 = *(_QWORD *)v5;
    v41 = *(_QWORD *)v5;
    *(_QWORD *)v5 = v7;
    v9 = v42;
    v42 = 0;
LABEL_20:
    *(_DWORD *)(v5 + 8) = v9;
    v24 = v43;
    v43 = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v5 + 12) = v24;
    v18 = *(_BYTE *)(v5 + 16) & 0xFC | v6 & 3;
    goto LABEL_21;
  }
  v44 |= 2u;
  v37 = 0LL;
  j_Core::FileImpl::getSize((Core::FileImpl *)&v32, v39);
  v44 = v44 & 0xFC | v36 & 3;
  LODWORD(v10) = *(_DWORD *)&v32;
  HIDWORD(v10) = v33;
  v11 = v34;
  v34 = 0;
  v45 = v41;
  v41 = v10;
  v12 = v42;
  v42 = v11;
  v46 = v12;
  v47 = v43;
  v43 = v35;
  if ( v12 )
    ((void (__cdecl *)(__int64 *))v12)(&v45);
    v36 |= 3u;
    if ( v34 )
      ((void (__cdecl *)(char *))v34)(&v32);
  else
    goto LABEL_34;
  v13 = v44 | 2;
  v15 = HIDWORD(v37);
  HIDWORD(v14) = v37;
  if ( !v37 )
    v17 = v41;
    *(_QWORD *)v5 = v17;
    LODWORD(v17) = v42;
    *(_DWORD *)(v5 + 8) = v17;
    LODWORD(v17) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v5 + 12) = v43;
    v43 = v17;
    v18 = v13 & 3 | *(_BYTE *)(v5 + 16) & 0xFC;
LABEL_21:
    *(_BYTE *)(v5 + 16) = v18;
    v44 = v6 | 3;
    goto LABEL_22;
  LODWORD(v14) = *(_QWORD *)v4;
  v16 = (*(_QWORD *)v4 >> 32) - v14;
  if ( (unsigned int)v37 <= v16 )
    if ( (unsigned int)v37 < v16 )
      *(_DWORD *)(v4 + 4) = v14 + v37;
    j_std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append(v4, v37 - v16);
    v15 = HIDWORD(v37);
    HIDWORD(v14) = v37;
    LODWORD(v14) = *(_DWORD *)v4;
  j_Core::FileImpl::readExactly((Core::FileImpl *)&v27, v39, v14, __PAIR__(v15, HIDWORD(v14)));
  v44 = v44 & 0xFC | v31 & 3;
  LODWORD(v19) = *(_DWORD *)&v27;
  HIDWORD(v19) = v28;
  v20 = v29;
  v29 = 0;
  v41 = v19;
  v21 = v42;
  v42 = v20;
  v46 = v21;
  v43 = v30;
  if ( v21 )
    v21();
    v31 |= 3u;
    if ( v29 )
      v29();
LABEL_34:
    v23 = HIDWORD(v41);
    v22 = v41;
    *(_QWORD *)v5 = __PAIR__(v23, v22);
    goto LABEL_20;
  v26 = v42;
  *(_DWORD *)(v5 + 8) = 0;
  *(_BYTE *)(v5 + 16) = *(_BYTE *)(v5 + 16) & 0xFC | 1;
  if ( v26 )
    v26();
LABEL_22:
  if ( v39 )
    j_Core::File::close((Core::File *)&v41, (int *)&v39);
    v44 |= 2u;
    if ( v42 )
      ((void (__cdecl *)(__int64 *))v42)(&v41);
  if ( v40 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v40 + 4))(v40);
  result = v39;
    result = (unsigned __int64 *)(*(int (__cdecl **)(unsigned __int64 *))(*(_DWORD *)v39 + 4))(v39);
  return result;
}


RakNet *__fastcall Core::FileSystem::createOneDirectoryIfNotExisting(int a1, __int64 *a2)
{
  int v2; // r4@1
  RakNet *result; // r0@1
  void *v4; // [sp+0h] [bp-20h]@1
  int (__fastcall *v5)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v6)(int, int, int); // [sp+Ch] [bp-14h]@1
  __int64 v7; // [sp+10h] [bp-10h]@1

  v2 = a1;
  v7 = *a2;
  v4 = j_operator new(1u);
  v5 = sub_1B9DE56;
  v6 = sub_1B9DE3C;
  result = j_Core::TransactionFrame::exec(v2, 1, &v7, (int)&v4);
  if ( v5 )
    result = (RakNet *)((int (__cdecl *)(void **))v5)(&v4);
  return result;
}


int __fastcall Core::FileSystemImpl::_readOperation(int a1, int a2, unsigned __int64 a3)
{
  int v3; // r8@1
  int v4; // r1@1
  unsigned __int64 *v5; // r4@2
  unsigned __int64 v6; // kr00_8@3
  unsigned __int64 *v7; // r4@4
  unsigned __int64 v8; // kr08_8@5
  unsigned __int64 v9; // kr10_8@7
  unsigned __int64 v10; // kr18_8@9
  unsigned __int64 *v11; // r4@11
  unsigned __int64 v12; // kr20_8@12
  unsigned __int64 v13; // kr28_8@14

  v3 = a2;
  v4 = *(_BYTE *)(a2 + 16) & 1;
  if ( v4 )
  {
    v5 = (unsigned __int64 *)(a1 + 40);
    __dmb();
    do
      v6 = __ldrexd(v5);
    while ( __strexd(v6 + 1, v5) );
    v7 = (unsigned __int64 *)(a1 + 48);
      v8 = __ldrexd(v7);
    while ( __strexd(v8 + a3, v7) );
      v9 = __ldrexd((unsigned __int64 *)&unk_283E5E0);
    while ( __strexd(v9 + 1, (unsigned __int64 *)&unk_283E5E0) );
      v10 = __ldrexd((unsigned __int64 *)&unk_283E5E8);
    while ( __strexd(v10 + a3, (unsigned __int64 *)&unk_283E5E8) );
  }
  else
    v11 = (unsigned __int64 *)(a1 + 56);
      v12 = __ldrexd(v11);
    while ( __strexd(v12 + 1, v11) );
      v13 = __ldrexd((unsigned __int64 *)&unk_283E5F0);
    while ( __strexd(v13 + 1, (unsigned __int64 *)&unk_283E5F0) );
  __dmb();
  j_Core::FileStorageArea::_addReadOperation(*(Core::FileStorageArea **)(a1 + 12), v4, a3);
  return v3;
}
