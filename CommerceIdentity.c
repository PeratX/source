

int __fastcall CommerceIdentity::_getReceiptFromStorage(CommerceIdentity *this, int a2)
{
  int v2; // r4@1

  v2 = a2;
  sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  return (*(int (**)(void))(**(_DWORD **)(v2 + 8) + 20))();
}


void __fastcall CommerceIdentity::_getUserIdFromReceipt(int *a1, int a2, int *a3)
{
  int *v3; // r8@1
  char *v4; // r5@1
  int v5; // r5@2
  int v6; // r7@3
  char v7; // r0@5
  int v8; // r0@8
  unsigned int v9; // r5@9
  int v10; // r1@10
  void **v11; // r0@11
  void *v12; // r0@11
  void *v13; // r0@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  void **v18; // [sp+4h] [bp-DCh]@1
  int v19; // [sp+8h] [bp-D8h]@12
  void **v20; // [sp+Ch] [bp-D4h]@1
  void **v21; // [sp+10h] [bp-D0h]@11
  int v22; // [sp+2Ch] [bp-B4h]@12
  int v23; // [sp+34h] [bp-ACh]@11
  int v24; // [sp+38h] [bp-A8h]@12
  int v25; // [sp+C0h] [bp-20h]@1

  v3 = a1;
  Crypto::Hash::hash((Crypto *)&v25, 1, a3);
  sub_21D103C((int)&v18, 24);
  *(_DWORD *)((char *)*(v20 - 3) + (_DWORD)&v20 + 12) = *(_DWORD *)((char *)*(v20 - 3) + (_DWORD)&v20 + 12) & 0xFFFFFFB5 | 8;
  v4 = (char *)*(v20 - 3) + (_DWORD)&v20;
  if ( v4[117] )
  {
    v5 = (int)(v4 + 116);
  }
  else
    v6 = *((_DWORD *)v4 + 31);
    if ( !v6 )
      sub_21E5824();
    if ( *(_BYTE *)(v6 + 28) )
    {
      v7 = *(_BYTE *)(v6 + 61);
    }
    else
      sub_21B50F0(*((_DWORD *)v4 + 31));
      v7 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v6 + 24))(v6, 32);
    v4[116] = v7;
    *(_BYTE *)(v5 + 1) = 1;
  *(_BYTE *)v5 = 48;
  *(_DWORD *)((char *)*(v20 - 3) + (_DWORD)&v20 + 12) |= 0x4000u;
  v8 = v25;
  if ( *(_DWORD *)(v25 - 12) )
    v9 = 0;
    do
      *(_DWORD *)((char *)*(v20 - 3) + (_DWORD)&v20 + 8) = 2;
      v10 = *(_BYTE *)(v8 + v9);
      sub_21CC440((char *)&v20);
      v8 = v25;
      ++v9;
    while ( v9 < *(_DWORD *)(v25 - 12) );
  sub_21CFED8(v3, (int)&v21);
  v11 = off_26D3F84;
  v18 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v18) = off_26D3F80[0];
  v20 = v11;
  v21 = &off_27734E8;
  v12 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v21 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v22);
  v18 = (void **)off_26D3F68;
  *(void ***)((char *)&v18 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v19 = 0;
  sub_21B6560(&v24);
  v13 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall CommerceIdentity::getAuthorizationHeader(CommerceIdentity *this, int a2, int a3)
{
  int v3; // r5@1
  CommerceIdentity *v4; // r8@1
  Social::XboxLiveUserManager *v5; // r0@2
  int v6; // r6@2
  int v7; // r4@2
  unsigned int *v8; // r1@3
  unsigned int v9; // r0@5
  unsigned int *v10; // r7@9
  unsigned int v11; // r0@11
  int v12; // r6@18
  void *v13; // r0@18
  int v14; // r4@19
  unsigned int *v15; // r1@20
  unsigned int v16; // r0@22
  int v17; // r5@24
  unsigned int *v18; // r1@25
  unsigned int v19; // r0@27
  unsigned int *v20; // r4@31
  unsigned int v21; // r0@33
  void *v22; // r0@38
  void *v23; // r0@39
  unsigned int *v24; // r5@43
  unsigned int v25; // r0@45
  unsigned int *v26; // r2@47
  signed int v27; // r1@49
  unsigned int *v28; // r2@51
  signed int v29; // r1@53
  unsigned int *v30; // r2@65
  signed int v31; // r1@67
  int v32; // [sp+0h] [bp-70h]@24
  int v33; // [sp+4h] [bp-6Ch]@24
  int v34; // [sp+8h] [bp-68h]@24
  int v35; // [sp+Ch] [bp-64h]@24
  char v36; // [sp+14h] [bp-5Ch]@24
  int v37; // [sp+18h] [bp-58h]@24
  int v38; // [sp+1Ch] [bp-54h]@24
  int v39; // [sp+20h] [bp-50h]@24
  int v40; // [sp+24h] [bp-4Ch]@24
  __int16 v41; // [sp+28h] [bp-48h]@24
  int v42; // [sp+2Ch] [bp-44h]@24
  int v43; // [sp+34h] [bp-3Ch]@24
  int v44; // [sp+38h] [bp-38h]@18
  Social::User *v45; // [sp+3Ch] [bp-34h]@18
  int v46; // [sp+40h] [bp-30h]@19
  Social::User *v47; // [sp+44h] [bp-2Ch]@2
  int v48; // [sp+48h] [bp-28h]@2
  int v49; // [sp+4Ch] [bp-24h]@24
  int v50; // [sp+50h] [bp-20h]@24

  v3 = a2;
  v4 = this;
  if ( a3 != 1 )
  {
LABEL_24:
    sub_21E94B4((void **)&v43, (const char *)&unk_257BC67);
    sub_21E8AF4(&v42, &v43);
    pplx::get_ambient_scheduler((pplx *)&v49);
    v17 = v50;
    v32 = v49;
    v33 = v50;
    v34 = v49;
    v35 = 0;
    v36 = 0;
    v41 = 0;
    v39 = 0;
    v40 = 0;
    v37 = 0;
    v38 = 0;
    pplx::task_from_result<std::string>((int)v4, &v42, (int)&v32);
    if ( v17 )
    {
      v18 = (unsigned int *)(v17 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 == 1 )
        v20 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
        if ( &pthread_create )
        {
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        }
        else
          v21 = (*v20)--;
        if ( v21 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
    }
    v22 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v42 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v43 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    return;
  }
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v47, *(_DWORD *)(a2 + 4));
  v5 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v47);
  v6 = Social::XboxLiveUserManager::isSignedIn(v5);
  v7 = v48;
  if ( !v48 )
    goto LABEL_75;
  v8 = (unsigned int *)(v48 + 4);
  if ( &pthread_create )
    __dmb();
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 - 1, v8) );
  else
    v9 = (*v8)--;
  if ( v9 != 1 )
  v10 = (unsigned int *)(v7 + 8);
  (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      v11 = __ldrex(v10);
    while ( __strex(v11 - 1, v10) );
    v11 = (*v10)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    if ( !v6 )
      goto LABEL_24;
LABEL_75:
    if ( v6 != 1 )
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v45, *(_DWORD *)(v3 + 4));
  v12 = Social::User::getLiveUser(v45);
  CommerceIdentity::getCommerceServiceURL((CommerceIdentity *)&v44, v3, 1);
  Social::XboxLiveUserManager::getAuthorizationHeader((int)v4, v12, &v44);
  v13 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v46;
  if ( v46 )
    v15 = (unsigned int *)(v46 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v24 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
}


int __fastcall CommerceIdentity::supportsDeviceAccounts(CommerceIdentity *this)
{
  return 0;
}


void __fastcall CommerceIdentity::_getUserIdFromStorage(CommerceIdentity *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r1@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-24h]@1

  v2 = a2;
  v3 = (int *)this;
  sub_21E94B4((void **)&v8, (const char *)&unk_257BC67);
  (*(void (**)(void))(**(_DWORD **)(v2 + 8) + 20))();
  CommerceIdentity::_getUserIdFromReceipt(v3, v4, &v8);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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


void __fastcall CommerceIdentity::getAuthorizationHeader(CommerceIdentity *this, int a2, int a3)
{
  CommerceIdentity::getAuthorizationHeader(this, a2, a3);
}


int __fastcall CommerceIdentity::CommerceIdentity(int a1, int a2, int a3)
{
  int v3; // r4@1
  void *v4; // r0@2
  int v5; // r1@4
  int v6; // r0@4
  int v8; // [sp+4h] [bp-14h]@4

  v3 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = 0;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v4 + 616))(&v8);
  v5 = v8;
  v8 = 0;
  v6 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = v5;
  if ( v6 )
  {
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  }
  return v3;
}


int __fastcall CommerceIdentity::hasAnActiveDeviceAccount(CommerceIdentity *this)
{
  return 0;
}


void **__fastcall CommerceIdentity::getCommerceServiceURL(CommerceIdentity *this, int a2, int a3)
{
  void **v3; // r4@1
  Social::XboxLiveUserManager *v4; // r0@2
  int v5; // r5@2
  int v6; // r6@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r7@9
  unsigned int v10; // r0@11
  Social::User *v12; // [sp+4h] [bp-1Ch]@2
  int v13; // [sp+8h] [bp-18h]@2

  v3 = (void **)this;
  if ( a3 != 1 )
    return sub_21E94B4(v3, (const char *)&unk_257BC67);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v12, *(_DWORD *)(a2 + 4));
  v4 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v12);
  v5 = Social::XboxLiveUserManager::isSignedIn(v4);
  v6 = v13;
  if ( v13 )
  {
    v7 = (unsigned int *)(v13 + 4);
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
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
        if ( !v5 )
          return sub_21E94B4(v3, (const char *)&unk_257BC67);
        return (void **)sub_21E8AF4((int *)v3, (int *)&algn_27E5E84[4]);
  }
  if ( v5 == 1 )
    return (void **)sub_21E8AF4((int *)v3, (int *)&algn_27E5E84[4]);
  return sub_21E94B4(v3, (const char *)&unk_257BC67);
}


void __fastcall CommerceIdentity::getUserId(CommerceIdentity *this, int a2)
{
  CommerceIdentity::getUserId(this, a2);
}


void __fastcall CommerceIdentity::getUserId(CommerceIdentity *this, int a2)
{
  int *v2; // r5@1
  void *v3; // r0@2
  unsigned int *v4; // r2@4
  signed int v5; // r1@6
  int v6; // [sp+4h] [bp-24h]@2

  v2 = (int *)this;
  CommerceIdentity::getLiveAccountUserId(this, a2);
  if ( !*(_DWORD *)(*v2 - 12) )
  {
    sub_21E94B4((void **)&v6, (const char *)&unk_257BC67);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v6);
    v3 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v6 - 4);
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
    }
  }
}


void __fastcall CommerceIdentity::_getUserIdFromReceipt(int *a1, int a2, int *a3)
{
  CommerceIdentity::_getUserIdFromReceipt(a1, a2, a3);
}


  if ( CommerceIdentity::hasAnActiveDeviceAccount((CommerceIdentity *)(v1 + 60)) == 1 )
{
}


int __fastcall CommerceIdentity::ensureUserIdExists(int a1)
{
  int v1; // r4@1
  Social::XboxLiveUserManager *v2; // r0@1
  int v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r7@8
  unsigned int v8; // r0@10
  int v9; // r0@16
  void *v10; // r0@16
  int v11; // r4@16
  int v12; // r5@17
  unsigned int *v13; // r1@18
  unsigned int v14; // r0@20
  unsigned int *v15; // r6@25
  unsigned int v16; // r0@27
  unsigned int *v18; // r2@33
  signed int v19; // r1@35
  Social::User *v20; // [sp+4h] [bp-2Ch]@16
  int v21; // [sp+8h] [bp-28h]@17
  int v22; // [sp+Ch] [bp-24h]@16
  Social::User *v23; // [sp+10h] [bp-20h]@1
  int v24; // [sp+14h] [bp-1Ch]@1

  v1 = a1;
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v23, *(_DWORD *)(a1 + 4));
  v2 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v23);
  v3 = Social::XboxLiveUserManager::isSignedIn(v2);
  v4 = v24;
  if ( v24 )
  {
    v5 = (unsigned int *)(v24 + 4);
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
  if ( v3 == 1 )
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v20, *(_DWORD *)(v1 + 4));
    v9 = Social::User::getLiveUser(v20);
    Social::XboxLiveUserManager::getCurrentXUID((Social::XboxLiveUserManager *)&v22, v9);
    v10 = (void *)(v22 - 12);
    v11 = *(_DWORD *)(v22 - 12) != 0;
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v22 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v12 = v21;
    if ( v21 )
      v13 = (unsigned int *)(v21 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
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
  else
    v11 = 0;
  return v11;
}


signed int __fastcall CommerceIdentity::_setDeviceAccountInStorage(int a1, const void **a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  signed int v4; // r4@2
  int v5; // r0@3
  char *v6; // r5@3
  size_t v7; // r2@4
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  void *s1; // [sp+4h] [bp-1Ch]@3

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(**(_DWORD **)(a1 + 8) + 8))() )
  {
    v4 = 1;
  }
  else
    sub_21E94B4(&s1, (const char *)&unk_257BC67);
    v5 = (*(int (**)(void))(**(_DWORD **)(v2 + 8) + 20))();
    v6 = (char *)s1;
    v4 = 0;
    if ( v5 == 1 )
    {
      v7 = *((_DWORD *)s1 - 3);
      if ( v7 )
      {
        if ( v7 == *((_DWORD *)*v3 - 3) && !memcmp(s1, *v3, v7) )
          v4 = 1;
      }
    }
    if ( (int *)(v6 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v6 - 12);
  return v4;
}


void __fastcall CommerceIdentity::getLiveAccountUserId(CommerceIdentity *this, int a2)
{
  int v2; // r5@1
  Social::XboxLiveUserManager *v3; // r8@1
  Social::XboxLiveUserManager *v4; // r0@1
  int v5; // r6@1
  int v6; // r4@1
  unsigned int *v7; // r1@2
  unsigned int v8; // r0@4
  unsigned int *v9; // r7@8
  unsigned int v10; // r0@10
  int v11; // r0@16
  int v12; // r4@16
  unsigned int *v13; // r1@17
  unsigned int v14; // r0@19
  unsigned int *v15; // r5@24
  unsigned int v16; // r0@26
  Social::User *v17; // [sp+8h] [bp-28h]@16
  int v18; // [sp+Ch] [bp-24h]@16
  Social::User *v19; // [sp+10h] [bp-20h]@1
  int v20; // [sp+14h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v19, *(_DWORD *)(a2 + 4));
  v4 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v19);
  v5 = Social::XboxLiveUserManager::isSignedIn(v4);
  v6 = v20;
  if ( v20 )
  {
    v7 = (unsigned int *)(v20 + 4);
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
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  if ( v5 == 1 )
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v17, *(_DWORD *)(v2 + 4));
    v11 = Social::User::getLiveUser(v17);
    Social::XboxLiveUserManager::getCurrentXUID(v3, v11);
    v12 = v18;
    if ( v18 )
      v13 = (unsigned int *)(v18 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
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
  else
    sub_21E94B4((void **)v3, (const char *)&unk_257BC67);
}


void __fastcall CommerceIdentity::getLiveAccountUserId(CommerceIdentity *this, int a2)
{
  CommerceIdentity::getLiveAccountUserId(this, a2);
}
