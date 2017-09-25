

void __fastcall Crypto::Hash::HMAC::sign(void **a1, _DWORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  _DWORD *v5; // r5@1
  void **v6; // r4@1
  _DWORD *v7; // r6@1
  int v8; // r2@1
  int v9; // r2@1
  size_t v10; // r0@1
  char *v11; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  __int64 v14; // [sp+0h] [bp-28h]@1
  char *v15; // [sp+Ch] [bp-1Ch]@1

  v5 = a2;
  v6 = a1;
  v7 = a3;
  v14 = a5;
  (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)*a2 + 8))(*a2, *(_DWORD *)(*(_DWORD *)*a2 + 8));
  (*(void (__cdecl **)(_DWORD, __int64 *))(*(_DWORD *)*v5 + 12))(*v5, &v14);
  v8 = *(_DWORD *)(*v7 - 12);
  (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)*v5 + 12))(*v5, *v7);
  v9 = *(_DWORD *)((*(_QWORD *)v5 >> 32) - 12);
  (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)*(_QWORD *)v5 + 12))(*(_QWORD *)v5, *(_QWORD *)v5 >> 32);
  v15 = (char *)&unk_28898CC;
  v10 = (*(int (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)*v5 + 20))(*v5, *(_DWORD *)(*(_DWORD *)*v5 + 20));
  sub_21E849C((char *)&v15, v10, 0);
  (*(void (__cdecl **)(_DWORD, char *))(*(_DWORD *)*v5 + 16))(*v5, v15);
  sub_21E9040(v6, (int *)&v15, 0, v5[2]);
  v11 = v15 - 12;
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
      j_j_j_j__ZdlPv_9(v11);
  }
}


void __fastcall Crypto::Asymmetric::OpenSSLInterface::computeSharedSecret(void **a1, int a2, int *a3, int *a4)
{
  Crypto::Asymmetric::OpenSSLInterface::computeSharedSecret(a1, a2, a3, a4);
}


FILE *__fastcall Crypto::Random::generateUUID(int a1)
{
  int v1; // r6@1
  void *v2; // r0@1
  unsigned int v3; // r0@2
  unsigned int v4; // r0@2
  unsigned int v5; // r0@2
  unsigned int v6; // r0@2
  unsigned int v7; // r3@2
  int v8; // r1@2
  int v9; // r2@2
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  char v13; // [sp+4h] [bp-9F4h]@1
  int v14; // [sp+9C8h] [bp-30h]@2
  int v15; // [sp+9CCh] [bp-2Ch]@2
  int v16; // [sp+9D0h] [bp-28h]@2
  int v17; // [sp+9D4h] [bp-24h]@2
  int v18; // [sp+9E0h] [bp-18h]@1

  v1 = a1;
  sub_21E94B4((void **)&v18, "default");
  sub_21E66B4((FILE **)&v13, (const void **)&v18);
  v2 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  v3 = sub_21E67AC((int)&v13);
  BYTE3(v17) = BYTE3(v3);
  BYTE2(v17) = v3 >> 16;
  LOWORD(v17) = v3;
  v4 = sub_21E67AC((int)&v13);
  BYTE3(v16) = BYTE3(v4);
  BYTE2(v16) = v4 >> 16;
  LOWORD(v16) = v4;
  v5 = sub_21E67AC((int)&v13);
  BYTE3(v15) = BYTE3(v5);
  BYTE2(v15) = v5 >> 16;
  LOWORD(v15) = v5;
  v6 = sub_21E67AC((int)&v13);
  BYTE3(v14) = BYTE3(v6);
  BYTE2(v14) = v6 >> 16;
  LOWORD(v14) = v6;
  v7 = v17 & 0x3FFFFFFF | 0x80000000;
  v8 = v15;
  v9 = v16;
  *(_DWORD *)v1 = v14 & 0xFFFF0FFF | 0x4000;
  *(_DWORD *)(v1 + 4) = v8;
  *(_DWORD *)(v1 + 8) = v9;
  *(_DWORD *)(v1 + 12) = v7;
  return sub_21E67A0((FILE **)&v13);
}


int __fastcall Crypto::Pkcs7::OpenSSLpkcs7Interface::OpenSSLpkcs7Interface(int result)
{
  *(_DWORD *)result = &off_27630B8;
  return result;
}


unsigned int __fastcall Crypto::Asymmetric::Asymmetric::canComputeSecret(Crypto::Asymmetric::Asymmetric *this)
{
  unsigned int v1; // r0@1
  unsigned int result; // r0@2

  v1 = *((_DWORD *)this + 1);
  if ( v1 <= 6 )
    result = (0x78u >> (v1 & 0x7F)) & 1;
  else
    result = 0;
  return result;
}


void __fastcall Crypto::Pkcs7::Pkcs7Verifier::~Pkcs7Verifier(Crypto::Pkcs7::Pkcs7Verifier *this)
{
  Crypto::Pkcs7::Pkcs7Verifier::~Pkcs7Verifier(this);
}


Crypto::Symmetric::Symmetric *__fastcall Crypto::Symmetric::Symmetric::~Symmetric(Crypto::Symmetric::Symmetric *this)
{
  Crypto::Symmetric::Symmetric *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2763094;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


signed int __fastcall Crypto::Symmetric::OpenSSLSymmetricInterface::getBlockSize(Crypto::Symmetric::OpenSSLSymmetricInterface *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1);
  result = 0;
  if ( v1 < 2 )
    result = 16;
  return result;
}


void __fastcall Crypto::Hash::OpenSSLHashInterface::~OpenSSLHashInterface(Crypto::Hash::OpenSSLHashInterface *this)
{
  Crypto::Hash::OpenSSLHashInterface *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2763060;
  v2 = (void *)*((_DWORD *)this + 2);
  if ( v2 )
    j_j_EVP_MD_CTX_destroy(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


Crypto::Hash::HMAC *__fastcall Crypto::Hash::HMAC::~HMAC(Crypto::Hash::HMAC *this)
{
  Crypto::Hash::HMAC *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
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
      j_j_j_j__ZdlPv_9(v3);
  }
  if ( *(_DWORD *)v1 )
    (*(void (**)(void))(**(_DWORD **)v1 + 4))();
  *(_DWORD *)v1 = 0;
  return v1;
}


Crypto::Symmetric::OpenSSLSymmetricInterface *__fastcall Crypto::Symmetric::OpenSSLSymmetricInterface::~OpenSSLSymmetricInterface(Crypto::Symmetric::OpenSSLSymmetricInterface *this)
{
  Crypto::Symmetric::OpenSSLSymmetricInterface *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_27630CC;
  j_j_EVP_CIPHER_CTX_free(*((void **)this + 4));
  j_j_EVP_CIPHER_CTX_free(*((void **)v1 + 5));
  return v1;
}


void __fastcall Crypto::Pkcs7::Pkcs7Verifier::~Pkcs7Verifier(Crypto::Pkcs7::Pkcs7Verifier *this)
{
  Crypto::Pkcs7::Pkcs7Verifier *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2763080;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall Crypto::Asymmetric::OpenSSLInterface::encryptData(void **a1, int a2, int *a3, int *a4, int a5)
{
  void **v5; // r4@1
  int *v6; // r6@1
  void **v7; // r0@2
  int v8; // r0@3
  int v9; // r5@3
  int v10; // r0@4
  int v11; // r7@4
  void *v12; // r1@10
  void **v13; // r0@11
  int v14; // ST00_4@14
  int v15; // ST00_4@15
  signed int v16; // r6@15
  void *v17; // r0@20
  char *v18; // r0@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  size_t v21; // [sp+Ch] [bp-24h]@14
  int v22; // [sp+10h] [bp-20h]@3
  void *v23; // [sp+14h] [bp-1Ch]@1

  v5 = a1;
  v6 = a4;
  v23 = &unk_28898CC;
  if ( *(_DWORD *)(a2 + 8) )
  {
    v7 = &off_27775D4;
LABEL_10:
    v12 = (char *)*v7 + 12;
    *v5 = v12;
LABEL_21:
    v23 = v12;
    goto LABEL_22;
  }
  v22 = *a3;
  v8 = j_j_d2i_PUBKEY(0, &v22, *(_DWORD *)(v22 - 12));
  v9 = v8;
  if ( !v8 )
    goto LABEL_10;
  v10 = j_j_EVP_PKEY_CTX_new(v8, 0);
  v11 = v10;
  if ( !v10 )
    j_j_EVP_PKEY_free(v9);
    v13 = &off_27775D4;
LABEL_20:
    v17 = *v13;
    *v5 = v23;
    v12 = (char *)v17 + 12;
    goto LABEL_21;
  if ( j_j_EVP_PKEY_encrypt_init(v10) <= 0 )
    j_j_EVP_PKEY_CTX_free(v11);
    goto LABEL_20;
  if ( a5 && a5 != 1 )
  if ( j_j_EVP_PKEY_CTX_ctrl(v11, 6, -1) <= 0 )
  v14 = *(_DWORD *)(*v6 - 12);
  if ( j_j_EVP_PKEY_encrypt(v11, 0, &v21, *v6) <= 0 )
  sub_21E849C((char *)&v23, v21, 0);
  v15 = *(_DWORD *)(*v6 - 12);
  v16 = j_j_EVP_PKEY_encrypt(v11, (int)v23, &v21, *v6);
  j_j_EVP_PKEY_CTX_free(v11);
  j_j_EVP_PKEY_free(v9);
  if ( v16 > 0 )
  sub_21E94B4(v5, (const char *)&unk_257BC67);
  v12 = v23;
LABEL_22:
  v18 = (char *)v12 - 12;
  if ( (int *)((char *)v12 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)((char *)v12 - 4);
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
      j_j_j_j__ZdlPv_9(v18);
}


int __fastcall Crypto::Hash::OpenSSLHashInterface::OpenSSLHashInterface(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r0@2
  char *v4; // r0@7
  int v5; // r5@7
  void *v6; // r0@7

  v2 = a1;
  *(_DWORD *)a1 = &off_2763060;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  switch ( a2 )
  {
    case 1:
      v3 = 64;
      break;
    case 2:
      v3 = 672;
    case 3:
      v3 = 673;
    case 4:
      v3 = 674;
    default:
      v3 = 4;
  }
  v4 = j_j_OBJ_nid2sn(v3);
  v5 = j_j_EVP_get_digestbyname((int)v4);
  v6 = j_j_EVP_MD_CTX_create();
  *(_DWORD *)(v2 + 8) = v6;
  j_j_EVP_DigestInit_ex((int)v6, v5);
  return v2;
}


Crypto::Asymmetric::Asymmetric *__fastcall Crypto::Asymmetric::Asymmetric::~Asymmetric(Crypto::Asymmetric::Asymmetric *this)
{
  Crypto::Asymmetric::Asymmetric *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2762FD0;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  return v1;
}


int __fastcall Crypto::Hash::hash(Crypto *a1, int a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r7@1
  int v6; // r6@1
  char *v7; // r4@1
  Crypto::Hash::md5 *v8; // r5@2
  size_t v9; // r0@6
  int result; // r0@6

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = (char *)a1;
  j_Crypto::init(a1);
  if ( (unsigned int)(v6 - 1) >= 4 )
  {
    if ( v6 )
    {
      v8 = 0;
    }
    else
      v8 = (Crypto::Hash::md5 *)j_operator new(0x9Cu);
      *(_DWORD *)v8 = &off_2763040;
      j_Crypto::Hash::md5::init(v8);
  }
  else
    v8 = (Crypto::Hash::md5 *)j_operator new(0xCu);
    j_Crypto::Hash::OpenSSLHashInterface::OpenSSLHashInterface((int)v8, v6);
  (*(void (__fastcall **)(Crypto::Hash::md5 *, int, int))(*(_DWORD *)v8 + 12))(v8, v5, v4);
  *(_DWORD *)v7 = &unk_28898CC;
  v9 = (*(int (__fastcall **)(Crypto::Hash::md5 *))(*(_DWORD *)v8 + 20))(v8);
  sub_21E849C(v7, v9, 0);
  result = (*(int (__fastcall **)(Crypto::Hash::md5 *, _DWORD))(*(_DWORD *)v8 + 16))(v8, *(_DWORD *)v7);
  if ( v8 )
    result = (*(int (__fastcall **)(Crypto::Hash::md5 *))(*(_DWORD *)v8 + 4))(v8);
  return result;
}


int __fastcall Crypto::Hash::md5::update(Crypto::Hash::md5 *this, const void *a2, unsigned int a3)
{
  Crypto::Hash::md5 *v3; // r6@1
  unsigned int v4; // r4@1
  unsigned int v5; // r0@1
  char *v6; // r5@1
  unsigned int v7; // r2@1
  int v8; // r1@1
  int v9; // r1@3
  int v10; // r7@4
  int v11; // r0@4
  char *v12; // r0@7

  v3 = this;
  v4 = a3;
  v5 = *((_DWORD *)this + 1);
  v6 = (char *)a2;
  v7 = (v5 + a3) & 0x1FFFFFFF;
  *((_DWORD *)v3 + 1) = v7;
  v8 = *((_DWORD *)v3 + 2);
  if ( v7 < v5 )
    *((_DWORD *)v3 + 2) = ++v8;
  *((_DWORD *)v3 + 2) = v8 + (v4 >> 29);
  v9 = v5 & 0x3F;
  if ( v5 & 0x3F )
  {
    v10 = 64 - v9;
    v11 = (int)v3 + v9 + 28;
    if ( 64 - v9 > v4 )
      return j_j___aeabi_memcpy_4(v11, (int)v6, v4);
    j___aeabi_memcpy_0(v11, (int)v6, v10);
    j_Crypto::Hash::md5::body(v3, (char *)v3 + 28, 0x40u);
    v4 -= v10;
    v6 += v10;
  }
  if ( v4 >= 0x40 )
    v12 = (char *)j_Crypto::Hash::md5::body(v3, v6, v4 & 0xFFFFFFC0);
    v4 &= 0x3Fu;
    v6 = v12;
  v11 = (int)v3 + 28;
  return j_j___aeabi_memcpy_4(v11, (int)v6, v4);
}


void __fastcall Crypto::Asymmetric::Asymmetric::~Asymmetric(Crypto::Asymmetric::Asymmetric *this)
{
  Crypto::Asymmetric::Asymmetric::~Asymmetric(this);
}


int __fastcall Crypto::Symmetric::OpenSSLSymmetricInterface::init(int a1, int *a2, void **a3)
{
  void **v3; // r4@1
  int *v4; // r6@1
  int v5; // r5@1
  int v6; // r0@1
  void *v7; // r0@4
  int v8; // r7@7
  void *v9; // r0@10
  int result; // r0@18

  v3 = a3;
  v4 = a2;
  v5 = a1;
  *(_DWORD *)(a1 + 16) = j_j_EVP_CIPHER_CTX_new();
  *(_DWORD *)(v5 + 20) = j_j_EVP_CIPHER_CTX_new();
  v6 = *(_DWORD *)(v5 + 4);
  if ( v6 == 1 )
  {
    switch ( *(_DWORD *)(v5 + 8) )
    {
      case 0:
        v7 = j_j_EVP_aes_256_ecb();
        goto LABEL_14;
      case 1:
        v7 = j_j_EVP_aes_256_cbc();
LABEL_14:
        v8 = (int)v7;
        *(_BYTE *)(v5 + 12) = 1;
        break;
      case 2:
        v9 = j_j_EVP_aes_256_cfb8();
        goto LABEL_17;
      case 3:
        v9 = j_j_EVP_aes_256_ofb();
LABEL_17:
        v8 = (int)v9;
      default:
        v8 = 0;
    }
  }
  else if ( v6 )
    v8 = 0;
  else
        v7 = j_j_EVP_aes_128_ecb();
        v7 = j_j_EVP_aes_128_cbc();
        v9 = j_j_EVP_aes_128_cfb8();
        v9 = j_j_EVP_aes_128_ofb();
  result = j_j_EVP_EncryptInit_ex(*(void **)(v5 + 16), v8, 0, *v4, *v3);
  if ( result >= 1 )
    result = j_j_EVP_DecryptInit_ex(*(void **)(v5 + 20), v8, 0, *v4, *v3);
  return result;
}


void *__fastcall Crypto::Asymmetric::Asymmetric::getSystemIdentifier(Crypto::Asymmetric::Asymmetric *this, int a2)
{
  int *v2; // r1@2
  void *result; // r0@3

  switch ( *(_DWORD *)(a2 + 4) )
  {
    case 0:
      v2 = &Crypto::Asymmetric::RSA_1024;
      goto LABEL_10;
    case 1:
      v2 = &Crypto::Asymmetric::RSA_2048;
    case 2:
      v2 = &Crypto::Asymmetric::RSA_4096;
    case 3:
      v2 = &Crypto::Asymmetric::EC_prime256v1;
    case 4:
      v2 = &Crypto::Asymmetric::EC_secp256k1;
    case 5:
      v2 = &Crypto::Asymmetric::EC_secp384r1;
    case 6:
      v2 = &Crypto::Asymmetric::EC_secp521r1;
LABEL_10:
      result = sub_21E8AF4((int *)this, v2);
      break;
    default:
      result = sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  }
  return result;
}


signed int __fastcall Crypto::Hash::md5::resultSize(Crypto::Hash::md5 *this)
{
  return 16;
}


void __fastcall Crypto::Symmetric::Symmetric::~Symmetric(Crypto::Symmetric::Symmetric *this)
{
  Crypto::Symmetric::Symmetric::~Symmetric(this);
}


void __fastcall Crypto::Asymmetric::OpenSSLInterface::computeSharedSecret(void **a1, int a2, int *a3, int *a4)
{
  void **v4; // r4@1
  int *v5; // r5@1
  void *v6; // r0@1
  int v7; // r6@2
  int v8; // r5@3
  int v9; // r0@4
  _DWORD *v10; // r7@4
  signed int v11; // r8@9
  const char *v12; // r1@12
  char *v13; // r0@20
  unsigned int *v14; // r2@22
  signed int v15; // r1@24
  size_t v16; // [sp+8h] [bp-38h]@7
  int v17; // [sp+20h] [bp-20h]@2
  void *v18; // [sp+24h] [bp-1Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = &unk_28898CC;
  v18 = &unk_28898CC;
  if ( *(_DWORD *)(a2 + 8) != 1 )
    goto LABEL_11;
  v17 = *a3;
  v7 = j_j_d2i_AutoPrivateKey(0, &v17, *(_DWORD *)(v17 - 12));
  if ( v7 )
  {
    v17 = *v5;
    v8 = j_j_d2i_PUBKEY(0, &v17, *(_DWORD *)(v17 - 12));
    if ( v8 )
    {
      v9 = j_j_EVP_PKEY_CTX_new(v7, 0);
      v10 = (_DWORD *)v9;
      if ( v9 )
      {
        if ( j_j_EVP_PKEY_derive_init(v9) <= 0 )
        {
          j_j_EVP_PKEY_CTX_free((int)v10);
          j_j_EVP_PKEY_free(v7);
          j_j_EVP_PKEY_free(v8);
          v12 = (const char *)&unk_257BC67;
        }
        else if ( j_j_EVP_PKEY_derive_set_peer((int)v10, v8) <= 0 )
        else if ( j_j_EVP_PKEY_derive(v10, 0, &v16) >= 1 && v16 )
          sub_21E849C((char *)&v18, v16, 0);
          v11 = j_j_EVP_PKEY_derive(v10, (int)v18, &v16);
          if ( v11 > 0 )
          {
            v6 = v18;
LABEL_11:
            *v4 = v6;
            v18 = &unk_28898CC;
            goto LABEL_20;
          }
        else
      }
      else
        j_j_EVP_PKEY_free(v7);
        j_j_EVP_PKEY_free(v8);
        v12 = (const char *)&unk_257BC67;
    }
    else
      j_j_EVP_PKEY_free(v7);
      v12 = (const char *)&unk_257BC67;
  }
  else
    v12 = (const char *)&unk_257BC67;
  sub_21E94B4(v4, v12);
LABEL_20:
  v13 = (char *)v18 - 12;
  if ( (int *)((char *)v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)((char *)v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


unsigned int __fastcall Crypto::Random::Random::fillType(unsigned int result, int a2, unsigned int a3)
{
  unsigned int v3; // r5@1
  int v4; // r8@1
  int v5; // r9@1
  int v6; // r7@2
  unsigned int v7; // r4@2
  int v8; // r6@3
  int v9; // r1@6
  int v10; // r2@7
  unsigned int v11; // r3@7

  v3 = a3;
  v4 = a2;
  v5 = result;
  if ( a3 >= 4 )
  {
    v6 = a2 - 2;
    v7 = a3;
    do
    {
      v8 = v6 + v7;
      result = sub_21E67AC(v5);
      *(_BYTE *)(v8 + 1) = BYTE3(result);
      *(_BYTE *)(v6 + v7) = result >> 16;
      v7 -= 4;
      *(_BYTE *)(v8 - 1) = BYTE1(result);
      *(_BYTE *)(v8 - 2) = result;
    }
    while ( v7 > 3 );
    v3 &= 3u;
  }
  if ( v3 )
    result = sub_21E67AC(v5);
    v9 = 8 * v3;
      v10 = v4 + v3;
      v11 = result >> v9;
      v9 -= 8;
      --v3;
      *(_BYTE *)(v10 - 1) = v11;
    while ( v3 );
  return result;
}


FILE **__fastcall Crypto::Random::Random::Random(int a1)
{
  FILE **v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+8h] [bp-18h]@1

  v1 = (FILE **)a1;
  sub_21E94B4((void **)&v6, "default");
  sub_21E66B4(v1, (const void **)&v6);
  v2 = (void *)(v6 - 12);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  return v1;
}


void __fastcall Crypto::Symmetric::OpenSSLSymmetricInterface::encrypt(void **a1, int a2, void **a3)
{
  Crypto::Symmetric::OpenSSLSymmetricInterface::encrypt(a1, a2, a3);
}


int __fastcall Crypto::Hash::HMAC::HMAC(int a1, int a2, int *a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r5@1
  int *v7; // r0@1
  void *v8; // r7@2
  int v9; // r0@2
  Crypto::Hash::md5 *v10; // r0@4
  Crypto::Hash::md5 *v11; // r6@4

  v4 = a1;
  *(_DWORD *)a1 = 0;
  v5 = a2;
  v6 = a4;
  v7 = sub_21E8AF4((int *)(a1 + 4), a3);
  *(_DWORD *)(v4 + 8) = v6;
  j_Crypto::init((Crypto *)v7);
  if ( (unsigned int)(v5 - 1) >= 4 )
  {
    if ( v5 )
      return v4;
    v10 = (Crypto::Hash::md5 *)j_operator new(0x9Cu);
    v11 = v10;
    *(_DWORD *)v10 = &off_2763040;
    j_Crypto::Hash::md5::init(v10);
    v9 = *(_DWORD *)v4;
    *(_DWORD *)v4 = v11;
  }
  else
    v8 = j_operator new(0xCu);
    j_Crypto::Hash::OpenSSLHashInterface::OpenSSLHashInterface((int)v8, v5);
    *(_DWORD *)v4 = v8;
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  if ( v6 < 0 || (*(int (**)(void))(**(_DWORD **)v4 + 20))() < v6 )
    *(_DWORD *)(v4 + 8) = (*(int (**)(void))(**(_DWORD **)v4 + 20))();
  return v4;
}


void __fastcall Crypto::Hash::Hash::getUUID(Crypto::Hash::Hash *this, int a2)
{
  Crypto::Hash::Hash::getUUID(this, a2);
}


signed int __fastcall Crypto::Asymmetric::Asymmetric::canSign(Crypto::Asymmetric::Asymmetric *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1);
  result = 0;
  if ( v1 < 7 )
    result = 1;
  return result;
}


int __fastcall Crypto::Hash::OpenSSLHashInterface::reset(Crypto::Hash::OpenSSLHashInterface *this)
{
  Crypto::Hash::OpenSSLHashInterface *v1; // r4@1
  unsigned int v2; // r0@2
  char *v3; // r0@7
  int v4; // r1@7

  v1 = this;
  switch ( *((_DWORD *)this + 1) )
  {
    case 1:
      v2 = 64;
      break;
    case 2:
      v2 = 672;
    case 3:
      v2 = 673;
    case 4:
      v2 = 674;
    default:
      v2 = 4;
  }
  v3 = j_j_OBJ_nid2sn(v2);
  v4 = j_j_EVP_get_digestbyname((int)v3);
  return j_j_j_EVP_DigestInit_ex_0(*((_DWORD *)v1 + 2), v4);
}


void __fastcall Crypto::Hash::Hash::~Hash(Crypto::Hash::Hash *this)
{
  Crypto::Hash::Hash *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2763020;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall Crypto::Asymmetric::OpenSSLInterface::signData(void **a1, int a2, int *a3, int *a4, int a5)
{
  void **v5; // r9@1
  int v6; // r4@1
  int *v7; // r7@1
  int v8; // r0@1
  int v9; // r6@1
  int v10; // r0@2
  int v11; // r5@2
  const char *v12; // r1@8
  int v13; // ST00_4@17
  int v14; // ST00_4@18
  const char *v15; // r1@20
  void *v16; // r0@23
  unsigned int *v17; // r2@24
  signed int v18; // r1@26
  char *v19; // r0@30
  unsigned int *v20; // r2@32
  signed int v21; // r1@34
  int v22; // [sp+14h] [bp-44h]@17
  size_t v23; // [sp+18h] [bp-40h]@17
  int v24; // [sp+30h] [bp-28h]@1
  void *v25; // [sp+34h] [bp-24h]@1

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v25 = &unk_28898CC;
  v24 = *a3;
  v8 = j_j_d2i_AutoPrivateKey(0, &v24, *(_DWORD *)(v24 - 12));
  v9 = v8;
  if ( !v8 )
  {
    v12 = (const char *)&unk_257BC67;
LABEL_29:
    sub_21E94B4(v5, v12);
    goto LABEL_30;
  }
  v10 = j_j_EVP_PKEY_CTX_new(v8, 0);
  v11 = v10;
  if ( !v10 )
    j_j_EVP_PKEY_free(v9);
    goto LABEL_29;
  if ( j_j_EVP_PKEY_sign_init(v10) <= 0 )
    j_j_EVP_PKEY_CTX_free(v11);
  if ( *(_DWORD *)(v6 + 8) )
    goto LABEL_17;
  if ( j_j_EVP_PKEY_CTX_ctrl(v11, 6, -1) <= 0 )
  switch ( a5 )
    case 0:
      j_j_EVP_md5();
      break;
    case 1:
      j_j_EVP_sha1();
    case 2:
      j_j_EVP_sha256();
    case 3:
      j_j_EVP_sha384();
    case 4:
      j_j_EVP_sha512();
    default:
  if ( j_j_EVP_PKEY_CTX_ctrl(v11, -1, 248) <= 0 )
LABEL_17:
  j_Crypto::Hash::hash((Crypto *)&v22, a5, v7);
  v13 = *(_DWORD *)(v22 - 12);
  if ( j_j_EVP_PKEY_sign(v11, 0, &v23, v22) <= 0 )
    v15 = (const char *)&unk_257BC67;
LABEL_22:
    sub_21E94B4(v5, v15);
    goto LABEL_23;
  sub_21E849C((char *)&v25, v23, 0);
  v14 = *(_DWORD *)(v22 - 12);
  if ( j_j_EVP_PKEY_sign(v11, (int)v25, &v23, v22) <= 0 )
    goto LABEL_22;
  j_j_EVP_PKEY_free(v9);
  j_j_EVP_PKEY_CTX_free(v11);
  *v5 = v25;
LABEL_23:
  v16 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
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
      j_j_j_j__ZdlPv_9(v16);
LABEL_30:
  v19 = (char *)v25 - 12;
  if ( (int *)((char *)v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)((char *)v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
}


void __fastcall Crypto::Hash::OpenSSLHashInterface::~OpenSSLHashInterface(Crypto::Hash::OpenSSLHashInterface *this)
{
  Crypto::Hash::OpenSSLHashInterface::~OpenSSLHashInterface(this);
}


void __fastcall Crypto::Symmetric::OpenSSLSymmetricInterface::~OpenSSLSymmetricInterface(Crypto::Symmetric::OpenSSLSymmetricInterface *this)
{
  Crypto::Symmetric::OpenSSLSymmetricInterface *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_27630CC;
  j_j_EVP_CIPHER_CTX_free(*((void **)this + 4));
  j_j_EVP_CIPHER_CTX_free(*((void **)v1 + 5));
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall Crypto::Hash::OpenSSLHashInterface::final(Crypto::Hash::OpenSSLHashInterface *this, unsigned __int8 *a2)
{
  char v3; // [sp+4h] [bp-Ch]@1

  return j_j_EVP_DigestFinal_ex(*((_DWORD *)this + 2), (int)a2, &v3);
}


void __fastcall Crypto::Asymmetric::OpenSSLInterface::encryptData(void **a1, int a2, int *a3, int *a4, int a5)
{
  Crypto::Asymmetric::OpenSSLInterface::encryptData(a1, a2, a3, a4, a5);
}


int __fastcall Crypto::Hash::md5::init(int result)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 1732584193;
  *(_DWORD *)(result + 16) = -271733879;
  *(_DWORD *)(result + 20) = -1732584194;
  *(_DWORD *)(result + 24) = 271733878;
  return result;
}


void __fastcall Crypto::Symmetric::OpenSSLSymmetricInterface::~OpenSSLSymmetricInterface(Crypto::Symmetric::OpenSSLSymmetricInterface *this)
{
  Crypto::Symmetric::OpenSSLSymmetricInterface::~OpenSSLSymmetricInterface(this);
}


void __fastcall Crypto::Hash::Hash::~Hash(Crypto::Hash::Hash *this)
{
  Crypto::Hash::Hash::~Hash(this);
}


int __fastcall Crypto::Hash::Hash::final(Crypto::Hash::Hash *this, int a2)
{
  char *v2; // r5@1
  int v3; // r4@1
  size_t v4; // r0@1

  v2 = (char *)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 20))(a2);
  sub_21E849C(v2, v4, 0);
  return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 16))(v3, *(_DWORD *)v2);
}


int __fastcall Crypto::Asymmetric::Asymmetric::Asymmetric(int a1, unsigned int a2)
{
  int v2; // r4@1
  unsigned int v3; // r5@1
  void *v4; // r6@1
  int v5; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_2762FD0;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  j_Crypto::init((Crypto *)&off_2762FD0);
  v4 = j_operator new(0x14u);
  j_Crypto::Asymmetric::OpenSSLInterface::OpenSSLInterface((int)v4, v3);
  v5 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = v4;
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  return v2;
}


signed int __fastcall Crypto::Symmetric::OpenSSLSymmetricInterface::getKeySize(Crypto::Symmetric::OpenSSLSymmetricInterface *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1);
  result = 0;
  if ( v1 == 1 )
    result = 32;
  if ( !v1 )
    result = 16;
  return result;
}


char *__fastcall Crypto::Random::Random::getBytes(char *a1, int a2, size_t a3)
{
  char *v3; // r6@1
  size_t v4; // r5@1
  int v5; // r8@1
  char *result; // r0@1
  int v7; // r9@1
  int v8; // r7@2
  unsigned int v9; // r4@2
  int v10; // r6@3
  int v11; // r1@6
  int v12; // r2@7
  unsigned int v13; // r3@7

  v3 = a1;
  v4 = a3;
  v5 = a2;
  *(_DWORD *)a1 = &unk_28898CC;
  result = sub_21E849C(a1, a3, 0);
  v7 = *(_DWORD *)v3;
  if ( v4 >= 4 )
  {
    v8 = v7 - 2;
    v9 = v4;
    do
    {
      v10 = v8 + v9;
      result = (char *)sub_21E67AC(v5);
      *(_BYTE *)(v10 + 1) = BYTE3(result);
      *(_BYTE *)(v8 + v9) = (unsigned int)result >> 16;
      v9 -= 4;
      *(_BYTE *)(v10 - 1) = BYTE1(result);
      *(_BYTE *)(v10 - 2) = (_BYTE)result;
    }
    while ( v9 > 3 );
    v4 &= 3u;
  }
  if ( v4 )
    result = (char *)sub_21E67AC(v5);
    v11 = 8 * v4;
      v12 = v7 + v4;
      v13 = (unsigned int)result >> v11;
      v11 -= 8;
      --v4;
      *(_BYTE *)(v12 - 1) = v13;
    while ( v4 );
  return result;
}


void __fastcall Crypto::Asymmetric::OpenSSLInterface::signData(void **a1, int a2, int *a3, int *a4, int a5)
{
  Crypto::Asymmetric::OpenSSLInterface::signData(a1, a2, a3, a4, a5);
}


Crypto::Pkcs7::Pkcs7Verifier *__fastcall Crypto::Pkcs7::Pkcs7Verifier::Pkcs7Verifier(Crypto::Pkcs7::Pkcs7Verifier *this)
{
  Crypto::Pkcs7::Pkcs7Verifier *v1; // r4@1
  Crypto::Pkcs7::OpenSSLpkcs7Interface *v2; // r5@1
  int v3; // r0@1

  v1 = this;
  *(_QWORD *)this = (unsigned int)&off_2763080;
  j_Crypto::init((Crypto *)&off_2763080);
  v2 = (Crypto::Pkcs7::OpenSSLpkcs7Interface *)j_operator new(4u);
  j_Crypto::Pkcs7::OpenSSLpkcs7Interface::OpenSSLpkcs7Interface(v2);
  v3 = *((_DWORD *)v1 + 1);
  *((_DWORD *)v1 + 1) = v2;
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  return v1;
}


void __fastcall Crypto::Symmetric::Symmetric::~Symmetric(Crypto::Symmetric::Symmetric *this)
{
  Crypto::Symmetric::Symmetric *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2763094;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall Crypto::Hash::Hash::getUUID(Crypto::Hash::Hash *this, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  Crypto::Hash::Hash *v4; // r4@1
  unsigned int v5; // r0@1
  int v6; // r2@3
  int v7; // r6@3
  int v8; // r1@3
  unsigned int v9; // r3@3
  int v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1
  int v12; // [sp+Ch] [bp-14h]@1

  v2 = 0;
  v3 = a2;
  v10 = 0;
  v11 = 0;
  v4 = this;
  v12 = 0;
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 20))(a2);
  if ( 0 != v5 >> 3 )
  {
    j_std::vector<unsigned long long,std::allocator<unsigned long long>>::_M_default_append((int)&v10, v5 >> 3);
    v2 = v10;
  }
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v3 + 16))(v3, v2);
  v6 = *(_DWORD *)(v2 + 8);
  v7 = *(_DWORD *)(v3 + 8);
  v8 = *(_DWORD *)(v2 + 4) | (v7 << 12 >> 31);
  v9 = *(_DWORD *)(v2 + 12) & 0x3FFFFFFF | 0x80000000;
  *(_DWORD *)v4 = *(_DWORD *)v2 & 0xFFFF0FFF | (v7 << 12);
  *((_DWORD *)v4 + 1) = v8;
  *((_DWORD *)v4 + 2) = v6;
  *((_DWORD *)v4 + 3) = v9;
  if ( v2 )
    j_operator delete((void *)v2);
}


Crypto::Hash::OpenSSLHashInterface *__fastcall Crypto::Hash::OpenSSLHashInterface::~OpenSSLHashInterface(Crypto::Hash::OpenSSLHashInterface *this)
{
  Crypto::Hash::OpenSSLHashInterface *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2763060;
  v2 = (void *)*((_DWORD *)this + 2);
  if ( v2 )
    j_j_EVP_MD_CTX_destroy(v2);
  return v1;
}


Crypto::Hash::Hash *__fastcall Crypto::Hash::Hash::~Hash(Crypto::Hash::Hash *this)
{
  Crypto::Hash::Hash *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2763020;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


void __fastcall Crypto::Asymmetric::OpenSSLInterface::decryptData(void **a1, int a2, int *a3, int *a4, int a5)
{
  void **v5; // r4@1
  int *v6; // r6@1
  void **v7; // r0@2
  int v8; // r0@3
  int v9; // r5@3
  int v10; // r0@4
  int v11; // r7@4
  void *v12; // r1@10
  void **v13; // r0@11
  int v14; // ST00_4@14
  int v15; // ST00_4@15
  signed int v16; // r6@15
  void *v17; // r0@20
  char *v18; // r0@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  size_t v21; // [sp+Ch] [bp-24h]@14
  int v22; // [sp+10h] [bp-20h]@3
  void *v23; // [sp+14h] [bp-1Ch]@1

  v5 = a1;
  v6 = a4;
  v23 = &unk_28898CC;
  if ( *(_DWORD *)(a2 + 8) )
  {
    v7 = &off_27775D4;
LABEL_10:
    v12 = (char *)*v7 + 12;
    *v5 = v12;
LABEL_21:
    v23 = v12;
    goto LABEL_22;
  }
  v22 = *a3;
  v8 = j_j_d2i_AutoPrivateKey(0, &v22, *(_DWORD *)(v22 - 12));
  v9 = v8;
  if ( !v8 )
    goto LABEL_10;
  v10 = j_j_EVP_PKEY_CTX_new(v8, 0);
  v11 = v10;
  if ( !v10 )
    j_j_EVP_PKEY_free(v9);
    v13 = &off_27775D4;
LABEL_20:
    v17 = *v13;
    *v5 = v23;
    v12 = (char *)v17 + 12;
    goto LABEL_21;
  if ( j_j_EVP_PKEY_decrypt_init(v10) <= 0 )
    j_j_EVP_PKEY_CTX_free(v11);
    goto LABEL_20;
  if ( a5 && a5 != 1 )
  if ( j_j_EVP_PKEY_CTX_ctrl(v11, 6, -1) <= 0 )
  v14 = *(_DWORD *)(*v6 - 12);
  if ( j_j_EVP_PKEY_decrypt(v11, 0, &v21, *v6) <= 0 )
  sub_21E849C((char *)&v23, v21, 0);
  v15 = *(_DWORD *)(*v6 - 12);
  v16 = j_j_EVP_PKEY_decrypt(v11, (int)v23, &v21, *v6);
  j_j_EVP_PKEY_CTX_free(v11);
  j_j_EVP_PKEY_free(v9);
  if ( v16 > 0 )
  sub_21E94B4(v5, (const char *)&unk_257BC67);
  v12 = v23;
LABEL_22:
  v18 = (char *)v12 - 12;
  if ( (int *)((char *)v12 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)((char *)v12 - 4);
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
      j_j_j_j__ZdlPv_9(v18);
}


_QWORD *__fastcall Crypto::Symmetric::Symmetric::Symmetric(_QWORD *a1, int a2, int a3)
{
  _QWORD *v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  void *v6; // r7@1
  int v7; // r0@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *a1 = (unsigned int)&off_2763094;
  j_Crypto::init((Crypto *)&off_2763094);
  v6 = j_operator new(0x18u);
  j_Crypto::Symmetric::OpenSSLSymmetricInterface::OpenSSLSymmetricInterface((int)v6, v4, v5);
  v7 = *((_DWORD *)v3 + 1);
  *((_DWORD *)v3 + 1) = v6;
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  return v3;
}


int __fastcall Crypto::Hash::md5::reset(int result)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 1732584193;
  *(_DWORD *)(result + 16) = -271733879;
  *(_DWORD *)(result + 20) = -1732584194;
  *(_DWORD *)(result + 24) = 271733878;
  return result;
}


int __fastcall Crypto::Symmetric::OpenSSLSymmetricInterface::OpenSSLSymmetricInterface(int result, int a2, int a3)
{
  *(_DWORD *)result = &off_27630CC;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a3;
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


int __fastcall Crypto::Asymmetric::OpenSSLInterface::OpenSSLInterface(int result, unsigned int a2)
{
  signed int v2; // r2@4

  *(_DWORD *)result = &off_2762FF8;
  *(_DWORD *)(result + 4) = a2;
  if ( a2 <= 6 )
  {
    switch ( a2 )
    {
      case 3u:
      case 4u:
      case 5u:
      case 6u:
        *(_DWORD *)(result + 8) = 1;
        return result;
      case 0u:
        v2 = 1024;
        break;
      case 1u:
        v2 = 2048;
      case 2u:
        v2 = 4096;
    }
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 12) = v2;
    *(_DWORD *)(result + 16) = 65537;
  }
  return result;
}


signed int __fastcall Crypto::Asymmetric::fromSystemString(const void **a1, signed int *a2)
{
  signed int *v2; // r4@1
  const void *v3; // r5@1
  size_t v4; // r6@1
  signed int v6; // r0@16

  v2 = a2;
  v3 = *a1;
  v4 = *((_DWORD *)*a1 - 3);
  if ( v4 == *(_DWORD *)(Crypto::Asymmetric::RSA_1024 - 12)
    && !j_memcmp_0(v3, (const void *)Crypto::Asymmetric::RSA_1024, v4) )
  {
    v6 = 0;
  }
  else if ( v4 == *(_DWORD *)(Crypto::Asymmetric::RSA_2048 - 12)
         && !j_memcmp_0(v3, (const void *)Crypto::Asymmetric::RSA_2048, v4) )
    v6 = 1;
  else if ( v4 == *(_DWORD *)(Crypto::Asymmetric::RSA_4096 - 12)
         && !j_memcmp_0(v3, (const void *)Crypto::Asymmetric::RSA_4096, v4) )
    v6 = 2;
  else if ( v4 == *(_DWORD *)(Crypto::Asymmetric::EC_prime256v1 - 12)
         && !j_memcmp_0(v3, (const void *)Crypto::Asymmetric::EC_prime256v1, v4) )
    v6 = 3;
  else if ( v4 == *(_DWORD *)(Crypto::Asymmetric::EC_secp256k1 - 12)
         && !j_memcmp_0(v3, (const void *)Crypto::Asymmetric::EC_secp256k1, v4) )
    v6 = 4;
  else if ( v4 == *(_DWORD *)(Crypto::Asymmetric::EC_secp384r1 - 12)
         && !j_memcmp_0(v3, (const void *)Crypto::Asymmetric::EC_secp384r1, v4) )
    v6 = 5;
  else
    if ( v4 != *(_DWORD *)(Crypto::Asymmetric::EC_secp521r1 - 12)
      || j_memcmp_0(v3, (const void *)Crypto::Asymmetric::EC_secp521r1, v4) )
    {
      return 0;
    }
    v6 = 6;
  *v2 = v6;
  return 1;
}


FILE **__fastcall Crypto::Random::Random::~Random(FILE **a1)
{
  FILE **v1; // r4@1

  v1 = a1;
  sub_21E67A0(a1);
  return v1;
}


void __fastcall Crypto::Symmetric::OpenSSLSymmetricInterface::encrypt(void **a1, int a2, void **a3)
{
  void **v3; // r8@1
  void **v4; // r6@1
  int v5; // r5@1
  unsigned int v6; // r7@1
  unsigned int v7; // r4@2
  int v8; // r0@6
  const char *v9; // r1@7
  void *v10; // r0@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  size_t v13; // [sp+Ch] [bp-24h]@8
  int v14; // [sp+10h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v14 = (int)&unk_28898CC;
  v6 = *((_DWORD *)*a3 - 3);
  if ( *(_BYTE *)(a2 + 12) )
  {
    v6 += (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 24))(a2);
    v7 = v6 % (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5);
    if ( v7 )
      v6 = v6 - v7 + (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5);
  }
  sub_21E849C((char *)&v14, v6, 0);
  if ( !*(_BYTE *)(v5 + 12) || *((_DWORD *)*v4 - 3) )
    if ( j_j_EVP_EncryptUpdate(*(_DWORD *)(v5 + 16), v14, (int)&v13, *v4, *((_DWORD *)*v4 - 3)) <= 0 )
    {
      v9 = (const char *)&unk_257BC67;
      goto LABEL_11;
    }
LABEL_9:
    sub_21E849C((char *)&v14, v13, 0);
    *v3 = (void *)v14;
    v14 = (int)&unk_28898CC;
    goto LABEL_12;
  v8 = *(_DWORD *)(v5 + 20);
  if ( j_j_EVP_EncryptFinal() > 0 )
    goto LABEL_9;
  v9 = (const char *)&unk_257BC67;
LABEL_11:
  sub_21E94B4(v3, v9);
LABEL_12:
  v10 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


void __fastcall Crypto::Asymmetric::Asymmetric::~Asymmetric(Crypto::Asymmetric::Asymmetric *this)
{
  Crypto::Asymmetric::Asymmetric *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2762FD0;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall Crypto::Hash::HMAC::final(Crypto::Hash::HMAC *this, int a2)
{
  void **v2; // r5@1
  int v3; // r4@1
  size_t v4; // r0@1
  char *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  char *v8; // [sp+4h] [bp-1Ch]@1

  v2 = (void **)this;
  v3 = a2;
  v8 = (char *)&unk_28898CC;
  v4 = (*(int (**)(void))(**(_DWORD **)a2 + 20))();
  sub_21E849C((char *)&v8, v4, 0);
  (*(void (**)(void))(**(_DWORD **)v3 + 16))();
  sub_21E9040(v2, (int *)&v8, 0, *(_DWORD *)(v3 + 8));
  v5 = v8 - 12;
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


int __fastcall Crypto::Hash::md5::final(Crypto::Hash::md5 *this, unsigned __int8 *a2)
{
  Crypto::Hash::md5 *v2; // r5@1
  char *v3; // r6@1
  unsigned __int8 *v4; // r4@1
  int v5; // r0@1
  unsigned int v6; // r1@1
  int v7; // r0@1
  int v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int v10; // r0@4
  int result; // r0@4

  v2 = this;
  v3 = (char *)this + 28;
  v4 = a2;
  v5 = *((_DWORD *)this + 1) & 0x3F;
  v3[v5] = -128;
  v6 = v5 ^ 0x3F;
  v7 = v5 + 1;
  if ( v6 >= 8 )
  {
    v8 = v6 - 8;
  }
  else
    j___aeabi_memclr_0((int)v2 + v7 + 28, v6);
    j_Crypto::Hash::md5::body(v2, v3, 0x40u);
    v8 = 56;
    v7 = 0;
  j___aeabi_memclr_0((int)v2 + v7 + 28, v8);
  v9 = *((_DWORD *)v2 + 1);
  *((_DWORD *)v2 + 1) = 8 * v9;
  *((_BYTE *)v2 + 84) = 8 * v9;
  *((_BYTE *)v2 + 85) = v9 >> 5;
  *((_BYTE *)v2 + 86) = v9 >> 13;
  *((_BYTE *)v2 + 87) = v9 >> 21;
  v10 = *((_DWORD *)v2 + 2);
  *((_BYTE *)v2 + 88) = v10;
  *((_BYTE *)v2 + 89) = BYTE1(v10);
  *((_BYTE *)v2 + 90) = v10 >> 16;
  *((_BYTE *)v2 + 91) = BYTE3(v10);
  j_Crypto::Hash::md5::body(v2, v3, 0x40u);
  *v4 = *((_DWORD *)v2 + 3);
  v4[1] = *((_WORD *)v2 + 6) >> 8;
  v4[2] = *((_WORD *)v2 + 7);
  v4[3] = *((_BYTE *)v2 + 15);
  v4[4] = *((_DWORD *)v2 + 4);
  v4[5] = *((_WORD *)v2 + 8) >> 8;
  v4[6] = *((_WORD *)v2 + 9);
  v4[7] = *((_BYTE *)v2 + 19);
  v4[8] = *((_DWORD *)v2 + 5);
  v4[9] = *((_WORD *)v2 + 10) >> 8;
  v4[10] = *((_WORD *)v2 + 11);
  v4[11] = *((_BYTE *)v2 + 23);
  v4[12] = *((_DWORD *)v2 + 6);
  v4[13] = *((_WORD *)v2 + 12) >> 8;
  v4[14] = *((_WORD *)v2 + 13);
  result = *((_BYTE *)v2 + 27);
  v4[15] = result;
  return result;
}


Crypto::Pkcs7::Pkcs7Verifier *__fastcall Crypto::Pkcs7::Pkcs7Verifier::~Pkcs7Verifier(Crypto::Pkcs7::Pkcs7Verifier *this)
{
  Crypto::Pkcs7::Pkcs7Verifier *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2763080;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


void __fastcall Crypto::Asymmetric::OpenSSLInterface::decryptData(void **a1, int a2, int *a3, int *a4, int a5)
{
  Crypto::Asymmetric::OpenSSLInterface::decryptData(a1, a2, a3, a4, a5);
}


const void *__fastcall Crypto::Hash::md5::body(Crypto::Hash::md5 *this, const void *a2, unsigned int a3)
{
  int v3; // lr@1
  unsigned int v4; // ST24_4@2
  int v5; // ST4C_4@2
  int v6; // r9@2
  int v7; // r10@2
  int v8; // r2@2
  int v9; // r3@2
  int v10; // r8@2
  int v11; // r11@2
  int v12; // r0@2
  int v13; // r6@2
  int v14; // ST38_4@2
  int v15; // r5@2
  int v16; // off@2
  int v17; // r7@2
  int v18; // off@2
  int v19; // r4@2
  int v20; // off@2
  int v21; // r3@2
  int v22; // off@2
  int v23; // r10@2
  int v24; // r5@2
  int v25; // off@2
  int v26; // r6@2
  int v27; // off@2
  int v28; // r9@2
  int v29; // r4@2
  int v30; // off@2
  int v31; // r3@2
  int v32; // off@2
  int v33; // r8@2
  int v34; // r5@2
  int v35; // off@2
  int v36; // r7@2
  int v37; // off@2
  int v38; // r0@2
  int v39; // r6@2
  int v40; // off@2
  int v41; // r2@2
  int v42; // off@2
  int v43; // r0@2
  int v44; // r3@2
  int v45; // off@2
  int v46; // r0@2
  int v47; // r7@2
  int v48; // off@2
  int v49; // r0@2
  int v50; // r6@2
  int v51; // off@2
  int v52; // r5@2
  int v53; // r0@2
  int v54; // r4@2
  int v55; // r5@2
  int v56; // r0@2
  int v57; // r2@2
  int v58; // ST34_4@2
  int v59; // r4@2
  int v60; // off@2
  int v61; // lr@2
  int v62; // r0@2
  int v63; // r2@2
  int v64; // ST20_4@2
  int v65; // r0@2
  int v66; // off@2
  int v67; // ST18_4@2
  int v68; // ST1C_4@2
  int v69; // r3@2
  int v70; // r2@2
  int v71; // ST3C_4@2
  int v72; // r3@2
  int v73; // off@2
  int v74; // ST2C_4@2
  int v75; // r7@2
  int v76; // off@2
  int v77; // ST04_4@2
  int v78; // ST08_4@2
  int v79; // r4@2
  int v80; // off@2
  int v81; // r6@2
  int v82; // off@2
  int v83; // ST10_4@2
  int v84; // lr@2
  int v85; // r3@2
  int v86; // off@2
  int v87; // ST0C_4@2
  int v88; // ST30_4@2
  int v89; // r5@2
  int v90; // off@2
  int v91; // ST38_4@2
  int v92; // r4@2
  int v93; // off@2
  int v94; // ST28_4@2
  int v95; // r7@2
  int v96; // off@2
  int v97; // r11@2
  int v98; // r0@2
  int v99; // off@2
  int v100; // r5@2
  int v101; // off@2
  int v102; // r4@2
  int v103; // off@2
  int v104; // r2@2
  int v105; // off@2
  int v106; // r7@2
  int v107; // off@2
  int v108; // r0@2
  int v109; // off@2
  int v110; // r5@2
  int v111; // r3@2
  int v112; // off@2
  int v113; // r4@2
  int v114; // r2@2
  int v115; // off@2
  int v116; // r4@2
  int v117; // off@2
  int v118; // r7@2
  int v119; // r0@2
  int v120; // off@2
  int v121; // r3@2
  int v122; // off@2
  int v123; // r6@2
  int v124; // r2@2
  int v125; // off@2
  int v126; // r4@2
  int v127; // off@2
  int v128; // r6@2
  int v129; // r0@2
  int v130; // off@2
  int v131; // r3@2
  int v132; // off@2
  int v133; // r6@2
  int v134; // r2@2
  int v135; // off@2
  int v136; // r4@2
  int v137; // off@2
  int v138; // r6@2
  int v139; // r0@2
  int v140; // off@2
  int v141; // r3@2
  int v142; // off@2
  int v143; // r6@2
  int v144; // r2@2
  int v145; // off@2
  int v146; // r4@2
  int v147; // off@2
  int v148; // r6@2
  int v149; // r7@2
  int v150; // r0@2
  int v151; // off@2
  int v152; // r3@2
  int v153; // off@2
  int v154; // r2@2
  int v155; // off@2
  int v156; // r7@2
  int v157; // off@2
  int v158; // r0@2
  int v159; // off@2
  int v160; // r3@2
  int v161; // off@2
  int v162; // r2@2
  int v163; // off@2
  int v164; // r7@2
  int v165; // off@2
  int v166; // r0@2
  int v167; // off@2
  int v168; // r3@2
  int v169; // off@2
  int v170; // r2@2
  int v171; // off@2
  int v172; // r7@2
  int v173; // off@2
  int v174; // r0@2
  int v175; // off@2
  int v176; // r3@2
  int v177; // off@2
  int v178; // r2@2
  int v179; // off@2
  int v180; // r7@2
  int v181; // off@2
  int v182; // r0@2
  int v183; // off@2
  int v184; // r6@2
  int v185; // off@2
  Crypto::Hash::md5 *v187; // [sp+0h] [bp-74h]@1
  int v188; // [sp+40h] [bp-34h]@1
  int v189; // [sp+44h] [bp-30h]@1
  int v190; // [sp+48h] [bp-2Ch]@1

  v189 = *((_DWORD *)this + 3);
  v187 = this;
  v188 = *((_DWORD *)this + 4);
  v3 = *(_QWORD *)((char *)this + 20);
  v190 = *(_QWORD *)((char *)this + 20) >> 32;
  do
  {
    v4 = a3;
    v5 = v3;
    v6 = *(_BYTE *)a2 | (*((_BYTE *)a2 + 1) << 8) | (*((_BYTE *)a2 + 2) << 16) | (*((_BYTE *)a2 + 3) << 24);
    *((_DWORD *)v187 + 23) = v6;
    v7 = *((_BYTE *)a2 + 4) | (*((_BYTE *)a2 + 5) << 8) | (*((_BYTE *)a2 + 6) << 16) | (*((_BYTE *)a2 + 7) << 24);
    *((_DWORD *)v187 + 24) = v7;
    v8 = *((_BYTE *)a2 + 8) | (*((_BYTE *)a2 + 9) << 8) | (*((_BYTE *)a2 + 10) << 16) | (*((_BYTE *)a2 + 11) << 24);
    *((_DWORD *)v187 + 25) = v8;
    v9 = *((_BYTE *)a2 + 12) | (*((_BYTE *)a2 + 13) << 8) | (*((_BYTE *)a2 + 14) << 16) | (*((_BYTE *)a2 + 15) << 24);
    *((_DWORD *)v187 + 26) = v9;
    v10 = *((_BYTE *)a2 + 16) | (*((_BYTE *)a2 + 17) << 8) | (*((_BYTE *)a2 + 18) << 16) | (*((_BYTE *)a2 + 19) << 24);
    *((_DWORD *)v187 + 27) = v10;
    v11 = *((_BYTE *)a2 + 20) | (*((_BYTE *)a2 + 21) << 8) | (*((_BYTE *)a2 + 22) << 16) | (*((_BYTE *)a2 + 23) << 24);
    *((_DWORD *)v187 + 28) = v11;
    v12 = *((_BYTE *)a2 + 24) | (*((_BYTE *)a2 + 25) << 8) | (*((_BYTE *)a2 + 26) << 16) | (*((_BYTE *)a2 + 27) << 24);
    *((_DWORD *)v187 + 29) = v12;
    v13 = v188;
    v14 = *((_BYTE *)a2 + 28) | (*((_BYTE *)a2 + 29) << 8) | (*((_BYTE *)a2 + 30) << 16) | (*((_BYTE *)a2 + 31) << 24);
    *((_DWORD *)v187 + 30) = v14;
    v16 = __ROR4__(((v190 ^ v3) & v188 ^ v190) + v189 + v6 - 680876936, 25);
    v15 = v188 + v16;
    v18 = __ROR4__(((v13 ^ v3) & (v13 + v16) ^ v3) + v190 + v7 - 389564586, 20);
    v17 = v15 + v18;
    v20 = __ROR4__(v8 + v3 + ((v15 ^ v13) & (v15 + v18) ^ v13) + 606105819, 15);
    v19 = v17 + v20;
    v22 = __ROR4__(((v17 ^ v15) & (v17 + v20) ^ v15) + v9 + v188 - 1044525330, 10);
    v21 = v19 + v22;
    v23 = *((_BYTE *)a2 + 32) | (*((_BYTE *)a2 + 33) << 8) | (*((_BYTE *)a2 + 34) << 16) | (*((_BYTE *)a2 + 35) << 24);
    *((_DWORD *)v187 + 31) = v23;
    v25 = __ROR4__(v15 + v10 + ((v19 ^ v17) & (v19 + v22) ^ v17) - 176418897, 25);
    v24 = v21 + v25;
    v27 = __ROR4__(((v21 ^ v19) & (v21 + v25) ^ v19) + v17 + v11 + 1200080426, 20);
    v26 = v24 + v27;
    v28 = *((_BYTE *)a2 + 36) | (*((_BYTE *)a2 + 37) << 8) | (*((_BYTE *)a2 + 38) << 16) | (*((_BYTE *)a2 + 39) << 24);
    *((_DWORD *)v187 + 32) = v28;
    v30 = __ROR4__(v12 + v19 + ((v24 ^ v21) & (v24 + v27) ^ v21) - 1473231341, 15);
    v29 = v26 + v30;
    v32 = __ROR4__(((v26 ^ v24) & (v26 + v30) ^ v24) + v14 + v21 - 45705983, 10);
    v31 = v29 + v32;
    v33 = *((_BYTE *)a2 + 40) | (*((_BYTE *)a2 + 41) << 8) | (*((_BYTE *)a2 + 42) << 16) | (*((_BYTE *)a2 + 43) << 24);
    *((_DWORD *)v187 + 33) = v33;
    v35 = __ROR4__(v24 + v23 + ((v29 ^ v26) & (v29 + v32) ^ v26) + 1770035416, 25);
    v34 = v31 + v35;
    v37 = __ROR4__(((v31 ^ v29) & (v31 + v35) ^ v29) + v28 + v26 - 1958414417, 20);
    v36 = v34 + v37;
    v38 = *((_BYTE *)a2 + 44) | (*((_BYTE *)a2 + 45) << 8) | (*((_BYTE *)a2 + 46) << 16) | (*((_BYTE *)a2 + 47) << 24);
    *((_DWORD *)v187 + 34) = v38;
    v40 = __ROR4__(v33 + v29 + ((v34 ^ v31) & (v34 + v37) ^ v31) - 42063, 15);
    v39 = v36 + v40;
    v42 = __ROR4__(v38 + v31 + ((v36 ^ v34) & (v36 + v40) ^ v34) - 1990404162, 10);
    v41 = v39 + v42;
    v43 = *((_BYTE *)a2 + 48) | (*((_BYTE *)a2 + 49) << 8) | (*((_BYTE *)a2 + 50) << 16) | (*((_BYTE *)a2 + 51) << 24);
    *((_DWORD *)v187 + 35) = v43;
    v45 = __ROR4__(v43 + v34 + ((v39 ^ v36) & (v39 + v42) ^ v36) + 1804603682, 25);
    v44 = v41 + v45;
    v46 = *((_BYTE *)a2 + 52) | (*((_BYTE *)a2 + 53) << 8) | (*((_BYTE *)a2 + 54) << 16) | (*((_BYTE *)a2 + 55) << 24);
    *((_DWORD *)v187 + 36) = v46;
    v48 = __ROR4__(v46 + v36 + ((v41 ^ v39) & (v41 + v45) ^ v39) - 40341101, 20);
    v47 = v44 + v48;
    v49 = *((_BYTE *)a2 + 56) | (*((_BYTE *)a2 + 57) << 8) | (*((_BYTE *)a2 + 58) << 16) | (*((_BYTE *)a2 + 59) << 24);
    *((_DWORD *)v187 + 37) = v49;
    v51 = __ROR4__(v49 + v39 + ((v44 ^ v41) & (v44 + v48) ^ v41) - 1502002290, 15);
    v50 = v47 + v51;
    v52 = *((_BYTE *)a2 + 63);
    v53 = *((_BYTE *)a2 + 62);
    v54 = *((_BYTE *)a2 + 60) | (*((_BYTE *)a2 + 61) << 8);
    a2 = (char *)a2 + 64;
    v55 = v54 | (v53 << 16) | (v52 << 24);
    *((_DWORD *)v187 + 38) = v55;
    v56 = v55 + v41 + ((v47 ^ v44) & (v47 + v51) ^ v44) + 1236535329;
    v57 = *((_DWORD *)v187 + 24);
    v58 = v57;
    v60 = __ROR4__(v56, 10);
    v59 = v50 + v60;
    v61 = *((_DWORD *)v187 + 23);
    v62 = (((v50 + v60) ^ v50) & v47 ^ v50) + v44 + v57 - 165796510;
    v63 = *((_DWORD *)v187 + 29);
    v64 = v63;
    v66 = __ROR4__(v62, 27);
    v65 = v59 + v66;
    v67 = v61;
    v68 = v55;
    v69 = (((v59 + v66) ^ v59) & v50 ^ v59) + v47 + v63 - 1069501632;
    v70 = *((_DWORD *)v187 + 34);
    v71 = v70;
    v73 = __ROR4__(v69, 23);
    v72 = v65 + v73;
    v74 = *((_DWORD *)v187 + 25);
    v76 = __ROR4__((((v65 + v73) ^ v65) & v59 ^ v65) + v50 + v70 + 643717713, 18);
    v75 = v72 + v76;
    v77 = *((_DWORD *)v187 + 26);
    v78 = *((_DWORD *)v187 + 28);
    v80 = __ROR4__((((v72 + v76) ^ v72) & v65 ^ v72) + v59 + v61 - 373897302, 12);
    v79 = v75 + v80;
    v82 = __ROR4__(v65 + v78 + (((v75 + v80) ^ v75) & v72 ^ v75) - 701558691, 27);
    v81 = v79 + v82;
    v83 = *((_DWORD *)v187 + 33);
    v84 = *((_DWORD *)v187 + 31);
    v86 = __ROR4__(v72 + v83 + (((v79 + v82) ^ v79) & v75 ^ v79) + 38016083, 23);
    v85 = v81 + v86;
    v87 = *((_DWORD *)v187 + 36);
    v88 = *((_DWORD *)v187 + 27);
    v90 = __ROR4__(v75 + v55 + (((v81 + v86) ^ v81) & v79 ^ v81) - 660478335, 18);
    v89 = v85 + v90;
    v91 = *((_DWORD *)v187 + 32);
    v93 = __ROR4__(v79 + v88 + (((v85 + v90) ^ v85) & v81 ^ v85) - 405537848, 12);
    v92 = v89 + v93;
    v94 = *((_DWORD *)v187 + 37);
    v96 = __ROR4__(v81 + v91 + (((v89 + v93) ^ v89) & v85 ^ v89) + 568446438, 27);
    v95 = v92 + v96;
    v97 = *((_DWORD *)v187 + 30);
    v99 = __ROR4__(v85 + v94 + (((v92 + v96) ^ v92) & v89 ^ v92) - 1019803690, 23);
    v98 = v95 + v99;
    v101 = __ROR4__((((v95 + v99) ^ v95) & v92 ^ v95) + v89 + v77 - 187363961, 18);
    v100 = v98 + v101;
    v103 = __ROR4__((((v98 + v101) ^ v98) & v95 ^ v98) + v92 + v84 + 1163531501, 12);
    v102 = v100 + v103;
    v105 = __ROR4__((((v100 + v103) ^ v100) & v98 ^ v100) + v95 + v87 - 1444681467, 27);
    v104 = v102 + v105;
    v107 = __ROR4__(v98 + v74 + (((v102 + v105) ^ v102) & v100 ^ v102) - 51403784, 23);
    v106 = v104 + v107;
    v109 = __ROR4__((((v104 + v107) ^ v104) & v102 ^ v104) + v100 + v97 + 1735328473, 18);
    v108 = v106 + v109;
    v110 = *((_DWORD *)v187 + 35);
    v112 = __ROR4__((((v106 + v109) ^ v106) & v104 ^ v106) + v102 + v110 - 1926607734, 12);
    v111 = v108 + v112;
    v113 = (v108 + v112) ^ v108;
    v115 = __ROR4__(v104 + v78 + (v113 ^ v106) - 378558, 28);
    v114 = v111 + v115;
    v117 = __ROR4__((v113 ^ (v111 + v115)) + v106 + v84 - 2022574463, 21);
    v116 = v114 + v117;
    v118 = (v114 + v117) ^ v114;
    v120 = __ROR4__(v108 + v71 + (v118 ^ v111) + 1839030562, 16);
    v119 = v116 + v120;
    v122 = __ROR4__(v111 + v94 + ((v116 + v120) ^ v118) - 35309556, 9);
    v121 = v119 + v122;
    v123 = (v119 + v122) ^ v119;
    v125 = __ROR4__(v114 + v58 + (v123 ^ v116) - 1530992060, 28);
    v124 = v121 + v125;
    v127 = __ROR4__(v116 + v88 + (v123 ^ (v121 + v125)) + 1272893353, 21);
    v126 = v124 + v127;
    v128 = (v124 + v127) ^ v124;
    v130 = __ROR4__(v119 + v97 + (v128 ^ v121) - 155497632, 16);
    v129 = v126 + v130;
    v132 = __ROR4__(v121 + v83 + (v128 ^ (v126 + v130)) - 1094730640, 9);
    v131 = v129 + v132;
    v133 = (v129 + v132) ^ v129;
    v135 = __ROR4__(v124 + v87 + (v133 ^ v126) + 681279174, 28);
    v134 = v131 + v135;
    v137 = __ROR4__(v126 + v67 + (v133 ^ (v131 + v135)) - 358537222, 21);
    v136 = v134 + v137;
    v138 = (v134 + v137) ^ v134;
    v140 = __ROR4__(v129 + v77 + (v138 ^ v131) - 722521979, 16);
    v139 = v136 + v140;
    v142 = __ROR4__(v131 + v64 + (v138 ^ (v136 + v140)) + 76029189, 9);
    v141 = v139 + v142;
    v143 = (v139 + v142) ^ v139;
    v145 = __ROR4__(v134 + v91 + (v143 ^ v136) - 640364487, 28);
    v144 = v141 + v145;
    v147 = __ROR4__(v136 + v110 + (v143 ^ (v141 + v145)) - 421815835, 21);
    v146 = v144 + v147;
    v148 = (v144 + v147) ^ v144;
    v149 = v97 + v144 + v147;
    v151 = __ROR4__(v139 + v68 + (v148 ^ v141) + 530742520, 16);
    v150 = v146 + v151;
    v153 = __ROR4__(v141 + v74 + (v148 ^ (v146 + v151)) - 995338651, 9);
    v152 = v150 + v153;
    v155 = __ROR4__(v144 + v67 + (((v150 + v153) | ~v146) ^ v150) - 198630844, 26);
    v154 = v152 + v155;
    v157 = __ROR4__(v149 + (((v152 + v155) | ~v150) ^ v152) + 1126891415, 22);
    v156 = v154 + v157;
    v159 = __ROR4__(v150 + v94 + (((v154 + v157) | ~v152) ^ v154) - 1416354905, 17);
    v158 = v156 + v159;
    v161 = __ROR4__(v152 + v78 + (((v156 + v159) | ~v154) ^ v156) - 57434055, 11);
    v160 = v158 + v161;
    v163 = __ROR4__(v154 + v110 + (((v158 + v161) | ~v156) ^ v158) + 1700485571, 26);
    v162 = v160 + v163;
    v165 = __ROR4__(v156 + v77 + (((v160 + v163) | ~v158) ^ v160) - 1894986606, 22);
    v164 = v162 + v165;
    v167 = __ROR4__(v158 + v83 + (((v162 + v165) | ~v160) ^ v162) - 1051523, 17);
    v166 = v164 + v167;
    v169 = __ROR4__(v160 + v58 + (((v164 + v167) | ~v162) ^ v164) - 2054922799, 11);
    v168 = v166 + v169;
    v171 = __ROR4__(v162 + v84 + (((v166 + v169) | ~v164) ^ v166) + 1873313359, 26);
    v170 = v168 + v171;
    v173 = __ROR4__(v164 + v68 + (((v168 + v171) | ~v166) ^ v168) - 30611744, 22);
    v172 = v170 + v173;
    v175 = __ROR4__(v166 + v64 + (((v170 + v173) | ~v168) ^ v170) - 1560198380, 17);
    v174 = v172 + v175;
    v177 = __ROR4__(v168 + v87 + (((v172 + v175) | ~v170) ^ v172) + 1309151649, 11);
    v176 = v174 + v177;
    v179 = __ROR4__(v170 + v88 + (((v174 + v177) | ~v172) ^ v174) - 145523070, 26);
    v178 = v176 + v179;
    v181 = __ROR4__(v172 + v71 + (((v176 + v179) | ~v174) ^ v176) - 1120210379, 22);
    v180 = v178 + v181;
    v183 = __ROR4__(v174 + v74 + (((v178 + v181) | ~v176) ^ v178) + 718787259, 17);
    v182 = v180 + v183;
    v184 = v188 + v180 + v183;
    v185 = __ROR4__(v176 + v91 + (((v180 + v183) | ~v178) ^ v180) - 343485551, 11);
    v188 = v184 + v185;
    v3 = v5 + v182;
    v190 += v180;
    v189 += v178;
    a3 = v4 - 64;
  }
  while ( v4 != 64 );
  *((_DWORD *)v187 + 3) = v189;
  *((_DWORD *)v187 + 4) = v188;
  *((_DWORD *)v187 + 5) = v3;
  *((_DWORD *)v187 + 6) = v190;
  return a2;
}


signed int __fastcall Crypto::Hash::OpenSSLHashInterface::resultSize(Crypto::Hash::OpenSSLHashInterface *this)
{
  _DWORD *v1; // r0@1

  v1 = j_j_EVP_MD_CTX_md(*((_DWORD **)this + 2));
  return j_j_j_EVP_MD_size((int)v1);
}


char *__fastcall Crypto::init(Crypto *this)
{
  char *result; // r0@1

  result = (char *)(unsigned __int8)byte_287E96C;
  if ( !byte_287E96C )
  {
    j_j_OPENSSL_add_all_algorithms_noconf();
    j_j_OpenSSL_add_all_digests();
    j_j_ERR_load_EVP_strings();
    j_j_ERR_load_CRYPTO_strings();
    j_j_ERR_load_PKCS7_strings();
    result = &byte_287E96C;
    byte_287E96C = 1;
  }
  return result;
}


void __fastcall Crypto::Symmetric::OpenSSLSymmetricInterface::decrypt(void **a1, int a2, void **a3)
{
  void **v3; // r8@1
  void **v4; // r6@1
  int v5; // r5@1
  unsigned int v6; // r7@1
  unsigned int v7; // r4@2
  const char *v8; // r1@7
  void *v9; // r0@12
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  size_t v12; // [sp+Ch] [bp-24h]@8
  int v13; // [sp+10h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v13 = (int)&unk_28898CC;
  v6 = *((_DWORD *)*a3 - 3);
  if ( *(_BYTE *)(a2 + 12) )
  {
    v6 += (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 24))(a2);
    v7 = v6 % (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5);
    if ( v7 )
      v6 = v6 - v7 + (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5);
  }
  sub_21E849C((char *)&v13, v6, 0);
  if ( !*(_BYTE *)(v5 + 12) || *((_DWORD *)*v4 - 3) )
    if ( j_j_EVP_DecryptUpdate(*(_DWORD *)(v5 + 20), v13, (int)&v12, *v4, *((_DWORD *)*v4 - 3)) <= 0 )
    {
      v8 = (const char *)&unk_257BC67;
      goto LABEL_11;
    }
LABEL_9:
    sub_21E849C((char *)&v13, v12, 0);
    *v3 = (void *)v13;
    v13 = (int)&unk_28898CC;
    goto LABEL_12;
  if ( j_j_EVP_DecryptFinal() > 0 )
    goto LABEL_9;
  v8 = (const char *)&unk_257BC67;
LABEL_11:
  sub_21E94B4(v3, v8);
LABEL_12:
  v9 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall Crypto::Hash::HMAC::sign(void **a1, _DWORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  Crypto::Hash::HMAC::sign(a1, a2, a3, a4, a5);
}


int __fastcall Crypto::Hash::Hash::Hash(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  Crypto::Hash::md5 *v4; // r0@4
  Crypto::Hash::md5 *v5; // r5@4
  int v6; // r0@4
  void *v8; // r6@8
  int v9; // r0@8

  v2 = a1;
  v3 = a2;
  *(_QWORD *)a1 = (unsigned int)&off_2763020;
  *(_DWORD *)(a1 + 8) = 0;
  j_Crypto::init((Crypto *)&off_2763020);
  if ( (unsigned int)(v3 - 2) < 3 )
  {
LABEL_8:
    v8 = j_operator new(0xCu);
    j_Crypto::Hash::OpenSSLHashInterface::OpenSSLHashInterface((int)v8, v3);
    v9 = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(v2 + 4) = v8;
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    return v2;
  }
  if ( v3 == 1 )
    *(_DWORD *)(v2 + 8) = 5;
    goto LABEL_8;
  if ( v3 )
  v4 = (Crypto::Hash::md5 *)j_operator new(0x9Cu);
  v5 = v4;
  *(_DWORD *)v4 = &off_2763040;
  j_Crypto::Hash::md5::init(v4);
  v6 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v2 + 4) = v5;
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *(_DWORD *)(v2 + 8) = 3;
  return v2;
}


void __fastcall Crypto::Symmetric::OpenSSLSymmetricInterface::decrypt(void **a1, int a2, void **a3)
{
  Crypto::Symmetric::OpenSSLSymmetricInterface::decrypt(a1, a2, a3);
}


unsigned int __fastcall Crypto::Random::Random::fillData(unsigned int result, int a2, unsigned int a3)
{
  unsigned int v3; // r5@1
  int v4; // r8@1
  int v5; // r9@1
  int v6; // r7@2
  unsigned int v7; // r4@2
  int v8; // r6@3
  int v9; // r1@6
  int v10; // r2@7
  unsigned int v11; // r3@7

  v3 = a3;
  v4 = a2;
  v5 = result;
  if ( a3 >= 4 )
  {
    v6 = a2 - 2;
    v7 = a3;
    do
    {
      v8 = v6 + v7;
      result = sub_21E67AC(v5);
      *(_BYTE *)(v8 + 1) = BYTE3(result);
      *(_BYTE *)(v6 + v7) = result >> 16;
      v7 -= 4;
      *(_BYTE *)(v8 - 1) = BYTE1(result);
      *(_BYTE *)(v8 - 2) = result;
    }
    while ( v7 > 3 );
    v3 &= 3u;
  }
  if ( v3 )
    result = sub_21E67AC(v5);
    v9 = 8 * v3;
      v10 = v4 + v3;
      v11 = result >> v9;
      v9 -= 8;
      --v3;
      *(_BYTE *)(v10 - 1) = v11;
    while ( v3 );
  return result;
}


int __fastcall Crypto::Asymmetric::OpenSSLInterface::verifyData(int a1, int *a2, _DWORD *a3, int *a4, int a5)
{
  int *v5; // r5@1
  int v6; // r6@1
  int v7; // r0@1
  int *v8; // r9@1
  _DWORD *v9; // r8@1
  int v10; // r4@2
  int v11; // r0@3
  int v12; // r5@3
  int v13; // r7@3
  int v14; // r0@7
  int v15; // r7@7
  int v16; // r2@20
  int v17; // ST00_4@20
  void *v18; // r0@22
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  int v22; // [sp+8h] [bp-28h]@20
  int v23; // [sp+Ch] [bp-24h]@1

  v5 = a2;
  v6 = a1;
  v7 = *a2;
  v8 = a4;
  v23 = *a2;
  v9 = a3;
  if ( *(_DWORD *)(v6 + 8) != 1 )
  {
    v12 = 0;
    v10 = j_j_d2i_PUBKEY(0, &v23, *(_DWORD *)(v7 - 12));
    if ( !v10 )
      return v12;
    goto LABEL_7;
  }
  v10 = j_j_EVP_PKEY_new();
  if ( !v10 )
    return 0;
  v11 = *v5;
  v12 = 0;
  v13 = j_j_d2i_EC_PUBKEY(0, &v23, *(_DWORD *)(v11 - 12));
  if ( v13 )
    if ( !j_j_EVP_PKEY_assign(v10, 408, v13) )
      j_j_EC_KEY_free(v13);
LABEL_7:
    v14 = j_j_EVP_PKEY_CTX_new(v10, 0);
    v15 = v14;
    if ( v14 )
    {
      if ( j_j_EVP_PKEY_verify_init(v14) <= 0 )
        goto LABEL_35;
      if ( *(_DWORD *)(v6 + 8) )
        goto LABEL_36;
      if ( j_j_EVP_PKEY_CTX_ctrl(v15, 6, -1) <= 0 )
      switch ( a5 )
      {
        case 0:
          j_j_EVP_md5();
          break;
        case 1:
          j_j_EVP_sha1();
        case 2:
          j_j_EVP_sha256();
        case 3:
          j_j_EVP_sha384();
        case 4:
          j_j_EVP_sha512();
        default:
      }
      if ( j_j_EVP_PKEY_CTX_ctrl(v15, -1, 248) > 0 )
LABEL_36:
        j_Crypto::Hash::hash((Crypto *)&v22, a5, v8);
        v16 = *(_DWORD *)(*v9 - 12);
        v17 = *(_DWORD *)(v22 - 12);
        v12 = j_j_EVP_PKEY_verify(v15);
        j_j_EVP_PKEY_free(v10);
        j_j_EVP_PKEY_CTX_free(v15);
        if ( v12 != 1 )
          v12 = 0;
        v18 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
        {
          v19 = (unsigned int *)(v22 - 4);
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
            j_j_j_j__ZdlPv_9(v18);
        }
      else
LABEL_35:
        v12 = 0;
    }
    else
      j_j_EVP_PKEY_free(v10);
      v12 = 0;
  return v12;
}


char *__fastcall Crypto::destroy(Crypto *this)
{
  char *result; // r0@1

  j_j_EVP_cleanup();
  result = &byte_287E96C;
  byte_287E96C = 0;
  return result;
}


int __fastcall Crypto::Hash::generateUUID(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  Crypto::Hash::md5 *v5; // r7@1
  int v6; // r5@1
  int v7; // r8@1
  int v8; // r6@1
  int v9; // r5@7
  unsigned int v10; // r0@7
  void **v11; // r0@8
  int v12; // r2@10
  int v13; // r1@10
  unsigned int v14; // r3@10
  int result; // r0@12
  void **v16; // [sp+0h] [bp-30h]@1
  Crypto::Hash::md5 *v17; // [sp+4h] [bp-2Ch]@1
  int v18; // [sp+8h] [bp-28h]@1
  int v19; // [sp+Ch] [bp-24h]@7
  int v20; // [sp+10h] [bp-20h]@7
  int v21; // [sp+14h] [bp-1Ch]@7

  v4 = a1;
  v5 = 0;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v16 = &off_2763020;
  v17 = 0;
  v18 = 0;
  j_Crypto::init((Crypto *)&off_2763020);
  if ( (unsigned int)(v6 - 2) < 3 )
    goto LABEL_6;
  if ( v6 == 1 )
  {
    v18 = 5;
LABEL_6:
    v5 = (Crypto::Hash::md5 *)j_operator new(0xCu);
    j_Crypto::Hash::OpenSSLHashInterface::OpenSSLHashInterface((int)v5, v6);
    v17 = v5;
    goto LABEL_7;
  }
  if ( !v6 )
    v5 = (Crypto::Hash::md5 *)j_operator new(0x9Cu);
    *(_DWORD *)v5 = &off_2763040;
    j_Crypto::Hash::md5::init(v5);
    v18 = 3;
LABEL_7:
  (*(void (__fastcall **)(Crypto::Hash::md5 *, int, int))(*(_DWORD *)v5 + 12))(v5, v8, v7);
  v9 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v10 = (*(int (__fastcall **)(Crypto::Hash::md5 *))(*(_DWORD *)v5 + 20))(v5);
  if ( 0 == v10 >> 3 )
    v11 = &off_2763020;
  else
    j_std::vector<unsigned long long,std::allocator<unsigned long long>>::_M_default_append((int)&v19, v10 >> 3);
    v11 = v16;
    v9 = v19;
  ((void (__fastcall *)(void ***, int))v11[4])(&v16, v9);
  v12 = *(_DWORD *)(v9 + 8);
  v13 = *(_DWORD *)(v9 + 4) | (v18 << 12 >> 31);
  v14 = *(_DWORD *)(v9 + 12) & 0x3FFFFFFF | 0x80000000;
  *(_DWORD *)v4 = *(_DWORD *)v9 & 0xFFFF0FFF | (v18 << 12);
  *(_DWORD *)(v4 + 4) = v13;
  *(_DWORD *)(v4 + 8) = v12;
  *(_DWORD *)(v4 + 12) = v14;
  if ( v9 )
    j_operator delete((void *)v9);
  result = (int)v17;
  if ( v17 )
    result = (*(int (__cdecl **)(Crypto::Hash::md5 *))(*(_DWORD *)v17 + 4))(v17);
  return result;
}


signed int __fastcall Crypto::Asymmetric::OpenSSLInterface::generateKeyPair(int a1, char *a2, char *a3)
{
  int v3; // r4@1
  char *v4; // r6@1
  int v5; // r0@1
  char *v6; // r8@1
  int v7; // r7@1
  int v8; // r0@3
  int v9; // r5@3
  __int64 v10; // ST00_8@5
  signed int v11; // r1@7
  int v12; // r1@8
  int v13; // r0@10
  unsigned int v14; // r1@12
  int v15; // r2@13
  int v16; // r0@16
  int v17; // r7@16
  int v18; // r4@19
  signed int v19; // r1@19
  int v20; // r1@20
  int v22; // [sp+Ch] [bp-24h]@20
  int v23; // [sp+10h] [bp-20h]@8
  int v24; // [sp+14h] [bp-1Ch]@3

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a2;
  v7 = 0;
  if ( v5 == 1 )
  {
    v24 = 0;
    v13 = j_j_EVP_PKEY_CTX_new_id(408, 0);
    v9 = v13;
    if ( v13 )
    {
      if ( j_j_EVP_PKEY_paramgen_init(v13) <= 0 )
        goto LABEL_27;
      v14 = *(_DWORD *)(v3 + 4) - 3;
      if ( v14 <= 3 )
        v15 = dword_2610B5C[v14];
      if ( j_j_EVP_PKEY_CTX_ctrl(v9, 408, 6) <= 0 || j_j_EVP_PKEY_paramgen(v9, &v24) <= 0 )
      v23 = 0;
      v16 = j_j_EVP_PKEY_CTX_new(v24, 0);
      v17 = v16;
      if ( v16 )
      {
        if ( j_j_EVP_PKEY_keygen_init(v16) > 0 && j_j_EVP_PKEY_keygen(v17, &v23) > 0 )
        {
          v18 = j_j_EVP_PKEY_get1_EC_KEY(v23);
          j_j_EC_KEY_set_asn1_flag(v18, 1);
          v19 = j_j_i2d_EC_PUBKEY(v18, 0);
          if ( v19 <= -1 )
          {
            j_j_EC_KEY_free(v18);
          }
          else
            sub_21E849C(v4, v19, 0);
            v22 = *(_DWORD *)v4;
            j_j_i2d_EC_PUBKEY(v18, &v22);
            v20 = j_j_i2d_PrivateKey(v23, 0);
            if ( v20 > -1 )
            {
              sub_21E849C(v6, v20, 0);
              v22 = *(_DWORD *)v6;
              j_j_i2d_PrivateKey(v23, &v22);
              j_j_EVP_PKEY_free(v23);
              j_j_EVP_PKEY_CTX_free(v17);
              goto LABEL_22;
            }
          j_j_EVP_PKEY_free(v23);
        }
        j_j_EVP_PKEY_CTX_free(v17);
      }
      goto LABEL_26;
    }
  }
  else if ( !v5 )
    v7 = 0;
    v8 = j_j_EVP_PKEY_CTX_new_id(6, 0);
    v9 = v8;
    if ( v8 )
      if ( j_j_EVP_PKEY_keygen_init(v8) <= 0 )
      v10 = *(_DWORD *)(v3 + 12);
      if ( j_j_EVP_PKEY_CTX_ctrl(v9, 6, 4) <= 0 || j_j_EVP_PKEY_keygen(v9, &v24) <= 0 )
      v11 = j_j_i2d_PUBKEY(v24, 0);
      if ( v11 > -1 )
        sub_21E849C(v4, v11, 0);
        v23 = *(_DWORD *)v4;
        j_j_i2d_PUBKEY(v24, &v23);
        v12 = j_j_i2d_PrivateKey(v24, 0);
        if ( v12 > -1 )
          sub_21E849C(v6, v12, 0);
          v23 = *(_DWORD *)v6;
          j_j_i2d_PrivateKey(v24, &v23);
LABEL_22:
          j_j_EVP_PKEY_free(v24);
          j_j_EVP_PKEY_CTX_free(v9);
          return 1;
LABEL_26:
      j_j_EVP_PKEY_free(v24);
LABEL_27:
      j_j_EVP_PKEY_CTX_free(v9);
      return 0;
  return v7;
}


unsigned int __fastcall Crypto::Asymmetric::Asymmetric::canEncrypt(Crypto::Asymmetric::Asymmetric *this)
{
  unsigned int v1; // r0@1
  unsigned int result; // r0@2

  v1 = *((_DWORD *)this + 1);
  if ( v1 <= 6 )
    result = (7u >> (v1 & 0x7F)) & 1;
  else
    result = 0;
  return result;
}
