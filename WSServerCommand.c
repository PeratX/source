

void __fastcall WSServerCommand::~WSServerCommand(WSServerCommand *this)
{
  Command *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271A2E8;
  v2 = *((_DWORD *)this + 5);
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
  j_Command::~Command(v1);
  j_operator delete((void *)v1);
}


Command *__fastcall WSServerCommand::~WSServerCommand(WSServerCommand *this)
{
  Command *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271A2E8;
  v2 = *((_DWORD *)this + 5);
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
  j_Command::~Command(v1);
  return v1;
}


void __fastcall WSServerCommand::~WSServerCommand(WSServerCommand *this)
{
  WSServerCommand::~WSServerCommand(this);
}


void __fastcall WSServerCommand::execute(WSServerCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  WSServerCommand::execute(this, a2, a3);
}


void __fastcall WSServerCommand::setup(WSServerCommand *this, CommandRegistry *a2)
{
  WSServerCommand *v2; // r5@1
  void *v3; // r0@1
  __int64 v4; // r2@2
  void *v5; // r0@2
  void *v6; // r0@3
  char v7; // r0@4
  int v8; // r0@7
  void *v9; // r0@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  int v12; // r2@13
  signed int v13; // r1@15
  int v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  char v18; // [sp+1Ch] [bp-5Ch]@7
  int v19; // [sp+28h] [bp-50h]@7
  __int64 v20; // [sp+44h] [bp-34h]@4
  int v21; // [sp+50h] [bp-28h]@2
  int v22; // [sp+58h] [bp-20h]@2
  int v23; // [sp+60h] [bp-18h]@1
  __int16 v24; // [sp+64h] [bp-14h]@7

  v2 = this;
  sub_21E94B4((void **)&v23, "wsserver");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v23, "commands.wsserver.description", 2, 8, 0);
  v3 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v23 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  sub_21E94B4((void **)&v22, "wsserver");
  sub_21E94B4((void **)&v21, "connect");
  j_CommandRegistry::registerAlias((int)v2, (const void **)&v22, &v21);
  v5 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v12 = v21 - 4;
      {
        v13 = __ldrex((unsigned int *)v4);
        HIDWORD(v4) = v13 - 1;
      }
      while ( __strex(v13 - 1, (unsigned int *)v4) );
      v13 = *(_DWORD *)v4;
      HIDWORD(v4) = *(_DWORD *)v4 - 1;
      *(_DWORD *)v4 = HIDWORD(v4);
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v14 = v22 - 4;
        v15 = __ldrex((unsigned int *)v4);
        HIDWORD(v4) = v15 - 1;
      while ( __strex(v15 - 1, (unsigned int *)v4) );
      v15 = *(_DWORD *)v4;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  LODWORD(v4) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v20, 1, v4);
  v7 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandRawText>(void)::id;
  __dmb();
  if ( !(v7 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandRawText>(void)::id) )
    type_id<CommandRegistry,CommandRawText>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandRawText>(void)::id);
  v24 = type_id<CommandRegistry,CommandRawText>(void)::id;
  v8 = j_CommandParameterData::CommandParameterData(
         (int)&v18,
         &v24,
         (unsigned int)CommandRegistry::parse<CommandRawText>,
         "serverUri",
         0,
         20,
         -1);
  j_CommandRegistry::registerOverload<WSServerCommand,CommandParameterData>((int)v2, "wsserver", v20, v8);
  v9 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


int __fastcall WSServerCommand::WSServerCommand(Command *a1)
{
  int result; // r0@1

  result = j_Command::Command(a1);
  *(_DWORD *)result = &off_271A2E8;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  return result;
}


void __fastcall WSServerCommand::setup(WSServerCommand *this, CommandRegistry *a2)
{
  WSServerCommand::setup(this, a2);
}


void __fastcall WSServerCommand::execute(WSServerCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r5@1
  const CommandOrigin *v4; // r4@1
  int *v5; // r1@1
  Level *v6; // r0@2
  int v7; // r0@2
  int v8; // r5@2
  void (__fastcall *v9)(int, int, void ***, int); // r7@2
  int v10; // r6@2
  int v11; // r0@2
  void *v12; // r0@2
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  void *v15; // r4@7
  void *v16; // r6@7
  unsigned int *v17; // r2@9
  signed int v18; // r1@11
  int *v19; // r0@17
  void **v20; // [sp+4h] [bp-4Ch]@2
  int v21; // [sp+8h] [bp-48h]@2
  int v22; // [sp+Ch] [bp-44h]@2
  char v23; // [sp+10h] [bp-40h]@2
  int v24; // [sp+14h] [bp-3Ch]@2
  __int64 v25; // [sp+18h] [bp-38h]@7
  int v26; // [sp+20h] [bp-30h]@7
  int v27; // [sp+28h] [bp-28h]@7

  v3 = a3;
  v4 = a2;
  v5 = (int *)j_CommandRawText::getText((WSServerCommand *)((char *)this + 20));
  if ( *(_DWORD *)(*v5 - 12) )
  {
    v21 = 2;
    v22 = 1;
    v23 = 0;
    v20 = &off_26E9B5C;
    sub_21E8AF4(&v24, v5);
    v6 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 24))(v4);
    v7 = j_Level::getPacketSender(v6);
    v8 = v7;
    v9 = *(void (__fastcall **)(int, int, void ***, int))(*(_DWORD *)v7 + 16);
    v10 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 60))(v4);
    v11 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 64))(v4);
    v9(v8, v10, &v20, v11);
    v12 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) == &dword_28898C0 )
      return;
    v13 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      goto LABEL_29;
    }
LABEL_28:
    v14 = (*v13)--;
LABEL_29:
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
    return;
  }
  sub_21E94B4((void **)&v27, "commands.wsserver.invalid.url");
  v25 = 0LL;
  v26 = 0;
  j_CommandOutput::error(v3, &v27, (unsigned __int64 *)&v25);
  v16 = (void *)HIDWORD(v25);
  v15 = (void *)v25;
  if ( (_DWORD)v25 != HIDWORD(v25) )
    do
      v19 = (int *)(*(_DWORD *)v15 - 12);
      if ( v19 != &dword_28898C0 )
      {
        v17 = (unsigned int *)(*(_DWORD *)v15 - 4);
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
          j_j_j_j__ZdlPv_9(v19);
      }
      v15 = (char *)v15 + 8;
    while ( v15 != v16 );
    v15 = (void *)v25;
  if ( v15 )
    j_operator delete(v15);
  v12 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v27 - 4);
    goto LABEL_28;
}
