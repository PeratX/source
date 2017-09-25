

RakWebSocketDataFrame *__fastcall RakWebSocketClient::_processDataFrames(RakWebSocketClient *this, RakNet::BitStream *a2)
{
  RakWebSocketClient *v2; // r4@1
  RakWebSocketDataFrame *result; // r0@1
  RakWebSocketDataFrameHeader *v4; // r0@3
  void *v5; // r0@4
  void *v6; // r0@7
  int v7; // r0@8
  void *v8; // r0@11
  char *v9; // r0@12
  int v10; // r4@13
  unsigned int *v11; // r1@14
  unsigned int *v12; // r5@20
  unsigned int *v13; // r2@28
  signed int v14; // r1@30
  unsigned int *v15; // r2@32
  signed int v16; // r1@34
  unsigned int *v17; // r2@36
  signed int v18; // r1@38
  int v19; // [sp+8h] [bp-28h]@4
  int v20; // [sp+Ch] [bp-24h]@11
  int v21; // [sp+10h] [bp-20h]@7
  RakWebSocketDataFrame *v22; // [sp+14h] [bp-1Ch]@1
  int v23; // [sp+18h] [bp-18h]@13

  v2 = this;
  RakWebSocketDataFrameParser::readFrame(
    (RakWebSocketDataFrameParser *)&v22,
    (RakWebSocketClient *)((char *)this + 424),
    (int)a2);
  result = v22;
  if ( v22 )
  {
    result = (RakWebSocketDataFrame *)RakWebSocketDataFrame::getParseState(v22);
    if ( result == (RakWebSocketDataFrame *)5 )
    {
      v4 = (RakWebSocketDataFrameHeader *)RakWebSocketDataFrame::getHeader(v22);
      result = (RakWebSocketDataFrame *)RakWebSocketDataFrameHeader::getOpCode(v4);
      switch ( result )
      {
        case 1u:
          RakWebSocketDataFrame::getPayloadAsString((RakWebSocketDataFrame *)&v19, (int)v22);
          v5 = (void *)(v19 - 12);
          if ( (int *)(v19 - 12) != &dword_28898C0 )
          {
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
              j_j_j_j__ZdlPv_9(v5);
          }
          result = (RakWebSocketDataFrame *)*((_DWORD *)v2 + 118);
          if ( result )
            result = (RakWebSocketDataFrame *)(*((int (__fastcall **)(_DWORD, _DWORD))v2 + 119))((char *)v2 + 464, v22);
          break;
        case 8u:
          RakWebSocketDataFrame::getPayloadAsString((RakWebSocketDataFrame *)&v21, (int)v22);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v2 + 103,
            &v21);
          v6 = (void *)(v21 - 12);
          if ( (int *)(v21 - 12) != &dword_28898C0 )
            v17 = (unsigned int *)(v21 - 4);
                v18 = __ldrex(v17);
              while ( __strex(v18 - 1, v17) );
              v18 = (*v17)--;
            if ( v18 <= 0 )
              j_j_j_j__ZdlPv_9(v6);
          v7 = RakWebSocketDataFrame::getCloseCode(v22);
          result = (RakWebSocketDataFrame *)RakWebSocketClient::_close((int)v2, v7);
        case 2u:
        case 9u:
          RakWebSocketDataFrame::getPayloadAsString((RakWebSocketDataFrame *)&v20, (int)v22);
          v8 = (void *)(v20 - 12);
          if ( (int *)(v20 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)(v20 - 4);
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j__ZdlPv_9(v8);
          v9 = RakWebSocketDataFrame::getPayload(v22);
          result = (RakWebSocketDataFrame *)RakWebSocketClient::_sendControlFrame(
                                              (int)v2,
                                              *((const unsigned __int8 **)v9 + 3),
                                              (unsigned int)(*(_DWORD *)v9 + 7) >> 3,
                                              0,
                                              10);
        default:
      }
    }
  }
  v10 = v23;
  if ( v23 )
    v11 = (unsigned int *)(v23 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = (RakWebSocketDataFrame *)__ldrex(v11);
      while ( __strex((unsigned int)result - 1, v11) );
    else
      result = (RakWebSocketDataFrame *)(*v11)--;
    if ( result == (RakWebSocketDataFrame *)1 )
      v12 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
        __dmb();
        do
          result = (RakWebSocketDataFrame *)__ldrex(v12);
        while ( __strex((unsigned int)result - 1, v12) );
      else
        result = (RakWebSocketDataFrame *)(*v12)--;
      if ( result == (RakWebSocketDataFrame *)1 )
        result = (RakWebSocketDataFrame *)(*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  return result;
}


int __fastcall RakWebSocketClient::_reset(RakWebSocketClient *this)
{
  RakWebSocketClient *v1; // r11@1
  __int64 v2; // kr00_8@1
  _DWORD *v3; // r6@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  *((_WORD *)this + 266) = 0;
  RakNet::SystemAddress::operator=((int)this + 4, (int)&unk_27F7938);
  *((_DWORD *)v1 + 153) = 0;
  sub_21E7EE0((const void **)v1 + 115, 0, *(_BYTE **)(*((_DWORD *)v1 + 115) - 12), 0);
  sub_21E7EE0((const void **)v1 + 128, 0, *(_BYTE **)(*((_DWORD *)v1 + 128) - 12), 0);
  sub_21E7EE0((const void **)v1 + 129, 0, *(_BYTE **)(*((_DWORD *)v1 + 129) - 12), 0);
  sub_21E7EE0((const void **)v1 + 130, 0, *(_BYTE **)(*((_DWORD *)v1 + 130) - 12), 0);
  sub_21E7EE0((const void **)v1 + 131, 0, *(_BYTE **)(*((_DWORD *)v1 + 131) - 12), 0);
  sub_21E7EE0((const void **)v1 + 132, 0, *(_BYTE **)(*((_DWORD *)v1 + 132) - 12), 0);
  *((_BYTE *)v1 + 534) = 0;
  sub_21E7EE0((const void **)v1 + 134, 0, *(_BYTE **)(*((_DWORD *)v1 + 134) - 12), 0);
  sub_21E7EE0((const void **)v1 + 135, 0, *(_BYTE **)(*((_DWORD *)v1 + 135) - 12), 0);
  sub_21E7EE0((const void **)v1 + 136, 0, *(_BYTE **)(*((_DWORD *)v1 + 136) - 12), 0);
  HttpHeaders::clear((RakWebSocketClient *)((char *)v1 + 548));
  v2 = *((_QWORD *)v1 + 75);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (_DWORD *)v2;
    do
    {
      v6 = (int *)(*v3 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*v3 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      ++v3;
    }
    while ( v3 != (_DWORD *)HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 151) = v2;
  return RakNet::BitStream::Reset((RakWebSocketClient *)((char *)v1 + 136));
}


int __fastcall RakWebSocketClient::setOnConnectedHandler(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 496;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 496);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 504);
  v10 = v13;
  *(_DWORD *)(v4 + 504) = v8;
  v14 = *(_DWORD *)(v4 + 508);
  *(_DWORD *)(v4 + 508) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


unsigned int __fastcall RakWebSocketClient::_close(int a1, __int16 a2)
{
  int v2; // r4@1
  __int16 v3; // r5@1
  unsigned int result; // r0@1
  void *v5; // r0@3
  unsigned int *v6; // r12@6
  signed int v7; // r1@8
  int v8; // [sp+4h] [bp-1Ch]@3

  v2 = a1;
  v3 = a2;
  result = *(_DWORD *)(a1 + 612);
  if ( result >= 2 )
  {
    if ( result - 3 <= 2 )
    {
      sub_21E94B4((void **)&v8, (const char *)&unk_257BC67);
      RakWebSocketClient::_sendCloseFrame(v2, v3, (const void **)&v8);
      v5 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
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
    }
    result = 1;
    *(_WORD *)(v2 + 416) = v3;
    *(_DWORD *)(v2 + 612) = 1;
  }
  return result;
}


void __fastcall RakWebSocketClient::_subProcessHttpResponse(RakWebSocketClient *this, RakNet::BitStream *a2)
{
  RakWebSocketClient *v2; // r4@1
  char *v3; // r6@1
  RakNet::BitStream *v4; // r5@1
  signed int v5; // r0@1
  void *v6; // r0@8
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  RakWebSocketClient *v9; // r6@14
  void *v10; // r0@14
  int v11; // r0@17
  __int64 v12; // r2@17
  unsigned int *v13; // r2@46
  signed int v14; // r1@48
  int v15; // [sp+4h] [bp-34h]@18
  int v16; // [sp+8h] [bp-30h]@37
  int v17; // [sp+10h] [bp-28h]@27
  int v18; // [sp+14h] [bp-24h]@14
  int v19; // [sp+1Ch] [bp-1Ch]@4

  v2 = this;
  v3 = (char *)this + 548;
  v4 = a2;
  v5 = HttpHeaders::parse((RakWebSocketClient *)((char *)this + 548), a2);
  if ( v5 == 1 )
  {
    HttpHeaders::getStatusCode((HttpHeaders *)&v18, (int)v3);
    v9 = (RakWebSocketClient *)((char *)v2 + 544);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v2 + 136,
      &v18);
    v10 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v18 - 4);
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
    if ( *(_DWORD *)(*(_DWORD *)v9 - 12) )
      if ( !sub_21E7D6C((const void **)v2 + 136, "101") )
        RakWebSocketClient::_subProcessHttpResponse(v2, v4);
        return;
      v11 = sub_21E7D6C((const void **)v2 + 136, "400");
      LODWORD(v12) = *(_DWORD *)v9;
      if ( v11 )
        Util::format((Util *)&v15, "HTTP Error Code: %s", v12);
        if ( *((_DWORD *)v2 + 153) != 1 )
        {
          if ( *((_DWORD *)v2 + 103) != v15 )
            EntityInteraction::setInteractText((int *)v2 + 103, &v15);
          *((_BYTE *)v2 + 418) = 1;
          RakWebSocketClient::_close((int)v2, 1002);
        }
        v6 = (void *)(v15 - 12);
        if ( (int *)(v15 - 12) != &dword_28898C0 )
          v7 = (unsigned int *)(v15 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
            goto LABEL_51;
          }
          goto LABEL_50;
        HIDWORD(v12) = *((_DWORD *)v2 + 135);
        Util::format(
          (Util *)&v16,
          "HTTP Error Code: [%s] Opening Handshake request was rejected, check formatting.\r\n%s",
          v12);
          if ( *((_DWORD *)v2 + 103) != v16 )
            EntityInteraction::setInteractText((int *)v2 + 103, &v16);
        v6 = (void *)(v16 - 12);
        if ( (int *)(v16 - 12) != &dword_28898C0 )
          v7 = (unsigned int *)(v16 - 4);
    else
      sub_21E94B4((void **)&v17, "Failed to retrieve status code from Http Response.");
      if ( *((_DWORD *)v2 + 153) != 1 )
        if ( *((_DWORD *)v2 + 103) != v17 )
          EntityInteraction::setInteractText((int *)v2 + 103, &v17);
        *((_BYTE *)v2 + 418) = 1;
        RakWebSocketClient::_close((int)v2, 1002);
      v6 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v17 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          goto LABEL_51;
        goto LABEL_50;
  }
  else
    if ( v5 == 7 )
      j_j_j__ZN18RakWebSocketClient15_validateFieldsEv(v2);
      return;
    if ( v5 == 8 )
      sub_21E94B4((void **)&v19, "Unknown error occurred while processing HTTP headers.");
        if ( *((_DWORD *)v2 + 103) != v19 )
          EntityInteraction::setInteractText((int *)v2 + 103, &v19);
      v6 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v19 - 4);
LABEL_50:
        v8 = (*v7)--;
LABEL_51:
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
}


signed int __fastcall RakWebSocketClient::send(int a1, int *a2)
{
  signed int result; // r0@2

  if ( *(_DWORD *)(a1 + 612) == 5 )
  {
    RakWebSocketClient::_sendTextFrame(a1, a2);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall RakWebSocketClient::connect(RakWebSocketClient *this, int *a2, unsigned __int64 *a3)
{
  RakWebSocketClient *v3; // r4@1
  unsigned __int64 *v4; // r6@1
  int *v5; // r5@1
  int result; // r0@2
  RakNet::SystemAddress *v7; // r0@4
  char *v8; // r0@5
  char *v9; // r7@5
  _BYTE *v10; // r0@5
  int v11; // r3@5
  char v12; // [sp+8h] [bp-120h]@5
  char v13; // [sp+8Ch] [bp-9Ch]@4
  RakNet *v14; // [sp+110h] [bp-18h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v14 = _stack_chk_guard;
  if ( *((_DWORD *)this + 153) )
  {
    result = 2;
  }
  else
    RakWebSocketClient::_reset(this);
    *((_BYTE *)v3 + 418) = 0;
    std::vector<std::string,std::allocator<std::string>>::operator=((int)v3 + 600, v4);
    RakWebSocketClient::_splitWebSocketURI(
      (int)v3 + 528,
      v5,
      (const void **)v3 + 129,
      (const void **)v3 + 130,
      (const void **)v3 + 132);
    if ( RakWebSocketClient::_validateWebSocketURI(v3) == 1
      && (v7 = RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v13),
          RakNet::SystemAddress::FromStringExplicitPort(v7, *((const char **)v3 + 131), *((_WORD *)v3 + 266), 4)) )
    {
      v8 = RakNet::SystemAddress::ToString((RakNet::SystemAddress *)&v13, 0, 124);
      v9 = v8;
      v10 = (_BYTE *)strlen(v8);
      sub_21E8190((void **)v3 + 131, v9, v10);
      EntityInteraction::setInteractText((int *)v3 + 128, v5);
      *((_DWORD *)v3 + 153) = 2;
      v11 = *((_WORD *)v3 + 266);
      (*(void (__fastcall **)(char *))(**(_DWORD **)v3 + 8))(&v12);
      RakNet::SystemAddress::operator=((int)v3 + 4, (int)&v12);
      result = 3;
    }
    else if ( *((_DWORD *)v3 + 122) )
      (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 123))(
        (char *)v3 + 480,
        *((_WORD *)v3 + 208),
        (char *)v3 + 412);
      result = 1;
    else
  if ( _stack_chk_guard != v14 )
    _stack_chk_fail(result);
  return (unsigned __int8)result;
}


int __fastcall RakWebSocketClient::setOnCloseHandler(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 480;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 480);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 488);
  v10 = v13;
  *(_DWORD *)(v4 + 488) = v8;
  v14 = *(_DWORD *)(v4 + 492);
  *(_DWORD *)(v4 + 492) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


signed int __fastcall RakWebSocketClient::isReady(RakWebSocketClient *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 153);
  result = 0;
  if ( v1 == 5 )
    result = 1;
  return result;
}


int __fastcall RakWebSocketClient::_processClosingHandshake(RakWebSocketClient *this, int a2)
{
  RakWebSocketClient *v2; // r9@1
  int v3; // r8@1
  char *v4; // r6@1
  signed int v5; // r7@1
  int *v6; // r5@1
  void (*v7)(void); // r12@1
  int v8; // r1@1
  int v9; // t1@2
  int v11; // [sp+0h] [bp-98h]@1

  v2 = this;
  v3 = a2;
  v4 = (char *)this + 16;
  v5 = 120;
  v6 = &v11;
  v7 = *(void (**)(void))(**(_DWORD **)this + 16);
  v8 = *((_DWORD *)this + 1);
  do
  {
    v9 = *(_DWORD *)v4;
    v4 += 4;
    v5 -= 4;
    *v6 = v9;
    ++v6;
  }
  while ( v5 );
  v7();
  if ( v3 == 1 && *((_DWORD *)v2 + 122) )
    (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v2 + 123))(
      (char *)v2 + 480,
      *((_WORD *)v2 + 208),
      (char *)v2 + 412);
  return RakWebSocketClient::_reset(v2);
}


signed int __fastcall RakWebSocketClient::_sendPongFrame(int a1, RakWebSocketDataFrame **a2)
{
  int v2; // r4@1
  char *v3; // r0@1

  v2 = a1;
  v3 = RakWebSocketDataFrame::getPayload(*a2);
  return RakWebSocketClient::_sendControlFrame(
           v2,
           *((const unsigned __int8 **)v3 + 3),
           (unsigned int)(*(_DWORD *)v3 + 7) >> 3,
           0,
           10);
}


signed int __fastcall RakWebSocketClient::_sendNonControlFrame(int a1, const unsigned __int8 *a2, __int64 a3, int a4)
{
  int v4; // r4@1
  unsigned int v5; // r8@1
  unsigned int v6; // r9@1
  const unsigned __int8 *v7; // r10@1
  int v8; // r11@2
  RakNet::BitStream *v9; // r5@2
  unsigned int v10; // r6@2
  signed int v11; // r0@3
  signed int v12; // r1@5
  int v13; // r0@9
  RakNet::BitStream *v14; // r11@10
  void (*v15)(void); // r12@10
  signed int v16; // r5@10
  int *v17; // r2@10
  int v18; // r3@10
  int *v19; // r6@10
  int v20; // t1@11
  unsigned __int64 v21; // r0@12
  bool v22; // zf@12
  int v23; // r0@16
  void (*v24)(void); // r12@17
  signed int v25; // r6@17
  int *v26; // r5@17
  int v27; // r3@17
  int *v28; // r7@17
  int v29; // t1@18
  int v31; // [sp+0h] [bp-2D8h]@10
  _DWORD *v32; // [sp+84h] [bp-254h]@2
  int v33; // [sp+88h] [bp-250h]@2
  int v34; // [sp+19Ch] [bp-13Ch]@15
  RakNet *v35; // [sp+2B0h] [bp-28h]@1

  v4 = a1;
  v5 = HIDWORD(a3);
  v6 = a3;
  v7 = a2;
  v35 = _stack_chk_guard;
  if ( a3 )
  {
    v8 = a4;
    v9 = (RakNet::BitStream *)&v33;
    v10 = *(_DWORD *)(a1 + 420);
    v32 = (_DWORD *)(a1 + 4);
    while ( 1 )
    {
      v11 = 0;
      if ( v6 <= v10 )
        v11 = 1;
      v12 = 0;
      if ( !v5 )
        v12 = v11;
      if ( v12 )
        break;
      RakNet::BitStream::BitStream(v9);
      do
        v13 = RakWebSocketClient::_getRandomUnsignedInt((RakWebSocketClient *)v4);
      while ( !v13 );
      RakWebSocketDataFrame::writeFrameToStream((int)v9, v7, v10, v8, 0, v13);
      v14 = v9;
      v15 = *(void (**)(void))(**(_DWORD **)v4 + 12);
      v16 = 128;
      v17 = &v31;
      v19 = v32 + 1;
      v18 = *v32;
      {
        v20 = *v19;
        ++v19;
        v16 -= 4;
        *v17 = v20;
        ++v17;
      }
      while ( v16 );
      v15();
      v9 = v14;
      RakNet::BitStream::~BitStream(v14);
      v10 = *(_DWORD *)(v4 + 420);
      v8 = 0;
      v21 = __PAIR__(v5, v6) - v10;
      v7 += v10;
      v22 = (v6 ^ v10 | v5) == 0;
      v6 -= v10;
      v5 = HIDWORD(v21);
      if ( v22 )
        goto LABEL_20;
    }
    RakNet::BitStream::BitStream((RakNet::BitStream *)&v34);
    do
      v23 = RakWebSocketClient::_getRandomUnsignedInt((RakWebSocketClient *)v4);
    while ( !v23 );
    RakWebSocketDataFrame::writeFrameToStream((int)&v34, v7, v6, v8, 1, v23);
    v24 = *(void (**)(void))(**(_DWORD **)v4 + 12);
    v25 = 128;
    v26 = &v31;
    v28 = v32 + 1;
    v27 = *v32;
      v29 = *v28;
      ++v28;
      v25 -= 4;
      *v26 = v29;
      ++v26;
    while ( v25 );
    v24();
    RakNet::BitStream::~BitStream((RakNet::BitStream *)&v34);
  }
LABEL_20:
  if ( _stack_chk_guard != v35 )
    _stack_chk_fail(_stack_chk_guard - v35);
  return 1;
}


signed int __fastcall RakWebSocketClient::_sendDataFrame(int a1, const unsigned __int8 *a2, unsigned int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  unsigned int v7; // r6@1
  const unsigned __int8 *v8; // r7@1
  int v9; // r0@2
  void (*v10)(void); // r12@3
  int v11; // r3@3
  int *v12; // r6@3
  signed int v13; // r5@3
  int *v14; // r4@3
  int v15; // t1@4
  int v17; // [sp+0h] [bp-1B0h]@3
  int v18; // [sp+80h] [bp-130h]@1
  RakNet *v19; // [sp+194h] [bp-1Ch]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v19 = _stack_chk_guard;
  RakNet::BitStream::BitStream((RakNet::BitStream *)&v18);
  do
    v9 = RakWebSocketClient::_getRandomUnsignedInt((RakWebSocketClient *)v5);
  while ( !v9 );
  RakWebSocketDataFrame::writeFrameToStream((int)&v18, v8, v7, v6, a5, v9);
  v10 = *(void (**)(void))(**(_DWORD **)v5 + 12);
  v11 = *(_DWORD *)(v5 + 4);
  v12 = (int *)(v5 + 8);
  v13 = 128;
  v14 = &v17;
  {
    v15 = *v12;
    ++v12;
    v13 -= 4;
    *v14 = v15;
    ++v14;
  }
  while ( v13 );
  v10();
  RakNet::BitStream::~BitStream((RakNet::BitStream *)&v18);
  if ( _stack_chk_guard != v19 )
    _stack_chk_fail(_stack_chk_guard - v19);
  return 1;
}


int __fastcall RakWebSocketClient::_processOpenHandshakePackets(RakWebSocketClient *this, RakNet::BitStream *a2)
{
  RakWebSocketClient *v2; // r4@1
  HttpHeaders *v3; // r5@1
  RakNet::BitStream *v4; // r6@1
  int result; // r0@3

  v2 = this;
  v3 = (RakWebSocketClient *)((char *)this + 548);
  v4 = a2;
  if ( HttpHeaders::getState((RakWebSocketClient *)((char *)this + 548)) != 7 )
    RakWebSocketClient::_subProcessHttpResponse(v2, v4);
  result = HttpHeaders::getState(v3);
  if ( result == 7 )
  {
    result = *((_DWORD *)v2 + 153);
    if ( result != 1 )
    {
      *((_DWORD *)v2 + 153) = 5;
      result = *((_DWORD *)v2 + 126);
      if ( result )
        result = (*((int (__fastcall **)(_DWORD, _DWORD))v2 + 127))((char *)v2 + 496, (char *)v2 + 460);
    }
  }
  return result;
}


int __fastcall RakWebSocketClient::setMaxFrameSize(int result, unsigned int a2)
{
  *(_DWORD *)(result + 420) = a2;
  return result;
}


int __fastcall RakWebSocketClient::_invokeOnConnectedHandler(int result)
{
  if ( *(_DWORD *)(result + 504) )
    result = (*(int (__fastcall **)(_DWORD, _DWORD))(result + 508))(result + 496, result + 460);
  return result;
}


RakWebSocketClient *__fastcall RakWebSocketClient::~RakWebSocketClient(RakWebSocketClient *this)
{
  RakWebSocketClient *v1; // r11@1
  int v2; // r0@1
  void (*v3)(void); // r12@2
  RakWebSocketClient *v4; // r6@2
  int v5; // r1@2
  signed int v6; // r5@2
  int *v7; // r7@2
  int v8; // t1@3
  void *v9; // r5@5
  void *v10; // r7@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  int *v13; // r0@15
  void *v14; // r0@20
  void *v15; // r0@22
  int v16; // r1@24
  void *v17; // r0@24
  int v18; // r1@25
  void *v19; // r0@25
  int v20; // r1@26
  void *v21; // r0@26
  int v22; // r1@27
  void *v23; // r0@27
  int v24; // r1@28
  void *v25; // r0@28
  int v26; // r1@29
  void *v27; // r0@29
  int v28; // r1@30
  void *v29; // r0@30
  int v30; // r1@31
  void *v31; // r0@31
  void (*v32)(void); // r3@32
  void (*v33)(void); // r3@34
  void (*v34)(void); // r3@36
  int v35; // r1@38
  void *v36; // r0@38
  int v37; // r1@39
  void *v38; // r0@39
  unsigned int *v40; // r2@43
  signed int v41; // r1@45
  unsigned int *v42; // r2@47
  signed int v43; // r1@49
  unsigned int *v44; // r2@51
  signed int v45; // r1@53
  unsigned int *v46; // r2@55
  signed int v47; // r1@57
  unsigned int *v48; // r2@59
  signed int v49; // r1@61
  unsigned int *v50; // r2@63
  signed int v51; // r1@65
  unsigned int *v52; // r2@67
  signed int v53; // r1@69
  unsigned int *v54; // r2@71
  signed int v55; // r1@73
  unsigned int *v56; // r2@75
  signed int v57; // r1@77
  unsigned int *v58; // r2@79
  signed int v59; // r1@81
  int v60; // [sp+0h] [bp-A0h]@2

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_DWORD *)v2 + 16);
    v4 = (RakWebSocketClient *)((char *)v1 + 16);
    v5 = *((_DWORD *)v1 + 1);
    v6 = 120;
    v7 = &v60;
    do
    {
      v8 = *(_DWORD *)v4;
      v4 = (RakWebSocketClient *)((char *)v4 + 4);
      v6 -= 4;
      *v7 = v8;
      ++v7;
    }
    while ( v6 );
    v3();
  }
  v10 = (void *)(*((_QWORD *)v1 + 75) >> 32);
  v9 = (void *)*((_QWORD *)v1 + 75);
  if ( v9 != v10 )
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
      {
        v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
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
      }
      v9 = (char *)v9 + 4;
    while ( v9 != v10 );
    v9 = (void *)*((_DWORD *)v1 + 150);
  if ( v9 )
    operator delete(v9);
  v14 = (void *)*((_DWORD *)v1 + 149);
  if ( v14 )
    operator delete(v14);
  *((_DWORD *)v1 + 149) = 0;
  v15 = (void *)*((_DWORD *)v1 + 148);
  if ( v15 )
    operator delete(v15);
  *((_DWORD *)v1 + 148) = 0;
  HttpHeaders::~HttpHeaders((RakWebSocketClient *)((char *)v1 + 548));
  v16 = *((_DWORD *)v1 + 136);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
    else
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = *((_DWORD *)v1 + 135);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v18 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 134);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v20 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = *((_DWORD *)v1 + 132);
  v23 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v22 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = *((_DWORD *)v1 + 131);
  v25 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v24 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = *((_DWORD *)v1 + 130);
  v27 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v26 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = *((_DWORD *)v1 + 129);
  v29 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v28 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = *((_DWORD *)v1 + 128);
  v31 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v30 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void (*)(void))*((_DWORD *)v1 + 126);
  if ( v32 )
    v32();
  v33 = (void (*)(void))*((_DWORD *)v1 + 122);
  if ( v33 )
    v33();
  v34 = (void (*)(void))*((_DWORD *)v1 + 118);
  if ( v34 )
    v34();
  v35 = *((_DWORD *)v1 + 115);
  v36 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v35 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  RakWebSocketDataFrameParser::~RakWebSocketDataFrameParser((RakWebSocketClient *)((char *)v1 + 424));
  v37 = *((_DWORD *)v1 + 103);
  v38 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v37 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  RakNet::BitStream::~BitStream((RakWebSocketClient *)((char *)v1 + 136));
  if ( *(_DWORD *)v1 )
    (*(void (**)(void))(**(_DWORD **)v1 + 4))();
  *(_DWORD *)v1 = 0;
  return v1;
}


char *__fastcall RakWebSocketClient::_validateFields(RakWebSocketClient *this)
{
  RakWebSocketClient *v1; // r4@1
  char *v2; // r0@1
  void *v3; // r0@1
  signed int v4; // r6@2
  void *v5; // r0@2
  void *v6; // r0@9
  char *v7; // r0@10
  char *v8; // r0@11
  unsigned __int8 *v9; // r0@12
  char *result; // r0@13
  signed int v11; // r6@15
  void *v12; // r0@15
  unsigned int *v13; // r2@23
  signed int v14; // r1@25
  unsigned int *v15; // r2@27
  signed int v16; // r1@29
  unsigned int *v17; // r2@31
  signed int v18; // r1@33
  unsigned int *v19; // r2@35
  signed int v20; // r1@37
  unsigned int *v21; // r2@39
  signed int v22; // r1@41
  unsigned int *v23; // r2@43
  signed int v24; // r1@45
  signed int v25; // r6@51
  void *v26; // r0@51
  size_t v27; // r2@53
  unsigned int *v28; // r2@84
  signed int v29; // r1@86
  signed int v30; // r6@92
  void *v31; // r0@92
  unsigned int *v32; // r2@103
  signed int v33; // r1@105
  signed int v34; // r5@107
  void *v35; // r0@107
  __int64 v36; // kr00_8@108
  unsigned int *v37; // r2@135
  signed int v38; // r1@137
  unsigned int *v39; // r2@155
  signed int v40; // r1@157
  int v41; // [sp+8h] [bp-160h]@117
  int v42; // [sp+10h] [bp-158h]@139
  int v43; // [sp+18h] [bp-150h]@126
  int v44; // [sp+20h] [bp-148h]@107
  int v45; // [sp+28h] [bp-140h]@94
  int v46; // [sp+30h] [bp-138h]@92
  int v47; // [sp+38h] [bp-130h]@55
  int v48; // [sp+40h] [bp-128h]@51
  int v49; // [sp+48h] [bp-120h]@18
  int v50; // [sp+50h] [bp-118h]@15
  int v51; // [sp+58h] [bp-110h]@5
  int v52; // [sp+60h] [bp-108h]@2
  void *s1; // [sp+64h] [bp-104h]@2
  int v54; // [sp+68h] [bp-100h]@1
  void *s2; // [sp+6Ch] [bp-FCh]@1
  unsigned __int8 *v56; // [sp+70h] [bp-F8h]@1
  char v57; // [sp+78h] [bp-F0h]@1
  char v58; // [sp+8Ch] [bp-DCh]@1
  RakNet *v59; // [sp+150h] [bp-18h]@1

  v1 = this;
  v59 = _stack_chk_guard;
  v56 = (unsigned __int8 *)&unk_28898CC;
  sub_21E72F0((const void **)&v56, (const void **)this + 134);
  sub_21E7408((const void **)&v56, "258EAFA5-E914-47DA-95CA-C5AB0DC85B11", 0x24u);
  CSHA1::CSHA1((CSHA1 *)&v58);
  CSHA1::Reset((CSHA1 *)&v58);
  CSHA1::Update((CSHA1 *)&v58, v56, *((_DWORD *)v56 - 3));
  CSHA1::Final((CSHA1 *)&v58);
  v2 = CSHA1::GetHash((CSHA1 *)&v58);
  _aeabi_memcpy(&v57, v2, 20);
  Util::base64_encode((Util *)&v54, (const unsigned __int8 *)&v57, 0x14u, 1);
  Util::stringTrim((int *)&s2, &v54);
  v3 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v54 - 4);
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
  s1 = &unk_28898CC;
  sub_21E94B4((void **)&v52, "upgrade");
  v4 = HttpHeaders::getHeader((int)v1 + 548, (const void **)&v52, (int *)&s1);
  v5 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v52 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  if ( v4 != 1 || sub_21E7D6C((const void **)&s1, "websocket") )
    sub_21E94B4(
      (void **)&v51,
      "Error processing headers: upgrade header not found or didn't contain 'websocket' value.");
    if ( *((_DWORD *)v1 + 153) != 1 )
      if ( *((_DWORD *)v1 + 103) != v51 )
        EntityInteraction::setInteractText((int *)v1 + 103, &v51);
      *((_BYTE *)v1 + 418) = 1;
      RakWebSocketClient::_close((int)v1, 1002);
    v6 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) == &dword_28898C0 )
      goto LABEL_10;
    v13 = (unsigned int *)(v51 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      goto LABEL_149;
LABEL_148:
    v14 = (*v13)--;
    goto LABEL_149;
  sub_21E94B4((void **)&v50, "connection");
  v11 = HttpHeaders::getHeader((int)v1 + 548, (const void **)&v50, (int *)&s1);
  v12 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v50 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  if ( v11 != 1 || sub_21E7D6C((const void **)&s1, "Upgrade") )
      (void **)&v49,
      "Error processing headers: connection header not found or didn't contain 'Upgrade' value.");
      if ( *((_DWORD *)v1 + 103) != v49 )
        EntityInteraction::setInteractText((int *)v1 + 103, &v49);
    v6 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v49 - 4);
      if ( !&pthread_create )
        goto LABEL_148;
LABEL_149:
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  else
    sub_21E94B4((void **)&v48, "sec-websocket-accept");
    v25 = HttpHeaders::getHeader((int)v1 + 548, (const void **)&v48, (int *)&s1);
    v26 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v48 - 4);
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
        j_j_j_j__ZdlPv_9(v26);
    if ( v25 == 1 && (v27 = *((_DWORD *)s1 - 3), v27 == *((_DWORD *)s2 - 3)) && !memcmp(s1, s2, v27) )
      sub_21E94B4((void **)&v46, "sec-websocket-extensions");
      v30 = HttpHeaders::getHeader((int)v1 + 548, (const void **)&v46, (int *)&s1);
      v31 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v46 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
        }
        else
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      if ( v30 == 1 )
        sub_21E94B4(
          (void **)&v45,
          "Error processing headers: response contained extensions header but implementation doesn't support extensions.");
        if ( *((_DWORD *)v1 + 153) != 1 )
          if ( *((_DWORD *)v1 + 103) != v45 )
            EntityInteraction::setInteractText((int *)v1 + 103, &v45);
          *((_BYTE *)v1 + 418) = 1;
          RakWebSocketClient::_close((int)v1, 1008);
        v6 = (void *)(v45 - 12);
        if ( (int *)(v45 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v45 - 4);
          if ( !&pthread_create )
            goto LABEL_148;
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          goto LABEL_149;
        sub_21E94B4((void **)&v44, "sec-websocket-protocol");
        v34 = HttpHeaders::getHeader((int)v1 + 548, (const void **)&v44, (int *)&s1);
        v35 = (void *)(v44 - 12);
        if ( (int *)(v44 - 12) != &dword_28898C0 )
          v39 = (unsigned int *)(v44 - 4);
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
            j_j_j_j__ZdlPv_9(v35);
        v36 = *((_QWORD *)v1 + 75);
        if ( v34 == 1 )
          if ( (_DWORD)v36 == HIDWORD(v36) )
            sub_21E94B4(
              (void **)&v43,
              "Error processing headers: response contained sub protocol header but sub protocols weren't requested.");
            if ( *((_DWORD *)v1 + 153) != 1 )
            {
              if ( *((_DWORD *)v1 + 103) != v43 )
                EntityInteraction::setInteractText((int *)v1 + 103, &v43);
              *((_BYTE *)v1 + 418) = 1;
              RakWebSocketClient::_close((int)v1, 1008);
            }
            v6 = (void *)(v43 - 12);
            if ( (int *)(v43 - 12) != &dword_28898C0 )
              v13 = (unsigned int *)(v43 - 4);
              if ( !&pthread_create )
                goto LABEL_148;
              __dmb();
              do
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
              goto LABEL_149;
            if ( std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
                   v36,
                   (const void **)HIDWORD(v36),
                   (const void **)&s1) != (const void **)HIDWORD(v36) )
              EntityInteraction::setInteractText((int *)v1 + 115, (int *)&s1);
              goto LABEL_10;
            sub_21E94B4((void **)&v42, "Error processing headers: Sub protocol(s) response was not of any requested.");
              if ( *((_DWORD *)v1 + 103) != v42 )
                EntityInteraction::setInteractText((int *)v1 + 103, &v42);
              RakWebSocketClient::_close((int)v1, 1002);
            v6 = (void *)(v42 - 12);
            if ( (int *)(v42 - 12) != &dword_28898C0 )
              v13 = (unsigned int *)(v42 - 4);
        else if ( (_DWORD)v36 != HIDWORD(v36) )
          sub_21E94B4(
            (void **)&v41,
            "Error processing headers: Sub protocol(s) requested but server doesn't support it.");
          if ( *((_DWORD *)v1 + 153) != 1 )
            if ( *((_DWORD *)v1 + 103) != v41 )
              EntityInteraction::setInteractText((int *)v1 + 103, &v41);
            *((_BYTE *)v1 + 418) = 1;
            RakWebSocketClient::_close((int)v1, 1008);
          v6 = (void *)(v41 - 12);
          if ( (int *)(v41 - 12) != &dword_28898C0 )
            v13 = (unsigned int *)(v41 - 4);
            if ( !&pthread_create )
              goto LABEL_148;
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            goto LABEL_149;
      sub_21E94B4(
        (void **)&v47,
        "Error processing headers: connection header not found or didn't contain correct encoded key value.");
      if ( *((_DWORD *)v1 + 153) != 1 )
        if ( *((_DWORD *)v1 + 103) != v47 )
          EntityInteraction::setInteractText((int *)v1 + 103, &v47);
        *((_BYTE *)v1 + 418) = 1;
        RakWebSocketClient::_close((int)v1, 1002);
      v6 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v47 - 4);
        if ( !&pthread_create )
          goto LABEL_148;
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        goto LABEL_149;
LABEL_10:
  v7 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)((char *)s1 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)((char *)s2 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  CSHA1::~CSHA1((CSHA1 *)&v58);
  v9 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v56 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  result = (char *)(_stack_chk_guard - v59);
  if ( _stack_chk_guard != v59 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall RakWebSocketClient::isDisconnected(RakWebSocketClient *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 153);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


signed int __fastcall RakWebSocketClient::_sendBinaryFrame(RakWebSocketClient *this, const unsigned __int8 *a2, unsigned __int64 a3)
{
  RakWebSocketClient::_sendNonControlFrame((int)this, a2, a3, 2);
  return 1;
}


void __fastcall RakWebSocketClient::_splitWebSocketURI(int a1, int *a2, const void **a3, const void **a4, const void **a5)
{
  int *v5; // r5@1
  const void **v6; // r10@1
  int *v7; // r9@1
  const void *v8; // r4@1
  unsigned int v9; // r6@1
  unsigned int v10; // r7@1
  void *v11; // r0@5
  unsigned int v12; // r5@8
  unsigned int v13; // r3@13
  void *v14; // r0@14
  unsigned int v15; // r2@15
  unsigned int v16; // r3@16
  void *v17; // r0@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@27
  signed int v21; // r1@29
  unsigned int *v22; // r2@31
  signed int v23; // r1@33
  int v24; // [sp+0h] [bp-30h]@17
  int v25; // [sp+4h] [bp-2Ch]@14
  int v26; // [sp+8h] [bp-28h]@5

  v5 = (int *)a3;
  v6 = a4;
  v7 = a2;
  sub_21E7EE0(a3, 0, *((_BYTE **)*a3 - 3), 0);
  sub_21E7EE0(v6, 0, *((_BYTE **)*v6 - 3), 0);
  sub_21E7EE0(a5, 0, *((_BYTE **)*a5 - 3), 0);
  v8 = (const void *)*v7;
  v9 = *(_DWORD *)(*v7 - 12);
  v10 = *(_DWORD *)(dword_27F79C0 - 12);
  if ( !memcmp((const void *)dword_27F79C0, (const void *)*v7, *(_DWORD *)(dword_27F79C0 - 12))
    || (v10 = *(_DWORD *)(dword_27F79C4 - 12), !memcmp((const void *)dword_27F79C4, v8, *(_DWORD *)(dword_27F79C4 - 12))) )
  {
    if ( v10 )
    {
      sub_21E9040((void **)&v26, v7, 0, v10);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v26);
      v11 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
      {
        v22 = (unsigned int *)(v26 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      v8 = (const void *)*v7;
    }
    else
      v10 = 0;
  }
  else
    v10 = 0;
  v12 = v9;
  if ( v10 < v9 )
    v12 = v10;
    while ( *((_BYTE *)v8 + v12) != 47 )
      if ( ++v12 >= v9 )
        v12 = v9;
        break;
  v13 = *((_DWORD *)v8 - 3);
  if ( v13 < v10 )
    sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v10, v13);
  sub_21E9040((void **)&v25, v7, v10, v12 - v10);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)v6, &v25);
  v14 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = v12 + 1;
  if ( v9 >= v12 + 1 )
    v16 = *(_DWORD *)(*v7 - 12);
    if ( v16 < v15 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v15, v16);
    sub_21E9040((void **)&v24, v7, v15, v9 - v15);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)a5,
      &v24);
    v17 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
}


int __fastcall RakWebSocketClient::_invokeOnCloseHandler(int result)
{
  if ( *(_DWORD *)(result + 488) )
    result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(result + 492))(
               result + 480,
               *(_WORD *)(result + 416),
               result + 412);
  return result;
}


RakNet *__fastcall RakWebSocketClient::tick(RakWebSocketClient *this)
{
  RakWebSocketClient *v1; // r8@1
  unsigned int *v2; // r2@5
  signed int v3; // r1@7
  void *v4; // r0@17
  unsigned int *v5; // r2@21
  signed int v6; // r1@23
  void *v7; // r0@33
  _DWORD *v8; // r0@36
  __int64 v9; // r1@36
  int v10; // r4@36
  RakWebSocketClient *v11; // r6@39
  signed int v12; // r5@39
  int *v13; // r4@39
  void (*v14)(void); // r12@39
  int v15; // r1@39
  int v16; // t1@40
  _DWORD *v17; // r0@44
  __int64 v18; // r1@44
  int v19; // r4@47
  signed __int64 v20; // r2@47
  signed int v21; // r7@47
  bool v22; // cf@47
  __int64 v23; // r0@47
  void *v24; // r0@58
  unsigned int *v25; // r2@59
  signed int v26; // r1@61
  __int64 v27; // r0@63
  unsigned int v28; // r11@64
  _DWORD *v29; // r0@65
  __int64 v30; // r1@65
  unsigned int *v31; // r2@67
  signed int v32; // r1@69
  unsigned int *v33; // r2@71
  signed int v34; // r1@73
  const void **v35; // r0@84
  char *v36; // r0@84
  char *v37; // r0@85
  __int64 v38; // r2@87
  void *v39; // r0@87
  int v40; // r2@88
  void (*v41)(void); // r12@88
  int v42; // r3@88
  RakWebSocketClient *v43; // r6@88
  signed int v44; // r4@88
  int *v45; // r5@88
  int v46; // t1@89
  int v47; // r4@90
  int v48; // r12@90
  RakNet *result; // r0@91
  unsigned int *v50; // r2@93
  signed int v51; // r1@95
  int v52; // [sp+0h] [bp-4B0h]@39
  int v53; // [sp+4h] [bp-4ACh]@87
  int (**v54)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+80h] [bp-430h]@4
  _DWORD *v55; // [sp+84h] [bp-42Ch]@65
  __int64 v56; // [sp+8Ch] [bp-424h]@65
  int v57; // [sp+98h] [bp-418h]@54
  _DWORD *v58; // [sp+9Ch] [bp-414h]@44
  __int64 v59; // [sp+A4h] [bp-40Ch]@44
  int v60; // [sp+ACh] [bp-404h]@87
  char *v61; // [sp+B0h] [bp-400h]@71
  char *v62; // [sp+B4h] [bp-3FCh]@67
  int v63; // [sp+BCh] [bp-3F4h]@63
  _DWORD *v64; // [sp+C0h] [bp-3F0h]@36
  __int64 v65; // [sp+C8h] [bp-3E8h]@36
  int v66; // [sp+D4h] [bp-3DCh]@21
  int v67; // [sp+DCh] [bp-3D4h]@5
  __int64 v68; // [sp+E0h] [bp-3D0h]@47
  char v69; // [sp+ECh] [bp-3C4h]@34
  char v70; // [sp+170h] [bp-340h]@19
  char v71; // [sp+1F4h] [bp-2BCh]@18
  char v72; // [sp+278h] [bp-238h]@3
  char v73; // [sp+2FCh] [bp-1B4h]@2
  char v74; // [sp+380h] [bp-130h]@1
  char v75; // [sp+404h] [bp-ACh]@1
  RakNet *v76; // [sp+488h] [bp-28h]@1

  v1 = this;
  v76 = _stack_chk_guard;
  RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v75);
  (*(void (__fastcall **)(char *))(**(_DWORD **)v1 + 32))(&v74);
  RakNet::SystemAddress::operator=((int)&v75, (int)&v74);
  if ( RakNet::SystemAddress::operator!=((int)&v75, (int)&unk_27F7938) == 1 )
  {
    do
    {
      *((_DWORD *)v1 + 153) = 3;
      RakNet::SystemAddress::operator=((int)v1 + 4, (int)&v75);
      (*(void (__fastcall **)(char *))(**(_DWORD **)v1 + 32))(&v73);
      RakNet::SystemAddress::operator=((int)&v75, (int)&v73);
    }
    while ( RakNet::SystemAddress::operator!=((int)&v75, (int)&unk_27F7938) );
  }
  (*(void (__fastcall **)(char *))(**(_DWORD **)v1 + 36))(&v72);
  RakNet::SystemAddress::operator=((int)&v75, (int)&v72);
    v54 = &pthread_create;
      sub_21E94B4((void **)&v67, "Failed to establish TCP connection");
      if ( *((_DWORD *)v1 + 153) != 1 )
      {
        if ( *((_DWORD *)v1 + 103) != v67 )
          EntityInteraction::setInteractText((int *)v1 + 103, &v67);
        *((_BYTE *)v1 + 418) = 1;
        RakWebSocketClient::_close((int)v1, 1011);
      }
      v4 = (void *)(v67 - 12);
      if ( (int *)(v67 - 12) != &dword_28898C0 )
        v2 = (unsigned int *)(v67 - 4);
        if ( v54 )
        {
          __dmb();
          do
            v3 = __ldrex(v2);
          while ( __strex(v3 - 1, v2) );
        }
        else
          v3 = (*v2)--;
        if ( v3 <= 0 )
          j_j_j_j__ZdlPv_9(v4);
      (*(void (__fastcall **)(char *))(**(_DWORD **)v1 + 36))(&v71);
      RakNet::SystemAddress::operator=((int)&v75, (int)&v71);
  (*(void (__fastcall **)(char *))(**(_DWORD **)v1 + 40))(&v70);
  RakNet::SystemAddress::operator=((int)&v75, (int)&v70);
      sub_21E94B4((void **)&v66, "Lost connection to remote endpoint");
        if ( *((_DWORD *)v1 + 103) != v66 )
          EntityInteraction::setInteractText((int *)v1 + 103, &v66);
        RakWebSocketClient::_close((int)v1, 4999);
      v7 = (void *)(v66 - 12);
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v66 - 4);
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      (*(void (__fastcall **)(char *))(**(_DWORD **)v1 + 40))(&v69);
      RakNet::SystemAddress::operator=((int)&v75, (int)&v69);
  switch ( *((_DWORD *)v1 + 153) )
    case 1:
      v8 = operator new(4u);
      LODWORD(v9) = sub_165C59A;
      *v8 = v1;
      HIDWORD(v9) = sub_165C594;
      v64 = v8;
      v65 = v9;
      v10 = RakWebSocketClient::_processPacket(v1, (int)&v64);
      if ( (_DWORD)v65 )
        ((void (*)(void))v65)();
      if ( !v10 )
        v11 = (RakWebSocketClient *)((char *)v1 + 16);
        v12 = 120;
        v13 = &v52;
        v14 = *(void (**)(void))(**(_DWORD **)v1 + 16);
        v15 = *((_DWORD *)v1 + 1);
        do
          v16 = *(_DWORD *)v11;
          v11 = (RakWebSocketClient *)((char *)v11 + 4);
          v12 -= 4;
          *v13 = v16;
          ++v13;
        while ( v12 );
        v14();
        if ( *((_DWORD *)v1 + 122) )
          (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 123))(
            (char *)v1 + 480,
            *((_WORD *)v1 + 208),
            (char *)v1 + 412);
        RakWebSocketClient::_reset(v1);
      break;
    case 4:
      v17 = operator new(4u);
      LODWORD(v18) = sub_165C622;
      *v17 = v1;
      HIDWORD(v18) = sub_165C5D0;
      v58 = v17;
      v59 = v18;
      RakWebSocketClient::_processPacket(v1, (int)&v58);
      if ( (_DWORD)v59 )
        ((void (*)(void))v59)();
      if ( *((_DWORD *)v1 + 153) == 4 )
        v19 = *((_DWORD *)v1 + 149);
        sub_21E034C(&v68);
        v23 = v68 - *(_QWORD *)(v19 + 8);
        v20 = 1000000000LL * *(_QWORD *)(v19 + 16);
        v21 = 0;
        v22 = (unsigned int)v20 >= (unsigned int)v23;
        LODWORD(v23) = 0;
        if ( v22 )
          LODWORD(v23) = 1;
        if ( SHIDWORD(v20) >= SHIDWORD(v23) )
          v21 = 1;
        if ( HIDWORD(v20) == HIDWORD(v23) )
          v21 = v23;
        if ( !v21 )
          sub_21E94B4((void **)&v57, "Timed out waiting for Open Handshake response.");
          if ( *((_DWORD *)v1 + 153) != 1 )
          {
            if ( *((_DWORD *)v1 + 103) != v57 )
              EntityInteraction::setInteractText((int *)v1 + 103, &v57);
            *((_BYTE *)v1 + 418) = 1;
            RakWebSocketClient::_close((int)v1, 4998);
          }
          v24 = (void *)(v57 - 12);
          if ( (int *)(v57 - 12) != &dword_28898C0 )
            v25 = (unsigned int *)(v57 - 4);
            if ( !&pthread_create )
              goto LABEL_101;
            __dmb();
            do
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            goto LABEL_102;
    case 3:
      RakWebSocketClient::_createWebSocketKey(v1);
      sub_21E94B4((void **)&v63, (const char *)&unk_257BC67);
      v27 = *((_QWORD *)v1 + 75);
      if ( HIDWORD(v27) != (_DWORD)v27 )
        v28 = 0;
        v54 = &pthread_create;
          sub_21E72F0((const void **)&v63, (const void **)(v27 + 4 * v28));
          if ( v28 >= ((signed int)((*((_QWORD *)v1 + 75) >> 32) - *((_QWORD *)v1 + 75)) >> 2) - 1 )
            v61 = (char *)&unk_28898CC;
            sub_21E6FCC((const void **)&v61, *(_DWORD *)(v63 - 12) + 24);
            sub_21E7408((const void **)&v61, "Sec-WebSocket-Protocol: ", 0x18u);
            sub_21E72F0((const void **)&v61, (const void **)&v63);
            v35 = sub_21E7408((const void **)&v61, "\r\n", 2u);
            v62 = (char *)*v35;
            *v35 = &unk_28898CC;
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              &v63,
              (int *)&v62);
            v36 = v62 - 12;
            if ( (int *)(v62 - 12) != &dword_28898C0 )
            {
              v31 = (unsigned int *)(v62 - 4);
              if ( v54 )
              {
                __dmb();
                do
                  v32 = __ldrex(v31);
                while ( __strex(v32 - 1, v31) );
              }
              else
                v32 = (*v31)--;
              if ( v32 <= 0 )
                j_j_j_j__ZdlPv_9(v36);
            }
            v37 = v61 - 12;
            if ( (int *)(v61 - 12) != &dword_28898C0 )
              v33 = (unsigned int *)(v61 - 4);
                  v34 = __ldrex(v33);
                while ( __strex(v34 - 1, v33) );
                v34 = (*v33)--;
              if ( v34 <= 0 )
                j_j_j_j__ZdlPv_9(v37);
          else
            sub_21E7408((const void **)&v63, ", ", 2u);
          v27 = *((_QWORD *)v1 + 75);
          ++v28;
        while ( v28 < (HIDWORD(v27) - (signed int)v27) >> 2 );
      HIDWORD(v38) = *((_DWORD *)v1 + 130);
      LODWORD(v38) = *((_DWORD *)v1 + 132);
      v52 = *((_DWORD *)v1 + 134);
      v53 = v63;
      Util::format(
        (Util *)&v60,
        "GET /%s HTTP/1.1\r\n"
        "Upgrade: websocket\r\n"
        "Connection: Upgrade\r\n"
        "Host: %s\r\n"
        "Sec-WebSocket-Version: 13\r\n"
        "Sec-WebSocket-Key: %s\r\n"
        "%s\r\n",
        v38,
        v52,
        v63);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v1 + 135,
        &v60);
      v39 = (void *)(v60 - 12);
      if ( (int *)(v60 - 12) != &dword_28898C0 )
        v50 = (unsigned int *)(v60 - 4);
        if ( &pthread_create )
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      RakNet::BitStream::Reset((RakWebSocketClient *)((char *)v1 + 136));
      v40 = *(_DWORD *)(*((_DWORD *)v1 + 135) - 12);
      v41 = *(void (**)(void))(**(_DWORD **)v1 + 12);
      v42 = *((_DWORD *)v1 + 1);
      v43 = (RakWebSocketClient *)((char *)v1 + 8);
      v44 = 128;
      v45 = &v52;
      do
        v46 = *(_DWORD *)v43;
        v43 = (RakWebSocketClient *)((char *)v43 + 4);
        v44 -= 4;
        *v45 = v46;
        ++v45;
      while ( v44 );
      v41();
      v47 = *((_DWORD *)v1 + 149);
      sub_21E034C(&v68);
      v48 = v47 + 8;
      *(_QWORD *)v48 = v68;
      *(_DWORD *)(v48 + 8) = 5;
      *(_DWORD *)(v47 + 20) = 0;
      *(_BYTE *)(v47 + 24) = 0;
      *(_BYTE *)(v47 + 1) = 0;
      *((_DWORD *)v1 + 153) = 4;
      v24 = (void *)(v63 - 12);
      if ( (int *)(v63 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v63 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
LABEL_101:
          v26 = (*v25)--;
LABEL_102:
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
    case 5:
      v29 = operator new(4u);
      LODWORD(v30) = sub_165C660;
      *v29 = v1;
      HIDWORD(v30) = sub_165C658;
      v55 = v29;
      v56 = v30;
      RakWebSocketClient::_processPacket(v1, (int)&v55);
      if ( (_DWORD)v56 )
        ((void (*)(void))v56)();
    default:
  result = (RakNet *)(_stack_chk_guard - v76);
  if ( _stack_chk_guard != v76 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall RakWebSocketClient::connect(RakWebSocketClient *a1, int *a2)
{
  int v2; // r9@1
  void *v3; // r5@1
  void *v4; // r7@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  __int64 v9; // [sp+4h] [bp-34h]@1
  int v10; // [sp+Ch] [bp-2Ch]@1

  v9 = 0LL;
  v10 = 0;
  v2 = RakWebSocketClient::connect(a1, a2, (unsigned __int64 *)&v9);
  v4 = (void *)HIDWORD(v9);
  v3 = (void *)v9;
  if ( (_DWORD)v9 != HIDWORD(v9) )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 4;
    }
    while ( v3 != v4 );
    v3 = (void *)v9;
  }
  if ( v3 )
    operator delete(v3);
  return v2;
}


void __fastcall RakWebSocketClient::_subProcessHttpResponse(RakWebSocketClient *this, RakNet::BitStream *a2)
{
  RakWebSocketClient::_subProcessHttpResponse(this, a2);
}


signed int __fastcall RakWebSocketClient::sendBinary(RakWebSocketClient *this, const unsigned __int8 *a2, unsigned __int64 a3)
{
  signed int result; // r0@2

  if ( *((_DWORD *)this + 153) == 5 )
  {
    RakWebSocketClient::_sendNonControlFrame((int)this, a2, a3, 2);
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall RakWebSocketClient::_createWebSocketKey(RakWebSocketClient *this)
{
  RakWebSocketClient *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@2
  unsigned __int8 *v4; // r0@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  int v11; // [sp+0h] [bp-28h]@1
  int v12; // [sp+4h] [bp-24h]@1
  unsigned int v13; // [sp+8h] [bp-20h]@1
  unsigned int v14; // [sp+Ch] [bp-1Ch]@1
  unsigned __int8 *v15; // [sp+10h] [bp-18h]@1

  v1 = this;
  v15 = (unsigned __int8 *)&unk_28898CC;
  v14 = RakWebSocketClient::_getRandomUnsignedInt(this);
  v13 = RakWebSocketClient::_getRandomUnsignedInt(v1);
  sub_21E7408((const void **)&v15, (char *)&v14, 4u);
  sub_21E7408((const void **)&v15, (char *)&v13, 4u);
  Util::base64_encode((Util *)&v11, v15, *((_DWORD *)v15 - 3), 1);
  Util::stringTrim(&v12, &v11);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 134,
    &v12);
  v2 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  v3 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v11 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  v4 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v15 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
}


signed int __fastcall RakWebSocketClient::_sendCloseFrame(int a1, __int16 a2, const void **a3)
{
  int v3; // r4@1
  const void **v4; // r5@1
  signed int v5; // r4@1
  unsigned __int8 *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  const unsigned __int8 *v10; // [sp+8h] [bp-20h]@1
  __int16 v11; // [sp+Eh] [bp-1Ah]@1

  v3 = a1;
  v4 = a3;
  v11 = a2;
  v10 = (const unsigned __int8 *)&unk_28898CC;
  sub_21E7408((const void **)&v10, (char *)&v11, 2u);
  sub_21E72F0((const void **)&v10, v4);
  v5 = RakWebSocketClient::_sendControlFrame(v3, v10, *((_DWORD *)v10 - 3), 0, 8);
  v6 = (unsigned __int8 *)(v10 - 12);
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
  }
  return v5;
}


int __fastcall RakWebSocketClient::RakWebSocketClient(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r2@1
  void *v4; // r5@1
  _DWORD *v5; // r0@1
  __int64 v6; // r1@1
  _DWORD *v8; // [sp+8h] [bp-38h]@1
  __int64 v9; // [sp+10h] [bp-30h]@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  *(_DWORD *)a1 = v3;
  RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)(a1 + 4));
  RakNet::BitStream::BitStream((RakNet::BitStream *)(v2 + 136));
  *(_DWORD *)(v2 + 412) = &unk_28898CC;
  *(_WORD *)(v2 + 416) = 1000;
  *(_BYTE *)(v2 + 418) = 0;
  *(_DWORD *)(v2 + 420) = -1;
  RakWebSocketDataFrameParser::RakWebSocketDataFrameParser((RakWebSocketDataFrameParser *)(v2 + 424), 1);
  *(_DWORD *)(v2 + 460) = &unk_28898CC;
  *(_DWORD *)(v2 + 472) = 0;
  *(_DWORD *)(v2 + 488) = 0;
  *(_DWORD *)(v2 + 504) = 0;
  *(_DWORD *)(v2 + 512) = &unk_28898CC;
  *(_DWORD *)(v2 + 516) = &unk_28898CC;
  *(_DWORD *)(v2 + 520) = &unk_28898CC;
  *(_DWORD *)(v2 + 524) = &unk_28898CC;
  *(_DWORD *)(v2 + 528) = &unk_28898CC;
  *(_DWORD *)(v2 + 536) = &unk_28898CC;
  *(_DWORD *)(v2 + 540) = &unk_28898CC;
  *(_DWORD *)(v2 + 544) = &unk_28898CC;
  HttpHeaders::HttpHeaders(v2 + 548);
  *(_DWORD *)(v2 + 592) = 0;
  v4 = operator new(0x28u);
  _aeabi_memclr8(v4, 40);
  *(_QWORD *)(v2 + 596) = (unsigned int)v4;
  *(_DWORD *)(v2 + 604) = 0;
  *(_DWORD *)(v2 + 608) = 0;
  RakWebSocketClient::_reset((RakWebSocketClient *)v2);
  v5 = operator new(4u);
  LODWORD(v6) = sub_165C55E;
  *v5 = v2;
  HIDWORD(v6) = sub_165C528;
  v8 = v5;
  v9 = v6;
  RakWebSocketDataFrameParser::setOnFailHandler(v2 + 424, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  return v2;
}


unsigned int __fastcall RakWebSocketClient::close(RakWebSocketClient *this, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r8@1
  RakWebSocketClient *v5; // r9@1
  unsigned int result; // r0@1
  RakWebSocketClient *v7; // r6@2
  signed int v8; // r5@2
  int *v9; // r7@2
  void (*v10)(void); // r12@2
  int v11; // r1@2
  int v12; // t1@3
  int v13; // [sp+0h] [bp-98h]@2

  v3 = a2;
  v4 = a3;
  v5 = this;
  result = RakWebSocketClient::_close((int)this, 1000);
  if ( v3 == 1 )
  {
    v7 = (RakWebSocketClient *)((char *)v5 + 16);
    v8 = 120;
    v9 = &v13;
    v10 = *(void (**)(void))(**(_DWORD **)v5 + 16);
    v11 = *((_DWORD *)v5 + 1);
    do
    {
      v12 = *(_DWORD *)v7;
      v7 = (RakWebSocketClient *)((char *)v7 + 4);
      v8 -= 4;
      *v9 = v12;
      ++v9;
    }
    while ( v8 );
    v10();
    if ( v4 == 1 )
      if ( *((_DWORD *)v5 + 122) )
        (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v5 + 123))(
          (char *)v5 + 480,
          *((_WORD *)v5 + 208),
          (char *)v5 + 412);
    result = j_j_j__ZN18RakWebSocketClient6_resetEv(v5);
  }
  return result;
}


int __fastcall RakWebSocketClient::_processPacket(RakNet::BitStream *this, int a2)
{
  RakNet::BitStream *v2; // r5@1
  int v3; // r4@1
  RakNet::BitStream *v4; // r9@1
  char v5; // r6@3
  int v6; // r7@5
  int v7; // r7@10

  v2 = this;
  v3 = a2;
  v4 = (RakNet::BitStream *)((char *)this + 136);
  if ( *((_DWORD *)this + 34) == *((_DWORD *)this + 36) )
    RakNet::BitStream::Reset(v4);
  v5 = 0;
  do
  {
    if ( (*(int (**)(void))(**(_DWORD **)v2 + 20))() == 1 )
    {
      v6 = (*(int (**)(void))(**(_DWORD **)v2 + 24))();
      if ( RakNet::SystemAddress::operator==(v6, (int)v2 + 4) == 1 )
        RakNet::BitStream::WriteAlignedBytes(v4, *(const unsigned __int8 **)(v6 + 160), *(_DWORD *)(v6 + 152));
      (*(void (**)(void))(**(_DWORD **)v2 + 28))();
    }
    if ( *((_DWORD *)v2 + 34) == *((_DWORD *)v2 + 36) )
      break;
    if ( !*(_DWORD *)(v3 + 8) )
      sub_21E5F48();
    v7 = *((_DWORD *)v2 + 153);
    (*(void (__fastcall **)(int, RakNet::BitStream *))(v3 + 12))(v3, v4);
    v5 = 1;
  }
  while ( *((_DWORD *)v2 + 153) == v7 );
  return v5 & 1;
}


signed int __fastcall RakWebSocketClient::_sendControlFrame(int a1, const unsigned __int8 *a2, unsigned int a3, int a4, int a5)
{
  int v5; // r4@1
  unsigned int v6; // r5@1
  const unsigned __int8 *v7; // r6@1
  void *v8; // r0@6
  signed int result; // r0@7
  int v10; // r0@9
  void (*v11)(void); // r12@10
  int v12; // r3@10
  int *v13; // r6@10
  signed int v14; // r5@10
  int *v15; // r4@10
  int v16; // t1@11
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  int v19; // [sp+0h] [bp-1B8h]@10
  int v20; // [sp+84h] [bp-134h]@2
  int v21; // [sp+8Ch] [bp-12Ch]@8
  RakNet *v22; // [sp+1A0h] [bp-18h]@1

  v5 = a1;
  v6 = a3;
  v7 = a2;
  v22 = _stack_chk_guard;
  if ( a4 )
  {
    sub_21E94B4(
      (void **)&v20,
      "Frame Error (send): size of the payload exceeds the supported 32-bit max and control frames can't be fragmented.");
    if ( *(_DWORD *)(v5 + 612) != 1 )
    {
      if ( *(_DWORD *)(v5 + 412) != v20 )
        EntityInteraction::setInteractText((int *)(v5 + 412), &v20);
      *(_BYTE *)(v5 + 418) = 1;
      RakWebSocketClient::_close(v5, 1009);
    }
    v8 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v20 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    result = 0;
  }
  else
    RakNet::BitStream::BitStream((RakNet::BitStream *)&v21);
    do
      v10 = RakWebSocketClient::_getRandomUnsignedInt((RakWebSocketClient *)v5);
    while ( !v10 );
    RakWebSocketDataFrame::writeFrameToStream((int)&v21, v7, v6, a5, 1, v10);
    v11 = *(void (**)(void))(**(_DWORD **)v5 + 12);
    v12 = *(_DWORD *)(v5 + 4);
    v13 = (int *)(v5 + 8);
    v14 = 128;
    v15 = &v19;
      v16 = *v13;
      ++v13;
      v14 -= 4;
      *v15 = v16;
      ++v15;
    while ( v14 );
    v11();
    RakNet::BitStream::~BitStream((RakNet::BitStream *)&v21);
    result = 1;
  if ( _stack_chk_guard != v22 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall RakWebSocketClient::setOnMessageReceivedHandler(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 464;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 464);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 472);
  v10 = v13;
  *(_DWORD *)(v4 + 472) = v8;
  v14 = *(_DWORD *)(v4 + 476);
  *(_DWORD *)(v4 + 476) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


unsigned int __fastcall RakWebSocketClient::_getRandomUnsignedInt(RakWebSocketClient *this)
{
  RakWebSocketClient *v1; // r8@1
  _DWORD *v2; // r5@1
  unsigned int v3; // r1@2
  int v4; // r2@2
  signed int v5; // r3@2
  int v6; // r1@3
  int v7; // r7@3
  int v8; // r6@3
  void *v9; // r0@4

  v1 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 148);
  if ( !v2 )
  {
    v2 = operator new(0x9D4u);
    v3 = sub_21E67AC((int)&Random::mRandomDevice);
    *v2 = v3;
    v2[625] = 625;
    v4 = 0;
    v5 = 1;
    *((_BYTE *)v2 + 2504) = 0;
    v2[627] = 0;
    v2[1] = v3;
    do
    {
      v6 = v3 ^ (v3 >> 30);
      v7 = (int)&v2[v4];
      v8 = v4++ + 1812433253 * v6;
      v3 = v5++ + 1812433253 * v6;
      *(_DWORD *)(v7 + 8) = v8 + 1;
    }
    while ( v4 != 397 );
    v2[625] = 624;
    v2[628] = 398;
    v9 = (void *)*((_DWORD *)v1 + 148);
    *((_DWORD *)v1 + 148) = v2;
    if ( v9 )
      operator delete(v9);
      v2 = (_DWORD *)*((_DWORD *)v1 + 148);
  }
  return j_j_j__ZN6Random13_genRandInt32Ev_1((Random *)v2);
}


int __fastcall RakWebSocketClient::_invokeOnMessageHandler(int result, const RakWebSocketDataFrame *a2)
{
  if ( *(_DWORD *)(result + 472) )
    result = (*(int (__fastcall **)(_DWORD, _DWORD))(result + 476))(result + 464, a2);
  return result;
}


unsigned int __fastcall RakWebSocketClient::_fail(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  unsigned int result; // r0@1

  v3 = a1;
  v4 = a3;
  result = *(_DWORD *)(a1 + 612);
  if ( result != 1 )
  {
    if ( *(_DWORD *)(v3 + 412) != *a2 )
      EntityInteraction::setInteractText((int *)(v3 + 412), a2);
    *(_BYTE *)(v3 + 418) = 1;
    result = j_j_j__ZN18RakWebSocketClient6_closeE15CloseStatusCode(v3, v4);
  }
  return result;
}


signed int __fastcall RakWebSocketClient::isConnecting(RakWebSocketClient *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 153) - 2;
  result = 0;
  if ( v1 < 3 )
    result = 1;
  return result;
}


int __fastcall RakWebSocketClient::_processClosingFrames(RakWebSocketClient *this, RakNet::BitStream *a2)
{
  int result; // r0@1

  result = *(_DWORD *)a2;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a2;
  return result;
}


signed int __fastcall RakWebSocketClient::_sendTextFrame(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  unsigned __int8 *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  const unsigned __int8 *v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  v4 = Util::utf8len(a2, 1);
  Util::utf8substring((const void **)&v9, v2, 0, v4);
  RakWebSocketClient::_sendNonControlFrame(v3, v9, *((_DWORD *)v9 - 3), 1);
  v5 = (unsigned __int8 *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
  return 1;
}


signed int __fastcall RakWebSocketClient::isNegotiating(RakWebSocketClient *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 153) - 3;
  result = 0;
  if ( v1 < 2 )
    result = 1;
  return result;
}


signed int __fastcall RakWebSocketClient::_validateWebSocketURI(RakWebSocketClient *this)
{
  RakWebSocketClient *v1; // r4@1
  _DWORD *v2; // r5@1
  size_t v3; // r6@1
  void *v4; // r0@9
  unsigned int *v5; // r2@10
  signed int v6; // r1@12
  int v7; // r6@24
  RakWebSocketClient *v8; // r5@24
  int v9; // r0@28
  int v10; // r1@40
  int v11; // r2@40
  int v12; // r2@41
  int v13; // r3@42
  _BYTE *v14; // r7@42
  bool v15; // zf@42
  int v16; // r3@45
  bool v17; // zf@45
  int v18; // r2@49
  RakWebSocketClient *v19; // r5@74
  int v20; // r6@74
  int v21; // r0@76
  int v22; // r0@79
  int v23; // r1@79
  int v24; // r1@80
  int v25; // r2@81
  _BYTE *v26; // r7@81
  bool v27; // zf@81
  int v28; // r2@84
  bool v29; // zf@84
  int v30; // r1@88
  int v31; // r0@101
  unsigned int v32; // r7@106
  unsigned int v33; // r6@106
  void *v34; // r0@106
  int v35; // r1@107
  unsigned int v36; // r0@107
  unsigned int v37; // r3@108
  unsigned int *v38; // r0@109
  signed int v39; // r5@109
  void *v40; // r0@109
  signed __int16 v41; // r0@121
  unsigned int *v43; // r2@139
  signed int v44; // r1@141
  unsigned int *v45; // r2@147
  signed int v46; // r1@149
  int v47; // [sp+4h] [bp-54h]@111
  int v48; // [sp+8h] [bp-50h]@109
  int v49; // [sp+Ch] [bp-4Ch]@108
  int v50; // [sp+14h] [bp-44h]@124
  int v51; // [sp+18h] [bp-40h]@106
  int v52; // [sp+20h] [bp-38h]@65
  int v53; // [sp+28h] [bp-30h]@29
  int v54; // [sp+30h] [bp-28h]@5
  int v55; // [sp+38h] [bp-20h]@14

  v1 = this;
  *((_BYTE *)this + 534) = 0;
  v2 = (_DWORD *)*((_DWORD *)this + 129);
  v3 = *(v2 - 3);
  if ( v3 == *(_DWORD *)(dword_27F79C4 - 12) && !memcmp(v2, (const void *)dword_27F79C4, *(v2 - 3)) )
  {
    *((_BYTE *)v1 + 534) = 1;
    sub_21E94B4((void **)&v55, "Invalid URI: Secure websockets not supported.");
    if ( *((_DWORD *)v1 + 153) != 1 )
    {
      if ( *((_DWORD *)v1 + 103) != v55 )
        EntityInteraction::setInteractText((int *)v1 + 103, &v55);
      *((_BYTE *)v1 + 418) = 1;
      RakWebSocketClient::_close((int)v1, 1002);
    }
    v4 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) == &dword_28898C0 )
      return 0;
    v5 = (unsigned int *)(v55 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      goto LABEL_134;
    goto LABEL_133;
  }
  if ( v3 != *(_DWORD *)(dword_27F79C0 - 12) || memcmp(v2, (const void *)dword_27F79C0, v3) )
    sub_21E94B4((void **)&v54, "Invalid URI: not a valid websocket scheme.");
      if ( *((_DWORD *)v1 + 103) != v54 )
        EntityInteraction::setInteractText((int *)v1 + 103, &v54);
    v4 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) == &dword_28898C0 )
    v5 = (unsigned int *)(v54 - 4);
LABEL_133:
    v6 = (*v5)--;
LABEL_134:
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
    return 0;
  if ( !*(_DWORD *)(*((_DWORD *)v1 + 130) - 12) )
    sub_21E94B4((void **)&v53, "Invalid URI: domain not provided.");
      if ( *((_DWORD *)v1 + 103) != v53 )
        EntityInteraction::setInteractText((int *)v1 + 103, &v53);
    v4 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) == &dword_28898C0 )
    v5 = (unsigned int *)(v53 - 4);
  v7 = *((_DWORD *)v1 + 132);
  v8 = (RakWebSocketClient *)((char *)v1 + 528);
  if ( !*(_DWORD *)(v7 - 12) )
    sub_21E8190((void **)v1 + 132, "/", (_BYTE *)1);
    v7 = *(_DWORD *)v8;
  if ( *(_DWORD *)(v7 - 4) <= -1 )
    v9 = v7;
  else
    sub_21E8010((const void **)v1 + 132);
    if ( *(_DWORD *)(*(_DWORD *)v8 - 4) < 0 )
      v9 = *(_DWORD *)v8;
    else
      sub_21E8010((const void **)v1 + 132);
  v10 = *(_DWORD *)(v9 - 12) + v9;
  v11 = (v10 - v7) >> 2;
  if ( v11 < 1 )
LABEL_49:
    v18 = v10 - v7;
    if ( v10 - v7 == 1 )
      v14 = (_BYTE *)v7;
      if ( v18 == 2 )
      {
        v14 = (_BYTE *)v7;
      }
      else
        if ( v18 != 3 )
        {
          v14 = (_BYTE *)(*(_DWORD *)(v9 - 12) + v9);
          goto LABEL_62;
        }
        if ( *(_BYTE *)v7 == 35 )
        v14 = (_BYTE *)(v7 + 1);
      if ( *v14 == 35 )
        goto LABEL_62;
      ++v14;
    if ( *v14 != 35 )
      v14 = (_BYTE *)(*(_DWORD *)(v9 - 12) + v9);
    v12 = v11 + 1;
    while ( 1 )
      v13 = *(_BYTE *)v7;
      v15 = v13 == 35;
      if ( v13 != 35 )
        v15 = *(_BYTE *)(v7 + 1) == 35;
      if ( v15 )
        break;
      v14 = (_BYTE *)(v7 + 2);
      v16 = *(_BYTE *)(v7 + 2);
      v17 = v16 == 35;
      if ( v16 != 35 )
        v14 = (_BYTE *)(v7 + 3);
        v17 = *(_BYTE *)(v7 + 3) == 35;
      if ( v17 )
      --v12;
      v7 += 4;
      if ( v12 <= 1 )
        goto LABEL_49;
LABEL_62:
  if ( *(_DWORD *)(v9 - 4) >= 0 )
    v9 = *(_DWORD *)v8;
  if ( v14 != (_BYTE *)(v9 + *(_DWORD *)(v9 - 12)) )
    sub_21E94B4((void **)&v52, "Invalid URI: fragments aren't allowed in websocket URIs.");
      if ( *((_DWORD *)v1 + 103) != v52 )
        EntityInteraction::setInteractText((int *)v1 + 103, &v52);
    v4 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) == &dword_28898C0 )
    v5 = (unsigned int *)(v52 - 4);
  v19 = (RakWebSocketClient *)((char *)v1 + 520);
  v20 = *((_DWORD *)v1 + 130);
  if ( *(_DWORD *)(v20 - 4) <= -1 )
    v21 = *((_DWORD *)v1 + 130);
    sub_21E8010((const void **)v1 + 130);
    v20 = *(_DWORD *)v19;
    if ( *(_DWORD *)(*(_DWORD *)v19 - 4) < 0 )
      v21 = *(_DWORD *)v19;
      sub_21E8010((const void **)v1 + 130);
  v22 = v21 + *(_DWORD *)(v21 - 12);
  v23 = (v22 - v20) >> 2;
  if ( v23 < 1 )
LABEL_88:
    v30 = v22 - v20;
    if ( v22 - v20 == 1 )
      v26 = (_BYTE *)v20;
      if ( v30 == 2 )
        v26 = (_BYTE *)v20;
        if ( v30 != 3 )
          v26 = (_BYTE *)v22;
          goto LABEL_101;
        if ( *(_BYTE *)v20 == 58 )
        v26 = (_BYTE *)(v20 + 1);
      if ( *v26 == 58 )
        goto LABEL_101;
      ++v26;
    if ( *v26 != 58 )
      v26 = (_BYTE *)v22;
    v24 = v23 + 1;
      v25 = *(_BYTE *)v20;
      v27 = v25 == 58;
      if ( v25 != 58 )
        v27 = *(_BYTE *)(v20 + 1) == 58;
      if ( v27 )
      v26 = (_BYTE *)(v20 + 2);
      v28 = *(_BYTE *)(v20 + 2);
      v29 = v28 == 58;
      if ( v28 != 58 )
        v26 = (_BYTE *)(v20 + 3);
        v29 = *(_BYTE *)(v20 + 3) == 58;
      if ( v29 )
      --v24;
      v20 += 4;
      if ( v24 <= 1 )
        goto LABEL_88;
LABEL_101:
  EntityInteraction::setInteractText((int *)v1 + 131, (int *)v1 + 130);
  v31 = *((_DWORD *)v1 + 130);
  if ( *(_DWORD *)(v31 - 4) >= 0 )
    v31 = *(_DWORD *)v19;
  if ( v26 == (_BYTE *)(*(_DWORD *)(v31 - 12) + v31) )
    if ( *((_BYTE *)v1 + 534) )
      v41 = 443;
      v41 = 80;
    if ( *(_DWORD *)(v31 - 4) > -1 )
      v31 = *(_DWORD *)v19;
    v32 = (unsigned int)&v26[-v31];
    sub_21E9040((void **)&v51, (int *)v1 + 130, 0, v32);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v1 + 131,
      &v51);
    v33 = v32 + 1;
    v34 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v51 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    v35 = *(_DWORD *)v19;
    v36 = *(_DWORD *)(*(_DWORD *)v19 - 12);
    if ( v36 <= v33 )
      sub_21E94B4((void **)&v50, "Invalid URI: expected port number but not provided.");
      if ( *((_DWORD *)v1 + 153) != 1 )
        if ( *((_DWORD *)v1 + 103) != v50 )
          EntityInteraction::setInteractText((int *)v1 + 103, &v50);
        *((_BYTE *)v1 + 418) = 1;
        RakWebSocketClient::_close((int)v1, 1002);
      v4 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) == &dword_28898C0 )
        return 0;
      v5 = (unsigned int *)(v50 - 4);
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
        goto LABEL_134;
      goto LABEL_133;
    v49 = -1;
    v37 = *(_DWORD *)(v35 - 12);
    if ( v37 < v33 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v33, v37);
    v38 = (unsigned int *)sub_21E9040((void **)&v48, (int *)v1 + 130, v33, v36 - v33);
    v39 = Util::toInt(v38, &v49, 0, 0xFFFF);
    v40 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v48 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
    if ( v39 )
      sub_21E94B4((void **)&v47, "Invalid URI: specified port number is not valid.");
        if ( *((_DWORD *)v1 + 103) != v47 )
          EntityInteraction::setInteractText((int *)v1 + 103, &v47);
      v4 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) == &dword_28898C0 )
      v5 = (unsigned int *)(v47 - 4);
    v41 = v49;
  *((_WORD *)v1 + 266) = v41;
  return 1;
}


void __fastcall RakWebSocketClient::_splitWebSocketURI(int a1, int *a2, const void **a3, const void **a4, const void **a5)
{
  RakWebSocketClient::_splitWebSocketURI(a1, a2, a3, a4, a5);
}


void __fastcall RakWebSocketClient::_createWebSocketKey(RakWebSocketClient *this)
{
  RakWebSocketClient::_createWebSocketKey(this);
}
