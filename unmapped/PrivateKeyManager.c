

int __fastcall PrivateKeyManager::PrivateKeyManager(int a1, int *a2, int *a3, unsigned int a4)
{
  int *v4; // r5@1
  int v5; // r4@1
  void *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+0h] [bp-28h]@1

  v4 = a3;
  v5 = a1;
  KeyManager::KeyManager(a1, a2, a4);
  *(_DWORD *)v5 = &off_26D4D78;
  *(_DWORD *)(v5 + 12) = &unk_28898CC;
  Util::base64_decode((const void **)&v10, v4);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v5 + 12),
    &v10);
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
  return v5;
}


void __fastcall PrivateKeyManager::computeSecret(PrivateKeyManager *this, const KeyManager *a2, int a3)
{
  const KeyManager *v3; // r5@1
  void **v4; // r4@1
  int v5; // r6@1
  int v6; // r7@3
  void (__fastcall *v7)(void **, int, char *, int *); // r9@4
  void *v8; // r0@4
  void *v9; // r0@5
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // [sp+4h] [bp-3Ch]@4
  int v15; // [sp+8h] [bp-38h]@4

  v3 = a2;
  v4 = (void **)this;
  v5 = a3;
  if ( Crypto::Asymmetric::Asymmetric::canComputeSecret(*((Crypto::Asymmetric::Asymmetric **)a2 + 2)) )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5) != 1
      || (v6 = *((_DWORD *)v3 + 2), *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4) != *(_DWORD *)(v6 + 4)) )
    {
      sub_21E94B4(v4, (const char *)&unk_257BC67);
    }
    else
      v7 = *(void (__fastcall **)(void **, int, char *, int *))(*(_DWORD *)v6 + 28);
      KeyManager::getPublicKey((KeyManager *)&v14, v5);
      Util::base64_decode((const void **)&v15, &v14);
      v7(v4, v6, (char *)v3 + 12, &v15);
      v8 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v12 = (unsigned int *)(v15 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      v9 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v14 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
  }
  else
    sub_21E94B4(v4, (const char *)&unk_257BC67);
}


PrivateKeyManager *__fastcall PrivateKeyManager::~PrivateKeyManager(PrivateKeyManager *this)
{
  PrivateKeyManager *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  unsigned int *v10; // r12@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26D4D78;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_26D4D8C;
  v4 = *((_DWORD *)v1 + 2);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  v5 = *((_DWORD *)v1 + 1);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  return v1;
}


void __fastcall PrivateKeyManager::computeSecret(PrivateKeyManager *this, const KeyManager *a2, int a3)
{
  PrivateKeyManager::computeSecret(this, a2, a3);
}


void __fastcall PrivateKeyManager::~PrivateKeyManager(PrivateKeyManager *this)
{
  PrivateKeyManager::~PrivateKeyManager(this);
}


int __fastcall PrivateKeyManager::isValid(PrivateKeyManager *this)
{
  PrivateKeyManager *v1; // r4@1
  int result; // r0@3

  v1 = this;
  if ( sub_DA7374((const void **)this + 3, (const char *)&unk_257BC67)
    && sub_DA7374((const void **)v1 + 1, (const char *)&unk_257BC67) )
  {
    result = *((_DWORD *)v1 + 2) != 0;
  }
  else
    result = 0;
  return result;
}


void __fastcall PrivateKeyManager::~PrivateKeyManager(PrivateKeyManager *this)
{
  PrivateKeyManager *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v7; // r12@6
  signed int v8; // r1@8
  unsigned int *v9; // r12@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26D4D78;
  v2 = *((_DWORD *)this + 3);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_26D4D8C;
  v4 = *((_DWORD *)v1 + 2);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  v5 = *((_DWORD *)v1 + 1);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v5 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  operator delete((void *)v1);
}


int __fastcall PrivateKeyManager::PrivateKeyManager(int a1, unsigned int a2)
{
  unsigned int v2; // r4@1
  int v3; // r5@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, (const char *)&unk_257BC67);
  KeyManager::KeyManager(v3, &v8, v2);
  v4 = (void *)(v8 - 12);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_26D4D78;
  *(_DWORD *)(v3 + 12) = &unk_28898CC;
  (*(void (**)(void))(**(_DWORD **)(v3 + 8) + 8))();
  return v3;
}


int __fastcall PrivateKeyManager::sign(int a1, int a2, int a3)
{
  return (*(int (__fastcall **)(int, _DWORD, int, int))(**(_DWORD **)(a2 + 8) + 20))(
           a1,
           *(_DWORD *)(a2 + 8),
           a2 + 12,
           a3);
}
