

Json::Value *__fastcall Parser::parse(Parser *this, const Json::Value *a2, FloatRange *a3, const char *a4)
{
  const Json::Value *v4; // r4@1
  const Json::Value *v5; // r0@1
  int v7; // [sp+0h] [bp-20h]@1

  v4 = a2;
  v5 = (const Json::Value *)Json::Value::operator[]((int)this, (const char *)a3);
  Json::Value::Value((Json::Value *)&v7, v5);
  FloatRange::parseJson((int)v4, (Json::Value *)&v7);
  return Json::Value::~Value((Json::Value *)&v7);
}


void __fastcall Parser::parse(int a1, int *a2, const char *a3, const char *a4)
{
  int *v4; // r4@1
  const char *v5; // r6@1
  void *v6; // r5@1
  void *v7; // r0@1
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+Ch] [bp-24h]@1

  v4 = a2;
  v5 = a4;
  v6 = Json::Value::operator[](a1, a3);
  sub_21E94B4((void **)&v13, v5);
  Json::Value::asString(&v14, (int)v6, &v13);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v14);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


void __fastcall Parser::parse(const Json::Value *a1, int a2, const char *a3)
{
  int v3; // r4@1
  const Json::Value *v4; // r5@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-30h]@1
  int v9; // [sp+18h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  sub_21E94B4((void **)&v9, a3);
  Json::Value::Value((Json::Value *)&v8, v4);
  ItemListSerializer::loadJSONSet((const char **)&v9, v3, (Json::Value *)&v8);
  Json::Value::~Value((Json::Value *)&v8);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


signed int __fastcall Parser::parse(int a1, int a2, const char *a3)
{
  int v3; // r4@1
  Json::Value *v4; // r0@1

  v3 = a2;
  v4 = (Json::Value *)Json::Value::operator[](a1, a3);
  return j_j_j__ZN8JsonUtil10parseValueISt3setISsSt4lessISsESaISsEEEEbRKN4Json5ValueERT_(v4, v3);
}


void __fastcall Parser::parse(Parser *this, const Json::Value *a2, const Item **a3, const char *a4, const char *a5)
{
  const Json::Value *v5; // r4@1
  const char *v6; // r6@1
  void *v7; // r5@1
  void *v8; // r0@1
  void *v9; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int v14; // [sp+8h] [bp-28h]@1
  int v15; // [sp+Ch] [bp-24h]@1

  v5 = a2;
  v6 = a4;
  v7 = Json::Value::operator[]((int)this, (const char *)a3);
  sub_21E94B4((void **)&v14, v6);
  Json::Value::asString(&v15, (int)v7, &v14);
  *(_DWORD *)v5 = Item::lookupByName((unsigned int *)&v15, 1);
  v8 = (void *)(v15 - 12);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall Parser::parse(int a1, int *a2, const char *a3, const char *a4)
{
  Parser::parse(a1, a2, a3, a4);
}


int __fastcall Parser::parse(Parser *this, const Json::Value *a2, int *a3, const char *a4, int a5)
{
  const Json::Value *v5; // r5@1
  const char *v6; // r4@1
  Json::Value *v7; // r0@1
  int result; // r0@1

  v5 = a2;
  v6 = a4;
  v7 = (Json::Value *)Json::Value::operator[]((int)this, (const char *)a3);
  result = Json::Value::asInt(v7, (int)v6);
  *(_DWORD *)v5 = result;
  return result;
}


int __fastcall Parser::parse(Parser *this, const Json::Value *a2, Vec3 *a3, const char *a4, Vec3 *a5)
{
  const Json::Value *v5; // r4@1
  const char *v6; // r5@1
  Json::Value *v7; // r0@1
  Json::Value *v8; // r7@1
  int result; // r0@1
  Json::Value *v10; // r0@3
  Json::Value *v11; // r0@3
  Json::Value *v12; // r0@3
  __int64 v13; // [sp+0h] [bp-30h]@3
  __int64 v14; // [sp+8h] [bp-28h]@3
  char v15; // [sp+10h] [bp-20h]@3

  v5 = a2;
  v6 = a4;
  v7 = (Json::Value *)Json::Value::operator[]((int)this, (const char *)a3);
  v8 = v7;
  result = Json::Value::isArray(v7);
  if ( result == 1 )
  {
    result = Json::Value::isNull(v8);
    if ( !result )
    {
      Json::Value::begin((Json::Value *)&v15, (int)v8);
      v14 = *(_QWORD *)&v15;
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v15);
      v10 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v14);
      *(_DWORD *)v5 = Json::Value::asFloat(v10, *(float *)v6);
      v13 = *(_QWORD *)&v15;
      v11 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v13);
      *((_DWORD *)v5 + 1) = Json::Value::asFloat(v11, *((float *)v6 + 1));
      v12 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v15);
      result = Json::Value::asFloat(v12, *((float *)v6 + 2));
      *((_DWORD *)v5 + 2) = result;
    }
  }
  return result;
}


void __fastcall Parser::parse(int a1, int a2, const char *a3, const char *a4)
{
  int v4; // r11@1
  const char *v5; // r9@1
  Json::Value *v6; // r5@1
  Json::ValueIteratorBase *v7; // r7@4
  void **v8; // r8@4
  int *v9; // r10@4
  Json::Value *v10; // r4@4
  Json::Value *v11; // r6@5
  int *v12; // r4@6
  char v13; // r10@6
  __int64 v14; // r0@6
  void *v15; // r8@8
  const char *v16; // r7@8
  int v17; // r1@8
  unsigned int v18; // r2@9
  unsigned int v19; // r9@11
  _BYTE *v20; // r6@14
  char *v21; // r10@16
  int v22; // r10@18
  int v23; // r0@20
  void *v24; // r0@21
  void *v25; // r0@22
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  unsigned int *v28; // r2@29
  signed int v29; // r1@31
  char v30; // r8@43
  __int64 v31; // r0@43
  void *v32; // r7@45
  int v33; // r1@45
  unsigned int v34; // r2@46
  unsigned int v35; // r4@48
  _BYTE *v36; // r6@51
  char *v37; // r8@53
  int v38; // r8@55
  void *v39; // r0@58
  void *v40; // r0@59
  unsigned int *v41; // r2@61
  signed int v42; // r1@63
  unsigned int *v43; // r2@65
  signed int v44; // r1@67
  Json::Value *v45; // [sp+8h] [bp-58h]@1
  int v46; // [sp+14h] [bp-4Ch]@43
  int v47; // [sp+18h] [bp-48h]@43
  int v48; // [sp+20h] [bp-40h]@4
  int v49; // [sp+24h] [bp-3Ch]@4
  char v50; // [sp+28h] [bp-38h]@3
  char v51; // [sp+30h] [bp-30h]@3

  v4 = a2;
  v5 = a4;
  v6 = (Json::Value *)Json::Value::operator[](a1, a3);
  v45 = v6;
  if ( !Json::Value::isNull(v6) )
  {
    if ( Json::Value::isArray(v6) == 1 )
    {
      Json::Value::begin((Json::Value *)&v51, (int)v6);
      Json::Value::end((Json::Value *)&v50, (int)v6);
      if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v51, (const Json::ValueIteratorBase *)&v50) )
      {
        v7 = (Json::ValueIteratorBase *)&v51;
        v8 = (void **)&v48;
        v9 = &v49;
        v10 = (Json::Value *)&v50;
        do
        {
          v11 = (Json::Value *)Json::ValueIteratorBase::deref(v7);
          if ( Json::Value::isString(v11) == 1 )
          {
            sub_21E94B4(v8, v5);
            Json::Value::asString(v9, (int)v11, (int *)v8);
            v12 = v9;
            v13 = soundEventFromString((unsigned int *)v9);
            v14 = *(_QWORD *)(v4 + 4);
            if ( (_DWORD)v14 == HIDWORD(v14) )
            {
              v15 = *(void **)v4;
              v16 = v5;
              v17 = v14 - *(_DWORD *)v4;
              if ( v17 == -1 )
                sub_21E5A04("vector::_M_emplace_back_aux");
              v18 = v14 - *(_DWORD *)v4;
              if ( (void *)v14 == v15 )
                v18 = 1;
              v19 = v18 + v17;
              if ( v18 + v17 < v18 )
                v19 = -1;
              if ( v19 )
              {
                v20 = operator new(v19);
                LODWORD(v14) = *(_QWORD *)v4 >> 32;
                v15 = (void *)*(_QWORD *)v4;
              }
              else
                v20 = 0;
              v20[(_DWORD)v14 - (_DWORD)v15] = v13;
              v21 = &v20[v14 - (_DWORD)v15];
              if ( (void *)v14 != v15 )
                _aeabi_memmove(v20, v15);
              v22 = (int)(v21 + 1);
              if ( v15 )
                operator delete(v15);
              v23 = (int)&v20[v19];
              v5 = v16;
              v7 = (Json::ValueIteratorBase *)&v51;
              *(_DWORD *)v4 = v20;
              *(_DWORD *)(v4 + 4) = v22;
              *(_DWORD *)(v4 + 8) = v23;
            }
            else
              *(_BYTE *)v14 = v13;
              *(_DWORD *)(v4 + 4) = v14 + 1;
            v8 = (void **)&v48;
            v9 = v12;
            v6 = v45;
            v24 = (void *)(v49 - 12);
            if ( (int *)(v49 - 12) != &dword_28898C0 )
              v26 = (unsigned int *)(v49 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v27 = __ldrex(v26);
                while ( __strex(v27 - 1, v26) );
                v27 = (*v26)--;
              if ( v27 <= 0 )
                j_j_j_j__ZdlPv_9(v24);
            v10 = (Json::Value *)&v50;
            v25 = (void *)(v48 - 12);
            if ( (int *)(v48 - 12) != &dword_28898C0 )
              v28 = (unsigned int *)(v48 - 4);
                  v29 = __ldrex(v28);
                while ( __strex(v29 - 1, v28) );
                v29 = (*v28)--;
              if ( v29 <= 0 )
                j_j_j_j__ZdlPv_9(v25);
          }
          Json::ValueIteratorBase::increment(v7);
          Json::Value::end(v10, (int)v6);
        }
        while ( !Json::ValueIteratorBase::isEqual(v7, v10) );
      }
    }
    else if ( Json::Value::isString(v6) == 1 )
      sub_21E94B4((void **)&v46, v5);
      Json::Value::asString(&v47, (int)v6, &v46);
      v30 = soundEventFromString((unsigned int *)&v47);
      v31 = *(_QWORD *)(v4 + 4);
      if ( (_DWORD)v31 == HIDWORD(v31) )
        v32 = *(void **)v4;
        v33 = v31 - *(_DWORD *)v4;
        if ( v33 == -1 )
          sub_21E5A04("vector::_M_emplace_back_aux");
        v34 = v31 - *(_DWORD *)v4;
        if ( (void *)v31 == v32 )
          v34 = 1;
        v35 = v34 + v33;
        if ( v34 + v33 < v34 )
          v35 = -1;
        if ( v35 )
          v36 = operator new(v35);
          LODWORD(v31) = *(_QWORD *)v4 >> 32;
          v32 = (void *)*(_QWORD *)v4;
        else
          v36 = 0;
        v36[(_DWORD)v31 - (_DWORD)v32] = v30;
        v37 = &v36[v31 - (_DWORD)v32];
        if ( (void *)v31 != v32 )
          _aeabi_memmove(v36, v32);
        v38 = (int)(v37 + 1);
        if ( v32 )
          operator delete(v32);
        *(_DWORD *)v4 = v36;
        *(_DWORD *)(v4 + 4) = v38;
        *(_DWORD *)(v4 + 8) = &v36[v35];
      else
        *(_BYTE *)v31 = v30;
        *(_DWORD *)(v4 + 4) = v31 + 1;
      v39 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v47 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      v40 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v46 - 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j__ZdlPv_9(v40);
  }
}


int __fastcall Parser::parse(int a1, int a2, const char *a3)
{
  Json::Value::operator[](a1, a3);
  return j_j_j__ZN8JsonUtil10parseValueISt6vectorISsSaISsEEEEbRKN4Json5ValueERT_();
}


void __fastcall Parser::parse(Parser *this, const Json::Value *a2, EntityDefinitionIdentifier *a3, const char *a4, const char *a5)
{
  Parser::parse(this, a2, a3, a4, a5);
}


void __fastcall Parser::parse(int a1, int *a2, const char *a3, const char *a4)
{
  Parser::parse(a1, a2, a3, a4);
}


int __fastcall Parser::parse(Parser *this, const Json::Value *a2, float *a3, const char *a4, float a5)
{
  const Json::Value *v5; // r5@1
  const char *v6; // r4@1
  Json::Value *v7; // r0@1
  int result; // r0@1

  v5 = a2;
  v6 = a4;
  v7 = (Json::Value *)Json::Value::operator[]((int)this, (const char *)a3);
  result = Json::Value::asFloat(v7, *(float *)&v6);
  *(_DWORD *)v5 = result;
  return result;
}


int __fastcall Parser::parse(Parser *this, const Json::Value *a2, GameVersion *a3, const char *a4, const GameVersion *a5)
{
  const Json::Value *v5; // r10@1
  Json::Value *v6; // r5@1
  void *v7; // r0@2
  void *v8; // r0@3
  _DWORD *v9; // r5@4 OVERLAPPED
  _DWORD *v10; // r6@4 OVERLAPPED
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  int *v13; // r0@18
  unsigned int v14; // r3@23
  unsigned int v15; // r7@23
  int result; // r0@27
  int v24; // r1@27
  int v25; // r2@27
  int v26; // r3@27
  unsigned int *v27; // r2@28
  signed int v28; // r1@30
  unsigned int *v29; // r2@32
  signed int v30; // r1@34
  char v31; // [sp+8h] [bp-60h]@27
  int v32; // [sp+Ch] [bp-5Ch]@27
  int v33; // [sp+10h] [bp-58h]@27
  int v34; // [sp+14h] [bp-54h]@27
  int v35; // [sp+20h] [bp-48h]@2
  int v36; // [sp+24h] [bp-44h]@2
  int v37; // [sp+28h] [bp-40h]@2
  int v38; // [sp+2Ch] [bp-3Ch]@4
  unsigned int v39; // [sp+34h] [bp-34h]@1
  unsigned int v40; // [sp+38h] [bp-30h]@1
  unsigned int v41; // [sp+3Ch] [bp-2Ch]@1
  int v42; // [sp+40h] [bp-28h]@1

  v5 = a2;
  *(float *)&v41 = 0.0;
  v42 = 0;
  v39 = 0;
  v40 = 0;
  v6 = (Json::Value *)Json::Value::operator[]((int)this, (const char *)a3);
  if ( Json::Value::isString(v6) == 1 )
  {
    sub_21E94B4((void **)&v35, (const char *)&unk_257BC67);
    Json::Value::asString(&v36, (int)v6, &v35);
    Util::split((int)&v37, &v36, 46);
    v7 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
    {
      v27 = (unsigned int *)(v36 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v35 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    *(_QWORD *)&v9 = *(_QWORD *)&v37;
    if ( (unsigned int)((v38 - v37) >> 2) > 1 )
      Util::toInt<int,(void *)0>((unsigned int *)v37, &v42);
      Util::toInt<int,(void *)0>((unsigned int *)(v37 + 4), &v41);
      *(_QWORD *)&v9 = *(_QWORD *)&v37;
      if ( (unsigned int)((v38 - v37) >> 2) >= 3 )
        Util::toInt<int,(void *)0>((unsigned int *)(v37 + 8), &v40);
        *(_QWORD *)&v9 = *(_QWORD *)&v37;
        if ( (unsigned int)((v38 - v37) >> 2) >= 4 )
        {
          Util::toInt<int,(void *)0>((unsigned int *)(v37 + 12), &v39);
          *(_QWORD *)&v9 = *(_QWORD *)&v37;
        }
    if ( v9 != v10 )
      do
        v13 = (int *)(*v9 - 12);
        if ( v13 != &dword_28898C0 )
          v11 = (unsigned int *)(*v9 - 4);
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
            j_j_j_j__ZdlPv_9(v13);
        ++v9;
      while ( v9 != v10 );
      v10 = (_DWORD *)v37;
    if ( v10 )
      operator delete(v10);
    v14 = v40;
    v15 = v39;
    _R6 = v42;
    _R2 = v41;
  }
  else
    v15 = 0;
    if ( Json::Value::isDouble(v6) == 1 )
      _R6 = Json::Value::asInt(v6, 0);
      v42 = _R6;
      _R0 = Json::Value::asFloat(v6, 0.0);
      __asm { VMOV            S0, R6 }
      v14 = 0;
      __asm
        VMOV            S2, R0
        VCVT.F32.S32    S0, S0
        VMOV.F32        S4, #10.0
        VSUB.F32        S0, S2, S0
        VMUL.F32        S0, S0, S4
        VCVTR.S32.F32   S2, S0
        VCVTR.S32.F32   S0, S0
        VSTR            S2, [SP,#0x68+var_2C]
        VMOV            R2, S0
    else
      _R2 = 0;
      _R6 = 0;
  GameVersion::GameVersion((GameVersion *)&v31, _R6, _R2, v14, v15);
  result = *(_DWORD *)&v31;
  v24 = v32;
  v25 = v33;
  v26 = v34;
  *(_DWORD *)v5 = *(_DWORD *)&v31;
  *((_DWORD *)v5 + 1) = v24;
  *((_DWORD *)v5 + 2) = v25;
  *((_DWORD *)v5 + 3) = v26;
  return result;
}


void __fastcall Parser::parse(int a1, int a2, const char *a3, const char *a4)
{
  int v4; // r4@1
  const char *v5; // r6@1
  void *v6; // r5@1
  int v7; // r1@1
  _BYTE *v8; // r6@2
  void *v9; // r0@3
  int v10; // r2@4
  unsigned int v11; // r3@4
  void *v12; // r0@5
  int *v13; // r0@8
  int v14; // r0@9
  int v15; // r0@10
  char *v16; // r0@13
  void *v17; // r0@14
  void *v18; // r0@16
  void *v19; // r0@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  unsigned int *v26; // r2@31
  signed int v27; // r1@33
  unsigned int *v28; // r2@43
  signed int v29; // r1@45
  unsigned int *v30; // r2@47
  signed int v31; // r1@49
  int v32; // [sp+8h] [bp-30h]@1
  int v33; // [sp+Ch] [bp-2Ch]@1
  int v34; // [sp+10h] [bp-28h]@5
  int v35; // [sp+14h] [bp-24h]@3
  char *v36; // [sp+18h] [bp-20h]@2
  int v37; // [sp+1Ch] [bp-1Ch]@2

  v4 = a2;
  v5 = a4;
  v6 = Json::Value::operator[](a1, a3);
  sub_21E94B4((void **)&v32, v5);
  Json::Value::asString(&v33, (int)v6, &v32);
  v7 = v33;
  if ( !*(_DWORD *)(v33 - 12) )
    goto LABEL_16;
  *(_DWORD *)v4 = 0;
  *(_DWORD *)(v4 + 4) = 0;
  sub_21E8AF4(&v37, &v33);
  v36 = (char *)&unk_28898CC;
  v8 = sub_21E78D0(&v33, 58, 0xFFFFFFFF);
  if ( v8 == (_BYTE *)-1 )
  {
    *(_DWORD *)(v4 + 4) = 0;
  }
  else
    sub_21E9040((void **)&v35, &v33, 0, (unsigned int)v8);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v37, &v35);
    v9 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
    {
      v28 = (unsigned int *)(v35 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      }
      else
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
    v10 = (int)(v8 + 1);
    v11 = *(_DWORD *)(v33 - 12);
    if ( v11 < (unsigned int)(v8 + 1) )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v10, v11);
    sub_21E9040((void **)&v34, &v33, v10, 0xFFFFFFFF);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v36,
      &v34);
    v12 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v34 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    Util::toInt((unsigned int *)&v36, (int *)(v4 + 4), 0, 255);
  v13 = Item::lookupByName((unsigned int *)&v37, 1);
  if ( v13 )
    v14 = *((_WORD *)v13 + 9);
    v15 = Block::lookupByName((unsigned int *)&v37, 1);
    if ( !v15 )
      goto LABEL_13;
    v14 = *(_BYTE *)(v15 + 4);
  *(_DWORD *)v4 = v14;
LABEL_13:
  v16 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v37 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
LABEL_16:
  v18 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v7 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v32 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
}


int __fastcall Parser::parse(Parser *this, const Json::Value *a2, MobEffectInstance *a3, const char *a4)
{
  MobEffectInstance *v4; // r6@1
  const Json::Value *v5; // r4@1
  Json::Value *v6; // r5@1
  void *v7; // r6@3
  MobEffect *v8; // r8@3
  void *v9; // r0@3
  void *v10; // r0@4
  Json::Value *v11; // r0@6
  Json::Value *v17; // r0@6
  int v18; // r7@6
  Json::Value *v19; // r0@6
  char v20; // r6@6
  Json::Value *v21; // r0@6
  char v22; // r5@6
  int v23; // r0@6
  int v25; // r0@6
  int v26; // r0@8
  int v27; // r1@8
  int v28; // r2@8
  int v29; // r3@8
  int v30; // r4@8
  int result; // r0@8
  unsigned int *v32; // r2@10
  signed int v33; // r1@12
  unsigned int *v34; // r2@14
  signed int v35; // r1@16
  char v36; // [sp+8h] [bp-68h]@6
  char v37; // [sp+18h] [bp-58h]@9
  int v38; // [sp+30h] [bp-40h]@3
  int v39; // [sp+34h] [bp-3Ch]@3
  char v40; // [sp+38h] [bp-38h]@7

  v4 = a3;
  v5 = a2;
  v6 = this;
  if ( Json::Value::isNull(this) || !Json::Value::isObject(v6) )
  {
    v25 = MobEffectInstance::MobEffectInstance((int)&v40);
  }
  else
    v7 = Json::Value::operator[]((int)v6, (const char *)v4);
    sub_21E94B4((void **)&v38, (const char *)&unk_257BC67);
    Json::Value::asString(&v39, (int)v7, &v38);
    v8 = (MobEffect *)MobEffect::getByName((int **)&v39);
    v9 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
    {
      v32 = (unsigned int *)(v39 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
    }
    v10 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v38 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    if ( v8 )
      v11 = (Json::Value *)Json::Value::operator[]((int)v6, "duration");
      _R0 = Json::Value::asFloat(v11, 0.0);
      __asm
        VMOV.F32        S0, #20.0
        VMOV            S2, R0
        VMUL.F32        S16, S2, S0
      v17 = (Json::Value *)Json::Value::operator[]((int)v6, "amplifier");
      v18 = Json::Value::asInt(v17, 0);
      v19 = (Json::Value *)Json::Value::operator[]((int)v6, "ambient");
      v20 = Json::Value::asBool(v19, 0);
      __asm { VCVTR.S32.F32   S16, S16 }
      v21 = (Json::Value *)Json::Value::operator[]((int)v6, "visible");
      v22 = Json::Value::asBool(v21, 1);
      v23 = MobEffect::getId(v8);
      __asm { VMOV            R2, S16 }
      v25 = MobEffectInstance::MobEffectInstance((int)&v36, v23, _R2, v18, v20, v22);
    else
      v25 = MobEffectInstance::MobEffectInstance((int)&v37);
  v27 = *(_DWORD *)v25;
  v28 = *(_DWORD *)(v25 + 4);
  v29 = *(_DWORD *)(v25 + 8);
  v26 = v25 + 12;
  *(_DWORD *)v5 = v27;
  *((_DWORD *)v5 + 1) = v28;
  *((_DWORD *)v5 + 2) = v29;
  v30 = (int)v5 + 12;
  LOWORD(v27) = *(_WORD *)v26;
  result = *(_BYTE *)(v26 + 2);
  *(_BYTE *)(v30 + 2) = result;
  *(_WORD *)v30 = v27;
  return result;
}


void __fastcall Parser::parse(int a1, char **a2, const char *a3, const char *a4)
{
  char **v4; // r4@1
  const char *v5; // r6@1
  void *v6; // r5@1
  void *v7; // r0@1
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+Ch] [bp-24h]@1

  v4 = a2;
  v5 = a4;
  v6 = Json::Value::operator[](a1, a3);
  sub_21E94B4((void **)&v13, v5);
  Json::Value::asString(&v14, (int)v6, &v13);
  *v4 = EntityTypeFromString((const void **)&v14);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


void __fastcall Parser::parse(int a1, int a2, const char *a3, const char *a4)
{
  Parser::parse(a1, a2, a3, a4);
}


void __fastcall Parser::parse(int a1, int a2, const char *a3, const char *a4)
{
  Parser::parse(a1, a2, a3, a4);
}


void __fastcall Parser::parse(int a1, signed int *a2, const char *a3, const char *a4)
{
  signed int *v4; // r4@1
  const char *v5; // r6@1
  void *v6; // r5@1
  void *v7; // r0@1
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+Ch] [bp-24h]@1

  v4 = a2;
  v5 = a4;
  v6 = Json::Value::operator[](a1, a3);
  sub_21E94B4((void **)&v13, v5);
  Json::Value::asString(&v14, (int)v6, &v13);
  *v4 = EntityDamageSource::lookupCause((int **)&v14);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


int __fastcall Parser::parse(Parser *this, const Json::Value *a2, Json::Value *a3, const char *a4)
{
  const Json::Value *v4; // r4@1
  const Json::Value *v5; // r1@1

  v4 = a2;
  v5 = (const Json::Value *)Json::Value::operator[]((int)this, (const char *)a3);
  return j_j_j__ZN4Json5ValueaSERKS0__2((int)v4, v5);
}


void __fastcall Parser::parse(int a1, int *a2, const char *a3, const char *a4)
{
  int *v4; // r4@1
  const char *v5; // r6@1
  void *v6; // r5@1
  void *v7; // r0@1
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+Ch] [bp-24h]@1

  v4 = a2;
  v5 = a4;
  v6 = Json::Value::operator[](a1, a3);
  sub_21E94B4((void **)&v13, v5);
  Json::Value::asString(&v14, (int)v6, &v13);
  *v4 = ParticleTypeFromString((unsigned int *)&v14);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


void __fastcall Parser::parse(Parser *this, const Json::Value *a2, bool *a3, const char *a4, bool a5)
{
  Parser::parse(this, a2, a3, a4, a5);
}


void __fastcall Parser::parse(Parser *this, const Json::Value *a2, EntityDefinitionIdentifier *a3, const char *a4, const char *a5)
{
  int *v5; // r4@1
  const char *v6; // r6@1
  void *v7; // r5@1
  void *v8; // r0@1
  void *v9; // r0@2
  void *v10; // r0@3
  void *v11; // r0@4
  void *v12; // r0@5
  void *v13; // r0@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  unsigned int *v24; // r2@28
  signed int v25; // r1@30
  int v26; // [sp+0h] [bp-30h]@2
  int v27; // [sp+4h] [bp-2Ch]@2
  int v28; // [sp+8h] [bp-28h]@3
  int v29; // [sp+Ch] [bp-24h]@2
  int v30; // [sp+14h] [bp-1Ch]@1
  int v31; // [sp+18h] [bp-18h]@1

  v5 = (int *)a2;
  v6 = a4;
  v7 = Json::Value::operator[]((int)this, (const char *)a3);
  sub_21E94B4((void **)&v30, v6);
  Json::Value::asString(&v31, (int)v7, &v30);
  v8 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v30 - 4);
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
  }
  EntityTypeResolveAlias((void **)&v26, (const void **)&v31, 1);
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v27, &v26);
  EntityDefinitionIdentifier::operator=(v5, &v27);
  v9 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v29 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v28 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v27 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v26 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v31 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall Parser::parse(const Json::Value *a1, int a2, const char *a3)
{
  Parser::parse(a1, a2, a3);
}


void __fastcall Parser::parse(int a1, int a2, const char *a3, const char *a4)
{
  Parser::parse(a1, a2, a3, a4);
}


signed int __fastcall Parser::parse(Parser *this, const Json::Value *a2, FilterGroup *a3, const char *a4, const char *a5)
{
  FilterGroup *v5; // r4@1
  Json::Value *v6; // r0@1
  const Json::Value *v7; // r5@1
  signed int result; // r0@1

  v5 = a2;
  v6 = (Json::Value *)Json::Value::operator[]((int)this, (const char *)a3);
  v7 = v6;
  result = Json::Value::isNull(v6);
  if ( !result )
    result = j_j_j__ZN11FilterGroup5parseERKN4Json5ValueE_0(v5, v7);
  return result;
}


void __fastcall Parser::parse(Parser *this, const Json::Value *a2, const Item **a3, const char *a4, const char *a5)
{
  Parser::parse(this, a2, a3, a4, a5);
}


void __fastcall Parser::parse(const Json::Value *a1, int a2, const char *a3)
{
  int v3; // r4@1
  const Json::Value *v4; // r5@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-30h]@1
  int v9; // [sp+18h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  sub_21E94B4((void **)&v9, a3);
  Json::Value::Value((Json::Value *)&v8, v4);
  BlockListSerializer::loadJSONSet((const char **)&v9, v3, (Json::Value *)&v8);
  Json::Value::~Value((Json::Value *)&v8);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


void __fastcall Parser::parse(Parser *this, const Json::Value *a2, bool *a3, const char *a4, bool a5)
{
  const Json::Value *v5; // r4@1
  const char *v6; // r6@1
  Json::Value *v7; // r5@1
  _BYTE *v8; // r0@4
  void *v9; // r0@5
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  int v14; // [sp+8h] [bp-28h]@4
  _BYTE *v15; // [sp+Ch] [bp-24h]@4

  v5 = a2;
  v6 = a4;
  v7 = (Json::Value *)Json::Value::operator[]((int)this, (const char *)a3);
  if ( Json::Value::isBool(v7) == 1 )
  {
    *(_BYTE *)v5 = Json::Value::asBool(v7, (int)v6);
  }
  else if ( Json::Value::isString(v7) == 1 )
    sub_21E94B4((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString((int *)&v15, (int)v7, &v14);
    *(_BYTE *)v5 = Util::compareNoCase(*((_DWORD *)v15 - 3), v15, 4, "True");
    v8 = v15 - 12;
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v15 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
    v9 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v14 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  else
    *(_BYTE *)v5 = (_BYTE)v6;
}


void __fastcall Parser::parse(int a1, char **a2, const char *a3, const char *a4)
{
  Parser::parse(a1, a2, a3, a4);
}


void __fastcall Parser::parse(int a1, signed int *a2, const char *a3, const char *a4)
{
  Parser::parse(a1, a2, a3, a4);
}


void __fastcall Parser::parse(const Json::Value *a1, int a2, const char *a3)
{
  Parser::parse(a1, a2, a3);
}


int __fastcall Parser::parseTrigger(Parser *this, Json::Value *a2, DefinitionTrigger *a3, const char *a4)
{
  DefinitionTrigger *v4; // r5@1
  Json::Value *v5; // r4@1
  Parser *v6; // r6@1
  const Json::Value *v7; // r0@1
  int v8; // r4@2
  void *v9; // r5@4
  void *v10; // r0@4
  void *v11; // r0@5
  void *v12; // r5@6
  void *v13; // r0@6
  void *v14; // r0@7
  const Json::Value *v15; // r0@9
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  int v25; // [sp+4h] [bp-4Ch]@6
  int v26; // [sp+8h] [bp-48h]@6
  int v27; // [sp+10h] [bp-40h]@4
  int v28; // [sp+14h] [bp-3Ch]@4
  char v29; // [sp+18h] [bp-38h]@1
  char v30; // [sp+28h] [bp-28h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = (const Json::Value *)Json::Value::operator[](this, (const char *)a3);
  Json::Value::Value((Json::Value *)&v30, v7);
  Json::Value::removeMember((Json::Value *)&v29, (const char *)v6, (const char *)v4);
  Json::Value::~Value((Json::Value *)&v29);
  if ( Json::Value::isNull((Json::Value *)&v30) )
  {
    v8 = 0;
  }
  else if ( Json::Value::isObject((Json::Value *)&v30) )
    v9 = Json::Value::operator[]((int)&v30, "event");
    sub_21E94B4((void **)&v27, (const char *)&unk_257BC67);
    Json::Value::asString(&v28, (int)v9, &v27);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v5,
      &v28);
    v10 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
    {
      v17 = (unsigned int *)(v28 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v27 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = Json::Value::operator[]((int)&v30, "target");
    sub_21E94B4((void **)&v25, "self");
    Json::Value::asString(&v26, (int)v12, &v25);
      (int *)v5 + 1,
      &v26);
    v13 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v26 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v25 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v8 = 1;
    if ( Json::Value::isMember((Json::Value *)&v30, "filters") == 1 )
      v15 = (const Json::Value *)Json::Value::operator[]((int)&v30, "filters");
      if ( !FilterGroup::parse((Json::Value *)((char *)v5 + 8), v15) )
        v8 = 0;
  else
  Json::Value::~Value((Json::Value *)&v30);
  return v8;
}


unsigned int __fastcall Parser::parse(Parser *this, const Json::Value *a2, unsigned int *a3, const char *a4, unsigned int a5)
{
  const Json::Value *v5; // r5@1
  const char *v6; // r4@1
  Json::Value *v7; // r0@1
  unsigned int result; // r0@1

  v5 = a2;
  v6 = a4;
  v7 = (Json::Value *)Json::Value::operator[]((int)this, (const char *)a3);
  result = Json::Value::asUInt(v7, (unsigned int)v6);
  *(_DWORD *)v5 = result;
  return result;
}


void __fastcall Parser::parse(int a1, int a2, const char *a3, const char *a4)
{
  int v4; // r4@1
  const char *v5; // r5@1
  Json::Value *v6; // r6@1
  void *v7; // r0@6
  void *v8; // r0@7
  __int64 v9; // r0@8
  void *v10; // r0@11
  void *v11; // r0@12
  void *v12; // r0@13
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  unsigned int *v19; // r2@26
  signed int v20; // r1@28
  unsigned int *v21; // r2@30
  signed int v22; // r1@32
  unsigned int *v23; // r2@34
  signed int v24; // r1@36
  Json::Value *v25; // r11@58
  void *v26; // r0@59
  void *v27; // r0@60
  __int64 v28; // r0@61
  void *v29; // r0@64
  void *v30; // r0@65
  void *v31; // r0@66
  unsigned int *v32; // r2@69
  signed int v33; // r1@71
  unsigned int *v34; // r2@73
  signed int v35; // r1@75
  unsigned int *v36; // r2@77
  signed int v37; // r1@79
  unsigned int *v38; // r2@81
  signed int v39; // r1@83
  int v40; // [sp+14h] [bp-64h]@6
  int v41; // [sp+18h] [bp-60h]@6
  int v42; // [sp+1Ch] [bp-5Ch]@6
  int v43; // [sp+20h] [bp-58h]@12
  int v44; // [sp+24h] [bp-54h]@11
  int v45; // [sp+2Ch] [bp-4Ch]@22
  int v46; // [sp+30h] [bp-48h]@18
  int v47; // [sp+34h] [bp-44h]@34
  int v48; // [sp+38h] [bp-40h]@30
  int v49; // [sp+3Ch] [bp-3Ch]@26
  char v50; // [sp+40h] [bp-38h]@3
  char v51; // [sp+48h] [bp-30h]@3

  v4 = a2;
  v5 = a4;
  v6 = (Json::Value *)Json::Value::operator[](a1, a3);
  if ( !Json::Value::isNull(v6) )
  {
    if ( Json::Value::isArray(v6) == 1 )
    {
      Json::Value::begin((Json::Value *)&v51, (int)v6);
      Json::Value::end((Json::Value *)&v50, (int)v6);
      while ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v51, (const Json::ValueIteratorBase *)&v50) )
      {
        v25 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v51);
        if ( Json::Value::isString(v25) == 1 )
        {
          sub_21E94B4((void **)&v45, v5);
          Json::Value::asString(&v46, (int)v25, &v45);
          EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v47, &v46);
          v26 = (void *)(v46 - 12);
          if ( (int *)(v46 - 12) != &dword_28898C0 )
          {
            v15 = (unsigned int *)(v46 - 4);
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
              j_j_j_j__ZdlPv_9(v26);
          }
          v27 = (void *)(v45 - 12);
          if ( (int *)(v45 - 12) != &dword_28898C0 )
            v17 = (unsigned int *)(v45 - 4);
                v18 = __ldrex(v17);
              while ( __strex(v18 - 1, v17) );
              v18 = (*v17)--;
            if ( v18 <= 0 )
              j_j_j_j__ZdlPv_9(v27);
          v28 = *(_QWORD *)(v4 + 4);
          if ( (_DWORD)v28 == HIDWORD(v28) )
            std::vector<EntityDefinitionIdentifier,std::allocator<EntityDefinitionIdentifier>>::_M_emplace_back_aux<EntityDefinitionIdentifier&>(
              (unsigned __int64 *)v4,
              &v47);
          else
            EntityDefinitionIdentifier::EntityDefinitionIdentifier((int *)v28, &v47);
            *(_DWORD *)(v4 + 4) += 12;
          v29 = (void *)(v49 - 12);
          if ( (int *)(v49 - 12) != &dword_28898C0 )
            v19 = (unsigned int *)(v49 - 4);
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j__ZdlPv_9(v29);
          v30 = (void *)(v48 - 12);
          if ( (int *)(v48 - 12) != &dword_28898C0 )
            v21 = (unsigned int *)(v48 - 4);
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
              v22 = (*v21)--;
            if ( v22 <= 0 )
              j_j_j_j__ZdlPv_9(v30);
          v31 = (void *)(v47 - 12);
          if ( (int *)(v47 - 12) != &dword_28898C0 )
            v23 = (unsigned int *)(v47 - 4);
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
              v24 = (*v23)--;
            if ( v24 <= 0 )
              j_j_j_j__ZdlPv_9(v31);
        }
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v51);
        Json::Value::end((Json::Value *)&v50, (int)v6);
      }
    }
    else if ( Json::Value::isString(v6) == 1 )
      sub_21E94B4((void **)&v40, v5);
      Json::Value::asString(&v41, (int)v6, &v40);
      EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v42, &v41);
      v7 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v41 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      v8 = (void *)(v40 - 12);
      if ( (int *)(v40 - 12) != &dword_28898C0 )
        v34 = (unsigned int *)(v40 - 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      v9 = *(_QWORD *)(v4 + 4);
      if ( (_DWORD)v9 == HIDWORD(v9) )
        std::vector<EntityDefinitionIdentifier,std::allocator<EntityDefinitionIdentifier>>::_M_emplace_back_aux<EntityDefinitionIdentifier&>(
          (unsigned __int64 *)v4,
          &v42);
      else
        EntityDefinitionIdentifier::EntityDefinitionIdentifier((int *)v9, &v42);
        *(_DWORD *)(v4 + 4) += 12;
      v10 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v44 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v11 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v43 - 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v12 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v42 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
  }
}
