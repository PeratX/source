

  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  *(_BYTE *)(v3 + 456) = 1;
  (*(void (__fastcall **)(int, int *, signed int))(*(_DWORD *)v3 + 140))(v3, &v12, v5);
  v7 = ContainerScreenController::_releaseHeldButton(
         (MinecraftScreenController *)v3,
         (const void **)&v12,
         v5,
         *(_WORD *)(v3 + 444));
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v7;
}


  if ( !Json::Value::isNull((Json::Value *)(a2 + 8)) && Json::Value::isObject(v2) == 1 )
{
    v4 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v4) || Json::Value::isUInt(v4) == 1 )
    {
      v5 = 0;
      v6 = Json::Value::asInt(v4, 0);
      if ( v6 < 0 )
        return v5;
      *(_QWORD *)&v7 = *(_QWORD *)(v3 + 444);
      if ( v6 < (v8 - v7) >> 3 )
      {
        v9 = *(_DWORD *)(v7 + 8 * v6);
        v5 = 1;
        v10 = __OFSUB__(v9, 4);
        v11 = v9 - 4;
        if ( (v11 < 0) ^ v10 )
          v11 = 0;
        *(_DWORD *)(v7 + 8 * v6) = v11;
      }
    }
  }
  return 0;
}


void __fastcall Json::StyledWriter::~StyledWriter(Json::StyledWriter *this)
{
  Json::StyledWriter *v1; // r0@1

  v1 = j_Json::StyledWriter::~StyledWriter(this);
  j_j_j__ZdlPv_7((void *)v1);
}


  if ( Json::Value::isNull(v4) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, v5);
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  *(_DWORD *)(v3 + 460) = v6;
  return 1;
}


Json::Value *__fastcall Json::Value::get(Json::Value *this, unsigned int a2, const Json::Value *a3, const Json::Value *a4)
{
  int v4; // r1@2
  int v5; // r12@2
  int v6; // r4@2
  int v7; // lr@3
  int v8; // r1@4
  const Json::Value *v9; // r1@10

  if ( *(_BYTE *)(a2 + 8) )
  {
    v4 = *(_DWORD *)a2;
    v5 = v4 + 4;
    v6 = *(_DWORD *)(v4 + 8);
    if ( v6 )
    {
      v7 = v4 + 4;
      do
      {
        v8 = v6;
        while ( *(_DWORD *)(v8 + 20) < (unsigned int)a3 )
        {
          v8 = *(_DWORD *)(v8 + 12);
          if ( !v8 )
          {
            v8 = v7;
            goto LABEL_12;
          }
        }
        v6 = *(_DWORD *)(v8 + 8);
        v7 = v8;
      }
      while ( v6 );
    }
    else
      v8 = v4 + 4;
LABEL_12:
    if ( v8 == v5 )
      v9 = (const Json::Value *)&Json::Value::null;
      if ( *(_DWORD *)(v8 + 20) > (unsigned int)a3 )
        v8 = v5;
      if ( v8 == v5 )
        v9 = (const Json::Value *)&Json::Value::null;
      else
        v9 = (const Json::Value *)(v8 + 24);
  }
  else
    v9 = (const Json::Value *)&Json::Value::null;
  if ( (_UNKNOWN *)v9 != &Json::Value::null )
    a4 = v9;
  return j_Json::Value::Value(this, a4);
}


          if ( !Json::Value::isNull(v4) && Json::Value::isObject(v4) == 1 )
{
            v10 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
            if ( Json::Value::isInt(v10) || Json::Value::isUInt(v10) == 1 )
            {
              v11 = Json::Value::asInt(v10, 0);
              if ( v11 != -1 )
                *(_DWORD *)(v5 + 564) = v11;
            }
          }
          v12 = v16;
          if ( *(_DWORD *)(v16 - 12) )
          {
            EntityInteraction::setInteractText((int *)(v5 + 560), &v16);
            v12 = v16;
          v13 = (void *)(v12 - 12);
          if ( (int *)(v12 - 12) != &dword_28898C0 )
            v14 = (unsigned int *)(v12 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
            else
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v13);
          result = 1;
          *(_BYTE *)(v5 + 569) = 1;
        }
      }
    }
  }
  return result;
}


int __fastcall Json::Reader::skipSpaces(int result)
{
  _BYTE *v1; // r1@1 OVERLAPPED
  _BYTE *v2; // r2@1 OVERLAPPED
  unsigned int v3; // r3@2
  signed int v4; // r3@3
  bool v5; // zf@3

  *(_QWORD *)&v1 = *(_QWORD *)(result + 88);
  if ( v2 != v1 )
  {
    do
    {
      v3 = *v2 - 9;
      if ( v3 > 0x17 )
        break;
      v4 = 1 << v3;
      v5 = (v4 & 0x800013) == 0;
      if ( v4 & 0x800013 )
      {
        *(_DWORD *)(result + 92) = ++v2;
        v5 = v1 == v2;
      }
    }
    while ( !v5 );
  }
  return result;
}


int __fastcall Json::Reader::skipCommentTokens(int a1, int a2)
{
  Json::Reader *v2; // r5@1
  int *v3; // r4@1
  int result; // r0@2

  v2 = (Json::Reader *)a1;
  v3 = (int *)a2;
  if ( *(_BYTE *)(a1 + 108) )
  {
    do
    {
      j_Json::Reader::readToken(v2, (int)v3);
      result = *v3;
    }
    while ( *v3 == 12 );
  }
  else
    result = j_j_j__ZN4Json6Reader9readTokenERNS0_5TokenE_0((Json::Reader *)a1, a2);
  return result;
}


    if ( !Json::Value::isNull(v4) && Json::Value::isObject(v4) == 1 )
{
      v5 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v17);
      sub_119C884((void **)&v15, v5);
      v6 = sub_119C8B4(&v15, 64, 0);
      sub_119C8C4((void **)&v14, &v15, 0, (unsigned int)v6);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v15, &v14);
      v7 = (void *)(v14 - 12);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      sub_DC2330(v4, &v15, v2);
      v8 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v15 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v8);
    }
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v17);
  }
  return result;
}


  if ( Json::Value::isArray(v3)
{
        Json::Value::end((Json::Value *)&v30, (int)v3),
        Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v31, (const Json::ValueIteratorBase *)&v30)) )
  {
LABEL_49:
    v24 = *(&mce::UUID::EMPTY + 1);
    v25 = qword_287E930;
    *(_DWORD *)v2 = mce::UUID::EMPTY;
    *(_DWORD *)(v2 + 4) = v24;
    *(_QWORD *)(v2 + 8) = v25;
  }
  else
    v4 = (Json::ValueIteratorBase *)&v31;
    v5 = "type";
    while ( 1 )
    {
      v13 = Json::ValueIteratorBase::deref(v4);
      v14 = v13;
      v15 = (Json::Value *)Json::Value::operator[](v13, v5);
      if ( Json::Value::isString(v15) == 1 )
      {
        v16 = Json::Value::operator[](v14, v5);
        sub_DA7364((void **)&v28, (const char *)&unk_257BC67);
        Json::Value::asString(&v29, (int)v16, &v28);
        v17 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
        {
          v18 = (unsigned int *)(v28 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v18);
            while ( __strex(v12 - 1, v18) );
          }
          else
            v12 = (*v18)--;
          if ( v12 <= 0 )
            j_j_j_j_j__ZdlPv_9(v17);
        }
      }
      else
        sub_DA73B4(&v29, (int *)&Util::EMPTY_STRING);
      if ( sub_DA7374((const void **)&v29, "skinpack") )
        v19 = 0;
        v4 = (Json::ValueIteratorBase *)&v31;
        v20 = Json::Value::operator[](v14, "uuid");
        sub_DA7364((void **)&v26, (const char *)&unk_257BC67);
        Json::Value::asString(&v27, (int)v20, &v26);
        mce::UUID::fromString(v2, &v27);
        v21 = (void *)(v27 - 12);
        if ( (int *)(v27 - 12) != &dword_28898C0 )
          v8 = (unsigned int *)(v27 - 4);
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j_j__ZdlPv_9(v21);
        v22 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v10 = (unsigned int *)(v26 - 4);
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j_j__ZdlPv_9(v22);
        v19 = 1;
      v23 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v29 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j_j__ZdlPv_9(v23);
      if ( v19 )
        break;
      Json::ValueIteratorBase::increment(v4);
      v5 = "type";
      if ( Json::ValueIteratorBase::isEqual(v4, (const Json::ValueIteratorBase *)&v30) )
        goto LABEL_49;
    }
}


signed int __fastcall Json::Reader::readComment(Json::Reader *this)
{
  __int64 v1; // kr00_8@1
  _BYTE *v2; // r1@2
  int v3; // r12@2
  _BYTE *i; // r1@5
  bool v5; // zf@8
  _BYTE *v7; // r2@16
  int v8; // r1@16
  _BYTE *v9; // r1@25
  _BYTE *v10; // lr@25
  int v11; // r3@27
  int v12; // r4@28
  bool v13; // zf@28
  _BYTE *v14; // r12@34
  int v15; // r4@35
  bool v16; // zf@35

  v1 = *((_QWORD *)this + 11);
  if ( HIDWORD(v1) == (_DWORD)v1 )
    return 0;
  v2 = (_BYTE *)(HIDWORD(v1) + 1);
  *((_DWORD *)this + 23) = HIDWORD(v1) + 1;
  v3 = *(_BYTE *)HIDWORD(v1);
  if ( v3 == 47 )
  {
    do
    {
      if ( (_BYTE *)v1 == v2 )
      {
        v7 = (_BYTE *)v1;
        break;
      }
      v7 = v2 + 1;
      *((_DWORD *)this + 23) = v2 + 1;
      v8 = *v2;
      if ( v8 == 13 )
      v5 = v8 == 10;
      v2 = v7;
    }
    while ( !v5 );
LABEL_24:
    if ( *((_BYTE *)this + 110) )
      v9 = (_BYTE *)(HIDWORD(v1) - 1);
      v10 = (_BYTE *)*((_DWORD *)this + 24);
      if ( v10 )
        if ( v10 >= v9 )
        {
LABEL_32:
          v11 = 1;
          if ( v3 == 42 && v9 < v7 )
          {
            v14 = (_BYTE *)(HIDWORD(v1) - 1);
            v11 = 0;
            while ( 1 )
            {
              v15 = *v14;
              v16 = v15 == 10;
              if ( v15 != 10 )
                v16 = v15 == 13;
              if ( v16 )
                break;
              if ( ++v14 >= v7 )
              {
                v11 = 1;
              }
            }
          }
        }
        else
          v11 = 0;
          while ( 1 )
            v12 = *v10;
            v13 = v12 == 10;
            if ( v12 != 10 )
              v13 = v12 == 13;
            if ( v13 )
              break;
            if ( ++v10 >= v9 )
              goto LABEL_32;
      else
        v11 = 0;
      j_Json::Reader::addComment((int)this, v9, v7, v11);
    return 1;
  }
  if ( v3 != 42 || v2 == (_BYTE *)v1 )
  for ( i = (_BYTE *)(HIDWORD(v1) + 2); ; ++i )
    *((_DWORD *)this + 23) = i;
    if ( *(i - 1) == 42 )
      break;
    if ( (_BYTE *)v1 == i )
      return 0;
LABEL_6:
    ;
  v5 = (_DWORD)v1 == (_DWORD)i;
  if ( (_BYTE *)v1 != i )
    v5 = *i == 47;
  if ( !v5 )
    goto LABEL_6;
  if ( i != (_BYTE *)v1 )
    v7 = i + 1;
    *((_DWORD *)this + 23) = i + 1;
    if ( *i != 47 )
    goto LABEL_24;
  return 0;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v23;
    v24 = v23;
    v23 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v24, (int)&v26, (int)v5);
    v6 = v24;
  sub_21E94B4((void **)&v22, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v25 = v22;
    v8 = (char *)&unk_28898CC;
    v22 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v7);
    v8 = v22;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v8 - 4);
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
  v10 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  RealmsSettingsScreenController::_updateVersionsModel(v3, (const void **)&v25, 0);
  v12 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return 1;
}


char *__fastcall Json::StyledStreamWriter::writeCommentBeforeValue(Json::StyledStreamWriter *this, const Json::Value *a2)
{
  const Json::Value *v2; // r5@1
  Json::StyledStreamWriter *v3; // r4@1
  char *result; // r0@1
  char *v5; // r6@2
  void *v6; // r0@2
  void *v7; // r0@3
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+4h] [bp-24h]@2
  int v13; // [sp+8h] [bp-20h]@2

  v2 = a2;
  v3 = this;
  result = (char *)j_Json::Value::hasComment((int)a2, 0);
  if ( result == (char *)1 )
  {
    v5 = (char *)*((_DWORD *)v3 + 3);
    j_Json::Value::getComment((void **)&v12, (int)v2, 0);
    j_Json::StyledStreamWriter::normalizeEOL((const void **)&v13, &v12);
    sub_21CBF38(v5, v13, *(_DWORD *)(v13 - 12));
    v6 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v13 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    result = sub_21CBF38(*((char **)v3 + 3), (int)"\n", 1);
  }
  return result;
}


signed int __fastcall Json::Features::strictMode(Json::Features *this)
{
  return 256;
}


void __fastcall Json::StyledStreamWriter::writeValue(Json::StyledStreamWriter *this, const Json::Value *a2)
{
  Json::StyledStreamWriter::writeValue(this, a2);
}


  if ( Json::Value::isBool(a2) == 1 )
{
    v4 = Json::Value::asBool(v2, 0);
    Json::Value::Value(v3, v4);
    *((_DWORD *)v3 + 4) = 0;
    *((_DWORD *)v3 + 5) = 0;
    *((_DWORD *)v3 + 6) = 0;
    *((_BYTE *)v3 + 28) = 1;
    *((_DWORD *)v3 + 8) = 0;
    *((_DWORD *)v3 + 9) = 1;
LABEL_8:
    *((_DWORD *)v3 + 10) = 1;
    return;
  }
  if ( Json::Value::isIntegral(v2) == 1 )
  {
    v5 = Json::Value::asInt(v2, 0);
    Json::Value::Value(v3, v5);
    v6 = 2;
LABEL_7:
    *((_DWORD *)v3 + 9) = v6;
    goto LABEL_8;
  if ( Json::Value::isNumeric(v2) == 1 )
    _R0 = Json::Value::asFloat(v2, 0.0);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.F32    D0, S0
      VMOV            R2, R3, D0
    }
    Json::Value::Value(v3, v13, _R2);
    v6 = 3;
    goto LABEL_7;
  if ( Json::Value::isString(v2) == 1 )
    sub_119C884((void **)&v21, (const char *)&unk_257BC67);
    Json::Value::asString(&v22, (int)v2, &v21);
    ExprToken::ExprToken(v3, (const void **)&v22, 0);
    v14 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v22 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v21 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
  else
    Json::Value::Value((Json::Value *)&v20, v2);
    Json::Value::Value(v3, 0);
    *((_DWORD *)v3 + 9) = 0;
    *((_DWORD *)v3 + 10) = 0;
    Json::Value::operator=((int)v3, (const Json::Value *)&v20);
    *((_DWORD *)v3 + 9) = 5;
    Json::Value::~Value((Json::Value *)&v20);
}


int __fastcall Json::Value::Value(int result, int a2)
{
  int v2; // r2@1

  *(_BYTE *)(result + 8) = 1;
  *(_DWORD *)(result + 12) = 0;
  v2 = a2 >> 31;
  *(_QWORD *)result = *(_QWORD *)&a2;
  return result;
}


  if ( Json::Value::isNull(v5) )
{
    v7 = -1;
  }
  else if ( Json::Value::isObject(v5) == 1 )
  {
    v8 = (Json::Value *)Json::Value::operator[]((int)v5, v6);
    if ( Json::Value::isInt(v8) || Json::Value::isUInt(v8) == 1 )
      v7 = Json::Value::asInt(v8, 0);
    else
      v7 = -1;
  else
  v9 = (Entity *)ClientInstanceScreenModel::getEntity(*(_DWORD *)(v4 + 424), (unsigned __int64 *)(v4 + 440));
  if ( v9 )
    v10 = (NpcComponent *)Entity::getNpcComponent(v9);
    if ( v10 )
    {
      v11 = NpcComponent::getActionAt(v10, v7);
      if ( v11 )
        NpcAction::setMode(v11, v2 ^ 1);
    }
  return 1;
}


signed int __fastcall Json::Value::isUInt(Json::Value *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 8);
  result = 0;
  if ( v1 == 2 )
    result = 1;
  return result;
}


int __fastcall Json::ValueIteratorBase::increment(Json::ValueIteratorBase *this)
{
  Json::ValueIteratorBase *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = sub_21D47E8(*(_DWORD *)this);
  *(_DWORD *)v1 = result;
  return result;
}


      if ( Json::Value::isInt(v9) || (result = Json::Value::isUInt(v9), result == 1) )
{
        v10 = 0;
        result = Json::Value::asInt(v9, 0);
        v11 = result;
        if ( result >= 0 )
        {
          v12 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(
                  *(SkinPackCollectionModel **)(v6 + 432),
                  result);
          v13 = (SkinPackModel *)v12;
          v14 = SkinPackModel::getPackId((SkinPackModel *)v12);
          v15 = *(_QWORD *)v14;
          v16 = *((_QWORD *)v14 + 1);
          v20 = 0;
          v19 = ((522133279 * (unsigned __int64)(unsigned int)v16 >> 32) + 522133279 * HIDWORD(v16)) ^ 522133279 * v15 ^ HIDWORD(v15) ^ v16;
          UIPropertyBag::set<unsigned long long>(v5, 8, "#pack_id", (unsigned __int64 *)&v19);
          v18 = SkinPackModel::getFirstVisibleSkinIndex(v13) + v4;
          UIPropertyBag::set<int>(v5, 9, "#skin_idx", &v18);
          if ( *(_DWORD *)(v6 + 440) == v11 )
          {
            v10 = 0;
            if ( *(_DWORD *)(v6 + 444) == v4 )
              v10 = 1;
          }
          v17 = v10;
          result = UIPropertyBag::set<bool>(v5, 14, "#skin_rotation", &v17);
        }
      }
    }
  }
  return result;
}


void __fastcall Json::valueToQuotedString(Json *this, const char *a2)
{
  const char *v2; // r5@1
  Json *v3; // r7@1
  const char *v4; // r0@3
  char v5; // r1@4
  size_t v6; // r0@6
  int v7; // r7@6
  char *v8; // r6@7
  unsigned int **v9; // r4@7
  _BYTE *v10; // r0@8
  int v11; // r1@8 OVERLAPPED
  int v12; // r10@8
  unsigned int v13; // r2@8
  _DWORD *v14; // r0@11
  int v15; // r7@13
  char v16; // r0@15
  int v17; // r6@17
  void *v18; // r0@18
  char *v19; // r0@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  const void **v24; // r0@38
  char *v25; // r1@38
  unsigned int **v26; // r10@43
  char *v27; // r4@43
  int v28; // r6@43
  int v29; // t1@51
  unsigned int v30; // r0@54
  const void **v31; // r0@54
  const void **v32; // r0@54
  char *v33; // r0@54
  void *v34; // r0@55
  unsigned int *v35; // r2@57
  signed int v36; // r1@59
  unsigned int *v37; // r2@61
  signed int v38; // r1@63
  Json *v39; // [sp+10h] [bp-130h]@6
  void **v40; // [sp+14h] [bp-12Ch]@7
  void **v41; // [sp+18h] [bp-128h]@7
  void *v42; // [sp+2Ch] [bp-114h]@7
  void **v43; // [sp+30h] [bp-110h]@7
  unsigned int v44; // [sp+44h] [bp-FCh]@7
  int v45; // [sp+4Ch] [bp-F4h]@18
  void **v46; // [sp+50h] [bp-F0h]@7
  void **v47; // [sp+54h] [bp-ECh]@19
  int v48; // [sp+58h] [bp-E8h]@43
  int v49; // [sp+5Ch] [bp-E4h]@43
  int v50; // [sp+60h] [bp-E0h]@43
  int v51; // [sp+64h] [bp-DCh]@43
  int v52; // [sp+68h] [bp-D8h]@43
  int v53; // [sp+6Ch] [bp-D4h]@43
  int v54; // [sp+70h] [bp-D0h]@7
  int v55; // [sp+74h] [bp-CCh]@43
  char *v56; // [sp+78h] [bp-C8h]@19
  void **v57; // [sp+7Ch] [bp-C4h]@20
  int v58; // [sp+ECh] [bp-54h]@43
  __int16 v59; // [sp+F0h] [bp-50h]@43
  int v60; // [sp+F4h] [bp-4Ch]@43
  int v61; // [sp+F8h] [bp-48h]@43
  int v62; // [sp+FCh] [bp-44h]@43
  int v63; // [sp+100h] [bp-40h]@43
  _BYTE *v64; // [sp+108h] [bp-38h]@6
  int v65; // [sp+110h] [bp-30h]@54
  char *v66; // [sp+114h] [bp-2Ch]@54

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    if ( j_strpbrk(a2, (const char *)&unk_25DA297) )
    {
LABEL_6:
      v39 = v3;
      v6 = j_strlen_0(v2);
      v64 = &unk_28898CC;
      sub_21E6FCC((const void **)&v64, 2 * v6 + 3);
      sub_21E7408((const void **)&v64, "\"", 1u);
      v7 = *v2;
      if ( *v2 )
      {
        v8 = (char *)&v46;
        v9 = (unsigned int **)&v54;
        v41 = off_26D3F28;
        v43 = (void **)off_26D3F2C;
        v40 = off_26D3F34;
        v44 = (unsigned int)&v46 | 4;
        v42 = off_26D3F30;
        while ( 1 )
        {
          switch ( v7 )
          {
            case 8:
              v24 = (const void **)&v64;
              v25 = (char *)&unk_25DA2A5;
              goto LABEL_50;
            case 11:
              goto LABEL_42;
            case 9:
              v25 = (char *)&unk_25DA2B1;
            case 10:
              v25 = (char *)&unk_25DA2AB;
            case 12:
              v25 = (char *)&unk_25DA2A8;
            case 13:
              v25 = (char *)&unk_25DA2AE;
            default:
              if ( (unsigned __int8)v7 == 92 )
              {
                v24 = (const void **)&v64;
                v25 = (char *)&unk_25DA2A2;
                goto LABEL_50;
              }
              if ( (unsigned __int8)v7 == 34 )
                v25 = (char *)&unk_25DA29F;
LABEL_50:
                sub_21E7408(v24, v25, 2u);
                goto LABEL_51;
LABEL_42:
              if ( (unsigned __int8)(v7 - 1) > 0x1Eu )
                v10 = v64;
                *(_QWORD *)&v11 = *(_QWORD *)(v64 - 12);
                v12 = v11 + 1;
                if ( v11 + 1 > v13 || *((_DWORD *)v64 - 1) >= 1 )
                {
                  sub_21E6FCC((const void **)&v64, v11 + 1);
                  v10 = v64;
                  v11 = *((_DWORD *)v64 - 3);
                }
                v10[v11] = v7;
                v14 = v64;
                if ( (int *)(v64 - 12) != &dword_28898C0 )
                  *((_DWORD *)v64 - 1) = 0;
                  *(v14 - 3) = v12;
                  *((_BYTE *)v14 + v12) = byte_26C67B8[0];
              else
                sub_21B6308((int)&v57);
                v57 = &off_26D3AF0;
                v58 = 0;
                v59 = 0;
                v60 = 0;
                v61 = 0;
                v62 = 0;
                v63 = 0;
                v46 = v43;
                *(_DWORD *)((char *)*(v43 - 3) + (_DWORD)v8) = v42;
                sub_21B5AD4((int)&v8[(_DWORD)*(v46 - 3)], 0);
                v26 = v9;
                v46 = &off_26D3F44;
                v57 = &off_26D3F58;
                v47 = &off_26D40A8;
                v48 = 0;
                v49 = 0;
                v50 = 0;
                v51 = 0;
                v52 = 0;
                v53 = 0;
                sub_21C9520(v9);
                v47 = &off_27734E8;
                v55 = 16;
                v56 = (char *)&unk_28898CC;
                sub_21B5AD4((int)&v8[(_DWORD)*(v46 - 3)], v44);
                sub_21CBF38(v8, (int)&unk_25DA2B4, 2);
                *(_DWORD *)&v8[(_DWORD)*(v46 - 3) + 12] = *(_DWORD *)&v8[(_DWORD)*(v46 - 3) + 12] & 0xFFFFFFB5 | 8;
                *(_DWORD *)&v8[(_DWORD)*(v46 - 3) + 12] |= 0x4000u;
                v27 = v8;
                v28 = (int)*(v46 - 3) + (_DWORD)v8;
                if ( *(_BYTE *)(v28 + 117) )
                  v17 = v28 + 116;
                else
                  v15 = *(_DWORD *)(v28 + 124);
                  if ( !v15 )
                    sub_21E5824();
                  if ( *(_BYTE *)(v15 + 28) )
                  {
                    v16 = *(_BYTE *)(v15 + 61);
                  }
                  else
                    sub_21B50F0(*(_DWORD *)(v28 + 124));
                    v16 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v15 + 24))(v15, 32);
                  *(_BYTE *)(v28 + 116) = v16;
                  *(_BYTE *)(v17 + 1) = 1;
                *(_BYTE *)v17 = 48;
                v8 = v27;
                *(_DWORD *)&v27[(_DWORD)*(v46 - 3) + 8] = 4;
                sub_21CC43C(v27, *v2);
                sub_21CFED8(&v45, v44);
                sub_21E72F0((const void **)&v64, (const void **)&v45);
                v18 = (void *)(v45 - 12);
                if ( (int *)(v45 - 12) != &dword_28898C0 )
                  v20 = (unsigned int *)(v45 - 4);
                  if ( &pthread_create )
                    __dmb();
                    do
                      v21 = __ldrex(v20);
                    while ( __strex(v21 - 1, v20) );
                    v21 = (*v20)--;
                  if ( v21 <= 0 )
                    j_j_j_j__ZdlPv_9(v18);
                v46 = v41;
                *(_DWORD *)((char *)*(v41 - 3) + (_DWORD)v27) = v40;
                v19 = v56 - 12;
                v9 = v26;
                if ( (int *)(v56 - 12) != &dword_28898C0 )
                  v22 = (unsigned int *)(v56 - 4);
                      v23 = __ldrex(v22);
                    while ( __strex(v23 - 1, v22) );
                    v23 = (*v22)--;
                  if ( v23 <= 0 )
                    j_j_j_j__ZdlPv_9(v19);
                sub_21C802C(v26);
                sub_21B6560(&v57);
LABEL_51:
              v29 = (v2++)[1];
              v7 = v29;
              if ( !v29 )
                goto LABEL_52;
              break;
          }
        }
      }
LABEL_52:
      *(_DWORD *)v39 = v64;
    }
    else
      v4 = v2;
      while ( 1 )
        v5 = *v4;
        if ( !*v4 )
          break;
        ++v4;
        if ( (unsigned __int8)(v5 - 1) < 0x1Fu )
          goto LABEL_6;
      sub_21E94B4((void **)&v65, "\"");
      v30 = j_strlen_0(v2);
      v31 = sub_21E7408((const void **)&v65, (char *)v2, v30);
      v66 = (char *)*v31;
      *v31 = &unk_28898CC;
      v32 = sub_21E7408((const void **)&v66, "\"", 1u);
      *(_DWORD *)v3 = *v32;
      *v32 = &unk_28898CC;
      v33 = v66 - 12;
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v66 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        else
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      v34 = (void *)(v65 - 12);
      if ( (int *)(v65 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v65 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
  }
  else
    *(_DWORD *)this = &unk_28898CC;
}


const void **__fastcall Json::StyledWriter::writeCommentBeforeValue(Json::StyledWriter *this, const Json::Value *a2)
{
  const Json::Value *v2; // r5@1
  Json::StyledWriter *v3; // r4@1
  const void **result; // r0@1
  const void **v5; // r4@2
  void *v6; // r0@2
  void *v7; // r0@3
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+0h] [bp-20h]@2
  int v13; // [sp+4h] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  result = (const void **)j_Json::Value::hasComment((int)a2, 0);
  if ( result == (const void **)1 )
  {
    j_Json::Value::getComment((void **)&v12, (int)v2, 0);
    j_Json::StyledWriter::normalizeEOL((const void **)&v13, &v12);
    v5 = (const void **)((char *)v3 + 16);
    sub_21E72F0(v5, (const void **)&v13);
    v6 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v13 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    result = sub_21E7408(v5, "\n", 1u);
  }
  return result;
}


signed int __fastcall Json::Value::operator<(int _R0, int _R1)
{
  unsigned int v2; // r3@1
  unsigned int v3; // r2@1
  const char *v4; // r3@3
  const char *v5; // r1@3
  int v6; // r0@3
  int v7; // r2@3
  signed int result; // r0@4
  __int64 v9; // kr00_8@9
  int v10; // r12@9
  signed int v12; // r1@9
  __int64 v13; // kr10_8@16
  unsigned int v14; // r12@16
  signed int v15; // r1@16
  const char *v19; // r0@26
  const char *v20; // r1@26
  unsigned int v21; // r2@30

  v2 = *(_BYTE *)(_R1 + 8);
  v3 = *(_BYTE *)(_R0 + 8);
  if ( v3 == v2 )
  {
    switch ( v3 )
    {
      case 6u:
      case 7u:
        v4 = *(const char **)_R1;
        v5 = *(const char **)_R0;
        v6 = *((_DWORD *)v4 + 5);
        v7 = *((_DWORD *)v5 + 5);
        if ( v7 == v6 )
          result = j_std::__lexicographical_compare_impl<std::_Rb_tree_const_iterator<std::pair<Json::Value::CZString const,Json::Value>>,std::_Rb_tree_const_iterator<std::pair<Json::Value::CZString const,Json::Value>>,__gnu_cxx::__ops::_Iter_less_iter>(
                     *((_DWORD *)v5 + 3),
                     (int)(v5 + 4),
                     *((_DWORD *)v4 + 3),
                     (int)(v4 + 4));
        else
          result = (unsigned int)(v7 - v6) >> 31;
        break;
      case 1u:
        v9 = *(_QWORD *)_R0;
        result = 0;
        v10 = *(_QWORD *)_R1 >> 32;
        _CF = (unsigned int)v9 >= (unsigned int)*(_QWORD *)_R1;
        v12 = 0;
        if ( !_CF )
          v12 = 1;
        if ( SHIDWORD(v9) < v10 )
          result = 1;
        if ( HIDWORD(v9) == v10 )
          result = v12;
      case 2u:
        v13 = *(_QWORD *)_R0;
        v14 = *(_QWORD *)_R1 >> 32;
        _CF = (unsigned int)v13 >= (unsigned int)*(_QWORD *)_R1;
        v15 = 0;
          v15 = 1;
        if ( HIDWORD(v13) < v14 )
        if ( HIDWORD(v13) == v14 )
          result = v15;
      case 3u:
        __asm { VLDR            D1, [R0]; jumptable 01B2D5D0 case 3 }
        __asm
        {
          VLDR            D0, [R1]
          VCMPE.F64       D1, D0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
      case 4u:
        v19 = *(const char **)_R0;
        v20 = *(const char **)_R1;
        if ( v19 )
          if ( !v20 )
            goto def_1B2D5D0;
          result = (unsigned int)j_strcmp_0(v19, v20) >> 31;
          result = v20 != 0;
      case 5u:
        v21 = *(_BYTE *)_R0;
        if ( v21 < *(_BYTE *)_R1 )
      default:
def_1B2D5D0:
    }
  }
  else
    result = 0;
    if ( v3 < v2 )
      result = 1;
  return result;
}


void __fastcall Json::FastWriter::~FastWriter(Json::FastWriter *this)
{
  Json::FastWriter *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2725B14;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


unsigned __int64 __fastcall Json::Value::asUInt64(Json::Value *this, int a2, unsigned __int64 _R2)
{
  unsigned int v3; // r12@1

  v3 = *((_BYTE *)this + 8);
  if ( v3 > 5 )
  {
LABEL_5:
    LODWORD(_R2) = 0;
  }
  else
    switch ( v3 )
    {
      case 0u:
        return _R2;
      case 1u:
      case 2u:
        return *(_QWORD *)this;
      case 3u:
        __asm
        {
          VLDR            D0, [R0]; jumptable 01B2D89A case 3
          VCVTR.U32.F64   S0, D0
          VMOV            R2, S0
        }
        break;
      default:
        goto LABEL_5;
      case 5u:
        LODWORD(_R2) = *(_BYTE *)this;
    }
  HIDWORD(_R2) = 0;
  return _R2;
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v20 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  v14 = *v6;
  v15 = *((_DWORD *)*v6 - 3);
  v17 = StoreBaseScreenController::_getStoreCatalogItemPromptIconVisible(
          (StoreBaseScreenController *)v7,
          (const StoreCatalogItemModel *)&v20);
  return UIPropertyBag::set<bool>(v5, v15, v14, &v17);
}


  if ( a7 != 1 || Json::Value::isString(v12) != 1 )
{
    if ( Json::Value::type(v12) != 6
      || Json::Value::size(v12) != 3
      || (v27 = Json::Value::operator[]((int)v12, 0), Json::Value::isConvertibleTo((int)v27, 2) != 1)
      || (v28 = Json::Value::operator[]((int)v12, 1u), Json::Value::isConvertibleTo((int)v28, 2) != 1)
      || (v29 = Json::Value::operator[]((int)v12, 2u), Json::Value::isConvertibleTo((int)v29, 2) != 1) )
    {
      v45 = 0;
      v44 = 1;
      goto LABEL_36;
    }
    v30 = (Json::Value *)Json::Value::operator[]((int)v12, 0);
    v31 = Json::Value::asUInt(v30, 0);
    v32 = (Json::Value *)Json::Value::operator[]((int)v12, 1u);
    v33 = Json::Value::asUInt(v32, 0);
    v34 = (Json::Value *)Json::Value::operator[]((int)v12, 2u);
    v35 = Json::Value::asUInt(v34, 0);
    sub_21E94B4((void **)&v233, (const char *)&unk_257BC67);
    v36 = (int *)sub_21E94B4((void **)&v232, (const char *)&unk_257BC67);
    SemVersion::SemVersion((int)&v234, v31, v33, v35, &v233, v36, 0);
    v37 = v234;
    *((_WORD *)v10 + 2) = v235;
    *(_DWORD *)v10 = v37;
    EntityInteraction::setInteractText((int *)v10 + 2, &v236);
    EntityInteraction::setInteractText((int *)v10 + 3, &v237);
    EntityInteraction::setInteractText((int *)v10 + 4, &v238);
    *((_BYTE *)v10 + 22) = v240;
    v38 = v238;
    *((_WORD *)v10 + 10) = v239;
    v39 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v172 = (unsigned int *)(v38 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v173 = __ldrex(v172);
        while ( __strex(v173 - 1, v172) );
      }
      else
        v173 = (*v172)--;
      if ( v173 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
    v40 = (void *)(v237 - 12);
    if ( (int *)(v237 - 12) != &dword_28898C0 )
      v174 = (unsigned int *)(v237 - 4);
          v175 = __ldrex(v174);
        while ( __strex(v175 - 1, v174) );
        v175 = (*v174)--;
      if ( v175 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
    v41 = (void *)(v236 - 12);
    if ( (int *)(v236 - 12) != &dword_28898C0 )
      v176 = (unsigned int *)(v236 - 4);
          v177 = __ldrex(v176);
        while ( __strex(v177 - 1, v176) );
        v177 = (*v176)--;
      if ( v177 <= 0 )
        j_j_j_j__ZdlPv_9(v41);
    v42 = (void *)(v232 - 12);
    if ( (int *)(v232 - 12) != &dword_28898C0 )
      v178 = (unsigned int *)(v232 - 4);
          v179 = __ldrex(v178);
        while ( __strex(v179 - 1, v178) );
        v179 = (*v178)--;
      if ( v179 <= 0 )
        j_j_j_j__ZdlPv_9(v42);
    v43 = (void *)(v233 - 12);
    if ( (int *)(v233 - 12) != &dword_28898C0 )
      v180 = (unsigned int *)(v233 - 4);
          v181 = __ldrex(v180);
        while ( __strex(v181 - 1, v180) );
        v181 = (*v180)--;
      if ( v181 <= 0 )
        j_j_j_j__ZdlPv_9(v43);
LABEL_30:
    v44 = 0;
    v45 = 0;
    goto LABEL_36;
  }
  sub_21E94B4((void **)&v257, (const char *)&unk_257BC67);
  Json::Value::asString(&v258, (int)v12, &v257);
  v14 = SemVersion::fromString((const void **)&v258, (int)v10);
  v15 = (void *)(v258 - 12);
  if ( (int *)(v258 - 12) != &dword_28898C0 )
  {
    v152 = (unsigned int *)(v258 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
    else
      v153 = (*v152)--;
    if ( v153 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v257 - 12);
  if ( (int *)(v257 - 12) != &dword_28898C0 )
    v154 = (unsigned int *)(v257 - 4);
        v155 = __ldrex(v154);
      while ( __strex(v155 - 1, v154) );
      v155 = (*v154)--;
    if ( v155 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  if ( !v14 )
    goto LABEL_30;
  if ( a6 == 1 )
    if ( v14 != 2 )
      goto LABEL_35;
    sub_21E94B4((void **)&v249, (const char *)&unk_257BC67);
    v17 = (int *)sub_21E94B4((void **)&v248, (const char *)&unk_257BC67);
    SemVersion::SemVersion((int)&v250, 1, 0, 0, &v249, v17, 0);
    v18 = v250;
    *((_WORD *)v10 + 2) = v251;
    *(_DWORD *)v10 = v18;
    EntityInteraction::setInteractText((int *)v10 + 2, &v252);
    EntityInteraction::setInteractText((int *)v10 + 3, &v253);
    EntityInteraction::setInteractText((int *)v10 + 4, &v254);
    *((_BYTE *)v10 + 22) = v256;
    v19 = v254;
    *((_WORD *)v10 + 10) = v255;
    v20 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v164 = (unsigned int *)(v19 - 4);
          v165 = __ldrex(v164);
        while ( __strex(v165 - 1, v164) );
        v165 = (*v164)--;
      if ( v165 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v253 - 12);
    if ( (int *)(v253 - 12) != &dword_28898C0 )
      v166 = (unsigned int *)(v253 - 4);
          v167 = __ldrex(v166);
        while ( __strex(v167 - 1, v166) );
        v167 = (*v166)--;
      if ( v167 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = (void *)(v252 - 12);
    if ( (int *)(v252 - 12) != &dword_28898C0 )
      v168 = (unsigned int *)(v252 - 4);
          v169 = __ldrex(v168);
        while ( __strex(v169 - 1, v168) );
        v169 = (*v168)--;
      if ( v169 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (void *)(v248 - 12);
    if ( (int *)(v248 - 12) != &dword_28898C0 )
      v170 = (unsigned int *)(v248 - 4);
          v171 = __ldrex(v170);
        while ( __strex(v171 - 1, v170) );
        v171 = (*v170)--;
      if ( v171 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v249 - 12);
    if ( (int *)(v249 - 12) == &dword_28898C0 )
    v25 = (unsigned int *)(v249 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      goto LABEL_320;
LABEL_319:
    v26 = (*v25)--;
    goto LABEL_320;
  SemVersion::SemVersion((SemVersion *)&v241);
  v46 = v241;
  *((_WORD *)v10 + 2) = v242;
  *(_DWORD *)v10 = v46;
  EntityInteraction::setInteractText((int *)v10 + 2, &v243);
  EntityInteraction::setInteractText((int *)v10 + 3, &v244);
  EntityInteraction::setInteractText((int *)v10 + 4, &v245);
  *((_BYTE *)v10 + 22) = v247;
  v47 = v245;
  *((_WORD *)v10 + 10) = v246;
  v48 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v158 = (unsigned int *)(v47 - 4);
        v159 = __ldrex(v158);
      while ( __strex(v159 - 1, v158) );
      v159 = (*v158)--;
    if ( v159 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v49 = (void *)(v244 - 12);
  if ( (int *)(v244 - 12) != &dword_28898C0 )
    v160 = (unsigned int *)(v244 - 4);
        v161 = __ldrex(v160);
      while ( __strex(v161 - 1, v160) );
      v161 = (*v160)--;
    if ( v161 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  v24 = (void *)(v243 - 12);
  if ( (int *)(v243 - 12) == &dword_28898C0 )
    goto LABEL_35;
  v25 = (unsigned int *)(v243 - 4);
  if ( !&pthread_create )
    goto LABEL_319;
  __dmb();
  do
    v26 = __ldrex(v25);
  while ( __strex(v26 - 1, v25) );
LABEL_320:
  if ( v26 <= 0 )
    j_j_j_j__ZdlPv_9(v24);
LABEL_35:
  v45 = 1;
  v44 = 0;
LABEL_36:
  if ( v13 == 1 )
    if ( a6 == 1 )
      sub_157984C(&v224, (__int64 *)v7);
      v50 = (int *)SemVersion::asString(v10);
      sub_21E8AF4(&v225, v50);
      v182 = v7;
      v51 = operator new(8u);
      v52 = v51;
      v53 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
              (int)&v224,
              (int)&v226,
              (int)v51);
      v54 = v53;
      v55 = 0;
      v226 = &off_26D9084;
      v56 = v53 - (_DWORD)v52;
      v227 = 0;
      v228 = 0;
      v229 = 0;
      v57 = v56 >> 2;
      if ( v56 >> 2 )
        if ( v57 >= 0x40000000 )
          sub_21E57F4();
        v55 = operator new(v56);
      v227 = v55;
      v228 = (int)v55;
      v229 = (char *)v55 + 4 * v57;
      v58 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
              (int)v52,
              v54,
              (int)v55);
      v228 = v58;
      v230 = 7;
      v231 = 2;
      v226 = &off_26EABBC;
      PackReport::addWarning<PackDiscoveryError>(a5, (int)&v226);
      if ( v55 != (void *)v58 )
        {
          v69 = (int *)(*(_DWORD *)v55 - 12);
          if ( v69 != &dword_28898C0 )
          {
            v67 = (unsigned int *)(*(_DWORD *)v55 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v68 = __ldrex(v67);
              while ( __strex(v68 - 1, v67) );
            }
            else
              v68 = (*v67)--;
            if ( v68 <= 0 )
              j_j_j_j__ZdlPv_9(v69);
          }
          v55 = (char *)v55 + 4;
        }
        while ( v55 != (void *)v58 );
        v55 = v227;
      if ( v55 )
        operator delete(v55);
      if ( v52 != (_DWORD *)v54 )
        v70 = v52;
          v73 = (int *)(*v70 - 12);
          if ( v73 != &dword_28898C0 )
            v71 = (unsigned int *)(*v70 - 4);
                v72 = __ldrex(v71);
              while ( __strex(v72 - 1, v71) );
              v72 = (*v71)--;
            if ( v72 <= 0 )
              j_j_j_j__ZdlPv_9(v73);
          ++v70;
        while ( v70 != (_DWORD *)v54 );
      if ( v52 )
        operator delete(v52);
      v7 = v182;
      v74 = (void *)(v225 - 12);
      if ( (int *)(v225 - 12) != &dword_28898C0 )
        v156 = (unsigned int *)(v225 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v157 = __ldrex(v156);
          while ( __strex(v157 - 1, v156) );
        else
          v157 = (*v156)--;
        if ( v157 <= 0 )
          j_j_j_j__ZdlPv_9(v74);
      v75 = (void *)(v224 - 12);
      if ( (int *)(v224 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v224 - 4);
            v77 = __ldrex(v76);
          while ( __strex(v77 - 1, v76) );
LABEL_265:
          goto LABEL_267;
        goto LABEL_266;
      sub_157984C(&v217, (__int64 *)v7);
      v184 = v7;
      v78 = operator new(4u);
      v79 = v78;
      v80 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
              (int)&v217,
              (int)&v218,
              (int)v78);
      v81 = v80;
      v82 = 0;
      v218 = &off_26D9084;
      v83 = v80 - (_DWORD)v79;
      v219 = 0;
      v220 = 0;
      v221 = 0;
      v84 = v83 >> 2;
      if ( v83 >> 2 )
        if ( v84 >= 0x40000000 )
        v82 = operator new(v83);
      v219 = v82;
      v220 = (int)v82;
      v221 = (char *)v82 + 4 * v84;
      v85 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
              (int)v79,
              v81,
              (int)v82);
      v220 = v85;
      v222 = 6;
      v223 = 2;
      v218 = &off_26EABBC;
      PackReport::addError<PackDiscoveryError>(a5, (int)&v218);
      if ( v82 != (void *)v85 )
          v88 = (int *)(*(_DWORD *)v82 - 12);
          if ( v88 != &dword_28898C0 )
            v86 = (unsigned int *)(*(_DWORD *)v82 - 4);
                v87 = __ldrex(v86);
              while ( __strex(v87 - 1, v86) );
              v87 = (*v86)--;
            if ( v87 <= 0 )
              j_j_j_j__ZdlPv_9(v88);
          v82 = (char *)v82 + 4;
        while ( v82 != (void *)v85 );
        v82 = v219;
      if ( v82 )
        operator delete(v82);
      if ( v79 != (_DWORD *)v81 )
        v89 = v79;
          v92 = (int *)(*v89 - 12);
          if ( v92 != &dword_28898C0 )
            v90 = (unsigned int *)(*v89 - 4);
                v91 = __ldrex(v90);
              while ( __strex(v91 - 1, v90) );
              v91 = (*v90)--;
            if ( v91 <= 0 )
              j_j_j_j__ZdlPv_9(v92);
          ++v89;
        while ( v89 != (_DWORD *)v81 );
      if ( v79 )
        operator delete(v79);
      v7 = v184;
      v75 = (void *)(v217 - 12);
      if ( (int *)(v217 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v217 - 4);
          goto LABEL_265;
LABEL_266:
        v77 = (*v76)--;
LABEL_267:
        if ( v77 <= 0 )
          j_j_j_j__ZdlPv_9(v75);
        goto LABEL_269;
  else if ( v44 == 1 )
      sub_157984C(&v210, (__int64 *)v7);
      v183 = v7;
      v59 = operator new(4u);
      v60 = v59;
      v61 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
              (int)&v210,
              (int)&v211,
              (int)v59);
      v62 = v61;
      v63 = 0;
      v211 = &off_26D9084;
      v64 = v61 - (_DWORD)v60;
      v212 = 0;
      v213 = 0;
      v214 = 0;
      v65 = v64 >> 2;
      if ( v64 >> 2 )
        if ( v65 >= 0x40000000 )
        v63 = operator new(v64);
      v212 = v63;
      v213 = (int)v63;
      v214 = (char *)v63 + 4 * v65;
      v66 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
              (int)v60,
              v62,
              (int)v63);
      v213 = v66;
      v215 = 8;
      v216 = 2;
      v211 = &off_26EABBC;
      PackReport::addWarning<PackDiscoveryError>(a5, (int)&v211);
      if ( v63 != (void *)v66 )
          v104 = (int *)(*(_DWORD *)v63 - 12);
          if ( v104 != &dword_28898C0 )
            v102 = (unsigned int *)(*(_DWORD *)v63 - 4);
                v103 = __ldrex(v102);
              while ( __strex(v103 - 1, v102) );
              v103 = (*v102)--;
            if ( v103 <= 0 )
              j_j_j_j__ZdlPv_9(v104);
          v63 = (char *)v63 + 4;
        while ( v63 != (void *)v66 );
        v63 = v212;
      if ( v63 )
        operator delete(v63);
      if ( v60 != (_DWORD *)v62 )
        v105 = v60;
          v108 = (int *)(*v105 - 12);
          if ( v108 != &dword_28898C0 )
            v106 = (unsigned int *)(*v105 - 4);
                v107 = __ldrex(v106);
              while ( __strex(v107 - 1, v106) );
              v107 = (*v106)--;
            if ( v107 <= 0 )
              j_j_j_j__ZdlPv_9(v108);
          ++v105;
        while ( v105 != (_DWORD *)v62 );
      if ( v60 )
        operator delete(v60);
      v7 = v183;
      v75 = (void *)(v210 - 12);
      if ( (int *)(v210 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v210 - 4);
      sub_157984C(&v203, (__int64 *)v7);
      v186 = v7;
      v109 = operator new(4u);
      v110 = v109;
      v111 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
               (int)&v203,
               (int)&v204,
               (int)v109);
      v112 = v111;
      v113 = 0;
      v204 = &off_26D9084;
      v114 = v111 - (_DWORD)v110;
      v205 = 0;
      v206 = 0;
      v207 = 0;
      v115 = v114 >> 2;
      if ( v114 >> 2 )
        if ( v115 >= 0x40000000 )
        v113 = operator new(v114);
      v205 = v113;
      v206 = (int)v113;
      v207 = (char *)v113 + 4 * v115;
      v116 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
               (int)v110,
               v112,
               (int)v113);
      v206 = v116;
      v208 = 8;
      v209 = 2;
      v204 = &off_26EABBC;
      PackReport::addError<PackDiscoveryError>(a5, (int)&v204);
      if ( v113 != (void *)v116 )
          v119 = (int *)(*(_DWORD *)v113 - 12);
          if ( v119 != &dword_28898C0 )
            v117 = (unsigned int *)(*(_DWORD *)v113 - 4);
                v118 = __ldrex(v117);
              while ( __strex(v118 - 1, v117) );
              v118 = (*v117)--;
            if ( v118 <= 0 )
              j_j_j_j__ZdlPv_9(v119);
          v113 = (char *)v113 + 4;
        while ( v113 != (void *)v116 );
        v113 = v205;
      if ( v113 )
        operator delete(v113);
      if ( v110 != (_DWORD *)v112 )
        v120 = v110;
          v123 = (int *)(*v120 - 12);
          if ( v123 != &dword_28898C0 )
            v121 = (unsigned int *)(*v120 - 4);
                v122 = __ldrex(v121);
              while ( __strex(v122 - 1, v121) );
              v122 = (*v121)--;
            if ( v122 <= 0 )
              j_j_j_j__ZdlPv_9(v123);
          ++v120;
        while ( v120 != (_DWORD *)v112 );
      if ( v110 )
        operator delete(v110);
      v7 = v186;
      v75 = (void *)(v203 - 12);
      if ( (int *)(v203 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v203 - 4);
  else
    if ( v45 != 1 )
      goto LABEL_269;
      sub_157984C(&v195, (__int64 *)v7);
      v93 = (int *)SemVersion::asString(v10);
      sub_21E8AF4(&v196, v93);
      v185 = v7;
      v94 = operator new(8u);
      v95 = v94;
      v96 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
              (int)&v195,
              (int)&v197,
              (int)v94);
      v97 = v96;
      v98 = 0;
      v197 = &off_26D9084;
      v99 = v96 - (_DWORD)v95;
      v198 = 0;
      v199 = 0;
      v200 = 0;
      v100 = v99 >> 2;
      if ( v99 >> 2 )
        if ( v100 >= 0x40000000 )
        v98 = operator new(v99);
      v198 = v98;
      v199 = (int)v98;
      v200 = (char *)v98 + 4 * v100;
      v101 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
               (int)v95,
               v97,
               (int)v98);
      v199 = v101;
      v201 = 15;
      v202 = 2;
      v197 = &off_26EABBC;
      PackReport::addWarning<PackDiscoveryError>(a5, (int)&v197);
      if ( v98 != (void *)v101 )
          v126 = (int *)(*(_DWORD *)v98 - 12);
          if ( v126 != &dword_28898C0 )
            v124 = (unsigned int *)(*(_DWORD *)v98 - 4);
                v125 = __ldrex(v124);
              while ( __strex(v125 - 1, v124) );
              v125 = (*v124)--;
            if ( v125 <= 0 )
              j_j_j_j__ZdlPv_9(v126);
          v98 = (char *)v98 + 4;
        while ( v98 != (void *)v101 );
        v98 = v198;
      if ( v98 )
        operator delete(v98);
      if ( v95 != (_DWORD *)v97 )
        v127 = v95;
          v130 = (int *)(*v127 - 12);
          if ( v130 != &dword_28898C0 )
            v128 = (unsigned int *)(*v127 - 4);
                v129 = __ldrex(v128);
              while ( __strex(v129 - 1, v128) );
              v129 = (*v128)--;
            if ( v129 <= 0 )
              j_j_j_j__ZdlPv_9(v130);
          ++v127;
        while ( v127 != (_DWORD *)v97 );
      if ( v95 )
        operator delete(v95);
      v7 = v185;
      v131 = (void *)(v196 - 12);
      if ( (int *)(v196 - 12) != &dword_28898C0 )
        v162 = (unsigned int *)(v196 - 4);
            v163 = __ldrex(v162);
          while ( __strex(v163 - 1, v162) );
          v163 = (*v162)--;
        if ( v163 <= 0 )
          j_j_j_j__ZdlPv_9(v131);
      v75 = (void *)(v195 - 12);
      if ( (int *)(v195 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v195 - 4);
      sub_157984C(&v188, (__int64 *)v7);
      v187 = v7;
      v132 = operator new(4u);
      v133 = v132;
      v134 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
               (int)&v188,
               (int)&v189,
               (int)v132);
      v135 = v134;
      v136 = 0;
      v189 = &off_26D9084;
      v137 = v134 - (_DWORD)v133;
      v190 = 0;
      v191 = 0;
      v192 = 0;
      v138 = v137 >> 2;
      if ( v137 >> 2 )
        if ( v138 >= 0x40000000 )
        v136 = operator new(v137);
      v190 = v136;
      v191 = (int)v136;
      v192 = (char *)v136 + 4 * v138;
      v139 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
               (int)v133,
               v135,
               (int)v136);
      v191 = v139;
      v193 = 14;
      v194 = 2;
      v189 = &off_26EABBC;
      PackReport::addError<PackDiscoveryError>(a5, (int)&v189);
      if ( v136 != (void *)v139 )
          v142 = (int *)(*(_DWORD *)v136 - 12);
          if ( v142 != &dword_28898C0 )
            v140 = (unsigned int *)(*(_DWORD *)v136 - 4);
                v141 = __ldrex(v140);
              while ( __strex(v141 - 1, v140) );
              v141 = (*v140)--;
            if ( v141 <= 0 )
              j_j_j_j__ZdlPv_9(v142);
          v136 = (char *)v136 + 4;
        while ( v136 != (void *)v139 );
        v136 = v190;
      if ( v136 )
        operator delete(v136);
      if ( v133 != (_DWORD *)v135 )
        v143 = v133;
          v146 = (int *)(*v143 - 12);
          if ( v146 != &dword_28898C0 )
            v144 = (unsigned int *)(*v143 - 4);
                v145 = __ldrex(v144);
              while ( __strex(v145 - 1, v144) );
              v145 = (*v144)--;
            if ( v145 <= 0 )
              j_j_j_j__ZdlPv_9(v146);
          ++v143;
        while ( v143 != (_DWORD *)v135 );
      if ( v133 )
        operator delete(v133);
      v7 = v187;
      v75 = (void *)(v188 - 12);
      if ( (int *)(v188 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v188 - 4);
LABEL_269:
  v147 = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v7 + 4) = v147 - 4;
  v148 = *(_DWORD *)(v147 - 4);
  v149 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v148 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j__ZdlPv_9(v149);
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#item_name"), Json::Value::isString(v5) != 1) )
  {
    v14 = v13;
    v13 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v14, (int)&v15, (int)v5);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 456),
    (int *)&v14);
  v6 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  return 1;
}


signed int __fastcall Json::Reader::decodeString(int a1, int a2, const void **a3)
{
  int v3; // r8@1
  int v4; // r10@1
  const void **v5; // r6@1
  int v6; // r0@1
  int v7; // r11@1
  _DWORD *v8; // r0@3
  int v9; // r1@3 OVERLAPPED
  int v10; // r5@3
  unsigned int v11; // r2@3
  _DWORD *v12; // r0@6
  int v13; // r5@12
  signed int v14; // r0@12
  _DWORD *v15; // r0@16
  int v16; // r1@16 OVERLAPPED
  int v17; // r4@16
  unsigned int v18; // r2@16
  _DWORD *v19; // r0@19
  _DWORD *v20; // r0@22
  int v21; // r1@22 OVERLAPPED
  unsigned int v22; // r2@22
  _DWORD *v23; // r0@27
  int v24; // r4@27
  int v25; // r1@27 OVERLAPPED
  int v26; // r10@27
  unsigned int v27; // r2@27
  _DWORD *v28; // r0@30
  _DWORD *v29; // r0@33
  int v30; // r1@33 OVERLAPPED
  unsigned int v31; // r2@33
  _DWORD *v32; // r0@40
  int v33; // r1@40 OVERLAPPED
  unsigned int v34; // r2@40
  _DWORD *v35; // r0@45
  int v36; // r1@45 OVERLAPPED
  unsigned int v37; // r2@45
  _DWORD *v38; // r0@50
  int v39; // r1@50 OVERLAPPED
  unsigned int v40; // r2@50
  unsigned int v41; // r4@56
  _BYTE *v42; // r0@57
  const void **v43; // r1@59
  _DWORD *v44; // r0@60
  int v45; // r1@60 OVERLAPPED
  unsigned int v46; // r2@60
  const void **v47; // r7@67
  _BYTE *v48; // r0@67
  _BYTE *v49; // r0@69
  int v50; // r1@69
  _BYTE *v51; // r0@71
  _BYTE *v52; // r0@73
  int v53; // r5@73
  _BYTE *v54; // r0@77
  _BYTE *v55; // r0@79
  int v56; // r5@79
  _BYTE *v57; // r0@81
  int v58; // r5@81
  char *v59; // r0@87
  unsigned int *v60; // r2@89
  signed int v61; // r1@91
  int v62; // r4@97
  int v63; // r7@97
  void *v65; // r0@100
  unsigned int *v66; // r2@101
  signed int v67; // r1@103
  int v68; // [sp+18h] [bp-40h]@100
  _BYTE *v69; // [sp+1Ch] [bp-3Ch]@56
  unsigned int v70; // [sp+20h] [bp-38h]@55
  int v71; // [sp+28h] [bp-30h]@105
  int v72; // [sp+2Ch] [bp-2Ch]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_21E6FCC(a3, (*(_QWORD *)(a2 + 4) >> 32) - 2 - *(_QWORD *)(a2 + 4));
  v6 = *(_DWORD *)(v3 + 4) + 1;
  v72 = v6;
  v7 = *(_DWORD *)(v3 + 8) - 1;
  if ( v6 == v7 )
    return 1;
  while ( 1 )
  {
    v62 = v6 + 1;
    v72 = v6 + 1;
    v63 = *(_BYTE *)v6;
    if ( v63 != 92 )
    {
      if ( v63 == 34 )
        return 1;
      v8 = *v5;
      *(_QWORD *)&v9 = *(_QWORD *)((char *)*v5 - 12);
      v10 = v9 + 1;
      if ( v9 + 1 > v11 || *(v8 - 1) >= 1 )
      {
        sub_21E6FCC(v5, v9 + 1);
        v8 = *v5;
        v9 = *((_DWORD *)*v5 - 3);
      }
      *((_BYTE *)v8 + v9) = v63;
      v12 = *v5;
      if ( (int *)((char *)*v5 - 12) != &dword_28898C0 )
        *(v12 - 1) = 0;
        *(v12 - 3) = v10;
        *((_BYTE *)v12 + v10) = byte_26C67B8[0];
      v6 = v62;
      goto LABEL_9;
    }
    if ( v62 == v7 )
      break;
    v13 = v6 + 2;
    v72 = v6 + 2;
    v14 = *(_BYTE *)(v6 + 1);
    if ( v14 > 97 )
      switch ( v14 )
        case 110:
          v20 = *v5;
          *(_QWORD *)&v21 = *(_QWORD *)((char *)*v5 - 12);
          v17 = v21 + 1;
          if ( v21 + 1 > v22 || *(v20 - 1) >= 1 )
          {
            sub_21E6FCC(v5, v21 + 1);
            v20 = *v5;
            v21 = *((_DWORD *)*v5 - 3);
          }
          *((_BYTE *)v20 + v21) = 10;
          v19 = *v5;
          if ( (int *)((char *)*v5 - 12) != &dword_28898C0 )
            break;
          v6 = v13;
          goto LABEL_9;
        case 114:
          v35 = *v5;
          *(_QWORD *)&v36 = *(_QWORD *)((char *)*v5 - 12);
          v17 = v36 + 1;
          if ( v36 + 1 > v37 || *(v35 - 1) >= 1 )
            sub_21E6FCC(v5, v36 + 1);
            v35 = *v5;
            v36 = *((_DWORD *)*v5 - 3);
          *((_BYTE *)v35 + v36) = 13;
        case 116:
          v38 = *v5;
          *(_QWORD *)&v39 = *(_QWORD *)((char *)*v5 - 12);
          v17 = v39 + 1;
          if ( v39 + 1 > v40 || *(v38 - 1) >= 1 )
            sub_21E6FCC(v5, v39 + 1);
            v38 = *v5;
            v39 = *((_DWORD *)*v5 - 3);
          *((_BYTE *)v38 + v39) = 9;
        case 117:
          if ( j_Json::Reader::decodeUnicodeCodePoint(v4, v3, &v72, v7, (int *)&v70) != 1 )
            return 0;
          v41 = v70;
          v69 = &unk_28898CC;
          if ( v70 > 0x7F )
            if ( v70 >> 11 )
            {
              if ( 0 == v70 >> 16 )
              {
                v47 = (const void **)&v69;
                sub_21E849C((char *)&v69, 3u, 0);
                v51 = v69;
                if ( *((_DWORD *)v69 - 1) >= 0 )
                {
                  sub_21E8010((const void **)&v69);
                  v51 = v69;
                }
                v51[2] = v41 & 0x3F | 0x80;
                v52 = v69;
                v53 = (v41 >> 6) & 0x3F | 0x80;
                  v52 = v69;
                v52[1] = v53;
                v49 = v69;
                LOWORD(v41) = ((unsigned __int16)v41 >> 12) | 0xE0;
                v50 = *((_DWORD *)v69 - 1);
              }
              else
                v43 = (const void **)&v69;
                if ( v70 >> 16 > 0x10 )
                  goto LABEL_87;
                sub_21E849C((char *)&v69, 4u, 0);
                v54 = v69;
                  v54 = v69;
                v54[3] = v41 & 0x3F | 0x80;
                v55 = v69;
                v56 = (v41 >> 6) & 0x3F | 0x80;
                  v55 = v69;
                v55[2] = v56;
                v57 = v69;
                v58 = (v41 >> 12) & 0x3F | 0x80;
                  v57 = v69;
                v57[1] = v58;
                v41 = (v41 >> 18) & 7 | 0xF0;
            }
            else
              v47 = (const void **)&v69;
              sub_21E849C((char *)&v69, 2u, 0);
              v48 = v69;
              if ( *((_DWORD *)v69 - 1) >= 0 )
                sub_21E8010((const void **)&v69);
                v48 = v69;
              v48[1] = v41 & 0x3F | 0x80;
              v49 = v69;
              v41 = (v41 >> 6) & 0x1F | 0xC0;
              v50 = *((_DWORD *)v69 - 1);
            if ( v50 >= 0 )
              sub_21E8010(v47);
            v43 = v47;
            *v49 = v41;
          else
            sub_21E849C((char *)&v69, 1u, 0);
            v42 = v69;
            if ( *((_DWORD *)v69 - 1) >= 0 )
              sub_21E8010((const void **)&v69);
              v42 = v69;
            *v42 = v41;
            v43 = (const void **)&v69;
LABEL_87:
          sub_21E72F0(v5, v43);
          v59 = v69 - 12;
          if ( (int *)(v69 - 12) != &dword_28898C0 )
            v60 = (unsigned int *)(v69 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v61 = __ldrex(v60);
              while ( __strex(v61 - 1, v60) );
              v61 = (*v60)--;
            if ( v61 <= 0 )
              j_j_j_j__ZdlPv_9(v59);
          v6 = v72;
        case 111:
        case 112:
        case 113:
        case 115:
          goto LABEL_100;
        default:
          if ( v14 == 98 )
            v44 = *v5;
            *(_QWORD *)&v45 = *(_QWORD *)((char *)*v5 - 12);
            v17 = v45 + 1;
            if ( v45 + 1 > v46 || *(v44 - 1) >= 1 )
              sub_21E6FCC(v5, v45 + 1);
              v44 = *v5;
              v45 = *((_DWORD *)*v5 - 3);
            *((_BYTE *)v44 + v45) = 8;
            v19 = *v5;
            if ( (int *)((char *)*v5 - 12) == &dword_28898C0 )
              v6 = v13;
              goto LABEL_9;
            if ( v14 != 102 )
LABEL_100:
              sub_21E94B4((void **)&v68, "Bad escape sequence in string");
              j_Json::Reader::addError(v4, &v68, v3, v13);
              v65 = (void *)(v68 - 12);
              if ( (int *)(v68 - 12) != &dword_28898C0 )
                v66 = (unsigned int *)(v68 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v67 = __ldrex(v66);
                  while ( __strex(v67 - 1, v66) );
                  goto LABEL_112;
LABEL_111:
                v67 = (*v66)--;
LABEL_112:
                if ( v67 <= 0 )
                  j_j_j_j__ZdlPv_9(v65);
              return 0;
            v32 = *v5;
            *(_QWORD *)&v33 = *(_QWORD *)((char *)*v5 - 12);
            v17 = v33 + 1;
            if ( v33 + 1 > v34 || *(v32 - 1) >= 1 )
              sub_21E6FCC(v5, v33 + 1);
              v32 = *v5;
              v33 = *((_DWORD *)*v5 - 3);
            *((_BYTE *)v32 + v33) = 12;
          break;
LABEL_65:
      *(v19 - 1) = 0;
      *(v19 - 3) = v17;
      *((_BYTE *)v19 + v17) = byte_26C67B8[0];
      v6 = v13;
    if ( v14 == 34 )
      v23 = *v5;
      v24 = v4;
      *(_QWORD *)&v25 = *(_QWORD *)((char *)*v5 - 12);
      v26 = v25 + 1;
      if ( v25 + 1 > v27 || *(v23 - 1) >= 1 )
        sub_21E6FCC(v5, v25 + 1);
        v23 = *v5;
        v25 = *((_DWORD *)*v5 - 3);
      *((_BYTE *)v23 + v25) = 34;
      v28 = *v5;
        *(v28 - 1) = 0;
        *(v28 - 3) = v26;
        *((_BYTE *)v28 + v26) = byte_26C67B8[0];
      v4 = v24;
    if ( v14 == 47 )
      v29 = *v5;
      *(_QWORD *)&v30 = *(_QWORD *)((char *)*v5 - 12);
      v17 = v30 + 1;
      if ( v30 + 1 > v31 || *(v29 - 1) >= 1 )
        sub_21E6FCC(v5, v30 + 1);
        v29 = *v5;
        v30 = *((_DWORD *)*v5 - 3);
      *((_BYTE *)v29 + v30) = 47;
      v19 = *v5;
        goto LABEL_65;
    else
      if ( v14 != 92 )
        goto LABEL_100;
      v15 = *v5;
      *(_QWORD *)&v16 = *(_QWORD *)((char *)*v5 - 12);
      v17 = v16 + 1;
      if ( v16 + 1 > v18 || *(v15 - 1) >= 1 )
        sub_21E6FCC(v5, v16 + 1);
        v15 = *v5;
        v16 = *((_DWORD *)*v5 - 3);
      *((_BYTE *)v15 + v16) = 92;
LABEL_9:
    if ( v6 == v7 )
      return 1;
  }
  sub_21E94B4((void **)&v71, "Empty escape sequence in string");
  j_Json::Reader::addError(v4, &v71, v3, v7);
  v65 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v71 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      goto LABEL_112;
    goto LABEL_111;
  return 0;
}


int __fastcall Json::ValueIteratorBase::computeDistance(Json::ValueIteratorBase *this, const Json::ValueIteratorBase *a2)
{
  bool v2; // zf@1
  int v3; // r5@5
  int v4; // r4@5
  int i; // r0@5
  int result; // r0@4

  v2 = *((_BYTE *)this + 4) == 0;
  if ( *((_BYTE *)this + 4) )
    v2 = *((_BYTE *)a2 + 4) == 0;
  if ( v2 )
  {
    v3 = *(_DWORD *)a2;
    v4 = 0;
    for ( i = *(_DWORD *)this; i != v3; i = sub_21D47E8(i) )
      ++v4;
    result = v4;
  }
  else
    result = 0;
  return result;
}


  if ( Json::Value::isArray(v20) == 1 )
{
    Json::Value::begin((Json::Value *)&v141, (int)v20);
    Json::Value::end((Json::Value *)&v140, (int)v20);
    while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v141, (const Json::ValueIteratorBase *)&v140) != 1 )
    {
      v21 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v141);
      v22 = Json::Value::operator[](v21, "uuid");
      sub_119C884((void **)&v137, (const char *)&unk_257BC67);
      Json::Value::asString(&v138, (int)v22, &v137);
      mce::UUID::fromString((int)&v139, &v138);
      v23 = (void *)(v138 - 12);
      if ( (int *)(v138 - 12) != &dword_28898C0 )
      {
        v41 = (unsigned int *)(v138 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
        }
        else
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      }
      v24 = (void *)(v137 - 12);
      if ( (int *)(v137 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v137 - 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v24);
      v25 = Json::Value::operator[](v21, "version");
      sub_119C884((void **)&v135, (const char *)&unk_257BC67);
      Json::Value::asString(&v136, (int)v25, &v135);
      v26 = (void *)(v135 - 12);
      if ( (int *)(v135 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v135 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v26);
      v27 = Json::Value::operator[](v21, "type");
      sub_119C884((void **)&v132, (const char *)&unk_257BC67);
      Json::Value::asString(&v133, (int)v27, &v132);
      v28 = PackTypeFromString((int **)&v133);
      v29 = (void *)(v133 - 12);
      if ( (int *)(v133 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v133 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v29);
      v30 = (void *)(v132 - 12);
      if ( (int *)(v132 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v132 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v30);
      v134 = v28;
      SemVersion::SemVersion((SemVersion *)&v125);
      if ( SemVersion::fromString((const void **)&v136, (int)&v125) == 2 )
        sub_119C884((void **)&v117, (const char *)&unk_257BC67);
        sub_119C884((void **)&v116, (const char *)&unk_257BC67);
        SemVersion::SemVersion((int)&v118, 0, 0, 1, &v117, &v116, 0);
        v126 = v119;
        v125 = v118;
        EntityInteraction::setInteractText(&v127, &v120);
        EntityInteraction::setInteractText(&v128, &v121);
        EntityInteraction::setInteractText(&v129, &v122);
        v131 = v124;
        v130 = v123;
        v31 = (void *)(v122 - 12);
        if ( (int *)(v122 - 12) != &dword_28898C0 )
          v59 = (unsigned int *)(v122 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v60 = __ldrex(v59);
            while ( __strex(v60 - 1, v59) );
          }
          else
            v60 = (*v59)--;
          if ( v60 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v31);
        v32 = (void *)(v121 - 12);
        if ( (int *)(v121 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v121 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v32);
        v33 = (void *)(v120 - 12);
        if ( (int *)(v120 - 12) != &dword_28898C0 )
          v63 = (unsigned int *)(v120 - 4);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v33);
        v34 = (void *)(v116 - 12);
        if ( (int *)(v116 - 12) != &dword_28898C0 )
          v65 = (unsigned int *)(v116 - 4);
              v66 = __ldrex(v65);
            while ( __strex(v66 - 1, v65) );
            v66 = (*v65)--;
          if ( v66 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v34);
        v35 = (void *)(v117 - 12);
        if ( (int *)(v117 - 12) != &dword_28898C0 )
          v67 = (unsigned int *)(v117 - 4);
              v68 = __ldrex(v67);
            while ( __strex(v68 - 1, v67) );
            v68 = (*v67)--;
          if ( v68 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v35);
      if ( v111 == v112 )
        HIDWORD(v36) = &v134;
        LODWORD(v36) = &v125;
        std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_emplace_back_aux<mce::UUID &,SemVersion &,PackType &>(
          (unsigned __int64 *)&v110,
          (int)&v139,
          v36);
      else
        PackIdVersion::PackIdVersion(v111, (int)&v139, (int)&v125, v134);
        v111 += 48;
      v37 = (void *)(v129 - 12);
      if ( (int *)(v129 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v129 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v37);
      v38 = (void *)(v128 - 12);
      if ( (int *)(v128 - 12) != &dword_28898C0 )
        v53 = (unsigned int *)(v128 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v38);
      v39 = (void *)(v127 - 12);
      if ( (int *)(v127 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v127 - 4);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v39);
      v40 = (void *)(v136 - 12);
      if ( (int *)(v136 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v136 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v40);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v141);
    }
  }
  Json::Value::~Value((Json::Value *)&v142);
  Json::Reader::~Reader((Json::Reader *)&v143);
  v69 = std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<char const[6]>>(
          *(_QWORD *)(v3 + 76),
          (const void **)(*(_QWORD *)(v3 + 76) >> 32),
          "music");
  v70 = *(const void ***)(v3 + 80);
  if ( v69 == v70 )
    sub_119C884((void **)&v109, "mcaddon");
  else
    sub_119C854(&v109, (int *)&Util::EMPTY_STRING);
  if ( *(_DWORD *)(v115 - 12) )
  {
    sub_119C854(&v101, &v115);
    sub_119C854(&v102, &v109);
    sub_119C854(&v103, &v113);
    v71 = v111;
    v72 = 0;
    ptr = 0;
    v105 = 0;
    v106 = 0;
    v73 = -1431655765 * ((v111 - v110) >> 4);
    v74 = v111;
    if ( v111 != v110 )
      if ( v73 >= 0x5555556 )
        sub_119C874();
      v72 = operator new(v111 - v110);
      v71 = v111;
      v74 = v110;
    ptr = v72;
    v105 = (int)v72;
    v106 = (char *)v72 + 48 * v73;
    v105 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<PackIdVersion const*,std::vector<PackIdVersion,std::allocator<PackIdVersion>>>,PackIdVersion*>(
             v74,
             v71,
             (int)v72);
    v75 = 0;
    if ( v69 != v70 )
      v75 = 1;
    v107 = v75;
    v76 = sub_119C854(&v108, v2 + 1);
    DownloadMonitor::CachedContentDetails::CachedContentDetails(
      (DownloadMonitor::CachedContentDetails *)(v76 + 1),
      (const DownloadMonitor::CachedContentDetails *)&v101);
    v144 = v98 + 148;
    std::_Hashtable<std::string,std::pair<std::string const,DownloadMonitor::CachedContentDetails>,std::allocator<std::pair<std::string const,DownloadMonitor::CachedContentDetails>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert<std::pair<std::string const,DownloadMonitor::CachedContentDetails> const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,DownloadMonitor::CachedContentDetails>,true>>>>(
      (int *)&v100,
      (unsigned __int64 *)(v98 + 148),
      (int **)&v108,
      &v144);
    std::pair<std::string const,DownloadMonitor::CachedContentDetails>::~pair((int)&v108);
    std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&ptr);
    v77 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) != &dword_28898C0 )
      v92 = (unsigned int *)(v103 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v77);
    v78 = (void *)(v102 - 12);
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v94 = (unsigned int *)(v102 - 4);
          v95 = __ldrex(v94);
        while ( __strex(v95 - 1, v94) );
        v95 = (*v94)--;
      if ( v95 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v78);
    v79 = (void *)(v101 - 12);
    if ( (int *)(v101 - 12) != &dword_28898C0 )
      v96 = (unsigned int *)(v101 - 4);
          v97 = __ldrex(v96);
        while ( __strex(v97 - 1, v96) );
        v97 = (*v96)--;
      if ( v97 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v79);
  if ( !v2[4] )
    sub_119C8E4();
  ((void (__fastcall *)(int *, int *, int *, int *))v2[5])(v2 + 2, &v115, &v109, &v113);
  v80 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v109 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
    else
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v80);
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&v110);
  v81 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v113 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v81);
  v82 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)((char *)s1 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v82);
  v83 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v115 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v83);
}


char *__fastcall Json::StyledStreamWriter::pushValue(int a1, int *a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@2
  char *result; // r0@3

  v2 = a1;
  if ( *(_BYTE *)(a1 + 28) )
  {
    v3 = *(_QWORD *)(a1 + 4);
    if ( (_DWORD)v3 == HIDWORD(v3) )
    {
      result = j_j_j__ZNSt6vectorISsSaISsEE19_M_emplace_back_auxIJRKSsEEEvDpOT__5((unsigned __int64 *)a1, a2);
    }
    else
      sub_21E8AF4((int *)v3, a2);
      result = (char *)(*(_DWORD *)(v2 + 4) + 4);
      *(_DWORD *)(v2 + 4) = result;
  }
  else
    result = sub_21CBF38(*(char **)(a1 + 12), *a2, *(_DWORD *)(*a2 - 12));
  return result;
}


  if ( Json::Value::isNull(v5)
{
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#item_name"), Json::Value::isString(v6) != 1) )
  {
    v20 = v19;
    v7 = (char *)&unk_28898CC;
    v19 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v20, (int)&v21, (int)v6);
    v7 = v19;
  v8 = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  v9 = Json::Value::operator[]((Json::Value *)(*(_DWORD *)(v4 + 464) + 8), "contentItems");
  v10 = (Json::Value *)Json::Value::operator[](v9, *(_DWORD *)(v2 + 4));
  v11 = Json::Value::operator[](v10, "value");
  Json::Value::Value((int)&v18, (const char **)&v20);
  Json::Value::operator=(v11, (const Json::Value *)&v18);
  Json::Value::~Value((Json::Value *)&v18);
  v12 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v20 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return 1;
}


  if ( !Json::Value::isNull((Json::Value *)(v2 + 8)) && Json::Value::isObject((Json::Value *)(v2 + 8)) == 1 )
{
    v4 = (Json::Value *)Json::Value::operator[](v2 + 8, "#collection_index");
    if ( Json::Value::isInt(v4) || Json::Value::isUInt(v4) == 1 )
    {
      v5 = Json::Value::asInt(v4, 0);
      if ( v5 >= 0 )
      {
        v6 = RealmsWhitelistScreenController::_getListFromCollection(v3, (UIPropertyBag *)v2);
        MinecraftScreenController::_getWeakPtrToThis<RealmsWhitelistScreenController>((int)&v22, (int)v3);
        v7 = *(_QWORD *)&v22;
        if ( v23 )
        {
          v8 = (unsigned int *)(v23 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 + 1, v8) );
          }
          else
            ++*v8;
        }
        v21 = 0;
        v10 = operator new(0x10u);
        *(_QWORD *)v10 = v7;
        if ( HIDWORD(v7) )
          v12 = (unsigned int *)(HIDWORD(v7) + 8);
            {
              LODWORD(v11) = __ldrex(v12);
              HIDWORD(v11) = __strex(v11 + 1, v12);
            }
            while ( HIDWORD(v11) );
            ++*v12;
        v13 = sub_121E128;
        v10[2] = v6;
        v10[3] = v5;
        LODWORD(v11) = sub_121DCBC;
        v20 = v10;
        *(_QWORD *)&v21 = *(__int64 *)((char *)&v11 - 4);
        LODWORD(v11) = &v20;
        MinecraftScreenController::_displayCustomModalPopup((int)v3, (int)&v24, v11);
        if ( v21 )
          v21();
          v14 = (unsigned int *)(HIDWORD(v7) + 8);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 12))(HIDWORD(v7));
        v16 = v23;
          v17 = (unsigned int *)(v23 + 8);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 == 1 )
            (*(void (**)(void))(*(_DWORD *)v16 + 12))();
      }
    }
  }
  ModalScreenData::~ModalScreenData((ModalScreenData *)&v24);
  return 0;
}


void __fastcall Json::StyledWriter::indent(Json::StyledWriter *this)
{
  Json::StyledWriter *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // [sp+8h] [bp-18h]@1

  v1 = this;
  sub_21E6E1C(&v5, *((_DWORD *)this + 7), 32);
  sub_21E72F0((const void **)v1 + 5, (const void **)&v5);
  v2 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v3 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  v7 = v14;
  v8 = v5 == -1;
  v9 = 0;
  if ( v5 != -1 )
    v8 = *(_DWORD *)(v14 - 12) == 0;
  if ( !v8 )
    v9 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 136))(v3, &v14);
    v7 = v14;
  v10 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  return v9;
}


Json::Value::CZString *__fastcall Json::Value::CZString::CZString(Json::Value::CZString *this, const Json::Value::CZString *a2)
{
  const Json::Value::CZString *v2; // r5@1
  Json::Value::CZString *v3; // r4@1
  __int64 v4; // kr00_8@1
  size_t v5; // r0@3
  int v6; // r8@3
  _BYTE *v7; // r0@3
  _BYTE *v8; // r9@3
  _BYTE *v9; // r6@3
  signed int v10; // r1@7
  Json::Value::CZString *result; // r0@9

  v2 = a2;
  v3 = this;
  v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 >> 32 )
  {
    if ( (_DWORD)v4 )
    {
      v5 = j_strlen_0((const char *)v4);
      v6 = v5;
      v7 = j_malloc(v5 + 1);
      v8 = v7;
      v9 = 0;
      if ( v7 )
      {
        j___aeabi_memcpy_0((int)v7, v4, v6);
        v8[v6] = 0;
        v9 = v8;
      }
    }
    else
  }
  else
    v9 = (_BYTE *)v4;
  *(_DWORD *)v3 = v9;
  v10 = HIDWORD(v4);
  if ( HIDWORD(v4) )
    v10 = 1;
  result = v3;
  if ( !*(_DWORD *)v2 )
    v10 = HIDWORD(v4);
  *((_DWORD *)v3 + 1) = v10;
  return result;
}


    && Json::Value::empty((Json::Value *)&v31) != 1 )
{
    goto LABEL_33;
  }
  if ( Json::Value::isNumeric((Json::Value *)&v31) == 1 )
  {
    __asm
    {
      VLDR            D0, =0.0
      VMOV            R2, R3, D0
    }
    _R0 = Json::Value::asDouble((Json::Value *)&v31, v7, _R2);
      VMOV            D0, R0, R1
      VCMPE.F64       D0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !_ZF )
      goto LABEL_33;
  if ( Json::Value::isString((Json::Value *)&v31) == 1 )
    sub_119C884((void **)&v29, (const char *)&unk_257BC67);
    Json::Value::asString(&v30, (int)&v31, &v29);
    v14 = (void *)(v30 - 12);
    v15 = *(_DWORD *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v16 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v29 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    if ( v15 )
LABEL_33:
      Json::Value::begin((Json::Value *)&v28, v2);
      v17 = (UIResolvedDef *)((char *)v3 + 24);
      while ( 1 )
        Json::Value::end((Json::Value *)&v27, v2);
        if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v28, (const Json::ValueIteratorBase *)&v27) == 1 )
          break;
        v18 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v28);
        v19 = Json::Value::operator[](v17, v18);
        v20 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v28);
        v21 = (const Json::Value *)Json::Value::operator[](v2, v20);
        Json::Value::operator=(v19, v21);
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v28);
  return Json::Value::~Value((Json::Value *)&v31);
}


int __fastcall Json::Value::Value(int result, int a2, __int64 a3)
{
  *(_BYTE *)(result + 8) = 1;
  *(_DWORD *)(result + 12) = 0;
  *(_QWORD *)result = a3;
  return result;
}


int __fastcall Json::Value::end(int result, int a2)
{
  int v2; // r1@2

  if ( (*(_WORD *)(a2 + 8) & 0xFE) == 6 && (v2 = *(_DWORD *)a2) != 0 )
  {
    *(_DWORD *)result = v2 + 4;
    *(_BYTE *)(result + 4) = 0;
  }
  else
    *(_DWORD *)result = 0;
    *(_BYTE *)(result + 4) = 1;
  return result;
}


Json::StyledWriter *__fastcall Json::Value::toStyledString(Json::Value *this, const Json::Value *a2)
{
  Json::Value *v2; // r5@1
  const Json::Value *v3; // r4@1
  char v5; // [sp+4h] [bp-34h]@1

  v2 = this;
  v3 = a2;
  j_Json::StyledWriter::StyledWriter((Json::StyledWriter *)&v5);
  j_Json::StyledWriter::write(v2, (const Json::Value *)&v5, v3);
  return j_Json::StyledWriter::~StyledWriter((Json::StyledWriter *)&v5);
}


int __fastcall Json::StyledWriter::StyledWriter(int result)
{
  *(_DWORD *)result = &off_2725B28;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  *(_DWORD *)(result + 24) = 74;
  *(_DWORD *)(result + 28) = 3;
  return result;
}


      if ( Json::Value::isObject(v60) == 1 )
{
        if ( Json::Value::isNull(v58) || Json::Value::isObject(v58) != 1 )
          Json::Value::operator=((int)v58, v60);
        else
          sub_DBE790(v58, (int)v60, (int *)&s1, v61, v99, a7);
      }
LABEL_168:
      v9 = (Json::ValueIteratorBase *)&v119;
      v97 = (char *)s1 - 12;
      if ( (int *)((char *)s1 - 12) != v59 )
      {
        v11 = (unsigned int *)((char *)s1 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v97);
      goto LABEL_169;
    }
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v102 = v18;
    ptr = 0;
    if ( v22 )
    {
      do
        v26 = v23;
        v27 = sub_119C8B4(v20, 47, v25);
        if ( v27 == (char *)-1 )
          v27 = (char *)v22;
        v28 = (char *)s1 + v25;
        v29 = (int)&v27[-v25];
        if ( (char *)v24 == ptr )
          v31 = (v24 - (signed int)v26) >> 3;
          v32 = (v24 - (signed int)v26) >> 3;
          if ( !v31 )
            v32 = 1;
          v33 = v32 + ((v24 - (signed int)v26) >> 3);
          v34 = v32 + ((v24 - (signed int)v26) >> 3);
          if ( 0 != v33 >> 29 )
            v34 = 0x1FFFFFFF;
          if ( v33 < v32 )
          if ( v34 >= 0x20000000 )
            sub_119C874();
          v35 = (char *)operator new(8 * v34);
          v36 = v35;
          v37 = (int)&v35[8 * v31];
          *(_DWORD *)&v36[8 * v31] = v29;
          v38 = v26;
          *(_DWORD *)(v37 + 4) = v28;
          v39 = v36;
          v30 = (unsigned int)v36;
          if ( v26 != (char *)v24 )
          {
            do
            {
              v40 = *(_QWORD *)v38;
              v38 += 8;
              *(_QWORD *)v39 = v40;
              v39 += 8;
            }
            while ( (char *)v24 != v38 );
            v30 = (unsigned int)&v36[((v24 - 8 - (_DWORD)v26) & 0xFFFFFFF8) + 8];
          }
          if ( v26 )
            operator delete(v26);
          v20 = (int *)&s1;
          v23 = v36;
          ptr = &v36[8 * v34];
          *(_DWORD *)v24 = v29;
          *(_DWORD *)(v24 + 4) = v28;
          v30 = v24;
          v23 = v26;
        v22 = (unsigned int)v106;
        v25 = (unsigned int)(v27 + 1);
        v24 = v30 + 8;
      while ( v27 < v106 );
    v41 = *(_DWORD *)v23;
    if ( *(_DWORD *)v23 )
      v42 = sub_119CB28(*(_DWORD *)v23, 0);
      v43 = v42 + 3;
      v44 = 0;
        v45 = (int)v42 + v44;
        v46 = *(_BYTE *)(*((_DWORD *)v23 + 1) + v44++);
        *(_BYTE *)(v45 + 12) = v46;
      while ( v41 != v44 );
      if ( v42 != v105 )
        v42[2] = 0;
        *v42 = v41;
        *((_BYTE *)v43 + v41) = byte_26C67B8[0];
    else
      v43 = v105 + 3;
    ptra = (size_t *)(v43 - 3);
    v62 = sub_119C9A4(v43, *(v43 - 3), -955291385);
    v63 = *a5;
    v64 = v62 % (*a5 >> 32);
    v65 = *(_DWORD *)(*a5 + 4 * v64);
    if ( v65 )
      v107 = v43;
      v66 = *(_DWORD *)v65;
      v98 = v23;
      v67 = *(_DWORD *)(*(_DWORD *)v65 + 12);
      while ( 1 )
        if ( v67 == v62 )
          v68 = *(_DWORD **)(v66 + 4);
          if ( *ptra == *(v68 - 3) && !memcmp(v107, v68, *ptra) )
            break;
        LODWORD(v63) = *(_DWORD *)v66;
        if ( *(_DWORD *)v66 )
          v67 = *(_DWORD *)(v63 + 12);
          v65 = v66;
          v66 = *(_DWORD *)v66;
          if ( *(_DWORD *)(v63 + 12) % HIDWORD(v63) == v64 )
            continue;
        goto LABEL_75;
      if ( !v65 )
LABEL_75:
        v69 = 0;
        goto LABEL_76;
      v69 = *(_DWORD *)v65;
LABEL_76:
      v23 = v98;
      v43 = v107;
      v69 = 0;
    if ( (int *)ptra != v105 )
      v83 = (unsigned int *)(v43 - 1);
      if ( &pthread_create )
        __dmb();
        do
          v13 = __ldrex(v83);
        while ( __strex(v13 - 1, v83) );
      else
        v13 = (*v83)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(ptra);
    v70 = v24 - (_DWORD)v23;
    if ( v69 )
      v58 = (Json::Value *)Json::Value::operator[](v101, (const char **)(v69 + 8));
      if ( v70 <= 8 )
        v59 = v105;
        goto LABEL_160;
      v71 = 1;
      v59 = v105;
      while ( Json::Value::isMember(v58, "controls") == 1 )
        v72 = (Json::Value *)Json::Value::operator[](v58, "controls");
        if ( Json::Value::isNull(v72) )
          break;
        if ( Json::Value::isArray(v72) != 1 )
        Json::Value::begin((Json::Value *)&v124, (int)v72);
        Json::Value::end((Json::Value *)&v123, (int)v72);
        v105 = v59;
        if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v124, (const Json::ValueIteratorBase *)&v123) )
        while ( 1 )
          v75 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v124);
          if ( !Json::Value::isNull(v75) && Json::Value::isObject(v75) == 1 )
            Json::Value::begin((Json::Value *)&v122, (int)v75);
            Json::Value::end((Json::Value *)&v121, (int)v75);
            if ( !Json::ValueIteratorBase::isEqual(
                    (Json::ValueIteratorBase *)&v122,
                    (const Json::ValueIteratorBase *)&v121) )
              v76 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v122);
              v77 = (int *)sub_119C884((void **)&v120, v76);
              v78 = sub_119C8B4(v77, 64, 0);
              v79 = v120;
              if ( v78 == (char *)-1 )
                v78 = *(char **)(v120 - 12);
              if ( v78 == *(char **)&v23[8 * v71] )
              {
                if ( v78 )
                {
                  v80 = 0;
                  while ( *(_BYTE *)(v120 + v80) == *(_BYTE *)(*(_DWORD *)&v23[8 * v71 + 4] + v80) )
                  {
                    if ( v78 == (char *)++v80 )
                      goto LABEL_105;
                  }
                  v81 = 0;
                }
                else
LABEL_105:
                  v58 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v122);
                  v79 = v120;
                  v81 = 1;
              }
              else
                v81 = 0;
              v82 = (void *)(v79 - 12);
              if ( (int *)(v79 - 12) != v59 )
                v73 = (unsigned int *)(v79 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v74 = __ldrex(v73);
                  while ( __strex(v74 - 1, v73) );
                  v74 = (*v73)--;
                if ( v74 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v82);
              if ( v81 )
                break;
          Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v124);
          if ( Json::ValueIteratorBase::isEqual(
                 (Json::ValueIteratorBase *)&v124,
                 (const Json::ValueIteratorBase *)&v123) )
            goto LABEL_126;
        if ( !v58 )
          goto LABEL_127;
        if ( ++v71 >= v70 >> 3 )
          goto LABEL_160;
LABEL_126:
      v105 = v59;
LABEL_127:
    sub_119C854(&v110, a6);
    sub_119C854(&v111, (int *)&s1);
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v112 = (char *)operator new(8u);
    v114 = v112 + 8;
    v113 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                     (int)&v110,
                     (int)&v112,
                     (int)v112);
    UIPackError::UIPackError(&v115, 3, (unsigned __int64 *)&v112);
    PackReport::addError<UIPackError>(v100, (int)&v115);
    v115 = &off_26D9084;
    v85 = (void *)HIDWORD(v116);
    v86 = (void *)v116;
    v59 = v105;
    if ( (_DWORD)v116 != HIDWORD(v116) )
        v89 = (int *)(*(_DWORD *)v86 - 12);
        if ( v89 != v105 )
          v87 = (unsigned int *)(*(_DWORD *)v86 - 4);
          if ( &pthread_create )
            __dmb();
              v88 = __ldrex(v87);
            while ( __strex(v88 - 1, v87) );
          else
            v88 = (*v87)--;
          if ( v88 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v89);
        v86 = (char *)v86 + 4;
      while ( v86 != v85 );
      v86 = (void *)v116;
    if ( v86 )
      operator delete(v86);
    v90 = (int)v113;
    v91 = v112;
    if ( v112 != v113 )
        v94 = (int *)(*(_DWORD *)v91 - 12);
        if ( v94 != v105 )
          v92 = (unsigned int *)(*(_DWORD *)v91 - 4);
              v93 = __ldrex(v92);
            while ( __strex(v93 - 1, v92) );
            v93 = (*v92)--;
          if ( v93 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v94);
        v91 += 4;
      while ( v91 != (char *)v90 );
      v91 = v112;
    if ( v91 )
      operator delete(v91);
    v95 = (void *)(v111 - 12);
    if ( (int *)(v111 - 12) != v105 )
      v14 = (unsigned int *)(v111 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v95);
    v96 = (void *)(v110 - 12);
    if ( (int *)(v110 - 12) != v105 )
      v16 = (unsigned int *)(v110 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v96);
    v58 = 0;
LABEL_160:
    v61 = (v70 >> 3) - 1;
    if ( v23 )
      operator delete(v23);
    v7 = v104;
    v10 = (Json::Value *)&v118;
    v60 = v102;
    if ( !v58 )
      goto LABEL_168;
    goto LABEL_163;
  }
  return result;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v22;
    v23 = v22;
    v22 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v23, (int)&v25, (int)v5);
    v6 = v23;
  sub_21E94B4((void **)&v21, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v24 = v21;
    v21 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v24, (int)&v26, (int)v7);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 456),
    (int *)&v24);
  v8 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v24 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  v9 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (char *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v22 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return 1;
}


int __fastcall Json::Value::Value(int result, unsigned int a2)
{
  *(_BYTE *)(result + 8) = 2;
  *(_DWORD *)(result + 12) = 0;
  *(_QWORD *)result = a2;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  v6 = *(_DWORD *)(v3 + 452);
  sub_119C884((void **)&v11, (const char *)&unk_257BC67);
  BookScreenController::_addTextPageAt(v3, v4 + 2 * v6, &v11);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  return 1;
}


  if ( Json::Value::isNull(v4) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, v5);
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  v8 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(*(SkinPackCollectionModel **)(v3 + 432), v6);
  SkinPackModel::incrementFirstVisibleSkinIndex((SkinPackModel *)v8, 5);
  return 1;
}


      if ( Json::Value::isNull(v8)
{
        || (v9 = (Json::Value *)Json::Value::operator[]((int)v8, "#panel_title"), Json::Value::isString(v9) != 1) )
      {
        v10 = 1;
        v24 = v23;
        v23 = (char *)&unk_28898CC;
      }
      else
        jsonValConversion<std::string>::as((int *)&v24, (int)&v25, (int)v9);
    }
    else
    {
      sub_21E94B4((void **)&v24, (const char *)&unk_257BC67);
      v10 = 0;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v5 + 528),
      (int *)&v24);
    v12 = v24 - 12;
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    if ( v10 == 1 )
      v13 = v23 - 12;
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v23 - 4);
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
          j_j_j_j__ZdlPv_9(v13);
    if ( *(_BYTE *)(v2 + 9) )
      *(_BYTE *)(v5 + 624) = 1;
    if ( v6 != v4 )
      v14 = *(_DWORD *)(v5 + 424);
      sub_21E94B4((void **)&v22, (const char *)&unk_257BC67);
      MinecraftScreenModel::fireEventScreenChanged(v14, &v22);
      v15 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v22 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
    result = 1;
  }
  else
  {
    result = 0;
  return result;
}


  if ( Json::Value::isNull(v4) || Json::Value::isObject(v4) != 1 )
{
    Json::Value::Value((Json::Value *)&v10, (const Json::Value *)&v9);
  }
  else
  {
    v5 = (const Json::Value *)Json::Value::operator[]((int)v4, "#collections");
    Json::Value::Value((Json::Value *)&v10, v5);
  Json::Value::~Value((Json::Value *)&v9);
  v6 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v10, v2);
  v7 = Json::Value::asInt(v6, -1);
  Json::Value::~Value((Json::Value *)&v10);
  return v7;
}


_DWORD *__fastcall Json::Value::Value(_DWORD *result, int a2)
{
  _DWORD *v2; // r4@1
  _DWORD *v3; // r0@3

  v2 = result;
  *((_WORD *)result + 4) = *((_WORD *)result + 4) & 0xFE00 | (unsigned __int8)a2;
  result[3] = 0;
  switch ( a2 )
  {
    case 1:
    case 2:
    case 3:
      *result = 0;
      result[1] = 0;
      break;
    case 6:
    case 7:
      v3 = j_operator new(0x18u);
      v3[2] = 0;
      v3[3] = 0;
      v3[4] = 0;
      v3[5] = 0;
      v3[1] = 0;
      v3[3] = v3 + 1;
      v3[4] = v3 + 1;
      goto LABEL_5;
    case 4:
      v3 = 0;
LABEL_5:
      *v2 = v3;
      result = v2;
    case 5:
      *(_BYTE *)result = 0;
    default:
      return result;
  }
  return result;
}


int __fastcall Json::Value::Value(int result, int a2, double _R2)
{
  __asm { VMOV            D0, R2, R3 }
  *(_BYTE *)(result + 8) = 3;
  *(_DWORD *)(result + 12) = 0;
  __asm { VSTR            D0, [R0] }
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  HIDWORD(v6) = *(_DWORD *)(v3 + 440);
  v7 = *(_QWORD *)(*(_DWORD *)(HIDWORD(v6) + 4 * v4) + 320);
  if ( (_DWORD)v7 != HIDWORD(v7) )
    while ( 1 )
    {
      v8 = *(_DWORD *)(v3 + 436);
      *(_QWORD *)&v9 = *(_QWORD *)v8;
      v11 = *(_DWORD *)v7;
      v12 = ((signed int)v10 - v9) >> 4;
      if ( v12 >= 1 )
      {
        v13 = *(_QWORD *)(v11 + 8);
        v14 = v12 + 1;
        do
        {
          v15 = *(_QWORD *)(*(_DWORD *)v9 + 8) == v13;
          v16 = v9;
          if ( *(_QWORD *)(*(_DWORD *)v9 + 8) != v13 )
          {
            v16 = v9 + 4;
            v15 = *(_QWORD *)(*(_DWORD *)(v9 + 4) + 8) == v13;
          }
          if ( v15 )
            goto LABEL_32;
          v16 = v9 + 8;
          v17 = *(_QWORD *)(*(_DWORD *)(v9 + 8) + 8) == v13;
          if ( *(_QWORD *)(*(_DWORD *)(v9 + 8) + 8) != v13 )
            v16 = v9 + 12;
            v17 = *(_QWORD *)(*(_DWORD *)(v9 + 12) + 8) == v13;
          if ( v17 )
          --v14;
          v9 += 16;
        }
        while ( v14 > 1 );
      }
      if ( 1 == ((signed int)v10 - v9) >> 2 )
        v20 = *(_QWORD *)(v11 + 8) >> 32;
        v19 = *(_QWORD *)(v11 + 8);
        v16 = v9;
        goto LABEL_28;
      v18 = ((signed int)v10 - v9) >> 2;
      if ( v18 == 3 )
        if ( *(_QWORD *)(v11 + 8) == *(_QWORD *)(*(_DWORD *)v9 + 8) )
          goto LABEL_32;
        v16 = v9 + 4;
      else
        if ( v18 != 2 )
          v16 = (int)v10;
      if ( *(_QWORD *)(*(_DWORD *)v16 + 8) != __PAIR__(v20, v19) )
        v16 += 4;
LABEL_28:
        if ( *(_QWORD *)(*(_DWORD *)v16 + 8) != __PAIR__(v20, v19) )
LABEL_32:
      if ( (_DWORD *)v16 == v10 )
        v22 = v10;
        v21 = (_QWORD *)(v11 + 8);
        v22 = (_DWORD *)v16;
        while ( v10 - 1 != (_DWORD *)v16 )
          v23 = *(_DWORD *)(v16 + 4);
          v24 = v16 + 4;
          v16 += 4;
          if ( *(_QWORD *)(v23 + 8) != *v21 )
            *v22 = v23;
            ++v22;
            v16 = v24;
        v10 = *(_DWORD **)(v8 + 4);
      v25 = (int)(v22 + 1);
      v26 = v22 + 1 == v10;
      if ( v22 + 1 != v10 )
        v26 = v10 == (_DWORD *)v25;
      if ( !v26 )
        _aeabi_memmove4(v22, v25);
      LODWORD(v7) = v7 + 4;
      *(_DWORD *)(v8 + 4) = v10 - 1;
      if ( (_DWORD)v7 == HIDWORD(v7) )
        HIDWORD(v6) = *(_DWORD *)(v3 + 440);
        break;
    }
  *(_DWORD *)(v3 + 444) = HIDWORD(v6);
  LODWORD(v6) = *(_DWORD *)(v3 + 432);
  ContentManager::populateDependencies(v6);
  for ( i = *(_QWORD *)*(_DWORD *)(v3 + 436); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
    v28 = *(_DWORD *)(*(_DWORD *)i + 32) - 3;
    v29 = v28 >= 1;
    v15 = v28 == 1;
    v30 = 0;
    if ( !v15 && v29 )
      v30 = 1;
    if ( (unsigned __int64)(*(_QWORD *)(*(_DWORD *)i + 32) - 3LL) >> 32 )
      v31 = 1;
      v31 = v30;
    if ( !v31 )
      HIDWORD(v32) = *(_DWORD *)i + 332;
      LODWORD(v32) = v3;
      StorageDependencyScreenController::_populateAllDependencies(v32);
  return 1;
}


  if ( Json::Value::isUInt(v8) )
{
    v10 = Json::Value::asUInt64(v8, v9, 0LL);
    v11 = *v7;
    v9 = HIDWORD(v10) ^ (*v7 >> 32);
    result = v10 ^ *v7 | v9;
    if ( !result )
      return result;
  }
  else
  {
  Json::Value::Value((Json::Value *)&v13, v9, v11);
  Json::Value::operator=((int)v8, (const Json::Value *)&v13);
  Json::Value::~Value((Json::Value *)&v13);
  return UIPropertyBag::_handlePropertyChangedNotifications(v4, v6, v5);
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  MinecraftScreenModel::setLastSelectedSlot(*(_DWORD *)(v3 + 424), v4, 0);
  return 0;
}


Json::Value *__fastcall Json::Path::resolve(Json::Value *this, unsigned __int64 *a2, _BYTE *a3, Json::Value *a4)
{
  int v4; // r7@1
  int v5; // r11@1
  Json::Value *v6; // r9@1
  int v7; // r0@3
  _BYTE *v8; // r4@3
  int v9; // r5@5
  bool v10; // zf@5
  unsigned int v11; // r6@9
  unsigned int v12; // r0@12
  int v13; // r0@13
  bool v14; // zf@13
  const char *v15; // r1@18
  const char *v16; // r6@18
  int v17; // r5@18
  int v18; // r0@18
  int v19; // r4@18
  int v20; // r8@21
  const char *v21; // r0@22
  bool v22; // zf@32
  int v23; // r3@43
  int v24; // r0@43
  int v25; // r2@43
  int i; // r1@43
  unsigned int v27; // r2@50
  bool v28; // cf@50
  Json::Value *v29; // r0@55
  const Json::Value *v30; // r1@55
  Json::Value *v32; // [sp+0h] [bp-28h]@2

  v5 = *a2 >> 32;
  v4 = *a2;
  v6 = this;
  if ( v4 != v5 )
  {
    v32 = a4;
    do
    {
      v7 = *(_DWORD *)(v4 + 8);
      v8 = a3;
      if ( v7 == 2 )
      {
        v13 = a3[8];
        v14 = v13 == 0;
        if ( a3[8] )
          v14 = v13 == 7;
        if ( !v14 || !a3[8] )
          goto LABEL_56;
        v15 = *(const char **)a3;
        v16 = *(const char **)v4;
        v17 = *(_DWORD *)a3 + 4;
        v18 = *(_DWORD *)(*(_DWORD *)a3 + 8);
        v19 = *(_DWORD *)a3 + 4;
        if ( v18 )
        {
          if ( v16 )
          {
            v19 = *(_DWORD *)a3 + 4;
            do
            {
              v20 = v19;
              v19 = v18;
              while ( 1 )
              {
                v21 = *(const char **)(v19 + 16);
                if ( !v21 || j_strcmp_0(v21, v16) >= 0 )
                  break;
                v19 = *(_DWORD *)(v19 + 12);
                if ( !v19 )
                {
                  v19 = v20;
                  goto LABEL_31;
                }
              }
              v18 = *(_DWORD *)(v19 + 8);
            }
            while ( v18 );
          }
          else
              v18 = *(_DWORD *)(v18 + 8);
        }
LABEL_31:
        if ( v19 == v17 )
        v22 = v16 == 0;
        if ( v16 )
          v15 = *(const char **)(v19 + 16);
          v22 = v15 == 0;
        if ( v22 )
          if ( *(_DWORD *)(v19 + 20) )
            goto LABEL_56;
        else if ( j_strcmp_0(v16, v15) < 0 )
        a3 = (_BYTE *)(v19 + 24);
        if ( (_UNKNOWN *)(v19 + 24) == &Json::Value::null )
LABEL_56:
          v29 = v6;
          v30 = v32;
          return j_Json::Value::Value(v29, v30);
      }
      else if ( v7 == 1 )
        v9 = a3[8];
        v10 = v9 == 6;
        if ( v9 != 6 )
          v10 = v9 == 0;
        if ( !v10 )
        v11 = *(_DWORD *)(v4 + 4);
        if ( v9 != 7 )
          if ( v9 == 6 && *(_DWORD *)(*(_DWORD *)a3 + 20) )
            v12 = *(_DWORD *)(sub_21D4894(*(_DWORD *)a3 + 4) + 20) + 1;
LABEL_41:
            if ( v12 > v11 )
              goto LABEL_56;
          a3 = &Json::Value::null;
          if ( v9 )
            v23 = *(_DWORD *)(*(_DWORD *)v8 + 8);
            v24 = *(_DWORD *)v8 + 4;
            v25 = *(_DWORD *)v8 + 4;
            for ( i = *(_DWORD *)v8 + 4; v23; v25 = i )
              i = v23;
              while ( *(_DWORD *)(i + 20) < v11 )
                i = *(_DWORD *)(i + 12);
                if ( !i )
                  i = v25;
                  goto LABEL_49;
              v23 = *(_DWORD *)(i + 8);
LABEL_49:
            a3 = &Json::Value::null;
            if ( i != v24 )
              v27 = *(_DWORD *)(i + 20);
              v28 = v27 >= v11;
              v10 = v27 == v11;
              a3 = &Json::Value::null;
              if ( !v10 && v28 )
                i = *(_DWORD *)v8 + 4;
              if ( i != v24 )
                a3 = (_BYTE *)(i + 24);
          goto LABEL_54;
        v12 = *(_DWORD *)(*(_DWORD *)a3 + 20);
        goto LABEL_41;
LABEL_54:
      v4 += 12;
    }
    while ( v4 != v5 );
  }
  v29 = v6;
  v30 = (const Json::Value *)a3;
  return j_Json::Value::Value(v29, v30);
}


  if ( Json::Value::isNull(v4) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, v5);
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  *(_DWORD *)(v3 + 464) = v6;
  return 1;
}


char *__fastcall Json::StyledStreamWriter::writeWithIndent(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@1
  char v7; // [sp+7h] [bp-11h]@1

  v2 = a1;
  v3 = a2;
  v4 = *(char **)(a1 + 12);
  v7 = 10;
  v5 = sub_21CBF38(v4, (int)&v7, 1);
  sub_21CBF38(v5, *(_DWORD *)(v2 + 16), *(_DWORD *)(*(_DWORD *)(v2 + 16) - 12));
  return sub_21CBF38(*(char **)(v2 + 12), *v3, *(_DWORD *)(*v3 - 12));
}


const char **__fastcall Json::Path::resolve(unsigned __int64 *a1, const char **a2)
{
  int i; // r5@1
  int v3; // r8@1
  int v4; // r0@2
  const char **v5; // r2@2
  const char *v6; // r1@5
  unsigned int v7; // r0@5
  int v8; // r2@5
  int v9; // r7@5
  int v10; // r1@5
  int j; // r3@5
  const char *v12; // r1@13
  const char *v13; // r4@13
  int v14; // r6@13
  int v15; // r0@13
  int v16; // r10@13
  int v17; // r7@13
  int v18; // r11@15
  const char *v19; // r0@16
  unsigned int v20; // r1@26
  bool v21; // cf@26
  bool v22; // zf@32

  v3 = *a1 >> 32;
  for ( i = *a1; i != v3; i += 12 )
  {
    v4 = *(_DWORD *)(i + 8);
    v5 = a2;
    if ( v4 == 2 )
    {
      a2 = (const char **)&Json::Value::null;
      if ( *((_BYTE *)v5 + 8) )
      {
        v12 = *v5;
        v13 = *(const char **)i;
        v14 = (int)(*v5 + 4);
        v15 = *((_DWORD *)*v5 + 2);
        v16 = (int)(*v5 + 4);
        v17 = (int)(*v5 + 4);
        if ( v15 )
        {
          v17 = (int)(*v5 + 4);
          if ( v13 )
          {
            do
            {
              v18 = v17;
              v17 = v15;
              while ( 1 )
              {
                v19 = *(const char **)(v17 + 16);
                if ( !v19 || j_strcmp_0(v19, v13) >= 0 )
                  break;
                v17 = *(_DWORD *)(v17 + 12);
                if ( !v17 )
                {
                  v17 = v18;
                  goto LABEL_31;
                }
              }
              v15 = *(_DWORD *)(v17 + 8);
            }
            while ( v15 );
          }
          else
              v15 = *(_DWORD *)(v15 + 8);
        }
LABEL_31:
        if ( v17 != v14 )
          v22 = v13 == 0;
            v12 = *(const char **)(v17 + 16);
            v22 = v12 == 0;
          if ( v22 )
            if ( !*(_DWORD *)(v17 + 20) )
              v16 = v17;
          else if ( j_strcmp_0(v13, v12) >= 0 )
            v16 = v17;
        a2 = (const char **)&Json::Value::null;
        if ( v16 != v14 )
          a2 = (const char **)(v16 + 24);
      }
    }
    else if ( v4 == 1 )
        v6 = *v5;
        v7 = *(_DWORD *)(i + 4);
        v8 = (int)(*v5 + 4);
        v9 = *((_DWORD *)v6 + 2);
        v10 = v8;
        for ( j = v8; v9; v10 = j )
          j = v9;
          while ( *(_DWORD *)(j + 20) < v7 )
            j = *(_DWORD *)(j + 12);
            if ( !j )
              j = v10;
              goto LABEL_25;
          v9 = *(_DWORD *)(j + 8);
LABEL_25:
        if ( j != v8 )
          v20 = *(_DWORD *)(j + 20);
          v21 = v20 >= v7;
          v22 = v20 == v7;
          a2 = (const char **)&Json::Value::null;
          if ( !v22 && v21 )
            j = v8;
          if ( j != v8 )
            a2 = (const char **)(j + 24);
  }
  return a2;
}


Json::Value::CommentInfo *__fastcall Json::Value::CommentInfo::~CommentInfo(Json::Value::CommentInfo *this)
{
  Json::Value::CommentInfo *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  v2 = *(void **)this;
  if ( v2 )
    j_free(v2);
  return v1;
}


int __fastcall Json::Reader::decodeNumber(int a1, int a2)
{
  __int64 v2; // kr00_8@1
  signed int v3; // r2@2
  int v4; // r7@2
  int v5; // r5@5
  signed int v6; // r7@8
  signed int v7; // r4@10
  unsigned int v8; // r7@15
  _BYTE *v9; // r9@15
  unsigned __int64 v10; // r4@15
  unsigned __int64 v11; // r10@17
  unsigned __int64 v12; // r2@17
  int v13; // lr@17
  unsigned __int64 v14; // r2@20
  unsigned int v15; // r1@21
  unsigned int v16; // r5@21
  signed int v17; // r4@22
  signed int v18; // r0@24
  __int64 v19; // r0@35
  char *v20; // r5@35
  int v21; // r4@37
  int v22; // r1@38 OVERLAPPED
  int v23; // r2@38
  bool v24; // zf@38
  signed int v25; // r2@38
  signed int v26; // r6@40
  int v27; // r4@50
  _DWORD *v28; // r0@50
  int *v29; // r7@50
  _BYTE *v30; // r5@50
  int result; // r0@53
  const void **v32; // r0@60
  const void **v33; // r0@60
  char *v34; // r0@60
  char *v35; // r0@61
  _BYTE *v36; // r0@62
  unsigned int *v37; // r2@64
  signed int v38; // r1@66
  unsigned int *v39; // r2@68
  signed int v40; // r1@70
  unsigned int *v41; // r2@72
  signed int v42; // r1@74
  int v43; // [sp+4h] [bp-74h]@15
  int v44; // [sp+Ch] [bp-6Ch]@15
  char v45; // [sp+10h] [bp-68h]@47
  char v46; // [sp+20h] [bp-58h]@52
  char v47; // [sp+30h] [bp-48h]@35
  _BYTE *v48; // [sp+44h] [bp-34h]@60
  char *v49; // [sp+48h] [bp-30h]@60
  char *v50; // [sp+4Ch] [bp-2Ch]@60

  v2 = *(_QWORD *)(a2 + 4);
  if ( (_DWORD)v2 == HIDWORD(v2) )
    goto LABEL_91;
  v3 = 0;
  LOBYTE(v4) = 0;
  do
  {
    if ( v4 & 1 )
    {
      v4 = 1;
    }
    else
      v5 = *(_BYTE *)(v2 + v3);
      if ( ((unsigned int)(v5 - 43) > 0x1A || !((1 << (v5 - 43)) & 0x4000009)) && v5 != 101 )
      {
        v6 = 0;
        if ( v5 == 45 )
          v6 = 1;
        v7 = v3;
        if ( v3 )
          v7 = 1;
        v4 = v6 & v7;
      }
    ++v3;
  }
  while ( HIDWORD(v2) - (_DWORD)v2 != v3 );
  if ( v4 )
LABEL_55:
    result = j_Json::Reader::decodeDouble(a1, a2);
  else
LABEL_91:
    v44 = a1;
    v8 = 0;
    v43 = a2;
    v9 = (_BYTE *)(v2 + 1);
    LODWORD(v10) = -Json::Value::minLargestInt;
    HIDWORD(v10) = -(unk_262EBA4 + (Json::Value::minLargestInt > 0u));
    if ( *(_BYTE *)v2 != 45 )
      v10 = *(_QWORD *)&Json::Value::maxLargestUInt;
    v11 = v10 / 0xA;
    v12 = v10 % 0xA;
    v13 = *(_BYTE *)v2;
    if ( v13 != 45 )
      v9 = (_BYTE *)*(_QWORD *)(a2 + 4);
    if ( (unsigned int)v9 >= HIDWORD(v2) )
      HIDWORD(v14) = 0;
LABEL_34:
      if ( v13 == 45 )
        v19 = *(_QWORD *)(v44 + 24);
        v20 = &v47;
        if ( (_DWORD)v19 == HIDWORD(v19) )
          LODWORD(v19) = *(_DWORD *)(*(_DWORD *)(v44 + 36) - 4) + 512;
        LODWORD(v14) = -v8;
        HIDWORD(v14) = -(HIDWORD(v14) + (v8 > 0));
        v21 = *(_DWORD *)(v19 - 4);
        j_Json::Value::Value((Json::Value *)&v47, 0, v14);
      else
        *(_QWORD *)&v22 = *(_QWORD *)(v44 + 24);
        v24 = v22 == v23;
        v25 = 0;
        if ( v24 )
          v22 = *(_DWORD *)(*(_DWORD *)(v44 + 36) - 4) + 512;
        v26 = 0;
        if ( v8 > 0x7FFFFFFF )
          v26 = 1;
        v21 = *(_DWORD *)(v22 - 4);
        if ( HIDWORD(v14) > 0 )
          v25 = 1;
        if ( !HIDWORD(v14) )
          v25 = v26;
        if ( v25 )
        {
          v20 = &v45;
          LODWORD(v14) = v8;
          j_Json::Value::Value((Json::Value *)&v45, v22, v14);
        }
        else
          v20 = &v46;
          j_Json::Value::Value((Json::Value *)&v46, v22, v14);
      j_Json::Value::operator=(v21, (const Json::Value *)v20);
      j_Json::Value::~Value((Json::Value *)v20);
      result = 1;
      while ( 1 )
        v15 = (unsigned int)(v9 + 1);
        v16 = *v9 - 48;
        if ( (unsigned __int8)v16 >= 0xAu )
          break;
        v17 = 0;
        if ( v8 < (unsigned int)v11 )
          v17 = 1;
        v18 = 0;
        if ( HIDWORD(v14) < HIDWORD(v11) )
          v18 = 1;
        if ( HIDWORD(v14) == HIDWORD(v11) )
          v18 = v17;
        if ( !v18 && ((_BYTE *)(HIDWORD(v2) - 1) != v9 || v16 > (unsigned int)v12) )
          a1 = v44;
          a2 = v43;
          goto LABEL_55;
        ++v9;
        HIDWORD(v14) = (__PAIR__((10 * (unsigned __int64)v8 >> 32) + 10 * HIDWORD(v14), v16) + 10 * v8) >> 32;
        v8 = v16 + 10 * v8;
        if ( v15 >= HIDWORD(v2) )
          goto LABEL_34;
      if ( (_DWORD)v2 == HIDWORD(v2) )
        v30 = &unk_28898CC;
        if ( !(_DWORD)v2 )
          sub_21E5884((int)"basic_string::_S_construct null not valid");
        v27 = HIDWORD(v2) - v2;
        v28 = sub_21E7E80(HIDWORD(v2) - v2, 0);
        v29 = v28;
        v30 = v28 + 3;
        if ( HIDWORD(v2) - (_DWORD)v2 == 1 )
          *v30 = *(_BYTE *)v2;
          j___aeabi_memcpy_0((int)(v28 + 3), v2, HIDWORD(v2) - v2);
        if ( v29 != &dword_28898C0 )
          v29[2] = 0;
          *v29 = v27;
          v30[v27] = byte_26C67B8[0];
      v48 = v30;
      v32 = sub_21E82D8((const void **)&v48, 0, (unsigned int)"'", (_BYTE *)1);
      v49 = (char *)*v32;
      *v32 = &unk_28898CC;
      v33 = sub_21E7408((const void **)&v49, "' is not a number.", 0x12u);
      v50 = (char *)*v33;
      *v33 = &unk_28898CC;
      j_Json::Reader::addError(v44, (int *)&v50, v43, 0);
      v34 = v50 - 12;
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v50 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      v35 = v49 - 12;
      if ( (int *)(v49 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v49 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j__ZdlPv_9(v35);
      v36 = v48 - 12;
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v48 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
      result = 0;
  return result;
}


  if ( Json::Value::isNull(v6)
{
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v6, "#item_name"), Json::Value::isString(v7) != 1) )
  {
    v18 = v17;
    v8 = (char *)&unk_28898CC;
    v17 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v18, (int)&v19, (int)v7);
    v8 = v17;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v3 + 2 * *(_DWORD *)(v5 + 452);
  if ( v10 < 50 && *(_BYTE *)(v5 + 436) && v10 >= 0 )
    EntityInteraction::setInteractText((int *)(*(_DWORD *)(v5 + 440) + 8 * v10), (int *)&v18);
  v11 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v18 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  return 1;
}


  if ( Json::Value::isNull((Json::Value *)(v4 + 8)) )
{
    v7 = -1;
  }
  else if ( Json::Value::isObject((Json::Value *)(v4 + 8)) == 1 )
  {
    v8 = (Json::Value *)Json::Value::operator[](v4 + 8, v6);
    if ( Json::Value::isInt(v8) || Json::Value::isUInt(v8) == 1 )
      v7 = Json::Value::asInt(v8, 0);
    else
      v7 = -1;
  else
  v9 = *v3;
  v10 = 1;
  v11 = *((_DWORD *)*v3 - 3);
  if ( v7 == *(_DWORD *)(v5 + 520) )
    v10 = 2;
  v13 = v10;
  return UIPropertyBag::set<int>(v4, v11, v9, &v13);
}


int __fastcall Json::ValueIteratorBase::ValueIteratorBase(int result)
{
  *(_DWORD *)result = 0;
  *(_BYTE *)(result + 4) = 1;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  v6 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(*(SkinPackCollectionModel **)(v3 + 432), v4);
  SkinPackModel::incrementFirstVisibleSkinIndex((SkinPackModel *)v6, 5);
  return 1;
}


Json::Reader *__fastcall Json::Reader::~Reader(Json::Reader *this)
{
  Json::Reader *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  int v7; // r2@3
  int v8; // r3@3
  int v9; // r7@3
  __int64 v10; // kr00_8@3
  int v11; // r12@3
  void *v12; // r0@3
  unsigned int v13; // r6@4
  unsigned int v14; // r1@4
  unsigned int v15; // r7@5
  void *v16; // t1@6
  void *v17; // r0@9
  unsigned int v18; // r5@10
  unsigned int v19; // r1@10
  unsigned int v20; // r6@11
  void *v21; // t1@12
  unsigned int *v23; // r2@16
  signed int v24; // r1@18
  unsigned int *v25; // r2@20
  signed int v26; // r1@22
  int v27; // [sp+4h] [bp-34h]@3
  __int64 v28; // [sp+8h] [bp-30h]@3
  int v29; // [sp+10h] [bp-28h]@3
  int v30; // [sp+14h] [bp-24h]@3
  int v31; // [sp+18h] [bp-20h]@3
  int v32; // [sp+1Ch] [bp-1Ch]@3
  int v33; // [sp+20h] [bp-18h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 26);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 20);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v4 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 13);
  v7 = *((_DWORD *)v1 + 14);
  v8 = *((_DWORD *)v1 + 15);
  v9 = *((_DWORD *)v1 + 16);
  v10 = *(_QWORD *)((char *)v1 + 68);
  v11 = *((_DWORD *)v1 + 19);
  v30 = *((_DWORD *)v1 + 12);
  v31 = v6;
  v32 = v7;
  v33 = v8;
  v27 = v9;
  v28 = v10;
  v29 = v11;
  std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_destroy_data_aux(
    (int)v1 + 40,
    (int)&v30,
    (int)&v27);
  v12 = (void *)*((_DWORD *)v1 + 10);
  if ( v12 )
    v13 = *((_DWORD *)v1 + 19);
    v14 = *((_DWORD *)v1 + 15);
    if ( v14 < v13 + 4 )
      v15 = v14 - 4;
      {
        v16 = *(void **)(v15 + 4);
        v15 += 4;
        operator delete(v16);
      }
      while ( v15 < v13 );
      v12 = (void *)*((_DWORD *)v1 + 10);
    operator delete(v12);
  v17 = *(void **)v1;
  if ( *(_DWORD *)v1 )
    v18 = *((_DWORD *)v1 + 9);
    v19 = *((_DWORD *)v1 + 5);
    if ( v19 < v18 + 4 )
      v20 = v19 - 4;
        v21 = *(void **)(v20 + 4);
        v20 += 4;
        operator delete(v21);
      while ( v20 < v18 );
      v17 = *(void **)v1;
    operator delete(v17);
  return v1;
}


  if ( Json::Value::size(a1) == a3 )
{
    v7 = 0;
    if ( v3 <= 0 )
      return v7;
    _R4 = _R5;
    while ( 1 )
    {
      v9 = (Json::Value *)Json::Value::operator[]((int)v5, v7);
      LODWORD(_R0) = Json::Value::asFloat(v9, 0.0);
      __asm
      {
        VMOV            S0, R0
        VLDR            S2, [R4]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        break;
      ++v7;
      _R4 += 4;
      if ( v7 >= v3 )
        return 0;
    }
  }
  LODWORD(_R0) = v5;
  Json::Value::clear(_R0);
  if ( v3 >= 1 )
  {
    v14 = 0;
    do
      v15 = Json::Value::operator[]((int)v5, v14);
      __asm { VLDR            S0, [R5] }
      v16 = v15;
        VCVT.F64.F32    D0, S0
        VMOV            R2, R3, D0
      Json::Value::Value((Json::Value *)&v20, v18, _R2);
      Json::Value::operator=(v16, (const Json::Value *)&v20);
      Json::Value::~Value((Json::Value *)&v20);
      ++v14;
      _R5 += 4;
    while ( v14 < v3 );
  return 1;
}


int __fastcall Json::Reader::currentValue(Json::Reader *this)
{
  int v1; // r1@1 OVERLAPPED
  int v2; // r2@1

  *(_QWORD *)&v1 = *((_QWORD *)this + 3);
  if ( v1 == v2 )
    v1 = *(_DWORD *)(*((_DWORD *)this + 9) - 4) + 512;
  return *(_DWORD *)(v1 - 4);
}


  if ( Json::Value::isNull((Json::Value *)(v44 + 8))
{
    || (v49 = (Json::Value *)Json::Value::operator[](v44 + 8, v47), Json::Value::isArray(v49) != 1) )
  {
    v52 = HIDWORD(v116);
    v51 = (void *)v116;
    v50 = &v121;
    v121 = v116;
    v53 = 0;
    v55 = HIDWORD(v117);
    v54 = v117;
    v122 = v117;
    v56 = v118;
    v123 = v118;
    v118 = 0;
    v117 = 0LL;
    v116 = 0LL;
  }
  else
    jsonValConversion<std::vector<bool,std::allocator<bool>>>::as((int)&v121, (int)&v131, v49);
    v52 = HIDWORD(v121);
    v51 = (void *)v121;
    v53 = (void *)v116;
    v55 = HIDWORD(v122);
    v54 = v122;
    v56 = v123;
  v127 = v51;
  v128 = v52;
  v121 = 0LL;
  v129 = __PAIR__(v55, v54);
  v50[1] = 0LL;
  v130 = v56;
  v123 = 0;
  if ( v53 )
    operator delete(v53);
  v57 = (char *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v120 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
    }
    else
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v57);
  v58 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v119 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v58);
  sub_1590164((void **)&v111, "toggle_invite_offline");
  v59 = MinecraftScreenController::_getNameId((ScreenController *)v45, (int **)&v111);
  Util::toString<short,(void *)0,(void *)0>((void **)&v112, v59);
  v60 = v112;
  std::vector<bool,std::allocator<bool>>::vector((int)&ptr, (int)&v124);
  if ( Json::Value::isNull(v48)
    || Json::Value::isObject(v48) != 1
    || (v61 = (Json::Value *)Json::Value::operator[]((int)v48, v60), Json::Value::isArray(v61) != 1) )
    v63 = HIDWORD(ptr);
    v62 = ptr;
    v113 = ptr;
    v66 = HIDWORD(v109);
    v65 = v109;
    v114 = v109;
    v67 = v110;
    v115 = v110;
    v110 = 0;
    v109 = 0LL;
    ptr = 0LL;
    v64 = &v114;
    jsonValConversion<std::vector<bool,std::allocator<bool>>>::as((int)&v113, (int)&v132, v61);
    v63 = HIDWORD(v113);
    v62 = v113;
    v66 = HIDWORD(v114);
    v65 = v114;
    v67 = v115;
  v69 = HIDWORD(v124);
  v68 = (void *)v124;
  v125 = v124;
  v124 = __PAIR__(v63, v62);
  v70 = (_DWORD)v125 == 0;
  v113 = __PAIR__(v69, (unsigned int)v125);
  v71 = v125;
  v125 = __PAIR__(v66, v65);
  *v64 = v71;
  v72 = v126;
  v126 = v67;
  v115 = v72;
  if ( !v70 )
    operator delete(v68);
  if ( (_DWORD)ptr )
    operator delete((void *)ptr);
  v73 = (char *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v112 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v73);
  v74 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v111 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v74);
  v75 = v45;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v76 = v124;
  v77 = v125;
  v78 = v127;
  v104 = v128;
  v79 = v129;
  v80 = -1431655765 * ((signed int)((*(_QWORD *)(v45 + 424) >> 32) - *(_QWORD *)(v45 + 424)) >> 2);
  v81 = HIDWORD(v129) - v128 + 8 * (v129 - (_DWORD)v127);
  if ( v81 )
    v82 = 0;
    v83 = 0;
    do
      if ( v83 < v80 && v78[v83 >> 5] & (1 << (v83 & 0x1F)) )
      {
        v84 = (int *)(*(_DWORD *)(v45 + 424) + v82);
        if ( v106 == v107 )
        {
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)&v105,
            v84);
        }
        else
          sub_15901A4(v106, v84);
          ++v106;
      }
      ++v83;
      v82 += 12;
    while ( v83 < v81 );
  v85 = HIDWORD(v77) - HIDWORD(v76) + 8 * (v77 - v76);
  if ( v85 )
    v86 = HIDWORD(v79) + 8 * v79 - v104 - 8 * (_DWORD)v78;
    v87 = 0;
    v88 = 12 * v86;
      if ( (1 << (v87 & 0x1F)) & *(_DWORD *)(v76 + 4 * (v87 >> 5)) && v86 + v87 < v80 )
        v89 = (int *)(*(_DWORD *)(v75 + 424) + v88);
            v89);
          sub_15901A4(v106, v89);
      ++v87;
      v88 += 12;
    while ( v87 < v85 );
  if ( v106 != v105 )
    MinecraftScreenModel::invitePlayers(*(_DWORD *)(v75 + 380), (int)&v105);
  MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(v75 + 380));
  v91 = v106;
  v90 = v105;
  if ( v105 != v106 )
      v94 = (int *)(*v90 - 12);
      if ( v94 != &dword_28898C0 )
        v92 = (unsigned int *)(*v90 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v93 = __ldrex(v92);
          while ( __strex(v93 - 1, v92) );
          v93 = (*v92)--;
        if ( v93 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v94);
      ++v90;
    while ( v90 != v91 );
    v90 = v105;
  if ( v90 )
    operator delete(v90);
  if ( (_DWORD)v124 )
    operator delete((void *)v124);
  if ( v127 )
    operator delete(v127);
  return 0;
}


  if ( Json::Value::isNull(v4) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, v5);
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  *(_DWORD *)(v3 + 468) = v6;
  *(_BYTE *)(v3 + 449) = 2;
  return 1;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v23;
    v24 = v23;
    v23 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v24, (int)&v26, (int)v5);
    v6 = v24;
  sub_21E94B4((void **)&v22, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v25 = v22;
    v8 = (char *)&unk_28898CC;
    v22 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v7);
    v8 = v22;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v8 - 4);
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
  v10 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  EntityInteraction::setInteractText((int *)(v3 + 424), (int *)&v25);
  v12 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return 1;
}


  if ( Json::Reader::parse((int)&v31, v3, (int)&v30, 1) == 1 )
{
    v6 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v30, "userId");
    if ( Json::Value::isString(v6) == 1 )
    {
      v7 = Json::Value::operator[]((Json::Value *)&v30, "userId");
      sub_119C884((void **)&v28, (const char *)&unk_257BC67);
      Json::Value::asString(&v29, v7, &v28);
      v8 = 1;
    }
    else
      sub_119C884((void **)&v29, (const char *)&unk_257BC67);
      v8 = 0;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v29);
    v10 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v29 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v10);
    if ( v8 == 1 )
      v11 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v28 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v11);
    v12 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v30, "receiptId");
    if ( Json::Value::isString(v12) == 1 )
      v13 = Json::Value::operator[]((Json::Value *)&v30, "receiptId");
      sub_119C884((void **)&v26, (const char *)&unk_257BC67);
      Json::Value::asString(&v27, v13, &v26);
      v14 = 1;
      sub_119C884((void **)&v27, (const char *)&unk_257BC67);
      v14 = 0;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v27);
    v15 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v27 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    if ( v14 == 1 )
      v16 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v26 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v16);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  Json::Value::~Value((Json::Value *)&v30);
  Json::Reader::~Reader((Json::Reader *)&v31);
  return v9;
}


  if ( !Json::Value::isNull((Json::Value *)(a2 + 8)) && Json::Value::isObject(v2) == 1 )
{
    v4 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v4) || Json::Value::isUInt(v4) == 1 )
    {
      v5 = Json::Value::asInt(v4, 0);
      if ( v5 != -1 )
      {
        v6 = *(MinecraftScreenModel **)(v3 + 380);
        v7 = *(_DWORD *)(v3 + 440);
        Json::Value::Value((Json::Value *)&v9, v5);
        MinecraftScreenModel::completeServerForm(v6, v7, (const Json::Value *)&v9);
        Json::Value::~Value((Json::Value *)&v9);
      }
    }
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 92))(v3);
  return 8;
}


  if ( Json::Value::isNull(v6)
{
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v6, "#item_name"), Json::Value::isString(v7) != 1) )
  {
    v19 = v18;
    v8 = (char *)&unk_28898CC;
    v18 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v19, (int)&v20, (int)v7);
    v8 = v18;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v3 + 2 * *(_DWORD *)(v5 + 452);
  v11 = *(_BYTE *)(v5 + 436);
  if ( v10 < 50 && *(_BYTE *)(v5 + 436) && v10 >= 0 )
    EntityInteraction::setInteractText((int *)(*(_DWORD *)(v5 + 440) + 8 * v10), (int *)&v19);
    v11 = *(_BYTE *)(v5 + 436);
  if ( v10 < 50 && v10 >= 0 && v11 )
    BookScreenManager::editPage(
      *(BookScreenManager **)(v5 + 432),
      v10,
      (const PageContent *)(*(_DWORD *)(v5 + 440) + 8 * v10));
  v12 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  return 1;
}


signed int __fastcall Json::Value::asBool(Json::Value *this, int a2)
{
  signed int v2; // r1@2
  int v4; // r1@5
  signed int v9; // r1@6

  switch ( *((_BYTE *)this + 8) )
  {
    case 1:
    case 2:
      v2 = (*(_QWORD *)this >> 32) | *(_QWORD *)this;
      if ( *(_QWORD *)this )
        v2 = 1;
      return v2;
    case 6:
    case 7:
      v4 = *(_DWORD *)(*(_DWORD *)this + 20);
      return v4 != 0;
    case 3:
      __asm { VLDR            D0, [R0]; jumptable 01B2DA1E case 3 }
      v9 = 0;
      __asm
      {
        VCMPE.F64       D0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        v9 = 1;
      return v9;
    case 4:
      this = *(Json::Value **)this;
      if ( this )
        goto LABEL_10;
      goto def_1B2DA1E;
    case 5:
LABEL_10:
      v4 = *(_BYTE *)this;
    case 0:
      return a2;
    default:
def_1B2DA1E:
      a2 = 0;
      break;
  }
  return a2;
}


int __fastcall Json::ValueConstIterator::ValueConstIterator(int result)
{
  *(_DWORD *)result = 0;
  *(_BYTE *)(result + 4) = 1;
  return result;
}


void __fastcall Json::Value::setComment(int a1, const char *a2, int a3)
{
  int v3; // r7@1
  int v4; // r8@1
  int v5; // r5@1
  const char *v6; // r9@1
  _DWORD *v7; // r0@2
  void *v8; // r0@3
  size_t v9; // r0@6
  int v10; // r7@6
  _BYTE *v11; // r0@6
  _BYTE *v12; // r6@6
  _BYTE *v13; // r4@6

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 12);
  v6 = a2;
  if ( !v5 )
  {
    v7 = j_operator new[](0x14u);
    *(_QWORD *)v7 = 12884901892LL;
    v7[2] = 0;
    v5 = (int)(v7 + 2);
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v3 + 12) = v7 + 2;
  }
  v8 = *(void **)(v5 + 4 * v4);
  if ( v8 )
    j_free(v8);
  if ( v6 )
    v9 = j_strlen_0(v6);
    v10 = v9;
    v11 = j_malloc(v9 + 1);
    v12 = v11;
    v13 = 0;
    if ( v11 )
    {
      j___aeabi_memcpy_0((int)v11, (int)v6, v10);
      v12[v10] = 0;
      v13 = v12;
    }
  else
  *(_DWORD *)(v5 + 4 * v4) = v13;
}


void __fastcall Json::ValueIteratorBase::key(Json::ValueIteratorBase *this, int a2)
{
  Json::ValueIteratorBase::key(this, a2);
}


signed int __fastcall Json::Reader::readString(Json::Reader *this)
{
  Json::Reader *v1; // lr@1
  signed int result; // r0@1
  _BYTE *v3; // r3@1
  _BYTE *v4; // r12@1
  signed int v5; // r2@1

  v1 = this;
  result = 0;
  v3 = (_BYTE *)(*((_QWORD *)v1 + 11) >> 32);
  v4 = (_BYTE *)*((_QWORD *)v1 + 11);
  v5 = 0;
  if ( v3 == v4 )
    goto LABEL_11;
  while ( 1 )
  {
    *((_DWORD *)v1 + 23) = v3 + 1;
    v5 = *v3;
    if ( v5 == 92 )
      break;
    if ( v5 == 34 )
    {
      v5 = 34;
      goto LABEL_11;
    }
    ++v3;
LABEL_7:
    if ( v3 == v4 )
  }
  if ( v3 + 1 != v4 )
    v3 += 2;
    *((_DWORD *)v1 + 23) = v3;
    v5 = 92;
    goto LABEL_7;
  v5 = 92;
LABEL_11:
  if ( v5 == 34 )
    result = 1;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v23 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  v14 = StoreCatalogItemModel::getKeyArtLocation((StoreCatalogItemModel *)&v23, 0);
  v15 = *v6;
  v16 = *((_DWORD *)*v6 - 3);
  ResourceUtil::stringFromPath(&v24, *((_DWORD *)v14 + 1));
  sub_21E91E0((void **)&v20, v25, v24);
  UIPropertyBag::set<std::string>(v5, v16, v15, (const void **)&v20);
  v17 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v17);
}


int __fastcall Json::Value::asDouble(Json::Value *this, int a2, double _R2)
{
  int result; // r0@4
  int v11; // r0@8

  _R1 = *((_BYTE *)this + 8);
  __asm { VMOV            D0, R2, R3 }
  switch ( _R1 )
  {
    case 1:
      _R0 = j___aeabi_l2d(*(_QWORD *)this, *(_QWORD *)this >> 32);
      goto LABEL_4;
    case 2:
      _R0 = j___aeabi_ul2d(*(_QWORD *)this, *(_QWORD *)this >> 32);
LABEL_4:
      __asm
      {
        VMOV            D0, R0, R1
        VMOV            R0, R1, D0
      }
      return result;
    case 3:
        VLDR            D0, [R0]; jumptable 01B2D954 case 3
    default:
      __asm { VLDR            D0, =0.0; jumptable 01B2D954 default case }
      goto LABEL_7;
    case 0:
LABEL_7:
      __asm { VMOV            R0, R1, D0; jumptable 01B2D954 case 0 }
      break;
    case 5:
      __asm { VMOV.F64        D1, #1.0; jumptable 01B2D954 case 5 }
      v11 = *(_BYTE *)this;
      __asm { VLDR            D0, =0.0 }
      if ( !_ZF )
        __asm { VMOVNE.F64      D0, D1 }
      __asm { VMOV            R0, R1, D0 }
  }
  return result;
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  v7 = *(_BYTE *)(v3 + 468);
  if ( !(*(_BYTE *)(v3 + 468) & 1) )
    if ( (*(int (__fastcall **)(int, int *, int))(*(_DWORD *)v3 + 148))(v3, &v12, v5) != 1 )
      goto LABEL_13;
    v7 = *(_BYTE *)(v3 + 468);
  *(_BYTE *)(v3 + 468) = v7 | 1;
  (*(void (__fastcall **)(int, int *, int))(*(_DWORD *)v3 + 132))(v3, &v12, v5);
LABEL_13:
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return 0;
}


  if ( !Json::Value::isNull(v5) && Json::Value::isObject(v5) == 1 )
{
    v7 = (Json::Value *)Json::Value::operator[]((int)v5, v6);
    if ( Json::Value::isBool(v7) == 1 )
      v4 = Json::Value::asBool(v7, 0);
  }
  *(_BYTE *)(v3 + 421) = v4 ^ 1;
  MinecraftScreenModel::setVRControlMode(*(MinecraftScreenModel **)(v3 + 380), v4 ^ 1);
  return 8;
}


int __fastcall Json::Value::append(Json::Value *this, const Json::Value *a2)
{
  Json::Value *v2; // r5@1
  const Json::Value *v3; // r4@1
  int v4; // r0@1
  unsigned int v5; // r1@4
  int v6; // r5@8
  Json::Value *v7; // r0@8
  __int64 v8; // kr00_8@8
  __int16 v9; // r2@8
  __int16 v10; // r1@8
  __int64 v12; // [sp+0h] [bp-20h]@8
  __int16 v13; // [sp+8h] [bp-18h]@8

  v2 = this;
  v3 = a2;
  v4 = *((_BYTE *)this + 8);
  if ( v4 == 7 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)v2 + 20);
  }
  else if ( v4 == 6 )
    if ( *(_DWORD *)(*(_DWORD *)v2 + 20) )
      v5 = *(_DWORD *)(sub_21D4894(*(_DWORD *)v2 + 4) + 20) + 1;
    else
      v5 = 0;
  else
    v5 = 0;
  v6 = j_Json::Value::operator[]((int)v2, v5);
  v7 = j_Json::Value::Value((Json::Value *)&v12, v3);
  v8 = *(_QWORD *)v6;
  v9 = v13;
  v10 = *(_WORD *)(v6 + 8);
  *(_QWORD *)v6 = v12;
  v12 = v8;
  *(_WORD *)(v6 + 8) = v10 & 0xFE00 | (unsigned __int8)v9 | v9 & 0x100;
  v13 = v10 & 0x1FF | v9 & 0xFE00;
  j_Json::Value::~Value(v7);
  return v6;
}


  if ( Json::Value::isNull((Json::Value *)(a4 + 8)) )
{
    v6 = 0;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, "#grid_number_size");
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = 0;
  else
  v8 = *(_DWORD *)(v5 + 520);
  if ( v8 )
    v9 = v8 - 3;
    v10 = 12;
    if ( v9 < 3 )
      v10 = 9;
    v10 = 0;
  v11 = v6 - v10;
  if ( v6 - v10 != IntellisenseHandler::getAutoCompleteGridSize((IntellisenseHandler *)(v5 + 480)) )
    *(_BYTE *)(v5 + 476) = 1;
  return j_j_j__ZN19IntellisenseHandler23setAutoCompleteGridSizeEi((IntellisenseHandler *)(v5 + 480), v11);
}


Json::Value *__fastcall Json::Value::Value(Json::Value *this, const Json::Value *a2)
{
  Json::Value *v2; // r9@1
  const Json::Value *v3; // r8@1
  int v4; // r1@1
  unsigned int v5; // r0@1
  unsigned int v6; // r4@1
  signed int v7; // r0@2
  _DWORD *v8; // r6@5
  int v9; // r4@5
  int v10; // r1@5
  _DWORD *v11; // r0@6
  _DWORD *v12; // r2@6
  _DWORD *v13; // r1@7
  _DWORD *v14; // r1@9
  int v15; // r6@12
  size_t v16; // r0@13
  int v17; // r10@13
  _BYTE *v18; // r0@13
  _BYTE *v19; // r5@13
  _BYTE *v20; // r7@13
  _DWORD *v21; // r0@18
  int v22; // r6@18
  int v23; // r0@18
  const char *v24; // r7@18
  size_t v25; // r0@21
  int v26; // r10@21
  _BYTE *v27; // r0@21
  _BYTE *v28; // r4@21
  _BYTE *v29; // r5@21
  const char *v30; // r6@24
  int v31; // r10@25
  void *v32; // r0@25
  size_t v33; // r0@27
  int v34; // r5@27
  _BYTE *v35; // r0@27
  _BYTE *v36; // r4@27
  _BYTE *v37; // r7@27
  const char *v38; // r5@30
  int v39; // r8@31
  void *v40; // r0@31
  size_t v41; // r0@33
  int v42; // r6@33
  _BYTE *v43; // r0@33
  _BYTE *v44; // r4@33
  _BYTE *v45; // r7@33

  v2 = this;
  v3 = a2;
  v4 = *((_WORD *)this + 4);
  v5 = *((_BYTE *)v3 + 8);
  v6 = v4 & 0xFFFFFF00 | v5;
  *((_DWORD *)v2 + 2) = (unsigned __int16)v6;
  if ( v5 <= 7 )
  {
    v7 = 1 << v5;
    if ( v7 & 0x2F )
    {
      *(_QWORD *)v2 = *(_QWORD *)v3;
    }
    else if ( v7 & 0xC0 )
      v8 = j_operator new(0x18u);
      v9 = *(_DWORD *)v3;
      v8[2] = 0;
      v8[3] = 0;
      v8[4] = 0;
      v8[5] = 0;
      v8[1] = 0;
      v8[3] = v8 + 1;
      v8[4] = v8 + 1;
      v10 = *(_DWORD *)(v9 + 8);
      if ( v10 )
      {
        v11 = j_std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_copy(
                (int)v8,
                v10,
                (int)(v8 + 1));
        v12 = v11;
        v8[2] = v11;
        do
        {
          v13 = v12;
          v12 = (_DWORD *)v12[2];
        }
        while ( v12 );
        v8[3] = v13;
          v14 = v11;
          v11 = (_DWORD *)v11[3];
        while ( v11 );
        v8[4] = v14;
        v8[5] = *(_DWORD *)(v9 + 20);
      }
      *(_DWORD *)v2 = v8;
    else
      v15 = *(_DWORD *)v3;
      if ( *(_DWORD *)v3 )
        v16 = j_strlen_0(*(const char **)v3);
        v17 = v16;
        v18 = j_malloc(v16 + 1);
        v19 = v18;
        v20 = 0;
        if ( v18 )
          j___aeabi_memcpy_0((int)v18, v15, v17);
          v19[v17] = 0;
          v20 = v19;
        *(_DWORD *)v2 = v20;
        *((_WORD *)v2 + 4) = v6 | 0x100;
      else
        *(_DWORD *)v2 = 0;
  }
  if ( *((_DWORD *)v3 + 3) )
    v21 = j_operator new[](0x14u);
    *(_QWORD *)v21 = 12884901892LL;
    v21[2] = 0;
    v22 = (int)(v21 + 2);
    *(_DWORD *)(v22 + 4) = 0;
    *(_DWORD *)(v22 + 8) = 0;
    *((_DWORD *)v2 + 3) = v21 + 2;
    v23 = *((_DWORD *)v3 + 3);
    v24 = *(const char **)v23;
    if ( *(_DWORD *)v23 )
      if ( *(_DWORD *)v22 )
        j_free(*(void **)v22);
      v25 = j_strlen_0(v24);
      v26 = v25;
      v27 = j_malloc(v25 + 1);
      v28 = v27;
      v29 = 0;
      if ( v27 )
        j___aeabi_memcpy_0((int)v27, (int)v24, v26);
        v28[v26] = 0;
        v29 = v28;
      *(_DWORD *)v22 = v29;
      v23 = *((_DWORD *)v3 + 3);
    v30 = *(const char **)(v23 + 4);
    if ( v30 )
      v31 = *((_DWORD *)v2 + 3);
      v32 = *(void **)(v31 + 4);
      if ( v32 )
        j_free(v32);
      v33 = j_strlen_0(v30);
      v34 = v33;
      v35 = j_malloc(v33 + 1);
      v36 = v35;
      v37 = 0;
      if ( v35 )
        j___aeabi_memcpy_0((int)v35, (int)v30, v34);
        v36[v34] = 0;
        v37 = v36;
      *(_DWORD *)(v31 + 4) = v37;
    v38 = *(const char **)(v23 + 8);
    if ( v38 )
      v39 = *((_DWORD *)v2 + 3);
      v40 = *(void **)(v39 + 8);
      if ( v40 )
        j_free(v40);
      v41 = j_strlen_0(v38);
      v42 = v41;
      v43 = j_malloc(v41 + 1);
      v44 = v43;
      v45 = 0;
      if ( v43 )
        j___aeabi_memcpy_0((int)v43, (int)v38, v42);
        v44[v42] = 0;
        v45 = v44;
      *(_DWORD *)(v39 + 8) = v45;
  return v2;
}


void *__fastcall Json::StyledWriter::pushValue(int a1, int *a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@2
  void *result; // r0@3

  v2 = a1;
  if ( *(_BYTE *)(a1 + 32) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( (_DWORD)v3 == HIDWORD(v3) )
    {
      result = j_j_j__ZNSt6vectorISsSaISsEE19_M_emplace_back_auxIJRKSsEEEvDpOT__5((unsigned __int64 *)(a1 + 4), a2);
    }
    else
      sub_21E8AF4((int *)v3, a2);
      result = (void *)(*(_DWORD *)(v2 + 8) + 4);
      *(_DWORD *)(v2 + 8) = result;
  }
  else
    result = sub_21E72F0((const void **)(a1 + 16), (const void **)a2);
  return result;
}


  if ( !Json::Value::isNull(v16) && Json::Value::isNumeric(v16) == 1 )
{
    _R0 = Json::Value::asFloat(v16, 0.0);
    __asm
    {
      VMOV            S0, R0
      VSTR            S0, [R4,#0x1C]
    }
  }
  v22 = (BlockGraphics *)Json::Value::operator[]((Json::Value *)&v25, "sound");
  BlockGraphics::setSoundType((BlockGraphics *)v4, v22, v23);
  Json::Value::~Value((Json::Value *)&v25);
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  return v4;
}


int __fastcall Json::ValueIteratorBase::deref(Json::ValueIteratorBase *this)
{
  return *(_DWORD *)this + 24;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  if ( v4 == v5 )
    *(_DWORD *)(v3 + 440) = -1;
    *(_DWORD *)(v3 + 444) = -1;
  return 1;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  *(_DWORD *)(v3 + 440) = -2;
  *(_DWORD *)(v3 + 444) = v4;
  return 1;
}


  if ( Json::Value::isNull(v6) == 1 )
{
    *v5 = 0;
  }
  else
  {
    v7 = (SeedItemComponent *)operator new(8u);
    SeedItemComponent::SeedItemComponent(v7, v4);
    if ( SeedItemComponent::init(v7, v6) )
    {
      *v5 = v7;
    }
    else
      *v5 = 0;
      operator delete((void *)v7);
}


void __fastcall Json::Reader::addComment(int a1, _BYTE *a2, _BYTE *a3, int a4)
{
  Json::Reader::addComment(a1, a2, a3, a4);
}


void __fastcall Json::FastWriter::~FastWriter(Json::FastWriter *this)
{
  Json::FastWriter::~FastWriter(this);
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  HudScreenController::_handleSlotSelection(v3, v4, (Inventory *)0x7B);
  return 1;
}


  if ( Json::Value::isNull(v5)
{
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#collection_name"), Json::Value::isString(v6) != 1) )
  {
    v21 = v20;
    v7 = (char *)&unk_28898CC;
    v20 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v21, (int)&v22, (int)v6);
    v7 = v20;
  v8 = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (_DWORD *)RealmsWhitelistScreenController::_getListFromCollection(
                   (RealmsWhitelistScreenController *)v4,
                   *(UIPropertyBag **)(v2 + 12));
  if ( sub_21E7D6C((const void **)&v21, "members_collection") )
    if ( sub_21E7D6C((const void **)&v21, "invited_friends_collection") )
      v10 = *(_DWORD *)(v4 + 608);
      v10 = *(_DWORD *)(v4 + 612);
    v11 = (unsigned __int64 *)(v4 + 640);
    v12 = (int **)(*v9 + 4 * (*(_DWORD *)(v2 + 4) + 10 * v10));
    v12 = (int **)(*v9 + 4 * (*(_DWORD *)(v2 + 4) + 10 * *(_DWORD *)(v4 + 616)));
  v13 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
          v11,
          v12);
  if ( v13 )
    *(_BYTE *)(v13 + 41) = *(_BYTE *)(v2 + 8);
  v14 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v21 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return 1;
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v24 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  v14 = (MainMenuScreenModel **)(v7 + 424);
  v15 = *v6;
  v16 = *((_DWORD *)*v6 - 3);
  v17 = StoreCatalogItemModel::getItemPerformanceRequirements((StoreCatalogItemModel *)&v24);
  v18 = MainMenuScreenModel::getDevicePerfTier(*v14);
  v19 = 0;
  if ( v17 > v18 )
    v19 = 1;
  v21 = v19;
  return UIPropertyBag::set<bool>(v5, v16, v15, &v21);
}


  if ( Json::Value::isNull(v2)
{
    || (v4 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index"), !Json::Value::isInt(v4))
    && Json::Value::isUInt(v4) != 1
    || Json::Value::asInt(v4, 0) )
  {
    *(_BYTE *)(v3 + 438) = 1;
    result = 1;
  }
  else
    *(_BYTE *)(v3 + 437) = 1;
  return result;
}


  if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v17, (const Json::ValueIteratorBase *)&v16) )
{
LABEL_4:
    sub_21E94B4(v3, (const char *)&unk_257BC67);
  }
  else
  {
    while ( 1 )
    {
      v8 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v17);
      v9 = v8;
      v10 = (Json::Value *)Json::Value::operator[](v8, "value");
      if ( Json::Value::asBool(v10, 0) == 1 )
        break;
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v17);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v17, (const Json::ValueIteratorBase *)&v16) )
        goto LABEL_4;
    }
    v11 = Json::Value::operator[](v9, "text");
    sub_21E94B4((void **)&v15, (const char *)&unk_257BC67);
    Json::Value::asString((int *)v3, v11, &v15);
    v12 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v15 - 4);
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
        j_j_j_j__ZdlPv_9(v12);
}


char *__fastcall Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(Json::StyledStreamWriter *this, const Json::Value *a2)
{
  const Json::Value *v2; // r9@1
  Json::StyledStreamWriter *v3; // r8@1
  char *v4; // r7@2
  const void **v5; // r0@2
  int v6; // r4@2
  _DWORD *v7; // r6@2
  int *v8; // r6@2
  int v9; // t1@2
  void *v10; // r0@3
  void *v11; // r0@4
  char *result; // r0@5
  char *v13; // r4@6
  void *v14; // r0@6
  void *v15; // r0@7
  unsigned int *v16; // r1@10
  signed int v17; // r0@12
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  int v26; // [sp+0h] [bp-30h]@6
  int v27; // [sp+4h] [bp-2Ch]@6
  int v28; // [sp+8h] [bp-28h]@2
  int v29; // [sp+Ch] [bp-24h]@2

  v2 = a2;
  v3 = this;
  if ( j_Json::Value::hasComment((int)a2, 1) == 1 )
  {
    v4 = (char *)*((_DWORD *)v3 + 3);
    j_Json::Value::getComment((void **)&v28, (int)v2, 1);
    j_Json::StyledStreamWriter::normalizeEOL((const void **)&v29, &v28);
    v5 = sub_21E82D8((const void **)&v29, 0, (unsigned int)" ", (_BYTE *)1);
    v6 = (int)*v5;
    v7 = *v5;
    *v5 = &unk_28898CC;
    v9 = *(v7 - 3);
    v8 = v7 - 3;
    sub_21CBF38(v4, v6, v9);
    if ( v8 != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    v10 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v29 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v28 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  }
  result = (char *)j_Json::Value::hasComment((int)v2, 2);
  if ( result == (char *)1 )
    sub_21CBF38(*((char **)v3 + 3), (int)"\n", 1);
    v13 = (char *)*((_DWORD *)v3 + 3);
    j_Json::Value::getComment((void **)&v26, (int)v2, 2);
    j_Json::StyledStreamWriter::normalizeEOL((const void **)&v27, &v26);
    sub_21CBF38(v13, v27, *(_DWORD *)(v27 - 12));
    v14 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v27 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v26 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    result = sub_21CBF38(*((char **)v3 + 3), (int)"\n", 1);
  return result;
}


int __fastcall Json::Value::CZString::swap(int result, Json::Value::CZString *a2)
{
  int v2; // r2@1
  int v3; // r2@1

  v2 = *(_DWORD *)result;
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)a2 = v2;
  v3 = *(_DWORD *)(result + 4);
  *(_DWORD *)(result + 4) = *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 1) = v3;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  BookScreenController::_deletePage((BookScreenController *)v3, v4 + 2 * *(_DWORD *)(v3 + 452));
  return 1;
}


Json::Value *__fastcall Json::Value::removeMember(Json::Value *this, const char *a2, const char *a3)
{
  const char *v3; // r5@1
  Json::Value *v4; // r8@1
  const char *v5; // r7@1
  const char *v6; // r1@2
  int v7; // r4@2
  int v8; // r0@2
  int v9; // r6@2
  int v10; // r9@5
  const char *v11; // r0@6
  const Json::Value **v12; // r0@14
  bool v13; // zf@16
  int v14; // r4@23
  int v15; // r5@23
  void *v16; // r0@23
  int v18; // [sp+0h] [bp-30h]@23

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( !a2[8] )
  {
    v12 = (const Json::Value **)&Json::Value::null;
    return j_Json::Value::Value(v4, *v12);
  }
  v6 = *(const char **)a2;
  v7 = *(_DWORD *)v3 + 4;
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 8);
  v9 = *(_DWORD *)v3 + 4;
  if ( v8 )
    if ( a3 )
    {
      v9 = *(_DWORD *)v3 + 4;
      do
      {
        v10 = v9;
        v9 = v8;
        while ( 1 )
        {
          v11 = *(const char **)(v9 + 16);
          if ( !v11 || j_strcmp_0(v11, v5) >= 0 )
            break;
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v10;
            goto LABEL_15;
          }
        }
        v8 = *(_DWORD *)(v9 + 8);
      }
      while ( v8 );
    }
    else
        v8 = *(_DWORD *)(v8 + 8);
LABEL_15:
  if ( v9 == v7 )
    goto LABEL_27;
  v13 = v5 == 0;
  if ( v5 )
    v6 = *(const char **)(v9 + 16);
    v13 = v6 == 0;
  if ( v13 )
    if ( !*(_DWORD *)(v9 + 20) )
      goto LABEL_22;
LABEL_27:
  if ( j_strcmp_0(v5, v6) < 0 )
LABEL_22:
  j_Json::Value::Value((Json::Value *)&v18, (const Json::Value *)(v9 + 24));
  v14 = *(_DWORD *)v3;
  v15 = sub_21D4A24(v9, *(_DWORD *)v3 + 4);
  j_Json::Value::~Value((Json::Value *)(v15 + 24));
  v16 = *(void **)(v15 + 16);
  if ( v16 )
    if ( *(_DWORD *)(v15 + 20) == 1 )
      j_free(v16);
  j_operator delete((void *)v15);
  --*(_DWORD *)(v14 + 20);
  j_Json::Value::Value(v4, (const Json::Value *)&v18);
  return j_Json::Value::~Value((Json::Value *)&v18);
}


signed int __fastcall Json::Reader::expectToken(Json::Reader *a1, int a2, int a3, const char *a4)
{
  _DWORD *v4; // r4@1
  int v5; // r7@1
  const char *v6; // r6@1
  int v7; // r5@1
  signed int result; // r0@2
  void *v9; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  int v12; // [sp+4h] [bp-1Ch]@3

  v4 = (_DWORD *)a3;
  v5 = a2;
  v6 = a4;
  v7 = (int)a1;
  j_Json::Reader::readToken(a1, a3);
  if ( *v4 == v5 )
  {
    result = 1;
  }
  else
    sub_21E94B4((void **)&v12, v6);
    j_Json::Reader::addError(v7, &v12, (int)v4, 0);
    v9 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v12 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
    }
    result = 0;
  return result;
}


void **__fastcall Json::Value::getComment(void **a1, int a2, int a3)
{
  const char *v3; // r1@1
  bool v4; // zf@1

  v3 = *(const char **)(a2 + 12);
  v4 = v3 == 0;
  if ( v3 )
  {
    v3 = *(const char **)&v3[4 * a3];
    v4 = v3 == 0;
  }
  if ( v4 )
    v3 = (const char *)&unk_257BC67;
  return sub_21E94B4(a1, v3);
}


signed int __fastcall Json::Reader::parse(int a1, char *a2, int a3, bool a4)
{
  int v4; // r6@1
  int v5; // r8@1
  bool v6; // r4@1
  const char *v7; // r1@1
  __int64 v8; // r2@1
  signed int v9; // r4@1
  char *v10; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  char *v14; // [sp+8h] [bp+0h]@1

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v14 = (char *)&unk_28898CC;
  sub_21BBAF0(a2, (const void **)&v14, 255);
  EntityInteraction::setInteractText((int *)(v4 + 80), (int *)&v14);
  v7 = *(const char **)(v4 + 80);
  HIDWORD(v8) = v5;
  LODWORD(v8) = &v7[*((_DWORD *)v7 - 3)];
  v9 = j_Json::Reader::parse((Json::Reader *)v4, v7, v8, v6);
  v10 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v13 = __ldrex(v12);
        __strex(v13 - 1, v12);
      }
      while ( &v14 );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  return v9;
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v20 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  v14 = *v6;
  v15 = *((_DWORD *)*v6 - 3);
  v17 = StoreBaseScreenController::_getStoreCatalogItemUpdateIconVisible(
          (StoreBaseScreenController *)v7,
          (const StoreCatalogItemModel *)&v20);
  return UIPropertyBag::set<bool>(v5, v15, v14, &v17);
}


  if ( Json::Value::isNull(v6) == 1 )
{
    Json::Value::Value((Json::Value *)v4, (const char *)&unk_257BC67);
    v7 = 1;
LABEL_19:
    *(_DWORD *)(v4 + 16) = v7;
    return;
  }
  if ( Json::Value::type(v6) != v5 )
  {
    v7 = 2;
    goto LABEL_19;
  if ( v5 != 4 )
    if ( v5 != 6 )
    {
      Json::Value::Value((Json::Value *)v4, v6);
      v7 = 0;
      goto LABEL_19;
    }
    if ( !Json::Value::size(v6) )
      Json::Value::Value((Json::Value *)v4, (const char *)&unk_257BC67);
      v7 = 3;
  sub_21E94B4((void **)&v15, (const char *)&unk_257BC67);
  Json::Value::asString(&v16, (int)v6, &v15);
  v8 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( *(_DWORD *)(v16 - 12) )
    Json::Value::Value(v4, (const char **)&v16);
    v9 = 0;
  else
    v9 = 3;
  *(_DWORD *)(v4 + 16) = v9;
  v10 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v8 = (Json::Value *)Json::Value::operator[](v5 + 8, v7), !Json::Value::isInt(v8))
    && Json::Value::isUInt(v8) != 1
    || (v9 = Json::Value::asInt(v8, 0), v9 < 0)
    || (v10 = *(_QWORD *)(v6 + 444), (HIDWORD(v10) - (signed int)v10) >> 3 <= v9)
    || (v11 = *(_DWORD *)(v10 + 8 * v9) + v4, v11 >= *(_DWORD *)(v10 + 8 * v9 + 4)) )
  {
    v12 = *(MainMenuScreenModel **)(v6 + 424);
    v9 = -1;
    v11 = -1;
  }
  else
  v19 = MainMenuScreenModel::getStoreCatalogItem(v12, v9, v11);
  StoreBaseScreenController::_getStoreCatalogItemPromptText(
    (StoreBaseScreenController *)&v16,
    (const StoreCatalogItemModel *)v6,
    (StoreCatalogItemModel *)&v19);
  UIPropertyBag::set<std::string>(v5, 18, "#offer_prompt_text", (const void **)&v16);
  v13 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
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
      j_j_j_j__ZdlPv_9(v13);
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  ContainerScreenController::_handleButtonIsHeld(v3, (int **)&v11, v5, 2, 0);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  return 2;
}


RakNet *__fastcall Json::valueToString(Json *this, int a2, double a3)
{
  void **v3; // r4@1
  size_t v4; // r0@1
  char *v5; // r1@1
  char *v6; // r0@1
  unsigned int v7; // r0@1
  int v8; // t1@1
  char *v9; // r1@3
  bool v10; // zf@5
  _BYTE *v11; // r1@7
  int v12; // r2@8
  char *v13; // r1@10
  RakNet *result; // r0@12
  char s[32]; // [sp+14h] [bp-34h]@1
  RakNet *v16; // [sp+34h] [bp-14h]@1

  v3 = (void **)this;
  v16 = _stack_chk_guard;
  j_sprintf(s, "%#.16g", LODWORD(a3));
  v4 = j_strlen_0(s);
  v5 = &s[v4];
  v6 = &s[v4];
  v8 = (unsigned __int8)*(v6 - 1);
  v7 = (unsigned int)(v6 - 1);
  if ( v8 == 48 )
  {
    if ( v7 > (unsigned int)s )
    {
      v9 = v5 - 2;
      do
      {
        v7 = (unsigned int)v9;
        if ( v9 <= s )
          break;
        v10 = *v9 == 48;
        v7 = (unsigned int)v9--;
      }
      while ( v10 );
    }
    if ( v7 < (unsigned int)s )
LABEL_10:
      v13 = s;
    else
      v11 = (_BYTE *)v7;
      while ( 1 )
        v12 = *v11;
        if ( (unsigned int)(v12 - 48) >= 0xA )
        if ( --v11 < s )
          goto LABEL_10;
      if ( v12 == 46 )
        *(_BYTE *)(v7 + 2) = 0;
        v13 = s;
      else
  }
  else
    v13 = s;
  sub_21E94B4(v3, v13);
  result = (RakNet *)(_stack_chk_guard - v16);
  if ( _stack_chk_guard != v16 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall Json::Value::asInt(Json::Value *this, int a2)
{
  int result; // r0@2

  switch ( *((_BYTE *)this + 8) )
  {
    case 1:
    case 2:
      result = *(_DWORD *)this;
      break;
    case 3:
      __asm
      {
        VLDR            D0, [R0]; jumptable 01B2D7D6 case 3
        VCVTR.S32.F64   S0, D0
        VMOV            R1, S0
      }
      result = _R1;
    default:
      a2 = 0;
      goto LABEL_5;
    case 0:
LABEL_5:
      result = a2;
    case 5:
      result = *(_BYTE *)this;
  }
  return result;
}


  if ( Json::Value::isArray(v12) )
{
    Json::Value::begin((Json::Value *)&v321, (int)v12);
    Json::Value::end((Json::Value *)&v320, (int)v12);
    v25 = 0;
    while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v321, (const Json::ValueIteratorBase *)&v320) != 1 )
    {
      v26 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v321);
      if ( Json::Value::isObject(v26) )
      {
        Util::toString<int,(void *)0,(void *)0>((void **)&v312, v25);
        v27 = *(_QWORD *)(v6 + 4);
        if ( (_DWORD)v27 == HIDWORD(v27) )
        {
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)v6,
            &v312);
        }
        else
          sub_21E8AF4((int *)v27, &v312);
          *(_DWORD *)(v6 + 4) += 4;
        v264 = v25;
        v47 = (void *)(v312 - 12);
        if ( (int *)(v312 - 12) != &dword_28898C0 )
          v108 = (unsigned int *)(v312 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v109 = __ldrex(v108);
            while ( __strex(v109 - 1, v108) );
          }
          else
            v109 = (*v108)--;
          if ( v109 <= 0 )
            j_j_j_j__ZdlPv_9(v47);
        sub_21E94B4((void **)&v310, "uuid");
        sub_1579C1C((int)&v311, (int)v26, &v310, (int *)&Util::EMPTY_STRING, v6, v7, v15);
        v48 = (void **)&v305;
        v49 = (void *)(v310 - 12);
        if ( (int *)(v310 - 12) != &dword_28898C0 )
          v110 = (unsigned int *)(v310 - 4);
              v111 = __ldrex(v110);
            while ( __strex(v111 - 1, v110) );
            v48 = (void **)&v305;
            v111 = (*v110)--;
          if ( v111 <= 0 )
            j_j_j_j__ZdlPv_9(v49);
        sub_21E94B4(v48, "version");
        sub_157A874((SemVersion *)&v306, (int)v26, (int *)v48, v6, v7, v15, a6);
        v50 = (void *)(v305 - 12);
        if ( (int *)(v305 - 12) != &dword_28898C0 )
          v114 = (unsigned int *)(v305 - 4);
              v115 = __ldrex(v114);
            while ( __strex(v115 - 1, v114) );
            v115 = (*v114)--;
          if ( v115 <= 0 )
            j_j_j_j__ZdlPv_9(v50);
        sub_21E94B4((void **)&v303, "description");
        sub_157A770(&v304, (int)v26, &v303, v6, v7, 1);
        v51 = (void *)(v303 - 12);
        v52 = (void **)&v301;
        if ( (int *)(v303 - 12) != &dword_28898C0 )
          v116 = (unsigned int *)(v303 - 4);
              v117 = __ldrex(v116);
            while ( __strex(v117 - 1, v116) );
            v52 = (void **)&v301;
            v117 = (*v116)--;
          if ( v117 <= 0 )
            j_j_j_j__ZdlPv_9(v51);
        sub_21E94B4(v52, "type");
        sub_157A770(&v302, (int)v26, (int *)v52, v6, v7, v15);
        v53 = (void *)(v301 - 12);
        v54 = (void **)&v299;
        if ( (int *)(v301 - 12) != &dword_28898C0 )
          v118 = (unsigned int *)(v301 - 4);
              v119 = __ldrex(v118);
            while ( __strex(v119 - 1, v118) );
            v54 = (void **)&v299;
            v119 = (*v118)--;
          if ( v119 <= 0 )
            j_j_j_j__ZdlPv_9(v53);
        sub_21E94B4(v54, "entry");
        sub_157A770(&v300, (int)v26, (int *)v54, v6, v7, 1);
        v55 = (int *)&v282;
        v56 = (void *)(v299 - 12);
        if ( (int *)(v299 - 12) != &dword_28898C0 )
          v120 = (unsigned int *)(v299 - 4);
              v121 = __ldrex(v120);
            while ( __strex(v121 - 1, v120) );
            v55 = (int *)&v282;
            v121 = (*v120)--;
          if ( v121 <= 0 )
            j_j_j_j__ZdlPv_9(v56);
        v57 = PackTypeFromString((int **)&v302);
        PackManifest::setPackType((int)v8, v57);
        if ( !PackManifest::getPackType(v8) )
          sub_21E94B4((void **)&v298, "type");
          v58 = *(_QWORD *)(v6 + 4);
          if ( (_DWORD)v58 == HIDWORD(v58) )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
              (unsigned __int64 *)v6,
              &v298);
            sub_21E8AF4((int *)v58, &v298);
            *(_DWORD *)(v6 + 4) += 4;
          v59 = (void *)(v298 - 12);
          if ( (int *)(v298 - 12) != &dword_28898C0 )
            v136 = (unsigned int *)(v298 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v137 = __ldrex(v136);
              while ( __strex(v137 - 1, v136) );
            }
            else
              v137 = (*v136)--;
            if ( v137 <= 0 )
              j_j_j_j__ZdlPv_9(v59);
          if ( v15 == 1 )
            v60 = v55;
            sub_157984C(&v290, (__int64 *)v6);
            sub_21E8AF4(&v291, &v302);
            v61 = operator new(8u);
            v62 = v61;
            v63 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v290,
                    (int)&v292,
                    (int)v61);
            v64 = v63;
            v65 = 0;
            v292 = &off_26D9084;
            v66 = v63 - (_DWORD)v62;
            v293 = 0;
            v294 = 0;
            v67 = v66 >> 2;
            v295 = 0;
            if ( v66 >> 2 )
              if ( v67 >= 0x40000000 )
                sub_21E57F4();
              v65 = operator new(v66);
            v293 = v65;
            v294 = (int)v65;
            v295 = (char *)v65 + 4 * v67;
            v68 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                    (int)v62,
                    v64,
                    (int)v65);
            v294 = v68;
            v296 = 18;
            v297 = 2;
            v292 = &off_26EABBC;
            PackReport::addWarning<PackDiscoveryError>(v7, (int)&v292);
            if ( v65 != (void *)v68 )
              {
                v88 = (int *)(*(_DWORD *)v65 - 12);
                if ( v88 != &dword_28898C0 )
                {
                  v86 = (unsigned int *)(*(_DWORD *)v65 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v87 = __ldrex(v86);
                    while ( __strex(v87 - 1, v86) );
                  }
                  else
                    v87 = (*v86)--;
                  if ( v87 <= 0 )
                    j_j_j_j__ZdlPv_9(v88);
                }
                v65 = (char *)v65 + 4;
              }
              while ( v65 != (void *)v68 );
              v65 = v293;
            if ( v65 )
              operator delete(v65);
            for ( i = v62; i != (_DWORD *)v64; ++i )
              v92 = (int *)(*i - 12);
              if ( v92 != &dword_28898C0 )
                v90 = (unsigned int *)(*i - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v91 = __ldrex(v90);
                  while ( __strex(v91 - 1, v90) );
                else
                  v91 = (*v90)--;
                if ( v91 <= 0 )
                  j_j_j_j__ZdlPv_9(v92);
            if ( v62 )
              operator delete(v62);
            v55 = v60;
            v6 = v266;
            v93 = (void *)(v291 - 12);
            if ( (int *)(v291 - 12) != &dword_28898C0 )
              v142 = (unsigned int *)(v291 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v143 = __ldrex(v142);
                while ( __strex(v143 - 1, v142) );
                v55 = v60;
              else
                v143 = (*v142)--;
              if ( v143 <= 0 )
                j_j_j_j__ZdlPv_9(v93);
            v15 = a5;
            v94 = (void *)(v290 - 12);
            if ( (int *)(v290 - 12) != &dword_28898C0 )
              v144 = (unsigned int *)(v290 - 4);
                  v145 = __ldrex(v144);
                while ( __strex(v145 - 1, v144) );
                v145 = (*v144)--;
              if ( v145 <= 0 )
                j_j_j_j__ZdlPv_9(v94);
            v95 = (int *)ResourceInformation::StringFromResourceType(1);
            EntityInteraction::setInteractText(&v302, v95);
            PackManifest::setPackType((int)v8, 1);
            sub_157984C(&v283, (__int64 *)v6);
            v69 = operator new(4u);
            v70 = v69;
            v71 = v55;
            v72 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v283,
                    (int)&v284,
                    (int)v69);
            v73 = v72;
            v74 = 0;
            v284 = &off_26D9084;
            v75 = v72 - (_DWORD)v70;
            v285 = 0;
            v286 = 0;
            v76 = v75 >> 2;
            v287 = 0;
            if ( v75 >> 2 )
              if ( v76 >= 0x40000000 )
              v74 = operator new(v75);
            v285 = v74;
            v286 = (int)v74;
            v287 = (char *)v74 + 4 * v76;
            v77 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                    (int)v70,
                    v73,
                    (int)v74);
            v286 = v77;
            v288 = 11;
            v289 = 2;
            v284 = &off_26EABBC;
            PackReport::addError<PackDiscoveryError>(v7, (int)&v284);
            if ( v74 != (void *)v77 )
                v80 = (int *)(*(_DWORD *)v74 - 12);
                if ( v80 != &dword_28898C0 )
                  v78 = (unsigned int *)(*(_DWORD *)v74 - 4);
                      v79 = __ldrex(v78);
                    while ( __strex(v79 - 1, v78) );
                    v79 = (*v78)--;
                  if ( v79 <= 0 )
                    j_j_j_j__ZdlPv_9(v80);
                v74 = (char *)v74 + 4;
              while ( v74 != (void *)v77 );
              v74 = v285;
            if ( v74 )
              operator delete(v74);
            for ( j = v70; j != (_DWORD *)v73; ++j )
              v84 = (int *)(*j - 12);
              if ( v84 != &dword_28898C0 )
                v82 = (unsigned int *)(*j - 4);
                    v83 = __ldrex(v82);
                  while ( __strex(v83 - 1, v82) );
                  v83 = (*v82)--;
                if ( v83 <= 0 )
                  j_j_j_j__ZdlPv_9(v84);
            if ( v70 )
              operator delete(v70);
            v55 = v71;
            v85 = (void *)(v283 - 12);
            if ( (int *)(v283 - 12) != &dword_28898C0 )
              v140 = (unsigned int *)(v283 - 4);
                  v141 = __ldrex(v140);
                while ( __strex(v141 - 1, v140) );
                v55 = v71;
                v141 = (*v140)--;
              if ( v141 <= 0 )
                j_j_j_j__ZdlPv_9(v85);
          v96 = *(_DWORD *)(v6 + 4);
          *(_DWORD *)(v6 + 4) = v96 - 4;
          v97 = *(_DWORD *)(v96 - 4);
          v98 = (void *)(v97 - 12);
          if ( (int *)(v97 - 12) != &dword_28898C0 )
            v138 = (unsigned int *)(v97 - 4);
                v139 = __ldrex(v138);
              while ( __strex(v139 - 1, v138) );
              v139 = (*v138)--;
            if ( v139 <= 0 )
              j_j_j_j__ZdlPv_9(v98);
        ResourceInformation::ResourceInformation(v55, &v304, (int)&v306, (int)&v311, (const void **)&v302, &v300);
        PackManifest::addModule(v8, (const ResourceInformation *)v55);
        ResourceInformation::~ResourceInformation((ResourceInformation *)v55);
        v45 = v264;
        v99 = (void *)(v300 - 12);
        if ( (int *)(v300 - 12) != &dword_28898C0 )
          v122 = (unsigned int *)(v300 - 4);
              v123 = __ldrex(v122);
            while ( __strex(v123 - 1, v122) );
            v123 = (*v122)--;
          if ( v123 <= 0 )
            j_j_j_j__ZdlPv_9(v99);
        v100 = (void *)(v302 - 12);
        if ( (int *)(v302 - 12) != &dword_28898C0 )
          v124 = (unsigned int *)(v302 - 4);
              v125 = __ldrex(v124);
            while ( __strex(v125 - 1, v124) );
            v125 = (*v124)--;
          if ( v125 <= 0 )
            j_j_j_j__ZdlPv_9(v100);
        v101 = (void *)(v304 - 12);
        if ( (int *)(v304 - 12) != &dword_28898C0 )
          v126 = (unsigned int *)(v304 - 4);
              v127 = __ldrex(v126);
            while ( __strex(v127 - 1, v126) );
            v127 = (*v126)--;
          if ( v127 <= 0 )
            j_j_j_j__ZdlPv_9(v101);
        v102 = (void *)(v309 - 12);
        if ( (int *)(v309 - 12) != &dword_28898C0 )
          v128 = (unsigned int *)(v309 - 4);
              v129 = __ldrex(v128);
            while ( __strex(v129 - 1, v128) );
            v129 = (*v128)--;
          if ( v129 <= 0 )
            j_j_j_j__ZdlPv_9(v102);
        v103 = (void *)(v308 - 12);
        if ( (int *)(v308 - 12) != &dword_28898C0 )
          v130 = (unsigned int *)(v308 - 4);
              v131 = __ldrex(v130);
            while ( __strex(v131 - 1, v130) );
            v131 = (*v130)--;
          if ( v131 <= 0 )
            j_j_j_j__ZdlPv_9(v103);
        v104 = (void *)(v307 - 12);
        if ( (int *)(v307 - 12) != &dword_28898C0 )
          v132 = (unsigned int *)(v307 - 4);
              v133 = __ldrex(v132);
            while ( __strex(v133 - 1, v132) );
            v133 = (*v132)--;
          if ( v133 <= 0 )
            j_j_j_j__ZdlPv_9(v104);
        v105 = *(_DWORD *)(v6 + 4);
        *(_DWORD *)(v6 + 4) = v105 - 4;
        v106 = *(_DWORD *)(v105 - 4);
        v107 = (void *)(v106 - 12);
        if ( (int *)(v106 - 12) != &dword_28898C0 )
          v134 = (unsigned int *)(v106 - 4);
              v135 = __ldrex(v134);
            while ( __strex(v135 - 1, v134) );
            v135 = (*v134)--;
          if ( v135 <= 0 )
            j_j_j_j__ZdlPv_9(v107);
      }
      else
        sub_157984C(&v313, (__int64 *)v6);
        v28 = operator new(4u);
        v29 = v28;
        v30 = v8;
        v31 = v7;
        v32 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                (int)&v313,
                (int)&v314,
                (int)v28);
        v33 = v32;
        v34 = 0;
        v314 = &off_26D9084;
        v35 = v32 - (_DWORD)v29;
        v263 = v25;
        v36 = v35 >> 2;
        v315 = 0;
        v316 = 0;
        v317 = 0;
        if ( v35 >> 2 )
          if ( v36 >= 0x40000000 )
            sub_21E57F4();
          v34 = operator new(v35);
        v315 = v34;
        v316 = (int)v34;
        v317 = (char *)v34 + 4 * v36;
        v37 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                (int)v29,
                v33,
                (int)v34);
        v316 = v37;
        v318 = 8;
        v319 = 2;
        v314 = &off_26EABBC;
        PackReport::addError<PackDiscoveryError>(v31, (int)&v314);
        if ( v34 != (void *)v37 )
          do
            v40 = (int *)(*(_DWORD *)v34 - 12);
            if ( v40 != &dword_28898C0 )
              v38 = (unsigned int *)(*(_DWORD *)v34 - 4);
                  v39 = __ldrex(v38);
                while ( __strex(v39 - 1, v38) );
                v39 = (*v38)--;
              if ( v39 <= 0 )
                j_j_j_j__ZdlPv_9(v40);
            v34 = (char *)v34 + 4;
          while ( v34 != (void *)v37 );
          v34 = v315;
        if ( v34 )
          operator delete(v34);
        for ( k = v29; k != (_DWORD *)v33; ++k )
          v44 = (int *)(*k - 12);
          if ( v44 != &dword_28898C0 )
            v42 = (unsigned int *)(*k - 4);
                v43 = __ldrex(v42);
              while ( __strex(v43 - 1, v42) );
              v43 = (*v42)--;
            if ( v43 <= 0 )
              j_j_j_j__ZdlPv_9(v44);
        if ( v29 )
          operator delete(v29);
        v7 = v31;
        v6 = v266;
        v45 = v263;
        v46 = (void *)(v313 - 12);
        if ( (int *)(v313 - 12) != &dword_28898C0 )
          v112 = (unsigned int *)(v313 - 4);
              v113 = __ldrex(v112);
            while ( __strex(v113 - 1, v112) );
            v7 = v31;
            v113 = (*v112)--;
          if ( v113 <= 0 )
            j_j_j_j__ZdlPv_9(v46);
        v8 = v30;
        v15 = a5;
      v25 = v45 + 1;
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v321);
    }
    if ( v25 <= 1 )
      goto LABEL_409;
    if ( v15 == 1 )
      v214 = PackManifest::getModules(v8);
      ResourceInformation::ResourceInformation(v280, (int *)(*((_DWORD *)v214 + 1) - 56));
      PackManifest::clearModules(v8);
      PackManifest::addModule(v8, (const ResourceInformation *)v280);
      v215 = 0;
      if ( v281 == 3 )
        v215 = 1;
      PackManifest::setHasPlugins(v8, v215);
      v216 = (int *)ResourceInformation::StringFromResourceType(v281);
      sub_21E8AF4(&v273, v216);
      v217 = operator new(4u);
      v218 = v217;
      v219 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
               (int)&v273,
               (int)&v274,
               (int)v217);
      v220 = v219;
      v221 = 0;
      v274 = &off_26D9084;
      v222 = v219 - (_DWORD)v218;
      v275 = 0;
      v276 = 0;
      v277 = 0;
      v223 = v222 >> 2;
      if ( v222 >> 2 )
        if ( v223 >= 0x40000000 )
          sub_21E57F4();
        v221 = operator new(v222);
      v275 = v221;
      v276 = (int)v221;
      v277 = (char *)v221 + 4 * v223;
      v224 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
               (int)v218,
               v220,
               (int)v221);
      v276 = v224;
      v278 = 22;
      v279 = 2;
      v274 = &off_26EABBC;
      PackReport::addWarning<PackDiscoveryError>(v7, (int)&v274);
      if ( v221 != (void *)v224 )
        do
          v245 = (int *)(*(_DWORD *)v221 - 12);
          if ( v245 != &dword_28898C0 )
            v243 = (unsigned int *)(*(_DWORD *)v221 - 4);
                v244 = __ldrex(v243);
              while ( __strex(v244 - 1, v243) );
              v244 = (*v243)--;
            if ( v244 <= 0 )
              j_j_j_j__ZdlPv_9(v245);
          v221 = (char *)v221 + 4;
        while ( v221 != (void *)v224 );
        v221 = v275;
      if ( v221 )
        operator delete(v221);
      if ( v218 != (_DWORD *)v220 )
        v246 = v218;
          v249 = (int *)(*v246 - 12);
          if ( v249 != &dword_28898C0 )
            v247 = (unsigned int *)(*v246 - 4);
                v248 = __ldrex(v247);
              while ( __strex(v248 - 1, v247) );
              v248 = (*v247)--;
            if ( v248 <= 0 )
              j_j_j_j__ZdlPv_9(v249);
          ++v246;
        while ( v246 != (_DWORD *)v220 );
      if ( v218 )
        operator delete(v218);
      v250 = (void *)(v273 - 12);
      if ( (int *)(v273 - 12) != &dword_28898C0 )
        v261 = (unsigned int *)(v273 - 4);
        if ( &pthread_create )
          __dmb();
            v262 = __ldrex(v261);
          while ( __strex(v262 - 1, v261) );
          v262 = (*v261)--;
        if ( v262 <= 0 )
          j_j_j_j__ZdlPv_9(v250);
      ResourceInformation::~ResourceInformation((ResourceInformation *)v280);
    v252 = *(_QWORD *)PackManifest::getModules(v8);
    v251 = v252;
    if ( (_DWORD)v252 == HIDWORD(v252) )
    v253 = 0;
    while ( 1 )
      v254 = *(_DWORD *)(v251 + 48);
      if ( (unsigned int)(v254 - 2) >= 3 )
        if ( v254 == 6 )
          v255 = 3;
          v255 = v254 == 1;
        v255 = 2;
      if ( v253 )
        if ( (unsigned __int8)v253 != (unsigned __int8)v255 )
          v270 = 0;
          ptr = 0;
          v256 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                   0,
                   0);
          v269 = v256;
          v271 = 21;
          v272 = 2;
          v267 = &off_26EABBC;
          PackReport::addError<PackDiscoveryError>(v7, (int)&v267);
          v267 = &off_26D9084;
          if ( v256 )
            v257 = 0;
              v260 = (int *)(*v257 - 12);
              if ( v260 != &dword_28898C0 )
                v258 = (unsigned int *)(*v257 - 4);
                    v259 = __ldrex(v258);
                  while ( __strex(v259 - 1, v258) );
                  v259 = (*v258)--;
                if ( v259 <= 0 )
                  j_j_j_j__ZdlPv_9(v260);
              ++v257;
            while ( v257 != (_DWORD *)v256 );
            if ( ptr )
              operator delete(ptr);
          goto LABEL_409;
        v253 = v255;
      v251 += 56;
      if ( HIDWORD(v252) == v251 )
        goto LABEL_409;
  }
  sub_157984C(&v322, (__int64 *)v6);
  v179 = operator new(4u);
  v180 = v179;
  v181 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
           (int)&v322,
           (int)&v323,
           (int)v179);
  v182 = v181;
  v183 = 0;
  v323 = &off_26D9084;
  v184 = v181 - (_DWORD)v180;
  v324 = 0;
  v325 = 0;
  v326 = 0;
  v185 = v184 >> 2;
  if ( v184 >> 2 )
  {
    if ( v185 >= 0x40000000 )
      sub_21E57F4();
    v183 = operator new(v184);
  v324 = v183;
  v325 = (int)v183;
  v326 = (char *)v183 + 4 * v185;
  v186 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
           (int)v180,
           v182,
           (int)v183);
  v325 = v186;
  v327 = 8;
  v328 = 2;
  v323 = &off_26EABBC;
  PackReport::addError<PackDiscoveryError>(v7, (int)&v323);
  if ( v183 != (void *)v186 )
    v187 = &v357;
    do
      v191 = (int *)(*(_DWORD *)v183 - 12);
      if ( v191 != &dword_28898C0 )
        v188 = (unsigned int *)(*(_DWORD *)v183 - 4);
            v189 = __ldrex(v188);
          while ( __strex(v189 - 1, v188) );
          v189 = (*v188)--;
        if ( v189 <= 0 )
          v190 = v187;
          j_j_j_j__ZdlPv_9(v191);
          v187 = v190;
      v183 = (char *)v183 + 4;
    while ( v183 != (void *)v186 );
    v183 = v324;
  if ( v183 )
    operator delete(v183);
  if ( v180 != (_DWORD *)v182 )
    v192 = v180;
      v195 = (int *)(*v192 - 12);
      if ( v195 != &dword_28898C0 )
        v193 = (unsigned int *)(*v192 - 4);
            v194 = __ldrex(v193);
          while ( __strex(v194 - 1, v193) );
          v194 = (*v193)--;
        if ( v194 <= 0 )
          j_j_j_j__ZdlPv_9(v195);
      ++v192;
    while ( v192 != (_DWORD *)v182 );
  if ( v180 )
    operator delete(v180);
  v176 = (void *)(v322 - 12);
  if ( (int *)(v322 - 12) != &dword_28898C0 )
    v177 = (unsigned int *)(v322 - 4);
    if ( !&pthread_create )
      goto LABEL_484;
    __dmb();
      v178 = __ldrex(v177);
    while ( __strex(v178 - 1, v177) );
    goto LABEL_485;
LABEL_409:
  v205 = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v6 + 4) = v205 - 4;
  v206 = *(_DWORD *)(v205 - 4);
  v207 = (void *)(v206 - 12);
  if ( (int *)(v206 - 12) != &dword_28898C0 )
    v212 = (unsigned int *)(v206 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v213 = __ldrex(v212);
      while ( __strex(v213 - 1, v212) );
    else
      v213 = (*v212)--;
    if ( v213 <= 0 )
      j_j_j_j__ZdlPv_9(v207);
}


void __fastcall Json::StyledStreamWriter::writeArrayValue(Json::StyledStreamWriter *this, const Json::Value *a2)
{
  const Json::Value *v2; // r11@1
  Json::StyledStreamWriter *v3; // r4@1
  int v4; // r7@1
  char *v5; // r0@3
  char *v6; // r0@3
  void *v7; // r0@3
  int v8; // r5@5
  unsigned int v9; // r6@5
  const Json::Value *v10; // r7@7
  char *v11; // r0@7
  int v12; // r8@7
  char *v13; // r0@7
  __int64 v14; // r0@10
  int v15; // r6@12
  int v16; // r5@18
  unsigned int v17; // r6@18
  char *v18; // r0@20
  char *v19; // r0@20
  char *v20; // r0@21
  char *v21; // r0@21
  void *v22; // r0@21
  unsigned int *v23; // r2@22
  signed int v24; // r1@24
  unsigned int *v25; // r2@37
  signed int v26; // r1@39
  char *v27; // [sp+4h] [bp-44h]@5
  int v28; // [sp+Ch] [bp-3Ch]@21
  int v29; // [sp+14h] [bp-34h]@3
  int v30; // [sp+1Ch] [bp-2Ch]@9
  char v31; // [sp+20h] [bp-28h]@3

  v2 = a2;
  v3 = this;
  v4 = j_Json::Value::size(a2);
  if ( v4 )
  {
    if ( j_Json::StyledStreamWriter::isMultineArray(v3, v2) == 1 )
    {
      sub_21E94B4((void **)&v29, "[");
      v5 = (char *)*((_DWORD *)v3 + 3);
      v31 = 10;
      v6 = sub_21CBF38(v5, (int)&v31, 1);
      sub_21CBF38(v6, *((_DWORD *)v3 + 4), *(_DWORD *)(*((_DWORD *)v3 + 4) - 12));
      sub_21CBF38(*((char **)v3 + 3), v29, *(_DWORD *)(v29 - 12));
      v7 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
      {
        v25 = (unsigned int *)(v29 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      sub_21E72F0((const void **)v3 + 4, (const void **)v3 + 6);
      if ( (unsigned int)*(_QWORD *)v3 == *(_QWORD *)v3 >> 32 )
        v27 = (char *)v3 + 16;
        v16 = v4 - 1;
        v17 = 0;
        while ( 1 )
          v10 = (const Json::Value *)j_Json::Value::operator[]((int)v2, v17);
          j_Json::StyledStreamWriter::writeCommentBeforeValue(v3, v10);
          v18 = (char *)*((_DWORD *)v3 + 3);
          v31 = 10;
          v19 = sub_21CBF38(v18, (int)&v31, 1);
          sub_21CBF38(v19, *((_DWORD *)v3 + 4), *(_DWORD *)(*((_DWORD *)v3 + 4) - 12));
          j_Json::StyledStreamWriter::writeValue(v3, v10);
          if ( v16 == v17 )
            break;
          ++v17;
          sub_21CBF38(*((char **)v3 + 3), (int)",", 1);
          j_Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(v3, v10);
      else
        v8 = v4 - 1;
        v9 = 0;
          v10 = (const Json::Value *)j_Json::Value::operator[]((int)v2, v9);
          v11 = (char *)*((_DWORD *)v3 + 3);
          v12 = *(_DWORD *)v3;
          v13 = sub_21CBF38(v11, (int)&v31, 1);
          sub_21CBF38(v13, *((_DWORD *)v3 + 4), *(_DWORD *)(*((_DWORD *)v3 + 4) - 12));
          sub_21CBF38(*((char **)v3 + 3), *(_DWORD *)(v12 + 4 * v9), *(_DWORD *)(*(_DWORD *)(v12 + 4 * v9) - 12));
          if ( v8 == v9 )
          ++v9;
      j_Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(v3, v10);
      sub_21E849C(v27, *(_DWORD *)(*((_DWORD *)v3 + 4) - 12) - *(_DWORD *)(*((_DWORD *)v3 + 6) - 12), 0);
      sub_21E94B4((void **)&v28, "]");
      v20 = (char *)*((_DWORD *)v3 + 3);
      v21 = sub_21CBF38(v20, (int)&v31, 1);
      sub_21CBF38(v21, *((_DWORD *)v3 + 4), *(_DWORD *)(*((_DWORD *)v3 + 4) - 12));
      sub_21CBF38(*((char **)v3 + 3), v28, *(_DWORD *)(v28 - 12));
      v22 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v28 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          goto LABEL_34;
LABEL_33:
        v24 = (*v23)--;
LABEL_34:
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
        return;
    }
    else
      sub_21CBF38(*((char **)v3 + 3), (int)&unk_25DA2BD, 2);
      v15 = 0;
      do
        if ( v15 )
          sub_21CBF38(*((char **)v3 + 3), (int)", ", 2);
        sub_21CBF38(
          *((char **)v3 + 3),
          *(_DWORD *)(*(_DWORD *)v3 + 4 * v15),
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 4 * v15) - 12));
        ++v15;
      while ( v4 != v15 );
      sub_21CBF38(*((char **)v3 + 3), (int)" ]", 2);
  }
  else
    sub_21E94B4((void **)&v30, (const char *)&unk_25DA2BA);
    if ( *((_BYTE *)v3 + 28) )
      v14 = *(_QWORD *)((char *)v3 + 4);
      if ( (_DWORD)v14 == HIDWORD(v14) )
        j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)v3,
          &v30);
        sub_21E8AF4((int *)v14, &v30);
        *((_DWORD *)v3 + 1) += 4;
      sub_21CBF38(*((char **)v3 + 3), v30, *(_DWORD *)(v30 - 12));
    v22 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        goto LABEL_34;
      goto LABEL_33;
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v20 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  v14 = *v6;
  v15 = *((_DWORD *)*v6 - 3);
  v17 = StoreBaseScreenController::_getStoreCatalogItemNewOfferIconVisible(
          (StoreBaseScreenController *)v7,
          (const StoreCatalogItemModel *)&v20);
  return UIPropertyBag::set<bool>(v5, v15, v14, &v17);
}


  if ( !Json::Value::isNull((Json::Value *)(v5 + 8)) && Json::Value::isObject((Json::Value *)(v5 + 8)) == 1 )
{
    v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v7);
    if ( Json::Value::isInt(v9) || Json::Value::isUInt(v9) == 1 )
      v4 = Json::Value::asInt(v9, 0);
  }
  LODWORD(v8) = v4;
  Util::format((Util *)&v15, "featured_grid_item_%d", v8);
  UIPropertyBag::set<std::string>(v5, *((_DWORD *)*v6 - 3), *v6, (const void **)&v15);
  v10 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
}


int __fastcall Json::Value::clear(__int64 this)
{
  int v1; // r4@2

  if ( (*(_WORD *)(this + 8) & 0xFE) == 6 )
  {
    v1 = *(_DWORD *)this;
    j_std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_erase(
      *(_DWORD *)this,
      *(_DWORD *)(*(_DWORD *)this + 8));
    this = (unsigned int)(v1 + 4);
    *(_DWORD *)(v1 + 8) = 0;
    *(_DWORD *)(v1 + 12) = v1 + 4;
    *(_QWORD *)(v1 + 16) = this;
  }
  return this;
}


void __fastcall Json::Path::makePath(int a1, int *a2, int **a3)
{
  Json::Path::makePath(a1, a2, a3);
}


  if ( Json::Value::isNull(v5)
{
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#property_field"), Json::Value::isString(v6) != 1) )
  {
    v7 = v23;
    v24 = v23;
    v23 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v24, (int)&v26, (int)v6);
    v7 = v24;
  sub_119C884((void **)&v22, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v5)
    || Json::Value::isObject(v5) != 1
    || (v8 = (Json::Value *)Json::Value::operator[]((int)v5, v7), Json::Value::isString(v8) != 1) )
    v25 = v22;
    v22 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v8);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v4 + 464),
    (int *)&v25);
  v9 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (char *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v23 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  if ( *(_DWORD *)(v2 + 16) == 1 )
    *(_BYTE *)(v4 + 478) = 1;
  *(_BYTE *)(v4 + 479) = 1;
  return 1;
}


int __fastcall Json::FastWriter::FastWriter(int result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = &unk_28898CC;
  LODWORD(v1) = &off_2725B14;
  *(_QWORD *)result = v1;
  *(_BYTE *)(result + 8) = 0;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v19 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  v14 = *v6;
  v15 = *((_DWORD *)*v6 - 3);
  v16 = (const void **)StoreCatalogItemModel::getProductId((StoreCatalogItemModel *)&v19);
  UIPropertyBag::set<std::string>(v5, v15, v14, v16);
}


  if ( Json::Value::isNull(v4) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, v5);
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  *(_DWORD *)(v3 + 440) = v6;
  gsl::basic_string_span<char const,-1>::remove_z<24u>((int)&v12, (int)"#skins_collection_index");
  v8 = v13;
  if ( Json::Value::isNull(v4) )
    v9 = -1;
    v10 = (Json::Value *)Json::Value::operator[]((int)v4, v8);
    if ( Json::Value::isInt(v10) || Json::Value::isUInt(v10) == 1 )
      v9 = Json::Value::asInt(v10, 0);
      v9 = -1;
  *(_DWORD *)(v3 + 444) = v9;
  return 1;
}


          if ( Json::Value::isObject(v19) != 1 || Json::Value::isObject(v21) != 1 )
{
          else
            sub_DBE790(v21, (int)v19, v29, v39, 0, a6);
        }
        else if ( a5 )
        {
          v34 = v19;
          v35 = v30;
          std::_Rb_tree<ModificationOperation,ModificationOperation,std::_Identity<ModificationOperation>,std::less<ModificationOperation>,std::allocator<ModificationOperation>>::_M_emplace_unique<Json::Value *,Json::Value const*,std::string const&,int &>(
            (int)&v40,
            a5,
            &v35,
            (int *)&v34,
            v29,
            &v39);
        v28 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
          v11 = (unsigned int *)(v36 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v28);
      }
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v38);
      Json::Value::end(v8, v6);
      result = Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v38, v8);
    }
    while ( !result );
  }
  return result;
}


void __fastcall Json::Path::makePath(int a1, int *a2, int **a3)
{
  int v3; // r6@1
  int v4; // r7@1
  int v5; // r0@1
  int v6; // r11@2
  int *v7; // r8@2
  int *v8; // r9@2
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  int v15; // r1@28
  int v16; // r1@31
  int v17; // r4@35
  __int64 v18; // r0@34
  int v19; // r4@39
  __int64 v20; // r0@38
  const char *v21; // r8@40
  int v22; // r4@40
  _BYTE *v23; // r4@42
  int v24; // t1@44
  _BYTE *v25; // r2@48
  int v26; // r0@48
  int v27; // t1@50
  int v28; // r9@59
  _DWORD *v29; // r0@59
  int *v30; // r10@59
  __int64 v31; // r0@64
  char *v32; // r0@67
  __int64 v33; // r0@73
  char *v34; // r1@74
  char *v35; // r0@76
  int *v36; // [sp+18h] [bp-58h]@2
  int v37; // [sp+1Ch] [bp-54h]@1
  int **v38; // [sp+24h] [bp-4Ch]@1
  char *v39; // [sp+30h] [bp-40h]@3
  __int64 v40; // [sp+34h] [bp-3Ch]@65
  int v41; // [sp+38h] [bp-38h]@64
  char *v42; // [sp+3Ch] [bp-34h]@73
  int v43; // [sp+40h] [bp-30h]@73
  int v44; // [sp+44h] [bp-2Ch]@73

  v3 = *a2;
  v4 = a1;
  v38 = a3;
  v37 = a1;
  v5 = *(_DWORD *)(*a2 - 12);
  if ( v5 )
  {
    v6 = v3 + v5;
    v7 = *a3;
    v36 = *a3;
    v8 = &dword_28898C0;
    do
    {
      v15 = *(_BYTE *)v3;
      if ( v15 == 37 )
      {
        if ( v7 != v38[1] && *(_DWORD *)(*v7 + 8) == 2 )
        {
          v20 = *(_QWORD *)(v4 + 4);
          if ( (_DWORD)v20 == HIDWORD(v20) )
          {
            j_std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>::_M_emplace_back_aux<Json::PathArgument const&>(
              (unsigned __int64 *)v4,
              *v7);
          }
          else
            v19 = *v7;
            *(_QWORD *)(sub_21E8AF4((int *)v20, (int *)*v7) + 1) = *(_QWORD *)(v19 + 4);
            *(_DWORD *)(v4 + 4) += 12;
        }
      }
      else if ( v15 != 46 )
        if ( v15 == 91 )
          v16 = *(_BYTE *)(v3 + 1);
          if ( v16 == 37 )
            if ( v7 == v38[1] )
            {
              ++v3;
            }
            else if ( *(_DWORD *)(*v7 + 8) == 1 )
              v18 = *(_QWORD *)(v4 + 4);
              if ( (_DWORD)v18 == HIDWORD(v18) )
              {
                j_std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>::_M_emplace_back_aux<Json::PathArgument const&>(
                  (unsigned __int64 *)v4,
                  *v7);
                ++v3;
              }
              else
                v17 = *v7;
                *(_QWORD *)(sub_21E8AF4((int *)v18, (int *)*v7) + 1) = *(_QWORD *)(v17 + 4);
                *(_DWORD *)(v4 + 4) += 12;
            else
            if ( v3 + 1 == v6 )
              v26 = 0;
              v3 = v6;
            else if ( (unsigned __int8)(v16 - 48) > 9u )
              v25 = (_BYTE *)(v3 + 2);
              while ( 1 )
                v26 = 10 * v26 + v16 - 48;
                if ( (_BYTE *)v6 == v25 )
                  break;
                v27 = *v25++;
                v16 = v27;
                if ( (unsigned __int8)(v27 - 48) >= 0xAu )
                {
                  v3 = (int)(v25 - 1);
                  goto LABEL_73;
                }
LABEL_73:
            v42 = (char *)&unk_28898CC;
            v43 = v26;
            v44 = 1;
            v33 = *(_QWORD *)(v4 + 4);
            if ( (_DWORD)v33 == HIDWORD(v33) )
              j_std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>::_M_emplace_back_aux<Json::PathArgument>(
                (unsigned __int64 *)v4,
                (int)&v42);
              v34 = v42;
              *(_DWORD *)v33 = &unk_28898CC;
              v42 = (char *)&unk_28898CC;
              *(_QWORD *)(v33 + 4) = *(_QWORD *)&v43;
              v34 = (char *)&unk_28898CC;
              *(_DWORD *)(v4 + 4) += 12;
            v35 = v34 - 12;
            if ( (int *)(v34 - 12) != v8 )
              v13 = (unsigned int *)(v34 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v14 = __ldrex(v13);
                while ( __strex(v14 - 1, v13) );
                v14 = (*v13)--;
              if ( v14 <= 0 )
                j_j_j_j__ZdlPv_9(v35);
          if ( v3 != v6 )
            ++v3;
        else
          v21 = (const char *)&unk_28898CC;
          v22 = v6;
            v22 = v3;
            if ( !j_memchr("[.", v15, 3u) )
              v23 = (_BYTE *)(v3 + 1);
              while ( (_BYTE *)v6 != v23 )
                v24 = *v23++;
                if ( j_memchr("[.", v24, 3u) )
                  v22 = (int)(v23 - 1);
                  goto LABEL_57;
              v22 = v6;
LABEL_57:
          if ( v3 != v22 )
            if ( !v3 )
              sub_21E5884((int)"basic_string::_S_construct null not valid");
            v28 = v22 - v3;
            v29 = sub_21E7E80(v22 - v3, 0);
            v30 = v29;
            v21 = (const char *)(v29 + 3);
            if ( v22 - v3 == 1 )
              *v21 = *(_BYTE *)v3;
              j___aeabi_memcpy_0((int)(v29 + 3), v3, v22 - v3);
            if ( v30 != &dword_28898C0 )
              v30[2] = 0;
              *v30 = v28;
              v21[v28] = byte_26C67B8[0];
          sub_21E94B4((void **)&v39, v21);
          v4 = v37;
          v41 = 2;
          v31 = *(_QWORD *)(v37 + 4);
          if ( (_DWORD)v31 == HIDWORD(v31) )
            j_std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>::_M_emplace_back_aux<Json::PathArgument>(
              (unsigned __int64 *)v37,
              (int)&v39);
            *(_DWORD *)v31 = v39;
            v39 = (char *)&unk_28898CC;
            *(_QWORD *)(v31 + 4) = v40;
            *(_DWORD *)(v37 + 4) += 12;
          v8 = &dword_28898C0;
          v32 = v39 - 12;
          if ( (int *)(v39 - 12) != &dword_28898C0 )
            v9 = (unsigned int *)(v39 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v10 = __ldrex(v9);
              while ( __strex(v10 - 1, v9) );
              v10 = (*v9)--;
            if ( v10 <= 0 )
              j_j_j_j__ZdlPv_9(v32);
          if ( (int *)(v21 - 12) != &dword_28898C0 )
            v11 = (unsigned int *)(v21 - 4);
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
              v12 = (*v11)--;
            if ( v12 <= 0 )
              j_j_j_j__ZdlPv_9((void *)(v21 - 12));
          v3 = v22;
          v7 = v36;
        continue;
      ++v3;
    }
    while ( v3 != v6 );
  }
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v24;
    v25 = v24;
    v24 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v5);
    v6 = v25;
  sub_119C884((void **)&v23, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v26 = v23;
    v23 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v26, (int)&v28, (int)v7);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 444),
    (int *)&v26);
  v8 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (char *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v25 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v24 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  *(_BYTE *)(v3 + 436) = 1;
  v12 = (RakNet *)(*(_QWORD *)(v3 + 440) >> 32);
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 440) - 12) )
    v13 = 0;
    if ( *((_DWORD *)v12 - 3) && *(_DWORD *)(v3 + 448) > 0 )
      v13 = (const char *)1;
  *(_BYTE *)(v3 + 436) = (_BYTE)v13;
  if ( !RakNet::NonNumericHostString(v12, v13) )
    *(_BYTE *)(v3 + 436) &= Util::isValidIP(*(_DWORD *)(*(_DWORD *)(v3 + 444) - 12), *(_DWORD *)(v3 + 444), 1, 1);
  return 1;
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
    {
      v5 = Json::Value::asInt(v6, 0);
      if ( v5 < 0 )
      {
        v5 = -1;
      }
      else if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v3 + 432), 2, 0) <= v5 )
      else
        v7 = s1;
        if ( strcmp(s1, "personal_realms") )
        {
          if ( !strcmp(v7, "friends_realms") )
            v5 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v3 + 432));
          else
            v5 = -1;
        }
    }
    else
      v5 = -1;
  else
  v8 = s1 - 12;
  if ( (int *)(s1 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v5 < 0 )
    result = 0;
    PlayScreenController::_handleLeaveRealm((PlayScreenController *)v3, v5);
    result = 8;
  return result;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "reset_group"), Json::Value::isString(v5) != 1) )
  {
    v31 = v30;
    v6 = (char *)&unk_28898CC;
    v30 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v31, (int)&v46, (int)v5);
    v6 = v30;
  v7 = v6 - 12;
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  sub_21E8AF4(&v28, (int *)&v31);
  v29 = v3;
  sub_21E8AF4((int *)&v23, &v28);
  v8 = v29;
  v24 = v29;
  v26 = 0;
  v9 = operator new(8u);
  HIDWORD(v10) = sub_13C9444;
  *v9 = v23;
  v23 = (char *)&unk_28898CC;
  v9[1] = v8;
  v25 = v9;
  v26 = (void (*)(void))sub_13C94AC;
  v27 = sub_13C9444;
  LODWORD(v10) = &v25;
  MinecraftScreenController::_displayCustomModalPopup(v3, (int)&v32, v10);
  if ( v26 )
    v26();
  v11 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v28 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v31 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  ModalScreenData::~ModalScreenData((ModalScreenData *)&v32);
  return 1;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v3) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v3, "#collection_index");
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  PlayScreenController::_getCollectionName((PlayScreenController *)&v25, v5, v2);
  if ( sub_21E7D6C((const void **)&v25, "friends_network_worlds") )
    if ( sub_21E7D6C((const void **)&v25, "lan_network_worlds") )
    {
      if ( sub_21E7D6C((const void **)&v25, "servers_network_worlds") )
      {
        if ( sub_21E7D6C((const void **)&v25, "third_party_server_network_worlds") )
        {
          v8 = 0;
          goto LABEL_20;
        }
        v8 = 4;
      }
      else
        v8 = 2;
    }
      v8 = 1;
    v8 = 3;
  v9 = PlayScreenModel::getNetworkWorldAtIndex(*(_DWORD *)(v4 + 432), v6, v8);
  if ( v9 )
    NetworkWorldInfo::NetworkWorldInfo((int)&v27, v9);
    NetworkWorldInfo::NetworkWorldInfo((int)&v26, (int)&v27);
    NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v27);
    goto LABEL_21;
LABEL_20:
  NetworkWorldInfo::NetworkWorldInfo((int)&v26);
LABEL_21:
  v10 = WorldInfo::isValid((WorldInfo *)&v26);
  v11 = *(_DWORD *)(v4 + 432);
  if ( v10 )
    PlayScreenModel::updateWorldTimestamp(*(PlayScreenModel **)(v4 + 432), (NetworkWorldInfo *)&v26);
    v12 = PlayScreenController::_startNetworkWorld(v4, (WorldInfo *)&v26, v8);
    sub_21E94B4((void **)&v24, "disconnectionScreen.internalError.cantFindServer");
    sub_21E94B4((void **)&v23, "disconnectionScreen.internalError.cantConnect");
    MinecraftScreenModel::navigateToDisconnectScreen(v11, &v24, &v23);
    v13 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v24 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v12 = 8;
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v26);
  v15 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( _stack_chk_guard != v28 )
    _stack_chk_fail(_stack_chk_guard - v28);
  return v12;
}


  if ( Json::Value::isNull(v5) || Json::Value::isObject(v5) != 1 )
{
    Json::Value::Value((Json::Value *)&v13, (const Json::Value *)&v11);
  }
  else
  {
    v6 = (const Json::Value *)Json::Value::operator[]((int)v5, v4);
    Json::Value::Value((Json::Value *)&v13, v6);
  createTokenFromUIDefVal((const Json::Value *)&v14, (Json::Value *)&v13);
  ExprToken::operator=((int)v3, (const Json::Value *)&v14);
  std::_Destroy<ExprToken *,ExprToken>((int)ptr, v16, (int)&ptr);
  if ( ptr )
    operator delete(ptr);
  Json::Value::~Value((Json::Value *)&v14);
  Json::Value::~Value((Json::Value *)&v13);
  Json::Value::~Value((Json::Value *)&v11);
  v7 = (char *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_20;
    }
LABEL_19:
    v9 = (*v8)--;
LABEL_20:
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
}


void __fastcall Json::StyledWriter::writeArrayValue(Json::StyledWriter *this, const Json::Value *a2)
{
  Json::StyledWriter::writeArrayValue(this, a2);
}


  if ( Json::Value::isString(v8) != 1 )
{
  jsonValConversion<char const*>::as(&v14, (int)&v15, (int)v8);
  v9 = sub_1590284((const void **)&v14, *v7);
  v10 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v14 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v10);
  }
  if ( v9 )
LABEL_16:
    Json::Value::Value((Json::Value *)&v13, *v7);
    Json::Value::operator=((int)v8, (const Json::Value *)&v13);
    Json::Value::~Value((Json::Value *)&v13);
    UIPropertyBag::_handlePropertyChangedNotifications(v4, v6, v5);
}


int __fastcall Json::Value::CommentInfo::CommentInfo(int result)
{
  *(_DWORD *)result = 0;
  return result;
}


int __fastcall Json::Value::asFloat(Json::Value *this, float _R1)
{
  int result; // r0@4

  __asm { VMOV            S0, R1 }
  switch ( *((_BYTE *)this + 8) )
  {
    case 1:
      _R0 = j___aeabi_l2f_0(*(_QWORD *)this, *(_QWORD *)this >> 32);
      goto LABEL_4;
    case 2:
      _R0 = j___aeabi_ul2f(*(_QWORD *)this, *(_QWORD *)this >> 32);
LABEL_4:
      __asm
      {
        VMOV            S0, R0
        VMOV            R0, S0
      }
      return result;
    case 3:
        VLDR            D0, [R0]; jumptable 01B2D9BC case 3
        VCVT.F32.F64    S0, D0
    default:
      __asm { VLDR            S0, =0.0; jumptable 01B2D9BC default case }
      goto LABEL_7;
    case 0:
LABEL_7:
      __asm { VMOV            R0, S0  ; jumptable 01B2D9BC case 0 }
      break;
    case 5:
        VMOV.F32        S2, #1.0; jumptable 01B2D9BC case 5
        VLDR            S0, =0.0
      if ( *(_BYTE *)this )
        __asm { VMOVNE.F32      S0, S2 }
      __asm { VMOV            R0, S0 }
  }
  return result;
}


unsigned int __fastcall Json::Value::asUInt(Json::Value *this, unsigned int a2)
{
  unsigned int result; // r0@2

  switch ( *((_BYTE *)this + 8) )
  {
    case 1:
    case 2:
      result = *(_DWORD *)this;
      break;
    case 3:
      __asm
      {
        VLDR            D0, [R0]; jumptable 01B2D80A case 3
        VCVTR.U32.F64   S0, D0
        VMOV            R1, S0
      }
      result = _R1;
    default:
      a2 = 0;
      goto LABEL_5;
    case 0:
LABEL_5:
      result = a2;
    case 5:
      result = *(_BYTE *)this;
  }
  return result;
}


  if ( Json::Value::isNull(v4) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, v5);
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  v8 = NpcInteractScreenController::_buttonToActionIndex((NpcInteractScreenController *)v3, v6);
  NpcInteractScreenController::_performAction((NpcInteractScreenController *)v3, v8);
  NpcInteractScreenController::_performClosingActions((NpcInteractScreenController *)v3);
  MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(v3 + 380));
  return 0;
}


int __fastcall Json::Value::isMember(int a1, const char **a2)
{
  int result; // r0@2
  const char *v3; // r4@3
  const char *v4; // r1@3
  int v5; // r5@3
  int v6; // r0@3
  int v7; // r8@3
  int v8; // r7@3
  int v9; // r6@6
  const char *v10; // r0@7
  bool v11; // zf@15
  signed int v12; // r2@23
  signed int v13; // r1@23

  if ( *(_BYTE *)(a1 + 8) )
  {
    v3 = *a2;
    v4 = *(const char **)a1;
    v5 = *(_DWORD *)a1 + 4;
    v6 = *(_DWORD *)(*(_DWORD *)a1 + 8);
    v7 = v5;
    v8 = v5;
    if ( v6 )
    {
      if ( v3 )
      {
        v8 = v5;
        do
        {
          v9 = v8;
          v8 = v6;
          while ( 1 )
          {
            v10 = *(const char **)(v8 + 16);
            if ( !v10 || j_strcmp_0(v10, v3) >= 0 )
              break;
            v8 = *(_DWORD *)(v8 + 12);
            if ( !v8 )
            {
              v8 = v9;
              goto LABEL_14;
            }
          }
          v6 = *(_DWORD *)(v8 + 8);
        }
        while ( v6 );
      }
      else
          v6 = *(_DWORD *)(v6 + 8);
    }
LABEL_14:
    if ( v8 != v5 )
      v11 = v3 == 0;
        v4 = *(const char **)(v8 + 16);
        v11 = v4 == 0;
      if ( v11 )
        if ( !*(_DWORD *)(v8 + 20) )
          v7 = v8;
      else if ( j_strcmp_0(v3, v4) >= 0 )
        v7 = v8;
    v12 = 0;
    v13 = 0;
    if ( v7 != v5 )
      v12 = 1;
    if ( (_UNKNOWN *)(v7 + 24) != &Json::Value::null )
      v13 = 1;
    result = v12 & v13;
  }
  else
    result = 0;
  return result;
}


void __fastcall Json::StyledWriter::writeValue(Json::StyledWriter *this, const Json::Value *a2)
{
  Json::StyledWriter *v2; // r10@1
  Json::Value *v3; // r9@1
  int v4; // r1@1
  __int64 v6; // r0@3
  __int64 v7; // r0@5
  signed int v8; // r8@5
  unsigned int v9; // r5@5
  int v10; // r7@5
  char *v11; // r2@5
  const char *v12; // r6@6
  unsigned __int64 v13; // r0@6
  signed int v14; // r2@6
  signed int v15; // r7@9
  __int64 v17; // r0@16
  __int64 v18; // r0@18
  unsigned int v19; // r7@18
  char *v20; // r6@18
  unsigned int v21; // r5@18
  const char *v22; // r4@19
  unsigned __int64 v23; // r0@19
  signed int v24; // r2@19
  signed int v25; // r5@22
  __int64 v26; // r0@27
  double v30; // r0@29
  __int64 v31; // r0@30
  const char *v32; // r0@32
  __int64 v33; // r0@33
  const char *v34; // r1@35
  __int64 v35; // r0@38
  char *v36; // r0@40
  void *v37; // r0@44
  void *v38; // r0@45
  const char **v39; // r7@46
  const Json::Value *v40; // r8@48
  void *v41; // r0@48
  unsigned int *v42; // r2@51
  signed int v43; // r1@53
  void *v44; // r0@59
  unsigned int *v45; // r2@60
  signed int v46; // r1@62
  __int64 v47; // r0@71
  void *v48; // r0@74
  unsigned int *v49; // r2@75
  signed int v50; // r1@77
  const char **v51; // r4@115
  int v52; // r6@115
  unsigned int *v53; // r2@117
  signed int v54; // r1@119
  int *v55; // r0@125
  unsigned int *v56; // r2@132
  signed int v57; // r1@134
  unsigned int *v58; // r2@136
  signed int v59; // r1@138
  int v60; // [sp+Ch] [bp-84h]@50
  int v61; // [sp+10h] [bp-80h]@48
  int v62; // [sp+18h] [bp-78h]@44
  int v63; // [sp+20h] [bp-70h]@70
  int v64; // [sp+24h] [bp-6Ch]@37
  int v65; // [sp+28h] [bp-68h]@32
  int v66; // [sp+2Ch] [bp-64h]@29
  int v67; // [sp+30h] [bp-60h]@26
  int v68; // [sp+34h] [bp-5Ch]@15
  int v69; // [sp+3Ch] [bp-54h]@2
  int v70; // [sp+44h] [bp-4Ch]@45
  const char **v71; // [sp+4Ch] [bp-44h]@43
  const char **v72; // [sp+50h] [bp-40h]@43
  char v73; // [sp+63h] [bp-2Dh]@5
  char v74; // [sp+64h] [bp-2Ch]@5
  RakNet *v75; // [sp+68h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v75 = _stack_chk_guard;
  switch ( j_Json::Value::type(a2) )
  {
    case 0:
      sub_21E94B4((void **)&v69, "null");
      if ( *((_BYTE *)v2 + 32) )
      {
        v6 = *((_QWORD *)v2 + 1);
        if ( (_DWORD)v6 == HIDWORD(v6) )
        {
          j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)((char *)v2 + 4),
            &v69);
        }
        else
          sub_21E8AF4((int *)v6, &v69);
          *((_DWORD *)v2 + 2) += 4;
      }
      else
        sub_21E72F0((const void **)v2 + 4, (const void **)&v69);
      v48 = (void *)(v69 - 12);
      if ( (int *)(v69 - 12) == &dword_28898C0 )
        goto def_1B30A82;
      v49 = (unsigned int *)(v69 - 4);
      if ( !&pthread_create )
        goto LABEL_109;
      __dmb();
      do
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      goto LABEL_110;
    case 1:
      v7 = j_Json::Value::asLargestInt(v3);
      v8 = HIDWORD(v7);
      v74 = 0;
      v9 = (v7 + (SHIDWORD(v7) >> 31)) ^ (SHIDWORD(v7) >> 31);
      v10 = ((v8 >> 31) + __CFADD__((_DWORD)v7, SHIDWORD(v7) >> 31) + v8) ^ (v8 >> 31);
      v11 = &v73;
        v12 = v11;
        *v11 = __PAIR__((unsigned int)v10, v9) % 0xA | 0x30;
        v13 = __PAIR__((unsigned int)v10, v9) / 0xA;
        v14 = 0;
        if ( v9 > 9 )
          v14 = 1;
        if ( v10 )
          v15 = 1;
          v15 = v14;
        v11 = (char *)(v12 - 1);
        v9 = v13;
        _ZF = v15 == 0;
        v10 = HIDWORD(v13);
      while ( !_ZF );
      if ( v8 <= -1 )
        *((_BYTE *)v12-- - 1) = 45;
      sub_21E94B4((void **)&v68, v12);
        v17 = *((_QWORD *)v2 + 1);
        if ( (_DWORD)v17 == HIDWORD(v17) )
            &v68);
          sub_21E8AF4((int *)v17, &v68);
        sub_21E72F0((const void **)v2 + 4, (const void **)&v68);
      v48 = (void *)(v68 - 12);
      if ( (int *)(v68 - 12) == &dword_28898C0 )
      v49 = (unsigned int *)(v68 - 4);
    case 2:
      v18 = j_Json::Value::asLargestUInt(v3);
      v19 = v18;
      v20 = &v73;
      v21 = HIDWORD(v18);
        v22 = v20;
        *v20-- = __PAIR__(v21, v19) % 0xA | 0x30;
        v23 = __PAIR__(v21, v19) / 0xA;
        v24 = 0;
        if ( v19 > 9 )
          v24 = 1;
        if ( v21 )
          v25 = 1;
          v25 = v24;
        v19 = v23;
        _ZF = v25 == 0;
        v21 = HIDWORD(v23);
      sub_21E94B4((void **)&v67, v22);
        v26 = *((_QWORD *)v2 + 1);
        if ( (_DWORD)v26 == HIDWORD(v26) )
            &v67);
          sub_21E8AF4((int *)v26, &v67);
        sub_21E72F0((const void **)v2 + 4, (const void **)&v67);
      v48 = (void *)(v67 - 12);
      if ( (int *)(v67 - 12) == &dword_28898C0 )
      v49 = (unsigned int *)(v67 - 4);
    case 3:
      __asm
        VLDR            D0, =0.0; jumptable 01B30A82 case 3
        VMOV            R2, R3, D0
      LODWORD(v30) = j_Json::Value::asDouble(v3, v4, _R2);
      j_Json::valueToString((Json *)&v66, SHIDWORD(v30), v30);
        v31 = *((_QWORD *)v2 + 1);
        if ( (_DWORD)v31 == HIDWORD(v31) )
            &v66);
          sub_21E8AF4((int *)v31, &v66);
        sub_21E72F0((const void **)v2 + 4, (const void **)&v66);
      v48 = (void *)(v66 - 12);
      if ( (int *)(v66 - 12) == &dword_28898C0 )
      v49 = (unsigned int *)(v66 - 4);
    case 4:
      v32 = (const char *)j_Json::Value::asCString(v3);
      j_Json::valueToQuotedString((Json *)&v65, v32);
        v33 = *((_QWORD *)v2 + 1);
        if ( (_DWORD)v33 == HIDWORD(v33) )
            &v65);
          sub_21E8AF4((int *)v33, &v65);
        sub_21E72F0((const void **)v2 + 4, (const void **)&v65);
      v48 = (void *)(v65 - 12);
      if ( (int *)(v65 - 12) == &dword_28898C0 )
      v49 = (unsigned int *)(v65 - 4);
    case 5:
      _ZF = j_Json::Value::asBool(v3, 0) == 0;
      v34 = "true";
      if ( _ZF )
        v34 = "false";
      sub_21E94B4((void **)&v64, v34);
        v35 = *((_QWORD *)v2 + 1);
        if ( (_DWORD)v35 == HIDWORD(v35) )
            &v64);
          sub_21E8AF4((int *)v35, &v64);
        sub_21E72F0((const void **)v2 + 4, (const void **)&v64);
      v48 = (void *)(v64 - 12);
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v64 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
LABEL_109:
          v50 = (*v49)--;
LABEL_110:
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v48);
      goto def_1B30A82;
    case 6:
      v36 = (char *)(_stack_chk_guard - v75);
      if ( _stack_chk_guard != v75 )
        goto LABEL_131;
      j_j_j__ZN4Json12StyledWriter15writeArrayValueERKNS_5ValueE(v2, v3);
      return;
    case 7:
      j_Json::Value::getMemberNames((Json::Value *)&v71, (int)v3);
      if ( v71 == v72 )
        sub_21E94B4((void **)&v63, (const char *)&unk_25DA2B7);
        if ( *((_BYTE *)v2 + 32) )
          v47 = *((_QWORD *)v2 + 1);
          if ( (_DWORD)v47 == HIDWORD(v47) )
          {
            j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
              (unsigned __int64 *)((char *)v2 + 4),
              &v63);
          }
          else
            sub_21E8AF4((int *)v47, &v63);
            *((_DWORD *)v2 + 2) += 4;
          sub_21E72F0((const void **)v2 + 4, (const void **)&v63);
        v44 = (void *)(v63 - 12);
        if ( (int *)(v63 - 12) == &dword_28898C0 )
          goto LABEL_115;
        v45 = (unsigned int *)(v63 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
LABEL_145:
          if ( v46 <= 0 )
            j_j_j_j__ZdlPv_9(v44);
LABEL_144:
        v46 = (*v45)--;
        goto LABEL_145;
      sub_21E94B4((void **)&v62, "{");
      j_Json::StyledWriter::writeIndent(v2);
      sub_21E72F0((const void **)v2 + 4, (const void **)&v62);
      v37 = (void *)(v62 - 12);
      if ( (int *)(v62 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v62 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v37);
      sub_21E6E1C(&v70, *((_DWORD *)v2 + 7), 32);
      sub_21E72F0((const void **)v2 + 5, (const void **)&v70);
      v38 = (void *)(v70 - 12);
      if ( (int *)(v70 - 12) != &dword_28898C0 )
        v58 = (unsigned int *)(v70 - 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      v39 = v71;
      while ( 1 )
        v40 = (const Json::Value *)j_Json::Value::operator[]((int)v3, v39);
        j_Json::StyledWriter::writeCommentBeforeValue(v2, v40);
        j_Json::valueToQuotedString((Json *)&v61, *v39);
        j_Json::StyledWriter::writeIndent(v2);
        sub_21E72F0((const void **)v2 + 4, (const void **)&v61);
        v41 = (void *)(v61 - 12);
        if ( (int *)(v61 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v61 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
        sub_21E7408((const void **)v2 + 4, " : ", 3u);
        j_Json::StyledWriter::writeValue(v2, v40);
        ++v39;
        if ( v39 == v72 )
          break;
        sub_21E7408((const void **)v2 + 4, ",", 1u);
        j_Json::StyledWriter::writeCommentAfterValueOnSameLine(v2, v40);
      j_Json::StyledWriter::writeCommentAfterValueOnSameLine(v2, v40);
      sub_21E849C((char *)v2 + 20, *(_DWORD *)(*((_DWORD *)v2 + 5) - 12) - *((_DWORD *)v2 + 7), 0);
      sub_21E94B4((void **)&v60, "}");
      sub_21E72F0((const void **)v2 + 4, (const void **)&v60);
      v44 = (void *)(v60 - 12);
      if ( (int *)(v60 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v60 - 4);
          goto LABEL_145;
        goto LABEL_144;
LABEL_115:
      v52 = (int)v72;
      v51 = v71;
      if ( v71 != v72 )
        do
          v55 = (int *)(*v51 - 12);
          if ( v55 != &dword_28898C0 )
            v53 = (unsigned int *)(*v51 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v54 = __ldrex(v53);
              while ( __strex(v54 - 1, v53) );
            }
            else
              v54 = (*v53)--;
            if ( v54 <= 0 )
              j_j_j_j__ZdlPv_9(v55);
          ++v51;
        while ( v51 != (const char **)v52 );
        v51 = v71;
      if ( v51 )
        j_operator delete(v51);
def_1B30A82:
LABEL_131:
        j___stack_chk_fail_0((int)v36);
    default:
  }
}


        if ( Json::Value::isNull((Json::Value *)v9)
{
          || (v11 = (Json::Value *)Json::Value::operator[]((int)v9, "coinCount"), !Json::Value::isInt(v11))
          && Json::Value::isUInt(v11) != 1 )
        {
          v91 = 0;
        }
        else
          v91 = Json::Value::asInt(v11, 0);
        v12 = *(_DWORD *)v2;
        sub_DA7364((void **)&v121, (const char *)&unk_257BC67);
        if ( Json::Value::isNull((Json::Value *)v9)
          || Json::Value::isObject((Json::Value *)v9) != 1
          || (v13 = (Json::Value *)Json::Value::operator[]((int)v9, "sku"), Json::Value::isString(v13) != 1) )
          v122 = v121;
          v121 = (char *)&unk_28898CC;
          jsonValConversion<std::string>::as((int *)&v122, (int)&v128, (int)v13);
        sub_DA73B4(&v123, (int *)&v122);
        v14 = OfferRepository::getOfferByProductSku(v12, (_BYTE **)&v123);
        v15 = (void *)(v123 - 12);
        if ( (int *)(v123 - 12) != &dword_28898C0 )
          v57 = (unsigned int *)(v123 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v58 = __ldrex(v57);
            while ( __strex(v58 - 1, v57) );
          }
          else
            v58 = (*v57)--;
          if ( v58 <= 0 )
            j_j_j_j_j__ZdlPv_9(v15);
        v16 = v122 - 12;
        if ( (int *)(v122 - 12) != &dword_28898C0 )
          v59 = (unsigned int *)(v122 - 4);
              v60 = __ldrex(v59);
            while ( __strex(v60 - 1, v59) );
            v60 = (*v59)--;
          if ( v60 <= 0 )
            j_j_j_j_j__ZdlPv_9(v16);
        v17 = v121 - 12;
        if ( (int *)(v121 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v121 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j_j__ZdlPv_9(v17);
        if ( !v14 || Offer::isValidOffer((Offer *)v14) != 1 )
          break;
        LODWORD(v18) = &v115;
        MinecoinModel::MinecoinModel(v18, (int *)(*(_DWORD *)v92 + 68 * v10 + 8), v91);
        v19 = *(_QWORD *)(v2 + 24);
        if ( (_DWORD)v19 == HIDWORD(v19) )
          std::vector<MinecoinModel,std::allocator<MinecoinModel>>::_M_emplace_back_aux<MinecoinModel>(v85, (int)&v115);
          *(_DWORD *)v19 = &off_26D8068;
          *(_DWORD *)(v19 + 4) = v116;
          sub_DA73B4((int *)(v19 + 8), &v117);
          *(_DWORD *)(v19 + 12) = v118;
          sub_DA73B4((int *)(v19 + 16), &v119);
          *(_DWORD *)(v19 + 20) = v120;
          *v87 += 24;
        MinecoinModel::~MinecoinModel((MinecoinModel *)&v115);
        sub_DA73B4(&v114, (int *)(*(_DWORD *)v92 + 68 * v10 + 8));
        sub_DA73B4(&v113, (int *)(*(_DWORD *)v92 + 68 * v10 + 56));
        v20 = v2;
        v21 = *(ContentCatalogService **)(v2 + 56);
        v109 = (char *)&unk_28898CC;
        HydrateParams::HydrateParams(&v110, &v114, &v113, &v109);
        v93 = v88[1];
        v22 = v88[2];
        v94 = v22;
        if ( v22 )
          v23 = (unsigned int *)(v22 + 8);
              v24 = __ldrex(v23);
            while ( __strex(v24 + 1, v23) );
            ++*v23;
        v95 = *v4;
        std::vector<SearchResponseDocument,std::allocator<SearchResponseDocument>>::vector((int)&ptr, v92);
        v98 = v10;
        v25 = 0;
        v26 = (*(_QWORD *)v90 >> 32) - *(_QWORD *)v90;
        v99 = 0;
        v100 = 0;
        v101 = 0;
        v27 = v26 >> 2;
        if ( v26 >> 2 )
          if ( v27 >= 0x40000000 )
            sub_DA7414();
          v25 = (char *)operator new(v26);
        v99 = v25;
        v100 = v25;
        v101 = &v25[4 * v27];
        v100 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                         *(_QWORD *)v90,
                         *(_QWORD *)v90 >> 32,
                         (int)v25);
        v102 = v20;
        sub_DA73B4(&v103, &v114);
        v104 = v126;
        v86 = v10;
        v105 = v127;
        if ( v127 )
          v28 = (unsigned int *)(v127 + 4);
              v29 = __ldrex(v28);
            while ( __strex(v29 + 1, v28) );
            ++*v28;
        v107 = 0;
        v30 = operator new(0x38u);
        *(_DWORD *)v30 = v93;
        *((_DWORD *)v30 + 1) = v94;
        if ( v94 )
          v31 = (unsigned int *)(v94 + 8);
              v32 = __ldrex(v31);
            while ( __strex(v32 + 1, v31) );
            ++*v31;
        *((_DWORD *)v30 + 2) = v95;
        std::vector<SearchResponseDocument,std::allocator<SearchResponseDocument>>::vector(
          (int)v30 + 12,
          (unsigned __int64 *)&ptr);
        v33 = 0;
        *((_DWORD *)v30 + 6) = v98;
        v34 = *(_QWORD *)&v99;
        *((_DWORD *)v30 + 7) = 0;
        *((_DWORD *)v30 + 8) = 0;
        *((_DWORD *)v30 + 9) = 0;
        v35 = (HIDWORD(v34) - (signed int)v34) >> 2;
        if ( v35 )
          if ( v35 >= 0x40000000 )
          v33 = (char *)operator new(HIDWORD(v34) - v34);
          v34 = *(_QWORD *)&v99;
        *((_DWORD *)v30 + 7) = v33;
        *((_DWORD *)v30 + 8) = v33;
        *((_DWORD *)v30 + 9) = &v33[4 * v35];
        *((_DWORD *)v30 + 8) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                                 v34,
                                 SHIDWORD(v34),
                                 (int)v33);
        *((_DWORD *)v30 + 10) = v102;
        sub_DA73B4((int *)v30 + 11, &v103);
        *((_DWORD *)v30 + 12) = v104;
        *((_DWORD *)v30 + 13) = v105;
        v106 = v30;
        v108 = sub_CDA4F8;
        v105 = 0;
        v104 = 0;
        v107 = (void (*)(void))sub_CDA9FC;
        ContentCatalogService::hydrateItem(v21, &v110, (int)&v106);
        if ( v107 )
          v107();
        v36 = v105;
        v2 = v20;
        if ( v105 )
          v37 = (unsigned int *)(v105 + 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 == 1 )
            v39 = (unsigned int *)(v36 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 8))(v36);
            if ( &pthread_create )
            {
              __dmb();
              do
                v40 = __ldrex(v39);
              while ( __strex(v40 - 1, v39) );
            }
            else
              v40 = (*v39)--;
            if ( v40 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 12))(v36);
        v41 = (void *)(v103 - 12);
        if ( (int *)(v103 - 12) != &dword_28898C0 )
          v63 = (unsigned int *)(v103 - 4);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j_j__ZdlPv_9(v41);
        v42 = (int)v100;
        v43 = v99;
        if ( v99 != v100 )
          do
            v46 = (int *)(*(_DWORD *)v43 - 12);
            if ( v46 != &dword_28898C0 )
              v44 = (unsigned int *)(*(_DWORD *)v43 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v45 = __ldrex(v44);
                while ( __strex(v45 - 1, v44) );
              }
              else
                v45 = (*v44)--;
              if ( v45 <= 0 )
                j_j_j_j_j__ZdlPv_9(v46);
            v43 += 4;
          while ( v43 != (char *)v42 );
          v43 = v99;
        if ( v43 )
          operator delete(v43);
        v48 = v97;
        v47 = (SearchResponseDocument *)ptr;
        if ( ptr != (void *)v97 )
            v47 = (SearchResponseDocument *)((char *)SearchResponseDocument::~SearchResponseDocument(v47) + 68);
          while ( v48 != v47 );
          v47 = (SearchResponseDocument *)ptr;
        if ( v47 )
          operator delete((void *)v47);
        v9 = &v124;
          v49 = (unsigned int *)(v94 + 8);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 == 1 )
            (*(void (**)(void))(*(_DWORD *)v94 + 12))();
        v51 = (void *)(v112 - 12);
        if ( (int *)(v112 - 12) != &dword_28898C0 )
          v65 = (unsigned int *)(v112 - 4);
              v66 = __ldrex(v65);
            while ( __strex(v66 - 1, v65) );
            v66 = (*v65)--;
          if ( v66 <= 0 )
            j_j_j_j_j__ZdlPv_9(v51);
        v52 = (void *)(v111 - 12);
        if ( (int *)(v111 - 12) != &dword_28898C0 )
          v67 = (unsigned int *)(v111 - 4);
              v68 = __ldrex(v67);
            while ( __strex(v68 - 1, v67) );
            v68 = (*v67)--;
          if ( v68 <= 0 )
            j_j_j_j_j__ZdlPv_9(v52);
        v53 = (void *)(v110 - 12);
        if ( (int *)(v110 - 12) != &dword_28898C0 )
          v69 = (unsigned int *)(v110 - 4);
              v70 = __ldrex(v69);
            while ( __strex(v70 - 1, v69) );
            v70 = (*v69)--;
          if ( v70 <= 0 )
            j_j_j_j_j__ZdlPv_9(v53);
        v54 = v109 - 12;
        if ( (int *)(v109 - 12) != &dword_28898C0 )
          v71 = (unsigned int *)(v109 - 4);
              v72 = __ldrex(v71);
            while ( __strex(v72 - 1, v71) );
            v72 = (*v71)--;
          if ( v72 <= 0 )
            j_j_j_j_j__ZdlPv_9(v54);
        v55 = (void *)(v113 - 12);
        if ( (int *)(v113 - 12) != &dword_28898C0 )
          v73 = (unsigned int *)(v113 - 4);
              v74 = __ldrex(v73);
            while ( __strex(v74 - 1, v73) );
            v74 = (*v73)--;
          if ( v74 <= 0 )
            j_j_j_j_j__ZdlPv_9(v55);
        v56 = (void *)(v114 - 12);
        if ( (int *)(v114 - 12) != &dword_28898C0 )
          v75 = (unsigned int *)(v114 - 4);
              v76 = __ldrex(v75);
            while ( __strex(v76 - 1, v75) );
            v76 = (*v75)--;
          if ( v76 <= 0 )
            j_j_j_j_j__ZdlPv_9(v56);
        Json::Value::~Value((Json::Value *)&v124);
        v10 = v86 + 1;
        if ( v86 + 1 >= v89 )
          goto LABEL_213;
      }
      *(_DWORD *)(v2 + 16) = 3;
      Json::Value::~Value((Json::Value *)&v124);
LABEL_213:
      result = (MinecoinModel *)v85;
      v77 = v87;
    }
    v78 = *v77;
    v79 = *(_DWORD *)result;
    if ( *(_DWORD *)result != *v77 )
    {
      sub_CDAFC8((MinecoinModel *)v79, *v77, 2 * (31 - __clz(-1431655765 * ((v78 - v79) >> 3))), 0);
      if ( v78 - v79 <= 384 )
      {
        result = sub_CDB71C((MinecoinModel *)v79, (MinecoinModel *)v78);
      else
        v80 = v79 + 384;
        result = sub_CDB71C((MinecoinModel *)v79, (MinecoinModel *)(v79 + 384));
        if ( v79 + 384 != v78 )
          v81 = v78 - 384;
            v78 &= 0xFFFFFF00;
            sub_CDB8AC(v80);
            result = (MinecoinModel *)(v79 + 24);
            v80 = v79 + 408;
            v6 = v81 == v79 + 24;
            v79 += 24;
          while ( !v6 );
    v82 = v127;
    if ( v127 )
      v83 = (unsigned int *)(v127 + 4);
      if ( &pthread_create )
        __dmb();
        do
          result = (MinecoinModel *)__ldrex(v83);
        while ( __strex((unsigned int)result - 1, v83) );
        result = (MinecoinModel *)(*v83)--;
      if ( result == (MinecoinModel *)1 )
        v84 = (unsigned int *)(v82 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 8))(v82);
        if ( &pthread_create )
          __dmb();
            result = (MinecoinModel *)__ldrex(v84);
          while ( __strex((unsigned int)result - 1, v84) );
          result = (MinecoinModel *)(*v84)--;
        if ( result == (MinecoinModel *)1 )
          result = (MinecoinModel *)(*(int (__fastcall **)(int))(*(_DWORD *)v82 + 12))(v82);
  }
  return result;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v28;
    v29 = v28;
    v28 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v29, (int)&v31, (int)v5);
    v6 = v29;
  sub_21E94B4((void **)&v27, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v30 = v27;
    v8 = (char *)&unk_28898CC;
    v27 = &unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v30, (int)&v32, (int)v7);
    v8 = (char *)v27;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (char *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v29 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v28 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  EntityInteraction::setInteractText((int *)(v3 + 524), (int *)&v30);
  v12 = (int)v30;
  if ( *(v30 - 3) )
    *(_BYTE *)(v3 + 518) = 1;
    Util::toLower((void **)&v26, *(_DWORD *)(*(_DWORD *)(v3 + 524) - 12), *(_DWORD *)(v3 + 524));
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v3 + 528),
      &v26);
    v13 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    ContentView::reload(*(ContentView **)(v3 + 464));
    v12 = (int)v30;
    *(_BYTE *)(v3 + 518) = 0;
  v14 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v12 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return 1;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v23;
    v24 = v23;
    v23 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v24, (int)&v26, (int)v5);
    v6 = v24;
  sub_119C884((void **)&v22, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v25 = v22;
    v22 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v7);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 444),
    (int *)&v25);
  v8 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v23 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = ClientInstanceScreenModel::getBlockEntity(*(_DWORD *)(v3 + 424), (const BlockPos *)(v3 + 432), 20);
  if ( v12 )
    ChalkboardBlockEntity::setText((int)v12, (int *)(v3 + 444));
  return 1;
}


int __fastcall Json::Value::CZString::CZString(int a1, const char *a2, int a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int v5; // r5@1
  size_t v6; // r0@3
  int v7; // r8@3
  const char *v8; // r0@3
  const char *v9; // r9@3
  const char *v10; // r6@3

  v3 = a3;
  v4 = (int)a2;
  v5 = a1;
  if ( a3 == 1 )
  {
    if ( a2 )
    {
      v6 = j_strlen_0(a2);
      v7 = v6;
      v8 = (const char *)j_malloc(v6 + 1);
      v9 = v8;
      v10 = 0;
      if ( v8 )
      {
        j___aeabi_memcpy_0((int)v8, v4, v7);
        v9[v7] = 0;
        v10 = v9;
      }
    }
    else
  }
  else
    v10 = a2;
  *(_DWORD *)v5 = v10;
  *(_DWORD *)(v5 + 4) = v3;
  return v5;
}


void **__fastcall Json::valueToString(Json *this, int a2)
{
  const char *v2; // r3@1

  v2 = "true";
  if ( !a2 )
    v2 = "false";
  return sub_21E94B4((void **)this, v2);
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v23;
    v24 = v23;
    v23 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v24, (int)&v26, (int)v5);
    v6 = v24;
  sub_21E94B4((void **)&v22, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v25 = v22;
    v22 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v7);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 448),
    (int *)&v25);
  v8 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
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
      j_j_j_j__ZdlPv_9(v8);
  v9 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v23 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = MainMenuScreenModel::getWorldSeedCatalogModel(*(MainMenuScreenModel **)(v3 + 424));
  WorldSeedCatalogModel::setWorldSeedsNameFilter(v12, (unsigned int *)(v3 + 448));
  return 1;
}


char *__fastcall Json::StyledStreamWriter::writeIndent(Json::StyledStreamWriter *this)
{
  Json::StyledStreamWriter *v1; // r4@1
  char *v2; // r0@1
  char *v3; // r0@1
  char v5; // [sp+7h] [bp-9h]@1

  v1 = this;
  v2 = (char *)*((_DWORD *)this + 3);
  v5 = 10;
  v3 = sub_21CBF38(v2, (int)&v5, 1);
  return sub_21CBF38(v3, *((_DWORD *)v1 + 4), *(_DWORD *)(*((_DWORD *)v1 + 4) - 12));
}


  if ( Json::Value::isNull(v2) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  BookScreenController::_swapPages(
    (BookScreenController *)v3,
    v4 + 2 * *(_DWORD *)(v3 + 452),
    v4 + 2 * *(_DWORD *)(v3 + 452) + 1);
  return 1;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  v6 = ContentView::getItem(*(ContentView **)(v3 + 520), v4);
  v8 = MinecraftScreenModel::getContentTierInfo(*(MinecraftScreenModel **)(v3 + 380));
  if ( SubpackInfoCollection::isCompatibleSubpack((__int64 *)(v6 + 308), *(_DWORD *)(v6 + 304), &v8) )
    *(_DWORD *)(v6 + 304) = SubpackInfoCollection::getDefaultSubpackIndex((__int64 *)(v6 + 308), &v8);
  *(_DWORD *)(*(_DWORD *)(v3 + 624) + 4 * (v4 >> 5)) &= ~(1 << (v4 & 0x1F));
  return 1;
}


signed int __fastcall Json::Value::isValidIndex(Json::Value *this, unsigned int a2)
{
  unsigned int v2; // r4@1
  int v3; // r1@1
  int v4; // r0@3
  unsigned int v5; // r1@4
  signed int result; // r0@8

  v2 = a2;
  v3 = *((_BYTE *)this + 8);
  if ( v3 == 7 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)this + 20);
  }
  else if ( v3 == 6 )
    v4 = *(_DWORD *)this;
    if ( *(_DWORD *)(v4 + 20) )
      v5 = *(_DWORD *)(sub_21D4894(v4 + 4) + 20) + 1;
    else
      v5 = 0;
  else
    v5 = 0;
  result = 0;
  if ( v5 > v2 )
    result = 1;
  return result;
}


      if ( Json::Value::isNull((Json::Value *)(v8 + 8)) )
{
        v10 = 0;
      }
      else if ( Json::Value::isObject(v9) == 1 )
      {
        v11 = (Json::Value *)Json::Value::operator[]((int)v9, "flying_item_count");
        if ( Json::Value::isInt(v11) || Json::Value::isUInt(v11) == 1 )
          v10 = Json::Value::asInt(v11, 0);
        else
          v10 = 0;
      else
      v129 = v10 + 1;
      UIPropertyBag::set<int>(v8, 17, "flying_item_count", &v129);
      Util::toString<int,(void *)0,(void *)0>((void **)&v128, v10);
      v12 = sub_21E82D8((const void **)&v128, 0, (unsigned int)"flying_item_id_aux", (_BYTE *)0x12);
      v13 = (const char *)*v12;
      v14 = *v12;
      *v12 = &unk_28898CC;
      v16 = *(v14 - 3);
      v15 = v14 - 3;
      UIPropertyBag::set<int>(v8, v16, v13, (int *)(v2 + 16));
      if ( v15 != &dword_28898C0 )
        v79 = (unsigned int *)(v13 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v80 = __ldrex(v79);
          while ( __strex(v80 - 1, v79) );
        }
          v80 = (*v79)--;
        if ( v80 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v17 = (void *)(v128 - 12);
      if ( (int *)(v128 - 12) != &dword_28898C0 )
        v81 = (unsigned int *)(v128 - 4);
            v82 = __ldrex(v81);
          while ( __strex(v82 - 1, v81) );
          v82 = (*v81)--;
        if ( v82 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      Util::toString<int,(void *)0,(void *)0>((void **)&v127, v10);
      v18 = sub_21E82D8((const void **)&v127, 0, (unsigned int)"flying_item_custom_color", (_BYTE *)0x18);
      v19 = (const char *)*v18;
      v20 = *v18;
      *v18 = &unk_28898CC;
      v22 = *(v20 - 3);
      v21 = v20 - 3;
      UIPropertyBag::set<int>(v8, v22, v19, (int *)(v2 + 20));
      if ( v21 != &dword_28898C0 )
        v83 = (unsigned int *)(v19 - 4);
            v84 = __ldrex(v83);
          while ( __strex(v84 - 1, v83) );
          v84 = (*v83)--;
        if ( v84 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v23 = (void *)(v127 - 12);
      if ( (int *)(v127 - 12) != &dword_28898C0 )
        v85 = (unsigned int *)(v127 - 4);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      Util::toString<int,(void *)0,(void *)0>((void **)&v126, v10);
      v24 = sub_21E82D8((const void **)&v126, 0, (unsigned int)"flying_item_origin_position_x", (_BYTE *)0x1D);
      v25 = (const char *)*v24;
      v26 = *v24;
      *v24 = &unk_28898CC;
      v28 = *(v26 - 3);
      v27 = v26 - 3;
      UIPropertyBag::set<float>(v8, v28, v25, (int)&v141);
      if ( v27 != &dword_28898C0 )
        v87 = (unsigned int *)(v25 - 4);
            v88 = __ldrex(v87);
          while ( __strex(v88 - 1, v87) );
          v88 = (*v87)--;
        if ( v88 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      v29 = (void *)(v126 - 12);
      if ( (int *)(v126 - 12) != &dword_28898C0 )
        v89 = (unsigned int *)(v126 - 4);
            v90 = __ldrex(v89);
          while ( __strex(v90 - 1, v89) );
          v90 = (*v89)--;
        if ( v90 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      Util::toString<int,(void *)0,(void *)0>((void **)&v125, v10);
      v30 = sub_21E82D8((const void **)&v125, 0, (unsigned int)"flying_item_origin_position_y", (_BYTE *)0x1D);
      v31 = (const char *)*v30;
      v32 = *v30;
      *v30 = &unk_28898CC;
      v34 = *(v32 - 3);
      v33 = v32 - 3;
      UIPropertyBag::set<float>(v8, v34, v31, (int)&v142);
      if ( v33 != &dword_28898C0 )
        v91 = (unsigned int *)(v31 - 4);
            v92 = __ldrex(v91);
          while ( __strex(v92 - 1, v91) );
          v92 = (*v91)--;
        if ( v92 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      v35 = (void *)(v125 - 12);
      if ( (int *)(v125 - 12) != &dword_28898C0 )
        v93 = (unsigned int *)(v125 - 4);
            v94 = __ldrex(v93);
          while ( __strex(v94 - 1, v93) );
          v94 = (*v93)--;
        if ( v94 <= 0 )
          j_j_j_j__ZdlPv_9(v35);
      Util::toString<int,(void *)0,(void *)0>((void **)&v124, v10);
      v36 = sub_21E82D8((const void **)&v124, 0, (unsigned int)"flying_item_origin_scale", (_BYTE *)0x18);
      v37 = (const char *)*v36;
      v38 = *v36;
      *v36 = &unk_28898CC;
      v40 = *(v38 - 3);
      v39 = v38 - 3;
      UIPropertyBag::set<float>(v8, v40, v37, (int)&v136);
      if ( v39 != &dword_28898C0 )
        v95 = (unsigned int *)(v37 - 4);
            v96 = __ldrex(v95);
          while ( __strex(v96 - 1, v95) );
          v96 = (*v95)--;
        if ( v96 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      v41 = (void *)(v124 - 12);
      if ( (int *)(v124 - 12) != &dword_28898C0 )
        v97 = (unsigned int *)(v124 - 4);
            v98 = __ldrex(v97);
          while ( __strex(v98 - 1, v97) );
          v98 = (*v97)--;
        if ( v98 <= 0 )
          j_j_j_j__ZdlPv_9(v41);
      Util::toString<int,(void *)0,(void *)0>((void **)&v123, v10);
      v42 = sub_21E82D8((const void **)&v123, 0, (unsigned int)"flying_item_destination_position_x", (_BYTE *)0x22);
      v43 = (const char *)*v42;
      v44 = *v42;
      *v42 = &unk_28898CC;
      v46 = *(v44 - 3);
      v45 = v44 - 3;
      UIPropertyBag::set<float>(v8, v46, v43, (int)&v139);
      if ( v45 != &dword_28898C0 )
        v99 = (unsigned int *)(v43 - 4);
            v100 = __ldrex(v99);
          while ( __strex(v100 - 1, v99) );
          v100 = (*v99)--;
        if ( v100 <= 0 )
          j_j_j_j__ZdlPv_9(v45);
      v47 = (void *)(v123 - 12);
      if ( (int *)(v123 - 12) != &dword_28898C0 )
        v101 = (unsigned int *)(v123 - 4);
            v102 = __ldrex(v101);
          while ( __strex(v102 - 1, v101) );
          v102 = (*v101)--;
        if ( v102 <= 0 )
          j_j_j_j__ZdlPv_9(v47);
      Util::toString<int,(void *)0,(void *)0>((void **)&v122, v10);
      v48 = sub_21E82D8((const void **)&v122, 0, (unsigned int)"flying_item_destination_position_y", (_BYTE *)0x22);
      v49 = (const char *)*v48;
      v50 = *v48;
      *v48 = &unk_28898CC;
      v52 = *(v50 - 3);
      v51 = v50 - 3;
      UIPropertyBag::set<float>(v8, v52, v49, (int)&v140);
      if ( v51 != &dword_28898C0 )
        v103 = (unsigned int *)(v49 - 4);
            v104 = __ldrex(v103);
          while ( __strex(v104 - 1, v103) );
          v104 = (*v103)--;
        if ( v104 <= 0 )
          j_j_j_j__ZdlPv_9(v51);
      v53 = (void *)(v122 - 12);
      if ( (int *)(v122 - 12) != &dword_28898C0 )
        v105 = (unsigned int *)(v122 - 4);
            v106 = __ldrex(v105);
          while ( __strex(v106 - 1, v105) );
          v106 = (*v105)--;
        if ( v106 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
      Util::toString<int,(void *)0,(void *)0>((void **)&v121, v10);
      v54 = sub_21E82D8((const void **)&v121, 0, (unsigned int)"flying_item_destination_scale", (_BYTE *)0x1D);
      v55 = (const char *)*v54;
      v56 = *v54;
      *v54 = &unk_28898CC;
      v58 = *(v56 - 3);
      v57 = v56 - 3;
      UIPropertyBag::set<float>(v8, v58, v55, (int)&v135);
      if ( v57 != &dword_28898C0 )
        v107 = (unsigned int *)(v55 - 4);
            v108 = __ldrex(v107);
          while ( __strex(v108 - 1, v107) );
          v108 = (*v107)--;
        if ( v108 <= 0 )
          j_j_j_j__ZdlPv_9(v57);
      v59 = (void *)(v121 - 12);
      if ( (int *)(v121 - 12) != &dword_28898C0 )
        v109 = (unsigned int *)(v121 - 4);
            v110 = __ldrex(v109);
          while ( __strex(v110 - 1, v109) );
          v110 = (*v109)--;
        if ( v110 <= 0 )
          j_j_j_j__ZdlPv_9(v59);
      if ( *(_DWORD *)(*(_DWORD *)(v2 + 24) - 12) )
        Util::toString<int,(void *)0,(void *)0>((void **)&v120, v10);
        v60 = sub_21E82D8((const void **)&v120, 0, (unsigned int)"flying_item_banner_patterns", (_BYTE *)0x1B);
        v61 = (const char *)*v60;
        v62 = *v60;
        *v60 = &unk_28898CC;
        v64 = *(v62 - 3);
        v63 = v62 - 3;
        UIPropertyBag::set<std::string>(v8, v64, v61, (const void **)(v2 + 24));
        if ( v63 != &dword_28898C0 )
          v111 = (unsigned int *)(v61 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v112 = __ldrex(v111);
            while ( __strex(v112 - 1, v111) );
          }
          else
            v112 = (*v111)--;
          if ( v112 <= 0 )
            j_j_j_j__ZdlPv_9(v63);
        v65 = (void *)(v120 - 12);
        if ( (int *)(v120 - 12) != &dword_28898C0 )
          v113 = (unsigned int *)(v120 - 4);
              v114 = __ldrex(v113);
            while ( __strex(v114 - 1, v113) );
            v114 = (*v113)--;
          if ( v114 <= 0 )
            j_j_j_j__ZdlPv_9(v65);
        Util::toString<int,(void *)0,(void *)0>((void **)&v119, v10);
        v66 = sub_21E82D8((const void **)&v119, 0, (unsigned int)"flying_item_banner_colors", (_BYTE *)0x19);
        v67 = (const char *)*v66;
        v68 = *v66;
        *v66 = &unk_28898CC;
        v70 = *(v68 - 3);
        v69 = v68 - 3;
        UIPropertyBag::set<std::string>(v8, v70, v67, (const void **)(v2 + 28));
        if ( v69 != &dword_28898C0 )
          v115 = (unsigned int *)(v67 - 4);
              v116 = __ldrex(v115);
            while ( __strex(v116 - 1, v115) );
            v116 = (*v115)--;
          if ( v116 <= 0 )
            j_j_j_j__ZdlPv_9(v69);
        v71 = (void *)(v119 - 12);
        if ( (int *)(v119 - 12) != &dword_28898C0 )
          v117 = (unsigned int *)(v119 - 4);
              v118 = __ldrex(v117);
            while ( __strex(v118 - 1, v117) );
            v118 = (*v117)--;
          if ( v118 <= 0 )
            j_j_j_j__ZdlPv_9(v71);
    }
  }
  v73 = v134;
  v72 = v133;
  if ( v133 != v134 )
  {
    do
    {
      v74 = *(_DWORD *)(v72 + 4);
      if ( v74 )
        v75 = (unsigned int *)(v74 + 4);
            v76 = __ldrex(v75);
          while ( __strex(v76 - 1, v75) );
          v76 = (*v75)--;
        if ( v76 == 1 )
          v77 = (unsigned int *)(v74 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 8))(v74);
              v78 = __ldrex(v77);
            while ( __strex(v78 - 1, v77) );
            v78 = (*v77)--;
          if ( v78 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 12))(v74);
      v72 += 8;
    while ( v72 != v73 );
    v72 = v133;
  if ( v72 )
    operator delete((void *)v72);
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v27;
    v28 = v27;
    v27 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v28, (int)&v31, (int)v5);
    v6 = v28;
  sub_119C884((void **)&v26, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v29 = v26;
    v26 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v29, (int)&v32, (int)v7);
  Util::stringTrim(&v30, (int *)&v29);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 444),
    &v30);
  v8 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v29 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v26 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v28 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (char *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v27 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  *(_BYTE *)(v3 + 436) = 1;
  v13 = (RakNet *)(*(_QWORD *)(v3 + 440) >> 32);
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 440) - 12) )
    v14 = 0;
    if ( *((_DWORD *)v13 - 3) && *(_DWORD *)(v3 + 448) > 0 )
      v14 = (const char *)1;
  *(_BYTE *)(v3 + 436) = (_BYTE)v14;
  if ( !RakNet::NonNumericHostString(v13, v14) )
    *(_BYTE *)(v3 + 436) &= Util::isValidIP(*(_DWORD *)(*(_DWORD *)(v3 + 444) - 12), *(_DWORD *)(v3 + 444), 1, 1);
  return 1;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = 0;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#button_navigation");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
    {
      v4 = 0;
      switch ( Json::Value::asInt(v5, 0) )
      {
        case 2:
          sub_119CAD8((void **)(v3 + 464), "/setworldspawn ", (_BYTE *)0xF);
          ChatScreenController::_beginNewCommand((ChatScreenController *)v3);
          *(_DWORD *)(v3 + 520) = 0;
          goto LABEL_25;
        case 6:
          MinecraftScreenModel::getLevelData((MinecraftScreenModel *)&v33, *(_DWORD *)(v3 + 424));
          v6 = LevelData::isAlwaysDay((LevelData *)&v33);
          LevelData::~LevelData((LevelData *)&v33);
          if ( v6 != 1 )
          {
            *(_DWORD *)(v3 + 520) = 6;
            sub_119CAD8((void **)(v3 + 464), "/time set ", (_BYTE *)0xA);
            ChatScreenController::_beginNewCommand((ChatScreenController *)v3);
            sub_119CAD8((void **)(v3 + 548), "host_time_collection", (_BYTE *)0x14);
            goto LABEL_25;
          }
          sub_119C884((void **)&v30, "commands.time.disabled");
          I18n::get(&v31, (int **)&v30);
          v7 = sub_119C984((const void **)&v31, 0, dword_27DA600, *(_BYTE **)(dword_27DA600 - 12));
          v32 = (char *)*v7;
          *v7 = &unk_28898CC;
          v8 = (void *)(v31 - 12);
          if ( (int *)(v31 - 12) != &dword_28898C0 )
            v18 = (unsigned int *)(v31 - 4);
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
              j_j_j_j_j__ZdlPv_9_1(v8);
          v9 = (void *)(v30 - 12);
          if ( (int *)(v30 - 12) != &dword_28898C0 )
            v20 = (unsigned int *)(v30 - 4);
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
              v21 = (*v20)--;
            if ( v21 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v9);
          ClientInstanceScreenModel::displaySystemMessage(*(_DWORD *)(v3 + 424), (int *)&v32);
          v10 = v32 - 12;
          if ( (int *)(v32 - 12) == &dword_28898C0 )
          v11 = (unsigned int *)(v32 - 4);
          if ( !&pthread_create )
            goto LABEL_47;
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          goto LABEL_48;
        case 3:
          *(_DWORD *)(v3 + 520) = 3;
          sub_119CAD8((void **)(v3 + 464), "/tp ", (_BYTE *)4);
          sub_119CA68((const void **)(v3 + 540), 0, *(_BYTE **)(*(_DWORD *)(v3 + 540) - 12), 0);
          sub_119CA68((const void **)(v3 + 544), 0, *(_BYTE **)(*(_DWORD *)(v3 + 544) - 12), 0);
          sub_119CAD8((void **)(v3 + 548), "host_teleport_collection", (_BYTE *)0x18);
        case 7:
          MinecraftScreenModel::getLevelData((MinecraftScreenModel *)&v29, *(_DWORD *)(v3 + 424));
          v13 = LevelData::isGameRule((int)&v29, (int **)&GameRules::DO_WEATHER_CYCLE);
          LevelData::~LevelData((LevelData *)&v29);
          if ( v13 )
            *(_DWORD *)(v3 + 520) = 7;
            sub_119CAD8((void **)(v3 + 464), "/weather ", (_BYTE *)9);
            sub_119CAD8((void **)(v3 + 548), "host_weather_collection", (_BYTE *)0x17);
          else
            *(_DWORD *)(v3 + 520) = 0;
            sub_119C884((void **)&v26, "commands.weather.disabled");
            I18n::get(&v27, (int **)&v26);
            v14 = sub_119C984((const void **)&v27, 0, dword_27DA600, *(_BYTE **)(dword_27DA600 - 12));
            v28 = (char *)*v14;
            *v14 = &unk_28898CC;
            v15 = (void *)(v27 - 12);
            if ( (int *)(v27 - 12) != &dword_28898C0 )
              v22 = (unsigned int *)(v27 - 4);
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
                j_j_j_j_j__ZdlPv_9_1(v15);
            v16 = (void *)(v26 - 12);
            if ( (int *)(v26 - 12) != &dword_28898C0 )
              v24 = (unsigned int *)(v26 - 4);
                  v25 = __ldrex(v24);
                while ( __strex(v25 - 1, v24) );
                v25 = (*v24)--;
              if ( v25 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v16);
            ClientInstanceScreenModel::displaySystemMessage(*(_DWORD *)(v3 + 424), (int *)&v28);
            v10 = v28 - 12;
            if ( (int *)(v28 - 12) != &dword_28898C0 )
              v11 = (unsigned int *)(v28 - 4);
                  v12 = __ldrex(v11);
                while ( __strex(v12 - 1, v11) );
LABEL_47:
                v12 = (*v11)--;
LABEL_48:
              if ( v12 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v10);
LABEL_25:
          v4 = 1;
          break;
        default:
          return v4;
      }
    }
    else
  else
  return v4;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  v6 = SkinPackCollectionModel::getSkinPackModelByUUID(
         *(SkinPackCollectionModel **)(v3 + 452),
         (const mce::UUID *)(v3 + 464));
  v7 = SkinPackModel::getFirstVisibleSkinIndex(v6);
  v8 = v7 + v4;
  *(_DWORD *)(v3 + 528) = v7 + v4;
  v9 = *(_DWORD *)(v3 + 452);
  v10 = *(_QWORD *)(v3 + 464);
  v16 = *(_QWORD *)(v3 + 472);
  v15 = v10;
  v17 = v8;
  v18 = (char *)&unk_28898CC;
  SkinPackCollectionModel::setPreviewSkin(v9, (int)&v15);
  v11 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  return 1;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v23;
    v24 = v23;
    v23 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v24, (int)&v26, (int)v5);
    v6 = v24;
  sub_21E94B4((void **)&v22, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v25 = v22;
    v8 = (char *)&unk_28898CC;
    v22 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v7);
    v8 = v22;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v8 - 4);
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
  v10 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  EntityInteraction::setInteractText((int *)(v3 + 604), (int *)&v25);
  v12 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return 1;
}


  if ( Json::Value::size(a1) == a3 )
{
    v7 = 0;
    if ( v3 <= 0 )
      return v7;
    _R4 = _R5;
    while ( 1 )
    {
      v9 = (Json::Value *)Json::Value::operator[]((int)v5, v7);
      LODWORD(_R0) = Json::Value::asFloat(v9, 0.0);
      __asm
      {
        VMOV            S0, R0
        VLDR            S2, [R4]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        break;
      ++v7;
      _R4 += 4;
      if ( v7 >= v3 )
        return 0;
    }
  }
  LODWORD(_R0) = v5;
  Json::Value::clear(_R0);
  if ( v3 >= 1 )
  {
    v14 = 0;
    do
      v15 = Json::Value::operator[]((int)v5, v14);
      __asm { VLDR            S0, [R5] }
      v16 = v15;
        VCVT.F64.F32    D0, S0
        VMOV            R2, R3, D0
      Json::Value::Value((Json::Value *)&v20, v18, _R2);
      Json::Value::operator=(v16, (const Json::Value *)&v20);
      Json::Value::~Value((Json::Value *)&v20);
      ++v14;
      _R5 += 4;
    while ( v14 < v3 );
  return 1;
}


char **__fastcall Json::Value::getMemberNames(Json::Value *this, int a2)
{
  int v2; // r5@1
  Json::Value *v3; // r11@1
  int v4; // r4@2
  int i; // r5@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int v8; // r0@12
  char *v9; // r1@13
  char *v10; // r0@15
  int v11; // r0@17
  char **v12; // r0@17
  char **result; // r0@17
  char *v14; // [sp+8h] [bp-38h]@12
  int v15; // [sp+Ch] [bp-34h]@2
  char **v16; // [sp+10h] [bp-30h]@2
  char **v17; // [sp+14h] [bp-2Ch]@2

  v2 = a2;
  v3 = this;
  if ( *(_BYTE *)(a2 + 8) )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    j_std::vector<std::string,std::allocator<std::string>>::reserve((int)&v15, *(_DWORD *)(*(_DWORD *)a2 + 20));
    v4 = *(_DWORD *)v2 + 4;
    for ( i = *(_DWORD *)(*(_DWORD *)v2 + 12); i != v4; i = sub_21D4820(i) )
    {
      sub_21E94B4((void **)&v14, *(const char **)(i + 16));
      v8 = (int)v16;
      if ( v16 == v17 )
      {
        j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)&v15,
          &v14);
        v9 = v14;
      }
      else
        *v16 = v14;
        v9 = (char *)&unk_28898CC;
        v14 = (char *)&unk_28898CC;
        v16 = (char **)(v8 + 4);
      v10 = v9 - 12;
      if ( (int *)(v9 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v9 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
    }
    v11 = v15;
    *(_DWORD *)v3 = v11;
    v12 = v16;
    *((_DWORD *)v3 + 1) = v12;
    result = v17;
  }
  else
    result = 0;
    *(_DWORD *)v3 = 0;
    *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = result;
  return result;
}


  if ( Json::Value::isString(v4) != 1 )
{
    Json::Value::~Value((Json::Value *)&v12);
    return sub_21E8AF4(v2, (int *)&Util::EMPTY_STRING);
  }
  v5 = Json::Value::operator[]((Json::Value *)&v12, "icon_zip");
  sub_21E94B4((void **)&v10, (const char *)&unk_257BC67);
  Json::Value::asString(v2, v5, &v10);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  return (int *)Json::Value::~Value((Json::Value *)&v12);
}


  if ( !Json::Value::isNull((Json::Value *)(v4 + 8)) && Json::Value::isObject((Json::Value *)(v4 + 8)) == 1 )
{
    v7 = (Json::Value *)Json::Value::operator[](v4 + 8, "#collection_index");
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
    {
      v8 = Json::Value::asInt(v7, 0);
      if ( v8 >= 0 )
      {
        v9 = *(_QWORD *)(v6 + 444);
        if ( v8 < (HIDWORD(v9) - (signed int)v9) >> 3 )
        {
          gsl::basic_string_span<char const,-1>::remove_z<25u>((int)&v21, (int)"#offers_collection_index");
          v10 = v22;
          if ( Json::Value::isNull((Json::Value *)(v4 + 8)) )
          {
            HIDWORD(v11) = -1;
          }
          else if ( Json::Value::isObject((Json::Value *)(v4 + 8)) == 1 )
            v12 = (Json::Value *)Json::Value::operator[](v4 + 8, v10);
            if ( Json::Value::isInt(v12) || Json::Value::isUInt(v12) == 1 )
              HIDWORD(v11) = Json::Value::asInt(v12, 0);
            else
              HIDWORD(v11) = -1;
          else
          if ( HIDWORD(v11) == *(_DWORD *)(v9 + 8 * v8) + 3
            || (v13 = *(_DWORD *)(v9 + 8 * v8 + 4), v13 <= 3) && HIDWORD(v11) == v13 - 1 )
            LODWORD(v11) = v8;
            Util::format((Util *)&v20, "offer_grid_item_%d_%d", v11);
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              &v23,
              &v20);
            v14 = (void *)(v20 - 12);
            if ( (int *)(v20 - 12) != &dword_28898C0 )
            {
              v18 = (unsigned int *)(v20 - 4);
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
                j_j_j_j__ZdlPv_9(v14);
            }
          UIPropertyBag::set<std::string>(v4, *((_DWORD *)*v5 - 3), *v5, (const void **)&v23);
        }
      }
    }
  }
  v15 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


const void **__fastcall Json::StyledWriter::writeWithIndent(Json::StyledWriter *a1, const void **a2)
{
  const void **v2; // r4@1
  Json::StyledWriter *v3; // r5@1

  v2 = a2;
  v3 = a1;
  j_Json::StyledWriter::writeIndent(a1);
  return sub_21E72F0((const void **)v3 + 4, v2);
}


int __fastcall Json::Value::resolveReference(Json::Value *this, const char *a2, int a3)
{
  Json::Value *v3; // r10@1
  int v4; // r8@1
  const char *v5; // r6@1
  _DWORD *v6; // r0@2
  Json::Value *v7; // r0@2
  __int64 v8; // r1@2
  int v9; // r7@2
  __int16 v10; // r5@2
  __int16 v11; // r4@2
  int v12; // r1@3
  unsigned int v13; // r4@3
  int v14; // r5@5
  int v15; // r0@5
  int v16; // r7@5
  int v17; // r9@8
  const char *v18; // r0@9
  int v19; // r1@17
  bool v20; // zf@24
  const char *v21; // r0@24
  int v22; // r5@24
  char *v23; // r5@30
  size_t v24; // r0@32
  int v25; // r9@32
  char *v26; // r0@32
  char *v27; // r11@32
  int v28; // r6@37
  int v29; // r4@37
  void *ptr; // [sp+0h] [bp-58h]@2
  int v32; // [sp+4h] [bp-54h]@2
  __int16 v33; // [sp+8h] [bp-50h]@2
  _DWORD *v34; // [sp+18h] [bp-40h]@2
  __int16 v35; // [sp+20h] [bp-38h]@2
  int v36; // [sp+24h] [bp-34h]@2
  const char *v37; // [sp+2Ch] [bp-2Ch]@37
  int v38; // [sp+30h] [bp-28h]@37

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( !*((_BYTE *)this + 8) )
  {
    v35 = 7;
    v36 = 0;
    v6 = j_operator new(0x18u);
    v6[2] = 0;
    v6[3] = 0;
    v6[4] = 0;
    v6[5] = 0;
    v6[1] = 0;
    v6[3] = v6 + 1;
    v6[4] = v6 + 1;
    v34 = v6;
    v7 = j_Json::Value::Value((Json::Value *)&ptr, (const Json::Value *)&v34);
    v8 = *(_QWORD *)v3;
    v9 = v32;
    v10 = v33;
    v11 = *((_WORD *)v3 + 4);
    *(_DWORD *)v3 = ptr;
    *((_DWORD *)v3 + 1) = v9;
    *(_QWORD *)&ptr = v8;
    *((_WORD *)v3 + 4) = v11 & 0xFE00 | (unsigned __int8)v10 | v10 & 0x100;
    v33 = v10 & 0xFE00 | v11 & 0x1FF;
    j_Json::Value::~Value(v7);
    j_Json::Value::~Value((Json::Value *)&v34);
  }
  v12 = *(_DWORD *)v3;
  v13 = 2;
  if ( v4 )
    v13 = 0;
  v14 = v12 + 4;
  v15 = *(_DWORD *)(v12 + 8);
  v16 = v12 + 4;
  if ( v15 )
    if ( v5 )
    {
      v16 = v12 + 4;
      while ( 1 )
      {
        v17 = v16;
        v16 = v15;
        while ( 1 )
        {
          v18 = *(const char **)(v16 + 16);
          if ( !v18 )
            break;
          if ( j_strcmp_0(v18, v5) >= 0 )
            goto LABEL_15;
LABEL_13:
          v16 = *(_DWORD *)(v16 + 12);
          if ( !v16 )
          {
            v16 = v17;
            goto LABEL_23;
          }
        }
        if ( *(_DWORD *)(v16 + 20) < v13 )
          goto LABEL_13;
LABEL_15:
        v15 = *(_DWORD *)(v16 + 8);
        if ( !v15 )
          goto LABEL_23;
      }
    }
    v19 = v12 + 4;
    do
      v16 = v15;
      while ( *(_DWORD *)(v16 + 20) < v13 )
        v16 = *(_DWORD *)(v16 + 12);
        if ( !v16 )
          v16 = v19;
      v15 = *(_DWORD *)(v16 + 8);
      v19 = v16;
    while ( v15 );
LABEL_23:
  if ( v16 != v14 )
    v20 = v5 == 0;
    v22 = v16 + 16;
    v21 = *(const char **)(v16 + 16);
      v20 = v21 == 0;
    if ( v20 )
      if ( *(_DWORD *)(v16 + 20) == v13 )
        return v22 + 8;
    else if ( !j_strcmp_0(v21, v5) )
      return v22 + 8;
  v23 = (char *)v5;
  if ( !v4 )
      v24 = j_strlen_0(v5);
      v25 = v24;
      v26 = (char *)j_malloc(v24 + 1);
      v27 = v26;
      v23 = 0;
      if ( v26 )
        j___aeabi_memcpy_0((int)v26, (int)v5, v25);
        v27[v25] = 0;
        v23 = v27;
    else
  ptr = v23;
  if ( v5 )
    v13 = v4 ^ 1;
  v32 = v13;
  j_Json::Value::Value((Json::Value *)&v33, (const Json::Value *)&Json::Value::null);
  v28 = *(_DWORD *)v3;
  j_std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_get_insert_hint_unique_pos(
    (int)&v37,
    *(const char **)v3,
    v16,
    (int)&ptr);
  v29 = (int)v37;
  if ( v38 )
    v29 = j_std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_insert_<std::pair<Json::Value::CZString const,Json::Value>&>(
            v28,
            v37,
            v38,
            (int)&ptr);
  j_Json::Value::~Value((Json::Value *)&v33);
  v22 = v29 + 16;
  if ( ptr && v32 == 1 )
    j_free(ptr);
  return v22 + 8;
}


__int64 __fastcall Json::Value::asLargestUInt(Json::Value *this)
{
  char v2; // t1@1
  __int64 result; // r0@1

  _R2 = this;
  v2 = *((_BYTE *)this + 8);
  result = 0LL;
  switch ( 0 )
  {
    case 1:
    case 2:
      return *(_QWORD *)_R2;
    case 3:
      __asm
      {
        VLDR            D0, [R2]; jumptable 01B2D922 case 3
        VCVTR.U32.F64   S0, D0
        VMOV            R0, S0
      }
      goto def_1B2D922;
    case 5:
      LODWORD(result) = *(_BYTE *)_R2;
    case 4:
      return result;
    default:
def_1B2D922:
      HIDWORD(result) = 0;
      break;
  }
  return result;
}


signed int __fastcall Json::Reader::readCStyleComment(Json::Reader *this)
{
  _BYTE *v1; // r2@1
  _BYTE *v2; // r3@1
  int v3; // r1@2
  bool v4; // zf@2
  signed int v5; // r1@6

  v1 = (_BYTE *)(*((_QWORD *)this + 11) >> 32);
  v2 = (_BYTE *)*((_QWORD *)this + 11);
  if ( v1 != v2 )
  {
    do
    {
      *((_DWORD *)this + 23) = ++v1;
      v3 = *(v1 - 1);
      v4 = v3 == 42;
      if ( v3 == 42 )
        v4 = *v1 == 47;
    }
    while ( !v4 && v2 != v1 );
  }
  v5 = 0;
    *((_DWORD *)this + 23) = v1 + 1;
    if ( *v1 == 47 )
      v5 = 1;
  return v5;
}


int __fastcall Json::Value::compare(Json::Value *this, const Json::Value *a2)
{
  const Json::Value *v2; // r5@1
  Json::Value *v3; // r4@1
  int result; // r0@2

  v2 = a2;
  v3 = this;
  if ( j_Json::Value::operator<((int)this, (int)a2) )
    result = -1;
  else
    result = j_Json::Value::operator<((int)v2, (int)v3);
  return result;
}


  if ( Json::Value::isNull(this) )
{
    v26 = 0;
  }
  else
  {
    v27 = (const Json::Value *)Json::Value::operator[](v24, "tiers");
    v28 = Json::Value::Value((Json::Value *)&v115, v27);
    if ( Json::Value::isNull(v28) )
    {
      v26 = 0;
    }
    else if ( Json::Value::isArray((Json::Value *)&v115) )
      Json::Value::begin((Json::Value *)&v114, (int)&v115);
      v75 = v25;
      v29 = (int *)&v99;
      v30 = (Json::Value *)&v113;
      v31 = (Json::ValueIteratorBase *)&v114;
      v32 = (Json::Value *)&v112;
      v33 = (Json::Value *)&v111;
      v34 = (Json::Value *)&v95;
      v35 = (Json::Value *)&v94;
      v76 = (int *)&v99;
      while ( 1 )
      {
        Json::Value::end(v30, (int)&v115);
        if ( Json::ValueIteratorBase::isEqual(v31, v30) == 1 )
          break;
        v36 = (const Json::Value *)Json::ValueIteratorBase::deref(v31);
        Json::Value::Value(v32, v36);
        v37 = (const Json::Value *)Json::Value::operator[](v32, "trades");
        Json::Value::Value(v33, v37);
        if ( !Json::Value::isNull(v33) && Json::Value::isArray(v33) == 1 )
        {
          v108 = 0;
          v109 = 0;
          v110 = 0;
          v38 = Json::Value::size(v33);
          std::vector<Trade,std::allocator<Trade>>::reserve((int)&v108, v38);
          Json::Value::begin((Json::Value *)&v107, (int)v33);
          while ( 1 )
          {
            Json::Value::end((Json::Value *)&v106, (int)v33);
            if ( Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v107,
                   (const Json::ValueIteratorBase *)&v106) == 1 )
              break;
            v39 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v107);
            Json::Value::Value((Json::Value *)&v105, v39);
            v76 = v29;
            v97 = 7;
            v98 = 1;
            *v29 = 0;
            v29[1] = 0;
            v29[2] = 0;
            v29[3] = 0;
            v29[4] = 0;
            v29[5] = 0;
            v40 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v105, "wants");
            Json::Value::Value((Json::Value *)&v96, v40);
            Json::Value::begin(v34, (int)&v96);
            while ( 1 )
            {
              Json::Value::end(v35, (int)&v96);
              if ( Json::ValueIteratorBase::isEqual(v34, v35) == 1 )
                break;
              v91 = 0;
              v92 = 0;
              v93 = 0;
              v41 = (Json::Value *)Json::ValueIteratorBase::deref(v34);
              if ( sub_183A8E0((int)&v87, v41, (const Json::Value *)0x7FFF) == 1 )
              {
                v42 = v100;
                if ( v100 == v101 )
                {
                  std::vector<TradeItem,std::allocator<TradeItem>>::_M_emplace_back_aux<TradeItem>(
                    (unsigned __int64 *)v29,
                    (int)&v87);
                }
                else
                  v43 = v88;
                  v44 = v89;
                  v45 = v90;
                  *v100 = *(_DWORD *)&v87;
                  v42[1] = v43;
                  v42[2] = v44;
                  v42[3] = v45;
                  v42[4] = v91;
                  v91 = 0;
                  v42[5] = v92;
                  v92 = 0;
                  v42[6] = v93;
                  v93 = 0;
                  v100 += 7;
              }
              v46 = v34;
              v47 = (int)v92;
              v48 = v91;
              if ( v91 != v92 )
                do
                  if ( *(_DWORD *)v48 )
                    (*(void (**)(void))(**(_DWORD **)v48 + 4))();
                  *(_DWORD *)v48 = 0;
                  v48 += 4;
                while ( (char *)v47 != v48 );
                v48 = v91;
              if ( v48 )
                operator delete(v48);
              v34 = v46;
              Json::ValueIteratorBase::increment(v46);
              v35 = (Json::Value *)&v94;
            }
            v49 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v105, "gives");
            Json::Value::Value((Json::Value *)&v86, v49);
            Json::Value::begin((Json::Value *)&v85, (int)&v86);
            for ( i = (Json::Value *)&v84; ; i = (Json::Value *)&v84 )
              Json::Value::end(i, (int)&v86);
              if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v85, i) == 1 )
              v81 = 0;
              v82 = 0;
              v83 = 0;
              v51 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v85);
              if ( sub_183A8E0((int)&v77, v51, 0) == 1 )
                v52 = v103;
                if ( v103 == v104 )
                    (unsigned __int64 *)&v102,
                    (int)&v77);
                  v53 = v78;
                  v54 = v79;
                  v55 = v80;
                  *v103 = *(_DWORD *)&v77;
                  v52[1] = v53;
                  v52[2] = v54;
                  v52[3] = v55;
                  v52[4] = v81;
                  v81 = 0;
                  v52[5] = v82;
                  v82 = 0;
                  v52[6] = v83;
                  v83 = 0;
                  v103 += 7;
              v56 = (int)v82;
              v57 = v81;
              if ( v81 != v82 )
                  if ( *(_DWORD *)v57 )
                    (*(void (**)(void))(**(_DWORD **)v57 + 4))();
                  *(_DWORD *)v57 = 0;
                  v57 += 4;
                while ( (char *)v56 != v57 );
                v57 = v81;
              if ( v57 )
                operator delete(v57);
              Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v85);
            v58 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v105, "max_uses");
            v97 = Json::Value::asInt(v58, 7);
            v59 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v105, "reward_exp");
            if ( Json::Value::isNull(v59) )
              v60 = 1;
            else
              v61 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v105, "reward_exp");
              v60 = Json::Value::asBool(v61, 0);
            v98 = v60;
            v62 = v99 == v100;
            if ( v99 != v100 )
              v62 = v102 == (_DWORD)v103;
            if ( !v62 )
              v63 = v109;
              if ( v109 == v110 )
                std::vector<Trade,std::allocator<Trade>>::_M_emplace_back_aux<Trade>(&v108, (int)&v97);
              else
                v64 = v97;
                *(_BYTE *)(v109 + 4) = v98;
                *(_DWORD *)v63 = v64;
                *(_DWORD *)(v63 + 8) = 0;
                *(_DWORD *)(v63 + 12) = 0;
                *(_DWORD *)(v63 + 16) = 0;
                *(_DWORD *)(v63 + 8) = v99;
                v99 = 0;
                v65 = *(_DWORD **)(v63 + 12);
                *(_DWORD *)(v63 + 12) = v100;
                v100 = v65;
                v66 = *(_DWORD *)(v63 + 16);
                *(_DWORD *)(v63 + 16) = v101;
                v101 = (_DWORD *)v66;
                *(_DWORD *)(v63 + 20) = 0;
                *(_DWORD *)(v63 + 24) = 0;
                *(_DWORD *)(v63 + 28) = 0;
                *(_DWORD *)(v63 + 20) = v102;
                v102 = 0;
                v67 = *(_DWORD **)(v63 + 24);
                *(_DWORD *)(v63 + 24) = v103;
                v103 = v67;
                v68 = *(_DWORD *)(v63 + 28);
                *(_DWORD *)(v63 + 28) = v104;
                v104 = (_DWORD *)v68;
                v109 = v63 + 32;
            Json::Value::~Value((Json::Value *)&v86);
            Json::Value::~Value((Json::Value *)&v96);
            Trade::~Trade((Trade *)&v97);
            Json::Value::~Value((Json::Value *)&v105);
            Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v107);
            v30 = (Json::Value *)&v113;
            v31 = (Json::ValueIteratorBase *)&v114;
            v32 = (Json::Value *)&v112;
            v33 = (Json::Value *)&v111;
            v34 = (Json::Value *)&v95;
          }
          v69 = *(_QWORD *)(v75 + 4);
          if ( (_DWORD)v69 == HIDWORD(v69) )
            std::vector<std::vector<Trade,std::allocator<Trade>>,std::allocator<std::vector<Trade,std::allocator<Trade>>>>::_M_emplace_back_aux<std::vector<Trade,std::allocator<Trade>>>(
              (unsigned __int64 *)v75,
              (int)&v108);
            v70 = v34;
            v71 = v33;
            v72 = *(_QWORD *)&v108;
            v73 = v108;
            if ( v108 != (Trade *)v109 )
              do
                v73 = (Trade *)((char *)Trade::~Trade(v73) + 32);
              while ( (Trade *)HIDWORD(v72) != v73 );
            v29 = v76;
            if ( (_DWORD)v72 )
              operator delete((void *)v72);
          else
            *(_DWORD *)v69 = v108;
            v108 = 0;
            *(_DWORD *)(v69 + 4) = v109;
            v109 = 0;
            *(_DWORD *)(v69 + 8) = v110;
            v110 = 0;
            *(_DWORD *)(v75 + 4) += 12;
          v33 = v71;
          v34 = v70;
          v35 = (Json::Value *)&v94;
        }
        Json::Value::~Value(v33);
        Json::Value::~Value(v32);
        Json::ValueIteratorBase::increment(v31);
      }
      v26 = 1;
    else
    Json::Value::~Value((Json::Value *)&v115);
  return v26;
}


  if ( Json::Reader::parse((int)&v56, v4, (int)&v55, 1) == 1 )
{
    v8 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v55, "originaljson");
    Json::Value::Value((Json::Value *)&v54, v8);
    if ( Json::Value::isString((Json::Value *)&v54) == 1 )
    {
      Json::Value::Value(&v53, 0);
      sub_119C884((void **)&v51, (const char *)&unk_257BC67);
      Json::Value::asString(&v52, (int)&v54, &v51);
      v9 = Json::Reader::parse((int)&v56, &v52, (int)&v53, 1);
      v10 = (void *)(v52 - 12);
      if ( (int *)(v52 - 12) != &dword_28898C0 )
      {
        v26 = (unsigned int *)(v52 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v10);
      }
      v11 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v51 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11);
      if ( v9 == 1 )
        v12 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v53, "packageName");
        Json::Value::Value((Json::Value *)&v50, v12);
        if ( Json::Value::isString((Json::Value *)&v50) == 1 )
          sub_119C884((void **)&v48, (const char *)&unk_257BC67);
          Json::Value::asString(&v49, (int)&v50, &v48);
          v13 = 1;
          sub_119C884((void **)&v49, (const char *)&unk_257BC67);
          v13 = 0;
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, &v49);
        v15 = (void *)(v49 - 12);
        if ( (int *)(v49 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v49 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
          }
          else
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v15);
        if ( v13 == 1 )
          v16 = (void *)(v48 - 12);
          if ( (int *)(v48 - 12) != &dword_28898C0 )
            v36 = (unsigned int *)(v48 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
            }
            else
              v37 = (*v36)--;
            if ( v37 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v16);
        v17 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v53, "purchaseToken");
        Json::Value::Value((Json::Value *)&v47, v17);
        if ( Json::Value::isString((Json::Value *)&v47) == 1 )
          sub_119C884((void **)&v45, (const char *)&unk_257BC67);
          Json::Value::asString(&v46, (int)&v47, &v45);
          v18 = 1;
          sub_119C884((void **)&v46, (const char *)&unk_257BC67);
          v18 = 0;
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v6, &v46);
        v19 = (void *)(v46 - 12);
        if ( (int *)(v46 - 12) != &dword_28898C0 )
          v32 = (unsigned int *)(v46 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v19);
        if ( v18 == 1 )
          v20 = (void *)(v45 - 12);
          if ( (int *)(v45 - 12) != &dword_28898C0 )
            v38 = (unsigned int *)(v45 - 4);
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
              v39 = (*v38)--;
            if ( v39 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v20);
        v21 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v53, "productId");
        Json::Value::Value((Json::Value *)&v44, v21);
        if ( Json::Value::isString((Json::Value *)&v44) == 1 )
          sub_119C884((void **)&v42, (const char *)&unk_257BC67);
          Json::Value::asString(&v43, (int)&v44, &v42);
          v22 = 1;
          sub_119C884((void **)&v43, (const char *)&unk_257BC67);
          v22 = 0;
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v43);
        v23 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v43 - 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v23);
        if ( v22 == 1 )
          v24 = (void *)(v42 - 12);
          if ( (int *)(v42 - 12) != &dword_28898C0 )
            v40 = (unsigned int *)(v42 - 4);
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
              v41 = (*v40)--;
            if ( v41 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v24);
        Json::Value::~Value((Json::Value *)&v44);
        Json::Value::~Value((Json::Value *)&v47);
        Json::Value::~Value((Json::Value *)&v50);
      Json::Value::~Value((Json::Value *)&v53);
    }
    Json::Value::~Value((Json::Value *)&v54);
    v14 = 1;
  }
  else
  {
    v14 = 0;
  Json::Value::~Value((Json::Value *)&v55);
  Json::Reader::~Reader((Json::Reader *)&v56);
  return v14;
}


signed int __fastcall Json::Reader::decodeUnicodeCodePoint(int a1, int a2, int *a3, int a4, int *a5)
{
  int v5; // r7@1
  int *v6; // r6@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r0@3
  void *v10; // r0@4
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  int v16; // [sp+Ch] [bp-2Ch]@14
  int v17; // [sp+10h] [bp-28h]@11
  int v18; // [sp+18h] [bp-20h]@4

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( j_Json::Reader::decodeUnicodeEscapeSequence(a1, a2, a3, a4, a5) != 1 )
    return 0;
  if ( (*a5 & 0xFFFFFC00) != 55296 )
    return 1;
  v9 = *v6;
  if ( v5 - *v6 <= 5 )
  {
    sub_21E94B4((void **)&v18, "additional six characters expected to parse unicode surrogate pair.");
    j_Json::Reader::addError(v8, &v18, v7, *v6);
    v10 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) == &dword_28898C0 )
      return 0;
    v11 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 > 0 )
    goto LABEL_25;
  }
  *v6 = v9 + 1;
  if ( *(_BYTE *)v9 != 92 || (*v6 = v9 + 2, *(_BYTE *)(v9 + 1) != 117) )
    sub_21E94B4((void **)&v16, "expecting another \\u token to begin the second half of a unicode surrogate pair");
    j_Json::Reader::addError(v8, &v16, v7, *v6);
    v10 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) == &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 > 0 )
LABEL_25:
    j_j_j_j__ZdlPv_9(v10);
  if ( j_Json::Reader::decodeUnicodeEscapeSequence(v8, v7, v6, v5, &v17) == 1 )
    *a5 = (((*a5 << 10) & 0xFFC00) + 0x10000) | v17 & 0x3FF;
  return 0;
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
    {
      v5 = Json::Value::asInt(v6, 0);
      if ( v5 < 0 )
      {
        v5 = -1;
      }
      else if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v3 + 432), 2, 0) <= v5 )
      else
        v7 = s1;
        if ( strcmp(s1, "personal_realms") )
        {
          if ( !strcmp(v7, "friends_realms") )
            v5 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v3 + 432));
          else
            v5 = -1;
        }
    }
    else
      v5 = -1;
  else
  v8 = s1 - 12;
  if ( (int *)(s1 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v5 >= 0
    && (*(_BYTE *)(v3 + 448) = 1,
        v9 = *(_DWORD *)PlayScreenModel::getWorlds(*(PlayScreenModel **)(v3 + 432)) + 72 * v5,
        *(_DWORD *)(v9 + 8)) )
    PlayScreenModel::resetUpdateIntervals(*(PlayScreenModel **)(v3 + 432));
    MinecraftScreenModel::navigateToRealmsSettingsScreen(
      *(MinecraftScreenModel **)(v3 + 432),
      (const Realms::World *)v9);
    result = 8;
    result = 0;
  return result;
}


  if ( Json::Value::isNull(v4) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, v5);
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  gsl::basic_string_span<char const,-1>::remove_z<25u>((int)&v28, (int)"#offers_collection_index");
  v8 = v29;
  if ( Json::Value::isNull(v4) )
    v9 = -1;
    v10 = (Json::Value *)Json::Value::operator[]((int)v4, v8);
    if ( Json::Value::isInt(v10) || Json::Value::isUInt(v10) == 1 )
      v9 = Json::Value::asInt(v10, 0);
      v9 = -1;
  if ( v6 >= 0 )
    *(_QWORD *)&v11 = *(_QWORD *)(v3 + 444);
    if ( v6 < (v12 - v11) >> 3 )
    {
      v13 = *(_DWORD *)(v11 + 8 * v6) + v9;
      if ( v13 < *(_DWORD *)(v11 + 8 * v6 + 4) )
      {
        v27 = MainMenuScreenModel::getStoreCatalogItem(*(MainMenuScreenModel **)(v3 + 424), v6, v13);
        if ( StoreCatalogItemModel::hasDedicatedUpsellScreen((StoreCatalogItemModel *)&v27) )
        {
          if ( StoreCatalogItemModel::isOwned((StoreCatalogItemModel *)&v27)
            || StoreCatalogItemModel::isAvailableForPurchase((StoreCatalogItemModel *)&v27) )
          {
            if ( StoreCatalogItemModel::isUpdateAvailable((StoreCatalogItemModel *)&v27) != 1
              || MainMenuScreenModel::isStoreCatalogUpdateRowIndex(*(MainMenuScreenModel **)(v3 + 424), v6) != 1 )
            {
              MainMenuScreenModel::navigateToPurchaseOfferScreen(
                *(_DWORD *)(v3 + 424),
                (StoreCatalogItemModel *)&v27,
                2);
            }
            else
              StoreBaseScreenController::_tryUpdate(v3, (int)&v27, 2);
          }
          else
            sub_21E94B4((void **)&v26, "store.connection.failed.title");
            sub_21E94B4((void **)&v25, "store.connection.failed.body");
            sub_21E94B4((void **)&v24, "gui.close");
            StoreBaseScreenController::_openModalDialog(v3, &v26, &v25, &v24);
            v14 = (void *)(v24 - 12);
            if ( (int *)(v24 - 12) != &dword_28898C0 )
              v18 = (unsigned int *)(v24 - 4);
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
                j_j_j_j__ZdlPv_9(v14);
            v15 = (void *)(v25 - 12);
            if ( (int *)(v25 - 12) != &dword_28898C0 )
              v20 = (unsigned int *)(v25 - 4);
                  v21 = __ldrex(v20);
                while ( __strex(v21 - 1, v20) );
                v21 = (*v20)--;
              if ( v21 <= 0 )
                j_j_j_j__ZdlPv_9(v15);
            v16 = (void *)(v26 - 12);
            if ( (int *)(v26 - 12) != &dword_28898C0 )
              v22 = (unsigned int *)(v26 - 4);
                  v23 = __ldrex(v22);
                while ( __strex(v23 - 1, v22) );
                v23 = (*v22)--;
              if ( v23 <= 0 )
                j_j_j_j__ZdlPv_9(v16);
        }
        else
          StoreBaseScreenController::_tryAcquireDlc((StoreBaseScreenController *)v3, (StoreCatalogItemModel *)&v27);
      }
    }
  return 0;
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  v7 = ContainerScreenController::_releaseHeldButton(
         (MinecraftScreenController *)v3,
         (const void **)&v12,
         v5,
         *(_WORD *)(v3 + 436));
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v7;
}


signed int __fastcall Json::Reader::decodeUnicodeEscapeSequence(int a1, int a2, int *a3, int a4, int *a5)
{
  int *v5; // r6@1
  int v6; // r4@1
  int v7; // r1@1
  int v8; // r5@1
  void *v9; // r0@2
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // r3@7
  int v13; // r2@7
  int v14; // r2@12
  int v15; // r3@12
  int v16; // r3@13
  int v17; // r3@18
  int v18; // r2@18
  int v19; // r2@19
  int v20; // r2@24
  int v21; // r1@24
  int v22; // r1@25
  unsigned int *v24; // r2@36
  signed int v25; // r1@38
  int v26; // [sp+8h] [bp-28h]@31
  int v27; // [sp+10h] [bp-20h]@2

  v5 = a3;
  v6 = a2;
  v7 = *a3;
  v8 = a1;
  if ( a4 - *a3 <= 3 )
  {
    sub_21E94B4((void **)&v27, "Bad unicode escape sequence in string: four digits expected.");
    j_Json::Reader::addError(v8, &v27, v6, *v5);
    v9 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) == &dword_28898C0 )
      return 0;
    v10 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 > 0 )
    goto LABEL_42;
  }
  *a5 = 0;
  *a3 = v7 + 1;
  v12 = *(_BYTE *)v7;
  v13 = v12 - 48;
  if ( (unsigned __int8)(v12 - 48) > 9u )
    if ( (unsigned __int8)(v12 - 97) > 5u )
      if ( (unsigned __int8)(v12 - 65) > 5u )
        goto LABEL_31;
      v13 = v12 - 55;
      v13 = v12 - 87;
  *a5 = v13;
  *v5 = v7 + 2;
  v14 = 16 * v13;
  v15 = *(_BYTE *)(v7 + 1);
  *a5 = v14;
  if ( (unsigned __int8)(v15 - 48) >= 0xAu )
    if ( (unsigned __int8)(v15 - 97) >= 6u )
      if ( (unsigned __int8)(v15 - 65) > 5u )
      v16 = v14 + v15 - 55;
      v16 = v14 + v15 - 87;
  else
    v16 = v14 + v15 - 48;
  *a5 = v16;
  *v5 = v7 + 3;
  v17 = 16 * v16;
  v18 = *(_BYTE *)(v7 + 2);
  *a5 = v17;
  if ( (unsigned __int8)(v18 - 48) >= 0xAu )
    if ( (unsigned __int8)(v18 - 97) >= 6u )
      if ( (unsigned __int8)(v18 - 65) > 5u )
      v19 = v18 + v17 - 55;
      v19 = v18 + v17 - 87;
    v19 = v18 + v17 - 48;
  *a5 = v19;
  *v5 = v7 + 4;
  v20 = 16 * v19;
  v21 = *(_BYTE *)(v7 + 3);
  *a5 = v20;
  if ( (unsigned __int8)(v21 - 48) < 0xAu )
    v22 = v21 + v20 - 48;
LABEL_30:
    *a5 = v22;
    return 1;
  if ( (unsigned __int8)(v21 - 97) < 6u )
    v22 = v21 + v20 - 87;
    goto LABEL_30;
  if ( (unsigned __int8)(v21 - 65) <= 5u )
    v22 = v21 + v20 - 55;
LABEL_31:
  sub_21E94B4((void **)&v26, "Bad unicode escape sequence in string: hexadecimal digit expected.");
  j_Json::Reader::addError(v8, &v26, v6, *v5);
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) == &dword_28898C0 )
    return 0;
  v24 = (unsigned int *)(v26 - 4);
  if ( &pthread_create )
    __dmb();
    do
      v25 = __ldrex(v24);
    while ( __strex(v25 - 1, v24) );
    v25 = (*v24)--;
  if ( v25 > 0 )
LABEL_42:
  j_j_j_j__ZdlPv_9(v9);
  return 0;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v27;
    v28 = v27;
    v27 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v28, (int)&v31, (int)v5);
    v6 = v28;
  sub_119C884((void **)&v26, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v29 = v26;
    v26 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v29, (int)&v32, (int)v7);
  Util::stringTrim(&v30, (int *)&v29);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 440),
    &v30);
  v8 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v29 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v26 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v28 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (char *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v27 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  *(_BYTE *)(v3 + 436) = 1;
  v13 = (RakNet *)(*(_QWORD *)(v3 + 440) >> 32);
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 440) - 12) )
    v14 = 0;
    if ( *((_DWORD *)v13 - 3) && *(_DWORD *)(v3 + 448) > 0 )
      v14 = (const char *)1;
  *(_BYTE *)(v3 + 436) = (_BYTE)v14;
  if ( !RakNet::NonNumericHostString(v13, v14) )
    *(_BYTE *)(v3 + 436) &= Util::isValidIP(*(_DWORD *)(*(_DWORD *)(v3 + 444) - 12), *(_DWORD *)(v3 + 444), 1, 1);
  return 1;
}


int __fastcall Json::PathArgument::PathArgument(int result, unsigned int a2)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = 1;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)&v21) )
{
    v4 = 0;
  }
  else
  {
    sub_21E94B4((void **)&v19, (const char *)&unk_257BC67);
    Json::Value::asString((int *)&s1, (int)&v21, &v19);
    v5 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v19 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    v6 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v7 = *(_DWORD *)(dword_27E8AE0 + 4 * *(_DWORD *)algn_27E8AE4);
    v8 = s1;
    v9 = *(_DWORD *)v7;
    v11 = (char *)s1 - 12;
    v10 = *((_DWORD *)s1 - 3);
    v12 = (_DWORD *)(*(_DWORD *)v7 + 12);
    while ( 1 )
      if ( *v12 == v6 )
        v13 = *(_DWORD **)(v9 + 4);
        if ( v10 == *(v13 - 3) && !memcmp(v8, v13, v10) )
          break;
      v7 = v9;
      v12 = (_DWORD *)(*(_DWORD *)v9 + 12);
      v9 = *(_DWORD *)v9;
    *v3 = *(_BYTE *)(*(_DWORD *)v7 + 8);
    if ( (int *)v11 != &dword_28898C0 )
      v17 = (unsigned int *)((char *)v8 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v4 = 1;
  Json::Value::~Value((Json::Value *)&v21);
  return v4;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  *(_DWORD *)(v3 + 468) = v4 + *(_DWORD *)(v3 + 472);
  return 1;
}


int __fastcall Json::Value::isObject(Json::Value *this)
{
  int v1; // r0@1
  signed int v2; // r2@1
  signed int v3; // r1@1

  v1 = *((_BYTE *)this + 8);
  v2 = 0;
  v3 = 0;
  if ( v1 == 7 )
    v2 = 1;
  if ( !v1 )
    v3 = 1;
  return v3 | v2;
}


int __fastcall Json::Value::CZString::CZString(int result, unsigned int a2)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


Json::Value *__fastcall Json::Value::get(Json::Value *this, const char *a2, const Json::Value *a3, const Json::Value *a4)
{
  Json::Value *v4; // r8@1
  const Json::Value *v5; // r4@1
  const char *v6; // r6@1
  int v7; // r1@2
  int v8; // r7@2
  int v9; // r0@2
  int v10; // r9@2
  int v11; // r5@2
  int v12; // r10@5
  const char *v13; // r0@6
  const Json::Value *v14; // r0@14
  bool v15; // zf@16

  v4 = this;
  v5 = a4;
  v6 = (const char *)a3;
  if ( a2[8] )
  {
    v7 = *(_DWORD *)a2;
    v8 = v7 + 4;
    v9 = *(_DWORD *)(v7 + 8);
    v10 = v7 + 4;
    v11 = v7 + 4;
    if ( v9 )
    {
      if ( a3 )
      {
        v11 = v7 + 4;
        do
        {
          v12 = v11;
          v11 = v9;
          while ( 1 )
          {
            v13 = *(const char **)(v11 + 16);
            if ( !v13 || j_strcmp_0(v13, v6) >= 0 )
              break;
            v11 = *(_DWORD *)(v11 + 12);
            if ( !v11 )
            {
              v11 = v12;
              goto LABEL_15;
            }
          }
          v9 = *(_DWORD *)(v11 + 8);
        }
        while ( v9 );
      }
      else
          v9 = *(_DWORD *)(v9 + 8);
    }
LABEL_15:
    if ( v11 != v8 )
      v15 = v6 == 0;
      if ( v6 )
        v7 = *(_DWORD *)(v11 + 16);
        v15 = v7 == 0;
      if ( v15 )
        if ( !*(_DWORD *)(v11 + 20) )
          v10 = v11;
      else if ( j_strcmp_0(v6, (const char *)v7) >= 0 )
        v10 = v11;
    v14 = (const Json::Value *)(v10 + 24);
    if ( v10 == v8 )
      v14 = (const Json::Value *)&Json::Value::null;
  }
  else
    v14 = (const Json::Value *)&Json::Value::null;
  if ( (_UNKNOWN *)v14 != &Json::Value::null )
    v5 = v14;
  return j_Json::Value::Value(v4, v5);
}


__int64 __fastcall Json::Value::asInt64(Json::Value *this, int a2, __int64 _R2)
{
  unsigned int v3; // r12@1

  v3 = *((_BYTE *)this + 8);
  if ( v3 > 5 )
  {
LABEL_5:
    LODWORD(_R2) = 0;
  }
  else
    switch ( v3 )
    {
      case 0u:
        return _R2;
      case 1u:
      case 2u:
        return *(_QWORD *)this;
      case 3u:
        __asm
        {
          VLDR            D0, [R0]; jumptable 01B2D84A case 3
          VCVTR.S32.F64   S0, D0
          VMOV            R2, S0
        }
        return (signed int)_R2;
      default:
        goto LABEL_5;
      case 5u:
        LODWORD(_R2) = *(_BYTE *)this;
        break;
    }
  HIDWORD(_R2) = 0;
  return _R2;
}


Json::StyledWriter *__fastcall Json::StyledWriter::~StyledWriter(Json::StyledWriter *this)
{
  Json::StyledWriter *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void *v6; // r5@3
  void *v7; // r7@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int *v10; // r0@13
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  unsigned int *v14; // r2@23
  signed int v15; // r1@25

  v1 = this;
  *(_DWORD *)this = &off_2725B28;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v4 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v7 = (void *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v6 = (void *)*(_QWORD *)((char *)v1 + 4);
  if ( v6 != v7 )
    do
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v10);
      }
      v6 = (char *)v6 + 4;
    while ( v6 != v7 );
    v6 = (void *)*((_DWORD *)v1 + 1);
  if ( v6 )
    operator delete(v6);
  Json::Writer::~Writer(v1);
  return v1;
}


int __fastcall Json::Value::begin(int result, int a2)
{
  int v2; // r1@2

  if ( (*(_WORD *)(a2 + 8) & 0xFE) == 6 && (v2 = *(_DWORD *)a2) != 0 )
  {
    *(_DWORD *)result = *(_DWORD *)(v2 + 12);
    *(_BYTE *)(result + 4) = 0;
  }
  else
    *(_DWORD *)result = 0;
    *(_BYTE *)(result + 4) = 1;
  return result;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v27;
    v28 = v27;
    v27 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v28, (int)&v30, (int)v5);
    v6 = v28;
  sub_21E94B4((void **)&v26, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v29 = v26;
    v8 = (char *)&unk_28898CC;
    v26 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v29, (int)&v31, (int)v7);
    v8 = v26;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  v10 = (char *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v28 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v27 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  RealmsWhitelistScreenController::_updatePlayerlistModel((int)v3, (const void **)&v29, 0, 0, v25);
  RealmsWhitelistScreenController::_updatePlayerlistModel((int)v3, (const void **)&v29, 1, 0, v12);
  RealmsWhitelistScreenController::_updatePlayerlistModel((int)v3, (const void **)&v29, 2, 0, v13);
  RealmsWhitelistScreenController::_updatePlayerlistModel((int)v3, (const void **)&v29, 3, 0, v14);
  RealmsWhitelistScreenController::_refreshPlayerList(v3);
  v15 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v29 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  return 1;
}


int __fastcall Json::ValueIterator::ValueIterator(int result, const Json::ValueConstIterator *a2)
{
  *(_QWORD *)result = *(_QWORD *)a2;
  return result;
}


    if ( Json::Value::size(v9) )
{
      v10 = 0;
      do
      {
        v11 = (Json::Value *)Json::Value::operator[]((int)v9, v10);
        v12 = Json::Value::operator[](v11, "value");
        v13 = 0;
        if ( v10 == *(_DWORD *)(v2 + 4) )
          v13 = 1;
        Json::Value::Value((Json::Value *)&v25, v13);
        Json::Value::operator=(v12, (const Json::Value *)&v25);
        Json::Value::~Value((Json::Value *)&v25);
        ++v10;
      }
      while ( v10 < Json::Value::size(v9) );
    }
    v14 = Json::Value::operator[]((Json::Value *)(*(_DWORD *)(v4 + 464) + 8), "contentItems");
    v15 = (Json::Value *)Json::Value::operator[](v14, v5);
    v16 = Json::Value::operator[](v15, "enabled");
    Json::Value::Value((Json::Value *)&v24, 0);
    Json::Value::operator=(v16, (const Json::Value *)&v24);
    Json::Value::~Value((Json::Value *)&v24);
    v17 = Json::Value::operator[]((Json::Value *)(*(_DWORD *)(v4 + 464) + 8), "contentItems");
    v18 = (Json::Value *)Json::Value::operator[](v17, v5);
    v19 = Json::Value::operator[](v18, "value");
    Json::Value::Value((Json::Value *)&v23, *(_DWORD *)(v2 + 4));
    Json::Value::operator=(v19, (const Json::Value *)&v23);
    Json::Value::~Value((Json::Value *)&v23);
    result = 1;
  }
  else
  {
    result = 0;
  return result;
}


const void **__fastcall Json::StyledWriter::writeIndent(Json::StyledWriter *this)
{
  Json::StyledWriter *v1; // r5@1
  const void **result; // r0@1
  const void **v3; // r4@1
  int v4; // r1@1
  int v5; // r6@2
  int v6; // r1@4
  int v7; // r1@6 OVERLAPPED
  int v8; // r6@6
  unsigned int v9; // r2@6
  _DWORD *v10; // r0@9

  v1 = this;
  v3 = (const void **)((char *)this + 16);
  result = (const void **)*((_DWORD *)this + 4);
  v4 = (int)*(result - 3);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( (signed int)*(result - 1) >= 0 )
    {
      sub_21E8010(v3);
      result = (const void **)*v3;
    }
    v6 = *((_BYTE *)result + v5);
    if ( v6 != 10 )
      if ( v6 == 32 )
        return result;
      *(_QWORD *)&v7 = *(_QWORD *)(result - 3);
      v8 = v7 + 1;
      if ( v7 + 1 > v9 || (signed int)*(result - 1) >= 1 )
      {
        sub_21E6FCC(v3, v7 + 1);
        result = (const void **)*v3;
        v7 = *((_DWORD *)*v3 - 3);
      }
      *((_BYTE *)result + v7) = 10;
      v10 = *v3;
      if ( (int *)((char *)*v3 - 12) != &dword_28898C0 )
        *(v10 - 1) = 0;
        *(v10 - 3) = v8;
        *((_BYTE *)v10 + v8) = byte_26C67B8[0];
  }
  return sub_21E72F0(v3, (const void **)v1 + 5);
}


void __fastcall Json::StyledWriter::~StyledWriter(Json::StyledWriter *this)
{
  Json::StyledWriter::~StyledWriter(this);
}


signed int __fastcall Json::Reader::decodeString(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r0@2
  int v4; // r4@4
  signed int v5; // r4@4
  char *v6; // r0@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+0h] [bp-28h]@4
  char *v11; // [sp+10h] [bp-18h]@1

  v2 = a1;
  v11 = (char *)&unk_28898CC;
  if ( j_Json::Reader::decodeString(a1, a2, (const void **)&v11) == 1 )
  {
    v3 = *(_QWORD *)(v2 + 24);
    if ( (_DWORD)v3 == HIDWORD(v3) )
      LODWORD(v3) = *(_DWORD *)(*(_DWORD *)(v2 + 36) - 4) + 512;
    v4 = *(_DWORD *)(v3 - 4);
    j_Json::Value::Value((int)&v10, (const char **)&v11);
    j_Json::Value::operator=(v4, (const Json::Value *)&v10);
    j_Json::Value::~Value((Json::Value *)&v10);
    v5 = 1;
  }
  else
    v5 = 0;
  v6 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v11 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  return v5;
}


  if ( !Json::Value::isNull(v5) && Json::Value::isObject(v5) == 1 )
{
    v7 = (Json::Value *)Json::Value::operator[]((int)v5, v6);
    if ( Json::Value::isBool(v7) == 1 )
      v4 = Json::Value::asBool(v7, 0);
  }
  *(_BYTE *)(v3 + 421) = v4 ^ 1;
  MinecraftScreenModel::setVRControlMode(*(MinecraftScreenModel **)(v3 + 380), v4 ^ 1);
  MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(v3 + 380));
  MinecraftScreenModel::navigateToVRInformationScreen(*(MinecraftScreenModel **)(v3 + 380));
  return 8;
}


  if ( Json::Value::isMember(a1, "controls") == 1 )
{
    v40 = v3;
    v5 = Json::Value::operator[]((int)v4, "controls");
    v54 = 0;
    v55 = 0;
    v56 = 1065353216;
    v57 = 0;
    HIDWORD(v6) = 10;
    LODWORD(v6) = &v56;
    v7 = sub_119C844(v6);
    v53 = v7;
    if ( v7 == 1 )
    {
      v9 = &v58;
      v58 = 0;
    }
    else
      if ( v7 >= 0x40000000 )
        sub_119C874();
      v8 = 4 * v7;
      v9 = (int *)operator new(4 * v7);
      _aeabi_memclr4(v9, v8);
    ptr = v9;
    Json::Value::begin((Json::Value *)&v51, (int)v5);
    Json::Value::end((Json::Value *)&v50, (int)v5);
    v10 = (const Json::ValueIteratorBase *)&v50;
    v11 = (Json::Value *)&v48;
    v12 = "/";
    while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v51, v10) != 1 )
      v13 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v51);
      Json::Value::begin((Json::Value *)&v49, v13);
      Json::Value::end(v11, v13);
      if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v49, v11) )
      {
        v14 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v49);
        sub_119C884((void **)&v47, v14);
        v15 = v10;
        v16 = sub_119C8B4(&v47, 64, 0);
        sub_119C8C4((void **)&v46, &v47, 0, (unsigned int)v16);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          &v47,
          &v46);
        v17 = (void *)(v46 - 12);
        if ( (int *)(v46 - 12) != &dword_28898C0 )
        {
          v26 = (unsigned int *)(v46 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v17);
        }
        std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
          (int *)&v44,
          (unsigned __int64 *)&ptr,
          (int **)&v47);
        if ( *(_DWORD *)(v47 - 12) )
          v18 = 0;
        else
          sub_119CAD8((void **)&v47, "{no name}", (_BYTE *)9);
          v18 = 1;
        sub_119C854(&v42, v41);
        sub_119C894((const void **)&v42, v12, 1u);
        v19 = sub_119C8A4((const void **)&v42, (const void **)&v47);
        v43 = (char *)*v19;
        *v19 = &unk_28898CC;
        v20 = (void *)(v42 - 12);
        if ( (int *)(v42 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v42 - 4);
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v20);
        v21 = 0;
        if ( !v45 )
          v21 = 1;
        if ( v21 | v18 )
          v22 = *(_QWORD *)(v40 + 4);
          if ( (_DWORD)v22 == HIDWORD(v22) )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
              (unsigned __int64 *)v40,
              (int *)&v43);
            sub_119C854((int *)v22, (int *)&v43);
            *(_DWORD *)(v40 + 4) += 4;
        v23 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v49);
        sub_DC2330(v23, (int *)&v43, v40);
        v10 = v15;
        v24 = v43 - 12;
        if ( (int *)(v43 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v43 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v24);
        v11 = (Json::Value *)&v48;
        v12 = "/";
        v25 = (void *)(v47 - 12);
        if ( (int *)(v47 - 12) != &dword_28898C0 )
          v32 = (unsigned int *)(v47 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v11 = (Json::Value *)&v48;
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v25);
      }
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v51);
    v34 = v54;
    while ( v34 )
      v37 = v34;
      v38 = *v34 >> 32;
      v34 = (unsigned __int64 *)*v34;
      v39 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v38 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v39);
      operator delete(v37);
    _aeabi_memclr4(ptr, 4 * v53);
    if ( ptr )
      if ( &v58 != ptr )
        operator delete(ptr);
  }
}


int __fastcall Json::Reader::readToken(Json::Reader *this, int a2)
{
  Json::Reader *v2; // r5@1
  int v3; // r7@1
  __int64 v4; // r0@1
  unsigned int v5; // r6@2
  _BYTE *v6; // r2@7
  signed int v7; // r3@7
  int v8; // r4@12
  signed int v9; // r2@23
  bool v10; // zf@25
  signed int v11; // r2@31
  signed int v12; // r0@37
  int v13; // r3@43
  signed int v14; // r2@53

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 11);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    while ( 1 )
    {
      v5 = *(_BYTE *)HIDWORD(v4) - 9;
      if ( v5 > 0x17 || !((1 << v5) & 0x800013) )
        break;
      *((_DWORD *)v2 + 23) = ++HIDWORD(v4);
      if ( (_DWORD)v4 == HIDWORD(v4) )
      {
        *(_DWORD *)(v3 + 4) = HIDWORD(v4);
        goto LABEL_8;
      }
    }
  }
  *(_DWORD *)(v3 + 4) = HIDWORD(v4);
  if ( HIDWORD(v4) == (_DWORD)v4 )
LABEL_8:
    v7 = 0;
    v6 = (_BYTE *)v4;
  else
    v6 = (_BYTE *)(HIDWORD(v4) + 1);
    *((_DWORD *)v2 + 23) = HIDWORD(v4) + 1;
    v7 = *(_BYTE *)HIDWORD(v4);
    ++HIDWORD(v4);
  if ( v7 <= 90 )
    switch ( v7 )
      case 45:
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
        for ( *(_DWORD *)v3 = 6; (_BYTE *)v4 != v6; *((_DWORD *)v2 + 23) = ++v6 )
        {
          v8 = *v6;
          if ( (unsigned __int8)(v8 - 48) >= 0xAu
            && ((unsigned int)(v8 - 43) > 0x1A || !((1 << (v8 - 43)) & 0x400000D))
            && v8 != 101 )
          {
            break;
          }
        }
        goto LABEL_61;
      case 34:
        *(_DWORD *)v3 = 5;
      case 44:
        v12 = 10;
        goto LABEL_60;
      case 47:
        *(_DWORD *)v3 = 12;
        if ( !j_Json::Reader::readComment(v2) )
          goto LABEL_56;
      case 58:
        v12 = 11;
      case 35:
      case 36:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
      case 46:
        goto LABEL_56;
      default:
        if ( v7 )
        v12 = 0;
    while ( v6 != (_BYTE *)v4 )
      *((_DWORD *)v2 + 23) = v6 + 1;
      v13 = *v6;
      if ( v13 == 92 )
        if ( v6 + 1 == (_BYTE *)v4 )
        v6 += 2;
        *((_DWORD *)v2 + 23) = v6;
      else
        ++v6;
        if ( v13 == 34 )
          goto LABEL_61;
    goto LABEL_56;
  if ( v7 > 109 )
    if ( v7 > 122 )
      if ( v7 == 123 )
        v12 = 1;
      if ( v7 == 125 )
        v12 = 2;
LABEL_60:
        *(_DWORD *)v3 = v12;
    else if ( v7 == 110 )
      *(_DWORD *)v3 = 9;
      if ( (signed int)v4 - HIDWORD(v4) >= 3 )
        v14 = 2;
        while ( v14 != -1 )
          v10 = *(_BYTE *)(HIDWORD(v4) + v14) == (unsigned __int8)aUll[v14];
          --v14;
          if ( !v10 )
            goto LABEL_56;
        goto LABEL_62;
    else if ( v7 == 116 )
      *(_DWORD *)v3 = 7;
        v9 = 2;
        while ( v9 != -1 )
          v10 = *(_BYTE *)(HIDWORD(v4) + v9) == (unsigned __int8)aRue[v9];
          --v9;
LABEL_62:
        *((_DWORD *)v2 + 23) = HIDWORD(v4) + 3;
LABEL_56:
    v12 = 13;
    goto LABEL_60;
  if ( v7 == 91 )
    v12 = 3;
  if ( v7 == 93 )
    v12 = 4;
  if ( v7 != 102 )
  *(_DWORD *)v3 = 8;
  if ( (signed int)v4 - HIDWORD(v4) < 4 )
  v11 = 3;
  while ( v11 != -1 )
    v10 = *(_BYTE *)(HIDWORD(v4) + v11) == (unsigned __int8)aAlse[v11];
    --v11;
    if ( !v10 )
      goto LABEL_56;
  *((_DWORD *)v2 + 23) = HIDWORD(v4) + 4;
LABEL_61:
  *(_DWORD *)(v3 + 8) = *((_DWORD *)v2 + 23);
  return 1;
}


  if ( Json::Value::isArray(v7) != 1 || (unsigned int)Json::Value::size(v7) < 2 )
{
  v31 = __PAIR__((unsigned int)v5, (unsigned int)v4);
  Json::Value::begin((Json::Value *)&v42, (int)v7);
  Json::Value::end((Json::Value *)&v41, (int)v7);
  if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v42, (const Json::ValueIteratorBase *)&v41) )
  {
LABEL_45:
    v5 = (int *)HIDWORD(v31);
    v4 = (int *)v31;
LABEL_46:
    sub_119C854(v5, v4);
    return;
  }
  v8 = &v39;
  v33 = v6 + 1;
  v9 = (Json::ValueIteratorBase *)&v42;
  while ( 1 )
    v18 = Json::ValueIteratorBase::deref(v9);
    v19 = Json::Value::operator[](v18, "uuid");
    sub_119C884((void **)&v37, (const char *)&unk_257BC67);
    Json::Value::asString(&v38, (int)v19, &v37);
    mce::UUID::fromString((int)v8, &v38);
    v20 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v38 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v20);
    }
    v21 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v37 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
    if ( !(*v6 ^ v39) && !(*v33 ^ v40) )
      v22 = Json::Value::operator[](v18, "type");
      sub_119C884((void **)&v35, (const char *)&unk_257BC67);
      Json::Value::asString(&v36, (int)v22, &v35);
      v32 = v6;
      v23 = PackTypeFromString((int **)&v36);
      v24 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v36 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v24);
      v25 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v35 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v25);
      v26 = v23 == 5;
      v6 = v32;
      v8 = &v39;
      v9 = (Json::ValueIteratorBase *)&v42;
      if ( v26 )
        break;
    Json::ValueIteratorBase::increment(v9);
    if ( Json::ValueIteratorBase::isEqual(v9, (const Json::ValueIteratorBase *)&v41) )
      goto LABEL_45;
  v27 = Json::Value::operator[](v18, "linkedBinary");
  sub_119C884((void **)&v34, (const char *)&unk_257BC67);
  Json::Value::asString((int *)HIDWORD(v31), (int)v27, &v34);
  v28 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
}


  if ( Json::Value::isString(v4) != 1 )
{
    Json::Value::~Value((Json::Value *)&v12);
    return sub_21E8AF4(v2, (int *)&Util::EMPTY_STRING);
  }
  v5 = Json::Value::operator[]((Json::Value *)&v12, "icon_path");
  sub_21E94B4((void **)&v10, (const char *)&unk_257BC67);
  Json::Value::asString(v2, v5, &v10);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  return (int *)Json::Value::~Value((Json::Value *)&v12);
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  v7 = ContainerScreenController::_releaseHeldButton(
         (MinecraftScreenController *)v3,
         (const void **)&v12,
         v5,
         *(_WORD *)(v3 + 442));
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v7;
}


Json::FastWriter *__fastcall Json::FastWriter::~FastWriter(Json::FastWriter *this)
{
  Json::FastWriter *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2725B14;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
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
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  HudScreenController::_handleSlotSelection(v3, v4, 0);
  return 1;
}


  if ( Json::Value::isNull(v5)
{
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#property_field"), Json::Value::isString(v6) != 1) )
  {
    v7 = v23;
    v24 = v23;
    v23 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v24, (int)&v26, (int)v6);
    v7 = v24;
  sub_119C884((void **)&v22, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v5)
    || Json::Value::isObject(v5) != 1
    || (v8 = (Json::Value *)Json::Value::operator[]((int)v5, v7), Json::Value::isString(v8) != 1) )
    v25 = v22;
    v22 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v8);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v4 + 424),
    (int *)&v25);
  v9 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (char *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v23 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  if ( *(_DWORD *)(v2 + 16) == 1 )
    DevConsoleScreenController::_sendMessage((DevConsoleScreenController *)v4);
    sub_119CAD8((void **)(v4 + 424), (char *)&unk_257BC67, 0);
  return 1;
}


int __fastcall Json::StyledStreamWriter::StyledStreamWriter(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = &unk_28898CC;
  *(_DWORD *)(a1 + 20) = 74;
  sub_21E8AF4((int *)(a1 + 24), a2);
  return v2;
}


char *__fastcall Json::operator<<(char *a1, const Json::Value *a2)
{
  const Json::Value *v2; // r5@1
  char *v3; // r8@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp+0h]@1
  int v9; // [sp+8h] [bp+4h]@1
  int v10; // [sp+Ch] [bp+8h]@1
  int v11; // [sp+10h] [bp+Ch]@1
  char *v12; // [sp+14h] [bp+10h]@1
  void *v13; // [sp+18h] [bp+14h]@1
  int v14; // [sp+1Ch] [bp+18h]@1
  int v15; // [sp+20h] [bp+1Ch]@1
  char v16; // [sp+24h] [bp+20h]@2

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "\t");
  v11 = 0;
  v12 = 0;
  v9 = 0;
  v10 = 0;
  v13 = &unk_28898CC;
  v14 = 74;
  sub_21E8AF4(&v15, &v8);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v7 = __ldrex(v6);
        __strex(v7 - 1, v6);
      }
      while ( &v8 );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v12 = v3;
  v16 = 0;
  sub_21E8190(&v13, (char *)&unk_257BC67, 0);
  j_Json::StyledStreamWriter::writeCommentBeforeValue((Json::StyledStreamWriter *)&v9, v2);
  j_Json::StyledStreamWriter::writeValue((Json::StyledStreamWriter *)&v9, v2);
  j_Json::StyledStreamWriter::writeCommentAfterValueOnSameLine((Json::StyledStreamWriter *)&v9, v2);
  sub_21CBF38(v12, (int)"\n", 1);
  j_Json::StyledStreamWriter::~StyledStreamWriter((Json::StyledStreamWriter *)&v9);
  return v3;
}


void __fastcall Json::Reader::addComment(int a1, _BYTE *a2, _BYTE *a3, int a4)
{
  _BYTE *v4; // r6@1
  _BYTE *v5; // r5@1
  int v6; // r8@2
  int v7; // r6@4
  _DWORD *v8; // r0@4
  int *v9; // r4@4
  _BYTE *v10; // r7@4
  const void **v11; // r4@6
  int v12; // r8@10
  _DWORD *v13; // r0@10
  int *v14; // r6@10
  _BYTE *v15; // r7@10
  _BYTE *v16; // r0@17
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@27
  signed int v20; // r1@29
  _BYTE *v21; // [sp+4h] [bp-2Ch]@25
  _BYTE *v22; // [sp+Ch] [bp-24h]@17

  v4 = a3;
  v5 = a2;
  if ( a4 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 100);
    if ( a2 == a3 )
    {
      v10 = &unk_28898CC;
    }
    else
      if ( !a2 )
        sub_21E5884((int)"basic_string::_S_construct null not valid");
      v7 = a3 - a2;
      v8 = sub_21E7E80(a3 - a2, 0);
      v9 = v8;
      v10 = v8 + 3;
      if ( v7 == 1 )
        *v10 = *v5;
      else
        j___aeabi_memcpy_0((int)(v8 + 3), (int)v5, v7);
      if ( v9 != &dword_28898C0 )
      {
        v9[2] = 0;
        *v9 = v7;
        v10[v7] = byte_26C67B8[0];
      }
    v22 = v10;
    j_Json::Value::setComment(v6, (const char **)&v22, 1);
    v16 = v22 - 12;
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
LABEL_36:
        j_j_j_j__ZdlPv_9(v16);
        return;
  }
  else
    v11 = (const void **)(a1 + 104);
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 104) - 12) )
      sub_21E7408(v11, "\n", 1u);
    if ( v5 == v4 )
      v15 = &unk_28898CC;
      if ( !v5 )
      v12 = v4 - v5;
      v13 = sub_21E7E80(v4 - v5, 0);
      v14 = v13;
      v15 = v13 + 3;
      if ( v12 == 1 )
        *v15 = *v5;
        j___aeabi_memcpy_0((int)(v13 + 3), (int)v5, v12);
      if ( v14 != &dword_28898C0 )
        v14[2] = 0;
        *v14 = v12;
        v15[v12] = byte_26C67B8[0];
    v21 = v15;
    sub_21E72F0(v11, (const void **)&v21);
    v16 = v21 - 12;
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v21 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        goto LABEL_36;
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  ContainerScreenController::_handleButtonIsHeld(v3, (int **)&v11, v5, 1, 1);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  return 2;
}


int __fastcall Json::Reader::getLocationLineAndColumn(Json::Reader *this, const char *a2, int *a3, int *a4)
{
  const char *v4; // lr@1
  int v5; // r12@1
  const char *v6; // r5@3
  const char *v7; // r4@4
  int v8; // r6@6
  int result; // r0@11

  v4 = (const char *)*((_DWORD *)this + 21);
  v5 = 0;
LABEL_3:
  v6 = v4;
  *a3 = v5;
  while ( 1 )
  {
    v7 = v6;
    if ( v6 >= a2 || v6 == *((const char **)this + 22) )
      break;
    ++v6;
    v8 = *v7;
    if ( v8 == 10 )
      goto LABEL_2;
    if ( v8 == 13 )
    {
      if ( *v6 == 10 )
        v6 = v7 + 2;
LABEL_2:
      v4 = v6;
      ++v5;
      goto LABEL_3;
    }
  }
  *a4 = a2 + 1 - v4;
  result = *a3 + 1;
  *a3 = result;
  return result;
}


int __fastcall Json::ValueIterator::ValueIterator(int result, _DWORD *a2)
{
  *(_DWORD *)result = *a2;
  *(_BYTE *)(result + 4) = 0;
  return result;
}


  if ( Json::Value::isNull(v3) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v3) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v3, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  v7 = *(_DWORD *)(v4 + 624);
  v8 = v5 & 0x1F;
  v9 = v5 >> 5;
  v10 = *(_DWORD *)(v7 + 4 * v9);
  v11 = 1 << v8;
  if ( *(_BYTE *)(v2 + 8) )
    v12 = v11 | v10;
    v12 = v10 & ~v11;
  *(_DWORD *)(v7 + 4 * v9) = v12;
  return 1;
}


      if ( Json::Value::isInt(v8) || (result = Json::Value::isUInt(v8), result == 1) )
{
        v9 = 0;
        result = Json::Value::asInt(v8, 0);
        if ( result >= 0 )
        {
          v10 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(
                  *(SkinPackCollectionModel **)(v6 + 432),
                  result);
          if ( SkinPackModel::getNumSkins((SkinPackModel *)v10) > 5 )
            v9 = 1;
          v11 = v9;
          result = UIPropertyBag::set<bool>(v3, *((_DWORD *)*v5 - 3), *v5, &v11);
        }
      }
    }
  }
  return result;
}


int __fastcall Json::Reader::recoverFromError(int a1, int a2)
{
  Json::Reader *v2; // r4@1
  int v3; // r5@1
  __int64 v4; // kr00_8@1
  int v5; // r8@1
  int v6; // r9@1
  int v7; // r7@1
  bool v8; // zf@2
  int v10; // [sp+0h] [bp-28h]@2

  v2 = (Json::Reader *)a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = -858993459 * (((signed int)v4 - *(_DWORD *)(a1 + 48)) >> 2);
  v6 = -858993459 * ((signed int)(*(_QWORD *)(a1 + 64) - (*(_QWORD *)(a1 + 64) >> 32)) >> 2);
  v7 = 25 * ((*(_DWORD *)(a1 + 76) - HIDWORD(v4)) >> 2);
  do
  {
    j_Json::Reader::readToken(v2, (int)&v10);
    v8 = v10 == v3;
    if ( v10 != v3 )
      v8 = v10 == 0;
  }
  while ( !v8 );
  j_std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::resize((int)v2 + 40, v7 + v6 + v5 - 25);
  return 0;
}


void __fastcall Json::Value::setComment(int a1, const char **a2, int a3)
{
  Json::Value::setComment(a1, a2, a3);
}


  if ( !Json::Value::isNull((Json::Value *)(v4 + 8)) && Json::Value::isObject((Json::Value *)(v4 + 8)) == 1 )
{
    v8 = (Json::Value *)Json::Value::operator[](v4 + 8, v7);
    if ( Json::Value::isInt(v8) || Json::Value::isUInt(v8) == 1 )
    {
      v9 = Json::Value::asInt(v8, 0);
      if ( v9 >= 0 && v9 < (signed int)((*(_QWORD *)(v6 + 444) >> 32) - *(_QWORD *)(v6 + 444)) >> 3 )
      {
        gsl::basic_string_span<char const,-1>::remove_z<25u>((int)&v17, (int)"#offers_collection_index");
        v10 = v18;
        if ( Json::Value::isNull((Json::Value *)(v4 + 8)) )
        {
          HIDWORD(v11) = -1;
        }
        else if ( Json::Value::isObject((Json::Value *)(v4 + 8)) == 1 )
          v12 = (Json::Value *)Json::Value::operator[](v4 + 8, v10);
          if ( Json::Value::isInt(v12) || Json::Value::isUInt(v12) == 1 )
            HIDWORD(v11) = Json::Value::asInt(v12, 0);
          else
            HIDWORD(v11) = -1;
        else
        LODWORD(v11) = v9;
        Util::format((Util *)&v16, "offer_grid_item_%d_%d", v11);
        UIPropertyBag::set<std::string>(v4, *((_DWORD *)*v5 - 3), *v5, (const void **)&v16);
        v13 = (void *)(v16 - 12);
        if ( (int *)(v16 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v16 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
          }
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
      }
    }
  }
}


int *__fastcall Json::StyledWriter::write(Json::StyledWriter *this, const Json::Value *a2, const Json::Value *a3)
{
  const Json::Value *v3; // r7@1
  const void **v4; // r5@1
  const Json::Value *v5; // r6@1
  int *v6; // r8@1

  v3 = a2;
  v4 = (const void **)((char *)a2 + 16);
  v5 = a3;
  v6 = (int *)this;
  sub_21E8190((void **)a2 + 4, (char *)&unk_257BC67, 0);
  *((_BYTE *)v3 + 32) = 0;
  sub_21E8190((void **)v3 + 5, (char *)&unk_257BC67, 0);
  j_Json::StyledWriter::writeCommentBeforeValue(v3, v5);
  j_Json::StyledWriter::writeValue(v3, v5);
  j_Json::StyledWriter::writeCommentAfterValueOnSameLine(v3, v5);
  sub_21E7408(v4, "\n", 1u);
  return sub_21E8AF4(v6, (int *)v4);
}


int *__fastcall Json::Value::asString(int *a1, int a2, int *a3)
{
  int v3; // r3@1
  const char *v5; // r3@5
  const char *v6; // r1@7
  const char *v7; // r2@8

  v3 = *(_BYTE *)(a2 + 8);
  if ( v3 == 5 )
  {
    v5 = "true";
    if ( !*(_BYTE *)a2 )
      v5 = "false";
    v6 = v5;
  }
  else if ( v3 == 4 )
    v7 = *(const char **)a2;
    v6 = (const char *)&unk_257BC67;
    if ( v7 )
      v6 = v7;
  else
    if ( !*(_BYTE *)(a2 + 8) )
      return sub_21E8AF4(a1, a3);
  return (int *)sub_21E94B4((void **)a1, v6);
}


  if ( !Json::Value::isNull((Json::Value *)(a2 + 8)) && Json::Value::isObject(v2) == 1 )
{
    v4 = (Json::Value *)Json::Value::operator[]((int)v2, "#button_navigation");
    if ( Json::Value::isInt(v4) || Json::Value::isUInt(v4) == 1 )
    {
      v5 = Json::Value::asInt(v4, 0);
      if ( v5 == 5 )
      {
        ChatScreenController::_teleportWhereHelper(v3);
      }
      else if ( v5 == 4 )
        ChatScreenController::_teleportWhoHelper(v3);
        return 1;
    }
  }
  return 1;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v24;
    v25 = v24;
    v24 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v5);
    v6 = v25;
  sub_119C884((void **)&v23, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v26 = v23;
    v23 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v26, (int)&v28, (int)v7);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 440),
    (int *)&v26);
  v8 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (char *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v25 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v24 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  *(_BYTE *)(v3 + 436) = 1;
  v12 = (RakNet *)(*(_QWORD *)(v3 + 440) >> 32);
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 440) - 12) )
    v13 = 0;
    if ( *((_DWORD *)v12 - 3) && *(_DWORD *)(v3 + 448) > 0 )
      v13 = (const char *)1;
  *(_BYTE *)(v3 + 436) = (_BYTE)v13;
  if ( !RakNet::NonNumericHostString(v12, v13) )
    *(_BYTE *)(v3 + 436) &= Util::isValidIP(*(_DWORD *)(*(_DWORD *)(v3 + 444) - 12), *(_DWORD *)(v3 + 444), 1, 1);
  return 1;
}


int __fastcall Json::Reader::decodeDouble(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r9@1
  __int64 v4; // kr00_8@1
  __int64 v5; // r6@1
  int v7; // r6@2
  int *v8; // r0@5
  int *v9; // r5@5
  __int64 v10; // r0@13
  int v15; // r4@15
  int result; // r0@15
  __int64 v17; // kr08_8@16
  int v18; // r6@18
  int *v19; // r4@18
  _BYTE *v20; // r7@18
  const void **v21; // r0@24
  const void **v22; // r0@24
  char *v23; // r0@24
  char *v24; // r0@25
  _BYTE *v25; // r0@26
  int v26; // r2@30
  signed int v27; // r1@32
  unsigned int *v28; // r2@34
  signed int v29; // r1@36
  unsigned int *v30; // r2@38
  signed int v31; // r1@40
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  int v34; // [sp+0h] [bp-78h]@15
  _BYTE *v35; // [sp+18h] [bp-60h]@24
  char *v36; // [sp+1Ch] [bp-5Ch]@24
  char *v37; // [sp+20h] [bp-58h]@24
  double v38; // [sp+28h] [bp-50h]@1
  char v39[40]; // [sp+30h] [bp-48h]@2
  RakNet *v40; // [sp+58h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  v40 = _stack_chk_guard;
  v38 = 0.0;
  v4 = *(_QWORD *)(a2 + 4);
  v5 = (unsigned int)(HIDWORD(v4) - v4);
  if ( HIDWORD(v4) - (signed int)v4 > 32 )
  {
    if ( (_DWORD)v4 == HIDWORD(v4) )
    {
      HIDWORD(v5) = &unk_28898CC;
    }
    else
      if ( !(_DWORD)v4 )
        sub_21E5884((int)"basic_string::_S_construct null not valid");
      v8 = sub_21E7E80(v5, 0);
      v9 = v8;
      HIDWORD(v5) = v8 + 3;
      if ( (_DWORD)v5 == 1 )
        *(_BYTE *)HIDWORD(v5) = *(_BYTE *)v4;
      else
        j___aeabi_memcpy_0(HIDWORD(v4) + 12, v4, v5);
      if ( v9 != &dword_28898C0 )
      {
        v9[2] = 0;
        *v9 = v5;
        *(_BYTE *)(HIDWORD(v5) + v5) = byte_26C67B8[0];
      }
    LODWORD(v5) = j_sscanf_0((const char *)HIDWORD(v5), "%lf", &v38);
    if ( (int *)(HIDWORD(v5) - 12) != &dword_28898C0 )
      v26 = HIDWORD(v5) - 4;
      if ( &pthread_create )
        __dmb();
        do
        {
          v27 = __ldrex((unsigned int *)LODWORD(_R2));
          HIDWORD(_R2) = v27 - 1;
        }
        while ( __strex(v27 - 1, (unsigned int *)LODWORD(_R2)) );
        v27 = *(_DWORD *)LODWORD(_R2);
        HIDWORD(_R2) = *(_DWORD *)LODWORD(_R2) - 1;
        *(_DWORD *)LODWORD(_R2) = HIDWORD(_R2);
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9((void *)(HIDWORD(v5) - 12));
  }
  else
    j___aeabi_memcpy_0((int)v39, v4, v5);
    v39[(_DWORD)v5] = BYTE4(v5);
    v7 = j_sscanf_0(v39, "%lf", &v38);
  if ( v7 == 1 )
    v10 = *(_QWORD *)(v2 + 24);
    if ( (_DWORD)v10 == HIDWORD(v10) )
      LODWORD(v10) = *(_DWORD *)(*(_DWORD *)(v2 + 36) - 4) + 512;
    __asm
      VLDR            D0, [SP,#0x78+var_50]
      VMOV            R2, R3, D0
    v15 = *(_DWORD *)(v10 - 4);
    j_Json::Value::Value((Json::Value *)&v34, SHIDWORD(v10), _R2);
    j_Json::Value::operator=(v15, (const Json::Value *)&v34);
    j_Json::Value::~Value((Json::Value *)&v34);
    result = 1;
    v17 = *(_QWORD *)(v3 + 4);
    if ( (_DWORD)v17 == HIDWORD(v17) )
      v20 = &unk_28898CC;
      if ( !(_DWORD)v17 )
      v18 = HIDWORD(v17) - v17;
      v19 = sub_21E7E80(HIDWORD(v17) - v17, 0);
      v20 = v19 + 3;
      if ( HIDWORD(v17) - (_DWORD)v17 == 1 )
        *v20 = *(_BYTE *)v17;
        j___aeabi_memcpy_0(HIDWORD(v17) + 12, v17, v18);
      if ( v19 != &dword_28898C0 )
        v19[2] = 0;
        *v19 = v18;
        v20[v18] = byte_26C67B8[0];
    v35 = v20;
    v21 = sub_21E82D8((const void **)&v35, 0, (unsigned int)"'", (_BYTE *)1);
    v36 = (char *)*v21;
    *v21 = &unk_28898CC;
    v22 = sub_21E7408((const void **)&v36, "' is not a number.", 0x12u);
    v37 = (char *)*v22;
    *v22 = &unk_28898CC;
    j_Json::Reader::addError(v2, (int *)&v37, v3, 0);
    v23 = v37 - 12;
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v37 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = v36 - 12;
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v36 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = v35 - 12;
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v35 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    result = 0;
  if ( _stack_chk_guard != v40 )
    j___stack_chk_fail_0(result);
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  *(_DWORD *)(v3 + 532) = v4;
  return 1;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  *(_DWORD *)(v3 + 468) = v4 + 2 * *(_DWORD *)(v3 + 452);
  *(_BYTE *)(v3 + 464) = 2;
  return 1;
}


  if ( Json::Value::isNull(v5) )
{
    v7 = -1;
  }
  else if ( Json::Value::isObject(v5) == 1 )
  {
    v8 = (Json::Value *)Json::Value::operator[]((int)v5, v6);
    if ( Json::Value::isInt(v8) || Json::Value::isUInt(v8) == 1 )
      v7 = Json::Value::asInt(v8, 0);
    else
      v7 = -1;
  else
  if ( v4 == v7 )
    *(_DWORD *)(v3 + 464) = -1;
  return 1;
}


  if ( Json::Value::isNull(a1) )
{
  if ( Json::Value::isString(v3) == 1 )
  {
    sub_21E94B4((void **)&v26, (const char *)&unk_257BC67);
    Json::Value::asString(&v27, (int)v3, &v26);
    std::insert_iterator<std::set<std::string,std::less<std::string>,std::allocator<std::string>>>::operator=(
      &v28,
      (const void **)&v27);
    v4 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v17 = (unsigned int *)(v27 - 4);
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
        j_j_j_j__ZdlPv_9(v4);
    }
    v5 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v26 - 4);
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    return 1;
  }
  if ( Json::Value::isArray(v3) != 1 )
    return 0;
  Json::Value::begin((Json::Value *)&v25, (int)v3);
  Json::Value::end((Json::Value *)&v24, (int)v3);
  if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v25, (const Json::ValueIteratorBase *)&v24) )
    while ( 1 )
      v14 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v25);
      if ( !Json::Value::isString(v14) )
        break;
      sub_21E94B4((void **)&v21, (const char *)&unk_257BC67);
      Json::Value::asString(&v22, (int)v14, &v21);
      std::insert_iterator<std::set<std::string,std::less<std::string>,std::allocator<std::string>>>::operator=(
        &v28,
        (const void **)&v22);
      v8 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v22 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      v9 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v21 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v25);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v25, (const Json::ValueIteratorBase *)&v24) )
        return 1;
    sub_21E94B4((void **)&v23, "Found non-string while parsing string array.");
    JsonUtil::ParseHandler::postMessage((int)&dword_27F3968, &v23, 2);
    v15 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v23 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
  return 1;
}


void __fastcall Json::StyledStreamWriter::writeValue(Json::StyledStreamWriter *this, const Json::Value *a2)
{
  Json::StyledStreamWriter *v2; // r10@1
  Json::Value *v3; // r5@1
  int v4; // r1@1
  __int64 v6; // r0@3
  __int64 v7; // r0@5
  signed int v8; // r8@5
  unsigned int v9; // r5@5
  int v10; // r7@5
  char *v11; // r2@5
  const char *v12; // r6@6
  unsigned __int64 v13; // r0@6
  signed int v14; // r2@6
  signed int v15; // r7@9
  __int64 v17; // r0@16
  __int64 v18; // r0@18
  unsigned int v19; // r7@18
  char *v20; // r6@18
  unsigned int v21; // r5@18
  const char *v22; // r4@19
  unsigned __int64 v23; // r0@19
  signed int v24; // r2@19
  signed int v25; // r5@22
  __int64 v26; // r0@27
  double v30; // r0@29
  __int64 v31; // r0@30
  const char *v32; // r0@32
  __int64 v33; // r0@33
  const char *v34; // r1@35
  __int64 v35; // r0@38
  char *v36; // r0@40
  char *v37; // r0@44
  char *v38; // r0@44
  void *v39; // r0@44
  const char **v40; // r7@45
  const Json::Value *v41; // r8@47
  char *v42; // r0@47
  char *v43; // r0@47
  int v44; // r11@47
  int *v45; // r9@47
  unsigned int *v46; // r1@50
  signed int v47; // r0@52
  char *v48; // r0@49
  char *v49; // r0@49
  void *v50; // r0@57
  unsigned int *v51; // r2@58
  signed int v52; // r1@60
  __int64 v53; // r0@69
  void *v54; // r0@72
  unsigned int *v55; // r2@73
  signed int v56; // r1@75
  const char **v57; // r4@113
  int v58; // r6@113
  unsigned int *v59; // r2@115
  signed int v60; // r1@117
  int *v61; // r0@123
  unsigned int *v62; // r2@130
  signed int v63; // r1@132
  int v64; // [sp+Ch] [bp-7Ch]@49
  int v65; // [sp+10h] [bp-78h]@47
  int v66; // [sp+18h] [bp-70h]@44
  int v67; // [sp+20h] [bp-68h]@68
  int v68; // [sp+24h] [bp-64h]@37
  int v69; // [sp+28h] [bp-60h]@32
  int v70; // [sp+2Ch] [bp-5Ch]@29
  int v71; // [sp+30h] [bp-58h]@26
  int v72; // [sp+34h] [bp-54h]@15
  int v73; // [sp+3Ch] [bp-4Ch]@2
  char v74; // [sp+40h] [bp-48h]@44
  const char **v75; // [sp+44h] [bp-44h]@43
  const char **v76; // [sp+48h] [bp-40h]@43
  char v77; // [sp+5Bh] [bp-2Dh]@5
  char v78; // [sp+5Ch] [bp-2Ch]@5
  RakNet *v79; // [sp+60h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v79 = _stack_chk_guard;
  switch ( j_Json::Value::type(a2) )
  {
    case 0:
      sub_21E94B4((void **)&v73, "null");
      if ( *((_BYTE *)v2 + 28) )
      {
        v6 = *(_QWORD *)((char *)v2 + 4);
        if ( (_DWORD)v6 == HIDWORD(v6) )
        {
          j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)v2,
            &v73);
        }
        else
          sub_21E8AF4((int *)v6, &v73);
          *((_DWORD *)v2 + 1) += 4;
      }
      else
        sub_21CBF38(*((char **)v2 + 3), v73, *(_DWORD *)(v73 - 12));
      v54 = (void *)(v73 - 12);
      if ( (int *)(v73 - 12) == &dword_28898C0 )
        goto def_1B31D0A;
      v55 = (unsigned int *)(v73 - 4);
      if ( !&pthread_create )
        goto LABEL_107;
      __dmb();
      do
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      goto LABEL_108;
    case 1:
      v7 = j_Json::Value::asLargestInt(v3);
      v8 = HIDWORD(v7);
      v78 = 0;
      v9 = (v7 + (SHIDWORD(v7) >> 31)) ^ (SHIDWORD(v7) >> 31);
      v10 = ((v8 >> 31) + __CFADD__((_DWORD)v7, SHIDWORD(v7) >> 31) + v8) ^ (v8 >> 31);
      v11 = &v77;
        v12 = v11;
        *v11 = __PAIR__((unsigned int)v10, v9) % 0xA | 0x30;
        v13 = __PAIR__((unsigned int)v10, v9) / 0xA;
        v14 = 0;
        if ( v9 > 9 )
          v14 = 1;
        if ( v10 )
          v15 = 1;
          v15 = v14;
        v11 = (char *)(v12 - 1);
        v9 = v13;
        _ZF = v15 == 0;
        v10 = HIDWORD(v13);
      while ( !_ZF );
      if ( v8 <= -1 )
        *((_BYTE *)v12-- - 1) = 45;
      sub_21E94B4((void **)&v72, v12);
        v17 = *(_QWORD *)((char *)v2 + 4);
        if ( (_DWORD)v17 == HIDWORD(v17) )
            &v72);
          sub_21E8AF4((int *)v17, &v72);
        sub_21CBF38(*((char **)v2 + 3), v72, *(_DWORD *)(v72 - 12));
      v54 = (void *)(v72 - 12);
      if ( (int *)(v72 - 12) == &dword_28898C0 )
      v55 = (unsigned int *)(v72 - 4);
    case 2:
      v18 = j_Json::Value::asLargestUInt(v3);
      v19 = v18;
      v20 = &v77;
      v21 = HIDWORD(v18);
        v22 = v20;
        *v20-- = __PAIR__(v21, v19) % 0xA | 0x30;
        v23 = __PAIR__(v21, v19) / 0xA;
        v24 = 0;
        if ( v19 > 9 )
          v24 = 1;
        if ( v21 )
          v25 = 1;
          v25 = v24;
        v19 = v23;
        _ZF = v25 == 0;
        v21 = HIDWORD(v23);
      sub_21E94B4((void **)&v71, v22);
        v26 = *(_QWORD *)((char *)v2 + 4);
        if ( (_DWORD)v26 == HIDWORD(v26) )
            &v71);
          sub_21E8AF4((int *)v26, &v71);
        sub_21CBF38(*((char **)v2 + 3), v71, *(_DWORD *)(v71 - 12));
      v54 = (void *)(v71 - 12);
      if ( (int *)(v71 - 12) == &dword_28898C0 )
      v55 = (unsigned int *)(v71 - 4);
    case 3:
      __asm
        VLDR            D0, =0.0; jumptable 01B31D0A case 3
        VMOV            R2, R3, D0
      LODWORD(v30) = j_Json::Value::asDouble(v3, v4, _R2);
      j_Json::valueToString((Json *)&v70, SHIDWORD(v30), v30);
        v31 = *(_QWORD *)((char *)v2 + 4);
        if ( (_DWORD)v31 == HIDWORD(v31) )
            &v70);
          sub_21E8AF4((int *)v31, &v70);
        sub_21CBF38(*((char **)v2 + 3), v70, *(_DWORD *)(v70 - 12));
      v54 = (void *)(v70 - 12);
      if ( (int *)(v70 - 12) == &dword_28898C0 )
      v55 = (unsigned int *)(v70 - 4);
    case 4:
      v32 = (const char *)j_Json::Value::asCString(v3);
      j_Json::valueToQuotedString((Json *)&v69, v32);
        v33 = *(_QWORD *)((char *)v2 + 4);
        if ( (_DWORD)v33 == HIDWORD(v33) )
            &v69);
          sub_21E8AF4((int *)v33, &v69);
        sub_21CBF38(*((char **)v2 + 3), v69, *(_DWORD *)(v69 - 12));
      v54 = (void *)(v69 - 12);
      if ( (int *)(v69 - 12) == &dword_28898C0 )
      v55 = (unsigned int *)(v69 - 4);
    case 5:
      _ZF = j_Json::Value::asBool(v3, 0) == 0;
      v34 = "true";
      if ( _ZF )
        v34 = "false";
      sub_21E94B4((void **)&v68, v34);
        v35 = *(_QWORD *)((char *)v2 + 4);
        if ( (_DWORD)v35 == HIDWORD(v35) )
            &v68);
          sub_21E8AF4((int *)v35, &v68);
        sub_21CBF38(*((char **)v2 + 3), v68, *(_DWORD *)(v68 - 12));
      v54 = (void *)(v68 - 12);
      if ( (int *)(v68 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v68 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
LABEL_107:
          v56 = (*v55)--;
LABEL_108:
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v54);
      goto def_1B31D0A;
    case 6:
      v36 = (char *)(_stack_chk_guard - v79);
      if ( _stack_chk_guard != v79 )
        goto LABEL_129;
      j_j_j__ZN4Json18StyledStreamWriter15writeArrayValueERKNS_5ValueE(v2, v3);
      return;
    case 7:
      j_Json::Value::getMemberNames((Json::Value *)&v75, (int)v3);
      if ( v75 == v76 )
        sub_21E94B4((void **)&v67, (const char *)&unk_25DA2B7);
        if ( *((_BYTE *)v2 + 28) )
          v53 = *(_QWORD *)((char *)v2 + 4);
          if ( (_DWORD)v53 == HIDWORD(v53) )
          {
            j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
              (unsigned __int64 *)v2,
              &v67);
          }
          else
            sub_21E8AF4((int *)v53, &v67);
            *((_DWORD *)v2 + 1) += 4;
          sub_21CBF38(*((char **)v2 + 3), v67, *(_DWORD *)(v67 - 12));
        v50 = (void *)(v67 - 12);
        if ( (int *)(v67 - 12) == &dword_28898C0 )
          goto LABEL_113;
        v51 = (unsigned int *)(v67 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
LABEL_139:
          if ( v52 <= 0 )
            j_j_j_j__ZdlPv_9(v50);
LABEL_138:
        v52 = (*v51)--;
        goto LABEL_139;
      sub_21E94B4((void **)&v66, "{");
      v37 = (char *)*((_DWORD *)v2 + 3);
      v74 = 10;
      v38 = sub_21CBF38(v37, (int)&v74, 1);
      sub_21CBF38(v38, *((_DWORD *)v2 + 4), *(_DWORD *)(*((_DWORD *)v2 + 4) - 12));
      sub_21CBF38(*((char **)v2 + 3), v66, *(_DWORD *)(v66 - 12));
      v39 = (void *)(v66 - 12);
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v62 = (unsigned int *)(v66 - 4);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          v63 = (*v62)--;
        if ( v63 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      sub_21E72F0((const void **)v2 + 4, (const void **)v2 + 6);
      v40 = v75;
      while ( 1 )
        v41 = (const Json::Value *)j_Json::Value::operator[]((int)v3, v40);
        j_Json::StyledStreamWriter::writeCommentBeforeValue(v2, v41);
        j_Json::valueToQuotedString((Json *)&v65, *v40);
        v42 = (char *)*((_DWORD *)v2 + 3);
        v74 = 10;
        v43 = sub_21CBF38(v42, (int)&v74, 1);
        sub_21CBF38(v43, *((_DWORD *)v2 + 4), *(_DWORD *)(*((_DWORD *)v2 + 4) - 12));
        v44 = v65;
        v45 = (int *)(v65 - 12);
        sub_21CBF38(*((char **)v2 + 3), v65, *(_DWORD *)(v65 - 12));
        if ( v45 != &dword_28898C0 )
          v46 = (unsigned int *)(v44 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v45);
        sub_21CBF38(*((char **)v2 + 3), (int)" : ", 3);
        j_Json::StyledStreamWriter::writeValue(v2, v41);
        ++v40;
        if ( v40 == v76 )
          break;
        sub_21CBF38(*((char **)v2 + 3), (int)",", 1);
        j_Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(v2, v41);
      j_Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(v2, v41);
      sub_21E849C((char *)v2 + 16, *(_DWORD *)(*((_DWORD *)v2 + 4) - 12) - *(_DWORD *)(*((_DWORD *)v2 + 6) - 12), 0);
      sub_21E94B4((void **)&v64, "}");
      v48 = (char *)*((_DWORD *)v2 + 3);
      v49 = sub_21CBF38(v48, (int)&v74, 1);
      sub_21CBF38(v49, *((_DWORD *)v2 + 4), *(_DWORD *)(*((_DWORD *)v2 + 4) - 12));
      sub_21CBF38(*((char **)v2 + 3), v64, *(_DWORD *)(v64 - 12));
      v50 = (void *)(v64 - 12);
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v64 - 4);
          goto LABEL_139;
        goto LABEL_138;
LABEL_113:
      v58 = (int)v76;
      v57 = v75;
      if ( v75 != v76 )
        do
          v61 = (int *)(*v57 - 12);
          if ( v61 != &dword_28898C0 )
            v59 = (unsigned int *)(*v57 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v60 = __ldrex(v59);
              while ( __strex(v60 - 1, v59) );
            }
            else
              v60 = (*v59)--;
            if ( v60 <= 0 )
              j_j_j_j__ZdlPv_9(v61);
          ++v57;
        while ( v57 != (const char **)v58 );
        v57 = v75;
      if ( v57 )
        j_operator delete(v57);
def_1B31D0A:
LABEL_129:
        j___stack_chk_fail_0((int)v36);
    default:
  }
}


      if ( Json::Value::isInt(v8) || (result = Json::Value::isUInt(v8), result == 1) )
{
        v9 = 0;
        result = Json::Value::asInt(v8, 0);
        if ( result >= 0 )
        {
          v10 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(
                  *(SkinPackCollectionModel **)(v6 + 432),
                  result);
          if ( SkinPackModel::getNumSkins((SkinPackModel *)v10) > 5 )
            v9 = 1;
          v11 = v9;
          result = UIPropertyBag::set<bool>(v3, *((_DWORD *)*v5 - 3), *v5, &v11);
        }
      }
    }
  }
  return result;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#item_name"), Json::Value::isString(v5) != 1) )
  {
    v14 = v13;
    v13 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v14, (int)&v15, (int)v5);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 460),
    (int *)&v14);
  v6 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  return 1;
}


int __fastcall Json::Value::resize(__int64 this)
{
  __int64 v1; // r4@1
  int v2; // r6@1
  _DWORD *v3; // r0@2
  Json::Value *v4; // r0@2
  __int64 v5; // kr00_8@2
  int v6; // r7@2
  __int16 v7; // r1@2
  __int16 v8; // r6@2
  unsigned int v9; // r7@6
  int v10; // r4@14
  int v11; // r6@16
  int v13; // [sp+0h] [bp-48h]@16
  int v14; // [sp+4h] [bp-44h]@16
  _DWORD *v15; // [sp+8h] [bp-40h]@2
  __int16 v16; // [sp+10h] [bp-38h]@2
  int v17; // [sp+14h] [bp-34h]@2
  __int64 v18; // [sp+18h] [bp-30h]@2
  __int16 v19; // [sp+20h] [bp-28h]@2

  v1 = this;
  v2 = *(_BYTE *)(this + 8);
  if ( !*(_BYTE *)(this + 8) )
  {
    v16 = 6;
    v17 = 0;
    v3 = j_operator new(0x18u);
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 0;
    v3[5] = 0;
    v3[1] = 0;
    v3[3] = v3 + 1;
    v3[4] = v3 + 1;
    v15 = v3;
    v4 = j_Json::Value::Value((Json::Value *)&v18, (const Json::Value *)&v15);
    v5 = *(_QWORD *)v1;
    v6 = HIDWORD(v18);
    v7 = v19;
    v8 = *(_WORD *)(v1 + 8);
    *(_DWORD *)v1 = v18;
    *(_DWORD *)(v1 + 4) = v6;
    v18 = v5;
    *(_WORD *)(v1 + 8) = v8 & 0xFE00 | (unsigned __int8)v7 | v7 & 0x100;
    v19 = v7 & 0xFE00 | v8 & 0x1FF;
    j_Json::Value::~Value(v4);
    LODWORD(this) = j_Json::Value::~Value((Json::Value *)&v15);
    v2 = *(_BYTE *)(v1 + 8);
  }
  if ( v2 == 7 )
    LODWORD(this) = *(_DWORD *)v1;
    v9 = *(_DWORD *)(*(_DWORD *)v1 + 20);
  else if ( v2 == 6 )
    if ( *(_DWORD *)(*(_DWORD *)v1 + 20) )
    {
      LODWORD(this) = *(_DWORD *)(sub_21D4894(this + 4) + 20);
      v9 = this + 1;
    }
    else
      v9 = 0;
  else
    v9 = 0;
  if ( HIDWORD(v1) )
    if ( v9 >= HIDWORD(v1) )
      if ( v9 > HIDWORD(v1) )
      {
        do
        {
          v11 = *(_DWORD *)v1;
          v13 = 0;
          v14 = HIDWORD(v1);
          j_std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::equal_range(
            (unsigned int)&v18,
            v11,
            (__int64 *)&v13);
          LODWORD(this) = j_std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_erase_aux(
                            v11,
                            v18,
                            SHIDWORD(v18));
          ++HIDWORD(v1);
        }
        while ( v9 != HIDWORD(v1) );
      }
      LODWORD(this) = j_Json::Value::operator[](v1, HIDWORD(v1) - 1);
    LODWORD(this) = v2 & 0xFE;
    if ( (_DWORD)this == 6 )
      v10 = *(_DWORD *)v1;
      j_std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_erase(
        v10,
        *(_DWORD *)(v10 + 8));
      this = (unsigned int)(v10 + 4);
      *(_DWORD *)(v10 + 8) = 0;
      *(_DWORD *)(v10 + 12) = v10 + 4;
      *(_QWORD *)(v10 + 16) = this;
  return this;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = 0;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
    {
      v4 = 0;
      v6 = Json::Value::asInt(v5, 0);
      v7 = v6;
      if ( v6 >= 0 )
      {
        v8 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
               (unsigned __int64 *)(v3 + 640),
               (int **)(*(_DWORD *)(v3 + 788) + 4 * v6));
        v4 = 0;
        if ( v8 )
        {
          v9 = *(_QWORD *)(v3 + 488);
          v10 = *(_DWORD *)(v3 + 380);
          v32 = *(_QWORD *)(v3 + 488);
          v31 = 0;
          v11 = (int **)(v8 + 12);
          MinecraftScreenModel::removeFromRealmsBlocklist(v10, &v32, (const void **)(v8 + 12), (int)&v30);
          if ( v31 )
            v31();
          v12 = std::_Hashtable<std::string,std::pair<std::string const,RealmPlayer>,std::allocator<std::pair<std::string const,RealmPlayer>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                  (unsigned __int64 *)(v3 + 640),
                  v11);
          if ( v12 && RealmsWhitelistScreenController::_isFriend(v3, (const void **)(v12 + 12)) == 1 )
          {
            *(_BYTE *)(v12 + 29) = 0;
            *(_DWORD *)(v12 + 32) = 1;
            *(_BYTE *)(v12 + 42) = 0;
            *(_BYTE *)(v12 + 40) = 0;
            *(_DWORD *)(v12 + 36) = 3;
            *(_BYTE *)(v12 + 43) = 0;
            v13 = *(_QWORD *)(v3 + 756);
            if ( (_DWORD)v13 == HIDWORD(v13) )
            {
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
                (unsigned __int64 *)(v3 + 752),
                (int *)(v12 + 12));
            }
            else
              sub_21E8AF4((int *)v13, (int *)(v12 + 12));
              *(_DWORD *)(v3 + 756) += 4;
          }
          v14 = *(_QWORD *)(v3 + 788) >> 32;
          v15 = *(_QWORD *)(v3 + 788) + 4 * v7;
          v16 = v15 + 4;
          if ( v15 + 4 != v14 )
            v17 = v14 - v16;
            v16 = *(_QWORD *)(v3 + 788) >> 32;
            if ( v17 >= 1 )
              v18 = (v17 >> 2) + 1;
              do
              {
                v19 = v15 + 4;
                xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                  (int *)v15,
                  (int *)(v15 + 4));
                --v18;
                v15 = v19;
              }
              while ( v18 > 1 );
              v16 = *(_DWORD *)(v3 + 792);
          *(_DWORD *)(v3 + 792) = v16 - 4;
          v20 = *(_DWORD *)(v16 - 4);
          v21 = (void *)(v20 - 12);
          if ( (int *)(v20 - 12) != &dword_28898C0 )
            v28 = (unsigned int *)(v20 - 4);
            if ( &pthread_create )
              __dmb();
                v29 = __ldrex(v28);
              while ( __strex(v29 - 1, v28) );
              v29 = (*v28)--;
            if ( v29 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
          *(_QWORD *)&v22 = *(_QWORD *)(v3 + 752);
          if ( (int *)v22 != v23 )
            sub_1224AB8(v22, v23, 2 * (31 - __clz(((signed int)v23 - v22) >> 2)), v3);
            if ( (signed int)v23 - v22 < 65 )
              sub_1225270(v22, (int **)v23, v3);
              v24 = (int *)(v22 + 64);
              sub_1225270(v22, (int **)(v22 + 64), v3);
              if ( (int *)(v22 + 64) != v23 )
                v25 = (int)(v23 - 16);
                do
                {
                  sub_12253A4(v24, v3);
                  v24 = (int *)(v22 + 68);
                  v26 = v25 == v22 + 4;
                  v22 += 4;
                }
                while ( !v26 );
          v4 = 1;
          RealmsWhitelistScreenController::_updatePlayerlistModel(v3, (const void **)(v3 + 632), 0, 1, v30);
          RealmsWhitelistScreenController::_updatePlayerlistModel(v3, (const void **)(v3 + 628), 1, 1, v30);
          RealmsWhitelistScreenController::_updatePlayerlistModel(v3, (const void **)(v3 + 624), 2, 1, v30);
          RealmsWhitelistScreenController::_updatePlayerlistModel(v3, (const void **)(v3 + 636), 3, 1, v30);
        }
      }
    }
    else
  else
  return v4;
}


int __fastcall Json::Reader::readNumber(int result)
{
  _BYTE *v1; // r1@1 OVERLAPPED
  _BYTE *v2; // r2@1 OVERLAPPED
  int v3; // r3@2

  for ( *(_QWORD *)&v1 = *(_QWORD *)(result + 88); v1 != v2; *(_DWORD *)(result + 92) = ++v2 )
  {
    v3 = *v2;
    if ( (unsigned __int8)(v3 - 48) >= 0xAu
      && ((unsigned int)(v3 - 43) > 0x1A || !((1 << (v3 - 43)) & 0x400000D))
      && v3 != 101 )
    {
      break;
    }
  }
  return result;
}


__int64 __fastcall Json::Value::asLargestInt(Json::Value *this)
{
  char v2; // t1@1
  __int64 result; // r0@1

  _R2 = this;
  v2 = *((_BYTE *)this + 8);
  result = 0LL;
  switch ( 0 )
  {
    case 1:
    case 2:
      result = *(_QWORD *)_R2;
      break;
    case 3:
      __asm
      {
        VLDR            D0, [R2]; jumptable 01B2D8EA case 3
        VCVTR.S32.F64   S0, D0
        VMOV            R0, S0
      }
      result = (signed int)result;
    case 5:
      LODWORD(result) = *(_BYTE *)_R2;
      goto def_1B2D8EA;
    case 4:
      return result;
    default:
def_1B2D8EA:
      HIDWORD(result) = 0;
  }
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v36 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  v14 = StoreCatalogItemModel::isValid((StoreCatalogItemModel *)&v36);
  v15 = *v6;
  v16 = *((_DWORD *)v15 - 3);
  if ( v14 == 1 )
    v17 = *(_DWORD *)(v7 + 424);
    v18 = (int *)StoreCatalogItemModel::getProductId((StoreCatalogItemModel *)&v36);
    sub_21E8AF4(&v29, v18);
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v30 = (char *)operator new(4u);
    v32 = v30 + 4;
    v31 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v29,
                    (int)&v30,
                    (int)v30);
    v19 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(v17, (unsigned __int64 *)&v30);
    v33 = DlcBatchModel::isDownloadActive(v19);
    UIPropertyBag::set<bool>(v5, v16, v15, &v33);
    v21 = (int)v31;
    v20 = v30;
    if ( v30 != v31 )
    {
      do
      {
        v24 = (int *)(*(_DWORD *)v20 - 12);
        if ( v24 != &dword_28898C0 )
        {
          v22 = (unsigned int *)(*(_DWORD *)v20 - 4);
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
            j_j_j_j__ZdlPv_9(v24);
        }
        v20 += 4;
      }
      while ( v20 != (char *)v21 );
      v20 = v30;
    }
    if ( v20 )
      operator delete(v20);
    v25 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v28 = 0;
    UIPropertyBag::set<bool>(v5, v16, v15, &v28);
}


int __fastcall Json::StyledWriter::normalizeEOL(const void **a1, int *a2)
{
  const void **v2; // r4@1
  int *v3; // r5@1
  int result; // r0@1
  int v5; // r1@1
  int v6; // r11@2
  int v7; // r6@3
  int v8; // r10@3
  _DWORD *v9; // r1@4
  int v10; // r2@4
  unsigned int v11; // r5@4
  _DWORD *v12; // r0@10
  int v13; // r1@10 OVERLAPPED
  unsigned int v14; // r2@10
  _DWORD *v15; // r0@14

  v2 = a1;
  v3 = a2;
  *a1 = &unk_28898CC;
  sub_21E6FCC(a1, *(_DWORD *)(*a2 - 12));
  result = *v3;
  v5 = *(_DWORD *)(*v3 - 12);
  if ( v5 )
  {
    v6 = result + v5;
    do
    {
      v7 = result + 1;
      v8 = *(_BYTE *)result;
      if ( v8 == 13 )
      {
        v9 = *v2;
        v10 = *(_QWORD *)((char *)*v2 - 12);
        v11 = v10 + 1;
        if ( *(_BYTE *)(result + 1) == 10 )
          v7 = result + 2;
        if ( v11 > (unsigned int)(*(_QWORD *)((char *)*v2 - 12) >> 32) || *(v9 - 1) >= 1 )
        {
          sub_21E6FCC(v2, v10 + 1);
          v9 = *v2;
          v10 = *((_DWORD *)*v2 - 3);
        }
        *((_BYTE *)v9 + v10) = 10;
      }
      else
        v12 = *v2;
        *(_QWORD *)&v13 = *(_QWORD *)((char *)*v2 - 12);
        v11 = v13 + 1;
        if ( v13 + 1 > v14 || *(v12 - 1) >= 1 )
          sub_21E6FCC(v2, v13 + 1);
          v12 = *v2;
          v13 = *((_DWORD *)*v2 - 3);
        *((_BYTE *)v12 + v13) = v8;
      v15 = *v2;
      if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
        *(v15 - 1) = 0;
        *(v15 - 3) = v11;
        *((_BYTE *)v15 + v11) = byte_26C67B8[0];
      result = v7;
    }
    while ( v7 != v6 );
  }
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  MinecraftScreenController::_getWeakPtrToThis<PlayScreenController>((int)&v22, v3);
  v6 = *(_QWORD *)&v22;
  v7 = *(_DWORD *)(v3 + 432);
  if ( v23 )
    v8 = (unsigned int *)(v23 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
      ++*v8;
  v21 = 0;
  v10 = operator new(8u);
  *v10 = v6;
  if ( HIDWORD(v6) )
    v11 = (unsigned int *)(HIDWORD(v6) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  LODWORD(v13) = sub_11EC108;
  v20 = v10;
  HIDWORD(v13) = sub_11EBFD0;
  *(_QWORD *)&v21 = v13;
  PlayScreenModel::navigateToEditWorldScreen(v7, v4, (int)&v20);
  if ( v21 )
    v21();
    v14 = (unsigned int *)(HIDWORD(v6) + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 12))(HIDWORD(v6));
  v16 = v23;
    v17 = (unsigned int *)(v23 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      (*(void (**)(void))(*(_DWORD *)v16 + 12))();
  return 8;
}


const void **__fastcall Json::StyledWriter::writeCommentAfterValueOnSameLine(Json::StyledWriter *this, const Json::Value *a2)
{
  const Json::Value *v2; // r4@1
  Json::StyledWriter *v3; // r5@1
  const void **v4; // r0@2
  char *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  const void **result; // r0@5
  const void **v9; // r5@6
  void *v10; // r0@6
  void *v11; // r0@7
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  int v22; // [sp+4h] [bp-2Ch]@6
  int v23; // [sp+8h] [bp-28h]@6
  int v24; // [sp+Ch] [bp-24h]@2
  int v25; // [sp+10h] [bp-20h]@2
  char *v26; // [sp+14h] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  if ( j_Json::Value::hasComment((int)a2, 1) == 1 )
  {
    j_Json::Value::getComment((void **)&v24, (int)v2, 1);
    j_Json::StyledWriter::normalizeEOL((const void **)&v25, &v24);
    v4 = sub_21E82D8((const void **)&v25, 0, (unsigned int)" ", (_BYTE *)1);
    v26 = (char *)*v4;
    *v4 = &unk_28898CC;
    sub_21E72F0((const void **)v3 + 4, (const void **)&v26);
    v5 = v26 - 12;
    if ( (int *)(v26 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
    v6 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v25 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v24 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
  }
  result = (const void **)j_Json::Value::hasComment((int)v2, 2);
  if ( result == (const void **)1 )
    v9 = (const void **)((char *)v3 + 16);
    sub_21E7408(v9, "\n", 1u);
    j_Json::Value::getComment((void **)&v22, (int)v2, 2);
    j_Json::StyledWriter::normalizeEOL((const void **)&v23, &v22);
    sub_21E72F0(v9, (const void **)&v23);
    v10 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v23 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v22 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    result = sub_21E7408(v9, "\n", 1u);
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  v6 = PlayScreenModel::getLocalWorldAtIndex(*(PlayScreenModel **)(v3 + 432), v4);
  if ( v6 )
    LocalWorldInfo::LocalWorldInfo((int)&v19, v6);
    LocalWorldInfo::LocalWorldInfo((int)&v18, (int)&v19);
    LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v19);
    LocalWorldInfo::LocalWorldInfo((int)&v18);
  if ( WorldInfo::isValid((WorldInfo *)&v18) )
    PlayScreenController::_startLocalWorld((PlayScreenController *)v3, (LocalWorldInfo *)&v18);
    v7 = 0;
    v8 = *(_DWORD *)(v3 + 432);
    sub_21E94B4((void **)&v17, "disconnectionScreen.internalError.cantFindLocal");
    sub_21E94B4((void **)&v16, "disconnectionScreen.internalError.cantConnect");
    MinecraftScreenModel::navigateToDisconnectScreen(v8, &v17, &v16);
    v9 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v16 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
    v10 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v17 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v7 = 8;
  LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v18);
  return v7;
}


  if ( Json::Value::isNull(v4) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, v5);
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  v8 = (Entity *)ClientInstanceScreenModel::getEntity(*(_DWORD *)(v3 + 424), (unsigned __int64 *)(v3 + 440));
  if ( v8 )
    v9 = (NpcComponent *)Entity::getNpcComponent(v8);
    if ( v9 )
      NpcComponent::removeActionAt(v9, v6);
  return 1;
}


int __fastcall Json::Value::begin(int result, int a2)
{
  int v2; // r1@2

  if ( (*(_WORD *)(a2 + 8) & 0xFE) == 6 && (v2 = *(_DWORD *)a2) != 0 )
  {
    *(_DWORD *)result = *(_DWORD *)(v2 + 12);
    *(_BYTE *)(result + 4) = 0;
  }
  else
    *(_DWORD *)result = 0;
    *(_BYTE *)(result + 4) = 1;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  v6 = (WorldTemplateInfo *)PlayScreenModel::getWorldTemplateAtIndex(*(PlayScreenModel **)(v3 + 432), v4);
  if ( v6 )
    v7 = (PackManifest *)WorldTemplateInfo::getPackManifest(v6);
    if ( PackManifest::isPlatformLocked(v7) == 1 )
    {
      MinecraftScreenController::_getWeakPtrToThis<WorldTemplatesScreenController>((int)&v27, v3);
      v8 = *(_QWORD *)&v27;
      if ( v28 )
      {
        v9 = (unsigned int *)(v28 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 + 1, v9) );
        }
        else
          ++*v9;
      }
      v25 = 0;
      v11 = operator new(0xCu);
      *(_QWORD *)v11 = v8;
      if ( HIDWORD(v8) )
        v12 = (unsigned int *)(HIDWORD(v8) + 8);
            v13 = __ldrex(v12);
          while ( __strex(v13 + 1, v12) );
          ++*v12;
        v11[2] = v4;
        v24 = v11;
        v15 = (int *)&v26;
        v25 = (void (*)(void))sub_12A0C88;
        v26 = sub_12A0B34;
            v16 = __ldrex(v12);
          while ( __strex(v16 - 1, v12) );
          v16 = (*v12)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 12))(HIDWORD(v8));
      else
        HIDWORD(v14) = sub_12A0B34;
        LODWORD(v14) = sub_12A0C88;
        *(_QWORD *)&v25 = v14;
      v22 = 0;
      if ( v25 )
        ((void (__fastcall *)(char *, _DWORD **, signed int))v25)(&v21, &v24, 2);
        v23 = *v15;
        v22 = v25;
      MainMenuScreenController::confirmationNoMultiplayerDialog(v3, (int)&v21);
      if ( v22 )
        v22();
        v25();
      v17 = v28;
        v18 = (unsigned int *)(v28 + 8);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (**)(void))(*(_DWORD *)v17 + 12))();
    }
      PlayScreenModel::handleWorldTemplateClicked(*(PlayScreenModel **)(v3 + 432), v4);
  return 8;
}


  if ( !Json::Value::isNull((Json::Value *)(v4 + 8)) && Json::Value::isObject((Json::Value *)(v4 + 8)) == 1 )
{
    v8 = (Json::Value *)Json::Value::operator[](v4 + 8, v7);
    if ( (Json::Value::isInt(v8) || Json::Value::isUInt(v8) == 1) && !Json::Value::asInt(v8, 0) )
    {
      gsl::basic_string_span<char const,-1>::remove_z<27u>((int)&v19, (int)"#category_collection_index");
      v9 = v20;
      if ( !Json::Value::isNull((Json::Value *)(v4 + 8)) && Json::Value::isObject((Json::Value *)(v4 + 8)) == 1 )
      {
        v10 = (Json::Value *)Json::Value::operator[](v4 + 8, v9);
        if ( Json::Value::isInt(v10) || Json::Value::isUInt(v10) == 1 )
        {
          LODWORD(v11) = Json::Value::asInt(v10, 0);
          if ( (signed int)v11 >= 0
            && (signed int)v11 < (signed int)((*(_QWORD *)(v6 + 444) >> 32) - *(_QWORD *)(v6 + 444)) >> 3 )
          {
            Util::format((Util *)&v18, "offer_grid_item_%d_0", v11);
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              &v23,
              &v18);
            v12 = (void *)(v18 - 12);
            if ( (int *)(v18 - 12) != &dword_28898C0 )
            {
              v16 = (unsigned int *)(v18 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v17 = __ldrex(v16);
                while ( __strex(v17 - 1, v16) );
              }
              else
                v17 = (*v16)--;
              if ( v17 <= 0 )
                j_j_j_j__ZdlPv_9(v12);
            }
          }
        }
      }
    }
  }
  UIPropertyBag::set<std::string>(v4, *((_DWORD *)*v5 - 3), *v5, (const void **)&v23);
  v13 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


  if ( Json::Value::isNull(a2) || Json::Value::isArray(v5) != 1 || Json::Value::size(v5) != 4 )
{
    result = HIDWORD(a5);
    *(_DWORD *)v6 = v8;
    *(_DWORD *)(v6 + 4) = v7;
    *(_QWORD *)(v6 + 8) = a5;
  }
  else
  {
    v9 = (Json::Value *)Json::Value::operator[]((int)v5, 0);
    v10 = Json::Value::asFloat(v9, 0.0);
    v11 = (Json::Value *)Json::Value::operator[]((int)v5, 1u);
    v12 = Json::Value::asFloat(v11, 0.0);
    v13 = (Json::Value *)Json::Value::operator[]((int)v5, 2u);
    v14 = Json::Value::asFloat(v13, 0.0);
    v15 = (Json::Value *)Json::Value::operator[]((int)v5, 3u);
    result = Json::Value::asFloat(v15, 0.0);
    *(_DWORD *)v6 = v10;
    *(_DWORD *)(v6 + 4) = v12;
    *(_DWORD *)(v6 + 8) = v14;
    *(_DWORD *)(v6 + 12) = result;
  return result;
}


  if ( Json::Value::isString((Json::Value *)&v12) == 1 )
{
    sub_21E94B4((void **)&v11, (const char *)&unk_257BC67);
    Json::Value::asString(v6, (int)&v12, &v11);
    v7 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v11 - 4);
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
  else
  {
    sub_21E8AF4(v6, (int *)&Util::EMPTY_STRING);
  return Json::Value::~Value((Json::Value *)&v12);
}


  if ( Json::Value::isNull(v4) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, v5);
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  gsl::basic_string_span<char const,-1>::remove_z<24u>((int)&v28, (int)"#skins_collection_index");
  v8 = v29;
  if ( Json::Value::isNull(v4) )
    v9 = -1;
    v10 = (Json::Value *)Json::Value::operator[]((int)v4, v8);
    if ( Json::Value::isInt(v10) || Json::Value::isUInt(v10) == 1 )
      v9 = Json::Value::asInt(v10, 0);
      v9 = -1;
  v11 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(*(SkinPackCollectionModel **)(v3 + 432), v6);
  if ( v9 >= SkinPackModel::getNumSkins((SkinPackModel *)v11) )
    result = 0;
    v12 = SkinPackModel::getPackId((SkinPackModel *)v11);
    v13 = SkinPackModel::getFirstVisibleSkinIndex((SkinPackModel *)v11);
    v14 = *(_DWORD *)v12;
    v15 = *((_DWORD *)v12 + 1);
    v16 = *((_DWORD *)v12 + 2);
    v17 = *((_DWORD *)v12 + 3);
    v22 = v14;
    v23 = v15;
    v24 = v16;
    v25 = v17;
    v26 = v13 + v9;
    v27 = (char *)&unk_28898CC;
    SkinPickerScreenController::_setPreviewSkin(v3, (int)&v22);
    v18 = v27 - 12;
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    }
    result = 1;
  return result;
}


signed int __fastcall Json::Features::all(Json::Features *this)
{
  return 1;
}


unsigned int __fastcall Json::Value::isIntegral(Json::Value *this)
{
  unsigned __int16 v1; // r0@1
  unsigned int result; // r0@2

  v1 = *((_BYTE *)this + 8) - 1;
  if ( v1 <= 4u )
    result = (0x13u >> (v1 & 0x1F)) & 1;
  else
    result = 0;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  RemixPreviewScreenController::_removeTag(v3, v4);
  return 1;
}


int __fastcall Json::StyledStreamWriter::normalizeEOL(const void **a1, int *a2)
{
  const void **v2; // r4@1
  int *v3; // r5@1
  int result; // r0@1
  int v5; // r1@1
  int v6; // r11@2
  int v7; // r6@3
  int v8; // r10@3
  _DWORD *v9; // r1@4
  int v10; // r2@4
  unsigned int v11; // r5@4
  _DWORD *v12; // r0@10
  int v13; // r1@10 OVERLAPPED
  unsigned int v14; // r2@10
  _DWORD *v15; // r0@14

  v2 = a1;
  v3 = a2;
  *a1 = &unk_28898CC;
  sub_21E6FCC(a1, *(_DWORD *)(*a2 - 12));
  result = *v3;
  v5 = *(_DWORD *)(*v3 - 12);
  if ( v5 )
  {
    v6 = result + v5;
    do
    {
      v7 = result + 1;
      v8 = *(_BYTE *)result;
      if ( v8 == 13 )
      {
        v9 = *v2;
        v10 = *(_QWORD *)((char *)*v2 - 12);
        v11 = v10 + 1;
        if ( *(_BYTE *)(result + 1) == 10 )
          v7 = result + 2;
        if ( v11 > (unsigned int)(*(_QWORD *)((char *)*v2 - 12) >> 32) || *(v9 - 1) >= 1 )
        {
          sub_21E6FCC(v2, v10 + 1);
          v9 = *v2;
          v10 = *((_DWORD *)*v2 - 3);
        }
        *((_BYTE *)v9 + v10) = 10;
      }
      else
        v12 = *v2;
        *(_QWORD *)&v13 = *(_QWORD *)((char *)*v2 - 12);
        v11 = v13 + 1;
        if ( v13 + 1 > v14 || *(v12 - 1) >= 1 )
          sub_21E6FCC(v2, v13 + 1);
          v12 = *v2;
          v13 = *((_DWORD *)*v2 - 3);
        *((_BYTE *)v12 + v13) = v8;
      v15 = *v2;
      if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
        *(v15 - 1) = 0;
        *(v15 - 3) = v11;
        *((_BYTE *)v15 + v11) = byte_26C67B8[0];
      result = v7;
    }
    while ( v7 != v6 );
  }
  return result;
}


  if ( Json::Value::isNull(v2) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v2, v4);
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  BookScreenManager::getPickPhotoName((BookScreenManager *)&s1, *(_DWORD *)(v3 + 432), v5);
  v7 = (char *)s1;
  v8 = *((_DWORD *)s1 - 3);
  if ( v8 == *((_DWORD *)Util::EMPTY_STRING - 3) && !memcmp(s1, Util::EMPTY_STRING, v8) )
    v9 = 0;
    BookScreenManager::removePickPicture(*(BookScreenManager **)(v3 + 432), v5);
    BookScreenController::_addPhotoPageAt(v3, *(_DWORD *)(v3 + 468), (int *)&s1);
    *(_BYTE *)(v3 + 464) = 0;
    v9 = 1;
    v7 = (char *)s1;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7 - 12);
  return v9;
}


      if ( Json::Value::isInt(v10) || (v6 = Json::Value::isUInt(v10), v6 == 1) )
{
        v6 = Json::Value::asInt(v10, 0);
        v9 = v6;
      }
      else
      {
        v9 = -1;
    }
    else
    {
      v9 = -1;
  }
  v14 = 0;
  v11 = 1;
  v12 = v9 == 0;
  v13 = v9 < 0;
  if ( v9 >= 0 )
  {
    v6 = *(_QWORD *)(v3 + 456);
    v7 = (signed int)((*(_QWORD *)(v3 + 456) >> 32) - v6) >> 2;
    v14 = __OFSUB__(v7, v9);
    v11 = v7 >= v9;
    v12 = v7 == v9;
    v13 = ((v7 - v9) & 0x80000000) != 0;
  if ( (unsigned __int8)(v13 ^ v14) | v12 )
    v15 = MainMenuScreenModel::getInvalidItemModel(*(MainMenuScreenModel **)(v3 + 424));
  else
    if ( v12 || !v11 )
      sub_21E5B04("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", v9, v7, v8);
    v15 = (char *)(v6 + 4 * v9);
  if ( StoreCatalogItemModel::isValid((StoreCatalogItemModel *)v15) == 1 )
    if ( StoreCatalogItemModel::hasDedicatedUpsellScreen((StoreCatalogItemModel *)v15) )
      if ( StoreCatalogItemModel::isOwned((StoreCatalogItemModel *)v15)
        || StoreCatalogItemModel::isAvailableForPurchase((StoreCatalogItemModel *)v15) )
        MainMenuScreenModel::navigateToPurchaseOfferScreen(*(_DWORD *)(v3 + 424), (StoreCatalogItemModel *)v15, 2);
        sub_21E94B4((void **)&v28, "store.connection.failed.title");
        sub_21E94B4((void **)&v27, "store.connection.failed.body");
        sub_21E94B4((void **)&v26, "gui.close");
        StoreBaseScreenController::_openModalDialog(v3, &v28, &v27, &v26);
        v16 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
        {
          v20 = (unsigned int *)(v26 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        }
        v17 = (void *)(v27 - 12);
        if ( (int *)(v27 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v27 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        v18 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v28 - 4);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
      StoreBaseScreenController::_tryAcquireDlc((StoreBaseScreenController *)v3, (StoreCatalogItemModel *)v15);
  return 0;
}


int __fastcall Json::FastWriter::enableYAMLCompatibility(int result)
{
  *(_BYTE *)(result + 8) = 1;
  return result;
}


signed int __fastcall Json::Value::CZString::isStaticString(Json::Value::CZString *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  v6 = PlayScreenModel::getNetworkWorldAtIndex(*(_DWORD *)(v3 + 432), v4, 2);
  if ( v6 )
    NetworkWorldInfo::NetworkWorldInfo((int)&v20, v6);
    NetworkWorldInfo::NetworkWorldInfo((int)&v19, (int)&v20);
    NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v20);
    NetworkWorldInfo::NetworkWorldInfo((int)&v19);
  if ( WorldInfo::isValid((WorldInfo *)&v19) )
    v7 = NetworkWorldInfo::getExternalServer((NetworkWorldInfo *)&v19);
    v8 = ExternalServer::getId((ExternalServer *)v7);
    PlayScreenModel::navigateToAddEditExternalScreen(*(PlayScreenModel **)(v3 + 432), v8);
    v9 = *(_DWORD *)(v3 + 432);
    sub_21E94B4((void **)&v18, "disconnectionScreen.internalError.cantEdit");
    sub_21E94B4((void **)&v17, "disconnectionScreen.internalError.cantFindEdit");
    MinecraftScreenModel::navigateToDisconnectScreen(v9, &v18, &v17);
    v10 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v17 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v18 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v19);
  if ( _stack_chk_guard != v21 )
    _stack_chk_fail(_stack_chk_guard - v21);
  return 8;
}


char *__fastcall Json::operator>>(char *a1, int a2)
{
  char *v2; // r8@1
  int v3; // r5@1
  __int64 v4; // r2@1
  char *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  char v9; // [sp+8h] [bp-90h]@1
  char *v10; // [sp+58h] [bp-40h]@1
  char *v11; // [sp+78h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  j_Json::Reader::Reader((Json::Reader *)&v9);
  v11 = (char *)&unk_28898CC;
  sub_21BBAF0(v2, (const void **)&v11, 255);
  EntityInteraction::setInteractText((int *)&v10, (int *)&v11);
  HIDWORD(v4) = v3;
  LODWORD(v4) = &v10[*((_DWORD *)v10 - 3)];
  j_Json::Reader::parse((Json::Reader *)&v9, v10, v4, 1);
  v5 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v11 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  j_Json::Reader::~Reader((Json::Reader *)&v9);
  return v2;
}


  if ( Json::Value::isObject(v15) )
{
    sub_1579A1C((int)&v194, (int)v15, a9, 4);
    v38 = (int *)a8;
    sub_1579A1C((int)&v193, (int)v15, a8, 4);
    if ( Json::Value::isString((Json::Value *)&v194) == 1 && Json::Value::isString((Json::Value *)&v193) == 1 )
    {
      sub_21E94B4((void **)&v191, (const char *)&unk_257BC67);
      Json::Value::asString(&v192, (int)&v194, &v191);
      sub_21E94B4((void **)&v189, (const char *)&unk_257BC67);
      Json::Value::asString(&v190, (int)&v193, &v189);
      PackReport::setOriginalIdentity(a5, &v192, &v190);
      v39 = (void *)(v190 - 12);
      if ( (int *)(v190 - 12) != &dword_28898C0 )
      {
        v146 = (unsigned int *)(v190 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v147 = __ldrex(v146);
          while ( __strex(v147 - 1, v146) );
        }
        else
          v147 = (*v146)--;
        if ( v147 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      }
      v40 = (void *)(v189 - 12);
      if ( (int *)(v189 - 12) != &dword_28898C0 )
        v148 = (unsigned int *)(v189 - 4);
            v149 = __ldrex(v148);
          while ( __strex(v149 - 1, v148) );
          v149 = (*v148)--;
        if ( v149 <= 0 )
          j_j_j_j__ZdlPv_9(v40);
      v41 = (void *)(v192 - 12);
      if ( (int *)(v192 - 12) != &dword_28898C0 )
        v150 = (unsigned int *)(v192 - 4);
            v151 = __ldrex(v150);
          while ( __strex(v151 - 1, v150) );
          v151 = (*v150)--;
        if ( v151 <= 0 )
          j_j_j_j__ZdlPv_9(v41);
      v42 = (void *)(v191 - 12);
      if ( (int *)(v191 - 12) != &dword_28898C0 )
        v152 = (unsigned int *)(v191 - 4);
            v153 = __ldrex(v152);
          while ( __strex(v153 - 1, v152) );
          v153 = (*v152)--;
        if ( v153 <= 0 )
          j_j_j_j__ZdlPv_9(v42);
    }
    sub_1579C1C(
      (int)&v187,
      (int)v15,
      (int *)a9,
      (int *)&PackManifestFactory::MANIFEST_PACK_UUID_UPGRADE_SALT,
      v11,
      a5,
      a6);
    if ( *(_QWORD *)&mce::UUID::EMPTY == v187 && qword_287E930 == v188 )
      PackManifest::setInvalidUUID(v10);
      Crypto::Random::generateUUID((int)&v185);
      v187 = v185;
      v188 = v186;
    v43 = byte_27EC9C8;
    __dmb();
    if ( !(v43 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27EC9C8) )
      sub_21E94B4((void **)&v211, "6989C411-4355-4756-9163-51C1DF5EF677");
      mce::UUID::fromString((int)&v212, &v211);
      dword_27ECA20 = 0;
      dword_27ECA24 = 0;
      dword_27ECA28 = 0;
      v44 = (char *)operator new(0x10u);
      dword_27ECA20 = (int)v44;
      dword_27ECA28 = (int)(v44 + 16);
      v45 = v213;
      v46 = v214;
      *(_DWORD *)v44 = v212;
      *((_DWORD *)v44 + 1) = v45;
      *((_QWORD *)v44 + 1) = v46;
      dword_27ECA24 = (int)(v44 + 16);
      v47 = (void *)(v211 - 12);
      if ( (int *)(v211 - 12) != &dword_28898C0 )
        v144 = (unsigned int *)(v211 - 4);
            v145 = __ldrex(v144);
          while ( __strex(v145 - 1, v144) );
          v145 = (*v144)--;
        if ( v145 <= 0 )
          j_j_j_j__ZdlPv_9(v47);
      _cxa_atexit(std::vector<mce::UUID,std::allocator<mce::UUID>>::~vector);
      j___cxa_guard_release((unsigned int *)&byte_27EC9C8);
      v18 = (PackReport *)a5;
      v38 = (int *)a8;
    v48 = dword_27ECA24;
    v49 = std::__find_if<__gnu_cxx::__normal_iterator<mce::UUID const*,std::vector<mce::UUID,std::allocator<mce::UUID>>>,__gnu_cxx::__ops::_Iter_equals_val<mce::UUID const>>(
            dword_27ECA20,
            dword_27ECA24,
            (int)&v187);
    v50 = 0;
    if ( v49 != v48 )
      v50 = 1;
    PackManifest::setHidden(v10, v50);
    sub_21E94B4((void **)&v183, "name");
    sub_157A770(&v184, (int)v15, &v183, v11, (int)v18, 1);
    v51 = (void *)(v183 - 12);
    if ( (int *)(v183 - 12) != &dword_28898C0 )
      v122 = (unsigned int *)(v183 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v123 = __ldrex(v122);
        while ( __strex(v123 - 1, v122) );
      else
        v123 = (*v122)--;
      if ( v123 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    if ( *(_DWORD *)(v184 - 12) )
      goto LABEL_141;
    if ( a6 == 1 )
      mce::UUID::asString((mce::UUID *)&v182);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        &v184,
        &v182);
      v52 = (void *)(v182 - 12);
      if ( (int *)(v182 - 12) != &dword_28898C0 )
        v154 = (unsigned int *)(v182 - 4);
            v155 = __ldrex(v154);
          while ( __strex(v155 - 1, v154) );
          v155 = (*v154)--;
        if ( v155 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      sub_157984C(&v174, (__int64 *)v11);
      sub_21E8AF4(&v175, &v184);
      v53 = operator new(8u);
      v54 = v53;
      v160 = v12;
      v55 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
              (int)&v174,
              (int)&v176,
              (int)v53);
      v56 = v55;
      v57 = 0;
      v176 = &off_26D9084;
      v58 = v55 - (_DWORD)v54;
      v177 = 0;
      v178 = 0;
      v179 = 0;
      v59 = v58 >> 2;
      if ( v58 >> 2 )
        if ( v59 >= 0x40000000 )
          sub_21E57F4();
        v57 = operator new(v58);
      v177 = v57;
      v178 = (int)v57;
      v179 = (char *)v57 + 4 * v59;
      v60 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
              (int)v54,
              v56,
              (int)v57);
      v178 = v60;
      v180 = 10;
      v181 = 2;
      v176 = &off_26EABBC;
      PackReport::addWarning<PackDiscoveryError>((int)v18, (int)&v176);
      if ( v57 != (void *)v60 )
        v61 = &v216;
          v91 = (int *)(*(_DWORD *)v57 - 12);
          if ( v91 != &dword_28898C0 )
          {
            v85 = (unsigned int *)(*(_DWORD *)v57 - 4);
            v86 = v10;
            if ( &pthread_create )
            {
              __dmb();
              do
                v87 = __ldrex(v85);
              while ( __strex(v87 - 1, v85) );
            }
            else
              v87 = (*v85)--;
            v88 = v87 == 0;
            v89 = v87 < 0;
            v10 = v86;
            if ( v89 || v88 )
              v90 = v61;
              j_j_j_j__ZdlPv_9(v91);
              v61 = v90;
              v10 = v86;
          }
          v57 = (char *)v57 + 4;
        while ( v57 != (void *)v60 );
        v57 = v177;
      if ( v57 )
        operator delete(v57);
      if ( v54 != (_DWORD *)v56 )
        v92 = v54;
          v95 = (int *)(*v92 - 12);
          if ( v95 != &dword_28898C0 )
            v93 = (unsigned int *)(*v92 - 4);
                v94 = __ldrex(v93);
              while ( __strex(v94 - 1, v93) );
              v94 = (*v93)--;
            if ( v94 <= 0 )
              j_j_j_j__ZdlPv_9(v95);
          ++v92;
        while ( v92 != (_DWORD *)v56 );
      if ( v54 )
        operator delete(v54);
      v12 = v160;
      v96 = (void *)(v175 - 12);
      if ( (int *)(v175 - 12) != &dword_28898C0 )
        v158 = (unsigned int *)(v175 - 4);
            v159 = __ldrex(v158);
          while ( __strex(v159 - 1, v158) );
          v18 = (PackReport *)a5;
          v159 = (*v158)--;
        if ( v159 <= 0 )
          j_j_j_j__ZdlPv_9(v96);
      v97 = (void *)(v174 - 12);
      if ( (int *)(v174 - 12) == &dword_28898C0 )
        goto LABEL_141;
      v98 = (unsigned int *)(v174 - 4);
        v99 = v18;
          v100 = __ldrex(v98);
        while ( __strex(v100 - 1, v98) );
LABEL_308:
        v18 = v99;
        goto LABEL_310;
    else
      sub_21E94B4((void **)&v172, "manifestvalidation.noname");
      I18n::get(&v173, (int **)&v172);
        &v173);
      v101 = (void *)(v173 - 12);
      if ( (int *)(v173 - 12) != &dword_28898C0 )
        v156 = (unsigned int *)(v173 - 4);
            v157 = __ldrex(v156);
          while ( __strex(v157 - 1, v156) );
          v157 = (*v156)--;
        if ( v157 <= 0 )
          j_j_j_j__ZdlPv_9(v101);
      v97 = (void *)(v172 - 12);
      if ( (int *)(v172 - 12) == &dword_28898C0 )
      v98 = (unsigned int *)(v172 - 4);
        goto LABEL_308;
    v100 = (*v98)--;
LABEL_310:
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
LABEL_141:
    PackManifest::setName((int)v10, &v184);
    sub_21E94B4((void **)&v170, "description");
    sub_157A770(&v171, (int)v15, &v170, v11, (int)v18, 1);
    PackManifest::setDescription((int)v10, &v171);
    v102 = (void *)(v171 - 12);
    if ( (int *)(v171 - 12) != &dword_28898C0 )
      v124 = (unsigned int *)(v171 - 4);
          v125 = __ldrex(v124);
        while ( __strex(v125 - 1, v124) );
        v125 = (*v124)--;
      if ( v125 <= 0 )
        j_j_j_j__ZdlPv_9(v102);
    v103 = (void *)(v170 - 12);
    if ( (int *)(v170 - 12) != &dword_28898C0 )
      v126 = (unsigned int *)(v170 - 4);
          v127 = __ldrex(v126);
        while ( __strex(v127 - 1, v126) );
        v127 = (*v126)--;
      if ( v127 <= 0 )
        j_j_j_j__ZdlPv_9(v103);
    sub_21E94B4((void **)&v169, "platform_locked");
    sub_157CB94((int)&v215, (int)v15, &v169, 5, v11, (int)v18, 1);
    if ( Json::Value::isBool((Json::Value *)&v215) == 1 )
      v104 = Json::Value::asBool((Json::Value *)&v215, 0);
      v104 = 0;
    Json::Value::~Value((Json::Value *)&v215);
    PackManifest::setPlatformLocked(v10, v104);
    v105 = (void *)(v169 - 12);
    if ( (int *)(v169 - 12) != &dword_28898C0 )
      v128 = (unsigned int *)(v169 - 4);
          v129 = __ldrex(v128);
        while ( __strex(v129 - 1, v128) );
        v129 = (*v128)--;
      if ( v129 <= 0 )
        j_j_j_j__ZdlPv_9(v105);
    sub_157A874((SemVersion *)&v165, (int)v15, v38, v11, (int)v18, a6, a7);
    PackIdVersion::PackIdVersion((int)&v161, (int)&v187, (int)&v165, 0);
    PackManifest::setIdentity(v10, (const PackIdVersion *)&v161);
    PackReport::setIdentity(v18, (const PackIdVersion *)&v161);
    Json::Value::Value(v12, v15);
    v106 = (void *)(v164 - 12);
    if ( (int *)(v164 - 12) != &dword_28898C0 )
      v130 = (unsigned int *)(v164 - 4);
          v131 = __ldrex(v130);
        while ( __strex(v131 - 1, v130) );
        v131 = (*v130)--;
      if ( v131 <= 0 )
        j_j_j_j__ZdlPv_9(v106);
    v107 = (void *)(v163 - 12);
    if ( (int *)(v163 - 12) != &dword_28898C0 )
      v132 = (unsigned int *)(v163 - 4);
          v133 = __ldrex(v132);
        while ( __strex(v133 - 1, v132) );
        v133 = (*v132)--;
      if ( v133 <= 0 )
        j_j_j_j__ZdlPv_9(v107);
    v108 = (void *)(v162 - 12);
    if ( (int *)(v162 - 12) != &dword_28898C0 )
      v134 = (unsigned int *)(v162 - 4);
          v135 = __ldrex(v134);
        while ( __strex(v135 - 1, v134) );
        v135 = (*v134)--;
      if ( v135 <= 0 )
        j_j_j_j__ZdlPv_9(v108);
    v109 = (void *)(v168 - 12);
    if ( (int *)(v168 - 12) != &dword_28898C0 )
      v136 = (unsigned int *)(v168 - 4);
          v137 = __ldrex(v136);
        while ( __strex(v137 - 1, v136) );
        v137 = (*v136)--;
      if ( v137 <= 0 )
        j_j_j_j__ZdlPv_9(v109);
    v110 = (void *)(v167 - 12);
    if ( (int *)(v167 - 12) != &dword_28898C0 )
      v138 = (unsigned int *)(v167 - 4);
          v139 = __ldrex(v138);
        while ( __strex(v139 - 1, v138) );
        v139 = (*v138)--;
      if ( v139 <= 0 )
        j_j_j_j__ZdlPv_9(v110);
    v111 = (void *)(v166 - 12);
    if ( (int *)(v166 - 12) != &dword_28898C0 )
      v140 = (unsigned int *)(v166 - 4);
          v141 = __ldrex(v140);
        while ( __strex(v141 - 1, v140) );
        v141 = (*v140)--;
      if ( v141 <= 0 )
        j_j_j_j__ZdlPv_9(v111);
    v112 = (void *)(v184 - 12);
    if ( (int *)(v184 - 12) != &dword_28898C0 )
      v142 = (unsigned int *)(v184 - 4);
          v143 = __ldrex(v142);
        while ( __strex(v143 - 1, v142) );
        v143 = (*v142)--;
      if ( v143 <= 0 )
        j_j_j_j__ZdlPv_9(v112);
    Json::Value::~Value((Json::Value *)&v193);
    Json::Value::~Value((Json::Value *)&v194);
    goto LABEL_155;
  }
  sub_157984C(&v195, (__int64 *)v11);
  v62 = operator new(4u);
  v63 = v62;
  v64 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
          (int)&v195,
          (int)&v196,
          (int)v62);
  v65 = v64;
  v66 = v12;
  v67 = 0;
  v196 = &off_26D9084;
  v68 = v64 - (_DWORD)v63;
  v197 = 0;
  v198 = 0;
  v199 = 0;
  v69 = v68 >> 2;
  if ( v68 >> 2 )
  {
    if ( v69 >= 0x40000000 )
      sub_21E57F4();
    v67 = operator new(v68);
  v197 = v67;
  v198 = (int)v67;
  v199 = (char *)v67 + 4 * v69;
  v70 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
          (int)v63,
          v65,
          (int)v67);
  v198 = v70;
  v200 = 8;
  v201 = 2;
  v196 = &off_26EABBC;
  PackReport::addError<PackDiscoveryError>(a5, (int)&v196);
  if ( v67 != (void *)v70 )
    v71 = &v216;
    do
      v75 = (int *)(*(_DWORD *)v67 - 12);
      if ( v75 != &dword_28898C0 )
        v72 = (unsigned int *)(*(_DWORD *)v67 - 4);
            v73 = __ldrex(v72);
          while ( __strex(v73 - 1, v72) );
          v73 = (*v72)--;
        if ( v73 <= 0 )
          v74 = v71;
          j_j_j_j__ZdlPv_9(v75);
          v71 = v74;
      v67 = (char *)v67 + 4;
    while ( v67 != (void *)v70 );
    v67 = v197;
  if ( v67 )
    operator delete(v67);
  if ( v63 != (_DWORD *)v65 )
    v76 = v63;
      v79 = (int *)(*v76 - 12);
      if ( v79 != &dword_28898C0 )
        v77 = (unsigned int *)(*v76 - 4);
            v78 = __ldrex(v77);
          while ( __strex(v78 - 1, v77) );
          v78 = (*v77)--;
        if ( v78 <= 0 )
          j_j_j_j__ZdlPv_9(v79);
      ++v76;
    while ( v76 != (_DWORD *)v65 );
  if ( v63 )
    operator delete(v63);
  v80 = (void *)(v195 - 12);
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v195 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  Json::Value::Value(v66, 0);
LABEL_155:
  v113 = *(_DWORD *)(v11 + 4);
  *(_DWORD *)(v11 + 4) = v113 - 4;
  v114 = *(_DWORD *)(v113 - 4);
  v115 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v114 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v115);
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v40 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  v14 = *v6;
  v15 = *((_DWORD *)v14 - 3);
  sub_21E94B4((void **)&v36, "store.createdBy");
  v16 = (int *)StoreCatalogItemModel::getCreatorName((StoreCatalogItemModel *)&v40);
  sub_21E8AF4(&v32, v16);
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v17 = (char *)operator new(4u);
  v33 = v17;
  v35 = v17 + 4;
  v34 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v32,
                  (int)&v33,
                  (int)v17);
  I18n::get(&v37, &v36, (unsigned __int64 *)&v33);
  UIPropertyBag::set<std::string>(v5, v15, v14, (const void **)&v37);
  v18 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v37 - 4);
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
      j_j_j_j__ZdlPv_9(v18);
  v20 = (int)v34;
  v19 = v33;
  if ( v33 != v34 )
    do
      v23 = (int *)(*(_DWORD *)v19 - 12);
      if ( v23 != &dword_28898C0 )
      {
        v21 = (unsigned int *)(*(_DWORD *)v19 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      }
      v19 += 4;
    while ( v19 != (char *)v20 );
    v19 = v33;
  if ( v19 )
    operator delete(v19);
  v24 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v32 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v36 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v20 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  v14 = *v6;
  v15 = *((_DWORD *)*v6 - 3);
  v17 = StoreCatalogItemModel::isValid((StoreCatalogItemModel *)&v20);
  return UIPropertyBag::set<bool>(v5, v15, v14, &v17);
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
    {
      v5 = Json::Value::asInt(v6, 0);
      if ( v5 < 0 )
      {
        v5 = -1;
      }
      else if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v3 + 432), 2, 0) <= v5 )
      else
        v7 = s1;
        if ( strcmp(s1, "personal_realms") )
        {
          if ( !strcmp(v7, "friends_realms") )
            v5 += PlayScreenModel::getRealmWorldsPartitionIndex(*(PlayScreenModel **)(v3 + 432));
          else
            v5 = -1;
        }
    }
    else
      v5 = -1;
  else
  v8 = s1 - 12;
  if ( (int *)(s1 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v5 <= -1 )
    v10 = *(_DWORD *)(v3 + 432);
    sub_21E94B4((void **)&v20, "disconnectionScreen.internalError.cantFindRealm");
    sub_21E94B4((void **)&v19, "disconnectionScreen.internalError.cantConnect");
    MinecraftScreenModel::navigateToDisconnectScreen(v10, &v20, &v19);
    v11 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v20 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    result = 8;
    PlayScreenController::_handleStartRealm((PlayScreenController *)v3, v5);
    result = 0;
  return result;
}


      if ( Json::Value::isInt(v9) || (result = Json::Value::isUInt(v9), result == 1) )
{
        result = Json::Value::asInt(v9, 0);
        if ( result >= 0 )
        {
          v10 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(
                  *(SkinPackCollectionModel **)(v6 + 432),
                  result);
          v11 = *(_DWORD *)(v6 + 432);
          v12 = SkinPackModel::getPackId((SkinPackModel *)v10);
          v13 = SkinPackModel::getFirstVisibleSkinIndex((SkinPackModel *)v10);
          v14 = *(_DWORD *)v12;
          v15 = *((_DWORD *)v12 + 1);
          v16 = *((_DWORD *)v12 + 2);
          v17 = *((_DWORD *)v12 + 3);
          v22 = v14;
          v23 = v15;
          v24 = v16;
          v25 = v17;
          v26 = v13 + v4;
          v27 = (char *)&unk_28898CC;
          v18 = SkinPackCollectionModel::isSkinLocked(v11, (int)&v22);
          v19 = v27 - 12;
          if ( (int *)(v27 - 12) != &dword_28898C0 )
          {
            v20 = (unsigned int *)(v27 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
            }
            else
              v21 = (*v20)--;
            if ( v21 <= 0 )
              j_j_j_j__ZdlPv_9(v19);
          }
          v28 = v18;
          result = UIPropertyBag::set<bool>(v5, 8, "#visible", &v28);
        }
      }
    }
  }
  return result;
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  *(_BYTE *)(v3 + 456) = 1;
  v7 = ContainerScreenController::_releaseHeldButton(
         (MinecraftScreenController *)v3,
         (const void **)&v12,
         v5,
         *(_WORD *)(v3 + 446));
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v7;
}


        if ( Json::Value::isNull(v9)
{
          || (v10 = (Json::Value *)Json::Value::operator[]((int)v9, "#panel_title"), Json::Value::isString(v10) != 1) )
        {
          v26 = v25;
          v11 = (char *)&unk_28898CC;
          v25 = (char *)&unk_28898CC;
        }
        else
          jsonValConversion<std::string>::as((int *)&v26, (int)&v28, (int)v10);
          v11 = v25;
        v13 = v11 - 12;
        if ( (int *)(v11 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v11 - 4);
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
            j_j_j_j_j__ZdlPv_9_2(v13);
      }
      else
      {
        sub_1590164((void **)&v26, (const char *)&unk_257BC67);
      sub_15901A4(&v24, (int *)&v26);
      sub_1590224((const void **)&v24, ".title", 6u);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)(v4 + 432),
        &v24);
      v16 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v24 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v16);
      MinecraftScreenModel::fireEventHowToPlayTopicChanged(
        *(_DWORD *)(v4 + 424),
        (const char **)&v26,
        *(_DWORD *)(v4 + 480));
      v17 = v26 - 12;
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v26 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v17);
    }
    result = 1;
  }
  else
  {
    result = 0;
  return result;
}


int __fastcall Json::Value::CZString::c_str(Json::Value::CZString *this)
{
  return *(_DWORD *)this;
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v19 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  v14 = *v6;
  v15 = *((_DWORD *)*v6 - 3);
  v16 = StoreCatalogItemModel::getTitle((StoreCatalogItemModel *)&v19);
  UIPropertyBag::set<std::string>(v5, v15, v14, v16);
}


  if ( Json::Value::isString(v4) != 1 )
{
    Json::Value::~Value((Json::Value *)&v12);
    return sub_21E8AF4(v2, (int *)&Util::EMPTY_STRING);
  }
  v5 = Json::Value::operator[]((Json::Value *)&v12, "icon_filesystem");
  sub_21E94B4((void **)&v10, (const char *)&unk_257BC67);
  Json::Value::asString(v2, v5, &v10);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  return (int *)Json::Value::~Value((Json::Value *)&v12);
}


int __fastcall Json::Path::addPathInArg(int a1, int a2, int a3, int *a4, int a5)
{
  int v5; // r4@1
  int result; // r0@1
  int v7; // r5@2
  __int64 v8; // r0@3

  v5 = a1;
  result = *a4;
  if ( *a4 != *(_DWORD *)(a3 + 4) )
  {
    v7 = *(_DWORD *)result;
    result = *(_DWORD *)(*(_DWORD *)result + 8);
    if ( result == a5 )
    {
      v8 = *(_QWORD *)(v5 + 4);
      if ( (_DWORD)v8 == HIDWORD(v8) )
      {
        result = j_j_j__ZNSt6vectorIN4Json12PathArgumentESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT__0(
                   (unsigned __int64 *)v5,
                   v7);
      }
      else
        *(_QWORD *)(sub_21E8AF4((int *)v8, (int *)v7) + 1) = *(_QWORD *)(v7 + 4);
        result = *(_DWORD *)(v5 + 4) + 12;
        *(_DWORD *)(v5 + 4) = result;
    }
  }
  return result;
}


unsigned int __fastcall Json::Value::CZString::operator<(int a1, int a2, int a3, const char *a4)
{
  bool v4; // zf@1
  unsigned int result; // r0@4
  unsigned int v6; // r2@5

  v4 = *(_DWORD *)a1 == 0;
  if ( *(_DWORD *)a1 )
  {
    a4 = *(const char **)a2;
    v4 = *(_DWORD *)a2 == 0;
  }
  if ( v4 )
    v6 = *(_DWORD *)(a1 + 4);
    result = 0;
    if ( v6 < *(_DWORD *)(a2 + 4) )
      result = 1;
  else
    result = (unsigned int)j_strcmp_0(*(const char **)a1, a4) >> 31;
  return result;
}


Json::Value *__fastcall Json::Path::make(unsigned __int64 *a1, Json::Value *a2)
{
  unsigned __int64 *v2; // r4@1
  Json::Value *v3; // r2@1
  int v4; // r0@1
  int i; // r5@1
  unsigned __int64 v6; // kr00_8@1
  int v7; // r0@4
  int v8; // r0@6

  v2 = a1;
  v3 = a2;
  v6 = *a1;
  v4 = *a1 >> 32;
  for ( i = v6; i != v4; i += 12 )
  {
    v7 = *(_DWORD *)(i + 8);
    if ( v7 == 2 )
    {
      v8 = j_Json::Value::resolveReference(v3, *(const char **)i, 0);
    }
    else
      if ( v7 != 1 )
        goto LABEL_2;
      v8 = j_Json::Value::operator[]((int)v3, *(_DWORD *)(i + 4));
    v3 = (Json::Value *)v8;
LABEL_2:
    v4 = *((_DWORD *)v2 + 1);
  }
  return v3;
}


int __fastcall Json::StyledWriter::hasCommentForValue(Json::StyledWriter *this, const Json::Value *a2)
{
  const Json::Value *v2; // r4@1
  int v3; // r5@1

  v2 = a2;
  v3 = 1;
  if ( !j_Json::Value::hasComment((int)a2, 0) && !j_Json::Value::hasComment((int)v2, 1) )
    v3 = j_Json::Value::hasComment((int)v2, 2);
  return v3;
}


  if ( Json::Value::isInt(v8) || Json::Value::isUInt(v8) )
{
    result = Json::Value::asInt(v8, 0);
    v10 = *v7;
    if ( result == *v7 )
      return result;
  }
  else
  {
  Json::Value::Value((Json::Value *)&v11, v10);
  Json::Value::operator=((int)v8, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  return UIPropertyBag::_handlePropertyChangedNotifications(v4, v6, v5);
}


char *__fastcall Json::StyledStreamWriter::unindent(Json::StyledStreamWriter *this)
{
  return sub_21E849C(
           (char *)this + 16,
           *(_DWORD *)(*((_DWORD *)this + 4) - 12) - *(_DWORD *)(*((_DWORD *)this + 6) - 12),
           0);
}


Json::Value *__fastcall Json::Value::~Value(Json::Value *this)
{
  Json::Value *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@2
  bool v4; // zf@5
  int v5; // r0@9
  int v6; // r1@10
  void *v7; // r5@10
  int v8; // r7@11
  int v9; // r6@11
  void *v10; // r0@12

  v1 = this;
  v2 = *((_WORD *)this + 4);
  if ( (unsigned int)(v2 - 6) >= 2 )
  {
    if ( (unsigned __int8)v2 == 4 )
    {
      v4 = (v2 & 0x100) == 0;
      if ( v2 & 0x100 )
      {
        v2 = *(_DWORD *)v1;
        v4 = *(_DWORD *)v1 == 0;
      }
      if ( !v4 )
        j_free((void *)v2);
    }
  }
  else
    v3 = *(_DWORD *)v1;
    if ( *(_DWORD *)v1 )
      j_std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_erase(
        *(_DWORD *)v1,
        *(_DWORD *)(v3 + 8));
      j_operator delete((void *)v3);
  v5 = *((_DWORD *)v1 + 3);
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
    v7 = (void *)(v5 - 8);
    if ( v6 )
      v8 = v5 - 4;
      v9 = 4 * v6;
      do
        v10 = *(void **)(v8 + v9);
        if ( v10 )
          j_free(v10);
        v9 -= 4;
      while ( v9 );
    j_operator delete[](v7);
  return v1;
}


  if ( Json::Value::isNull((Json::Value *)(v4 + 8)) )
{
    v7 = -1;
  }
  else if ( Json::Value::isObject((Json::Value *)(v4 + 8)) == 1 )
  {
    v8 = (Json::Value *)Json::Value::operator[](v4 + 8, v6);
    if ( Json::Value::isInt(v8) || Json::Value::isUInt(v8) == 1 )
      v7 = Json::Value::asInt(v8, 0);
    else
      v7 = -1;
  else
  v9 = *v3;
  v10 = 1;
  v11 = *((_DWORD *)*v3 - 3);
  if ( v7 == *(_DWORD *)(v5 + 516) )
    v10 = 2;
  v13 = v10;
  return UIPropertyBag::set<int>(v4, v11, v9, &v13);
}


void *__fastcall Json::ValueIteratorBase::memberName(Json::ValueIteratorBase *this)
{
  void *v1; // r1@1
  void *result; // r0@1

  v1 = *(void **)(*(_DWORD *)this + 16);
  result = &unk_257BC67;
  if ( v1 )
    result = v1;
  return result;
}


signed int __fastcall Json::Reader::readObject(int a1)
{
  int v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r5@3
  __int64 v4; // r0@9
  int v5; // r7@11
  int *v6; // r0@11
  int v7; // r0@12
  int v8; // r0@15
  signed int v9; // r7@16
  __int64 v10; // r0@16
  int v11; // r0@17
  int v12; // r0@18
  int v13; // r0@18
  int v14; // r1@18
  unsigned int v15; // r0@20
  signed int v16; // r4@26
  __int64 v17; // kr00_8@28
  signed int v18; // r6@28
  signed int v19; // r7@28
  int v20; // r8@28
  void *v21; // r0@30
  char *v22; // r0@33
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  unsigned int *v26; // r2@39
  signed int v27; // r1@41
  int v28; // r8@47
  int v29; // r7@47
  int v30; // r6@47
  __int64 v31; // kr10_8@50
  signed int v32; // r6@50
  signed int v33; // r7@50
  int v34; // r8@50
  __int64 v35; // kr20_8@60
  signed int v36; // r6@60
  signed int v37; // r7@60
  int v38; // r8@60
  int v39; // [sp+4h] [bp-7Ch]@28
  int v40; // [sp+Ch] [bp-74h]@60
  unsigned int v41; // [sp+10h] [bp-70h]@20
  int v42; // [sp+20h] [bp-60h]@50
  int v43; // [sp+24h] [bp-5Ch]@8
  char v44; // [sp+30h] [bp-50h]@3
  _DWORD *v45; // [sp+40h] [bp-40h]@1
  int v46; // [sp+44h] [bp-3Ch]@4
  int v47; // [sp+50h] [bp-30h]@29

  v1 = a1;
  v45 = &unk_28898CC;
  v2 = *(_QWORD *)(a1 + 24);
  if ( (_DWORD)v2 == HIDWORD(v2) )
    LODWORD(v2) = *(_DWORD *)(*(_DWORD *)(v1 + 36) - 4) + 512;
  v3 = *(_DWORD *)(v2 - 4);
  j_Json::Value::Value(&v44, 7);
  j_Json::Value::operator=(v3, (const Json::Value *)&v44);
  j_Json::Value::~Value((Json::Value *)&v44);
  while ( 1 )
  {
    do
      j_Json::Reader::readToken((Json::Reader *)v1, (int)&v46);
    while ( v46 == 12 );
    if ( v46 == 2 )
      break;
    if ( v46 != 5 )
      goto LABEL_28;
    sub_21E8190((void **)&v45, (char *)&unk_257BC67, 0);
    if ( !j_Json::Reader::decodeString(v1, (int)&v46, (const void **)&v45) )
    {
      v28 = -858993459 * ((signed int)(*(_QWORD *)(v1 + 56) - *(_DWORD *)(v1 + 48)) >> 2);
      v29 = -858993459 * ((signed int)(*(_QWORD *)(v1 + 64) - (*(_QWORD *)(v1 + 64) >> 32)) >> 2);
      v30 = 25 * ((signed int)(*(_DWORD *)(v1 + 76) - (*(_QWORD *)(v1 + 56) >> 32)) >> 2);
      do
        j_Json::Reader::readToken((Json::Reader *)v1, (int)&v47);
      while ( (v47 | 2) != 2 );
LABEL_59:
      j_std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::resize(
        v1 + 40,
        v30 + v29 + v28 - 25);
      goto LABEL_31;
    }
    j_Json::Reader::readToken((Json::Reader *)v1, (int)&v43);
    if ( v43 != 11 )
      sub_21E94B4((void **)&v42, "Missing ':' after object member name");
      j_Json::Reader::addError(v1, &v42, (int)&v43, 0);
      v31 = *(_QWORD *)(v1 + 56);
      v32 = *(_QWORD *)(v1 + 64) - (*(_QWORD *)(v1 + 64) >> 32);
      v33 = v31 - *(_DWORD *)(v1 + 48);
      v34 = (*(_DWORD *)(v1 + 76) - HIDWORD(v31)) >> 2;
        -858993459 * (v32 >> 2) + 25 * v34 + -858993459 * (v33 >> 2) - 25);
      v21 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
      {
        v26 = (unsigned int *)(v42 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          goto LABEL_68;
        }
        goto LABEL_67;
      }
    v4 = *(_QWORD *)(v1 + 24);
    if ( (_DWORD)v4 == HIDWORD(v4) )
      LODWORD(v4) = *(_DWORD *)(*(_DWORD *)(v1 + 36) - 4) + 512;
    v5 = j_Json::Value::operator[](*(Json::Value **)(v4 - 4), (const char **)&v45);
    v6 = *(int **)(v1 + 24);
    if ( v6 == (int *)(*(_DWORD *)(v1 + 32) - 4) )
      if ( (unsigned int)((*(_QWORD *)v1 >> 32) - ((signed int)(*(_DWORD *)(v1 + 36) - *(_QWORD *)v1) >> 2)) <= 1 )
        j_std::deque<Json::Value *,std::allocator<Json::Value *>>::_M_reallocate_map(v1, 1u, 0);
      *(_DWORD *)(*(_DWORD *)(v1 + 36) + 4) = j_operator new(0x200u);
      **(_DWORD **)(v1 + 24) = v5;
      v8 = *(_DWORD *)(v1 + 36);
      *(_DWORD *)(v1 + 36) = v8 + 4;
      v7 = *(_DWORD *)(v8 + 4);
      *(_DWORD *)(v1 + 28) = v7;
      *(_DWORD *)(v1 + 32) = v7 + 512;
    else
      *v6 = v5;
      v7 = *(_DWORD *)(v1 + 24) + 4;
    *(_DWORD *)(v1 + 24) = v7;
    v9 = j_Json::Reader::readValue((Json::Reader *)v1);
    v10 = *(_QWORD *)(v1 + 24);
    if ( (_DWORD)v10 == HIDWORD(v10) )
      j_operator delete((void *)v10);
      v12 = *(_DWORD *)(v1 + 36);
      *(_DWORD *)(v1 + 36) = v12 - 4;
      v13 = *(_DWORD *)(v12 - 4);
      *(_DWORD *)(v1 + 28) = v13;
      v14 = v13 + 512;
      v11 = v13 + 508;
      *(_DWORD *)(v1 + 32) = v14;
      v11 = v10 - 4;
    *(_DWORD *)(v1 + 24) = v11;
    if ( !v9 )
      goto LABEL_59;
    j_Json::Reader::readToken((Json::Reader *)v1, (int)&v41);
    v15 = v41;
    if ( v41 > 0xC || !((1 << v41) & 0x1404) )
      sub_21E94B4((void **)&v40, "Missing ',' or '}' in object declaration");
      j_Json::Reader::addError(v1, &v40, (int)&v41, 0);
      v35 = *(_QWORD *)(v1 + 56);
      v36 = *(_QWORD *)(v1 + 64) - (*(_QWORD *)(v1 + 64) >> 32);
      v37 = v35 - *(_DWORD *)(v1 + 48);
      v38 = (*(_DWORD *)(v1 + 76) - HIDWORD(v35)) >> 2;
        -858993459 * (v36 >> 2) + 25 * v38 + -858993459 * (v37 >> 2) - 25);
      v21 = (void *)(v40 - 12);
      if ( (int *)(v40 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v40 - 4);
LABEL_67:
        v27 = (*v26)--;
LABEL_68:
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
    while ( v15 == 12 )
      j_Json::Reader::readToken((Json::Reader *)v1, (int)&v41);
      v15 = v41;
    if ( v15 == 2 )
      v16 = 1;
      goto LABEL_33;
  }
  if ( *(v45 - 3) )
LABEL_28:
    sub_21E94B4((void **)&v39, "Missing '}' or object member name");
    j_Json::Reader::addError(v1, &v39, (int)&v46, 0);
    v17 = *(_QWORD *)(v1 + 56);
    v18 = *(_QWORD *)(v1 + 64) - (*(_QWORD *)(v1 + 64) >> 32);
    v19 = v17 - *(_DWORD *)(v1 + 48);
    v20 = (*(_DWORD *)(v1 + 76) - HIDWORD(v17)) >> 2;
      j_Json::Reader::readToken((Json::Reader *)v1, (int)&v47);
    while ( (v47 | 2) != 2 );
    j_std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::resize(
      v1 + 40,
      -858993459 * (v18 >> 2) + 25 * v20 + -858993459 * (v19 >> 2) - 25);
    v21 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        goto LABEL_68;
      goto LABEL_67;
LABEL_31:
    v16 = 0;
    goto LABEL_33;
  v16 = 1;
LABEL_33:
  v22 = (char *)(v45 - 3);
  if ( v45 - 3 != &dword_28898C0 )
    v24 = v45 - 1;
    if ( &pthread_create )
      __dmb();
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  return v16;
}


int __fastcall Json::Value::hasComment(int a1, int a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
    result = *(_DWORD *)(v2 + 4 * a2) != 0;
  else
    result = 0;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  v6 = MinecraftScreenModel::isInputModeMotionController(*(MinecraftScreenModel **)(v3 + 424));
  v7 = *(ClientInstanceScreenModel **)(v3 + 424);
  if ( !v6 )
    ClientInstanceScreenModel::setMenuPointerPressed(v7, 1);
    v7 = *(ClientInstanceScreenModel **)(v3 + 424);
  MinecraftScreenModel::setLastSelectedSlot((int)v7, v4, 0);
  return 0;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v30;
    v31 = v30;
    v30 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v31, (int)&v34, (int)v5);
    v6 = v31;
  sub_119C884((void **)&v29, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v32 = v29;
    v29 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v32, (int)&v35, (int)v7);
  Util::stringTrim((int *)&nptr, (int *)&v32);
  v8 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v29 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (char *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v31 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v30 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = 0;
  v13 = (const char *)strtol(nptr, 0, 0);
  *(_DWORD *)(v3 + 448) = v13;
  *(_BYTE *)(v3 + 436) = 1;
  v14 = *(_QWORD *)(v3 + 440);
  v15 = *(_DWORD *)(v14 - 12);
  v16 = v15 == 0;
  if ( v15 )
    v12 = 0;
    v16 = *(_DWORD *)(HIDWORD(v14) - 12) == 0;
  if ( !v16 && (signed int)v13 > 0 )
    v12 = 1;
  *(_BYTE *)(v3 + 436) = v12;
  if ( !RakNet::NonNumericHostString((RakNet *)HIDWORD(v14), v13) )
    *(_BYTE *)(v3 + 436) &= Util::isValidIP(*(_DWORD *)(*(_DWORD *)(v3 + 444) - 12), *(_DWORD *)(v3 + 444), 1, 1);
  v17 = nptr - 12;
  if ( (int *)(nptr - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(nptr - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  return 1;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  v6 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(*(SkinPackCollectionModel **)(v3 + 432), v4);
  SkinPackModel::decrementFirstVisibleSkinIndex((SkinPackModel *)v6, 5);
  return 1;
}


signed int __fastcall Json::Value::empty(Json::Value *this)
{
  unsigned int v1; // r2@1
  int v2; // r0@7
  int v3; // r0@8
  signed int result; // r0@8

  v1 = *((_BYTE *)this + 8);
  if ( v1 > 7 )
    JUMPOUT(&loc_1B2DC6E);
  if ( !((1 << v1) & 0xC1) )
  if ( v1 == 7 )
  {
    result = sub_1B2DC66(*(_DWORD *)(*(_DWORD *)this + 20));
  }
  else if ( v1 == 6 )
    v2 = *(_DWORD *)this;
    if ( *(_DWORD *)(v2 + 20) )
    {
      v3 = sub_21D4894(v2 + 4);
      result = sub_1B2DC66(*(_DWORD *)(v3 + 20) + 1);
    }
    else
      result = sub_1B2DC66(0);
  else
    result = sub_1B2DC66(0);
  return result;
}


  if ( Json::Value::isNull(v2) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  BookScreenController::_swapPages(
    (BookScreenController *)v3,
    v4 + 2 * *(_DWORD *)(v3 + 452),
    v4 + 2 * *(_DWORD *)(v3 + 452) - 1);
  return 1;
}


  if ( Json::Value::isArray(v4) != 1 || Json::Value::size(v4) <= 2 )
{
    LODWORD(v9) = 0;
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
  }
  else
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v4, 0);
    LODWORD(v6) = Json::Value::asFloat(v5, 0.0);
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, 1u);
    HIDWORD(v6) = Json::Value::asFloat(v7, 0.0);
    v8 = (Json::Value *)Json::Value::operator[]((int)v4, 2u);
    v9 = __PAIR__(1065353216, Json::Value::asFloat(v8, 0.0));
    *(_QWORD *)v3 = v6;
    *(_QWORD *)(v3 + 8) = v9;
  return v9;
}


_DWORD *__fastcall Json::Value::Value(int a1, const char **a2)
{
  _DWORD *v2; // r4@1
  _BYTE *v3; // r7@1
  const char *v4; // r8@1
  int v5; // r6@2
  _BYTE *v6; // r0@4
  _BYTE *v7; // r5@4
  _DWORD *result; // r0@6

  v2 = (_DWORD *)a1;
  v3 = 0;
  *(_DWORD *)(a1 + 8) = (unsigned __int16)(*(_WORD *)(a1 + 8) & 0xFE00) | 0x104;
  v4 = *a2;
  if ( *a2 )
  {
    v5 = *((_DWORD *)v4 - 3);
    if ( v5 == -1 )
      v5 = j_strlen_0(*a2);
    v6 = j_malloc(v5 + 1);
    v7 = v6;
    v3 = 0;
    if ( v6 )
    {
      j___aeabi_memcpy_0((int)v6, (int)v4, v5);
      v7[v5] = 0;
      v3 = v7;
    }
  }
  result = v2;
  *v2 = v3;
  return result;
}


        if ( v14 != Json::Value::type(v13) || Json::Value::operator==(v7 + 24, (const char **)v13) != 1 )
{
        v7 = *(_DWORD *)v7;
        result = 1;
        if ( !v7 )
          return result;
      }
      result = 0;
    }
    else
    {
      result = 1;
  }
  else
  {
    result = 0;
  return result;
}


    if ( Json::Value::isArray(v11) )
{
      Json::Value::begin((Json::Value *)&v110, (int)v11);
      Json::Value::end((Json::Value *)&v109, (int)v11);
      v91 = v10;
      v12 = (Json::ValueIteratorBase *)&v110;
      v13 = (void **)&v108;
      v14 = (void **)&v99;
      v15 = 0;
      while ( Json::ValueIteratorBase::isEqual(v12, (const Json::ValueIteratorBase *)&v109) != 1 )
      {
        v16 = (Json::Value *)Json::ValueIteratorBase::deref(v12);
        Util::toString<int,(void *)0,(void *)0>(v13, v15);
        v17 = *(_QWORD *)(v6 + 4);
        if ( (_DWORD)v17 == HIDWORD(v17) )
        {
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)v6,
            (int *)v13);
        }
        else
          sub_21E8AF4((int *)v17, (int *)v13);
          *(_DWORD *)(v6 + 4) += 4;
        v18 = (void *)(v108 - 12);
        if ( (int *)(v108 - 12) != &dword_28898C0 )
          v50 = (unsigned int *)(v108 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
          }
          else
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        if ( Json::Value::isObject(v16) )
          sub_21E94B4(v14, "uuid");
          sub_157A770(&v100, (int)v16, (int *)v14, v6, v8, a5);
          v19 = (void *)(v99 - 12);
          if ( (int *)(v99 - 12) != &dword_28898C0 )
            v54 = (unsigned int *)(v99 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v55 = __ldrex(v54);
              while ( __strex(v55 - 1, v54) );
            }
            else
              v55 = (*v54)--;
            if ( v55 <= 0 )
              j_j_j_j__ZdlPv_9(v19);
          sub_21E94B4((void **)&v97, "version");
          sub_157A770(&v98, (int)v16, &v97, v6, v8, a5);
          v20 = &v95;
          v21 = (void *)(v97 - 12);
          if ( (int *)(v97 - 12) != &dword_28898C0 )
            v56 = (unsigned int *)(v97 - 4);
                v57 = __ldrex(v56);
              while ( __strex(v57 - 1, v56) );
              v20 = &v95;
              v57 = (*v56)--;
            if ( v57 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
          LegacyPackIdVersion::LegacyPackIdVersion(v20, &v100, &v98);
          PackManifest::addLegacyModuleDependency(v91, (const LegacyPackIdVersion *)v20);
          v22 = (void *)(v96 - 12);
          if ( (int *)(v96 - 12) != &dword_28898C0 )
            v60 = (unsigned int *)(v96 - 4);
                v61 = __ldrex(v60);
              while ( __strex(v61 - 1, v60) );
              v61 = (*v60)--;
            if ( v61 <= 0 )
              j_j_j_j__ZdlPv_9(v22);
          v23 = (void *)(v95 - 12);
          if ( (int *)(v95 - 12) != &dword_28898C0 )
            v62 = (unsigned int *)(v95 - 4);
                v63 = __ldrex(v62);
              while ( __strex(v63 - 1, v62) );
              v63 = (*v62)--;
            if ( v63 <= 0 )
              j_j_j_j__ZdlPv_9(v23);
          v24 = (void *)(v98 - 12);
          if ( (int *)(v98 - 12) != &dword_28898C0 )
            v64 = (unsigned int *)(v98 - 4);
                v65 = __ldrex(v64);
              while ( __strex(v65 - 1, v64) );
              v65 = (*v64)--;
            if ( v65 <= 0 )
              j_j_j_j__ZdlPv_9(v24);
          v25 = (void *)(v100 - 12);
          if ( (int *)(v100 - 12) != &dword_28898C0 )
            v26 = (unsigned int *)(v100 - 4);
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j__ZdlPv_9(v25);
          v28 = v13;
          sub_157984C(&v101, (__int64 *)v6);
          v93 = (void *)v15;
          v29 = operator new(4u);
          v30 = (int)v29;
          v31 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v101,
                  (int)&v102,
                  (int)v29);
          v32 = v31;
          v33 = 0;
          v102 = &off_26D9084;
          v34 = v31 - v30;
          v103 = 0;
          v104 = 0;
          v35 = v34 >> 2;
          v105 = 0;
          if ( v34 >> 2 )
            if ( v35 >= 0x40000000 )
              sub_21E57F4();
            v33 = operator new(v34);
          v36 = v30;
          v37 = v8;
          ptr = (_DWORD *)v36;
          v103 = v33;
          v104 = (int)v33;
          v105 = (char *)v33 + 4 * v35;
          v38 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                  v36,
                  v32,
                  (int)v33);
          v104 = v38;
          v106 = 8;
          v107 = 2;
          v102 = &off_26EABBC;
          PackReport::addError<PackDiscoveryError>(v37, (int)&v102);
          v13 = v28;
          if ( v33 != (void *)v38 )
              v41 = (int *)(*(_DWORD *)v33 - 12);
              if ( v41 != &dword_28898C0 )
              {
                v39 = (unsigned int *)(*(_DWORD *)v33 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v40 = __ldrex(v39);
                  while ( __strex(v40 - 1, v39) );
                }
                else
                  v40 = (*v39)--;
                if ( v40 <= 0 )
                  j_j_j_j__ZdlPv_9(v41);
              }
              v33 = (char *)v33 + 4;
            while ( v33 != (void *)v38 );
            v33 = v103;
          if ( v33 )
            operator delete(v33);
          v8 = v37;
          for ( i = ptr; i != (_DWORD *)v32; ++i )
            v45 = (int *)(*i - 12);
            if ( v45 != &dword_28898C0 )
              v43 = (unsigned int *)(*i - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v44 = __ldrex(v43);
                while ( __strex(v44 - 1, v43) );
              else
                v44 = (*v43)--;
              if ( v44 <= 0 )
                j_j_j_j__ZdlPv_9(v45);
          if ( ptr )
            operator delete(ptr);
          v12 = (Json::ValueIteratorBase *)&v110;
          v6 = v94;
          v15 = (signed int)v93;
          v46 = (void *)(v101 - 12);
          if ( (int *)(v101 - 12) != &dword_28898C0 )
            v58 = (unsigned int *)(v101 - 4);
                v59 = __ldrex(v58);
              while ( __strex(v59 - 1, v58) );
              v59 = (*v58)--;
            if ( v59 <= 0 )
              j_j_j_j__ZdlPv_9(v46);
          v14 = (void **)&v99;
        v47 = *(_DWORD *)(v6 + 4);
        ++v15;
        *(_DWORD *)(v6 + 4) = v47 - 4;
        v48 = *(_DWORD *)(v47 - 4);
        v49 = (void *)(v48 - 12);
        if ( (int *)(v48 - 12) != &dword_28898C0 )
          v52 = (unsigned int *)(v48 - 4);
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
            v53 = (*v52)--;
          if ( v53 <= 0 )
            j_j_j_j__ZdlPv_9(v49);
        Json::ValueIteratorBase::increment(v12);
      }
    }
    else
    {
      sub_157984C(&v111, (__int64 *)v6);
      v66 = operator new(4u);
      v67 = v66;
      v68 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
              (int)&v111,
              (int)&v112,
              (int)v66);
      v69 = v68;
      v70 = 0;
      v112 = &off_26D9084;
      v71 = v68 - (_DWORD)v67;
      v113 = 0;
      v114 = 0;
      v115 = 0;
      v72 = v71 >> 2;
      if ( v71 >> 2 )
        if ( v72 >= 0x40000000 )
          sub_21E57F4();
        v70 = operator new(v71);
      v113 = v70;
      v114 = (int)v70;
      v115 = (char *)v70 + 4 * v72;
      v73 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
              (int)v67,
              v69,
              (int)v70);
      v114 = v73;
      v116 = 8;
      v117 = 2;
      v112 = &off_26EABBC;
      PackReport::addError<PackDiscoveryError>(v8, (int)&v112);
      if ( v70 != (void *)v73 )
        v74 = &v118;
        do
          v78 = (int *)(*(_DWORD *)v70 - 12);
          if ( v78 != &dword_28898C0 )
            v75 = (unsigned int *)(*(_DWORD *)v70 - 4);
                v76 = __ldrex(v75);
              while ( __strex(v76 - 1, v75) );
              v76 = (*v75)--;
            if ( v76 <= 0 )
              v77 = v74;
              j_j_j_j__ZdlPv_9(v78);
              v74 = v77;
          v70 = (char *)v70 + 4;
        while ( v70 != (void *)v73 );
        v70 = v113;
      if ( v70 )
        operator delete(v70);
      if ( v67 != (_DWORD *)v69 )
        v79 = v67;
          v82 = (int *)(*v79 - 12);
          if ( v82 != &dword_28898C0 )
            v80 = (unsigned int *)(*v79 - 4);
                v81 = __ldrex(v80);
              while ( __strex(v81 - 1, v80) );
              v81 = (*v80)--;
            if ( v81 <= 0 )
              j_j_j_j__ZdlPv_9(v82);
          ++v79;
        while ( v79 != (_DWORD *)v69 );
      if ( v67 )
        operator delete(v67);
      v83 = (void *)(v111 - 12);
      if ( (int *)(v111 - 12) != &dword_28898C0 )
        v89 = (unsigned int *)(v111 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v90 = __ldrex(v89);
          while ( __strex(v90 - 1, v89) );
          v90 = (*v89)--;
        if ( v90 <= 0 )
          j_j_j_j__ZdlPv_9(v83);
  }
  v84 = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v6 + 4) = v84 - 4;
  v85 = *(_DWORD *)(v84 - 4);
  v86 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
  {
    v87 = (unsigned int *)(v85 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v86);
}


int __fastcall Json::Value::Value(int result, int a2, unsigned __int64 a3)
{
  *(_BYTE *)(result + 8) = 2;
  *(_DWORD *)(result + 12) = 0;
  *(_QWORD *)result = a3;
  return result;
}


int __fastcall Json::ValueIterator::ValueIterator(int result)
{
  *(_DWORD *)result = 0;
  *(_BYTE *)(result + 4) = 1;
  return result;
}


void __fastcall Json::Value::CommentInfo::setComment(Json::Value::CommentInfo *this, const char *a2)
{
  Json::Value::CommentInfo *v2; // r8@1
  const char *v3; // r5@1
  void *v4; // r0@1
  size_t v5; // r0@4
  int v6; // r6@4
  _BYTE *v7; // r0@4
  _BYTE *v8; // r4@4
  _BYTE *v9; // r7@4

  v2 = this;
  v3 = a2;
  v4 = *(void **)this;
  if ( v4 )
    j_free(v4);
  if ( v3 )
  {
    v5 = j_strlen_0(v3);
    v6 = v5;
    v7 = j_malloc(v5 + 1);
    v8 = v7;
    v9 = 0;
    if ( v7 )
    {
      j___aeabi_memcpy_0((int)v7, (int)v3, v6);
      v8[v6] = 0;
      v9 = v8;
    }
    *(_DWORD *)v2 = v9;
  }
  else
    *(_DWORD *)v2 = 0;
}


      if ( Json::Value::isArray(v23) )
{
        Json::Value::begin((Json::Value *)&v294, (int)v23);
        Json::Value::end((Json::Value *)&v293, (int)v23);
        v26 = &v285;
        v27 = (Json::ValueIteratorBase *)&v294;
        v28 = (const Json::ValueIteratorBase *)&v293;
        v29 = (void **)&v292;
        v30 = 0;
        while ( Json::ValueIteratorBase::isEqual(v27, v28) != 1 )
        {
          v31 = (Json::Value *)Json::ValueIteratorBase::deref(v27);
          Util::toString<int,(void *)0,(void *)0>(v29, v30);
          if ( v263 == v264 )
          {
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
              (unsigned __int64 *)&v262,
              (int *)v29);
          }
          else
            sub_21E8AF4(v263, (int *)v29);
            ++v263;
          v32 = (void *)(v292 - 12);
          if ( (int *)(v292 - 12) != &dword_28898C0 )
            v65 = (unsigned int *)(v292 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v66 = __ldrex(v65);
              while ( __strex(v66 - 1, v65) );
            }
            else
              v66 = (*v65)--;
            if ( v66 <= 0 )
              j_j_j_j__ZdlPv_9(v32);
          if ( Json::Value::isObject(v31) )
            sub_21E94B4((void **)&v283, "uuid");
            sub_1579C1C((int)&v284, (int)v31, &v283, (int *)&Util::EMPTY_STRING, (int)&v262, v5, 0);
            v33 = (void *)(v283 - 12);
            if ( (int *)(v283 - 12) != &dword_28898C0 )
              v69 = (unsigned int *)(v283 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v70 = __ldrex(v69);
                while ( __strex(v70 - 1, v69) );
                v26 = &v285;
              }
              else
                v70 = (*v69)--;
              if ( v70 <= 0 )
                j_j_j_j__ZdlPv_9(v33);
            sub_21E94B4((void **)&v278, "version");
            sub_157A874((SemVersion *)&v279, (int)v31, &v278, (int)&v262, v5, 0, 0);
            v34 = (void *)(v278 - 12);
            if ( (int *)(v278 - 12) != &dword_28898C0 )
              v71 = (unsigned int *)(v278 - 4);
                  v72 = __ldrex(v71);
                while ( __strex(v72 - 1, v71) );
                v72 = (*v71)--;
              if ( v72 <= 0 )
                j_j_j_j__ZdlPv_9(v34);
            PackIdVersion::PackIdVersion((int)&v274, (int)&v284, (int)&v279, 0);
            PackManifest::addPackDependency(v245, (const PackIdVersion *)&v274);
            v29 = (void **)&v292;
            v35 = v28;
            v36 = (void *)(v277 - 12);
            if ( (int *)(v277 - 12) != &dword_28898C0 )
              v75 = (unsigned int *)(v277 - 4);
                  v76 = __ldrex(v75);
                while ( __strex(v76 - 1, v75) );
                v29 = (void **)&v292;
                v76 = (*v75)--;
              if ( v76 <= 0 )
                j_j_j_j__ZdlPv_9(v36);
            v27 = (Json::ValueIteratorBase *)&v294;
            v37 = (void *)(v276 - 12);
            if ( (int *)(v276 - 12) != &dword_28898C0 )
              v77 = (unsigned int *)(v276 - 4);
                  v78 = __ldrex(v77);
                while ( __strex(v78 - 1, v77) );
                v78 = (*v77)--;
              if ( v78 <= 0 )
                j_j_j_j__ZdlPv_9(v37);
            v38 = (void *)(v275 - 12);
            if ( (int *)(v275 - 12) != &dword_28898C0 )
              v79 = (unsigned int *)(v275 - 4);
                  v80 = __ldrex(v79);
                while ( __strex(v80 - 1, v79) );
                v80 = (*v79)--;
              if ( v80 <= 0 )
                j_j_j_j__ZdlPv_9(v38);
            v39 = (void *)(v282 - 12);
            if ( (int *)(v282 - 12) != &dword_28898C0 )
              v81 = (unsigned int *)(v282 - 4);
                  v82 = __ldrex(v81);
                while ( __strex(v82 - 1, v81) );
                v82 = (*v81)--;
              if ( v82 <= 0 )
                j_j_j_j__ZdlPv_9(v39);
            v40 = (void *)(v281 - 12);
            if ( (int *)(v281 - 12) != &dword_28898C0 )
              v83 = (unsigned int *)(v281 - 4);
                  v84 = __ldrex(v83);
                while ( __strex(v84 - 1, v83) );
                v84 = (*v83)--;
              if ( v84 <= 0 )
                j_j_j_j__ZdlPv_9(v40);
            v41 = (void *)(v280 - 12);
            if ( (int *)(v280 - 12) != &dword_28898C0 )
              v42 = (unsigned int *)(v280 - 4);
                  v43 = __ldrex(v42);
                while ( __strex(v43 - 1, v42) );
                v43 = (*v42)--;
              if ( v43 <= 0 )
                j_j_j_j__ZdlPv_9(v41);
            sub_157984C(v26, (__int64 *)&v262);
            v44 = operator new(4u);
            v45 = v44;
            v46 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)v26,
                    (int)&v286,
                    (int)v44);
            v47 = v46;
            v48 = v28;
            v286 = &off_26D9084;
            v49 = v46 - (_DWORD)v45;
            v50 = 0;
            v51 = v49 >> 2;
            v287 = 0;
            v288 = 0;
            v289 = 0;
            if ( v49 >> 2 )
              if ( v51 >= 0x40000000 )
                sub_21E57F4();
              v50 = operator new(v49);
            v287 = v50;
            v288 = (int)v50;
            v289 = (char *)v50 + 4 * v51;
            v52 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                    (int)v45,
                    v47,
                    (int)v50);
            v288 = v52;
            v290 = 8;
            v291 = 2;
            v286 = &off_26EABBC;
            PackReport::addError<PackDiscoveryError>(v5, (int)&v286);
            if ( v50 != (void *)v52 )
                v55 = (int *)(*(_DWORD *)v50 - 12);
                if ( v55 != &dword_28898C0 )
                {
                  v53 = (unsigned int *)(*(_DWORD *)v50 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v54 = __ldrex(v53);
                    while ( __strex(v54 - 1, v53) );
                  }
                  else
                    v54 = (*v53)--;
                  if ( v54 <= 0 )
                    j_j_j_j__ZdlPv_9(v55);
                }
                v50 = (char *)v50 + 4;
              while ( v50 != (void *)v52 );
              v50 = v287;
            if ( v50 )
              operator delete(v50);
            for ( i = v45; i != (_DWORD *)v47; ++i )
              v59 = (int *)(*i - 12);
              if ( v59 != &dword_28898C0 )
                v57 = (unsigned int *)(*i - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v58 = __ldrex(v57);
                  while ( __strex(v58 - 1, v57) );
                else
                  v58 = (*v57)--;
                if ( v58 <= 0 )
                  j_j_j_j__ZdlPv_9(v59);
            v60 = &v285;
            if ( v45 )
              operator delete(v45);
            v35 = v48;
            v61 = (void *)(v285 - 12);
            if ( (int *)(v285 - 12) != &dword_28898C0 )
              v73 = (unsigned int *)(v285 - 4);
                  v74 = __ldrex(v73);
                while ( __strex(v74 - 1, v73) );
                v60 = &v285;
                v74 = (*v73)--;
              if ( v74 <= 0 )
                j_j_j_j__ZdlPv_9(v61);
            v26 = v60;
          ++v30;
          v28 = v35;
          v62 = v263 - 1;
          v263 = v62;
          v63 = *v62;
          v64 = (void *)(v63 - 12);
          if ( (int *)(v63 - 12) != &dword_28898C0 )
            v67 = (unsigned int *)(v63 - 4);
                v68 = __ldrex(v67);
              while ( __strex(v68 - 1, v67) );
              v68 = (*v67)--;
            if ( v68 <= 0 )
              j_j_j_j__ZdlPv_9(v64);
          Json::ValueIteratorBase::increment(v27);
        }
      }
      else
      {
        v242 = v4;
        sub_157984C(&v295, (__int64 *)&v262);
        v85 = operator new(4u);
        v86 = v85;
        v87 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                (int)&v295,
                (int)&v296,
                (int)v85);
        v88 = v87;
        v89 = 0;
        v296 = &off_26D9084;
        v90 = v87 - (_DWORD)v86;
        v297 = 0;
        v298 = 0;
        v299 = 0;
        v91 = v90 >> 2;
        if ( v90 >> 2 )
          if ( v91 >= 0x40000000 )
            sub_21E57F4();
          v89 = operator new(v90);
        v297 = v89;
        v298 = (int)v89;
        v299 = (char *)v89 + 4 * v91;
        v92 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                (int)v86,
                v88,
                (int)v89);
        v298 = v92;
        v300 = 8;
        v301 = 2;
        v296 = &off_26EABBC;
        PackReport::addError<PackDiscoveryError>(v5, (int)&v296);
        if ( v89 != (void *)v92 )
          do
            v95 = (int *)(*(_DWORD *)v89 - 12);
            if ( v95 != &dword_28898C0 )
              v93 = (unsigned int *)(*(_DWORD *)v89 - 4);
                  v94 = __ldrex(v93);
                while ( __strex(v94 - 1, v93) );
                v94 = (*v93)--;
              if ( v94 <= 0 )
                j_j_j_j__ZdlPv_9(v95);
            v89 = (char *)v89 + 4;
          while ( v89 != (void *)v92 );
          v89 = v297;
        if ( v89 )
          operator delete(v89);
        if ( v86 != (_DWORD *)v88 )
          v96 = v86;
            v99 = (int *)(*v96 - 12);
            if ( v99 != &dword_28898C0 )
              v97 = (unsigned int *)(*v96 - 4);
                  v98 = __ldrex(v97);
                while ( __strex(v98 - 1, v97) );
                v98 = (*v97)--;
              if ( v98 <= 0 )
                j_j_j_j__ZdlPv_9(v99);
            ++v96;
          while ( v96 != (_DWORD *)v88 );
        if ( v86 )
          operator delete(v86);
        v4 = v242;
        v100 = (void *)(v295 - 12);
        if ( (int *)(v295 - 12) != &dword_28898C0 )
          v236 = (unsigned int *)(v295 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v237 = __ldrex(v236);
            while ( __strex(v237 - 1, v236) );
            v237 = (*v236)--;
          if ( v237 <= 0 )
            j_j_j_j__ZdlPv_9(v100);
    }
    v101 = v263 - 1;
    v263 = v101;
    v102 = *v101;
    v103 = (void *)(v102 - 12);
    if ( (int *)(v102 - 12) != &dword_28898C0 )
    {
      v226 = (unsigned int *)(v102 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v227 = __ldrex(v226);
        while ( __strex(v227 - 1, v226) );
        v227 = (*v226)--;
      if ( v227 <= 0 )
        j_j_j_j__ZdlPv_9(v103);
    v105 = v263;
    v104 = v262;
    if ( v262 != v263 )
      do
        v108 = (int *)(*v104 - 12);
        if ( v108 != &dword_28898C0 )
          v106 = (unsigned int *)(*v104 - 4);
              v107 = __ldrex(v106);
            while ( __strex(v107 - 1, v106) );
            v107 = (*v106)--;
          if ( v107 <= 0 )
            j_j_j_j__ZdlPv_9(v108);
        ++v104;
      while ( v104 != v105 );
      v104 = v262;
    v6 = v245;
    if ( v104 )
      operator delete(v104);
    v261 = 0;
    v259 = 0;
    v260 = (void *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                     0,
                     0);
    sub_15769E0(v4, (int)&v259, v245, v5);
    v110 = (int)v260;
    v109 = v259;
    if ( v259 != v260 )
      v111 = &v329;
        v115 = (int *)(*(_DWORD *)v109 - 12);
        if ( v115 != &dword_28898C0 )
          v112 = (unsigned int *)(*(_DWORD *)v109 - 4);
              v113 = __ldrex(v112);
            while ( __strex(v113 - 1, v112) );
            v113 = (*v112)--;
          if ( v113 <= 0 )
            v114 = v111;
            j_j_j_j__ZdlPv_9(v115);
            v111 = v114;
        v109 = (char *)v109 + 4;
      while ( v109 != (void *)v110 );
      v109 = v259;
      v6 = v245;
    if ( v109 )
      operator delete(v109);
    v258 = 0;
    v256 = 0;
    v257 = (void *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
    v116 = (int *)sub_21E94B4((void **)&v255, "legacy_module_dependencies");
    sub_1577D68(v4, (int)&v256, v6, v5, 0, v116);
    v117 = (void *)(v255 - 12);
    if ( (int *)(v255 - 12) != &dword_28898C0 )
      v228 = (unsigned int *)(v255 - 4);
          v229 = __ldrex(v228);
        while ( __strex(v229 - 1, v228) );
        v229 = (*v228)--;
      if ( v229 <= 0 )
        j_j_j_j__ZdlPv_9(v117);
    v119 = (int)v257;
    v118 = v256;
    if ( v256 != v257 )
      v120 = &v329;
      v246 = v6;
        v124 = (int *)(*(_DWORD *)v118 - 12);
        if ( v124 != &dword_28898C0 )
          v121 = (unsigned int *)(*(_DWORD *)v118 - 4);
              v122 = __ldrex(v121);
            while ( __strex(v122 - 1, v121) );
            v122 = (*v121)--;
          if ( v122 <= 0 )
            v123 = v120;
            j_j_j_j__ZdlPv_9(v124);
            v120 = v123;
        v118 = (char *)v118 + 4;
      while ( v118 != (void *)v119 );
      v118 = v256;
      v6 = v246;
    if ( v118 )
      operator delete(v118);
    if ( v243 )
      v254 = 0;
      v252 = 0;
      v253 = (int *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                      0,
                      0);
      sub_21E94B4((void **)&v328, "subpacks");
      if ( v253 )
        sub_21E8AF4(v253, &v328);
        ++v253;
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)&v252,
          &v328);
      v125 = (void *)(v328 - 12);
      if ( (int *)(v328 - 12) != &dword_28898C0 )
        v230 = (unsigned int *)(v328 - 4);
        if ( &pthread_create )
          __dmb();
            v231 = __ldrex(v230);
          while ( __strex(v231 - 1, v230) );
        else
          v231 = (*v230)--;
        if ( v231 <= 0 )
          j_j_j_j__ZdlPv_9(v125);
      sub_21E94B4((void **)&v327, "subpacks");
      v126 = (Json::Value *)Json::Value::operator[](v4, (const char **)&v327);
      v127 = Json::Value::isNull(v126);
      v128 = (void *)(v327 - 12);
      if ( (int *)(v327 - 12) != &dword_28898C0 )
        v232 = (unsigned int *)(v327 - 4);
            v233 = __ldrex(v232);
          while ( __strex(v233 - 1, v232) );
          v233 = (*v232)--;
        if ( v233 <= 0 )
          j_j_j_j__ZdlPv_9(v128);
      if ( !v127 )
        if ( Json::Value::isArray(v126) )
          Json::Value::begin((Json::Value *)&v320, (int)v126);
          Json::Value::end((Json::Value *)&v319, (int)v126);
          v129 = (Json::ValueIteratorBase *)&v320;
          v130 = (int *)&v286;
          v131 = &v308;
          v247 = v6;
          v132 = 0;
          while ( 1 )
            if ( Json::ValueIteratorBase::isEqual(v129, (const Json::ValueIteratorBase *)&v319) == 1 )
              v6 = v247;
              goto LABEL_427;
            v133 = (Json::Value *)Json::ValueIteratorBase::deref(v129);
            Util::toString<int,(void *)0,(void *)0>((void **)&v318, v132);
            if ( v253 == v254 )
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                (unsigned __int64 *)&v252,
                &v318);
              sub_21E8AF4(v253, &v318);
              ++v253;
            v134 = (void *)(v318 - 12);
            if ( (int *)(v318 - 12) != &dword_28898C0 )
              v169 = (unsigned int *)(v318 - 4);
                  v170 = __ldrex(v169);
                while ( __strex(v170 - 1, v169) );
                v170 = (*v169)--;
              if ( v170 <= 0 )
                j_j_j_j__ZdlPv_9(v134);
            if ( Json::Value::isObject(v133) )
              v309 = (char *)&unk_28898CC;
              v310 = (char *)&unk_28898CC;
              v311 = 0;
              sub_21E94B4((void **)&v307, "folder_name");
              ptr = (char *)v132;
              v135 = v131;
              sub_157A770(v131, (int)v133, &v307, (int)&v252, v5, 0);
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)&v309,
                v131);
              v136 = (void *)(v308 - 12);
              if ( (int *)(v308 - 12) != &dword_28898C0 )
                v173 = (unsigned int *)(v308 - 4);
                    v174 = __ldrex(v173);
                  while ( __strex(v174 - 1, v173) );
                  v174 = (*v173)--;
                if ( v174 <= 0 )
                  j_j_j_j__ZdlPv_9(v136);
              v137 = (void *)(v307 - 12);
              if ( (int *)(v307 - 12) != &dword_28898C0 )
                v175 = (unsigned int *)(v307 - 4);
                    v176 = __ldrex(v175);
                  while ( __strex(v176 - 1, v175) );
                  v176 = (*v175)--;
                if ( v176 <= 0 )
                  j_j_j_j__ZdlPv_9(v137);
              sub_21E94B4((void **)&v305, "name");
              sub_157A770(&v306, (int)v133, &v305, (int)&v252, v5, 0);
                (int *)&v310,
                &v306);
              v129 = (Json::ValueIteratorBase *)&v320;
              v138 = (void *)(v306 - 12);
              if ( (int *)(v306 - 12) != &dword_28898C0 )
                v177 = (unsigned int *)(v306 - 4);
                    v178 = __ldrex(v177);
                  while ( __strex(v178 - 1, v177) );
                  v178 = (*v177)--;
                if ( v178 <= 0 )
                  j_j_j_j__ZdlPv_9(v138);
              v139 = (void *)(v305 - 12);
              if ( (int *)(v305 - 12) != &dword_28898C0 )
                v179 = (unsigned int *)(v305 - 4);
                    v180 = __ldrex(v179);
                  while ( __strex(v180 - 1, v179) );
                  v180 = (*v179)--;
                if ( v180 <= 0 )
                  j_j_j_j__ZdlPv_9(v139);
              sub_21E94B4((void **)&v304, "memory_tier");
              v130 = (int *)&v286;
              v140 = (Json::Value *)Json::Value::operator[]((int)v133, (const char **)&v304);
              v141 = Json::Value::isNull(v140);
              v142 = (void *)(v304 - 12);
              if ( (int *)(v304 - 12) != &dword_28898C0 )
                v181 = (unsigned int *)(v304 - 4);
                    v182 = __ldrex(v181);
                  while ( __strex(v182 - 1, v181) );
                  v182 = (*v181)--;
                if ( v182 <= 0 )
                  j_j_j_j__ZdlPv_9(v142);
              if ( !v141 && Json::Value::isInt(v140) == 1 )
                v311 = Json::Value::asInt(v140, 0);
              SubpackInfoCollection::addSubpackInfo(v243, (int *)&v309);
              v131 = v135;
              v143 = v310 - 12;
              if ( (int *)(v310 - 12) != &dword_28898C0 )
                v183 = (unsigned int *)(v310 - 4);
                    v184 = __ldrex(v183);
                  while ( __strex(v184 - 1, v183) );
                  v184 = (*v183)--;
                if ( v184 <= 0 )
                  j_j_j_j__ZdlPv_9(v143);
              v144 = ptr;
              v145 = v309 - 12;
              if ( (int *)(v309 - 12) != &dword_28898C0 )
                v146 = (unsigned int *)(v309 - 4);
                  v147 = (int *)&v286;
                    v148 = __ldrex(v146);
                  while ( __strex(v148 - 1, v146) );
                  goto LABEL_345;
                goto LABEL_358;
              sub_157984C(&v285, (__int64 *)&v252);
              v149 = operator new(4u);
              v150 = (int)v149;
              v151 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v285,
                       (int)v130,
                       (int)v149);
              v152 = v151;
              v153 = 0;
              v312 = &off_26D9084;
              v154 = v151 - v150;
              v313 = 0;
              v314 = 0;
              v155 = v154 >> 2;
              v315 = 0;
              if ( v154 >> 2 )
                if ( v155 >= 0x40000000 )
                  sub_21E57F4();
                v153 = operator new(v154);
              v156 = v132;
              v313 = v153;
              v314 = (int)v153;
              v315 = (char *)v153 + 4 * v155;
              v157 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                       v150,
                       v152,
                       (int)v153);
              v314 = v157;
              v316 = 8;
              v317 = 2;
              v312 = &off_26EABBC;
              PackReport::addError<PackDiscoveryError>(v5, (int)&v312);
              if ( v153 != (void *)v157 )
                  v160 = (int *)(*(_DWORD *)v153 - 12);
                  if ( v160 != &dword_28898C0 )
                    v158 = (unsigned int *)(*(_DWORD *)v153 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v159 = __ldrex(v158);
                      while ( __strex(v159 - 1, v158) );
                    }
                    else
                      v159 = (*v158)--;
                    if ( v159 <= 0 )
                      j_j_j_j__ZdlPv_9(v160);
                  v153 = (char *)v153 + 4;
                while ( v153 != (void *)v157 );
                v153 = v313;
              if ( v153 )
                operator delete(v153);
              v161 = v150 == v152;
              v162 = (_DWORD *)v150;
              ptra = (void *)v150;
              v144 = (char *)v156;
              if ( !v161 )
                  v165 = (int *)(*v162 - 12);
                  if ( v165 != &dword_28898C0 )
                    v163 = (unsigned int *)(*v162 - 4);
                        v164 = __ldrex(v163);
                      while ( __strex(v164 - 1, v163) );
                      v164 = (*v163)--;
                    if ( v164 <= 0 )
                      j_j_j_j__ZdlPv_9(v165);
                  ++v162;
                while ( v162 != (_DWORD *)v152 );
              if ( ptra )
                operator delete(ptra);
              v131 = &v308;
              v145 = (char *)(v285 - 12);
              if ( (int *)(v285 - 12) != &dword_28898C0 )
                v146 = (unsigned int *)(v285 - 4);
LABEL_345:
                  v130 = v147;
LABEL_359:
                  if ( v148 <= 0 )
                    j_j_j_j__ZdlPv_9(v145);
                  goto LABEL_320;
LABEL_358:
                v148 = (*v146)--;
                goto LABEL_359;
LABEL_320:
            v132 = (signed int)(v144 + 1);
            v166 = v253 - 1;
            v253 = v166;
            v167 = *v166;
            v168 = (void *)(v167 - 12);
            if ( (int *)(v167 - 12) != &dword_28898C0 )
              v171 = (unsigned int *)(v167 - 4);
                  v172 = __ldrex(v171);
                while ( __strex(v172 - 1, v171) );
                v172 = (*v171)--;
              if ( v172 <= 0 )
                j_j_j_j__ZdlPv_9(v168);
            Json::ValueIteratorBase::increment(v129);
        sub_157984C(&v295, (__int64 *)&v252);
        v185 = operator new(4u);
        v186 = v185;
        v187 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                 (int)&v295,
                 (int)&v296,
                 (int)v185);
        v188 = v187;
        v189 = 0;
        v321 = &off_26D9084;
        v190 = v187 - (_DWORD)v186;
        v322 = 0;
        v323 = 0;
        v324 = 0;
        v191 = v190 >> 2;
        if ( v190 >> 2 )
          if ( v191 >= 0x40000000 )
          v189 = operator new(v190);
        v322 = v189;
        v323 = (int)v189;
        v324 = (char *)v189 + 4 * v191;
        v192 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                 (int)v186,
                 v188,
                 (int)v189);
        v323 = v192;
        v325 = 8;
        v326 = 2;
        v321 = &off_26EABBC;
        PackReport::addError<PackDiscoveryError>(v5, (int)&v321);
        v248 = v6;
        if ( v189 != (void *)v192 )
          v193 = &v329;
            v197 = (int *)(*(_DWORD *)v189 - 12);
            if ( v197 != &dword_28898C0 )
              v194 = (unsigned int *)(*(_DWORD *)v189 - 4);
                  v195 = __ldrex(v194);
                while ( __strex(v195 - 1, v194) );
                v195 = (*v194)--;
              if ( v195 <= 0 )
                v196 = v193;
                j_j_j_j__ZdlPv_9(v197);
                v193 = v196;
            v189 = (char *)v189 + 4;
          while ( v189 != (void *)v192 );
          v189 = v322;
        if ( v189 )
          operator delete(v189);
        if ( v186 != (_DWORD *)v188 )
          v198 = v186;
            v201 = (int *)(*v198 - 12);
            if ( v201 != &dword_28898C0 )
              v199 = (unsigned int *)(*v198 - 4);
                  v200 = __ldrex(v199);
                while ( __strex(v200 - 1, v199) );
                v200 = (*v199)--;
              if ( v200 <= 0 )
                j_j_j_j__ZdlPv_9(v201);
            ++v198;
          while ( v198 != (_DWORD *)v188 );
        if ( v186 )
          operator delete(v186);
        v6 = v248;
        v202 = (void *)(v295 - 12);
          v238 = (unsigned int *)(v295 - 4);
              v239 = __ldrex(v238);
            while ( __strex(v239 - 1, v238) );
            v239 = (*v238)--;
          if ( v239 <= 0 )
            j_j_j_j__ZdlPv_9(v202);
LABEL_427:
      v203 = v253 - 1;
      v253 = v203;
      v204 = *v203;
      v205 = (void *)(v204 - 12);
      if ( (int *)(v204 - 12) != &dword_28898C0 )
        v234 = (unsigned int *)(v204 - 4);
            v235 = __ldrex(v234);
          while ( __strex(v235 - 1, v234) );
          v235 = (*v234)--;
        if ( v235 <= 0 )
          j_j_j_j__ZdlPv_9(v205);
      v207 = v253;
      v206 = (int *)v252;
      if ( v252 != v253 )
          v210 = (int *)(*v206 - 12);
          if ( v210 != &dword_28898C0 )
            v208 = (unsigned int *)(*v206 - 4);
                v209 = __ldrex(v208);
              while ( __strex(v209 - 1, v208) );
              v209 = (*v208)--;
            if ( v209 <= 0 )
              j_j_j_j__ZdlPv_9(v210);
          ++v206;
        while ( v206 != v207 );
        v206 = (int *)v252;
      if ( v206 )
        operator delete(v206);
    v251 = 0;
    v249 = 0;
    v250 = (void *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
    sub_1578A88((int)&v249, v6, (unsigned int)v5);
    v212 = (int)v250;
    v211 = v249;
    if ( v249 != v250 )
        v215 = (int *)(*(_DWORD *)v211 - 12);
        if ( v215 != &dword_28898C0 )
          v213 = (unsigned int *)(*(_DWORD *)v211 - 4);
              v214 = __ldrex(v213);
            while ( __strex(v214 - 1, v213) );
            v214 = (*v213)--;
          if ( v214 <= 0 )
            j_j_j_j__ZdlPv_9(v215);
        v211 = (char *)v211 + 4;
      while ( v211 != (void *)v212 );
      v211 = v249;
    if ( v211 )
      operator delete(v211);
  }
  v216 = PackManifest::getPackType(v6);
  PackReport::setPackType(v5, v216);
  return Json::Value::~Value((Json::Value *)&v273);
}


  if ( Json::Reader::parse((int)&v84, v3, (int)&v85, 1) == 1 && Json::Value::isArray((Json::Value *)&v85) == 1 )
{
    Json::Value::begin((Json::Value *)&v83, (int)&v85);
    Json::Value::end((Json::Value *)&v82, (int)&v85);
    while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v83, (const Json::ValueIteratorBase *)&v82) != 1 )
    {
      v6 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v83);
      if ( Json::Value::isObject(v6) == 1 )
      {
        v7 = (Json::Value *)Json::Value::operator[](v6, "pack_id");
        v8 = (SemVersion *)Json::Value::operator[](v6, "version");
        if ( Json::Value::isString(v7) == 1 )
        {
          SemVersion::SemVersion((SemVersion *)&v78);
          if ( Json::Value::isArray(v8) == 1 )
          {
            SemVersion::fromJsonArray(v8, (const Json::Value *)&v78, v9);
          }
          else if ( Json::Value::isString(v8) == 1 )
            sub_DA7364((void **)&v76, (const char *)&unk_257BC67);
            Json::Value::asString(&v77, (int)v8, &v76);
            SemVersion::fromString((const void **)&v77, (int)&v78);
            v10 = (void *)(v77 - 12);
            if ( (int *)(v77 - 12) != &dword_28898C0 )
            {
              v49 = (unsigned int *)(v77 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v50 = __ldrex(v49);
                while ( __strex(v50 - 1, v49) );
              }
              else
                v50 = (*v49)--;
              if ( v50 <= 0 )
                j_j_j_j_j__ZdlPv_9(v10);
            }
            v11 = (void *)(v76 - 12);
            if ( (int *)(v76 - 12) != &dword_28898C0 )
              v51 = (unsigned int *)(v76 - 4);
                  v52 = __ldrex(v51);
                while ( __strex(v52 - 1, v51) );
                v52 = (*v51)--;
              if ( v52 <= 0 )
                j_j_j_j_j__ZdlPv_9(v11);
          sub_DA7364((void **)&v64, (const char *)&unk_257BC67);
          Json::Value::asString(&v65, (int)v7, &v64);
          mce::UUID::fromString((int)&v66, &v65);
          PackIdVersion::PackIdVersion((int)&v67, (int)&v66, (int)&v78, 0);
          v12 = (void *)(v65 - 12);
          if ( (int *)(v65 - 12) != &dword_28898C0 )
            v27 = (unsigned int *)(v65 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
            else
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j_j__ZdlPv_9(v12);
          v13 = (void *)(v64 - 12);
          if ( (int *)(v64 - 12) != &dword_28898C0 )
            v29 = (unsigned int *)(v64 - 4);
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
              v30 = (*v29)--;
            if ( v30 <= 0 )
              j_j_j_j_j__ZdlPv_9(v13);
          v54 = *(_DWORD *)&v67;
          v55 = v68;
          v56 = v69;
          v57 = v70;
          SemVersion::SemVersion((int)&v58, (int)&v71);
          v62 = v75;
          v63 = v5;
          v14 = *(_QWORD *)(v4 + 4);
          if ( (_DWORD)v14 == HIDWORD(v14) )
            std::vector<DlcDependency,std::allocator<DlcDependency>>::_M_emplace_back_aux<DlcDependency>(
              (unsigned __int64 *)v4,
              (int)&v54);
          else
            v15 = v55;
            v16 = v56;
            v17 = v57;
            *(_DWORD *)v14 = v54;
            *(_DWORD *)(v14 + 4) = v15;
            *(_DWORD *)(v14 + 8) = v16;
            *(_DWORD *)(v14 + 12) = v17;
            SemVersion::SemVersion(v14 + 16, (int)&v58);
            *(_BYTE *)(v14 + 40) = v62;
            *(_DWORD *)(v14 + 48) = v63;
            *(_DWORD *)(v4 + 4) += 56;
          v18 = (void *)(v61 - 12);
          if ( (int *)(v61 - 12) != &dword_28898C0 )
            v31 = (unsigned int *)(v61 - 4);
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              v32 = (*v31)--;
            if ( v32 <= 0 )
              j_j_j_j_j__ZdlPv_9(v18);
          v19 = (void *)(v60 - 12);
          if ( (int *)(v60 - 12) != &dword_28898C0 )
            v33 = (unsigned int *)(v60 - 4);
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
              v34 = (*v33)--;
            if ( v34 <= 0 )
              j_j_j_j_j__ZdlPv_9(v19);
          v20 = (void *)(v59 - 12);
          if ( (int *)(v59 - 12) != &dword_28898C0 )
            v35 = (unsigned int *)(v59 - 4);
                v36 = __ldrex(v35);
              while ( __strex(v36 - 1, v35) );
              v36 = (*v35)--;
            if ( v36 <= 0 )
              j_j_j_j_j__ZdlPv_9(v20);
          v21 = (void *)(v74 - 12);
          if ( (int *)(v74 - 12) != &dword_28898C0 )
            v37 = (unsigned int *)(v74 - 4);
                v38 = __ldrex(v37);
              while ( __strex(v38 - 1, v37) );
              v38 = (*v37)--;
            if ( v38 <= 0 )
              j_j_j_j_j__ZdlPv_9(v21);
          v22 = (void *)(v73 - 12);
          if ( (int *)(v73 - 12) != &dword_28898C0 )
            v39 = (unsigned int *)(v73 - 4);
                v40 = __ldrex(v39);
              while ( __strex(v40 - 1, v39) );
              v40 = (*v39)--;
            if ( v40 <= 0 )
              j_j_j_j_j__ZdlPv_9(v22);
          v23 = (void *)(v72 - 12);
          if ( (int *)(v72 - 12) != &dword_28898C0 )
            v41 = (unsigned int *)(v72 - 4);
                v42 = __ldrex(v41);
              while ( __strex(v42 - 1, v41) );
              v42 = (*v41)--;
            if ( v42 <= 0 )
              j_j_j_j_j__ZdlPv_9(v23);
          v24 = (void *)(v81 - 12);
          if ( (int *)(v81 - 12) != &dword_28898C0 )
            v43 = (unsigned int *)(v81 - 4);
                v44 = __ldrex(v43);
              while ( __strex(v44 - 1, v43) );
              v44 = (*v43)--;
            if ( v44 <= 0 )
              j_j_j_j_j__ZdlPv_9(v24);
          v25 = (void *)(v80 - 12);
          if ( (int *)(v80 - 12) != &dword_28898C0 )
            v45 = (unsigned int *)(v80 - 4);
                v46 = __ldrex(v45);
              while ( __strex(v46 - 1, v45) );
              v46 = (*v45)--;
            if ( v46 <= 0 )
              j_j_j_j_j__ZdlPv_9(v25);
          v26 = (void *)(v79 - 12);
          if ( (int *)(v79 - 12) != &dword_28898C0 )
            v47 = (unsigned int *)(v79 - 4);
                v48 = __ldrex(v47);
              while ( __strex(v48 - 1, v47) );
              v48 = (*v47)--;
            if ( v48 <= 0 )
              j_j_j_j_j__ZdlPv_9(v26);
        }
      }
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v83);
    }
  }
  Json::Reader::~Reader((Json::Reader *)&v84);
  return Json::Value::~Value((Json::Value *)&v85);
}


signed int __fastcall Json::Reader::match(Json::Reader *this, const char *a2, int a3)
{
  __int64 v3; // kr00_8@1
  signed int result; // r0@2
  int v5; // r3@3

  v3 = *((_QWORD *)this + 11);
  if ( (signed int)v3 - HIDWORD(v3) >= a3 )
  {
    v5 = a3;
    while ( v5 )
    {
      v5 = v3 - 1;
      if ( *(_BYTE *)(HIDWORD(v3) + v3 - 1) != a2[(_DWORD)v3 - 1] )
        return 0;
    }
    *((_DWORD *)this + 23) = HIDWORD(v3) + a3;
    result = 1;
  }
  else
    result = 0;
  return result;
}


  if ( !Json::Value::isNull((Json::Value *)(a2 + 8)) && Json::Value::isObject(v3) == 1 )
{
    v6 = (Json::Value *)Json::Value::operator[]((int)v3, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      Json::Value::asInt(v6, 0);
  }
  ContainerScreenController::_getCollectionName((ContainerScreenController *)&v11, v5, v2);
  ContainerScreenController::_handleDropItem(v4);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  return 4;
}


Json::Reader *__fastcall Json::Reader::Reader(Json::Reader *this, const Json::Features *a2)
{
  Json::Reader *v2; // r4@1
  const Json::Features *v3; // r8@1
  _DWORD *v4; // r10@1
  char *v5; // r7@1
  char *v6; // r5@1
  unsigned int v7; // r6@1
  char *v8; // r0@1
  int v9; // r1@1
  unsigned int v10; // r5@1
  int v11; // r2@2
  _DWORD *v12; // r0@2
  unsigned int v13; // r7@5
  void *v14; // t1@6
  char *v15; // r0@8
  char *v16; // r5@8
  unsigned int v17; // r7@8
  char *v18; // r0@8

  v2 = this;
  v3 = a2;
  v4 = j_operator new(0x20u);
  v5 = (char *)j_operator new(0x200u);
  v4[3] = v5;
  j___aeabi_memclr4_0((int)v2, 40);
  *((_DWORD *)v2 + 1) = 8;
  v6 = (char *)j_operator new(0x20u);
  *(_DWORD *)v2 = v6;
  v7 = (2 * *((_DWORD *)v2 + 1) - 2) & 0xFFFFFFFC;
  v8 = (char *)j_operator new(0x200u);
  *(_DWORD *)&v6[v7] = v8;
  v9 = (int)&v6[v7];
  v10 = (unsigned int)(v4 + 3);
  *((_DWORD *)v2 + 2) = v8;
  *((_DWORD *)v2 + 3) = v8;
  *((_DWORD *)v2 + 4) = v8 + 512;
  *((_DWORD *)v2 + 5) = v9;
  *((_DWORD *)v2 + 6) = v8;
  *((_DWORD *)v2 + 7) = v8;
  *((_DWORD *)v2 + 8) = v8 + 512;
  *((_DWORD *)v2 + 9) = v9;
  if ( v4 )
  {
    v11 = (int)v2 + 16;
    *((_DWORD *)v2 + 2) = v5;
    *((_DWORD *)v2 + 3) = v5;
    *(_DWORD *)v11 = v5 + 512;
    *(_DWORD *)(v11 + 4) = v10;
    *(_DWORD *)(v11 + 8) = v5;
    *((_DWORD *)v2 + 7) = v5;
    *((_DWORD *)v2 + 8) = v5 + 512;
    *((_DWORD *)v2 + 9) = v10;
    v10 = v9;
    v12 = *(_DWORD **)v2;
    *(_DWORD *)v2 = v4;
    *((_DWORD *)v2 + 1) = 8;
    v4 = v12;
  }
    if ( v10 < v10 + 4 )
    {
      v13 = v10 - 4;
      do
      {
        v14 = *(void **)(v13 + 4);
        v13 += 4;
        j_operator delete(v14);
      }
      while ( v13 < v10 );
    }
    j_operator delete(v4);
  j___aeabi_memclr4_0((int)v2 + 40, 40);
  *((_DWORD *)v2 + 11) = 8;
  v15 = (char *)j_operator new(0x20u);
  v16 = v15;
  *((_DWORD *)v2 + 10) = v15;
  v17 = (2 * *((_DWORD *)v2 + 11) - 2) & 0xFFFFFFFC;
  v18 = (char *)j_operator new(0x1F4u);
  *(_DWORD *)&v16[v17] = v18;
  *((_DWORD *)v2 + 15) = &v16[v17];
  *((_DWORD *)v2 + 13) = v18;
  *((_DWORD *)v2 + 14) = v18 + 500;
  *((_DWORD *)v2 + 18) = v18 + 500;
  *((_DWORD *)v2 + 19) = &v16[v17];
  *((_DWORD *)v2 + 12) = v18;
  *((_DWORD *)v2 + 16) = v18;
  *((_DWORD *)v2 + 17) = v18;
  *((_DWORD *)v2 + 20) = &unk_28898CC;
  *((_DWORD *)v2 + 26) = &unk_28898CC;
  *((_WORD *)v2 + 54) = *(_WORD *)v3;
  return v2;
}


void __fastcall Json::StyledStreamWriter::writeArrayValue(Json::StyledStreamWriter *this, const Json::Value *a2)
{
  Json::StyledStreamWriter::writeArrayValue(this, a2);
}


signed int __fastcall Json::ValueIteratorBase::isEqual(Json::ValueIteratorBase *this, const Json::ValueIteratorBase *a2)
{
  signed int result; // r0@2
  int v3; // r2@5

  if ( *((_BYTE *)this + 4) )
  {
    result = *((_BYTE *)a2 + 4);
    if ( *((_BYTE *)a2 + 4) )
      result = 1;
  }
  else
    v3 = *(_DWORD *)this;
    result = 0;
    if ( v3 == *(_DWORD *)a2 )
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  EnchantingScreenController::_enchantmentClicked(v3, v4);
  return 1;
}


signed int __fastcall Json::Value::isString(Json::Value *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 8);
  result = 0;
  if ( v1 == 4 )
    result = 1;
  return result;
}


void __fastcall Json::ValueIteratorBase::key(Json::ValueIteratorBase *this, int a2)
{
  int v2; // r7@1
  Json::ValueIteratorBase *v3; // r4@1
  signed int v4; // r5@1
  const char *v5; // r6@1
  size_t v6; // r0@3
  int v7; // r9@3
  const char *v8; // r0@3
  const char *v9; // r8@3
  __int16 v10; // r0@4
  _BYTE *v11; // r6@4
  int v12; // r9@4
  size_t v13; // r0@4
  int v14; // r10@4
  _BYTE *v15; // r0@4
  _BYTE *v16; // r7@4

  v2 = *(_DWORD *)a2;
  v3 = this;
  v4 = *(_QWORD *)(*(_DWORD *)a2 + 16) >> 32;
  v5 = (const char *)*(_QWORD *)(*(_DWORD *)a2 + 16);
  if ( !v4 )
  {
    v4 = 0;
    if ( v5 )
    {
      *((_DWORD *)this + 2) = (unsigned __int16)(*((_WORD *)this + 4) & 0xFE00) | 4;
      *(_DWORD *)this = v5;
      return;
    }
    goto LABEL_13;
  }
  if ( !v5 )
LABEL_13:
    *((_BYTE *)v3 + 8) = 2;
    *((_DWORD *)v3 + 3) = 0;
    *(_DWORD *)v3 = v4;
    *((_DWORD *)v3 + 1) = 0;
    return;
  v6 = j_strlen_0(v5);
  v7 = v6;
  v8 = (const char *)j_malloc(v6 + 1);
  v9 = v8;
  if ( !v8 )
    if ( *(_DWORD *)(v2 + 16) )
      v4 = 1;
  j___aeabi_memcpy_0((int)v8, (int)v5, v7);
  v10 = *((_WORD *)v3 + 4);
  v11 = 0;
  v9[v7] = 0;
  v12 = *(_DWORD *)(v2 + 16);
  *((_WORD *)v3 + 4) = v10 & 0xFE00 | 0x104;
  *((_DWORD *)v3 + 3) = 0;
  v13 = j_strlen_0(v9);
  v14 = v13;
  v15 = j_malloc(v13 + 1);
  v16 = v15;
  if ( v15 )
    j___aeabi_memcpy_0((int)v15, (int)v9, v14);
    v16[v14] = 0;
    v11 = v16;
  *(_DWORD *)v3 = v11;
  if ( v4 == 1 || v12 )
    j_free((void *)v9);
}


int __fastcall Json::ValueConstIterator::ValueConstIterator(int result, _DWORD *a2)
{
  *(_DWORD *)result = *a2;
  *(_BYTE *)(result + 4) = 0;
  return result;
}


Json::Value::CZString *__fastcall Json::Value::CZString::~CZString(Json::Value::CZString *this)
{
  Json::Value::CZString *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  v2 = *(void **)this;
  if ( v2 && *((_DWORD *)v1 + 1) == 1 )
    j_free(v2);
  return v1;
}


void __fastcall Json::StyledWriter::writeArrayValue(Json::StyledWriter *this, const Json::Value *a2)
{
  const Json::Value *v2; // r9@1
  Json::StyledWriter *v3; // r4@1
  int v4; // r11@1
  void *v5; // r0@3
  void *v6; // r0@4
  __int64 v7; // r5@5
  const Json::Value *v8; // r7@5
  const void **v9; // r6@6
  unsigned int v10; // r6@7
  signed int v11; // r8@7
  int v12; // r5@8
  __int64 v13; // r0@11
  int v14; // r5@13
  int v15; // r7@13
  void *v16; // r0@22
  unsigned int *v17; // r2@23
  signed int v18; // r1@25
  unsigned int v19; // r6@27
  unsigned int *v20; // r2@31
  signed int v21; // r1@33
  unsigned int *v22; // r2@35
  signed int v23; // r1@37
  char *v24; // [sp+4h] [bp-4Ch]@6
  int v25; // [sp+Ch] [bp-44h]@29
  int v26; // [sp+14h] [bp-3Ch]@3
  int v27; // [sp+1Ch] [bp-34h]@10
  int v28; // [sp+24h] [bp-2Ch]@4

  v2 = a2;
  v3 = this;
  v4 = j_Json::Value::size(a2);
  if ( !v4 )
  {
    sub_21E94B4((void **)&v27, (const char *)&unk_25DA2BA);
    if ( *((_BYTE *)v3 + 32) )
    {
      v13 = *((_QWORD *)v3 + 1);
      if ( (_DWORD)v13 == HIDWORD(v13) )
      {
        j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)((char *)v3 + 4),
          &v27);
      }
      else
        sub_21E8AF4((int *)v13, &v27);
        *((_DWORD *)v3 + 2) += 4;
    }
    else
      sub_21E72F0((const void **)v3 + 4, (const void **)&v27);
    v16 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) == &dword_28898C0 )
      return;
    v17 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      goto LABEL_44;
    goto LABEL_43;
  }
  if ( j_Json::StyledWriter::isMultineArray(v3, v2) == 1 )
    sub_21E94B4((void **)&v26, "[");
    j_Json::StyledWriter::writeIndent(v3);
    sub_21E72F0((const void **)v3 + 4, (const void **)&v26);
    v5 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    sub_21E6E1C(&v28, *((_DWORD *)v3 + 7), 32);
    sub_21E72F0((const void **)v3 + 5, (const void **)&v28);
    v6 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v28 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = *(_QWORD *)((char *)v3 + 4);
    v8 = (const Json::Value *)j_Json::Value::operator[]((int)v2, 0);
    if ( (_DWORD)v7 == HIDWORD(v7) )
      j_Json::StyledWriter::writeCommentBeforeValue(v3, v8);
      j_Json::StyledWriter::writeIndent(v3);
      j_Json::StyledWriter::writeValue(v3, v8);
      if ( v4 == 1 )
        v24 = (char *)v3 + 20;
        v19 = 1;
        {
          sub_21E7408((const void **)v3 + 4, ",", 1u);
          j_Json::StyledWriter::writeCommentAfterValueOnSameLine(v3, v8);
          v8 = (const Json::Value *)j_Json::Value::operator[]((int)v2, v19);
          j_Json::StyledWriter::writeCommentBeforeValue(v3, v8);
          j_Json::StyledWriter::writeIndent(v3);
          j_Json::StyledWriter::writeValue(v3, v8);
          ++v19;
        }
        while ( v4 != v19 );
      v24 = (char *)v3 + 20;
      v9 = (const void **)*((_DWORD *)v3 + 1);
      sub_21E72F0((const void **)v3 + 4, v9);
      if ( v4 != 1 )
        v10 = 1;
        v11 = 4;
          v8 = (const Json::Value *)j_Json::Value::operator[]((int)v2, v10);
          v12 = *((_DWORD *)v3 + 1);
          sub_21E72F0((const void **)v3 + 4, (const void **)(v12 + v11));
          ++v10;
          v11 += 4;
        while ( v4 != v10 );
    j_Json::StyledWriter::writeCommentAfterValueOnSameLine(v3, v8);
    sub_21E849C(v24, *(_DWORD *)(*((_DWORD *)v3 + 5) - 12) - *((_DWORD *)v3 + 7), 0);
    sub_21E94B4((void **)&v25, "]");
    sub_21E72F0((const void **)v3 + 4, (const void **)&v25);
    v16 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) == &dword_28898C0 )
    v17 = (unsigned int *)(v25 - 4);
LABEL_43:
    v18 = (*v17)--;
LABEL_44:
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
    return;
  sub_21E7408((const void **)v3 + 4, (char *)&unk_25DA2BD, 2u);
  v14 = 0;
  v15 = 0;
  do
    if ( v15 )
      sub_21E7408((const void **)v3 + 4, ", ", 2u);
    sub_21E72F0((const void **)v3 + 4, (const void **)(*((_DWORD *)v3 + 1) + v14));
    ++v15;
    v14 += 4;
  while ( v4 != v15 );
  sub_21E7408((const void **)v3 + 4, " ]", 2u);
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v23;
    v24 = v23;
    v23 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v24, (int)&v26, (int)v5);
    v6 = v24;
  sub_21E94B4((void **)&v22, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v25 = v22;
    v8 = (char *)&unk_28898CC;
    v22 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v7);
    v8 = v22;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v8 - 4);
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
  v10 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( (!*(_DWORD *)(v3 + 24) || (*(int (__fastcall **)(int, char **))(v3 + 28))(v3 + 16, &v25) == 1)
    && (!*(_DWORD *)(v3 + 40) || (*(int (__fastcall **)(int))(v3 + 44))(v3 + 32) == 1) )
    if ( !*(_DWORD *)(v3 + 8) )
      sub_21E5F48();
    (*(void (__fastcall **)(int, char **))(v3 + 12))(v3, &v25);
  v12 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return 1;
}


signed int __fastcall Json::Value::isNull(Json::Value *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 8);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall Json::Value::Value(int result, _DWORD *a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xFE00 | 4;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = *a2;
  return result;
}


        if ( Json::Value::asBool((Json::Value *)&v358, 0) == 1 )
{
        else
          v113 = 0;
        v357 = v113;
        v185 = *(_QWORD *)(v63 + 4);
        if ( (_DWORD)v185 != HIDWORD(v185) )
        {
          v162 = Json::Value::Value((Json::Value *)v185, v113);
          goto LABEL_226;
        }
        std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v357);
        goto def_DB036E;
      case 5:
        if ( v364 == 4 )
          if ( v380 == 4 )
          {
            ExprToken::asString((ExprToken *)&v344, (int)&v358);
            ExprToken::asString((ExprToken *)&v343, (int)v74);
            v114 = *(v344 - 3);
            v115 = *(v343 - 3);
            v116 = v114;
            if ( v114 > v115 )
              v116 = *(v343 - 3);
            v117 = memcmp(v344, v343, v116);
            if ( !v117 )
              v117 = v114 - v115;
            v118 = 0;
              v118 = 1;
            v345 = v118;
            v119 = *(_QWORD *)(v63 + 4);
            if ( (_DWORD)v119 == HIDWORD(v119) )
            {
              std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v345);
              v122 = v310;
            }
            else
              _ZF = v117 == 0;
              v120 = 0;
              if ( _ZF )
                v120 = 1;
              v121 = Json::Value::Value((Json::Value *)v119, v120);
              LODWORD(v123) = 0;
              HIDWORD(v123) = 1;
              *(_DWORD *)(v121 + 16) = 0;
              *(_DWORD *)(v121 + 20) = 0;
              *(_DWORD *)(v121 + 24) = 0;
              *(_BYTE *)(v121 + 28) = 1;
              *(_QWORD *)(v121 + 32) = v123;
              *(_DWORD *)(v121 + 40) = 1;
              *(_DWORD *)(v63 + 4) += 48;
            v261 = (char *)(v343 - 3);
            if ( v343 - 3 != v122 )
              v290 = v343 - 1;
              if ( &pthread_create )
              {
                __dmb();
                do
                  v291 = __ldrex(v290);
                while ( __strex(v291 - 1, v290) );
              }
              else
                v291 = (*v290)--;
              if ( v291 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v261);
            v262 = (char *)(v344 - 3);
            if ( v344 - 3 != v122 )
              v292 = v344 - 1;
                  v293 = __ldrex(v292);
                while ( __strex(v293 - 1, v292) );
                v293 = (*v292)--;
              if ( v293 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v262);
            v310 = v122;
            goto def_DB036E;
          }
LABEL_102:
          if ( Json::Value::asBool((Json::Value *)&v358, 0) )
            v157 = 0;
          else
            v157 = Json::Value::asBool(v74, 0) ^ 1;
          v342 = v157;
          v223 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v223 != HIDWORD(v223) )
            v162 = Json::Value::Value((Json::Value *)v223, v157);
            goto LABEL_226;
          std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v342);
          goto def_DB036E;
        if ( v380 == 4 )
          goto LABEL_102;
        _ZF = v364 == 1;
        if ( v364 != 1 )
          _ZF = v380 == 1;
        if ( _ZF )
          v189 = Json::Value::asBool((Json::Value *)&v358, 0);
          v190 = Json::Value::asBool(v74, 0);
          v191 = v190 ^ v189 ^ 1;
          v341 = v190 ^ v189 ^ 1;
          v192 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v192 != HIDWORD(v192) )
            v162 = Json::Value::Value((Json::Value *)v192, v191);
          std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v341);
          _R5 = Json::Value::asFloat((Json::Value *)&v358, 0.0);
          _R0 = Json::Value::asFloat(v74, 0.0);
          __asm { VMOV            S2, R0 }
          v240 = 0;
          __asm
            VMOV            S0, R5
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          if ( _ZF )
            v240 = 1;
          v340 = v240;
          v241 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v241 != HIDWORD(v241) )
            __asm { VCMPE.F32       S0, S2 }
            BYTE4(v241) = 0;
            __asm { VMRS            APSR_nzcv, FPSCR }
            if ( _ZF )
              BYTE4(v241) = 1;
            v162 = Json::Value::Value((Json::Value *)v241, SBYTE4(v241));
          std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v340);
      case 3:
            ExprToken::asString((ExprToken *)&v354, (int)&v358);
            ExprToken::asString((ExprToken *)&v353, (int)v74);
            v124 = *(v354 - 3);
            v125 = *(v353 - 3);
            v126 = v124;
            if ( v124 > v125 )
              v126 = *(v353 - 3);
            v127 = memcmp(v354, v353, v126);
            if ( !v127 )
              v127 = v124 - v125;
            v128 = 0;
            if ( v127 > 0 )
              v128 = 1;
            v355 = v128;
            v129 = *(_QWORD *)(v63 + 4);
            if ( (_DWORD)v129 == HIDWORD(v129) )
              std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v355);
              v132 = v310;
              _ZF = v127 == 0;
              _NF = v127 < 0;
              v130 = 0;
              if ( !_NF && !_ZF )
                v130 = 1;
              v131 = Json::Value::Value((Json::Value *)v129, v130);
              LODWORD(v133) = 0;
              HIDWORD(v133) = 1;
              *(_DWORD *)(v131 + 16) = 0;
              *(_DWORD *)(v131 + 20) = 0;
              *(_DWORD *)(v131 + 24) = 0;
              *(_BYTE *)(v131 + 28) = 1;
              *(_QWORD *)(v131 + 32) = v133;
              *(_DWORD *)(v131 + 40) = 1;
            v263 = (char *)(v353 - 3);
            if ( v353 - 3 != v132 )
              v294 = v353 - 1;
                  v295 = __ldrex(v294);
                while ( __strex(v295 - 1, v294) );
                v295 = (*v294)--;
              if ( v295 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v263);
            v264 = (char *)(v354 - 3);
            if ( v354 - 3 != v132 )
              v296 = v354 - 1;
                  v297 = __ldrex(v296);
                while ( __strex(v297 - 1, v296) );
                v297 = (*v296)--;
              if ( v297 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v264);
            v310 = v132;
LABEL_105:
          v158 = Json::Value::asBool((Json::Value *)&v358, 0);
          v159 = Json::Value::asBool(v74, 0);
          v160 = v158 & (v159 ^ 1);
          v352 = v158 & (v159 ^ 1);
          v161 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v161 != HIDWORD(v161) )
            v162 = Json::Value::Value((Json::Value *)v161, v160);
          std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v352);
          goto LABEL_105;
        _R5 = Json::Value::asFloat((Json::Value *)&v358, 0.0);
        _R0 = Json::Value::asFloat(v74, 0.0);
        __asm { VMOV            S2, R0 }
        v195 = 0;
        __asm
          VMOV            S0, R5
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v195 = 1;
        v351 = v195;
        v196 = *(_QWORD *)(v63 + 4);
        if ( (_DWORD)v196 != HIDWORD(v196) )
          __asm { VCMPE.F32       S0, S2 }
          BYTE4(v196) = 0;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            BYTE4(v196) = 1;
          v162 = Json::Value::Value((Json::Value *)v196, SBYTE4(v196));
        std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v351);
      case 4:
            ExprToken::asString((ExprToken *)&v349, (int)&v358);
            ExprToken::asString((ExprToken *)&v348, (int)v74);
            v134 = *(v349 - 3);
            v135 = *(v348 - 3);
            v136 = v134;
            if ( v134 > v135 )
              v136 = *(v348 - 3);
            v137 = memcmp(v349, v348, v136);
            if ( !v137 )
              v137 = v134 - v135;
            v138 = v137 >> 31;
            v350 = v137 >> 31;
            v139 = *(_QWORD *)(v63 + 4);
            if ( (_DWORD)v139 == HIDWORD(v139) )
              std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v350);
              v141 = v310;
              v140 = Json::Value::Value((Json::Value *)v139, v138);
              LODWORD(v142) = 0;
              HIDWORD(v142) = 1;
              *(_DWORD *)(v140 + 16) = 0;
              *(_DWORD *)(v140 + 20) = 0;
              *(_DWORD *)(v140 + 24) = 0;
              *(_BYTE *)(v140 + 28) = 1;
              *(_QWORD *)(v140 + 32) = v142;
              *(_DWORD *)(v140 + 40) = 1;
            v265 = (char *)(v348 - 3);
            if ( v348 - 3 != v141 )
              v298 = v348 - 1;
                  v299 = __ldrex(v298);
                while ( __strex(v299 - 1, v298) );
                v299 = (*v298)--;
              if ( v299 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v265);
            v266 = (char *)(v349 - 3);
            if ( v349 - 3 != v141 )
              v300 = v349 - 1;
                  v301 = __ldrex(v300);
                while ( __strex(v301 - 1, v300) );
                v301 = (*v300)--;
              if ( v301 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v266);
            v310 = v141;
LABEL_108:
          v163 = Json::Value::asBool((Json::Value *)&v358, 0);
          v164 = Json::Value::asBool(v74, 0);
          v165 = (v163 ^ 1) & v164;
          v347 = (v163 ^ 1) & v164;
          v166 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v166 != HIDWORD(v166) )
            v162 = Json::Value::Value((Json::Value *)v166, v165);
          std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v347);
          goto LABEL_108;
        v199 = 0;
        if ( _NF ^ _VF )
          v199 = 1;
        v346 = v199;
        v200 = *(_QWORD *)(v63 + 4);
        if ( (_DWORD)v200 != HIDWORD(v200) )
          BYTE4(v200) = 0;
          if ( _NF ^ _VF )
            BYTE4(v200) = 1;
          v162 = Json::Value::Value((Json::Value *)v200, SBYTE4(v200));
        std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v346);
      case 8:
          ExprToken::asString((ExprToken *)&v322, (int)&v358);
          v143 = v322;
          ExprToken::asString((ExprToken *)&v321, (int)v74);
          LODWORD(v144) = v321;
          Util::format((Util *)&v323, v143, v144);
          v145 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v145 == HIDWORD(v145) )
            std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<std::string>(
              (__int64 *)v63,
              (const void **)&v323);
            ExprToken::ExprToken((_DWORD *)v145, (const void **)&v323, 1);
            *(_DWORD *)(v63 + 4) += 48;
          v232 = (void *)(v323 - 12);
          if ( (int *)(v323 - 12) != v310 )
            v276 = (unsigned int *)(v323 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v277 = __ldrex(v276);
              while ( __strex(v277 - 1, v276) );
              v277 = (*v276)--;
            if ( v277 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v232);
          v233 = (void *)(v321 - 12);
          if ( (int *)(v321 - 12) != v310 )
            v278 = (unsigned int *)(v321 - 4);
                v279 = __ldrex(v278);
              while ( __strex(v279 - 1, v278) );
              v279 = (*v278)--;
            if ( v279 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v233);
          v228 = (char *)(v322 - 12);
          if ( (int *)(v322 - 12) != v310 )
            v229 = (unsigned int *)(v322 - 4);
            if ( !&pthread_create )
              goto LABEL_304;
            v230 = v70;
            __dmb();
            do
              v231 = __ldrex(v229);
            while ( __strex(v231 - 1, v229) );
            goto LABEL_303;
        else if ( v380 == 4 )
          v167 = *(_QWORD *)(v63 + 4);
          if ( v167 != *(_QWORD *)(v63 + 4) >> 32 )
            Json::Value::Value((Json::Value *)v167, (const Json::Value *)&v358);
            v168 = *(_QWORD *)&ptr;
            v169 = 0;
            *(_DWORD *)(v167 + 16) = 0;
            *(_DWORD *)(v167 + 20) = 0;
            v170 = HIDWORD(v168) - v168;
            *(_DWORD *)(v167 + 24) = 0;
            v171 = (v170 >> 4) * v70;
            if ( v170 )
              if ( v171 >= 0x5555556 )
                sub_119C874();
              v169 = (char *)operator new(v170);
            *(_DWORD *)(v167 + 16) = v169;
            *(_DWORD *)(v167 + 20) = v169;
            *(_DWORD *)(v167 + 24) = &v169[48 * v171];
            v172 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                     (int)ptr,
                     v360,
                     (int)v169);
            goto LABEL_183;
          std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<ExprToken const&>(
            (__int64 *)v63,
            (int)&v358);
          v201 = v364 == 3;
          if ( v364 != 3 )
            v201 = v380 == 3;
          if ( v201 )
            _R5 = Json::Value::asFloat((Json::Value *)&v358, 0.0);
            _R0 = Json::Value::asFloat(v74, 0.0);
            __asm
              VMOV            S0, R5
              VMOV            S2, R0
              VMUL.F32        S0, S2, S0
              VSTR            S0, [SP,#0x198+var_140]
            v205 = *(_QWORD *)(v63 + 4);
            if ( (_DWORD)v205 != HIDWORD(v205) )
              __asm
                VCVT.F64.F32    D0, S0
                VMOV            R2, R3, D0
              v162 = Json::Value::Value((Json::Value *)v205, SHIDWORD(v205), _R2);
              goto LABEL_248;
            std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<float>((__int64 *)v63, (int)&v320);
            v242 = Json::Value::asInt((Json::Value *)&v358, 0);
            v243 = Json::Value::asInt(v74, 0);
            v319 = v243 * v242;
            v244 = *(_QWORD *)(v63 + 4);
            if ( (_DWORD)v244 != HIDWORD(v244) )
              v162 = Json::Value::Value((Json::Value *)v244, v243 * v242);
              goto LABEL_276;
            std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<int>((__int64 *)v63, &v319);
      case 2:
        if ( Json::Value::asBool((Json::Value *)&v358, 0) )
          v146 = 1;
          v146 = Json::Value::asBool(v74, 0);
        v356 = v146;
        v186 = *(_QWORD *)(v63 + 4);
        if ( (_DWORD)v186 != HIDWORD(v186) )
          v162 = Json::Value::Value((Json::Value *)v186, v146);
LABEL_226:
          *(_DWORD *)(v162 + 16) = 0;
          *(_DWORD *)(v162 + 20) = 0;
          *(_DWORD *)(v162 + 24) = 0;
          *(_BYTE *)(v162 + 28) = 1;
          *(_DWORD *)(v162 + 32) = 0;
          *(_DWORD *)(v162 + 36) = 1;
          goto LABEL_278;
        std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<bool>((__int64 *)v63, (bool *)&v356);
      case 6:
          if ( v380 != 2 )
            goto LABEL_136;
          ExprToken::asString((ExprToken *)&v335, (int)&v358);
          v147 = Json::Value::asInt(v74, 0);
          Util::toString<int,(void *)0,(void *)0>((void **)&v334, v147);
          v148 = sub_119C984((const void **)&v334, 0, v335, *(_BYTE **)(v335 - 12));
          v336 = (char *)*v148;
          *v148 = v310 + 3;
          v149 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v149 == HIDWORD(v149) )
              (const void **)&v336);
            ExprToken::ExprToken((_DWORD *)v149, (const void **)&v336, 1);
          v267 = v336 - 12;
          if ( (int *)(v336 - 12) != v310 )
            v302 = (unsigned int *)(v336 - 4);
                v303 = __ldrex(v302);
              while ( __strex(v303 - 1, v302) );
              v303 = (*v302)--;
            if ( v303 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v267);
          v268 = (void *)(v334 - 12);
          if ( (int *)(v334 - 12) != v310 )
            v304 = (unsigned int *)(v334 - 4);
                v305 = __ldrex(v304);
              while ( __strex(v305 - 1, v304) );
              v305 = (*v304)--;
            if ( v305 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v268);
          v228 = (char *)(v335 - 12);
          if ( (int *)(v335 - 12) != v310 )
            v229 = (unsigned int *)(v335 - 4);
            goto LABEL_305;
          if ( v380 != 4 )
            v206 = v364 == 3;
            if ( v364 != 3 )
              v206 = v380 == 3;
            if ( v206 )
              _R5 = Json::Value::asFloat((Json::Value *)&v358, 0.0);
              _R0 = Json::Value::asFloat(v74, 0.0);
                VMOV            S0, R5
                VMOV            S2, R0
                VADD.F32        S0, S2, S0
                VSTR            S0, [SP,#0x198+var_118]
              v210 = *(_QWORD *)(v63 + 4);
              if ( (_DWORD)v210 != HIDWORD(v210) )
                __asm
                {
                  VCVT.F64.F32    D0, S0
                  VMOV            R2, R3, D0
                }
                v162 = Json::Value::Value((Json::Value *)v210, SHIDWORD(v210), _R2);
                goto LABEL_248;
              std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<float>((__int64 *)v63, (int)&v330);
              v245 = Json::Value::asInt((Json::Value *)&v358, 0);
              v246 = Json::Value::asInt(v74, 0);
              v329 = v246 + v245;
              v247 = *(_QWORD *)(v63 + 4);
              if ( (_DWORD)v247 != HIDWORD(v247) )
                v162 = Json::Value::Value((Json::Value *)v247, v246 + v245);
                goto LABEL_276;
              std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<int>((__int64 *)v63, &v329);
          if ( v364 != 2 )
LABEL_136:
            ExprToken::asString((ExprToken *)&v332, (int)&v358);
            ExprToken::asString((ExprToken *)&v331, (int)v74);
            sub_119C854(&v333, &v332);
            sub_119C8A4((const void **)&v333, (const void **)&v331);
            v187 = *(_QWORD *)(v63 + 4);
            if ( (_DWORD)v187 == HIDWORD(v187) )
              std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<std::string>(
                (__int64 *)v63,
                (const void **)&v333);
              ExprToken::ExprToken((_DWORD *)v187, (const void **)&v333, 1);
            v236 = (void *)(v333 - 12);
            if ( (int *)(v333 - 12) != v310 )
              v280 = (unsigned int *)(v333 - 4);
                  v281 = __ldrex(v280);
                while ( __strex(v281 - 1, v280) );
                v281 = (*v280)--;
              if ( v281 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v236);
            v237 = (void *)(v331 - 12);
            if ( (int *)(v331 - 12) != v310 )
              v282 = (unsigned int *)(v331 - 4);
                  v283 = __ldrex(v282);
                while ( __strex(v283 - 1, v282) );
                v283 = (*v282)--;
              if ( v283 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v237);
            v228 = (char *)(v332 - 12);
            if ( (int *)(v332 - 12) != v310 )
              v229 = (unsigned int *)(v332 - 4);
              if ( !&pthread_create )
                goto LABEL_304;
              v230 = v70;
                v231 = __ldrex(v229);
              while ( __strex(v231 - 1, v229) );
              goto LABEL_303;
          v173 = Json::Value::asInt((Json::Value *)&v358, 0);
          Util::toString<int,(void *)0,(void *)0>((void **)&v338, v173);
          ExprToken::asString((ExprToken *)&v337, (int)v74);
          v174 = sub_119C8A4((const void **)&v338, (const void **)&v337);
          v339 = (char *)*v174;
          *v174 = v310 + 3;
          v175 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v175 == HIDWORD(v175) )
              (const void **)&v339);
            ExprToken::ExprToken((_DWORD *)v175, (const void **)&v339, 1);
          v272 = v339 - 12;
          if ( (int *)(v339 - 12) != v310 )
            v306 = (unsigned int *)(v339 - 4);
                v307 = __ldrex(v306);
              while ( __strex(v307 - 1, v306) );
              v307 = (*v306)--;
            if ( v307 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v272);
          v273 = (void *)(v337 - 12);
          if ( (int *)(v337 - 12) != v310 )
            v308 = (unsigned int *)(v337 - 4);
                v309 = __ldrex(v308);
              while ( __strex(v309 - 1, v308) );
              v309 = (*v308)--;
            if ( v309 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v273);
          v228 = (char *)(v338 - 12);
          if ( (int *)(v338 - 12) != v310 )
            v229 = (unsigned int *)(v338 - 4);
      case 7:
          ExprToken::asString((ExprToken *)&v327, (int)&v358);
          ExprToken::asString((ExprToken *)&v326, (int)v74);
          if ( *((_DWORD *)v326 - 3) )
            sub_119C854(&v382, &v327);
            for ( i = sub_119CA58(&v382, v326, 0, *((_DWORD *)v326 - 3));
                  i != -1;
                  i = sub_119CA58(&v382, v326, 0, *((_DWORD *)v326 - 3)) )
              v151 = *(_DWORD *)(v382 - 12);
              if ( v151 < i )
                sub_119CA78(
                  "%s: __pos (which is %zu) > this->size() (which is %zu)",
                  (int)"basic_string::erase",
                  i,
                  v151);
              v152 = (_BYTE *)(v151 - i);
              if ( v151 - i > *((_DWORD *)v326 - 3) )
                v152 = (_BYTE *)*((_DWORD *)v326 - 3);
              sub_119CA68((const void **)&v382, i, v152, 0);
            v69 = v74;
            v328 = v382;
            sub_119C854(&v328, &v327);
          v234 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v234 == HIDWORD(v234) )
              (const void **)&v328);
            v235 = v310;
            ExprToken::ExprToken((_DWORD *)v234, (const void **)&v328, 1);
          v252 = (void *)(v328 - 12);
          if ( (int *)(v328 - 12) != v235 )
            v284 = (unsigned int *)(v328 - 4);
                v285 = __ldrex(v284);
              while ( __strex(v285 - 1, v284) );
              v285 = (*v284)--;
            if ( v285 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v252);
          v253 = v326 - 12;
          if ( (int *)(v326 - 12) != v235 )
            v286 = (unsigned int *)(v326 - 4);
                v287 = __ldrex(v286);
              while ( __strex(v287 - 1, v286) );
              v287 = (*v286)--;
            if ( v287 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v253);
          v254 = (void *)(v327 - 12);
          if ( (int *)(v327 - 12) != v235 )
            v288 = (unsigned int *)(v327 - 4);
                v289 = __ldrex(v288);
              while ( __strex(v289 - 1, v288) );
              v289 = (*v288)--;
            if ( v289 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v254);
          v310 = v235;
          v176 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v176 != HIDWORD(v176) )
            Json::Value::Value((Json::Value *)v176, (const Json::Value *)&v358);
            v177 = *(_QWORD *)&ptr;
            v178 = 0;
            *(_DWORD *)(v176 + 16) = 0;
            *(_DWORD *)(v176 + 20) = 0;
            v179 = HIDWORD(v177) - v177;
            *(_DWORD *)(v176 + 24) = 0;
            v180 = (v179 >> 4) * v70;
            if ( v179 )
              if ( v180 >= 0x5555556 )
              v178 = (char *)operator new(v179);
            *(_DWORD *)(v176 + 16) = v178;
            *(_DWORD *)(v176 + 20) = v178;
            *(_DWORD *)(v176 + 24) = &v178[48 * v180];
            *(_DWORD *)(v176 + 20) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                                       (int)ptr,
                                       v360,
                                       (int)v178);
            v181 = v176 + 32;
            *(_BYTE *)(v176 + 28) = v362;
            v182 = v364;
            v183 = v365;
            *(_DWORD *)v181 = v363;
            *(_DWORD *)(v181 + 4) = v182;
            *(_DWORD *)(v181 + 8) = v183;
            goto LABEL_279;
          v211 = v364 == 3;
            v211 = v380 == 3;
          if ( v211 )
              VSUB.F32        S0, S0, S2
              VSTR            S0, [SP,#0x198+var_12C]
            v215 = *(_QWORD *)(v63 + 4);
            if ( (_DWORD)v215 != HIDWORD(v215) )
              v162 = Json::Value::Value((Json::Value *)v215, SHIDWORD(v215), _R2);
            std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<float>((__int64 *)v63, (int)&v325);
            v248 = Json::Value::asInt((Json::Value *)&v358, 0);
            v249 = Json::Value::asInt(v74, 0);
            v324 = v248 - v249;
            v250 = *(_QWORD *)(v63 + 4);
            if ( (_DWORD)v250 != HIDWORD(v250) )
              v162 = Json::Value::Value((Json::Value *)v250, v248 - v249);
            std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<int>((__int64 *)v63, &v324);
      case 9:
          ExprToken::asString((ExprToken *)&v317, (int)&v358);
          ExprToken::asString((ExprToken *)&v316, (int)v74);
          v153 = sub_119CA58(&v317, v316, 0, *((_DWORD *)v316 - 3));
          if ( v153 == -1 )
            v155 = 0;
            v154 = 1;
              v155 = v154;
              v156 = *((_DWORD *)v316 - 3);
              if ( v156 + v153 >= *(_DWORD *)(v317 - 12) )
                break;
              v153 = sub_119CA58(&v317, v316, v156 + v153, v156);
              v154 = v155 + 1;
            while ( v153 != -1 );
          v318 = v155;
          v224 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v224 == HIDWORD(v224) )
            std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<int>((__int64 *)v63, &v318);
            v225 = Json::Value::Value((Json::Value *)v224, v155);
            HIDWORD(v226) = 1;
            *(_DWORD *)(v225 + 16) = 0;
            *(_DWORD *)(v225 + 20) = 0;
            *(_DWORD *)(v225 + 24) = 0;
            *(_BYTE *)(v225 + 28) = 1;
            *(_DWORD *)(v225 + 32) = 0;
            LODWORD(v226) = 2;
            *(_QWORD *)(v225 + 36) = v226;
          v227 = v316 - 12;
          if ( (int *)(v316 - 12) != v310 )
            v274 = (unsigned int *)(v316 - 4);
                v275 = __ldrex(v274);
              while ( __strex(v275 - 1, v274) );
              v275 = (*v274)--;
            if ( v275 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v227);
          v228 = (char *)(v317 - 12);
          if ( (int *)(v317 - 12) != v310 )
            v229 = (unsigned int *)(v317 - 4);
LABEL_303:
              v70 = v230;
LABEL_304:
              v231 = (*v229)--;
LABEL_305:
            if ( v231 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v228);
            if ( v364 == 3 )
              v315 = 0;
              v184 = *(_QWORD *)(v63 + 4);
              if ( (_DWORD)v184 == HIDWORD(v184) )
                std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<float>((__int64 *)v63, (int)&v315);
                goto def_DB036E;
              __asm { VMOV            R2, R3, D8 }
              v162 = Json::Value::Value((Json::Value *)v184, SHIDWORD(v184), _R2);
LABEL_248:
              *(_DWORD *)(v162 + 16) = 0;
              *(_DWORD *)(v162 + 20) = 0;
              *(_DWORD *)(v162 + 24) = 0;
              *(_BYTE *)(v162 + 28) = 1;
              *(_DWORD *)(v162 + 32) = 0;
              v260 = 3;
              v314 = 0;
              v251 = *(_QWORD *)(v63 + 4);
              if ( (_DWORD)v251 == HIDWORD(v251) )
                std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<int>((__int64 *)v63, &v314);
              v162 = Json::Value::Value((Json::Value *)v251, 0);
LABEL_276:
              v260 = 2;
            *(_DWORD *)(v162 + 36) = v260;
LABEL_278:
            *(_DWORD *)(v162 + 40) = 1;
LABEL_279:
            VMOV            S0, R0
            VCMPE.F32       S0, #0.0
            v167 = *(_QWORD *)(v63 + 4);
            if ( v167 == *(_QWORD *)(v63 + 4) >> 32 )
              std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<ExprToken const&>(
                (int)&v358);
              goto def_DB036E;
            v217 = *(_QWORD *)&ptr;
            v218 = 0;
            v219 = HIDWORD(v217) - v217;
            v220 = (v219 >> 4) * v70;
            if ( v219 )
              if ( v220 >= 0x5555556 )
              v218 = (char *)operator new(v219);
            *(_DWORD *)(v167 + 16) = v218;
            *(_DWORD *)(v167 + 20) = v218;
            *(_DWORD *)(v167 + 24) = &v218[48 * v220];
                     (int)v218);
LABEL_183:
            *(_DWORD *)(v167 + 20) = v172;
            *(_BYTE *)(v167 + 28) = v362;
            v221 = v364;
            v222 = v365;
            *(_DWORD *)(v167 + 32) = v363;
            *(_DWORD *)(v167 + 36) = v221;
            *(_DWORD *)(v167 + 40) = v222;
          v255 = v364 == 3;
            v255 = v380 == 3;
          if ( v255 )
              VDIV.F32        S0, S0, S2
              VSTR            S0, [SP,#0x198+var_15C]
            v259 = *(_QWORD *)(v63 + 4);
            if ( (_DWORD)v259 != HIDWORD(v259) )
              v162 = Json::Value::Value((Json::Value *)v259, SHIDWORD(v259), _R2);
            std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<float>((__int64 *)v63, (int)&v313);
            v269 = Json::Value::asInt((Json::Value *)&v358, 0);
            v270 = v269 / Json::Value::asInt(v74, 0);
            v312 = v270;
            v271 = *(_QWORD *)(v63 + 4);
            if ( (_DWORD)v271 != HIDWORD(v271) )
              v162 = Json::Value::Value((Json::Value *)v271, v270);
            std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<int>((__int64 *)v63, &v312);
def_DB036E:
        std::_Destroy<ExprToken *,ExprToken>((int)ptr, v360, (int)&ptr);
        if ( ptr )
          operator delete(ptr);
        Json::Value::~Value((Json::Value *)&v358);
        std::_Destroy<ExprToken *,ExprToken>((int)v367, v368, (int)&v367);
        if ( v367 )
          operator delete(v367);
        Json::Value::~Value((Json::Value *)&v366);
        std::_Destroy<ExprToken *,ExprToken>((int)v375, v376, (int)&v375);
        if ( v375 )
          operator delete(v375);
        Json::Value::~Value(v69);
        *(_QWORD *)&v64 = *(_QWORD *)v63;
        result = ((v65 - v64) >> 4) * v70;
        if ( (unsigned int)result <= 2 )
          return result;
        break;
      default:
    }
  }
  std::_Destroy<ExprToken *,ExprToken>((int)ptr, v96, (int)&ptr);
  if ( ptr )
    operator delete(ptr);
  Json::Value::~Value((Json::Value *)&v358);
  std::_Destroy<ExprToken *,ExprToken>((int)v367, v368, (int)&v367);
  if ( v367 )
    operator delete(v367);
  Json::Value::~Value((Json::Value *)&v366);
  std::_Destroy<ExprToken *,ExprToken>((int)v375, v376, (int)&v375);
  if ( v375 )
    operator delete(v375);
  return (int)Json::Value::~Value((Json::Value *)&v374);
}


int __fastcall Json::Path::Path(int a1, int *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r7@1
  int *v10; // r8@1
  char *v11; // r6@1
  _DWORD *v12; // r7@1
  int v13; // r0@1
  _DWORD *v14; // r6@3
  _DWORD *v15; // r7@6
  int v16; // r1@7
  int v17; // r2@7
  int v18; // r3@7
  char *v20; // [sp+4h] [bp-2Ch]@1
  char *v21; // [sp+8h] [bp-28h]@1
  char *v22; // [sp+Ch] [bp-24h]@1

  v7 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v8 = a4;
  *(_DWORD *)(a1 + 8) = 0;
  v9 = a3;
  v10 = a2;
  v11 = (char *)j_operator new(4u);
  *(_DWORD *)v11 = v9;
  v20 = v11;
  v21 = v11 + 4;
  v22 = v11 + 4;
  v12 = j_operator new(8u);
  v13 = *(_DWORD *)v11;
  v12[1] = v8;
  *v12 = v13;
  if ( v11 )
    j_operator delete(v11);
  v20 = (char *)v12;
  v21 = (char *)(v12 + 2);
  v22 = (char *)(v12 + 2);
  v14 = j_operator new(0x10u);
  v14[2] = a5;
  *(_QWORD *)v14 = *(_QWORD *)v12;
  if ( v12 )
    j_operator delete(v12);
  v20 = (char *)v14;
  v22 = (char *)(v14 + 4);
  v21 = (char *)(v14 + 4);
  v14[3] = a6;
  if ( v14 + 4 == v14 + 4 )
  {
    v15 = j_operator new(0x20u);
    v15[4] = a7;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    *v15 = *v14;
    v15[1] = v16;
    v15[2] = v17;
    v15[3] = v18;
    if ( v14 )
      j_operator delete(v14);
    v20 = (char *)v15;
    v21 = (char *)(v15 + 5);
    v22 = (char *)(v15 + 8);
  }
  else
    v14[4] = a7;
    v21 = (char *)(v14 + 5);
    v15 = v14;
  j_Json::Path::makePath(v7, v10, (int **)&v20);
  if ( v15 )
    j_operator delete(v15);
  return v7;
}


  if ( !Json::Value::isNull((Json::Value *)(a2 + 8)) && Json::Value::isObject(v2) == 1 )
{
    v4 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v4) || Json::Value::isUInt(v4) == 1 )
    {
      v5 = 0;
      v6 = Json::Value::asInt(v4, 0);
      if ( v6 < 0 )
        return v5;
      *(_QWORD *)&v7 = *(_QWORD *)(v3 + 444);
      if ( v6 < (v8 - v7) >> 3 )
      {
        v9 = *(_DWORD *)(v7 + 8 * v6 + 4);
        if ( v9 >= 5 )
        {
          v10 = v9 - 4;
          v11 = *(_DWORD *)(v7 + 8 * v6) + 4;
          if ( v11 > v10 )
            v11 = v10;
          *(_DWORD *)(v7 + 8 * v6) = v11;
        }
        return 1;
      }
    }
  }
  return 0;
}


int __fastcall Json::Value::size(Json::Value *this)
{
  int v1; // r1@1
  int result; // r0@2
  int v3; // r0@4

  v1 = *((_BYTE *)this + 8);
  if ( v1 == 7 )
  {
    result = *(_DWORD *)(*(_DWORD *)this + 20);
  }
  else if ( v1 == 6 && (v3 = *(_DWORD *)this, *(_DWORD *)(v3 + 20)) )
    result = *(_DWORD *)(sub_21D4894(v3 + 4) + 20) + 1;
  else
    result = 0;
  return result;
}


int __fastcall Json::Value::end(int result, int a2)
{
  int v2; // r1@2

  if ( (*(_WORD *)(a2 + 8) & 0xFE) == 6 && (v2 = *(_DWORD *)a2) != 0 )
  {
    *(_DWORD *)result = v2 + 4;
    *(_BYTE *)(result + 4) = 0;
  }
  else
    *(_DWORD *)result = 0;
    *(_BYTE *)(result + 4) = 1;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  *(_DWORD *)(v3 + 436) = v4 + *(_DWORD *)(v3 + 440);
  return 1;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v24;
    v25 = v24;
    v24 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v5);
    v6 = v25;
  sub_21E94B4((void **)&v23, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v26 = v23;
    v8 = (char *)&unk_28898CC;
    v23 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v26, (int)&v28, (int)v7);
    v8 = v23;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  v10 = (char *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v25 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  SignScreenController::parseSignTextContent(v3, (int)&v26);
  v12 = ClientInstanceScreenModel::getBlockEntity(*(_DWORD *)(v3 + 424), (const BlockPos *)(v3 + 436), 4);
  if ( v12 )
    SignBlockEntity::setMessage((int)v12, (int *)(v3 + 452));
    ClientInstanceScreenModel::sendBlockEntityUpdatePacket(
      *(ClientInstanceScreenModel **)(v3 + 424),
      (const BlockPos *)(v3 + 436));
  v13 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  return 1;
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  v7 = ContainerScreenController::_releaseHeldButton(
         (MinecraftScreenController *)v3,
         (const void **)&v12,
         v5,
         *(_WORD *)(v3 + 438));
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v7;
}


signed int __fastcall Json::StyledStreamWriter::isMultineArray(Json::StyledStreamWriter *this, const Json::Value *a2)
{
  const Json::Value *v2; // r11@1
  Json::StyledStreamWriter *v3; // r9@1
  int v4; // r6@1
  __int64 v5; // kr00_8@1
  int v6; // r12@1
  signed int v7; // r7@1
  _DWORD *v8; // r4@4
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  int v11; // ST04_4@11
  int *v12; // r0@12
  signed int v13; // r4@16
  Json::Value *v14; // r7@17
  signed int v15; // r8@23
  int v16; // r7@24
  signed int v17; // r4@25
  const Json::Value *v18; // r0@26
  int v19; // r0@26

  v2 = a2;
  v3 = this;
  v4 = j_Json::Value::size(a2);
  v5 = *(_QWORD *)v3;
  v6 = *((_DWORD *)v3 + 5);
  v7 = 0;
  if ( 3 * v4 >= v6 )
    v7 = 1;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v8 = (_DWORD *)v5;
    do
    {
      v12 = (int *)(*v8 - 12);
      if ( v12 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(*v8 - 4);
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
          v11 = v6;
          j_j_j_j__ZdlPv_9(v12);
          v6 = v11;
      }
      ++v8;
    }
    while ( v8 != (_DWORD *)HIDWORD(v5) );
  }
  *((_DWORD *)v3 + 1) = v5;
  if ( v4 >= 1 && 3 * v4 < v6 )
    v13 = 0;
      v14 = (Json::Value *)j_Json::Value::operator[]((int)v2, v13);
      if ( j_Json::Value::isArray(v14) || j_Json::Value::isObject(v14) == 1 )
        v7 = j_Json::Value::size(v14) != 0;
      else
        v7 = 0;
      ++v13;
    while ( v13 < v4 && !v7 );
  v15 = 1;
  if ( !v7 )
    j_std::vector<std::string,std::allocator<std::string>>::reserve((int)v3, v4);
    v16 = 2 * v4 + 2;
    *((_BYTE *)v3 + 28) = 1;
    v15 = 0;
    if ( v4 >= 1 )
      v17 = 0;
      do
        v18 = (const Json::Value *)j_Json::Value::operator[]((int)v2, v17);
        j_Json::StyledStreamWriter::writeValue(v3, v18);
        v19 = *(_DWORD *)(*(_DWORD *)v3 + 4 * v17++);
        v16 += *(_DWORD *)(v19 - 12);
      while ( v17 < v4 );
    *((_BYTE *)v3 + 28) = 0;
    if ( v16 >= *((_DWORD *)v3 + 5) )
      v15 = 1;
  return v15;
}


  if ( Json::Value::isNull(a1) )
{
  if ( Json::Value::isString(v3) == 1 )
  {
    sub_21E94B4((void **)&v30, (const char *)&unk_257BC67);
    Json::Value::asString((int *)&v31, (int)v3, &v30);
    v4 = *(_QWORD *)(v2 + 4);
    if ( (_DWORD)v4 == HIDWORD(v4) )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
        (unsigned __int64 *)v2,
        &v31);
      v5 = (int)v31;
    }
    else
      *(_DWORD *)v4 = v31;
      HIDWORD(v4) = &unk_28898CC;
      v31 = &unk_28898CC;
      *(_DWORD *)(v2 + 4) = v4 + 4;
    v17 = (void *)(v5 - 12);
    if ( (int *)(v5 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v5 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v30 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    return 1;
  }
  if ( Json::Value::isArray(v3) != 1 )
    return 0;
  Json::Value::begin((Json::Value *)&v29, (int)v3);
  Json::Value::end((Json::Value *)&v28, (int)v3);
  if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v29, (const Json::ValueIteratorBase *)&v28) )
    while ( 1 )
      v14 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v29);
      if ( !Json::Value::isString(v14) )
        break;
      sub_21E94B4((void **)&v25, (const char *)&unk_257BC67);
      Json::Value::asString((int *)&v26, (int)v14, &v25);
      v6 = *(_QWORD *)(v2 + 4);
      if ( (_DWORD)v6 == HIDWORD(v6) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)v2,
          &v26);
        v7 = (int)v26;
        *(_DWORD *)v6 = v26;
        HIDWORD(v6) = &unk_28898CC;
        v26 = &unk_28898CC;
        *(_DWORD *)(v2 + 4) = v6 + 4;
      v8 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v7 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      v9 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v25 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v29);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v29, (const Json::ValueIteratorBase *)&v28) )
        return 1;
    sub_21E94B4((void **)&v27, "Found non-string while parsing string array.");
    JsonUtil::ParseHandler::postMessage((int)&dword_27F3968, &v27, 2);
    v15 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v27 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
  return 1;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v28;
    v29 = v28;
    v28 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v29, (int)&v31, (int)v5);
    v6 = v29;
  sub_119C884((void **)&v27, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    nptr = v27;
    v8 = (char *)&unk_28898CC;
    v27 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&nptr, (int)&v32, (int)v7);
    v8 = v27;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (char *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v29 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v28 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = 0;
  v13 = (const char *)strtol(nptr, 0, 0);
  *(_DWORD *)(v3 + 448) = v13;
  *(_BYTE *)(v3 + 436) = 1;
  v14 = *(_QWORD *)(v3 + 440);
  v15 = *(_DWORD *)(v14 - 12);
  v16 = v15 == 0;
  if ( v15 )
    v12 = 0;
    v16 = *(_DWORD *)(HIDWORD(v14) - 12) == 0;
  if ( !v16 && (signed int)v13 > 0 )
    v12 = 1;
  *(_BYTE *)(v3 + 436) = v12;
  if ( !RakNet::NonNumericHostString((RakNet *)HIDWORD(v14), v13) )
    *(_BYTE *)(v3 + 436) &= Util::isValidIP(*(_DWORD *)(*(_DWORD *)(v3 + 444) - 12), *(_DWORD *)(v3 + 444), 1, 1);
  v17 = nptr - 12;
  if ( (int *)(nptr - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(nptr - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  return 1;
}


int __fastcall Json::ValueIteratorBase::decrement(Json::ValueIteratorBase *this)
{
  Json::ValueIteratorBase *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = sub_21D4858(*(_DWORD *)this);
  *(_DWORD *)v1 = result;
  return result;
}


signed int __fastcall Json::Reader::readValue(Json::Reader *this)
{
  Json::Reader *v1; // r4@1
  __int64 v2; // r0@7
  signed int v3; // r0@11
  void *v4; // r0@12
  signed int v5; // r5@13
  __int64 v6; // r0@18
  int v7; // r6@20
  __int64 v8; // r0@21
  char *v9; // r6@21
  int v10; // r5@23
  __int64 v11; // r0@24
  __int64 v12; // r0@29
  unsigned int *v14; // r2@33
  signed int v15; // r1@35
  int v16; // [sp+4h] [bp-5Ch]@12
  char v17; // [sp+8h] [bp-58h]@24
  char v18; // [sp+18h] [bp-48h]@21
  char v19; // [sp+28h] [bp-38h]@20
  int v20; // [sp+3Ch] [bp-24h]@2

  v1 = this;
  if ( *((_BYTE *)this + 108) )
  {
    do
      j_Json::Reader::readToken(v1, (int)&v20);
    while ( v20 == 12 );
  }
  else
    j_Json::Reader::readToken(this, (int)&v20);
  if ( *((_BYTE *)v1 + 110) && *(_DWORD *)(*((_DWORD *)v1 + 26) - 12) )
    v2 = *((_QWORD *)v1 + 3);
    if ( (_DWORD)v2 == HIDWORD(v2) )
      LODWORD(v2) = *(_DWORD *)(*((_DWORD *)v1 + 9) - 4) + 512;
    j_Json::Value::setComment(*(_DWORD *)(v2 - 4), (const char **)v1 + 26, 0);
    sub_21E8190((void **)v1 + 26, (char *)&unk_257BC67, 0);
  switch ( v20 )
    case 1:
      v3 = j_Json::Reader::readObject((int)v1);
      goto LABEL_17;
    default:
      sub_21E94B4((void **)&v16, "Syntax error: value, object or array expected.");
      j_Json::Reader::addError((int)v1, &v16, (int)&v20, 0);
      v4 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
      {
        v14 = (unsigned int *)(v16 - 4);
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
          j_j_j_j__ZdlPv_9(v4);
      }
      return 0;
    case 3:
      v3 = j_Json::Reader::readArray((int)v1);
    case 5:
      v3 = j_Json::Reader::decodeString((int)v1, (int)&v20);
    case 6:
      v3 = j_Json::Reader::decodeNumber((int)v1, (int)&v20);
LABEL_17:
      v5 = v3;
      goto LABEL_28;
    case 7:
      v6 = *((_QWORD *)v1 + 3);
      v5 = 1;
      if ( (_DWORD)v6 == HIDWORD(v6) )
        LODWORD(v6) = *(_DWORD *)(*((_DWORD *)v1 + 9) - 4) + 512;
      v7 = *(_DWORD *)(v6 - 4);
      j_Json::Value::Value((Json::Value *)&v19, 1);
      j_Json::Value::operator=(v7, (const Json::Value *)&v19);
      j_Json::Value::~Value((Json::Value *)&v19);
    case 8:
      v8 = *((_QWORD *)v1 + 3);
      v9 = &v18;
      if ( (_DWORD)v8 == HIDWORD(v8) )
        LODWORD(v8) = *(_DWORD *)(*((_DWORD *)v1 + 9) - 4) + 512;
      v10 = *(_DWORD *)(v8 - 4);
      j_Json::Value::Value((Json::Value *)&v18, 0);
      break;
    case 9:
      v11 = *((_QWORD *)v1 + 3);
      v9 = &v17;
      if ( (_DWORD)v11 == HIDWORD(v11) )
        LODWORD(v11) = *(_DWORD *)(*((_DWORD *)v1 + 9) - 4) + 512;
      v10 = *(_DWORD *)(v11 - 4);
      j_Json::Value::Value(&v17, 0);
  j_Json::Value::operator=(v10, (const Json::Value *)v9);
  j_Json::Value::~Value((Json::Value *)v9);
  v5 = 1;
LABEL_28:
  if ( *((_BYTE *)v1 + 110) )
    *((_DWORD *)v1 + 24) = *((_DWORD *)v1 + 23);
    v12 = *((_QWORD *)v1 + 3);
    if ( (_DWORD)v12 == HIDWORD(v12) )
      LODWORD(v12) = *(_DWORD *)(*((_DWORD *)v1 + 9) - 4) + 512;
    *((_DWORD *)v1 + 25) = *(_DWORD *)(v12 - 4);
  return v5;
}


    if ( Json::Value::isObject(v10) )
{
      ResourceMetadata::ResourceMetadata((int)&v147);
      sub_21E94B4((void **)&v145, "url");
      sub_157A770(&v146, (int)v10, &v145, v4, v5, 1);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        &v150,
        &v146);
      v13 = (void *)(v146 - 12);
      if ( (int *)(v146 - 12) != &dword_28898C0 )
      {
        v104 = (unsigned int *)(v146 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v105 = __ldrex(v104);
          while ( __strex(v105 - 1, v104) );
        }
        else
          v105 = (*v104)--;
        if ( v105 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      }
      v14 = (void *)(v145 - 12);
      if ( (int *)(v145 - 12) != &dword_28898C0 )
        v106 = (unsigned int *)(v145 - 4);
            v107 = __ldrex(v106);
          while ( __strex(v107 - 1, v106) );
          v107 = (*v106)--;
        if ( v107 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      sub_21E94B4((void **)&v143, "license");
      sub_157A770(&v144, (int)v10, &v143, v4, v5, 1);
        &v151,
        &v144);
      v15 = (void *)(v144 - 12);
      if ( (int *)(v144 - 12) != &dword_28898C0 )
        v108 = (unsigned int *)(v144 - 4);
            v109 = __ldrex(v108);
          while ( __strex(v109 - 1, v108) );
          v109 = (*v108)--;
        if ( v109 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v16 = (void *)(v143 - 12);
      if ( (int *)(v143 - 12) != &dword_28898C0 )
        v110 = (unsigned int *)(v143 - 4);
            v111 = __ldrex(v110);
          while ( __strex(v111 - 1, v110) );
          v111 = (*v110)--;
        if ( v111 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      sub_21E94B4((void **)&v142, "authors");
      v17 = *(_QWORD *)(v4 + 4);
      if ( (_DWORD)v17 == HIDWORD(v17) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)v4,
          &v142);
      else
        sub_21E8AF4((int *)v17, &v142);
        *(_DWORD *)(v4 + 4) += 4;
      v38 = (void *)(v142 - 12);
      if ( (int *)(v142 - 12) != &dword_28898C0 )
        v112 = (unsigned int *)(v142 - 4);
            v113 = __ldrex(v112);
          while ( __strex(v113 - 1, v112) );
          v113 = (*v112)--;
        if ( v113 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      sub_21E94B4((void **)&v141, "authors");
      v39 = (Json::Value *)Json::Value::operator[]((int)v10, (const char **)&v141);
      Json::Value::isNull(v39);
      v40 = (void *)(v141 - 12);
      if ( (int *)(v141 - 12) != &dword_28898C0 )
        v114 = (unsigned int *)(v141 - 4);
            v115 = __ldrex(v114);
          while ( __strex(v115 - 1, v114) );
          v115 = (*v114)--;
        if ( v115 <= 0 )
          j_j_j_j__ZdlPv_9(v40);
      if ( Json::Value::isArray(v39) )
        Json::Value::begin((Json::Value *)&v133, (int)v39);
        Json::Value::end((Json::Value *)&v132, (int)v39);
        v120 = v6;
        v41 = (Json::ValueIteratorBase *)&v133;
        v42 = (const Json::ValueIteratorBase *)&v132;
        v43 = (void **)&v123;
        while ( Json::ValueIteratorBase::isEqual(v41, v42) != 1 )
          v44 = (Json::Value *)Json::ValueIteratorBase::deref(v41);
          if ( Json::Value::isString(v44) )
          {
            sub_21E94B4(v43, (const char *)&unk_257BC67);
            Json::Value::asString((int *)&v124, (int)v44, (int *)v43);
            v45 = (int)v148;
            if ( v148 == v149 )
            {
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
                (unsigned __int64 *)&v147,
                &v124);
              v46 = v124;
            }
            else
              *v148 = v124;
              v46 = (char *)&unk_28898CC;
              v124 = (char *)&unk_28898CC;
              v148 = (char **)(v45 + 4);
            v65 = v46 - 12;
            if ( (int *)(v46 - 12) != &dword_28898C0 )
              v67 = (unsigned int *)(v46 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v68 = __ldrex(v67);
                while ( __strex(v68 - 1, v67) );
              }
              else
                v68 = (*v67)--;
              if ( v68 <= 0 )
                j_j_j_j__ZdlPv_9(v65);
            v66 = (void *)(v123 - 12);
            if ( (int *)(v123 - 12) != &dword_28898C0 )
              v69 = (unsigned int *)(v123 - 4);
                  v70 = __ldrex(v69);
                while ( __strex(v70 - 1, v69) );
                v70 = (*v69)--;
              if ( v70 <= 0 )
                j_j_j_j__ZdlPv_9(v66);
          }
          else
            sub_157984C(&v125, (__int64 *)v4);
            v47 = v5;
            v48 = operator new(4u);
            v49 = v48;
            v122 = v4;
            v50 = v41;
            v51 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v125,
                    (int)&v126,
                    (int)v48);
            v52 = v51;
            v53 = 0;
            v126 = &off_26D9084;
            v54 = v51 - (_DWORD)v49;
            v127 = 0;
            v128 = 0;
            v55 = v54 >> 2;
            v129 = 0;
            if ( v54 >> 2 )
              if ( v55 >= 0x40000000 )
                sub_21E57F4();
              v53 = operator new(v54);
            v127 = v53;
            v128 = (int)v53;
            v129 = (char *)v53 + 4 * v55;
            v56 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                    (int)v49,
                    v52,
                    (int)v53);
            v128 = v56;
            v130 = 8;
            v131 = 2;
            v126 = &off_26EABBC;
            PackReport::addError<PackDiscoveryError>(v47, (int)&v126);
            if ( v53 != (void *)v56 )
              do
                v59 = (int *)(*(_DWORD *)v53 - 12);
                if ( v59 != &dword_28898C0 )
                {
                  v57 = (unsigned int *)(*(_DWORD *)v53 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v58 = __ldrex(v57);
                    while ( __strex(v58 - 1, v57) );
                  }
                  else
                    v58 = (*v57)--;
                  if ( v58 <= 0 )
                    j_j_j_j__ZdlPv_9(v59);
                }
                v53 = (char *)v53 + 4;
              while ( v53 != (void *)v56 );
              v53 = v127;
            if ( v53 )
              operator delete(v53);
            for ( i = v49; i != (_DWORD *)v52; ++i )
              v63 = (int *)(*i - 12);
              if ( v63 != &dword_28898C0 )
                v61 = (unsigned int *)(*i - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v62 = __ldrex(v61);
                  while ( __strex(v62 - 1, v61) );
                else
                  v62 = (*v61)--;
                if ( v62 <= 0 )
                  j_j_j_j__ZdlPv_9(v63);
            if ( v49 )
              operator delete(v49);
            v5 = v47;
            v41 = v50;
            v64 = (void *)(v125 - 12);
            if ( (int *)(v125 - 12) != &dword_28898C0 )
              v71 = (unsigned int *)(v125 - 4);
                  v72 = __ldrex(v71);
                while ( __strex(v72 - 1, v71) );
                v72 = (*v71)--;
              if ( v72 <= 0 )
                j_j_j_j__ZdlPv_9(v64);
            v4 = v122;
            v42 = (const Json::ValueIteratorBase *)&v132;
            v43 = (void **)&v123;
          Json::ValueIteratorBase::increment(v41);
        v90 = v120;
        sub_157984C(&v134, (__int64 *)v4);
        v121 = v6;
        v73 = operator new(4u);
        v74 = v73;
        v75 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                (int)&v134,
                (int)&v135,
                (int)v73);
        v76 = v75;
        v77 = 0;
        v135 = &off_26D9084;
        v78 = v75 - (_DWORD)v74;
        v136 = 0;
        v137 = 0;
        v138 = 0;
        v79 = v78 >> 2;
        if ( v78 >> 2 )
          if ( v79 >= 0x40000000 )
            sub_21E57F4();
          v77 = operator new(v78);
        v136 = v77;
        v137 = (int)v77;
        v138 = (char *)v77 + 4 * v79;
        v80 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                (int)v74,
                v76,
                (int)v77);
        v137 = v80;
        v139 = 8;
        v140 = 2;
        v135 = &off_26EABBC;
        PackReport::addError<PackDiscoveryError>(v5, (int)&v135);
        if ( v77 != (void *)v80 )
          v81 = &v161;
            v85 = (int *)(*(_DWORD *)v77 - 12);
            if ( v85 != &dword_28898C0 )
              v82 = (unsigned int *)(*(_DWORD *)v77 - 4);
                  v83 = __ldrex(v82);
                while ( __strex(v83 - 1, v82) );
                v83 = (*v82)--;
              if ( v83 <= 0 )
                v84 = v81;
                j_j_j_j__ZdlPv_9(v85);
                v81 = v84;
            v77 = (char *)v77 + 4;
          while ( v77 != (void *)v80 );
          v77 = v136;
        if ( v77 )
          operator delete(v77);
        if ( v74 != (_DWORD *)v76 )
          v86 = v74;
            v89 = (int *)(*v86 - 12);
            if ( v89 != &dword_28898C0 )
              v87 = (unsigned int *)(*v86 - 4);
                  v88 = __ldrex(v87);
                while ( __strex(v88 - 1, v87) );
                v88 = (*v87)--;
              if ( v88 <= 0 )
                j_j_j_j__ZdlPv_9(v89);
            ++v86;
          while ( v86 != (_DWORD *)v76 );
        if ( v74 )
          operator delete(v74);
        v90 = v121;
        v91 = (void *)(v134 - 12);
        if ( (int *)(v134 - 12) != &dword_28898C0 )
          v118 = (unsigned int *)(v134 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v119 = __ldrex(v118);
            while ( __strex(v119 - 1, v118) );
            v119 = (*v118)--;
          if ( v119 <= 0 )
            j_j_j_j__ZdlPv_9(v91);
      v92 = *(_DWORD *)(v4 + 4);
      *(_DWORD *)(v4 + 4) = v92 - 4;
      v93 = *(_DWORD *)(v92 - 4);
      v94 = (void *)(v93 - 12);
      if ( (int *)(v93 - 12) != &dword_28898C0 )
        v116 = (unsigned int *)(v93 - 4);
            v117 = __ldrex(v116);
          while ( __strex(v117 - 1, v116) );
          v117 = (*v116)--;
        if ( v117 <= 0 )
          j_j_j_j__ZdlPv_9(v94);
      PackManifest::setMetadata(v90, (const ResourceMetadata *)&v147);
      ResourceMetadata::~ResourceMetadata((ResourceMetadata *)&v147);
    }
    else
    {
      sub_157984C(&v152, (__int64 *)v4);
      v18 = operator new(4u);
      v19 = v18;
      v20 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
              (int)&v152,
              (int)&v153,
              (int)v18);
      v21 = v20;
      v22 = 0;
      v153 = &off_26D9084;
      v23 = v20 - (_DWORD)v19;
      v154 = 0;
      v155 = 0;
      v156 = 0;
      v24 = v23 >> 2;
      if ( v23 >> 2 )
        if ( v24 >= 0x40000000 )
          sub_21E57F4();
        v22 = operator new(v23);
      v154 = v22;
      v155 = (int)v22;
      v156 = (char *)v22 + 4 * v24;
      v25 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
              (int)v19,
              v21,
              (int)v22);
      v155 = v25;
      v157 = 8;
      v158 = 2;
      v153 = &off_26EABBC;
      PackReport::addError<PackDiscoveryError>(v5, (int)&v153);
      if ( v22 != (void *)v25 )
        v26 = &v161;
        do
          v30 = (int *)(*(_DWORD *)v22 - 12);
          if ( v30 != &dword_28898C0 )
            v27 = (unsigned int *)(*(_DWORD *)v22 - 4);
            if ( &pthread_create )
              __dmb();
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
              v28 = (*v27)--;
            if ( v28 <= 0 )
              v29 = v26;
              j_j_j_j__ZdlPv_9(v30);
              v26 = v29;
          v22 = (char *)v22 + 4;
        while ( v22 != (void *)v25 );
        v22 = v154;
      if ( v22 )
        operator delete(v22);
      if ( v19 != (_DWORD *)v21 )
        v31 = v19;
          v34 = (int *)(*v31 - 12);
          if ( v34 != &dword_28898C0 )
            v32 = (unsigned int *)(*v31 - 4);
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
              v33 = (*v32)--;
            if ( v33 <= 0 )
              j_j_j_j__ZdlPv_9(v34);
          ++v31;
        while ( v31 != (_DWORD *)v21 );
      if ( v19 )
        operator delete(v19);
      v35 = (void *)(v152 - 12);
      if ( (int *)(v152 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v152 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v35);
  }
  v95 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v95 - 4;
  v96 = *(_DWORD *)(v95 - 4);
  v97 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
  {
    v102 = (unsigned int *)(v96 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
}


    if ( Json::Value::isNull(v4)
{
      || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#panel_title"), Json::Value::isString(v5) != 1) )
    {
      v15 = v14;
      v14 = (char *)&unk_28898CC;
    }
    else
      jsonValConversion<std::string>::as((int *)&v15, (int)&v16, (int)v5);
    v6 = sub_21E7D6C((const void **)&v15, "menu.storageManagement");
    v7 = v15 - 12;
    if ( (int *)(v15 - 12) != &dword_28898C0 )
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
    v8 = v14 - 12;
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v14 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    if ( !v6 )
      StorageManagementScreenController::_loadData(v3);
  }
  return 0;
}


Json::Value *__fastcall Json::Value::Value(Json::Value *this, const char *a2)
{
  Json::Value *v2; // r4@1
  const char *v3; // r5@1
  _BYTE *v4; // r7@1
  size_t v5; // r0@2
  int v6; // r8@2
  _BYTE *v7; // r0@2
  _BYTE *v8; // r6@2
  Json::Value *result; // r0@4

  v2 = this;
  v3 = a2;
  v4 = 0;
  *((_DWORD *)this + 2) = (unsigned __int16)(*((_WORD *)this + 4) & 0xFE00) | 0x104;
  if ( a2 )
  {
    v5 = j_strlen_0(a2);
    v6 = v5;
    v7 = j_malloc(v5 + 1);
    v8 = v7;
    v4 = 0;
    if ( v7 )
    {
      j___aeabi_memcpy_0((int)v7, (int)v3, v6);
      v8[v6] = 0;
      v4 = v8;
    }
  }
  result = v2;
  *(_DWORD *)v2 = v4;
  return result;
}


int __fastcall Json::ValueIteratorBase::index(Json::ValueIteratorBase *this)
{
  __int64 v1; // r0@1

  v1 = *(_QWORD *)(*(_DWORD *)this + 16);
  if ( HIDWORD(v1) )
  {
    if ( (_DWORD)v1 )
      HIDWORD(v1) = -1;
    LODWORD(v1) = HIDWORD(v1);
  }
  else if ( (_DWORD)v1 )
    LODWORD(v1) = -1;
  return v1;
}


int __fastcall Json::ValueIteratorBase::ValueIteratorBase(int result, _DWORD *a2)
{
  *(_DWORD *)result = *a2;
  *(_BYTE *)(result + 4) = 0;
  return result;
}


Json::StyledStreamWriter *__fastcall Json::StyledStreamWriter::~StyledStreamWriter(Json::StyledStreamWriter *this)
{
  Json::StyledStreamWriter *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void *v6; // r5@3
  void *v7; // r7@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int *v10; // r0@13
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  unsigned int *v14; // r2@23
  signed int v15; // r1@25

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v4 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v7 = (void *)(*(_QWORD *)v1 >> 32);
  v6 = (void *)*(_QWORD *)v1;
  if ( v6 != v7 )
    do
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
          j_j_j_j_j__ZdlPv_9(v10);
      }
      v6 = (char *)v6 + 4;
    while ( v6 != v7 );
    v6 = *(void **)v1;
  if ( v6 )
    operator delete(v6);
  return v1;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  if ( v4 == v5 )
    *(_DWORD *)(v3 + 532) = -1;
  return 1;
}


int __fastcall Json::Value::Value(int result, bool a2)
{
  *(_BYTE *)(result + 8) = 5;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)result = a2;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
    {
      v6 = Json::Value::asInt(v5, 0);
      if ( v6 == 2 )
      {
        v4 = MinecraftScreenModel::getCustomSkinIndex(*(MinecraftScreenModel **)(v3 + 424));
      }
      else if ( v6 == 1 )
        v4 = MinecraftScreenModel::getDefaultSkinIndexByType(*(_DWORD *)(v3 + 424), 3);
      else if ( v6 )
        v4 = -1;
      else
        v4 = MinecraftScreenModel::getDefaultSkinIndexByType(*(_DWORD *)(v3 + 424), 2);
    }
    else
      v4 = -1;
  else
  v13 = dword_27CC6D0;
  v14 = unk_27CC6D4;
  v11 = SkinRepository::VANILLA_SKIN_PACK_UUID;
  v12 = unk_27CC6CC;
  v15 = v4;
  v16 = (char *)&unk_28898CC;
  SkinPickerScreenController::_setPreviewSkin(v3, (int)&v11);
  v7 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return 1;
}


      if ( Json::Value::isInt(v7) || (result = Json::Value::isUInt(v7), result == 1) )
{
        result = Json::Value::asInt(v7, 0);
        if ( result >= 0 )
        {
          v8 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(
                 *(SkinPackCollectionModel **)(v5 + 432),
                 result);
          v9 = SkinPackModel::getPackId((SkinPackModel *)v8);
          v10 = SkinPackCollectionModel::isDownloadActive(
                  *(SkinPackCollectionModel **)(v5 + 432),
                  (const mce::UUID *)v9);
          result = UIPropertyBag::set<bool>(v3, 8, "#visible", &v10);
        }
      }
    }
  }
  return result;
}


signed int __fastcall Json::Value::isBool(Json::Value *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 8);
  result = 0;
  if ( v1 == 5 )
    result = 1;
  return result;
}


  if ( Json::Value::isNull(v5) )
{
    v7 = -1;
  }
  else if ( Json::Value::isObject(v5) == 1 )
  {
    v8 = (Json::Value *)Json::Value::operator[]((int)v5, v6);
    if ( Json::Value::isInt(v8) || Json::Value::isUInt(v8) == 1 )
      v7 = Json::Value::asInt(v8, 0);
    else
      v7 = -1;
  else
  if ( v4 == v7 )
    v9 = *(_DWORD *)(v3 + 444);
    gsl::basic_string_span<char const,-1>::remove_z<24u>((int)&v14, (int)"#skins_collection_index");
    v10 = v15;
    if ( Json::Value::isNull(v5) )
    {
      v11 = -1;
    }
    else if ( Json::Value::isObject(v5) == 1 )
      v12 = (Json::Value *)Json::Value::operator[]((int)v5, v10);
      if ( Json::Value::isInt(v12) || Json::Value::isUInt(v12) == 1 )
        v11 = Json::Value::asInt(v12, 0);
      else
        v11 = -1;
    if ( v9 == v11 )
      *(_DWORD *)(v3 + 440) = -1;
      *(_DWORD *)(v3 + 444) = -1;
  return 1;
}


int __fastcall Json::PathArgument::PathArgument(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v24;
    v25 = v24;
    v24 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v5);
    v6 = v25;
  sub_119C884((void **)&v23, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v26 = v23;
    v8 = (char *)&unk_28898CC;
    v23 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v26, (int)&v28, (int)v7);
    v8 = v23;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (char *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v25 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  if ( (*(int (**)(void))(**(_DWORD **)(v3 + 472) + 16))() )
    LOBYTE(v12) = 1;
    v12 = *(_BYTE *)(v3 + 481);
  *(_BYTE *)(v3 + 481) = v12;
  v13 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  return 1;
}


signed int __fastcall Json::Reader::readCppStyleComment(Json::Reader *this, int a2, int a3, int a4)
{
  _BYTE *v4; // r2@1 OVERLAPPED
  int v5; // r1@1
  int v6; // r1@1
  bool v7; // zf@2

  *(_QWORD *)(&v4 - 1) = *((_QWORD *)this + 11);
  v6 = v5 - (_DWORD)v4;
  do
  {
    v7 = v6 == 0;
    if ( v6 )
    {
      a4 = (int)(v4 + 1);
      *((_DWORD *)this + 23) = v4 + 1;
      v4 = (_BYTE *)*v4;
      v7 = v4 == (_BYTE *)13;
    }
    if ( v7 )
      break;
    --v6;
    v7 = v4 == (_BYTE *)10;
    v4 = (_BYTE *)a4;
  }
  while ( !v7 );
  return 1;
}


int __fastcall Json::Reader::addError(int a1, int *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r6@1
  int v7; // r0@2
  int v8; // r6@5
  int v9; // r0@5
  char *v10; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  __int64 v14; // [sp+0h] [bp-28h]@1
  int v15; // [sp+8h] [bp-20h]@1
  char *v16; // [sp+Ch] [bp-1Ch]@1
  int v17; // [sp+10h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v16 = (char *)&unk_28898CC;
  v15 = *(_DWORD *)(a3 + 8);
  v14 = *(_QWORD *)a3;
  EntityInteraction::setInteractText((int *)&v16, a2);
  v17 = v5;
  v6 = *(_DWORD *)(v4 + 64);
  if ( v6 == *(_DWORD *)(v4 + 72) - 20 )
  {
    if ( (unsigned int)((*(_QWORD *)(v4 + 40) >> 32) - ((signed int)(*(_DWORD *)(v4 + 76) - *(_QWORD *)(v4 + 40)) >> 2)) <= 1 )
      j_std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_reallocate_map(v4 + 40, 1u, 0);
    *(_DWORD *)(*(_DWORD *)(v4 + 76) + 4) = j_operator new(0x1F4u);
    v8 = *(_DWORD *)(v4 + 64);
    *(_QWORD *)v8 = v14;
    *(_DWORD *)(v8 + 8) = v15;
    sub_21E8AF4((int *)(v8 + 12), (int *)&v16);
    *(_DWORD *)(v8 + 16) = v17;
    v9 = *(_DWORD *)(v4 + 76);
    *(_DWORD *)(v4 + 76) = v9 + 4;
    v7 = *(_DWORD *)(v9 + 4);
    *(_DWORD *)(v4 + 68) = v7;
    *(_DWORD *)(v4 + 72) = v7 + 500;
  }
  else
    *(_QWORD *)v6 = v14;
    *(_DWORD *)(v6 + 8) = v15;
    sub_21E8AF4((int *)(v6 + 12), (int *)&v16);
    *(_DWORD *)(v6 + 16) = v17;
    v7 = *(_DWORD *)(v4 + 64) + 20;
  *(_DWORD *)(v4 + 64) = v7;
  v10 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return 0;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  v6 = (WorldSeedCatalogModel *)MainMenuScreenModel::getWorldSeedCatalogModel(*(MainMenuScreenModel **)(v3 + 424));
  v7 = WorldSeedCatalogModel::getWorldSeedModel(v6, v4);
  v8 = WorldSeedModel::getTitle((WorldSeedModel *)v7);
  v9 = (WorldSeedCatalogModel *)MainMenuScreenModel::getWorldSeedCatalogModel(*(MainMenuScreenModel **)(v3 + 424));
  v10 = WorldSeedCatalogModel::getWorldSeedModel(v9, v4);
  v11 = WorldSeedModel::getSeed((WorldSeedModel *)v10);
  v12 = (WorldSeedCatalogModel *)MainMenuScreenModel::getWorldSeedCatalogModel(*(MainMenuScreenModel **)(v3 + 424));
  v13 = WorldSeedCatalogModel::getWorldSeedModel(v12, v4);
  v14 = WorldSeedModel::getImagePath((WorldSeedModel *)v13);
  if ( *(_DWORD *)(v3 + 440) )
    (*(void (__fastcall **)(int, char *, char *, char *))(v3 + 444))(v3 + 432, v8, v11, v14);
  MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(v3 + 424));
  return 8;
}


      if ( Json::Value::isNull(v6)
{
        || (v7 = (Json::Value *)Json::Value::operator[]((int)v6, "#item_name"), Json::Value::isString(v7) != 1) )
      {
        s1 = v19;
        v8 = (char *)&unk_28898CC;
        v19 = &unk_28898CC;
      }
      else
        jsonValConversion<std::string>::as((int *)&s1, (int)&v21, (int)v7);
        v8 = (char *)v19;
      v9 = v8 - 12;
      if ( (int *)(v8 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      v10 = (char *)s1;
      v11 = *(_DWORD *)(v3 + 432) + 12 * v4;
      v12 = *(_DWORD **)(v11 + 4);
      v13 = *((_DWORD *)s1 - 3);
      if ( v13 != *(v12 - 3) || memcmp(s1, v12, v13) )
        EntityInteraction::setInteractText((int *)(v11 + 4), (int *)&s1);
        *(_DWORD *)(v11 + 8) = 2;
        v10 = (char *)s1;
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v10 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v10 - 12);
    }
  }
  return 1;
}


      if ( Json::Value::isNull((Json::Value *)&v42)
{
        || (v15 = (Json::Value *)Json::Value::operator[]((int)&v42, "seed"), Json::Value::isString(v15) != 1) )
      {
        v16 = (char *)&unk_28898CC;
        v41 = v40;
        v40 = (char *)&unk_28898CC;
      }
      else
        jsonValConversion<std::string>::as((int *)&v41, (int)&v43, (int)v15);
        v16 = v40;
      v17 = v16 - 12;
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v16 - 4);
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
          j_j_j_j_j__ZdlPv_9(v17);
      WorldSeedModel::WorldSeedModel(v39, (int *)(v6 + 8), (int *)(v6 + 12), (int *)&v41);
      v18 = *(_QWORD *)(v2 + 4);
      if ( (_DWORD)v18 == HIDWORD(v18) )
        std::vector<WorldSeedModel,std::allocator<WorldSeedModel>>::_M_emplace_back_aux<WorldSeedModel>(
          (unsigned __int64 *)v2,
          v39);
        WorldSeedModel::WorldSeedModel((int *)v18, v39);
        *(_DWORD *)(v2 + 4) += 16;
      WorldSeedModel::~WorldSeedModel((WorldSeedModel *)v39);
      sub_DA73B4(&v38, (int *)(v6 + 8));
      v19 = *(_DWORD *)(v2 + 44);
      v32 = *(_DWORD *)(v3 + 4);
      v20 = *(_DWORD *)(v3 + 8);
      v33 = v20;
      if ( v20 )
        v21 = (unsigned int *)(v20 + 8);
            v22 = __ldrex(v21);
          while ( __strex(v22 + 1, v21) );
          ++*v21;
      sub_DA73B4((int *)&v34, &v38);
      v36 = 0;
      v23 = operator new(0x10u);
      *v23 = v2;
      v23[1] = v32;
      v23[2] = v33;
      if ( v33 )
        v24 = (unsigned int *)(v33 + 8);
            v25 = __ldrex(v24);
          while ( __strex(v25 + 1, v24) );
          ++*v24;
      v23[3] = v34;
      v34 = (char *)&unk_28898CC;
      v35 = v23;
      v37 = sub_CFD4B4;
      v36 = (void (*)(void))sub_CFD510;
      ContentCatalogService::fetchFileData(v19, (int *)(v6 + 48), (int)&v35);
      if ( v36 )
        v36();
      v26 = v34 - 12;
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v34 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9(v26);
        v27 = (unsigned int *)(v33 + 8);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 == 1 )
          (*(void (**)(void))(*(_DWORD *)v33 + 12))();
      v29 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v38 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9(v29);
      v30 = v41 - 12;
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v41 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9(v30);
      Json::Value::~Value((Json::Value *)&v42);
    }
    result = WorldSeedCatalogModel::_filterWorldSeedModels((WorldSeedCatalogModel *)v2);
  }
  return result;
}


  if ( !Json::Value::isNull((Json::Value *)(a2 + 8)) && Json::Value::isObject(v3) == 1 )
{
    v6 = (Json::Value *)Json::Value::operator[]((int)v3, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      Json::Value::asInt(v6, 0);
  }
  ContainerScreenController::_getCollectionName((ContainerScreenController *)&v11, v5, v2);
  ContainerScreenController::_handleDropItem(v4);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  return 4;
}


char *__fastcall Json::StyledStreamWriter::write(int a1, int a2, const Json::Value *a3)
{
  const Json::Value *v3; // r5@1
  int v4; // r4@1
  char *result; // r0@1

  v3 = a3;
  v4 = a1;
  *(_DWORD *)(a1 + 12) = a2;
  *(_BYTE *)(a1 + 28) = 0;
  sub_21E8190((void **)(a1 + 16), (char *)&unk_257BC67, 0);
  j_Json::StyledStreamWriter::writeCommentBeforeValue((Json::StyledStreamWriter *)v4, v3);
  j_Json::StyledStreamWriter::writeValue((Json::StyledStreamWriter *)v4, v3);
  j_Json::StyledStreamWriter::writeCommentAfterValueOnSameLine((Json::StyledStreamWriter *)v4, v3);
  result = sub_21CBF38(*(char **)(v4 + 12), (int)"\n", 1);
  *(_DWORD *)(v4 + 12) = 0;
  return result;
}


const void **__fastcall Json::FastWriter::writeValue(Json::FastWriter *this, const Json::Value *a2)
{
  Json::FastWriter *v2; // r9@1
  Json::Value *v3; // r5@1
  int v4; // r1@1
  const void **result; // r0@2
  const void **v7; // r0@3
  unsigned int v8; // r2@3
  char *v9; // r1@3
  __int64 v10; // r0@4
  signed int v11; // r8@4
  unsigned int v12; // r5@4
  int v13; // r7@4
  char *v14; // r2@4
  const char *v15; // r4@5
  unsigned __int64 v16; // r0@5
  signed int v17; // r2@5
  signed int v18; // r7@8
  void *v20; // r0@14
  unsigned int *v21; // r2@15
  signed int v22; // r1@17
  __int64 v23; // r0@19
  unsigned int v24; // r7@19
  char *v25; // r6@19
  unsigned int v26; // r5@19
  const char *v27; // r4@20
  unsigned __int64 v28; // r0@20
  signed int v29; // r2@20
  signed int v30; // r5@23
  double v34; // r0@32
  const char *v35; // r0@37
  const char *v36; // r1@42
  int v37; // r7@49
  signed int v38; // r6@50
  const Json::Value *v39; // r0@53
  int v40; // r0@57
  const char **v41; // r7@58
  void *v42; // r0@62
  char *v43; // r1@63
  unsigned int v44; // r2@63
  const Json::Value *v45; // r0@65
  unsigned int *v46; // r2@67
  signed int v47; // r1@69
  const char **v48; // r4@75
  int v49; // r6@75
  unsigned int *v50; // r2@77
  signed int v51; // r1@79
  int *v52; // r0@85
  int v53; // [sp+8h] [bp-60h]@62
  int v54; // [sp+Ch] [bp-5Ch]@44
  int v55; // [sp+10h] [bp-58h]@37
  int v56; // [sp+14h] [bp-54h]@32
  int v57; // [sp+18h] [bp-50h]@27
  int v58; // [sp+1Ch] [bp-4Ch]@14
  const char **v59; // [sp+24h] [bp-44h]@57
  const char **v60; // [sp+28h] [bp-40h]@57
  char v61; // [sp+3Bh] [bp-2Dh]@4
  char v62; // [sp+3Ch] [bp-2Ch]@4
  RakNet *v63; // [sp+40h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v63 = _stack_chk_guard;
  switch ( j_Json::Value::type(a2) )
  {
    case 0:
      result = (const void **)(_stack_chk_guard - v63);
      if ( _stack_chk_guard != v63 )
        goto LABEL_94;
      v7 = (const void **)((char *)v2 + 4);
      v8 = 4;
      v9 = "null";
      return sub_21E7408(v7, v9, v8);
    case 1:
      v10 = j_Json::Value::asLargestInt(v3);
      v11 = HIDWORD(v10);
      v62 = 0;
      v12 = (v10 + (SHIDWORD(v10) >> 31)) ^ (SHIDWORD(v10) >> 31);
      v13 = ((v11 >> 31) + __CFADD__((_DWORD)v10, SHIDWORD(v10) >> 31) + v11) ^ (v11 >> 31);
      v14 = &v61;
      do
      {
        v15 = v14;
        *v14 = __PAIR__((unsigned int)v13, v12) % 0xA | 0x30;
        v16 = __PAIR__((unsigned int)v13, v12) / 0xA;
        v17 = 0;
        if ( v12 > 9 )
          v17 = 1;
        if ( v13 )
          v18 = 1;
        else
          v18 = v17;
        v14 = (char *)(v15 - 1);
        v12 = v16;
        _ZF = v18 == 0;
        v13 = HIDWORD(v16);
      }
      while ( !_ZF );
      if ( v11 <= -1 )
        *((_BYTE *)v15-- - 1) = 45;
      sub_21E94B4((void **)&v58, v15);
      sub_21E72F0((const void **)v2 + 1, (const void **)&v58);
      v20 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) == &dword_28898C0 )
        break;
      v21 = (unsigned int *)(v58 - 4);
      if ( !&pthread_create )
        goto LABEL_90;
      __dmb();
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      goto LABEL_91;
    case 2:
      v23 = j_Json::Value::asLargestUInt(v3);
      v24 = v23;
      v25 = &v61;
      v26 = HIDWORD(v23);
        v27 = v25;
        *v25-- = __PAIR__(v26, v24) % 0xA | 0x30;
        v28 = __PAIR__(v26, v24) / 0xA;
        v29 = 0;
        if ( v24 > 9 )
          v29 = 1;
        if ( v26 )
          v30 = 1;
          v30 = v29;
        v24 = v28;
        _ZF = v30 == 0;
        v26 = HIDWORD(v28);
      sub_21E94B4((void **)&v57, v27);
      sub_21E72F0((const void **)v2 + 1, (const void **)&v57);
      v20 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) == &dword_28898C0 )
      v21 = (unsigned int *)(v57 - 4);
    case 3:
      __asm
        VLDR            D0, =0.0; jumptable 01B303CA case 3
        VMOV            R2, R3, D0
      LODWORD(v34) = j_Json::Value::asDouble(v3, v4, _R2);
      j_Json::valueToString((Json *)&v56, SHIDWORD(v34), v34);
      sub_21E72F0((const void **)v2 + 1, (const void **)&v56);
      v20 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) == &dword_28898C0 )
      v21 = (unsigned int *)(v56 - 4);
    case 4:
      v35 = (const char *)j_Json::Value::asCString(v3);
      j_Json::valueToQuotedString((Json *)&v55, v35);
      sub_21E72F0((const void **)v2 + 1, (const void **)&v55);
      v20 = (void *)(v55 - 12);
      if ( (int *)(v55 - 12) == &dword_28898C0 )
      v21 = (unsigned int *)(v55 - 4);
    case 5:
      _ZF = j_Json::Value::asBool(v3, 0) == 0;
      v36 = "true";
      if ( _ZF )
        v36 = "false";
      sub_21E94B4((void **)&v54, v36);
      sub_21E72F0((const void **)v2 + 1, (const void **)&v54);
      v20 = (void *)(v54 - 12);
      if ( (int *)(v54 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v54 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
LABEL_90:
          v22 = (*v21)--;
LABEL_91:
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      break;
    case 6:
      sub_21E7408((const void **)v2 + 1, "[", 1u);
      v37 = j_Json::Value::size(v3);
      if ( v37 > 0 )
        v38 = 0;
        do
          if ( v38 >= 1 )
            sub_21E7408((const void **)v2 + 1, ",", 1u);
          v39 = (const Json::Value *)j_Json::Value::operator[]((int)v3, v38);
          j_Json::FastWriter::writeValue(v2, v39);
          ++v38;
        while ( v37 != v38 );
      v8 = 1;
      v9 = "]";
    case 7:
      j_Json::Value::getMemberNames((Json::Value *)&v59, (int)v3);
      sub_21E7408((const void **)v2 + 1, "{", 1u);
      v40 = (int)v59;
      if ( v59 != v60 )
        v41 = v59;
        while ( 1 )
          if ( v41 != (const char **)v40 )
          j_Json::valueToQuotedString((Json *)&v53, *v41);
          sub_21E72F0((const void **)v2 + 1, (const void **)&v53);
          v42 = (void *)(v53 - 12);
          if ( (int *)(v53 - 12) != &dword_28898C0 )
          {
            v46 = (unsigned int *)(v53 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v47 = __ldrex(v46);
              while ( __strex(v47 - 1, v46) );
            }
            else
              v47 = (*v46)--;
            if ( v47 <= 0 )
              j_j_j_j__ZdlPv_9(v42);
          }
          v43 = ":";
          v44 = 1;
          if ( *((_BYTE *)v2 + 8) )
            v43 = ": ";
            v44 = 2;
          sub_21E7408((const void **)v2 + 1, v43, v44);
          v45 = (const Json::Value *)j_Json::Value::operator[]((int)v3, v41);
          j_Json::FastWriter::writeValue(v2, v45);
          ++v41;
          if ( v41 == v60 )
            break;
          v40 = (int)v59;
      sub_21E7408((const void **)v2 + 1, "}", 1u);
      v49 = (int)v60;
      v48 = v59;
          v52 = (int *)(*v48 - 12);
          if ( v52 != &dword_28898C0 )
            v50 = (unsigned int *)(*v48 - 4);
                v51 = __ldrex(v50);
              while ( __strex(v51 - 1, v50) );
              v51 = (*v50)--;
            if ( v51 <= 0 )
              j_j_j_j__ZdlPv_9(v52);
          ++v48;
        while ( v48 != (const char **)v49 );
        v48 = v59;
      if ( v48 )
        j_operator delete(v48);
    default:
  }
  result = (const void **)(_stack_chk_guard - v63);
  if ( _stack_chk_guard != v63 )
LABEL_94:
    j___stack_chk_fail_0((int)result);
  return result;
}


RakNet *__fastcall Json::Reader::getFormattedErrorMessages(Json::Reader *this, int a2)
{
  const void **v2; // r8@1
  int v3; // r4@1
  int v4; // r6@1
  unsigned int v5; // r0@3
  signed int v6; // r2@3
  _BYTE *v7; // r1@3
  _BYTE *v8; // r3@5
  _BYTE *v9; // r7@6
  int v10; // r5@8
  void **v11; // r0@13
  const void **v12; // r0@13
  const void **v13; // r0@13
  char *v14; // r0@13
  char *v15; // r0@14
  void *v16; // r0@15
  const void **v17; // r0@16
  char *v18; // r0@16
  char *v19; // r0@17
  unsigned int v20; // r0@18
  _BYTE *v21; // r1@19
  signed int v22; // r2@19
  _BYTE *v23; // r3@21
  _BYTE *v24; // r7@22
  int v25; // r5@24
  void **v26; // r0@29
  const void **v27; // r0@29
  const void **v28; // r0@29
  char *v29; // r0@29
  char *v30; // r0@30
  void *v31; // r0@31
  unsigned int *v32; // r2@34
  signed int v33; // r1@36
  unsigned int *v34; // r2@38
  signed int v35; // r1@40
  unsigned int *v36; // r2@42
  signed int v37; // r1@44
  unsigned int *v38; // r2@46
  signed int v39; // r1@48
  unsigned int *v40; // r2@50
  signed int v41; // r1@52
  unsigned int *v42; // r2@54
  signed int v43; // r1@56
  unsigned int *v44; // r2@58
  signed int v45; // r1@60
  unsigned int *v46; // r2@62
  signed int v47; // r1@64
  RakNet *result; // r0@98
  int v49; // [sp+Ch] [bp-8Ch]@1
  int v50; // [sp+14h] [bp-84h]@1
  int v51; // [sp+18h] [bp-80h]@29
  char *v52; // [sp+1Ch] [bp-7Ch]@29
  char *v53; // [sp+20h] [bp-78h]@29
  char *v54; // [sp+24h] [bp-74h]@16
  char *v55; // [sp+28h] [bp-70h]@16
  int v56; // [sp+2Ch] [bp-6Ch]@13
  char *v57; // [sp+30h] [bp-68h]@13
  char *v58; // [sp+34h] [bp-64h]@13
  char s; // [sp+3Ch] [bp-5Ch]@13
  RakNet *v60; // [sp+70h] [bp-28h]@1

  v2 = (const void **)this;
  v3 = a2;
  v60 = _stack_chk_guard;
  *(_DWORD *)this = &unk_28898CC;
  v50 = *(_DWORD *)(a2 + 56);
  v49 = *(_DWORD *)(a2 + 60);
  v4 = *(_DWORD *)(a2 + 48);
  while ( v4 != *(_DWORD *)(v3 + 64) )
  {
    v5 = *(_DWORD *)(v4 + 4);
    v6 = 1;
    v7 = *(_BYTE **)(v3 + 84);
LABEL_5:
    v8 = v7;
    while ( 1 )
    {
      v9 = v8;
      if ( (unsigned int)v8 >= v5 || v8 == *(_BYTE **)(v3 + 88) )
        break;
      ++v8;
      v10 = *v9;
      if ( v10 == 10 )
        goto LABEL_4;
      if ( v10 == 13 )
      {
        if ( *v8 == 10 )
          v8 = v9 + 2;
LABEL_4:
        v7 = v8;
        ++v6;
        goto LABEL_5;
      }
    }
    j_sprintf(&s, "Line %d, Column %d", v6, v5 + 1 - (_DWORD)v7);
    v11 = sub_21E94B4((void **)&v56, &s);
    v12 = sub_21E82D8((const void **)v11, 0, (unsigned int)"* ", (_BYTE *)2);
    v57 = (char *)*v12;
    *v12 = &unk_28898CC;
    v13 = sub_21E7408((const void **)&v57, "\n", 1u);
    v58 = (char *)*v13;
    *v13 = &unk_28898CC;
    sub_21E72F0(v2, (const void **)&v58);
    v14 = v58 - 12;
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v58 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      else
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = v57 - 12;
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v57 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v56 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v54 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v54, *(_DWORD *)(*(_DWORD *)(v4 + 12) - 12) + 2);
    sub_21E7408((const void **)&v54, "  ", 2u);
    sub_21E72F0((const void **)&v54, (const void **)(v4 + 12));
    v17 = sub_21E7408((const void **)&v54, "\n", 1u);
    v55 = (char *)*v17;
    *v17 = &unk_28898CC;
    sub_21E72F0(v2, (const void **)&v55);
    v18 = v55 - 12;
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v55 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    v19 = v54 - 12;
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v54 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v20 = *(_DWORD *)(v4 + 16);
    if ( v20 )
      v21 = *(_BYTE **)(v3 + 84);
      v22 = 1;
LABEL_21:
      v23 = v21;
      while ( 1 )
        v24 = v23;
        if ( (unsigned int)v23 >= v20 || v23 == *(_BYTE **)(v3 + 88) )
          break;
        ++v23;
        v25 = *v24;
        if ( v25 == 10 )
          goto LABEL_20;
        if ( v25 == 13 )
        {
          if ( *v23 == 10 )
            v23 = v24 + 2;
LABEL_20:
          v21 = v23;
          ++v22;
          goto LABEL_21;
        }
      j_sprintf(&s, "Line %d, Column %d", v22, v20 + 1 - (_DWORD)v21);
      v26 = sub_21E94B4((void **)&v51, &s);
      v27 = sub_21E82D8((const void **)v26, 0, (unsigned int)"See ", (_BYTE *)4);
      v52 = (char *)*v27;
      *v27 = &unk_28898CC;
      v28 = sub_21E7408((const void **)&v52, " for detail.\n", 0xDu);
      v53 = (char *)*v28;
      *v28 = &unk_28898CC;
      sub_21E72F0(v2, (const void **)&v53);
      v29 = v53 - 12;
      if ( (int *)(v53 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v53 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
        else
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      v30 = v52 - 12;
      if ( (int *)(v52 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v52 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v31 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v51 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
    v4 += 20;
    if ( v4 == v50 )
      v4 = *(_DWORD *)(v49 + 4);
      v49 += 4;
      v50 = v4 + 500;
  }
  result = (RakNet *)(_stack_chk_guard - v60);
  if ( _stack_chk_guard != v60 )
    j___stack_chk_fail_0((int)result);
  return result;
}


  if ( Json::Value::isNull(v7)
{
    || (v8 = (Json::Value *)Json::Value::operator[]((int)v7, "#sub_command"), Json::Value::isString(v8) != 1) )
  {
    v40 = v39;
    v9 = (char *)&unk_28898CC;
    v39 = &unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v40, (int)&v41, (int)v8);
    v9 = (char *)v39;
  v10 = v9 - 12;
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = *(_DWORD *)(v3 + 520);
  if ( v11 == 4 )
    *(_DWORD *)(v3 + 520) = 3;
    *(_DWORD *)(v3 + 536) = 3;
    EntityInteraction::setInteractText((int *)(v3 + 540), (int *)&v40);
    sub_119CAD8((void **)(v3 + 548), "host_teleport_collection", (_BYTE *)0x18);
    v12 = 1;
    *(_DWORD *)(v3 + 552) = 1;
    if ( v11 == 5 )
      *(_DWORD *)(v3 + 520) = 3;
      *(_DWORD *)(v3 + 536) = 3;
      EntityInteraction::setInteractText((int *)(v3 + 544), (int *)&v40);
      sub_119CAD8((void **)(v3 + 548), "host_teleport_collection", (_BYTE *)0x18);
    v12 = 0;
  if ( sub_119CA58((int *)&v40, " ", 0, 1u) != -1 )
    v37 = (char *)&unk_28898CC;
    sub_119CAF8((const void **)&v37, *(v40 - 3) + 1);
    sub_119C894((const void **)&v37, "\"", 1u);
    sub_119C8A4((const void **)&v37, (const void **)&v40);
    v13 = sub_119C894((const void **)&v37, "\"", 1u);
    v38 = (char *)*v13;
    *v13 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v40,
      (int *)&v38);
    v14 = v38 - 12;
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v38 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
      }
      else
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = v37 - 12;
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v37 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (int)v40;
  v17 = *(_QWORD *)(v40 - 3);
  v18 = v17 + 1;
  if ( v17 + 1 > (unsigned int)(*(_QWORD *)(v40 - 3) >> 32) || *(v40 - 1) >= 1 )
    sub_119CAF8((const void **)&v40, v17 + 1);
    v16 = (int)v40;
    v17 = *(v40 - 3);
  *(_BYTE *)(v16 + v17) = 32;
  v19 = (unsigned __int64 *)(v3 + 524);
  v20 = (int)v40;
  if ( v40 - 3 != &dword_28898C0 )
    *(v40 - 1) = 0;
    *(_DWORD *)(v20 - 12) = v18;
    *(_BYTE *)(v20 + v18) = byte_26C67B8[0];
  if ( v12 )
    std::vector<std::string,std::allocator<std::string>>::insert(
      (int)v19,
      (int *)(*(_DWORD *)v19 + 4 * v12),
      (int *)&v40);
    v21 = *(_QWORD *)(v3 + 528);
    if ( (_DWORD)v21 == HIDWORD(v21) )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(v19, (int *)&v40);
      sub_119C854((int *)v21, (int *)&v40);
      *(_DWORD *)(v3 + 528) += 4;
  sub_119CA68((const void **)(v3 + 464), 0, *(_BYTE **)(*(_DWORD *)(v3 + 464) - 12), 0);
  v23 = (const void **)(*(_QWORD *)(v3 + 524) >> 32);
  for ( i = (const void **)*(_QWORD *)(v3 + 524); v23 != i; ++i )
    sub_119C8A4((const void **)(v3 + 464), i);
  v24 = *(_DWORD *)(v3 + 424);
  MinecraftScreenModel::updateTextBoxText();
  *(_BYTE *)(v3 + 479) = 1;
  if ( (unsigned int)((signed int)((*(_QWORD *)(v3 + 524) >> 32) - *(_QWORD *)(v3 + 524)) >> 2) >= *(_DWORD *)(v3 + 536) )
    *(_DWORD *)(v3 + 520) = 0;
  v25 = (char *)(v40 - 3);
    v29 = v40 - 1;
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  return 1;
}


  if ( Json::Value::isString((Json::Value *)&v99) != 1 )
{
  sub_21E94B4((void **)&v97, (const char *)&unk_257BC67);
  Json::Value::asString(&v98, (int)&v99, &v97);
  v11 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v97 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  mce::UUID::fromString((int)&v93, &v98);
  v12 = v94;
  v13 = v95;
  v14 = v96;
  *(_DWORD *)v9 = *(_DWORD *)&v93;
  *(_DWORD *)(v9 + 4) = v12;
  *(_DWORD *)(v9 + 8) = v13;
  *(_DWORD *)(v9 + 12) = v14;
  if ( !v100
    && *(_QWORD *)&mce::UUID::EMPTY == *(_QWORD *)v9
    && qword_287E930 == __PAIR__(
                          (unsigned int)(*(_QWORD *)(v9 + 8) >> 32) ^ HIDWORD(qword_287E930),
                          (unsigned int)*(_QWORD *)(v9 + 8)) )
    v15 = *(_QWORD *)(a5 + 4);
    if ( (_DWORD)v15 == HIDWORD(v15) )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)a5,
        v10);
      sub_21E8AF4((int *)v15, v10);
      *(_DWORD *)(a5 + 4) += 4;
    sub_21E8AF4(&v88, v8);
    sub_21E72F0((const void **)&v88, (const void **)&v98);
    mce::UUID::seedFromString((Crypto::Hash::Hash *)&v89, (const void **)&v88);
    v18 = v90;
    v19 = v91;
    v20 = v92;
    *(_DWORD *)v9 = *(_DWORD *)&v89;
    *(_DWORD *)(v9 + 4) = v18;
    *(_DWORD *)(v9 + 8) = v19;
    *(_DWORD *)(v9 + 12) = v20;
    v21 = (void *)(v88 - 12);
    if ( (int *)(v88 - 12) != &dword_28898C0 )
      v67 = (unsigned int *)(v88 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v68 = __ldrex(v67);
        while ( __strex(v68 - 1, v67) );
      }
      else
        v68 = (*v67)--;
      if ( v68 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    if ( a7 == 1 )
      sub_157984C(&v80, (__int64 *)a5);
      mce::UUID::asString((mce::UUID *)&v81);
      v22 = operator new(8u);
      v23 = v22;
      v24 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
              (int)&v80,
              (int)&v82,
              (int)v22);
      v25 = v24;
      v26 = 0;
      v82 = &off_26D9084;
      v27 = v24 - (_DWORD)v23;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      v28 = v27 >> 2;
      if ( v27 >> 2 )
        if ( v28 >= 0x40000000 )
          sub_21E57F4();
        v26 = operator new(v27);
      v83 = v26;
      v84 = (int)v26;
      v85 = (char *)v26 + 4 * v28;
      v29 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
              (int)v23,
              v25,
              (int)v26);
      v84 = v29;
      v86 = 13;
      v87 = 2;
      v82 = &off_26EABBC;
      PackReport::addWarning<PackDiscoveryError>(a6, (int)&v82);
      if ( v26 != (void *)v29 )
        v30 = &v101;
        {
          v34 = (int *)(*(_DWORD *)v26 - 12);
          if ( v34 != &dword_28898C0 )
          {
            v31 = (unsigned int *)(*(_DWORD *)v26 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
            }
            else
              v32 = (*v31)--;
            if ( v32 <= 0 )
              v33 = v30;
              j_j_j_j__ZdlPv_9(v34);
              v30 = v33;
          }
          v26 = (char *)v26 + 4;
        }
        while ( v26 != (void *)v29 );
        v26 = v83;
      if ( v26 )
        operator delete(v26);
      if ( v23 != (_DWORD *)v25 )
        v35 = v23;
          v38 = (int *)(*v35 - 12);
          if ( v38 != &dword_28898C0 )
            v36 = (unsigned int *)(*v35 - 4);
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
              v37 = (*v36)--;
            if ( v37 <= 0 )
              j_j_j_j__ZdlPv_9(v38);
          ++v35;
        while ( v35 != (_DWORD *)v25 );
      if ( v23 )
        operator delete(v23);
      v39 = (void *)(v81 - 12);
      if ( (int *)(v81 - 12) != &dword_28898C0 )
        v71 = (unsigned int *)(v81 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
        else
          v72 = (*v71)--;
        if ( v72 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      v40 = (void *)(v80 - 12);
      if ( (int *)(v80 - 12) == &dword_28898C0 )
        goto LABEL_84;
      v41 = (unsigned int *)(v80 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
LABEL_113:
        goto LABEL_118;
      sub_157984C(&v73, (__int64 *)a5);
      v43 = operator new(4u);
      v44 = v43;
      v45 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
              (int)&v73,
              (int)&v74,
              (int)v43);
      v46 = v45;
      v47 = 0;
      v74 = &off_26D9084;
      v48 = v45 - (_DWORD)v44;
      v75 = 0;
      v76 = 0;
      v77 = 0;
      v49 = v48 >> 2;
      if ( v48 >> 2 )
        if ( v49 >= 0x40000000 )
        v47 = operator new(v48);
      v75 = v47;
      v76 = (int)v47;
      v77 = (char *)v47 + 4 * v49;
      v50 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
              (int)v44,
              v46,
              (int)v47);
      v76 = v50;
      v78 = 12;
      v79 = 2;
      v74 = &off_26EABBC;
      PackReport::addError<PackDiscoveryError>(a6, (int)&v74);
      if ( v47 != (void *)v50 )
        v51 = &v101;
          v55 = (int *)(*(_DWORD *)v47 - 12);
          if ( v55 != &dword_28898C0 )
            v52 = (unsigned int *)(*(_DWORD *)v47 - 4);
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
              v53 = (*v52)--;
            if ( v53 <= 0 )
              v54 = v51;
              j_j_j_j__ZdlPv_9(v55);
              v51 = v54;
          v47 = (char *)v47 + 4;
        while ( v47 != (void *)v50 );
        v47 = v75;
      v7 = a5;
      if ( v47 )
        operator delete(v47);
      if ( v44 != (_DWORD *)v46 )
        v56 = v44;
          v59 = (int *)(*v56 - 12);
          if ( v59 != &dword_28898C0 )
            v57 = (unsigned int *)(*v56 - 4);
                v58 = __ldrex(v57);
              while ( __strex(v58 - 1, v57) );
              v58 = (*v57)--;
            if ( v58 <= 0 )
              j_j_j_j__ZdlPv_9(v59);
          ++v56;
        while ( v56 != (_DWORD *)v46 );
      if ( v44 )
        operator delete(v44);
      v40 = (void *)(v73 - 12);
      if ( (int *)(v73 - 12) == &dword_28898C0 )
      v41 = (unsigned int *)(v73 - 4);
        goto LABEL_113;
    v42 = (*v41)--;
LABEL_118:
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
LABEL_84:
    v60 = *(_DWORD *)(v7 + 4);
    *(_DWORD *)(v7 + 4) = v60 - 4;
    v61 = *(_DWORD *)(v60 - 4);
    v62 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v69 = (unsigned int *)(v61 - 4);
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
        v70 = (*v69)--;
      if ( v70 <= 0 )
        j_j_j_j__ZdlPv_9(v62);
  v63 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v98 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  return Json::Value::~Value((Json::Value *)&v99);
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#hyperlink"), Json::Value::isString(v5) != 1) )
  {
    v17 = v16;
    v6 = (char *)&unk_28898CC;
    v16 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v17, (int)&v18, (int)v5);
    v6 = v16;
  v7 = v6 - 12;
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  MinecraftScreenController::_getApprovedLinks((MinecraftScreenController *)v7);
  v8 = (const void **)dword_27C8C50;
  if ( std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
         dword_27C8C4C,
         (const void **)dword_27C8C50,
         (const void **)&v17) != v8 )
    v9 = *(_DWORD *)(v3 + 380);
    MinecraftScreenModel::openUriLink();
  v10 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v17 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  return 8;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  PlayScreenController::_selectLegacyWorld((PlayScreenController *)&v10, (int)v3, v4);
  if ( WorldInfo::isValid((WorldInfo *)&v10) )
    PlayScreenController::_displayReportWorldModalDialog(v3, (const LegacyWorldInfo *)&v10, 0);
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v10);
  return 0;
}


int __fastcall Json::Value::isInt(Json::Value *this)
{
  int result; // r0@1

  result = *((_BYTE *)this + 8);
  if ( result != 1 )
    result = 0;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v17 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  v14 = (const void **)StoreCatalogItemModel::getKeyArtLocation((StoreCatalogItemModel *)&v17, 0);
  UIPropertyBag::set<std::string>(v5, *((_DWORD *)*v6 - 3), *v6, v14);
}


  if ( Json::Value::isNull(v4) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, v5);
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  v8 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(*(SkinPackCollectionModel **)(v3 + 432), v6);
  SkinPackModel::decrementFirstVisibleSkinIndex((SkinPackModel *)v8, 5);
  return 1;
}


signed int __fastcall Json::Reader::parse(Json::Reader *this, const char *a2, __int64 a3, bool a4)
{
  Json::Reader *v4; // r4@1
  int v5; // r3@1
  char *v6; // r11@1
  __int64 v7; // r6@3
  __int64 v8; // kr00_8@3
  int v9; // r0@3
  int v10; // r1@3
  int v11; // r2@3
  int v12; // r3@3
  unsigned int v13; // r9@3
  unsigned int v14; // r8@4
  void *v15; // t1@5
  Json::Value **v16; // r1@6
  int v17; // r2@6
  void *v18; // r0@7
  Json::Value *v19; // r5@7
  int v20; // r0@10
  int v21; // r0@15
  int v22; // r0@18
  signed int v23; // r6@19
  bool v24; // zf@23
  void *v25; // r0@30
  unsigned int *v27; // r2@33
  signed int v28; // r1@35
  const char *v29; // [sp+0h] [bp-58h]@1
  __int64 v30; // [sp+4h] [bp-54h]@1
  int v31; // [sp+10h] [bp-48h]@30
  int v32; // [sp+14h] [bp-44h]@3
  int v33; // [sp+18h] [bp-40h]@3
  int v34; // [sp+1Ch] [bp-3Ch]@3
  int v35; // [sp+20h] [bp-38h]@3
  __int64 v36; // [sp+24h] [bp-34h]@3
  __int64 v37; // [sp+2Ch] [bp-2Ch]@3

  v4 = this;
  v30 = a3;
  HIDWORD(a3) = *((_BYTE *)this + 108);
  v6 = (char *)this + 104;
  v29 = a2;
  *((_DWORD *)this + 21) = a2;
  *((_DWORD *)this + 22) = a3;
  if ( HIDWORD(a3) )
    LOBYTE(v5) = 1;
  *((_BYTE *)this + 110) = a4 & v5;
  *((_DWORD *)this + 23) = a2;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  sub_21E8190((void **)this + 26, (char *)&unk_257BC67, 0);
  v7 = *((_QWORD *)v4 + 6);
  v9 = *((_DWORD *)v4 + 16);
  v10 = *((_DWORD *)v4 + 17);
  v11 = *((_DWORD *)v4 + 18);
  v12 = *((_DWORD *)v4 + 19);
  v37 = *((_QWORD *)v4 + 7);
  v8 = v37;
  v32 = v9;
  v33 = v10;
  v34 = v11;
  v35 = v12;
  v36 = v7;
  j_std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_destroy_data_aux(
    (int)v4 + 40,
    (int)&v36,
    (int)&v32);
  v13 = *((_DWORD *)v4 + 19);
  if ( HIDWORD(v8) < v13 )
  {
    v14 = HIDWORD(v8);
    do
    {
      v15 = *(void **)(v14 + 4);
      v14 += 4;
      j_operator delete(v15);
    }
    while ( v14 < v13 );
  }
  *((_QWORD *)v4 + 8) = v7;
  *((_QWORD *)v4 + 9) = v8;
  v16 = (Json::Value **)*((_DWORD *)v4 + 2);
  v17 = *((_DWORD *)v4 + 6);
  if ( (Json::Value **)v17 == v16 )
    v16 = (Json::Value **)*((_DWORD *)v4 + 6);
    v19 = (Json::Value *)HIDWORD(v30);
  else
    v18 = (void *)*((_DWORD *)v4 + 7);
      if ( (void *)v17 == v18 )
      {
        j_operator delete(v18);
        v20 = *((_DWORD *)v4 + 9);
        *((_DWORD *)v4 + 9) = v20 - 4;
        v18 = *(void **)(v20 - 4);
        *((_DWORD *)v4 + 7) = v18;
        *((_DWORD *)v4 + 8) = (char *)v18 + 512;
        v16 = (Json::Value **)*((_DWORD *)v4 + 2);
        v17 = (int)v18 + 508;
      }
      else
        v17 -= 4;
      *((_DWORD *)v4 + 6) = v17;
    while ( (Json::Value **)v17 != v16 );
  if ( v16 == (Json::Value **)(*((_DWORD *)v4 + 8) - 4) )
    if ( (unsigned int)((*(_QWORD *)v4 >> 32) - ((signed int)(*((_DWORD *)v4 + 9) - *(_QWORD *)v4) >> 2)) <= 1 )
      j_std::deque<Json::Value *,std::allocator<Json::Value *>>::_M_reallocate_map((int)v4, 1u, 0);
    *(_DWORD *)(*((_DWORD *)v4 + 9) + 4) = j_operator new(0x200u);
    **((_DWORD **)v4 + 6) = v19;
    v22 = *((_DWORD *)v4 + 9);
    *((_DWORD *)v4 + 9) = v22 + 4;
    v21 = *(_DWORD *)(v22 + 4);
    *((_DWORD *)v4 + 7) = v21;
    *((_DWORD *)v4 + 8) = v21 + 512;
    *v16 = v19;
    v21 = *((_DWORD *)v4 + 6) + 4;
  *((_DWORD *)v4 + 6) = v21;
  v23 = j_Json::Reader::readValue(v4);
  if ( *((_BYTE *)v4 + 108) )
      j_Json::Reader::readToken(v4, (int)&v36);
    while ( (_DWORD)v36 == 12 );
    j_Json::Reader::readToken(v4, (int)&v36);
  v24 = *((_BYTE *)v4 + 110) == 0;
  if ( *((_BYTE *)v4 + 110) )
    v24 = *(_DWORD *)(*(_DWORD *)v6 - 12) == 0;
  if ( !v24 )
    j_Json::Value::setComment((int)v19, (const char **)v4 + 26, 2);
  if ( *((_BYTE *)v4 + 109) && !j_Json::Value::isArray(v19) && !j_Json::Value::isObject(v19) )
    LODWORD(v36) = 13;
    HIDWORD(v36) = v29;
    LODWORD(v37) = v30;
    sub_21E94B4((void **)&v31, "A valid JSON document must be either an array or an object value.");
    j_Json::Reader::addError((int)v4, &v31, (int)&v36, 0);
    v25 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v31 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v23 = 0;
  return v23;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v23;
    v24 = v23;
    v23 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v24, (int)&v26, (int)v5);
    v6 = v24;
  sub_21E94B4((void **)&v22, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v25 = v22;
    v8 = (char *)&unk_28898CC;
    v22 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v7);
    v8 = v22;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v8 - 4);
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
  v10 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  EntityInteraction::setInteractText((int *)(v3 + 432), (int *)&v25);
  v12 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return 1;
}


  if ( Json::Value::isNull((Json::Value *)(v2 + 8))
{
    || (v4 = (Json::Value *)Json::Value::operator[](v2 + 8, "#property_field"), Json::Value::isString(v4) != 1) )
  {
    v5 = v35;
    v36 = v35;
    v35 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v36, (int)&v38, (int)v4);
    v5 = v36;
  sub_119C884((void **)&v34, (const char *)&unk_257BC67);
  if ( Json::Value::isNull((Json::Value *)(v2 + 8))
    || Json::Value::isObject((Json::Value *)(v2 + 8)) != 1
    || (v6 = (Json::Value *)Json::Value::operator[](v2 + 8, v5), Json::Value::isString(v6) != 1) )
    v37 = v34;
    v7 = (char *)&unk_28898CC;
    v34 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v37, (int)&v39, (int)v6);
    v7 = v34;
  v8 = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (char *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v36 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (char *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v35 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = *(I18n **)(v3 + 640);
  v32 = 0LL;
  v33 = 0;
  v12 = Util::ProfanityFilter::findProfanity(v11, (unsigned int *)&v37, (unsigned __int64 *)&v32);
  v13 = (void *)HIDWORD(v32);
  v14 = (void *)v32;
  if ( (_DWORD)v32 != HIDWORD(v32) )
    do
      v17 = (int *)(*(_DWORD *)v14 - 12);
      if ( v17 != &dword_28898C0 )
      {
        v15 = (unsigned int *)(*(_DWORD *)v14 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v17);
      }
      v14 = (char *)v14 + 4;
    while ( v14 != v13 );
    v14 = (void *)v32;
  if ( v14 )
    operator delete(v14);
  if ( v12 == 1 )
    Util::ProfanityFilter::getProfanityModalData((Util::ProfanityFilter *)&v31);
    v30 = 0;
    LODWORD(v18) = &v29;
    MinecraftScreenController::_displayCustomModalPopup(v3, (int)&v31, v18);
    if ( v30 )
      v30();
    ModalScreenData::~ModalScreenData((ModalScreenData *)&v31);
    AnvilContainerManagerController::setResultName(*(_DWORD *)(v3 + 628), (int *)&v37);
  v19 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v37 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  return 1;
}


void __fastcall Json::Value::setComment(int a1, const char **a2, int a3)
{
  int v3; // r7@1
  const char *v4; // r9@1
  int v5; // r5@1
  int v6; // r8@1
  _DWORD *v7; // r0@2
  void *v8; // r0@3
  size_t v9; // r0@6
  int v10; // r7@6
  _BYTE *v11; // r0@6
  _BYTE *v12; // r6@6
  _BYTE *v13; // r4@6

  v3 = a1;
  v4 = *a2;
  v5 = *(_DWORD *)(a1 + 12);
  v6 = a3;
  if ( !v5 )
  {
    v7 = j_operator new[](0x14u);
    *(_QWORD *)v7 = 12884901892LL;
    v7[2] = 0;
    v5 = (int)(v7 + 2);
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v3 + 12) = v7 + 2;
  }
  v8 = *(void **)(v5 + 4 * v6);
  if ( v8 )
    j_free(v8);
  if ( v4 )
    v9 = j_strlen_0(v4);
    v10 = v9;
    v11 = j_malloc(v9 + 1);
    v12 = v11;
    v13 = 0;
    if ( v11 )
    {
      j___aeabi_memcpy_0((int)v11, (int)v4, v10);
      v12[v10] = 0;
      v13 = v12;
    }
  else
  *(_DWORD *)(v5 + 4 * v6) = v13;
}


  if ( !Json::Value::isNull((Json::Value *)(a2 + 8)) && Json::Value::isObject(v2) == 1 )
{
    v4 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v4) || Json::Value::isUInt(v4) == 1 )
    {
      v5 = Json::Value::asInt(v4, 0);
      if ( v5 >= 0 )
        MinecraftScreenModel::navigateToPermissionsScreen(
          *(_DWORD *)(v3 + 424),
          *(_QWORD *)(*(_DWORD *)(v3 + 432) + 8 * v5));
    }
  }
  return 0;
}


void __fastcall Json::valueToQuotedString(Json *this, const char *a2)
{
  Json::valueToQuotedString(this, a2);
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v23;
    v24 = v23;
    v23 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v24, (int)&v26, (int)v5);
    v6 = v24;
  sub_21E94B4((void **)&v22, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v25 = v22;
    v8 = (char *)&unk_28898CC;
    v22 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v7);
    v8 = v22;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v8 - 4);
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
  v10 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (char *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( (!*(_DWORD *)(v3 + 24) || (*(int (__fastcall **)(int, char **))(v3 + 28))(v3 + 16, &v25) == 1)
    && (!*(_DWORD *)(v3 + 40) || (*(int (__fastcall **)(int))(v3 + 44))(v3 + 32) == 1) )
    if ( !*(_DWORD *)(v3 + 8) )
      sub_21E5F48();
    (*(void (__fastcall **)(int, char **))(v3 + 12))(v3, &v25);
  v12 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return 1;
}


int __fastcall Json::Value::isArray(Json::Value *this)
{
  int v1; // r0@1
  signed int v2; // r2@1
  signed int v3; // r1@1

  v1 = *((_BYTE *)this + 8);
  v2 = 0;
  v3 = 0;
  if ( v1 == 6 )
    v2 = 1;
  if ( !v1 )
    v3 = 1;
  return v3 | v2;
}


  if ( Json::Value::size(a1) == a3 )
{
    v7 = 0;
    if ( v3 <= 0 )
      return v7;
    while ( 1 )
    {
      v8 = (Json::Value *)Json::Value::operator[]((int)v5, v7);
      LODWORD(_R0) = Json::Value::asFloat(v8, 0.0);
      HIDWORD(_R0) = v4 + 4 * v7;
      __asm
      {
        VMOV            S2, R0
        VLDR            S0, [R1]
        VCVT.F32.S32    S0, S0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        break;
      if ( (signed int)++v7 >= v3 )
        return 0;
    }
  }
  LODWORD(_R0) = v5;
  Json::Value::clear(_R0);
  if ( v3 >= 1 )
  {
    v13 = 0;
    do
      v14 = Json::Value::operator[]((int)v5, v13);
      _R0 = *(_DWORD *)(v4 + 4 * v13);
        VMOV            S0, R0
        VCVT.F64.F32    D0, S0
        VMOV            R2, R3, D0
      Json::Value::Value((Json::Value *)&v19, v17, _R2);
      Json::Value::operator=(v14, (const Json::Value *)&v19);
      Json::Value::~Value((Json::Value *)&v19);
      ++v13;
    while ( v13 < v3 );
  return 1;
}


int __fastcall Json::Value::asCString(Json::Value *this)
{
  return *(_DWORD *)this;
}


int *__fastcall Json::FastWriter::write(Json::FastWriter *this, const Json::Value *a2, const Json::Value *a3)
{
  Json::FastWriter *v3; // r5@1
  const void **v4; // r7@1
  const Json::Value *v5; // r4@1
  int *v6; // r6@1

  v3 = a2;
  v4 = (const void **)((char *)a2 + 4);
  v5 = a3;
  v6 = (int *)this;
  sub_21E8190((void **)a2 + 1, (char *)&unk_257BC67, 0);
  j_Json::FastWriter::writeValue(v3, v5);
  sub_21E7408(v4, "\n", 1u);
  return sub_21E8AF4(v6, (int *)v4);
}


int __fastcall Json::ValueIteratorBase::copy(int result, const Json::ValueIteratorBase *a2)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  return result;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v26;
    v27 = v26;
    v26 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v27, (int)&v29, (int)v5);
    v6 = v27;
  sub_119C884((void **)&v25, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v28 = v25;
    v8 = (char *)&unk_28898CC;
    v25 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v28, (int)&v30, (int)v7);
    v8 = v25;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (char *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v27 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  CraftingContainerManagerController::setSearchString(*(_DWORD *)(v3 + 628), (int *)&v28);
  v12 = CraftingContainerManagerController::getCraftingInformation(*(CraftingContainerManagerController **)(v3 + 628));
  v13 = (int)v28;
  v14 = (int *)(v28 - 12);
  v15 = *((_DWORD *)v28 - 3);
  if ( v15 )
    LOBYTE(v15) = 1;
  *v12 = v15;
  if ( v14 != &dword_28898C0 )
    v23 = (unsigned int *)(v13 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  return 1;
}


  if ( !Json::Value::isNull((Json::Value *)(v5 + 8)) && Json::Value::isObject((Json::Value *)(v5 + 8)) == 1 )
{
    v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v7);
    if ( Json::Value::isInt(v9) || Json::Value::isUInt(v9) == 1 )
      v4 = Json::Value::asInt(v9, 0);
  }
  LODWORD(v8) = v4;
  Util::format((Util *)&v15, "featured_grid_item_%d", v8);
  UIPropertyBag::set<std::string>(v5, *((_DWORD *)*v6 - 3), *v6, (const void **)&v15);
  v10 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
      v5 = Json::Value::asInt(v6, 0);
    else
      v5 = -1;
  else
  v7 = (*(int (__fastcall **)(int, int *, int))(*(_DWORD *)v3 + 144))(v3, &v12, v5);
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v7;
}


signed int __fastcall Json::Value::isConvertibleTo(int a1, int a2)
{
  int v3; // r3@1
  signed int result; // r0@1
  bool v6; // zf@12
  bool v7; // zf@20
  int v8; // r1@38
  signed int v9; // r0@45

  _R12 = a1;
  v3 = *(_BYTE *)(a1 + 8);
  result = 1;
  switch ( v3 )
  {
    case 1:
      if ( a2 == 2 )
      {
        if ( *(_DWORD *)(_R12 + 4) <= -1 )
          goto LABEL_68;
        result = 1;
      }
      else
        if ( a2 == 1 )
          return 1;
        if ( a2 )
        {
          if ( (unsigned int)(a2 - 3) >= 2 )
            goto LABEL_68;
          result = 1;
        }
        else
          if ( *(_QWORD *)_R12 )
      return result;
    case 2:
      if ( a2 == 1 )
        v9 = 0;
        if ( (signed int)*(_QWORD *)_R12 > -1 )
          v9 = 1;
        if ( *(_QWORD *)_R12 >> 32 )
          v9 = 0;
        if ( !v9 )
        _ZF = a2 == 0;
        if ( !a2 )
          _ZF = *(_QWORD *)_R12 == 0LL;
        if ( _ZF )
          v6 = a2 == 4;
          if ( a2 != 4 )
            v6 = (a2 | 1) == 3;
          if ( !v6 )
    case 3:
        __asm
          VLDR            D0, [R12]
          VCMPE.F64       D0, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          VLDR            D1, =4.2949673e9
          VCMPE.F64       D0, D1
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      else if ( a2 == 1 )
          VLDR            D1, =-2.14748365e9
          VLDR            D1, =2.14748365e9
      else if ( a2 )
        if ( (unsigned int)(a2 - 3) >= 2 )
        v7 = (unsigned int)*(_QWORD *)_R12 == 0;
        if ( !(unsigned int)*(_QWORD *)_R12 )
          v7 = ((*(_QWORD *)_R12 >> 32) & 0x7FFFFFFF) == 0;
        if ( !v7 )
    case 4:
      if ( a2 == 4 )
        return 1;
      if ( a2 )
        return 0;
      if ( !*(_DWORD *)_R12 )
      v8 = **(_BYTE **)_R12;
      result = 0;
      goto LABEL_39;
    case 0:
    case 5:
        if ( (unsigned int)(a2 - 1) < 4 )
      else if ( !*(_BYTE *)_R12 )
LABEL_68:
      if ( a2 == 5 )
    case 6:
      if ( a2 != 6 )
        goto LABEL_37;
      return 1;
    case 7:
      if ( a2 == 7 )
LABEL_37:
        result = 0;
          v8 = *(_DWORD *)(*(_DWORD *)_R12 + 20);
LABEL_39:
          if ( !v8 )
            result = 1;
    default:
      return 0;
  }
}


int __fastcall Json::StyledStreamWriter::hasCommentForValue(Json::StyledStreamWriter *this, const Json::Value *a2)
{
  const Json::Value *v2; // r4@1
  int v3; // r5@1

  v2 = a2;
  v3 = 1;
  if ( !j_Json::Value::hasComment((int)a2, 0) && !j_Json::Value::hasComment((int)v2, 1) )
    v3 = j_Json::Value::hasComment((int)v2, 2);
  return v3;
}


  if ( Json::Value::isMember(a3, "replace") == 1 )
{
    v5 = (Json::Value *)Json::Value::operator[]((int)v4, "replace");
    v6 = 0;
    if ( Json::Value::asBool(v5, 0) == 1 )
    {
      Json::Value::operator=(v3, v4);
      v6 = 1;
    }
    result = v6;
  }
  else
  {
    result = 0;
  return result;
}


int __fastcall Json::Features::Features(int result)
{
  *(_WORD *)result = 1;
  return result;
}


int __fastcall Json::Reader::addErrorAndRecover(int a1, int *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  __int64 v6; // kr00_8@1
  signed int v7; // r10@1
  signed int v8; // r8@1
  int v9; // r9@1
  bool v10; // zf@2
  int v12; // [sp+4h] [bp-2Ch]@2

  v4 = a4;
  v5 = a1;
  j_Json::Reader::addError(a1, a2, a3, 0);
  v6 = *(_QWORD *)(v5 + 56);
  v7 = *(_QWORD *)(v5 + 64) - (*(_QWORD *)(v5 + 64) >> 32);
  v8 = v6 - *(_DWORD *)(v5 + 48);
  v9 = (*(_DWORD *)(v5 + 76) - HIDWORD(v6)) >> 2;
  do
  {
    j_Json::Reader::readToken((Json::Reader *)v5, (int)&v12);
    v10 = v12 == v4;
    if ( v12 != v4 )
      v10 = v12 == 0;
  }
  while ( !v10 );
  j_std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::resize(
    v5 + 40,
    -858993459 * (v7 >> 2) + 25 * v9 + -858993459 * (v8 >> 2) - 25);
  return 0;
}


  if ( Json::Value::isNull(v6) == 1 )
{
    result = 0;
    *v5 = 0;
  }
  else
  {
    v8 = (FoodItemComponent *)operator new(0x24u);
    FoodItemComponent::FoodItemComponent((int)v8, v4);
    v10 = v8;
    if ( FoodItemComponent::init(v8, v6) )
    {
      v9 = (int)v10;
      v10 = 0;
    }
    else
      v9 = 0;
    *v5 = v9;
    result = std::unique_ptr<FoodItemComponent,std::default_delete<FoodItemComponent>>::~unique_ptr(&v10);
  return result;
}


    if ( Json::Value::isObject(v2) == 1 )
{
      v6 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
      if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
        v5 = Json::Value::asInt(v6, 0);
      else
        v5 = -1;
    }
    else
    {
      v5 = -1;
  }
  *(_DWORD *)(v3 + 440) = -1;
  *(_DWORD *)(v3 + 444) = v5;
  return 1;
}


signed int __fastcall Json::Value::isDouble(Json::Value *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 8);
  result = 0;
  if ( v1 == 3 )
    result = 1;
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  PlayScreenController::_selectLegacyWorld((PlayScreenController *)&v10, (int)v3, v4);
  if ( WorldInfo::isValid((WorldInfo *)&v10) )
    PlayScreenController::_convertLegacyWorld(v3, (const LegacyWorldInfo *)&v10);
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)&v10);
  return 0;
}


  if ( Json::Value::isNull((Json::Value *)(a2 + 8)) )
{
    v4 = 0;
  }
  else if ( Json::Value::isObject(v2) == 1 )
  {
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
    {
      v4 = 0;
      v6 = Json::Value::asInt(v5, 0);
      if ( v6 >= 0 )
      {
        SkinPackCollectionModel::getRecentSkinHandleAtIndex((SkinPackCollectionModel *)&v11, *(_DWORD *)(v3 + 432), v6);
        SkinPickerScreenController::_setPreviewSkin(v3, (int)&v11);
        v7 = (void *)(v12 - 12);
        if ( (int *)(v12 - 12) != &dword_28898C0 )
        {
          v9 = (unsigned int *)(v12 - 4);
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
            j_j_j_j__ZdlPv_9(v7);
        }
        v4 = 1;
      }
    }
    else
  else
  return v4;
}


        if ( Json::Value::isArray(v28) == 1 )
{
          Json::Value::begin((Json::Value *)&v176, (int)v28);
          Json::Value::end((Json::Value *)&v175, (int)v28);
          while ( Json::ValueIteratorBase::isEqual(
                    (Json::ValueIteratorBase *)&v176,
                    (const Json::ValueIteratorBase *)&v175) != 1 )
          {
            v29 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v176);
            v30 = Json::Value::operator[](v29, "uuid");
            sub_119C884((void **)&v172, (const char *)&unk_257BC67);
            Json::Value::asString(&v173, (int)v30, &v172);
            mce::UUID::fromString((int)&v174, &v173);
            v31 = (void *)(v173 - 12);
            if ( (int *)(v173 - 12) != &dword_28898C0 )
            {
              v49 = (unsigned int *)(v173 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v50 = __ldrex(v49);
                while ( __strex(v50 - 1, v49) );
              }
              else
                v50 = (*v49)--;
              if ( v50 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v31);
            }
            v32 = (void *)(v172 - 12);
            if ( (int *)(v172 - 12) != &dword_28898C0 )
              v51 = (unsigned int *)(v172 - 4);
                  v52 = __ldrex(v51);
                while ( __strex(v52 - 1, v51) );
                v52 = (*v51)--;
              if ( v52 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v32);
            v33 = Json::Value::operator[](v29, "version");
            sub_119C884((void **)&v170, (const char *)&unk_257BC67);
            Json::Value::asString(&v171, (int)v33, &v170);
            v34 = (void *)(v170 - 12);
            if ( (int *)(v170 - 12) != &dword_28898C0 )
              v53 = (unsigned int *)(v170 - 4);
                  v54 = __ldrex(v53);
                while ( __strex(v54 - 1, v53) );
                v54 = (*v53)--;
              if ( v54 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v34);
            v35 = Json::Value::operator[](v29, "type");
            sub_119C884((void **)&v167, (const char *)&unk_257BC67);
            Json::Value::asString(&v168, (int)v35, &v167);
            v36 = PackTypeFromString((int **)&v168);
            v37 = (void *)(v168 - 12);
            if ( (int *)(v168 - 12) != &dword_28898C0 )
              v55 = (unsigned int *)(v168 - 4);
                  v56 = __ldrex(v55);
                while ( __strex(v56 - 1, v55) );
                v56 = (*v55)--;
              if ( v56 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v37);
            v38 = (void *)(v167 - 12);
            if ( (int *)(v167 - 12) != &dword_28898C0 )
              v57 = (unsigned int *)(v167 - 4);
                  v58 = __ldrex(v57);
                while ( __strex(v58 - 1, v57) );
                v58 = (*v57)--;
              if ( v58 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v38);
            v169 = v36;
            SemVersion::SemVersion((SemVersion *)&v160);
            if ( SemVersion::fromString((const void **)&v171, (int)&v160) == 2 )
              sub_119C884((void **)&v152, (const char *)&unk_257BC67);
              sub_119C884((void **)&v151, (const char *)&unk_257BC67);
              SemVersion::SemVersion((int)&v153, 0, 0, 1, &v152, &v151, 0);
              v161 = v154;
              v160 = v153;
              EntityInteraction::setInteractText(&v162, &v155);
              EntityInteraction::setInteractText(&v163, &v156);
              EntityInteraction::setInteractText(&v164, &v157);
              v166 = v159;
              v165 = v158;
              v39 = (void *)(v157 - 12);
              if ( (int *)(v157 - 12) != &dword_28898C0 )
                v67 = (unsigned int *)(v157 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v68 = __ldrex(v67);
                  while ( __strex(v68 - 1, v67) );
                }
                else
                  v68 = (*v67)--;
                if ( v68 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v39);
              v40 = (void *)(v156 - 12);
              if ( (int *)(v156 - 12) != &dword_28898C0 )
                v69 = (unsigned int *)(v156 - 4);
                    v70 = __ldrex(v69);
                  while ( __strex(v70 - 1, v69) );
                  v70 = (*v69)--;
                if ( v70 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v40);
              v41 = (void *)(v155 - 12);
              if ( (int *)(v155 - 12) != &dword_28898C0 )
                v71 = (unsigned int *)(v155 - 4);
                    v72 = __ldrex(v71);
                  while ( __strex(v72 - 1, v71) );
                  v72 = (*v71)--;
                if ( v72 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v41);
              v42 = (void *)(v151 - 12);
              if ( (int *)(v151 - 12) != &dword_28898C0 )
                v73 = (unsigned int *)(v151 - 4);
                    v74 = __ldrex(v73);
                  while ( __strex(v74 - 1, v73) );
                  v74 = (*v73)--;
                if ( v74 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v42);
              v43 = (void *)(v152 - 12);
              if ( (int *)(v152 - 12) != &dword_28898C0 )
                v75 = (unsigned int *)(v152 - 4);
                    v76 = __ldrex(v75);
                  while ( __strex(v76 - 1, v75) );
                  v76 = (*v75)--;
                if ( v76 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v43);
            if ( v178 == v179 )
              LODWORD(v44) = &v160;
              HIDWORD(v44) = &v169;
              std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_emplace_back_aux<mce::UUID &,SemVersion &,PackType &>(
                (unsigned __int64 *)&v177,
                (int)&v174,
                v44);
            else
              v178 = PackIdVersion::PackIdVersion(v178, (int)&v174, (int)&v160, v169) + 48;
            v45 = (void *)(v164 - 12);
            if ( (int *)(v164 - 12) != &dword_28898C0 )
              v59 = (unsigned int *)(v164 - 4);
                  v60 = __ldrex(v59);
                while ( __strex(v60 - 1, v59) );
                v60 = (*v59)--;
              if ( v60 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v45);
            v46 = (void *)(v163 - 12);
            if ( (int *)(v163 - 12) != &dword_28898C0 )
              v61 = (unsigned int *)(v163 - 4);
                  v62 = __ldrex(v61);
                while ( __strex(v62 - 1, v61) );
                v62 = (*v61)--;
              if ( v62 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v46);
            v47 = (void *)(v162 - 12);
            if ( (int *)(v162 - 12) != &dword_28898C0 )
              v63 = (unsigned int *)(v162 - 4);
                  v64 = __ldrex(v63);
                while ( __strex(v64 - 1, v63) );
                v64 = (*v63)--;
              if ( v64 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v47);
            v48 = (void *)(v171 - 12);
            if ( (int *)(v171 - 12) != &dword_28898C0 )
              v65 = (unsigned int *)(v171 - 4);
                  v66 = __ldrex(v65);
                while ( __strex(v66 - 1, v65) );
                v66 = (*v65)--;
              if ( v66 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v48);
            Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v176);
          }
          v77 = v178;
          v78 = v177;
        }
        else
        {
          v78 = 0;
          v77 = 0;
        if ( v77 - v78 == 48 )
          PackManifest::setIdentity(v27, (const PackIdVersion *)v78);
        else if ( (unsigned int)(-1431655765 * ((v77 - v78) >> 4)) >= 2 && v78 != v77 )
          v79 = *(_BYTE *)(v2 + 12);
          if ( v79 == 1 )
            while ( *(_BYTE *)(v78 + 40) != 1 )
              v78 += 48;
              if ( v77 == v78 )
                goto LABEL_197;
            PackManifest::setIdentity(v27, (const PackIdVersion *)v78);
          else if ( v79 == 3 )
            while ( *(_BYTE *)(v78 + 40) != 3 )
LABEL_197:
        PropertyBag::PropertyBag((Json::Value *)&v150, (const Json::Value *)&v185);
        v80 = v138;
        if ( !Json::Value::isNull((Json::Value *)&v150) && Json::Value::isObject((Json::Value *)&v150) == 1 )
          v81 = (Json::Value *)Json::Value::operator[]((int)&v150, "purchasable");
          if ( Json::Value::isBool(v81) == 1 && !Json::Value::asBool(v81, 0) )
            v82 = *(EntitlementManager **)(v2 + 8);
            v83 = PackManifest::getIdentity(v27);
            v84 = (Entitlement *)EntitlementManager::getEntitlement(v82, (const mce::UUID *)v83);
            if ( !Entitlement::isOwned(v84) )
              v17 = *(_DWORD *)(v2 + 24);
              v135 = v2;
              v18 = __OFSUB__(v17--, 1);
              *(_DWORD *)(v2 + 24) = v17;
              if ( (unsigned __int8)((v17 < 0) ^ v18) | (v17 == 0) && *(_DWORD *)(v2 + 52) )
                (*(void (__fastcall **)(int, signed int))(v2 + 56))(v134, 1);
              goto LABEL_268;
        if ( *(_BYTE *)(v2 + 12) == 1 )
          v85 = *(ContentCatalogService **)(v2 + 4);
          v135 = v2;
          v146 = (char *)&unk_28898CC;
          HydrateParams::HydrateParams(&v147, (int *)(v138 + 8), (int *)(v138 + 56), &v146);
          v86 = *(_QWORD *)(v137 + 1);
          if ( HIDWORD(v86) )
            v87 = (unsigned int *)(HIDWORD(v86) + 8);
            if ( &pthread_create )
              __dmb();
              do
                v88 = __ldrex(v87);
              while ( __strex(v88 + 1, v87) );
              ++*v87;
          v93 = *(_QWORD *)&v183;
          if ( v184 )
            v94 = (unsigned int *)(v184 + 4);
                v95 = __ldrex(v94);
              while ( __strex(v95 + 1, v94) );
              ++*v94;
          v144 = 0;
          v96 = operator new(0x14u);
          *(_DWORD *)v96 = v2;
          *(_QWORD *)((char *)v96 + 4) = v86;
            v97 = (unsigned int *)(HIDWORD(v86) + 8);
                v98 = __ldrex(v97);
              while ( __strex(v98 + 1, v97) );
              ++*v97;
          *(_QWORD *)((char *)v96 + 12) = v93;
          v143 = v96;
          v145 = sub_F49F38;
          v144 = (void (*)(void))sub_F4AC48;
          ContentCatalogService::hydrateItem(v85, &v147, (int)&v143);
          if ( v144 )
            v144();
          v80 = v138;
            v99 = (unsigned int *)(HIDWORD(v86) + 8);
                v100 = __ldrex(v99);
              while ( __strex(v100 - 1, v99) );
              v100 = (*v99)--;
            if ( v100 == 1 )
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v86) + 12))(HIDWORD(v86));
          v107 = (void *)(v149 - 12);
          if ( (int *)(v149 - 12) != &dword_28898C0 )
            v11 = (unsigned int *)(v149 - 4);
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
              v12 = (*v11)--;
            if ( v12 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v107);
          v108 = (void *)(v148 - 12);
          if ( (int *)(v148 - 12) != &dword_28898C0 )
            v13 = (unsigned int *)(v148 - 4);
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
              v14 = (*v13)--;
            if ( v14 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v108);
          v109 = (void *)(v147 - 12);
          if ( (int *)(v147 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)(v147 - 4);
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v109);
          v110 = v146 - 12;
          if ( (int *)(v146 - 12) == &dword_28898C0 )
            goto LABEL_268;
          v19 = (unsigned int *)(v146 - 4);
          if ( !&pthread_create )
LABEL_26:
            v20 = (*v19)--;
            goto LABEL_27;
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          PackManifest::setName((int)v27, (int *)(v138 + 12));
          PackManifest::setDescription((int)v27, (int *)(v138 + 16));
          FetchImageParams::FetchImageParams((const void **)&v142, (unsigned int *)(v138 + 48), 485331304648LL);
          v89 = *(_QWORD *)(v137 + 1);
          v90 = *(ContentCatalogService **)(v2 + 4);
          if ( HIDWORD(v89) )
            v91 = (unsigned int *)(HIDWORD(v89) + 8);
                v92 = __ldrex(v91);
              while ( __strex(v92 + 1, v91) );
              ++*v91;
          v101 = *(_QWORD *)&v183;
            v102 = (unsigned int *)(v184 + 4);
                v103 = __ldrex(v102);
              while ( __strex(v103 + 1, v102) );
              ++*v102;
          v140 = 0;
          v104 = operator new(0x14u);
          *(_DWORD *)v104 = v2;
          *(_QWORD *)((char *)v104 + 4) = v89;
            v105 = (unsigned int *)(HIDWORD(v89) + 8);
                v106 = __ldrex(v105);
              while ( __strex(v106 + 1, v105) );
              ++*v105;
          *(_QWORD *)((char *)v104 + 12) = v101;
          v139 = v104;
          v141 = sub_F4B5F4;
          v140 = (void (*)(void))sub_F4B7E0;
          ContentCatalogService::fetchImageData(v90, &v142, (int)&v139);
          if ( v140 )
            v140();
            v111 = (unsigned int *)(HIDWORD(v89) + 8);
                v112 = __ldrex(v111);
              while ( __strex(v112 - 1, v111) );
              v112 = (*v111)--;
            if ( v112 == 1 )
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v89) + 12))(HIDWORD(v89));
          v110 = (char *)(v142 - 12);
          if ( (int *)(v142 - 12) == &dword_28898C0 )
          v19 = (unsigned int *)(v142 - 4);
            goto LABEL_26;
LABEL_27:
        if ( v20 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v110);
LABEL_268:
        v113 = v80;
        Json::Value::~Value((Json::Value *)&v150);
        v114 = v178;
        v115 = v177;
        v8 = (Json::Reader *)&v186;
        if ( v177 != v178 )
            v122 = *(_DWORD *)(v115 + 32);
            v123 = (void *)(v122 - 12);
            if ( (int *)(v122 - 12) != &dword_28898C0 )
              v116 = (unsigned int *)(v122 - 4);
                  v117 = __ldrex(v116);
                while ( __strex(v117 - 1, v116) );
                v117 = (*v116)--;
              if ( v117 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v123);
            v124 = *(_DWORD *)(v115 + 28);
            v125 = (void *)(v124 - 12);
            if ( (int *)(v124 - 12) != &dword_28898C0 )
              v118 = (unsigned int *)(v124 - 4);
                  v119 = __ldrex(v118);
                while ( __strex(v119 - 1, v118) );
                v119 = (*v118)--;
              if ( v119 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v125);
            v126 = *(_DWORD *)(v115 + 24);
            v127 = (void *)(v126 - 12);
            if ( (int *)(v126 - 12) != &dword_28898C0 )
              v120 = (unsigned int *)(v126 - 4);
                  v121 = __ldrex(v120);
                while ( __strex(v121 - 1, v120) );
                v121 = (*v120)--;
              if ( v121 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v127);
            v115 += 48;
          while ( v115 != v114 );
          v115 = v177;
        if ( v115 )
          operator delete((void *)v115);
        v128 = v184;
        if ( v184 )
          v129 = (unsigned int *)(v184 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v130 = __ldrex(v129);
            while ( __strex(v130 - 1, v129) );
          else
            v130 = (*v129)--;
          if ( v130 == 1 )
            v131 = (unsigned int *)(v128 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v128 + 8))(v128);
                v132 = __ldrex(v131);
              while ( __strex(v132 - 1, v131) );
              v132 = (*v131)--;
            if ( v132 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v128 + 12))(v128);
        v9 = &v185;
        Json::Value::~Value((Json::Value *)&v185);
        result = Json::Reader::~Reader((Json::Reader *)&v186);
        v133 = v113 + 68;
        v138 = v133;
        v5 = v133 == v136;
        v2 = v135;
        v3 = v137;
        v10 = (int *)&v183;
      }
      while ( !v5 );
    }
  }
  return result;
}


  if ( Json::Value::isNull(v4) )
{
    v5 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, "#collection_index");
    if ( Json::Value::isInt(v6) || Json::Value::isUInt(v6) == 1 )
    {
      v7 = Json::Value::asInt(v6, 0);
      if ( v7 < 0 )
      {
        v5 = -1;
      }
      else
        if ( PlayScreenModel::getWorldCount(*(_DWORD *)(v3 + 432), 1, 4) > v7
          && !strcmp(s1, "third_party_server_network_worlds") )
        {
          v5 = v7;
        }
    }
    else
      v5 = -1;
  else
  if ( sub_21E7D6C((const void **)&s1, "friends_network_worlds") )
    if ( sub_21E7D6C((const void **)&s1, "lan_network_worlds") )
      if ( sub_21E7D6C((const void **)&s1, "servers_network_worlds") )
        if ( sub_21E7D6C((const void **)&s1, "third_party_server_network_worlds") )
          v8 = 0;
          goto LABEL_25;
        v8 = 4;
        v8 = 2;
      v8 = 1;
    v8 = 3;
  v9 = PlayScreenModel::getNetworkWorldAtIndex(*(_DWORD *)(v3 + 432), v5, v8);
  if ( v9 )
    NetworkWorldInfo::NetworkWorldInfo((int)&v26, v9);
    NetworkWorldInfo::NetworkWorldInfo((int)&v25, (int)&v26);
    NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v26);
    goto LABEL_26;
LABEL_25:
  NetworkWorldInfo::NetworkWorldInfo((int)&v25);
LABEL_26:
  if ( WorldInfo::isValid((WorldInfo *)&v25) )
    v10 = PlayScreenController::_startNetworkWorld(v3, (WorldInfo *)&v25, v8);
    v11 = *(_DWORD *)(v3 + 432);
    sub_21E94B4((void **)&v23, "disconnectionScreen.internalError.cantFindServer");
    sub_21E94B4((void **)&v22, "disconnectionScreen.internalError.cantConnect");
    MinecraftScreenModel::navigateToDisconnectScreen(v11, &v23, &v22);
    v12 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v23 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v10 = 8;
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v25);
  v14 = s1 - 12;
  if ( (int *)(s1 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  if ( _stack_chk_guard != v27 )
    _stack_chk_fail(_stack_chk_guard - v27);
  return v10;
}


int __fastcall Json::Reader::getNextChar(Json::Reader *this)
{
  __int64 v1; // kr00_8@1
  int result; // r0@2

  v1 = *((_QWORD *)this + 11);
  if ( HIDWORD(v1) == (_DWORD)v1 )
  {
    result = 0;
  }
  else
    *((_DWORD *)this + 23) = HIDWORD(v1) + 1;
    result = *(_BYTE *)HIDWORD(v1);
  return result;
}


  if ( Json::Value::isNull((Json::Value *)(v5 + 8))
{
    || (v9 = (Json::Value *)Json::Value::operator[](v5 + 8, v8), !Json::Value::isInt(v9))
    && Json::Value::isUInt(v9) != 1
    || (v10 = Json::Value::asInt(v9, 0), v10 < 0)
    || (v11 = *(_QWORD *)(v7 + 444), (HIDWORD(v11) - (signed int)v11) >> 3 <= v10)
    || (v12 = *(_DWORD *)(v11 + 8 * v10) + v4, v12 >= *(_DWORD *)(v11 + 8 * v10 + 4)) )
  {
    v13 = *(MainMenuScreenModel **)(v7 + 424);
    v10 = -1;
    v12 = -1;
  }
  else
  v39 = MainMenuScreenModel::getStoreCatalogItem(v13, v10, v12);
  if ( StoreCatalogItemModel::isValid((StoreCatalogItemModel *)&v39) == 1 )
    v14 = *v6;
    v15 = *(_DWORD *)(v7 + 424);
    v16 = *((_DWORD *)v14 - 3);
    v17 = (int *)StoreCatalogItemModel::getProductId((StoreCatalogItemModel *)&v39);
    sub_21E8AF4(&v32, v17);
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v33 = (char *)operator new(4u);
    v35 = v33 + 4;
    v34 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v32,
                    (int)&v33,
                    (int)v33);
    v18 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(v15, (unsigned __int64 *)&v33);
    _R0 = DlcBatchModel::getDownloadProgress(v18);
    __asm
    {
      VMOV.F32        S2, #1.0
      VMOV            S0, R0
      VSUB.F32        S0, S2, S0
      VSTR            S0, [SP,#0x48+var_34]
    }
    UIPropertyBag::set<float>(v5, v16, v14, (int)&v36);
    v25 = (int)v34;
    v24 = v33;
    if ( v33 != v34 )
      do
      {
        v28 = (int *)(*(_DWORD *)v24 - 12);
        if ( v28 != &dword_28898C0 )
        {
          v26 = (unsigned int *)(*(_DWORD *)v24 - 4);
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
            j_j_j_j__ZdlPv_9(v28);
        }
        v24 += 4;
      }
      while ( v24 != (char *)v25 );
      v24 = v33;
    if ( v24 )
      operator delete(v24);
    v29 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
}


int __fastcall Json::Value::isMember(Json::Value *this, const char *a2)
{
  const char *v2; // r4@1
  const char *v3; // r1@2
  int v4; // r5@2
  int v5; // r0@2
  int v6; // r8@2
  int v7; // r7@2
  int v8; // r6@5
  const char *v9; // r0@6
  int result; // r0@14
  bool v11; // zf@16
  signed int v12; // r2@24
  signed int v13; // r1@24

  v2 = a2;
  if ( *((_BYTE *)this + 8) )
  {
    v3 = *(const char **)this;
    v4 = *(_DWORD *)this + 4;
    v5 = *(_DWORD *)(*(_DWORD *)this + 8);
    v6 = v4;
    v7 = v4;
    if ( v5 )
    {
      if ( v2 )
      {
        v7 = v4;
        do
        {
          v8 = v7;
          v7 = v5;
          while ( 1 )
          {
            v9 = *(const char **)(v7 + 16);
            if ( !v9 || j_strcmp_0(v9, v2) >= 0 )
              break;
            v7 = *(_DWORD *)(v7 + 12);
            if ( !v7 )
            {
              v7 = v8;
              goto LABEL_15;
            }
          }
          v5 = *(_DWORD *)(v7 + 8);
        }
        while ( v5 );
      }
      else
          v5 = *(_DWORD *)(v5 + 8);
    }
LABEL_15:
    if ( v7 != v4 )
      v11 = v2 == 0;
        v3 = *(const char **)(v7 + 16);
        v11 = v3 == 0;
      if ( v11 )
        if ( !*(_DWORD *)(v7 + 20) )
          v6 = v7;
      else if ( j_strcmp_0(v2, v3) >= 0 )
        v6 = v7;
    v12 = 0;
    v13 = 0;
    if ( v6 != v4 )
      v12 = 1;
    if ( (_UNKNOWN *)(v6 + 24) != &Json::Value::null )
      v13 = 1;
    result = v12 & v13;
  }
  else
    result = 0;
  return result;
}


void **__fastcall Json::PathArgument::PathArgument(Json::PathArgument *this, const char *a2)
{
  void **result; // r0@1

  result = sub_21E94B4((void **)this, a2);
  result[2] = (void *)2;
  return result;
}


signed int __fastcall Json::Value::isNumeric(Json::Value *this)
{
  int v1; // r1@1
  signed int result; // r0@3

  v1 = *((_BYTE *)this + 8);
  if ( (unsigned __int16)(v1 - 1) <= 4u && (0x13u >> ((v1 - 1) & 0x1F)) & 1 )
  {
    result = 1;
  }
  else
    result = 0;
    if ( v1 == 3 )
      result = 1;
  return result;
}


  if ( !Json::Value::isNull((Json::Value *)(a2 + 8)) && Json::Value::isObject(v2) == 1 )
{
    v4 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v4) || Json::Value::isUInt(v4) == 1 )
    {
      v5 = Json::Value::asInt(v4, 0);
      if ( v5 >= 0 )
      {
        v6 = 3 * v5;
        v7 = *(_DWORD *)(v3 + 436) + 48 * v5;
        if ( *(_BYTE *)(v7 + 40) )
        {
          sub_21E8AF4(&v13, (int *)(v7 + 32));
          v8 = v13;
          if ( *(_DWORD *)(v13 - 12) )
          {
            MinecraftScreenController::showPlayerProfile(
              v3,
              &v13,
              *(_QWORD *)(*(_DWORD *)(v3 + 436) + 16 * v6 + 16),
              *(_QWORD *)(*(_DWORD *)(v3 + 436) + 16 * v6 + 16) >> 32,
              *(_QWORD *)(*(_DWORD *)(v3 + 436) + 16 * v6 + 24));
            v8 = v13;
          }
          v9 = (void *)(v8 - 12);
          if ( (int *)(v8 - 12) != &dword_28898C0 )
            v11 = (unsigned int *)(v8 - 4);
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
              j_j_j_j__ZdlPv_9(v9);
        }
      }
    }
  }
  return 0;
}


  if ( Json::Value::isNull(v4)
{
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v4, "#property_field"), Json::Value::isString(v5) != 1) )
  {
    v6 = v24;
    v25 = v24;
    v24 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v25, (int)&v27, (int)v5);
    v6 = v25;
  sub_119C884((void **)&v23, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
    v26 = v23;
    v8 = (char *)&unk_28898CC;
    v23 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v26, (int)&v28, (int)v7);
    v8 = v23;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (char *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v25 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (char *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  if ( (*(int (**)(void))(**(_DWORD **)(v3 + 472) + 12))() )
    LOBYTE(v12) = 1;
    v12 = *(_BYTE *)(v3 + 481);
  *(_BYTE *)(v3 + 481) = v12;
  v13 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  return 1;
}


Json::Value *__fastcall Json::Value::Value(Json::Value *this, const char *a2, const char *a3)
{
  Json::Value *v3; // r4@1
  const char *v4; // r8@1
  _BYTE *v5; // r7@1
  int v6; // r6@2
  _BYTE *v7; // r0@4
  _BYTE *v8; // r5@4
  Json::Value *result; // r0@6

  v3 = this;
  v4 = a2;
  v5 = 0;
  *((_DWORD *)this + 2) = (unsigned __int16)(*((_WORD *)this + 4) & 0xFE00) | 0x104;
  if ( a2 )
  {
    v6 = a3 - a2;
    if ( a3 - a2 == -1 )
      v6 = j_strlen_0(a2);
    v7 = j_malloc(v6 + 1);
    v8 = v7;
    v5 = 0;
    if ( v7 )
    {
      j___aeabi_memcpy_0((int)v7, (int)v4, v6);
      v8[v6] = 0;
      v5 = v8;
    }
  }
  result = v3;
  *(_DWORD *)v3 = v5;
  return result;
}


void **__fastcall Json::PathArgument::PathArgument(void **a1, const char **a2)
{
  void **result; // r0@1

  result = sub_21E94B4(a1, *a2);
  result[2] = (void *)2;
  return result;
}


signed int __fastcall Json::Reader::parse(int a1, int *a2, int a3, bool a4)
{
  int v4; // r6@1
  bool v5; // r4@1
  int v6; // r5@1
  const char *v7; // r1@1
  __int64 v8; // r2@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  EntityInteraction::setInteractText((int *)(a1 + 80), a2);
  v7 = *(const char **)(v4 + 80);
  HIDWORD(v8) = v6;
  LODWORD(v8) = &v7[*((_DWORD *)v7 - 3)];
  return j_Json::Reader::parse((Json::Reader *)v4, v7, v8, v5);
}


int __fastcall Json::Value::swap(Json::Value *this, Json::Value *a2)
{
  __int16 v2; // r2@1
  __int64 v3; // kr00_8@1
  __int16 v4; // r2@1
  int result; // r0@1

  v2 = *((_WORD *)this + 4);
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 8);
  *((_BYTE *)a2 + 8) = v2;
  v3 = *(_QWORD *)this;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)a2 = v3;
  v4 = *((_WORD *)this + 4);
  *((_WORD *)this + 4) = *((_WORD *)a2 + 4) & 0x100 | v4 & 0xFEFF;
  result = (unsigned __int16)(*((_WORD *)a2 + 4) & 0xFEFF) | v4 & 0x100;
  *((_WORD *)a2 + 4) = result;
  return result;
}


  if ( Json::Value::isNull(v4) )
{
    v6 = -1;
  }
  else if ( Json::Value::isObject(v4) == 1 )
  {
    v7 = (Json::Value *)Json::Value::operator[]((int)v4, v5);
    if ( Json::Value::isInt(v7) || Json::Value::isUInt(v7) == 1 )
      v6 = Json::Value::asInt(v7, 0);
    else
      v6 = -1;
  else
  *(_DWORD *)(v3 + 460) = v6 + *(_DWORD *)(v3 + 452);
  v8 = (Entity *)ClientInstanceScreenModel::getEntity(*(_DWORD *)(v3 + 424), (unsigned __int64 *)(v3 + 440));
  if ( v8 )
    Npc::setSkinId(v8, (int *)(Npc::Skins + 8 * *(_DWORD *)(v3 + 460)), 0);
  return 1;
}


int __fastcall Json::ValueIterator::ValueIterator(int result, const Json::ValueIterator *a2)
{
  *(_QWORD *)result = *(_QWORD *)a2;
  return result;
}


      if ( Json::Value::isString(v10) == 1 )
{
        sub_119C884((void **)&v22, (const char *)&unk_257BC67);
        Json::Value::asString(v6, (int)v10, &v22);
        v17 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) == &dword_28898C0 )
          return;
        v18 = (unsigned int *)(v22 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          goto LABEL_34;
        }
        goto LABEL_33;
      }
    }
    while ( v3 != *(_DWORD *)v4 );
    v11 = *((_DWORD *)v4 + 1);
    if ( v11 == v3 )
      goto LABEL_26;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v11 - 4);
      v11 -= 4;
      sub_119C854(&v21, v5);
      sub_119C894((const void **)&v21, "|default", 8u);
      v15 = (Json::Value *)Json::Value::operator[](v14, (const char **)&v21);
      v16 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
      {
        v12 = (unsigned int *)(v21 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v16);
      if ( !Json::Value::isNull(v15) )
        break;
      if ( v11 == *(_DWORD *)v4 )
        goto LABEL_26;
    sub_119C884((void **)&v20, (const char *)&unk_257BC67);
    Json::Value::asString(v6, (int)v15, &v20);
    v17 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        goto LABEL_34;
LABEL_33:
      v19 = (*v18)--;
LABEL_34:
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
      return;
  }
}


void __fastcall Json::StyledWriter::writeValue(Json::StyledWriter *this, const Json::Value *a2)
{
  Json::StyledWriter::writeValue(this, a2);
}


Json::Reader *__fastcall Json::Reader::Reader(Json::Reader *this)
{
  Json::Reader *v1; // r4@1
  _DWORD *v2; // r9@1
  char *v3; // r6@1
  char *v4; // r7@1
  unsigned int v5; // r5@1
  char *v6; // r0@1
  int v7; // r1@1
  unsigned int v8; // r7@1
  _DWORD *v9; // r0@2
  unsigned int v10; // r6@5
  void *v11; // t1@6
  char *v12; // r0@8
  char *v13; // r5@8
  unsigned int v14; // r7@8
  char *v15; // r0@8

  v1 = this;
  v2 = j_operator new(0x20u);
  v3 = (char *)j_operator new(0x200u);
  v2[3] = v3;
  j___aeabi_memclr4_0((int)v1, 40);
  *((_DWORD *)v1 + 1) = 8;
  v4 = (char *)j_operator new(0x20u);
  *(_DWORD *)v1 = v4;
  v5 = (2 * *((_DWORD *)v1 + 1) - 2) & 0xFFFFFFFC;
  v6 = (char *)j_operator new(0x200u);
  *(_DWORD *)&v4[v5] = v6;
  v7 = (int)&v4[v5];
  v8 = (unsigned int)(v2 + 3);
  *((_DWORD *)v1 + 2) = v6;
  *((_DWORD *)v1 + 3) = v6;
  *((_DWORD *)v1 + 4) = v6 + 512;
  *((_DWORD *)v1 + 5) = v7;
  *((_DWORD *)v1 + 6) = v6;
  *((_DWORD *)v1 + 7) = v6;
  *((_DWORD *)v1 + 8) = v6 + 512;
  *((_DWORD *)v1 + 9) = v7;
  if ( v2 )
  {
    *((_DWORD *)v1 + 2) = v3;
    *((_DWORD *)v1 + 3) = v3;
    *((_DWORD *)v1 + 4) = v3 + 512;
    *((_DWORD *)v1 + 5) = v8;
    *((_DWORD *)v1 + 6) = v3;
    *((_DWORD *)v1 + 7) = v3;
    *((_DWORD *)v1 + 8) = v3 + 512;
    *((_DWORD *)v1 + 9) = v8;
    v8 = v7;
    v9 = *(_DWORD **)v1;
    *(_DWORD *)v1 = v2;
    *((_DWORD *)v1 + 1) = 8;
    v2 = v9;
  }
    if ( v8 < v8 + 4 )
    {
      v10 = v8 - 4;
      do
      {
        v11 = *(void **)(v10 + 4);
        v10 += 4;
        j_operator delete(v11);
      }
      while ( v10 < v8 );
    }
    j_operator delete(v2);
  j___aeabi_memclr4_0((int)v1 + 40, 40);
  *((_DWORD *)v1 + 11) = 8;
  v12 = (char *)j_operator new(0x20u);
  v13 = v12;
  *((_DWORD *)v1 + 10) = v12;
  v14 = (2 * *((_DWORD *)v1 + 11) - 2) & 0xFFFFFFFC;
  v15 = (char *)j_operator new(0x1F4u);
  *(_DWORD *)&v13[v14] = v15;
  *((_DWORD *)v1 + 15) = &v13[v14];
  *((_DWORD *)v1 + 13) = v15;
  *((_DWORD *)v1 + 14) = v15 + 500;
  *((_DWORD *)v1 + 18) = v15 + 500;
  *((_DWORD *)v1 + 19) = &v13[v14];
  *((_DWORD *)v1 + 12) = v15;
  *((_DWORD *)v1 + 16) = v15;
  *((_DWORD *)v1 + 17) = v15;
  *((_DWORD *)v1 + 20) = &unk_28898CC;
  *((_DWORD *)v1 + 26) = &unk_28898CC;
  *((_WORD *)v1 + 54) = 1;
  return v1;
}


signed int __fastcall Json::StyledWriter::isMultineArray(Json::StyledWriter *this, const Json::Value *a2)
{
  const Json::Value *v2; // r8@1
  Json::StyledWriter *v3; // r10@1
  int v4; // r6@1
  _DWORD *v5; // r5@1
  int v6; // r12@1
  signed int v7; // r7@1
  int v8; // lr@1
  _DWORD *v9; // r11@1
  _DWORD *v10; // r9@4
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  unsigned __int64 v13; // ST00_8@11
  int *v14; // r0@12
  int v15; // r5@14
  signed int v16; // r4@16
  Json::Value *v17; // r7@17
  signed int v18; // r9@23
  int v19; // r7@24
  signed int v20; // r4@25
  const Json::Value *v21; // r0@26
  int v22; // r0@26

  v2 = a2;
  v3 = this;
  v4 = j_Json::Value::size(a2);
  v6 = (int)v3 + 4;
  v5 = (_DWORD *)*((_DWORD *)v3 + 1);
  v7 = 0;
  v8 = *((_DWORD *)v3 + 6);
  v9 = (_DWORD *)*((_DWORD *)v3 + 2);
  if ( 3 * v4 >= v8 )
    v7 = 1;
  if ( v9 != v5 )
  {
    v10 = (_DWORD *)*((_DWORD *)v3 + 1);
    do
    {
      v14 = (int *)(*v10 - 12);
      if ( v14 != &dword_28898C0 )
      {
        v11 = (unsigned int *)(*v10 - 4);
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
          v13 = __PAIR__(v8, v6);
          j_j_j_j__ZdlPv_9(v14);
          v8 = HIDWORD(v13);
          v6 = v13;
      }
      ++v10;
    }
    while ( v10 != v9 );
  }
  *((_DWORD *)v3 + 2) = v5;
  v15 = v6;
  if ( v4 >= 1 && 3 * v4 < v8 )
    v16 = 0;
      v17 = (Json::Value *)j_Json::Value::operator[]((int)v2, v16);
      if ( j_Json::Value::isArray(v17) || j_Json::Value::isObject(v17) == 1 )
        v7 = j_Json::Value::size(v17) != 0;
      else
        v7 = 0;
      ++v16;
    while ( v16 < v4 && !v7 );
  v18 = 1;
  if ( !v7 )
    j_std::vector<std::string,std::allocator<std::string>>::reserve(v15, v4);
    v19 = 2 * v4 + 2;
    *((_BYTE *)v3 + 32) = 1;
    v18 = 0;
    if ( v4 >= 1 )
      v20 = 0;
      do
        v21 = (const Json::Value *)j_Json::Value::operator[]((int)v2, v20);
        j_Json::StyledWriter::writeValue(v3, v21);
        v22 = *(_DWORD *)(*((_DWORD *)v3 + 1) + 4 * v20++);
        v19 += *(_DWORD *)(v22 - 12);
      while ( v20 < v4 );
    *((_BYTE *)v3 + 32) = 0;
    if ( v19 >= *((_DWORD *)v3 + 6) )
      v18 = 1;
  return v18;
}


signed int __fastcall Json::Reader::readArray(int a1)
{
  int v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r5@3
  _BYTE *v4; // r0@3
  _BYTE *v5; // r1@3
  unsigned int v6; // r7@4
  unsigned int v7; // r5@10
  __int64 v8; // r0@11
  int v9; // r7@13
  int *v10; // r0@13
  int v11; // r0@14
  int v12; // r0@17
  signed int v13; // r7@18
  __int64 v14; // r0@18
  int v15; // r0@19
  int v16; // r0@20
  int v17; // r0@20
  int v18; // r1@20
  __int64 v19; // kr08_8@26
  signed int v20; // r6@26
  signed int v21; // r7@26
  int v22; // r8@26
  void *v23; // r0@28
  signed int result; // r0@29
  __int64 v25; // kr10_8@31
  int v26; // r8@31
  int v27; // r7@31
  int v28; // r6@31
  unsigned int *v29; // r2@34
  signed int v30; // r1@36
  int v31; // [sp+8h] [bp-48h]@26
  int v32; // [sp+Ch] [bp-44h]@23
  char v33; // [sp+18h] [bp-38h]@3
  int v34; // [sp+2Ch] [bp-24h]@9

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 24);
  if ( (_DWORD)v2 == HIDWORD(v2) )
    LODWORD(v2) = *(_DWORD *)(*(_DWORD *)(v1 + 36) - 4) + 512;
  v3 = *(_DWORD *)(v2 - 4);
  j_Json::Value::Value(&v33, 6);
  j_Json::Value::operator=(v3, (const Json::Value *)&v33);
  j_Json::Value::~Value((Json::Value *)&v33);
  v4 = (_BYTE *)(*(_QWORD *)(v1 + 88) >> 32);
  v5 = (_BYTE *)*(_QWORD *)(v1 + 88);
  if ( v4 != v5 )
  {
    while ( 1 )
    {
      v6 = *v4 - 9;
      if ( v6 > 0x17 || !((1 << v6) & 0x800013) )
        break;
      *(_DWORD *)(v1 + 92) = ++v4;
      if ( v5 == v4 )
      {
        v4 = v5;
      }
    }
  }
  if ( *v4 == 93 )
    j_Json::Reader::readToken((Json::Reader *)v1, (int)&v34);
LABEL_30:
    result = 1;
  else
    v7 = 0;
    do
      v8 = *(_QWORD *)(v1 + 24);
      if ( (_DWORD)v8 == HIDWORD(v8) )
        LODWORD(v8) = *(_DWORD *)(*(_DWORD *)(v1 + 36) - 4) + 512;
      v9 = j_Json::Value::operator[](*(_DWORD *)(v8 - 4), v7);
      v10 = *(int **)(v1 + 24);
      if ( v10 == (int *)(*(_DWORD *)(v1 + 32) - 4) )
        if ( (unsigned int)((*(_QWORD *)v1 >> 32) - ((signed int)(*(_DWORD *)(v1 + 36) - *(_QWORD *)v1) >> 2)) <= 1 )
          j_std::deque<Json::Value *,std::allocator<Json::Value *>>::_M_reallocate_map(v1, 1u, 0);
        *(_DWORD *)(*(_DWORD *)(v1 + 36) + 4) = j_operator new(0x200u);
        **(_DWORD **)(v1 + 24) = v9;
        v12 = *(_DWORD *)(v1 + 36);
        *(_DWORD *)(v1 + 36) = v12 + 4;
        v11 = *(_DWORD *)(v12 + 4);
        *(_DWORD *)(v1 + 28) = v11;
        *(_DWORD *)(v1 + 32) = v11 + 512;
      else
        *v10 = v9;
        v11 = *(_DWORD *)(v1 + 24) + 4;
      *(_DWORD *)(v1 + 24) = v11;
      v13 = j_Json::Reader::readValue((Json::Reader *)v1);
      v14 = *(_QWORD *)(v1 + 24);
      if ( (_DWORD)v14 == HIDWORD(v14) )
        j_operator delete((void *)v14);
        v16 = *(_DWORD *)(v1 + 36);
        *(_DWORD *)(v1 + 36) = v16 - 4;
        v17 = *(_DWORD *)(v16 - 4);
        *(_DWORD *)(v1 + 28) = v17;
        v18 = v17 + 512;
        v15 = v17 + 508;
        *(_DWORD *)(v1 + 32) = v18;
        v15 = v14 - 4;
      *(_DWORD *)(v1 + 24) = v15;
      if ( !v13 )
        v25 = *(_QWORD *)(v1 + 56);
        v26 = -858993459 * (((signed int)v25 - *(_DWORD *)(v1 + 48)) >> 2);
        v27 = -858993459 * ((signed int)(*(_QWORD *)(v1 + 64) - (*(_QWORD *)(v1 + 64) >> 32)) >> 2);
        v28 = 25 * ((*(_DWORD *)(v1 + 76) - HIDWORD(v25)) >> 2);
        do
          j_Json::Reader::readToken((Json::Reader *)v1, (int)&v34);
        while ( (v34 | 4) != 4 );
        j_std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::resize(
          v1 + 40,
          v28 + v27 + v26 - 25);
        goto LABEL_29;
      ++v7;
      do
        j_Json::Reader::readToken((Json::Reader *)v1, (int)&v32);
      while ( v32 == 12 );
      if ( v32 == 4 )
        goto LABEL_30;
    while ( v32 == 10 );
    sub_21E94B4((void **)&v31, "Missing ',' or ']' in array declaration");
    j_Json::Reader::addError(v1, &v31, (int)&v32, 0);
    v19 = *(_QWORD *)(v1 + 56);
    v20 = *(_QWORD *)(v1 + 64) - (*(_QWORD *)(v1 + 64) >> 32);
    v21 = v19 - *(_DWORD *)(v1 + 48);
    v22 = (*(_DWORD *)(v1 + 76) - HIDWORD(v19)) >> 2;
      j_Json::Reader::readToken((Json::Reader *)v1, (int)&v34);
    while ( (v34 | 4) != 4 );
    j_std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::resize(
      v1 + 40,
      -858993459 * (v20 >> 2) + 25 * v22 + -858993459 * (v21 >> 2) - 25);
    v23 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v31 - 4);
      if ( &pthread_create )
        __dmb();
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
LABEL_29:
    result = 0;
  return result;
}
