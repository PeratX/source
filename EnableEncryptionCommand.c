

void __fastcall EnableEncryptionCommand::~EnableEncryptionCommand(EnableEncryptionCommand *this)
{
  EnableEncryptionCommand::~EnableEncryptionCommand(this);
}


int __fastcall EnableEncryptionCommand::EnableEncryptionCommand(Command *a1)
{
  int result; // r0@1

  result = Command::Command(a1);
  *(_DWORD *)result = &off_26EB2F0;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  *(_DWORD *)(result + 24) = &unk_28898CC;
  return result;
}


void __fastcall EnableEncryptionCommand::execute(EnableEncryptionCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  EnableEncryptionCommand::execute(this, a2, a3);
}


EnableEncryptionCommand *__fastcall EnableEncryptionCommand::~EnableEncryptionCommand(EnableEncryptionCommand *this)
{
  EnableEncryptionCommand *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26EB2F0;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  Command::~Command(v1);
  return v1;
}


void *__fastcall EnableEncryptionCommand::setup(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r9@1
  __int64 v4; // r2@1
  void *v5; // r0@1
  char v6; // r0@2
  char v7; // r0@5
  int v8; // r0@8
  void *v9; // r0@8
  void *v10; // r0@9
  void *result; // r0@10
  int v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  char v18; // [sp+1Ch] [bp-84h]@8
  int v19; // [sp+28h] [bp-78h]@8
  char v20; // [sp+44h] [bp-5Ch]@5
  int v21; // [sp+50h] [bp-50h]@9
  __int64 v22; // [sp+6Ch] [bp-34h]@2
  int v23; // [sp+78h] [bp-28h]@1
  unsigned __int16 v24; // [sp+7Ch] [bp-24h]@5
  unsigned __int16 v25; // [sp+80h] [bp-20h]@8

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v23, "enableencryption");
  CommandRegistry::registerCommand(v3, (const void **)&v23, "commands.enableencryption.description", 0, 2, 0);
  v5 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v12 = v23 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v13 = __ldrex((unsigned int *)v4);
        HIDWORD(v4) = v13 - 1;
      }
      while ( __strex(v13 - 1, (unsigned int *)v4) );
    }
    else
      v13 = *(_DWORD *)v4;
      HIDWORD(v4) = *(_DWORD *)v4 - 1;
      *(_DWORD *)v4 = HIDWORD(v4);
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  LODWORD(v4) = 0x7FFFFFFF;
  CommandVersion::CommandVersion((CommandVersion *)&v22, 1, v4);
  v6 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
  __dmb();
  if ( !(v6 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
    type_id<CommandRegistry,std::string>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j___cxa_guard_release(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
  v24 = type_id<CommandRegistry,std::string>(void)::id[0];
  CommandParameterData::CommandParameterData(
    (int)&v20,
    &v24,
    (unsigned int)CommandRegistry::parse<std::string>,
    "publicKey",
    0,
    20,
    -1);
  v7 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
  if ( !(v7 & 1)
  v25 = type_id<CommandRegistry,std::string>(void)::id[0];
  v8 = CommandParameterData::CommandParameterData(
         (int)&v18,
         &v25,
         (unsigned int)CommandRegistry::parse<std::string>,
         "salt",
         0,
         24,
         -1);
  CommandRegistry::registerOverload<EnableEncryptionCommand,CommandParameterData,CommandParameterData>(
    v3,
    "enableencryption",
    v22,
    v8);
  v9 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v21 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  result = &EnableEncryptionCommand::mApp;
  EnableEncryptionCommand::mApp = v2;
  return result;
}


void __fastcall EnableEncryptionCommand::execute(EnableEncryptionCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  EnableEncryptionCommand *v3; // r5@1
  const CommandOrigin *v4; // r7@1
  CommandOutput *v5; // r4@1
  int v6; // r6@1
  int *v7; // r0@1
  void *v8; // r0@2
  void *v9; // r4@3
  void *v10; // r6@3
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  int *v13; // r0@13
  void *v14; // r6@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  int *v17; // r0@26
  char *v18; // r0@31
  unsigned int *v19; // r2@33
  signed int v20; // r1@35
  unsigned int *v21; // r2@37
  signed int v22; // r1@39
  __int64 v23; // [sp+4h] [bp-44h]@3
  int v24; // [sp+Ch] [bp-3Ch]@3
  int v25; // [sp+10h] [bp-38h]@2
  __int64 v26; // [sp+14h] [bp-34h]@16
  int v27; // [sp+1Ch] [bp-2Ch]@16
  char *v28; // [sp+20h] [bp-28h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v28 = (char *)&unk_28898CC;
  v6 = (*(int (**)(void))(*EnableEncryptionCommand::mApp + 12))();
  v7 = (int *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 8))(v4);
  if ( Automation::AutomationClient::dhKeyExchange(v6, v7, (int *)v3 + 5, (int *)v3 + 6, (int *)&v28) )
  {
    sub_21E8AF4(&v25, (int *)&v28);
    CommandOutput::set<std::string>((int)v5, "publicKey", &v25);
    v8 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
    {
      v21 = (unsigned int *)(v25 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
    v23 = 0LL;
    v24 = 0;
    CommandOutput::success((int)v5, (int *)&v28, (unsigned __int64 *)&v23);
    v10 = (void *)HIDWORD(v23);
    v9 = (void *)v23;
    if ( (_DWORD)v23 != HIDWORD(v23) )
      do
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
        v9 = (char *)v9 + 8;
      while ( v9 != v10 );
      v9 = (void *)v23;
  }
  else
    v26 = 0LL;
    v27 = 0;
    CommandOutput::error(v5, (int *)&v28, (unsigned __int64 *)&v26);
    v14 = (void *)HIDWORD(v26);
    v9 = (void *)v26;
    if ( (_DWORD)v26 != HIDWORD(v26) )
        v17 = (int *)(*(_DWORD *)v9 - 12);
        if ( v17 != &dword_28898C0 )
          v15 = (unsigned int *)(*(_DWORD *)v9 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
      while ( v9 != v14 );
      v9 = (void *)v26;
  if ( v9 )
    operator delete(v9);
  v18 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
      __dmb();
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
}


void __fastcall EnableEncryptionCommand::~EnableEncryptionCommand(EnableEncryptionCommand *this)
{
  EnableEncryptionCommand *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26EB2F0;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  Command::~Command(v1);
  operator delete((void *)v1);
}
