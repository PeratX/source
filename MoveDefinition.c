

void __fastcall MoveDefinition::~MoveDefinition(MoveDefinition *this)
{
  MoveDefinition::~MoveDefinition(this);
}


void __fastcall MoveDefinition::~MoveDefinition(MoveDefinition *this)
{
  MoveDefinition *v1; // r0@1

  v1 = j_MoveDefinition::~MoveDefinition(this);
  j_j_j__ZdlPv_7((void *)v1);
}


MoveDefinition *__fastcall MoveDefinition::~MoveDefinition(MoveDefinition *this)
{
  MoveDefinition *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r1@6
  void *v13; // r0@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  unsigned int *v17; // r2@12
  signed int v18; // r1@14
  unsigned int *v19; // r2@16
  signed int v20; // r1@18
  unsigned int *v21; // r2@20
  signed int v22; // r1@22
  unsigned int *v23; // r2@24
  signed int v24; // r1@26
  unsigned int *v25; // r2@28
  signed int v26; // r1@30

  v1 = this;
  *(_DWORD *)this = &off_271E1F0;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 7);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v4 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 6);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v6 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 5);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v8 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 4);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v10 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((MoveDefinition *)((char *)v1 + 8));
  v12 = *((_DWORD *)v1 + 1);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v12 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  return v1;
}


Json::Value *__fastcall MoveDefinition::load(int a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  int v3; // r4@1
  const Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  int v6; // r7@2
  void *v7; // r0@2
  void *v8; // r0@3
  const Json::Value *v9; // r0@4
  int v10; // r7@5
  void *v11; // r0@5
  void *v12; // r0@6
  const Json::Value *v13; // r0@7
  int v14; // r5@8
  void *v15; // r0@8
  void *v16; // r0@9
  unsigned int *v18; // r2@11
  signed int v19; // r1@13
  unsigned int *v20; // r2@15
  signed int v21; // r1@17
  unsigned int *v22; // r2@19
  signed int v23; // r1@21
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  unsigned int *v26; // r2@27
  signed int v27; // r1@29
  unsigned int *v28; // r2@31
  signed int v29; // r1@33
  int v30; // [sp+8h] [bp-48h]@8
  int v31; // [sp+Ch] [bp-44h]@8
  int v32; // [sp+14h] [bp-3Ch]@5
  int v33; // [sp+18h] [bp-38h]@5
  int v34; // [sp+20h] [bp-30h]@2
  int v35; // [sp+24h] [bp-2Ch]@2
  char v36; // [sp+28h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  v4 = (const Json::Value *)j_Json::Value::operator[](a2, "desired_direction");
  v5 = j_Json::Value::Value((Json::Value *)&v36, v4);
  if ( !j_JsonUtil::parseValue<std::string>(v5, (int *)(v3 + 16)) )
  {
    v6 = j_Json::Value::operator[](v2, "direction_id");
    sub_21E94B4((void **)&v34, "direction");
    j_Json::Value::asString(&v35, v6, &v34);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v3 + 20),
      &v35);
    v7 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
    {
      v18 = (unsigned int *)(v35 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v34 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (const Json::Value *)j_Json::Value::operator[](v2, "desired_second_direction");
  j_Json::Value::operator=((int)&v36, v9);
  if ( !j_JsonUtil::parseValue<std::string>((Json::Value *)&v36, (int *)(v3 + 24)) )
    v10 = j_Json::Value::operator[](v2, "second_direction_id");
    sub_21E94B4((void **)&v32, "second_direction");
    j_Json::Value::asString(&v33, v10, &v32);
      (int *)(v3 + 28),
      &v33);
    v11 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v33 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v32 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
  v13 = (const Json::Value *)j_Json::Value::operator[](v2, "max_number_of_ticks");
  j_Json::Value::operator=((int)&v36, v13);
  if ( !j_JsonUtil::parseValue<std::string>((Json::Value *)&v36, (int *)(v3 + 16)) )
    v14 = j_Json::Value::operator[](v2, "number_of_ticks_id");
    sub_21E94B4((void **)&v30, "number_of_ticks");
    j_Json::Value::asString(&v31, v14, &v30);
      (int *)(v3 + 36),
      &v31);
    v15 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v31 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v30 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  return j_Json::Value::~Value((Json::Value *)&v36);
}
