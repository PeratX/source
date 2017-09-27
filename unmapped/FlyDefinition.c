

void __fastcall FlyDefinition::~FlyDefinition(FlyDefinition *this)
{
  FlyDefinition::~FlyDefinition(this);
}


void __fastcall FlyDefinition::~FlyDefinition(FlyDefinition *this)
{
  FlyDefinition *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_271E1A8;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((FlyDefinition *)((char *)v1 + 8));
  v6 = *((_DWORD *)v1 + 1);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v6 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  j_operator delete((void *)v1);
}


FlyDefinition *__fastcall FlyDefinition::~FlyDefinition(FlyDefinition *this)
{
  FlyDefinition *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_271E1A8;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((FlyDefinition *)((char *)v1 + 8));
  v6 = *((_DWORD *)v1 + 1);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v1;
}


Json::Value *__fastcall FlyDefinition::load(int a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  int v3; // r4@1
  const Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  int v6; // r7@2
  void *v7; // r0@2
  void *v8; // r0@3
  const Json::Value *v9; // r0@4
  int v10; // r5@5
  void *v11; // r0@5
  void *v12; // r0@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  int v22; // [sp+4h] [bp-3Ch]@5
  int v23; // [sp+8h] [bp-38h]@5
  int v24; // [sp+10h] [bp-30h]@2
  int v25; // [sp+14h] [bp-2Ch]@2
  char v26; // [sp+18h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  v4 = (const Json::Value *)j_Json::Value::operator[](a2, "should_be_flying_bool");
  v5 = j_Json::Value::Value((Json::Value *)&v26, v4);
  if ( !j_JsonUtil::parseValue<bool>(v5, (_BYTE *)(v3 + 16)) )
  {
    v6 = j_Json::Value::operator[](v2, "should_be_flying_id");
    sub_21E94B4((void **)&v24, "should_be_flying");
    j_Json::Value::asString(&v25, v6, &v24);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v3 + 20),
      &v25);
    v7 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v24 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (const Json::Value *)j_Json::Value::operator[](v2, "should_throw_event_if_no_state_change_necessary_bool");
  j_Json::Value::operator=((int)&v26, v9);
  if ( !j_JsonUtil::parseValue<bool>((Json::Value *)&v26, (_BYTE *)(v3 + 16)) )
    v10 = j_Json::Value::operator[](v2, "should_throw_event_if_no_state_change_necessary_id");
    sub_21E94B4((void **)&v22, "should_throw_event_if_no_state_change_necessary");
    j_Json::Value::asString(&v23, v10, &v22);
      (int *)(v3 + 28),
      &v23);
    v11 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v23 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v22 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
  return j_Json::Value::~Value((Json::Value *)&v26);
}
