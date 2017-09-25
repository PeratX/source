

void __fastcall UserAuthentication::_handleRemoveUser(int *a1, _DWORD *a2)
{
  UserAuthentication::_handleRemoveUser(a1, a2);
}


void __fastcall UserAuthentication::UserListObserver::onUserRemoved(int a1, _DWORD *a2)
{
  j_j_j__ZN18UserAuthentication17_handleRemoveUserERKSt10shared_ptrIN6Social4UserEE(*(int **)(a1 + 8), a2);
}


void __fastcall UserAuthentication::getGlobalCertificate(int *a1, int a2)
{
  int *v2; // r5@1
  int v3; // r7@1
  Social::XboxLiveUserManager *v4; // r8@2
  int v5; // r9@4
  void (__fastcall *v6)(int *, int, signed int); // r3@4
  int v7; // r6@4
  void *v8; // r0@6
  int v9; // r1@6
  void *v10; // r0@10
  int v11; // r4@11
  unsigned int *v12; // r1@12
  unsigned int v13; // r0@14
  unsigned int *v14; // r5@18
  unsigned int v15; // r0@20
  unsigned int *v16; // r2@26
  signed int v17; // r1@28
  int v18; // [sp+4h] [bp-4Ch]@5
  void (__fastcall *v19)(int *, int *, signed int); // [sp+Ch] [bp-44h]@4
  int v20; // [sp+10h] [bp-40h]@5
  void *v21; // [sp+14h] [bp-3Ch]@6
  void (*v22)(void); // [sp+1Ch] [bp-34h]@6
  void (__fastcall *v23)(int *, int, int *); // [sp+20h] [bp-30h]@6
  int v24; // [sp+24h] [bp-2Ch]@4
  Social::User *v25; // [sp+28h] [bp-28h]@1
  int v26; // [sp+2Ch] [bp-24h]@11

  v2 = a1;
  v3 = a2;
  ClientInstance::getUser((ClientInstance *)&v25, *a1);
  if ( v25 )
    v4 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v25);
  else
    v4 = 0;
  v5 = v2[12];
  KeyManager::getPublicKey((KeyManager *)&v24, (int)(v2 + 8));
  v19 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  v7 = 0;
  if ( v6 )
  {
    v6(&v18, v3, 2);
    v20 = *(_DWORD *)(v3 + 12);
    v7 = *(_DWORD *)(v3 + 8);
    v19 = *(void (__fastcall **)(int *, int *, signed int))(v3 + 8);
  }
  v22 = 0;
  v8 = operator new(0x14u);
  *(_DWORD *)v8 = v2;
  *(_QWORD *)((char *)v8 + 4) = *(_QWORD *)&v18;
  v9 = v20;
  *((_DWORD *)v8 + 3) = v7;
  *((_DWORD *)v8 + 4) = v9;
  v21 = v8;
  v22 = (void (*)(void))sub_E34AA4;
  v23 = sub_E34674;
  RealmsAPI::getGlobalCertificate(v5, &v24, (int)&v21, v4);
  if ( v22 )
    v22();
  if ( v19 )
    v19(&v18, &v18, 3);
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v26;
  if ( v26 )
    v12 = (unsigned int *)(v26 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
}


void __fastcall UserAuthentication::UserListObserver::~UserListObserver(UserAuthentication::UserListObserver *this, int a2, int a3)
{
  UserAuthentication::UserListObserver::~UserListObserver(this, a2, a3);
}


void __fastcall UserAuthentication::getGlobalCertificate(int *a1, int a2)
{
  UserAuthentication::getGlobalCertificate(a1, a2);
}


int __fastcall UserAuthentication::UserAuthentication(int a1, int a2, __int64 a3, const void **a4, int a5)
{
  int v5; // r10@1
  int *v6; // r5@1
  int v7; // r5@1
  _DWORD *v8; // r0@1
  __int64 v9; // r1@1
  _DWORD *v10; // r0@3
  int v11; // r1@3
  int v12; // r0@5
  int v13; // r5@5
  int v14; // r4@5
  __int64 v15; // r0@5
  void *v16; // r9@7
  unsigned int v17; // r2@7
  unsigned int v18; // r1@9
  unsigned int v19; // r7@9
  char *v20; // r6@15
  char *v21; // r4@17
  int v22; // r4@19
  _DWORD *v24; // [sp+0h] [bp-38h]@1
  __int64 v25; // [sp+8h] [bp-30h]@1

  v5 = a1;
  v6 = (int *)(a1 + 24);
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = &unk_28898CC;
  *(_QWORD *)(a1 + 16) = a3;
  ClientInstance::getOptionsPtr((ClientInstance *)(a1 + 24), a2);
  PrivateKeyManager::PrivateKeyManager(v5 + 32, 5u);
  *(_DWORD *)(v5 + 48) = a5;
  *(_DWORD *)(v5 + 52) = 0;
  UserAuthentication::regenerateSelfSigned(v5, a4);
  v7 = Options::get(*v6, 0);
  v8 = operator new(4u);
  LODWORD(v9) = sub_E34572;
  *v8 = v5;
  HIDWORD(v9) = sub_E3455A;
  v24 = v8;
  v25 = v9;
  Option::registerObserver(v7, v5, (int)&v24);
  if ( (_DWORD)v25 )
    ((void (*)(void))v25)();
  v10 = operator new(0xCu);
  *v10 = &off_26D98C0;
  v10[1] = 0;
  v10[2] = v5;
  v11 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = v10;
  if ( v11 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
  v12 = ClientInstance::getUserManager(*(ClientInstance **)v5);
  v13 = v12;
  v14 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v14 + 4) = v12 + 136;
  v15 = *(_QWORD *)(v12 + 144);
  if ( (_DWORD)v15 == HIDWORD(v15) )
  {
    v16 = *(void **)(v13 + 140);
    v17 = ((signed int)v15 - (signed int)v16) >> 2;
    if ( !v17 )
      v17 = 1;
    HIDWORD(v15) = v17 + (((signed int)v15 - (signed int)v16) >> 2);
    v19 = v17 + (((signed int)v15 - (signed int)v16) >> 2);
    if ( 0 != HIDWORD(v15) >> 30 )
      v19 = 0x3FFFFFFF;
    if ( v18 < v17 )
    if ( v19 )
    {
      if ( v19 >= 0x40000000 )
        sub_119C874();
      v20 = (char *)operator new(4 * v19);
      LODWORD(v15) = *(_QWORD *)(v13 + 140) >> 32;
      v16 = (void *)*(_QWORD *)(v13 + 140);
    }
    else
      v20 = 0;
    *(_DWORD *)&v20[v15 - (_DWORD)v16] = v14;
    v21 = &v20[v15 - (_DWORD)v16];
    if ( 0 != ((signed int)v15 - (signed int)v16) >> 2 )
      _aeabi_memmove4(v20, v16);
    v22 = (int)(v21 + 4);
    if ( v16 )
      operator delete(v16);
    *(_DWORD *)(v13 + 140) = v20;
    *(_DWORD *)(v13 + 144) = v22;
    *(_DWORD *)(v13 + 148) = &v20[4 * v19];
  }
  else
    *(_DWORD *)v15 = v14;
    *(_DWORD *)(v13 + 144) += 4;
  return v5;
}


UserAuthentication *__fastcall UserAuthentication::~UserAuthentication(UserAuthentication *this)
{
  UserAuthentication *v1; // r4@1
  int v2; // r1@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r0@4
  int v6; // r1@6
  void *v7; // r0@6
  int v8; // r5@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r6@14
  unsigned int v12; // r0@16
  int v13; // r1@21
  void *v14; // r0@21
  int v15; // r0@22
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  unsigned int *v21; // r2@33
  signed int v22; // r1@35

  v1 = this;
  Options::unregisterObserver(*((Options **)this + 6), (void *)this);
  v2 = *((_DWORD *)v1 + 13);
  if ( v2 )
    std::default_delete<Certificate>::operator()((int)v1 + 52, v2);
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 8) = &off_26D4D78;
  v3 = *((_DWORD *)v1 + 11);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  *((_DWORD *)v1 + 8) = &off_26D4D8C;
  v5 = *((_DWORD *)v1 + 10);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *((_DWORD *)v1 + 10) = 0;
  v6 = *((_DWORD *)v1 + 9);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v6 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *((_DWORD *)v1 + 7);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  v13 = *((_DWORD *)v1 + 2);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v13 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = *((_DWORD *)v1 + 1);
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


Crypto::Hash::Hash *__fastcall UserAuthentication::regenerateSelfSigned(int a1, const void **a2)
{
  int v2; // r4@1
  const void **v3; // r10@1
  Crypto::Hash::Hash *v4; // r0@1
  void *v5; // r0@2
  signed __int64 v6; // r0@4
  unsigned int v7; // r11@4
  unsigned int v8; // r7@4
  __int64 v9; // r8@4
  int v10; // r5@4
  int v11; // r0@5
  void *v12; // r0@7
  Certificate **v13; // r4@8
  int v14; // r0@8
  Certificate *v15; // r1@8
  int v16; // r1@11
  void *v17; // r0@11
  int v18; // r4@12
  unsigned int *v19; // r1@13
  unsigned int v20; // r0@15
  unsigned int *v21; // r5@19
  unsigned int v22; // r0@21
  char *v23; // r0@26
  unsigned int *v25; // r2@28
  signed int v26; // r1@30
  unsigned int *v27; // r2@32
  unsigned int *v28; // r2@36
  signed int v29; // r1@38
  int v30; // [sp+18h] [bp-88h]@8
  int v31; // [sp+1Ch] [bp-84h]@8
  int v32; // [sp+24h] [bp-7Ch]@5
  char v33; // [sp+28h] [bp-78h]@7
  char v34; // [sp+38h] [bp-68h]@4
  Social::User *v35; // [sp+48h] [bp-58h]@4
  int v36; // [sp+4Ch] [bp-54h]@12
  char v37; // [sp+50h] [bp-50h]@4
  char v38; // [sp+58h] [bp-48h]@4
  void *v39; // [sp+68h] [bp-38h]@4
  char v40; // [sp+6Ch] [bp-34h]@1

  v2 = a1;
  v3 = a2;
  v4 = (Crypto::Hash::Hash *)Crypto::Hash::Hash::Hash((int)&v40, 0);
  Crypto::Hash::Hash::update(v4, (const void *)(v2 + 16), 8u);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v5 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v5 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(void **))(**(_DWORD **)v5 + 488))(&v39);
  Crypto::Hash::Hash::update((Crypto::Hash::Hash *)&v40, v39, *((_DWORD *)v39 - 3));
  Crypto::Hash::Hash::update((Crypto::Hash::Hash *)&v40, *v3, *((_DWORD *)*v3 - 3));
  Crypto::Hash::Hash::getUUID((Crypto::Hash::Hash *)&v38, (int)&v40);
  sub_119D43C(&v37);
  v6 = *(_QWORD *)&v37 / 1000000000LL;
  v7 = *(_QWORD *)&v37 / 1000000000LL;
  LODWORD(v6) = 31536000;
  v8 = (unsigned __int64)(*(_QWORD *)&v37 / 1000000000LL) >> 32;
  v9 = v6 + v7;
  ClientInstance::getUser((ClientInstance *)&v35, *(_DWORD *)v2);
  Json::Value::Value(&v34, 7);
  v10 = Json::Value::operator[]((Json::Value *)&v34, "XUID");
  if ( v35 )
  {
    v11 = Social::User::getLiveUser(v35);
    Social::XboxLiveUserManager::getCurrentXUID((Social::XboxLiveUserManager *)&v32, v11);
  }
    sub_119C884((void **)&v32, (const char *)&unk_257BC67);
  Json::Value::Value((int)&v33, (const char **)&v32);
  Json::Value::operator=(v10, (const Json::Value *)&v33);
  Json::Value::~Value((Json::Value *)&v33);
  v12 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  KeyManager::getPublicKey((KeyManager *)&v30, v2 + 32);
  ExtendedCertificate::createIdentityCertificate(
    (int **)&v31,
    (const PrivateKeyManager *)(v2 + 32),
    v7 - 1,
    (__PAIR__(v8, v7) - 1) >> 32,
    v9,
    (int)&v38,
    (const char **)v3,
    (const char **)&v30,
    (int)&v34);
  v13 = (Certificate **)(v2 + 52);
  v14 = v31;
  v31 = 0;
  v15 = *v13;
  *v13 = (Certificate *)v14;
  if ( v15 )
    std::default_delete<Certificate>::operator()((int)v13, (int)v15);
    if ( v31 )
      std::default_delete<Certificate>::operator()((int)&v31, v31);
  v16 = v30;
  v17 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v30 - 4);
        v16 = __ldrex(v27);
      while ( __strex(v16 - 1, v27) );
      v16 = (*v27)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  Certificate::validate(*v13, v16, __PAIR__(v8, v7));
  Json::Value::~Value((Json::Value *)&v34);
  v18 = v36;
  if ( v36 )
    v19 = (unsigned int *)(v36 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
      if ( &pthread_create )
      {
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      }
      else
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  v23 = (char *)v39 - 12;
  if ( (int *)((char *)v39 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)((char *)v39 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  return Crypto::Hash::Hash::~Hash((Crypto::Hash::Hash *)&v40);
}


void __fastcall UserAuthentication::UserListObserver::~UserListObserver(UserAuthentication::UserListObserver *this, int a2, int a3)
{
  UserAuthentication::UserListObserver **v3; // lr@0
  int v4; // r1@1
  bool v5; // zf@1
  UserAuthentication::UserListObserver *v6; // r12@4
  int v7; // r3@5
  int v8; // r4@6
  bool v9; // zf@7
  UserAuthentication::UserListObserver **v10; // r3@7
  UserAuthentication::UserListObserver *v11; // r5@10
  bool v12; // zf@10
  int v13; // r3@15
  UserAuthentication::UserListObserver *v14; // r2@28

  *(_DWORD *)this = &off_26D6984;
  v4 = *((_DWORD *)this + 1);
  v5 = v4 == 0;
  if ( v4 )
  {
    v3 = (UserAuthentication::UserListObserver **)(*(_QWORD *)(v4 + 4) >> 32);
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
      v10 = (UserAuthentication::UserListObserver **)a3;
      if ( *(UserAuthentication::UserListObserver **)a3 != this )
      {
        v10 = (UserAuthentication::UserListObserver **)(a3 + 4);
        v9 = *(_DWORD *)(a3 + 4) == (_DWORD)this;
      }
      if ( v9 )
        goto LABEL_28;
      v10 = (UserAuthentication::UserListObserver **)(a3 + 8);
      v11 = *(UserAuthentication::UserListObserver **)(a3 + 8);
      v12 = v11 == this;
      if ( v11 != this )
        v10 = (UserAuthentication::UserListObserver **)(a3 + 12);
        v12 = *(_DWORD *)(a3 + 12) == (_DWORD)this;
      if ( v12 )
      --v8;
      a3 += 16;
    }
    while ( v8 > 1 );
  if ( 1 == ((signed int)v3 - a3) >> 2 )
    v10 = (UserAuthentication::UserListObserver **)a3;
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
  v10 = (UserAuthentication::UserListObserver **)a3;
  if ( *(UserAuthentication::UserListObserver **)a3 != this )
    v10 = (UserAuthentication::UserListObserver **)(a3 + 4);
    goto LABEL_22;
LABEL_28:
  v14 = *v10;
  *v10 = v6;
  *(v3 - 1) = v14;
  *(_DWORD *)(v4 + 8) -= 4;
LABEL_29:
  j_j_j__ZdlPv_4((void *)this);
}


void __fastcall UserAuthentication::UserListObserver::onUserRemoved(int a1, _DWORD *a2)
{
  UserAuthentication::UserListObserver::onUserRemoved(a1, a2);
}


char *__fastcall UserAuthentication::getLocalKeys(UserAuthentication *this)
{
  return (char *)this + 32;
}


void __fastcall UserAuthentication::_handleRemoveUser(int *a1, _DWORD *a2)
{
  int *v2; // r4@1
  _DWORD *v3; // r5@1
  int v4; // r4@3
  unsigned int *v5; // r1@4
  unsigned int v6; // r0@6
  unsigned int *v7; // r5@10
  unsigned int v8; // r0@12
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@3

  v2 = a1;
  v3 = a2;
  ClientInstance::getUser((ClientInstance *)&v9, *a1);
  if ( *v3 == v9 )
    ClientInstance::requestLeaveGame((ClientInstance *)*v2, 1, 0);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
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
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}
