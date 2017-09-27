

int __fastcall GetEduClientInfoCommand::execute(GetEduClientInfoCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r4@1
  int v4; // r5@1
  void *v5; // r0@2
  void *v6; // r0@3
  char v7; // r0@4
  void *v8; // r0@4
  MinecraftEventing *v9; // r0@6
  int *v10; // r0@6
  void *v11; // r0@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  int v21; // [sp+4h] [bp-24h]@6
  int v22; // [sp+8h] [bp-20h]@4
  int v23; // [sp+Ch] [bp-1Ch]@3
  int v24; // [sp+10h] [bp-18h]@2

  v3 = a3;
  v4 = MinecraftGame::getPrimaryLocalPlayer(ClientCommand::mGame);
  if ( GetEduClientInfoCommand::mAdIdentity )
  {
    sub_119C854(&v24, (int *)(GetEduClientInfoCommand::mAdIdentity + 60));
    CommandOutput::set<std::string>((int)v3, "tenantId", &v24);
    v5 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
    {
      v17 = (unsigned int *)(v24 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    sub_119C854(&v23, (int *)(GetEduClientInfoCommand::mAdIdentity + 64));
    CommandOutput::set<std::string>((int)v3, "userId", &v23);
    v6 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v23 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = (*(int (**)(void))(*(_DWORD *)ClientCommand::mGame + 136))();
  CommandOutput::set<bool>((int)v3, "isEdu", v7);
  CommandOutput::set<bool>((int)v3, "isHost", GetEduClientInfoCommand::mIsHost);
  mce::UUID::asString((mce::UUID *)&v22);
  CommandOutput::set<std::string>((int)v3, "clientuuid", &v22);
  v8 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) )
    v9 = (MinecraftEventing *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
    v10 = (int *)MinecraftEventing::getPlayerSessionId(v9);
    sub_119C854(&v21, v10);
  else
    sub_119C884((void **)&v21, (const char *)&unk_257BC67);
  CommandOutput::set<std::string>((int)v3, "playersessionuuid", &v21);
  v11 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  CommandOutput::set<int>((int)v3, "companionProtocolVersion", 3);
  return CommandOutput::success(v3);
}


_DWORD *__fastcall GetEduClientInfoCommand::setup(GetEduClientInfoCommand *this, CommandRegistry *a2, const ActiveDirectoryIdentity *a3, bool a4)
{
  CommandRegistry *v4; // r5@1
  char v5; // r7@1
  GetEduClientInfoCommand *v6; // r6@1
  __int64 v7; // r2@1
  void *v8; // r0@1
  _DWORD *result; // r0@2
  int v10; // r2@3
  signed int v11; // r1@5
  __int64 v12; // [sp+Ch] [bp-2Ch]@2
  int v13; // [sp+18h] [bp-20h]@1

  v4 = a2;
  v5 = (char)a3;
  v6 = this;
  sub_119C884((void **)&v13, "geteduclientinfo");
  CommandRegistry::registerCommand((int)v6, (const void **)&v13, "commands.geteduclientinfo.description", 0, 2, 0);
  v8 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v10 = v13 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v11 = __ldrex((unsigned int *)v7);
        HIDWORD(v7) = v11 - 1;
      }
      while ( __strex(v11 - 1, (unsigned int *)v7) );
    }
    else
      v11 = *(_DWORD *)v7;
      HIDWORD(v7) = *(_DWORD *)v7 - 1;
      *(_DWORD *)v7 = HIDWORD(v7);
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  LODWORD(v7) = 0x7FFFFFFF;
  CommandVersion::CommandVersion((CommandVersion *)&v12, 1, v7);
  j__ZN15CommandRegistry16registerOverloadI23GetEduClientInfoCommandJEEEvPKc14CommandVersionDpRKT0_(
    (int)v6,
    "geteduclientinfo",
    v12);
  result = &GetEduClientInfoCommand::mIsHost;
  GetEduClientInfoCommand::mAdIdentity = v4;
  LOBYTE(GetEduClientInfoCommand::mIsHost) = v5;
  return result;
}


_DWORD *__fastcall GetEduClientInfoCommand::GetEduClientInfoCommand(Command *a1)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Command::Command(a1);
  *result = &off_26DFA60;
  return result;
}


void __fastcall GetEduClientInfoCommand::~GetEduClientInfoCommand(GetEduClientInfoCommand *this)
{
  GetEduClientInfoCommand::~GetEduClientInfoCommand(this);
}


void __fastcall GetEduClientInfoCommand::~GetEduClientInfoCommand(GetEduClientInfoCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)Command::~Command(this);
  j_j_j__ZdlPv_4(v1);
}
