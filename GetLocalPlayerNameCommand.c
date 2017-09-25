

void __fastcall GetLocalPlayerNameCommand::setup(GetLocalPlayerNameCommand *this, CommandRegistry *a2)
{
  GetLocalPlayerNameCommand *v2; // r5@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  int v5; // r2@3
  signed int v6; // r1@5
  __int64 v7; // [sp+8h] [bp-28h]@2
  int v8; // [sp+14h] [bp-1Ch]@1

  v2 = this;
  sub_119C884((void **)&v8, "getlocalplayername");
  CommandRegistry::registerCommand((int)v2, (const void **)&v8, "commands.getlocalplayername.description", 0, 2, 0);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v5 = v8 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v6 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v6 - 1;
      }
      while ( __strex(v6 - 1, (unsigned int *)v3) );
    }
    else
      v6 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  CommandVersion::CommandVersion((CommandVersion *)&v7, 1, v3);
  j__ZN15CommandRegistry16registerOverloadI25GetLocalPlayerNameCommandJEEEvPKc14CommandVersionDpRKT0_(
    (int)v2,
    "getlocalplayername",
    v7);
}


void __fastcall GetLocalPlayerNameCommand::~GetLocalPlayerNameCommand(GetLocalPlayerNameCommand *this)
{
  GetLocalPlayerNameCommand::~GetLocalPlayerNameCommand(this);
}


void __fastcall GetLocalPlayerNameCommand::execute(GetLocalPlayerNameCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r4@1
  int v4; // r0@1
  int *v5; // r0@1
  void *v6; // r0@1
  void *v7; // r4@2
  void *v8; // r6@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  int *v11; // r0@12
  void *v12; // r0@17
  unsigned int *v13; // r2@19
  signed int v14; // r1@21
  unsigned int *v15; // r2@23
  signed int v16; // r1@25
  __int64 v17; // [sp+0h] [bp-38h]@2
  int v18; // [sp+8h] [bp-30h]@2
  int v19; // [sp+Ch] [bp-2Ch]@1
  int v20; // [sp+10h] [bp-28h]@1

  v3 = a3;
  v4 = MinecraftGame::getPrimaryLocalPlayer(ClientCommand::mGame);
  v5 = (int *)(*(int (**)(void))(*(_DWORD *)v4 + 188))();
  sub_119C854(&v20, v5);
  sub_119C854(&v19, &v20);
  CommandOutput::set<std::string>((int)v3, "localplayername", &v19);
  v6 = (void *)(v19 - 12);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v17 = 0LL;
  v18 = 0;
  CommandOutput::success((int)v3, &v20, (unsigned __int64 *)&v17);
  v8 = (void *)HIDWORD(v17);
  v7 = (void *)v17;
  if ( (_DWORD)v17 != HIDWORD(v17) )
    do
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v11);
      }
      v7 = (char *)v7 + 8;
    while ( v7 != v8 );
    v7 = (void *)v17;
  if ( v7 )
    operator delete(v7);
  v12 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
}


_DWORD *__fastcall GetLocalPlayerNameCommand::GetLocalPlayerNameCommand(Command *a1)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Command::Command(a1);
  *result = &off_26DFA74;
  return result;
}


void __fastcall GetLocalPlayerNameCommand::execute(GetLocalPlayerNameCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  GetLocalPlayerNameCommand::execute(this, a2, a3);
}


void __fastcall GetLocalPlayerNameCommand::setup(GetLocalPlayerNameCommand *this, CommandRegistry *a2)
{
  GetLocalPlayerNameCommand::setup(this, a2);
}


void __fastcall GetLocalPlayerNameCommand::~GetLocalPlayerNameCommand(GetLocalPlayerNameCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)Command::~Command(this);
  j_j_j__ZdlPv_4(v1);
}
