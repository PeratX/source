

int __fastcall RemoteStorageProviderSyncProgressHandler::_onCompleted(RemoteStorageProviderSyncProgressHandler *this)
{
  RemoteStorageProviderSyncProgressHandler *v1; // r8@1
  int result; // r0@1
  int v3; // r1@3
  char v4; // r12@4
  void (*v5)(void); // r3@4
  int v6; // r0@7
  char v7; // r0@9
  __int64 v8; // kr00_8@9
  void (*v9)(void); // r12@9
  int v10; // r5@9
  void (*v11)(void); // r3@9
  __int64 v12; // r1@12
  void (*v13)(void); // r5@12
  void (*v14)(void); // r3@12
  void *v15; // r0@17
  __int64 v16; // r0@18
  void (*v17)(void); // r2@18
  int v18; // r3@18
  char v19; // r4@18
  char v20; // r5@18
  int (__fastcall *v21)(char *, __int64 *); // r7@19
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  __int64 v24; // [sp+0h] [bp-A8h]@18
  void (*v25)(void); // [sp+8h] [bp-A0h]@18
  int v26; // [sp+Ch] [bp-9Ch]@18
  char v27; // [sp+10h] [bp-98h]@18
  int v28; // [sp+1Ch] [bp-8Ch]@12
  char v29; // [sp+20h] [bp-88h]@12
  int v30; // [sp+24h] [bp-84h]@12
  void (*v31)(void); // [sp+28h] [bp-80h]@12
  int v32; // [sp+2Ch] [bp-7Ch]@12
  char v33; // [sp+30h] [bp-78h]@12
  __int64 v34; // [sp+38h] [bp-70h]@4
  void (*v35)(void); // [sp+40h] [bp-68h]@4
  int v36; // [sp+44h] [bp-64h]@4
  char v37; // [sp+48h] [bp-60h]@4
  __int64 v38; // [sp+50h] [bp-58h]@4
  void (*v39)(void); // [sp+58h] [bp-50h]@3
  int v40; // [sp+5Ch] [bp-4Ch]@4
  char v41; // [sp+60h] [bp-48h]@3
  __int64 v42; // [sp+68h] [bp-40h]@4
  void (*v43)(void); // [sp+70h] [bp-38h]@4
  int v44; // [sp+74h] [bp-34h]@4
  __int64 v45; // [sp+78h] [bp-30h]@19
  void (*v46)(void); // [sp+80h] [bp-28h]@19
  int v47; // [sp+84h] [bp-24h]@19
  char v48; // [sp+88h] [bp-20h]@19

  v1 = this;
  result = *((_BYTE *)this + 64);
  __dmb();
  if ( !(result & 1) )
  {
    __dmb();
    *((_BYTE *)v1 + 64) = 1;
    result = *((_DWORD *)v1 + 14);
    if ( result )
    {
      v39 = 0;
      v41 = v41 & 0xFC | 1;
      v3 = *((_DWORD *)v1 + 22);
      __dmb();
      if ( v3 == 3 )
      {
        v4 = v37;
        v37 = v37 & 0xFC | 1;
        v41 = v41 & 0xFC | 1;
        v35 = 0;
        v42 = v38;
        v38 = v34;
        v5 = v39;
        v39 = 0;
        v43 = v5;
        v44 = v40;
        v40 = v36;
        if ( v5 )
        {
          v5();
          v37 |= 3u;
          if ( v35 )
            v35();
        }
        else
          v37 = v4 | 3;
      }
      else
        v6 = *((_DWORD *)v1 + 22);
        __dmb();
        if ( v6 == 2 )
          if ( &v38 != (__int64 *)((char *)v1 + 68) )
          {
            v7 = *((_BYTE *)v1 + 84);
            v41 = v41 & 0xFC | v7 & 3;
            v8 = *(_QWORD *)((char *)v1 + 68);
            v9 = (void (*)(void))*((_DWORD *)v1 + 19);
            *((_DWORD *)v1 + 19) = 0;
            v10 = *((_DWORD *)v1 + 20);
            v42 = v38;
            v38 = v8;
            v11 = v39;
            v39 = v9;
            v43 = v11;
            v44 = v40;
            v40 = v10;
            if ( v11 )
            {
              v11();
              v7 = *((_BYTE *)v1 + 84);
            }
            *((_BYTE *)v1 + 84) = v7 | 3;
          }
          sub_DA7364((void **)&v28, "Canceled");
          Core::Result::makeFailure((int)&v29, &v28);
          v41 = v41 & 0xFC | v33 & 3;
          LODWORD(v12) = *(_DWORD *)&v29;
          HIDWORD(v12) = v30;
          v13 = v31;
          v31 = 0;
          v42 = v38;
          v38 = v12;
          v14 = v39;
          v39 = v13;
          v43 = v14;
          v44 = v40;
          v40 = v32;
          if ( v14 )
            v14();
            v33 |= 3u;
            if ( v31 )
              v31();
          else
          v15 = (void *)(v28 - 12);
          if ( (int *)(v28 - 12) != &dword_28898C0 )
            v22 = (unsigned int *)(v28 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
            else
              v23 = (*v22)--;
            if ( v23 <= 0 )
              j_j_j_j_j__ZdlPv_9(v15);
      v16 = v38;
      v38 = v24;
      v24 = v16;
      v17 = v39;
      v25 = v17;
      v18 = v40;
      v40 = v26;
      v26 = v18;
      v19 = v27;
      v20 = v41 & 3;
      v27 = v27 & 0xFC | v41 & 3;
      v41 |= 3u;
      if ( !*((_DWORD *)v1 + 14) )
        sub_DA7654();
      v21 = (int (__fastcall *)(char *, __int64 *))*((_DWORD *)v1 + 15);
      v25 = 0;
      v45 = v16;
      v46 = v17;
      v47 = v18;
      v48 = v20;
      v27 = v19 | 3;
      result = v21((char *)v1 + 48, &v45);
      if ( v46 )
        result = ((int (__cdecl *)(__int64 *, __int64 *))v46)(&v45, &v45);
      if ( v25 )
        result = ((int (__cdecl *)(__int64 *, __int64 *))v25)(&v24, &v24);
      if ( v39 )
        result = ((int (__cdecl *)(__int64 *, __int64 *))v39)(&v38, &v38);
    }
  }
  return result;
}


void __fastcall RemoteStorageProviderSyncProgressHandler::getProgressMessage(RemoteStorageProviderSyncProgressHandler *this, MinecraftScreenModel *a2, int a3)
{
  MinecraftScreenModel *v3; // r5@1
  int *v4; // r4@1
  int v5; // r0@1
  void *v6; // r0@3
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // r0@8
  int v10; // [sp+8h] [bp-28h]@14
  int v11; // [sp+10h] [bp-20h]@9
  int v12; // [sp+18h] [bp-18h]@3

  v3 = a2;
  v4 = (int *)this;
  v5 = (*(int (__fastcall **)(MinecraftScreenModel *, int))(*(_DWORD *)a2 + 24))(a2, a3);
  if ( v5 == 1073750016 )
  {
    v9 = *((_DWORD *)v3 + 22);
    __dmb();
    if ( v9 == 2 )
    {
      sub_DA7364((void **)&v11, "progressScreen.message.storageProviderSyncError");
      I18n::get(v4, (int **)&v11);
      v6 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) == &dword_28898C0 )
        return;
      v7 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        goto LABEL_21;
      }
      goto LABEL_20;
    }
LABEL_14:
    sub_DA7364((void **)&v10, "progressScreen.message.waitingForStorageProvider");
    I18n::get(v4, (int **)&v10);
    v6 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) == &dword_28898C0 )
      return;
    v7 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( v5 != 16 )
    goto LABEL_14;
  sub_DA7364((void **)&v12, "progressScreen.message.done");
  I18n::get(v4, (int **)&v12);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) == &dword_28898C0 )
    return;
  v7 = (unsigned int *)(v12 - 4);
  if ( &pthread_create )
    do
      v8 = __ldrex(v7);
    while ( __strex(v8 - 1, v7) );
    goto LABEL_21;
LABEL_20:
  v8 = (*v7)--;
LABEL_21:
  if ( v8 <= 0 )
    j_j_j_j_j__ZdlPv_9(v6);
}


signed int __fastcall RemoteStorageProviderSyncProgressHandler::getLoadingState(RemoteStorageProviderSyncProgressHandler *this, MinecraftScreenModel *a2)
{
  RemoteStorageProviderSyncProgressHandler *v2; // r4@1
  int v3; // r0@1
  signed int result; // r0@2
  int v5; // r0@3
  int v6; // r0@4
  bool v7; // cf@5
  bool v8; // zf@5
  __int64 v9; // r0@5
  signed int v10; // r3@7
  __int64 v11; // [sp+0h] [bp-10h]@5

  v2 = this;
  v3 = *((_DWORD *)this + 22);
  __dmb();
  if ( v3 == 3 )
  {
    result = 16;
  }
  else
    v5 = *((_DWORD *)v2 + 22);
    __dmb();
    if ( v5 == 2 )
      goto LABEL_16;
    v6 = *((_DWORD *)v2 + 22);
    if ( v6 != 1 )
      goto LABEL_17;
    sub_DA7B9C(&v11);
    v9 = v11 - *((_QWORD *)v2 + 2);
    v7 = (unsigned int)v9 >= 0x2A05F200;
    v8 = (_DWORD)v9 == 705032704;
    LODWORD(v9) = 0;
    if ( !v8 && v7 )
      LODWORD(v9) = 1;
    v10 = 0;
    if ( SHIDWORD(v9) > 1 )
      v10 = 1;
    if ( HIDWORD(v9) == 1 )
      v10 = v9;
    if ( v10 )
LABEL_16:
      result = 1073750016;
    else
LABEL_17:
      result = 0x2000;
  return result;
}


int __fastcall RemoteStorageProviderSyncProgressHandler::onCancel(RemoteStorageProviderSyncProgressHandler *this, MinecraftScreenModel *a2)
{
  RemoteStorageProviderSyncProgressHandler *v2; // r4@1

  v2 = this;
  CallbackToken::cancelCallback((RemoteStorageProviderSyncProgressHandler *)((char *)this + 24));
  return j_j_j__ZN40RemoteStorageProviderSyncProgressHandler12_onCompletedEv(v2);
}


__int64 __fastcall RemoteStorageProviderSyncProgressHandler::onStart(RemoteStorageProviderSyncProgressHandler *this, MinecraftScreenModel *a2)
{
  RemoteStorageProviderSyncProgressHandler *v2; // r4@1
  _DWORD *v3; // r0@1
  void (__fastcall *v4)(char *, char *, __int64 *); // r3@2
  __int64 result; // r0@6
  int v6; // [sp+0h] [bp-38h]@6
  _DWORD *v7; // [sp+8h] [bp-30h]@1
  void (*v8)(void); // [sp+10h] [bp-28h]@1
  void (__fastcall *v9)(int **, int); // [sp+14h] [bp-24h]@1
  char v10; // [sp+18h] [bp-20h]@2
  __int64 v11; // [sp+20h] [bp-18h]@2
  void (*v12)(void); // [sp+28h] [bp-10h]@2
  void (__fastcall *v13)(int **, int); // [sp+2Ch] [bp-Ch]@2

  v2 = this;
  __dmb();
  *((_DWORD *)this + 22) = 1;
  v3 = operator new(4u);
  *v3 = v2;
  v7 = v3;
  v8 = (void (*)(void))sub_C9CB64;
  v9 = sub_C9C9AC;
  if ( !*((_DWORD *)v2 + 10) )
    sub_DA7654();
  v4 = (void (__fastcall *)(char *, char *, __int64 *))*((_DWORD *)v2 + 11);
  v11 = *(_QWORD *)&v7;
  v8 = 0;
  v12 = (void (*)(void))sub_C9CB64;
  v13 = sub_C9C9AC;
  v4(&v10, (char *)v2 + 32, &v11);
  if ( v12 )
    v12();
  CallbackToken::operator=((_DWORD *)v2 + 6, (int)&v10);
  CallbackToken::~CallbackToken((CallbackToken *)&v10);
  if ( v8 )
    v8();
  sub_DA7B9C(&v6);
  result = *(_QWORD *)&v6;
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v6;
  return result;
}


RemoteStorageProviderSyncProgressHandler *__fastcall RemoteStorageProviderSyncProgressHandler::~RemoteStorageProviderSyncProgressHandler(RemoteStorageProviderSyncProgressHandler *this)
{
  RemoteStorageProviderSyncProgressHandler *v1; // r5@1
  CallbackToken *v2; // r4@1
  void (*v3)(void); // r3@1
  void (*v4)(void); // r3@3
  void (*v5)(void); // r3@5

  v1 = this;
  *(_DWORD *)this = &off_26D77A4;
  v2 = (RemoteStorageProviderSyncProgressHandler *)((char *)this + 24);
  CallbackToken::release((RemoteStorageProviderSyncProgressHandler *)((char *)this + 24));
  v3 = (void (*)(void))*((_DWORD *)v1 + 19);
  if ( v3 )
    v3();
  v4 = (void (*)(void))*((_DWORD *)v1 + 14);
  if ( v4 )
    v4();
  v5 = (void (*)(void))*((_DWORD *)v1 + 10);
  if ( v5 )
    v5();
  CallbackToken::~CallbackToken(v2);
  return v1;
}


void __fastcall RemoteStorageProviderSyncProgressHandler::getProgressMessage(RemoteStorageProviderSyncProgressHandler *this, MinecraftScreenModel *a2, int a3)
{
  RemoteStorageProviderSyncProgressHandler::getProgressMessage(this, a2, a3);
}


int __fastcall RemoteStorageProviderSyncProgressHandler::RemoteStorageProviderSyncProgressHandler(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r7@1
  void (__fastcall *v6)(int, int, signed int); // r3@1
  void (__fastcall *v7)(int, int, signed int); // r3@3
  int result; // r0@5

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)(a1 + 4) = 15;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26D77A4;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  CallbackToken::CallbackToken(a1 + 24);
  *(_DWORD *)(v3 + 40) = 0;
  v6 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
  if ( v6 )
  {
    v6(v3 + 32, v4, 2);
    *(_DWORD *)(v3 + 44) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 40) = *(_DWORD *)(v4 + 8);
  }
  *(_DWORD *)(v3 + 56) = 0;
  v7 = *(void (__fastcall **)(int, int, signed int))(v5 + 8);
  if ( v7 )
    v7(v3 + 48, v5, 2);
    *(_DWORD *)(v3 + 60) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v3 + 56) = *(_DWORD *)(v5 + 8);
  *(_BYTE *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_BYTE *)(v3 + 84) = *(_BYTE *)(v3 + 84) & 0xFC | 1;
  *(_DWORD *)(v3 + 88) = 0;
  result = v3;
  *(_DWORD *)(v3 + 8) = 0;
  return result;
}


void __fastcall RemoteStorageProviderSyncProgressHandler::~RemoteStorageProviderSyncProgressHandler(RemoteStorageProviderSyncProgressHandler *this)
{
  RemoteStorageProviderSyncProgressHandler *v1; // r0@1

  v1 = RemoteStorageProviderSyncProgressHandler::~RemoteStorageProviderSyncProgressHandler(this);
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall RemoteStorageProviderSyncProgressHandler::~RemoteStorageProviderSyncProgressHandler(RemoteStorageProviderSyncProgressHandler *this)
{
  RemoteStorageProviderSyncProgressHandler::~RemoteStorageProviderSyncProgressHandler(this);
}
