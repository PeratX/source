

signed int __fastcall Automation::AutomationClient::isSubscribedtoEvent(int a1, const void **a2)
{
  int v2; // r11@1
  const void **v3; // r8@1
  int v4; // r1@1
  int v5; // r9@1
  int v6; // r7@1
  const void *v7; // r5@2
  int v8; // r10@2
  size_t v9; // r4@2
  _DWORD *v10; // r0@4
  size_t v11; // r6@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r4@13
  unsigned int v16; // r5@13
  size_t v17; // r2@13
  int v18; // r0@15
  signed int result; // r0@20

  v2 = a1 + 676;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 680);
  v5 = a1 + 676;
  v6 = a1 + 676;
  if ( v4 )
  {
    v7 = *v3;
    v8 = a1 + 676;
    v9 = *((_DWORD *)*v3 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v6 != v2 )
    v14 = *(_DWORD **)(v6 + 16);
    v15 = *((_DWORD *)*v3 - 3);
    v16 = *(v14 - 3);
    v17 = *((_DWORD *)*v3 - 3);
    if ( v15 > v16 )
      v17 = *(v14 - 3);
    v18 = memcmp(*v3, v14, v17);
    if ( !v18 )
      v18 = v15 - v16;
    if ( v18 < 0 )
      v6 = v2;
    v5 = v6;
  result = 0;
  if ( v5 != v2 )
    result = 1;
  return result;
}


int __fastcall Automation::MessageHeader::MessageHeader(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


int __fastcall Automation::AutomationClient::setServerRetryTime(int result, float a2)
{
  *(float *)(result + 748) = a2;
  return result;
}


Json::Value *__fastcall Automation::MessageHeader::serialize(Automation::MessageHeader *this, int a2)
{
  int v2; // r5@1
  Automation::MessageHeader *v3; // r4@1
  int v4; // r6@1
  int v5; // r6@1
  void *v6; // r0@1
  int v7; // r6@2
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int v11; // [sp+0h] [bp-50h]@2
  int v12; // [sp+14h] [bp-3Ch]@1
  char v13; // [sp+18h] [bp-38h]@1
  char v14; // [sp+28h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  Json::Value::Value(this, 0);
  v4 = Json::Value::operator[](v3, (const char *)Automation::RequestId);
  Json::Value::Value((int)&v14, (const char **)v2);
  Json::Value::operator=(v4, (const Json::Value *)&v14);
  Json::Value::~Value((Json::Value *)&v14);
  v5 = Json::Value::operator[](v3, (const char *)Automation::MsgPurpose);
  Automation::MessagePurposeTypeToString((void **)&v12, *(_BYTE *)(v2 + 4));
  Json::Value::Value((int)&v13, (const char **)&v12);
  Json::Value::operator=(v5, (const Json::Value *)&v13);
  Json::Value::~Value((Json::Value *)&v13);
  v6 = (void *)(v12 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = Json::Value::operator[](v3, (const char *)Automation::VersionData);
  Json::Value::Value((Json::Value *)&v11, *(_DWORD *)(v2 + 8));
  Json::Value::operator=(v7, (const Json::Value *)&v11);
  return Json::Value::~Value((Json::Value *)&v11);
}


Json::Value *__fastcall Automation::Response::slashCommandInitiated(_DWORD *a1, int *a2)
{
  _DWORD *v2; // r4@1
  int *v3; // r6@1
  Json::Value *v4; // r0@1
  int v5; // r5@1
  void *v6; // r0@1
  int v7; // r5@2
  int v8; // r0@2
  int v9; // r0@2
  void *v10; // r0@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  void *v16; // [sp+0h] [bp-78h]@2
  void **v17; // [sp+4h] [bp-74h]@2
  int v18; // [sp+8h] [bp-70h]@2
  char v19; // [sp+10h] [bp-68h]@2
  char v20; // [sp+20h] [bp-58h]@2
  int v21; // [sp+34h] [bp-44h]@1
  char v22; // [sp+40h] [bp-38h]@1
  char v23; // [sp+50h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v4 = (Json::Value *)Json::Value::Value(&v23, 0);
  v5 = Json::Value::operator[](v4, (const char *)Automation::Header);
  Automation::MessageHeader::MessageHeader(&v21, v3, 4, 1);
  Automation::MessageHeader::serialize((Automation::MessageHeader *)&v22, (int)&v21);
  Json::Value::operator=(v5, (const Json::Value *)&v22);
  Json::Value::~Value((Json::Value *)&v22);
  v6 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v21 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  Json::Value::Value(&v20, 0);
  v7 = Json::Value::operator[]((Json::Value *)&v20, (const char *)Automation::StatusCode);
  v8 = MCRESULT::getFullCode((MCRESULT *)&MCRESULT_CommandRequestInitiated);
  Json::Value::Value((Json::Value *)&v19, v8);
  Json::Value::operator=(v7, (const Json::Value *)&v19);
  Json::Value::~Value((Json::Value *)&v19);
  v9 = Json::Value::operator[]((Json::Value *)&v23, (const char *)Automation::Body);
  Json::Value::operator=(v9, (const Json::Value *)&v20);
  Json::FastWriter::FastWriter((Json::FastWriter *)&v17);
  Json::FastWriter::write((Json::FastWriter *)&v16, (const Json::Value *)&v17, (const Json::Value *)&v23);
  *v2 = v16;
  v16 = &unk_28898CC;
  v17 = &off_2725B14;
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  Json::Writer::~Writer((Json::Writer *)&v17);
  Json::Value::~Value((Json::Value *)&v20);
  return Json::Value::~Value((Json::Value *)&v23);
}


int __fastcall Automation::AutomationClient::_handleOnClose(int a1, int a2)
{
  signed int v2; // r2@1
  int v3; // r8@1
  signed int v4; // r0@3
  int v5; // r5@5
  void (__cdecl *v6)(_DWORD); // r6@5
  _DWORD *v7; // r0@5
  _DWORD *v8; // r4@5
  _DWORD *v9; // r7@5
  int result; // r0@13
  _DWORD *v11; // [sp+0h] [bp-28h]@5
  int (__fastcall *v12)(void **, _QWORD **, int); // [sp+8h] [bp-20h]@5
  void *v13; // [sp+Ch] [bp-1Ch]@5

  v2 = 0;
  v3 = a1;
  if ( a2 == 4999 )
    v2 = 1;
  v4 = 0;
  *(_BYTE *)(v3 + 716) = v2;
  if ( a2 == 1000 )
    v4 = 1;
  v5 = v2 | v4;
  v6 = (void (__cdecl *)(_DWORD))sub_1656D64;
  v7 = operator new(8u);
  *v7 = v3 + 712;
  v7[1] = v5;
  v11 = v7;
  v12 = sub_1656D64;
  v13 = &loc_1656D4A;
  v8 = (_DWORD *)(*(_QWORD *)(v3 + 700) >> 32);
  v9 = (_DWORD *)*(_QWORD *)(v3 + 700);
  if ( v9 == v8 )
    goto LABEL_17;
  do
  {
    if ( !v6 )
      sub_21E5F48();
    ((void (__fastcall *)(_DWORD **, _DWORD))v13)(&v11, *v9);
    v6 = (void (__cdecl *)(_DWORD))v12;
    ++v9;
  }
  while ( v8 != v9 );
  if ( v12 )
LABEL_17:
    v6(&v11);
  __dmb();
  *(_BYTE *)(v3 + 732) = 0;
  result = *(_DWORD *)(v3 + 736);
  *(_DWORD *)(v3 + 736) = 0;
  if ( result )
    result = (*(int (__cdecl **)(int))(*(_DWORD *)result + 4))(result);
  return result;
}


void __fastcall Automation::AutomationClient::_subscribeToEvent(Automation::AutomationClient *this, const Json::Value *a2)
{
  Automation::AutomationClient *v2; // r8@1
  void *v3; // r0@1
  void *v4; // r4@1
  size_t v5; // r7@1
  int v6; // r1@2
  int v7; // r6@3
  size_t v8; // r2@3
  _DWORD *v9; // r1@3
  size_t v10; // r5@3
  int v11; // r0@5
  int *v12; // r1@5
  bool v13; // zf@10
  bool v14; // nf@10
  unsigned __int8 v15; // vf@10
  int v16; // r0@10
  _DWORD *v17; // r0@16
  size_t v18; // r5@16
  size_t v19; // r2@16
  int v20; // r0@18
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  void *s1; // [sp+4h] [bp-24h]@1

  v2 = this;
  v3 = Json::Value::operator[]((int)a2, "eventName");
  Json::Value::asString((int *)&s1, (int)v3, (int *)&Util::EMPTY_STRING);
  v4 = s1;
  v5 = *((_DWORD *)s1 - 3);
  if ( !v5 )
    goto LABEL_23;
  v6 = *((_DWORD *)v2 + 170);
  if ( v6 )
  {
    do
    {
      v7 = v6;
      v8 = v5;
      v9 = *(_DWORD **)(v6 + 16);
      v10 = *(v9 - 3);
      if ( v5 > v10 )
        v8 = *(v9 - 3);
      v11 = memcmp(v4, v9, v8);
      v12 = (int *)(v7 + 12);
      if ( !v11 )
        v11 = v5 - v10;
      if ( v11 < 0 )
        v12 = (int *)(v7 + 8);
      v6 = *v12;
    }
    while ( v6 );
    v15 = __OFSUB__(v11, -1);
    v13 = v11 == -1;
    v14 = v11 + 1 < 0;
    v16 = v7;
    if ( !((unsigned __int8)(v14 ^ v15) | v13) )
      goto LABEL_16;
  }
  else
    v7 = (int)v2 + 676;
  if ( v7 == *((_DWORD *)v2 + 171) )
LABEL_21:
    if ( v7 )
      std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_insert_<std::string const&>(
        (int)v2 + 672,
        0,
        v7,
        (const void **)&s1);
      v4 = s1;
  v16 = sub_21D4858(v7);
LABEL_16:
  v17 = *(_DWORD **)(v16 + 16);
  v18 = *(v17 - 3);
  v19 = *(v17 - 3);
  if ( v18 > v5 )
    v19 = v5;
  v20 = memcmp(v17, v4, v19);
  if ( !v20 )
    v20 = v18 - v5;
  if ( v20 <= -1 )
    goto LABEL_21;
LABEL_23:
  if ( (int *)((char *)v4 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)((char *)v4 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9((char *)v4 - 12);
}


signed int __fastcall Automation::AutomationClient::connect(int a1, int *a2, unsigned __int64 *a3)
{
  int v3; // r4@1
  unsigned __int8 *v4; // r7@1
  unsigned __int64 *v5; // r6@1
  unsigned int v6; // r2@2
  char *v7; // r0@5
  int v8; // r0@7
  _DWORD *v9; // r0@9
  size_t v10; // r2@9
  int v11; // r0@10
  int *v12; // r1@10
  int v13; // r0@11
  void (*v14)(void); // r3@14
  int *v15; // r5@14 OVERLAPPED
  int *v16; // r6@14 OVERLAPPED
  int v17; // r4@22
  char *v18; // r9@23
  size_t v19; // r2@23
  char *v20; // r6@23
  signed int v21; // r5@24
  void *v22; // r0@26
  unsigned int *v23; // r2@27
  signed int v24; // r1@29
  void (*v25)(void); // r3@34
  __int64 v26; // r6@34
  int v27; // r0@43
  char *v28; // r0@46
  unsigned int *v30; // r2@48
  signed int v31; // r1@50
  unsigned int *v32; // r1@52
  signed int v33; // r0@54
  unsigned int *v34; // r2@59
  signed int v35; // r1@61
  int v36; // [sp+8h] [bp-58h]@45
  void *v37; // [sp+Ch] [bp-54h]@34
  int (__fastcall *v38)(void **, void **, int); // [sp+14h] [bp-4Ch]@34
  int (__fastcall *v39)(int, int); // [sp+18h] [bp-48h]@34
  void *s1; // [sp+1Ch] [bp-44h]@23
  int v41; // [sp+24h] [bp-3Ch]@26
  char *v42; // [sp+28h] [bp-38h]@5
  void *s2; // [sp+2Ch] [bp-34h]@4
  void *v44; // [sp+30h] [bp-30h]@14
  int (__fastcall *v45)(void **, void **, int); // [sp+38h] [bp-28h]@14
  int (__fastcall *v46)(int, int); // [sp+3Ch] [bp-24h]@14

  v3 = a1;
  v4 = (unsigned __int8 *)(a1 + 732);
  v5 = a3;
  __dmb();
  while ( 1 )
  {
    v6 = __ldrex(v4);
    if ( v6 )
      break;
    if ( !__strex(1u, v4) )
    {
      __dmb();
      Util::stringTrim((int *)&s2, a2);
      if ( sub_21E76A0((int *)&s2, "://", 0, 3u) == -1 )
      {
        v42 = (char *)&unk_28898CC;
        sub_21E6FCC((const void **)&v42, *((_DWORD *)s2 - 3) + 5);
        sub_21E7408((const void **)&v42, "ws://", 5u);
        sub_21E72F0((const void **)&v42, (const void **)&s2);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&s2,
          (int *)&v42);
        v7 = v42 - 12;
        if ( (int *)(v42 - 12) != &dword_28898C0 )
        {
          v34 = (unsigned int *)(v42 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
          }
          else
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
      }
      if ( RakWebSocketClient::isDisconnected((RakWebSocketClient *)(v3 + 4)) == 1 )
        v8 = *(_DWORD *)(v3 + 736);
        *(_DWORD *)(v3 + 736) = 0;
        if ( v8 )
          (*(void (**)(void))(*(_DWORD *)v8 + 4))();
        v9 = *(_DWORD **)(v3 + 712);
        v10 = *(v9 - 3);
        if ( v10 == *((_DWORD *)s2 - 3) )
          v11 = memcmp(v9, s2, v10);
          v12 = (int *)(v3 + 724);
          if ( v11 )
            v13 = 0;
            v13 = *v12 + 1;
        else
          v13 = 0;
        *v12 = v13;
        *(_DWORD *)(v3 + 728) = 0;
        EntityInteraction::setInteractText((int *)(v3 + 712), (int *)&s2);
        sub_21E94B4((void **)&v41, (const char *)s2);
        v17 = RakWebSocketClient::connect((RakWebSocketClient *)(v3 + 4), &v41, v5);
        v22 = (void *)(v41 - 12);
        if ( (int *)(v41 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v41 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            goto LABEL_74;
LABEL_73:
          v24 = (*v23)--;
LABEL_74:
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
      else
        RakWebSocketClient::getUri((RakWebSocketClient *)&s1, v3 + 4);
        v18 = (char *)s1;
        v20 = (char *)s1 - 12;
        v19 = *((_DWORD *)s1 - 3);
        if ( v19 == *((_DWORD *)s2 - 3) )
          v21 = memcmp(s1, s2, v19) != 0;
          v21 = 1;
        if ( (int *)v20 != &dword_28898C0 )
          v32 = (unsigned int *)(v18 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        if ( v21 == 1 )
          RakWebSocketClient::close((RakWebSocketClient *)(v3 + 4), 1, 0);
          v37 = operator new(1u);
          v25 = (void (*)(void))sub_1656BB0;
          v38 = sub_1656BB0;
          v39 = sub_1656BA8;
          v26 = *(_QWORD *)(v3 + 700);
          if ( (_DWORD)v26 == HIDWORD(v26) )
            goto LABEL_78;
          do
            if ( !v25 )
              sub_21E5F48();
            v39((int)&v37, *(_DWORD *)v26);
            v25 = (void (*)(void))v38;
            LODWORD(v26) = v26 + 4;
          while ( HIDWORD(v26) != (_DWORD)v26 );
          if ( v38 )
LABEL_78:
            v25();
          v27 = *(_DWORD *)(v3 + 736);
          *(_DWORD *)(v3 + 736) = 0;
          if ( v27 )
            (*(void (**)(void))(*(_DWORD *)v27 + 4))();
          *(_DWORD *)(v3 + 724) = 0;
          *(_DWORD *)(v3 + 728) = 0;
          EntityInteraction::setInteractText((int *)(v3 + 712), (int *)&s2);
          sub_21E94B4((void **)&v36, (const char *)s2);
          v17 = RakWebSocketClient::connect((RakWebSocketClient *)(v3 + 4), &v36);
          v22 = (void *)(v36 - 12);
          if ( (int *)(v36 - 12) != &dword_28898C0 )
            v23 = (unsigned int *)(v36 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
              goto LABEL_74;
            }
            goto LABEL_73;
          __dmb();
          *v4 = 0;
          v17 = 3;
      v28 = (char *)s2 - 12;
      if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)((char *)s2 - 4);
        if ( &pthread_create )
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      return v17;
    }
  }
  __clrex();
  v44 = operator new(1u);
  v14 = (void (*)(void))sub_1656B7A;
  v45 = sub_1656B7A;
  v46 = sub_1656B72;
  *(_QWORD *)&v15 = *(_QWORD *)(v3 + 700);
  if ( v15 == v16 )
    goto LABEL_79;
  do
    if ( !v14 )
      sub_21E5F48();
    v46((int)&v44, *v15);
    v14 = (void (*)(void))v45;
    ++v15;
  while ( v16 != v15 );
  if ( v45 )
LABEL_79:
    v14();
  return 2;
}


_DWORD *__fastcall Automation::AutomationClient::AutomationClient(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5@1
  int v3; // r6@1
  _DWORD *v4; // r4@1
  RakTcpProxy *v5; // r7@1
  _DWORD *v6; // r0@3
  __int64 v7; // r1@3
  _DWORD *v8; // r0@5
  __int64 v9; // r1@5
  _DWORD *v10; // r0@7
  __int64 v11; // r1@7
  _DWORD *v13; // [sp+4h] [bp-74h]@7
  __int64 v14; // [sp+Ch] [bp-6Ch]@7
  _DWORD *v15; // [sp+14h] [bp-64h]@5
  __int64 v16; // [sp+1Ch] [bp-5Ch]@5
  _DWORD *v17; // [sp+24h] [bp-54h]@3
  __int64 v18; // [sp+2Ch] [bp-4Ch]@3
  RakTcpProxy *v19; // [sp+34h] [bp-44h]@1

  v2 = a1;
  v3 = a2;
  *a1 = &off_26EC370;
  v4 = a1 + 1;
  v5 = (RakTcpProxy *)operator new(8u);
  RakTcpProxy::RakTcpProxy(v5);
  v19 = v5;
  RakWebSocketClient::RakWebSocketClient((int)v4, (int *)&v19);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v19 = 0;
  v2[155] = v3;
  _aeabi_memclr4(v2 + 156, 44);
  MPMCQueue<std::pair<std::unique_ptr<CommandOrigin,std::default_delete<CommandOrigin>>,Json::Value>>::MPMCQueue((int)(v2 + 156));
  v2[167] = 100;
  v2[169] = 0;
  v2[170] = 0;
  v2[171] = 0;
  v2[172] = 0;
  v2[173] = 0;
  v2[171] = v2 + 169;
  v2[172] = v2 + 169;
  v2[175] = 0;
  v2[176] = 0;
  v2[177] = 0;
  v2[178] = &unk_28898CC;
  *((_BYTE *)v2 + 716) = 0;
  v2[180] = 20;
  v2[181] = 0;
  v2[182] = 0;
  *((_BYTE *)v2 + 732) = 0;
  v2[184] = 0;
  v2[185] = &unk_28898CC;
  *((_BYTE *)v2 + 744) = 0;
  v2[187] = 1106247680;
  v6 = operator new(0xCu);
  LODWORD(v7) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<void (Automation::AutomationClient::*)(RakWebSocketDataFrame const&)> ()(Automation::AutomationClient*,std::_Placeholder<1>)>>::_M_manager;
  HIDWORD(v7) = std::_Function_handler<void ()(RakWebSocketDataFrame const&),std::_Bind<std::_Mem_fn<void (Automation::AutomationClient::*)(RakWebSocketDataFrame const&)> ()(Automation::AutomationClient*,std::_Placeholder<1>)>>::_M_invoke;
  *v6 = Automation::AutomationClient::_handleIncomingMessage;
  v6[1] = 0;
  v6[2] = v2;
  v17 = v6;
  v18 = v7;
  RakWebSocketClient::setOnMessageReceivedHandler((int)v4, (int)&v17);
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
  v8 = operator new(0xCu);
  LODWORD(v9) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<void (Automation::AutomationClient::*)(CloseStatusCode,std::string const&)> ()(Automation::AutomationClient*,std::_Placeholder<1>,std::_Placeholder<2>)>>::_M_manager;
  HIDWORD(v9) = std::_Function_handler<void ()(CloseStatusCode,std::string const&),std::_Bind<std::_Mem_fn<void (Automation::AutomationClient::*)(CloseStatusCode,std::string const&)> ()(Automation::AutomationClient*,std::_Placeholder<1>,std::_Placeholder<2>)>>::_M_invoke;
  *v8 = Automation::AutomationClient::_handleOnClose;
  v8[1] = 0;
  v8[2] = v2;
  v15 = v8;
  v16 = v9;
  RakWebSocketClient::setOnCloseHandler((int)v4, (int)&v15);
  if ( (_DWORD)v16 )
    ((void (*)(void))v16)();
  v10 = operator new(0xCu);
  LODWORD(v11) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<void (Automation::AutomationClient::*)(std::string const&)> ()(Automation::AutomationClient*,std::_Placeholder<1>)>>::_M_manager;
  HIDWORD(v11) = std::_Function_handler<void ()(std::string const&),std::_Bind<std::_Mem_fn<void (Automation::AutomationClient::*)(std::string const&)> ()(Automation::AutomationClient*,std::_Placeholder<1>)>>::_M_invoke;
  *v10 = Automation::AutomationClient::_handleOnConnected;
  v10[1] = 0;
  v10[2] = v2;
  v13 = v10;
  v14 = v11;
  RakWebSocketClient::setOnConnectedHandler((int)v4, (int)&v13);
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
  return v2;
}


void __fastcall Automation::AutomationClient::_subscribeToEvent(Automation::AutomationClient *this, const Json::Value *a2)
{
  Automation::AutomationClient::_subscribeToEvent(this, a2);
}


void *__fastcall Automation::MessagePurposeTypeToString(void **a1, int a2)
{
  void *result; // r0@2

  switch ( a2 )
  {
    case 1:
      result = sub_21E94B4(a1, "commandRequest");
      break;
    case 2:
      result = sub_21E94B4(a1, "subscribe");
    case 3:
      result = sub_21E94B4(a1, "unsubscribe");
    case 4:
      result = sub_21E94B4(a1, "commandResponse");
    case 5:
      result = sub_21E94B4(a1, "error");
    case 6:
      result = sub_21E94B4(a1, "event");
    default:
      result = sub_21E8AF4((int *)a1, (int *)&Util::EMPTY_STRING);
  }
  return result;
}


Json::Value *__fastcall Automation::Response::requestError(_DWORD *a1, int *a2, MCRESULT *a3, const char **a4)
{
  _DWORD *v4; // r8@1
  int *v5; // r4@1
  const char **v6; // r5@1
  MCRESULT *v7; // r6@1
  Json::Value *v8; // r0@1
  int v9; // r7@1
  void *v10; // r0@1
  int v11; // r4@2
  int v12; // r0@2
  int v13; // r4@2
  int v14; // r0@2
  void *v15; // r0@2
  unsigned int *v17; // r2@4
  signed int v18; // r1@6
  unsigned int *v19; // r2@8
  signed int v20; // r1@10
  void *v21; // [sp+0h] [bp-90h]@2
  void **v22; // [sp+4h] [bp-8Ch]@2
  int v23; // [sp+8h] [bp-88h]@2
  char v24; // [sp+10h] [bp-80h]@2
  char v25; // [sp+20h] [bp-70h]@2
  char v26; // [sp+30h] [bp-60h]@2
  int v27; // [sp+44h] [bp-4Ch]@1
  char v28; // [sp+50h] [bp-40h]@1
  char v29; // [sp+60h] [bp-30h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (Json::Value *)Json::Value::Value(&v29, 0);
  v9 = Json::Value::operator[](v8, (const char *)Automation::Header);
  Automation::MessageHeader::MessageHeader(&v27, v5, 5, 1);
  Automation::MessageHeader::serialize((Automation::MessageHeader *)&v28, (int)&v27);
  Json::Value::operator=(v9, (const Json::Value *)&v28);
  Json::Value::~Value((Json::Value *)&v28);
  v10 = (void *)(v27 - 12);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  Json::Value::Value(&v26, 0);
  v11 = Json::Value::operator[]((Json::Value *)&v26, (const char *)Automation::StatusCode);
  v12 = MCRESULT::getFullCode(v7);
  Json::Value::Value((Json::Value *)&v25, v12);
  Json::Value::operator=(v11, (const Json::Value *)&v25);
  Json::Value::~Value((Json::Value *)&v25);
  v13 = Json::Value::operator[]((Json::Value *)&v26, (const char *)Automation::StatusMsg);
  Json::Value::Value((int)&v24, v6);
  Json::Value::operator=(v13, (const Json::Value *)&v24);
  Json::Value::~Value((Json::Value *)&v24);
  v14 = Json::Value::operator[]((Json::Value *)&v29, (const char *)Automation::Body);
  Json::Value::operator=(v14, (const Json::Value *)&v26);
  Json::FastWriter::FastWriter((Json::FastWriter *)&v22);
  Json::FastWriter::write((Json::FastWriter *)&v21, (const Json::Value *)&v22, (const Json::Value *)&v29);
  *v4 = v21;
  v21 = &unk_28898CC;
  v22 = &off_2725B14;
  v15 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v23 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  Json::Writer::~Writer((Json::Writer *)&v22);
  Json::Value::~Value((Json::Value *)&v26);
  return Json::Value::~Value((Json::Value *)&v29);
}


Automation::AutomationClient *__fastcall Automation::AutomationClient::~AutomationClient(Automation::AutomationClient *this)
{
  Automation::AutomationClient *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  int v5; // r1@4
  void *v6; // r0@4
  char *v7; // r5@5 OVERLAPPED
  char *v8; // r6@5 OVERLAPPED
  int v9; // r1@10
  int v10; // r2@10
  int v11; // r3@10
  int v12; // r7@10
  __int64 v13; // kr00_8@10
  int v14; // r12@10
  void *v15; // r0@10
  unsigned int v16; // r6@11
  unsigned int v17; // r1@11
  unsigned int v18; // r7@12
  void *v19; // t1@13
  unsigned int *v21; // r2@17
  signed int v22; // r1@19
  unsigned int *v23; // r2@21
  signed int v24; // r1@23
  int v25; // [sp+4h] [bp-34h]@10
  __int64 v26; // [sp+8h] [bp-30h]@10
  int v27; // [sp+10h] [bp-28h]@10
  int v28; // [sp+14h] [bp-24h]@10
  int v29; // [sp+18h] [bp-20h]@10
  int v30; // [sp+1Ch] [bp-1Ch]@10
  int v31; // [sp+20h] [bp-18h]@10

  v1 = this;
  *(_DWORD *)this = &off_26EC370;
  v2 = *((_DWORD *)this + 185);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 184);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 184) = 0;
  v5 = *((_DWORD *)v1 + 178);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v5 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  *(_QWORD *)&v7 = *(_QWORD *)((char *)v1 + 700);
  if ( v7 != v8 )
    do
      *(_DWORD *)(*(_DWORD *)v7 + 4) = 0;
      (*(void (**)(void))(**(_DWORD **)v7 + 8))();
      v7 += 4;
    while ( v8 != v7 );
    v7 = (char *)*((_DWORD *)v1 + 175);
  if ( v7 )
    operator delete(v7);
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)v1 + 672,
    *((_DWORD *)v1 + 170));
  v9 = *((_DWORD *)v1 + 159);
  v10 = *((_DWORD *)v1 + 160);
  v11 = *((_DWORD *)v1 + 161);
  v12 = *((_DWORD *)v1 + 162);
  v13 = *(_QWORD *)((char *)v1 + 652);
  v14 = *((_DWORD *)v1 + 165);
  v28 = *((_DWORD *)v1 + 158);
  v29 = v9;
  v30 = v10;
  v31 = v11;
  v25 = v12;
  v26 = v13;
  v27 = v14;
  std::deque<std::pair<std::unique_ptr<CommandOrigin,std::default_delete<CommandOrigin>>,Json::Value>,std::allocator<std::pair<std::unique_ptr<CommandOrigin,std::default_delete<CommandOrigin>>,Json::Value>>>::_M_destroy_data_aux(
    (int)v1 + 624,
    (int)&v28,
    (int)&v25);
  v15 = (void *)*((_DWORD *)v1 + 156);
  if ( v15 )
    v16 = *((_DWORD *)v1 + 165);
    v17 = *((_DWORD *)v1 + 161);
    if ( v17 < v16 + 4 )
      v18 = v17 - 4;
      {
        v19 = *(void **)(v18 + 4);
        v18 += 4;
        operator delete(v19);
      }
      while ( v18 < v16 );
      v15 = (void *)*((_DWORD *)v1 + 156);
    operator delete(v15);
  RakWebSocketClient::~RakWebSocketClient((Automation::AutomationClient *)((char *)v1 + 4));
  return v1;
}


signed int __fastcall Automation::MessagePurposeTypeFromString(const void **a1)
{
  const void **v1; // r4@1
  int v2; // r0@6
  char v3; // r1@6
  signed int result; // r0@8

  v1 = a1;
  if ( sub_21E7D6C(a1, "commandRequest") )
  {
    if ( sub_21E7D6C(v1, "subscribe") )
    {
      if ( sub_21E7D6C(v1, "unsubscribe") )
      {
        if ( sub_21E7D6C(v1, "commandResponse") )
        {
          if ( sub_21E7D6C(v1, "error") )
          {
            v2 = sub_21E7D6C(v1, "event");
            v3 = 0;
            if ( !v2 )
              v3 = 6;
            result = (unsigned __int8)v3;
          }
          else
            result = 5;
        }
        else
          result = 4;
      }
      else
        result = 3;
    }
    else
      result = 2;
  }
  else
    result = 1;
  return result;
}


signed int __fastcall Automation::AutomationClient::connect(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  signed int v4; // r9@3
  void *v5; // r5@3
  void *v6; // r7@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  int *v9; // r0@13
  void *v11; // [sp+4h] [bp-34h]@1
  void *v12; // [sp+8h] [bp-30h]@1
  int v13; // [sp+Ch] [bp-2Ch]@1

  v2 = a1;
  v11 = 0;
  v12 = 0;
  v3 = a2;
  v13 = 0;
  if ( *(_BYTE *)(a1 + 744) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v11,
      (int *)&unk_27F77A4);
  v4 = Automation::AutomationClient::connect(v2, v3, (unsigned __int64 *)&v11);
  v6 = v12;
  v5 = v11;
  if ( v11 != v12 )
  {
    do
    {
      v9 = (int *)(*(_DWORD *)v5 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*(_DWORD *)v5 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v5 = (char *)v5 + 4;
    }
    while ( v5 != v6 );
    v5 = v11;
  }
  if ( v5 )
    operator delete(v5);
  return v4;
}


int __fastcall Automation::AutomationClient::setRequireEncryption(int result, bool a2)
{
  *(_BYTE *)(result + 744) = a2;
  return result;
}


_DWORD *__fastcall Automation::Response::Response(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  *a2 = &unk_28898CC;
  return result;
}


void __fastcall Automation::AutomationClient::_errorEncryptionRequired(Automation::AutomationClient *a1, int *a2)
{
  int *v2; // r5@1
  Automation::AutomationClient *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  int v13; // [sp+8h] [bp-20h]@1
  int v14; // [sp+Ch] [bp-1Ch]@1
  int v15; // [sp+10h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v13, "commands.generic.encryption.required");
  I18n::get(&v14, (int **)&v13);
  Automation::Response::requestError(&v15, v2, (MCRESULT *)&MCRESULT_EncryptionRequired, (const char **)&v14);
  Automation::AutomationClient::send(v3, (const Automation::Response *)&v15);
  v4 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v14 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


void __fastcall Automation::AutomationClient::onUri(Automation::AutomationClient *this, const ActivationUri *a2)
{
  Automation::AutomationClient::onUri(this, a2);
}


Json::Reader *__fastcall Automation::Response::getRequestId(Automation::Response *this, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1
  const Json::Value *v4; // r0@2
  Automation::MessageHeader *v5; // r2@3
  signed int v6; // r6@4
  void *v7; // r0@6
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  int v11; // [sp+8h] [bp-B8h]@3
  int v12; // [sp+Ch] [bp-B4h]@3
  char v13; // [sp+18h] [bp-A8h]@2
  char v14; // [sp+28h] [bp-98h]@1
  char v15; // [sp+3Ch] [bp-84h]@1

  v2 = (int *)this;
  v3 = a2;
  Json::Reader::Reader((Json::Reader *)&v15);
  Json::Value::Value(&v14, 0);
  Json::Reader::parse((int)&v15, v3, (int)&v14, 1);
  if ( Json::Value::isNull((Json::Value *)&v14) )
    goto LABEL_10;
  v4 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v14, (const char *)Automation::Header);
  Json::Value::Value((Json::Value *)&v13, v4);
  if ( Json::Value::isNull((Json::Value *)&v13) )
    goto LABEL_22;
  Automation::MessageHeader::MessageHeader((Automation::MessageHeader *)&v12);
  v11 = Automation::MessageHeader::deserialize((Automation::MessageHeader *)&v13, (Json::Value *)&v12, v5);
  if ( MCRESULT::operator==(&v11, (int)&MCRESULT_Success) == 1 )
  {
    sub_21E8AF4(v2, &v12);
    v6 = 1;
  }
  else
    v6 = 0;
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
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
  if ( !v6 )
LABEL_22:
    Json::Value::~Value((Json::Value *)&v13);
LABEL_10:
    sub_21E94B4((void **)v2, (const char *)&unk_257BC67);
    goto LABEL_11;
  Json::Value::~Value((Json::Value *)&v13);
LABEL_11:
  Json::Value::~Value((Json::Value *)&v14);
  return Json::Reader::~Reader((Json::Reader *)&v15);
}


int *__fastcall Automation::MessageHeader::MessageHeader(int *a1, int *a2, char a3, int a4)
{
  int v4; // r4@1
  char v5; // r5@1
  int *result; // r0@1

  v4 = a4;
  v5 = a3;
  result = sub_21E8AF4(a1, a2);
  *((_BYTE *)result + 4) = v5;
  result[2] = v4;
  return result;
}


Json::Value *__fastcall Automation::Response::createEvent(_DWORD *a1, const char **a2, const Json::Value *a3, const Json::Value *a4)
{
  _DWORD *v4; // r8@1
  const char **v5; // r7@1
  const Json::Value *v6; // r5@1
  const Json::Value *v7; // r6@1
  Json::Value *v8; // r0@1
  int v9; // r4@1
  void *v10; // r0@1
  int v11; // r4@2
  int v12; // r0@2
  int v13; // r0@2
  int v14; // r0@2
  void *v15; // r0@2
  unsigned int *v17; // r2@4
  signed int v18; // r1@6
  unsigned int *v19; // r2@8
  signed int v20; // r1@10
  void *v21; // [sp+0h] [bp-80h]@2
  void **v22; // [sp+4h] [bp-7Ch]@2
  int v23; // [sp+8h] [bp-78h]@2
  char v24; // [sp+10h] [bp-70h]@2
  char v25; // [sp+20h] [bp-60h]@2
  int v26; // [sp+34h] [bp-4Ch]@1
  char v27; // [sp+40h] [bp-40h]@1
  char v28; // [sp+50h] [bp-30h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (Json::Value *)Json::Value::Value(&v28, 0);
  v9 = Json::Value::operator[](v8, (const char *)Automation::Header);
  Automation::MessageHeader::MessageHeader(&v26, (int *)&Util::EMPTY_GUID, 6, 1);
  Automation::MessageHeader::serialize((Automation::MessageHeader *)&v27, (int)&v26);
  Json::Value::operator=(v9, (const Json::Value *)&v27);
  Json::Value::~Value((Json::Value *)&v27);
  v10 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v26 - 4);
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
  Json::Value::Value(&v25, 0);
  v11 = Json::Value::operator[]((Json::Value *)&v25, "eventName");
  Json::Value::Value((int)&v24, v5);
  Json::Value::operator=(v11, (const Json::Value *)&v24);
  Json::Value::~Value((Json::Value *)&v24);
  v12 = Json::Value::operator[]((Json::Value *)&v25, "properties");
  Json::Value::operator=(v12, v7);
  v13 = Json::Value::operator[]((Json::Value *)&v25, "measurements");
  Json::Value::operator=(v13, v6);
  v14 = Json::Value::operator[]((Json::Value *)&v28, (const char *)Automation::Body);
  Json::Value::operator=(v14, (const Json::Value *)&v25);
  Json::FastWriter::FastWriter((Json::FastWriter *)&v22);
  Json::FastWriter::write((Json::FastWriter *)&v21, (const Json::Value *)&v22, (const Json::Value *)&v28);
  *v4 = v21;
  v21 = &unk_28898CC;
  v22 = &off_2725B14;
  v15 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v23 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  Json::Writer::~Writer((Json::Writer *)&v22);
  Json::Value::~Value((Json::Value *)&v25);
  return Json::Value::~Value((Json::Value *)&v28);
}


void __fastcall Automation::AutomationClient::_unsubscribeToEvent(Automation::AutomationClient *this, const Json::Value *a2)
{
  Automation::AutomationClient::_unsubscribeToEvent(this, a2);
}


void __fastcall Automation::AutomationClient::send(Automation::AutomationClient *this, const Automation::Response *a2)
{
  Automation::AutomationClient::send(this, a2);
}


void __fastcall Automation::AutomationClient::_errorEncryptionRequired(Automation::AutomationClient *a1, int *a2)
{
  Automation::AutomationClient::_errorEncryptionRequired(a1, a2);
}


void __fastcall Automation::AutomationClient::send(Automation::AutomationClient *this, const Automation::Response *a2)
{
  Automation::AutomationClient *v2; // r5@1
  RakWebSocketClient *v3; // r4@1
  int *v4; // r6@1
  int v5; // r1@2
  char *v6; // r6@4
  signed int v7; // r9@4
  _DWORD *v8; // r1@4
  size_t v9; // r2@4
  char *v10; // r7@4
  unsigned __int8 *v11; // r0@12
  void *v12; // r0@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  unsigned int *v15; // r2@23
  signed int v16; // r1@25
  unsigned int *v17; // r1@27
  signed int v18; // r0@29
  unsigned __int8 *v19; // [sp+4h] [bp-2Ch]@12
  void *s1; // [sp+8h] [bp-28h]@4
  int v21; // [sp+Ch] [bp-24h]@2

  v2 = this;
  v3 = (Automation::AutomationClient *)((char *)this + 4);
  v4 = (int *)a2;
  if ( RakWebSocketClient::isReady((Automation::AutomationClient *)((char *)this + 4)) != 1 )
    return;
  Automation::Response::toString((Automation::Response *)&v21, v4);
  v5 = *((_DWORD *)v2 + 184);
  if ( !v5 )
    goto LABEL_10;
  if ( !*(_DWORD *)(*((_DWORD *)v2 + 185) - 12) )
  {
LABEL_12:
    (*(void (__fastcall **)(unsigned __int8 **))(*(_DWORD *)v5 + 12))(&v19);
    RakWebSocketClient::sendBinary(v3, v19, *((_DWORD *)v19 - 3));
    v11 = v19 - 12;
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
        j_j_j_j__ZdlPv_9(v11);
    }
    goto LABEL_13;
  }
  Automation::Response::getRequestId((Automation::Response *)&s1, v4);
  v6 = (char *)s1;
  v7 = 0;
  v8 = (_DWORD *)*((_DWORD *)v2 + 185);
  v10 = (char *)s1 - 12;
  v9 = *((_DWORD *)s1 - 3);
  if ( v9 == *(v8 - 3) && !memcmp(s1, v8, v9) )
    v7 = 1;
  if ( (int *)v10 != &dword_28898C0 )
    v17 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( !v7 )
    v5 = *((_DWORD *)v2 + 184);
    goto LABEL_12;
  sub_21E7EE0((const void **)v2 + 185, 0, *(_BYTE **)(*((_DWORD *)v2 + 185) - 12), 0);
LABEL_10:
  RakWebSocketClient::send((int)v3, &v21);
LABEL_13:
  v12 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v21 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


void __fastcall Automation::AutomationClient::~AutomationClient(Automation::AutomationClient *this)
{
  Automation::AutomationClient *v1; // r0@1

  v1 = Automation::AutomationClient::~AutomationClient(this);
  j_j_j__ZdlPv_6((void *)v1);
}


Json::Value *__fastcall Automation::Response::slashCommand(_DWORD *a1, int *a2, const Json::Value *a3)
{
  _DWORD *v3; // r4@1
  int *v4; // r7@1
  const Json::Value *v5; // r5@1
  Json::Value *v6; // r0@1
  int v7; // r6@1
  void *v8; // r0@1
  int v9; // r0@2
  void *v10; // r0@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  void *v16; // [sp+4h] [bp-54h]@2
  void **v17; // [sp+8h] [bp-50h]@2
  int v18; // [sp+Ch] [bp-4Ch]@2
  int v19; // [sp+14h] [bp-44h]@1
  char v20; // [sp+20h] [bp-38h]@1
  char v21; // [sp+30h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (Json::Value *)Json::Value::Value(&v21, 0);
  v7 = Json::Value::operator[](v6, (const char *)Automation::Header);
  Automation::MessageHeader::MessageHeader(&v19, v4, 4, 1);
  Automation::MessageHeader::serialize((Automation::MessageHeader *)&v20, (int)&v19);
  Json::Value::operator=(v7, (const Json::Value *)&v20);
  Json::Value::~Value((Json::Value *)&v20);
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v19 - 4);
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
  v9 = Json::Value::operator[]((Json::Value *)&v21, (const char *)Automation::Body);
  Json::Value::operator=(v9, v5);
  Json::FastWriter::FastWriter((Json::FastWriter *)&v17);
  Json::FastWriter::write((Json::FastWriter *)&v16, (const Json::Value *)&v17, (const Json::Value *)&v21);
  *v3 = v16;
  v16 = &unk_28898CC;
  v17 = &off_2725B14;
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  Json::Writer::~Writer((Json::Writer *)&v17);
  return Json::Value::~Value((Json::Value *)&v21);
}


void __fastcall Automation::AutomationClient::_handleOnConnected(int a1)
{
  int v1; // r4@1
  _DWORD *v2; // r0@1
  void (*v3)(void); // r3@1
  __int64 v4; // r6@1
  void *v5; // r0@9
  unsigned int *v6; // r2@11
  signed int v7; // r1@13
  _DWORD *v8; // [sp+4h] [bp-2Ch]@1
  void (*v9)(void); // [sp+Ch] [bp-24h]@1
  int (__fastcall *v10)(_DWORD **, int); // [sp+10h] [bp-20h]@1
  int v11; // [sp+14h] [bp-1Ch]@1

  v1 = a1;
  RakWebSocketClient::getUri((RakWebSocketClient *)&v11, a1 + 4);
  v2 = operator new(4u);
  *v2 = &v11;
  v3 = (void (*)(void))sub_1656DAC;
  v8 = v2;
  v9 = (void (*)(void))sub_1656DAC;
  v10 = sub_1656D9E;
  v4 = *(_QWORD *)(v1 + 700);
  if ( (_DWORD)v4 == HIDWORD(v4) )
    goto LABEL_21;
  do
  {
    if ( !v3 )
      sub_21E5F48();
    v10(&v8, *(_DWORD *)v4);
    v3 = v9;
    LODWORD(v4) = v4 + 4;
  }
  while ( HIDWORD(v4) != (_DWORD)v4 );
  if ( v9 )
LABEL_21:
    v3();
  __dmb();
  *(_BYTE *)(v1 + 732) = 0;
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v11 - 4);
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


void __fastcall Automation::AutomationClient::onUri(Automation::AutomationClient *this, const ActivationUri *a2)
{
  const ActivationUri *v2; // r9@1
  unsigned int v3; // r11@1
  __int64 v4; // kr00_8@1
  unsigned int v5; // r5@1
  int v6; // r8@1
  int v7; // r9@2
  _DWORD *v8; // r10@2
  int v9; // r6@2
  _DWORD *v10; // r1@4
  size_t v11; // r2@4
  int v12; // r7@6
  int v13; // r4@8
  signed int v14; // r1@12
  unsigned int v15; // r10@17
  unsigned int v16; // r8@17
  int v17; // r11@17
  int v18; // r4@17
  int v19; // r7@18
  _DWORD *v20; // r9@18
  int v21; // r5@18
  _DWORD *v22; // r1@20
  size_t v23; // r2@20
  int v24; // r6@22
  int v25; // r4@24
  unsigned int *v26; // r2@38
  signed int v27; // r1@40
  unsigned int *v28; // r2@42
  signed int v29; // r1@44
  const ActivationUri *v30; // [sp+0h] [bp-40h]@2
  Automation::AutomationClient *v31; // [sp+4h] [bp-3Ch]@1
  void *v32; // [sp+Ch] [bp-34h]@17
  int v33; // [sp+10h] [bp-30h]@12
  void *s1; // [sp+18h] [bp-28h]@1

  v2 = a2;
  v31 = this;
  sub_21E94B4(&s1, "maxWSServerRetries");
  v3 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v4 = *(_QWORD *)((char *)v2 + 4);
  v5 = v3 % (unsigned int)(*(_QWORD *)((char *)v2 + 4) >> 32);
  v6 = *(_DWORD *)(v4 + 4 * v5);
  if ( v6 )
  {
    v30 = v2;
    v7 = *(_DWORD *)v6;
    v8 = s1;
    v9 = *(_DWORD *)(*(_DWORD *)v6 + 12);
    while ( 1 )
    {
      if ( v9 == v3 )
      {
        v10 = *(_DWORD **)(v7 + 4);
        v11 = *(v8 - 3);
        if ( v11 == *(v10 - 3) && !memcmp(v8, v10, v11) )
          break;
      }
      v12 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 )
        v9 = *(_DWORD *)(v12 + 12);
        v6 = v7;
        v7 = *(_DWORD *)v7;
        if ( *(_DWORD *)(v12 + 12) % HIDWORD(v4) == v5 )
          continue;
      v13 = 0;
      v2 = v30;
      goto LABEL_10;
    }
    v2 = v30;
    if ( v6 )
      v13 = *(_DWORD *)v6;
    else
  }
  else
    v13 = 0;
LABEL_10:
  if ( v8 - 3 != &dword_28898C0 )
    v26 = v8 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v8 - 3);
  if ( v13 )
    Util::toInt<int,(void *)0>((unsigned int *)(v13 + 8), &v33);
    v14 = v33;
    if ( v33 <= 0 )
      v14 = 0;
    if ( v33 > 20 )
      v14 = 20;
    *((_DWORD *)v31 + 180) = v14;
  sub_21E94B4(&v32, "wsserver");
  v15 = sub_21B417C((int *)v32, *((_DWORD *)v32 - 3), -955291385);
  v16 = *(_QWORD *)((char *)v2 + 4) >> 32;
  v17 = v15 % v16;
  v18 = *(_DWORD *)(*(_QWORD *)((char *)v2 + 4) + 4 * v17);
  if ( v18 )
    v19 = *(_DWORD *)v18;
    v20 = v32;
    v21 = *(_DWORD *)(*(_DWORD *)v18 + 12);
      if ( v21 == v15 )
        v22 = *(_DWORD **)(v19 + 4);
        v23 = *(v20 - 3);
        if ( v23 == *(v22 - 3) && !memcmp(v20, v22, v23) )
      v24 = *(_DWORD *)v19;
      if ( !*(_DWORD *)v19 )
        v25 = 0;
        goto LABEL_34;
      v21 = *(_DWORD *)(v24 + 12);
      v18 = v19;
      v19 = *(_DWORD *)v19;
      if ( *(_DWORD *)(v24 + 12) % v16 != v17 )
    if ( v18 )
      v25 = *(_DWORD *)v18;
      v25 = 0;
    v25 = 0;
LABEL_34:
  if ( v20 - 3 != &dword_28898C0 )
    v28 = v20 - 1;
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v20 - 3);
  if ( v25 )
    Automation::AutomationClient::connect((int)v31, (int *)(v25 + 8));
}


int __fastcall Automation::AutomationClient::_createCommandOrigin(Automation::AutomationClient *this, const Automation::MessageHeader *a2, int *a3)
{
  const Automation::MessageHeader *v3; // r6@1
  Automation::AutomationClient *v4; // r4@1
  int *v5; // r5@1
  int v6; // r7@2
  void *v7; // r6@2
  int result; // r0@2
  Minecraft *v9; // r0@3
  Level *v10; // r0@3
  Entity *v11; // r7@4

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( (*(int (**)(void))(**((_DWORD **)a2 + 155) + 20))() == 1 )
  {
    v6 = (*(int (**)(void))(**((_DWORD **)v3 + 155) + 8))();
    v7 = operator new(0xCu);
    result = DedicatedServerCommandOrigin::DedicatedServerCommandOrigin((int)v7, v5, v6);
  }
  else
    v9 = (Minecraft *)(*(int (**)(void))(**((_DWORD **)v3 + 155) + 8))();
    v10 = (Level *)Minecraft::getLevel(v9);
    if ( v10
      && (v11 = (Entity *)Level::getPrimaryLocalPlayer(v10)) != 0
      && (!*((_BYTE *)v3 + 744) || *((_DWORD *)v3 + 184)) )
    {
      v7 = operator new(0xC0u);
      result = AutomationPlayerCommandOrigin::AutomationPlayerCommandOrigin((int)v7, v5, v11);
    }
    else
      v7 = operator new(8u);
      result = ClientAutomationCommandOrigin::ClientAutomationCommandOrigin((int)v7, v5);
  *(_DWORD *)v4 = v7;
  return result;
}


int __fastcall Automation::MessageHeader::deserialize(Automation::MessageHeader *this, Json::Value *a2, Automation::MessageHeader *a3)
{
  Automation::MessageHeader *v3; // r5@1
  Json::Value *v4; // r4@1
  Json::Value *v5; // r0@1
  int v6; // r6@2
  void *v7; // r0@2
  void *v8; // r0@3
  Json::Value *v9; // r0@4
  int v10; // r6@5
  void *v11; // r0@5
  void *v12; // r0@6
  Json::Value *v13; // r0@7
  Json::Value *v14; // r0@8
  char *v15; // r1@8
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  unsigned int *v23; // r2@33
  signed int v24; // r1@35
  int v25; // [sp+8h] [bp-28h]@5
  int v26; // [sp+Ch] [bp-24h]@5
  int v27; // [sp+14h] [bp-1Ch]@2
  int v28; // [sp+18h] [bp-18h]@2

  v3 = this;
  v4 = a2;
  v5 = (Json::Value *)Json::Value::operator[](this, (const char *)Automation::RequestId);
  if ( Json::Value::isString(v5) == 1 )
  {
    v6 = Json::Value::operator[](v3, (const char *)Automation::RequestId);
    sub_21E94B4((void **)&v27, (const char *)&unk_257BC67);
    Json::Value::asString(&v28, v6, &v27);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v4,
      &v28);
    v7 = (void *)(v28 - 12);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v27 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v9 = (Json::Value *)Json::Value::operator[](v3, (const char *)Automation::MsgPurpose);
    if ( Json::Value::isString(v9) )
      v10 = Json::Value::operator[](v3, (const char *)Automation::MsgPurpose);
      sub_21E94B4((void **)&v25, (const char *)&unk_257BC67);
      Json::Value::asString(&v26, v10, &v25);
      *((_BYTE *)v4 + 4) = Automation::MessagePurposeTypeFromString((const void **)&v26);
      v11 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v26 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      v12 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v25 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v13 = (Json::Value *)Json::Value::operator[](v3, (const char *)Automation::VersionData);
      if ( Json::Value::isIntegral(v13) )
        v14 = (Json::Value *)Json::Value::operator[](v3, (const char *)Automation::VersionData);
        *((_DWORD *)v4 + 2) = Json::Value::asInt(v14, 0);
        v15 = &MCRESULT_Success;
        v15 = &MCRESULT_MalformedRequest;
    else
      v15 = &MCRESULT_MalformedRequest;
  }
  else
    v15 = &MCRESULT_MalformedRequest;
  return *(_DWORD *)v15;
}


char *__fastcall Automation::AutomationClient::addObserver(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r8@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11
  char *v11; // r5@13
  int v12; // r5@15

  v2 = a2;
  v3 = a1;
  *(_DWORD *)(a2 + 4) = a1 + 696;
  v4 = *(_QWORD *)(a1 + 704);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = *(void **)(v3 + 700);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)(v3 + 700) >> 32;
      v6 = (void *)*(_QWORD *)(v3 + 700);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v2;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *(_DWORD *)(v3 + 700) = v10;
    *(_DWORD *)(v3 + 704) = v12;
    *(_DWORD *)(v3 + 708) = result;
  }
  else
    *(_DWORD *)v4 = v2;
    result = (char *)(*(_DWORD *)(v3 + 704) + 4);
    *(_DWORD *)(v3 + 704) = result;
  return result;
}


signed int __fastcall Automation::AutomationClient::dhKeyExchange(int a1, int *a2, int *a3, int *a4, int *a5)
{
  int v5; // r4@1
  int *v6; // r8@1
  int *v7; // r7@1
  int *v8; // r6@1
  int v9; // r0@1
  int v10; // r0@1
  bool v11; // zf@1
  void *v12; // r0@5
  _QWORD *v13; // r7@6
  int v14; // r0@6
  int v15; // r5@8
  unsigned int v16; // r5@9
  unsigned int v17; // r7@9
  unsigned int v18; // r0@9
  void *v19; // r0@12
  void *v20; // r0@13
  unsigned int *v21; // r2@14
  signed int v22; // r1@16
  void *v23; // r0@18
  void *v24; // r0@19
  signed int v25; // r5@20
  int v26; // r0@22
  unsigned int v27; // r0@24
  unsigned int v28; // r0@24
  void *v29; // r0@24
  void *v30; // r0@25
  void *v31; // r0@26
  void *v32; // r0@28
  void *v33; // r0@29
  void *v34; // r0@30
  void *v35; // r0@33
  void *v36; // r0@34
  void *v37; // r0@37
  unsigned int *v39; // r2@39
  signed int v40; // r1@41
  unsigned int *v41; // r2@43
  signed int v42; // r1@45
  unsigned int *v43; // r2@47
  signed int v44; // r1@49
  unsigned int *v45; // r2@51
  signed int v46; // r1@53
  unsigned int *v47; // r2@55
  signed int v48; // r1@57
  unsigned int *v49; // r2@79
  signed int v50; // r1@81
  unsigned int *v51; // r2@83
  signed int v52; // r1@85
  unsigned int *v53; // r2@87
  signed int v54; // r1@89
  unsigned int *v55; // r2@91
  signed int v56; // r1@93
  unsigned int *v57; // r2@110
  signed int v58; // r1@112
  unsigned int *v59; // r2@114
  signed int v60; // r1@116
  unsigned int *v61; // r2@118
  signed int v62; // r1@120
  unsigned int *v63; // r2@122
  signed int v64; // r1@124
  int v65; // [sp+4h] [bp-6Ch]@24
  int v66; // [sp+8h] [bp-68h]@24
  int v67; // [sp+Ch] [bp-64h]@24
  int v68; // [sp+14h] [bp-5Ch]@12
  int v69; // [sp+18h] [bp-58h]@12
  int v70; // [sp+1Ch] [bp-54h]@5
  int v71; // [sp+20h] [bp-50h]@5
  int v72; // [sp+24h] [bp-4Ch]@5
  int v73; // [sp+28h] [bp-48h]@5
  int v74; // [sp+30h] [bp-40h]@18
  int v75; // [sp+34h] [bp-3Ch]@18
  void **v76; // [sp+38h] [bp-38h]@1
  int v77; // [sp+3Ch] [bp-34h]@33
  int v78; // [sp+40h] [bp-30h]@2
  void **v79; // [sp+44h] [bp-2Ch]@1
  int v80; // [sp+48h] [bp-28h]@37
  int v81; // [sp+4Ch] [bp-24h]@4
  int v82; // [sp+50h] [bp-20h]@34

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  PrivateKeyManager::PrivateKeyManager((int)&v79, 5u);
  v9 = KeyManager::KeyManager((int)&v76, v8, 5u);
  v10 = sub_21E7D6C((const void **)(v9 + 4), (const char *)&unk_257BC67);
  v11 = v10 == 0;
  if ( v10 )
  {
    v10 = v78;
    v11 = v78 == 0;
  }
  if ( !v11 && *(_DWORD *)(v10 + 4) == *(_DWORD *)(v81 + 4) )
    Util::base64_decode((const void **)&v73, v7);
    PrivateKeyManager::computeSecret((PrivateKeyManager *)&v72, (const KeyManager *)&v79, (int)&v76);
    sub_21E8AF4(&v70, &v73);
    sub_21E72F0((const void **)&v70, (const void **)&v72);
    Crypto::Hash::hash((Crypto *)&v71, 2, &v70);
    v12 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
    {
      v49 = (unsigned int *)(v70 - 4);
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
        j_j_j_j__ZdlPv_9(v12);
    }
    v13 = operator new(8u);
    Crypto::Symmetric::Symmetric::Symmetric(v13, 1, 2);
    v14 = *(_DWORD *)(v5 + 736);
    *(_DWORD *)(v5 + 736) = v13;
    if ( v14 )
      (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      v13 = *(_QWORD **)(v5 + 736);
    v15 = *(_DWORD *)(v73 - 12);
    if ( v15 == (*(int (__fastcall **)(_QWORD *))(*(_DWORD *)v13 + 24))(v13) )
      v16 = *(_DWORD *)(v71 - 12);
      v17 = (*(int (**)(void))(**(_DWORD **)(v5 + 736) + 20))();
      v18 = (*(int (**)(void))(**(_DWORD **)(v5 + 736) + 24))();
      if ( v18 < v17 )
        v17 = v18;
      if ( v16 >= v17 )
        v27 = (*(int (**)(void))(**(_DWORD **)(v5 + 736) + 20))();
        sub_21E9040((void **)&v67, &v71, 0, v27);
        v28 = (*(int (**)(void))(**(_DWORD **)(v5 + 736) + 24))();
        sub_21E9040((void **)&v66, &v71, 0, v28);
        (*(void (**)(void))(**(_DWORD **)(v5 + 736) + 8))();
        KeyManager::getPublicKey((KeyManager *)&v65, (int)&v79);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(a5, &v65);
        v29 = (void *)(v65 - 12);
        if ( (int *)(v65 - 12) != &dword_28898C0 )
        {
          v59 = (unsigned int *)(v65 - 4);
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
            j_j_j_j__ZdlPv_9(v29);
        }
        EntityInteraction::setInteractText((int *)(v5 + 740), v6);
        v30 = (void *)(v66 - 12);
        if ( (int *)(v66 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v66 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        v31 = (void *)(v67 - 12);
        if ( (int *)(v67 - 12) != &dword_28898C0 )
          v63 = (unsigned int *)(v67 - 4);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        v25 = 1;
        goto LABEL_28;
      sub_21E94B4((void **)&v68, "commands.generic.encryption.badkey");
      I18n::get(&v69, (int **)&v68);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(a5, &v69);
      v19 = (void *)(v69 - 12);
      if ( (int *)(v69 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v69 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
        else
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = (void *)(v68 - 12);
      if ( (int *)(v68 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v68 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
    else
      sub_21E8190((void **)a5, "commands.generic.encryption.badsalt", (_BYTE *)0x23);
    v26 = *(_DWORD *)(v5 + 736);
    v25 = 0;
    *(_DWORD *)(v5 + 736) = 0;
    if ( v26 )
      (*(void (**)(void))(*(_DWORD *)v26 + 4))();
      v25 = 0;
LABEL_28:
    v32 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v71 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    v33 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v72 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    v34 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v73 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    goto LABEL_31;
  sub_21E94B4((void **)&v74, "commands.generic.encryption.badkey");
  I18n::get(&v75, (int **)&v74);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(a5, &v75);
  v23 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v75 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v74 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = 0;
LABEL_31:
  v76 = &off_26D4D8C;
  if ( v78 )
    (*(void (**)(void))(*(_DWORD *)v78 + 4))();
  v78 = 0;
  v35 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v77 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v79 = &off_26D4D78;
  v36 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v82 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v79 = &off_26D4D8C;
  if ( v81 )
    (*(void (**)(void))(*(_DWORD *)v81 + 4))();
  v81 = 0;
  v37 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v80 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  return v25;
}


Json::Value *__fastcall Automation::AutomationClient::_handleIncomingMessage(Automation::AutomationClient *this, const RakWebSocketDataFrame *a2)
{
  const RakWebSocketDataFrame *v2; // r5@1
  Automation::AutomationClient *v3; // r4@1
  Json::Value *result; // r0@2
  Json::Features *v5; // r0@3
  int v6; // r1@3
  void *v7; // r0@4
  Json::Value *v8; // r0@6
  Automation::MessageHeader *v9; // r0@7
  Automation::MessageHeader *v10; // r2@7
  const Json::Value *v11; // r5@9
  void *v12; // r0@16
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  void *v15; // r0@21
  void *v16; // r0@22
  void *v17; // r0@23
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  void *v22; // r0@32
  void *v23; // r0@33
  unsigned __int8 *v24; // r6@46
  unsigned int v25; // r1@47
  __int64 v26; // kr00_8@49
  signed int v27; // r0@49
  signed int v28; // r1@49
  int v29; // r2@49
  const Json::Value *v30; // r0@50
  unsigned int v31; // r1@51
  int v32; // r7@53
  int v33; // r1@54
  void *v34; // r0@55
  void *v35; // r0@56
  void *v36; // r0@62
  void *v37; // r0@63
  void *v38; // r0@64
  unsigned int *v39; // r2@65
  signed int v40; // r1@67
  unsigned int *v41; // r2@69
  signed int v42; // r1@71
  unsigned int *v43; // r2@73
  signed int v44; // r1@75
  unsigned int *v45; // r2@89
  signed int v46; // r1@91
  unsigned int *v47; // r2@93
  signed int v48; // r1@95
  void *v49; // r0@107
  unsigned int *v50; // r2@110
  signed int v51; // r1@112
  unsigned int *v52; // r2@134
  signed int v53; // r1@136
  unsigned int *v54; // r2@138
  signed int v55; // r1@140
  unsigned int *v56; // r2@150
  signed int v57; // r1@152
  unsigned int *v58; // r2@154
  signed int v59; // r1@156
  int v60; // [sp+4h] [bp-114h]@55
  int v61; // [sp+8h] [bp-110h]@55
  int v62; // [sp+Ch] [bp-10Ch]@55
  int v63; // [sp+14h] [bp-104h]@62
  int v64; // [sp+18h] [bp-100h]@62
  int v65; // [sp+1Ch] [bp-FCh]@62
  int v66; // [sp+20h] [bp-F8h]@50
  int v67; // [sp+28h] [bp-F0h]@50
  int v68; // [sp+3Ch] [bp-DCh]@46
  int v69; // [sp+44h] [bp-D4h]@32
  int v70; // [sp+48h] [bp-D0h]@32
  int v71; // [sp+4Ch] [bp-CCh]@32
  int v72; // [sp+54h] [bp-C4h]@21
  int v73; // [sp+58h] [bp-C0h]@21
  int v74; // [sp+5Ch] [bp-BCh]@21
  int v75; // [sp+60h] [bp-B8h]@7
  int v76; // [sp+64h] [bp-B4h]@6
  char v77; // [sp+68h] [bp-B0h]@10
  int v78; // [sp+6Ch] [bp-ACh]@8
  int v79; // [sp+70h] [bp-A8h]@16
  int v80; // [sp+74h] [bp-A4h]@4
  int v81; // [sp+78h] [bp-A0h]@3
  __int16 v82; // [sp+7Eh] [bp-9Ah]@3
  char v83; // [sp+80h] [bp-98h]@3
  char v84; // [sp+F0h] [bp-28h]@3

  v2 = a2;
  v3 = this;
  if ( RakWebSocketDataFrame::getMessageType(a2) != 1 )
  {
    result = (Json::Value *)*((_DWORD *)v3 + 184);
    if ( !result )
      return result;
  }
  v5 = (Json::Features *)Json::Value::Value(&v84, 0);
  v82 = Json::Features::strictMode(v5);
  Json::Reader::Reader((Json::Reader *)&v83, (const Json::Features *)&v82);
  RakWebSocketDataFrame::getPayloadAsString((RakWebSocketDataFrame *)&v81, (int)v2);
  v6 = *((_DWORD *)v3 + 184);
  if ( v6 )
    (*(void (__fastcall **)(int *))(*(_DWORD *)v6 + 16))(&v80);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v81, &v80);
    v7 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v80 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
  if ( Json::Reader::parse((int)&v83, &v81, (int)&v84, 0) )
    Automation::MessageHeader::MessageHeader((Automation::MessageHeader *)&v76);
    v8 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v84, (const char *)Automation::HeaderData);
    if ( Json::Value::isObject(v8) != 1 )
      goto LABEL_106;
    v9 = (Automation::MessageHeader *)Json::Value::operator[]((Json::Value *)&v84, (const char *)Automation::HeaderData);
    v75 = Automation::MessageHeader::deserialize(v9, (Json::Value *)&v76, v10);
    if ( !MCRESULT::isSuccess((MCRESULT *)&v75) )
    if ( v78 == 1 )
      v11 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v84, (const char *)Automation::BodyData);
      if ( Json::Value::isObject(v11) )
        if ( v77 == 1 )
        {
          Automation::AutomationClient::_createCommandOrigin((Automation::AutomationClient *)&v68, v3, &v76);
          v24 = (unsigned __int8 *)v3 + 664;
          do
          {
            do
              v25 = __ldrex(v24);
            while ( __strex(1u, v24) );
            __dmb();
          }
          while ( v25 );
          v26 = *((_QWORD *)v3 + 80);
          v27 = v26 - *((_DWORD *)v3 + 158);
          v28 = *((_DWORD *)v3 + 165) - HIDWORD(v26);
          v29 = -1431655765 * ((signed int)(*((_QWORD *)v3 + 81) - (*((_QWORD *)v3 + 81) >> 32)) >> 3);
          __dmb();
          *((_BYTE *)v3 + 664) = 0;
          if ( (unsigned int)(v29 + 21 * (v28 >> 2) + -1431655765 * (v27 >> 3) - 21) >= *((_DWORD *)v3 + 167) )
            sub_21E94B4((void **)&v63, "commands.generic.too.many.requests");
            I18n::get(&v64, (int **)&v63);
            Automation::Response::requestError(
              &v65,
              &v76,
              (MCRESULT *)&MCRESULT_TooManyPendingRequests,
              (const char **)&v64);
            Automation::AutomationClient::send(v3, (const Automation::Response *)&v65);
            v36 = (void *)(v65 - 12);
            if ( (int *)(v65 - 12) != &dword_28898C0 )
            {
              v56 = (unsigned int *)(v65 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v57 = __ldrex(v56);
                while ( __strex(v57 - 1, v56) );
              }
              else
                v57 = (*v56)--;
              if ( v57 <= 0 )
                j_j_j_j__ZdlPv_9(v36);
            }
            v37 = (void *)(v64 - 12);
            if ( (int *)(v64 - 12) != &dword_28898C0 )
              v58 = (unsigned int *)(v64 - 4);
                  v59 = __ldrex(v58);
                while ( __strex(v59 - 1, v58) );
                v59 = (*v58)--;
              if ( v59 <= 0 )
                j_j_j_j__ZdlPv_9(v37);
            v38 = (void *)(v63 - 12);
            if ( (int *)(v63 - 12) != &dword_28898C0 )
              v39 = (unsigned int *)(v63 - 4);
                  v40 = __ldrex(v39);
                while ( __strex(v40 - 1, v39) );
                v40 = (*v39)--;
              if ( v40 <= 0 )
                j_j_j_j__ZdlPv_9(v38);
          else
            v30 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v84, (const char *)Automation::BodyData);
            v66 = v68;
            v68 = 0;
            Json::Value::Value((Json::Value *)&v67, v30);
              do
                v31 = __ldrex(v24);
              while ( __strex(1u, v24) );
              __dmb();
            while ( v31 );
            v32 = *((_DWORD *)v3 + 162);
            if ( v32 == *((_DWORD *)v3 + 164) - 24 )
              std::deque<std::pair<std::unique_ptr<CommandOrigin,std::default_delete<CommandOrigin>>,Json::Value>,std::allocator<std::pair<std::unique_ptr<CommandOrigin,std::default_delete<CommandOrigin>>,Json::Value>>>::_M_push_back_aux<std::pair<std::unique_ptr<CommandOrigin,std::default_delete<CommandOrigin>>,Json::Value>>(
                (int)v3 + 624,
                (int)&v66);
            else
              v33 = v66;
              v66 = 0;
              *(_DWORD *)v32 = v33;
              Json::Value::Value((Json::Value *)(v32 + 8), (const Json::Value *)&v67);
              *((_DWORD *)v3 + 162) += 24;
            *v24 = 0;
            Json::Value::~Value((Json::Value *)&v67);
            if ( v66 )
              (*(void (**)(void))(*(_DWORD *)v66 + 4))();
            v66 = 0;
          if ( v68 )
            (*(void (**)(void))(*(_DWORD *)v68 + 4))();
          v68 = 0;
        }
        else
          if ( v77 == 3 )
            if ( *((_BYTE *)v3 + 744) && !*((_DWORD *)v3 + 184) )
              Automation::AutomationClient::_errorEncryptionRequired(v3, &v76);
              Automation::AutomationClient::_unsubscribeToEvent(v3, v11);
            goto LABEL_106;
          if ( v77 == 2 )
              Automation::AutomationClient::_subscribeToEvent(v3, v11);
          sub_21E94B4((void **)&v60, "commands.generic.malformed.type");
          I18n::get(&v61, (int **)&v60);
          Automation::Response::requestError(&v62, &v76, (MCRESULT *)&MCRESULT_MalformedRequest, (const char **)&v61);
          Automation::AutomationClient::send(v3, (const Automation::Response *)&v62);
          v34 = (void *)(v62 - 12);
          if ( (int *)(v62 - 12) != &dword_28898C0 )
            v52 = (unsigned int *)(v62 - 4);
            if ( &pthread_create )
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j__ZdlPv_9(v34);
          v35 = (void *)(v61 - 12);
          if ( (int *)(v61 - 12) != &dword_28898C0 )
            v54 = (unsigned int *)(v61 - 4);
                v55 = __ldrex(v54);
              while ( __strex(v55 - 1, v54) );
              v55 = (*v54)--;
            if ( v55 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          v17 = (void *)(v60 - 12);
          if ( (int *)(v60 - 12) != &dword_28898C0 )
            v18 = (unsigned int *)(v60 - 4);
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              goto LABEL_78;
LABEL_77:
            v19 = (*v18)--;
            goto LABEL_78;
LABEL_106:
        v12 = (void *)(v76 - 12);
        if ( (int *)(v76 - 12) == &dword_28898C0 )
          goto LABEL_107;
        v13 = (unsigned int *)(v76 - 4);
        if ( &pthread_create )
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          goto LABEL_123;
        goto LABEL_122;
      sub_21E94B4((void **)&v69, "commands.generic.malformed.body");
      I18n::get(&v70, (int **)&v69);
      Automation::Response::requestError(&v71, &v76, (MCRESULT *)&MCRESULT_MalformedRequest, (const char **)&v70);
      Automation::AutomationClient::send(v3, (const Automation::Response *)&v71);
      v22 = (void *)(v71 - 12);
      if ( (int *)(v71 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v71 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v23 = (void *)(v70 - 12);
      if ( (int *)(v70 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v70 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      v17 = (void *)(v69 - 12);
      if ( (int *)(v69 - 12) == &dword_28898C0 )
        goto LABEL_106;
      v18 = (unsigned int *)(v69 - 4);
      if ( !&pthread_create )
        goto LABEL_77;
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      sub_21E94B4((void **)&v72, "commands.generic.protocol.mismatch");
      I18n::get(&v73, (int **)&v72);
      Automation::Response::requestError(&v74, &v76, (MCRESULT *)&MCRESULT_VersionMismatch, (const char **)&v73);
      Automation::AutomationClient::send(v3, (const Automation::Response *)&v74);
      v15 = (void *)(v74 - 12);
      if ( (int *)(v74 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v74 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v16 = (void *)(v73 - 12);
      if ( (int *)(v73 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v73 - 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = (void *)(v72 - 12);
      if ( (int *)(v72 - 12) == &dword_28898C0 )
      v18 = (unsigned int *)(v72 - 4);
LABEL_78:
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
    goto LABEL_106;
  Json::Reader::getFormattedErrorMessages((Json::Reader *)&v79, (int)&v83);
  v12 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v79 - 4);
    if ( &pthread_create )
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
LABEL_123:
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
      goto LABEL_107;
LABEL_122:
    v14 = (*v13)--;
    goto LABEL_123;
LABEL_107:
  v49 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v81 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  Json::Reader::~Reader((Json::Reader *)&v83);
  return Json::Value::~Value((Json::Value *)&v84);
}


int __fastcall Automation::AutomationClient::isConnecting(Automation::AutomationClient *this)
{
  char v1; // r0@1

  v1 = *((_BYTE *)this + 732);
  __dmb();
  return v1 & 1;
}


_BOOL4 __fastcall Automation::AutomationClient::_encryptionEnabled(Automation::AutomationClient *this)
{
  return *((_DWORD *)this + 184) != 0;
}


void __fastcall Automation::AutomationClient::~AutomationClient(Automation::AutomationClient *this)
{
  Automation::AutomationClient::~AutomationClient(this);
}


signed int __fastcall Automation::AutomationClient::_connectionSafe(Automation::AutomationClient *this)
{
  signed int result; // r0@2

  if ( *((_BYTE *)this + 744) )
    result = *((_DWORD *)this + 184) != 0;
  else
    result = 1;
  return result;
}


void __fastcall Automation::AutomationClient::_unsubscribeToEvent(Automation::AutomationClient *this, const Json::Value *a2)
{
  Automation::AutomationClient *v2; // r4@1
  void *v3; // r0@1
  int v4; // r1@1
  int v5; // r4@2
  void *v6; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+8h] [bp-10h]@2
  int v11; // [sp+Ch] [bp-Ch]@2

  v2 = this;
  v3 = Json::Value::operator[]((int)a2, "eventName");
  Json::Value::asString(&v9, (int)v3, (int *)&Util::EMPTY_STRING);
  v4 = v9;
  if ( *(_DWORD *)(v9 - 12) )
  {
    v5 = (int)v2 + 672;
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::equal_range(
      (int)&v10,
      v5,
      (const void **)&v9);
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase_aux(
      v10,
      v11);
    v4 = v9;
  }
  v6 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v4 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
}


int __fastcall Automation::AutomationClient::tick(Automation::AutomationClient *this)
{
  Json::Value *v2; // r10@1
  int v3; // r6@1
  Minecraft *v4; // r0@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  unsigned int *v11; // r2@19
  signed int v12; // r1@21
  unsigned int *v13; // r2@23
  signed int v14; // r1@25
  int *v15; // r0@43
  signed int v16; // r8@43
  Json::Value *v17; // r0@44
  int v18; // r11@46
  void *v19; // r0@46
  int v20; // r0@47
  void *v21; // r0@49
  void *v22; // r0@52
  void *v23; // r0@53
  void *v24; // r0@54
  Minecraft *v26; // r0@61
  int v27; // r1@61
  int result; // r0@63
  Automation::AutomationClient *v33; // [sp+18h] [bp-78h]@1
  int v34; // [sp+1Ch] [bp-74h]@2
  int v35; // [sp+20h] [bp-70h]@1
  int v36; // [sp+30h] [bp-60h]@23
  int v37; // [sp+34h] [bp-5Ch]@19
  int v38; // [sp+38h] [bp-58h]@47
  int v39; // [sp+40h] [bp-50h]@7
  int v40; // [sp+44h] [bp-4Ch]@11
  int v41; // [sp+48h] [bp-48h]@45
  int v42; // [sp+4Ch] [bp-44h]@3
  int v43; // [sp+50h] [bp-40h]@1
  int v44; // [sp+58h] [bp-38h]@1

  _R5 = this;
  v43 = 0;
  v2 = (Json::Value *)&v44;
  v33 = this;
  Json::Value::Value(&v44, 0);
  v3 = (int)_R5 + 624;
  v35 = (int)_R5 + 624;
  if ( MPMCQueue<std::pair<std::unique_ptr<CommandOrigin,std::default_delete<CommandOrigin>>,Json::Value>>::pop(
         (int)_R5 + 624,
         &v43) == 1 )
  {
    v4 = (Minecraft *)(*(int (**)(void))(**((_DWORD **)_R5 + 155) + 8))();
    v34 = Minecraft::getCommands(v4);
    do
    {
      v15 = (int *)(*(int (**)(void))(*(_DWORD *)v43 + 8))();
      sub_21E8AF4(&v42, v15);
      v16 = 3;
      if ( Json::Value::isMember(v2, "version") == 1 )
      {
        v17 = (Json::Value *)Json::Value::operator[](v2, "version");
        v16 = Json::Value::asInt(v17, 0);
      }
      v41 = *(_DWORD *)&MCRESULT_InvalidCommandContext;
      if ( Json::Value::isMember(v2, "commandLine") == 1 )
        v18 = Json::Value::operator[](v2, "commandLine");
        sub_21E94B4((void **)&v39, (const char *)&unk_257BC67);
        Json::Value::asString(&v40, v18, &v39);
        v19 = (void *)(v39 - 12);
        if ( (int *)(v39 - 12) != &dword_28898C0 )
        {
          v7 = (unsigned int *)(v39 - 4);
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
            j_j_j_j__ZdlPv_9(v19);
        }
        v20 = v43;
        v43 = 0;
        v38 = v20;
        v41 = MinecraftCommands::requestCommandExecution(v34, &v38, &v40, v16, 0);
        if ( v38 )
          (*(void (**)(void))(*(_DWORD *)v38 + 4))();
        v38 = 0;
        v21 = (void *)(v40 - 12);
        if ( (int *)(v40 - 12) != &dword_28898C0 )
          v9 = (unsigned int *)(v40 - 4);
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
            v10 = (*v9)--;
          if ( v10 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        v3 = v35;
      if ( !MCRESULT::isSuccess((MCRESULT *)&v41) )
        sub_21E94B4((void **)&v36, (const char *)&unk_257BC67);
        Automation::Response::requestError(&v37, &v42, (MCRESULT *)&v41, (const char **)&v36);
        Automation::AutomationClient::send(_R5, (const Automation::Response *)&v37);
        v22 = (void *)(v37 - 12);
        if ( (int *)(v37 - 12) != &dword_28898C0 )
          v11 = (unsigned int *)(v37 - 4);
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
            v2 = (Json::Value *)&v44;
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v23 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v36 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            _R5 = v33;
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
      v24 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v42 - 4);
        if ( &pthread_create )
          v33 = _R5;
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
    }
    while ( MPMCQueue<std::pair<std::unique_ptr<CommandOrigin,std::default_delete<CommandOrigin>>,Json::Value>>::pop(
              v3,
              &v43) );
  }
  if ( RakWebSocketClient::isDisconnected((Automation::AutomationClient *)((char *)_R5 + 4)) == 1 )
    _ZF = *((_BYTE *)_R5 + 716) == 0;
    if ( *((_BYTE *)_R5 + 716) )
      _ZF = *(_DWORD *)(*((_DWORD *)_R5 + 178) - 12) == 0;
    if ( !_ZF && (signed int)(*((_QWORD *)_R5 + 90) >> 32) < (signed int)*((_QWORD *)_R5 + 90) )
      v26 = (Minecraft *)(*(int (**)(void))(**((_DWORD **)_R5 + 155) + 8))();
      _R0 = Minecraft::getLastTimestep(v26, v27);
      __asm
        VMOV            D0, R0, R1
        VLDR            S2, [R5,#0x2D8]
        VCVT.F32.F64    S0, D0
        VADD.F32        S0, S2, S0
        VSTR            S0, [R5,#0x2D8]
        VLDR            S2, [R5,#0x2EC]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
        Automation::AutomationClient::connect((int)_R5, (int *)_R5 + 178);
  RakWebSocketClient::tick((Automation::AutomationClient *)((char *)_R5 + 4));
  Json::Value::~Value(v2);
  result = v43;
  if ( v43 )
    result = (*(int (**)(void))(*(_DWORD *)v43 + 4))();
  return result;
}


int __fastcall Automation::AutomationClient::setMaxQueueSize(int result, unsigned int a2)
{
  *(_DWORD *)(result + 668) = a2;
  return result;
}
