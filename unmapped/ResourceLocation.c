

Json::Value *__fastcall ResourceLocation::serialize(ResourceLocation *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  ResourceLocation *v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  int v7; // [sp+0h] [bp-38h]@1
  char v8; // [sp+10h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = j_Json::Value::operator[](a2, "fs");
  j_Json::Value::Value((Json::Value *)&v8, *((_DWORD *)v3 + 1));
  j_Json::Value::operator=(v4, (const Json::Value *)&v8);
  j_Json::Value::~Value((Json::Value *)&v8);
  v5 = j_Json::Value::operator[](v2, "path");
  j_Json::Value::Value((int)&v7, (const char **)v3);
  j_Json::Value::operator=(v5, (const Json::Value *)&v7);
  return j_Json::Value::~Value((Json::Value *)&v7);
}


Json::Value *__fastcall ResourceLocation::deserialize(ResourceLocation *this, const Json::Value *a2)
{
  const Json::Value *v2; // r5@1
  ResourceLocation *v3; // r4@1
  const Json::Value *v4; // r0@1
  const Json::Value *v5; // r0@1
  void *v6; // r0@4
  void *v7; // r0@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  int v13; // [sp+8h] [bp-40h]@4
  int v14; // [sp+Ch] [bp-3Ch]@4
  char v15; // [sp+10h] [bp-38h]@1
  char v16; // [sp+20h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = (const Json::Value *)j_Json::Value::operator[]((int)a2, "fs");
  j_Json::Value::Value((Json::Value *)&v16, v4);
  v5 = (const Json::Value *)j_Json::Value::operator[]((int)v2, "path");
  j_Json::Value::Value((Json::Value *)&v15, v5);
  if ( !j_Json::Value::isNull((Json::Value *)&v16) )
    *((_DWORD *)v3 + 1) = j_Json::Value::asInt((Json::Value *)&v16, 0);
  if ( !j_Json::Value::isNull((Json::Value *)&v15) )
  {
    sub_21E94B4((void **)&v13, (const char *)&unk_257BC67);
    j_Json::Value::asString(&v14, (int)&v15, &v13);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v3,
      &v14);
    v6 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v14 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v13 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
  }
  j_Json::Value::~Value((Json::Value *)&v15);
  return j_Json::Value::~Value((Json::Value *)&v16);
}


int __fastcall ResourceLocation::getFullPath(ResourceLocation *this, int a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int v4; // r3@1
  int v5; // r1@2
  int *v6; // r2@2
  int *v7; // r0@3
  void **v8; // r0@12
  int v9; // r0@13
  int v10; // r0@14
  unsigned int v11; // r2@14
  int v12; // r1@17
  int v13; // r2@17
  int v14; // r3@17
  void *v15; // r0@19
  int result; // r0@21
  unsigned int *v17; // r2@23
  signed int v18; // r1@25
  int v19; // [sp+4h] [bp-434h]@14
  int v20; // [sp+8h] [bp-430h]@17
  int v21; // [sp+Ch] [bp-42Ch]@17
  int v22; // [sp+10h] [bp-428h]@17
  int v23; // [sp+14h] [bp-424h]@17
  char v24; // [sp+1Ch] [bp-41Ch]@17
  int v25; // [sp+20h] [bp-418h]@17
  RakNet *v26; // [sp+424h] [bp-14h]@1

  v2 = (int *)this;
  v3 = a2;
  v26 = _stack_chk_guard;
  v4 = dword_287E71C;
  if ( dword_287E71C )
  {
    v5 = *(_DWORD *)(a2 + 4);
    v6 = &dword_287E718;
    do
    {
      v7 = (int *)v4;
      while ( v7[4] < v5 )
      {
        v7 = (int *)v7[3];
        if ( !v7 )
        {
          v7 = v6;
          goto LABEL_10;
        }
      }
      v4 = v7[2];
      v6 = v7;
    }
    while ( v4 );
  }
  else
    v7 = &dword_287E718;
LABEL_10:
  if ( v7 == &dword_287E718 || *(_DWORD *)(v3 + 4) < v7[4] )
    sub_21E8AF4(v2, (int *)v3);
    v8 = &_stack_chk_guard_ptr;
    goto LABEL_21;
  v9 = v7[5];
  if ( !*(_DWORD *)(v9 + 12) )
    sub_21E5F48();
  (*(void (__fastcall **)(int *, int))(v9 + 16))(&v19, v9 + 4);
  v10 = v19;
  v11 = *(_DWORD *)(v19 - 12);
  if ( !v11 )
    goto LABEL_17;
  if ( sub_21E7CB0((int *)v3, 0, v11, (const void **)&v19) )
    v10 = v19;
LABEL_17:
    v12 = *(_DWORD *)v3;
    v13 = *(_DWORD *)(v10 - 12);
    v14 = *(_DWORD *)(*(_DWORD *)v3 - 12);
    v20 = v10;
    v21 = v13;
    v22 = v12;
    v23 = v14;
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v24, (int)&v20, 2);
    sub_21E94B4((void **)v2, (const char *)&v25);
    goto LABEL_19;
  sub_21E8AF4(v2, (int *)v3);
LABEL_19:
  v15 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v8 = &_stack_chk_guard_ptr;
LABEL_21:
  result = *(_DWORD *)*v8 - (_DWORD)v26;
  if ( result )
    j___stack_chk_fail_0(result);
  return result;
}


ResourceLocation *__fastcall ResourceLocation::~ResourceLocation(ResourceLocation *this)
{
  ResourceLocation *v1; // r5@1
  int v2; // r1@1
  int *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *(_DWORD *)this;
  v3 = (int *)(*(_DWORD *)this - 12);
  if ( v3 != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  return v1;
}
