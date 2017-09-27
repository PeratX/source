

EncryptedNetworkPeer *__fastcall EncryptedNetworkPeer::~EncryptedNetworkPeer(EncryptedNetworkPeer *this)
{
  EncryptedNetworkPeer *v1; // r4@1
  Crypto::Hash::HMAC *v2; // r0@1
  Crypto::Hash::HMAC *v3; // r0@2
  int v4; // r0@3
  Crypto::Hash::HMAC *v5; // r0@5
  Crypto::Hash::HMAC *v6; // r0@6
  int v7; // r0@7
  EncryptedNetworkPeer *result; // r0@9

  v1 = this;
  *(_DWORD *)this = &off_26E9254;
  v2 = (Crypto::Hash::HMAC *)*((_DWORD *)this + 5);
  if ( v2 )
  {
    v3 = Crypto::Hash::HMAC::~HMAC(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 5) = 0;
  v4 = *((_DWORD *)v1 + 4);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  v5 = (Crypto::Hash::HMAC *)*((_DWORD *)v1 + 3);
  if ( v5 )
    v6 = Crypto::Hash::HMAC::~HMAC(v5);
    operator delete((void *)v6);
  *((_DWORD *)v1 + 3) = 0;
  v7 = *((_DWORD *)v1 + 2);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  result = v1;
  *((_DWORD *)v1 + 2) = 0;
  return result;
}


void __fastcall EncryptedNetworkPeer::~EncryptedNetworkPeer(EncryptedNetworkPeer *this)
{
  EncryptedNetworkPeer::~EncryptedNetworkPeer(this);
}


void __fastcall EncryptedNetworkPeer::sendPacket(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  __int64 v4; // kr00_8@2
  _DWORD *v5; // r1@2
  signed __int64 v6; // kr08_8@2
  void *v7; // r0@2
  void (*v8)(void); // r6@3
  char *v9; // r0@3
  char *v10; // r0@4
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  int v13; // r5@9
  void (__fastcall *v14)(int, int *, signed int, _DWORD); // r7@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  int v19; // [sp+8h] [bp-28h]@9
  char *v20; // [sp+Ch] [bp-24h]@3
  char *v21; // [sp+10h] [bp-20h]@3
  int v22; // [sp+14h] [bp-1Ch]@2

  v2 = a1;
  v3 = a2;
  if ( !*(_DWORD *)(a1 + 16) )
  {
    v13 = *(_DWORD *)(a1 + 4);
    v14 = *(void (__fastcall **)(int, int *, signed int, _DWORD))(*(_DWORD *)v13 + 8);
    sub_21E8AF4(&v19, a2);
    v14(v13, &v19, 1, 0);
    v10 = (char *)(v19 - 12);
    if ( (int *)(v19 - 12) == &dword_28898C0 )
      return;
    v11 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_DWORD **)(a1 + 12);
  v6 = *(_QWORD *)(a1 + 24) + 1LL;
  *(_QWORD *)(a1 + 24) = v6;
  Crypto::Hash::HMAC::sign((void **)&v22, v5, v3, v6, v4);
  sub_21E72F0((const void **)v3, (const void **)&v22);
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v22 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  (*(void (__fastcall **)(char **))(**(_DWORD **)(v2 + 16) + 12))(&v21);
  v8 = *(void (**)(void))(**(_DWORD **)(v2 + 4) + 8);
  v20 = v21;
  v21 = (char *)&unk_28898CC;
  v8();
  v9 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v20 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v21 - 4);
LABEL_23:
    v12 = (*v11)--;
LABEL_24:
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


void __fastcall EncryptedNetworkPeer::sendPacket(int a1, int *a2)
{
  EncryptedNetworkPeer::sendPacket(a1, a2);
}


void __fastcall EncryptedNetworkPeer::enableEncryption(int a1, int *a2)
{
  EncryptedNetworkPeer::enableEncryption(a1, a2);
}


void __fastcall EncryptedNetworkPeer::~EncryptedNetworkPeer(EncryptedNetworkPeer *this)
{
  EncryptedNetworkPeer *v1; // r4@1
  Crypto::Hash::HMAC *v2; // r0@1
  Crypto::Hash::HMAC *v3; // r0@2
  int v4; // r0@3
  Crypto::Hash::HMAC *v5; // r0@5
  Crypto::Hash::HMAC *v6; // r0@6
  int v7; // r0@7

  v1 = this;
  *(_DWORD *)this = &off_26E9254;
  v2 = (Crypto::Hash::HMAC *)*((_DWORD *)this + 5);
  if ( v2 )
  {
    v3 = Crypto::Hash::HMAC::~HMAC(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 5) = 0;
  v4 = *((_DWORD *)v1 + 4);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  v5 = (Crypto::Hash::HMAC *)*((_DWORD *)v1 + 3);
  if ( v5 )
    v6 = Crypto::Hash::HMAC::~HMAC(v5);
    operator delete((void *)v6);
  *((_DWORD *)v1 + 3) = 0;
  v7 = *((_DWORD *)v1 + 2);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall EncryptedNetworkPeer::enableEncryption(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  _QWORD *v4; // r6@1
  int v5; // r0@1
  void (__fastcall *v6)(_QWORD *, int *, int *); // r7@3
  unsigned int v7; // r0@3
  unsigned int v8; // r0@3
  void *v9; // r0@3
  void *v10; // r0@4
  void *v11; // r6@5
  Crypto::Hash::HMAC *v12; // r0@5
  Crypto::Hash::HMAC *v13; // r0@6
  _QWORD *v14; // r6@7
  int v15; // r0@7
  void (__fastcall *v16)(_QWORD *, int *, int *); // r7@9
  unsigned int v17; // r0@9
  unsigned int v18; // r0@9
  void *v19; // r0@9
  void *v20; // r0@10
  void *v21; // r6@11
  Crypto::Hash::HMAC *v22; // r0@11
  Crypto::Hash::HMAC *v23; // r0@12
  unsigned int *v24; // r2@14
  signed int v25; // r1@16
  unsigned int *v26; // r2@18
  signed int v27; // r1@20
  unsigned int *v28; // r2@22
  signed int v29; // r1@24
  unsigned int *v30; // r2@26
  signed int v31; // r1@28
  int v32; // [sp+0h] [bp-28h]@9
  int v33; // [sp+4h] [bp-24h]@9
  int v34; // [sp+8h] [bp-20h]@3
  int v35; // [sp+Ch] [bp-1Ch]@3

  v2 = a1;
  v3 = a2;
  v4 = operator new(8u);
  Crypto::Symmetric::Symmetric::Symmetric(v4, 1, 2);
  v5 = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v2 + 16) = v4;
  if ( v5 )
  {
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
    v4 = *(_QWORD **)(v2 + 16);
  }
  v6 = *(void (__fastcall **)(_QWORD *, int *, int *))(*(_DWORD *)v4 + 8);
  v7 = (*(int (__fastcall **)(_QWORD *))(*(_DWORD *)v4 + 20))(v4);
  sub_21E9040((void **)&v35, v3, 0, v7);
  v8 = (*(int (**)(void))(**(_DWORD **)(v2 + 16) + 24))();
  sub_21E9040((void **)&v34, v3, 0, v8);
  v6(v4, &v35, &v34);
  v9 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v35 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = operator new(0xCu);
  Crypto::Hash::HMAC::HMAC((int)v11, 2, v3, 8);
  v12 = *(Crypto::Hash::HMAC **)(v2 + 12);
  *(_DWORD *)(v2 + 12) = v11;
  if ( v12 )
    v13 = Crypto::Hash::HMAC::~HMAC(v12);
    operator delete((void *)v13);
  v14 = operator new(8u);
  Crypto::Symmetric::Symmetric::Symmetric(v14, 1, 2);
  v15 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = v14;
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    v14 = *(_QWORD **)(v2 + 8);
  v16 = *(void (__fastcall **)(_QWORD *, int *, int *))(*(_DWORD *)v14 + 8);
  v17 = (*(int (__fastcall **)(_QWORD *))(*(_DWORD *)v14 + 20))(v14);
  sub_21E9040((void **)&v33, v3, 0, v17);
  v18 = (*(int (**)(void))(**(_DWORD **)(v2 + 8) + 24))();
  sub_21E9040((void **)&v32, v3, 0, v18);
  v16(v14, &v33, &v32);
  v19 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v32 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v33 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = operator new(0xCu);
  Crypto::Hash::HMAC::HMAC((int)v21, 2, v3, 8);
  v22 = *(Crypto::Hash::HMAC **)(v2 + 20);
  *(_DWORD *)(v2 + 20) = v21;
  if ( v22 )
    v23 = Crypto::Hash::HMAC::~HMAC(v22);
    operator delete((void *)v23);
}


int __fastcall EncryptedNetworkPeer::EncryptedNetworkPeer(int result, int a2)
{
  *(_DWORD *)result = &off_26E9254;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


int __fastcall EncryptedNetworkPeer::receivePacket(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r6@1
  int v5; // r1@2
  int v6; // r6@3
  unsigned int v7; // r2@3
  unsigned int v8; // r3@3
  int v9; // r6@4
  int v10; // r0@4
  void *v11; // r0@4
  __int64 v12; // kr00_8@5
  _DWORD *v13; // r1@5
  signed __int64 v14; // kr08_8@5
  char *v15; // r5@5
  signed int v16; // r6@5
  size_t v17; // r2@5
  char *v18; // r4@5
  char *v19; // r0@9
  void *v20; // r0@10
  char *v21; // r0@15
  unsigned int *v23; // r2@17
  signed int v24; // r1@19
  unsigned int *v25; // r2@25
  signed int v26; // r1@27
  unsigned int *v27; // r1@29
  signed int v28; // r0@31
  unsigned int *v29; // r2@33
  signed int v30; // r1@35
  unsigned int *v31; // r2@37
  signed int v32; // r1@39
  void *s1; // [sp+8h] [bp-28h]@5
  int v34; // [sp+Ch] [bp-24h]@4
  void *s2; // [sp+10h] [bp-20h]@4
  int v36; // [sp+14h] [bp-1Ch]@3
  char *v37; // [sp+18h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v37 = (char *)&unk_28898CC;
  v4 = (*(int (**)(void))(**(_DWORD **)(a1 + 4) + 12))();
  if ( !v4 )
  {
    v5 = *(_DWORD *)(v2 + 8);
    if ( v5 )
    {
      (*(void (__fastcall **)(int *))(*(_DWORD *)v5 + 16))(&v36);
      v6 = *(_DWORD *)(v36 - 12);
      v7 = v6 - Crypto::Hash::HMAC::resultSize(*(Crypto::Hash::HMAC **)(v2 + 20));
      v8 = *(_DWORD *)(v36 - 12);
      if ( v8 < v7 )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v7, v8);
      sub_21E9040(&s2, &v36, v7, 0xFFFFFFFF);
      v9 = *(_DWORD *)(v36 - 12);
      v10 = Crypto::Hash::HMAC::resultSize(*(Crypto::Hash::HMAC **)(v2 + 20));
      sub_21E9040((void **)&v34, &v36, 0, v9 - v10);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v34);
      v11 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
      {
        v25 = (unsigned int *)(v34 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      v12 = *(_QWORD *)(v2 + 32);
      v13 = *(_DWORD **)(v2 + 20);
      v14 = *(_QWORD *)(v2 + 32) + 1LL;
      *(_QWORD *)(v2 + 32) = v14;
      Crypto::Hash::HMAC::sign(&s1, v13, v3, v14, v12);
      v15 = (char *)s1;
      v16 = 0;
      v18 = (char *)s1 - 12;
      v17 = *((_DWORD *)s1 - 3);
      if ( v17 == *((_DWORD *)s2 - 3) && !memcmp(s1, s2, v17) )
        v16 = 1;
      if ( (int *)v18 != &dword_28898C0 )
        v27 = (unsigned int *)(v15 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = (char *)s2 - 12;
      if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)((char *)s2 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v36 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      if ( !v16 )
        v4 = 2;
        goto LABEL_15;
    }
    else
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        v3,
        (int *)&v37);
    v4 = 0;
  }
LABEL_15:
  v21 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  return v4;
}
