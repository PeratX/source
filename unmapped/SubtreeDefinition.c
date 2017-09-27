

void __fastcall SubtreeDefinition::~SubtreeDefinition(SubtreeDefinition *this)
{
  SubtreeDefinition *v1; // r0@1

  v1 = j_SubtreeDefinition::~SubtreeDefinition(this);
  j_j_j__ZdlPv_7((void *)v1);
}


Json::Value *__fastcall SubtreeDefinition::load(int a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@2
  const Json::Value *v7; // r0@3
  Json::Value *v8; // r0@3
  Json::Value *v10; // r0@11
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  int v15; // [sp+0h] [bp-48h]@10
  char v16; // [sp+8h] [bp-40h]@9
  char v17; // [sp+10h] [bp-38h]@3
  int v18; // [sp+28h] [bp-20h]@1
  int v19; // [sp+2Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  v4 = j_Json::Value::operator[](a2, "subtree_id");
  sub_21E94B4((void **)&v18, (const char *)&unk_257BC67);
  j_Json::Value::asString(&v19, v4, &v18);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 16),
    &v19);
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (const Json::Value *)j_Json::Value::operator[](v2, "data_items");
  v8 = j_Json::Value::Value((Json::Value *)&v17, v7);
  if ( !j_Json::Value::isNull(v8) )
    if ( j_Json::Value::isObject((Json::Value *)&v17) || j_Json::Value::isString((Json::Value *)&v17) == 1 )
      sub_1A54A1C(v3, (Json::Value *)&v17);
    else if ( j_Json::Value::isArray((Json::Value *)&v17) == 1 )
      j_Json::Value::begin((Json::Value *)&v16, (int)&v17);
      while ( 1 )
      {
        j_Json::Value::end((Json::Value *)&v15, (int)&v17);
        if ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v16, (const Json::ValueIteratorBase *)&v15) == 1 )
          break;
        v10 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v16);
        sub_1A54A1C(v3, v10);
        j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v16);
      }
  return j_Json::Value::~Value((Json::Value *)&v17);
}


SubtreeDefinition *__fastcall SubtreeDefinition::~SubtreeDefinition(SubtreeDefinition *this)
{
  SubtreeDefinition *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20
  int v11; // r1@25
  void *v12; // r0@25
  int v13; // r1@26
  void *v14; // r0@26
  unsigned int *v16; // r2@28
  signed int v17; // r1@30
  unsigned int *v18; // r2@32
  signed int v19; // r1@34

  v1 = this;
  *(_DWORD *)this = &off_271E238;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 20);
  if ( v2 != v3 )
  {
    do
    {
      v8 = *(_DWORD *)(v2 + 4);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (int *)(*(_DWORD *)v2 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 5);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  v11 = *((_DWORD *)v1 + 4);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((SubtreeDefinition *)((char *)v1 + 8));
  v13 = *((_DWORD *)v1 + 1);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v13 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return v1;
}


void __fastcall SubtreeDefinition::~SubtreeDefinition(SubtreeDefinition *this)
{
  SubtreeDefinition::~SubtreeDefinition(this);
}
