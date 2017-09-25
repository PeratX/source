

PackError *__fastcall PackError::~PackError(PackError *this)
{
  PackError *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26D9084;
  v3 = (void *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete(v2);
  return v1;
}


void __fastcall PackError::~PackError(PackError *this)
{
  PackError::~PackError(this);
}


void __fastcall PackError::getEventErrorMessage(PackError *this, int a2)
{
  int v2; // r9@1
  PackError *v3; // r8@1
  unsigned __int64 *v4; // r0@1
  unsigned __int64 v5; // kr00_8@1
  unsigned int v6; // r4@1
  _DWORD *v7; // r0@1
  _DWORD *v8; // r7@2
  int v9; // r5@2
  _DWORD *v10; // r6@4
  int v11; // r6@6
  const char *v12; // r1@14
  int v13; // r6@14
  const char *v14; // t1@14
  int v15; // r9@15
  int v16; // t1@15
  void *v17; // r0@16
  int **v18; // r0@18
  int *v19; // r1@20
  int *v20; // r0@20
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  int v23; // [sp+8h] [bp-30h]@16

  v2 = a2;
  v3 = this;
  v4 = (unsigned __int64 *)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2);
  v5 = *v4;
  v6 = *(_DWORD *)(v2 + 16) % (*v4 >> 32);
  v7 = *(_DWORD **)(*v4 + 4 * v6);
  if ( v7 )
  {
    v8 = (_DWORD *)*v7;
    v9 = *(_DWORD *)(*v7 + 4);
    while ( *(_DWORD *)(v2 + 16) != v9 )
    {
      v10 = (_DWORD *)*v8;
      if ( !*v8 )
      {
        v11 = 0;
        goto LABEL_13;
      }
      v9 = v10[1];
      v7 = v8;
      v8 = (_DWORD *)*v8;
      if ( v10[1] % HIDWORD(v5) != v6 )
    }
    if ( v7 )
      v11 = *v7;
    else
      v11 = 0;
  }
  else
    v11 = 0;
LABEL_13:
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  if ( !v11 )
    v18 = (int **)&Util::EMPTY_STRING;
LABEL_20:
    v19 = *v18;
    v20 = (int *)v3;
LABEL_22:
    sub_21E8AF4(v20, v19);
    return;
  v14 = *(const char **)(v11 + 8);
  v13 = v11 + 8;
  v12 = v14;
  if ( !*((_DWORD *)v14 - 3) )
    goto LABEL_20;
  v16 = *(_DWORD *)(v2 + 4);
  v15 = v2 + 4;
  if ( v16 == *(_DWORD *)(v15 + 4) )
    v19 = (int *)v13;
    goto LABEL_22;
  sub_21E94B4((void **)&v23, v12);
  Util::simpleFormat(__PAIR__(&v23, (unsigned int)v3), (__int64 *)v15);
  v17 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
}


Json::Value *__fastcall PackError::serialize(PackError *this, Json::Value *a2)
{
  Json::Value *v2; // r8@1
  PackError *v3; // r5@1
  int v4; // r6@1
  int v5; // r6@1
  const char **v6; // r4@1
  const char **i; // r6@1
  int v8; // r0@3
  int v10; // [sp+0h] [bp-58h]@2
  char v11; // [sp+10h] [bp-48h]@1
  char v12; // [sp+20h] [bp-38h]@1
  char v13; // [sp+30h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "type");
  Json::Value::Value((Json::Value *)&v13, *((_DWORD *)v3 + 5));
  Json::Value::operator=(v4, (const Json::Value *)&v13);
  Json::Value::~Value((Json::Value *)&v13);
  v5 = Json::Value::operator[](v2, "key");
  Json::Value::Value((Json::Value *)&v12, *((_DWORD *)v3 + 4));
  Json::Value::operator=(v5, (const Json::Value *)&v12);
  Json::Value::~Value((Json::Value *)&v12);
  Json::Value::Value(&v11, 0);
  v6 = (const char **)(*(_QWORD *)((char *)v3 + 4) >> 32);
  for ( i = (const char **)*(_QWORD *)((char *)v3 + 4); v6 != i; ++i )
  {
    Json::Value::Value((int)&v10, i);
    Json::Value::append((Json::Value *)&v11, (const Json::Value *)&v10);
    Json::Value::~Value((Json::Value *)&v10);
  }
  v8 = Json::Value::operator[](v2, "parameters");
  Json::Value::operator=(v8, (const Json::Value *)&v11);
  return Json::Value::~Value((Json::Value *)&v11);
}


void __fastcall PackError::getLocErrorMessage(PackError *this, int a2)
{
  PackError::getLocErrorMessage(this, a2);
}


void __fastcall PackError::~PackError(PackError *this)
{
  PackError *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26D9084;
  v3 = (void *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete(v2);
  operator delete((void *)v1);
}


signed int __fastcall PackError::deserialize(PackError *this, const Json::Value *a2)
{
  const Json::Value *v2; // r5@1
  PackError *v3; // r4@1
  Json::Value *v4; // r0@1
  void *v5; // r5@1
  signed int result; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  int v11; // r8@19
  __int64 v12; // r0@19
  int v13; // r1@20
  void *v14; // r0@22
  void *v15; // r0@23
  int v16; // [sp+8h] [bp-40h]@7
  void *v17; // [sp+Ch] [bp-3Ch]@19
  char v18; // [sp+10h] [bp-38h]@1
  char v19; // [sp+18h] [bp-30h]@1

  v2 = a2;
  v3 = this;
  v4 = (Json::Value *)Json::Value::operator[]((int)a2, "key");
  *((_DWORD *)v3 + 4) = Json::Value::asInt(v4, 0);
  v5 = Json::Value::operator[]((int)v2, "parameters");
  Json::Value::begin((Json::Value *)&v19, (int)v5);
  Json::Value::end((Json::Value *)&v18, (int)v5);
  for ( result = Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v19,
                   (const Json::ValueIteratorBase *)&v18);
        !result;
        result = Json::ValueIteratorBase::isEqual(
                   (const Json::ValueIteratorBase *)&v18) )
  {
    v11 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v19);
    sub_21E94B4((void **)&v16, (const char *)&unk_257BC67);
    Json::Value::asString((int *)&v17, v11, &v16);
    v12 = *((_QWORD *)v3 + 1);
    if ( (_DWORD)v12 == HIDWORD(v12) )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)((char *)v3 + 4),
        &v17);
      v13 = (int)v17;
    }
    else
      *(_DWORD *)v12 = v17;
      HIDWORD(v12) = &unk_28898CC;
      v17 = &unk_28898CC;
      *((_DWORD *)v3 + 2) = v12 + 4;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v13 - 4);
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
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v16 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v19);
  }
  return result;
}


void __fastcall PackError::getLocErrorMessage(PackError *this, int a2)
{
  int v2; // r9@1
  int *v3; // r8@1
  unsigned __int64 *v4; // r0@1
  unsigned __int64 v5; // kr00_8@1
  unsigned int v6; // r4@1
  _DWORD *v7; // r0@1
  _DWORD *v8; // r7@2
  int v9; // r5@2
  _DWORD *v10; // r6@4
  int v11; // r4@6

  v2 = a2;
  v3 = (int *)this;
  v4 = (unsigned __int64 *)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v5 = *v4;
  v6 = *(_DWORD *)(v2 + 16) % (*v4 >> 32);
  v7 = *(_DWORD **)(*v4 + 4 * v6);
  if ( v7 )
  {
    v8 = (_DWORD *)*v7;
    v9 = *(_DWORD *)(*v7 + 4);
    while ( *(_DWORD *)(v2 + 16) != v9 )
    {
      v10 = (_DWORD *)*v8;
      if ( !*v8 )
      {
        v11 = 0;
        goto LABEL_13;
      }
      v9 = v10[1];
      v7 = v8;
      v8 = (_DWORD *)*v8;
      if ( v10[1] % HIDWORD(v5) != v6 )
    }
    if ( v7 )
      v11 = *v7;
    else
      v11 = 0;
  }
  else
    v11 = 0;
LABEL_13:
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
  if ( v11 )
    I18n::get(v3, (int *)(v11 + 8), (unsigned __int64 *)(v2 + 4));
    sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
}


void __fastcall PackError::getEventErrorMessage(PackError *this, int a2)
{
  PackError::getEventErrorMessage(this, a2);
}


char *__fastcall PackError::getErrorParameters(PackError *this)
{
  return (char *)this + 4;
}
