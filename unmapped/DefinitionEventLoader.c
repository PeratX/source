

void __fastcall DefinitionEventLoader::loadEvent(int a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  int v3; // r4@1
  const Json::Value *v4; // r7@1
  const Json::Value *v5; // r6@1
  Json::Value *v6; // r6@6
  Json::Value *v7; // r0@7
  void *v8; // r0@8
  Json::Value *v9; // r6@11
  Json::Value *v10; // r0@12
  void *v11; // r0@13
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  signed int v14; // r0@19
  Json::Value *v15; // r0@23
  const Json::Value *v21; // r0@25
  void *v22; // r0@26
  unsigned int *v23; // r2@28
  signed int v24; // r1@30
  unsigned int *v25; // r2@36
  signed int v26; // r1@38
  int v27; // [sp+4h] [bp-FCh]@23
  int v28; // [sp+Ch] [bp-F4h]@9
  int v29; // [sp+14h] [bp-ECh]@4
  char v30; // [sp+18h] [bp-E8h]@20
  char v31; // [sp+28h] [bp-D8h]@20
  char v32; // [sp+78h] [bp-88h]@18
  char v33; // [sp+8Ch] [bp-74h]@18
  char v34; // [sp+DCh] [bp-24h]@4
  char v35; // [sp+E0h] [bp-20h]@9
  char v36; // [sp+E8h] [bp-18h]@23

  v2 = a2;
  v3 = a1;
  j_DefinitionEvent::DefinitionEvent(a1);
  v4 = (const Json::Value *)j_Json::Value::operator[](v2, "randomize");
  v5 = (const Json::Value *)j_Json::Value::operator[](v2, "sequence");
  if ( !j_Json::Value::isNull(v4) )
  {
    j_Json::Value::Value((Json::Value *)&v32, v4);
    j_DefinitionEventLoader::loadCollection((int)&v33, (Json::Value *)&v32);
    j_DefinitionEvent::operator=(v3, (int)&v33);
    j_DefinitionEvent::~DefinitionEvent((DefinitionEvent *)&v33);
    j_Json::Value::~Value((Json::Value *)&v32);
    if ( (unsigned int)*(_QWORD *)(v3 + 68) == *(_QWORD *)(v3 + 68) >> 32 )
      goto LABEL_23;
    v14 = 2;
LABEL_22:
    *(_DWORD *)(v3 + 40) = v14;
    goto LABEL_23;
  }
  if ( !j_Json::Value::isNull(v5) )
    j_Json::Value::Value((Json::Value *)&v30, v5);
    j_DefinitionEventLoader::loadCollection((int)&v31, (Json::Value *)&v30);
    j_DefinitionEvent::operator=(v3, (int)&v31);
    j_DefinitionEvent::~DefinitionEvent((DefinitionEvent *)&v31);
    j_Json::Value::~Value((Json::Value *)&v30);
    v14 = 1;
    goto LABEL_22;
  if ( !j_Json::Value::isNull(v2) )
    *(_DWORD *)(v3 + 40) = 0;
    sub_21E94B4((void **)&v29, "add");
    j_JsonUtil::ScopeMarker::ScopeMarker(&v34, &v29);
    if ( !j_Json::Value::isNull(v2) && j_Json::Value::isMember((int)v2, (const char **)&v29) == 1 )
    {
      v6 = (Json::Value *)j_Json::Value::operator[](v2, (const char **)&v29);
      if ( !j_Json::Value::isNull(v6) )
      {
        v7 = (Json::Value *)j_Json::Value::operator[](v6, "component_groups");
        j_JsonUtil::parseStrings<std::back_insert_iterator<std::vector<std::string,std::allocator<std::string>>>>(
          v7,
          v3 + 44);
      }
    }
    j_JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v34);
    v8 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v28, "remove");
    j_JsonUtil::ScopeMarker::ScopeMarker(&v35, &v28);
    if ( !j_Json::Value::isNull(v2) && j_Json::Value::isMember((int)v2, (const char **)&v28) == 1 )
      v9 = (Json::Value *)j_Json::Value::operator[](v2, (const char **)&v28);
      if ( !j_Json::Value::isNull(v9) )
        v10 = (Json::Value *)j_Json::Value::operator[](v9, "component_groups");
          v10,
          v3 + 56);
    j_JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v35);
    v11 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v28 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
LABEL_23:
  v15 = (Json::Value *)j_Json::Value::operator[](v2, "weight");
  _R0 = j_Json::Value::asFloat(v15, *(float *)v3);
  __asm
    VMOV            S0, R0
    VABS.F32        S0, S0
    VSTR            S0, [R4]
  sub_21E94B4((void **)&v27, "filters");
  j_JsonUtil::ScopeMarker::ScopeMarker(&v36, &v27);
  if ( !j_Json::Value::isNull(v2) && j_Json::Value::isMember((int)v2, (const char **)&v27) == 1 )
    v21 = (const Json::Value *)j_Json::Value::operator[](v2, (const char **)&v27);
    j_FilterGroup::parse((FilterGroup *)(v3 + 4), v21);
  j_JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v36);
  v22 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


int __fastcall DefinitionEventLoader::loadCollection(int a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  int v3; // r9@1
  int result; // r0@1
  Json::Value *v5; // r0@4
  const Json::Value *v6; // r0@5
  __int64 v7; // r0@6
  int v8; // [sp+0h] [bp-90h]@5
  char v9; // [sp+10h] [bp-80h]@5
  int v10; // [sp+38h] [bp-58h]@5
  char v11; // [sp+60h] [bp-30h]@3
  char v12; // [sp+68h] [bp-28h]@2

  v2 = a2;
  v3 = a1;
  j_DefinitionEvent::DefinitionEvent(a1);
  result = j_Json::Value::isArray(v2);
  if ( result )
  {
    j_Json::Value::begin((Json::Value *)&v12, (int)v2);
    while ( 1 )
    {
      j_Json::Value::end((Json::Value *)&v11, (int)v2);
      result = j_Json::ValueIteratorBase::isEqual(
                 (Json::ValueIteratorBase *)&v12,
                 (const Json::ValueIteratorBase *)&v11);
      if ( result == 1 )
        break;
      v5 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v12);
      if ( j_Json::Value::isObject(v5) == 1 )
      {
        v6 = (const Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v12);
        j_Json::Value::Value((Json::Value *)&v8, v6);
        j_DefinitionEventLoader::loadEvent((int)&v9, (Json::Value *)&v8);
        j_Json::Value::~Value((Json::Value *)&v8);
        if ( v10 != 3 )
        {
          v7 = *(_QWORD *)(v3 + 72);
          if ( (_DWORD)v7 == HIDWORD(v7) )
          {
            j_std::vector<DefinitionEvent,std::allocator<DefinitionEvent>>::_M_emplace_back_aux<DefinitionEvent const&>(
              (unsigned __int64 *)(v3 + 68),
              (int)&v9);
          }
          else
            j_DefinitionEvent::DefinitionEvent(v7, (int)&v9);
            *(_DWORD *)(v3 + 72) += 80;
        }
        j_DefinitionEvent::~DefinitionEvent((DefinitionEvent *)&v9);
      }
      j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v12);
    }
  }
  return result;
}


void __fastcall DefinitionEventLoader::loadEvent(int a1, Json::Value *a2)
{
  DefinitionEventLoader::loadEvent(a1, a2);
}
