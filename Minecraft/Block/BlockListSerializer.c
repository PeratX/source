

Json::Value *__fastcall BlockListSerializer::loadJSONSet(const char **a1, int a2, Json::Value *a3)
{
  int v3; // r4@1
  const Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  void *v6; // r0@3
  void *v7; // r0@4
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // r8@11
  void *v11; // r0@11
  void *v12; // r0@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  unsigned int *v17; // r2@32
  signed int v18; // r1@34
  int v20; // [sp+Ch] [bp-5Ch]@11
  int v21; // [sp+10h] [bp-58h]@11
  char v22; // [sp+14h] [bp-54h]@30
  char v23; // [sp+1Ch] [bp-4Ch]@10
  int v24; // [sp+28h] [bp-40h]@3
  int v25; // [sp+2Ch] [bp-3Ch]@3
  char v26; // [sp+30h] [bp-38h]@1

  v3 = a2;
  v4 = (const Json::Value *)j_Json::Value::operator[](a3, a1);
  v5 = j_Json::Value::Value((Json::Value *)&v26, v4);
  if ( !j_Json::Value::empty(v5) )
  {
    if ( j_Json::Value::isString((Json::Value *)&v26) == 1 )
    {
      sub_21E94B4((void **)&v24, (const char *)&unk_257BC67);
      j_Json::Value::asString(&v25, (int)&v26, &v24);
      v6 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
      {
        v17 = (unsigned int *)(v24 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      j_loadBlock((unsigned int *)&v25, v3);
      v7 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v25 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
    }
    else if ( j_Json::Value::isArray((Json::Value *)&v26) == 1 )
      j_Json::Value::begin((Json::Value *)&v23, (int)&v26);
      while ( 1 )
        j_Json::Value::end((Json::Value *)&v22, (int)&v26);
        if ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v23, (const Json::ValueIteratorBase *)&v22) == 1 )
          break;
        v10 = j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v23);
        sub_21E94B4((void **)&v20, (const char *)&unk_257BC67);
        j_Json::Value::asString(&v21, v10, &v20);
        v11 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v20 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        j_loadBlock((unsigned int *)&v21, v3);
        v12 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v21 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v23);
  }
  return j_Json::Value::~Value((Json::Value *)&v26);
}
