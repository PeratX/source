

int __fastcall CommandOutputSender::CommandOutputSender(int result, int a2)
{
  *(_DWORD *)result = &off_26EB1B8;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


Json::Value *__fastcall CommandOutputSender::_sendOverWebsocket(CommandOutputSender *this, const CommandOrigin *a2, const CommandOutput *a3)
{
  CommandOutputSender *v3; // r6@1
  const CommandOrigin *v4; // r5@1
  CommandOutput *v5; // r4@1
  int v6; // r0@2
  const Json::Value *v7; // r0@2
  char *v8; // r0@3
  signed int v9; // r2@3
  CommandOutputMessage *v10; // r6@3
  CommandOutputMessage *v11; // r11@3
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  int *v14; // r4@17
  unsigned __int64 *v15; // r0@17
  void *v16; // r0@17
  void *v17; // r4@18
  void *v18; // r8@18
  unsigned int *v19; // r2@20
  signed int v20; // r1@22
  int *v21; // r0@28
  int v22; // r4@37
  Automation::AutomationClient *v23; // r4@38
  int *v24; // r0@38
  void *v25; // r0@38
  char *v26; // r0@39
  unsigned int *v28; // r2@41
  signed int v29; // r1@43
  unsigned int *v30; // r2@45
  signed int v31; // r1@47
  CommandOutputSender *v32; // [sp+4h] [bp-6Ch]@3
  int v33; // [sp+Ch] [bp-64h]@38
  char v34; // [sp+10h] [bp-60h]@37
  void *v35; // [sp+24h] [bp-4Ch]@17
  void *v36; // [sp+28h] [bp-48h]@18
  int v37; // [sp+30h] [bp-40h]@7
  _DWORD *v38; // [sp+34h] [bp-3Ch]@3
  char v39; // [sp+38h] [bp-38h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  Json::Value::Value(&v39, 0);
  if ( CommandOutput::wantsData(v5) == 1 )
  {
    v6 = CommandOutput::getData(v5);
    v7 = (const Json::Value *)PropertyBag::toJsonValue((PropertyBag *)(v6 + 8));
    Json::Value::operator=((int)&v39, v7);
  }
  v8 = CommandOutput::getMessages(v5);
  v32 = v3;
  v38 = &unk_28898CC;
  v9 = 0;
  v11 = (CommandOutputMessage *)(*(_QWORD *)v8 >> 32);
  v10 = (CommandOutputMessage *)*(_QWORD *)v8;
  if ( !dword_28898C0 )
    v9 = 1;
  while ( v10 != v11 )
    if ( !(v9 & 1) )
      sub_21E7408((const void **)&v38, "\n", 1u);
    v14 = (int *)CommandOutputMessage::getMessageId(v10);
    v15 = (unsigned __int64 *)CommandOutputMessage::getParams(v10);
    CommandOutputSender::translate((int)&v35, v15);
    I18n::get(&v37, v14, (unsigned __int64 *)&v35);
    sub_21E72F0((const void **)&v38, (const void **)&v37);
    v16 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v37 - 4);
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
        j_j_j_j__ZdlPv_9(v16);
    }
    v17 = v36;
    v18 = v35;
    if ( v35 != v36 )
      do
        v21 = (int *)(*(_DWORD *)v18 - 12);
        if ( v21 != &dword_28898C0 )
        {
          v19 = (unsigned int *)(*(_DWORD *)v18 - 4);
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
            j_j_j_j__ZdlPv_9(v21);
        }
        v18 = (char *)v18 + 4;
      while ( v18 != v17 );
      v18 = v35;
    if ( v18 )
      operator delete(v18);
    v9 = 0;
    v10 = (CommandOutputMessage *)((char *)v10 + 20);
    if ( !*(v38 - 3) )
      v9 = 1;
  if ( !v9 )
    v22 = Json::Value::operator[]((Json::Value *)&v39, "statusMessage");
    Json::Value::Value((int)&v34, (const char **)&v38);
    Json::Value::operator=(v22, (const Json::Value *)&v34);
    Json::Value::~Value((Json::Value *)&v34);
  v23 = (Automation::AutomationClient *)*((_DWORD *)v32 + 1);
  v24 = (int *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 8))(v4);
  Automation::Response::slashCommand(&v33, v24, (const Json::Value *)&v39);
  Automation::AutomationClient::send(v23, (const Automation::Response *)&v33);
  v25 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
      __dmb();
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (char *)(v38 - 3);
  if ( v38 - 3 != &dword_28898C0 )
    v30 = v38 - 1;
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  return Json::Value::~Value((Json::Value *)&v39);
}


void __fastcall CommandOutputSender::translate(int a1, unsigned __int64 *a2)
{
  CommandOutputSender::translate(a1, a2);
}


Json::Value *__fastcall CommandOutputSender::send(CommandOutputSender *this, const CommandOrigin *a2, const CommandOutput *a3)
{
  const CommandOrigin *v3; // r5@1
  CommandOutputSender *v4; // r4@1
  CommandOutput *v5; // r11@1
  Json::Value *result; // r0@1
  int v7; // r7@2 OVERLAPPED
  int v8; // r8@2 OVERLAPPED
  char *v9; // r4@3
  int v10; // r10@3
  char v11; // r1@5
  char *v12; // r0@7
  void *v13; // r0@7
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  CommandOutputSender *v16; // [sp+4h] [bp-34h]@2
  int v17; // [sp+8h] [bp-30h]@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  result = (Json::Value *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 72))(a2);
  if ( result == (Json::Value *)6 )
  {
    v16 = v4;
    for ( *(_QWORD *)&v7 = *(_QWORD *)CommandOutput::getMessages(v5); v7 != v8; v7 += 20 )
    {
      CommandOutputMessage::getUserMessage((CommandOutputMessage *)&v17, v7);
      v9 = sub_21CBF38((char *)&unk_288875C, v17, *(_DWORD *)(v17 - 12));
      v10 = *(_DWORD *)&v9[*(_DWORD *)(*(_DWORD *)v9 - 12) + 124];
      if ( !v10 )
        sub_21E5824();
      if ( *(_BYTE *)(v10 + 28) )
      {
        v11 = *(_BYTE *)(v10 + 39);
      }
      else
        sub_21B50F0(v10);
        v11 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v10 + 24))(v10, 10);
      v12 = sub_21CBC4C(v9, v11);
      sub_21CB78C(v12);
      v13 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v17 - 4);
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
    result = CommandOutputSender::_sendOverWebsocket(v16, v3, v5);
  }
  return result;
}


void __fastcall CommandOutputSender::sendToAdmins(int a1, int a2, CommandOutput *a3, int a4)
{
  unsigned int v4; // r11@0
  int v5; // r6@1
  int v6; // r9@1
  CommandOutput *v7; // r7@1
  Level *v8; // r5@2
  unsigned __int64 *v9; // r0@3
  Entity *v10; // r0@5
  unsigned __int64 *v11; // r0@7
  CommandOutputMessage *v12; // r6@8
  __int64 v13; // kr00_8@8
  _DWORD *v14; // r0@10
  void *v15; // r0@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  _DWORD *v18; // [sp+4h] [bp-44h]@10
  int (__fastcall *v19)(void **, void **, int); // [sp+Ch] [bp-3Ch]@10
  signed int (__fastcall *v20)(int *, Entity *); // [sp+10h] [bp-38h]@10
  int v21; // [sp+14h] [bp-34h]@8
  int v22; // [sp+18h] [bp-30h]@2
  signed int v23; // [sp+1Ch] [bp-2Ch]@2

  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 24))(a2) )
  {
    v8 = (Level *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5);
    v22 = -1;
    v23 = -1;
    switch ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 72))(v5) )
    {
      case 1:
      case 2:
        v9 = (unsigned __int64 *)Level::getGameRules(v8);
        if ( GameRules::getBool(v9, (int **)&GameRules::COMMAND_BLOCK_OUTPUT) )
          goto LABEL_8;
        break;
      case 0:
        v10 = (Entity *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 32))(v5);
        if ( v10 )
          *(_QWORD *)&v22 = *(_QWORD *)Entity::getUniqueID(v10);
        goto LABEL_7;
      case 8:
      case 10:
LABEL_7:
        v11 = (unsigned __int64 *)Level::getGameRules(v8);
        if ( GameRules::getBool(v11, (int **)&GameRules::SEND_COMMAND_FEEDBACK) == 1 )
        {
LABEL_8:
          (*(void (__fastcall **)(int *, int))(*(_DWORD *)v5 + 12))(&v21, v5);
          v13 = *(_QWORD *)CommandOutput::getMessages(v7);
          v12 = (CommandOutputMessage *)v13;
          if ( (_DWORD)v13 != HIDWORD(v13) )
          {
            do
            {
              if ( !CommandOutputMessage::getType(v12) )
              {
                v19 = 0;
                v14 = operator new(0x10u);
                v4 = v4 & 0xFFFFFF00 | v6;
                *v14 = v12;
                v14[1] = &v21;
                v14[2] = &v22;
                v14[3] = v4;
                v18 = v14;
                v20 = sub_15A994C;
                v19 = sub_15A9E90;
                Level::forEachPlayer((int)v8, (int)&v18);
                if ( v19 )
                  v19((void **)&v18, (void **)&v18, 3);
              }
              v12 = (CommandOutputMessage *)((char *)v12 + 20);
            }
            while ( (CommandOutputMessage *)HIDWORD(v13) != v12 );
          }
          v15 = (void *)(v21 - 12);
          if ( (int *)(v21 - 12) != &dword_28898C0 )
            v16 = (unsigned int *)(v21 - 4);
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
      default:
        return;
    }
  }
}


void __fastcall CommandOutputSender::translate(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r9@1
  const void **i; // r5@1
  const void **v4; // r7@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  _BYTE *v7; // r0@11
  void *v8; // r0@15
  int v9; // [sp+4h] [bp-34h]@3

  v2 = (unsigned __int64 *)a1;
  std::vector<std::string,std::allocator<std::string>>::vector(a1, a2);
  v4 = (const void **)(*v2 >> 32);
  for ( i = (const void **)*v2; i != v4; ++i )
  {
    v7 = *i;
    if ( *((_DWORD *)*i - 3) )
    {
      if ( *((_DWORD *)v7 - 1) >= 0 )
      {
        sub_21E8010(i);
        v7 = *i;
      }
      if ( *v7 == 37 )
        I18n::get(&v9, (int **)i);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)i,
          &v9);
        v8 = (void *)(v9 - 12);
        if ( (int *)(v9 - 12) != &dword_28898C0 )
        {
          v5 = (unsigned int *)(v9 - 4);
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
            j_j_j_j__ZdlPv_9(v8);
        }
    }
  }
}


void __fastcall CommandOutputSender::sendToAdmins(int a1, int a2, CommandOutput *a3, int a4)
{
  CommandOutputSender::sendToAdmins(a1, a2, a3, a4);
}
