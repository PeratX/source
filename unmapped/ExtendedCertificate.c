

void __fastcall ExtendedCertificate::getIdentity(ExtendedCertificate *this, const Certificate *a2)
{
  const Certificate *v2; // r5@1
  ExtendedCertificate *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  int v13; // [sp+4h] [bp-44h]@1
  char v14; // [sp+8h] [bp-40h]@1
  int v15; // [sp+1Ch] [bp-2Ch]@1
  char v16; // [sp+20h] [bp-28h]@1
  int v17; // [sp+30h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_DA7364((void **)&v15, "identity");
  Json::Value::Value((Json::Value *)&v14, (const char *)&unk_257BC67);
  Certificate::getExtraData((Json::Value *)&v16, (int)v2, (const Json::Value **)&v15, (const Json::Value *)&v14);
  sub_DA7364((void **)&v13, (const char *)&unk_257BC67);
  Json::Value::asString(&v17, (int)&v16, &v13);
  mce::UUID::fromString((int)v3, &v17);
  v4 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v17 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v13 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  Json::Value::~Value((Json::Value *)&v16);
  Json::Value::~Value((Json::Value *)&v14);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
}


void __fastcall ExtendedCertificate::getXuid(ExtendedCertificate *this, const Certificate *a2)
{
  ExtendedCertificate::getXuid(this, a2);
}


void __fastcall ExtendedCertificate::getIdentityName(ExtendedCertificate *this, const Certificate *a2)
{
  ExtendedCertificate::getIdentityName(this, a2);
}


Json::Value *__fastcall ExtendedCertificate::createIdentityCertificate(int **a1, const PrivateKeyManager *a2, unsigned int a3, unsigned int a4, __int64 a5, int a6, const char **a7, const char **a8, int a9)
{
  int **v9; // r6@1
  const PrivateKeyManager *v10; // r10@1
  unsigned int v11; // r9@1
  unsigned int v12; // r8@1
  Json::Value *v13; // r0@1
  int v14; // r4@1
  void *v15; // r0@1
  char *v16; // r5@2
  int v17; // r4@2
  int v18; // r9@4
  const Json::Value *v19; // r0@4
  void *v20; // r0@4
  void *v21; // r0@5
  unsigned int *v22; // r2@7
  signed int v23; // r1@9
  unsigned int *v24; // r2@11
  signed int v25; // r1@13
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  unsigned __int64 v29; // [sp+18h] [bp-B8h]@3
  int v30; // [sp+2Ch] [bp-A4h]@25
  char v31; // [sp+30h] [bp-A0h]@6
  int v32; // [sp+3Ch] [bp-94h]@4
  char v33; // [sp+40h] [bp-90h]@4
  int v34; // [sp+54h] [bp-7Ch]@4
  char v35; // [sp+58h] [bp-78h]@23
  char v36; // [sp+60h] [bp-70h]@3
  char v37; // [sp+68h] [bp-68h]@3
  char v38; // [sp+70h] [bp-60h]@2
  int v39; // [sp+84h] [bp-4Ch]@1
  char v40; // [sp+88h] [bp-48h]@1
  char v41; // [sp+98h] [bp-38h]@1

  v9 = a1;
  v10 = a2;
  v11 = a4;
  v12 = a3;
  v13 = (Json::Value *)Json::Value::Value(&v41, 0);
  v14 = Json::Value::operator[](v13, "identity");
  mce::UUID::asString((mce::UUID *)&v39);
  Json::Value::Value((int)&v40, (const char **)&v39);
  Json::Value::operator=(v14, (const Json::Value *)&v40);
  Json::Value::~Value((Json::Value *)&v40);
  v15 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  }
  v16 = &v41;
  v17 = Json::Value::operator[]((Json::Value *)&v41, "displayName");
  Json::Value::Value((int)&v38, a7);
  Json::Value::operator=(v17, (const Json::Value *)&v38);
  Json::Value::~Value((Json::Value *)&v38);
  if ( a9 )
    Json::Value::begin((Json::Value *)&v36, a9);
    Json::ValueIterator::ValueIterator((Json::ValueIterator *)&v37, (const Json::ValueConstIterator *)&v36);
    v29 = __PAIR__((unsigned int)v9, v11);
    while ( 1 )
      Json::Value::end((Json::Value *)&v35, a9);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v37, (const Json::ValueIteratorBase *)&v35) == 1 )
        break;
      Json::ValueIteratorBase::key((Json::ValueIteratorBase *)&v33, (int)&v37);
      sub_21E94B4((void **)&v32, (const char *)&unk_257BC67);
      Json::Value::asString(&v34, (int)&v33, &v32);
      v18 = Json::Value::operator[]((Json::Value *)&v41, (const char **)&v34);
      v19 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v37);
      Json::Value::operator=(v18, v19);
      v20 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
      {
        v22 = (unsigned int *)(v34 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      }
      v21 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v32 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      Json::Value::~Value((Json::Value *)&v33);
      Json::ValueIterator::ValueIterator((Json::ValueIterator *)&v31, (const Json::ValueIterator *)&v37);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v37);
    v16 = &v41;
    v9 = (int **)HIDWORD(v29);
    v11 = v29;
  v30 = 0;
  Certificate::createWrappedCertificate(v9, v10, v12, v11, a5, a8, 0, (int)v16, (int **)&v30);
  std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v30);
  return Json::Value::~Value((Json::Value *)&v41);
}


void __fastcall ExtendedCertificate::getXuid(ExtendedCertificate *this, const Certificate *a2)
{
  const Certificate *v2; // r5@1
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
  sub_21E94B4((void **)&v12, "XUID");
  Json::Value::Value((Json::Value *)&v11, (const char *)&unk_257BC67);
  Certificate::getExtraData((Json::Value *)&v13, (int)v2, (const Json::Value **)&v12, (const Json::Value *)&v11);
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


void __fastcall ExtendedCertificate::getIdentityName(ExtendedCertificate *this, const Certificate *a2)
{
  const Certificate *v2; // r5@1
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
  sub_DA7364((void **)&v12, "displayName");
  Json::Value::Value((Json::Value *)&v11, (const char *)&unk_257BC67);
  Certificate::getExtraData((Json::Value *)&v13, (int)v2, (const Json::Value **)&v12, (const Json::Value *)&v11);
  sub_DA7364((void **)&v10, (const char *)&unk_257BC67);
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
      j_j_j_j_j__ZdlPv_9(v4);
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
      j_j_j_j_j__ZdlPv_9(v5);
}


void __fastcall ExtendedCertificate::getIdentity(ExtendedCertificate *this, const Certificate *a2)
{
  ExtendedCertificate::getIdentity(this, a2);
}
