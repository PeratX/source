

int __fastcall KeyManager::isValid(KeyManager *this)
{
  KeyManager *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( sub_DA7374((const void **)this + 1, (const char *)&unk_257BC67) )
    result = *((_DWORD *)v1 + 2) != 0;
  else
    result = 0;
  return result;
}


int __fastcall KeyManager::KeyManager(int a1, int *a2, unsigned int a3)
{
  int v3; // r8@1
  int *v4; // r6@1
  unsigned int v5; // r7@1
  int *v6; // r5@1
  void *v7; // r4@1
  int v8; // r0@1
  void *v9; // r0@3
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  int v13; // [sp+0h] [bp-28h]@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)a1 = &off_26D4D8C;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v6 = (int *)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  v7 = operator new(0xCu);
  Crypto::Asymmetric::Asymmetric::Asymmetric((int)v7, v5);
  v8 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = v7;
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  Util::base64_decode((const void **)&v13, v4);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v6, &v13);
  v9 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
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
  }
  return v3;
}


KeyManager *__fastcall KeyManager::~KeyManager(KeyManager *this)
{
  KeyManager *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26D4D8C;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  v3 = *((_DWORD *)v1 + 1);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  return v1;
}


void __fastcall KeyManager::~KeyManager(KeyManager *this)
{
  KeyManager::~KeyManager(this);
}


void __fastcall KeyManager::~KeyManager(KeyManager *this)
{
  KeyManager *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26D4D8C;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  v3 = *((_DWORD *)v1 + 1);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v3 - 4);
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
  operator delete((void *)v1);
}
