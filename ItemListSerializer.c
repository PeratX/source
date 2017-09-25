

signed int __fastcall ItemListSerializer::loadNBTSet(const void **a1, int a2, int a3)
{
  int v3; // r5@1
  const void **v4; // r6@1
  int v5; // r9@1
  signed int result; // r0@1
  ListTag *v7; // r0@2
  ListTag *v8; // r5@2
  int v9; // r6@3
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  int v12; // r0@12
  void *v13; // r0@12
  int v14; // [sp+0h] [bp-30h]@4

  v3 = a3;
  v4 = a1;
  v5 = a2;
  result = j_CompoundTag::contains(a3, a1, 9);
  if ( result == 1 )
  {
    v7 = (ListTag *)j_CompoundTag::getList(v3, v4);
    v8 = v7;
    result = j_ListTag::size(v7);
    if ( result >= 1 )
    {
      v9 = 0;
      do
      {
        v12 = j_ListTag::get(v8, v9);
        (*(void (__fastcall **)(int *))(*(_DWORD *)v12 + 20))(&v14);
        j_loadItem((unsigned int *)&v14, v5);
        v13 = (void *)(v14 - 12);
        if ( (int *)(v14 - 12) != &dword_28898C0 )
        {
          v10 = (unsigned int *)(v14 - 4);
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
            j_j_j_j__ZdlPv_9(v13);
        }
        ++v9;
        result = j_ListTag::size(v8);
      }
      while ( v9 < result );
    }
  }
  return result;
}


int __fastcall ItemListSerializer::saveNBTSet(const void **a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r9@1
  void *v5; // r4@1
  int v6; // r7@1
  int i; // r5@1
  int v8; // r8@2
  _DWORD *v9; // r6@2
  int result; // r0@5
  const void **v11; // [sp+0h] [bp-30h]@1
  int v12; // [sp+4h] [bp-2Ch]@5
  _DWORD *v13; // [sp+8h] [bp-28h]@2

  v11 = a1;
  v3 = a3;
  v4 = a2;
  v5 = j_operator new(0x14u);
  j_ListTag::ListTag((int)v5);
  v6 = *(_DWORD *)(v3 + 12);
  for ( i = v3 + 4; v6 != i; v6 = sub_21D4820(v6) )
  {
    v8 = *(_DWORD *)(v6 + 16);
    v9 = j_operator new(8u);
    j_StringTag::StringTag(v9);
    v13 = v9;
    j_ListTag::add((int)v5, (int *)&v13);
    if ( v13 )
      (*(void (__cdecl **)(_DWORD *))(*v13 + 4))(v13);
    v13 = 0;
  }
  v12 = (int)v5;
  j_CompoundTag::put(v4, v11, &v12);
  result = v12;
  if ( v12 )
    result = (*(int (**)(void))(*(_DWORD *)v12 + 4))();
  return result;
}


Json::Value *__fastcall ItemListSerializer::loadJSONSet(const char **a1, int a2, Json::Value *a3)
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
      j_loadItem((unsigned int *)&v25, v3);
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
        j_loadItem((unsigned int *)&v21, v3);
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
