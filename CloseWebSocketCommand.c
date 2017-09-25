

unsigned int __fastcall CloseWebSocketCommand::execute(CloseWebSocketCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  Automation::AutomationClient *v3; // r0@1

  v3 = (Automation::AutomationClient *)(*(int (**)(void))(*CloseWebSocketCommand::mApp + 12))();
  return j_j_j__ZN10Automation16AutomationClient10disconnectEv(v3);
}


void __fastcall CloseWebSocketCommand::~CloseWebSocketCommand(CloseWebSocketCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)Command::~Command(this);
  j_j_j__ZdlPv_6(v1);
}


_DWORD *__fastcall CloseWebSocketCommand::CloseWebSocketCommand(Command *a1)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Command::Command(a1);
  *result = &off_26EB2DC;
  return result;
}


void __fastcall CloseWebSocketCommand::~CloseWebSocketCommand(CloseWebSocketCommand *this)
{
  CloseWebSocketCommand::~CloseWebSocketCommand(this);
}


void *__fastcall CloseWebSocketCommand::setup(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  __int64 v4; // r2@1
  void *v5; // r0@1
  void *result; // r0@2
  int v7; // r2@3
  signed int v8; // r1@5
  __int64 v9; // [sp+8h] [bp-28h]@2
  int v10; // [sp+14h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v10, "closewebsocket");
  CommandRegistry::registerCommand(v3, (const void **)&v10, "commands.closewebsocket.description", 0, 2, 0);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v7 = v10 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v8 = __ldrex((unsigned int *)v4);
        HIDWORD(v4) = v8 - 1;
      }
      while ( __strex(v8 - 1, (unsigned int *)v4) );
    }
    else
      v8 = *(_DWORD *)v4;
      HIDWORD(v4) = *(_DWORD *)v4 - 1;
      *(_DWORD *)v4 = HIDWORD(v4);
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  LODWORD(v4) = 0x7FFFFFFF;
  CommandVersion::CommandVersion((CommandVersion *)&v9, 1, v4);
  j__ZN15CommandRegistry16registerOverloadI21CloseWebSocketCommandJEEEvPKc14CommandVersionDpRKT0_(
    v3,
    "closewebsocket",
    v9);
  result = &CloseWebSocketCommand::mApp;
  CloseWebSocketCommand::mApp = v2;
  return result;
}
