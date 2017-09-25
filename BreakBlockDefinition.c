

void __fastcall BreakBlockDefinition::~BreakBlockDefinition(BreakBlockDefinition *this)
{
  BreakBlockDefinition *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r12@4
  signed int v7; // r1@6
  unsigned int *v8; // r12@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_271E0D0;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BreakBlockDefinition *)((char *)v1 + 8));
  v4 = *((_DWORD *)v1 + 1);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_operator delete((void *)v1);
}


Json::Value *__fastcall BreakBlockDefinition::load(int a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  int v3; // r4@1
  const Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  int v6; // r5@2
  void *v7; // r0@2
  void *v8; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  int v14; // [sp+8h] [bp-30h]@2
  int v15; // [sp+Ch] [bp-2Ch]@2
  char v16; // [sp+10h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  v4 = (const Json::Value *)j_Json::Value::operator[](a2, "block_pos");
  v5 = j_Json::Value::Value((Json::Value *)&v16, v4);
  if ( !j_JsonUtil::parseValue<BlockPos>(v5, v3 + 16) )
  {
    v6 = j_Json::Value::operator[](v2, "block_pos_id");
    sub_21E94B4((void **)&v14, "target_block_pos");
    j_Json::Value::asString(&v15, v6, &v14);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v3 + 28),
      &v15);
    v7 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v15 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v14 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  }
  return j_Json::Value::~Value((Json::Value *)&v16);
}


void __fastcall BreakBlockDefinition::~BreakBlockDefinition(BreakBlockDefinition *this)
{
  BreakBlockDefinition::~BreakBlockDefinition(this);
}


BreakBlockDefinition *__fastcall BreakBlockDefinition::~BreakBlockDefinition(BreakBlockDefinition *this)
{
  BreakBlockDefinition *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r12@4
  signed int v8; // r1@6
  unsigned int *v9; // r12@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_271E0D0;
  v2 = *((_DWORD *)this + 7);
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
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BreakBlockDefinition *)((char *)v1 + 8));
  v4 = *((_DWORD *)v1 + 1);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}
