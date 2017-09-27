

int __fastcall ActiveDirectoryIdentity::_identityGained(ActiveDirectoryIdentity *this)
{
  ActiveDirectoryIdentity *v1; // r4@1
  int v2; // r5@1
  void *v3; // r0@1
  int result; // r0@2
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int v7; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  v2 = *((_DWORD *)this + 9);
  sub_21E94B4((void **)&v7, (const char *)&unk_257BC67);
  MinecraftEventing::fireEventSignInEdu(v2, (const char **)v1 + 16, 6, (const char **)&v7);
  v3 = (void *)(v7 - 12);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = 5;
  result = *((_DWORD *)v1 + 3);
  if ( result )
    result = (*((int (__fastcall **)(_DWORD))v1 + 4))((char *)v1 + 4);
  return result;
}


BackgroundTask *__fastcall ActiveDirectoryIdentity::setEulaAccepted(ActiveDirectoryIdentity *this)
{
  ActiveDirectoryIdentity *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  BackgroundTask *result; // r0@1
  char v5; // [sp+8h] [bp-30h]@1
  int (*v6)(void); // [sp+10h] [bp-28h]@1
  _DWORD *v7; // [sp+18h] [bp-20h]@1
  int (*v8)(void); // [sp+20h] [bp-18h]@1
  signed int (*v9)(); // [sp+24h] [bp-14h]@1

  v1 = this;
  *((_BYTE *)this + 45) = 1;
  ActiveDirectoryIdentity::_identityGained(this);
  v2 = *((_DWORD *)v1 + 10);
  v3 = operator new(4u);
  *v3 = v1;
  v7 = v3;
  v8 = (int (*)(void))sub_1458590;
  v9 = sub_1458200;
  v6 = 0;
  result = TaskGroup::queue(v2, (int)&v7, (int)&v5, 1u, 0xFFFFFFFF);
  if ( v6 )
    result = (BackgroundTask *)v6();
  if ( v8 )
    result = (BackgroundTask *)v8();
  return result;
}


int __fastcall ActiveDirectoryIdentity::_identityLost(int result)
{
  *(_DWORD *)result = 0;
  if ( *(_DWORD *)(result + 28) )
    result = (*(int (__fastcall **)(_DWORD))(result + 32))(result + 20);
  return result;
}


int __fastcall ActiveDirectoryIdentity::registerIdentityLostCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 20;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 20);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 28);
  v10 = v13;
  *(_DWORD *)(v4 + 28) = v8;
  v14 = *(_DWORD *)(v4 + 32);
  *(_DWORD *)(v4 + 32) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall ActiveDirectoryIdentity::setSkin(int a1, int *a2)
{
  int v2; // r4@1
  void *v3; // r6@1
  __int64 v4; // r0@1
  void *v5; // r0@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  char v8; // [sp+4h] [bp-3Ch]@1
  void (*v9)(void); // [sp+Ch] [bp-34h]@1
  int v10; // [sp+14h] [bp-2Ch]@1
  int v11; // [sp+18h] [bp-28h]@1
  void *v12; // [sp+1Ch] [bp-24h]@1
  void (*v13)(void); // [sp+24h] [bp-1Ch]@1

  v2 = *(_DWORD *)(a1 + 40);
  v10 = a1;
  sub_21E8AF4(&v11, a2);
  v13 = 0;
  v3 = operator new(8u);
  *(_DWORD *)v3 = v10;
  sub_21E8AF4((int *)v3 + 1, &v11);
  HIDWORD(v4) = sub_1457C08;
  v12 = v3;
  LODWORD(v4) = sub_1457FC8;
  *(_QWORD *)&v13 = v4;
  v9 = 0;
  TaskGroup::queue(v2, (int)&v12, (int)&v8, 1u, 0xFFFFFFFF);
  if ( v9 )
    v9();
  if ( v13 )
    v13();
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


int __fastcall ActiveDirectoryIdentity::getIsDialogDisplayed(ActiveDirectoryIdentity *this)
{
  return 0;
}


ActiveDirectoryIdentity *__fastcall ActiveDirectoryIdentity::~ActiveDirectoryIdentity(ActiveDirectoryIdentity *this)
{
  ActiveDirectoryIdentity *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r1@6
  void *v13; // r0@6
  TaskGroup *v14; // r0@7
  TaskGroup *v15; // r0@8
  void (*v16)(void); // r3@9
  void (*v17)(void); // r3@11
  unsigned int *v19; // r2@14
  signed int v20; // r1@16
  unsigned int *v21; // r2@18
  signed int v22; // r1@20
  unsigned int *v23; // r2@22
  signed int v24; // r1@24
  unsigned int *v25; // r2@26
  signed int v26; // r1@28
  unsigned int *v27; // r2@30
  signed int v28; // r1@32
  unsigned int *v29; // r2@34
  signed int v30; // r1@36

  v1 = this;
  TaskGroup::flush(*((TaskGroup **)this + 10));
  v2 = *((_DWORD *)v1 + 18);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 17);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v4 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 16);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v6 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 15);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v8 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 14);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v10 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 13);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v12 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (TaskGroup *)*((_DWORD *)v1 + 10);
  if ( v14 )
    v15 = TaskGroup::~TaskGroup(v14);
    operator delete((void *)v15);
  *((_DWORD *)v1 + 10) = 0;
  v16 = (void (*)(void))*((_DWORD *)v1 + 7);
  if ( v16 )
    v16();
  v17 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v17 )
    v17();
  return v1;
}


int __fastcall ActiveDirectoryIdentity::ActiveDirectoryIdentity(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 36) = a2;
  std::make_unique<TaskGroup,WorkerPool &,char const(&)[26]>(
    (_DWORD *)(a1 + 40),
    WorkerPool::NETWORK,
    "Active Directory Identity");
  *(_DWORD *)(v2 + 44) = 0;
  *(_BYTE *)(v2 + 48) = 2;
  *(_DWORD *)(v2 + 52) = &unk_28898CC;
  *(_DWORD *)(v2 + 56) = &unk_28898CC;
  *(_DWORD *)(v2 + 60) = &unk_28898CC;
  *(_DWORD *)(v2 + 64) = &unk_28898CC;
  *(_DWORD *)(v2 + 68) = &unk_28898CC;
  *(_DWORD *)(v2 + 72) = &unk_28898CC;
  result = v2;
  *(_DWORD *)(v2 + 76) = 0;
  return result;
}


int __fastcall ActiveDirectoryIdentity::setAuthenticationStateComplete(int result)
{
  *(_DWORD *)result = 6;
  return result;
}


int __fastcall ActiveDirectoryIdentity::getAuthenticationState(ActiveDirectoryIdentity *this)
{
  return *(_DWORD *)this;
}


int __fastcall ActiveDirectoryIdentity::registerIdentityGainedCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 4;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 4);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 12);
  v10 = v13;
  *(_DWORD *)(v4 + 12) = v8;
  v14 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 16) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}
