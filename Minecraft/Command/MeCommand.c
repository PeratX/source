

void __fastcall MeCommand::setup(MeCommand *this, CommandRegistry *a2)
{
  MeCommand *v2; // r5@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  char v5; // r0@2
  int v6; // r0@5
  void *v7; // r0@5
  int v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  char v12; // [sp+1Ch] [bp-4Ch]@5
  int v13; // [sp+28h] [bp-40h]@5
  __int64 v14; // [sp+44h] [bp-24h]@2
  int v15; // [sp+50h] [bp-18h]@1
  __int16 v16; // [sp+54h] [bp-14h]@5

  v2 = this;
  sub_21E94B4((void **)&v15, "me");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v15, "commands.me.description", 0, 16, 0);
  v4 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v8 = v15 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v9 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v9 - 1;
      }
      while ( __strex(v9 - 1, (unsigned int *)v3) );
    }
    else
      v9 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v14, 1, v3);
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandMessage>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandMessage>(void)::id) )
    type_id<CommandRegistry,CommandMessage>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandMessage>(void)::id);
  v16 = type_id<CommandRegistry,CommandMessage>(void)::id;
  v6 = j_CommandParameterData::CommandParameterData(
         (int)&v12,
         &v16,
         (unsigned int)CommandRegistry::parse<CommandMessage>,
         "message",
         0,
         20,
         -1);
  j_CommandRegistry::registerOverload<MeCommand,CommandParameterData>((int)v2, "me", v14, v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall MeCommand::execute(MeCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  MeCommand::execute(this, a2, a3);
}


void __fastcall MeCommand::~MeCommand(MeCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A110;
  j_CommandMessage::~CommandMessage((MeCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall MeCommand::~MeCommand(MeCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A110;
  j_CommandMessage::~CommandMessage((MeCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall MeCommand::setup(MeCommand *this, CommandRegistry *a2)
{
  MeCommand::setup(this, a2);
}


void __fastcall MeCommand::execute(MeCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CommandOutput *v3; // r5@1
  const CommandOrigin *v4; // r4@1
  MeCommand *v5; // r6@1
  int v6; // r0@3
  int v7; // r6@4
  Level *v8; // r0@4
  int *v9; // r0@4
  const void **v10; // r0@5
  const void **v11; // r0@5
  char *v12; // r0@5
  char *v13; // r0@6
  void *v14; // r0@7
  Level *v15; // r0@8
  int v16; // r0@8
  Level *v17; // r0@8
  int v18; // r0@8
  char *v19; // r0@8
  char *v20; // r0@9
  void *v21; // r0@10
  void *v22; // r0@11
  unsigned int *v23; // r2@13
  signed int v24; // r1@15
  unsigned int *v25; // r2@17
  signed int v26; // r1@19
  unsigned int *v27; // r2@21
  signed int v28; // r1@23
  unsigned int *v29; // r2@25
  signed int v30; // r1@27
  unsigned int *v31; // r2@29
  signed int v32; // r1@31
  unsigned int *v33; // r2@33
  signed int v34; // r1@35
  unsigned int *v35; // r2@37
  signed int v36; // r1@39
  int v37; // [sp+10h] [bp-68h]@7
  char v38; // [sp+14h] [bp-64h]@7
  char *v39; // [sp+40h] [bp-38h]@5
  char *v40; // [sp+44h] [bp-34h]@5
  char *v41; // [sp+48h] [bp-30h]@5
  char *v42; // [sp+4Ch] [bp-2Ch]@2
  int v43; // [sp+50h] [bp-28h]@2
  int v44; // [sp+54h] [bp-24h]@2
  unsigned __int64 v45; // [sp+58h] [bp-20h]@7
  int v46; // [sp+60h] [bp-18h]@7

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( j_MessagingCommand::checkChatPermissions(this, a2, a3) == 1 )
  {
    j_CommandMessage::getMessage((CommandMessage *)&v44, (MeCommand *)((char *)v5 + 20), v4);
    (*(void (__fastcall **)(int *, const CommandOrigin *))(*(_DWORD *)v4 + 12))(&v43, v4);
    v42 = (char *)&unk_28898CC;
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 32))(v4) )
    {
      v6 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 32))(v4);
      if ( (*(int (**)(void))(*(_DWORD *)v6 + 488))() == 319 )
      {
        v7 = (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 32))(v4);
        v8 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 24))(v4);
        v9 = (int *)j_Level::getPlayerXUID(v8, (const mce::UUID *)(v7 + 4560));
        EntityInteraction::setInteractText((int *)&v42, v9);
      }
    }
    v39 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v39, *(_DWORD *)(v43 - 12) + 2);
    sub_21E7408((const void **)&v39, "* ", 2u);
    sub_21E72F0((const void **)&v39, (const void **)&v43);
    v10 = sub_21E7408((const void **)&v39, " ", 1u);
    v40 = (char *)*v10;
    *v10 = &unk_28898CC;
    v11 = sub_21E72F0((const void **)&v40, (const void **)&v44);
    v41 = (char *)*v11;
    *v11 = &unk_28898CC;
    v12 = v40 - 12;
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v40 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = v39 - 12;
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v39 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    sub_21E94B4((void **)&v37, (const char *)&unk_257BC67);
    v45 = 0LL;
    v46 = 0;
    j_TextPacket::TextPacket((int)&v38, 1, &v37, (int *)&v41, &v45, 1, (int *)&v42);
    v14 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v37 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v4 + 24))(v4);
    v16 = j_Level::getPacketSender(v15);
    (*(void (**)(void))(*(_DWORD *)v16 + 20))();
    j_CommandOutput::success(v3);
    v17 = (Level *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 24))(v4);
    v18 = j_Level::getEventing(v17);
    j_MinecraftEventing::fireEventPlayerMessageMe(v18, (const char **)&v43, (const char **)&v44);
    j_TextPacket::~TextPacket((TextPacket *)&v38);
    v19 = v41 - 12;
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v41 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v20 = v42 - 12;
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v42 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v43 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v44 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
  }
}


MessagingCommand *__fastcall MeCommand::MeCommand(MessagingCommand *a1)
{
  MessagingCommand *v1; // r4@1

  v1 = a1;
  j_MessagingCommand::MessagingCommand(a1, 1, 0);
  *(_DWORD *)v1 = &off_271A110;
  j_CommandMessage::CommandMessage((MessagingCommand *)((char *)v1 + 20));
  return v1;
}


void __fastcall MeCommand::~MeCommand(MeCommand *this)
{
  MeCommand::~MeCommand(this);
}
