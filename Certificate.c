

void __fastcall Certificate::addToEnd(Certificate *this, const Certificate *a2)
{
  int *v2; // r5@1
  Certificate *v3; // r4@1
  int *v4; // r6@2
  int *v5; // r7@3
  int v6; // r1@3
  Certificate *v7; // r0@5
  int *v8; // r4@5
  Certificate *v9; // t1@5
  int *v10; // r6@7
  int v11; // r1@7

  v2 = (int *)a2;
  v3 = this;
  do
  {
    v4 = (int *)((char *)this + 56);
    this = (Certificate *)*((_DWORD *)this + 14);
  }
  while ( this );
  v5 = (int *)operator new(0x40u);
  UnverifiedCertificate::UnverifiedCertificate(v5, v2);
  v6 = *v4;
  *v4 = (int)v5;
  if ( v6 )
    std::default_delete<UnverifiedCertificate>::operator()((int)v4, v6);
  v9 = (Certificate *)*((_DWORD *)v3 + 16);
  v8 = (int *)((char *)v3 + 64);
  v7 = v9;
  if ( v9 )
    j_j_j__ZN11Certificate8addToEndERKS_(v7, (const Certificate *)v2);
  else
    v10 = (int *)operator new(0x48u);
    Certificate::Certificate(v10, v2);
    v11 = *v8;
    *v8 = (int)v10;
    if ( v11 )
      j_j_j__ZNKSt14default_deleteI11CertificateEclEPS0_((int)v8, v11);
}


void __fastcall Certificate::addAuthorityToCertificate(Certificate **a1, const PrivateKeyManager *a2, unsigned int a3, unsigned int a4, __int64 a5, const char **a6, Certificate **a7)
{
  Certificate **v7; // r8@1
  void *v8; // r4@1
  int *v9; // r10@1
  int *v10; // r6@1
  Certificate *v11; // r0@2
  WebToken *v12; // r0@7
  int v13[14]; // [sp+18h] [bp-B8h]@1
  int v14; // [sp+50h] [bp-80h]@1
  int v15; // [sp+58h] [bp-78h]@1
  char v16; // [sp+5Ch] [bp-74h]@1
  int *v17; // [sp+64h] [bp-6Ch]@1
  int v18[14]; // [sp+68h] [bp-68h]@1
  int v19; // [sp+A0h] [bp-30h]@1
  WebToken *v20; // [sp+ACh] [bp-24h]@1

  v7 = a1;
  Certificate::createWebToken((WebToken *)&v20, a2, a3, a4, a5, a6, 1, 0);
  WebToken::WebToken(v18, (int *)v20);
  v19 = 0;
  v8 = operator new(0x40u);
  WebToken::WebToken((int *)v8, v18);
  *((_DWORD *)v8 + 14) = v19;
  v9 = (int *)((char *)v8 + 56);
  WebToken::~WebToken((WebToken *)v18);
  UnverifiedCertificate::UnverifiedCertificate(v13, (int *)v8);
  v15 = 0;
  v16 = 0;
  v10 = (int *)operator new(0x48u);
  WebToken::WebToken(v10, v13);
  v10[14] = v14;
  v10[16] = v15;
  *((_BYTE *)v10 + 68) = v16;
  v17 = v10;
  v14 = 0;
  WebToken::~WebToken((WebToken *)v13);
  if ( *a7 )
  {
    Certificate::addToEnd(*a7, (const Certificate *)v10);
    v11 = *a7;
    *a7 = 0;
    *v7 = v11;
    std::default_delete<Certificate>::operator()((int)&v17, (int)v10);
  }
  else
    v17 = 0;
    *v7 = (Certificate *)v10;
  if ( *v9 )
    std::default_delete<UnverifiedCertificate>::operator()((int)v8 + 56, *v9);
  *((_DWORD *)v8 + 14) = 0;
  WebToken::~WebToken((WebToken *)v8);
  operator delete(v8);
  if ( v20 )
    v12 = WebToken::~WebToken(v20);
    operator delete((void *)v12);
}


Json::Value *__fastcall Certificate::createWebToken(WebToken *a1, const PrivateKeyManager *a2, unsigned int a3, unsigned int a4, __int64 a5, const char **a6, int a7, int a8)
{
  WebToken *v8; // r7@1 OVERLAPPED
  const PrivateKeyManager *v9; // r8@1 OVERLAPPED
  unsigned int v10; // r4@1
  unsigned int v11; // r5@1
  Json::Value *v12; // r0@1
  int v13; // r6@1
  int v14; // r6@1
  int v15; // r1@1
  int v16; // r4@1
  int v17; // r1@1
  int v18; // r4@2
  int v19; // r10@3
  Json::ValueIteratorBase *v20; // r6@4
  Json::ValueIteratorBase *v21; // r7@4
  int *v22; // r11@4
  Json::Value *v23; // r8@5
  int v24; // r6@5
  const char **v25; // r1@5
  Json::ValueIteratorBase *v26; // r10@5
  int v27; // r11@5
  int *v28; // r7@5
  int v29; // r6@5
  const Json::Value *v30; // r0@5
  int v31; // r6@5
  void *v32; // r0@5
  void *v33; // r0@6
  unsigned int *v34; // r2@8
  signed int v35; // r1@10
  unsigned int *v36; // r2@12
  signed int v37; // r1@14
  __int64 v39; // [sp+4h] [bp-C4h]@4
  char v40; // [sp+10h] [bp-B8h]@7
  int v41; // [sp+1Ch] [bp-ACh]@5
  char v42; // [sp+20h] [bp-A8h]@4
  int v43; // [sp+34h] [bp-94h]@4
  char v44; // [sp+38h] [bp-90h]@24
  char v45; // [sp+40h] [bp-88h]@4
  char v46; // [sp+48h] [bp-80h]@4
  char v47; // [sp+50h] [bp-78h]@2
  char v48; // [sp+60h] [bp-68h]@1
  char v49; // [sp+70h] [bp-58h]@1
  char v50; // [sp+80h] [bp-48h]@1
  char v51; // [sp+90h] [bp-38h]@1

  v8 = a1;
  v9 = a2;
  v10 = a4;
  v11 = a3;
  v12 = (Json::Value *)Json::Value::Value(&v51, 0);
  v13 = Json::Value::operator[](v12, "identityPublicKey");
  Json::Value::Value((int)&v50, a6);
  Json::Value::operator=(v13, (const Json::Value *)&v50);
  Json::Value::~Value((Json::Value *)&v50);
  v14 = Json::Value::operator[]((Json::Value *)&v51, "nbf");
  Json::Value::Value((Json::Value *)&v49, v15, __PAIR__(v10, v11));
  Json::Value::operator=(v14, (const Json::Value *)&v49);
  Json::Value::~Value((Json::Value *)&v49);
  v16 = Json::Value::operator[]((Json::Value *)&v51, "exp");
  Json::Value::Value((Json::Value *)&v48, v17, a5);
  Json::Value::operator=(v16, (const Json::Value *)&v48);
  Json::Value::~Value((Json::Value *)&v48);
  if ( a7 == 1 )
  {
    v18 = Json::Value::operator[]((Json::Value *)&v51, "certificateAuthority");
    Json::Value::Value((Json::Value *)&v47, 1);
    Json::Value::operator=(v18, (const Json::Value *)&v47);
    Json::Value::~Value((Json::Value *)&v47);
  }
  v19 = a8;
  if ( a8 )
    Json::Value::begin((Json::Value *)&v45, a8);
    Json::ValueIterator::ValueIterator((Json::ValueIterator *)&v46, (const Json::ValueConstIterator *)&v45);
    v39 = *(_QWORD *)&v8;
    v20 = (Json::ValueIteratorBase *)&v46;
    v21 = (Json::ValueIteratorBase *)&v42;
    v22 = &v43;
    while ( 1 )
    {
      Json::Value::end((Json::Value *)&v44, v19);
      if ( Json::ValueIteratorBase::isEqual(v20, (const Json::ValueIteratorBase *)&v44) == 1 )
        break;
      v23 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v51, "extraData");
      Json::ValueIteratorBase::key(v21, (int)v20);
      v24 = v19;
      sub_21E94B4((void **)&v41, (const char *)&unk_257BC67);
      Json::Value::asString(v22, (int)v21, &v41);
      v25 = (const char **)v22;
      v26 = v21;
      v27 = v24;
      v28 = (int *)v25;
      v29 = Json::Value::operator[](v23, v25);
      v30 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v46);
      Json::Value::operator=(v29, v30);
      v31 = v27;
      v32 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
      {
        v34 = (unsigned int *)(v43 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v31 = v27;
        }
        else
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      }
      v22 = v28;
      v21 = v26;
      v19 = v31;
      v33 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v41 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      Json::Value::~Value(v21);
      v20 = (Json::ValueIteratorBase *)&v46;
      Json::ValueIterator::ValueIterator((Json::ValueIterator *)&v40, (const Json::ValueIterator *)&v46);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v46);
    }
    *(_QWORD *)&v8 = v39;
  WebToken::createFromData(v8, (const Json::Value *)&v51, v9);
  return Json::Value::~Value((Json::Value *)&v51);
}


int *__fastcall Certificate::Certificate(int *a1, int *a2, int *a3)
{
  int *v3; // r4@1
  int *result; // r0@1
  int v5; // r1@1

  v3 = a3;
  result = UnverifiedCertificate::UnverifiedCertificate(a1, a2);
  v5 = *v3;
  *v3 = 0;
  result[16] = v5;
  *((_BYTE *)result + 68) = 0;
  return result;
}


void __fastcall Certificate::addToEnd(Certificate *this, const Certificate *a2)
{
  Certificate::addToEnd(this, a2);
}


void __fastcall Certificate::createWrappedCertificate(int **a1, const PrivateKeyManager *a2, unsigned int a3, unsigned int a4, __int64 a5, const char **a6, int a7, int a8, int **a9)
{
  int **v9; // r9@1
  int *v10; // r6@1
  int *v11; // r7@1
  int *v12; // r5@2
  int *v13; // r7@4
  int *v14; // r5@4
  WebToken *v15; // r0@7
  int v16[14]; // [sp+18h] [bp-A8h]@4
  int v17; // [sp+50h] [bp-70h]@4
  int *v18; // [sp+58h] [bp-68h]@4
  char v19; // [sp+5Ch] [bp-64h]@4
  int v20[14]; // [sp+60h] [bp-60h]@4
  int *v21; // [sp+98h] [bp-28h]@4
  WebToken *v22; // [sp+A0h] [bp-20h]@1

  v9 = a1;
  Certificate::createWebToken((WebToken *)&v22, a2, a3, a4, a5, a6, a7, a8);
  v10 = (int *)v22;
  v11 = *a9;
  if ( *a9 )
  {
    v12 = (int *)operator new(0x40u);
    UnverifiedCertificate::UnverifiedCertificate(v12, v11);
  }
  else
    v12 = 0;
  WebToken::WebToken(v20, v10);
  v21 = v12;
  v13 = *a9;
  *a9 = 0;
  UnverifiedCertificate::UnverifiedCertificate(v16, v20);
  v18 = v13;
  v19 = 0;
  v14 = (int *)operator new(0x48u);
  WebToken::WebToken(v14, v16);
  v14[14] = v17;
  v14[16] = (int)v18;
  *((_BYTE *)v14 + 68) = v19;
  v18 = 0;
  *v9 = v14;
  v17 = 0;
  WebToken::~WebToken((WebToken *)v16);
  if ( v21 )
    std::default_delete<UnverifiedCertificate>::operator()((int)&v21, (int)v21);
  v21 = 0;
  WebToken::~WebToken((WebToken *)v20);
  if ( v22 )
    v15 = WebToken::~WebToken(v22);
    operator delete((void *)v15);
}


void __fastcall Certificate::createWrappedCertificate(int **a1, const PrivateKeyManager *a2, unsigned int a3, unsigned int a4, __int64 a5, const char **a6, int a7, int a8, int **a9)
{
  Certificate::createWrappedCertificate(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}


int __fastcall Certificate::getExpirationDate(Certificate *this)
{
  Certificate *v1; // r4@1
  int v2; // r1@1
  int v3; // r6@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-40h]@1
  int v9; // [sp+14h] [bp-2Ch]@1
  char v10; // [sp+18h] [bp-28h]@1

  v1 = this;
  sub_21E94B4((void **)&v9, "exp");
  Json::Value::Value((Json::Value *)&v8, 0);
  Json::Value::get((Json::Value *)&v10, (const char *)v1 + 32, (const Json::Value **)&v9, (const Json::Value *)&v8);
  v3 = Json::Value::asInt64((Json::Value *)&v10, v2, 0LL);
  Json::Value::~Value((Json::Value *)&v10);
  Json::Value::~Value((Json::Value *)&v8);
  v4 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v9 - 4);
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
  return v3;
}


int __fastcall Certificate::getNotBeforeDate(Certificate *this)
{
  Certificate *v1; // r4@1
  int v2; // r1@1
  int v3; // r6@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-40h]@1
  int v9; // [sp+14h] [bp-2Ch]@1
  char v10; // [sp+18h] [bp-28h]@1

  v1 = this;
  sub_21E94B4((void **)&v9, "nbf");
  Json::Value::Value((Json::Value *)&v8, 0);
  Json::Value::get((Json::Value *)&v10, (const char *)v1 + 32, (const Json::Value **)&v9, (const Json::Value *)&v8);
  v3 = Json::Value::asInt64((Json::Value *)&v10, v2, 0LL);
  Json::Value::~Value((Json::Value *)&v10);
  Json::Value::~Value((Json::Value *)&v8);
  v4 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v9 - 4);
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
  return v3;
}


signed int __fastcall Certificate::isCertificateAuthority(Certificate *this)
{
  Certificate *v1; // r4@1
  signed int v2; // r5@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+0h] [bp-40h]@1
  int v8; // [sp+14h] [bp-2Ch]@1
  char v9; // [sp+18h] [bp-28h]@1

  v1 = this;
  sub_21E94B4((void **)&v8, "certificateAuthority");
  Json::Value::Value((Json::Value *)&v7, 0);
  Json::Value::get((Json::Value *)&v9, (const char *)v1 + 32, (const Json::Value **)&v8, (const Json::Value *)&v7);
  v2 = Json::Value::asBool((Json::Value *)&v9, 0);
  Json::Value::~Value((Json::Value *)&v9);
  Json::Value::~Value((Json::Value *)&v7);
  v3 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v8 - 4);
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
  return v2;
}


void __fastcall Certificate::getIdentityPublicKey(Certificate *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+4h] [bp-44h]@1
  char v11; // [sp+8h] [bp-40h]@1
  int v12; // [sp+1Ch] [bp-2Ch]@1
  char v13; // [sp+20h] [bp-28h]@1

  v2 = a2;
  v3 = (int *)this;
  sub_21E94B4((void **)&v12, "identityPublicKey");
  Json::Value::Value((Json::Value *)&v11, (const char *)&unk_257BC67);
  Json::Value::get((Json::Value *)&v13, (const char *)(v2 + 32), (const Json::Value **)&v12, (const Json::Value *)&v11);
  sub_21E94B4((void **)&v10, (const char *)&unk_257BC67);
  Json::Value::asString(v3, (int)&v13, &v10);
  v4 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v10 - 4);
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
  Json::Value::~Value((Json::Value *)&v13);
  Json::Value::~Value((Json::Value *)&v11);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


Certificate *__fastcall Certificate::getRootParentCertificate(Certificate *this)
{
  Certificate *v1; // r1@1

  do
  {
    v1 = this;
    this = (Certificate *)*((_DWORD *)this + 16);
  }
  while ( this );
  return v1;
}


signed int __fastcall Certificate::validate(Certificate *this, int a2, __int64 a3)
{
  Certificate *v3; // r4@1
  int v4; // r8@1
  Certificate *v5; // r0@1
  unsigned int v6; // r9@1
  signed int v7; // r0@2
  char *v8; // r10@2
  signed int v9; // r11@3
  unsigned int v10; // r0@5
  unsigned int v11; // r6@5
  bool v12; // cf@5
  signed int v13; // r0@5
  int v14; // r1@5
  int v15; // r5@5
  signed int v16; // r1@7
  signed int v17; // r7@7
  signed int v18; // r0@11
  unsigned int v19; // r0@19
  int v20; // r1@19
  signed int v21; // r2@20
  signed int v22; // r3@22
  signed int v23; // r7@22
  signed int v24; // r2@26
  signed int v25; // r0@34
  bool v26; // zf@36
  bool v27; // nf@36
  signed int v28; // r1@36
  int v29; // r5@43
  char v30; // r6@43
  char *v31; // r4@43
  size_t v32; // r2@43
  char *v33; // r0@47
  unsigned int *v35; // r1@51
  signed int v36; // r0@53
  unsigned int *v37; // r2@55
  signed int v38; // r1@57
  char *v39; // [sp+0h] [bp-38h]@43
  _DWORD *v40; // [sp+4h] [bp-34h]@43

  v3 = this;
  v4 = HIDWORD(a3);
  v5 = (Certificate *)*((_DWORD *)this + 16);
  v6 = a3;
  if ( v5 )
  {
    v7 = Certificate::validate(v5, a2, a3);
    *((_BYTE *)v3 + 68) = v7;
    v8 = (char *)v3 + 68;
    if ( v7 != 1 )
      return 0;
  }
  else
    *((_BYTE *)v3 + 68) = 1;
  v10 = Certificate::getNotBeforeDate(v3);
  v11 = v10;
  v12 = v10 >= v6;
  v26 = v10 == v6;
  v13 = 0;
  v15 = v14;
  if ( v26 || !v12 )
    v13 = 1;
  v16 = 0;
  v17 = v11;
  if ( v15 <= v4 )
    v16 = 1;
  v9 = 0;
  if ( v15 == v4 )
    v16 = v13;
  v18 = 0;
  if ( v15 > 0 )
    v18 = 1;
  if ( v11 )
    v17 = 1;
  if ( v15 )
    v17 = v18;
  if ( v17 )
    v17 = v16;
  v19 = Certificate::getExpirationDate(v3);
  *((_BYTE *)v3 + 68) = v17;
    v21 = 0;
    if ( v19 >= v11 )
      v21 = 1;
    v22 = 0;
    v23 = 0;
    if ( v20 >= v15 )
      v22 = 1;
    if ( v20 == v15 )
      v22 = v21;
    v24 = 0;
    if ( v19 < v6 )
      v24 = 1;
    if ( v20 < v4 )
      v23 = 1;
    if ( v20 == v4 )
      v23 = v24;
    if ( v23 )
      v22 = 0;
    v26 = v19 == 0;
    v25 = 0;
    if ( v26 )
      v25 = 1;
    v26 = v20 == 0;
    v27 = v20 < 0;
    v28 = 0;
    if ( v27 )
      v28 = 1;
      v28 = v25;
    if ( v28 )
    *v8 = v22;
    if ( v22 )
    {
      Certificate::getIdentityPublicKey((Certificate *)&v40, (int)v3);
      UnverifiedCertificate::getIdentityPublicKey((UnverifiedCertificate *)&v39, (int)v3);
      v29 = (int)v39;
      v30 = 0;
      v31 = v39 - 12;
      v32 = *(v40 - 3);
      if ( v32 == *((_DWORD *)v39 - 3) && !memcmp(v40, v39, v32) )
        v30 = 1;
      *v8 = v30;
      if ( (int *)v31 != &dword_28898C0 )
      {
        v35 = (unsigned int *)(v29 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        }
        else
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      }
      v33 = (char *)(v40 - 3);
      if ( v40 - 3 != &dword_28898C0 )
        v37 = v40 - 1;
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      v9 = (unsigned __int8)*v8;
      if ( *v8 )
        v9 = 1;
    }
  return v9;
}


void __fastcall Certificate::addAuthorityToCertificate(Certificate **a1, const PrivateKeyManager *a2, unsigned int a3, unsigned int a4, __int64 a5, const char **a6, Certificate **a7)
{
  Certificate::addAuthorityToCertificate(a1, a2, a3, a4, a5, a6, a7);
}


void __fastcall Certificate::getIdentityPublicKey(Certificate *this, int a2)
{
  Certificate::getIdentityPublicKey(this, a2);
}


int *__fastcall Certificate::Certificate(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  int *v4; // r6@1
  int *v5; // r7@2

  v2 = a2;
  v3 = a1;
  UnverifiedCertificate::UnverifiedCertificate(a1, a2);
  v4 = (int *)v2[16];
  if ( v4 )
  {
    v5 = (int *)operator new(0x48u);
    Certificate::Certificate(v5, v4);
    v3[16] = (int)v5;
  }
  else
    v3[16] = 0;
  *((_BYTE *)v3 + 68) = *((_BYTE *)v2 + 68);
  return v3;
}


Json::Value *__fastcall Certificate::getExtraData(Json::Value *a1, int a2, const Json::Value **a3, const Json::Value *a4)
{
  int v4; // r7@1
  const Json::Value *v5; // r4@1
  const Json::Value **v6; // r5@1
  Json::Value *v7; // r6@1
  void *v8; // r0@1
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int v12; // [sp+0h] [bp-40h]@1
  int v13; // [sp+14h] [bp-2Ch]@1
  char v14; // [sp+18h] [bp-28h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v13, "extraData");
  Json::Value::Value(&v12, 0);
  Json::Value::get((Json::Value *)&v14, (const char *)(v4 + 32), (const Json::Value **)&v13, (const Json::Value *)&v12);
  Json::Value::~Value((Json::Value *)&v12);
  v8 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  if ( Json::Value::isNull((Json::Value *)&v14) == 1 )
    Json::Value::Value(v7, v5);
  else
    Json::Value::get(v7, &v14, v6, v5);
  return Json::Value::~Value((Json::Value *)&v14);
}


int *__fastcall Certificate::Certificate(int *a1, int *a2)
{
  int *v2; // r4@1
  int *result; // r0@1
  int v4; // r1@1
  int v5; // r1@1

  v2 = a2;
  result = WebToken::WebToken(a1, a2);
  v4 = v2[14];
  v2[14] = 0;
  result[14] = v4;
  v5 = v2[16];
  v2[16] = 0;
  result[16] = v5;
  *((_BYTE *)result + 68) = *((_BYTE *)v2 + 68);
  return result;
}
