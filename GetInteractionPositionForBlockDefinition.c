

GetInteractionPositionForBlockDefinition *__fastcall GetInteractionPositionForBlockDefinition::~GetInteractionPositionForBlockDefinition(GetInteractionPositionForBlockDefinition *this)
{
  GetInteractionPositionForBlockDefinition *v1; // r5@1
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
  *(_DWORD *)this = &off_271E1C0;
  v2 = *((_DWORD *)this + 15);
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
  v4 = *((_DWORD *)v1 + 13);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v4 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 12);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v6 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 11);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v8 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 7);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v10 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((GetInteractionPositionForBlockDefinition *)((char *)v1 + 8));
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


void __fastcall GetInteractionPositionForBlockDefinition::~GetInteractionPositionForBlockDefinition(GetInteractionPositionForBlockDefinition *this)
{
  GetInteractionPositionForBlockDefinition::~GetInteractionPositionForBlockDefinition(this);
}


void __fastcall GetInteractionPositionForBlockDefinition::~GetInteractionPositionForBlockDefinition(GetInteractionPositionForBlockDefinition *this)
{
  GetInteractionPositionForBlockDefinition *v1; // r0@1

  v1 = j_GetInteractionPositionForBlockDefinition::~GetInteractionPositionForBlockDefinition(this);
  j_j_j__ZdlPv_7((void *)v1);
}


Json::Value *__fastcall GetInteractionPositionForBlockDefinition::load(int a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  int v3; // r4@1
  const Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  int v6; // r6@2
  void *v7; // r0@2
  void *v8; // r0@3
  const Json::Value *v9; // r0@4
  int v10; // r6@5
  void *v11; // r0@5
  void *v12; // r0@6
  const Json::Value *v13; // r0@7
  int v14; // r6@8
  void *v15; // r0@8
  void *v16; // r0@9
  const Json::Value *v17; // r0@10
  int v18; // r5@11
  void *v19; // r0@11
  void *v20; // r0@12
  unsigned int *v22; // r2@14
  signed int v23; // r1@16
  unsigned int *v24; // r2@18
  signed int v25; // r1@20
  unsigned int *v26; // r2@22
  signed int v27; // r1@24
  unsigned int *v28; // r2@26
  signed int v29; // r1@28
  unsigned int *v30; // r2@30
  signed int v31; // r1@32
  unsigned int *v32; // r2@34
  signed int v33; // r1@36
  unsigned int *v34; // r2@38
  signed int v35; // r1@40
  unsigned int *v36; // r2@42
  signed int v37; // r1@44
  int v38; // [sp+4h] [bp-54h]@11
  int v39; // [sp+8h] [bp-50h]@11
  int v40; // [sp+10h] [bp-48h]@8
  int v41; // [sp+14h] [bp-44h]@8
  int v42; // [sp+1Ch] [bp-3Ch]@5
  int v43; // [sp+20h] [bp-38h]@5
  int v44; // [sp+28h] [bp-30h]@2
  int v45; // [sp+2Ch] [bp-2Ch]@2
  char v46; // [sp+30h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  v4 = (const Json::Value *)j_Json::Value::operator[](a2, "target_block_pos");
  v5 = j_Json::Value::Value((Json::Value *)&v46, v4);
  if ( !j_JsonUtil::parseValue<BlockPos>(v5, v3 + 16) )
  {
    v6 = j_Json::Value::operator[](v2, "target_block_pos_id");
    sub_21E94B4((void **)&v44, "target_block_pos");
    j_Json::Value::asString(&v45, v6, &v44);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v3 + 28),
      &v45);
    v7 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
    {
      v22 = (unsigned int *)(v45 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v44 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (const Json::Value *)j_Json::Value::operator[](v2, "anchor_block_pos");
  j_Json::Value::operator=((int)&v46, v9);
  if ( !j_JsonUtil::parseValue<BlockPos>((Json::Value *)&v46, v3 + 32) )
    v10 = j_Json::Value::operator[](v2, "anchor_block_pos_id");
    sub_21E94B4((void **)&v42, "anchor_block_pos");
    j_Json::Value::asString(&v43, v10, &v42);
      (int *)(v3 + 44),
      &v43);
    v11 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v43 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v42 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
  v13 = (const Json::Value *)j_Json::Value::operator[](v2, "facing_string");
  j_Json::Value::operator=((int)&v46, v13);
  if ( !j_JsonUtil::parseValue<std::string>((Json::Value *)&v46, (int *)(v3 + 48)) )
    v14 = j_Json::Value::operator[](v2, "facing_string_id");
    sub_21E94B4((void **)&v40, "facing_string");
    j_Json::Value::asString(&v41, v14, &v40);
      (int *)(v3 + 52),
      &v41);
    v15 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v41 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v40 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  v17 = (const Json::Value *)j_Json::Value::operator[](v2, "max_search_distance");
  j_Json::Value::operator=((int)&v46, v17);
  if ( !j_JsonUtil::parseValue<int>((Json::Value *)&v46, (int *)(v3 + 56)) )
    v18 = j_Json::Value::operator[](v2, "max_search_distance_id");
    sub_21E94B4((void **)&v38, "max_search_distance");
    j_Json::Value::asString(&v39, v18, &v38);
      (int *)(v3 + 60),
      &v39);
    v19 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v39 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v20 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v38 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
  return j_Json::Value::~Value((Json::Value *)&v46);
}
