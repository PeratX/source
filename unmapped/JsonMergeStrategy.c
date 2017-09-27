

void __fastcall JsonMergeStrategy::~JsonMergeStrategy(JsonMergeStrategy *this)
{
  JsonMergeStrategy::~JsonMergeStrategy(this);
}


int __fastcall JsonMergeStrategy::mergeFiles(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r4@1
  int v3; // r9@1
  unsigned __int64 v4; // r0@1
  Json::Reader *v5; // r0@2
  signed int v6; // r7@4
  signed int v7; // r5@4
  int v9; // [sp+0h] [bp-A0h]@5
  char v10; // [sp+14h] [bp-8Ch]@2

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v5 = Json::Reader::Reader((Json::Reader *)&v10);
    if ( Json::Reader::parse((int)v5, (int *)(*(_DWORD *)v2 + 4), *(_DWORD *)(v3 + 8), 1) == 1
      && (signed int)((*v2 >> 32) - *v2) >= 9 )
    {
      v6 = 1;
      v7 = 12;
      do
      {
        Json::Value::Value(&v9, 0);
        if ( Json::Reader::parse((int)&v10, (int *)(*(_DWORD *)v2 + v7), (int)&v9, 1) == 1 )
          JsonMergeStrategy::_recursiveMerge(
            (JsonMergeStrategy *)v3,
            *(Json::Value **)(v3 + 8),
            (const Json::Value *)&v9);
        Json::Value::~Value((Json::Value *)&v9);
        v7 += 8;
        ++v6;
      }
      while ( v6 < (signed int)((*v2 >> 32) - *v2) >> 3 );
    }
    LODWORD(v4) = Json::Reader::~Reader((Json::Reader *)&v10);
  }
  return v4;
}


int __fastcall JsonMergeStrategy::JsonMergeStrategy(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r7@1
  void (__fastcall *v7)(int, int, signed int); // r3@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  *(_DWORD *)a1 = &off_26EAB00;
  sub_21E8AF4((int *)(a1 + 4), a2);
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 20) = 0;
  v7 = *(void (__fastcall **)(int, int, signed int))(v5 + 8);
  if ( v7 )
  {
    v7(v4 + 12, v5, 2);
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(v5 + 8);
  }
  return v4;
}


void __fastcall JsonMergeStrategy::~JsonMergeStrategy(JsonMergeStrategy *this)
{
  JsonMergeStrategy *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26EAB00;
  v2 = (void (*)(void))*((_DWORD *)this + 5);
  if ( v2 )
    v2();
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
      j_j_j_j__ZdlPv_9(v4);
  }
  operator delete((void *)v1);
}


signed int __fastcall JsonMergeStrategy::_recursiveMerge(JsonMergeStrategy *this, Json::Value *a2, const Json::Value *a3)
{
  JsonMergeStrategy *v3; // r8@1
  const Json::Value *v4; // r10@1
  Json::Value *v5; // r9@1
  signed int result; // r0@2
  const Json::Value *v7; // r5@4
  const char *v8; // r0@4
  Json::Value *v9; // r4@4
  int v10; // [sp+0h] [bp-30h]@3
  char v11; // [sp+8h] [bp-28h]@3

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( !*((_DWORD *)this + 5) || (result = (*((int (__fastcall **)(_DWORD))this + 6))((char *)this + 12)) == 0 )
  {
    Json::Value::begin((Json::Value *)&v11, (int)v4);
    Json::Value::end((Json::Value *)&v10, (int)v4);
    result = Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v11, (const Json::ValueIteratorBase *)&v10);
    if ( result != 1 )
    {
      do
      {
        v7 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v11);
        v8 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v11);
        v9 = (Json::Value *)Json::Value::operator[](v5, v8);
        if ( Json::Value::isObject(v7) != 1 || Json::Value::isObject(v9) != 1 )
          Json::Value::operator=((int)v9, v7);
        else
          JsonMergeStrategy::_recursiveMerge(v3, v9, v7);
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v11);
        Json::Value::end((Json::Value *)&v10, (int)v4);
        result = Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v11,
                   (const Json::ValueIteratorBase *)&v10);
      }
      while ( !result );
    }
  }
  return result;
}


JsonMergeStrategy *__fastcall JsonMergeStrategy::~JsonMergeStrategy(JsonMergeStrategy *this)
{
  JsonMergeStrategy *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26EAB00;
  v2 = (void (*)(void))*((_DWORD *)this + 5);
  if ( v2 )
    v2();
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
      j_j_j_j__ZdlPv_9(v4);
  }
  return v1;
}
