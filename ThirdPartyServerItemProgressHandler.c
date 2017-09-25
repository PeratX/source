

void __fastcall ThirdPartyServerItemProgressHandler::~ThirdPartyServerItemProgressHandler(ThirdPartyServerItemProgressHandler *this)
{
  ThirdPartyServerItemProgressHandler *v1; // r0@1

  v1 = ThirdPartyServerItemProgressHandler::~ThirdPartyServerItemProgressHandler(this);
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall ThirdPartyServerItemProgressHandler::~ThirdPartyServerItemProgressHandler(ThirdPartyServerItemProgressHandler *this)
{
  ThirdPartyServerItemProgressHandler::~ThirdPartyServerItemProgressHandler(this);
}


int __fastcall ThirdPartyServerItemProgressHandler::ThirdPartyServerItemProgressHandler(int a1, int *a2, int a3, int a4)
{
  int *v4; // r8@1
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r4@1
  void (__fastcall *v8)(char *, int, signed int); // r3@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  void *v10; // r0@9
  void *v11; // r0@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  int v17; // [sp+0h] [bp-48h]@4
  void (*v18)(void); // [sp+8h] [bp-40h]@3
  int v19; // [sp+Ch] [bp-3Ch]@4
  char v20; // [sp+10h] [bp-38h]@2
  void (*v21)(void); // [sp+18h] [bp-30h]@1
  int v22; // [sp+1Ch] [bp-2Ch]@2
  int v23; // [sp+24h] [bp-24h]@1
  int v24; // [sp+28h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_DA7364((void **)&v23, "store.3pserverItem.fetchingItemTitle");
  I18n::get(&v24, (int **)&v23);
  v21 = 0;
  v8 = *(void (__fastcall **)(char *, int, signed int))(v6 + 8);
  if ( v8 )
  {
    v8(&v20, v6, 2);
    v22 = *(_DWORD *)(v6 + 12);
    v21 = *(void (**)(void))(v6 + 8);
  }
  v18 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v9 )
    v9(&v17, v5, 2);
    v19 = *(_DWORD *)(v5 + 12);
    v18 = *(void (**)(void))(v5 + 8);
  StoreProgressHandler::StoreProgressHandler(v7, &v24, (int)&v20, (int)&v17);
  if ( v18 )
    v18();
  if ( v21 )
    v21();
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v23 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  *(_DWORD *)v7 = &off_26D7770;
  sub_DA73B4((int *)(v7 + 48), v4);
  return v7;
}


void __fastcall ThirdPartyServerItemProgressHandler::getProgressMessage(ThirdPartyServerItemProgressHandler *this, MinecraftScreenModel *a2)
{
  ThirdPartyServerItemProgressHandler::getProgressMessage(this, a2);
}


void __fastcall ThirdPartyServerItemProgressHandler::getProgressMessage(ThirdPartyServerItemProgressHandler *this, MinecraftScreenModel *a2)
{
  MinecraftScreenModel *v2; // r5@1
  int *v3; // r4@1
  char *v4; // r4@1
  int v5; // r6@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int *v8; // r0@11
  void *v9; // r0@16
  void *v10; // r0@17
  unsigned int *v11; // r2@19
  signed int v12; // r1@21
  unsigned int *v13; // r2@23
  signed int v14; // r1@25
  int v15; // [sp+4h] [bp-3Ch]@1
  char *v16; // [sp+8h] [bp-38h]@1
  char *v17; // [sp+Ch] [bp-34h]@1
  char *v18; // [sp+10h] [bp-30h]@1
  int v19; // [sp+18h] [bp-28h]@1

  v2 = a2;
  v3 = (int *)this;
  sub_DA7364((void **)&v19, "store.3pserverItem.fetchingItem");
  sub_DA73B4(&v15, (int *)v2 + 12);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v16 = (char *)operator new(4u);
  v18 = v16 + 4;
  v17 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v15,
                  (int)&v16,
                  (int)v16);
  I18n::get(v3, &v19, (unsigned __int64 *)&v16);
  v5 = (int)v17;
  v4 = v16;
  if ( v16 != v17 )
  {
    do
    {
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j_j__ZdlPv_9(v8);
      }
      v4 += 4;
    }
    while ( v4 != (char *)v5 );
    v4 = v16;
  }
  if ( v4 )
    operator delete(v4);
  v9 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v19 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
}


ThirdPartyServerItemProgressHandler *__fastcall ThirdPartyServerItemProgressHandler::~ThirdPartyServerItemProgressHandler(ThirdPartyServerItemProgressHandler *this)
{
  ThirdPartyServerItemProgressHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void (*v6)(void); // r3@3
  void (*v7)(void); // r3@5
  unsigned int *v9; // r12@8
  signed int v10; // r1@10
  unsigned int *v11; // r12@12
  signed int v12; // r1@14

  v1 = this;
  *(_DWORD *)this = &off_26D7770;
  v2 = *((_DWORD *)this + 12);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_26D773C;
  v4 = *((_DWORD *)v1 + 11);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = (void (*)(void))*((_DWORD *)v1 + 9);
  if ( v6 )
    v6();
  v7 = (void (*)(void))*((_DWORD *)v1 + 5);
  if ( v7 )
    v7();
  return v1;
}
