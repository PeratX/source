

void __fastcall PlayerAutomationObserver::onConnected(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r6@1
  void (__fastcall *v4)(int, int *, char **, _DWORD); // r7@1
  char *v5; // r4@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int *v9; // r0@11
  void *v10; // r0@16
  void *v11; // r0@17
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  unsigned int *v14; // r2@23
  signed int v15; // r1@25
  int v16; // [sp+4h] [bp-3Ch]@1
  char *v17; // [sp+8h] [bp-38h]@1
  char *v18; // [sp+Ch] [bp-34h]@1
  char *v19; // [sp+10h] [bp-30h]@1
  int v20; // [sp+18h] [bp-28h]@1

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a2;
  v4 = *(void (__fastcall **)(int, int *, char **, _DWORD))(*(_DWORD *)v2 + 1376);
  sub_119C884((void **)&v20, "commands.wsserver.success");
  sub_119C854(&v16, v3);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v17 = (char *)operator new(4u);
  v19 = v17 + 4;
  v18 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v16,
                  (int)&v17,
                  (int)v17);
  v4(v2, &v20, &v17, 0);
  v6 = (int)v18;
  v5 = v17;
  if ( v17 != v18 )
  {
    do
    {
      v9 = (int *)(*(_DWORD *)v5 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*(_DWORD *)v5 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v9);
      }
      v5 += 4;
    }
    while ( v5 != (char *)v6 );
    v5 = v17;
  }
  if ( v5 )
    operator delete(v5);
  v10 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v20 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
}


void __fastcall PlayerAutomationObserver::onDuplicateRequestCancel(PlayerAutomationObserver *this)
{
  int v1; // r4@1
  void (__fastcall *v2)(int, int *, __int64 *, _DWORD); // r5@1
  void *v3; // r4@1
  void *v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20
  __int64 v11; // [sp+0h] [bp-38h]@1
  int v12; // [sp+8h] [bp-30h]@1
  int v13; // [sp+10h] [bp-28h]@1

  v1 = *((_DWORD *)this + 2);
  v2 = *(void (__fastcall **)(int, int *, __int64 *, _DWORD))(*(_DWORD *)v1 + 1376);
  sub_119C884((void **)&v13, "commands.wsserver.request.existing");
  v11 = 0LL;
  v12 = 0;
  v2(v1, &v13, &v11, 0);
  v4 = (void *)HIDWORD(v11);
  v3 = (void *)v11;
  if ( (_DWORD)v11 != HIDWORD(v11) )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v3 = (char *)v3 + 4;
    }
    while ( v3 != v4 );
    v3 = (void *)v11;
  }
  if ( v3 )
    operator delete(v3);
  v8 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
}


void __fastcall PlayerAutomationObserver::~PlayerAutomationObserver(PlayerAutomationObserver *this, int a2, int a3)
{
  PlayerAutomationObserver::~PlayerAutomationObserver(this, a2, a3);
}


void __fastcall PlayerAutomationObserver::onConnectionClosed(PlayerAutomationObserver *this)
{
  int v1; // r4@1
  void (__fastcall *v2)(int, int *, __int64 *, _DWORD); // r5@1
  void *v3; // r4@1
  void *v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20
  __int64 v11; // [sp+0h] [bp-38h]@1
  int v12; // [sp+8h] [bp-30h]@1
  int v13; // [sp+10h] [bp-28h]@1

  v1 = *((_DWORD *)this + 2);
  v2 = *(void (__fastcall **)(int, int *, __int64 *, _DWORD))(*(_DWORD *)v1 + 1376);
  sub_119C884((void **)&v13, "disconnect.closed");
  v11 = 0LL;
  v12 = 0;
  v2(v1, &v13, &v11, 0);
  v4 = (void *)HIDWORD(v11);
  v3 = (void *)v11;
  if ( (_DWORD)v11 != HIDWORD(v11) )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v3 = (char *)v3 + 4;
    }
    while ( v3 != v4 );
    v3 = (void *)v11;
  }
  if ( v3 )
    operator delete(v3);
  v8 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
}


void __fastcall PlayerAutomationObserver::~PlayerAutomationObserver(PlayerAutomationObserver *this, int a2, int a3)
{
  PlayerAutomationObserver **v3; // lr@0
  int v4; // r1@1
  bool v5; // zf@1
  PlayerAutomationObserver *v6; // r12@4
  int v7; // r3@5
  int v8; // r4@6
  bool v9; // zf@7
  PlayerAutomationObserver **v10; // r3@7
  PlayerAutomationObserver *v11; // r5@10
  bool v12; // zf@10
  int v13; // r3@15
  PlayerAutomationObserver *v14; // r2@28

  *(_DWORD *)this = &off_26DA84C;
  v4 = *((_DWORD *)this + 1);
  v5 = v4 == 0;
  if ( v4 )
  {
    v3 = (PlayerAutomationObserver **)(*(_QWORD *)(v4 + 4) >> 32);
    a3 = *(_QWORD *)(v4 + 4);
    v5 = a3 == (_DWORD)v3;
  }
  if ( v5 )
    goto LABEL_29;
  v6 = *(v3 - 1);
  if ( v6 == this )
    *(_DWORD *)(v4 + 8) = v3 - 1;
    j_j_j__ZdlPv_4((void *)this);
    return;
  v7 = ((signed int)v3 - a3) >> 4;
  if ( v7 >= 1 )
    v8 = v7 + 1;
    do
    {
      v9 = *(_DWORD *)a3 == (_DWORD)this;
      v10 = (PlayerAutomationObserver **)a3;
      if ( *(PlayerAutomationObserver **)a3 != this )
      {
        v10 = (PlayerAutomationObserver **)(a3 + 4);
        v9 = *(_DWORD *)(a3 + 4) == (_DWORD)this;
      }
      if ( v9 )
        goto LABEL_28;
      v10 = (PlayerAutomationObserver **)(a3 + 8);
      v11 = *(PlayerAutomationObserver **)(a3 + 8);
      v12 = v11 == this;
      if ( v11 != this )
        v10 = (PlayerAutomationObserver **)(a3 + 12);
        v12 = *(_DWORD *)(a3 + 12) == (_DWORD)this;
      if ( v12 )
      --v8;
      a3 += 16;
    }
    while ( v8 > 1 );
  if ( 1 == ((signed int)v3 - a3) >> 2 )
    v10 = (PlayerAutomationObserver **)a3;
    goto LABEL_24;
  v13 = ((signed int)v3 - a3) >> 2;
  if ( v13 == 2 )
LABEL_22:
    if ( *v10 != this )
      ++v10;
LABEL_24:
      if ( *v10 != this )
        v10 = v3;
      goto LABEL_28;
    goto LABEL_28;
  if ( v13 != 3 )
    v10 = v3;
  v10 = (PlayerAutomationObserver **)a3;
  if ( *(PlayerAutomationObserver **)a3 != this )
    v10 = (PlayerAutomationObserver **)(a3 + 4);
    goto LABEL_22;
LABEL_28:
  v14 = *v10;
  *v10 = v6;
  *(v3 - 1) = v14;
  *(_DWORD *)(v4 + 8) -= 4;
LABEL_29:
  j_j_j__ZdlPv_4((void *)this);
}


void __fastcall PlayerAutomationObserver::onConnectionFailed(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r6@1
  void (__fastcall *v4)(int, int *, char **, _DWORD); // r7@1
  char *v5; // r4@1
  int v6; // r6@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int *v9; // r0@11
  void *v10; // r0@16
  void *v11; // r0@17
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  unsigned int *v14; // r2@23
  signed int v15; // r1@25
  int v16; // [sp+4h] [bp-3Ch]@1
  char *v17; // [sp+8h] [bp-38h]@1
  char *v18; // [sp+Ch] [bp-34h]@1
  char *v19; // [sp+10h] [bp-30h]@1
  int v20; // [sp+18h] [bp-28h]@1

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a2;
  v4 = *(void (__fastcall **)(int, int *, char **, _DWORD))(*(_DWORD *)v2 + 1376);
  sub_119C884((void **)&v20, "commands.wsserver.request.failed");
  sub_119C854(&v16, v3);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v17 = (char *)operator new(4u);
  v19 = v17 + 4;
  v18 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v16,
                  (int)&v17,
                  (int)v17);
  v4(v2, &v20, &v17, 0);
  v6 = (int)v18;
  v5 = v17;
  if ( v17 != v18 )
  {
    do
    {
      v9 = (int *)(*(_DWORD *)v5 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*(_DWORD *)v5 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v9);
      }
      v5 += 4;
    }
    while ( v5 != (char *)v6 );
    v5 = v17;
  }
  if ( v5 )
    operator delete(v5);
  v10 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v20 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
}


void __fastcall PlayerAutomationObserver::onConnected(int a1, int *a2)
{
  PlayerAutomationObserver::onConnected(a1, a2);
}


void __fastcall PlayerAutomationObserver::onConnectionFailed(int a1, int *a2)
{
  PlayerAutomationObserver::onConnectionFailed(a1, a2);
}


void __fastcall PlayerAutomationObserver::onConnectionClosed(PlayerAutomationObserver *this)
{
  PlayerAutomationObserver::onConnectionClosed(this);
}


void __fastcall PlayerAutomationObserver::onDuplicateRequestCancel(PlayerAutomationObserver *this)
{
  PlayerAutomationObserver::onDuplicateRequestCancel(this);
}


int __fastcall PlayerAutomationObserver::PlayerAutomationObserver(int a1, int a2, int a3)
{
  int v3; // r4@1

  v3 = a1;
  *(_DWORD *)a1 = &off_26DA828;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  Automation::AutomationClient::addObserver(a3, a1);
  return v3;
}
