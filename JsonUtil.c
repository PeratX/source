

int __fastcall JsonUtil::ParseHandler::getMessages(JsonUtil::ParseHandler *this, int a2)
{
  return std::vector<JsonUtil::Message,std::allocator<JsonUtil::Message>>::vector(
           (int)this,
           (unsigned __int64 *)(a2 + 16));
}


void __fastcall JsonUtil::patchJson(JsonUtil *this, const Json::Value *a2, const Json::Value *a3, int a4)
{
  JsonUtil::patchJson(this, a2, a3, a4);
}


_BYTE *__fastcall JsonUtil::ScopeMarker::ScopeMarker(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  *a2 = 0;
  return result;
}


void __fastcall JsonUtil::warningMessage(int *a1)
{
  j_j_j__ZN8JsonUtil12ParseHandler11postMessageERKSsNS_15MessageSeverityE((int)&dword_27F3968, a1, 2);
}


int *__fastcall JsonUtil::ParseHandler::get(JsonUtil::ParseHandler *this)
{
  return &dword_27F3968;
}


void __fastcall JsonUtil::logMessage(int *a1)
{
  j_j_j__ZN8JsonUtil12ParseHandler11postMessageERKSsNS_15MessageSeverityE((int)&dword_27F3968, a1, 1);
}


signed int __fastcall JsonUtil::parseRange(JsonUtil *this, const Json::Value *a2, int *a3, int *a4)
{
  int *v4; // r4@1
  const Json::Value *v5; // r5@1
  Json::Value *v6; // r7@1
  signed int v7; // r6@2
  void *v8; // r0@4
  void *v9; // r0@5
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int v12; // r0@11
  Json::Value *v13; // r0@13
  Json::Value *v14; // r0@13
  int v15; // r0@13
  Json::Value *v17; // r0@20
  int v18; // r0@20
  Json::Value *v19; // r0@21
  int v20; // r0@21
  int v21; // r1@21
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  int v24; // [sp+4h] [bp-2Ch]@4
  int v25; // [sp+8h] [bp-28h]@4

  v4 = a3;
  v5 = a2;
  v6 = this;
  if ( Json::Value::isNull(this) )
  {
    v7 = 0;
  }
  else if ( Json::Value::isString(v6) == 1 )
    sub_21E94B4((void **)&v24, (const char *)&unk_257BC67);
    Json::Value::asString(&v25, (int)v6, &v24);
    v7 = Util::parseRange<int>(&v25, v5, v4);
    v8 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
    {
      v22 = (unsigned int *)(v25 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
    v9 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v24 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  else
    if ( Json::Value::isNumeric(v6) == 1 )
      v12 = Json::Value::asInt(v6, 0);
      *v4 = v12;
      *(_DWORD *)v5 = v12;
    else if ( Json::Value::isObject(v6) == 1 )
      v13 = (Json::Value *)Json::Value::operator[]((int)v6, "min");
      *(_DWORD *)v5 = Json::Value::asInt(v13, *(_DWORD *)v5);
      v14 = (Json::Value *)Json::Value::operator[]((int)v6, "max");
      v15 = Json::Value::asInt(v14, *v4);
      if ( v15 < *(_DWORD *)v5 )
        v15 = *(_DWORD *)v5;
      *v4 = v15;
    else
      if ( Json::Value::isArray(v6) != 1 )
        return 0;
      if ( !Json::Value::size(v6) )
      v17 = (Json::Value *)Json::Value::operator[]((int)v6, 0);
      v18 = Json::Value::asInt(v17, 0);
      *(_DWORD *)v5 = v18;
      *v4 = v18;
      if ( (unsigned int)Json::Value::size(v6) >= 2 )
        v7 = 1;
        v19 = (Json::Value *)Json::Value::operator[]((int)v6, 1u);
        v20 = Json::Value::asInt(v19, 0);
        *v4 = v20;
        v21 = *(_DWORD *)v5;
        if ( v20 >= *(_DWORD *)v5 )
          return v7;
        *(_DWORD *)v5 = v20;
        *v4 = v21;
    v7 = 1;
  return v7;
}


void __fastcall JsonUtil::debugMessage(int *a1)
{
  j_j_j__ZN8JsonUtil12ParseHandler11postMessageERKSsNS_15MessageSeverityE((int)&dword_27F3968, a1, 0);
}


void __fastcall JsonUtil::debugMessage(int *a1)
{
  JsonUtil::debugMessage(a1);
}


signed int __fastcall JsonUtil::parseItem(_DWORD *a1, int *a2, int *a3, int a4)
{
  int *v4; // r7@1
  _DWORD *v5; // r4@1
  int v6; // r6@1
  int *v7; // r5@1
  unsigned int v8; // r2@3
  unsigned int v9; // r3@3
  void *v10; // r0@4
  void *v11; // r0@5
  _BYTE *v12; // r7@6
  void *v13; // r0@7
  int v14; // r2@8
  unsigned int v15; // r3@8
  void *v16; // r0@9
  unsigned int *v17; // r2@10
  signed int v18; // r1@12
  signed int v19; // r4@14
  int *v20; // r0@16
  int v21; // r0@17
  int v22; // r0@18
  void *v23; // r0@21
  void *v24; // r0@22
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  unsigned int *v28; // r2@29
  signed int v29; // r1@31
  unsigned int *v30; // r2@33
  signed int v31; // r1@35
  unsigned int *v32; // r2@44
  signed int v33; // r1@46
  unsigned int *v34; // r2@48
  signed int v35; // r1@50
  int v36; // [sp+4h] [bp-34h]@9
  int v37; // [sp+8h] [bp-30h]@7
  int v38; // [sp+Ch] [bp-2Ch]@6
  int v39; // [sp+14h] [bp-24h]@3
  int v40; // [sp+18h] [bp-20h]@4
  int v41; // [sp+1Ch] [bp-1Ch]@2

  v4 = a3;
  v5 = a1;
  v6 = a4;
  v7 = a2;
  if ( !*(_DWORD *)(*a3 - 12) )
    return 0;
  sub_21E8AF4(&v41, a3);
  if ( !sub_21E76A0(v4, "minecraft:", 0, 0xAu) )
  {
    sub_21E94B4((void **)&v39, "minecraft:");
    v8 = *(_DWORD *)(v39 - 12);
    v9 = *(_DWORD *)(*v4 - 12);
    if ( v9 < v8 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v8, v9);
    sub_21E9040((void **)&v40, v4, v8, 0xFFFFFFFF);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v41, &v40);
    v10 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
    {
      v32 = (unsigned int *)(v40 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      }
      else
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v39 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  }
  *v5 = 0;
  *v7 = 0;
  sub_21E8AF4(&v38, &v41);
  v12 = sub_21E78D0(&v41, 58, 0xFFFFFFFF);
  if ( (signed int)v12 < 0 )
    *v7 = v6;
  else
    sub_21E9040((void **)&v37, &v41, 0, (unsigned int)v12);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v38, &v37);
    v13 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v37 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (int)(v12 + 1);
    v15 = *(_DWORD *)(v41 - 12);
    if ( v15 < (unsigned int)(v12 + 1) )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v14, v15);
    sub_21E9040((void **)&v36, &v41, v14, 0xFFFFFFFF);
    Util::toInt((unsigned int *)&v36, v7, 0, 255);
    v16 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v36 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  v20 = Item::lookupByName((unsigned int *)&v38, 1);
  if ( v20 )
    v21 = *((_WORD *)v20 + 9);
LABEL_20:
    *v5 = v21;
    v19 = 1;
    goto LABEL_21;
  v22 = Block::lookupByName((unsigned int *)&v38, 1);
  if ( v22 )
    v21 = *(_BYTE *)(v22 + 4);
    goto LABEL_20;
  v19 = 0;
LABEL_21:
  v23 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v41 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  return v19;
}


signed int __fastcall JsonUtil::parseValue<BlockPos>(Json::Value *a1, int a2)
{
  int v2; // r6@1
  Json::Value *v3; // r5@1
  void *v4; // r0@5
  signed int result; // r0@6
  void *v6; // r0@8
  Json::Value *v7; // r0@9
  int *v8; // r0@9
  void *v9; // r0@13
  Json::Value *v10; // r0@14
  int *v11; // r0@14
  void *v12; // r0@18
  Json::Value *v13; // r0@19
  int *v14; // r0@19
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  unsigned int *v17; // r2@29
  signed int v18; // r1@31
  unsigned int *v19; // r2@33
  signed int v20; // r1@35
  unsigned int *v21; // r2@37
  signed int v22; // r1@39
  unsigned int *v23; // r2@41
  signed int v24; // r1@43
  unsigned int *v25; // r2@45
  signed int v26; // r1@47
  unsigned int *v27; // r2@49
  signed int v28; // r1@51
  int v29; // [sp+8h] [bp-30h]@5
  int v30; // [sp+10h] [bp-28h]@15
  int v31; // [sp+18h] [bp-20h]@10
  int v32; // [sp+20h] [bp-18h]@3

  v2 = a2;
  v3 = a1;
  if ( Json::Value::isArray(a1) != 1 || Json::Value::size(v3) != 3 )
  {
    sub_21E94B4((void **)&v29, "Expected [ x, y, z ].");
    JsonUtil::ParseHandler::postMessage((int)&dword_27F3968, &v29, 2);
    v4 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v29 - 4);
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
        j_j_j_j__ZdlPv_9(v4);
    }
    result = 0;
  }
  else
    sub_21E94B4((void **)&v32, "x");
    if ( dword_27F3970 == unk_27F3974 )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)algn_27F396C,
        &v32);
    else
      sub_21E8AF4((int *)dword_27F3970, &v32);
      dword_27F3970 += 4;
    v6 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v32 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (Json::Value *)Json::Value::operator[]((int)v3, 0);
    JsonUtil::parseValue<int>(v7, (int *)v2);
    dword_27F3970 -= 4;
    v8 = (int *)(*(_DWORD *)dword_27F3970 - 12);
    if ( v8 != &dword_28898C0 )
      v19 = (unsigned int *)(*(_DWORD *)dword_27F3970 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v31, "y");
        &v31);
      sub_21E8AF4((int *)dword_27F3970, &v31);
    v9 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v31 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (Json::Value *)Json::Value::operator[]((int)v3, 1u);
    JsonUtil::parseValue<int>(v10, (int *)(v2 + 4));
    v11 = (int *)(*(_DWORD *)dword_27F3970 - 12);
    if ( v11 != &dword_28898C0 )
      v23 = (unsigned int *)(*(_DWORD *)dword_27F3970 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    sub_21E94B4((void **)&v30, (const char *)&aRtuz[3]);
        &v30);
      sub_21E8AF4((int *)dword_27F3970, &v30);
    v12 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v30 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (Json::Value *)Json::Value::operator[]((int)v3, 2u);
    JsonUtil::parseValue<int>(v13, (int *)(v2 + 8));
    v14 = (int *)(*(_DWORD *)dword_27F3970 - 12);
    if ( v14 != &dword_28898C0 )
      v27 = (unsigned int *)(*(_DWORD *)dword_27F3970 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    result = 1;
  return result;
}


signed int __fastcall JsonUtil::parseValue<std::string>(Json::Value *a1, int *a2)
{
  int *v2; // r4@1
  Json::Value *v3; // r5@1
  void *v4; // r0@3
  void *v5; // r0@4
  void *v7; // r0@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  int v14; // [sp+4h] [bp-24h]@6
  int v15; // [sp+Ch] [bp-1Ch]@3
  int v16; // [sp+10h] [bp-18h]@3

  v2 = a2;
  v3 = a1;
  if ( Json::Value::isNull(a1) )
    return 0;
  if ( Json::Value::isString(v3) != 1 )
  {
    sub_21E94B4((void **)&v14, "Expected String.");
    JsonUtil::ParseHandler::postMessage((int)&dword_27F3968, &v14, 2);
    v7 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v14 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  sub_21E94B4((void **)&v15, (const char *)&unk_257BC67);
  Json::Value::asString(&v16, (int)v3, &v15);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v16);
  v4 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v15 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return 1;
}


signed int __fastcall JsonUtil::parseValue<bool>(Json::Value *a1, _BYTE *a2)
{
  _BYTE *v2; // r4@1
  Json::Value *v3; // r5@1
  void *v5; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+4h] [bp-1Ch]@4

  v2 = a2;
  v3 = a1;
  if ( !Json::Value::isNull(a1) )
  {
    if ( Json::Value::isBool(v3) == 1 )
    {
      *v2 = Json::Value::asBool(v3, 0);
      return 1;
    }
    sub_21E94B4((void **)&v8, "Expected Boolean.");
    JsonUtil::ParseHandler::postMessage((int)&dword_27F3968, &v8, 2);
    v5 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v8 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
  }
  return 0;
}


int __fastcall JsonUtil::getColorFromString(unsigned int *a1)
{
  unsigned int *v1; // r9@1
  char v2; // r0@1
  char *v3; // r6@3
  double v4; // r0@3
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // r1@12
  int v8; // t1@12
  void *v9; // r0@12
  unsigned int v10; // r9@15
  unsigned int v11; // r10@15
  int v12; // r11@15
  int v13; // r6@15
  int v14; // r7@16
  _DWORD *v15; // r8@16
  int v16; // r4@16
  _DWORD *v17; // r1@18
  size_t v18; // r2@18
  int v19; // r5@20
  int v20; // r4@22
  int v21; // r2@30
  unsigned int *v23; // r2@33
  signed int v24; // r1@35
  void *s1; // [sp+18h] [bp-F8h]@15
  char v26; // [sp+28h] [bp-E8h]@3
  char v27; // [sp+2Ch] [bp-E4h]@3
  int v28; // [sp+30h] [bp-E0h]@3
  char v29; // [sp+34h] [bp-DCh]@3
  int v30; // [sp+38h] [bp-D8h]@3
  char v31; // [sp+3Ch] [bp-D4h]@3
  int v32; // [sp+40h] [bp-D0h]@3
  char v33; // [sp+44h] [bp-CCh]@3
  int v34; // [sp+48h] [bp-C8h]@3
  char v35; // [sp+4Ch] [bp-C4h]@3
  int v36; // [sp+50h] [bp-C0h]@3
  char v37; // [sp+54h] [bp-BCh]@3
  int v38; // [sp+58h] [bp-B8h]@3
  char v39; // [sp+5Ch] [bp-B4h]@3
  int v40; // [sp+60h] [bp-B0h]@3
  char v41; // [sp+64h] [bp-ACh]@3
  int v42; // [sp+68h] [bp-A8h]@3
  char v43; // [sp+6Ch] [bp-A4h]@3
  int v44; // [sp+70h] [bp-A0h]@3
  char v45; // [sp+74h] [bp-9Ch]@3
  int v46; // [sp+78h] [bp-98h]@3
  char v47; // [sp+7Ch] [bp-94h]@3
  int v48; // [sp+80h] [bp-90h]@3
  char v49; // [sp+84h] [bp-8Ch]@3
  int v50; // [sp+88h] [bp-88h]@3
  char v51; // [sp+8Ch] [bp-84h]@3
  int v52; // [sp+90h] [bp-80h]@3
  char v53; // [sp+94h] [bp-7Ch]@3
  int v54; // [sp+98h] [bp-78h]@3
  char v55; // [sp+9Ch] [bp-74h]@3
  char v56; // [sp+A0h] [bp-70h]@3

  v1 = a1;
  v2 = byte_27F3964;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27F3964) )
  {
    sub_21E94B4((void **)&v26, "white");
    v27 = 0;
    sub_21E94B4((void **)&v28, "orange");
    v29 = 1;
    sub_21E94B4((void **)&v30, "magenta");
    v31 = 2;
    sub_21E94B4((void **)&v32, "light_blue");
    v33 = 3;
    sub_21E94B4((void **)&v34, "yellow");
    v35 = 4;
    sub_21E94B4((void **)&v36, "lime");
    v37 = 5;
    sub_21E94B4((void **)&v38, "pink");
    v39 = 6;
    sub_21E94B4((void **)&v40, "gray");
    v41 = 7;
    sub_21E94B4((void **)&v42, "silver");
    v43 = 8;
    sub_21E94B4((void **)&v44, "purple");
    v45 = 10;
    sub_21E94B4((void **)&v46, "blue");
    v47 = 11;
    sub_21E94B4((void **)&v48, "brown");
    v49 = 12;
    sub_21E94B4((void **)&v50, "green");
    v51 = 13;
    sub_21E94B4((void **)&v52, "red");
    v53 = 14;
    sub_21E94B4((void **)&v54, "black");
    v3 = &v56;
    v55 = 15;
    LODWORD(v4) = &dword_27F3984;
    std::_Hashtable<std::string,std::pair<std::string const,PaletteColor>,std::allocator<std::pair<std::string const,PaletteColor>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,PaletteColor> const*>(
      v4,
      (int **)&v56,
      0);
    do
    {
      v8 = *((_DWORD *)v3 - 2);
      v3 -= 8;
      v7 = v8;
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v7 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
    }
    while ( v3 != &v26 );
    _cxa_atexit(std::unordered_map<std::string,PaletteColor,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,PaletteColor>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27F3964);
  }
  Util::toLower(&s1, *(_DWORD *)(*v1 - 12), *v1);
  v10 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v11 = unk_27F3988;
  v12 = v10 % unk_27F3988;
  v13 = *(_DWORD *)(dword_27F3984 + 4 * (v10 % unk_27F3988));
  if ( v13 )
    v14 = *(_DWORD *)v13;
    v15 = s1;
    v16 = *(_DWORD *)(*(_DWORD *)v13 + 12);
    while ( 1 )
      if ( v16 == v10 )
        v17 = *(_DWORD **)(v14 + 4);
        v18 = *(v15 - 3);
        if ( v18 == *(v17 - 3) && !memcmp(v15, v17, v18) )
          break;
      v19 = *(_DWORD *)v14;
      if ( !*(_DWORD *)v14 )
        v20 = 0;
        goto LABEL_28;
      v16 = *(_DWORD *)(v19 + 12);
      v13 = v14;
      v14 = *(_DWORD *)v14;
      if ( *(_DWORD *)(v19 + 12) % v11 != v12 )
    if ( v13 )
      v20 = *(_DWORD *)v13;
    else
      v20 = 0;
  else
    v20 = 0;
LABEL_28:
  if ( v15 - 3 != &dword_28898C0 )
    v23 = v15 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15 - 3);
  if ( v20 )
    v21 = *(_BYTE *)(v20 + 8);
    v21 = 0;
  return v21;
}


void __fastcall JsonUtil::ParseHandler::postMessage(int a1, int *a2, int a3)
{
  int v3; // r10@1
  int v4; // r4@1
  __int64 v5; // r0@1
  unsigned int v6; // r4@2
  unsigned int v7; // r5@4
  char *v8; // r0@7
  void *v9; // r0@8
  __int64 v10; // r0@9
  void **v11; // r0@12
  void *v12; // r0@12
  char *v13; // r0@13
  char *v14; // r0@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  int v23; // [sp+0h] [bp-F0h]@8
  void **v24; // [sp+4h] [bp-ECh]@1
  int v25; // [sp+8h] [bp-E8h]@13
  void **v26; // [sp+Ch] [bp-E4h]@5
  void **v27; // [sp+10h] [bp-E0h]@8
  int v28; // [sp+2Ch] [bp-C4h]@13
  int v29; // [sp+34h] [bp-BCh]@12
  int v30; // [sp+38h] [bp-B8h]@13
  char *v31; // [sp+C0h] [bp-30h]@1
  char *v32; // [sp+C4h] [bp-2Ch]@1
  int v33; // [sp+C8h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v31 = (char *)&unk_28898CC;
  v32 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v32, a2);
  v33 = v4;
  sub_21D103C((int)&v24, 24);
  v5 = *(_QWORD *)(v3 + 4);
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v6 = 0;
    do
    {
      if ( v6 )
      {
        v7 = 0;
        do
        {
          sub_21CBF38((char *)&v26, (int)"  ", 2);
          ++v7;
        }
        while ( v7 < v6 );
        LODWORD(v5) = *(_DWORD *)(v3 + 4);
      }
      v8 = sub_21CBF38((char *)&v26, *(_DWORD *)(v5 + 4 * v6), *(_DWORD *)(*(_DWORD *)(v5 + 4 * v6) - 12));
      sub_21CBF38(v8, Util::NEW_LINE, *(_DWORD *)(Util::NEW_LINE - 12));
      v5 = *(_QWORD *)(v3 + 4);
      ++v6;
    }
    while ( v6 < (HIDWORD(v5) - (signed int)v5) >> 2 );
  }
  sub_21CFED8(&v23, (int)&v27);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v31,
    &v23);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *(_QWORD *)(v3 + 20);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<JsonUtil::Message,std::allocator<JsonUtil::Message>>::_M_emplace_back_aux<JsonUtil::Message>(
      (_QWORD *)(v3 + 16),
      (int)&v31);
  else
    *(_DWORD *)v10 = v31;
    v31 = (char *)&unk_28898CC;
    *(_DWORD *)(v10 + 4) = v32;
    v32 = (char *)&unk_28898CC;
    *(_DWORD *)(v10 + 8) = v33;
    *(_DWORD *)(v3 + 20) = v10 + 12;
  v11 = off_26D3F84;
  v24 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v24) = off_26D3F80[0];
  v26 = v11;
  v27 = &off_27734E8;
  v12 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v29 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v27 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v28);
  v24 = (void **)off_26D3F68;
  *(void ***)((char *)&v24 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v25 = 0;
  sub_21B6560(&v30);
  v13 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v32 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v31 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


void __fastcall JsonUtil::patchJson(JsonUtil *this, const Json::Value *a2, const Json::Value *a3, int a4)
{
  Json::Value *v4; // r5@1
  Json::Value *v5; // r8@1
  int v6; // r10@1
  Json::Value *v7; // r11@1
  const char **v8; // r4@3
  unsigned int v9; // r6@8
  int v10; // r0@9
  const Json::Value *v11; // r0@9
  const Json::Value *v12; // r1@11
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  int v17; // r7@31
  const Json::Value *v18; // r6@31
  const Json::Value *v19; // r0@31
  char *v20; // r3@32
  void *v21; // r0@33
  int *v22; // r10@34
  int v23; // r6@36
  const Json::Value *v24; // r0@36
  unsigned int *v25; // r2@37
  signed int v26; // r1@39
  unsigned int *v27; // r2@41
  signed int v28; // r1@43
  char *v29; // r3@52
  void *v30; // r0@53
  char *v31; // r7@54
  size_t v32; // r2@54
  signed int v33; // r11@56
  int v34; // r7@58
  const Json::Value *v35; // r11@58
  const Json::Value *v36; // r0@58
  int v37; // r6@63
  const Json::Value *v38; // r0@63
  int *v39; // r6@64
  int *v40; // r7@64
  unsigned int *v41; // r2@66
  signed int v42; // r1@68
  int *v43; // r0@74
  char *v44; // r0@79
  const char **v45; // r5@81
  unsigned int *v46; // r2@83
  signed int v47; // r1@85
  int *v48; // r0@91
  char v49; // [sp+10h] [bp-88h]@35
  int v50; // [sp+14h] [bp-84h]@35
  int v51; // [sp+1Ch] [bp-7Ch]@34
  const char **v52; // [sp+20h] [bp-78h]@3
  int *v53; // [sp+24h] [bp-74h]@34
  char v54; // [sp+28h] [bp-70h]@31
  char v55; // [sp+38h] [bp-60h]@58
  int v56; // [sp+48h] [bp-50h]@41
  void *s1; // [sp+4Ch] [bp-4Ch]@52
  int *v58; // [sp+50h] [bp-48h]@34
  int *v59; // [sp+54h] [bp-44h]@34
  int v60; // [sp+5Ch] [bp-3Ch]@14
  void *s2; // [sp+60h] [bp-38h]@18
  const char **v62; // [sp+64h] [bp-34h]@3
  const char **v63; // [sp+68h] [bp-30h]@3
  int v64; // [sp+8Ch] [bp-Ch]@14

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  if ( Json::Value::isObject(a2) != 1 || Json::Value::isObject(v7) != 1 )
  {
    if ( Json::Value::isArray(v4) != 1 || Json::Value::isArray(v7) != 1 )
    {
      if ( Json::Value::isNull(v7) )
        v12 = v4;
      else
        v12 = v7;
      Json::Value::Value(v5, v12);
    }
    else
      Json::Value::Value(v5, v7);
      while ( 1 )
      {
        v9 = Json::Value::size(v5);
        if ( v9 >= Json::Value::size(v4) )
          break;
        v10 = Json::Value::size(v5);
        v11 = (const Json::Value *)Json::Value::operator[]((int)v4, v10);
        Json::Value::append(v5, v11);
      }
  }
  else
    Json::Value::Value(v5, v7);
    Json::Value::getMemberNames((Json::Value *)&v62, (int)v4);
    v8 = v62;
    v52 = v63;
    if ( v62 != v63 )
      do
        if ( v6 == 32 )
        {
          if ( Json::Value::isMember((int)v5, v8) == 1 )
          {
            v17 = Json::Value::operator[](v5, v8);
            v18 = (const Json::Value *)Json::Value::operator[]((int)v4, v8);
            v19 = (const Json::Value *)Json::Value::operator[]((int)v7, v8);
            JsonUtil::patchJson((JsonUtil *)&v54, v18, v19, 32);
            Json::Value::operator=(v17, (const Json::Value *)&v54);
            Json::Value::~Value((Json::Value *)&v54);
          }
          else
            v23 = Json::Value::operator[](v5, v8);
            v24 = (const Json::Value *)Json::Value::operator[]((int)v4, v8);
            Json::Value::operator=(v23, v24);
        }
        else
          sub_21E8AF4((int *)&s2, (int *)v8);
          v20 = sub_21E77E4((int *)&s2, v6, 0);
          if ( v20 != (char *)-1 )
            sub_21E9040((void **)&v60, (int *)&s2, 0, (unsigned int)v20);
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              (int *)&s2,
              &v60);
            v21 = (void *)(v60 - 12);
            if ( (int *)(v60 - 12) != &dword_28898C0 )
            {
              v13 = (unsigned int *)(v60 - 4);
              if ( v64 )
              {
                __dmb();
                do
                  v14 = __ldrex(v13);
                while ( __strex(v14 - 1, v13) );
              }
              else
                v14 = (*v13)--;
              if ( v14 <= 0 )
                j_j_j_j__ZdlPv_9(v21);
            }
          Json::Value::getMemberNames((Json::Value *)&v58, (int)v5);
          v51 = v6;
          v22 = v58;
          v53 = v59;
          if ( v58 == v59 )
            goto LABEL_98;
          v50 = (int)v7;
          v49 = 0;
          do
            sub_21E8AF4((int *)&s1, v22);
            v29 = sub_21E77E4((int *)&s1, 58, 0);
            if ( v29 != (char *)-1 )
              sub_21E9040((void **)&v56, (int *)&s1, 0, (unsigned int)v29);
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)&s1,
                &v56);
              v30 = (void *)(v56 - 12);
              if ( (int *)(v56 - 12) != &dword_28898C0 )
                v27 = (unsigned int *)(v56 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v28 = __ldrex(v27);
                  while ( __strex(v28 - 1, v27) );
                }
                else
                  v28 = (*v27)--;
                if ( v28 <= 0 )
                  j_j_j_j__ZdlPv_9(v30);
            v31 = (char *)s1;
            v32 = *((_DWORD *)s1 - 3);
            if ( v32 == *((_DWORD *)s2 - 3) )
              if ( !memcmp(s1, s2, v32) )
                v34 = Json::Value::operator[](v5, (const char **)v22);
                v35 = (const Json::Value *)Json::Value::operator[]((int)v4, v8);
                v36 = (const Json::Value *)Json::Value::operator[](v50, (const char **)v22);
                JsonUtil::patchJson((JsonUtil *)&v55, v35, v36, v51);
                Json::Value::operator=(v34, (const Json::Value *)&v55);
                Json::Value::~Value((Json::Value *)&v55);
                v31 = (char *)s1;
                v33 = 4;
                v49 = 1;
                v33 = 0;
            else
              v33 = 0;
            if ( (int *)(v31 - 12) != &dword_28898C0 )
              v25 = (unsigned int *)(v31 - 4);
              if ( &pthread_create )
                  v26 = __ldrex(v25);
                while ( __strex(v26 - 1, v25) );
                v26 = (*v25)--;
              if ( v26 <= 0 )
                j_j_j_j__ZdlPv_9(v31 - 12);
            if ( v33 )
              break;
            ++v22;
          while ( v22 != v53 );
          v7 = (Json::Value *)v50;
          if ( !(v49 & 1) )
LABEL_98:
            v37 = Json::Value::operator[](v5, v8);
            v38 = (const Json::Value *)Json::Value::operator[]((int)v4, v8);
            Json::Value::operator=(v37, v38);
          v39 = v59;
          v40 = v58;
          v6 = v51;
          if ( v58 != v59 )
            do
              v43 = (int *)(*v40 - 12);
              if ( v43 != &dword_28898C0 )
                v41 = (unsigned int *)(*v40 - 4);
                    v42 = __ldrex(v41);
                  while ( __strex(v42 - 1, v41) );
                  v42 = (*v41)--;
                if ( v42 <= 0 )
                  j_j_j_j__ZdlPv_9(v43);
              ++v40;
            while ( v40 != v39 );
            v40 = v58;
          if ( v40 )
            operator delete(v40);
          v44 = (char *)s2 - 12;
          if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)((char *)s2 - 4);
            if ( v64 )
              __dmb();
              do
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j__ZdlPv_9(v44);
        ++v8;
      while ( v8 != v52 );
      v8 = v63;
      v45 = v62;
      if ( v62 != v63 )
        do
          v48 = (int *)(*v45 - 12);
          if ( v48 != &dword_28898C0 )
            v46 = (unsigned int *)(*v45 - 4);
            if ( &pthread_create )
                v47 = __ldrex(v46);
              while ( __strex(v47 - 1, v46) );
              v47 = (*v46)--;
            if ( v47 <= 0 )
              j_j_j_j__ZdlPv_9(v48);
          ++v45;
        while ( v45 != v8 );
        v8 = v62;
    if ( v8 )
      operator delete(v8);
}


signed int __fastcall JsonUtil::parseValue<int>(Json::Value *a1, int *a2)
{
  int *v2; // r4@1
  Json::Value *v3; // r5@1
  void *v5; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+4h] [bp-1Ch]@4

  v2 = a2;
  v3 = a1;
  if ( !Json::Value::isNull(a1) )
  {
    if ( Json::Value::isIntegral(v3) == 1 )
    {
      *v2 = Json::Value::asInt(v3, 0);
      return 1;
    }
    sub_21E94B4((void **)&v8, "Expected Integral Number.");
    JsonUtil::ParseHandler::postMessage((int)&dword_27F3968, &v8, 2);
    v5 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v8 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
  }
  return 0;
}


signed int __fastcall JsonUtil::ParseHandler::hasMessages(JsonUtil::ParseHandler *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


void __fastcall JsonUtil::ParseHandler::clear(JsonUtil::ParseHandler *this)
{
  JsonUtil::ParseHandler *v1; // r8@1
  __int64 v2; // kr00_8@1
  int v3; // r7@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20

  v1 = this;
  v2 = *((_QWORD *)this + 2);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v8 = *(_DWORD *)(v3 + 4);
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
      v10 = (int *)(*(_DWORD *)v3 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v3 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v3 += 12;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 5) = v2;
}


void __fastcall JsonUtil::warningMessage(int *a1)
{
  JsonUtil::warningMessage(a1);
}


int __fastcall JsonUtil::parseStringVector(int a1, Json::Value *this, int a3, int a4, int a5, int a6, int a7, char a8)
{
  Json::Value *v8; // r5@1
  int v9; // r4@1
  int result; // r0@2
  __int64 v11; // r0@7
  int v12; // r1@8
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  Json::Value *v17; // r8@25
  __int64 v18; // r0@26
  int v19; // r1@27
  void *v20; // r0@29
  void *v21; // r0@30
  void *v22; // r0@34
  void *v23; // r0@35
  unsigned int *v24; // r2@39
  signed int v25; // r1@41
  unsigned int *v26; // r2@43
  signed int v27; // r1@45
  int v28; // [sp+Ch] [bp-4Ch]@7
  void *v29; // [sp+10h] [bp-48h]@7
  int v30; // [sp+18h] [bp-40h]@13
  void *v31; // [sp+1Ch] [bp-3Ch]@26
  char v32; // [sp+20h] [bp-38h]@4
  char v33; // [sp+28h] [bp-30h]@4

  v8 = this;
  v9 = a1;
  if ( Json::Value::isNull(this) )
  {
    result = 0;
  }
  else
    if ( Json::Value::isArray(v8) == 1 )
    {
      Json::Value::begin((Json::Value *)&v33, (int)v8);
      Json::Value::end((Json::Value *)&v32, (int)v8);
      while ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v33, (const Json::ValueIteratorBase *)&v32) )
      {
        v17 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v33);
        if ( Json::Value::isString(v17) == 1 )
        {
          sub_21E94B4((void **)&v30, (const char *)&unk_257BC67);
          Json::Value::asString((int *)&v31, (int)v17, &v30);
          v18 = *(_QWORD *)(v9 + 4);
          if ( (_DWORD)v18 == HIDWORD(v18) )
          {
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
              (unsigned __int64 *)v9,
              &v31);
            v19 = (int)v31;
          }
          else
            *(_DWORD *)v18 = v31;
            HIDWORD(v18) = &unk_28898CC;
            v31 = &unk_28898CC;
            *(_DWORD *)(v9 + 4) = v18 + 4;
          v20 = (void *)(v19 - 12);
          if ( (int *)(v19 - 12) != &dword_28898C0 )
            v13 = (unsigned int *)(v19 - 4);
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
              j_j_j_j__ZdlPv_9(v20);
          v21 = (void *)(v30 - 12);
          if ( (int *)(v30 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)(v30 - 4);
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
        }
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v33);
        Json::Value::end((Json::Value *)&v32, (int)v8);
      }
    }
    else if ( Json::Value::isString(v8) == 1 )
      sub_21E94B4((void **)&v28, (const char *)&unk_257BC67);
      Json::Value::asString((int *)&v29, (int)v8, &v28);
      v11 = *(_QWORD *)(v9 + 4);
      if ( (_DWORD)v11 == HIDWORD(v11) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)v9,
          &v29);
        v12 = (int)v29;
      else
        *(_DWORD *)v11 = v29;
        HIDWORD(v11) = &unk_28898CC;
        v29 = &unk_28898CC;
        *(_DWORD *)(v9 + 4) = v11 + 4;
      v22 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v12 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        else
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v23 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v28 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
    if ( (unsigned int)*(_QWORD *)v9 != *(_QWORD *)v9 >> 32 )
      result = 1;
  return result;
}


signed int __fastcall JsonUtil::parseItem(JsonUtil *this, int *a2, int *a3, const Json::Value *a4, int a5)
{
  int *v5; // r7@1
  JsonUtil *v6; // r6@1
  const Json::Value *v7; // r4@1
  int *v8; // r5@1
  signed int v9; // r4@2
  void *v10; // r0@2
  void *v11; // r0@3
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  int v17; // [sp+4h] [bp-2Ch]@2
  int v18; // [sp+8h] [bp-28h]@2

  v5 = a3;
  v6 = this;
  v7 = a4;
  v8 = a2;
  if ( Json::Value::isString((Json::Value *)a3) == 1 )
  {
    sub_21E94B4((void **)&v17, (const char *)&unk_257BC67);
    Json::Value::asString(&v18, (int)v5, &v17);
    v9 = JsonUtil::parseItem(v6, v8, &v18, (int)v7);
    v10 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v18 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v17 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  }
  else
    v9 = 0;
  return v9;
}


signed int __fastcall JsonUtil::parseObjectKey<float>(Json::Value *a1, int *a2, int *a3, int a4)
{
  int v4; // r7@1
  int *v5; // r5@1
  int *v6; // r4@1
  Json::Value *v7; // r6@1
  Json::Value *v8; // r0@4
  const void **v10; // r0@6
  char *v11; // r0@6
  char *v12; // r0@7
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  const void **v15; // r0@13
  char *v16; // r0@13
  const void **v17; // r0@19
  char *v18; // r0@19
  const void **v19; // r0@25
  char *v20; // r0@25
  unsigned int *v21; // r2@35
  signed int v22; // r1@37
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  unsigned int *v25; // r2@43
  signed int v26; // r1@45
  unsigned int *v27; // r2@47
  signed int v28; // r1@49
  char *v29; // [sp+4h] [bp-3Ch]@19
  char *v30; // [sp+8h] [bp-38h]@19
  char *v31; // [sp+Ch] [bp-34h]@6
  char *v32; // [sp+10h] [bp-30h]@6
  char *v33; // [sp+14h] [bp-2Ch]@25
  char *v34; // [sp+18h] [bp-28h]@25
  char *v35; // [sp+1Ch] [bp-24h]@13
  char *v36; // [sp+20h] [bp-20h]@13
  char v37; // [sp+24h] [bp-1Ch]@4

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( j_Json::Value::isNull(a1) )
    return 0;
  if ( j_Json::Value::isObject(v7) == 1 )
  {
    if ( j_Json::Value::isMember((int)v7, (const char **)v6) == 1 )
    {
      j_JsonUtil::ScopeMarker::ScopeMarker(&v37, v6);
      v8 = (Json::Value *)j_Json::Value::operator[]((int)v7, (const char **)v6);
      j_JsonUtil::parseValue<float>(v8, v5);
      j_JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v37);
      return 1;
    }
    if ( v4 == 1 )
      v35 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v35, *(_DWORD *)(*v6 - 12) + 28);
      sub_21E7408((const void **)&v35, "Object does not have member ", 0x1Cu);
      sub_21E72F0((const void **)&v35, (const void **)v6);
      v15 = sub_21E7408((const void **)&v35, ".", 1u);
      v36 = (char *)*v15;
      *v15 = &unk_28898CC;
      j_JsonUtil::errorMessage((int *)&v36);
      v16 = v36 - 12;
      if ( (int *)(v36 - 12) != &dword_28898C0 )
      {
        v25 = (unsigned int *)(v36 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        }
        else
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      }
      v12 = v35 - 12;
      if ( (int *)(v35 - 12) == &dword_28898C0 )
        return 0;
      v13 = (unsigned int *)(v35 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        goto LABEL_32;
    else
      v33 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v33, *(_DWORD *)(*v6 - 12) + 37);
      sub_21E7408((const void **)&v33, "Object does not have optional member ", 0x25u);
      sub_21E72F0((const void **)&v33, (const void **)v6);
      v19 = sub_21E7408((const void **)&v33, ".", 1u);
      v34 = (char *)*v19;
      *v19 = &unk_28898CC;
      j_JsonUtil::debugMessage((int *)&v34);
      v20 = v34 - 12;
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v34 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v12 = v33 - 12;
      if ( (int *)(v33 - 12) == &dword_28898C0 )
      v13 = (unsigned int *)(v33 - 4);
  }
  else if ( v4 == 1 )
    v31 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v31, *(_DWORD *)(*v6 - 12) + 24);
    sub_21E7408((const void **)&v31, "Trying to access member ", 0x18u);
    sub_21E72F0((const void **)&v31, (const void **)v6);
    v10 = sub_21E7408((const void **)&v31, " of a non-Object.", 0x11u);
    v32 = (char *)*v10;
    *v10 = &unk_28898CC;
    j_JsonUtil::errorMessage((int *)&v32);
    v11 = v32 - 12;
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v32 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = v31 - 12;
    if ( (int *)(v31 - 12) == &dword_28898C0 )
      return 0;
    v13 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      goto LABEL_32;
  else
    v29 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v29, *(_DWORD *)(*v6 - 12) + 33);
    sub_21E7408((const void **)&v29, "Trying to access optional member ", 0x21u);
    sub_21E72F0((const void **)&v29, (const void **)v6);
    v17 = sub_21E7408((const void **)&v29, " of a non-Object.", 0x11u);
    v30 = (char *)*v17;
    *v17 = &unk_28898CC;
    j_JsonUtil::debugMessage((int *)&v30);
    v18 = v30 - 12;
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v30 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    v12 = v29 - 12;
    if ( (int *)(v29 - 12) == &dword_28898C0 )
    v13 = (unsigned int *)(v29 - 4);
  v14 = (*v13)--;
LABEL_32:
  if ( v14 <= 0 )
    j_j_j_j__ZdlPv_9(v12);
  return 0;
}


JsonUtil::ParseHandler *__fastcall JsonUtil::ParseHandler::~ParseHandler(JsonUtil::ParseHandler *this)
{
  JsonUtil::ParseHandler *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20
  void *v11; // r5@25
  void *v12; // r7@25
  unsigned int *v13; // r2@27
  signed int v14; // r1@29
  int *v15; // r0@35
  int *v16; // r0@40
  unsigned int *v18; // r2@42
  signed int v19; // r1@44

  v1 = this;
  *(_QWORD *)&v2 = *((_QWORD *)this + 2);
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
      v2 += 12;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete((void *)v2);
  v12 = (void *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v11 = (void *)*(_QWORD *)((char *)v1 + 4);
  if ( v11 != v12 )
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v11 = (char *)v11 + 4;
    while ( v11 != v12 );
    v11 = (void *)*((_DWORD *)v1 + 1);
  if ( v11 )
    operator delete(v11);
  v16 = (int *)(*(_DWORD *)v1 - 12);
  if ( v16 != &dword_28898C0 )
    v18 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  return v1;
}


JsonUtil::ScopeMarker *__fastcall JsonUtil::ScopeMarker::~ScopeMarker(JsonUtil::ScopeMarker *this)
{
  JsonUtil::ScopeMarker *v1; // r4@1
  int *v2; // r0@2
  unsigned int *v4; // r12@4
  signed int v5; // r1@6

  v1 = this;
  if ( *(_BYTE *)this )
  {
    dword_27F3970 -= 4;
    v2 = (int *)(*(_DWORD *)dword_27F3970 - 12);
    if ( v2 != &dword_28898C0 )
    {
      v4 = (unsigned int *)(*(_DWORD *)dword_27F3970 - 4);
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
        j_j_j_j__ZdlPv_9(v2);
    }
  }
  return v1;
}


signed int __fastcall JsonUtil::parseValue<Vec3>(Json::Value *a1, int a2)
{
  int v2; // r6@1
  Json::Value *v3; // r5@1
  void *v4; // r0@6
  void *v6; // r0@9
  Json::Value *v7; // r0@10
  int *v8; // r0@10
  void *v9; // r0@14
  Json::Value *v10; // r0@15
  int *v11; // r0@15
  void *v12; // r0@19
  Json::Value *v13; // r0@20
  int *v14; // r0@20
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  unsigned int *v17; // r2@30
  signed int v18; // r1@32
  unsigned int *v19; // r2@34
  signed int v20; // r1@36
  unsigned int *v21; // r2@38
  signed int v22; // r1@40
  unsigned int *v23; // r2@42
  signed int v24; // r1@44
  unsigned int *v25; // r2@46
  signed int v26; // r1@48
  unsigned int *v27; // r2@50
  signed int v28; // r1@52
  int v29; // [sp+8h] [bp-30h]@6
  int v30; // [sp+10h] [bp-28h]@16
  int v31; // [sp+18h] [bp-20h]@11
  int v32; // [sp+20h] [bp-18h]@4

  v2 = a2;
  v3 = a1;
  if ( Json::Value::isNull(a1) )
    return 0;
  if ( Json::Value::isArray(v3) != 1 || Json::Value::size(v3) != 3 )
  {
    sub_21E94B4((void **)&v29, "Expected [ x, y, z ].");
    JsonUtil::ParseHandler::postMessage((int)&dword_27F3968, &v29, 2);
    v4 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v29 - 4);
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
        j_j_j_j__ZdlPv_9(v4);
    }
  }
  sub_21E94B4((void **)&v32, "x");
  if ( dword_27F3970 == unk_27F3974 )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)algn_27F396C,
      &v32);
  else
    sub_21E8AF4((int *)dword_27F3970, &v32);
    dword_27F3970 += 4;
  v6 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (Json::Value *)Json::Value::operator[]((int)v3, 0);
  JsonUtil::parseValue<float>(v7, (int *)v2);
  dword_27F3970 -= 4;
  v8 = (int *)(*(_DWORD *)dword_27F3970 - 12);
  if ( v8 != &dword_28898C0 )
    v19 = (unsigned int *)(*(_DWORD *)dword_27F3970 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v31, "y");
      &v31);
    sub_21E8AF4((int *)dword_27F3970, &v31);
  v9 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v31 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (Json::Value *)Json::Value::operator[]((int)v3, 1u);
  JsonUtil::parseValue<float>(v10, (int *)(v2 + 4));
  v11 = (int *)(*(_DWORD *)dword_27F3970 - 12);
  if ( v11 != &dword_28898C0 )
    v23 = (unsigned int *)(*(_DWORD *)dword_27F3970 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v30, (const char *)&aRtuz[3]);
      &v30);
    sub_21E8AF4((int *)dword_27F3970, &v30);
  v12 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v30 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (Json::Value *)Json::Value::operator[]((int)v3, 2u);
  JsonUtil::parseValue<float>(v13, (int *)(v2 + 8));
  v14 = (int *)(*(_DWORD *)dword_27F3970 - 12);
  if ( v14 != &dword_28898C0 )
    v27 = (unsigned int *)(*(_DWORD *)dword_27F3970 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return 1;
}


void __fastcall JsonUtil::ParseHandler::postMessage(int a1, int *a2, int a3)
{
  JsonUtil::ParseHandler::postMessage(a1, a2, a3);
}


signed int __fastcall JsonUtil::ParseHandler::isParsing(JsonUtil::ParseHandler *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)((char *)this + 4);
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


_BYTE *__fastcall JsonUtil::ScopeMarker::ScopeMarker(_BYTE *a1, int *a2)
{
  _BYTE *v2; // r4@1
  _BYTE *result; // r0@2

  v2 = a1;
  *a1 = 1;
  if ( dword_27F3970 == unk_27F3974 )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)algn_27F396C,
      a2);
    result = v2;
  }
  else
    sub_21E8AF4((int *)dword_27F3970, a2);
    dword_27F3970 += 4;
  return result;
}


void __fastcall JsonUtil::errorMessage(int *a1)
{
  JsonUtil::errorMessage(a1);
}


void __fastcall JsonUtil::errorMessage(int *a1)
{
  j_j_j__ZN8JsonUtil12ParseHandler11postMessageERKSsNS_15MessageSeverityE((int)&dword_27F3968, a1, 3);
}


void *__fastcall JsonUtil::ParseHandler::popScope(JsonUtil::ParseHandler *this)
{
  int v1; // r1@1
  int v2; // r1@1
  void *result; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = v1 - 4;
  v2 = *(_DWORD *)(v1 - 4);
  result = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) == &dword_28898C0 )
  {
    result = (void *)nullsub_1();
  }
  else
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(result);
      result = (void *)nullsub_1();
  return result;
}


signed int __fastcall JsonUtil::parseObjectKey<bool>(Json::Value *a1, int *a2, _BYTE *a3, int a4)
{
  int v4; // r7@1
  _BYTE *v5; // r5@1
  int *v6; // r4@1
  Json::Value *v7; // r6@1
  Json::Value *v8; // r0@4
  const void **v10; // r0@6
  char *v11; // r0@6
  char *v12; // r0@7
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  const void **v15; // r0@13
  char *v16; // r0@13
  const void **v17; // r0@19
  char *v18; // r0@19
  const void **v19; // r0@25
  char *v20; // r0@25
  unsigned int *v21; // r2@35
  signed int v22; // r1@37
  unsigned int *v23; // r2@39
  signed int v24; // r1@41
  unsigned int *v25; // r2@43
  signed int v26; // r1@45
  unsigned int *v27; // r2@47
  signed int v28; // r1@49
  char *v29; // [sp+4h] [bp-3Ch]@19
  char *v30; // [sp+8h] [bp-38h]@19
  char *v31; // [sp+Ch] [bp-34h]@6
  char *v32; // [sp+10h] [bp-30h]@6
  char *v33; // [sp+14h] [bp-2Ch]@25
  char *v34; // [sp+18h] [bp-28h]@25
  char *v35; // [sp+1Ch] [bp-24h]@13
  char *v36; // [sp+20h] [bp-20h]@13
  char v37; // [sp+24h] [bp-1Ch]@4

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( j_Json::Value::isNull(a1) )
    return 0;
  if ( j_Json::Value::isObject(v7) == 1 )
  {
    if ( j_Json::Value::isMember((int)v7, (const char **)v6) == 1 )
    {
      j_JsonUtil::ScopeMarker::ScopeMarker(&v37, v6);
      v8 = (Json::Value *)j_Json::Value::operator[]((int)v7, (const char **)v6);
      j_JsonUtil::parseValue<bool>(v8, v5);
      j_JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v37);
      return 1;
    }
    if ( v4 == 1 )
      v35 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v35, *(_DWORD *)(*v6 - 12) + 28);
      sub_21E7408((const void **)&v35, "Object does not have member ", 0x1Cu);
      sub_21E72F0((const void **)&v35, (const void **)v6);
      v15 = sub_21E7408((const void **)&v35, ".", 1u);
      v36 = (char *)*v15;
      *v15 = &unk_28898CC;
      j_JsonUtil::errorMessage((int *)&v36);
      v16 = v36 - 12;
      if ( (int *)(v36 - 12) != &dword_28898C0 )
      {
        v25 = (unsigned int *)(v36 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        }
        else
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      }
      v12 = v35 - 12;
      if ( (int *)(v35 - 12) == &dword_28898C0 )
        return 0;
      v13 = (unsigned int *)(v35 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        goto LABEL_32;
    else
      v33 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v33, *(_DWORD *)(*v6 - 12) + 37);
      sub_21E7408((const void **)&v33, "Object does not have optional member ", 0x25u);
      sub_21E72F0((const void **)&v33, (const void **)v6);
      v19 = sub_21E7408((const void **)&v33, ".", 1u);
      v34 = (char *)*v19;
      *v19 = &unk_28898CC;
      j_JsonUtil::debugMessage((int *)&v34);
      v20 = v34 - 12;
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v34 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v12 = v33 - 12;
      if ( (int *)(v33 - 12) == &dword_28898C0 )
      v13 = (unsigned int *)(v33 - 4);
  }
  else if ( v4 == 1 )
    v31 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v31, *(_DWORD *)(*v6 - 12) + 24);
    sub_21E7408((const void **)&v31, "Trying to access member ", 0x18u);
    sub_21E72F0((const void **)&v31, (const void **)v6);
    v10 = sub_21E7408((const void **)&v31, " of a non-Object.", 0x11u);
    v32 = (char *)*v10;
    *v10 = &unk_28898CC;
    j_JsonUtil::errorMessage((int *)&v32);
    v11 = v32 - 12;
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v32 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = v31 - 12;
    if ( (int *)(v31 - 12) == &dword_28898C0 )
      return 0;
    v13 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      goto LABEL_32;
  else
    v29 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v29, *(_DWORD *)(*v6 - 12) + 33);
    sub_21E7408((const void **)&v29, "Trying to access optional member ", 0x21u);
    sub_21E72F0((const void **)&v29, (const void **)v6);
    v17 = sub_21E7408((const void **)&v29, " of a non-Object.", 0x11u);
    v30 = (char *)*v17;
    *v17 = &unk_28898CC;
    j_JsonUtil::debugMessage((int *)&v30);
    v18 = v30 - 12;
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v30 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    v12 = v29 - 12;
    if ( (int *)(v29 - 12) == &dword_28898C0 )
    v13 = (unsigned int *)(v29 - 4);
  v14 = (*v13)--;
LABEL_32:
  if ( v14 <= 0 )
    j_j_j_j__ZdlPv_9(v12);
  return 0;
}


void __fastcall JsonUtil::logMessage(int *a1)
{
  JsonUtil::logMessage(a1);
}


signed int __fastcall JsonUtil::parseRange(JsonUtil *this, const Json::Value *a2, float *a3, float *a4)
{
  float *v4; // r4@1
  Json::Value *v6; // r7@1
  signed int v7; // r6@2
  void *v8; // r0@4
  void *v9; // r0@5
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int v12; // r0@11
  Json::Value *v13; // r0@13
  Json::Value *v14; // r0@13
  int *v20; // r0@13
  Json::Value *v22; // r0@20
  int v23; // r0@20
  Json::Value *v24; // r0@21
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  int v28; // [sp+0h] [bp-28h]@13
  int v29; // [sp+8h] [bp-20h]@4
  int v30; // [sp+Ch] [bp-1Ch]@4

  v4 = a3;
  _R5 = a2;
  v6 = this;
  if ( Json::Value::isNull(this) )
  {
    v7 = 0;
  }
  else if ( Json::Value::isString(v6) == 1 )
    sub_21E94B4((void **)&v29, (const char *)&unk_257BC67);
    Json::Value::asString(&v30, (int)v6, &v29);
    v7 = Util::parseRange<float>(&v30, _R5, v4);
    v8 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
    {
      v26 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      }
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    v9 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v29 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  else
    if ( Json::Value::isNumeric(v6) == 1 )
      v12 = Json::Value::asFloat(v6, 0.0);
      *(_DWORD *)v4 = v12;
      *(_DWORD *)_R5 = v12;
    else if ( Json::Value::isObject(v6) == 1 )
      v13 = (Json::Value *)Json::Value::operator[]((int)v6, "min");
      *(_DWORD *)_R5 = Json::Value::asFloat(v13, *(float *)_R5);
      v14 = (Json::Value *)Json::Value::operator[]((int)v6, "max");
      _R0 = Json::Value::asFloat(v14, *v4);
      v28 = _R0;
      __asm
        VMOV            S0, R0
        VLDR            S2, [R5]
      v20 = &v28;
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        v20 = (int *)_R5;
      *(_DWORD *)v4 = *v20;
    else
      if ( Json::Value::isArray(v6) != 1 )
        return 0;
      if ( !Json::Value::size(v6) )
      v22 = (Json::Value *)Json::Value::operator[]((int)v6, 0);
      v23 = Json::Value::asFloat(v22, 0.0);
      *(_DWORD *)_R5 = v23;
      *(_DWORD *)v4 = v23;
      if ( (unsigned int)Json::Value::size(v6) >= 2 )
        v7 = 1;
        v24 = (Json::Value *)Json::Value::operator[]((int)v6, 1u);
        _R0 = Json::Value::asFloat(v24, 0.0);
        *(_DWORD *)v4 = _R0;
        __asm
        {
          VMOV            S0, R0
          VLDR            S2, [R5]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !(_NF ^ _VF) )
          return v7;
          VSTR            S0, [R5]
          VSTR            S2, [R4]
    v7 = 1;
  return v7;
}


  if ( JsonUtil::parseRange(v6, (const Json::Value *)&v34, &v33, v7) == 1 )
{
    v9 = v34;
    v8 = v33;
  }
  else
  {
    v8 = 1;
    v9 = 1;
    v33 = 1;
    v34 = 1;
  if ( v9 <= 1 )
  v34 = v9;
  if ( v9 < v8 )
    v9 = v8;
  v33 = v9;
  v10 = (int *)Json::Value::operator[](v3, "item");
  if ( JsonUtil::parseItem((JsonUtil *)&v32, &v31, v10, v5, v22) == 1 )
    v11 = ItemInstance::ItemInstance((ItemInstance *)&v27, Item::mItems[v32], 1);
    v12 = v34;
    v13 = ItemInstance::getMaxStackSize(v11);
    if ( v13 > v12 )
      v13 = v12;
    v14 = v33;
    v34 = v13;
    v15 = ItemInstance::getMaxStackSize((ItemInstance *)&v27);
    if ( v15 > v14 )
      v15 = v14;
    v33 = v15;
    v16 = (const Json::Value *)Json::Value::operator[](v3, "functions");
    Json::Value::Value((Json::Value *)&v26, v16);
    if ( Json::Value::isArray((Json::Value *)&v26) == 1 )
    {
      Json::Value::begin((Json::Value *)&v25, (int)&v26);
      Json::Value::end((Json::Value *)&v24, (int)&v26);
      while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v25, (const Json::ValueIteratorBase *)&v24) != 1 )
      {
        v17 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v25);
        Json::Value::Value((Json::Value *)&v22, v17);
        LootItemFunction::deserialize(&v23, (Json::Value *)&v22);
        Json::Value::~Value((Json::Value *)&v22);
        v18 = v23;
        if ( v23 )
        {
          *(_QWORD *)&v19 = *(_QWORD *)(v4 + 20);
          if ( v19 == v20 )
          {
            std::vector<std::unique_ptr<LootItemFunction,std::default_delete<LootItemFunction>>,std::allocator<std::unique_ptr<LootItemFunction,std::default_delete<LootItemFunction>>>>::_M_emplace_back_aux<std::unique_ptr<LootItemFunction,std::default_delete<LootItemFunction>>>(
              (_QWORD *)(v4 + 16),
              &v23);
          }
          else
            v23 = 0;
            *v19 = v18;
            *(_DWORD *)(v4 + 20) = v19 + 1;
          if ( v23 )
            (*(void (**)(void))(*(_DWORD *)v23 + 4))();
        }
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v25);
      }
    }
    *(_DWORD *)v4 = v32;
    *(_DWORD *)(v4 + 4) = v31;
    *(_DWORD *)(v4 + 8) = v34;
    *(_DWORD *)(v4 + 12) = v33;
    Json::Value::~Value((Json::Value *)&v26);
    if ( ptr )
      operator delete(ptr);
    if ( v29 )
      operator delete(v29);
    if ( v28 )
      (*(void (**)(void))(*(_DWORD *)v28 + 4))();
    result = 1;
    result = 0;
  return result;
}


signed int __fastcall JsonUtil::parseVec3(JsonUtil *this, Vec3 *a2, const Json::Value *a3)
{
  Json::Value *v3; // r5@1
  JsonUtil *v4; // r4@1
  signed int result; // r0@2
  Json::Value *v6; // r0@4
  Json::Value *v7; // r0@4
  Json::Value *v8; // r0@4
  signed int v9; // r6@7
  Json::Value *v10; // r0@8
  int v16; // r1@13

  v3 = a2;
  v4 = this;
  if ( Json::Value::isNull(a2) )
  {
    result = 0;
  }
  else if ( Json::Value::isObject(v3) == 1 )
    v6 = (Json::Value *)Json::Value::operator[]((int)v3, "x");
    *(_DWORD *)v4 = Json::Value::asFloat(v6, *(float *)v4);
    v7 = (Json::Value *)Json::Value::operator[]((int)v3, "y");
    *((_DWORD *)v4 + 1) = Json::Value::asFloat(v7, *((float *)v4 + 1));
    v8 = (Json::Value *)Json::Value::operator[]((int)v3, (const char *)&aRtuz[3]);
    *((_DWORD *)v4 + 2) = Json::Value::asFloat(v8, *((float *)v4 + 2));
    result = 1;
  else if ( Json::Value::isArray(v3) == 1 )
    if ( Json::Value::size(v3) < 1 )
    {
      result = 1;
    }
    else
      v9 = 0;
      do
      {
        v10 = (Json::Value *)Json::Value::operator[]((int)v3, v9);
        if ( v9 == 2 )
        {
          _R0 = Json::Value::asFloat(v10, *((float *)v4 + 2));
          __asm { VMOV            S0, R0 }
        }
        else if ( v9 == 1 )
          _R0 = Json::Value::asFloat(v10, *((float *)v4 + 1));
        else
          _R0 = Json::Value::asFloat(v10, *(float *)v4);
        __asm { VSTR            S0, [R0] }
        ++v9;
        v16 = Json::Value::size(v3);
        _VF = __OFSUB__(v9, 2);
        _NF = v9 - 2 < 0;
        result = 1;
        if ( v9 <= 2 )
          _VF = __OFSUB__(v9, v16);
          _NF = v9 - v16 < 0;
      }
      while ( _NF ^ _VF );
  else
  return result;
}


signed int __fastcall JsonUtil::parseValue<Color>(Json::Value *a1)
{
  Json::Value *v1; // r5@1
  char *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  void *v15; // r0@15
  void *v17; // r0@18
  Json::Value *v18; // r0@19
  int *v19; // r0@19
  void *v20; // r0@23
  Json::Value *v21; // r0@24
  int *v22; // r0@24
  void *v23; // r0@28
  Json::Value *v24; // r0@29
  int *v25; // r0@29
  void *v26; // r0@34
  Json::Value *v27; // r0@35
  int *v28; // r0@35
  unsigned int *v33; // r2@54
  signed int v34; // r1@56
  unsigned int *v35; // r2@58
  signed int v36; // r1@60
  unsigned int *v37; // r2@62
  signed int v38; // r1@64
  unsigned int *v39; // r2@66
  signed int v40; // r1@68
  unsigned int *v41; // r2@70
  signed int v42; // r1@72
  unsigned int *v43; // r2@74
  signed int v44; // r1@76
  unsigned int *v45; // r2@78
  signed int v46; // r1@80
  unsigned int *v47; // r2@82
  signed int v48; // r1@84
  unsigned int *v49; // r2@86
  signed int v50; // r1@88
  unsigned int *v51; // r2@130
  signed int v52; // r1@132
  unsigned int *v53; // r2@134
  signed int v54; // r1@136
  int v55; // [sp+4h] [bp-5Ch]@15
  int v56; // [sp+Ch] [bp-54h]@7
  int v57; // [sp+10h] [bp-50h]@7
  char *nptr; // [sp+14h] [bp-4Ch]@8
  int v59; // [sp+1Ch] [bp-44h]@31
  int v60; // [sp+24h] [bp-3Ch]@25
  int v61; // [sp+2Ch] [bp-34h]@20
  int v62; // [sp+34h] [bp-2Ch]@4
  int v63; // [sp+38h] [bp-28h]@2
  int v64; // [sp+3Ch] [bp-24h]@2
  int v65; // [sp+40h] [bp-20h]@2
  int v66; // [sp+44h] [bp-1Ch]@2

  v1 = a1;
  if ( Json::Value::isNull(a1) )
    return 0;
  v65 = 255;
  v66 = 255;
  v63 = 255;
  v64 = 255;
  if ( Json::Value::isArray(v1) != 1 || (unsigned int)Json::Value::size(v1) < 3 )
  {
    if ( Json::Value::isString(v1) == 1 )
    {
      sub_21E94B4((void **)&v56, (const char *)&unk_257BC67);
      Json::Value::asString(&v57, (int)v1, &v56);
      if ( !*(_DWORD *)(v57 - 12) )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", 1, 0);
      sub_21E9040((void **)&nptr, &v57, 1u, 0xFFFFFFFF);
      _R0 = strtoul(nptr, 0, 16);
      _R1 = (unsigned __int16)_R0 >> 8;
      _R2 = (_R0 >> 16) & 0xFF;
      __asm
      {
        VLDR            S8, =0.0039216
        VMOV            S0, R2
      }
      _R2 = (unsigned __int8)_R0;
      _R0 >>= 24;
        VMOV            S2, R1
        VMOV            S6, R0
        VMOV            S4, R2
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VCVT.F32.S32    S6, S6
        VMUL.F32        S0, S0, S8
        VMUL.F32        S2, S2, S8
        VMUL.F32        S4, S4, S8
        VMUL.F32        S6, S6, S8
        VSTR            S0, [R7]
        VSTR            S2, [R7,#4]
        VSTR            S4, [R7,#8]
        VSTR            S6, [R7,#0xC]
      v10 = nptr - 12;
      if ( (int *)(nptr - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(nptr - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        }
        else
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v11 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v57 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v12 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v56 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      return 1;
    }
    sub_21E94B4((void **)&v55, "Expected [ r, g, b ] or [r, g, b, a] or \"#RRGGBB\".");
    JsonUtil::ParseHandler::postMessage((int)&dword_27F3968, &v55, 2);
    v15 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v55 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
      else
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
  }
  sub_21E94B4((void **)&v62, (const char *)aRtuz);
  if ( dword_27F3970 == unk_27F3974 )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)algn_27F396C,
      &v62);
  else
    sub_21E8AF4((int *)dword_27F3970, &v62);
    dword_27F3970 += 4;
  v17 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v62 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
    else
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (Json::Value *)Json::Value::operator[]((int)v1, 0);
  JsonUtil::parseValue<int>(v18, &v66);
  dword_27F3970 -= 4;
  v19 = (int *)(*(_DWORD *)dword_27F3970 - 12);
  if ( v19 != &dword_28898C0 )
    v41 = (unsigned int *)(*(_DWORD *)dword_27F3970 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v61, "g");
      &v61);
    sub_21E8AF4((int *)dword_27F3970, &v61);
  v20 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v61 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (Json::Value *)Json::Value::operator[]((int)v1, 1u);
  JsonUtil::parseValue<int>(v21, &v65);
  v22 = (int *)(*(_DWORD *)dword_27F3970 - 12);
  if ( v22 != &dword_28898C0 )
    v45 = (unsigned int *)(*(_DWORD *)dword_27F3970 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v60, "b");
      &v60);
    sub_21E8AF4((int *)dword_27F3970, &v60);
  v23 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v60 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (Json::Value *)Json::Value::operator[]((int)v1, 2u);
  JsonUtil::parseValue<int>(v24, &v64);
  v25 = (int *)(*(_DWORD *)dword_27F3970 - 12);
  if ( v25 != &dword_28898C0 )
    v49 = (unsigned int *)(*(_DWORD *)dword_27F3970 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  if ( (unsigned int)Json::Value::size(v1) >= 4 )
    sub_21E94B4((void **)&v59, "a");
    if ( dword_27F3970 == unk_27F3974 )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)algn_27F396C,
        &v59);
      sub_21E8AF4((int *)dword_27F3970, &v59);
      dword_27F3970 += 4;
    v26 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v59 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v27 = (Json::Value *)Json::Value::operator[]((int)v1, 3u);
    JsonUtil::parseValue<int>(v27, &v63);
    dword_27F3970 -= 4;
    v28 = (int *)(*(_DWORD *)dword_27F3970 - 12);
    if ( v28 != &dword_28898C0 )
      v53 = (unsigned int *)(*(_DWORD *)dword_27F3970 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
  _R4 = 0;
  if ( v66 > 0 )
    _R4 = v66;
  _R6 = 0;
  __asm { VMOV            S2, R4 }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    _R6 = v64;
  __asm { VMOV            S0, R6 }
  _R5 = 0;
  __asm
    VLDR            S8, =0.0039216
    VCVT.F32.S32    S0, S0
    _R6 = v65;
    VMOV            S4, R6
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    _R5 = v63;
    VMOV            S6, R5
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VMOV.F32        S8, #1.0
    __asm { VMOVGT.F32      S2, S8 }
  if ( v65 > 255 )
    __asm { VMOVGT.F32      S4, S8 }
  if ( v64 > 255 )
    __asm { VMOVGT.F32      S0, S8 }
  if ( v63 > 255 )
    __asm { VMOVGT.F32      S6, S8 }
    VSTR            S2, [R7]
    VSTR            S4, [R7,#4]
    VSTR            S0, [R7,#8]
    VSTR            S6, [R7,#0xC]
  return 1;
}


signed int __fastcall JsonUtil::parseValue<float>(Json::Value *a1, int *a2)
{
  int *v2; // r4@1
  Json::Value *v3; // r5@1
  void *v5; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+4h] [bp-1Ch]@4

  v2 = a2;
  v3 = a1;
  if ( !Json::Value::isNull(a1) )
  {
    if ( Json::Value::isNumeric(v3) == 1 )
    {
      *v2 = Json::Value::asFloat(v3, 0.0);
      return 1;
    }
    sub_21E94B4((void **)&v8, "Expected Number.");
    JsonUtil::ParseHandler::postMessage((int)&dword_27F3968, &v8, 2);
    v5 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v8 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
  }
  return 0;
}


char *__fastcall JsonUtil::ParseHandler::pushScope(int a1, int *a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@1
  char *result; // r0@2

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = j_j_j__ZNSt6vectorISsSaISsEE19_M_emplace_back_auxIJRKSsEEEvDpOT__4((unsigned __int64 *)(a1 + 4), a2);
  }
  else
    sub_21E8AF4((int *)v3, a2);
    result = (char *)(*(_DWORD *)(v2 + 8) + 4);
    *(_DWORD *)(v2 + 8) = result;
  return result;
}
