

RepeatUntilSuccessDefinition *__fastcall RepeatUntilSuccessDefinition::~RepeatUntilSuccessDefinition(RepeatUntilSuccessDefinition *this)
{
  RepeatUntilSuccessDefinition *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  unsigned int *v10; // r12@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_271E130;
  v2 = *((_DWORD *)this + 6);
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
  *(_DWORD *)v1 = &off_271E178;
  v4 = *((_DWORD *)v1 + 4);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((RepeatUntilSuccessDefinition *)((char *)v1 + 8));
  v5 = *((_DWORD *)v1 + 1);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  return v1;
}


void __fastcall RepeatUntilSuccessDefinition::~RepeatUntilSuccessDefinition(RepeatUntilSuccessDefinition *this)
{
  RepeatUntilSuccessDefinition *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v7; // r12@6
  signed int v8; // r1@8
  unsigned int *v9; // r12@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_271E130;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_271E178;
  v4 = *((_DWORD *)v1 + 4);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((RepeatUntilSuccessDefinition *)((char *)v1 + 8));
  v5 = *((_DWORD *)v1 + 1);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v5 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  j_operator delete((void *)v1);
}


void __fastcall RepeatUntilSuccessDefinition::~RepeatUntilSuccessDefinition(RepeatUntilSuccessDefinition *this)
{
  RepeatUntilSuccessDefinition::~RepeatUntilSuccessDefinition(this);
}


Json::Value *__fastcall RepeatUntilSuccessDefinition::load(int a1, Json::Value *a2, unsigned __int64 *a3)
{
  Json::Value *v3; // r6@1
  int v4; // r4@1
  unsigned __int64 *v5; // r5@1
  const Json::Value *v6; // r0@1
  Json::Value *v7; // r0@1
  int v8; // r7@2
  void *v9; // r0@2
  void *v10; // r0@3
  int v11; // r1@4
  int v12; // r0@4
  unsigned int *v14; // r2@7
  signed int v15; // r1@9
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  int v18; // [sp+0h] [bp-50h]@4
  char v19; // [sp+8h] [bp-48h]@4
  int v20; // [sp+18h] [bp-38h]@4
  int v21; // [sp+20h] [bp-30h]@2
  int v22; // [sp+24h] [bp-2Ch]@2
  char v23; // [sp+28h] [bp-28h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (const Json::Value *)j_Json::Value::operator[](a2, "desired_max_number_of_attempts");
  v7 = j_Json::Value::Value((Json::Value *)&v23, v6);
  if ( !j_JsonUtil::parseValue<int>(v7, (int *)(v4 + 20)) )
  {
    v8 = j_Json::Value::operator[](v3, "max_number_of_attempts_id");
    sub_21E94B4((void **)&v21, "max_number_of_attempts");
    j_Json::Value::asString(&v22, v8, &v21);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v4 + 24),
      &v22);
    v9 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v22 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
    }
    v10 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v21 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
  }
  j_Json::Value::Value((Json::Value *)&v19, v3);
  j_BehaviorDefinition::getTreeDefinition((BehaviorDefinition *)&v18, v4);
  j_DecoratorDefinition::_decoratorLoadChildBehavior(&v20, (Json::Value *)&v19, v5, (int)&v18);
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BehaviorTreeDefinitionPtr *)&v18);
  j_Json::Value::~Value((Json::Value *)&v19);
  v11 = v20;
  v20 = 0;
  v12 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 16) = v11;
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  return j_Json::Value::~Value((Json::Value *)&v23);
}
