

void __fastcall UnverifiedCertificate::verify(int **a1, int a2, __int64 *a3)
{
  __int64 *v3; // r6@1
  int v4; // r5@1
  int **v5; // r4@1
  __int64 v6; // r0@1
  void *v7; // r2@1
  unsigned int v8; // r7@1
  int v9; // r6@4
  int v10; // r1@4
  Certificate *v11; // r7@5
  int v12; // r0@7
  char *v13; // r1@8
  char *v14; // r0@10
  Certificate *v15; // r7@13
  int *v16; // r5@13
  int v17; // r1@14
  char *v18; // r4@16
  char *v19; // r6@16
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  int *v22; // r0@26
  unsigned int *v23; // r2@32
  signed int v24; // r1@34
  int v25[14]; // [sp+8h] [bp-88h]@13
  int v26; // [sp+40h] [bp-50h]@13
  Certificate *v27; // [sp+48h] [bp-48h]@13
  char v28; // [sp+4Ch] [bp-44h]@13
  char *v29; // [sp+54h] [bp-3Ch]@7
  Certificate *v30; // [sp+58h] [bp-38h]@5
  Certificate *v31; // [sp+5Ch] [bp-34h]@4
  void *ptr; // [sp+60h] [bp-30h]@1
  char *v33; // [sp+64h] [bp-2Ch]@1
  char *v34; // [sp+68h] [bp-28h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *a3;
  v7 = 0;
  ptr = 0;
  v33 = 0;
  v34 = 0;
  v8 = (HIDWORD(v6) - (signed int)v6) >> 2;
  if ( v8 )
  {
    if ( v8 >= 0x40000000 )
      sub_21E57F4();
    v7 = operator new(HIDWORD(v6) - v6);
    v6 = *v3;
  }
  ptr = v7;
  v34 = (char *)v7 + 4 * v8;
  v33 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                  v6,
                  SHIDWORD(v6),
                  (int)v7);
  v9 = WebToken::verify(v4, (__int64 *)&ptr);
  v31 = 0;
  v10 = *(_DWORD *)(v4 + 56);
  if ( v10 )
    UnverifiedCertificate::verify((int)&v30, v10, (__int64 *)&ptr);
    v11 = v30;
    v31 = v30;
    v30 = 0;
    if ( v31 )
    {
      if ( !(Certificate::isCertificateAuthority(v11) ^ 1 | v9) )
      {
        Certificate::getIdentityPublicKey((Certificate *)&v29, (int)v11);
        v12 = (int)v33;
        if ( v33 == v34 )
        {
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
            (unsigned __int64 *)&ptr,
            &v29);
          v13 = v29;
        }
        else
          *(_DWORD *)v33 = v29;
          v33 = (char *)(v12 + 4);
          v13 = (char *)&unk_28898CC;
          v29 = (char *)&unk_28898CC;
        v14 = v13 - 12;
        if ( (int *)(v13 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v13 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          }
          else
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        v9 = WebToken::verify(v4, (__int64 *)&ptr);
      }
    }
  if ( v9 == 1 )
    v15 = v31;
    v31 = 0;
    UnverifiedCertificate::UnverifiedCertificate(v25, (int *)v4);
    v27 = v15;
    v28 = 0;
    v16 = (int *)operator new(0x48u);
    WebToken::WebToken(v16, v25);
    v16[14] = v26;
    v16[16] = (int)v27;
    *((_BYTE *)v16 + 68) = v28;
    *v5 = v16;
    v27 = 0;
    v26 = 0;
    WebToken::~WebToken((WebToken *)v25);
  else
    v17 = (int)v31;
    *v5 = 0;
    if ( v17 )
      std::default_delete<Certificate>::operator()((int)&v31, v17);
  v19 = v33;
  v18 = (char *)ptr;
  if ( ptr != v33 )
    do
      v22 = (int *)(*(_DWORD *)v18 - 12);
      if ( v22 != &dword_28898C0 )
        v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v18 += 4;
    while ( v18 != v19 );
    v18 = (char *)ptr;
  if ( v18 )
    operator delete(v18);
}


Json::Value *__fastcall UnverifiedCertificate::getIdentityPublicKey(UnverifiedCertificate *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-3Ch]@1
  char v9; // [sp+8h] [bp-38h]@1
  char v10; // [sp+18h] [bp-28h]@1

  v2 = a2;
  v3 = (int *)this;
  Json::Value::Value((Json::Value *)&v9, (const char *)&unk_257BC67);
  Json::Value::get(
    (Json::Value *)&v10,
    (const char *)(v2 + 32),
    (const Json::Value *)"identityPublicKey",
    (const Json::Value *)&v9);
  sub_21E94B4((void **)&v8, (const char *)&unk_257BC67);
  Json::Value::asString(v3, (int)&v10, &v8);
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
  Json::Value::~Value((Json::Value *)&v10);
  return Json::Value::~Value((Json::Value *)&v9);
}


int *__fastcall UnverifiedCertificate::UnverifiedCertificate(int *a1, int *a2, int *a3)
{
  int *v3; // r4@1
  int *result; // r0@1
  int v5; // r1@1

  v3 = a3;
  result = WebToken::WebToken(a1, a2);
  v5 = *v3;
  *v3 = 0;
  result[14] = v5;
  return result;
}


Json::Value *__fastcall UnverifiedCertificate::fromString(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  signed int v4; // r5@1
  Json::Value *v5; // r0@3
  int v6; // r5@4
  char *v7; // r8@4
  void *v8; // r11@4
  Json::Value *v9; // r5@5
  int *v10; // r5@6
  void *v11; // r0@6
  void *v12; // r0@7
  int v13; // r8@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  unsigned int *v16; // r2@14
  signed int v17; // r1@16
  int v18; // r1@29
  void *v19; // r0@32
  unsigned int *v21; // r2@34
  signed int v22; // r1@36
  int v23; // [sp+14h] [bp-184h]@32
  int v24[14]; // [sp+18h] [bp-180h]@32
  char v25; // [sp+50h] [bp-148h]@4
  int v26; // [sp+88h] [bp-110h]@8
  int v27; // [sp+98h] [bp-100h]@6
  int v28; // [sp+9Ch] [bp-FCh]@6
  int v29[15]; // [sp+A0h] [bp-F8h]@6
  char v30; // [sp+DCh] [bp-BCh]@4
  char v31; // [sp+E4h] [bp-B4h]@4
  int v32; // [sp+ECh] [bp-ACh]@4
  char v33; // [sp+F0h] [bp-A8h]@1
  char v34; // [sp+160h] [bp-38h]@1

  v2 = a1;
  v3 = a2;
  Json::Value::Value(&v34, 0);
  Json::Reader::Reader((Json::Reader *)&v33);
  v4 = Json::Reader::parse((int)&v33, v3, (int)&v34, 1);
  Json::Reader::~Reader((Json::Reader *)&v33);
  if ( v4 != 1 )
    goto LABEL_44;
  if ( Json::Value::isObject((Json::Value *)&v34) != 1 )
  v5 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v34, "chain");
  if ( Json::Value::isArray(v5) != 1 )
  v32 = 0;
  v6 = Json::Value::operator[]((Json::Value *)&v34, "chain");
  Json::Value::begin((Json::Value *)&v31, v6);
  Json::Value::end((Json::Value *)&v30, v6);
  v7 = &v25;
  v8 = 0;
  while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v31, (const Json::ValueIteratorBase *)&v30) != 1 )
  {
    v9 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v31);
    if ( Json::Value::isString(v9) == 1 )
    {
      sub_21E94B4((void **)&v27, (const char *)&unk_257BC67);
      Json::Value::asString(&v28, (int)v9, &v27);
      WebToken::WebToken((int)v29, &v28);
      v10 = (int *)v7;
      v11 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
      {
        v14 = (unsigned int *)(v28 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v10 = (int *)v7;
        }
        else
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      }
      v12 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v27 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v13 = v32;
      v32 = 0;
      WebToken::WebToken(v10, v29);
      v26 = v13;
      v8 = operator new(0x40u);
      WebToken::WebToken((int *)v8, v10);
      v7 = (char *)v10;
      *((_DWORD *)v8 + 14) = v26;
      v26 = 0;
      WebToken::~WebToken((WebToken *)v10);
      v32 = (int)v8;
      WebToken::~WebToken((WebToken *)v29);
    }
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v31);
  }
  if ( v8 )
    UnverifiedCertificate::UnverifiedCertificate((int *)v2, (int *)v8);
    if ( v8 )
      v18 = *((_DWORD *)v8 + 14);
      if ( v18 )
        std::default_delete<UnverifiedCertificate>::operator()((int)v8 + 56, v18);
      *((_DWORD *)v8 + 14) = 0;
      WebToken::~WebToken((WebToken *)v8);
      operator delete(v8);
  else
LABEL_44:
    sub_21E94B4((void **)&v23, (const char *)&unk_257BC67);
    WebToken::WebToken((int)v24, &v23);
    WebToken::WebToken((int *)v2, v24);
    *(_DWORD *)(v2 + 56) = 0;
    WebToken::~WebToken((WebToken *)v24);
    v19 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
  return Json::Value::~Value((Json::Value *)&v34);
}


void __fastcall UnverifiedCertificate::addToChain(UnverifiedCertificate *this, Json::Value *a2)
{
  int *v2; // r5@1
  Json::Value *v3; // r4@1
  UnverifiedCertificate *v4; // r0@1
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // [sp+4h] [bp-2Ch]@3
  char v9; // [sp+8h] [bp-28h]@3

  v2 = (int *)this;
  v3 = a2;
  v4 = (UnverifiedCertificate *)*((_DWORD *)this + 14);
  if ( v4 )
    UnverifiedCertificate::addToChain(v4, a2);
  WebToken::toString((WebToken *)&v8, v2);
  Json::Value::Value((int)&v9, (const char **)&v8);
  Json::Value::append(v3, (const Json::Value *)&v9);
  Json::Value::~Value((Json::Value *)&v9);
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


int *__fastcall UnverifiedCertificate::UnverifiedCertificate(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  int *v4; // r5@1
  int *v5; // r6@2
  int *result; // r0@2

  v2 = a2;
  v3 = a1;
  WebToken::WebToken(a1, a2);
  v4 = (int *)v2[14];
  if ( v4 )
  {
    v5 = (int *)operator new(0x40u);
    UnverifiedCertificate::UnverifiedCertificate(v5, v4);
    result = v3;
    v3[14] = (int)v5;
  }
  else
    v3[14] = 0;
  return result;
}


void __fastcall UnverifiedCertificate::verify(int a1, int a2, __int64 *a3)
{
  UnverifiedCertificate::verify((int **)a1, a2, a3);
}


Json::Value *__fastcall UnverifiedCertificate::toString(UnverifiedCertificate *this, UnverifiedCertificate *a2)
{
  Json::FastWriter *v2; // r4@1
  UnverifiedCertificate *v3; // r5@1
  Json::Value *v4; // r0@1
  int v5; // r6@1
  Json::Value *v6; // r6@1
  void *v7; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  void **v11; // [sp+4h] [bp-44h]@1
  int v12; // [sp+8h] [bp-40h]@1
  char v13; // [sp+10h] [bp-38h]@1
  char v14; // [sp+20h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = (Json::Value *)Json::Value::Value(&v14, 0);
  v5 = Json::Value::operator[](v4, "chain");
  Json::Value::Value(&v13, 6);
  v6 = (Json::Value *)Json::Value::operator=(v5, (const Json::Value *)&v13);
  Json::Value::~Value((Json::Value *)&v13);
  UnverifiedCertificate::addToChain(v3, v6);
  Json::FastWriter::FastWriter((Json::FastWriter *)&v11);
  Json::FastWriter::write(v2, (const Json::Value *)&v11, (const Json::Value *)&v14);
  v11 = &off_2725B14;
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  Json::Writer::~Writer((Json::Writer *)&v11);
  return Json::Value::~Value((Json::Value *)&v14);
}


void __fastcall UnverifiedCertificate::addToChain(UnverifiedCertificate *this, Json::Value *a2)
{
  UnverifiedCertificate::addToChain(this, a2);
}


int *__fastcall UnverifiedCertificate::UnverifiedCertificate(int *a1, int *a2)
{
  int *v2; // r4@1
  int *result; // r0@1
  int v4; // r1@1

  v2 = a2;
  result = WebToken::WebToken(a1, a2);
  v4 = v2[14];
  v2[14] = 0;
  result[14] = v4;
  return result;
}


void __fastcall UnverifiedCertificate::addToEnd(UnverifiedCertificate *this, const UnverifiedCertificate *a2)
{
  int *v2; // r5@1
  int *v3; // r4@2
  int *v4; // r6@3
  int v5; // r1@3

  v2 = (int *)a2;
  do
  {
    v3 = (int *)((char *)this + 56);
    this = (UnverifiedCertificate *)*((_DWORD *)this + 14);
  }
  while ( this );
  v4 = (int *)operator new(0x40u);
  UnverifiedCertificate::UnverifiedCertificate(v4, v2);
  v5 = *v3;
  *v3 = (int)v4;
  if ( v5 )
    j_j_j__ZNKSt14default_deleteI21UnverifiedCertificateEclEPS0_((int)v3, v5);
}
